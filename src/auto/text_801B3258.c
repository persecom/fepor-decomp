/* Functions from 0x801B3258 to 0x801E4380, found by decomp-toolkit. */
#include "common.h"

typedef struct ParseValue801CB41C { f32 v[8]; } ParseValue801CB41C;
typedef struct String801CB41C { u32 a, b, c; } String801CB41C;

typedef struct Self801CAF94 {
    s32 unk0;
    u8 pad4[0x50];
    s32 unk54;
    u8 pad58[0x14];
    void *unk6C;
    u8 pad70[4];
    s32 unk74;
    s8 unk78;
    s8 unk79;
} Self801CAF94;

void *fn_8000CAF0(void *, s32);
void *fn_801BEB9C(void *arg0, s16 *arg1, s16 *arg2, s16 arg3);

typedef struct ListNode {
    struct ListNode *prev;
    struct ListNode *next;
    void *val;
} ListNode;

typedef struct ListIter {
    ListNode *node;
} ListIter;

typedef struct Arg801C838C {
    u8 pad0[0x30];
    u32 field30;
} Arg801C838C;

typedef struct List {
    s32 size;
} List;

typedef struct UIListObj {
    u8 unk00[0x4E];
    s16 field4E;
    u8 unk50[4];
    s16 field54;
    u8 unk56[0x16];
    u32 count;
    u8 unk70[4];
    void *field74;
} UIListObj;


static inline s32 MsgBoxAddPad(s32 h, s32 pad) {
    return h + pad;
}

void fn_801E00EC(void *arg0, void *arg1);
extern u8 lbl_8032FF08[];
extern u16 lbl_80331D00[];
extern f32 lbl_8036B4A8;
extern f32 lbl_8027D528[3];
extern f32 lbl_8027D534[3];

typedef struct {
    u8 pad[0xC];
    u32 flags;
} Fn801C797CEnt;

struct Unit {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u16 unk26;
    u16 unk28;
    u16 unk2A;
    u16 unk2C;
    u16 unk2E;
    u16 unk30;
    u16 unk32;
    u16 unk34;
    u16 unk36;
    u16 unk38;
    u16 unk3A;
    u16 unk3C;
    u16 unk3E;
    u16 unk40;
    u16 unk42;
    u16 unk44;
    u16 unk46;
    u16 unk48;
    u16 unk4A;
    u16 unk4C;
    u16 unk4E;
    u16 unk50;
    u16 unk52;
    u16 unk54;
    u16 unk56;
    u16 unk58;
    u16 unk5A;
    u16 unk5C;
    u16 unk5E;
    u16 unk60;
    u16 unk62;
    u16 unk64;
    u16 unk66;
};

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    u32 unk28;
    u32 unk2C;
    u32 unk30;
    u32 unk34;
    u32 unk38;
    u32 unk3C;
    u32 unk40;
    u32 unk44;
    u32 unk48;
    u32 unk4C;
    u32 unk50;
    u32 unk54;
    u32 unk58;
    u32 unk5C;
    u32 unk60;
    u32 unk62;
} struct0;


/* Message box: up to 7 text lines, opened/closed through state (0x64/0x6E open, 0xC8/0xD2 close). */
typedef struct MsgBox {
    /* 0x000 */ s16 flags;
    /* 0x002 */ s16 state;
    /* 0x004 */ s16 type;
    /* 0x006 */ u8 unk6[4];
    /* 0x00A */ s16 width;
    /* 0x00C */ s16 height;
    /* 0x00E */ u8 unkE[0x10];
    /* 0x01E */ s16 timer;
    /* 0x020 */ char lines[7][0x41];
    /* 0x1E7 */ s8 numLines;
    /* 0x1E8 */ u8 unk1E8[2];
} MsgBox;

static inline s32 MsgBoxPadHeight(s32 h, s32 pad) {
    return h + pad;
}

void fn_801B3258(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void *fn_800C4638(s32, void *, s32);
    extern u8 lbl_802979C8[];
    extern u8 lbl_8027C128[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_802979C8, arg1);
    *(void **)((u8 *)temp_r31 + 0x30) = fn_800C4638(0x114, lbl_8027C128 + 0x68, 0);
    *(s32 *)((u8 *)*(void **)((u8 *)temp_r31 + 0x30) + 0x14) = arg0;
    *(s32 *)((u8 *)*(void **)((u8 *)temp_r31 + 0x30) + 0x10) = 1;
}

void fn_801B32C8(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void *fn_800C4638(s32, void *, s32);
    extern u8 lbl_80297984[];
    extern u8 lbl_8027C128[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80297984, arg1);
    *(void **)((u8 *)temp_r31 + 0x30) = fn_800C4638(0x114, lbl_8027C128 + 0x68, 0);
    *(s32 *)((u8 *)*(void **)((u8 *)temp_r31 + 0x30) + 0x14) = arg0;
    *(s32 *)((u8 *)*(void **)((u8 *)temp_r31 + 0x30) + 0x10) = 0;
}

void fn_801B3338(void *arg0) {
    void fn_8005C7E8(void *);
    void fn_800C4588(void *);
    void *temp_r31;
    void *ptr;

    temp_r31 = *(void **)((u8 *)arg0 + 0x30);
    ptr = *(void **)((u8 *)temp_r31 + 0x18);
    if (ptr != NULL) {
        fn_8005C7E8(ptr);
    }
    fn_800C4588(temp_r31);
}

void fn_801B3D30(void *arg0) {
    void fn_801B5E2C(void *);
    void *temp_r31;
    
    temp_r31 = *(void **)((char *)arg0 + 0x30);
    fn_801B5E2C(temp_r31);
    *(s32 *)((char *)temp_r31 + 0x18) = 0;
}

void fn_801B3D68(void *arg0) {
    void fn_8005C7E8(void *);
    void fn_800C4588(void *);
    void *temp_r31;
    void *ptr;

    temp_r31 = M2C_FIELD(arg0, void **, 0x30);
    fn_8014876C(lbl_8032FF08 + (M2C_FIELD(temp_r31, u8 *, 0x10C) * 0x30), 0x64, 0x3E8);
    ptr = M2C_FIELD(temp_r31, void **, 0x18);
    if (ptr != NULL) {
        fn_8005C7E8(ptr);
    }
    fn_800C4588(temp_r31);
}

void fn_801B4810(void) {
    extern u16 lbl_8027C128[];
    fn_800558D8((u8 *)lbl_8027C128 + 0xb1);
    fn_800558D8((u8 *)lbl_8027C128 + 0x95);
}

void fn_801B484C(void *arg0, f32 f1, f32 f2, f32 f3, f32 f4) {
    extern s8 lbl_80368240;
    s32 count;

    if (lbl_80368240 == 0) {
        lbl_80368240 = 1;
    }
    count = 0xA;
    if (*(s32 *)((u8 *)arg0 + 0x10) == 0) {
        count = 8;
    }
    (void)f1; (void)f2; (void)f3; (void)f4; (void)count;
}

#pragma opt_common_subs off
void fn_801B5DB0(void *arg0) {
    s32 fn_8005C6A0(void *);
    void fn_8006EEFC(void *, void *);
    s32 fn_8007C3BC(s32);
    u8 fn_8007C484(s32);
    extern u8 lbl_8027C128[];
    u8 *temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 **, 0x30);
    if (fn_8005C6A0(lbl_8027C128 + 0xE1) & 0x2000) {
        if (fn_8007C484(fn_8007C3BC(M2C_FIELD(temp_r31, s32 *, 0x110)))) {
            fn_8006EEFC(temp_r31 + 0x18, lbl_8027C128 + 0xE1);
            fn_8000C188(arg0);
        }
    }
}

void fn_801B5E2C(void *arg0) {
    void *memset(void *, s32, s32);
    void fn_8005C8B4(void *);
    u8 fn_8003B658(void *);
    u8 fn_8003B614(void *);
    u8 fn_8003B5D0(void *);
    u8 fn_8003B58C(void *);
    u8 fn_8003B548(void *);
    u8 fn_8003B518(void *);
    u8 fn_8003B4D4(void *);
    u8 fn_8003B490(void *);
    u8 fn_8003A5B4(void *);
    u8 fn_8003A398(void *);
    void fn_801B6BE4(void *);
    u8 fn_80037960(void *, void *);
    void *fn_8003A064(void *);
    void *fn_8007C3BC(void *);
    void fn_8007C4D4(void *, s32);
    u8 fn_80028640(void);
    extern u8 lbl_8027C128[];
    extern f32 lbl_8036B0E0;

    u8 sp8[0x20];
    void *unit;
    f32 f;
    void *str;
    u8 b;

    unit = *(void **)((u8 *)arg0 + 0x14);
    *(s32 *)((u8 *)arg0 + 0x0) = 0;
    *(s32 *)((u8 *)arg0 + 0x4) = 0;
    *(s32 *)((u8 *)arg0 + 0x8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x108) = *(s32 *)((u8 *)unit + 0x18C);
    *(f32 *)((u8 *)arg0 + 0x104) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x60) = 0;
    memset((u8 *)arg0 + 0x64, 0, 0xA0);
    fn_8005C8B4(lbl_8027C128 + 0xE1);
    *(u8 *)((u8 *)arg0 + 0x1C) = *(u8 *)((u8 *)unit + 0x19A);
    *(u8 *)((u8 *)arg0 + 0x1D) = fn_8003B658(unit);
    *(u8 *)((u8 *)arg0 + 0x1E) = fn_8003B614(unit);
    *(u8 *)((u8 *)arg0 + 0x1F) = fn_8003B5D0(unit);
    *(u8 *)((u8 *)arg0 + 0x20) = fn_8003B58C(unit);
    *(u8 *)((u8 *)arg0 + 0x21) = fn_8003B548(unit);
    *(u8 *)((u8 *)arg0 + 0x22) = fn_8003B518(unit);
    *(u8 *)((u8 *)arg0 + 0x23) = fn_8003B4D4(unit);
    *(u8 *)((u8 *)arg0 + 0x24) = fn_8003B490(unit);
    *(u8 *)((u8 *)arg0 + 0x25) = fn_8003A5B4(unit);
    *(u8 *)((u8 *)arg0 + 0x26) = fn_8003A398(unit);
    fn_801B6BE4(sp8);
    b = sp8[0xA];
    f = (str = lbl_8027C128, 1.0f);
    *(u8 *)((u8 *)arg0 + 0x27) = b;
    str = (u8 *)str + 0xF2;
    *(u8 *)((u8 *)arg0 + 0x28) = sp8[0xB];
    *(u8 *)((u8 *)arg0 + 0x29) = sp8[0xC];
    *(u8 *)((u8 *)arg0 + 0x2A) = sp8[0xD];
    *(u8 *)((u8 *)arg0 + 0x2B) = sp8[0xE];
    *(u8 *)((u8 *)arg0 + 0x2C) = sp8[0xF];
    *(u8 *)((u8 *)arg0 + 0x2D) = sp8[0x10];
    *(u8 *)((u8 *)arg0 + 0x2E) = sp8[0x11];
    *(u8 *)((u8 *)arg0 + 0x2F) = sp8[0x12];
    *(u8 *)((u8 *)arg0 + 0x30) = sp8[0x13];
    *(f32 *)((u8 *)arg0 + 0x34) = f;
    *(f32 *)((u8 *)arg0 + 0x38) = f;
    *(f32 *)((u8 *)arg0 + 0x3C) = f;
    *(f32 *)((u8 *)arg0 + 0x40) = f;
    *(f32 *)((u8 *)arg0 + 0x44) = f;
    *(f32 *)((u8 *)arg0 + 0x48) = f;
    *(f32 *)((u8 *)arg0 + 0x4C) = f;
    *(f32 *)((u8 *)arg0 + 0x50) = f;
    *(f32 *)((u8 *)arg0 + 0x54) = f;
    *(f32 *)((u8 *)arg0 + 0x58) = f;
    *(f32 *)((u8 *)arg0 + 0x5C) = f;
    if (fn_80037960(*(void **)((u8 *)arg0 + 0x14), str) != 0 && *(s32 *)((u8 *)arg0 + 0x10) == 1) {
        *(void **)((u8 *)arg0 + 0x110) = lbl_8027C128 + 0xFA;
    } else if (fn_80037960(*(void **)((u8 *)arg0 + 0x14), lbl_8027C128 + 0x105) != 0 && *(s32 *)((u8 *)arg0 + 0x10) == 1) {
        *(void **)((u8 *)arg0 + 0x110) = lbl_8027C128 + 0x10E;
    } else {
        *(void **)((u8 *)arg0 + 0x110) = fn_8003A064(*(void **)((u8 *)arg0 + 0x14));
    }
    fn_8007C4D4(fn_8007C3BC(*(void **)((u8 *)arg0 + 0x110)), 0);
    if (fn_80028640() != 0) {
        *(u8 *)((u8 *)arg0 + 0x10C) = 1;
    } else {
        *(u8 *)((u8 *)arg0 + 0x10C) = 0;
    }
}

void fn_801B6064(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

#pragma opt_common_subs reset

s32 fn_801B6098(s32 arg0) {
    void fn_801B32C8(void *, s32);
    extern u8 lbl_80330EAC[];
    u32 flags;
    u8 ok;
    void *obj;
    u8 byte;

    flags = *(u32 *)(lbl_80330EAC + 0xCAC);
    if ((flags >> 4) & 1) {
        ok = 0;
    } else if (flags & 0x800) {
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok == 0) {
        return 0;
    }
    obj = *(void **)(lbl_80330EAC + 0x280);
    if (obj != NULL) {
        byte = *((u8 *)*(void **)((u8 *)obj + 0x190) + 8);
        if (byte == 0 || byte == 5) {
            goto do_call;
        }
    }
    obj = *(void **)(lbl_80330EAC + 0x560);
    if (obj != NULL) {
        byte = *((u8 *)*(void **)((u8 *)obj + 0x190) + 8);
        if (byte == 0 || byte == 5) {
            goto do_call;
        }
    }
    obj = NULL;
do_call:
    fn_801B32C8(obj, arg0);
    return 1;
}

s32 fn_801B6164(u32 arg0) {
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80297AC8[];
    extern u8 lbl_80330EAC[];

    if (!(M2C_FIELD(lbl_80330EAC, s32 *, 0xCAC) & 0x400)) {
        return 0;
    }
    if (arg0 == 0) {
        fn_8000CAF0(lbl_80297AC8, 3);
    } else {
        fn_8000CAA0(lbl_80297AC8, arg0);
    }
    return 1;
}

s32 fn_801B61CC(u32 arg0) {
    void fn_8000CAA0(void *, u32);
    void fn_8000CAF0(void *, s32);
    extern u8 lbl_80297B3C[];
    extern u8 lbl_80330EAC[];
    u32 flags;
    u32 bit4;
    u8 a;
    u8 b;

    flags = *(u32 *)((u8 *)lbl_80330EAC + 0xCAC);
    bit4 = flags & 0x10;
    if ((flags >> 4) & 1) {
        a = 0;
    } else if (flags & 0x800) {
        a = 1;
    } else {
        a = 0;
    }
    if (a != 0) {
        b = 1;
    } else if (flags & 0x400) {
        b = 1;
    } else if (bit4 != 0) {
        b = 1;
    } else {
        b = 0;
    }
    if (b == 0) {
        return 0;
    }
    if (arg0 == 0) {
        fn_8000CAF0(lbl_80297B3C, 3);
    } else {
        fn_8000CAA0(lbl_80297B3C, arg0);
    }
    return 1;
}

void fn_801B6290(void *arg0) {
    u8 fn_800AA188(void);
    void fn_8004BE88(void *, s32);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80330EAC[];
    u8 byte;
    void *obj;
    void *sub;

    if (fn_800AA188() != 0) {
        obj = *(void **)(lbl_80330EAC + 0x280);
        if (obj != NULL) {
            sub = *(void **)((u8 *)obj + 0x190);
            byte = *(u8 *)((u8 *)sub + 8);
            if (byte != 0) {
                if (byte != 5) {
                    goto try_second;
                }
            }
        } else {
        try_second:
            obj = *(void **)(lbl_80330EAC + 0x560);
            if (obj != NULL) {
                sub = *(void **)((u8 *)obj + 0x190);
                byte = *(u8 *)((u8 *)sub + 8);
                if (byte != 0) {
                    if (byte != 5) {
                        goto set_null;
                    }
                }
            } else {
            set_null:
                obj = NULL;
            }
        }
        if (obj != NULL) {
            fn_8004BE88(obj, 0);
        }
    } else {
        fn_8000C070(arg0, 0);
    }
}

s32 fn_801B6348(void *arg0)
{
    void fn_801B32C8(void *, void *);
    extern u8 lbl_80330EAC[];

    u8 *base;
    u8 *object;
    u8 *data;
    u32 flags;
    u8 state;

    base = lbl_80330EAC;
    flags = *(u32 *)(base + 0xCAC);

    if ((flags & 0x10) != 0 || (flags & 0x800) == 0) {
        return 0;
    }

    object = *(u8 **)(base + 0x280);

    if (object != 0) {
        data = *(u8 **)(object + 0x190);
        state = data[8];

        if (state == 0 || state == 5) {
            fn_801B32C8(object, arg0);
            return 1;
        }
    }

    object = *(u8 **)(base + 0x560);

    if (object != 0) {
        data = *(u8 **)(object + 0x190);
        state = data[8];

        if (state == 0 || state == 5) {
            fn_801B32C8(object, arg0);
            return 1;
        }
    }

    fn_801B32C8(0, arg0);
    return 1;
}

s32 fn_801B6414(u32 arg0) {
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80297AC8[];
    extern u8 lbl_80330EAC[];

    if (!(M2C_FIELD(lbl_80330EAC, s32 *, 0xCAC) & 0x400)) {
        return 0;
    }
    if (arg0 == 0) {
        fn_8000CAF0(lbl_80297AC8, 3);
    } else {
        fn_8000CAA0(lbl_80297AC8, arg0);
    }
    return 1;
}

void fn_801B647C(void *arg0) {
    void *fn_8005381C(void *, void *);
    void fn_800536B0(void *, f32, f32, f32);
    void fn_801475FC(void *, s32);
    void fn_8014876C(void *, s32, s32);
    extern u8 lbl_80330EAC[];
    extern u8 lbl_8027C248[];
    extern u8 lbl_8032FF08[];
    extern f32 lbl_8036B1B0;
    extern f32 lbl_8036B1B4;
    extern f32 lbl_8036B1B8;

    if (*(u32 *)(lbl_80330EAC + 0xCAC) & 0x10) {
        fn_800536B0(fn_8005381C(lbl_8027C248 + 0xE4, arg0), lbl_8036B1B0, lbl_8036B1B4, lbl_8036B1B8);
        fn_801475FC(lbl_8027C248 + 0xF1, 0x64);
        fn_8014876C(lbl_8032FF08 + ((u8 *)arg0)[0x3A] * 0x30, 0x32, 0xFA);
    }
}

void fn_801B6510(void *arg0) {
    void fn_8006D8E8(void *);
    void fn_8014876C(void *, s32, s32);
    extern u8 lbl_80330EAC[];
    extern u8 lbl_8032FF08[];
    void *p;

    p = *(void **)((u8 *)arg0 + 0x40);
    if (p != NULL) {
        fn_8006D8E8(p);
    }
    if (*(u32 *)(lbl_80330EAC + 0xCAC) & 0x10) {
        fn_8014876C(lbl_8032FF08 + ((u8 *)arg0)[0x3A] * 0x30, 0x64, 0x3E8);
    }
}

void fn_801B657C(void *arg0) {
    f32 fn_80059F64(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    u16 old;

    old = *(u16 *)((u8 *)arg0 + 0x3C);
    *(u16 *)((u8 *)arg0 + 0x3C) = (u16)(old + 1);
    *(u8 *)((u8 *)arg0 + 0x39) = (u8)(s32)fn_80059F64(old, 0.0f, 255.0f, 8.0f, (f32)*(u16 *)((u8 *)arg0 + 0x3C));
    if (*(u16 *)((u8 *)arg0 + 0x3C) == 8) {
        fn_8000C188(arg0);
    }
}

void fn_801B6600(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
}

void fn_801B660C(void *arg0) {
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_801475FC(void *, s32);
    void fn_8000C188(void *);
    extern u8 lbl_8027C248[];
    s16 temp_r4;
    s16 temp_r6;

    *(u16 *)((u8 *)arg0 + 0x3C) = (u16)(*(u16 *)((u8 *)arg0 + 0x3C) + 1);
    temp_r4 = *(s16 *)((u8 *)arg0 + 0x4A);
    temp_r6 = *(s16 *)((u8 *)arg0 + 0x48);
    *(s16 *)((u8 *)arg0 + 0x3E) = (s16)fn_80059F64((f32)temp_r6, (f32)(temp_r6 + temp_r4), (f32)temp_r4, (f32)*(u16 *)((u8 *)arg0 + 0x3C));
    if (*(u16 *)((u8 *)arg0 + 0x3C) & 1) {
        fn_801475FC(lbl_8027C248 + 0x102, 0x64);
    }
    if ((s32)*(u16 *)((u8 *)arg0 + 0x3C) == *(s16 *)((u8 *)arg0 + 0x4A)) {
        fn_8000C188(arg0);
    }
}

void fn_801B66F4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
}

void fn_801B6700(void *arg0) {
    f32 fn_80059F64(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    u16 old;

    old = *(u16 *)((u8 *)arg0 + 0x3C);
    *(u16 *)((u8 *)arg0 + 0x3C) = (u16)(old + 1);
    *(u8 *)((u8 *)arg0 + 0x39) = (u8)(s32)fn_80059F64(old, 0.0f, 255.0f, 8.0f, (f32)*(u16 *)((u8 *)arg0 + 0x3C));
    if (*(u16 *)((u8 *)arg0 + 0x3C) == 8) {
        fn_8000C188(arg0);
    }
}

void fn_801B6784(void *arg0) {
    s32 fn_8006D948(void *);
    void fn_80059208(void *, void *);
    void fn_801B69FC(void);
    extern u8 lbl_8027C248[];

    M2C_FIELD(arg0, s32 *, 0x40) = fn_8006D948(lbl_8027C248 + 0x114);
    fn_80059208(fn_801B69FC, arg0);
}

s32 fn_801B67D0(struct efUnit* arg0) {
    return 0;
}

void fn_801B69FC(void *arg0) {
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B28(void);
    void fn_80009B8C(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8005926C(s32, s32, s32, s32, s32, s32, s32, s32);
    extern f32 lbl_8036B1B8;
    extern f64 lbl_8036B1D0;
    extern f32 lbl_8036B1DC;
    extern f32 lbl_8036B1E0;
    extern f32 lbl_8036B1E4;
    extern f32 lbl_8036B1E8;
    extern f32 lbl_8036B1EC;
    extern f32 lbl_8036B1F0;
    extern f32 lbl_8036B1F4;
    extern f32 lbl_8036B1F8;
    extern f32 lbl_8036B1FC;
    extern f32 lbl_8036B200;
    extern f32 lbl_8036B204;
    s32 rem;
    s32 scaled;
    u16 val;

    val = *(u16 *)((u8 *)arg0 + 0x3E);
    rem = val % 100;
    fn_8000A258();
    fn_80009D74(lbl_8036B1DC, lbl_8036B1E0, lbl_8036B1E4, lbl_8036B1E8);
    fn_80009F90(*(void **)((u8 *)arg0 + 0x40), 2, 0x11);
    fn_80009B8C(*(u8 *)((u8 *)arg0 + 0x39));
    fn_8000A248();
    fn_8005926C(0, 0, 0, 0, 0x13, 0x14, 0xF, rem);
    scaled = (rem * 0xAF) / 100;
    if (rem > 0 && scaled < 2) {
        scaled = 2;
    }
    if (scaled > 0) {
        fn_8000A258();
        fn_80009D74(lbl_8036B1EC, lbl_8036B1F0, lbl_8036B1E4, lbl_8036B1E8);
        fn_80009F90(*(void **)((u8 *)arg0 + 0x40), 1, 0x11);
        fn_80009B8C(*(u8 *)((u8 *)arg0 + 0x39));
        fn_8000A248();
        fn_80007898(2);
        fn_8000770C(lbl_8036B1B8, lbl_8036B1B8, lbl_8036B1B8, lbl_8036B1B8, (f32)scaled, lbl_8036B1F4);
        fn_800075D8();
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_80007884();
    }
    fn_8000A258();
    fn_80009D74(lbl_8036B1F8, lbl_8036B1FC, lbl_8036B1E4, lbl_8036B1E8);
    fn_80009F90(*(void **)((u8 *)arg0 + 0x40), 0, 0x11);
    fn_80009B8C(*(u8 *)((u8 *)arg0 + 0x39));
    fn_8000A248();
    fn_80007898(2);
    fn_8000770C(lbl_8036B1B8, lbl_8036B1B8, lbl_8036B1B8, lbl_8036B1B8, lbl_8036B200, lbl_8036B204);
    fn_800075D8();
    fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
    fn_80007884();
    fn_80009B28();
}

s32 fn_801B6BE4(struct efUnit* arg0) {
    return 0;
}

void fn_801B6F44(void) {
    void fn_80013AE8(void *, void *, s32);
    extern u8 lbl_8027C370[];
    void fn_801B7818(void);
    void fn_801B7638(void);
    void fn_801B75F4(void);
    void fn_801B7564(void);
    void fn_801B7488(void);
    void fn_801B73DC(void);
    void fn_801B7330(void);
    void fn_801B7260(void);
    void fn_801B7188(void);
    void fn_801B70C8(void);
    void fn_801B7094(void);

    fn_80013AE8(lbl_8027C370 + 0xCE, fn_801B7818, 2);
    fn_80013AE8(lbl_8027C370 + 0xD9, fn_801B7638, 0);
    fn_80013AE8(lbl_8027C370 + 0xE9, fn_801B75F4, 0);
    fn_80013AE8(lbl_8027C370 + 0xF8, fn_801B7564, 1);
    fn_80013AE8(lbl_8027C370 + 0x10C, fn_801B7488, 0);
    fn_80013AE8(lbl_8027C370 + 0x11B, fn_801B73DC, 0);
    fn_80013AE8(lbl_8027C370 + 0x131, fn_801B7330, 0);
    fn_80013AE8(lbl_8027C370 + 0x141, fn_801B7260, 0);
    fn_80013AE8(lbl_8027C370 + 0x153, fn_801B7188, 0);
    fn_80013AE8(lbl_8027C370 + 0x165, fn_801B70C8, 0);
    fn_80013AE8(lbl_8027C370 + 0x178, fn_801B7094, 0);
}

s32 fn_801B7094(void) {
    extern u16 lbl_802CA264[50];
    s32 count;
    s32 flags;
    void *p;

    count = 0;
    p = M2C_FIELD(lbl_802CA264, void **, 0x48);
    while (p != NULL) {
        flags = M2C_FIELD(p, s32 *, 0x1A0);
        p = M2C_FIELD(p, void **, 0x184);
        if (flags & 0x8000) {
            count++;
        }
    }
    return count;
}

#pragma use_lmw_stmw on
s32 fn_801B70C8(void) {
    void fn_800056CC(void *, ...);
    void *fn_8010FF24(void *, s8, s8, s32);
    extern u8 lbl_8027C370[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_8032BB58[];
    void *table;
    u8 *map;
    s32 sum;
    s32 y;
    s32 x;
    void *tmp;

    sum = 0;
    fn_800056CC(lbl_8027C370 + 0x18B);
    map = lbl_802CA518;
    y = (s8)map[9];
    table = lbl_8032BB58;
    for (; y <= (s8)map[0xB] - 1; y++) {
        for (x = (s8)map[8]; x <= (s8)map[0xA] - 1; x++) {
            tmp = fn_8010FF24(table, (s8)x, (s8)y, 7);
            if (tmp != NULL) {
                sum += 5 - ((u8 *)tmp)[5];
            }
        }
    }
    return sum;
}

s32 fn_801B7188(void) {
    void fn_800056CC(const char *, ...);
    void fn_800152F8(s32, s32, s32, s32, s32, s32, s32, s32, void *);
    extern u8 lbl_8027C370[];
    extern u8 lbl_802B14E4[];
    u8 buf[8];
    u8 *unit;
    s32 count;
    s32 i;

    count = 0;
    fn_800056CC((const char *)(lbl_8027C370 + 0x19C));
    fn_800152F8(1, 0, 0, 0, 0, 1, 0, 0, buf);
    for (i = 1; i <= 0x9F; i++) {
        if ((u8)i != 0) {
            unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0
            && buf[*(u8 *)(*(u8 **)(unit + 0x190) + 8)] != 0
            && (*(u32 *)(unit + 0x1A0) & 0x4000)) {
            count += 1;
        }
    }
    return count;
}

s32 fn_801B7260(void) {
    void fn_800056CC(const char *, ...);
    void fn_800152F8(s32, s32, s32, s32, s32, s32, s32, s32, void *);
    extern u8 lbl_8027C370[];
    extern u8 lbl_802B14E4[];
    u8 buf[8];
    u8 *unit;
    s32 i;

    fn_800056CC((const char *)(lbl_8027C370 + 0x19C));
    fn_800152F8(1, 0, 0, 0, 0, 1, 0, 0, buf);
    for (i = 1; i <= 0x9F; i++) {
        if ((u8)i != 0) {
            unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0
            && buf[*(u8 *)(*(u8 **)(unit + 0x190) + 8)] != 0
            && !(*(u32 *)(unit + 0x1A0) & 0x4000)) {
            return 0;
        }
    }
    return 1;
}

#pragma use_lmw_stmw reset
s32 fn_801B7330(void) {
    void fn_800056CC(void *, ...);
    s32 fn_802342B8(void *, void *);
    extern u8 lbl_8027C370[];
    extern u8 lbl_802CA264[];
    u8 *base;
    void *next;
    s32 count;
    void *node;

    count = 0;
    fn_800056CC(lbl_8027C370 + 0x1A9);
    node = *(void **)(lbl_802CA264 + 0xC);
    base = lbl_8027C370;
    while (node != NULL) {
        next = *(void **)((u8 *)node + 0x184);
        if (fn_802342B8(*(void **)(*(void **)((u8 *)node + 0x18C)), base + 0x1B0) == 0) {
            count += 1;
        }
        node = next;
    }
    fn_800056CC(lbl_8027C370 + 0x1BA, count);
    return count;
}

s32 fn_801B73DC(void) {
    void fn_800056CC(void *, ...);
    s32 fn_802342B8(void *, void *);
    extern u8 lbl_8027C370[];
    extern u8 lbl_802CA264[];
    u8 *base;
    void *next;
    s32 count;
    void *node;

    count = 0;
    fn_800056CC(lbl_8027C370 + 0x1C0);
    node = *(void **)(lbl_802CA264 + 0xC);
    base = lbl_8027C370;
    while (node != NULL) {
        next = *(void **)((u8 *)node + 0x184);
        if (fn_802342B8(*(void **)(*(void **)((u8 *)node + 0x188)), base + 0x1CB) == 0) {
            count += 1;
        }
        node = next;
    }
    fn_800056CC(lbl_8027C370 + 0x1DE, count);
    return count;
}

s32 fn_801B7488(void) {
    void fn_800056CC(void *, ...);
    s32 fn_802342B8(void *, void *);
    extern u8 lbl_8027C370[];
    extern u8 lbl_802CA264[];
    u8 *base;
    void *next;
    void *entry;
    s32 count;
    void *node;

    count = 0;
    fn_800056CC(lbl_8027C370 + 0x1E8);
    node = *(void **)(lbl_802CA264 + 0xC);
    base = lbl_8027C370;
    while (node != NULL) {
        entry = *(void **)((u8 *)node + 0x18C);
        next = *(void **)((u8 *)node + 0x184);
        if (fn_802342B8(*(void **)entry, base + 0x1F1) == 0
            || fn_802342B8(*(void **)entry, base + 0x1FC) == 0
            || fn_802342B8(*(void **)entry, base + 0x207) == 0) {
            count += 1;
        }
        node = next;
    }
    fn_800056CC(lbl_8027C370 + 0x214, count);
    return count;
}

s32 fn_801B7564(void *arg0) {
    void fn_800056CC(void *, ...);
    s32 fn_802342B8(void *, void *);
    extern u8 lbl_8027C370[];
    extern u8 lbl_802CA264[];
    void *next;
    s32 count;
    void *node;

    count = 0;
    fn_800056CC(lbl_8027C370 + 0x21C);
    node = *(void **)(lbl_802CA264 + 0xC);
    while (node != NULL) {
        next = *(void **)((u8 *)node + 0x184);
        if (fn_802342B8(*(void **)(*(void **)((u8 *)node + 0x188)), arg0) == 0) {
            count += 1;
        }
        node = next;
    }
    return count;
}

s32 fn_801B75F4(void)
{
    void fn_800056CC(const char *, ...);
    extern u8 lbl_8027C370[];
    extern u8 lbl_802CA264[];

    fn_800056CC((char *)lbl_8027C370 + 0x225);
    return *(s32 *)(lbl_802CA264 + 0xC) == 0;
}

s32 fn_801B7638(void)
{
    void fn_800056CC(const char *, ...);
    extern u8 lbl_8027C370[];
    extern u8 lbl_802CA264[];

    fn_800056CC((char *)lbl_8027C370 + 0x22e);
    return *(s32 *)(lbl_802CA264 + 0x48) == 0;
}

s32 fn_801B767C(void *arg0) {
    s32 var_r8;
    s32 temp_r4;
    s32 temp_r6;
    s32 temp_r0;
    s32 var_r5;
    s32 var_r6;
    s32 var_ctr;
    void *var_r7;

    var_r8 = *(s32 *)((char *)arg0 + 0x224);
    var_r6 = 0;
    var_r5 = 0;
    
    if (var_r8 > 0) {
        temp_r4 = var_r8 - 8;
        
        if (var_r8 <= 8) {
            goto skip_loop1;
        }
        
        var_r7 = arg0;
        var_ctr = ((temp_r4 + 7) >> 3);
        
        do {
            var_r5 += 8;
            temp_r0 = *(s32 *)((char *)var_r7 + 0x21C);
            temp_r6 = var_r6 + *(s32 *)((char *)var_r7 + 0x200) 
                      + *(s32 *)((char *)var_r7 + 0x204)
                      + *(s32 *)((char *)var_r7 + 0x208)
                      + *(s32 *)((char *)var_r7 + 0x20C)
                      + *(s32 *)((char *)var_r7 + 0x210)
                      + *(s32 *)((char *)var_r7 + 0x214)
                      + *(s32 *)((char *)var_r7 + 0x218);
            var_r7 = (char *)var_r7 + 0x20;
            var_r6 = temp_r6 + temp_r0;
            var_ctr--;
        } while (var_ctr != 0);
        
skip_loop1:
        temp_r4 = var_r8 - var_r5;
        if (temp_r4 > 0) {
            s32 *var_r4_ptr = (s32 *)((char *)arg0 + (var_r5 * 4));
            
            do {
                temp_r0 = *var_r4_ptr;
                var_r4_ptr++;
                var_r6 += temp_r0;
                temp_r4--;
            } while (temp_r4 != 0);
        }
    }
    
    return *(s32 *)((char *)arg0 + 0x228) + var_r6;
}

s32 fn_801B7734(void *arg0) {
    s32 n;
    s32 sum;
    s32 i;
    s32 rem;
    s32 ctr;
    u8 *p;
    s32 t0;
    s32 t1;

    n = *(s32 *)((u8 *)arg0 + 0x224);
    sum = 0;
    i = 0;
    if (n > 0) {
        rem = n - 8;
        if (n > 8) {
            p = arg0;
            ctr = (u32)(rem + 7) >> 3;
            if (rem > 0) {
                do {
                    t0 = *(s32 *)(p + 0x200);
                    i += 8;
                    t1 = *(s32 *)(p + 0x204);
                    sum += t0;
                    t0 = *(s32 *)(p + 0x208);
                    sum += t1;
                    t1 = *(s32 *)(p + 0x20C);
                    sum += t0;
                    t0 = *(s32 *)(p + 0x210);
                    sum += t1;
                    t1 = *(s32 *)(p + 0x214);
                    sum += t0;
                    t0 = *(s32 *)(p + 0x218);
                    sum += t1;
                    t1 = *(s32 *)(p + 0x21C);
                    sum += t0;
                    p += 0x20;
                    sum += t1;
                } while (--ctr);
            }
        }
        p = (u8 *)arg0 + (i << 2);
        ctr = n - i;
        if (i < n) {
            do {
                t0 = *(s32 *)(p + 0x200);
                p += 4;
                sum += t0;
            } while (--ctr);
        }
    }
    return sum;
}

void fn_801B77E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x228) = arg1;
}

void fn_801B77F0(s32 arg0, s32 arg1) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(arg0 + (arg1 << 6));
}

s32 fn_801B7818(s32 arg0, s32 arg1) {
    void fn_80234450(s32, s32, s32);
    extern u8 lbl_80330708[];
    extern s32 lbl_80368250;
    extern s32 lbl_80368254;
    struct { char pad[0x200]; s32 val; } *p;
    s32 var_r31;
    u8 v;

    var_r31 = arg1;
    fn_80234450(lbl_80368254 + (lbl_80368250 << 6), arg0, lbl_80368254);
    v = lbl_80330708[0xA6];
    if (v == 2) {
        var_r31 /= 2;
    }
    if (v == 3) {
        var_r31 += var_r31 / 2;
    }
    p = (void *)(lbl_80368254 + (lbl_80368250 << 2));
    p->val = var_r31;
    return 1;
}

u8 fn_801B78A8(void *arg0) {
    void fn_80013778(s32, void *);
    s32 fn_80013880(void);
    u8 fn_800BDD08(void *, u8 *);
    u8 *fn_800C273C(void *, u16);
    extern u8 lbl_80330708[];
    extern s32 lbl_80368250;
    u8 *temp_r3;
    u8 var_r31;

    var_r31 = 0;
    temp_r3 = fn_800C273C(arg0, (u16)M2C_FIELD(arg0, s16 *, 0x14));
    if (((s8)*temp_r3 != 0) && (fn_800BDD08(lbl_80330708 + 0xB4, temp_r3) == 0)) {
        return 0;
    }
    fn_80013778(0, arg0);
    if (fn_80013880() != 0) {
        var_r31 = 1;
    }
    if (var_r31 != 0) {
        lbl_80368250 += 1;
    }
    return var_r31;
}

void fn_801B794C(void *arg0) {
    s32 fn_800C044C(s32);
    u8 fn_801B78A8(void *);
    s32 fn_800C04B0(s32, u8 (*)(void *));
    extern s32 lbl_80368250;
    extern u8 *lbl_80368254;

    lbl_80368250 = 0;
    lbl_80368254 = (u8 *)arg0;
    *(s32 *)((u8 *)arg0 + 0x224) = fn_800C04B0(0xC, fn_801B78A8);
    *(s32 *)((u8 *)arg0 + 0x220) = fn_800C044C(0xC);
}

void fn_801B79A0(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    void *fn_8000CAA0(void *, s32);
    void *fn_800C4638(s32, void *, s32);
    void fn_80234450(void *, s32);
    extern u8 lbl_80297B78[];
    extern u8 lbl_8027C5A8[];
    void *temp_r31;
    u8 *work;

    temp_r31 = fn_8000CAA0(lbl_80297B78, arg2);
    M2C_FIELD(temp_r31, void **, 0x30) = fn_800C4638(0x19C, lbl_8027C5A8 + 9, 0);
    work = M2C_FIELD(temp_r31, u8 **, 0x30);
    fn_80234450(work + 0x10, arg0);
    M2C_FIELD(work, s32 *, 0x90) = arg1;
    M2C_FIELD(work, s8 *, 0x198) = arg3;
}

void fn_801B7A34(void *arg0) {
    void fn_8005C7C8(void *);
    void fn_800C4588(void *);
    extern u8 lbl_8027C5A8[];
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x30);
    fn_8005C7C8(lbl_8027C5A8 + 0xA);
    fn_800C4588(temp_r31);
}

void fn_801B7A74(void *arg0) {
    void fn_8000C188(void *);
    s8 fn_80146BE4(void *);
    void fn_80148980(void *, s32);
    void fn_801B7B5C(void *, s32, f32);
    extern void *lbl_80367240;
    extern u8 lbl_803301A8[1344];

    void *self;
    s32 count;
    void *pad;
    s32 buttons;
    s32 prev;
    s32 pressed;
    void *p;
    s8 slot;
    u8 idx;

    self = *(void **)((u8 *)arg0 + 0x30);
    pad = lbl_80367240;
    count = *(s32 *)((u8 *)self + 4);
    buttons = *(s32 *)((u8 *)pad + 4);
    prev = *(s32 *)((u8 *)pad + 8);
    *(s32 *)((u8 *)self + 4) = count + 1;
    pressed = buttons & (prev ^ buttons);
    count = *(s32 *)((u8 *)self + 4);
    if (count >= 0x78 || (count >= 0x14 && ((pressed & 0x100) || (pressed & 0x200)))) {
        p = *(void **)((u8 *)self + 0x90);
        if (p) {
            slot = fn_80146BE4(p);
            if (slot != -1) {
                idx = slot;
                fn_80148980(lbl_803301A8 + idx * 0x30, 0x1F4);
            }
        }
        fn_8000C188(arg0);
    }
    fn_801B7B5C(self, *(s32 *)((u8 *)self + 0x194), (f32)(*(s32 *)((u8 *)self + 0xC) + 0x34));
}

void fn_801B7B5C(void *arg0, s32 arg1, f32 farg0) {
    void fn_800075D8(void);
    void fn_80007698(s32);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(s32);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, void *, f32, f32);
    s32 fn_80010B78(void *, s32, f32);
    extern u8 lbl_8027C5A8[];
    extern f32 lbl_8036B210, lbl_8036B214, lbl_8036B218, lbl_8036B21C;
    extern f32 lbl_8036B220, lbl_8036B224, lbl_8036B228, lbl_8036B22C;
    extern f32 lbl_8036B230, lbl_8036B234, lbl_8036B238, lbl_8036B23C;
    extern f32 lbl_8036B240, lbl_8036B244, lbl_8036B248, lbl_8036B24C;
    extern f32 lbl_8036B250, lbl_8036B254, lbl_8036B258, lbl_8036B25C;
    extern f32 lbl_8036B260, lbl_8036B264, lbl_8036B268;

    void *self = arg0;
    s32 mode = arg1;
    f32 width = farg0;
    u16 h;
    f32 f28, f27, f30, f29, f25, f22, f31, f24, f23;
    f32 w2, y2, x3;
    s16 tx;

    if ((s8)*(u8 *)((u8 *)self + 0x198) == 0) {
        f28 = lbl_8036B210 - lbl_8036B214 * width;
        if (mode == 2) {
            f27 = lbl_8036B218;
            h = 0x50;
        } else {
            f27 = lbl_8036B21C;
            h = 0x32;
        }
        fn_8000A258();
        fn_80009D74(lbl_8036B220, lbl_8036B220, lbl_8036B224, lbl_8036B228);
        fn_80009B8C(0xFF);
        fn_8000A248();
        fn_8000A258();
        fn_8000A174(0, 0x12);
        fn_8000A248();
        fn_80007898(1);
        f30 = lbl_8036B228 + f28;
        fn_800077D8(f30, lbl_8036B228 + f27, width - lbl_8036B22C, (f32)(h - 2));
        fn_800075D8();
        fn_800076AC(0, 0, 0x2C, 0xB3);
        fn_80007884();
        fn_8000A258();
        fn_80009C0C(lbl_8036B230);
        fn_8000A248();

        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 8), 0, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(f28, f27, lbl_8036B220, lbl_8036B220);
        fn_80007818(f28 + lbl_8036B234, f27 + lbl_8036B238, lbl_8036B234, lbl_8036B238);
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 8), 1, 0x11);
        fn_8000A248();
        fn_80007898(1);
        f29 = f28 + width;
        f25 = f29 - lbl_8036B234;
        fn_80007838(f25, f27, lbl_8036B220, lbl_8036B220);
        f22 = f25 + lbl_8036B234;
        fn_80007818(f22, f27 + lbl_8036B238, lbl_8036B234, lbl_8036B238);
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 8), 2, 0x11);
        fn_8000A248();
        fn_80007898(1);
        f31 = f27 + (f32)h;
        f24 = f31 - lbl_8036B23C;
        fn_80007838(f28, f24, lbl_8036B220, lbl_8036B220);
        f23 = f24 + lbl_8036B23C;
        fn_80007818(f28 + lbl_8036B234, f23, lbl_8036B234, lbl_8036B23C);
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 8), 3, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(f25, f24, lbl_8036B220, lbl_8036B220);
        fn_80007818(f22, f23, lbl_8036B234, lbl_8036B23C);
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 8), 4, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(f28 + lbl_8036B234, f27, lbl_8036B220, lbl_8036B220);
        w2 = (width - lbl_8036B234) - lbl_8036B234;
        x3 = (f28 + lbl_8036B234) + w2;
        fn_80007818(x3, f27 + lbl_8036B224, w2, lbl_8036B224);
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 8), 4, 0x11);
        fn_8000A248();
        fn_80007898(1);
        y2 = f31 - lbl_8036B240;
        fn_80007838(f28 + lbl_8036B234, y2, lbl_8036B220, lbl_8036B220);
        fn_80007818(x3, y2 + lbl_8036B224, w2, lbl_8036B224);
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 8), 5, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(f30, f27 + lbl_8036B238, lbl_8036B220, lbl_8036B220);
        w2 = ((f32)h - lbl_8036B238) - lbl_8036B23C;
        y2 = (f27 + lbl_8036B238) + w2;
        fn_80007818(f30 + lbl_8036B224, y2, lbl_8036B224, w2);
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 8), 5, 0x11);
        fn_8000A248();
        fn_80007898(1);
        x3 = f29 - lbl_8036B244;
        fn_80007838(x3, f27 + lbl_8036B238, lbl_8036B220, lbl_8036B220);
        fn_80007818(x3 + lbl_8036B224, y2, lbl_8036B224, w2);
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009C0C(lbl_8036B230);
        fn_8000A248();
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();

        if (mode == 1) {
            tx = (s16)(0x130 - ((fn_80010B78((u8 *)self + 0x94, -1, lbl_8036B228) >> 1) & 0x7FFF));
            fn_8001003C(tx, (s32)(lbl_8036B248 + f27), 1, 1, 0, lbl_8027C5A8 + 0x1C, (u8 *)self + 0x94, lbl_8036B228, lbl_8036B220);
        } else {
            tx = (s16)(0x130 - ((fn_80010B78((u8 *)self + 0x94, -1, lbl_8036B228) >> 1) & 0x7FFF));
            fn_8001003C(tx, (s32)(lbl_8036B24C + f27), 1, 1, 0, lbl_8027C5A8 + 0x1C, (u8 *)self + 0x94, lbl_8036B228, lbl_8036B220);
            fn_80010B78((u8 *)self + 0x114, -1, lbl_8036B228);
            fn_8001003C(tx, (s32)(lbl_8036B250 + f27), 1, 1, 0, lbl_8027C5A8 + 0x1C, (u8 *)self + 0x114, lbl_8036B228, lbl_8036B220);
        }
        fn_8000A258();
        fn_80009C0C(lbl_8036B22C);
        fn_8000A248();
    } else {
        fn_8000A258();
        fn_80009D74(lbl_8036B220, lbl_8036B220, lbl_8036B224, lbl_8036B228);
        fn_80009B8C(0xFF);
        fn_8000A248();
        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 8), 6, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B254, lbl_8036B21C, lbl_8036B220, lbl_8036B220);
        fn_80007818(lbl_8036B258, lbl_8036B25C, lbl_8036B260, lbl_8036B264);
        fn_80007698(0xFF);
        fn_80007884();
        fn_8000A258();
        fn_80009C0C(lbl_8036B230);
        fn_8000A248();
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        tx = (s16)(0x130 - ((fn_80010B78((u8 *)self + 0x94, -1, lbl_8036B228) >> 1) & 0x7FFF));
        fn_8001003C(tx, (s32)lbl_8036B268, 2, 0, 0, lbl_8027C5A8 + 0x1C, (u8 *)self + 0x94, lbl_8036B228, lbl_8036B220);
        fn_8000A258();
        fn_80009C0C(lbl_8036B228);
        fn_8000A248();
    }
}

#pragma opt_common_subs off
void fn_801B8334(void *arg0) {
    s32 fn_8005C6A0(void *);
    void fn_8006EEFC(void *, void *);
    extern u8 lbl_8027C5A8[];
    u8 *temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 **, 0x30);
    if (fn_8005C6A0(lbl_8027C5A8 + 0xA) & 0x2000) {
        fn_8006EEFC(temp_r31 + 8, lbl_8027C5A8 + 0xA);
        fn_8000C188(arg0);
    }
}

extern f32 lbl_8036B228;
void fn_801B839C(void *arg0) {
    s32 temp_r30;
    s32 var_r26;
    s32 var_r3;
    u8 *var_r27;
    u8 temp_r3;
    void *temp_r28;

    if (arg0 != NULL) {
        temp_r28 = *(void**)((char*)arg0 + 0x30);
        *(u32*)((char*)temp_r28 + 0x0) = 0;
        *(u32*)((char*)temp_r28 + 0x4) = 0;
        fn_8005C8B4(0);
        if (*(u32*)((char*)temp_r28 + 0x90) != 0) {
            fn_801475FC(0x64);
        }
        *(u32*)((char*)temp_r28 + 0x194) = 1;
        fn_80234450((void*)((char*)temp_r28 + 0x94), (void*)((char*)temp_r28 + 0x10));
        var_r27 = (u8*)((char*)temp_r28 + 0x10);
        var_r26 = 0;
loop_7:
        temp_r3 = *var_r27;
        if ((s8) temp_r3 != 0) {
            if ((s8) temp_r3 == 0xA) {
                memcpy((void*)((char*)temp_r28 + 0x94), (void*)((char*)temp_r28 + 0x10), var_r26);
                *(u8*)((char*)temp_r28 + (var_r26 + 0x94)) = 0;
                fn_80234450((void*)((char*)temp_r28 + 0x114), (void*)((char*)var_r27 + 1));
                *(u32*)((char*)temp_r28 + 0x194) = 2;
            }
            var_r27 += 1;
            var_r26 += 1;
            goto loop_7;
        }
        temp_r30 = fn_80010B78((void*)((char*)temp_r28 + 0x94), -1, lbl_8036B228);
        if (*(u32*)((char*)temp_r28 + 0x194) == 2) {
            var_r3 = fn_80010B78((void*)((char*)temp_r28 + 0x114), -1, lbl_8036B228);
        } else {
            var_r3 = 0;
        }
        if (temp_r30 > var_r3) {
            *(u32*)((char*)temp_r28 + 0xC) = temp_r30;
        } else {
            *(u32*)((char*)temp_r28 + 0xC) = var_r3;
        }
        fn_8000C188(arg0);
    }
}

#pragma opt_common_subs reset
#pragma opt_loop_invariants off
void fn_801B84C0(void) {
    char *fn_8000E0E4(u32);
    u32 fn_800A8A88(u32);
    void fn_800056CC(const char *, ...);
    extern char lbl_8027C5C8[];
    extern struct {
        u32 unk0;
        u32 unk4;
        u8 unk8;
        s8 unk9;
    } *lbl_80367214;
    struct {
        u32 unk0;
        u32 unk4;
        u8 unk8;
        s8 unk9;
    } *p;

    for (p = (void *)lbl_80367214; p->unk0 != 0; p++) {
        fn_800056CC(lbl_8027C5C8 + 8, fn_8000E0E4(fn_800A8A88(p->unk0)), fn_8000E0E4(fn_800A8A88(p->unk4)), p->unk8, p->unk9);
    }
}

s32 fn_801B8550(void *arg0) {
    extern u16 lbl_80331D00[];
    
    void **temp_r31_ptr;
    void *temp_r31;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r3;
    u16 *var_r4;
    
    temp_r31_ptr = (void **)((char *)arg0 + 0x30);
    temp_r31 = *temp_r31_ptr;
    if (temp_r31 == NULL) {
        return 0;
    }
    
    temp_r0 = *(s32 *)((char *)temp_r31 + 0x18);
    if ((temp_r0 & 0x400) != 0) {
        return 1;
    } else if ((temp_r0 & 0x800) != 0) {
        return 1;
    }
    
    temp_r3 = *(s32 *)((char *)temp_r31 + 0x44);
    var_r4 = &lbl_80331D00[temp_r3];
    if (var_r4[0] == 0) {
        return 0;
    }
    
    var_r3 = *(s32 *)((char *)temp_r31 + 0x14);
    if ((var_r3 & 0x80000000) != 0) {
        return 1;
    }
    
    temp_r3 = *(s32 *)((char *)temp_r31 + 0x1C);
    if (temp_r3 == 0) {
        return 0;
    }
    
    if ((*(u8 *)((char *)arg0 + 0x10) & 0xE0) != 0) {
        return 1;
    }
    
    if ((*(u8 *)((char *)temp_r31 + 0x28) & 0x80) != 0) {
        return 1;
    }
    
    if ((*(u8 *)((char *)temp_r31 + 0x3D) & 0x80) != 0) {
        return 1;
    }
    
    return 0;
}

#pragma opt_loop_invariants reset
void fn_801B8798(void) {
    u32 fn_80019E8C(u32);
    extern struct {
        u32 unk0;
        u32 unk4;
        u8 unk8;
        s8 unk9;
    } *lbl_80367214;
    u32 *p;

    for (p = (u32 *)lbl_80367214; p[0] != 0; p += 3) {
        p[0] = fn_80019E8C(p[0]);
        p[1] = fn_80019E8C(p[1]);
    }
}

void fn_801B87E8(s32 arg0) {
    void *fn_800C42D8(s32);
    void fn_801B77E8(void *, s32);
    void fn_801B794C(void *);
    s32 fn_801B7734(void *);
    s32 fn_801B767C(void *);
    u8 fn_801E33F4(void *);
    void *fn_8000CAA0(void *, s32);
    void *fn_800C4638(s32, void *, s32);
    extern u8 lbl_80330708[];
    extern u8 lbl_80331FB8[];
    extern u8 lbl_80297BA8[];
    extern u8 lbl_8027C5E8[];
    void *alloc;
    void *obj;
    void *sub;
    u8 *base;

    alloc = fn_800C42D8(0x22C);
    base = lbl_80330708;
    fn_801B77E8(alloc, *(s32 *)(base + 0x1C));
    fn_801B794C(alloc);
    *(s16 *)(lbl_80330708 + 0x72) = fn_801B7734(alloc);
    *(s32 *)(base + 0x1C) = fn_801B767C(alloc);
    if (((u32)(lbl_80330708[0x9E] & 1) != 1) && fn_801E33F4(lbl_80331FB8)) {
        obj = fn_8000CAA0(lbl_80297BA8, arg0);
        *(void **)((u8 *)obj + 0x30) = fn_800C4638(0x2C, lbl_8027C5E8 + 0x57, 0);
        *(s32 *)((u8 *)obj + 0x34) = 0;
        sub = *(void **)((u8 *)obj + 0x30);
        *(s32 *)((u8 *)sub + 8) = 0;
        *(void **)((u8 *)sub + 0xC) = alloc;
    }
}

void fn_801B88D4(void *arg0) {
    void fn_800C428C(s32);
    void fn_8000C60C(void *);
    void fn_8006EDA0(void *);
    void fn_800C4588(void *);
    struct {
        u8 pad[8];
        void *unk8;
        s32 unkC;
    } *work = M2C_FIELD(arg0, void **, 0x30);

    fn_800C428C(work->unkC);
    if (M2C_FIELD(arg0, void **, 0x34) != NULL) {
        fn_8000C60C(M2C_FIELD(arg0, void **, 0x34));
    }
    if (work->unk8 != NULL) {
        fn_8006EDA0(&work->unk8);
    }
    fn_800C4588(work);
}

#pragma global_optimizer off
void fn_801B893C(void *arg0) {
    void fn_8000C188(void);
    void fn_801475FC(void *, s32);
    s32 fn_801B767C(void *);
    s32 fn_801B7734(void *);
    extern u8 lbl_8027C5E8[];
    extern void *lbl_80367240;
    extern s32 lbl_80368258;
    extern s8 lbl_8036825C;

    void *pad;
    void *st;
    void *data;
    s32 state;
    s32 btn;

    pad = lbl_80367240;
    st = *(void **)((u8 *)arg0 + 0x30);
    btn = *(s32 *)((u8 *)pad + 4);
    {
        s32 x = *(s32 *)((u8 *)pad + 8);
        data = *(void **)((u8 *)st + 0xc);
        btn = btn & (x ^ btn);
    }
    if (lbl_8036825C == 0) {
        pad = 0;
        lbl_80368258 = (s32)pad;
        lbl_8036825C = 1;
    }
    state = *(s32 *)st;
    switch (state) {
    case 0:
        *(s32 *)st = 1;
        *(s32 *)((u8 *)st + 4) = 0;
        lbl_80368258 = 0;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        if (*(s32 *)((u8 *)data + 0x224) == 0) {
            *(s32 *)st = 6;
            *(s32 *)((u8 *)st + 4) = 0;
            break;
        }
        if ((btn & 0x100) != 0 || (btn & 0x200) != 0) {
            void *p = data;
            void *q = st;
            s32 i = 0;
            goto loop_cond;
        loop_body:
            *(s32 *)((u8 *)q + 0x10) = *(s32 *)((u8 *)p + 0x200);
            p = (u8 *)p + 4;
            i += 1;
            q = (u8 *)q + 4;
        loop_cond:
            if (i < *(s32 *)((u8 *)data + 0x224)) {
                goto loop_body;
            }
            *(s32 *)((u8 *)st + 0x24) = fn_801B7734(data);
            *(s32 *)((u8 *)st + 0x28) = fn_801B767C(data);
            *(s32 *)st = 6;
            break;
        }
        {
            s32 idx = state - 1;
            void *slot = (u8 *)st + (idx * 4);
            void *src = (u8 *)data + (idx * 4);
            s32 cur = *(s32 *)((u8 *)slot + 0x10);
            if (cur >= *(s32 *)((u8 *)src + 0x200)) {
                *(s32 *)((u8 *)slot + 0x10) = *(s32 *)((u8 *)src + 0x200);
                *(s32 *)((u8 *)st + 4) = *(s32 *)((u8 *)st + 4) + 1;
                if (*(s32 *)((u8 *)st + 4) >= 0xA) {
                    if (idx < *(s32 *)((u8 *)data + 0x224) - 1) {
                        *(s32 *)st = *(s32 *)st + 1;
                        *(s32 *)((u8 *)st + 4) = 0;
                        lbl_80368258 = 0;
                    } else {
                        *(s32 *)st = 6;
                        *(s32 *)((u8 *)st + 4) = 0;
                    }
                }
                break;
            }
            *(s32 *)((u8 *)slot + 0x10) = cur + 7;
            *(s32 *)((u8 *)st + 0x24) = *(s32 *)((u8 *)st + 0x24) + 7;
            if (*(s32 *)((u8 *)st + 0x24) > fn_801B7734(data)) {
                *(s32 *)((u8 *)st + 0x24) = fn_801B7734(data);
            }
            *(s32 *)((u8 *)st + 0x28) = *(s32 *)((u8 *)st + 0x28) + 7;
            if (*(s32 *)((u8 *)st + 0x28) > fn_801B767C(data)) {
                *(s32 *)((u8 *)st + 0x28) = fn_801B767C(data);
            }
            if (lbl_80368258 == 0) {
                fn_801475FC(lbl_8027C5E8 + 0x58, 0x64);
            }
            {
                s32 t = lbl_80368258 + 1;
                lbl_80368258 = t;
                lbl_80368258 = t % 4;
            }
        }
        break;
    case 6:
        if ((btn & 0x100) != 0 || (btn & 0x200) != 0) {
            fn_8000C188();
        }
        break;
    }
}

#pragma use_lmw_stmw on
void fn_801B8B94(void *arg0) {
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A248(void);
    void fn_80009C0C(f32);
    void fn_80009F90(void *, s32, s32);
    void fn_80007898(s32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_800075D8(void);
    void fn_80007884(void);
    void fn_8000A174(s32, s32);
    void *fn_8000E0E4(void *);
    s32 fn_80010B78(void *, s32, f32);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    void **fn_8006EDD8(void *, s32);
    s32 *fn_8018D900(s32);
    void fn_80007870(f32);
    void fn_800076AC(u8, u8, u8, s32);
    void *fn_801B77F0(void *, s32);
    extern f32 lbl_8036B278, lbl_8036B27C, lbl_8036B280, lbl_8036B284, lbl_8036B288;
    extern f32 lbl_8036B28C, lbl_8036B290, lbl_8036B294, lbl_8036B298, lbl_8036B29C;
    extern f32 lbl_8036B2A0, lbl_8036B2A4, lbl_8036B2A8, lbl_8036B2AC, lbl_8036B2B0;
    extern f32 lbl_8036B2B4, lbl_8036B2B8;
    extern u8 lbl_8027C5E8[];

    u8 color[4];
    u8 color2[4];
    void *self;
    void *str;
    f32 w, h;
    u16 tw, th;
    u16 tw2, th2;
    s32 i;
    s32 y;
    void *p;
    void **tex;

    self = *(void **)((u8 *)arg0 + 0x30);
    fn_8000A258();
    fn_80009D74(lbl_8036B278, lbl_8036B278, lbl_8036B27C, lbl_8036B280);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B284);
    fn_8000A248();
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 8), 1, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B288, lbl_8036B28C, lbl_8036B278, lbl_8036B278);
    fn_80007818(lbl_8036B290, lbl_8036B294, lbl_8036B288, lbl_8036B298);
    fn_800075D8();
    fn_80007884();
    fn_80007898(1);
    fn_80007838(lbl_8036B278, lbl_8036B28C, lbl_8036B288, lbl_8036B278);
    fn_80007818(lbl_8036B288, lbl_8036B294, lbl_8036B278, lbl_8036B298);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B284);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    str = fn_8000E0E4(lbl_8027C5E8 + 0x6C);
    fn_8001003C((s32)(lbl_8036B288 - lbl_8036B29C * (f32)fn_80010B78(str, -1, lbl_8036B280)),
                0x20, 2, 0, 0, str, lbl_8036B280, lbl_8036B278);
    fn_8000A258();
    fn_80009C0C(lbl_8036B2A0);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B284);
    fn_8000A248();
    tex = fn_8006EDD8(*(void **)((u8 *)self + 8), 0);
    {
        u16 *dims = (u16 *)*tex;
        w = (f32)dims[0];
        h = (f32)dims[1];
    }
    *(s32 *)color = *fn_8018D900(1);
    tex = fn_8006EDD8(*(void **)((u8 *)self + 8), 0);
    {
        u16 *dims = (u16 *)*tex;
        th = dims[1];
        tw = dims[0];
    }
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 8), 0, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_8036B278);
    fn_80007838(lbl_8036B2A4, lbl_8036B2A8, lbl_8036B278, lbl_8036B278);
    fn_80007818(lbl_8036B2A4 + h, lbl_8036B2A8 + w, (f32)th, (f32)tw);
    fn_800076AC(color[0], color[1], color[2], 0xFF);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B284);
    fn_8000A248();
    i = 0;
    y = 0;
    p = self;
    while (i < *(s32 *)((u8 *)*(void **)((u8 *)self + 0xC) + 0x224)) {
        f32 fy = lbl_8036B2AC + (f32)y;
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001003C(0x68, (s32)fy, 1, 1, 0, fn_801B77F0(*(void **)((u8 *)self + 0xC), i),
                    lbl_8036B280, lbl_8036B278);
        fn_8001003C(0x19E, (s32)fy, 6, 1, 0, lbl_8027C5E8 + 0x79,
                    lbl_8036B280, lbl_8036B278, *(void **)((u8 *)p + 0x10));
        y += 0x20;
        p = (u8 *)p + 4;
        i += 1;
    }
    fn_8001003C(0x166, 0x114, 0x19, 0, 1, fn_8000E0E4(lbl_8027C5E8 + 0x7D),
                lbl_8036B280, lbl_8036B278);
    fn_8001003C(0x19E, 0x114, 6, 1, 0, lbl_8027C5E8 + 0x79,
                lbl_8036B280, lbl_8036B278, *(void **)((u8 *)self + 0x24));
    fn_8001003C(0x1F2, 0x114, 0x19, 0, 1, lbl_8027C5E8 + 0x8B,
                lbl_8036B280, lbl_8036B278);
    fn_8000A258();
    fn_80009C0C(lbl_8036B2A0);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B284);
    fn_8000A248();
    tex = fn_8006EDD8(*(void **)((u8 *)self + 8), 2);
    {
        u16 *dims = (u16 *)*tex;
        w = (f32)dims[0];
        h = (f32)dims[1];
    }
    *(s32 *)color2 = *fn_8018D900(1);
    tex = fn_8006EDD8(*(void **)((u8 *)self + 8), 2);
    {
        u16 *dims = (u16 *)*tex;
        th2 = dims[1];
        tw2 = dims[0];
    }
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 8), 2, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_8036B278);
    fn_80007838(lbl_8036B288, lbl_8036B2B0, lbl_8036B278, lbl_8036B278);
    fn_80007818(lbl_8036B288 + h, lbl_8036B2B0 + w, (f32)th2, (f32)tw2);
    fn_800076AC(color2[0], color2[1], color2[2], 0xCD);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B284);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_8001003C((s32)lbl_8036B2B4, 0x15E, 0x19, 1, 0, fn_8000E0E4(lbl_8027C5E8 + 0x8E),
                lbl_8036B280, lbl_8036B278);
    fn_8001003C(0x17E, 0x158, 6, 1, 0, lbl_8027C5E8 + 0x79,
                lbl_8036B2B8, lbl_8036B278, *(void **)((u8 *)self + 0x28));
    fn_8001003C(0x1F0, 0x158, 0x19, 1, 1, lbl_8027C5E8 + 0x8B,
                lbl_8036B2B8, lbl_8036B278);
    fn_8000A258();
    fn_80009C0C(lbl_8036B2A0);
    fn_8000A248();
}

#pragma global_optimizer off
void fn_801B91D8(void *arg0) {
    s32 fn_80059208(void *, void *);
    s32 fn_8005C6A0(void *);
    void fn_8006EEFC(void *, void *);
    void fn_8000C188(void *);
    void fn_801B8B94(void *);
    extern u8 lbl_8027C5E8[];
    void *temp_r31;

    temp_r31 = *(void **)((char *)arg0 + 0x30);
    if (fn_8005C6A0(lbl_8027C5E8 + 0x9C) & 0x2000) {
        fn_8006EEFC((char *)temp_r31 + 8, lbl_8027C5E8 + 0x9C);
        *(s32 *)((char *)arg0 + 0x34) = fn_80059208(fn_801B8B94, arg0);
        fn_8000C188(arg0);
    }
}
#pragma global_optimizer on
void fn_801B9254(void *arg0) {
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    M2C_UNK fn_8005C8B4(void *);
    M2C_UNK fn_80147188(M2C_UNK);
    s32 fn_801B767C(void *);
    s32 fn_801B7734(void *);
    extern u8 lbl_8027C5E8[];
    s32 temp_r31;
    void *temp_r30;

    temp_r30 = *(void **)((u8 *)arg0 + 0x30);
    fn_80147188(0x3E8);
    if (*(s32 *)((u8 *)*(void **)((u8 *)temp_r30 + 0xC) + 0x220) == 0) {
        fn_8000C070(arg0, 0x63);
        return;
    }
    *(s32 *)((u8 *)temp_r30 + 0) = 0;
    *(s32 *)((u8 *)temp_r30 + 4) = 0;
    *(s32 *)((u8 *)temp_r30 + 0x10) = 0;
    *(s32 *)((u8 *)temp_r30 + 0x14) = 0;
    *(s32 *)((u8 *)temp_r30 + 0x18) = 0;
    *(s32 *)((u8 *)temp_r30 + 0x1C) = 0;
    *(s32 *)((u8 *)temp_r30 + 0x20) = 0;
    *(s32 *)((u8 *)temp_r30 + 0x24) = 0;
    temp_r31 = fn_801B767C(*(void **)((u8 *)temp_r30 + 0xC));
    *(s32 *)((u8 *)temp_r30 + 0x28) = temp_r31 - fn_801B7734(*(void **)((u8 *)temp_r30 + 0xC));
    fn_8005C8B4(lbl_8027C5E8 + 0x9C);
}

void fn_801B9300(void *arg0) {
    void fn_8013AD70(void *, s32);
    s32 fn_8013AC54(void *);
    void fn_80138808(void *, s32);
    void fn_80137EA0(void *, s32);
    void fn_8017BB94(void *);
    s32 fn_8017C3C8(s32);
    void fn_8000C070(void *, u8);
    extern u8 lbl_80330708[];
    extern f64 lbl_8036B2D0;
    void *r28;
    void *r31;
    s32 r30;
    void *r29;
    u8 kind;

    r28 = arg0;
    r31 = *(void **)((u8 *)r28 + 0x48);
    fn_8013AD70(r31, *(s32 *)(lbl_80330708 + 0xB0));
    r30 = fn_8013AC54(r31);
    kind = *(u8 *)((u8 *)r28 + 0x44);
    switch (kind) {
    case 4:
        r31 = *(void **)((u8 *)r28 + 0x54);
        r29 = *(void **)((u8 *)r28 + 0x58);
        fn_80138808(*(void **)((u8 *)r28 + 0x4C), r30);
        fn_80137EA0(r31, r30);
        *(s32 *)((u8 *)r29 + 0x3C) = r30;
        break;
    case 16:
        *(s32 *)((u8 *)*(void **)((u8 *)r28 + 0x64) + 0x3C) = r30;
        r31 = *(void **)((u8 *)r28 + 0x60);
        *(s32 *)((u8 *)r31 + 0x4C) = r30;
        fn_8017BB94(r31);
        *(f32 *)((u8 *)r31 + 0x50) = (f32)fn_8017C3C8(r30);
        break;
    }
    fn_8000C070(r28, *(u8 *)((u8 *)r28 + 0x44));
}

void fn_801B93F4(void *arg0) {
    void fn_8013AD70(void *, s32);
    s32 fn_8013AC54(void *);
    void fn_80138808(void *, s32);
    void fn_80137EA0(void *, s32);
    void fn_8017BB94(void *);
    s32 fn_8017C3C8(s32);
    extern u8 lbl_80330708[];
    extern f64 lbl_8036B2D0;
    void *r28;
    void *r31;
    s32 r30;
    void *r29;
    u8 kind;

    r28 = arg0;
    r31 = *(void **)((u8 *)r28 + 0x48);
    fn_8013AD70(r31, *(s32 *)(lbl_80330708 + 0xAC));
    r30 = fn_8013AC54(r31);
    kind = *(u8 *)((u8 *)r28 + 0x44);
    switch (kind) {
    case 4:
        r31 = *(void **)((u8 *)r28 + 0x54);
        r29 = *(void **)((u8 *)r28 + 0x58);
        fn_80138808(*(void **)((u8 *)r28 + 0x4C), r30);
        fn_80137EA0(r31, r30);
        *(s32 *)((u8 *)r29 + 0x3C) = r30;
        break;
    case 16:
        *(s32 *)((u8 *)*(void **)((u8 *)r28 + 0x64) + 0x3C) = r30;
        r31 = *(void **)((u8 *)r28 + 0x60);
        *(s32 *)((u8 *)r31 + 0x4C) = r30;
        fn_8017BB94(r31);
        *(f32 *)((u8 *)r31 + 0x50) = (f32)fn_8017C3C8(r30);
        break;
    }
}

void fn_801B94DC(void *arg0)
{
    void fn_8000C070(void *, u8);
    fn_8000C070(arg0, *(u8 *)((char *)arg0 + 0x44));
}

#pragma cplusplus on
extern "C" void fn_801B9500(void *arg0) {
    void fn_8014004C(void *, void *);
    struct Obj {
        virtual void destroy(s32) = 0;
        s32 refcount;
    };
    Obj *temp;
    s32 refs;

    fn_8014004C(arg0, M2C_FIELD(arg0, void **, 0x48));
    fn_8014004C(arg0, M2C_FIELD(arg0, void **, 0x64));
    fn_8014004C(arg0, M2C_FIELD(arg0, void **, 0x50));
    fn_8014004C(arg0, M2C_FIELD(arg0, void **, 0x60));

    temp = M2C_FIELD(arg0, Obj **, 0x48);
    if (temp != NULL) {
        refs = temp->refcount - 1;
        temp->refcount = refs;
        if (refs == 0 && temp != NULL) {
            temp->destroy(1);
        }
        M2C_FIELD(arg0, void **, 0x48) = NULL;
    }

    temp = M2C_FIELD(arg0, Obj **, 0x64);
    if (temp != NULL) {
        refs = temp->refcount - 1;
        temp->refcount = refs;
        if (refs == 0 && temp != NULL) {
            temp->destroy(1);
        }
        M2C_FIELD(arg0, void **, 0x64) = NULL;
    }

    temp = M2C_FIELD(arg0, Obj **, 0x50);
    if (temp != NULL) {
        refs = temp->refcount - 1;
        temp->refcount = refs;
        if (refs == 0 && temp != NULL) {
            temp->destroy(1);
        }
        M2C_FIELD(arg0, void **, 0x50) = NULL;
    }

    temp = M2C_FIELD(arg0, Obj **, 0x60);
    if (temp != NULL) {
        refs = temp->refcount - 1;
        temp->refcount = refs;
        if (refs == 0 && temp != NULL) {
            temp->destroy(1);
        }
        M2C_FIELD(arg0, void **, 0x60) = NULL;
    }
}

extern "C" void fn_801B9654(void *arg0) {
    void *fn_8013FF94(void *, s32, s32);
    void fn_8017BB94(void *);
    u32 fn_8017BC94(void *);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_8000C070(void *, s32);
    extern f32 lbl_8036B2D8;
    struct { s16 x; s16 y; } spC;
    struct { s16 x; s16 y; } sp8;
    void *list;
    void *obj82;
    void *obj108;
    s16 tmp;
    f32 f;
    s32 one;

    list = *(void **)((u8 *)arg0 + 0x60);
    obj82 = fn_8013FF94(arg0, 0x82, 0);
    obj108 = fn_8013FF94(arg0, 0x108, 0);
    fn_8017BB94(list);
    if (fn_8017BC94(list) == 0) {
        spC.x = *(s16 *)((u8 *)obj82 + 0xA);
        spC.y = -0x3A;
        fn_80140258(arg0, obj82, &spC.x, 0);
        tmp = *(s16 *)((u8 *)obj108 + 0xC);
        sp8.x = 0x260;
        sp8.y = tmp;
        fn_80140258(arg0, obj108, &sp8.x, 1);
        fn_8000C070(arg0, 0x11);
    } else {
        one = 1;
        f = lbl_8036B2D8;
        *(u8 *)((u8 *)list + 0x3C) = one;
        *(f32 *)((u8 *)obj82 + 0x30) = f;
        *(f32 *)((u8 *)obj108 + 0x30) = f;
    }
}

#pragma cplusplus reset
void fn_801B9748(void *a) {
    void *fn_8013FF94(void *, s32, s32);
    s32 fn_80019DF0(u8);
    void fn_8017A9F0(void *, s32, void *);
    extern u8 lbl_802EF4C8[];
    extern f32 lbl_8036B2DC;

    void *p;
    void *q;
    s32 x;

    p = fn_8013FF94(a, 0x82, 0);
    *(f32 *)((u8 *)p + 0x30) = lbl_8036B2DC;

    p = fn_8013FF94(a, 0x108, 0);
    *(f32 *)((u8 *)p + 0x30) = lbl_8036B2DC;

    x = fn_80019DF0(lbl_802EF4C8[0x14]);
    q = *(void **)((u8 *)a + 0x60);
    *(u8 *)((u8 *)q + 0x3C) = 0;
    fn_8017A9F0(q, x, a);
}

void fn_801B97C8(s32 arg0) {
    extern u8 lbl_802EF4C8[];
    switch ((s32)lbl_802EF4C8[8]) {
    case 0x81:
        fn_8000C188(arg0);
        return;
    case 0x80:
        fn_8000C070(arg0, 0x18);
        return;
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801B9978(void *arg0) {
 void fn_8000C070(void *,s32); void fn_8000C188(void *);
 s32 fn_80105814(void *); void fn_8013FDA0(void *); void *fn_8013FF94(void *,s32,s32);
 void fn_801475FC(void *,s32); u8 fn_80166D8C(void *);
 void fn_80167190(void *,s32,f32,f32); void fn_801673D0(void *);
 void fn_8016758C(void *,void *,s32,f32,f32); void *fn_8017B908(void *);
 extern u8 lbl_8027C698[],lbl_802EF4C8[],lbl_80330D68[];
 extern u32 lbl_80367110; extern void *lbl_80367240; extern s32 lbl_80368DC4;
 class Pair { public: s16 x,y; Pair() {} Pair(s16 a,s16 b):x(a),y(b) {} Pair(const Pair &o) { *(u32 *)this=*(u32 *)&o; } Pair &operator=(const Pair &o) { *(u32 *)this=*(u32 *)&o; return *this; } };
 void fn_80140258(void *,void *,const Pair &,s32);
 struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual Pair v9(); };
 void *list,*obj,*unit,*self,*temp;
 register int btn;
 s32 a;
 u8 gate;
 s32 flags;
 u32 pos1,pos2;
 self=arg0;
 list=M2C_FIELD(self,void **,0x60);
 obj=fn_8013FF94(self,0x108,0);
 unit=fn_8017B908(list);
 fn_8013FDA0(self);
 if(unit!=fn_8017B908(list)) {
 unit=fn_8017B908(list);
 if(fn_80166D8C(lbl_80330D68)) {
 if(unit) {
 *(Pair *)&pos1=((Obj *)list)->v9();
 fn_80167190(lbl_80330D68,fn_80105814(unit),(f32)*(s16 *)&pos1,(f32)*((s16 *)&pos1+1));
 } else fn_801673D0(lbl_80330D68);
 }
 }
 M2C_FIELD(obj,void **,0x3C)=unit;
 gate=0; flags=lbl_80367110;
 if((flags&0x10)&&!(flags&0x20)) gate=1;
 if(!gate) {
 a=M2C_FIELD(lbl_80367240,s32 *,4);
 btn=a&(M2C_FIELD(lbl_80367240,s32 *,8)^a);
 if((btn&0x100)&&unit&&!fn_80166D8C(lbl_80330D68)) {
 lbl_802EF4C8[0x14]=M2C_FIELD(unit,u8 *,0x18);
 fn_801475FC(lbl_8027C698+0x10C,100); fn_8000C188(self);
 } else if((btn&0x800)&&!fn_80166D8C(lbl_80330D68)&&unit) {
 *(Pair *)&pos2=((Obj *)list)->v9();
 fn_8016758C(lbl_80330D68,self,fn_80105814(unit),(f32)*(s16 *)&pos2,(f32)*((s16 *)&pos2+1));
 *(s32 *)lbl_80330D68|=lbl_80368DC4;
 } else if((btn&0xA00)&&fn_80166D8C(lbl_80330D68)) {
 fn_801673D0(lbl_80330D68);
 } else if((btn&0x200)&&!fn_80166D8C(lbl_80330D68)) {
 fn_80140258(self,obj,Pair(0x260,M2C_FIELD(obj,s16 *,0xC)),1);
 temp=fn_8013FF94(self,0x82,0);
 fn_80140258(self,temp,Pair(M2C_FIELD(temp,s16 *,0xA),-0x3A),0);
 fn_801475FC(lbl_8027C698+0x11C,100);
 fn_8000C070(self,0x11);
 }
 }
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus on
extern "C" void fn_801B9D94(void *arg0) {
    void *fn_800C42D8(s32);
    void fn_8013FF00(void *, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801400F4(void *, void *);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_801402A0(void *, void *, s16 *, s32);
    void fn_801475FC(void *, s32);
    void fn_801658DC(void *, void *, s32, s32);
    s32 fn_8017B908(void *);
    void fn_8017BB94(void *);

    extern u8 lbl_8027C698[];
    extern void *lbl_8028FDB0[];
    extern void *lbl_8029186C[];
    extern void *lbl_80292230[];
    extern void *lbl_80293C2C[];
    extern void *lbl_80293C84[];
    extern f32 lbl_8036B2D8;

    s16 pairC[2];
    s16 pair8[2];
    void *temp;
    void *obj1;
    void *obj2;
    void *child;
    s16 t0;
    s16 t1;
    s16 w;

    #pragma use_lmw_stmw on

    temp = fn_8013FF94(arg0, 0x100, 0);
    t0 = *(s16 *)((u8 *)temp + 0xC);
    t1 = *(s16 *)((u8 *)temp + 0x10);
    w = (s16)(t1 - t0);
    pairC[0] = *(s16 *)((u8 *)temp + 0xA);
    pairC[1] = -w;
    fn_80140258(arg0, temp, pairC, 0);
    child = *(void **)((u8 *)arg0 + 0x60);
    fn_8017BB94(child);
    *(u8 *)((u8 *)child + 0x3C) = 1;
    if (*(s16 *)((u8 *)child + 0xC) != 0x7C) {
        pair8[0] = *(s16 *)((u8 *)child + 0xA);
        pair8[1] = 0x7C;
        fn_801402A0(arg0, child, pair8, 0);
    }
    obj1 = fn_800C42D8(0x4C);
    if (obj1 != NULL) {
        *(void **)obj1 = lbl_8028FDB0;
        *(s32 *)((u8 *)obj1 + 4) = 0;
        *(void **)obj1 = lbl_80292230;
        *(s16 *)((u8 *)obj1 + 8) = -1;
        *(s16 *)((u8 *)obj1 + 0xA) = 0x260;
        *(s16 *)((u8 *)obj1 + 0xC) = 0x7C;
        *(s16 *)((u8 *)obj1 + 0xE) = 0x368;
        *(s16 *)((u8 *)obj1 + 0x10) = 0x16E;
        *(s16 *)((u8 *)obj1 + 0x12) = 0;
        *(s16 *)((u8 *)obj1 + 0x14) = 0;
        *(s16 *)((u8 *)obj1 + 0x16) = 0x108;
        *(s16 *)((u8 *)obj1 + 0x18) = 0xF2;
        *(s16 *)((u8 *)obj1 + 0x1A) = 0;
        *(s16 *)((u8 *)obj1 + 0x1C) = 0;
        ((u8 *)obj1)[0x1E] = 0xFF;
        ((u8 *)obj1)[0x1F] = 0xFF;
        ((u8 *)obj1)[0x20] = 0xFF;
        ((u8 *)obj1)[0x21] = 0xFF;
        *(s16 *)((u8 *)obj1 + 0x22) = 0x1E0;
        *(s16 *)((u8 *)obj1 + 0x24) = 0;
        *(f32 *)((u8 *)obj1 + 0x28) = lbl_8036B2D8;
        *(f32 *)((u8 *)obj1 + 0x2C) = lbl_8036B2D8;
        *(f32 *)((u8 *)obj1 + 0x30) = lbl_8036B2D8;
        *(s32 *)((u8 *)obj1 + 0x34) = 0;
        *(s32 *)((u8 *)obj1 + 0x38) = 0;
        *(void **)obj1 = lbl_8029186C;
        *(s32 *)((u8 *)obj1 + 0x3C) = 0;
        *(s16 *)((u8 *)obj1 + 0x40) = 0x14;
        *(s16 *)((u8 *)obj1 + 0x42) = 8;
        ((void (*)(void *))*(u32 *)(((u8 *)obj1) + 0x28))(obj1);
        *(s16 *)((u8 *)obj1 + 8) = 0x108;
        *(s16 *)((u8 *)obj1 + 0x24) = 8;
        *(s32 *)((u8 *)obj1 + 0x34) |= 0x10;
        *(s32 *)((u8 *)obj1 + 0x3C) = fn_8017B908(child);
        fn_801400F4(arg0, obj1);
    }
    obj2 = fn_800C42D8(0x58);
    if (obj2 != NULL) {
        *(void **)obj2 = lbl_8028FDB0;
        *(s32 *)((u8 *)obj2 + 4) = 0;
        *(void **)obj2 = lbl_80292230;
        *(s16 *)((u8 *)obj2 + 8) = -1;
        *(s16 *)((u8 *)obj2 + 0xA) = 0;
        *(s16 *)((u8 *)obj2 + 0xC) = -0x3A;
        *(s16 *)((u8 *)obj2 + 0xE) = 0x260;
        *(s16 *)((u8 *)obj2 + 0x10) = 0;
        *(s16 *)((u8 *)obj2 + 0x12) = 0;
        *(s16 *)((u8 *)obj2 + 0x14) = 0;
        *(s16 *)((u8 *)obj2 + 0x16) = 0x260;
        *(s16 *)((u8 *)obj2 + 0x18) = 0x3A;
        *(s16 *)((u8 *)obj2 + 0x1A) = 0;
        *(s16 *)((u8 *)obj2 + 0x1C) = 0;
        ((u8 *)obj2)[0x1E] = 0xFF;
        ((u8 *)obj2)[0x1F] = 0xFF;
        ((u8 *)obj2)[0x20] = 0xFF;
        ((u8 *)obj2)[0x21] = 0xFF;
        *(s16 *)((u8 *)obj2 + 0x22) = 0x258;
        *(s16 *)((u8 *)obj2 + 0x24) = 0;
        *(f32 *)((u8 *)obj2 + 0x28) = lbl_8036B2D8;
        *(f32 *)((u8 *)obj2 + 0x2C) = lbl_8036B2D8;
        *(f32 *)((u8 *)obj2 + 0x30) = lbl_8036B2D8;
        *(s32 *)((u8 *)obj2 + 0x34) = 0;
        *(s32 *)((u8 *)obj2 + 0x38) = 0;
        *(void **)obj2 = lbl_80293C84;
        *(s32 *)((u8 *)obj2 + 0x3C) = 0;
        *(s32 *)((u8 *)obj2 + 0x40) = 0;
        *(s32 *)((u8 *)obj2 + 0x44) = 0;
        *(s32 *)((u8 *)obj2 + 0x40) = 0;
        *(s32 *)((u8 *)obj2 + 0x48) = 0;
        ((u8 *)obj2)[0x4C] = 1;
        *(s16 *)((u8 *)obj2 + 0x4E) = 0;
        *(s16 *)((u8 *)obj2 + 0x50) = 0;
        *(s16 *)((u8 *)obj2 + 0x52) = 0;
        *(s16 *)((u8 *)obj2 + 0x54) = 0;
        *(void **)obj2 = lbl_80293C2C;
        *(s16 *)((u8 *)obj2 + 8) = 0x82;
        *(s32 *)((u8 *)obj2 + 0x34) |= 0x10;
        *(s16 *)((u8 *)obj2 + 0x4E) = 0x130;
        ((u8 *)obj2)[0x4C] = 2;
        *(s32 *)((u8 *)obj2 + 0x48) = 1;
        fn_801658DC(obj2, lbl_8027C698 + 0x12C, 2, 0x130);
        *(s16 *)((u8 *)obj2 + 0x24) = 8;
        fn_801400F4(arg0, obj2);
    }
    fn_8013FF00(arg0, child);
    fn_801475FC(lbl_8027C698 + 0x156, 0x64);
}
#pragma cplusplus reset

void fn_801BA200(void *arg0) {
    return;
}

#pragma cplusplus on
extern "C" void fn_801BA3E8(void *arg0) {
    void *fn_8013FF94(void *, s32, s32);
    void fn_8000C188(void *);
    void fn_8000C070(void *, s32);
    extern u8 lbl_802EF4C8[];
    class Pair {
    public:
        s16 x, y;
        Pair() {}
        Pair(s16 a, s16 b) : x(a), y(b) {}
        Pair(const Pair &o) { *(u32 *)this = *(u32 *)&o; }
        Pair &operator=(const Pair &o) {
            *(u32 *)this = *(u32 *)&o;
            return *this;
        }
    };
    void fn_80140258(void *, void *, const Pair &, s32);
    void *temp;

    temp = fn_8013FF94(arg0, 0x108, 0);
    switch ((s32)lbl_802EF4C8[8]) {
    case 0x81:
        fn_8000C188(arg0);
        return;
    case 0x80:
        fn_80140258(arg0, temp, Pair(0x260, *(s16 *)((u8 *)temp + 0xC)), 0);
        fn_8000C070(arg0, 0x13);
        return;
    }
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_801BA71C(void *arg0) {
void fn_8000C070(void *,s32); void fn_8000C188(void *);
s32 fn_80105814(void *); u8 fn_80105BC0(void *,u8); void *fn_801362C8(void *);
void fn_8013FDA0(void *); void *fn_8013FF94(void *,s32,s32);
void fn_801475FC(void *,s32); u8 fn_80166D8C(void *);
void fn_80167190(void *,s32,f32,f32); void fn_801673D0(void *);
void fn_8016758C(void *,void *,s32,f32,f32);
void fn_80176888(void *,void *,f32,f32); s32 fn_8017C3C8(void *);
extern u8 lbl_8027C698[],lbl_802EF4C8[],lbl_80330D68[];
extern u32 lbl_80367110; extern void *lbl_80367240; extern s32 lbl_80368DC4;
class Pair { public: s16 x,y; Pair() {} Pair(s16 a,s16 b):x(a),y(b) {} Pair(const Pair &o) { *(u32 *)this=*(u32 *)&o; } Pair &operator=(const Pair &o) { *(u32 *)this=*(u32 *)&o; return *this; } };
void fn_80140258(void *,void *,const Pair &,s32);
struct Obj { virtual void destroy(s32); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual Pair v9(); s32 refs; };
void *self,*owner,*unit,*temp;
s32 btn; u8 gate; s32 flags;
u32 pos1,pos2,pos3,pos4;
self=arg0; owner=*(void **)lbl_802EF4C8;
unit=fn_801362C8(M2C_FIELD(self,void **,0x68));
fn_8013FDA0(self);
if(unit!=fn_801362C8(M2C_FIELD(self,void **,0x68))) {
unit=fn_801362C8(M2C_FIELD(self,void **,0x68));
if(fn_80166D8C(lbl_80330D68)) {
if(unit) {
*(Pair *)&pos1=((Obj *)M2C_FIELD(self,void **,0x68))->v9();
fn_80167190(lbl_80330D68,fn_80105814(unit),(f32)*(s16 *)&pos1,(f32)*((s16 *)&pos1+1));
} else fn_801673D0(lbl_80330D68);
}
}
gate=0; flags=lbl_80367110;
if((flags&0x10)&&!(flags&0x20)) gate=1;
if(!gate) {
s32 a=M2C_FIELD(lbl_80367240,s32 *,4);
s32 changed=M2C_FIELD(lbl_80367240,s32 *,8)^a;
M2C_FIELD(M2C_FIELD(self,void **,0x6c),void **,0x3c)=unit;
btn=a&changed;
if((btn&0x100)&&unit&&!fn_80166D8C(lbl_80330D68)) {
s32 remaining=M2C_FIELD(M2C_FIELD(owner,void **,0x18c),u8 *,0x40);
remaining-=fn_8017C3C8(owner);
if(fn_80105BC0((u8 *)owner+0x1bc,M2C_FIELD(unit,u8 *,0x18))) {
*(Pair *)&pos2=((Obj *)M2C_FIELD(self,void **,0x68))->v9();
fn_80176888(lbl_8027C698+0x17a,self,(f32)*(s16 *)&pos2,(f32)*((s16 *)&pos2+1));
return;
}
if(remaining<M2C_FIELD(unit,u8 *,0x1a)) {
*(Pair *)&pos3=((Obj *)M2C_FIELD(self,void **,0x68))->v9();
fn_80176888(lbl_8027C698+0x18c,self,(f32)*(s16 *)&pos3,(f32)*((s16 *)&pos3+1));
return;
}
lbl_802EF4C8[0x14]=M2C_FIELD(unit,u8 *,0x18);
temp=M2C_FIELD(self,void **,0x68);
fn_80140258(self,temp,Pair(0x260,M2C_FIELD(temp,s16 *,0xc)),0);
temp=M2C_FIELD(self,void **,0x6c);
fn_80140258(self,temp,Pair(0x260,M2C_FIELD(temp,s16 *,0xc)),0);
fn_801475FC(lbl_8027C698+0x10c,100); fn_8000C188(self); return;
}
if((btn&0x800)&&!fn_80166D8C(lbl_80330D68)&&unit) {
*(Pair *)&pos4=((Obj *)M2C_FIELD(self,void **,0x68))->v9();
fn_8016758C(lbl_80330D68,self,fn_80105814(unit),(f32)*(s16 *)&pos4,(f32)*((s16 *)&pos4+1));
*(s32 *)lbl_80330D68|=lbl_80368DC4; return;
}
if((btn&0xa00)&&fn_80166D8C(lbl_80330D68)) {fn_801673D0(lbl_80330D68);return;}
if((btn&0x200)&&!fn_80166D8C(lbl_80330D68)) {
temp=M2C_FIELD(self,void **,0x68);
fn_80140258(self,temp,Pair(0x260,M2C_FIELD(temp,s16 *,0xc)),1);
{Obj *p=M2C_FIELD(self,Obj **,0x68);
if(p) {if(--p->refs==0 && p) p->destroy(1); M2C_FIELD(self,void **,0x68)=0;}}
temp=M2C_FIELD(self,void **,0x6c);
fn_80140258(self,temp,Pair(0x260,M2C_FIELD(temp,s16 *,0xc)),0);
{Obj *p=M2C_FIELD(self,Obj **,0x6c);
if(p) {if(--p->refs==0 && p) p->destroy(1); M2C_FIELD(self,void **,0x6c)=0;}}
temp=fn_8013FF94(self,0x82,0);
fn_80140258(self,temp,Pair(M2C_FIELD(temp,s16 *,0xa),-0x3a),0);
fn_801475FC(lbl_8027C698+0x11c,100); fn_8000C070(self,0x11);
}
}
}
#pragma cplusplus reset

s32 fn_801BAC40(struct efUnit* arg0, s32 arg1)
{
    struct efUnit* temp_r3;
    s32 temp_r5;
    s32 temp_r6;
    
    if (arg0 == NULL) {
        return 0;
    }

    temp_r3 = arg0;
    temp_r5 = 0;
    temp_r6 = 0;

    while ((temp_r6 < 9) && (temp_r3 != NULL)) {
        if (temp_r3->field_0x4 >= 0) {
            temp_r5 += 1;
        }
        temp_r3++;
        temp_r6 += 1;
    }

    return temp_r5;
}

#pragma cplusplus on
#pragma use_lmw_stmw on
#pragma global_optimizer off
extern "C" void fn_801BADB0(void *arg0) {
    void *fn_800C42D8(s32);
    s32 fn_80019DF0(u8);
    void fn_8013FCE0(void *, void *, void *, void *);
    void fn_8013FF00(void *, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801400F4(void *, void *);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_801402A0(void *, void *, s16 *, s32);
    void fn_801475FC(void *, s32);
    void fn_801658DC(void *, void *, s32, s32);
    void fn_8017BB94(void *);
    void *fn_801BEB24(void *, s16, s16, s16, s16);

    extern u8 lbl_8027C698[];
    extern void *lbl_8028FDB0[];
    extern void *lbl_80292230[];
    extern void *lbl_80293C2C[];
    extern void *lbl_80293C84[];
    extern void *lbl_80296194[];
    extern s32 lbl_80297E6C[];
    extern u8 lbl_802EF4C8[];
    extern f32 lbl_8036B2D8;

    struct Obj {
        virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0;
        virtual void v3() = 0; virtual void v4() = 0; virtual void v5() = 0;
        virtual void v6() = 0; virtual void v7() = 0; virtual void v8() = 0;
    };
    struct T { u8 f(s32); };
    typedef u8 (T::*PTMF)(s32);
    struct Pair { PTMF ptmf; s32 arg; };

    void *ctx;
    void *self;
    s32 id;
    s32 t2;
    s32 t1;
    s32 t0;
    s32 i;
    void *obj68;
    void *listBase;
    void *child;
    void *alloc;
    void *temp;
    f32 zf;
    s16 w;

    self = arg0;
    Pair call;
    Pair p[2];
    s16 pair18[2];
    s16 pair14[2];
    s32 sp10;
    void *spC;
    s32 sp8;

    temp = fn_8013FF94(self, 0x100, 0);
    w = (s16)(*(s16 *)((u8 *)temp + 0x10) - *(s16 *)((u8 *)temp + 0xC));
    pair18[0] = *(s16 *)((u8 *)temp + 0xA);
    pair18[1] = -w;
    fn_80140258(self, temp, pair18, 0);
    child = *(void **)((u8 *)self + 0x60);
    fn_8017BB94(child);
    *(u8 *)((u8 *)child + 0x3C) = 0;
    if (*(s16 *)((u8 *)child + 0xC) != 0x7C) {
        pair14[0] = *(s16 *)((u8 *)child + 0xA);
        pair14[1] = 0x7C;
        fn_801402A0(self, child, pair14, 0);
    }
    ctx = *(void **)lbl_802EF4C8;
    alloc = fn_800C42D8(0xD0);
    if (alloc) {
        alloc = fn_801BEB24(alloc, 0x260, 0x68, 0xE2, 0x1E0);
    }
    *(void **)((u8 *)self + 0x68) = alloc;
    {
        void *o = *(void **)((u8 *)self + 0x68);
        if (o) {
            *(s32 *)((u8 *)o + 4) += 1;
        }
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x68) + 8) = 0x107;
    i = 0;
    id = 0;
    p[0].arg = (s32)ctx;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x68) + 0x24) = 8;
    p[1].arg = (s32)ctx;
    {
        void *o = *(void **)((u8 *)self + 0x68);
        *(s32 *)((u8 *)o + 0x34) |= 0x10;
    }
    *(void **)((u8 *)*(void **)((u8 *)self + 0x68) + 0xCC) = ctx;
    t0 = lbl_80297E6C[0];
    obj68 = *(void **)((u8 *)self + 0x68);
    t1 = lbl_80297E6C[1];
    t2 = lbl_80297E6C[2];
    listBase = (u8 *)obj68 + 0x6C;
    *(s32 *)&p[0].ptmf = t0;
    *((s32 *)&p[0].ptmf + 1) = t1;
    *((s32 *)&p[0].ptmf + 2) = t2;
    *(s32 *)&p[1].ptmf = t0;
    *((s32 *)&p[1].ptmf + 1) = t1;
    *((s32 *)&p[1].ptmf + 2) = t2;
    for (; i < 0x62; i++) {
        id = fn_80019DF0((u8)i);
        *(s32 *)&call.ptmf = t0;
        *((s32 *)&call.ptmf + 1) = t1;
        *((s32 *)&call.ptmf + 2) = t2;
        call.arg = (s32)ctx;
        if ((((T *)id)->*call.ptmf)((s32)ctx) != 0) {
            sp10 = id;
            spC = listBase;
            fn_8013FCE0(&sp8, (u8 *)obj68 + 0x68, &spC, &sp10);
        }
    }
    fn_801400F4(self, *(void **)((u8 *)self + 0x68));
    obj68 = fn_800C42D8(0x44);
    if (obj68) {
        s32 zero = 0;
        *(void **)obj68 = lbl_8028FDB0;
        *(s32 *)((u8 *)obj68 + 4) = zero;
        *(void **)obj68 = lbl_80292230;
        *(s16 *)((u8 *)obj68 + 8) = -1;
        *(s16 *)((u8 *)obj68 + 0xA) = 0x260;
        *(s16 *)((u8 *)obj68 + 0xC) = 0x14E;
        *(s16 *)((u8 *)obj68 + 0xE) = 0x349;
        *(s16 *)((u8 *)obj68 + 0x10) = 0x195;
        *(s16 *)((u8 *)obj68 + 0x12) = (s16)zero;
        *(s16 *)((u8 *)obj68 + 0x14) = (s16)zero;
        *(s16 *)((u8 *)obj68 + 0x16) = 0xE9;
        *(s16 *)((u8 *)obj68 + 0x18) = 0x47;
        *(s16 *)((u8 *)obj68 + 0x1A) = (s16)zero;
        *(s16 *)((u8 *)obj68 + 0x1C) = (s16)zero;
        ((u8 *)obj68)[0x1E] = 0xFF;
        ((u8 *)obj68)[0x1F] = 0xFF;
        ((u8 *)obj68)[0x20] = 0xFF;
        ((u8 *)obj68)[0x21] = 0xFF;
        *(s16 *)((u8 *)obj68 + 0x22) = 0x1F4;
        *(s16 *)((u8 *)obj68 + 0x24) = (s16)zero;
        zf = lbl_8036B2D8;
        *(f32 *)((u8 *)obj68 + 0x28) = zf;
        *(f32 *)((u8 *)obj68 + 0x2C) = zf;
        *(f32 *)((u8 *)obj68 + 0x30) = zf;
        *(s32 *)((u8 *)obj68 + 0x34) = zero;
        *(s32 *)((u8 *)obj68 + 0x38) = zero;
        *(void **)obj68 = lbl_80296194;
        *(s32 *)((u8 *)obj68 + 0x3C) = zero;
        ((Obj *)obj68)->v8();
    }
    *(void **)((u8 *)self + 0x6C) = obj68;
    {
        void *o = *(void **)((u8 *)self + 0x6C);
        if (o) {
            *(s32 *)((u8 *)o + 4) += 1;
        }
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x6C) + 8) = 0x109;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x6C) + 0x24) = 8;
    {
        void *o = *(void **)((u8 *)self + 0x6C);
        *(s32 *)((u8 *)o + 0x34) |= 0x10;
    }
    fn_801400F4(self, *(void **)((u8 *)self + 0x6C));
    ctx = fn_800C42D8(0x58);
    if (ctx) {
        s32 zero = 0;
        *(void **)ctx = lbl_8028FDB0;
        *(s32 *)((u8 *)ctx + 4) = zero;
        *(void **)ctx = lbl_80292230;
        *(s16 *)((u8 *)ctx + 8) = -1;
        *(s16 *)((u8 *)ctx + 0xA) = (s16)zero;
        *(s16 *)((u8 *)ctx + 0xC) = -0x3A;
        *(s16 *)((u8 *)ctx + 0xE) = 0x260;
        *(s16 *)((u8 *)ctx + 0x10) = (s16)zero;
        *(s16 *)((u8 *)ctx + 0x12) = (s16)zero;
        *(s16 *)((u8 *)ctx + 0x14) = (s16)zero;
        *(s16 *)((u8 *)ctx + 0x16) = 0x260;
        *(s16 *)((u8 *)ctx + 0x18) = 0x3A;
        *(s16 *)((u8 *)ctx + 0x1A) = (s16)zero;
        *(s16 *)((u8 *)ctx + 0x1C) = (s16)zero;
        ((u8 *)ctx)[0x1E] = 0xFF;
        ((u8 *)ctx)[0x1F] = 0xFF;
        ((u8 *)ctx)[0x20] = 0xFF;
        ((u8 *)ctx)[0x21] = 0xFF;
        *(s16 *)((u8 *)ctx + 0x22) = 0x258;
        *(s16 *)((u8 *)ctx + 0x24) = (s16)zero;
        zf = lbl_8036B2D8;
        *(f32 *)((u8 *)ctx + 0x28) = zf;
        *(f32 *)((u8 *)ctx + 0x2C) = zf;
        *(f32 *)((u8 *)ctx + 0x30) = zf;
        *(s32 *)((u8 *)ctx + 0x34) = zero;
        *(s32 *)((u8 *)ctx + 0x38) = zero;
        *(void **)ctx = lbl_80293C84;
        *(s32 *)((u8 *)ctx + 0x3C) = zero;
        *(s32 *)((u8 *)ctx + 0x40) = zero;
        *(s32 *)((u8 *)ctx + 0x44) = zero;
        *(s32 *)((u8 *)ctx + 0x40) = zero;
        *(s32 *)((u8 *)ctx + 0x48) = zero;
        ((u8 *)ctx)[0x4C] = 1;
        *(s16 *)((u8 *)ctx + 0x4E) = (s16)zero;
        *(s16 *)((u8 *)ctx + 0x50) = (s16)zero;
        *(s16 *)((u8 *)ctx + 0x52) = (s16)zero;
        *(s16 *)((u8 *)ctx + 0x54) = (s16)zero;
        *(void **)ctx = lbl_80293C2C;
        *(s16 *)((u8 *)ctx + 8) = 0x82;
        *(s32 *)((u8 *)ctx + 0x34) |= 0x10;
        *(s16 *)((u8 *)ctx + 0x4E) = 0x130;
        *(s32 *)((u8 *)ctx + 0x48) = 1;
        ((u8 *)ctx)[0x4C] = 2;
        fn_801658DC(ctx, lbl_8027C698 + 0x12C, 1, 0x130);
        *(s16 *)((u8 *)ctx + 0x24) = 8;
        fn_801400F4(self, ctx);
    }
    fn_8013FF00(self, *(void **)((u8 *)self + 0x68));
    fn_801475FC(lbl_8027C698 + 0x156, 0x64);
}
#pragma global_optimizer reset
#pragma cplusplus reset

void fn_801BB1FC(void *arg0) {
    void *fn_8013FF94(void *, s32, s32);
    void fn_801400F4(void *, void *);
    void fn_8014027C(void *, void *, s16 *, s32);
    void fn_801402A0(void *, void *, s16 *, s32);
    void *fn_800C42D8(u32);
    void fn_80024398(void *, void *, s32);
    void fn_801658DC(void *, void *);
    extern u8 lbl_8028459C[];
    extern u8 lbl_80292090[];
    extern u8 lbl_80297ED4[];
    extern u8 lbl_80297E84[];
    extern u8 lbl_802845E8[];
    extern u8 lbl_80297C08[];
    extern u8 lbl_802920E0[];
    extern u8 lbl_8027C698[];
    extern s8 lbl_80368260;
    extern void *volatile lbl_80368264;
    extern s8 lbl_8036826C;
    extern void *lbl_80368270;
    struct { s16 x; s16 y; } spC;
    struct { s16 x; s16 y; } sp8;
    void *r30;
    void *obj60;
    void *p;

    r30 = fn_8013FF94(arg0, 0x100, 0);
    if (r30 == NULL) {
        r30 = M2C_FIELD(arg0, void **, 0x48);
        fn_801400F4(arg0, r30);
    }
    if (M2C_FIELD(r30, s16 *, 0xC) != 0x10) {
        spC.x = M2C_FIELD(r30, s16 *, 0xA);
        spC.y = 0x10;
        fn_8014027C(arg0, r30, &spC.x, 0);
    }
    M2C_FIELD(r30, u8 *, 0x4D) = 0;
    M2C_FIELD(r30, f32 *, 0x30) = 0.5f;
    obj60 = M2C_FIELD(arg0, void **, 0x60);
    M2C_FIELD(obj60, u8 *, 0x3C) = 0;
    if (M2C_FIELD(obj60, s16 *, 0xC) != 0x94) {
        sp8.x = M2C_FIELD(obj60, s16 *, 0xA);
        sp8.y = 0x94;
        fn_801402A0(arg0, obj60, &sp8.x, 0);
    }
    if (lbl_80368260 == 0) {
        lbl_80368264 = lbl_8028459C;
        lbl_80368264 = lbl_80292090;
        lbl_80368264 = lbl_80297ED4;
        lbl_80368260 = 1;
    }
    if (lbl_8036826C == 0) {
        lbl_80368270 = lbl_80297E84;
        lbl_8036826C = 1;
    }
    p = fn_800C42D8(0x20);
    if (p != NULL) {
        M2C_FIELD(p, void **, 4) = lbl_802845E8;
        M2C_FIELD(p, void **, 0) = lbl_80297C08;
        M2C_FIELD(p, void **, 4) = lbl_802920E0;
        M2C_FIELD(p, s16 *, 8) = 0;
        M2C_FIELD(p, s16 *, 0xA) = 0;
        M2C_FIELD(p, s16 *, 0xC) = 0x80;
        M2C_FIELD(p, s16 *, 0xE) = 0;
        M2C_FIELD(p, s16 *, 0x10) = 2;
        M2C_FIELD(p, s16 *, 0x12) = 0xC;
        M2C_FIELD(p, s16 *, 0x14) = 0x10;
        M2C_FIELD(p, s16 *, 0x16) = 0;
        M2C_FIELD(p, f32 *, 0x18) = 0.0f;
        M2C_FIELD(p, s16 *, 0x1C) = 0x20;
        M2C_FIELD(p, s16 *, 0x1E) = 4;
    }
    M2C_FIELD(p, s16 *, 0xC) = 0x78;
    M2C_FIELD(p, s16 *, 8) = 0x181;
    M2C_FIELD(p, s16 *, 0xA) = 0xB4;
    M2C_FIELD(p, s16 *, 0x14) = 0x1C;
    M2C_FIELD(p, f32 *, 0x18) = 200.0f;
    M2C_FIELD(p, s16 *, 0x1E) = 4;
    fn_80024398(p, arg0, 0);
    p = fn_8013FF94(arg0, -0x1000, 0);
    if (p != NULL) {
        fn_801658DC(p, lbl_8027C698 + 0x142);
    }
}

void fn_801BB400(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8002833C(void *, u32);
    u32 fn_8013AC54(void *);
    void fn_8013FDA0(void *);
    void fn_80140210(void *, void *, s32);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_801475FC(void *, s32);
    void fn_801694AC(u32, void *);
    void fn_801695BC(u32, void *, s32);
    void fn_8017BB94(void *);
    s32 fn_8017C3C8(u32);
    extern u8 lbl_8027C698[];
    extern u32 lbl_802EF4C8[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    s16 sp8[2];
    s32 a;
    s32 btn;
    register u8 gate;
    register int flags;
    s16 tmp;
    unsigned int var_r31;
    void *obj60;
    void *obj64;

    var_r31 = fn_8013AC54(M2C_FIELD(arg0, void **, 0x48));
    fn_8013FDA0(arg0);
    if (var_r31 != fn_8013AC54(M2C_FIELD(arg0, void **, 0x48))) {
        var_r31 = fn_8013AC54(M2C_FIELD(arg0, void **, 0x48));
        obj64 = M2C_FIELD(arg0, void **, 0x64);
        M2C_FIELD(obj64, u32 *, 0x3C) = var_r31;
        obj60 = M2C_FIELD(arg0, void **, 0x60);
        M2C_FIELD(obj60, u32 *, 0x4C) = var_r31;
        fn_8017BB94(obj60);
        M2C_FIELD(obj60, f32 *, 0x50) = (f32)fn_8017C3C8(var_r31);
    }
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        a = M2C_FIELD(lbl_80367240, s32 *, 4);
        btn = a & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ a);
        if ((btn & 0x100) && var_r31) {
            fn_8002833C(lbl_802EF4C8, var_r31);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), f32 *, 0x30) = 0.5f;
            obj64 = M2C_FIELD(arg0, void **, 0x64);
            tmp = M2C_FIELD(obj64, s16 *, 0xC);
            sp8[0] = 0x260;
            sp8[1] = tmp;
            fn_80140258(arg0, obj64, sp8, 0);
            fn_80140210(arg0, M2C_FIELD(arg0, void **, 0x50), 0);
            obj60 = M2C_FIELD(arg0, void **, 0x60);
            M2C_FIELD(obj60, u8 *, 0x54) = 1;
            fn_8000C070(arg0, 0x11);
            fn_801475FC(lbl_8027C698 + 0x10C, 0x64);
        } else if ((btn & 0x800) && var_r31) {
            fn_801695BC(var_r31, arg0, 0x1000000);
            M2C_FIELD(arg0, u8 *, 0x44) = 0x10;
            fn_8000C070(arg0, 0x1D);
        } else if ((btn & 0x400) && var_r31) {
            fn_801694AC(var_r31, arg0);
            M2C_FIELD(arg0, u8 *, 0x44) = 0x10;
            fn_8000C070(arg0, 0x1E);
        } else if (btn & 0x200) {
            fn_8000C070(arg0, 0x1C);
            fn_801475FC(lbl_8027C698 + 0x11C, 0x64);
        }
    }
}

#pragma cplusplus on
extern "C" void fn_801BB7E0(void *arg0) {
#pragma opt_common_subs off
    void *fn_800C42D8(s32);
    void *fn_8013AC54(void *);
    void fn_8013B064(void *, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_8014004C(void *, void *);
    void fn_801400F4(void *, void *);
    void *fn_80179F8C(void *, s16, s16, s16, s16, s32);
    void fn_8017BB94(void *);
    s32 fn_8017C3C8(s32);
    u8 *fn_8018D900(s32);
    extern u8 lbl_8027C698[];
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80291988[];
    extern u8 lbl_80292178[];
    extern u8 lbl_80292230[];
    extern u8 lbl_80295404[];
    extern u8 lbl_802CA264[];
    extern f32 lbl_8036B2D8;
    extern f32 lbl_8036B2E0;

    struct Obj {
        virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0;
        virtual void v3() = 0; virtual void v4() = 0; virtual void v5() = 0;
        virtual void v6() = 0; virtual void v7() = 0; virtual void v8() = 0;
        virtual void v9() = 0; virtual void v10() = 0; virtual void v11(void *) = 0;
        virtual void v12(s32) = 0;
    };

    void *self = arg0;
    void *p;
    void *q;

    fn_8014004C(self, fn_8013FF94(self, 0x80, 0));
    fn_8014004C(self, fn_8013FF94(self, 0x81, 0));

    p = fn_800C42D8(0xD8);
    if (p != NULL) {
        p = fn_80179F8C(p, 0x38, 0x10, 0x1F0, 0x90, 0x226);
    }
    *(void **)((u8 *)self + 0x48) = p;
    q = *(void **)((u8 *)self + 0x48);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x24) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x64) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 8) = 0x100;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x5A) = 0x1C;
    ((Obj *)*(void **)((u8 *)self + 0x48))->v12(4);
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x58) = 3;

    {
        void *hold = *(void **)((u8 *)self + 0x48);
        void *entry = *(void **)lbl_802CA264;
        while (entry != NULL) {
            fn_8013B064(hold, entry);
            entry = *(void **)((u8 *)entry + 0x184);
        }
    }
    {
        void *hold2 = *(void **)((u8 *)self + 0x48);
        void *entry2 = *(void **)(lbl_802CA264 + 0x3C);
        while (entry2 != NULL) {
            fn_8013B064(hold2, entry2);
            entry2 = *(void **)((u8 *)entry2 + 0x184);
        }
    }
    fn_801400F4(self, *(void **)((u8 *)self + 0x48));

    p = fn_800C42D8(0x50);
    if (p != NULL) {
        register s32 z = 0;
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = z;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x138;
        *(s16 *)((u8 *)p + 0xC) = 0xA8;
        *(s16 *)((u8 *)p + 0xE) = 0x250;
        *(s16 *)((u8 *)p + 0x10) = 0xE8;
        *(s16 *)((u8 *)p + 0x12) = z;
        *(s16 *)((u8 *)p + 0x14) = z;
        *(s16 *)((u8 *)p + 0x16) = 0x118;
        *(s16 *)((u8 *)p + 0x18) = 0x40;
        *(s16 *)((u8 *)p + 0x1A) = z;
        *(s16 *)((u8 *)p + 0x1C) = z;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1FE;
        *(s16 *)((u8 *)p + 0x24) = z;
        *(f32 *)((u8 *)p + 0x28) = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x2C) = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x30) = lbl_8036B2D8;
        *(s32 *)((u8 *)p + 0x34) = z;
        *(s32 *)((u8 *)p + 0x38) = z;
        *(void **)p = lbl_80292178;
        *(u8 *)((u8 *)p + 0x3C) = 0xFF;
        *(u8 *)((u8 *)p + 0x3D) = 0xFF;
        *(u8 *)((u8 *)p + 0x3E) = 0xFF;
        *(u8 *)((u8 *)p + 0x3F) = 0xFF;
        *(s32 *)((u8 *)p + 0x40) = z;
        *(s16 *)((u8 *)p + 0x44) = z;
        *(s16 *)((u8 *)p + 0x46) = z;
        ((Obj *)p)->v8();
    }
    *(void **)((u8 *)self + 0x50) = p;
    q = *(void **)((u8 *)self + 0x50);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0x24) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 8) = 0x102;
    q = *(void **)((u8 *)self + 0x50);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    {
        u8 col[4];
        u8 *color = fn_8018D900(2);
        u8 first = color[0];
        col[0] = first;
        col[1] = color[1];
        col[2] = color[2];
        col[3] = color[3];
        q = *(void **)((u8 *)self + 0x50);
        if ((u8 *)q + 0x3C != col) {
            *(u8 *)((u8 *)q + 0x3C) = first;
            *(u8 *)((u8 *)q + 0x3D) = col[1];
            *(u8 *)((u8 *)q + 0x3E) = col[2];
            *(u8 *)((u8 *)q + 0x3F) = col[3];
        }
    }
    *(f32 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0x2C) = lbl_8036B2E0;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x50) + 0x40) = lbl_8027C698 + 0x1B7;
    fn_801400F4(self, *(void **)((u8 *)self + 0x50));

    p = fn_800C42D8(0x40);
    if (p != NULL) {
        register s32 z = 0;
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = z;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x148;
        *(s16 *)((u8 *)p + 0xC) = 0x11C;
        *(s16 *)((u8 *)p + 0xE) = 0x250;
        *(s16 *)((u8 *)p + 0x10) = 0x16C;
        *(s16 *)((u8 *)p + 0x12) = z;
        *(s16 *)((u8 *)p + 0x14) = z;
        *(s16 *)((u8 *)p + 0x16) = 0x108;
        *(s16 *)((u8 *)p + 0x18) = 0x50;
        *(s16 *)((u8 *)p + 0x1A) = z;
        *(s16 *)((u8 *)p + 0x1C) = z;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1F4;
        *(s16 *)((u8 *)p + 0x24) = z;
        *(f32 *)((u8 *)p + 0x28) = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x2C) = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x30) = lbl_8036B2D8;
        *(s32 *)((u8 *)p + 0x34) = z;
        *(s32 *)((u8 *)p + 0x38) = z;
        *(void **)p = lbl_80291988;
        *(s32 *)((u8 *)p + 0x3C) = z;
    }
    *(void **)((u8 *)self + 0x64) = p;
    q = *(void **)((u8 *)self + 0x64);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x64) + 8) = 0x101;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x64) + 0x24) = 8;
    q = *(void **)((u8 *)self + 0x64);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x64) + 0x3C) = fn_8013AC54(*(void **)((u8 *)self + 0x48));
    fn_801400F4(self, *(void **)((u8 *)self + 0x64));

    p = fn_800C42D8(0x64);
    if (p != NULL) {
        register s32 z = 0;
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = z;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x10;
        *(s16 *)((u8 *)p + 0xC) = 0x94;
        *(s16 *)((u8 *)p + 0xE) = 0x138;
        *(s16 *)((u8 *)p + 0x10) = 0x186;
        *(s16 *)((u8 *)p + 0x12) = z;
        *(s16 *)((u8 *)p + 0x14) = z;
        *(s16 *)((u8 *)p + 0x16) = 0x128;
        *(s16 *)((u8 *)p + 0x18) = 0xF2;
        *(s16 *)((u8 *)p + 0x1A) = z;
        *(s16 *)((u8 *)p + 0x1C) = z;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1F4;
        *(s16 *)((u8 *)p + 0x24) = z;
        *(f32 *)((u8 *)p + 0x28) = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x2C) = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x30) = lbl_8036B2D8;
        *(s32 *)((u8 *)p + 0x34) = z;
        *(s32 *)((u8 *)p + 0x38) = z;
        *(void **)p = lbl_80295404;
        *(u8 *)((u8 *)p + 0x3C) = z;
        *(s16 *)((u8 *)p + 0x3E) = z;
        *(s16 *)((u8 *)p + 0x40) = -1;
        *(s16 *)((u8 *)p + 0x42) = -1;
        *(s32 *)((u8 *)p + 0x4C) = z;
        *(f32 *)((u8 *)p + 0x50) = lbl_8036B2E0;
        *(u8 *)((u8 *)p + 0x54) = z;
        *(s32 *)((u8 *)p + 0x58) = z;
        *(s32 *)((u8 *)p + 0x5C) = z;
        *(f32 *)((u8 *)p + 0x60) = lbl_8036B2E0;
        ((Obj *)p)->v8();
    }
    *(void **)((u8 *)self + 0x60) = p;
    q = *(void **)((u8 *)self + 0x60);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x60) + 8) = 0x106;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x60) + 0x24) = 8;
    q = *(void **)((u8 *)self + 0x60);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    {
        s32 ac = (s32)fn_8013AC54(*(void **)((u8 *)self + 0x48));
        void *obj60 = *(void **)((u8 *)self + 0x60);
        *(s32 *)((u8 *)obj60 + 0x4C) = ac;
        fn_8017BB94(obj60);
        *(f32 *)((u8 *)obj60 + 0x50) = (f32)fn_8017C3C8(ac);
    }
    fn_801400F4(self, *(void **)((u8 *)self + 0x60));
}

#pragma cplusplus on
extern "C" void fn_801BBDA0(void *arg0) {
#pragma opt_common_subs off
    void *fn_800C42D8(s32);
    void *fn_8013AC54(void *);
    void fn_8013AD70(void *, s32);
    void fn_8013B064(void *, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_8014004C(void *, void *);
    void fn_801400F4(void *, void *);
    void *fn_80179F8C(void *, s16, s16, s16, s16, s32);
    u8 *fn_8018D900(s32);
    void fn_80138808(void *, void *);
    void fn_80137EA0(void *, void *);
    void fn_801BC71C(void);
    void fn_801658DC(void *, void *);
    void *fn_801BEDC4(void *, s32, s32, s32);
    extern u8 lbl_8027C698[];
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_802919B0[];
    extern u8 lbl_80291A0C[];
    extern u8 lbl_80291A3C[];
    extern u8 lbl_80292178[];
    extern u8 lbl_80292230[];
    extern u8 lbl_80293C00[];
    extern u8 lbl_80293C2C[];
    extern u8 lbl_80293C84[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_802EF4C8[];
    extern f32 lbl_8036B2D8;
    extern f32 lbl_8036B2DC;
    extern f32 lbl_8036B2E0;
    extern f32 lbl_8036B2E4;

    struct Obj {
        virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0;
        virtual void v3() = 0; virtual void v4() = 0; virtual void v5() = 0;
        virtual void v6() = 0; virtual void v7() = 0; virtual void v8() = 0;
        virtual void v9() = 0; virtual void v10() = 0; virtual void v11(void *) = 0;
        virtual void v12(s32) = 0;
    };

    void *self;
    void *entry;
    void *p;
    void *hold;
    void *q;
    void *tmp;
    s32 saved;
    f32 zero;
    s16 t;
    s16 n;

    self = arg0;
    saved = *(s32 *)lbl_802EF4C8;
    tmp = fn_8013FF94(self, -0x1000, 0);
    if (tmp != NULL) {
        fn_8014004C(self, tmp);
    }

    p = fn_800C42D8(0xD8);
    if (p != NULL) {
        p = fn_80179F8C(p, 0x38, -0x90, 0x1F0, 0x90, 0x226);
    }
    *(void **)((u8 *)self + 0x48) = p;
    q = *(void **)((u8 *)self + 0x48);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x24) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x64) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 8) = 0x100;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x5A) = 0x1C;
    ((Obj *)*(void **)((u8 *)self + 0x48))->v12(4);
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x58) = 3;

    hold = *(void **)((u8 *)self + 0x48);
    entry = *(void **)lbl_802CA264;
    while (entry != NULL) {
        fn_8013B064(hold, entry);
        entry = *(void **)((u8 *)entry + 0x184);
    }
    hold = *(void **)((u8 *)self + 0x48);
    entry = *(void **)(lbl_802CA264 + 0x3C);
    while (entry != NULL) {
        fn_8013B064(hold, entry);
        entry = *(void **)((u8 *)entry + 0x184);
    }
    fn_8013AD70(*(void **)((u8 *)self + 0x48), saved);
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x56) = lbl_802EF4C8[0x15];
    q = *(void **)((u8 *)self + 0x48);
    *(void **)((u8 *)q + 0x7C) = (void *)fn_801BC71C;
    *(s32 *)((u8 *)q + 0x80) = 0;
    *(f32 *)((u8 *)q + 0x30) = lbl_8036B2E4;

    p = fn_800C42D8(0x50);
    if (p != NULL) {
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = 0;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x130;
        *(s16 *)((u8 *)p + 0xC) = 0xA8;
        *(s16 *)((u8 *)p + 0xE) = 0x248;
        *(s16 *)((u8 *)p + 0x10) = 0xE8;
        *(s16 *)((u8 *)p + 0x12) = 0;
        *(s16 *)((u8 *)p + 0x14) = 0;
        *(s16 *)((u8 *)p + 0x16) = 0x118;
        *(s16 *)((u8 *)p + 0x18) = 0x40;
        *(s16 *)((u8 *)p + 0x1A) = 0;
        *(s16 *)((u8 *)p + 0x1C) = 0;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1FE;
        *(s16 *)((u8 *)p + 0x24) = 0;
        zero = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x28) = zero;
        *(f32 *)((u8 *)p + 0x2C) = zero;
        *(f32 *)((u8 *)p + 0x30) = zero;
        *(s32 *)((u8 *)p + 0x34) = 0;
        *(s32 *)((u8 *)p + 0x38) = 0;
        *(void **)p = lbl_80292178;
        *(u8 *)((u8 *)p + 0x3C) = 0xFF;
        *(u8 *)((u8 *)p + 0x3D) = 0xFF;
        *(u8 *)((u8 *)p + 0x3E) = 0xFF;
        *(u8 *)((u8 *)p + 0x3F) = 0xFF;
        *(s32 *)((u8 *)p + 0x40) = 0;
        *(s16 *)((u8 *)p + 0x44) = 0;
        *(s16 *)((u8 *)p + 0x46) = 0;
        ((Obj *)p)->v8();
    }
    *(void **)((u8 *)self + 0x50) = p;
    q = *(void **)((u8 *)self + 0x50);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0x24) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 8) = 0x102;
    q = *(void **)((u8 *)self + 0x50);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    {
        u8 col[4];
        u8 *color = fn_8018D900(2);
        u8 first = color[0];
        col[0] = first;
        col[1] = color[1];
        col[2] = color[2];
        col[3] = color[3];
        q = *(void **)((u8 *)self + 0x50);
        if ((u8 *)q + 0x3C != col) {
            *(u8 *)((u8 *)q + 0x3C) = first;
            *(u8 *)((u8 *)q + 0x3D) = col[1];
            *(u8 *)((u8 *)q + 0x3E) = col[2];
            *(u8 *)((u8 *)q + 0x3F) = col[3];
        }
    }
    *(f32 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0x2C) = lbl_8036B2E0;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x50) + 0x40) = lbl_8027C698 + 0x1B7;

    p = fn_800C42D8(0x54);
    if (p != NULL) {
        register s32 z = 0;
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = z;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x20;
        *(s16 *)((u8 *)p + 0xC) = 0x98;
        *(s16 *)((u8 *)p + 0xE) = 0x128;
        *(s16 *)((u8 *)p + 0x10) = 0xED;
        *(s16 *)((u8 *)p + 0x12) = z;
        *(s16 *)((u8 *)p + 0x14) = z;
        *(s16 *)((u8 *)p + 0x16) = 0x108;
        *(s16 *)((u8 *)p + 0x18) = 0x55;
        *(s16 *)((u8 *)p + 0x1A) = z;
        *(s16 *)((u8 *)p + 0x1C) = z;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1F4;
        *(s16 *)((u8 *)p + 0x24) = z;
        zero = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x28) = zero;
        *(f32 *)((u8 *)p + 0x2C) = zero;
        *(f32 *)((u8 *)p + 0x30) = zero;
        *(s32 *)((u8 *)p + 0x34) = z;
        *(s32 *)((u8 *)p + 0x38) = z;
        *(void **)p = lbl_80291A3C;
        *(s32 *)((u8 *)p + 0x3C) = z;
        *(s32 *)((u8 *)p + 0x40) = 0x1003C;
        *(s32 *)((u8 *)p + 0x4C) = z;
        *(s32 *)((u8 *)p + 0x50) = z;
        ((Obj *)p)->v8();
    }
    *(void **)((u8 *)self + 0x4C) = p;
    q = *(void **)((u8 *)self + 0x4C);
    t = *(s16 *)((u8 *)q + 0xE) - *(s16 *)((u8 *)q + 0xA);
    n = -t;
    *(s16 *)((u8 *)q + 0xE) = n + t;
    *(s16 *)((u8 *)q + 0xA) = n;
    *(s16 *)((u8 *)q + 0x10) = *(s16 *)((u8 *)q + 0xC) + (*(s16 *)((u8 *)q + 0x10) - *(s16 *)((u8 *)q + 0xC));
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x4C) + 8) = 0x101;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x4C) + 0x24) = 8;
    *(s32 *)((u8 *)*(void **)((u8 *)self + 0x4C) + 0x4C) = 1;
    q = *(void **)((u8 *)self + 0x4C);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    fn_80138808(*(void **)((u8 *)self + 0x4C), fn_8013AC54(*(void **)((u8 *)self + 0x48)));
    *(f32 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x30) = lbl_8036B2DC;

    p = fn_800C42D8(0x4C);
    if (p != NULL) {
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = 0;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x20;
        *(s16 *)((u8 *)p + 0xC) = 0xF8;
        *(s16 *)((u8 *)p + 0xE) = 0x128;
        *(s16 *)((u8 *)p + 0x10) = 0x18D;
        *(s16 *)((u8 *)p + 0x12) = 0;
        *(s16 *)((u8 *)p + 0x14) = 0;
        *(s16 *)((u8 *)p + 0x16) = 0x108;
        *(s16 *)((u8 *)p + 0x18) = 0x95;
        *(s16 *)((u8 *)p + 0x1A) = 0;
        *(s16 *)((u8 *)p + 0x1C) = 0;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1F4;
        *(s16 *)((u8 *)p + 0x24) = 0;
        zero = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x28) = zero;
        *(f32 *)((u8 *)p + 0x2C) = zero;
        *(f32 *)((u8 *)p + 0x30) = zero;
        *(s32 *)((u8 *)p + 0x34) = 0;
        *(s32 *)((u8 *)p + 0x38) = 0;
        *(void **)p = lbl_80291A0C;
        *(s32 *)((u8 *)p + 0x44) = 0;
        *(u8 *)((u8 *)p + 0x48) = 1;
        ((Obj *)p)->v8();
    }
    *(void **)((u8 *)self + 0x54) = p;
    q = *(void **)((u8 *)self + 0x54);
    t = *(s16 *)((u8 *)q + 0xE) - *(s16 *)((u8 *)q + 0xA);
    n = -t;
    *(s16 *)((u8 *)q + 0xE) = n + t;
    *(s16 *)((u8 *)q + 0xA) = n;
    *(s16 *)((u8 *)q + 0x10) = *(s16 *)((u8 *)q + 0xC) + (*(s16 *)((u8 *)q + 0x10) - *(s16 *)((u8 *)q + 0xC));
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x54) + 8) = 0x103;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x54) + 0x24) = 8;
    q = *(void **)((u8 *)self + 0x54);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    fn_80137EA0(*(void **)((u8 *)self + 0x54), fn_8013AC54(*(void **)((u8 *)self + 0x48)));
    *(f32 *)((u8 *)*(void **)((u8 *)self + 0x54) + 0x30) = lbl_8036B2DC;

    p = fn_800C42D8(0x40);
    if (p != NULL) {
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = 0;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x260;
        *(s16 *)((u8 *)p + 0xC) = 0x110;
        *(s16 *)((u8 *)p + 0xE) = 0x370;
        *(s16 *)((u8 *)p + 0x10) = 0x18D;
        *(s16 *)((u8 *)p + 0x12) = 0;
        *(s16 *)((u8 *)p + 0x14) = 0;
        *(s16 *)((u8 *)p + 0x16) = 0x110;
        *(s16 *)((u8 *)p + 0x18) = 0x7D;
        *(s16 *)((u8 *)p + 0x1A) = 0;
        *(s16 *)((u8 *)p + 0x1C) = 0;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1F4;
        *(s16 *)((u8 *)p + 0x24) = 0;
        zero = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x28) = zero;
        *(f32 *)((u8 *)p + 0x2C) = zero;
        *(f32 *)((u8 *)p + 0x30) = zero;
        *(s32 *)((u8 *)p + 0x34) = 0;
        *(s32 *)((u8 *)p + 0x38) = 0;
        *(void **)p = lbl_802919B0;
        *(s32 *)((u8 *)p + 0x3C) = 0;
        ((Obj *)p)->v8();
    }
    *(void **)((u8 *)self + 0x58) = p;
    q = *(void **)((u8 *)self + 0x58);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 8) = 0x104;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 0x24) = 8;
    q = *(void **)((u8 *)self + 0x58);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x58) + 0x3C) = fn_8013AC54(*(void **)((u8 *)self + 0x48));
    *(f32 *)((u8 *)*(void **)((u8 *)self + 0x58) + 0x30) = lbl_8036B2DC;

    p = fn_800C42D8(0x60);
    if (p != NULL) {
        register s32 z = 0;
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = z;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = z;
        *(s16 *)((u8 *)p + 0xC) = 0x28;
        *(s16 *)((u8 *)p + 0xE) = 0x260;
        *(s16 *)((u8 *)p + 0x10) = 0x62;
        *(s16 *)((u8 *)p + 0x12) = z;
        *(s16 *)((u8 *)p + 0x14) = z;
        *(s16 *)((u8 *)p + 0x16) = 0x260;
        *(s16 *)((u8 *)p + 0x18) = 0x3A;
        *(s16 *)((u8 *)p + 0x1A) = z;
        *(s16 *)((u8 *)p + 0x1C) = z;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1F4;
        *(s16 *)((u8 *)p + 0x24) = z;
        zero = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x28) = zero;
        *(f32 *)((u8 *)p + 0x2C) = zero;
        *(f32 *)((u8 *)p + 0x30) = zero;
        *(s32 *)((u8 *)p + 0x34) = z;
        *(s32 *)((u8 *)p + 0x38) = z;
        *(void **)p = lbl_80293C84;
        *(s32 *)((u8 *)p + 0x3C) = z;
        *(s32 *)((u8 *)p + 0x40) = z;
        *(s32 *)((u8 *)p + 0x44) = z;
        *(s32 *)((u8 *)p + 0x40) = z;
        *(s32 *)((u8 *)p + 0x48) = z;
        *(u8 *)((u8 *)p + 0x4C) = 1;
        *(s16 *)((u8 *)p + 0x4E) = z;
        *(s16 *)((u8 *)p + 0x50) = z;
        *(s16 *)((u8 *)p + 0x52) = z;
        *(s16 *)((u8 *)p + 0x54) = z;
        *(void **)p = lbl_80293C2C;
        *(void **)p = lbl_80293C00;
        *(s32 *)((u8 *)p + 0x58) = z;
        *(s16 *)((u8 *)p + 0x5C) = 0xB;
        *(s16 *)((u8 *)p + 0x5E) = 0x10;
    }
    *(s16 *)((u8 *)p + 8) = 0x80;
    *(s16 *)((u8 *)p + 0x24) = 8;
    *(s16 *)((u8 *)p + 0x4E) = 0x10;
    *(s32 *)((u8 *)p + 0x58) = 1;
    *(u32 *)((u8 *)p + 0x34) |= 0x10;
    *(u8 *)((u8 *)p + 0x4C) = 2;
    *(s32 *)((u8 *)p + 0x48) = 1;
    fn_801658DC(p, lbl_8027C698 + 0x1CE);
    fn_801400F4(self, p);

    q = fn_800C42D8(0x94);
    if (q != NULL) {
        q = fn_801BEDC4(q, 0x260, 0x78, 0x1C2);
    }
    *(void **)((u8 *)self + 0x5C) = q;
    tmp = *(void **)((u8 *)self + 0x5C);
    if (tmp != NULL) {
        *(s32 *)((u8 *)tmp + 4) = *(s32 *)((u8 *)tmp + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x5C) + 8) = 0x105;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x5C) + 0x24) = 8;
    tmp = *(void **)((u8 *)self + 0x5C);
    *(u32 *)((u8 *)tmp + 0x34) |= 0x10;
    *(s32 *)((u8 *)*(void **)((u8 *)self + 0x5C) + 0x40) = saved;
    tmp = fn_8013FF94(self, -0x1000, 0);
    if (tmp != NULL) {
        fn_801658DC(lbl_8027C698 + 0x1E6, tmp);
    }
}

extern "C" s32 fn_801BC71C(s32 arg0) {
    u8 fn_8003D13C(void);
    s16 fn_8017D604(s32, s32, u8 *);
    extern u8 lbl_80330708[];
    s32 one;
    s32 t;
    u8 *p;

    if (fn_8003D13C() == 0) {
        return 0;
    }
    one = 1;
    p = lbl_80330708;
    t = *(s32 *)(p + 0x1C);
    return (fn_8017D604(arg0, one, p) <= t) ? 1 : 0;
}

#pragma cplusplus reset

#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_801BC784(void *arg0) {
    void fn_8014004C(void *, void *);
    struct Obj {
        virtual void destroy(s32) = 0;
        s32 refcount;
    };
    Obj *temp;
    s32 refs;

    fn_8014004C(arg0, M2C_FIELD(arg0, void **, 0x48));
    fn_8014004C(arg0, M2C_FIELD(arg0, void **, 0x4C));
    fn_8014004C(arg0, M2C_FIELD(arg0, void **, 0x50));
    fn_8014004C(arg0, M2C_FIELD(arg0, void **, 0x54));
    fn_8014004C(arg0, M2C_FIELD(arg0, void **, 0x58));

    temp = M2C_FIELD(arg0, Obj **, 0x48);
    if (temp != NULL) {
        refs = temp->refcount - 1;
        temp->refcount = refs;
        if (refs == 0 && temp != NULL) {
            temp->destroy(1);
        }
        M2C_FIELD(arg0, void **, 0x48) = NULL;
    }

    temp = M2C_FIELD(arg0, Obj **, 0x4C);
    if (temp != NULL) {
        refs = temp->refcount - 1;
        temp->refcount = refs;
        if (refs == 0 && temp != NULL) {
            temp->destroy(1);
        }
        M2C_FIELD(arg0, void **, 0x4C) = NULL;
    }

    temp = M2C_FIELD(arg0, Obj **, 0x50);
    if (temp != NULL) {
        refs = temp->refcount - 1;
        temp->refcount = refs;
        if (refs == 0 && temp != NULL) {
            temp->destroy(1);
        }
        M2C_FIELD(arg0, void **, 0x50) = NULL;
    }

    temp = M2C_FIELD(arg0, Obj **, 0x54);
    if (temp != NULL) {
        refs = temp->refcount - 1;
        temp->refcount = refs;
        if (refs == 0 && temp != NULL) {
            temp->destroy(1);
        }
        M2C_FIELD(arg0, void **, 0x54) = NULL;
    }

    temp = M2C_FIELD(arg0, Obj **, 0x58);
    if (temp != NULL) {
        refs = temp->refcount - 1;
        temp->refcount = refs;
        if (refs == 0 && temp != NULL) {
            temp->destroy(1);
        }
        M2C_FIELD(arg0, void **, 0x58) = NULL;
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801BC924(void *arg0) {
void *fn_800C42D8(u32); void fn_801400F4(void *,void *);
s32 strlen(const char *); void fn_800C96F8(void *,const void *,s32);
void fn_800381EC(void *,s8); s32 fn_8003B2D0(void *);
void *fn_8013FF94(void *,s32,s32); u8 fn_8017D6D8(void *);
void fn_801475FC(void *,s32); void fn_8000C070(void *,s32); void fn_8013FF00(void *,void *);
extern u8 lbl_8028FDB0[],lbl_80292230[],lbl_80293C84[],lbl_80293C58[],lbl_8027C698[],lbl_802EF4C8[];
class Pair { public: s16 x,y; Pair(s16 a,s16 b):x(a),y(b) {} };
void fn_80140258(void *,void *,const Pair &,s32);
void fn_8014027C(void *,void *,const Pair &,s32);
struct Obj { virtual void destroy(s32); s32 refs; };
void *p,*unit,*a,*b,*c,*self,*temp;
Obj *ref;
s32 refs;
self=arg0;
a=M2C_FIELD(self,void **,0x4C); b=M2C_FIELD(self,void **,0x54); c=M2C_FIELD(self,void **,0x58);
M2C_FIELD(a,f32 *,0x30)=1.0f; M2C_FIELD(b,f32 *,0x30)=1.0f; M2C_FIELD(c,f32 *,0x30)=1.0f;
M2C_FIELD(M2C_FIELD(self,void **,0x5C),f32 *,0x30)=1.0f;
unit=*(void **)lbl_802EF4C8;
p=fn_800C42D8(0x5C);
if(p) {M2C_FIELD(p,void **,0)=lbl_8028FDB0;
M2C_FIELD(p,u32 *,4)=0;
M2C_FIELD(p,void **,0)=lbl_80292230;
M2C_FIELD(p,s16 *,8)=-1;
M2C_FIELD(p,s16 *,10)=0;
M2C_FIELD(p,s16 *,12)=400;
M2C_FIELD(p,s16 *,14)=608;
M2C_FIELD(p,s16 *,16)=448;
M2C_FIELD(p,s16 *,18)=0;
M2C_FIELD(p,s16 *,20)=0;
M2C_FIELD(p,s16 *,22)=608;
M2C_FIELD(p,s16 *,24)=48;
M2C_FIELD(p,s16 *,26)=0;
M2C_FIELD(p,s16 *,28)=0;
M2C_FIELD(p,u8 *,30)=255;
M2C_FIELD(p,u8 *,31)=255;
M2C_FIELD(p,u8 *,32)=255;
M2C_FIELD(p,u8 *,33)=255;
M2C_FIELD(p,s16 *,34)=90;
M2C_FIELD(p,s16 *,36)=0;
M2C_FIELD(p,f32 *,40)=1.0f;
M2C_FIELD(p,f32 *,44)=1.0f;
M2C_FIELD(p,f32 *,48)=1.0f;
M2C_FIELD(p,u32 *,52)=0;
M2C_FIELD(p,u32 *,56)=0;
M2C_FIELD(p,void **,0)=lbl_80293C84;
M2C_FIELD(p,u32 *,60)=0;
M2C_FIELD(p,u32 *,64)=0;
M2C_FIELD(p,u32 *,68)=0;
M2C_FIELD(p,u32 *,64)=0;
M2C_FIELD(p,u32 *,72)=0;
M2C_FIELD(p,u8 *,76)=1;
M2C_FIELD(p,s16 *,78)=0;
M2C_FIELD(p,s16 *,80)=0;
M2C_FIELD(p,s16 *,82)=0;
M2C_FIELD(p,s16 *,84)=0;
M2C_FIELD(p,void **,0)=lbl_80293C58;
M2C_FIELD(p,u32 *,88)=1;
M2C_FIELD(p,s16 *,78)=48;
M2C_FIELD(p,s16 *,82)=48;
}
M2C_FIELD(p,s16 *,8)=-0x1000;
M2C_FIELD(p,u32 *,0x48)=1;
fn_800C96F8((u8 *)p+0x3C,lbl_8027C698+0xF7,strlen((char *)lbl_8027C698+0xF7));
M2C_FIELD(p,u32 *,0x34)|=0x10;
M2C_FIELD(p,u32 *,0x58)=1;
fn_801400F4(self,p);
fn_800381EC(unit,(s8)fn_8003B2D0(unit));
M2C_FIELD(M2C_FIELD(self,void **,0x5C),s16 *,0x3E)=0;
if(!fn_8017D6D8(M2C_FIELD(self,void **,0x5C))) {
temp=fn_8013FF94(self,0x80,0);
fn_80140258(self,temp,Pair(M2C_FIELD(temp,s16 *,0xA),-0x3A),0);
ref=M2C_FIELD(self,Obj **,0x5C);
if(ref) {
refs=ref->refs-1; ref->refs=refs;
if(refs==0 && ref) ref->destroy(1);
M2C_FIELD(self,void **,0x5C)=0;
}
fn_801475FC(lbl_8027C698+0x11C,100); fn_8000C070(self,3); return;
}
fn_801400F4(self,a); fn_8014027C(self,a,Pair(0x20,M2C_FIELD(a,s16 *,0xC)),0);
fn_801400F4(self,b); fn_8014027C(self,b,Pair(0x20,M2C_FIELD(b,s16 *,0xC)),0);
fn_801400F4(self,c); fn_8014027C(self,c,Pair(0x134,M2C_FIELD(c,s16 *,0xC)),0);
fn_801400F4(self,M2C_FIELD(self,void **,0x5C));
temp=M2C_FIELD(self,void **,0x5C);
fn_8014027C(self,temp,Pair(0x118,M2C_FIELD(temp,s16 *,0xC)),1);
fn_8013FF00(self,M2C_FIELD(self,void **,0x5C));
#pragma cplusplus off
}
#pragma cplusplus off
#pragma use_lmw_stmw reset

#pragma cplusplus reset
void fn_801BCC60(s32 arg0) {
    void fn_801A4BE0(void *);
    void fn_801ED970(s32, s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    s32 saved;

    saved = *(s32 *)lbl_802EF4C8;
    fn_801A4BE0(lbl_80330EAC);
    if (*(u32 *)(lbl_80330EAC + 0xCAC) & 0x10) {
        fn_801ED970(saved, arg0);
    }
}

void fn_801BCCC4(void *arg0) {
    void *fn_8013FF94(void *, s32, s32);
    void fn_801658DC(void *, void *);
    s32 fn_8017D52C(void *, s16);
    void fn_80034A8C(void *, s32, u8, void *, s32);
    void fn_8014004C(void *, void *);
    extern u8 lbl_8027C698[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80330EAC[];
    void *p;
    void *obj;
    s32 v;
    s32 saved;
    void *base;

    p = fn_8013FF94(arg0, 0x80, 0);
    fn_801658DC(p, lbl_8027C698 + 0x1CE);
    obj = *(void **)((u8 *)arg0 + 0x5C);
    base = lbl_80330708;
    v = *(s32 *)lbl_802EF4C8;
    saved = *(s32 *)((u8 *)base + 0x1C);
    *(s32 *)((u8 *)base + 0x1C) = saved - fn_8017D52C(obj, *(s16 *)((u8 *)obj + 0x3E));
    fn_80034A8C(lbl_80330EAC, v, (u8)*(s16 *)((u8 *)obj + 0x3E), arg0, 0);
    *(s16 *)((u8 *)base + 0x70) = 0;
    p = fn_8013FF94(arg0, -0x1000, 0);
    if (p != NULL) {
        fn_8014004C(arg0, p);
    }
}

void fn_801BCD8C(void *arg0) {
    extern u8 lbl_802EF4C8[];
    extern f32 lbl_8036B2D8;
    void fn_80140258(void *, void *, void *, s32);
    void fn_8000C188(void *);
    void fn_8000C070(void *, s32);
    typedef struct {
        s16 x;
        s16 y;
    } Pair;
    Pair p1;
    Pair p2;
    Pair p3;
    Pair p4;
    Pair *pp;
    void *obj1;
    void *obj4;
    s32 t;
    s32 flag;
    f32 f;
    void *obj3;
    void *self;
    void *obj2;

    flag = lbl_802EF4C8[8];
    obj1 = *(void **)((u8 *)arg0 + 0x4C);
    obj2 = *(void **)((u8 *)arg0 + 0x54);
    obj3 = *(void **)((u8 *)arg0 + 0x58);
    self = arg0;

    switch (flag) {
    case 0x81:
        pp = &p1;
        t = *(s16 *)((u8 *)obj1 + 0xA);
        t = *(s16 *)((u8 *)obj1 + 0xE) - t;
        pp->y = *(s16 *)((u8 *)obj1 + 0xC);
        pp->x = -(s16)t;
        fn_80140258(arg0, obj1, pp, 1);

        t = *(s16 *)((u8 *)obj2 + 0xA);
        t = *(s16 *)((u8 *)obj2 + 0xE) - t;
        p2.y = *(s16 *)((u8 *)obj2 + 0xC);
        p2.x = -(s16)t;
        fn_80140258(self, obj2, &p2, 0);

        t = *(s16 *)((u8 *)obj3 + 0xC);
        p3.x = 0x260;
        p3.y = t;
        fn_80140258(self, obj3, &p3, 0);

        obj4 = *(void **)((u8 *)self + 0x5C);
        t = *(s16 *)((u8 *)obj4 + 0xC);
        p4.x = 0x260;
        p4.y = t;
        fn_80140258(self, obj4, &p4, 0);

        fn_8000C188(self);
        break;
    case 0x80:
        f = lbl_8036B2D8;
        *(f32 *)((u8 *)obj1 + 0x30) = f;
        *(f32 *)((u8 *)obj2 + 0x30) = f;
        *(f32 *)((u8 *)obj3 + 0x30) = f;
        fn_8000C070(arg0, 6);
        break;
    }
}

#pragma cplusplus on
extern "C" void fn_801BCFF4(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void fn_8000D8BC(s32, s32);
    void fn_8013FDA0(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_801475FC(void *, s32);
    void fn_801658DC(void *, void *);
    u8 fn_80166D8C(void *);
    void fn_801673D0(void *);
    void fn_8016758C(void *, void *, s32, f32, f32);
    extern u8 lbl_8027C698[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
        virtual void destroy(s32) = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual Vec2s v9() = 0;
        s32 refcount;
    };

    void *obj;
    register int btn;
    register u8 gate;
    register int flags;
    u32 sp14;
    s16 sp8[2];
    s16 spC[2];
    u8 pad[8];
    Obj *temp;
    s32 refs;
    s16 tmp;

    obj = fn_8013FF94(arg0, 0x80, 0);
    fn_8013FDA0(arg0);

    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && (s16)*(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x5C) + 0x3E) != 0 && fn_80166D8C(lbl_80330D68) == 0) {
            fn_8000D8BC(0, *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x5C) + 0x3E));
            fn_801658DC(obj, lbl_8027C698 + 0x1FA);
            fn_801475FC(lbl_8027C698 + 0x10C, 0x64);
            fn_8000C188(arg0);
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0) {
            *(Vec2s *)&sp14 = ((Obj *)*(void **)((u8 *)arg0 + 0x5C))->v9();
            s32 text = (s32)(lbl_8027C698 + 0x215);
            fn_8016758C(lbl_80330D68, arg0, text, (f32)*(s16 *)&sp14, (f32)*((s16 *)&sp14 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            spC[0] = *(s16 *)((u8 *)obj + 0xA);
            spC[1] = -0x3A;
            fn_80140258(arg0, obj, spC, 0);
            tmp = *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x5C) + 0xC);
            sp8[0] = 0x260;
            sp8[1] = tmp;
            fn_80140258(arg0, *(void **)((u8 *)arg0 + 0x5C), sp8, 1);
            temp = *(Obj **)((u8 *)arg0 + 0x5C);
            if (temp != NULL) {
                refs = temp->refcount - 1;
                temp->refcount = refs;
                if (refs == 0 && temp != NULL) {
                    temp->destroy(1);
                }
                *(void **)((u8 *)arg0 + 0x5C) = NULL;
            }
            fn_801475FC(lbl_8027C698 + 0x11C, 0x64);
            fn_8000C070(arg0, 3);
        }
    }
    (void)pad;
}

extern "C" void fn_801BD28C(void *arg0) {
    void *fn_8013FF94(void *, s32, s32);
    void fn_8014027C(void *, void *, s16 *, s32);
    void fn_801658DC(void *, void *);
    void fn_8013FF00(void *, void *);
    extern u8 lbl_8027C698[];
    struct { s16 x; s16 y; } spC;
    struct { s16 x; s16 y; } sp8;
    void *obj;
    void *child;
    void *p;
    s16 tmp;

    obj = fn_8013FF94(arg0, 0x80, 0);
    if (*(s16 *)((u8 *)obj + 0xC) < 0x28) {
        spC.x = *(s16 *)((u8 *)obj + 0xA);
        spC.y = 0x28;
        fn_8014027C(arg0, obj, &spC.x, 0);
    }
    *(s32 *)((u8 *)obj + 0x48) = 1;
    fn_801658DC(obj, lbl_8027C698 + 0x227);
    child = *(void **)((u8 *)arg0 + 0x5C);
    if (*(s16 *)((u8 *)child + 0xA) != 0x118) {
        tmp = *(s16 *)((u8 *)child + 0xC);
        sp8.x = 0x118;
        sp8.y = tmp;
        fn_8014027C(arg0, child, &sp8.x, 0);
    }
    fn_8013FF00(arg0, *(void **)((u8 *)arg0 + 0x5C));
    p = fn_8013FF94(arg0, -0x1000, 0);
    if (p != NULL) {
        fn_801658DC(p, lbl_8027C698 + 0x23B);
    }
}

#pragma cplusplus reset

void fn_801BD37C(void *arg0) {
    void *fn_800C42D8(u32);
    void fn_801658DC(void *, void *);
    void fn_801400F4(void *, void *);
    void *fn_801BEDC4(void *, s32, s32, s32);
    void fn_8013FF00(void *, void *);
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80292230[];
    extern u8 lbl_80293C84[];
    extern u8 lbl_80293C2C[];
    extern u8 lbl_80293C00[];
    extern u8 lbl_8027C698[];
    extern u32 lbl_802EF4C8[];
    void *a;
    void *p;
    void *q;
    void *tmp;

    p = fn_800C42D8(0x60);
    if (p != NULL) {
        M2C_FIELD(p, void **, 0) = lbl_8028FDB0;
        M2C_FIELD(p, u32 *, 4) = 0;
        M2C_FIELD(p, void **, 0) = lbl_80292230;
        M2C_FIELD(p, s16 *, 8) = -1;
        M2C_FIELD(p, s16 *, 0xA) = 0;
        M2C_FIELD(p, s16 *, 0xC) = -0x3A;
        M2C_FIELD(p, s16 *, 0xE) = 0x260;
        M2C_FIELD(p, s16 *, 0x10) = 0;
        M2C_FIELD(p, s16 *, 0x12) = 0;
        M2C_FIELD(p, s16 *, 0x14) = 0;
        M2C_FIELD(p, s16 *, 0x16) = 0x260;
        M2C_FIELD(p, s16 *, 0x18) = 0x3A;
        M2C_FIELD(p, s16 *, 0x1A) = 0;
        M2C_FIELD(p, s16 *, 0x1C) = 0;
        M2C_FIELD(p, u8 *, 0x1E) = 0xFF;
        M2C_FIELD(p, u8 *, 0x1F) = 0xFF;
        M2C_FIELD(p, u8 *, 0x20) = 0xFF;
        M2C_FIELD(p, u8 *, 0x21) = 0xFF;
        M2C_FIELD(p, s16 *, 0x22) = 0x1F4;
        M2C_FIELD(p, s16 *, 0x24) = 0;
        M2C_FIELD(p, f32 *, 0x28) = 1.0f;
        M2C_FIELD(p, f32 *, 0x2C) = 1.0f;
        M2C_FIELD(p, f32 *, 0x30) = 1.0f;
        M2C_FIELD(p, u32 *, 0x34) = 0;
        M2C_FIELD(p, u32 *, 0x38) = 0;
        M2C_FIELD(p, void **, 0) = lbl_80293C84;
        M2C_FIELD(p, u32 *, 0x3C) = 0;
        M2C_FIELD(p, u32 *, 0x40) = 0;
        M2C_FIELD(p, u32 *, 0x44) = 0;
        M2C_FIELD(p, u32 *, 0x40) = 0;
        M2C_FIELD(p, u32 *, 0x48) = 0;
        M2C_FIELD(p, u8 *, 0x4C) = 1;
        M2C_FIELD(p, s16 *, 0x4E) = 0;
        M2C_FIELD(p, s16 *, 0x50) = 0;
        M2C_FIELD(p, s16 *, 0x52) = 0;
        M2C_FIELD(p, s16 *, 0x54) = 0;
        M2C_FIELD(p, void **, 0) = lbl_80293C2C;
        M2C_FIELD(p, void **, 0) = lbl_80293C00;
        M2C_FIELD(p, u32 *, 0x58) = 0;
        M2C_FIELD(p, s16 *, 0x5C) = 0xB;
        M2C_FIELD(p, s16 *, 0x5E) = 0x10;
    }
    M2C_FIELD(p, s16 *, 8) = 0x80;
    M2C_FIELD(p, s16 *, 0x24) = 8;
    M2C_FIELD(p, s16 *, 0x4E) = 0x10;
    M2C_FIELD(p, u32 *, 0x58) = 1;
    M2C_FIELD(p, u32 *, 0x34) |= 0x10;
    M2C_FIELD(p, u8 *, 0x4C) = 2;
    M2C_FIELD(p, u32 *, 0x48) = 1;
    fn_801658DC(p, lbl_8027C698 + 0x227);
    fn_801400F4(arg0, p);
    q = fn_800C42D8(0x94);
    if (q != NULL) {
        q = fn_801BEDC4(q, 0x260, 0x78, 0x1C2);
    }
    M2C_FIELD(arg0, void **, 0x5C) = q;
    tmp = M2C_FIELD(arg0, void **, 0x5C);
    if (tmp != NULL) {
        M2C_FIELD(tmp, s32 *, 4) = M2C_FIELD(tmp, s32 *, 4) + 1;
    }
    a = M2C_FIELD(arg0, void **, 0x5C);
    M2C_FIELD(a, s16 *, 8) = 0x105;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s16 *, 0x24) = 8;
    tmp = M2C_FIELD(arg0, void **, 0x5C);
    M2C_FIELD(tmp, u32 *, 0x34) |= 0x10;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), u32 *, 0x40) = lbl_802EF4C8[0];
    fn_801400F4(arg0, M2C_FIELD(arg0, void **, 0x5C));
    fn_8013FF00(arg0, M2C_FIELD(arg0, void **, 0x5C));
}

#pragma cplusplus on
extern "C" void fn_801BD5A0(void *arg0) {
 void fn_8000C070(void *,s32); void fn_8002833C(void *,u32);
 u8 fn_8003D13C(u32); void fn_80137EA0(void *,u32); void fn_80138808(void *,u32);
 u32 fn_8013AC54(void *); void fn_8013FDA0(void *);
 void fn_80140210(void *,void *,s32);
 void fn_801475FC(void *,s32); void fn_801694AC(u32,void *); void fn_801695BC(u32,void *,s32);
 void fn_80176888(void *,void *,f32,f32); s16 fn_8017D604(u32,s32);
 extern u8 lbl_8027C698[]; extern u8 lbl_802EF4C8[]; extern u8 lbl_80330708[];
 extern u32 lbl_80367110; extern void *lbl_80367240; extern f32 lbl_8036B2E4;
 class Pair { public: s16 x,y; Pair() {} Pair(s16 a,s16 b): x(a), y(b) {} Pair(const Pair &o) { *(u32 *)this=*(u32 *)&o; } Pair &operator=(const Pair &o) { *(u32 *)this=*(u32 *)&o; return *this; } };
 void fn_80140258(void *,void *,const Pair &,s32);
 struct Obj {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
 virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
 virtual Pair v9();
 };
 u32 pos1,pos2;

 s32 a,btn;
 u8 gate;
 s32 flags;
 s16 tmp;
 u32 unit;
 s32 money;
 void *obj;
 unit=fn_8013AC54(M2C_FIELD(arg0,void **,0x48));
 fn_8013FDA0(arg0);
 if(unit!=fn_8013AC54(M2C_FIELD(arg0,void **,0x48))) {
 unit=fn_8013AC54(M2C_FIELD(arg0,void **,0x48));
 fn_80138808(M2C_FIELD(arg0,void **,0x4C),unit);
 fn_80137EA0(M2C_FIELD(arg0,void **,0x54),unit);
 M2C_FIELD(M2C_FIELD(arg0,void **,0x58),u32 *,0x3C)=unit;
 }
 flags=lbl_80367110; gate=0;
 if((flags&0x10)&&!(flags&0x20)) gate=1;
 if(!gate) {
 a=M2C_FIELD(lbl_80367240,s32 *,4);
 btn=a&(M2C_FIELD(lbl_80367240,s32 *,8)^a);
 if((btn&0x100)&&unit) {
 if(!fn_8003D13C(unit)) {
 *(Pair *)&pos1=((Obj *)M2C_FIELD(arg0,void **,0x48))->v9();
 fn_80176888(lbl_8027C698+0x24F,arg0,(f32)*(s16 *)&pos1,(f32)*((s16 *)&pos1+1));
 return;
 }
 money=*(s32 *)(lbl_80330708+0x1C);
 if(money<fn_8017D604(unit,1)) {
 *(Pair *)&pos2=((Obj *)M2C_FIELD(arg0,void **,0x48))->v9();
 fn_80176888(lbl_8027C698+0x263,arg0,(f32)*(s16 *)&pos2,(f32)*((s16 *)&pos2+1));
 return;
 }
 {

 fn_8002833C(lbl_802EF4C8,unit);
 obj=M2C_FIELD(arg0,void **,0x48);
 lbl_802EF4C8[0x15]=M2C_FIELD(obj,s16 *,0x56);
 M2C_FIELD(obj,f32 *,0x30)=lbl_8036B2E4;
 obj=M2C_FIELD(arg0,void **,0x48);
 tmp=M2C_FIELD(obj,s16 *,0x10)-M2C_FIELD(obj,s16 *,0xC);
 fn_80140258(arg0,obj,Pair(M2C_FIELD(obj,s16 *,0xA),-tmp),0);
 fn_80140210(arg0,M2C_FIELD(arg0,void **,0x50),0);
 fn_8000C070(arg0,5);
 fn_801475FC(lbl_8027C698+0x10C,0x64);
 }
 } else if((btn&0x800)&&unit) {
 fn_801695BC(unit,arg0,0x1000000); M2C_FIELD(arg0,u8 *,0x44)=4; fn_8000C070(arg0,0x1D);
 } else if((btn&0x400)&&unit) {
 fn_801694AC(unit,arg0); M2C_FIELD(arg0,u8 *,0x44)=4; fn_8000C070(arg0,0x1E);
 } else if(btn&0x200) {
 fn_8000C070(arg0,12); fn_801475FC(lbl_8027C698+0x11C,0x64);
 }
 }
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_801BD8B4(void *arg0) {
    f32 fn_8013893C(void *);
    void fn_8013FF00(void *, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801400F4(void *, void *);
    void fn_80140234(void *, void *, s32);
    void fn_8014027C(void *, void *, s16 *, s32);
    void fn_801658DC(u32, s32);
    extern u8 lbl_8027C698[];

    struct Obj {
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5();
        virtual void v6();
        virtual void v7();
        virtual void v8();
    };

    s16 sp14[2];
    s16 sp10[2];
    s16 spC[2];
    s16 sp8[2];
    void *var_r31;
    void *var_r30;
    void *var_r29;
    u32 res;
    s16 temp_r7;

    var_r30 = arg0;
    if ((var_r31 = fn_8013FF94(arg0, 0x100, 0)) == 0) {
        var_r31 = *(void **)((u8 *)var_r30 + 0x48);
        fn_801400F4(var_r30, var_r31);
    }
    if (*(s16 *)((u8 *)var_r31 + 0xC) != 0x10) {
        sp14[0] = *(s16 *)((u8 *)var_r31 + 0xA);
        sp14[1] = 0x10;
        fn_8014027C(var_r30, var_r31, sp14, 0);
    }
    *(u8 *)((u8 *)var_r31 + 0x4D) = 0;
    *(f32 *)((u8 *)var_r31 + 0x30) = 1.0f;
    if ((var_r29 = fn_8013FF94(var_r30, 0x101, 0)) == 0) {
        var_r29 = *(void **)((u8 *)var_r30 + 0x4C);
        fn_801400F4(var_r30, var_r29);
    }
    *(s32 *)((u8 *)var_r29 + 0x40) = 0x1003C;
    ((Obj *)var_r29)->v8();
    if (*(s16 *)((u8 *)var_r29 + 0xA) != 0x20) {
        temp_r7 = *(s16 *)((u8 *)var_r29 + 0xC);
        sp10[0] = 0x20;
        sp10[1] = temp_r7;
        fn_8014027C(var_r30, var_r29, sp10, 0);
    }
    if ((var_r29 = fn_8013FF94(var_r30, 0x102, 0)) == 0) {
        var_r29 = *(void **)((u8 *)var_r30 + 0x50);
        fn_801400F4(var_r30, var_r29);
    }
    if (fn_8013893C(var_r29) < 1.0f) {
        fn_80140234(var_r30, var_r29, 0);
    }
    if ((var_r29 = fn_8013FF94(var_r30, 0x103, 0)) == 0) {
        var_r29 = *(void **)((u8 *)var_r30 + 0x54);
        fn_801400F4(var_r30, var_r29);
    }
    if (*(s16 *)((u8 *)var_r29 + 0xA) != 0x20) {
        temp_r7 = *(s16 *)((u8 *)var_r29 + 0xC);
        spC[0] = 0x20;
        spC[1] = temp_r7;
        fn_8014027C(var_r30, var_r29, spC, 0);
    }
    if ((var_r29 = fn_8013FF94(var_r30, 0x104, 0)) == 0) {
        var_r29 = *(void **)((u8 *)var_r30 + 0x58);
        fn_801400F4(var_r30, var_r29);
    }
    if (*(s16 *)((u8 *)var_r29 + 0xA) != 0x134) {
        temp_r7 = *(s16 *)((u8 *)var_r29 + 0xC);
        sp8[0] = 0x134;
        sp8[1] = temp_r7;
        fn_8014027C(var_r30, var_r29, sp8, 0);
    }
    fn_8013FF00(var_r30, var_r31);
    res = (u32)fn_8013FF94(var_r30, -0x1000, 0);
    if (res != 0U) {
        fn_801658DC(res, (s32)(lbl_8027C698 + 0x277));
    }
}

#pragma cplusplus on
extern "C" void fn_801BDAF8(void *arg0) {
#pragma opt_common_subs off
    void *fn_800C42D8(s32);
    void *fn_8013AC54(void *);
    void fn_8013B064(void *, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_8014004C(void *, void *);
    void fn_801400F4(void *, void *);
    void fn_8013FF00(void *, void *);
    void *fn_80179F8C(void *, s16, s16, s16, s16, s32);
    u8 *fn_8018D900(s32);
    void fn_80138808(void *, void *);
    void fn_80137EA0(void *, void *);
    void fn_801BC71C(void);
    extern u8 lbl_8027C698[];
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_802919B0[];
    extern u8 lbl_80291A0C[];
    extern u8 lbl_80291A3C[];
    extern u8 lbl_80292178[];
    extern u8 lbl_80292230[];
    extern u8 lbl_802CA264[];
    extern f32 lbl_8036B2D8;
    extern f32 lbl_8036B2E0;

    struct Obj {
        virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0;
        virtual void v3() = 0; virtual void v4() = 0; virtual void v5() = 0;
        virtual void v6() = 0; virtual void v7() = 0; virtual void v8() = 0;
        virtual void v9() = 0; virtual void v10() = 0; virtual void v11(void *) = 0;
        virtual void v12(s32) = 0;
    };

    void *self = arg0;
    void *entry;
    void *p;
    void *hold;
    void *q;
    f32 zero;

    fn_8014004C(self, fn_8013FF94(self, 0x80, 0));
    fn_8014004C(self, fn_8013FF94(self, 0x81, 0));

    p = fn_800C42D8(0xD8);
    if (p != NULL) {
        p = fn_80179F8C(p, 0x38, 0x10, 0x1F0, 0x90, 0x226);
    }
    *(void **)((u8 *)self + 0x48) = p;
    q = *(void **)((u8 *)self + 0x48);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x24) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x64) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 8) = 0x100;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x5A) = 0x1C;
    ((Obj *)*(void **)((u8 *)self + 0x48))->v12(4);
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x48) + 0x58) = 3;

    hold = *(void **)((u8 *)self + 0x48);
    entry = *(void **)lbl_802CA264;
    while (entry != NULL) {
        fn_8013B064(hold, entry);
        entry = *(void **)((u8 *)entry + 0x184);
    }
    hold = *(void **)((u8 *)self + 0x48);
    entry = *(void **)(lbl_802CA264 + 0x3C);
    while (entry != NULL) {
        fn_8013B064(hold, entry);
        entry = *(void **)((u8 *)entry + 0x184);
    }
    q = *(void **)((u8 *)self + 0x48);
    *(void **)((u8 *)q + 0x7C) = (void *)fn_801BC71C;
    *(s32 *)((u8 *)q + 0x80) = 0;
    fn_801400F4(self, *(void **)((u8 *)self + 0x48));

    p = fn_800C42D8(0x50);
    if (p != NULL) {
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = 0;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x130;
        *(s16 *)((u8 *)p + 0xC) = 0xA8;
        *(s16 *)((u8 *)p + 0xE) = (s16)(0x130 + 0x118);
        *(s16 *)((u8 *)p + 0x10) = (s16)(0xA8 + 0x40);
        *(s16 *)((u8 *)p + 0x12) = 0;
        *(s16 *)((u8 *)p + 0x14) = 0;
        *(s16 *)((u8 *)p + 0x16) = 0x118;
        *(s16 *)((u8 *)p + 0x18) = 0x40;
        *(s16 *)((u8 *)p + 0x1A) = 0;
        *(s16 *)((u8 *)p + 0x1C) = 0;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1FE;
        *(s16 *)((u8 *)p + 0x24) = 0;
        zero = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x28) = zero;
        *(f32 *)((u8 *)p + 0x2C) = zero;
        *(f32 *)((u8 *)p + 0x30) = zero;
        *(s32 *)((u8 *)p + 0x34) = 0;
        *(s32 *)((u8 *)p + 0x38) = 0;
        *(void **)p = lbl_80292178;
        *(u8 *)((u8 *)p + 0x3C) = 0xFF;
        *(u8 *)((u8 *)p + 0x3D) = 0xFF;
        *(u8 *)((u8 *)p + 0x3E) = 0xFF;
        *(u8 *)((u8 *)p + 0x3F) = 0xFF;
        *(s32 *)((u8 *)p + 0x40) = 0;
        *(s16 *)((u8 *)p + 0x44) = 0;
        *(s16 *)((u8 *)p + 0x46) = 0;
        ((Obj *)p)->v8();
    }
    *(void **)((u8 *)self + 0x50) = p;
    q = *(void **)((u8 *)self + 0x50);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0x24) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 8) = 0x102;
    q = *(void **)((u8 *)self + 0x50);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    {
        u8 col[4];
        u8 *color = fn_8018D900(2);
        u8 first = color[0];
        col[0] = first;
        col[1] = color[1];
        col[2] = color[2];
        col[3] = color[3];
        q = *(void **)((u8 *)self + 0x50);
        if ((u8 *)q + 0x3C != col) {
            *(u8 *)((u8 *)q + 0x3C) = first;
            *(u8 *)((u8 *)q + 0x3D) = col[1];
            *(u8 *)((u8 *)q + 0x3E) = col[2];
            *(u8 *)((u8 *)q + 0x3F) = col[3];
        }
    }
    *(f32 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0x2C) = lbl_8036B2E0;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x50) + 0x40) = lbl_8027C698 + 0x1B7;
    fn_801400F4(self, *(void **)((u8 *)self + 0x50));

    p = fn_800C42D8(0x54);
    if (p != NULL) {
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = 0;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x20;
        *(s16 *)((u8 *)p + 0xC) = 0x98;
        *(s16 *)((u8 *)p + 0xE) = (s16)(0x20 + 0x108);
        *(s16 *)((u8 *)p + 0x10) = (s16)(0x98 + 0x55);
        *(s16 *)((u8 *)p + 0x12) = 0;
        *(s16 *)((u8 *)p + 0x14) = 0;
        *(s16 *)((u8 *)p + 0x16) = 0x108;
        *(s16 *)((u8 *)p + 0x18) = 0x55;
        *(s16 *)((u8 *)p + 0x1A) = 0;
        *(s16 *)((u8 *)p + 0x1C) = 0;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1F4;
        *(s16 *)((u8 *)p + 0x24) = 0;
        zero = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x28) = zero;
        *(f32 *)((u8 *)p + 0x2C) = zero;
        *(f32 *)((u8 *)p + 0x30) = zero;
        *(s32 *)((u8 *)p + 0x34) = 0;
        *(s32 *)((u8 *)p + 0x38) = 0;
        *(void **)p = lbl_80291A3C;
        *(s32 *)((u8 *)p + 0x3C) = 0;
        *(s32 *)((u8 *)p + 0x40) = 0x1003C;
        *(s32 *)((u8 *)p + 0x4C) = 0;
        *(s32 *)((u8 *)p + 0x50) = 0;
        ((Obj *)p)->v8();
    }
    *(void **)((u8 *)self + 0x4C) = p;
    q = *(void **)((u8 *)self + 0x4C);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x4C) + 8) = 0x101;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x4C) + 0x24) = 8;
    *(s32 *)((u8 *)*(void **)((u8 *)self + 0x4C) + 0x4C) = 1;
    q = *(void **)((u8 *)self + 0x4C);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    fn_80138808(*(void **)((u8 *)self + 0x4C), fn_8013AC54(*(void **)((u8 *)self + 0x48)));
    fn_801400F4(self, *(void **)((u8 *)self + 0x4C));

    p = fn_800C42D8(0x4C);
    if (p != NULL) {
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = 0;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x20;
        *(s16 *)((u8 *)p + 0xC) = 0xF8;
        *(s16 *)((u8 *)p + 0xE) = (s16)(0x20 + 0x108);
        *(s16 *)((u8 *)p + 0x10) = (s16)(0xF8 + 0x95);
        *(s16 *)((u8 *)p + 0x12) = 0;
        *(s16 *)((u8 *)p + 0x14) = 0;
        *(s16 *)((u8 *)p + 0x16) = 0x108;
        *(s16 *)((u8 *)p + 0x18) = 0x95;
        *(s16 *)((u8 *)p + 0x1A) = 0;
        *(s16 *)((u8 *)p + 0x1C) = 0;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1F4;
        *(s16 *)((u8 *)p + 0x24) = 0;
        zero = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x28) = zero;
        *(f32 *)((u8 *)p + 0x2C) = zero;
        *(f32 *)((u8 *)p + 0x30) = zero;
        *(s32 *)((u8 *)p + 0x34) = 0;
        *(s32 *)((u8 *)p + 0x38) = 0;
        *(void **)p = lbl_80291A0C;
        *(s32 *)((u8 *)p + 0x44) = 0;
        *(u8 *)((u8 *)p + 0x48) = 1;
        ((Obj *)p)->v8();
    }
    *(void **)((u8 *)self + 0x54) = p;
    q = *(void **)((u8 *)self + 0x54);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x54) + 8) = 0x103;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x54) + 0x24) = 8;
    q = *(void **)((u8 *)self + 0x54);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    fn_80137EA0(*(void **)((u8 *)self + 0x54), fn_8013AC54(*(void **)((u8 *)self + 0x48)));
    fn_801400F4(self, *(void **)((u8 *)self + 0x54));

    p = fn_800C42D8(0x40);
    if (p != NULL) {
        *(void **)p = lbl_8028FDB0;
        *(s32 *)((u8 *)p + 4) = 0;
        *(void **)p = lbl_80292230;
        *(s16 *)((u8 *)p + 8) = -1;
        *(s16 *)((u8 *)p + 0xA) = 0x134;
        *(s16 *)((u8 *)p + 0xC) = 0x110;
        *(s16 *)((u8 *)p + 0xE) = (s16)(0x134 + 0x110);
        *(s16 *)((u8 *)p + 0x10) = (s16)(0x110 + 0x7D);
        *(s16 *)((u8 *)p + 0x12) = 0;
        *(s16 *)((u8 *)p + 0x14) = 0;
        *(s16 *)((u8 *)p + 0x16) = 0x110;
        *(s16 *)((u8 *)p + 0x18) = 0x7D;
        *(s16 *)((u8 *)p + 0x1A) = 0;
        *(s16 *)((u8 *)p + 0x1C) = 0;
        *(u8 *)((u8 *)p + 0x1E) = 0xFF;
        *(u8 *)((u8 *)p + 0x1F) = 0xFF;
        *(u8 *)((u8 *)p + 0x20) = 0xFF;
        *(u8 *)((u8 *)p + 0x21) = 0xFF;
        *(s16 *)((u8 *)p + 0x22) = 0x1F4;
        *(s16 *)((u8 *)p + 0x24) = 0;
        zero = lbl_8036B2D8;
        *(f32 *)((u8 *)p + 0x28) = zero;
        *(f32 *)((u8 *)p + 0x2C) = zero;
        *(f32 *)((u8 *)p + 0x30) = zero;
        *(s32 *)((u8 *)p + 0x34) = 0;
        *(s32 *)((u8 *)p + 0x38) = 0;
        *(void **)p = lbl_802919B0;
        *(s32 *)((u8 *)p + 0x3C) = 0;
        ((Obj *)p)->v8();
    }
    *(void **)((u8 *)self + 0x58) = p;
    q = *(void **)((u8 *)self + 0x58);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 8) = 0x104;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 0x24) = 8;
    q = *(void **)((u8 *)self + 0x58);
    *(u32 *)((u8 *)q + 0x34) |= 0x10;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x58) + 0x3C) = fn_8013AC54(*(void **)((u8 *)self + 0x48));
    fn_801400F4(self, *(void **)((u8 *)self + 0x58));
    fn_8013FF00(self, *(void **)((u8 *)self + 0x48));
}
#pragma cplusplus reset

#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_801BE1EC(void *arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void m08(s32) = 0;
    };
    ((Obj *) arg0)->m08(-1);
}

#pragma cplusplus on
extern "C" void *fn_801BE21C(void *arg0, s16 arg1) {
    void fn_80140304(void *, s32);
    void fn_800C428C(void *);
    extern void lbl_80297E78;

    struct RefObj {
        virtual void destroy(s32);
        s32 refCount;
    };

    struct Holder {
        u8 pad[0x40];
        void *vt;
        u8 pad44[4];
        RefObj *p48;
        RefObj *p4c;
        RefObj *p50;
        RefObj *p54;
        RefObj *p58;
        RefObj *p5c;
        RefObj *p60;
        RefObj *p64;
        RefObj *p68;
        RefObj *p6c;
    };

    s16 doFree;
    RefObj *p;
    Holder *h;

    doFree = arg1;
    if (arg0 != NULL) {
        h = (Holder *)arg0;
        h->vt = &lbl_80297E78;
        p = h->p48;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p48 = (RefObj *)0;
        }
        p = h->p4c;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p4c = (RefObj *)0;
        }
        p = h->p50;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p50 = (RefObj *)0;
        }
        p = h->p54;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p54 = (RefObj *)0;
        }
        p = h->p58;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p58 = (RefObj *)0;
        }
        p = h->p5c;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p5c = (RefObj *)0;
        }
        p = h->p60;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p60 = (RefObj *)0;
        }
        p = h->p64;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p64 = (RefObj *)0;
        }
        p = h->p68;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p68 = (RefObj *)0;
        }
        p = h->p6c;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p6c = (RefObj *)0;
        }
        fn_80140304(arg0, 0);
        if (doFree > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}
#pragma cplusplus reset

#pragma cplusplus reset
void *fn_801BE6A8(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    void fn_801403F0(void);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80297C14[];
    extern u8 lbl_80297E78[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80368274;
    void *temp_r3;

    lbl_802EF4C8[8] = 0x80;
    temp_r3 = fn_8000CAA0(lbl_80297C14, arg0);
    if (temp_r3 != NULL) {
        fn_801403F0();
        *(void **)((char *)temp_r3 + 0x40) = lbl_80297E78;
        *(s32 *)((char *)temp_r3 + 0x48) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
        *(s32 *)((char *)temp_r3 + 0x50) = 0;
        *(s32 *)((char *)temp_r3 + 0x54) = 0;
        *(s32 *)((char *)temp_r3 + 0x58) = 0;
        *(s32 *)((char *)temp_r3 + 0x5C) = 0;
        *(s32 *)((char *)temp_r3 + 0x60) = 0;
        *(s32 *)((char *)temp_r3 + 0x64) = 0;
        *(s32 *)((char *)temp_r3 + 0x68) = 0;
        *(s32 *)((char *)temp_r3 + 0x6C) = 0;
        lbl_80368274 = 0x80;
    }
    fn_8000C070(temp_r3, 0xB);
    return temp_r3;
}

void *fn_801BE748(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    void fn_801403F0(void);
    extern u8 lbl_80297C14[];
    extern u8 lbl_80297E78[];
    extern u8 lbl_80368274;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80297C14, arg0);
    if (temp_r3 != NULL) {
        fn_801403F0();
        *(void **)((char *)temp_r3 + 0x40) = lbl_80297E78;
        *(s32 *)((char *)temp_r3 + 0x48) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
        *(s32 *)((char *)temp_r3 + 0x50) = 0;
        *(s32 *)((char *)temp_r3 + 0x54) = 0;
        *(s32 *)((char *)temp_r3 + 0x58) = 0;
        *(s32 *)((char *)temp_r3 + 0x5C) = 0;
        *(s32 *)((char *)temp_r3 + 0x60) = 0;
        *(s32 *)((char *)temp_r3 + 0x64) = 0;
        *(s32 *)((char *)temp_r3 + 0x68) = 0;
        *(s32 *)((char *)temp_r3 + 0x6C) = 0;
        lbl_80368274 = 0x80;
    }
    return temp_r3;
}

void fn_801BE7CC(void) {
    extern u16 lbl_8027C698[];
    fn_8000E0E4((u8 *)lbl_8027C698 + 0xDF);
}

void *fn_801BE7F8(void){extern u8 lbl_8027C698[];return lbl_8027C698+0x29b;}

u8 fn_801BE808(void)
{
    void *fn_8000C0C0(void *);
    void fn_8013FF94(void *, s32, s32);
    u32 fn_8017BC94(void);
    extern u8 lbl_80297C14[];
    u32 result;
    s32 ret;

    fn_8013FF94(fn_8000C0C0(lbl_80297C14), 0x106, 0);
    result = fn_8017BC94();
    ret = 2;
    if (result != 0) {
        ret = 0;
    }
    return (u8)ret;
}

s32 fn_801BE854(s32 arg0, void *arg1, void *arg2) {
    void fn_80176888(void *, void *, f32, f32);
    extern u8 lbl_8027C698[];
    extern u32 lbl_802EF4C8[];

    if (*(u8 *)((u8 *)arg2 + 0x39) == 2) {
        fn_80176888(
            lbl_8027C698 + 0x2AB,
            arg1,
            (f32)(*(s16 *)((u8 *)arg1 + 0x30) + *(s16 *)((u8 *)arg2 + 0x30)),
            (f32)(*(s16 *)((u8 *)arg1 + 0x32) + *(s16 *)((u8 *)arg2 + 0x32)));
        return 0;
    }
    *((u8 *)lbl_802EF4C8 + 8) = 0x83;
    return 5;
}

void fn_801BE8F0(void) {
    extern u16 lbl_8027C698[];
    fn_8000E0E4((u8 *)lbl_8027C698 + 0x16E);
}

void *fn_801BE91C(void) { extern u8 lbl_8027C698[]; return lbl_8027C698+0x2D4; }

s32 fn_801BE92C(void *arg0) {
    void *fn_8000C0C0(void *);
    void *fn_80019DF0(u8);
    u8 fn_801058C4(void *, void *);
    void fn_8013FF94(void *, s32, s32);
    u32 fn_8017BD58(void);
    s32 fn_8017C3C8(void *);
    extern u8 lbl_80297C14[];
    extern u32 lbl_802EF4C8[];
    void *temp_r31;
    void *temp_r4;
    void *unit;
    s32 temp_r30;
    u8 found;
    s32 i;
    void *ret;

    *((s8 *)arg0 + 4) = 0;
    ret = fn_8000C0C0(lbl_80297C14);
    temp_r31 = (void *)lbl_802EF4C8[0];
    fn_8013FF94(ret, 0x106, 0);
    if (fn_8017BD58() >= 5U) {
        *((s8 *)arg0 + 4) = -1;
        return 2;
    }
    temp_r4 = *(void **)((u8 *)temp_r31 + 0x18C);
    temp_r30 = *((u8 *)temp_r4 + 0x40);
    if (temp_r30 <= fn_8017C3C8(temp_r31)) {
        *((s8 *)arg0 + 4) = -2;
        return 2;
    }
    found = 0;
    i = 0;
    do {
        unit = fn_80019DF0((u8)i);
        if (*((u8 *)unit + 0x19) != 0 && fn_801058C4(unit, temp_r31) != 0) {
            found = 1;
            break;
        }
        i += 1;
    } while (i < 0x62);
    if (found == 0) {
        *((s8 *)arg0 + 4) = -3;
        return 2;
    }
    return 0;
}

s32 fn_801BEA38(void *arg0, void *arg1, void *arg2) {
    void fn_80176888(void *, void *, f32, f32);
    extern u8 lbl_8027C698[];
    extern u8 lbl_802EF4C8[];
    f32 x;
    f32 y;

    if (*(u8 *)((u8 *)arg2 + 0x39) == 2) {
        x = (f32)(*(s16 *)((u8 *)arg1 + 0x30) + *(s16 *)((u8 *)arg2 + 0x30));
        y = (f32)(*(s16 *)((u8 *)arg1 + 0x32) + *(s16 *)((u8 *)arg2 + 0x32));
        switch (*(s8 *)((u8 *)arg0 + 4)) {
        case -1:
            fn_80176888(lbl_8027C698 + 0x2E3, arg1, x, y);
            break;
        case -2:
            fn_80176888(lbl_8027C698 + 0x18C, arg1, x, y);
            break;
        case -3:
            fn_80176888(lbl_8027C698 + 0x2FA, arg1, x, y);
            break;
        }
        return 0;
    }
    lbl_802EF4C8[8] = 0x82;
    return 5;
}

#pragma cplusplus on
extern "C" void *fn_801BEB24(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    struct Obj {
        virtual void m08() = 0;
        virtual void m0C() = 0;
        virtual void m10() = 0;
        virtual void m14() = 0;
        virtual void m18() = 0;
        virtual void m1C() = 0;
        virtual void m20() = 0;
        virtual void m24() = 0;
        virtual void m28() = 0;
    };
    typedef struct { s16 x; s16 y; } Pair;
    void fn_801BEB9C(void *, Pair *, Pair *, s16);
    extern u8 lbl_802918A0[];
    Pair pC;
    Pair p8;

    p8.y = arg3;
    pC.x = arg1;
    pC.y = arg2;
    p8.x = 0x108;
    fn_801BEB9C(arg0, &pC, &p8, arg4);
    *(void **)arg0 = lbl_802918A0;
    *(s32 *)((u8 *)arg0 + 0xCC) = 0;
    ((Obj *)arg0)->m28();
    return arg0;
}
#pragma cplusplus reset

#pragma cplusplus on
#pragma global_optimizer off
extern "C" void *fn_801BEB9C(void *arg0, s16 *arg1, s16 *arg2, s16 arg3) {
    void fn_80142060(void *);
    extern void *lbl_8028FDB0[];
    extern void *lbl_80292230[];
    extern void *lbl_80292208[];
    extern void *lbl_80291944[];
    extern void *lbl_80295478[];
    extern f32 lbl_8036B2D8;
    extern f32 lbl_8036B2E0;
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
    };
    struct Sub {
        virtual void v0() = 0;
        virtual void v1() = 0;
    };
    typedef struct { s16 x; s16 y; } Pair;
    void *vt92230;
    s32 zero;
    s16 neg1;
    s16 y0;
    void *self;
    s16 x1;
    s16 x0;
    void *vt92208;
    void *tmp;
    f32 one;
    s16 y1;

    vt92230 = lbl_80292230;
    zero = 0;
    neg1 = -1;
    y0 = ((Pair *)arg1)->y;
    self = arg0;
    x1 = ((Pair *)arg2)->x;
    x0 = ((Pair *)arg1)->x;
    vt92208 = lbl_80292208;
    *(void **)self = lbl_8028FDB0;
    *(s32 *)((u8 *)self + 4) = zero;
    tmp = self;
    one = lbl_8036B2D8;
    *(void **)self = vt92230;
    *(s16 *)((u8 *)self + 8) = neg1;
    y1 = ((Pair *)arg2)->y;
    *(s16 *)((u8 *)self + 0xA) = x0;
    *(s16 *)((u8 *)self + 0xC) = y0;
    *(s16 *)((u8 *)self + 0xE) = (s16)(x0 + x1);
    *(s16 *)((u8 *)self + 0x10) = (s16)(y0 + y1);
    *(s16 *)((u8 *)self + 0x12) = zero;
    *(s16 *)((u8 *)self + 0x14) = zero;
    *(s16 *)((u8 *)self + 0x16) = x1;
    *(s16 *)((u8 *)self + 0x18) = y1;
    *(s16 *)((u8 *)self + 0x1A) = zero;
    *(s16 *)((u8 *)self + 0x1C) = zero;
    *(u8 *)((u8 *)self + 0x1E) = 0xFF;
    *(u8 *)((u8 *)self + 0x1F) = 0xFF;
    *(u8 *)((u8 *)self + 0x20) = 0xFF;
    *(u8 *)((u8 *)self + 0x21) = 0xFF;
    *(s16 *)((u8 *)self + 0x22) = arg3;
    *(s16 *)((u8 *)self + 0x24) = zero;
    *(f32 *)((u8 *)self + 0x28) = one;
    *(f32 *)((u8 *)self + 0x2C) = one;
    *(f32 *)((u8 *)self + 0x30) = one;
    *(s32 *)((u8 *)self + 0x34) = zero;
    *(s32 *)((u8 *)self + 0x38) = zero;
    *(void **)self = vt92208;
    fn_80142060((u8 *)tmp + 0x3C);
    *(void **)self = lbl_80291944;
    *(s32 *)((u8 *)self + 0x48) = 0;
    *(u8 *)((u8 *)self + 0x4C) = 1;
    *(s16 *)((u8 *)self + 0x4E) = 0;
    *(s16 *)((u8 *)self + 0x50) = -1;
    *(s16 *)((u8 *)self + 0x52) = -1;
    *(s16 *)((u8 *)self + 0x54) = 0;
    *(s16 *)((u8 *)self + 0x56) = 1;
    *(f32 *)((u8 *)self + 0x58) = lbl_8036B2E0;
    *(s16 *)((u8 *)self + 0x5C) = 0x18;
    *(s16 *)((u8 *)self + 0x5E) = 0;
    fn_80142060((u8 *)self + 0x68);
    *(s32 *)((u8 *)self + 0x74) = 0;
    *(void **)((u8 *)self + 0x7C) = lbl_80295478;
    {
        Sub *sub;
        f32 f1;
        f32 f0;
        f1 = lbl_8036B2D8;
        sub = (Sub *)((u8 *)self + 0x7C);
        *(s32 *)((u8 *)self + 0x80) = 0;
        f0 = lbl_8036B2E0;
        *(s32 *)((u8 *)self + 0x84) = 2;
        *(u8 *)((u8 *)self + 0x88) = 1;
        *(u8 *)((u8 *)self + 0x89) = 1;
        *(s16 *)((u8 *)self + 0x90) = 0;
        *(s16 *)((u8 *)self + 0x92) = 0;
        *(f32 *)((u8 *)self + 0x94) = f1;
        *(f32 *)((u8 *)self + 0x98) = f1;
        *(u8 *)((u8 *)self + 0x9C) = 0xFF;
        *(u8 *)((u8 *)self + 0x9D) = 0xFF;
        *(u8 *)((u8 *)self + 0x9E) = 0xFF;
        *(u8 *)((u8 *)self + 0x9F) = 0xFF;
        *(f32 *)((u8 *)self + 0xA0) = f0;
        sub->v1();
    }
    *(void **)((u8 *)self + 0xA4) = lbl_80295478;
    {
        Sub *sub;
        f32 f1;
        f32 f0;
        f1 = lbl_8036B2D8;
        sub = (Sub *)((u8 *)self + 0xA4);
        *(s32 *)((u8 *)self + 0xA8) = 0;
        f0 = lbl_8036B2E0;
        *(s32 *)((u8 *)self + 0xAC) = 3;
        *(u8 *)((u8 *)self + 0xB0) = 1;
        *(u8 *)((u8 *)self + 0xB1) = 1;
        *(s16 *)((u8 *)self + 0xB8) = 0;
        *(s16 *)((u8 *)self + 0xBA) = 0;
        *(f32 *)((u8 *)self + 0xBC) = f1;
        *(f32 *)((u8 *)self + 0xC0) = f1;
        *(u8 *)((u8 *)self + 0xC4) = 0xFF;
        *(u8 *)((u8 *)self + 0xC5) = 0xFF;
        *(u8 *)((u8 *)self + 0xC6) = 0xFF;
        *(u8 *)((u8 *)self + 0xC7) = 0xFF;
        *(f32 *)((u8 *)self + 0xC8) = f0;
        sub->v1();
    }
    ((Obj *)self)->v8();
    return self;
}
#pragma global_optimizer reset
#pragma cplusplus reset

void fn_801BEDC4(void) {
    // Function body will be filled in
}

void *fn_801BEF90(void *arg0) {
    extern f32 lbl_8036B2F0;
    *(s32 *)arg0 = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(f32 *)((u8 *)arg0 + 0xC) = lbl_8036B2F0;
    *(f32 *)((u8 *)arg0 + 0x10) = lbl_8036B2F0;
    *(f32 *)((u8 *)arg0 + 0x14) = lbl_8036B2F0;
    return arg0;
}

void fn_801C09B0(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_8013FF94(arg0, 0x81, 0);
    fn_8016A57C(*(s32 *)((char *)arg0 + 0x18));
    fn_8013FEE0();
    if (*(u32 *)((char *)temp_r31 + 0x6C) == 0) {
        fn_8000C070(arg0, 6);
    }
    fn_8014876C(lbl_8032FF08, 0x64, 0x2EE);
}

void fn_801C0A28(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_8013FF94(arg0, 0x81, 0);
    fn_8016A5AC(*(s32 *)((char *)arg0 + 0x18));
    fn_8013FEF0();
    fn_8014876C(lbl_8032FF08, 0x46, 0x2EE);
    fn_800BE658(fn_801D2AAC(temp_r31), arg0);
}

void fn_801C0A9C(void *arg0) {
    extern u8 lbl_802EF4C8[];
    switch ((s32)lbl_802EF4C8[8]) {
    case 0x80:
        break;
    case 0x81:
        fn_8000C070(arg0, 4);
        break;
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801C0C58(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void fn_8013FDA0(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801475FC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_80167190(void *, s32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016758C(void *, void *, s32, f32, f32);
    void fn_80176888(void *, void *, f32, f32);
    u8 fn_801D2A38(void *);
    s32 fn_801D2AAC(void *);
    s32 fn_801D2C20(void *);
    extern char lbl_8027CF10[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual Vec2s v9() = 0;
    };

    void *obj;
    register int btn;
    void *self;
    register u8 gate;
    register int flags;
    u32 sp1C;
    u32 sp18;
    u32 sp14;

    self = arg0;
    obj = fn_8013FF94(arg0, 0x81, 0);
    btn = fn_801D2AAC(obj);
    fn_8013FDA0(self);
    if (btn != fn_801D2AAC(obj)) {
        fn_801D2AAC(obj);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            *(Vec2s *)&sp1C = ((Obj *)obj)->v9();
            fn_80167190(lbl_80330D68, fn_801D2C20(obj), (f32)*(s16 *)&sp1C, (f32)*((s16 *)&sp1C + 1));
        }
    }

    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && fn_80166D8C(lbl_80330D68) == 0) {
            if (fn_801D2A38(obj) != 0) {
                *(Vec2s *)&sp18 = ((Obj *)obj)->v9();
                fn_80176888(lbl_8027CF10 + 0x54, self, (f32)*(s16 *)&sp18, (f32)*((s16 *)&sp18 + 1));
            } else {
                fn_8000C188(self);
                fn_801475FC(lbl_8027CF10 + 0x66, 0x64);
            }
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0) {
            *(Vec2s *)&sp14 = ((Obj *)obj)->v9();
            fn_8016758C(lbl_80330D68, self, fn_801D2C20(obj), (f32)*(s16 *)&sp14, (f32)*((s16 *)&sp14 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            fn_8000C070(self, 5);
            fn_801475FC(lbl_8027CF10 + 0x76, 0x64);
        }
    }
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

void fn_801C0F54(s32 arg0) {
    u32 fn_8013FF94(s32, s32, s32);
    void fn_801658DC(u32, void *);
    void *fn_8000E0E4(void *);
    extern char lbl_8027CF10[];
    s32 self;
    void *str;
    void *p;

    self = arg0;
    str = (void *)0;
    p = (void *)fn_8013FF94(self, 0x80, 0);
    *(s32 *)((u8 *)p + 0x48) = 1;
    fn_801658DC((u32)p, lbl_8027CF10 + 0x86);
    str = fn_8000E0E4(lbl_8027CF10 + 0x99);
    p = (void *)fn_8013FF94(self, -0x1000, 0);
    if (p != 0) {
        fn_801658DC((u32)p, str);
    }
}

void fn_801C0FDC(void *arg0) {
    void *fn_800C42D8(s32);
    void fn_801400F4(void *);
    void *fn_801C14B4(void *, s32, s32, s32);
    void *obj;

    obj = fn_800C42D8(0xC8);
    if (obj != NULL) {
        obj = fn_801C14B4(obj, 0x80, 0x70, 0x1F4);
    }
    *(s16 *)((u8 *)obj + 8) = 0x81;
    *(u32 *)((u8 *)obj + 0x34) |= 0x10;
    fn_801400F4(arg0);
}

#pragma cplusplus on
extern "C" void fn_801C1044(void *arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void m08(s32) = 0;
    };
    ((Obj *) arg0)->m08(-1);
}

extern "C" void *fn_801C1074(void *arg0, s16 arg1) {
    void fn_80140304(void *, s16);
    void fn_800C428C(void *);
    extern u8 lbl_80297FEC[];
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x40) = lbl_80297FEC;
        fn_80140304(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma cplusplus off
void fn_801C10D4(void *arg0) {
void *fn_800C42D8(u32); void fn_801658DC(void *,void *); void fn_801400F4(void *,void *);
s32 strlen(const char *); void fn_800C96F8(void *,const void *,s32);
s32 fn_8000E0E4(void *); s32 fn_8013FF94(void *,s32,s32);
extern u8 lbl_8028FDB0[],lbl_80292230[],lbl_80293C84[],lbl_80293C2C[],lbl_80293C00[],lbl_80293C58[],lbl_8027CF10[];
extern f32 lbl_8036B318;
s32 text;
 void *p;
 void *obj;
 void *self=arg0;
p=fn_800C42D8(0x60);
if(p) {
text=0;M2C_FIELD(p,void **,0)=lbl_8028FDB0;
M2C_FIELD(p,u32 *,4)=text;
M2C_FIELD(p,void **,0)=lbl_80292230;
M2C_FIELD(p,s16 *,8)=-1;
M2C_FIELD(p,s16 *,10)=text;
M2C_FIELD(p,s16 *,12)=40;
M2C_FIELD(p,s16 *,14)=608;
M2C_FIELD(p,s16 *,16)=98;
M2C_FIELD(p,s16 *,18)=text;
M2C_FIELD(p,s16 *,20)=text;
M2C_FIELD(p,s16 *,22)=608;
M2C_FIELD(p,s16 *,24)=58;
M2C_FIELD(p,s16 *,26)=text;
M2C_FIELD(p,s16 *,28)=text;
M2C_FIELD(p,u8 *,30)=255;
M2C_FIELD(p,u8 *,31)=255;
M2C_FIELD(p,u8 *,32)=255;
M2C_FIELD(p,u8 *,33)=255;
M2C_FIELD(p,s16 *,34)=510;
M2C_FIELD(p,s16 *,36)=text;
M2C_FIELD(p,f32 *,40)=1.0f;
M2C_FIELD(p,f32 *,44)=1.0f;
M2C_FIELD(p,f32 *,48)=1.0f;
M2C_FIELD(p,u32 *,52)=text;
M2C_FIELD(p,u32 *,56)=text;
M2C_FIELD(p,void **,0)=lbl_80293C84;
M2C_FIELD(p,u32 *,60)=text;
M2C_FIELD(p,u32 *,64)=text;
M2C_FIELD(p,u32 *,68)=text;
M2C_FIELD(p,u32 *,64)=text;
M2C_FIELD(p,u32 *,72)=text;
M2C_FIELD(p,u8 *,76)=1;
M2C_FIELD(p,s16 *,78)=text;
M2C_FIELD(p,s16 *,80)=text;
M2C_FIELD(p,s16 *,82)=text;
M2C_FIELD(p,s16 *,84)=text;
M2C_FIELD(p,void **,0)=lbl_80293C2C;
M2C_FIELD(p,void **,0)=lbl_80293C00;
M2C_FIELD(p,u32 *,88)=text;
M2C_FIELD(p,s16 *,92)=12;
M2C_FIELD(p,s16 *,94)=16;
}
M2C_FIELD(p,s16 *,8)=0x80;
M2C_FIELD(p,u32 *,0x34)|=0x10;
M2C_FIELD(p,u32 *,0x58)=1;
M2C_FIELD(p,s16 *,0x4E)=0x60;
M2C_FIELD(p,s16 *,0x52)=0x60;
M2C_FIELD(p,u8 *,0x4C)=2;
M2C_FIELD(p,u32 *,0x48)=1;
fn_801658DC(p,lbl_8027CF10+0x86);
fn_801400F4(self,p);
p=fn_800C42D8(0x5C);
if(p) {M2C_FIELD(p,void **,0)=lbl_8028FDB0;
M2C_FIELD(p,u32 *,4)=0;
M2C_FIELD(p,void **,0)=lbl_80292230;
M2C_FIELD(p,s16 *,8)=-1;
M2C_FIELD(p,s16 *,10)=0;
M2C_FIELD(p,s16 *,12)=400;
M2C_FIELD(p,s16 *,14)=608;
M2C_FIELD(p,s16 *,16)=448;
M2C_FIELD(p,s16 *,18)=0;
M2C_FIELD(p,s16 *,20)=0;
M2C_FIELD(p,s16 *,22)=608;
M2C_FIELD(p,s16 *,24)=48;
M2C_FIELD(p,s16 *,26)=0;
M2C_FIELD(p,s16 *,28)=0;
M2C_FIELD(p,u8 *,30)=255;
M2C_FIELD(p,u8 *,31)=255;
M2C_FIELD(p,u8 *,32)=255;
M2C_FIELD(p,u8 *,33)=255;
M2C_FIELD(p,s16 *,34)=90;
M2C_FIELD(p,s16 *,36)=0;
M2C_FIELD(p,f32 *,40)=1.0f;
M2C_FIELD(p,f32 *,44)=1.0f;
M2C_FIELD(p,f32 *,48)=1.0f;
M2C_FIELD(p,u32 *,52)=0;
M2C_FIELD(p,u32 *,56)=0;
M2C_FIELD(p,void **,0)=lbl_80293C84;
M2C_FIELD(p,u32 *,60)=0;
M2C_FIELD(p,u32 *,64)=0;
M2C_FIELD(p,u32 *,68)=0;
M2C_FIELD(p,u32 *,64)=0;
M2C_FIELD(p,u32 *,72)=0;
M2C_FIELD(p,u8 *,76)=1;
M2C_FIELD(p,s16 *,78)=0;
M2C_FIELD(p,s16 *,80)=0;
M2C_FIELD(p,s16 *,82)=0;
M2C_FIELD(p,s16 *,84)=0;
M2C_FIELD(p,void **,0)=lbl_80293C58;
M2C_FIELD(p,u32 *,88)=1;
M2C_FIELD(p,s16 *,78)=48;
M2C_FIELD(p,s16 *,82)=48;
}
M2C_FIELD(p,s16 *,8)=-0x1000;
M2C_FIELD(p,u32 *,0x48)=1;
fn_800C96F8((u8 *)p+0x3C,lbl_8027CF10+0xAA,strlen((char *)lbl_8027CF10+0xAA));
M2C_FIELD(p,u32 *,0x34)|=0x10;
M2C_FIELD(p,u32 *,0x58)=1;
fn_801400F4(arg0,p);
text=fn_8000E0E4(lbl_8027CF10+0x99);
if((obj=(void *)fn_8013FF94(self,-0x1000,0))!=0) fn_801658DC(obj,(void *)text);
}
#pragma cplusplus off

s32 fn_801C13F0(void) {
    u8 fn_800BE800(s32);
    u8 fn_800BE890(s32);
    s32 fn_800BE914(void);
    s32 n;
    s32 i;

    n = fn_800BE914();
    for (i = 0; i < n; i++) {
        if (fn_800BE800(i) != 0 && fn_800BE890(i) == 0) {
            return 1;
        }
    }
    return 0;
}

s32 fn_801C1464(s32 arg0) {
    s32 fn_8000CAA0(void *, s32);
    void fn_801403F0(void);
    extern u8 lbl_80297F28[];
    extern u8 lbl_80297FEC[];
    s32 result;

    result = fn_8000CAA0(lbl_80297F28, arg0);
    if (result != 0) {
        fn_801403F0();
        *(u32 *)(result + 0x40) = (u32)lbl_80297FEC;
    }
    return result;
}

#pragma cplusplus on
extern "C" void fn_80142060(void *);
extern "C" int fn_801C18E4(void *);
extern "C" void fn_801D2C30(void *);
extern "C" void *fn_801C14B4(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    extern void *lbl_8028FDB0[];
    extern void *lbl_80292230[];
    extern void *lbl_80292208[];
    extern void *lbl_8029998C[];
    extern void *lbl_80295478[];
    extern f32 lbl_8036B318;
    extern f32 lbl_8036B31C;
    struct Work {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
    };
    struct Sub {
        virtual void v0() = 0;
        virtual void v1() = 0;
    };
    s32 temp_r11;
    s32 temp_r10;
    void *self;

    self = arg0;
    *(void **)((u8 *)self + 0x0) = lbl_8028FDB0;
    *(s32 *)((u8 *)self + 0x4) = 0;
    *(void **)((u8 *)self + 0x0) = lbl_80292230;
    *(s16 *)((u8 *)self + 0x8) = -1;
    temp_r11 = arg1 + 0x160;
    temp_r10 = arg2 + 0xF0;
    *(s16 *)((u8 *)self + 0xA) = arg1;
    *(s16 *)((u8 *)self + 0xC) = arg2;
    *(s16 *)((u8 *)self + 0xE) = temp_r11;
    *(s16 *)((u8 *)self + 0x10) = temp_r10;
    *(s16 *)((u8 *)self + 0x12) = 0;
    *(s16 *)((u8 *)self + 0x14) = 0;
    *(s16 *)((u8 *)self + 0x16) = 0x160;
    *(s16 *)((u8 *)self + 0x18) = 0xF0;
    *(s16 *)((u8 *)self + 0x1A) = 0;
    *(s16 *)((u8 *)self + 0x1C) = 0;
    *(u8 *)((u8 *)self + 0x1E) = 0xFF;
    *(u8 *)((u8 *)self + 0x1F) = 0xFF;
    *(u8 *)((u8 *)self + 0x20) = 0xFF;
    *(u8 *)((u8 *)self + 0x21) = 0xFF;
    *(s16 *)((u8 *)self + 0x22) = arg3;
    *(s16 *)((u8 *)self + 0x24) = 0;
    *(f32 *)((u8 *)self + 0x28) = lbl_8036B318;
    *(f32 *)((u8 *)self + 0x2C) = lbl_8036B318;
    *(f32 *)((u8 *)self + 0x30) = lbl_8036B318;
    *(s32 *)((u8 *)self + 0x34) = 0;
    *(s32 *)((u8 *)self + 0x38) = 0;
    *(void **)((u8 *)self + 0x0) = lbl_80292208;
    fn_80142060((u8 *)self + 0x3C);
    *(void **)((u8 *)self + 0x0) = lbl_8029998C;
    *(s32 *)((u8 *)self + 0x48) = 0;
    *(u8 *)((u8 *)self + 0x4C) = 1;
    *(s16 *)((u8 *)self + 0x4E) = 0;
    *(s16 *)((u8 *)self + 0x50) = -1;
    *(s16 *)((u8 *)self + 0x52) = -1;
    *(s16 *)((u8 *)self + 0x54) = 0;
    *(s16 *)((u8 *)self + 0x56) = 0x20;
    *(s16 *)((u8 *)self + 0x58) = 6;
    *(f32 *)((u8 *)self + 0x5C) = lbl_8036B31C;
    *(s16 *)((u8 *)self + 0x60) = 0x40;
    *(s16 *)((u8 *)self + 0x62) = 8;
    fn_801C18E4((u8 *)self + 0x6C);
    *(void **)((u8 *)self + 0x78) = lbl_80295478;
    *(s32 *)((u8 *)self + 0x7C) = 0;
    *(s32 *)((u8 *)self + 0x80) = 2;
    *(u8 *)((u8 *)self + 0x84) = 1;
    *(u8 *)((u8 *)self + 0x85) = 1;
    *(s16 *)((u8 *)self + 0x8C) = 0;
    *(s16 *)((u8 *)self + 0x8E) = 0;
    *(f32 *)((u8 *)self + 0x90) = lbl_8036B318;
    *(f32 *)((u8 *)self + 0x94) = lbl_8036B318;
    *(u8 *)((u8 *)self + 0x98) = 0xFF;
    *(u8 *)((u8 *)self + 0x99) = 0xFF;
    *(u8 *)((u8 *)self + 0x9A) = 0xFF;
    *(u8 *)((u8 *)self + 0x9B) = 0xFF;
    *(f32 *)((u8 *)self + 0x9C) = lbl_8036B31C;
    ((Sub *)((u8 *)self + 0x78))->v1();
    *(void **)((u8 *)self + 0xA0) = lbl_80295478;
    *(s32 *)((u8 *)self + 0xA4) = 0;
    *(s32 *)((u8 *)self + 0xA8) = 3;
    *(u8 *)((u8 *)self + 0xAC) = 1;
    *(u8 *)((u8 *)self + 0xAD) = 1;
    *(s16 *)((u8 *)self + 0xB4) = 0;
    *(s16 *)((u8 *)self + 0xB6) = 0;
    *(f32 *)((u8 *)self + 0xB8) = lbl_8036B318;
    *(f32 *)((u8 *)self + 0xBC) = lbl_8036B318;
    *(u8 *)((u8 *)self + 0xC0) = 0xFF;
    *(u8 *)((u8 *)self + 0xC1) = 0xFF;
    *(u8 *)((u8 *)self + 0xC2) = 0xFF;
    *(u8 *)((u8 *)self + 0xC3) = 0xFF;
    *(f32 *)((u8 *)self + 0xC4) = lbl_8036B31C;
    ((Sub *)((u8 *)self + 0xA0))->v1();
    ((Work *)self)->v8();
    fn_801D2C30((UIListObj *)self);
    return self;
}
#pragma cplusplus reset

void fn_800C428C(void *);
void *fn_801D2E40(void *, s16);
void fn_801C1824(ListIter *ret, List *list, ListIter *start, ListIter *end) {
    ListNode *first;
    ListNode *last;
    ListNode *a;
    ListNode *node;

    first = start->node;
    last = end->node;
    if (first == last) {
        ret->node = last;
        return;
    }
    a = last->prev;
    first->prev->next = a->next;
    a->next->prev = first->prev;
    while (start->node != end->node) {
        fn_801D2E40((u8 *)start->node + 8, -1);
        node = start->node;
        start->node = node->next;
        fn_800C428C(node);
        list->size--;
    }
    ret->node = end->node;
}

int fn_801C18E4(void *arg0) {
    u32 *ptr;

    ptr = (u32 *)((u8 *)arg0 + 0x4);
    *(u32 *)arg0 = 0;
    ptr[1] = (u32)ptr;
    ptr[0] = (u32)ptr;
}

void fn_801C18FC(s32 arg0) {
    void fn_8000A388(void *, void *, void *, void *);
    extern void fn_801C19E4(void *, s32);
    extern u8 lbl_80297FF8[];
    extern s8 lbl_80368280;
    extern f32 lbl_8036B328;
    void *c;

    c = &lbl_80368280;
    lbl_80368280 = -1;
    *(s32 *)((char *)c + 4) = (s32)((f32)arg0 / lbl_8036B328);
    fn_8000A388(lbl_80297FF8, (void *)fn_801C19E4, &lbl_80368280, c);
}

void fn_801C1970(s8 arg0, s32 arg1)
{
    void fn_8000A388(void *, void *, void *, void *);
    extern void fn_801C19E4(void *, s32);
    extern u8 lbl_80297FF8[];
    extern s8 lbl_80368280;
    extern f32 lbl_8036B328;
    f32 temp;

    lbl_80368280 = arg0;
    temp = (f32)arg1 / lbl_8036B328;
    *(s32 *)((char *)&lbl_80368280 + 4) = (s32)temp;
    fn_8000A388(lbl_80297FF8, (void *)fn_801C19E4, &lbl_80368280, &lbl_80368280);
}

void fn_801C19E4(u8 *arg0, u8 *arg1) {
    s32 a;
    s32 b;

    a = arg0[0x30];
    b = arg1[0];
    a = (s8)a;
    b = (s8)b;
    if (a == b || b == -1) {
        arg0[0x31] = 0xA;
        *(s16 *)(arg0 + 0x3A) = *(s32 *)(arg1 + 4);
    }
}

#pragma use_lmw_stmw on
void fn_801C1A18(s8 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6) {
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80297FF8[];
    extern f64 lbl_8036B330;
    extern f32 lbl_8036B328;
    void *obj;
    union { f64 d; struct { u32 hi; u32 lo; } w; } conv;
    s16 v;

    obj = fn_8000CAF0(lbl_80297FF8, arg6);
    conv.w.hi = 0x43300000;
    conv.w.lo = (u32)arg5 ^ 0x80000000;
    v = (s16)((f32)(conv.d - lbl_8036B330) / lbl_8036B328);
    *(s16 *)((u8 *)obj + 0x3C) = arg1;
    *(s16 *)((u8 *)obj + 0x3E) = arg2;
    *(s16 *)((u8 *)obj + 0x40) = arg3;
    *(s32 *)((u8 *)obj + 0x44) = arg4;
    *(s8 *)((u8 *)obj + 0x30) = arg0;
    *(s16 *)((u8 *)obj + 0x36) = v;
    *(s16 *)((u8 *)obj + 0x38) = -1;
    *(s16 *)((u8 *)obj + 0x3A) = 0;
    *(u8 *)((u8 *)obj + 0x48) = 1;
}

#pragma use_lmw_stmw on
void fn_801C1AC8(s16 arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80297FF8[];
    extern f32 lbl_8036B328;
    extern f64 lbl_8036B330;
    void *obj;
    f32 div;

    obj = fn_8000CAF0(lbl_80297FF8, arg7);
    div = lbl_8036B328;
    (void)lbl_8036B330;
    *(s16 *)((u8 *)obj + 0x3C) = arg0;
    *(s16 *)((u8 *)obj + 0x3E) = arg1;
    *(s16 *)((u8 *)obj + 0x40) = arg2;
    *(s32 *)((u8 *)obj + 0x44) = arg3;
    *(s8 *)((u8 *)obj + 0x30) = -1;
    *(s16 *)((u8 *)obj + 0x36) = (s16)((f32)arg4 / div);
    *(s16 *)((u8 *)obj + 0x38) = (s16)((f32)arg5 / div);
    *(s16 *)((u8 *)obj + 0x3A) = (s16)((f32)arg6 / div);
    *(u8 *)((u8 *)obj + 0x48) = 1;
}
void fn_801C1BC0(s8 arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80297FF8[];
    extern f32 lbl_8036B328;
    extern f64 lbl_8036B330;
    void *obj;

    obj = fn_8000CAF0(lbl_80297FF8, arg5);
    *(s16 *)((u8 *)obj + 0x3C) = arg1;
    *(s16 *)((u8 *)obj + 0x3E) = arg2;
    *(s32 *)((u8 *)obj + 0x44) = arg3;
    *(s8 *)((u8 *)obj + 0x30) = arg0;
    *(s16 *)((u8 *)obj + 0x36) = (s16)((f32)arg4 / lbl_8036B328);
    *(s16 *)((u8 *)obj + 0x38) = -1;
    *(s16 *)((u8 *)obj + 0x3A) = 0;
    *(u8 *)((u8 *)obj + 0x48) = 0;
}

#pragma use_lmw_stmw on
void fn_801C1C64(s16 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80297FF8[];
    extern f32 lbl_8036B328;
    extern f64 lbl_8036B330;
    void *obj;
    f32 div;
    s8 n1;
    u8 z;
    s16 v0;
    s16 v1;
    s16 v2;

    obj = fn_8000CAF0(lbl_80297FF8, arg6);
    div = lbl_8036B328;
    n1 = -1;
    z = 0;
    v0 = (s16)((f32)arg3 / div);
    v1 = (s16)((f32)arg4 / div);
    v2 = (s16)((f32)arg5 / div);
    *(s16 *)((u8 *)obj + 0x3C) = arg0;
    *(s16 *)((u8 *)obj + 0x3E) = arg1;
    *(s32 *)((u8 *)obj + 0x44) = arg2;
    *(s8 *)((u8 *)obj + 0x30) = n1;
    *(s16 *)((u8 *)obj + 0x36) = v0;
    *(s16 *)((u8 *)obj + 0x38) = v1;
    *(s16 *)((u8 *)obj + 0x3A) = v2;
    *(u8 *)((u8 *)obj + 0x48) = z;
}
void fn_801C1D54(s16 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_8029801C[];
    extern f32 lbl_8036B328;
    extern f64 lbl_8036B330;
    void *obj;
    union { f64 d; struct { u32 hi; u32 lo; } w; } conv;
    union { f64 d; struct { u32 hi; u32 lo; } w; } conv2;
    s16 v;

    obj = fn_8000CAF0(lbl_8029801C, 3);
    conv.w.hi = 0x43300000;
    conv.w.lo = (u32)arg3 ^ 0x80000000;
    conv2.w.hi = 0x43300000;
    conv2.w.lo = (u32)arg4 ^ 0x80000000;
    v = (s16)((f32)(conv.d - lbl_8036B330) / lbl_8036B328);
    *(s16 *)((u8 *)obj + 0x3C) = arg0;
    *(s16 *)((u8 *)obj + 0x3E) = arg1;
    *(s32 *)((u8 *)obj + 0x44) = arg2;
    *(s16 *)((u8 *)obj + 0x36) = v;
    *(s16 *)((u8 *)obj + 0x38) = (s16)((f32)(conv2.d - lbl_8036B330) / lbl_8036B328);
    *(s16 *)((u8 *)obj + 0x3A) = v;
}
void fn_801C1E0C(void *arg0) {
    void fn_800072B0(void *, void *, void *, void *);
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(u8);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    void **fn_8006EDD8(void *, s32);
    extern void *lbl_803674F4;
    extern u32 lbl_8036B320;
    extern u32 lbl_8036B324;
    extern f32 lbl_8036B338;
    extern f32 lbl_8036B33C;
    extern f32 lbl_8036B340;
    extern f32 lbl_8036B344;
    extern f32 lbl_8036B348;
    extern f32 lbl_8036B34C;
    extern u32 lbl_8036C508;
    extern u32 lbl_8036C50C;

    u32 sp14;
    u32 sp10;
    u32 spC;
    u32 sp8;
    void *mgr;
    void *self;
    u16 *pair;
    u16 h;
    u16 h4;
    s32 x;
    s16 y;
    s32 textW;
    void *str;
    f32 tw;

    self = arg0;
    mgr = lbl_803674F4;
    fn_8000A258();
    fn_80009D74(lbl_8036B338, lbl_8036B338, lbl_8036B33C, lbl_8036B340);
    fn_80009B8C(*(u8 *)((u8 *)self + 0x32));
    fn_8000A248();
    pair = (u16 *)*fn_8006EDD8(mgr, 0x1F);
    h = pair[1];
    h4 = (u16)(pair[0] - 4);
    fn_8000A258();
    fn_8000A174(0, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)*(s16 *)((u8 *)self + 0x3C), (f32)*(s16 *)((u8 *)self + 0x3E), (f32)h, (f32)h4);
    fn_800076AC(0, 0, 0, 0xA0);
    fn_80007884();
    fn_80007898(3);
    fn_800077D8((f32)(*(s16 *)((u8 *)self + 0x3C) + h), (f32)*(s16 *)((u8 *)self + 0x3E), lbl_8036B344, (f32)h4);
    fn_800075D8();
    sp8 = lbl_8036C50C;
    spC = lbl_8036B324;
    sp10 = lbl_8036C508;
    sp14 = lbl_8036B320;
    fn_800072B0(&sp14, &sp10, &spC, &sp8);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B348);
    fn_8000A248();
    textW = fn_80010B78(fn_8000E0E4(*(void **)((u8 *)self + 0x44)), -1, lbl_8036B340);
    tw = (f32)textW;
    x = (s32)((f32)(*(s16 *)((u8 *)self + 0x3C) + 0x4E) - lbl_8036B34C * tw);
    y = *(s16 *)((u8 *)self + 0x3E);
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    str = fn_8000E0E4(*(void **)((u8 *)self + 0x44));
    fn_8001003C(x, y, 0xD, 0, 0, str, lbl_8036B340, lbl_8036B338);
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
}

void fn_801C2250(void *arg0) {
    if (arg0 != NULL) {
        *(u8 *)((u32)arg0 + 0x31) = 0;
        *(u16 *)((u32)arg0 + 0x34) = 0;
        fn_8000C188();
    }
}

void fn_801C2284(void *arg0) {
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(u8);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    extern void *lbl_803674F4;
    extern f32 lbl_8036B338;
    extern f32 lbl_8036B340;
    extern f32 lbl_8036B344;
    extern f32 lbl_8036B348;
    extern f32 lbl_8036B34C;
    extern f32 lbl_8036B35C;
    extern f32 lbl_8036B360;
    extern f32 lbl_8036B364;
    extern f32 lbl_8036B368;
    extern f32 lbl_8036B36C;

    s32 tx;
    void *self;
    s32 x;
    s32 i;
    s32 tiles;
    void *mgr;
    u16 barW;
    f32 tw;
    s16 ty;

    self = arg0;
    mgr = lbl_803674F4;
    tw = (f32)fn_80010B78(fn_8000E0E4(*(void **)((u8 *)self + 0x44)), -1, lbl_8036B340);
    fn_8000A258();
    fn_80009D74(lbl_8036B338, lbl_8036B338, lbl_8036B35C, lbl_8036B340);
    fn_80009B8C(*(u8 *)((u8 *)self + 0x32));
    fn_8000A248();

    if (*(u8 *)((u8 *)self + 0x48) == 0) {
        x = *(s16 *)((u8 *)self + 0x3C);
        fn_8000A258();
        fn_80009F90(mgr, 0x3D, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838((f32)x, (f32)*(s16 *)((u8 *)self + 0x3E), lbl_8036B338, lbl_8036B338);
        fn_80007818((f32)(x + 0x1A), (f32)(*(s16 *)((u8 *)self + 0x3E) + 0x28), lbl_8036B360, lbl_8036B364);
        fn_800075D8();
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_80007884();
        x += 0x1A;
        fn_8000A258();
        fn_80009F90(mgr, 0x3E, 0x11);
        fn_8000A248();
        barW = (u16)(((((s32)(u16)(s32)tw - 1) / 16) * 16) + 0x10);
        tiles = barW >> 4;
        for (i = 0; i < tiles; i++) {
            fn_80007898(1);
            fn_80007838((f32)(s16)x, (f32)(*(s16 *)((u8 *)self + 0x3E) + 2), lbl_8036B338, lbl_8036B338);
            fn_80007818((f32)((s16)x + 0x10), (f32)(*(s16 *)((u8 *)self + 0x3E) + 0x22), lbl_8036B368, lbl_8036B344);
            fn_800075D8();
            fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
            fn_80007884();
            x += 0x10;
        }
        fn_8000A258();
        fn_80009F90(mgr, 0x3F, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838((f32)(s16)x, (f32)(*(s16 *)((u8 *)self + 0x3E) - 1), lbl_8036B36C, lbl_8036B338);
        fn_80007818((f32)((s16)x + 0x1A), (f32)(*(s16 *)((u8 *)self + 0x3E) + 0x27), lbl_8036B344, lbl_8036B364);
        fn_800075D8();
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_80007884();
        fn_8000A258();
        fn_80009C0C(lbl_8036B348);
        fn_8000A248();
        tx = (s32)((f32)(*(s16 *)((u8 *)self + 0x3C) + (s32)(barW >> 1) + 0x1A) - lbl_8036B34C * tw);
        ty = (s16)(*(s16 *)((u8 *)self + 0x3E) + 2);
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001003C(tx, ty, 2, 0, 0, fn_8000E0E4(*(void **)((u8 *)self + 0x44)), lbl_8036B340, lbl_8036B338);
    }

    if (*(u8 *)((u8 *)self + 0x48) == 1) {
        barW = (u16)(((((s32)(u16)(s32)tw - 1) / 16) * 16) + *(s16 *)((u8 *)self + 0x40) + 0x30);
        x = *(s16 *)((u8 *)self + 0x3C);
        fn_8000A258();
        fn_80009F90(mgr, 0x40, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838((f32)x, (f32)(*(s16 *)((u8 *)self + 0x3E) + 2), lbl_8036B338, lbl_8036B338);
        fn_80007818((f32)(x + 0x1A), (f32)(*(s16 *)((u8 *)self + 0x3E) + 0x2A), lbl_8036B360, lbl_8036B364);
        fn_800075D8();
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_80007884();
        x += 0x1A;
        fn_8000A258();
        fn_80009F90(mgr, 0x41, 0x11);
        fn_8000A248();
        tiles = barW >> 4;
        for (i = 0; i < tiles; i++) {
            fn_80007898(1);
            fn_80007838((f32)(s16)x, (f32)(*(s16 *)((u8 *)self + 0x3E) + 2), lbl_8036B338, lbl_8036B338);
            fn_80007818((f32)((s16)x + 0x10), (f32)(*(s16 *)((u8 *)self + 0x3E) + 0x22), lbl_8036B368, lbl_8036B344);
            fn_800075D8();
            fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
            fn_80007884();
            x += 0x10;
        }
        fn_8000A258();
        fn_80009F90(mgr, 0x42, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838((f32)(s16)x, (f32)(*(s16 *)((u8 *)self + 0x3E) + 2), lbl_8036B338, lbl_8036B338);
        fn_80007818((f32)((s16)x + 0x28), (f32)(*(s16 *)((u8 *)self + 0x3E) + 0x2A), lbl_8036B364, lbl_8036B364);
        fn_800075D8();
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_80007884();
        fn_8000A258();
        fn_80009C0C(lbl_8036B348);
        fn_8000A248();
        tx = (s32)((f32)(*(s16 *)((u8 *)self + 0x3C) + (s32)(barW >> 1) + 0x28) - lbl_8036B34C * tw);
        ty = (s16)(*(s16 *)((u8 *)self + 0x3E) + 1);
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001003C(tx, ty, 2, 0, 0, fn_8000E0E4(*(void **)((u8 *)self + 0x44)), lbl_8036B340, lbl_8036B338);
    }

    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
}

void fn_801C29E8(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C4638(s32, void *, s32);
    extern u8 lbl_80298140[];
    extern u8 lbl_8027D030[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80298140, arg0);
    M2C_FIELD(temp_r31, s32 *, 0x30) = fn_800C4638(0x160, lbl_8027D030 + 0x3F1, 0);
}

#pragma cplusplus on
extern "C" void fn_801C2A3C(void *arg0) {
    void *fn_801090C0(void *);
    void fn_8000C60C(void *);
    void fn_8006EDA0(void *);
    void fn_80161F7C(void);
    void fn_8003F670(void *);
    void fn_800C4588(void *);
    struct Obj {
        u8 pad[0x2C];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6(s32) = 0;
    };
    void *obj;
    Obj *p;

    obj = *(void **)((u8 *)arg0 + 0x30);
    if (*(void **)((u8 *)obj + 0x30) != NULL) {
        if (fn_801090C0(*(void **)((u8 *)obj + 0x30)) != NULL) {
            fn_8000C60C(fn_801090C0(*(void **)((u8 *)obj + 0x30)));
        }
    }
    fn_8000C60C(fn_801090C0(*(void **)((u8 *)obj + 0x2C)));
    p = *(Obj **)((u8 *)obj + 0x38);
    if (p != NULL) {
        p->v6(1);
    }
    fn_8006EDA0(obj);
    fn_80161F7C();
    fn_8003F670(*(void **)((u8 *)obj + 4));
    fn_800C4588(obj);
}
extern "C" void fn_801C2AD0(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    void fn_8000C60C(void);
    void *fn_801090C0(void *);
    void *fn_80109180(void *, s32);
    void fn_80109BB4(void *, s32);
    void fn_80109C80(void *, s32);
    s8 fn_80146C94(void *);
    void fn_80147188(s32);
    void fn_801475FC(void *, s32);
    void fn_8014832C(s32, void *, s32, s32);
    void fn_80148980(void *, s32);
    extern void *lbl_80298040[];
    extern u8 lbl_8027D030[];
    extern u8 lbl_8032FF08[];
    extern void *lbl_80367240;
    extern f32 lbl_8036B374, lbl_8036B378, lbl_8036B37C, lbl_8036B380;
    extern f32 lbl_8036B384, lbl_8036B388;

    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual u8 v2() = 0;
    };

    s32 t;
    s32 off;
    void *p;
    void *q;
    s16 *row;
    f32 x, y;
    u8 flag;
    s32 old24;
    void *st;
    s32 held;
    s32 trig;
    void *pad;
    void *self;

    self = arg0;
    st = *(void **)((u8 *)self + 0x30);
    pad = lbl_80367240;
    {
        f32 zero = lbl_8036B374;
        f32 cur = *(f32 *)((u8 *)st + 0x140);
        trig = *(s32 *)((u8 *)pad + 4);
        held = *(s32 *)((u8 *)pad + 0xC);
        old24 = *(s32 *)((u8 *)st + 0x24);
        trig = trig & (*(s32 *)((u8 *)pad + 8) ^ trig);
        if (cur > zero) {
            *(f32 *)((u8 *)st + 0x140) = cur - lbl_8036B378;
            if (*(f32 *)((u8 *)st + 0x140) < zero)
                *(f32 *)((u8 *)st + 0x140) = zero;
        }
        cur = *(f32 *)((u8 *)st + 0x140);
        if (cur < zero) {
            *(f32 *)((u8 *)st + 0x140) = cur + lbl_8036B378;
            if (*(f32 *)((u8 *)st + 0x140) > zero)
                *(f32 *)((u8 *)st + 0x140) = zero;
        }
    }

    if (*(s16 *)((u8 *)st + 0x148) > 0) {
        *(s16 *)((u8 *)st + 0x148) = (s16)(*(s16 *)((u8 *)st + 0x148) - 1);
        t = 4 - *(s16 *)((u8 *)st + 0x148);
        *(s16 *)((u8 *)st + 0x144) = (s16)fn_800067BC(4, (f32)*(s16 *)((u8 *)st + 0x14A), (f32)*(s16 *)((u8 *)st + 0x14E), (f32)t, lbl_8036B37C);
        *(s16 *)((u8 *)st + 0x146) = (s16)fn_800067BC(4, (f32)*(s16 *)((u8 *)st + 0x14C), (f32)*(s16 *)((u8 *)st + 0x150), (f32)t, lbl_8036B37C);
    }
    *(s16 *)((u8 *)st + 0x15A) = 0x78;

    if (*(s32 *)((u8 *)st + 0x28) != -1) {
        *(s16 *)((u8 *)st + 0x15C) = (s16)(*(s16 *)((u8 *)st + 0x15C) - 4);
        if (*(s16 *)((u8 *)st + 0x15C) < 0x6E)
            *(s16 *)((u8 *)st + 0x15C) = 0x6E;
        *(s16 *)((u8 *)st + 0x15E) = (s16)(*(s16 *)((u8 *)st + 0x15E) + 8);
        if (*(s16 *)((u8 *)st + 0x15E) > 0xFF)
            *(s16 *)((u8 *)st + 0x15E) = 0xFF;
    } else {
        *(s16 *)((u8 *)st + 0x15C) = (s16)(*(s16 *)((u8 *)st + 0x15C) + 4);
        if (*(s16 *)((u8 *)st + 0x15C) > *(s16 *)((u8 *)st + 0x154))
            *(s16 *)((u8 *)st + 0x15C) = *(s16 *)((u8 *)st + 0x154);
        *(s16 *)((u8 *)st + 0x15E) = (s16)(*(s16 *)((u8 *)st + 0x15E) - 0x10);
        if (*(s16 *)((u8 *)st + 0x15E) < 0)
            *(s16 *)((u8 *)st + 0x15E) = 0;
    }

    if (*(s16 *)((u8 *)st + 0x34) > *(s16 *)((u8 *)st + 0x36)) {
        *(s16 *)((u8 *)st + 0x34) = (s16)(*(s16 *)((u8 *)st + 0x34) - 0x18);
        if (*(s16 *)((u8 *)st + 0x34) < *(s16 *)((u8 *)st + 0x36))
            *(s16 *)((u8 *)st + 0x34) = *(s16 *)((u8 *)st + 0x36);
    }
    if (*(s16 *)((u8 *)st + 0x34) < *(s16 *)((u8 *)st + 0x36)) {
        *(s16 *)((u8 *)st + 0x34) = (s16)(*(s16 *)((u8 *)st + 0x34) + 0x18);
        if (*(s16 *)((u8 *)st + 0x34) > *(s16 *)((u8 *)st + 0x36))
            *(s16 *)((u8 *)st + 0x34) = *(s16 *)((u8 *)st + 0x36);
    }

    if (*(s32 *)((u8 *)st + 0x20) >= 0) {
        if (*(s32 *)((u8 *)st + 0x20) == 0)
            fn_8014832C(0, lbl_80298040[*(s32 *)((u8 *)st + 0x28)], 0x64, 1);
        *(s32 *)((u8 *)st + 0x20) = *(s32 *)((u8 *)st + 0x20) - 1;
    }

    if (*(s16 *)((u8 *)st + 0x36) != 0) {
        if (trig & 0x100) {
            if (*(s32 *)((u8 *)st + 0x20) < 0) {
                *(s32 *)((u8 *)st + 0x10) = *(s32 *)((u8 *)st + 0x10) + 1;
                if (*(s32 *)((u8 *)st + 0x10) > *(s32 *)((u8 *)st + 8) - 1)
                    *(s32 *)((u8 *)st + 0x10) = 0;
                if (*(void **)((u8 *)st + 0x30) != NULL && fn_801090C0(*(void **)((u8 *)st + 0x30)) != NULL) {
                    fn_801090C0(*(void **)((u8 *)st + 0x30));
                    fn_8000C60C();
                }
                *(void **)((u8 *)st + 0x30) = *(void **)((u8 *)st + 0x2C);
                off = *(s32 *)((u8 *)st + 0x10) << 3;
                *(void **)((u8 *)st + 0x2C) = *(void **)(*(u8 **)((u8 *)st + 0xC) + off);
                p = fn_801090C0(*(void **)((u8 *)st + 0x30));
                fn_80109BB4(p, 0x40);
                *(f32 *)((u8 *)p + 0x48) = lbl_8036B374;
                q = fn_80109180(*(void **)((u8 *)st + 0x2C), 0);
                fn_80109C80(q, 0x40);
                row = (s16 *)(*(u8 **)((u8 *)st + 0xC) + off);
                y = (f32)row[3];
                x = (f32)row[2];
                q = fn_801090C0(*(void **)((u8 *)st + 0x2C));
                *(f32 *)((u8 *)q + 0x40) = x;
                *(f32 *)((u8 *)q + 0x44) = y;
                *(f32 *)((u8 *)q + 0x48) = lbl_8036B380;
                if (fn_80146C94(lbl_80298040[*(s32 *)((u8 *)st + 0x24)]) == -1) {
                    flag = 0;
                    if ((lbl_8032FF08[0xC] & 1) && ((Obj *)lbl_8032FF08)->v2() != 0)
                        flag = 1;
                    if (flag)
                        fn_80148980(lbl_8032FF08, 0x64);
                    *(s32 *)((u8 *)st + 0x20) = 0xA;
                    *(s32 *)((u8 *)st + 0x28) = *(s32 *)((u8 *)st + 0x24);
                }
            }
        } else if (trig & 0x200) {
            fn_80147188(0xFA);
            if (*(s32 *)((u8 *)st + 0x28) != -1) {
                *(s32 *)((u8 *)st + 0x20) = -1;
                *(s32 *)((u8 *)st + 0x28) = -1;
            } else {
                fn_801475FC(lbl_8027D030 + 0x3F2, 0x64);
                fn_8000C188(self);
            }
        } else if (trig & 0x400) {
            *(s16 *)((u8 *)st + 0x36) = 0;
        } else {
            if (held & 0x08000008) {
                *(s32 *)((u8 *)st + 0x24) = *(s32 *)((u8 *)st + 0x24) - 1;
                if (*(s32 *)((u8 *)st + 0x24) < 0)
                    *(s32 *)((u8 *)st + 0x24) = 0;
                t = *(s32 *)((u8 *)st + 0x13C);
                if (*(s32 *)((u8 *)st + 0x24) - t <= 0 && t > 0) {
                    *(s32 *)((u8 *)st + 0x13C) = t - 1;
                    *(f32 *)((u8 *)st + 0x140) = lbl_8036B384;
                }
            }
            if (held & 0x04000004) {
                *(s32 *)((u8 *)st + 0x24) = *(s32 *)((u8 *)st + 0x24) + 1;
                if (*(s32 *)((u8 *)st + 0x24) >= 0x40)
                    *(s32 *)((u8 *)st + 0x24) = 0x3F;
                t = *(s32 *)((u8 *)st + 0x13C);
                if (*(s32 *)((u8 *)st + 0x24) - t >= 6 && t < 0x39) {
                    *(s32 *)((u8 *)st + 0x13C) = t + 1;
                    *(f32 *)((u8 *)st + 0x140) = lbl_8036B388;
                }
            }
            if (old24 != *(s32 *)((u8 *)st + 0x24)) {
                *(s16 *)((u8 *)st + 0x148) = 4;
                *(s16 *)((u8 *)st + 0x14A) = *(s16 *)((u8 *)st + 0x144);
                *(s16 *)((u8 *)st + 0x14C) = *(s16 *)((u8 *)st + 0x146);
                *(s16 *)((u8 *)st + 0x14E) = (s16)(*(s16 *)((u8 *)st + 0x152) + 0x16);
                *(s16 *)((u8 *)st + 0x150) = (s16)(*(s16 *)((u8 *)st + 0x154) + (*(s32 *)((u8 *)st + 0x24) - *(s32 *)((u8 *)st + 0x13C)) * 0x1C + 0x16);
            }
        }
    } else if ((trig & 0x100) || (trig & 0x02000002)) {
        *(s32 *)((u8 *)st + 0x10) = *(s32 *)((u8 *)st + 0x10) + 1;
        if (*(s32 *)((u8 *)st + 0x10) > *(s32 *)((u8 *)st + 8) - 1)
            *(s32 *)((u8 *)st + 0x10) = 0;
        if (*(void **)((u8 *)st + 0x30) != NULL && fn_801090C0(*(void **)((u8 *)st + 0x30)) != NULL) {
            fn_801090C0(*(void **)((u8 *)st + 0x30));
            fn_8000C60C();
        }
        *(void **)((u8 *)st + 0x30) = *(void **)((u8 *)st + 0x2C);
        off = *(s32 *)((u8 *)st + 0x10) << 3;
        *(void **)((u8 *)st + 0x2C) = *(void **)(*(u8 **)((u8 *)st + 0xC) + off);
        p = fn_801090C0(*(void **)((u8 *)st + 0x30));
        fn_80109BB4(p, 0x40);
        *(f32 *)((u8 *)p + 0x48) = lbl_8036B374;
        q = fn_80109180(*(void **)((u8 *)st + 0x2C), 0);
        fn_80109C80(q, 0x40);
        row = (s16 *)(*(u8 **)((u8 *)st + 0xC) + off);
        y = (f32)row[3];
        x = (f32)row[2];
        q = fn_801090C0(*(void **)((u8 *)st + 0x2C));
        *(f32 *)((u8 *)q + 0x40) = x;
        *(f32 *)((u8 *)q + 0x44) = y;
        *(f32 *)((u8 *)q + 0x48) = lbl_8036B380;
    } else if (trig & 0x01000001) {
        *(s32 *)((u8 *)st + 0x10) = *(s32 *)((u8 *)st + 0x10) - 1;
        if (*(s32 *)((u8 *)st + 0x10) < 0)
            *(s32 *)((u8 *)st + 0x10) = *(s32 *)((u8 *)st + 8) - 1;
        if (*(void **)((u8 *)st + 0x30) != NULL && fn_801090C0(*(void **)((u8 *)st + 0x30)) != NULL) {
            fn_801090C0(*(void **)((u8 *)st + 0x30));
            fn_8000C60C();
        }
        *(void **)((u8 *)st + 0x30) = *(void **)((u8 *)st + 0x2C);
        off = *(s32 *)((u8 *)st + 0x10) << 3;
        *(void **)((u8 *)st + 0x2C) = *(void **)(*(u8 **)((u8 *)st + 0xC) + off);
        p = fn_801090C0(*(void **)((u8 *)st + 0x30));
        fn_80109BB4(p, 0x40);
        *(f32 *)((u8 *)p + 0x48) = lbl_8036B374;
        q = fn_80109180(*(void **)((u8 *)st + 0x2C), 0);
        fn_80109C80(q, 0x40);
        row = (s16 *)(*(u8 **)((u8 *)st + 0xC) + off);
        y = (f32)row[3];
        x = (f32)row[2];
        q = fn_801090C0(*(void **)((u8 *)st + 0x2C));
        *(f32 *)((u8 *)q + 0x40) = x;
        *(f32 *)((u8 *)q + 0x44) = y;
        *(f32 *)((u8 *)q + 0x48) = lbl_8036B380;
    } else if ((trig & 0x200) || (trig & 0x400) || (trig & 0x1000)) {
        *(s16 *)((u8 *)st + 0x36) = 0xFF;
    }
}
#pragma cplusplus reset

void fn_801C32D4(s32 arg0) {
    extern u8 lbl_8027D030[];
    s32 fn_8005C6A0(void *);
    s32 fn_80161FB8(void);
    void fn_80162054(void);
    void fn_8000C188(s32);

    if (fn_8005C6A0(lbl_8027D030 + 0x402) & 0x2000) {
        if (fn_80161FB8() != 0) {
            fn_80162054();
            fn_8000C188(arg0);
        }
    }
}

#pragma opt_common_subs off
void fn_801C332C(void *arg0) {
void *memset(void *, int, u32);
s32 fn_8003FCCC();
void fn_80109180(u32, void *);
u32 fn_801090C0(u32);
void fn_80147188(s32);
void *fn_800C42D8(s32);
void fn_80057998(void *);
void fn_80057898(void *, s32);
void fn_80057880(void *, s32);
void fn_800576D4(void *, s32);
void fn_80234450(char *, char *);
void fn_802343E0(char *, char *);
char *fn_8000E0E4(char *);
void fn_8006EEFC(void *, char *);
void fn_80162018(void);
extern char lbl_8027D030[];
extern u8 lbl_802981AC[];
extern const f32 lbl_8036B374, lbl_8036B380;
u8 *p = *(u8 **)((u8 *)arg0+0x30);
u8 *q;
s32 off;
f32 x, y;
memset(p+0x14, 0xFFFF, 12);
*(s32 *)(p+32)=-1;
*(s32 *)(p+36)=0;
*(s32 *)(p+40)=-1;
*(s16 *)(p+52)=255;
*(s16 *)(p+54)=255;
*(s32 *)(p+316)=0;
*(f32 *)(p+320)=lbl_8036B374;
*(s16 *)(p+324)=-100;
*(s16 *)(p+326)=-100;
*(s16 *)(p+338)=108;
*(s16 *)(p+340)=152;
*(s16 *)(p+342)=392;
*(s16 *)(p+344)=240;
*(s16 *)(p+350)=0;
*(s32 *)(p+4)=fn_8003FCCC(lbl_8027D030+0x417);
q=*(u8 **)(p+4);
*(s32 *)(p+8)=*(s32 *)q;
*(u8 **)(p+12)=q+4;
*(s32 *)(p+16)=0;
off=*(s32 *)(p+16)*8;
fn_80109180(*(u32 *)(*(u8 **)(p+12)+off),arg0);
*(u32 *)(p+44)=*(u32 *)(*(u8 **)(p+12)+off);
q=*(u8 **)(p+12)+off;
y=*(s16 *)(q+6);
x=*(s16 *)(q+4);
q=(u8 *)fn_801090C0(*(u32 *)(p+44));
*(f32 *)(q+64)=x; *(f32 *)(q+68)=y; *(f32 *)(q+72)=lbl_8036B380;
*(s32 *)(p+48)=0;
fn_80147188(0);
q=fn_800C42D8(48);
if(q){fn_80057998(q);*(void **)(q+44)=lbl_802981AC;}
*(u8 **)(p+56)=q;
fn_80057898(*(void **)(p+56),64);
fn_80057880(*(void **)(p+56),7);
fn_800576D4(*(void **)(p+56),1);
fn_80234450((char *)p+60,lbl_8027D030+0x425);
fn_802343E0((char *)p+60,fn_8000E0E4(lbl_8027D030+1067));
fn_802343E0((char *)p+60,lbl_8027D030+1078);
fn_802343E0((char *)p+60,fn_8000E0E4(lbl_8027D030+1085));
fn_802343E0((char *)p+60,lbl_8027D030+1094);
fn_802343E0((char *)p+60,fn_8000E0E4(lbl_8027D030+1101));
fn_802343E0((char *)p+60,lbl_8027D030+1109);
fn_802343E0((char *)p+60,fn_8000E0E4(lbl_8027D030+1116));
fn_80234450((char *)p+188,lbl_8027D030+0x425);
fn_802343E0((char *)p+188,fn_8000E0E4(lbl_8027D030+1067));
fn_802343E0((char *)p+188,lbl_8027D030+1078);
fn_802343E0((char *)p+188,fn_8000E0E4(lbl_8027D030+1085));
fn_802343E0((char *)p+188,lbl_8027D030+1094);
fn_802343E0((char *)p+188,fn_8000E0E4(lbl_8027D030+1125));
fn_802343E0((char *)p+188,lbl_8027D030+1109);
fn_802343E0((char *)p+188,fn_8000E0E4(lbl_8027D030+1116));
fn_8006EEFC(p,lbl_8027D030+0x402);
fn_80162018();
*(s16 *)(p+0x148)=4;
*(s16 *)(p+0x14a)=*(s16 *)(p+0x144);
*(s16 *)(p+0x14c)=*(s16 *)(p+0x146);
*(s16 *)(p+0x14e)=*(s16 *)(p+0x152)+22;
*(s16 *)(p+0x150)=(*(s32 *)(p+0x24)-*(s32 *)(p+0x13c))*28+(*(s16 *)(p+0x154)+22);
*(s16 *)(p+0x148)=0;
*(s16 *)(p+0x144)=*(s16 *)(p+0x14e);
*(s16 *)(p+0x146)=*(s16 *)(p+0x150);
}

#pragma use_lmw_stmw on
void fn_801C36E8(void *arg0) {
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009B8C(u8);
    void fn_80009B98(void);
    void fn_80009BC0(void (*)(s32, s16 *), s16 *);
    void fn_80009C0C(f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A174(s32, s32);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    void **fn_8006EDD8(void *, s32);
    s32 *fn_8018D900(s32);
    void fn_80007898(s32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_800075D8(void);
    void fn_80007884(void);
    void fn_80234450(char *, char *);
    void fn_802343E0(char *, char *);
    void fn_8015E848(s16, s16, s16, s16, s32 *, s32);
    void fn_80152010(s16, s16, s32, s32, s32);
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    void fn_8007CB3C(void *, s32);
    void fn_800578A8(void *, s32, s32, s32);
    void fn_80057860(void *, s32);
    void fn_80057020(void *);
    void fn_801C4394(s32, s16 *);
    s64 OSGetTime(void);
    s64 __div2i(s64, s64);
    s64 fn_8022C9FC(s64, s64);
    f32 fn_8022CB78(s64);
    f64 fn_80238638(f32);
    extern s8 lbl_80368288;
    extern s8 lbl_80368294;
    extern s16 lbl_8036828C[4];
    extern s16 lbl_80368298[4];
    extern char lbl_8027D030[];
    extern char *lbl_80298040[];
    extern f32 lbl_8036B370;
    extern f32 lbl_8036B374;
    extern f32 lbl_8036B37C;
    extern f32 lbl_8036B384;
    extern f32 lbl_8036B388;
    extern f64 lbl_8036B390;
    extern f32 lbl_8036B398;
    extern f32 lbl_8036B39C;
    extern f32 lbl_8036B3A0;
    extern f32 lbl_8036B3A4;
    extern f32 lbl_8036B3A8;
    extern f32 lbl_8036B3AC;
    extern f32 lbl_8036B3B0;
    extern f32 lbl_8036B3B4;
    extern f32 lbl_8036B3B8;
    extern f32 lbl_8036B3BC;
    extern f32 lbl_8036B3C0;
    extern f32 lbl_8036B3C4;
    extern f32 lbl_8036B3C8;
    extern f32 lbl_8036B3CC;
    extern f32 lbl_8036B3D0;
    extern f64 lbl_8036B3D8;

    char buf[0x60];
    s32 frameCol;
    u8 color[4];
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    s32 i;
    s32 idx;
    u16 tw;
    u16 th;
    s16 x;
    s16 y;
    void *self;

    self = *(void **)((u8 *)arg0 + 0x30);
    if ((s8)lbl_80368288 == 0) {
        lbl_80368288 = 1;
    }
    if ((s8)lbl_80368294 == 0) {
        lbl_80368294 = 1;
    }

    fn_8000A258();
    fn_80009D74(lbl_8036B374, lbl_8036B374, lbl_8036B398, lbl_8036B388);
    fn_80009B8C((u8)*(s16 *)((u8 *)self + 0x34));
    fn_8000A248();

    *(s32 *)color = *fn_8018D900(1);
    {
        u16 *dims = (u16 *)*fn_8006EDD8(*(void **)((u8 *)self + 0), 2);
        th = dims[1];
        tw = dims[0];
    }
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 2, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B374, lbl_8036B39C, lbl_8036B374, lbl_8036B374);
    a = lbl_8036B374 + (f32)th;
    fn_80007818(a, lbl_8036B39C + (f32)tw, a, lbl_8036B374 + (f32)tw);
    fn_800076AC(color[0], color[1], color[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    *(s32 *)color = *fn_8018D900(1);
    {
        u16 *dims = (u16 *)*fn_8006EDD8(*(void **)((u8 *)self + 0), 2);
        th = dims[1];
        tw = dims[0];
    }
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 2, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B3A0, lbl_8036B39C, lbl_8036B374 + (f32)th, lbl_8036B374);
    fn_80007818(lbl_8036B3A0 + (f32)th, lbl_8036B39C + (f32)tw, lbl_8036B374, lbl_8036B374 + (f32)tw);
    fn_800076AC(color[0], color[1], color[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_8036B384);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_8001003C(0xB4, 0x3D, 2, 0, 0, fn_8000E0E4(lbl_8027D030 + 0x46E), lbl_8036B388, lbl_8036B374);
    fn_8000A258();
    fn_80009C0C(lbl_8036B384);
    fn_8000A248();

    *(s32 *)color = *fn_8018D900(1);
    {
        u16 *dims = (u16 *)*fn_8006EDD8(*(void **)((u8 *)self + 0), 0);
        th = dims[1];
        tw = dims[0];
    }
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 0, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B3A4, lbl_8036B3A8, lbl_8036B374, lbl_8036B374);
    fn_80007818(lbl_8036B3A4 + (f32)th, lbl_8036B3A8 + (f32)tw, lbl_8036B374 + (f32)th, lbl_8036B374 + (f32)tw);
    fn_800076AC(color[0], color[1], color[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_8036B384);
    fn_8000A248();

    *(s32 *)color = *fn_8018D900(1);
    {
        u16 *dims = (u16 *)*fn_8006EDD8(*(void **)((u8 *)self + 0), 1);
        th = dims[1];
        tw = dims[0];
    }
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 1, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B3AC, lbl_8036B3B0, lbl_8036B374, lbl_8036B374);
    fn_80007818(lbl_8036B3AC + (f32)th, lbl_8036B3B0 + (f32)tw, lbl_8036B374 + (f32)th, lbl_8036B374 + (f32)tw);
    fn_800076AC(color[0], color[1], color[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_8036B3B4);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B3B8);
    fn_80009B8C((u8)((*(s16 *)((u8 *)self + 0x34) * *(s16 *)((u8 *)self + 0x15E)) / 255));
    fn_8000A248();

    {
        s16 t6 = *(s16 *)((u8 *)self + 0x15C);
        lbl_8036828C[0] = *(s16 *)((u8 *)self + 0x15A);
        lbl_8036828C[1] = t6;
        lbl_8036828C[2] = 0x170;
        lbl_8036828C[3] = (s16)(*(s16 *)((u8 *)self + 0x154) - t6);
    }
    fn_8000A258();
    fn_80009BC0(fn_801C4394, lbl_8036828C);
    fn_8000A248();

    b = (f32)*(s16 *)((u8 *)self + 0x15C);
    a = (f32)*(s16 *)((u8 *)self + 0x15A);
    *(s32 *)color = *fn_8018D900(1);
    {
        u16 *dims = (u16 *)*fn_8006EDD8(*(void **)((u8 *)self + 0), 3);
        th = dims[1];
        tw = dims[0];
    }
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 3, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(a, b, lbl_8036B374, lbl_8036B374);
    fn_80007818(a + (f32)th, b + (f32)tw, lbl_8036B374 + (f32)th, lbl_8036B374 + (f32)tw);
    fn_800076AC(color[0], color[1], color[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    b = (f32)*(s16 *)((u8 *)self + 0x15C);
    a = (f32)(*(s16 *)((u8 *)self + 0x15A) + 0xB8);
    *(s32 *)color = *fn_8018D900(1);
    {
        u16 *dims = (u16 *)*fn_8006EDD8(*(void **)((u8 *)self + 0), 3);
        th = dims[1];
        tw = dims[0];
    }
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 3, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(a, b, lbl_8036B374 + (f32)th, lbl_8036B374);
    fn_80007818(a + (f32)th, b + (f32)tw, lbl_8036B374, lbl_8036B374 + (f32)tw);
    fn_800076AC(color[0], color[1], color[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    if (*(s32 *)((u8 *)self + 0x28) != -1) {
        fn_8000A258();
        fn_80009C0C(lbl_8036B384);
        fn_8000A248();
        fn_80234450(buf, lbl_8027D030 + 0x47E);
        fn_802343E0(buf, lbl_80298040[*(s32 *)((u8 *)self + 0x28)]);
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        x = (s16)(*(s16 *)((u8 *)self + 0x15A) + 0x16);
        y = (s16)(*(s16 *)((u8 *)self + 0x15C) + 4);
        fn_8001003C(x, y, 1, 1, 0, lbl_8027D030 + 0x483, lbl_8036B388, lbl_8036B374, *(s32 *)((u8 *)self + 0x28) + 1);
        fn_8001003C((s16)(x + 0x24), y, 1, 1, 0, fn_8000E0E4(buf), lbl_8036B388, lbl_8036B374);
        fn_8000A258();
        fn_80009C0C(lbl_8036B388);
        fn_8000A248();
    }

    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B3BC);
    fn_80009B8C((u8)*(s16 *)((u8 *)self + 0x34));
    fn_8000A248();
    frameCol = *(s32 *)&lbl_8036B370;
    fn_8015E848(*(s16 *)((u8 *)self + 0x152), *(s16 *)((u8 *)self + 0x154), *(s16 *)((u8 *)self + 0x156), *(s16 *)((u8 *)self + 0x158), &frameCol, 0x10);
    fn_8000A258();
    fn_80009C0C(lbl_8036B3B8);
    fn_8000A248();

    {
        s16 t4 = *(s16 *)((u8 *)self + 0x152);
        s16 t5 = (s16)(*(s16 *)((u8 *)self + 0x154) + 0x16);
        s16 t6 = (s16)(*(s16 *)((u8 *)self + 0x156) - 0x28);
        s16 t7 = (s16)(*(s16 *)((u8 *)self + 0x158) - 0x2C);
        lbl_80368298[0] = (s16)(t4 + 8);
        lbl_80368298[1] = t5;
        lbl_80368298[2] = t6;
        lbl_80368298[3] = t7;
    }
    fn_8000A258();
    fn_80009BC0(fn_801C4394, lbl_80368298);
    fn_8000A248();

    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();

    for (i = 0; i < 9; i++) {
        idx = *(s32 *)((u8 *)self + 0x13C) + (i - 1);
        if (idx >= 0 && idx < 0x40) {
            fn_80234450(buf, lbl_8027D030 + 0x47E);
            fn_802343E0(buf, lbl_80298040[idx]);
            x = (s16)(*(s16 *)((u8 *)self + 0x152) + 0x1C);
            y = (s16)((lbl_8036B3C0 * *(f32 *)((u8 *)self + 0x140)) + (f32)(*(s16 *)((u8 *)self + 0x154) + ((i - 1) * 0x1C) + 0x16));
            fn_8001003C(x, y, 1, 1, 0, lbl_8027D030 + 0x483, lbl_8036B388, lbl_8036B374, idx + 1);
            fn_8001003C((s16)(x + 0x24), y, 1, 1, 0, fn_8000E0E4(buf), lbl_8036B388, lbl_8036B374);
            fn_8000A258();
            fn_80009C0C(lbl_8036B388);
            fn_8000A248();
            fn_80152010((s16)(x - 8), (s16)(y + 0xC), 0x154, 0x4B, 0x10);
            fn_8000A258();
            fn_80009C0C(lbl_8036B384);
            fn_8000A248();
        }
    }

    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B3BC);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B384);
    fn_8000A248();
    fn_8008AB7C(*(s16 *)((u8 *)self + 0x144) + 0xA8, *(s16 *)((u8 *)self + 0x146) + 0xE, 0x164, 0x17, 0x19, 0x64, 1);
    fn_8000A258();
    fn_80009C0C(lbl_8036B3C4);
    fn_8000A248();

    c = fn_8022CB78(fn_8022C9FC(__div2i(OSGetTime(), (s64)((*(u32 *)0x800000F8 >> 2) / 1000)), 0x7D0)) / lbl_8036B3C8;
    d = lbl_8036B37C * (f32)fn_80238638(lbl_8036B3CC * (lbl_8036B3BC * c));
    b = (f32)(*(s16 *)((u8 *)self + 0x146) - 8) + d;
    a = (f32)(*(s16 *)((u8 *)self + 0x144) - 0x24);
    *(s32 *)color = *fn_8018D900(1);
    {
        u16 *dims = (u16 *)*fn_8006EDD8(*(void **)((u8 *)self + 0), 4);
        th = dims[1];
        tw = dims[0];
    }
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 4, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(a, b, lbl_8036B374, lbl_8036B374);
    fn_80007818(a + (f32)th, b + (f32)tw, lbl_8036B374 + (f32)th, lbl_8036B374 + (f32)tw);
    fn_800076AC(color[0], color[1], color[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_8036B3D0);
    fn_8000A248();
    if (*(s32 *)((u8 *)self + 0x28) == -1) {
        fn_8007CB3C((u8 *)self + 0x3C, 0);
    } else {
        fn_8007CB3C((u8 *)self + 0xBC, 0);
    }
    fn_800578A8(*(void **)((u8 *)self + 0x38), *(s16 *)((u8 *)self + 0x152) + 0x172, *(s16 *)((u8 *)self + 0x154) + 0x10, 0xD0);
    fn_80057860(*(void **)((u8 *)self + 0x38), *(s32 *)((u8 *)self + 0x13C));
    fn_80057020(*(void **)((u8 *)self + 0x38));
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
}

#pragma opt_common_subs on
void fn_801C4394(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

void *fn_801C43C8(void *arg0, s16 arg1) {
    void fn_800578F0(void *, s16);
    void fn_800C428C(void *);
    extern u8 lbl_802981AC[];
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x2C) = lbl_802981AC;
        fn_800578F0(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_801C4428(void) {
    return 3;
}

s32 fn_801C4430(void) {
    return 4;
}

s32 fn_801C4438(void) {
    return 5;
}

extern u8 lbl_8029824C[];
void fn_801C4440(void){extern u8 lbl_8029824C[];void fn_8000BF00(void*);fn_8000BF00(lbl_8029824C);}

void fn_801C4468(s32 arg0) {
    void *fn_8000CAF0(void *, s32);
    M2C_FIELD(fn_8000CAF0(&lbl_8029824C, 4), s32 *, 0x3C) = arg0;
}

void fn_801C44A4(void *arg0) {
    void fn_800616A0();
    void fn_800C426C(void *);
    void fn_800C428C(void *);
    s32 i;
    s32 offset;
    void *work;
    void *ptr;

    offset = (i = 0);
    do {
        work = *(void **)((u8 *)arg0 + 0x44);
        fn_800616A0((u8 *)*(void **)work + offset + 8, work);
        i += 1;
        offset += 0xA8;
    } while (i < 0x10);
    fn_800616A0(*(void **)((u8 *)arg0 + 0x40));
    work = *(void **)((u8 *)arg0 + 0x44);
    if (work != NULL) {
        ptr = *(void **)work;
        if (ptr != NULL) {
            if (ptr != NULL) {
                fn_800C426C((u8 *)ptr - 0x10);
            }
            *(void **)work = NULL;
        }
        ptr = *(void **)((u8 *)work + 4);
        if (ptr != NULL) {
            fn_800C426C(ptr);
            *(void **)((u8 *)work + 4) = NULL;
        }
        fn_800C428C(work);
        *(void **)((u8 *)arg0 + 0x44) = NULL;
    }
}

void fn_801C4564(void) { M2C_UNK fn_801C45A4(); fn_801C45A4(); }

void fn_801C4584(void){ void fn_801C5B80(void); fn_801C5B80(); /*try*/ }

void fn_801C45A4(void *arg0) {
    u32 fn_8000CD60(void);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005FEE8(void *, f32);
    void fn_80060060(void *);
    void fn_800606BC(void *);
    void fn_80060F70(void *, s32, void *);
    s32 fn_8006135C(void *, char *);
    void fn_80202024(void *, void *, void *);
    void fn_80202300(void *, s32, f32, f32, f32, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_802025C0(void *, f32, f32, f32);
    extern u8 lbl_8027D594[];
    extern f32 lbl_8036B40C;
    extern f32 lbl_8036B410;
    extern f32 lbl_8036B414;
    extern f32 lbl_8036B418;
    extern f32 lbl_8036B41C;
    extern f32 lbl_8036B420;
    extern f32 lbl_8036B424;
    extern f32 lbl_8036B428;
    extern f32 lbl_8036B42C;
    extern f32 lbl_8036B430;
    extern f32 lbl_8036B434;
    extern f32 lbl_8036B438;

    f32 mtxA[12];
    f32 mtxB[12];
    f32 mtxC[12];
    f32 mtxD[12];
    f32 sp104[3];
    f32 spF8[3];
    f32 spEC[3];
    f32 spE0[3];
    f32 spD4[3];
    f32 spC8[3];
    f32 spBC[3];
    f32 sp5C[3];
    void *self;
    void *list;
    void *n;
    void *prev;
    void *node;
    void *entry;
    s32 id;
    s32 id2;
    s32 id3;
    s32 id4;
    s32 id5;
    f32 f31, f30, f29, ftmp;

    self = arg0;
    if (*(u8 *)((u8 *)*(void **)((u8 *)self + 0x3C) + 0xB) == 0xFF
        && (*(s32 *)((u8 *)self + 0x30) % 6) == 0) {
        id = fn_8006135C(*(void **)((u8 *)self + 0x3C), (char *)lbl_8027D594 + 0x127);
        if (id >= 0) {
            fn_80060F70(*(void **)((u8 *)self + 0x3C), id, sp104);
            if (sp104[1] < lbl_8036B40C) {
                list = *(void **)((u8 *)self + 0x44);
                n = **(void ***)((u8 *)list + 8);
                spBC[0] = sp104[0];
                spBC[1] = sp104[1];
                spBC[2] = sp104[2];
                if (n == NULL) {
                    n = NULL;
                } else {
                    *(void **)((u8 *)n + 4) = *(void **)((u8 *)list + 0x10);
                    *(void **)n = NULL;
                    prev = *(void **)((u8 *)list + 0x10);
                    if (prev != NULL) {
                        *(void **)prev = n;
                    }
                    if (*(void **)((u8 *)list + 0xC) == NULL) {
                        *(void **)((u8 *)list + 0xC) = n;
                    }
                    *(void **)((u8 *)list + 0x10) = n;
                    *(u8 **)((u8 *)list + 8) = *(u8 **)((u8 *)list + 8) + 4;
                    *(s32 *)((u8 *)list + 0x14) = *(s32 *)((u8 *)list + 0x14) + 1;
                }
                if (n != NULL) {
                    entry = (u8 *)n + 8;
                    sp5C[0] = spBC[0];
                    sp5C[1] = spBC[1];
                    sp5C[2] = spBC[2];
                    f31 = fn_80059F64(lbl_8036B410, lbl_8036B414, lbl_8036B418, (f32)(fn_8000CD60() % 1000));
                    f30 = fn_80059F64(lbl_8036B410, lbl_8036B414, lbl_8036B418, (f32)(fn_8000CD60() % 1000));
                    f29 = fn_80059F64(lbl_8036B41C, lbl_8036B420, lbl_8036B418, (f32)(fn_8000CD60() % 1000));
                    ftmp = lbl_8036B430 * fn_80059F64(lbl_8036B424, lbl_8036B428, lbl_8036B418, (f32)(fn_8000CD60() % 1000));
                    sp5C[0] = sp5C[0] + f31;
                    sp5C[1] = lbl_8036B42C;
                    sp5C[2] = sp5C[2] + f30;
                    fn_80202300(mtxA, 0x59, ftmp, sp5C[2], lbl_8036B42C, sp5C[0]);
                    fn_802025C0(mtxB, f29, f29, f29);
                    fn_80202540(mtxC, sp5C[0], sp5C[1], sp5C[2]);
                    fn_80202024(mtxB, mtxA, mtxD);
                    fn_80202024(mtxC, mtxD, (u8 *)entry + 0x10);
                    fn_8005FEE8(entry, lbl_8036B424);
                }
            }
            id = fn_8006135C(*(void **)((u8 *)self + 0x3C), (char *)lbl_8027D594 + 0xDE);
            id2 = fn_8006135C(*(void **)((u8 *)self + 0x3C), (char *)lbl_8027D594 + 0xE4);
            id3 = fn_8006135C(*(void **)((u8 *)self + 0x3C), (char *)lbl_8027D594 + 0xEA);
            id4 = fn_8006135C(*(void **)((u8 *)self + 0x3C), (char *)lbl_8027D594 + 0xF1);
            id5 = fn_8006135C(*(void **)((u8 *)self + 0x3C), (char *)lbl_8027D594 + 0xF8);
            if (id >= 0) {
                if (id2 < 0) {
                    goto done;
                }
                fn_80060F70(*(void **)((u8 *)self + 0x3C), id, spF8);
                fn_80060F70(*(void **)((u8 *)self + 0x3C), id2, spEC);
                fn_80060F70(*(void **)((u8 *)self + 0x3C), id3, spE0);
                fn_80060F70(*(void **)((u8 *)self + 0x3C), id4, spD4);
                fn_80060F70(*(void **)((u8 *)self + 0x3C), id5, spC8);
                *(s32 *)((u8 *)self + 0x34) = *(s32 *)((u8 *)self + 0x34) + 1;
            }
        }
    }
done:
    node = NULL;
    for (;;) {
        if (node == NULL) {
            node = *(void **)((u8 *)*(void **)((u8 *)self + 0x44) + 0xC);
        } else {
            node = *(void **)node;
        }
        if (node == NULL) {
            break;
        }
        entry = (u8 *)node + 8;
        fn_80060060(entry);
        fn_800606BC(entry);
        if ((u8)((((*(u32 *)((u8 *)node + 8)) >> 4) & 1) ^ 1) == 0) {
            list = *(void **)((u8 *)self + 0x44);
            if (node != NULL) {
                void *nx = *(void **)node;
                void *pv = *(void **)((u8 *)node + 4);
                if (nx != NULL) {
                    *(void **)((u8 *)nx + 4) = pv;
                }
                if (pv != NULL) {
                    *(void **)pv = nx;
                }
                if (node == *(void **)((u8 *)list + 0xC)) {
                    *(void **)((u8 *)list + 0xC) = nx;
                }
                if (node == *(void **)((u8 *)list + 0x10)) {
                    *(void **)((u8 *)list + 0x10) = pv;
                }
                *(u8 **)((u8 *)list + 8) = *(u8 **)((u8 *)list + 8) - 4;
                *(s32 *)((u8 *)list + 0x14) = *(s32 *)((u8 *)list + 0x14) - 1;
                **(void ***)((u8 *)list + 8) = node;
            }
        }
    }
    *(s32 *)((u8 *)self + 0x30) = *(s32 *)((u8 *)self + 0x30) + 1;
}

#pragma use_lmw_stmw on
void fn_801C5B80(void *arg0) {
    void *fn_80040844(void);
    s32 fn_802342B8(void *, void *);
    void fn_800056A0(s32);
    void *fn_800C42D8(s32);
    void *fn_800C42AC(s32);
    void *fn_8022C414(void *, void (*)(void *), void *, s32, s32);
    void DCFlushRange(void *, u32);
    void *fn_80061870(void);
    void fn_80231D94(void *, void *, ...);
    void fn_8005F554(void *, void *);
    void fn_8005F4F4(void *, void *);
    void fn_8005F5B4(void *, void *);
    void fn_8005F494(void *, void *);
    void fn_8006140C(void *);
    void fn_80061824(void *);
    void fn_801C7BF8(void *);
    extern u32 lbl_8036B3EC;
    extern u32 lbl_8036B3F0;
    extern u32 lbl_8036B3F4;
    extern u32 lbl_8036B3F8;
    extern u32 lbl_8036B3FC;
    extern u32 lbl_8036B400;
    extern u32 lbl_8036B404;
    extern u32 lbl_8036B408;
    extern u16 lbl_8027D594[];

    u32 sp24, sp20, sp1C, sp18, sp14, sp10, spC, sp8;
    char sp28[0x40];
    s32 i;
    s32 off;
    s32 tmp;
    void *self;
    void *ctrl;
    void *cam;
    void *pool;
    s32 count;
    s32 idx;
    u8 *tbl;
    s32 three;

    self = arg0;
    sp24 = lbl_8036B3EC;
    ((u8 *)self)[0x38] = ((u8 *)&sp24)[0];
    ((u8 *)self)[0x39] = ((u8 *)&sp24)[1];
    ((u8 *)self)[0x3A] = ((u8 *)&sp24)[2];
    ((u8 *)self)[0x3B] = ((u8 *)&sp24)[3];

    cam = fn_80040844();
    if (cam != NULL) {
        tmp = (s32)((u8 *)cam + 0x3C);
        if (fn_802342B8((void *)tmp, (u8 *)lbl_8027D594 + 0x12C) == 0) {
            sp20 = lbl_8036B3F0;
            ((u8 *)self)[0x38] = ((u8 *)&sp20)[0];
            ((u8 *)self)[0x39] = ((u8 *)&sp20)[1];
            ((u8 *)self)[0x3A] = ((u8 *)&sp20)[2];
            ((u8 *)self)[0x3B] = ((u8 *)&sp20)[3];
        } else if (fn_802342B8((void *)tmp, (u8 *)lbl_8027D594 + 0x136) == 0) {
            sp1C = lbl_8036B3F4;
            ((u8 *)self)[0x38] = ((u8 *)&sp1C)[0];
            ((u8 *)self)[0x39] = ((u8 *)&sp1C)[1];
            ((u8 *)self)[0x3A] = ((u8 *)&sp1C)[2];
            ((u8 *)self)[0x3B] = ((u8 *)&sp1C)[3];
        } else if (fn_802342B8((void *)tmp, (u8 *)lbl_8027D594 + 0x140) == 0) {
            sp18 = lbl_8036B3F8;
            ((u8 *)self)[0x38] = ((u8 *)&sp18)[0];
            ((u8 *)self)[0x39] = ((u8 *)&sp18)[1];
            ((u8 *)self)[0x3A] = ((u8 *)&sp18)[2];
            ((u8 *)self)[0x3B] = ((u8 *)&sp18)[3];
        } else if (fn_802342B8((void *)tmp, (u8 *)lbl_8027D594 + 0x14A) == 0) {
            sp14 = lbl_8036B3FC;
            ((u8 *)self)[0x38] = ((u8 *)&sp14)[0];
            ((u8 *)self)[0x39] = ((u8 *)&sp14)[1];
            ((u8 *)self)[0x3A] = ((u8 *)&sp14)[2];
            ((u8 *)self)[0x3B] = ((u8 *)&sp14)[3];
        } else if (fn_802342B8((void *)tmp, (u8 *)lbl_8027D594 + 0x156) == 0) {
            sp10 = lbl_8036B400;
            ((u8 *)self)[0x38] = ((u8 *)&sp10)[0];
            ((u8 *)self)[0x39] = ((u8 *)&sp10)[1];
            ((u8 *)self)[0x3A] = ((u8 *)&sp10)[2];
            ((u8 *)self)[0x3B] = ((u8 *)&sp10)[3];
        } else if (fn_802342B8((void *)tmp, (u8 *)lbl_8027D594 + 0x162) == 0) {
            spC = lbl_8036B404;
            ((u8 *)self)[0x38] = ((u8 *)&spC)[0];
            ((u8 *)self)[0x39] = ((u8 *)&spC)[1];
            ((u8 *)self)[0x3A] = ((u8 *)&spC)[2];
            ((u8 *)self)[0x3B] = ((u8 *)&spC)[3];
        } else if (fn_802342B8((void *)tmp, (u8 *)lbl_8027D594 + 0x16E) == 0) {
            sp8 = lbl_8036B408;
            ((u8 *)self)[0x38] = ((u8 *)&sp8)[0];
            ((u8 *)self)[0x39] = ((u8 *)&sp8)[1];
            ((u8 *)self)[0x3A] = ((u8 *)&sp8)[2];
            ((u8 *)self)[0x3B] = ((u8 *)&sp8)[3];
        } else {
            fn_800056A0(0);
        }
    }

    pool = fn_800C42D8(0x1C);
    if (pool != NULL) {
        *(s32 *)((u8 *)pool + 0x0) = 0;
        *(s32 *)((u8 *)pool + 0x4) = 0;
        *(s32 *)((u8 *)pool + 0x8) = 0;
        *(s32 *)((u8 *)pool + 0x14) = 0;
        *(s32 *)((u8 *)pool + 0xC) = 0;
        *(s32 *)((u8 *)pool + 0x10) = 0;
    }
    *(void **)((u8 *)self + 0x44) = pool;
    ctrl = *(void **)((u8 *)self + 0x44);
    *(s32 *)((u8 *)ctrl + 0x18) = 0x10;
    count = *(s32 *)((u8 *)ctrl + 0x18);
    tmp = count * 0xA8;
    *(void **)((u8 *)ctrl + 0x0) = fn_8022C414(fn_800C42AC(tmp + 0x10), fn_801C7BF8, NULL, 0xA8, count);
    *(void **)((u8 *)ctrl + 0x4) = fn_800C42AC((*(s32 *)((u8 *)ctrl + 0x18) + 1) << 2);
    DCFlushRange(*(void **)((u8 *)ctrl + 0x0), (u32)tmp);
    DCFlushRange(*(void **)((u8 *)ctrl + 0x4), (u32)((*(s32 *)((u8 *)ctrl + 0x18) + 1) << 2));
    {
        s32 z = 0;
        *(s32 *)((u8 *)ctrl + 0x14) = z;
        i = z;
        off = z;
        idx = z;
    }
    while (i < *(s32 *)((u8 *)ctrl + 0x18)) {
        *(void **)((u8 *)*(void **)((u8 *)ctrl + 0x4) + idx) =
            (u8 *)*(void **)((u8 *)ctrl + 0x0) + off;
        i += 1;
        off += 0xA8;
        idx += 4;
    }
    {
        s32 n = *(s32 *)((u8 *)ctrl + 0x18);
        *(s32 *)((u8 *)*(void **)((u8 *)ctrl + 0x4) + (n << 2)) = 0;
    }
    *(void **)((u8 *)ctrl + 0x8) = *(void **)((u8 *)ctrl + 0x4);
    *(s32 *)((u8 *)ctrl + 0xC) = 0;
    *(s32 *)((u8 *)ctrl + 0x10) = 0;
    *(s32 *)((u8 *)self + 0x30) = 0;
    *(s32 *)((u8 *)self + 0x34) = 0;
    *(void **)((u8 *)self + 0x40) = fn_80061870();

    tbl = (u8 *)lbl_8027D594;
    fn_80231D94(sp28, tbl + 0x17A, tbl + 0x18E, tbl + 0x194);
    fn_8005F554(*(void **)((u8 *)self + 0x40), sp28);
    tbl = (u8 *)lbl_8027D594;
    fn_80231D94(sp28, tbl + 0x17A, tbl + 0x18E, tbl + 0x198);
    fn_8005F4F4(*(void **)((u8 *)self + 0x40), sp28);
    tbl = (u8 *)lbl_8027D594;
    fn_80231D94(sp28, tbl + 0x17A, tbl + 0x18E, tbl + 0x19B);
    fn_8005F5B4(*(void **)((u8 *)self + 0x40), sp28);
    tbl = (u8 *)lbl_8027D594;
    fn_80231D94(sp28, tbl + 0x17A, tbl + 0x18E, tbl + 0x19F);
    fn_8005F494(*(void **)((u8 *)self + 0x40), sp28);
    fn_8006140C(*(void **)((u8 *)self + 0x40));

    i = 0;
    off = 0;
    three = 3;
    while (i < 0x10) {
        tmp = (s32)((u8 *)*(void **)(*(void **)((u8 *)self + 0x44)) + off + 8);
        fn_80061824((void *)tmp);
        *(void **)((u8 *)tmp + 4) = *(void **)((u8 *)self + 0x40);
        ((u8 *)tmp)[8] = ((u8 *)self)[0x38];
        ((u8 *)tmp)[9] = ((u8 *)self)[0x39];
        ((u8 *)tmp)[0xA] = ((u8 *)self)[0x3A];
        ((u8 *)tmp)[0xB] = ((u8 *)self)[0x3B];
        ((u8 *)tmp)[0x87] = (u8)three;
        fn_8006140C((void *)tmp);
        i += 1;
        off += 0xA8;
    }
}
void fn_801C6008(s32 arg0) {
    extern u8 lbl_80298224[];
    M2C_FIELD(fn_8000CAF0(&lbl_80298224, 4), s32 *, 0x30) = arg0;
}

void fn_801C6044(u8 *arg0) {
    void fn_800C426C(void *);
    void fn_800C428C(void *);
    u8 *work;
    void *ptr;

    work = *(u8 **)(arg0 + 0x44);
    if (work != NULL) {
        ptr = *(void **)work;
        if (ptr != NULL) {
            if (ptr != NULL) {
                fn_800C426C((u8 *)ptr - 0x10);
            }
            *(void **)work = NULL;
        }
        ptr = *(void **)(work + 4);
        if (ptr != NULL) {
            fn_800C426C(ptr);
            *(void **)(work + 4) = NULL;
        }
        fn_800C428C(work);
        *(u32 *)(arg0 + 0x44) = 0;
    }
}

void fn_801C60C8(void) { int pad; void fn_801C6234(void); fn_801C6234(); }

void fn_801C60E8(struct Unit *arg0, s32 arg1, s32 arg2) {
    struct Unit *temp_r31;
    s32 temp_r3;
    void *temp_r29;
    s32 *temp_r4;
    u32 *temp_r5;
    
    if (arg1 == 0) {
        return;
    }
    
    temp_r31 = arg0;
    
    // Read from base offset to get data pointer
    temp_r29 = M2C_FIELD(arg0, void **, 0x4);
    temp_r3 = *(s32 *)((char *)temp_r29 + 8);
    
    if (arg1 < 0) {
        // Negative value handling
        temp_r3 = *(s32 *)((char *)temp_r29 + 0xC);
        arg1 = -arg1;
        // Set some values to zero for negative case
        *(u32 *)((char *)temp_r31 + 0x6) = 0;
        M2C_FIELD(temp_r31, void **, 0x54) = NULL;
    } else {
        // Positive value handling
        temp_r3 = *(s32 *)((char *)temp_r29 + 4);
    }
    
    if (arg1 >= temp_r3) {
        temp_r3 = arg1 / temp_r3;
        arg1 %= temp_r3;
    }
    
    temp_r4 = (s32 *)((char *)temp_r31 + 0x58); // Initialize local var from struct
    *temp_r4 = *(s32 *)((char *)temp_r31 + 0x58) + arg2;

    if (arg1 != 0) {
        temp_r5 = (u32 *)((char *)temp_r31 + 0x6); 
        *temp_r5 = *(u32 *)((char *)temp_r31 + 0x6) + arg1;
    }    
}

#pragma use_lmw_stmw on
void fn_801C6234(void *arg0) {
    s32 fn_8006135C(void *, void *);
    void fn_80060F70(void *, s32, f32 *);
    void fn_80067708(s32, s32, void (*)(void), s32);
    void fn_80202024(void *, void *, void *);
    void fn_802029C4(void *, void *, void *);
    void fn_802031E8(f32 *, f32 *);
    f32 fn_8020322C(f32 *);
    f32 fn_80203270(f32 *, f32 *);
    f64 fn_80238788(f64);
    void fn_801C65E0(void);
    extern u8 lbl_8027D4B8[];
    extern f32 lbl_8036B414;
    extern f32 lbl_8036B424;
    extern f32 lbl_8036B428;
    extern f32 lbl_8036B434;
    extern f32 lbl_8036B448;
    extern f32 lbl_8036B44C;
    extern f32 lbl_8036B450;
    extern f32 lbl_8036B454;
    extern f32 lbl_8036B458;
    f32 mtx[3][4];
    s32 names[4];
    f32 pos[3];
    s32 refv[3];
    s32 vec[3];
    f32 sp14[3];
    f32 sp8[3];
    u8 *rodata;
    s32 *namep;
    void *walk;
    void *cur;
    void *self;
    u8 ok;
    f32 angle;
    f32 dot;
    s32 idx;

    self = arg0;
    rodata = lbl_8027D4B8;
    if (*(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0xB) == 0xFF) {
        walk = self;
        namep = names;
        cur = NULL;
        names[0] = *(s32 *)(rodata + 0xB4);
        names[1] = *(s32 *)(rodata + 0xB8);
        names[2] = *(s32 *)(rodata + 0xBC);
        names[3] = *(s32 *)(rodata + 0xC0);
        do {
            idx = fn_8006135C(*(void **)((u8 *)self + 0x30), (void *)*namep);
            if (0 <= idx) {
                fn_80060F70(*(void **)((u8 *)self + 0x30), idx, pos);
                if (*(f32 *)((u8 *)walk + 0x34) > (pos[1] + lbl_8036B448) && pos[1] < lbl_8036B44C) {
                    refv[0] = *(s32 *)(rodata + 0xC4);
                    angle = lbl_8036B424;
                    refv[1] = *(s32 *)(rodata + 0xC8);
                    refv[2] = *(s32 *)(rodata + 0xCC);
                    vec[0] = *(s32 *)(rodata + 0xD0);
                    vec[1] = *(s32 *)(rodata + 0xD4);
                    vec[2] = *(s32 *)(rodata + 0xD8);
                    {
                        void *obj = *(void **)((u8 *)self + 0x30);
                        fn_80202024((u8 *)obj + 0x10, (u8 *)*(void **)((u8 *)obj + 0x60) + idx * 0x30, mtx);
                    }
                    mtx[0][3] = lbl_8036B424;
                    mtx[1][3] = lbl_8036B424;
                    mtx[2][3] = lbl_8036B424;
                    fn_802029C4(mtx, vec, vec);
                    ((f32 *)vec)[1] = lbl_8036B424;
                    if (fn_8020322C((f32 *)vec) > lbl_8036B424) {
                        fn_802031E8((f32 *)vec, (f32 *)vec);
                        dot = fn_80203270((f32 *)refv, (f32 *)vec);
                        if (lbl_8036B434 <= dot) {
                            angle = lbl_8036B424;
                        } else if (dot <= lbl_8036B450) {
                            angle = lbl_8036B454;
                        } else {
                            angle = lbl_8036B458 * (f32)fn_80238788(dot);
                        }
                        if (((f32 *)vec)[0] < lbl_8036B424) {
                            angle = lbl_8036B428 - angle;
                        }
                    }
                    {
                        void *n;
                        void *list;
                        void *prev;
                        list = *(void **)((u8 *)self + 0x44);
                        *(s32 *)&sp14[1] = *(s32 *)&pos[1];
                        n = **(void ***)((u8 *)list + 0x8);
                        *(s32 *)&sp14[0] = *(s32 *)&pos[0];
                        *(s32 *)&sp14[2] = *(s32 *)&pos[2];
                        sp14[1] = lbl_8036B414;
                        if (n == NULL) {
                            n = NULL;
                        } else {
                            *(void **)((u8 *)n + 4) = *(void **)((u8 *)list + 0x10);
                            *(void **)n = NULL;
                            prev = *(void **)((u8 *)list + 0x10);
                            if (prev != NULL) {
                                *(void **)prev = n;
                            }
                            if (*(void **)((u8 *)list + 0xC) == NULL) {
                                *(void **)((u8 *)list + 0xC) = n;
                            }
                            *(void **)((u8 *)list + 0x10) = n;
                            *(u8 **)((u8 *)list + 0x8) = *(u8 **)((u8 *)list + 0x8) + 4;
                            *(s32 *)((u8 *)list + 0x14) = *(s32 *)((u8 *)list + 0x14) + 1;
                        }
                        if (n != NULL) {
                            *(s32 *)&sp8[0] = *(s32 *)&sp14[0];
                            *(s32 *)&sp8[1] = *(s32 *)&sp14[1];
                            *(s16 *)((u8 *)n + 0x18) = 0xB4;
                            *(s32 *)&sp8[2] = *(s32 *)&sp14[2];
                            *(f32 *)((u8 *)n + 0x8) = sp8[0];
                            *(f32 *)((u8 *)n + 0xC) = sp8[1];
                            *(f32 *)((u8 *)n + 0x10) = sp8[2];
                            *(f32 *)((u8 *)n + 0x14) = angle;
                            *(f32 *)((u8 *)n + 0xC) = lbl_8036B414;
                        }
                    }
                    *(f32 *)((u8 *)walk + 0x34) = pos[1];
                }
                if (pos[1] > *(f32 *)((u8 *)walk + 0x34)) {
                    *(f32 *)((u8 *)walk + 0x34) = pos[1];
                }
            }
            cur = (void *)((s32)cur + 1);
            walk = (u8 *)walk + 4;
            ++namep;
        } while ((s32)cur < 4);
    }
    cur = NULL;
    goto get_next;
loop_body:
    {
        u32 cb_arg = (s32)((u8 *)cur + 8);
        *(s16 *)((u8 *)cur + 0x18) = *(s16 *)((u8 *)cur + 0x18) - 1;
        if (*(s16 *)((u8 *)cur + 0x18) <= 0) {
            ok = 0;
        } else {
            fn_80067708(2, 1, fn_801C65E0, cb_arg);
            ok = 1;
        }
        if (!ok) {
            void *list = *(void **)((u8 *)self + 0x44);
            if (cur != NULL) {
                void *next = *(void **)cur;
                void *prev;
                if (next != NULL) {
                    *(void **)((u8 *)next + 4) = *(void **)((u8 *)cur + 4);
                }
                prev = *(void **)((u8 *)cur + 4);
                if (prev != NULL) {
                    *(void **)prev = *(void **)cur;
                }
                if (cur == *(void **)((u8 *)list + 0xC)) {
                    *(void **)((u8 *)list + 0xC) = *(void **)cur;
                }
                if (cur == *(void **)((u8 *)list + 0x10)) {
                    *(void **)((u8 *)list + 0x10) = *(void **)((u8 *)cur + 4);
                }
                *(u8 **)((u8 *)list + 0x8) = *(u8 **)((u8 *)list + 0x8) - 4;
                *(s32 *)((u8 *)list + 0x14) = *(s32 *)((u8 *)list + 0x14) - 1;
                **(void ***)((u8 *)list + 0x8) = cur;
            }
        }
    }
get_next:
    if (cur == NULL) {
        cur = *(void **)((u8 *)*(void **)((u8 *)self + 0x44) + 0xC);
    } else {
        cur = *(void **)cur;
    }
    if (cur != NULL) {
        goto loop_body;
    }
}
void fn_801C65E0(void *arg0) {
    void *fn_80040844(void);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_80066D00(s32);
    void *fn_80067FDC(void);
    void fn_8006ECCC(void *, void *, s32);
    void fn_80202024(void *, void *, void *);
    void fn_80202300(void *, s32, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_8022100C(s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void fn_802239D0(s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    extern f32 lbl_8036B424;
    extern f32 lbl_8036B430;
    extern f32 lbl_8036B434;
    extern f32 lbl_8036B45C;
    extern f32 lbl_8036B460;
    extern f32 lbl_8036B464;
    extern f32 lbl_8036B468;
    f32 mtxA[3][4];
    f32 mtxB[3][4];
    f32 mtxC[3][4];
    u8 tex[0x20];
    f32 z, y, x;
    void *obj;
    f32 scale;
    s32 alpha;
    s16 t;
    u8 c;

    obj = fn_80040844();
    if (obj != NULL) {
        *(u32 *)&x = *(u32 *)((u8 *)arg0 + 0);
        *(u32 *)&y = *(u32 *)((u8 *)arg0 + 4);
        *(u32 *)&z = *(u32 *)((u8 *)arg0 + 8);
        scale = *(f32 *)((u8 *)arg0 + 0xC);
        fn_80202540(mtxA, x, y, z);
        fn_80202300(mtxB, 0x79, lbl_8036B430 * scale);
        fn_80202024(mtxA, mtxB, mtxC);
        fn_80202024(fn_80067FDC(), mtxC, mtxC);
        fn_80224D7C(mtxC, 0);
        fn_80224E1C(0);
        fn_8006ECCC(*(void **)((u8 *)obj + 0x38), tex, 9);
        fn_80222C50(tex, 0);
        fn_8021FBB8();
        fn_8021F4E4(9, 1);
        fn_8021F4E4(0xB, 1);
        fn_8021F4E4(0xD, 1);
        fn_8021FBF0(0, 9, 1, 4, 0);
        fn_8021FBF0(0, 0xB, 1, 5, 0);
        fn_8021FBF0(0, 0xD, 1, 4, 0);
        fn_8022100C(2);
        fn_80222334(1);
        fn_80222370(4, 0, 1, 1, 0, 0, 2);
        fn_80220428(1);
        fn_802240C8(1);
        fn_80223F2C(0, 0, 0, 4);
        fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
        fn_802245D8(1, 4, 5, 7);
        fn_802239D0(0, 0);
        t = *(s16 *)((u8 *)arg0 + 0x10);
        alpha = 0xFF;
        if (t < 0x3C) {
            alpha = (s32)fn_80059F64(lbl_8036B424, lbl_8036B45C, lbl_8036B460, (f32)t);
        }
        fn_80220DEC(0x98, 0, 4);
        c = 0xFF;
        {
            f64 f3 = lbl_8036B434;
            f32 f2 = lbl_8036B424;
            f32 f4 = -f3;
            f32 f0;
            f32 f1 = lbl_8036B464;
            f0 = f4 + lbl_8036B468;
            *(f32 *)0xCC008000 = f3;
            *(f32 *)0xCC008000 = f2;
            *(f32 *)0xCC008000 = f1;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = alpha;
            *(f32 *)0xCC008000 = f2;
            *(f32 *)0xCC008000 = f2;
            *(f32 *)0xCC008000 = f4;
            *(f32 *)0xCC008000 = f2;
            *(f32 *)0xCC008000 = f1;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = alpha;
            *(f32 *)0xCC008000 = f3;
            *(f32 *)0xCC008000 = f2;
            *(f32 *)0xCC008000 = f3;
            *(f32 *)0xCC008000 = f2;
            *(f32 *)0xCC008000 = f0;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = alpha;
            *(f32 *)0xCC008000 = f2;
            *(f32 *)0xCC008000 = f3;
            *(f32 *)0xCC008000 = f4;
            *(f32 *)0xCC008000 = f2;
            *(f32 *)0xCC008000 = f0;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = c;
            *(u8 *)0xCC008000 = alpha;
            *(f32 *)0xCC008000 = f3;
            *(f32 *)0xCC008000 = f3;
        }
        fn_80066D00(-1);
    }
}

void fn_801C68D0(u32 arg0) {
    extern u8 lbl_802981D0[];
    void *fn_8000C0C0(void *);
    void fn_8005FA14(void *, s32);
    void *x;
    u8 *table;
    u8 *ptr;
    s32 i;
    s32 ctr;
    s32 off;
    void *obj;

    x = fn_8000C0C0(lbl_802981D0);
    if (x == NULL) {
        table = NULL;
    } else {
        table = *(u8 **)((u8 *)x + 0x30);
    }
    if (table != NULL) {
        ptr = table;
        i = 0;
        for (ctr = 0x20; ctr != 0; ctr--) {
            if (*(u32 *)(ptr + 4) == arg0) {
                off = i * 0x14 + 4;
                obj = *(void **)((s32)table + off);
                if (obj != NULL) {
                    fn_8005FA14(obj, 0);
                    *(u32 *)((s32)table + off) = 0;
                }
                break;
            }
            ptr += 0x14;
            i += 1;
        }
    }
}

void fn_801C6978(u32 arg0) {
    extern u8 lbl_802981D0[];
    extern u32 lbl_8027D540[];
    extern f32 lbl_8036B424;
    extern f32 lbl_8036B434;
    void *fn_8000C0C0(void *);
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005FA14(void *, s32);
    void fn_80202540(void *, void *, f32, f32, f32);
    void fn_80202024(void *, void *, void *);

    f32 mtx[12];
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 t;
    void *p;
    u8 *base;
    u8 *entry;
    s32 i;
    u8 *walk;
    s16 max;
    s16 counter;
    u8 flag;
    void *obj;
    void *obj_plus;

    p = fn_8000C0C0(lbl_802981D0);
    if (p == NULL) {
        base = NULL;
    } else {
        base = *(u8 **)((u8 *)p + 0x30);
    }
    if (base != NULL) {
        i = 0;
        walk = base;
        for (; i < 0x20; walk += 0x14, i++) {
            if (*(u32 *)(walk + 4) == arg0) {
                entry = base + i * 0x14 + 4;
                goto found;
            }
        }
        entry = NULL;
    found:
        if (entry != NULL) {
            *(s16 *)(entry + 4) = (s16)(*(s16 *)(entry + 4) + 1);
            counter = *(s16 *)(entry + 4);
            max = *(s16 *)(entry + 6);
            if (counter >= max) {
                *(s16 *)(entry + 4) = max;
                flag = 0;
            } else {
                *(u32 *)&sp8 = lbl_8027D540[0];
                *(u32 *)&spC = lbl_8027D540[1];
                *(u32 *)&sp10 = lbl_8027D540[2];
                t = fn_8005A028(2, lbl_8036B424, lbl_8036B434, (f32)max, (f32)counter);
                sp8 = -fn_80059F64(*(f32 *)(entry + 8), lbl_8036B424, lbl_8036B434, t);
                sp10 = -fn_80059F64(*(f32 *)(entry + 0x10), lbl_8036B424, lbl_8036B434, t);
                obj = *(void **)entry;
                *(f32 *)((u8 *)obj + 0x78) = t;
                fn_80202540(mtx, obj, sp8, spC, sp10);
                obj = *(void **)entry;
                obj_plus = (u8 *)obj + 0x10;
                fn_80202024(mtx, obj_plus, obj_plus);
                flag = 1;
            }
            if (flag == 0) {
                i = 0;
                walk = base;
                for (; i < 0x20; walk += 0x14, i++) {
                    if (*(u32 *)(walk + 4) == arg0) {
                        entry = base + i * 0x14 + 4;
                        obj = *(void **)entry;
                        if (obj != NULL) {
                            fn_8005FA14(obj, 0);
                            *(u32 *)entry = 0;
                        }
                        break;
                    }
                }
            }
        }
    }
}

void fn_801C6CBC(u32 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, s32);
    void *fn_8000CAF0(void *, s32);

    extern u8 lbl_802981F4[];
    extern u8 lbl_802981D0[];

    u8 *entry;
    u8 *source;
    u8 *dest;
    struct { u32 temp; u32 value; } s;
    u32 val;

    entry = (u8 *)fn_8000C0C0(lbl_802981F4);
    if (entry != NULL) {
        if (*(s32 *)(entry + 0x38) < arg3) {
            return;
        }
        fn_8000C070(entry, 0);
    } else {
        entry = (u8 *)fn_8000CAF0(lbl_802981F4, arg2);
    }

    {
        u32 zero = 0;
        val = *arg0;
        *(u32 *)(entry + 0x30) = zero;
    }
    *(s32 *)(entry + 0x34) = arg1;
    s.value = val;
    *(s32 *)(entry + 0x38) = arg3;

    source = (u8 *)fn_8000C0C0(lbl_802981D0);
    if (source == NULL) {
        dest = NULL;
    } else {
        dest = *(u8 **)(source + 0x30);
    }

    if (dest == NULL) {
        return;
    }

    dest[0x288] = dest[0x284];
    s.temp = s.value;
    dest[0x289] = dest[0x285];
    dest[0x28A] = dest[0x286];
    dest[0x28B] = dest[0x287];

    dest[0x284] = ((u8 *)&s.temp)[0];
    dest[0x285] = ((u8 *)&s.temp)[1];
    dest[0x286] = ((u8 *)&s.temp)[2];
    dest[0x287] = ((u8 *)&s.temp)[3];
}

void fn_801C6DB8(u32 arg0)
{
    extern u8 lbl_802981D0[];
    void *fn_8000C0C0(void *);
    void fn_8005F788(u32, s32, s32);
    s32 i;
    u8 *list;
    u32 clear;
    void *p;

    p = fn_8000C0C0(lbl_802981D0);
    if (p == NULL) {
        list = NULL;
    } else {
        list = *(u8 **)((u8 *)p + 0x30);
    }
    if (list != NULL && arg0 != 0) {
        i = 0;
        clear = (u32)(i | i);
        for (; i < 0x40; i++) {
            if (*(u32 *)(list + 0x290) == arg0) {
                *(u32 *)(list + 0x290) = clear;
                fn_8005F788(arg0, 0, 1);
            }
            list += 4;
        }
    }
}

s32 fn_801C6E60(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return 0;
}

void fn_801C6F7C(void){void fn_801C7210(void);fn_801C7210();}

void fn_801C6F9C(void) {
    extern u8 lbl_802981D0[];
    void *fn_8000C0C0(void *);
    s32 fn_80067440(s32);
    void fn_800673E4(s32, s32);
    u8 *fn_800675E0(void);
    void fn_8005F788(u32, s32, s32);
    void *p = fn_8000C0C0(lbl_802981D0);
    u8 *work;
    if (p == NULL) {
        work = 0;
    } else {
        work = *(u8 **)((u8 *)p + 0x30);
    }
    if (work) {
        u8 *data = work + 0x284;
        u8 *out;
        s32 i;
        u32 *ptr;

        fn_800673E4(fn_80067440(1), fn_80067440(0));
        fn_800673E4(fn_80067440(3), fn_80067440(2));
        for (i = 0, ptr = (u32 *)data; i < 64; i++, ptr++) {
            if (ptr[3]) {
                fn_8005F788(ptr[3], 0, 1);
            }
        }
        out = fn_800675E0();
        out[1] = data[8];
        out[2] = data[9];
        out[3] = data[10];
    }
}

u32* fn_801C7080(u32 arg0) {
    u32 *r4 = (u32*)0x802A66D8;
    s32 r5 = 0;

    while (r5 < 256) {
        if (*r4 == arg0) {
            return r4;
        }
        r4 += 0x1C;  // step by 0x1C (28 bytes = struct size)
        r5++;
    }
    return NULL;
}

#pragma use_lmw_stmw on
void fn_801C7210(void *arg0) {
    void *fn_8000C0C0(void *);
    void fn_8000C188(void *);
    void fn_8000C60C(void *);
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    u8 *fn_80067440(s32);
    u8 *fn_800675E0(void);
    extern u8 lbl_802981D0[];
    extern f64 lbl_8036B440;
    extern f64 lbl_8036B470;

    u8 *self = (u8 *)arg0;
    void *node;
    void *unit;
    u32 sp10;
    u32 spC;
    u32 sp8;
    u8 *c1;
    u8 *c0;
    u8 *c2;
    s32 t0, t1, t2;
    s32 v;
    u8 *out;

    node = fn_8000C0C0(lbl_802981D0);
    if (node == NULL)
        unit = NULL;
    else
        unit = *(void **)((u8 *)node + 0x30);
    if (unit == NULL)
        fn_8000C60C(arg0);

    sp10 = *(u32 *)((u8 *)unit + 0x288);
    spC = *(u32 *)((u8 *)unit + 0x284);
    sp8 = *(u32 *)((u8 *)unit + 0x28C);
    *(s32 *)(self + 0x30) = *(s32 *)(self + 0x30) + 1;

    c1 = fn_80067440(1);
    c0 = fn_80067440(0);
    c2 = fn_80067440(2);

    t0 = (s32)fn_8005A028(2, (f32)*(u8 *)&sp10, (f32)*(u8 *)&spC,
                          (f32)*(s32 *)(self + 0x34), (f32)*(s32 *)(self + 0x30));
    t1 = (s32)fn_8005A028(2, (f32)*(u8 *)&sp10, (f32)*(u8 *)&spC,
                          (f32)*(s32 *)(self + 0x34), (f32)*(s32 *)(self + 0x30));
    t2 = (s32)fn_8005A028(2, (f32)*(u8 *)&sp10, (f32)*(u8 *)&spC,
                          (f32)*(s32 *)(self + 0x34), (f32)*(s32 *)(self + 0x30));

    v = (c1[4] * t0) / 128;
    if (v > 0xFF) v = 0xFF;
    c0[4] = (u8)v;
    c2[4] = (u8)v;

    v = (c1[5] * t1) / 128;
    if (v > 0xFF) v = 0xFF;
    c0[5] = (u8)v;
    c2[5] = (u8)v;

    v = (c1[6] * t2) / 128;
    if (v > 0xFF) v = 0xFF;
    c0[6] = (u8)v;
    c2[6] = (u8)v;

    v = (c1[0] * t0) / 128;
    if (v > 0xFF) v = 0xFF;
    c0[0] = (u8)v;
    c2[0] = (u8)v;

    v = (c1[1] * t1) / 128;
    if (v > 0xFF) v = 0xFF;
    c0[1] = (u8)v;
    c2[1] = (u8)v;

    v = (c1[2] * t2) / 128;
    if (v > 0xFF) v = 0xFF;
    c0[2] = (u8)v;
    c2[2] = (u8)v;

    out = fn_800675E0();
    v = (((u8 *)&sp8)[0] * t0) / 128;
    if (v > 0xFF) v = 0xFF;
    out[1] = (u8)v;
    v = (((u8 *)&sp8)[1] * t1) / 128;
    if (v > 0xFF) v = 0xFF;
    out[2] = (u8)v;
    v = (((u8 *)&sp8)[2] * t2) / 128;
    if (v > 0xFF) v = 0xFF;
    out[3] = (u8)v;

    if (*(s32 *)(self + 0x30) >= *(s32 *)(self + 0x34)) {
        *(s32 *)(self + 0x34) = 0;
        if (t0 == 0x80 && t1 == 0x80 && t2 == 0x80)
            fn_8000C60C(arg0);
        else
            fn_8000C188(arg0);
    }
}
#pragma use_lmw_stmw reset

extern u32 lbl_8036C510;
void fn_801C7598(void *arg0) {
    void *tmp = (void *)fn_800675E0();
    if (tmp != NULL && *(u8 *)tmp != 0) {
        u32 local_c;
        u8 local_b1;
        u8 local_b2;
        u8 local_b3;
        u32 local_8;
        local_c = lbl_8036C510;
        local_b1 = ((u8 *)tmp)[1];
        local_b2 = ((u8 *)tmp)[2];
        local_b3 = ((u8 *)tmp)[3];
        ((u8 *)&local_c)[0] = local_b1;
        ((u8 *)&local_c)[1] = local_b2;
        ((u8 *)&local_c)[2] = local_b3;
        local_8 = local_c;
        fn_802217AC(&local_8, 0xFFFFFF, local_b2, local_b1);
    }
}

void fn_801C7604(void) {
    M2C_UNK fn_80059A4C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80067984(M2C_UNK);
    M2C_UNK fn_80067EDC(M2C_UNK);
    fn_80067EDC(0);
    fn_80059A4C(0, 0, 0x260, 0x1C0);
    fn_80067984(0);
}

void fn_801C7644(s32 arg0) {
    extern f32 lbl_8036B3E8;
    extern f32 lbl_8036B424;
    u32 fn_80055D94(s32);
    void fn_80067EDC(s32);
    void fn_800599D0(s32,s32,s32,s32,s32);
    void fn_8005956C(s32,s32,s32,s32,s32,s32*,s32,f32);
    void fn_80059C2C(s32,s32,s32,s32,s32);
    void fn_80067984(s32);
    s32 tmp = *(s32 *)&lbl_8036B3E8;
    fn_80067EDC(0);
    if (fn_80055D94(0x80) == 0) {
       fn_800599D0(0,0,0x260,0x1c0,arg0);
       fn_8005956C(0,0,0x260,0x1c0,1,&tmp,arg0,lbl_8036B424);
    }
    fn_80059C2C(0,0,0x260,0x1c0,0);
    fn_80067984(0);
}

void fn_801C76E8(void) {
    extern u8 lbl_802981D0[];
    void *fn_8000C0C0(void *);
    void fn_80067708(s32, s32, void (*)(void), s32);
    void fn_801C7598(void), fn_801C7604(void), fn_801C7644(void);
    void *x;
    s32 *p;

    x = fn_8000C0C0(lbl_802981D0);
    if (x == NULL) {
        p = NULL;
    } else {
        p = *(s32 **)((u8 *)x + 0x30);
    }
    if (p != NULL) {
        fn_80067708(3, 0, fn_801C7598, 0);
        fn_80067708(1, 4, fn_801C7644, *p);
        fn_80067708(2, 0, fn_801C7604, 0);
    }
}

extern u8 lbl_802981D0[];
void fn_801C777C(void){extern u8 lbl_802981D0[];void fn_8000BF00(void*);fn_8000BF00(lbl_802981D0);}

void fn_801C77A4(void) {
    fn_8000CAF0((void*)&lbl_802981D0, 4);
}

void fn_801C77D0(void *arg0) {
    void fn_8000BF00(void *);
    void fn_80057EDC(void);
    void fn_8005376C(void);
    void fn_800C4588(void *);
    void fn_8005FA14(void *, s32);
    void fn_800C428C(void *);
    extern u8 lbl_802981D0[];
    void **walk;
    void **ptr;
    s32 i;
    s32 zero;
    s32 base;

    base = (s32)lbl_802981D0;
    fn_8000BF00((void *)(base + 0x54));
    fn_8000BF00((void *)(base + 0x7c));
    fn_80057EDC();
    fn_8000BF00((void *)(base + 0x24));
    fn_8005376C();
    ptr = *(void ***)((u8 *)arg0 + 0x30);
    if (ptr != NULL) {
        fn_800C4588(*ptr);
        zero = 0;
        walk = ptr;
        *ptr = (void *)zero;
        i = zero;
        *ptr = (void *)zero;
        do {
            if (walk[1] != NULL) {
                fn_8005FA14(walk[1], 0);
                walk[1] = (void *)zero;
            }
            i += 1;
            walk = (void **)((u8 *)walk + 0x14);
        } while (i < 0x20);
        fn_800C428C(ptr);
    }
    *(void **)((u8 *)arg0 + 0x30) = 0;
}

void fn_801C7880(void *arg0) {
    void *fn_800C42D8(s32);
    s32 fn_800C45B8(void *, void *, s32);
    void *fn_80222420(s32, s32, s32, s32, s32);
    void fn_8005376C(void);
    extern u16 lbl_8027D594[];
    void *temp;

    temp = fn_800C42D8(0x390);
    if (temp != NULL) {
        *(s32 *)((u8 *)temp + 0x4) = 0;
        *(s32 *)((u8 *)temp + 0x18) = 0;
        *(s32 *)((u8 *)temp + 0x2C) = 0;
        *(s32 *)((u8 *)temp + 0x40) = 0;
        *(s32 *)((u8 *)temp + 0x54) = 0;
        *(s32 *)((u8 *)temp + 0x68) = 0;
        *(s32 *)((u8 *)temp + 0x7C) = 0;
        *(s32 *)((u8 *)temp + 0x90) = 0;
        *(s32 *)((u8 *)temp + 0xA4) = 0;
        *(s32 *)((u8 *)temp + 0xB8) = 0;
        *(s32 *)((u8 *)temp + 0xCC) = 0;
        *(s32 *)((u8 *)temp + 0xE0) = 0;
        *(s32 *)((u8 *)temp + 0xF4) = 0;
        *(s32 *)((u8 *)temp + 0x108) = 0;
        *(s32 *)((u8 *)temp + 0x11C) = 0;
        *(s32 *)((u8 *)temp + 0x130) = 0;
        *(s32 *)((u8 *)temp + 0x144) = 0;
        *(s32 *)((u8 *)temp + 0x158) = 0;
        *(s32 *)((u8 *)temp + 0x16C) = 0;
        *(s32 *)((u8 *)temp + 0x180) = 0;
        *(s32 *)((u8 *)temp + 0x194) = 0;
        *(s32 *)((u8 *)temp + 0x1A8) = 0;
        *(s32 *)((u8 *)temp + 0x1BC) = 0;
        *(s32 *)((u8 *)temp + 0x1D0) = 0;
        *(s32 *)((u8 *)temp + 0x1E4) = 0;
        *(s32 *)((u8 *)temp + 0x1F8) = 0;
        *(s32 *)((u8 *)temp + 0x20C) = 0;
        *(s32 *)((u8 *)temp + 0x220) = 0;
        *(s32 *)((u8 *)temp + 0x234) = 0;
        *(s32 *)((u8 *)temp + 0x248) = 0;
        *(s32 *)((u8 *)temp + 0x25C) = 0;
        *(s32 *)((u8 *)temp + 0x270) = 0;
        *(s32 *)temp = fn_800C45B8(fn_80222420(0x260, 0x1C0, 0x27, 0, 0), (u8 *)lbl_8027D594 + 0x1A8, 0);
    }
    *(void **)((u8 *)arg0 + 0x30) = temp;
    fn_8005376C();
}

#pragma use_lmw_stmw on
void fn_801C797C(void *arg0, void *arg1, void *arg2, s32 arg3, s16 arg4, u8 arg5) {
    s32 fn_8006135C(void *, void *);
    s32 fn_80060440(void *);
    void fn_8005FA14(void *, s32);
    void fn_800608AC(void *);
    void fn_80060F70(void *, s32, f32 *);
    void *fn_80060690(void *);
    void fn_8005FC74(void *, s32, s32);
    void fn_8005FEE8(void *, f32);
    void fn_802031A8(f32 *, f32 *, f32 *);
    extern f32 lbl_8027D528[3];
    extern f32 lbl_8027D534[3];
    extern u16 lbl_8027D594[];
    extern f32 lbl_8036B424;
    extern f32 lbl_8036B434;
    void *obj;
    void *dst;
    void *out;
    s32 param;
    u8 flag;
    s32 id1;
    s32 id2;
    s32 kind;
    f32 save;
    void *base;
    void *entry;
    u32 sp38[3];
    u32 sp2c[3];
    f32 sp20[3];
    f32 sp14[3];
    f32 sp8[3];

    obj = arg2;
    *(void **)arg1 = obj;
    dst = arg1;
    out = arg0;
    *(s16 *)((u8 *)dst + 6) = arg4;
    *(s16 *)((u8 *)dst + 4) = 0;
    param = arg3;
    flag = arg5;

    sp38[0] = ((u32 *)lbl_8027D528)[0];
    sp38[1] = ((u32 *)lbl_8027D528)[1];
    sp38[2] = ((u32 *)lbl_8027D528)[2];
    sp2c[0] = ((u32 *)lbl_8027D534)[0];
    sp2c[1] = ((u32 *)lbl_8027D534)[1];
    sp2c[2] = ((u32 *)lbl_8027D534)[2];

    id1 = fn_8006135C(obj, (u8 *)lbl_8027D594 + 0x127);
    id2 = fn_8006135C(obj, (u8 *)lbl_8027D594 + 0x1A4);

    if (id1 != -1) {
        kind = fn_80060440(obj);
        if (kind == 4) {
            fn_8005FA14(obj, 0);
            fn_800608AC(obj);
            fn_80060F70(obj, id1, sp14);
            sp20[0] = sp14[0];
            sp20[1] = sp14[1];
            sp20[2] = sp14[2];
        } else if (kind > 1) {
            fn_80060F70(obj, id1, sp14);
            save = *(f32 *)((u8 *)obj + 0x78);
            *(f32 *)((u8 *)obj + 0x78) = lbl_8036B434;
            fn_800608AC(obj);
            *(f32 *)((u8 *)obj + 0x78) = save;
            fn_80060F70(obj, id1, sp20);
        } else {
            fn_80060F70(obj, id1, sp14);
            sp20[0] = sp14[0];
            sp20[1] = sp14[1];
            sp20[2] = sp14[2];
        }

        if (id2 != -1) {
            base = fn_80060690(obj);
            if (flag != 0) {
                entry = (u8 *)(*(void **)((u8 *)base + 0xC)) + id2 * 0xF4;
                *(u32 *)((u8 *)entry + 0xC) |= 0x40000000;
            } else {
                entry = (u8 *)(*(void **)((u8 *)base + 0xC)) + id2 * 0xF4;
                *(u32 *)((u8 *)entry + 0xC) &= ~0x40000000;
            }
        }

        fn_8005FC74(obj, param, 0);
        fn_8005FEE8(obj, lbl_8036B424);
        *(f32 *)((u8 *)obj + 0x78) = lbl_8036B434;
        fn_800608AC(obj);
        *(f32 *)((u8 *)obj + 0x78) = lbl_8036B424;
        fn_80060F70(obj, id1, sp8);
        fn_802031A8(sp20, sp8, (f32 *)sp38);
        fn_802031A8(sp14, sp8, (f32 *)sp2c);
        ((f32 *)sp2c)[1] = lbl_8036B424;
        ((f32 *)sp38)[1] = lbl_8036B424;
        *(f32 *)((u8 *)dst + 8) = ((f32 *)sp2c)[0];
        *(f32 *)((u8 *)dst + 0xC) = ((f32 *)sp2c)[1];
        *(f32 *)((u8 *)dst + 0x10) = ((f32 *)sp2c)[2];
    }

    *(u32 *)((u8 *)out + 0) = sp38[0];
    *(u32 *)((u8 *)out + 4) = sp38[1];
    *(u32 *)((u8 *)out + 8) = sp38[2];
}
void fn_801C7BF8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801C7C08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801C7C18(u8 arg0,u8 arg1,u8 arg2) {
    void *fn_8006E658(void);
    void fn_80210C70(void *);
    void fn_8009E574(void);
    void fn_802204F8(void);
    void fn_80221824(u8, void *, s32, void *);
    void *memcpy(void *, void *, u32);
    extern s16 lbl_80366E98;
    extern s16 lbl_80366E9A;
    extern u8 lbl_80366E9C;
    extern s32 lbl_803682A4;
    extern s8 lbl_803682B0;
    extern s8 lbl_803682B1;
    extern f32 lbl_8036B478;
    extern f32 lbl_8036B47C;
    extern f32 lbl_8036B480;
    extern f32 lbl_8036B484;
    extern s32 lbl_8036C51C;
    extern u16 lbl_8036C520;
    extern u8 lbl_8036C522;

    struct {
        s32 unk0;
        u16 unk4;
        u8 unk6;
    } sp10;
    u32 sp8;
    u32 spC;
    void *temp_r3;
    void *initial;
    f32 var_f2;
    s32 temp_r0;
    u16 temp_r8;
    u8 *var_r6;
    s32 var_r9;
    s32 count;
    s32 temp_r9;
    s32 var_ctr;
    u8 *var_r6_2;
    s32 var_r8;

    initial=fn_8006E658();
    if(lbl_80366E98<0 || lbl_80366E9A<0) {
    lbl_80366E98=*(u16 *)((u8 *)initial+0xA);
    lbl_80366E9A=*(u16 *)((u8 *)initial+0xC);
    }
    lbl_803682B0=arg0; lbl_803682B1=arg1; lbl_80366E9C=arg2;
    fn_8009E574();
    temp_r3 = fn_8006E658();
    *(s16 *)((u8 *)temp_r3 + 0xA) = (s16)(lbl_80366E98 + lbl_803682B0);
    *(s16 *)((u8 *)temp_r3 + 0xC) = (s16)(lbl_80366E9A + lbl_803682B1);
    fn_80210C70(temp_r3);
    if (lbl_803682A4 & 0x40) {
        var_f2 = lbl_8036B478;
    } else {
        var_f2 = lbl_8036B47C;
    }
    var_r6 = (u8 *)&spC;
    var_r9 = 0;
    temp_r0 = (s32)((f32)(s8)lbl_80366E9C * var_f2);
    temp_r8 = (s8)lbl_80366E9C - (u16)temp_r0;
    count = temp_r8 % 4;
    for (var_ctr = 2; var_ctr != 0; var_ctr--) {
        if (var_r9 < count) {
            *var_r6 = (u8)(s32)((f32)temp_r8 * lbl_8036B480 + lbl_8036B478);
        } else {
            *var_r6 = (u8)(s32)((f32)temp_r8 * lbl_8036B480);
        }
        var_r9 += 1;
        if (var_r9 < count) {
            var_r6[1] = (u8)(s32)((f32)temp_r8 * lbl_8036B480 + lbl_8036B478);
        } else {
            var_r6[1] = (u8)(s32)((f32)temp_r8 * lbl_8036B480);
        }
        var_r6 += 2;
        var_r9 += 1;
    }
    var_r6_2 = (u8 *)&sp8;
    var_r8 = 0;
    for (var_ctr = 3; var_ctr != 0; var_ctr--) {
        if (var_r8 < (s32)((u16)temp_r0 % 3)) {
            *var_r6_2 = (u8)(s32)(lbl_8036B478 + (f32)(u16)temp_r0 / lbl_8036B484);
        } else {
            *var_r6_2 = (u8)(s32)((f32)(u16)temp_r0 / lbl_8036B484);
        }
        var_r6_2 += 1;
        var_r8 += 1;
    }
    sp10.unk0 = lbl_8036C51C;
    sp10.unk4 = lbl_8036C520;
    sp10.unk6 = lbl_8036C522;
    *(u8 *)&sp10.unk0 = *((u8 *)&spC + 2);
    *((u8 *)&sp10.unk0 + 1) = *(u8 *)&spC;
    *((u8 *)&sp10.unk0 + 2) = *((u8 *)&sp8 + 1);
    *((u8 *)&sp10.unk0 + 3) = *(u8 *)&sp8;
    *(u8 *)&sp10.unk4 = *((u8 *)&sp8 + 2);
    *((u8 *)&sp10.unk4 + 1) = *((u8 *)&spC + 1);
    sp10.unk6 = *((u8 *)&spC + 3);
    fn_80221824(*(u8 *)((u8 *)temp_r3 + 0x19), (u8 *)temp_r3 + 0x1A, 1, &sp10);
    memcpy((u8 *)temp_r3 + 0x32, &sp10, 7);
    fn_802204F8();
}

void fn_801C7F60(void){void fn_801C7F80(void);fn_801C7F80();}

s32 fn_801C7F80(void *arg0)
{
    s32 fn_8000CAA0(void *, void *);
    void fn_801C7FC0(void);

    extern u8 lbl_802983C0[];

    s32 result;

    result = fn_8000CAA0(lbl_802983C0, arg0);

    fn_801C7FC0();

    return result;
}

void fn_801C7FC0(u32 arg0) {
    M2C_UNK fn_801C7FE8();
    if (arg0 != 0U) {
        fn_801C7FE8();
    }
    return;
}

#pragma cplusplus on
extern "C" void fn_801C838C(Arg801C838C *arg0) {
    void fn_8006EDA0(void *);
    struct Obj {
        virtual void v0(s32) = 0;
    };
    Obj *temp;

    if (arg0->field30 != 0) {
        fn_8006EDA0(&arg0->field30);
    }
    if (arg0 != NULL) {
        temp = M2C_FIELD(arg0, Obj **, 0x40);
        if (temp != NULL) {
            temp->v0(1);
        }
        temp = M2C_FIELD(arg0, Obj **, 0x44);
        if (temp != NULL) {
            temp->v0(1);
        }
        temp = M2C_FIELD(arg0, Obj **, 0x38);
        if (temp != NULL) {
            temp->v0(1);
        }
        temp = M2C_FIELD(arg0, Obj **, 0x3C);
        if (temp != NULL) {
            temp->v0(1);
        }
        temp = M2C_FIELD(arg0, Obj **, 0x48);
        if (temp != NULL) {
            temp->v0(1);
        }
        temp = M2C_FIELD(arg0, Obj **, 0x4C);
        if (temp != NULL) {
            temp->v0(1);
        }
    }
}
#pragma cplusplus reset
void fn_801C8490(void) {
    void fn_8005C8B4(void *);
    extern u8 lbl_802983A4[];
    fn_8005C8B4(*(void **)(lbl_802983A4 + 4));
}

void fn_801C84BC(s32 arg0) {
    u8 fn_8005BA10(s32);
    extern s32 lbl_802983A4[];
    if (fn_8005BA10(lbl_802983A4[1])) {
        fn_8000C188(arg0);
    }
}

void fn_801C8504(void *arg0) {
    void *fn_8006E658(void);
    void fn_8006EEFC(void *, void *);
    extern s16 lbl_80366E98;
    extern s16 lbl_80366E9A;
    extern u8 lbl_80366E9C;
    extern u8 lbl_802983A4[];
    void *p;
    u8 z;
    u8 t;
    s32 sum;

    p = fn_8006E658();
    if (lbl_80366E98 < 0 || lbl_80366E9A < 0) {
        z = 0;
        lbl_80366E98 = *(u16 *)((u8 *)p + 0xA);
        lbl_80366E9A = *(u16 *)((u8 *)p + 0xC);
        lbl_80366E9C = z;
        t = *(u8 *)((u8 *)p + 0x32);
        lbl_80366E9C = t;
        sum = t;
        sum = sum + *(u8 *)((u8 *)p + 0x33);
        lbl_80366E9C = sum;
        sum = (u8)sum + *(u8 *)((u8 *)p + 0x34);
        lbl_80366E9C = sum;
        sum = (u8)sum + *(u8 *)((u8 *)p + 0x35);
        lbl_80366E9C = sum;
        sum = (u8)sum + *(u8 *)((u8 *)p + 0x36);
        lbl_80366E9C = sum;
        sum = (u8)sum + *(u8 *)((u8 *)p + 0x37);
        lbl_80366E9C = sum;
        sum = (u8)sum + *(u8 *)((u8 *)p + 0x38);
        lbl_80366E9C = sum;
        *(u8 *)((u8 *)arg0 + 0x34) = z;
    }
    fn_8006EEFC((u8 *)arg0 + 0x30, *(void **)(lbl_802983A4 + 4));
}

#pragma use_lmw_stmw on
void fn_801C85E0(void *arg0) {
    void fn_80007340(void *, s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(s32);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8001019C(s32, s32, s32, void *, ...);
    s32 fn_800102BC(s32, f32);
    void fn_8006ECCC(void *, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_80230BBC(s32);
    void fn_80238ABC(char *, s32);
    s32 strlen(char *);
    extern void fn_801C8E84;
    extern u8 lbl_8027D740[];
    extern s8 lbl_80366E9C;
    extern s8 lbl_803682B0;
    extern s8 lbl_803682B1;
    extern f32 lbl_8036B478;
    extern f32 lbl_8036B498;
    extern f32 lbl_8036B49C;
    extern f32 lbl_8036B4A0;

    struct TexWh { u8 tex[0x20]; u16 w; u16 h; } t0, t1, t2, t3;
    char buf0[16];
    char buf1[16];
    char buf2[16];
    s16 rect0[4];
    s16 sc0[4];
    s16 rect1[4];
    s16 sc1[4];
    s16 rect2[4];
    s16 sc2[4];
    void *self = arg0;
    s8 v0, v1, v2;
    s32 len;
    s16 step, x, y, dig;
    char *p;
    s32 pair0, pair1;
    void *obj;
    void (*meth)(void *, s32);
    s8 raw;
    s32 tmp;
    s16 yy;

    if (*(u8 *)((u8 *)self + 0x34) != 0) {
        fn_8000A258();
        fn_8000A174((void *)0, 0x410);
        fn_8000A248();
        fn_80007898(0xB);
        fn_80007340(&fn_801C8E84, 0);
        fn_80007884();
        *(u8 *)((u8 *)self + 0x34) = 0;
    }
    fn_8000A258();
    fn_80009D74(lbl_8036B498, lbl_8036B498, lbl_8036B49C, lbl_8036B478);
    fn_80009B8C(0xFF);
    fn_8000A248();
    fn_8006ECCC(*(void **)((u8 *)self + 0x30), &t0, 0);
    t0.w = fn_80222A80(&t0);
    t0.h = fn_80222A90(&t0);
    fn_8000A258();
    fn_8000A174(&t0, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_8036B498, lbl_8036B498, (f32)t0.w, (f32)t0.h);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B4A0);
    fn_8000A248();

    raw = lbl_803682B1;
    rect0[0] = 1;
    v0 = -raw;
    rect0[1] = 1;
    rect0[2] = 0x13;
    rect0[3] = 0x1F;
    fn_80230BBC(v0);
    fn_80238ABC(buf0, 0xA);
    len = strlen(buf0);
    fn_8006ECCC(*(void **)((u8 *)self + 0x30), &t1, 1);
    t1.w = fn_80222A80(&t1);
    t1.h = fn_80222A90(&t1);
    fn_8000A258();
    fn_8000A174(&t1, 0x11);
    fn_8000A248();
    step = (s16)(rect0[2] - rect0[0]);
    pair0 = *(s32 *)&rect0[0];
    pair1 = *(s32 *)&rect0[2];
    x = (s16)(0x108 - (s16)(len * step));
    y = (s16)(((0x30 - (s16)(rect0[3] - rect0[1])) >> 1) + 0x40);
    p = buf0;
    while ((s8)*p != 0) {
        dig = (s16)(((s8)*p - 0x30) * (step + 1));
        *(s32 *)&sc0[0] = pair0;
        *(s32 *)&sc0[2] = pair1;
        sc0[0] = (s16)(sc0[0] + dig);
        sc0[2] = (s16)(sc0[2] + dig);
        fn_80007898(1);
        fn_8000770C((f32)x, (f32)y, (f32)sc0[0], (f32)sc0[1], (f32)(s16)(sc0[2] - sc0[0]),
                    (f32)(s16)(sc0[3] - sc0[1]));
        fn_80007884();
        x = (s16)(x + step);
        p++;
    }
    fn_8000A258();
    fn_8000A174((void *)0, 0x13);
    fn_8000A248();
    tmp = fn_800102BC(-1, lbl_8036B478);
    yy = (s16)(((0x30 - tmp) >> 1) + 0x40);
    if (v0 > 0) {
        fn_8001019C(0xC8, yy, 0x10, lbl_8027D740 + 0xDA);
    } else if (v0 < 0) {
        fn_8001019C(0xC8, yy, 0x10, lbl_8027D740 + 0xDD);
    }

    raw = lbl_803682B0;
    rect1[0] = 1;
    v1 = raw;
    rect1[1] = 1;
    rect1[2] = 0x13;
    rect1[3] = 0x1F;
    fn_80230BBC(v1);
    fn_80238ABC(buf1, 0xA);
    len = strlen(buf1);
    fn_8006ECCC(*(void **)((u8 *)self + 0x30), &t2, 1);
    t2.w = fn_80222A80(&t2);
    t2.h = fn_80222A90(&t2);
    fn_8000A258();
    fn_8000A174(&t2, 0x11);
    fn_8000A248();
    step = (s16)(rect1[2] - rect1[0]);
    pair0 = *(s32 *)&rect1[0];
    pair1 = *(s32 *)&rect1[2];
    x = (s16)(0x108 - (s16)(len * step));
    y = (s16)(((0x30 - (s16)(rect1[3] - rect1[1])) >> 1) + 0x90);
    p = buf1;
    while ((s8)*p != 0) {
        dig = (s16)(((s8)*p - 0x30) * (step + 1));
        *(s32 *)&sc1[0] = pair0;
        *(s32 *)&sc1[2] = pair1;
        sc1[0] = (s16)(sc1[0] + dig);
        sc1[2] = (s16)(sc1[2] + dig);
        fn_80007898(1);
        fn_8000770C((f32)x, (f32)y, (f32)sc1[0], (f32)sc1[1], (f32)(s16)(sc1[2] - sc1[0]),
                    (f32)(s16)(sc1[3] - sc1[1]));
        fn_80007884();
        x = (s16)(x + step);
        p++;
    }
    fn_8000A258();
    fn_8000A174((void *)0, 0x13);
    fn_8000A248();
    tmp = fn_800102BC(-1, lbl_8036B478);
    yy = (s16)(((0x30 - tmp) >> 1) + 0x90);
    if (v1 > 0) {
        fn_8001019C(0xC8, yy, 0x10, lbl_8027D740 + 0xDA);
    } else if (v1 < 0) {
        fn_8001019C(0xC8, yy, 0x10, lbl_8027D740 + 0xDD);
    }

    raw = lbl_80366E9C;
    rect2[0] = 1;
    v2 = (s8)(raw - 0x40);
    rect2[1] = 1;
    rect2[2] = 0x13;
    rect2[3] = 0x1F;
    fn_80230BBC(v2);
    fn_80238ABC(buf2, 0xA);
    len = strlen(buf2);
    fn_8006ECCC(*(void **)((u8 *)self + 0x30), &t3, 1);
    t3.w = fn_80222A80(&t3);
    t3.h = fn_80222A90(&t3);
    fn_8000A258();
    fn_8000A174(&t3, 0x11);
    fn_8000A248();
    step = (s16)(rect2[2] - rect2[0]);
    pair0 = *(s32 *)&rect2[0];
    pair1 = *(s32 *)&rect2[2];
    x = (s16)(0x108 - (s16)(len * step));
    y = (s16)(((0x30 - (s16)(rect2[3] - rect2[1])) >> 1) + 0x100);
    p = buf2;
    while ((s8)*p != 0) {
        dig = (s16)(((s8)*p - 0x30) * (step + 1));
        *(s32 *)&sc2[0] = pair0;
        *(s32 *)&sc2[2] = pair1;
        sc2[0] = (s16)(sc2[0] + dig);
        sc2[2] = (s16)(sc2[2] + dig);
        fn_80007898(1);
        fn_8000770C((f32)x, (f32)y, (f32)sc2[0], (f32)sc2[1], (f32)(s16)(sc2[2] - sc2[0]),
                    (f32)(s16)(sc2[3] - sc2[1]));
        fn_80007884();
        x = (s16)(x + step);
        p++;
    }
    fn_8000A258();
    fn_8000A174((void *)0, 0x13);
    fn_8000A248();
    tmp = fn_800102BC(-1, lbl_8036B478);
    yy = (s16)(((0x30 - tmp) >> 1) + 0x100);
    if (v2 > 0) {
        fn_8001019C(0xC8, yy, 0x10, lbl_8027D740 + 0xDA);
    } else if (v2 < 0) {
        fn_8001019C(0xC8, yy, 0x10, lbl_8027D740 + 0xDD);
    }

    obj = *(void **)((u8 *)self + 0x38);
    meth = *(void (**)(void *, s32))(*(u8 **)obj + 0x2C);
    meth(obj, 0x10);
    obj = *(void **)((u8 *)self + 0x3C);
    meth = *(void (**)(void *, s32))(*(u8 **)obj + 0x2C);
    meth(obj, 0x10);
    obj = *(void **)((u8 *)self + 0x40);
    meth = *(void (**)(void *, s32))(*(u8 **)obj + 0x2C);
    meth(obj, 0x10);
    obj = *(void **)((u8 *)self + 0x44);
    meth = *(void (**)(void *, s32))(*(u8 **)obj + 0x2C);
    meth(obj, 0x10);
    obj = *(void **)((u8 *)self + 0x48);
    meth = *(void (**)(void *, s32))(*(u8 **)obj + 0x2C);
    meth(obj, 0x10);
    obj = *(void **)((u8 *)self + 0x4C);
    meth = *(void (**)(void *, s32))(*(u8 **)obj + 0x2C);
    meth(obj, 0x10);
}
void fn_801C8E84(void) {
    void *fn_8006E658(void);
    void fn_80210C70(void *);
    void fn_80221824(u8, void *, s32, void *);
    void *memcpy(void *, void *, u32);
    extern s16 lbl_80366E98;
    extern s16 lbl_80366E9A;
    extern u8 lbl_80366E9C;
    extern s32 lbl_803682A4;
    extern s8 lbl_803682B0;
    extern s8 lbl_803682B1;
    extern f32 lbl_8036B478;
    extern f32 lbl_8036B47C;
    extern f32 lbl_8036B480;
    extern f32 lbl_8036B484;
    extern s32 lbl_8036C51C;
    extern u16 lbl_8036C520;
    extern u8 lbl_8036C522;

    struct {
        s32 unk0;
        u16 unk4;
        u8 unk6;
    } sp10;
    u32 spC;
    u32 sp8;
    void *temp_r3;
    f32 var_f2;
    s32 temp_r0;
    u16 temp_r8;
    u8 *var_r6;
    s32 var_r9;
    s32 count;
    s32 temp_r9;
    s32 var_ctr;
    u8 *var_r6_2;
    s32 var_r8;

    temp_r3 = fn_8006E658();
    *(s16 *)((u8 *)temp_r3 + 0xA) = (s16)(lbl_80366E98 + lbl_803682B0);
    *(s16 *)((u8 *)temp_r3 + 0xC) = (s16)(lbl_80366E9A + lbl_803682B1);
    fn_80210C70(temp_r3);
    if (lbl_803682A4 & 0x40) {
        var_f2 = lbl_8036B478;
    } else {
        var_f2 = lbl_8036B47C;
    }
    var_r6 = (u8 *)&sp8;
    var_r9 = 0;
    temp_r0 = (s32)((f32)(s8)lbl_80366E9C * var_f2);
    temp_r8 = (s8)lbl_80366E9C - (u16)temp_r0;
    count = temp_r8 % 4;
    for (var_ctr = 2; var_ctr != 0; var_ctr--) {
        if (var_r9 < count) {
            *var_r6 = (u8)(s32)((f32)temp_r8 * lbl_8036B480 + lbl_8036B478);
        } else {
            *var_r6 = (u8)(s32)((f32)temp_r8 * lbl_8036B480);
        }
        var_r9 += 1;
        if (var_r9 < count) {
            var_r6[1] = (u8)(s32)((f32)temp_r8 * lbl_8036B480 + lbl_8036B478);
        } else {
            var_r6[1] = (u8)(s32)((f32)temp_r8 * lbl_8036B480);
        }
        var_r6 += 2;
        var_r9 += 1;
    }
    var_r6_2 = (u8 *)&spC;
    var_r8 = 0;
    for (var_ctr = 3; var_ctr != 0; var_ctr--) {
        if (var_r8 < (s32)((u16)temp_r0 % 3)) {
            *var_r6_2 = (u8)(s32)(lbl_8036B478 + (f32)(u16)temp_r0 / lbl_8036B484);
        } else {
            *var_r6_2 = (u8)(s32)((f32)(u16)temp_r0 / lbl_8036B484);
        }
        var_r6_2 += 1;
        var_r8 += 1;
    }
    sp10.unk0 = lbl_8036C51C;
    sp10.unk4 = lbl_8036C520;
    sp10.unk6 = lbl_8036C522;
    *(u8 *)&sp10.unk0 = *((u8 *)&sp8 + 2);
    *((u8 *)&sp10.unk0 + 1) = *(u8 *)&sp8;
    *((u8 *)&sp10.unk0 + 2) = *((u8 *)&spC + 1);
    *((u8 *)&sp10.unk0 + 3) = *(u8 *)&spC;
    *(u8 *)&sp10.unk4 = *((u8 *)&spC + 2);
    *((u8 *)&sp10.unk4 + 1) = *((u8 *)&sp8 + 1);
    sp10.unk6 = *((u8 *)&sp8 + 3);
    fn_80221824(*(u8 *)((u8 *)temp_r3 + 0x19), (u8 *)temp_r3 + 0x1A, 1, &sp10);
    memcpy((u8 *)temp_r3 + 0x32, &sp10, 7);
}

void fn_801C9170(void *arg0) {
    void fn_8000C188(void *);
    void fn_801475FC(void *, s32);
    void fn_801E3560(void *, u8, u8, u8);
    extern char lbl_8027D740[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80331FB8[];
    extern u8 lbl_80366E9C;
    extern void *lbl_80367240;
    extern s8 lbl_803682B0;
    extern s8 lbl_803682B1;
    void *self;
    s32 *pad;
    s32 held;
    s32 trig;
    s32 buttons;
    void *obj;
    u8 b0;
    u8 b1;
    u8 b2;

    self = arg0;
    pad = (s32 *)lbl_80367240;
    b0 = lbl_803682B0;
    buttons = pad[3];
    held = pad[1];
    trig = held & (pad[2] ^ held);

    if ((s8)b0 > -0x14 && (buttons & 0x01000001)) {
        lbl_803682B0 = b0 - 1;
        *(u8 *)((u8 *)self + 0x34) = 1;
        obj = *(void **)((u8 *)self + 0x40);
        *(s16 *)((u8 *)obj + 0x16) = 1;
        *(u8 *)((u8 *)obj + 0xD) = 0;
        fn_801475FC(lbl_8027D740 + 0xE0, 0x64);
    } else if ((s8)b0 < 0x14 && (buttons & 0x02000002)) {
        lbl_803682B0 += 1;
        *(u8 *)((u8 *)self + 0x34) = 1;
        obj = *(void **)((u8 *)self + 0x44);
        *(s16 *)((u8 *)obj + 0x16) = 1;
        *(u8 *)((u8 *)obj + 0xD) = 0;
        fn_801475FC(lbl_8027D740 + 0xE0, 0x64);
    }

    b1 = lbl_803682B1;
    if ((s8)b1 > -0xF && (buttons & 0x08000008)) {
        lbl_803682B1 = b1 - 1;
        *(u8 *)((u8 *)self + 0x34) = 1;
        obj = *(void **)((u8 *)self + 0x38);
        *(s16 *)((u8 *)obj + 0x16) = 1;
        *(u8 *)((u8 *)obj + 0xD) = 0;
        fn_801475FC(lbl_8027D740 + 0xF5, 0x64);
    } else if ((s8)b1 < 0xF && (buttons & 0x04000004)) {
        lbl_803682B1 += 1;
        *(u8 *)((u8 *)self + 0x34) = 1;
        obj = *(void **)((u8 *)self + 0x3C);
        *(s16 *)((u8 *)obj + 0x16) = 1;
        *(u8 *)((u8 *)obj + 0xD) = 0;
        fn_801475FC(lbl_8027D740 + 0xF5, 0x64);
    }

    b2 = lbl_80366E9C;
    if ((s8)b2 > 0xE && (buttons & 0x40000000)) {
        lbl_80366E9C = b2 - 1;
        *(u8 *)((u8 *)self + 0x34) = 1;
        obj = *(void **)((u8 *)self + 0x4C);
        *(s16 *)((u8 *)obj + 0x16) = 1;
        *(u8 *)((u8 *)obj + 0xD) = 0;
        fn_801475FC(lbl_8027D740 + 0x10A, 0x64);
    } else if ((s8)b2 < 0x72 && (buttons & 0x80000000)) {
        lbl_80366E9C += 1;
        *(u8 *)((u8 *)self + 0x34) = 1;
        obj = *(void **)((u8 *)self + 0x48);
        *(s16 *)((u8 *)obj + 0x16) = 1;
        *(u8 *)((u8 *)obj + 0xD) = 0;
        fn_801475FC(lbl_8027D740 + 0x10A, 0x64);
    }

    if (trig & 0x100) {
        fn_801E3560(lbl_80331FB8, lbl_803682B0, lbl_803682B1, lbl_80366E9C);
        lbl_80330708[0xA3] = lbl_803682B1;
        lbl_80330708[0xA2] = lbl_803682B0;
        lbl_80330708[0xA1] = lbl_80366E9C;
        fn_801475FC(lbl_8027D740 + 0x121, 0x64);
        fn_8000C188(self);
    } else if (trig & 0x200) {
        lbl_803682B0 = lbl_80330708[0xA2];
        lbl_803682B1 = lbl_80330708[0xA3];
        lbl_80366E9C = lbl_80330708[0xA1];
        *(u8 *)((u8 *)self + 0x34) = 1;
        fn_801475FC(lbl_8027D740 + 0x131, 0x64);
        fn_8000C188(self);
    }
}

void fn_801C9460(void) {
    void fn_802102F8(void);
    s32 VIGetTvFormat(void);
    u32 OSGetResetCode(void);
    s32 fn_8006E650(void);
    void fn_8006E838(void *);
    void fn_8020602C(char *, s32, char *, ...);
    void fn_802217AC(void *, s32);
    void fn_80221A40(s32, s32);
    extern s32 lbl_803682A4;
    extern void *lbl_803682A8;
    extern void *lbl_803682AC;
    extern u8 lbl_80298278[];
    extern u8 lbl_802982B4[];
    extern u8 lbl_802982F0[];
    extern u8 lbl_8029832C[];
    extern u8 lbl_80298368[];
    extern char lbl_8027D740[];
    extern s32 lbl_8036C518;

    s32 sp8;
    s32 fmt;

    fn_802102F8();
    fmt = VIGetTvFormat();
    switch (fmt) {
    case 0:
        lbl_803682A8 = lbl_80298278;
        lbl_803682AC = lbl_802982B4;
        lbl_803682A4 |= 0x10000;
        break;
    case 1:
        lbl_803682A8 = lbl_802982F0;
        lbl_803682AC = lbl_8029832C;
        lbl_803682A4 |= 0x20000;
        break;
    case 5:
        lbl_803682A8 = lbl_8029832C;
        lbl_803682AC = lbl_8029832C;
        lbl_803682A4 |= 0x40000;
        break;
    case 2:
        lbl_803682A8 = lbl_80298368;
        lbl_803682AC = lbl_802982B4;
        lbl_803682A4 |= 0x80000;
        break;
    default:
        fn_8020602C(lbl_8027D740 + 0x141, 0xE1, lbl_8027D740 + 0x14B);
        break;
    }

    if (lbl_803682A4 & 0x10000) {
        if ((OSGetResetCode() >> 31) == 0 || (OSGetResetCode() & 2)) {
            fn_8006E838(lbl_803682A8);
            lbl_803682A4 &= ~0x40;
        } else {
            if (!(OSGetResetCode() & 1)) {
                fn_8006E838(lbl_803682A8);
                lbl_803682A4 &= ~0x40;
            } else {
                fn_8006E838(lbl_803682AC);
                lbl_803682A4 |= 0x40;
            }
            lbl_803682A4 |= 0x30;
        }
    } else if (lbl_803682A4 & 0x80000) {
        if ((OSGetResetCode() >> 31) == 0 || (OSGetResetCode() & 2)) {
            fn_8006E838(lbl_803682A8);
            lbl_803682A4 &= ~0x40;
        } else {
            if (!(OSGetResetCode() & 1)) {
                fn_8006E838(lbl_803682A8);
                lbl_803682A4 &= ~0x40;
            } else {
                fn_8006E838(lbl_803682AC);
                lbl_803682A4 |= 0x40;
            }
            lbl_803682A4 |= 0x30;
        }
    } else if (lbl_803682A4 & 0x60000) {
        if ((OSGetResetCode() >> 31) == 0 || (OSGetResetCode() & 0x20)) {
            fn_8006E838(lbl_803682A8);
            lbl_803682A4 &= ~0x100;
        } else {
            if (!(OSGetResetCode() & 0x10)) {
                fn_8006E838(lbl_803682A8);
                lbl_803682A4 &= ~0x100;
            } else {
                fn_8006E838(lbl_803682AC);
                lbl_803682A4 |= 0x100;
            }
            lbl_803682A4 |= 0x30;
        }
    }

    sp8 = lbl_8036C518;
    fn_802217AC(&sp8, 0xFFFFFF);
    fn_80221A40(fn_8006E650(), 1);
}

s32 fn_801C9704(void) {
    extern s32 lbl_803682AC;
    return lbl_803682AC;
}

s32 fn_801C970C(void) {
    extern s32 lbl_803682A8;
    return lbl_803682A8;
}

void fn_801C9714(void) {
    extern s32 lbl_803682A4;
    lbl_803682A4 &= 0xFFFFFFFE;
}

void fn_801C9724(void) {
    extern s32 lbl_803682A4;
    lbl_803682A4 |= 1;
}

s32 fn_801C9734(void) {
    s32 fn_800C9400(void *, u32, u32, char *, u32);
    void fn_800C9758(void *, void *, u32, u32);
    void fn_800C992C(void *, const char *, u32);
    void fn_800C99A0(void *, void *, u32, u32);
    void fn_800C9A60(void *, s16);
    void fn_800CB90C(void *, void *, char *);
    void fn_800DF6DC(void *, s32);
    s32 fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    void fn_801CA814(s32, void *);
    void fn_801CB25C(void *, s32);
    u32 strlen(const char *);
    extern char lbl_8027D8B0[];
    extern void *lbl_80368278;
    extern void *lbl_803682B8;
    struct Str {
        u32 size;
        u32 cap;
        char *data;
    };
    struct Str sp38;
    struct Str sp2C;
    struct Str sp20;
    struct Str sp14;
    struct Str sp8;
    void *temp;
    u32 len;

    sp38.cap = 0;
    temp = lbl_803682B8;
    sp2C.cap = 0;
    sp38.size = 0;
    sp38.data = 0;
    sp38.cap = 0;
    sp2C.size = 0;
    sp2C.data = 0;
    sp2C.cap = 0;

    temp = (void *)fn_8011C984(*(s32 *)((u8 *)temp + 0x430), fn_8011C9E4(*(s32 *)((u8 *)temp + 0x430)));

    fn_801CB25C(&sp20, (s32)temp);
    fn_800C9758(&sp2C, &sp20, 0, -1);
    fn_800C9A60(&sp20, -1);
    fn_800C9758(&sp38, lbl_80368278, 0, -1);

    len = strlen(&lbl_8027D8B0[8]);
    fn_800C992C(&sp38, (char *)lbl_8027D8B0 + 8, len);

    len = strlen((char *)lbl_8027D8B0 + 0xE);
    if (fn_800C9400(&sp2C, 0, sp2C.size, &lbl_8027D8B0[0xE], len) != 0) {
        fn_800CB90C(&sp14, &sp2C, (char *)lbl_8027D8B0 + 0xF);
        fn_800C99A0(&sp38, &sp14, 0, -1);
        fn_800C9A60(&sp14, -1);
    }

    fn_800DF6DC(&sp8, (s32)temp);
    fn_800C99A0(&sp38, &sp8, 0, -1);
    fn_800C9A60(&sp8, -1);

    len = strlen(&lbl_8027D8B0[0x11]);
    fn_800C992C(&sp38, (char *)lbl_8027D8B0 + 0x11, len);

    fn_801CA814((s32)temp, &sp38);
    fn_800C9A60(&sp2C, -1);
    fn_800C9A60(&sp38, -1);
    return 0;
}

s32 fn_801C98EC(void) {
    s32 fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    void fn_801CAF94(s32, s32, s32, s32, s32);
    extern void *lbl_803682B8;
    void *temp_r31;

    temp_r31 = lbl_803682B8;
    fn_801CAF94(
        fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430))),
        0, 0, 0, 1);
    return 0;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
s32 fn_801C9940(void) {
    void *fn_800DC3B0(void *);
    s32 fn_8011C9E4(s32);
    s32 fn_8011C984(s32, s32);
    void *fn_801CAF2C(void *, s32);
    void *fn_801CAF8C(void *);
    void fn_800E8FCC(f32 *, void *);
    void fn_800DBB74(f32 *, void *);
    f32 fn_800E9018(void *);
    extern void *lbl_803682B8;

    f32 z1;
    f32 y1;
    f32 x1;
    f32 z2;
    f32 y2;
    f32 x2;
    void *result;
    void *obj;
    s32 index;
    f32 sp14[3];
    f32 sp8[3];
    f32 f1;
    u32 slot;

    index = (s32)fn_800DC3B0(*(void **)((u8 *)lbl_803682B8 + 0x438));
    obj = lbl_803682B8;
    obj = (void *)fn_8011C984(*(s32 *)((u8 *)obj + 0x430), fn_8011C9E4(*(s32 *)((u8 *)obj + 0x430)));
    result = fn_801CAF2C(obj, index);
    fn_800E8FCC(sp14, obj = fn_801CAF8C(obj));
    x1 = sp14[0];
    y1 = sp14[1];
    z1 = sp14[2];
    fn_800DBB74(sp8, obj);
    x2 = sp8[0];
    y2 = sp8[1];
    z2 = sp8[2];
    f1 = fn_800E9018(obj);
    slot = *(u32 *)((u8 *)*(void **)((u8 *)lbl_803682B8 + 0x42C) + (index << 2));
    *(f32 *)((u8 *)result + 0x00) = x1;
    *(f32 *)((u8 *)result + 0x04) = y1;
    *(f32 *)((u8 *)result + 0x08) = z1;
    *(f32 *)((u8 *)result + 0x0C) = x2;
    *(f32 *)((u8 *)result + 0x10) = y2;
    *(f32 *)((u8 *)result + 0x14) = z2;
    *(f32 *)((u8 *)result + 0x18) = f1;
    *(u32 *)((u8 *)result + 0x1C) = slot;
    return 0;
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset
s32 fn_801C9A88(void) {
    return 0;
}

s32 fn_801C9A90(void) {
    s32 fn_800DC3B0(s32);
    s32 fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    void fn_801C9EE0(void *, s32);
    void fn_801CACE4(void *, s32);
    extern void *lbl_803682B8;
    s32 temp_r30;
    void *temp_r31;

    temp_r30 = fn_800DC3B0(M2C_FIELD(lbl_803682B8, s32 *, 0x438));
    temp_r31 = lbl_803682B8;
    fn_801CACE4((void *)fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430))), temp_r30);
    fn_801C9EE0(lbl_803682B8, fn_8011C9E4(M2C_FIELD(lbl_803682B8, s32 *, 0x430)));
    return 0;
}

s32 fn_801C9C5C(void) {
    s32 fn_800DC3B0(s32);
    s32 fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    void fn_801CADBC(s32, s32);
    extern void *lbl_803682B8;
    void *temp_r31;
    s32 temp_r31_2;
    s32 temp_r0;

    temp_r31 = lbl_803682B8;
    temp_r31_2 = fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430)));
    temp_r0 = fn_800DC3B0(M2C_FIELD(lbl_803682B8, s32 *, 0x438));
    fn_801CADBC(temp_r31_2, temp_r0);
    return 0;
}

s32 fn_801C9CBC(void) {
    extern void *lbl_803682B8;
    void fn_800C9758(void *, void *, s32, s32);
    void fn_800C9A60(void *, s32);
    void fn_801C9D94(void *, void *);
    void fn_801CAF58(void *, void *);
    s32 fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);

    struct Str {
        u32 size;
        u32 cap;
        char *data;
    };
    struct Str sp14;
    struct Str sp8;
    void *obj;
    s32 handle;

    sp14.cap = 0;
    obj = lbl_803682B8;
    sp14.size = 0;
    sp14.data = 0;
    sp14.cap = 0;

    handle = fn_8011C984(*(s32 *)((u8 *)obj + 0x430),
                         fn_8011C9E4(*(s32 *)((u8 *)obj + 0x430)));

    fn_801C9D94(&sp8, lbl_803682B8);
    fn_800C9758(&sp14, &sp8, 0, -1);
    fn_800C9A60(&sp8, -1);
    fn_801CAF58((void *)handle, &sp14);
    fn_800C9A60(&sp14, -1);

    return 0;
}

s32 fn_801C9D58(void) {
    s32 fn_8011C9E4(s32);
    void fn_801C9EE0(void *, s32);
    extern void *lbl_803682B8;

    s32 temp_r3 = fn_8011C9E4(*(s32 *)((char *)lbl_803682B8 + 0x430));
    fn_801C9EE0(lbl_803682B8, temp_r3);
    return 0;
}

#pragma use_lmw_stmw on
#pragma optimization_level 2
#pragma global_optimizer off
void fn_801C9EE0(void *arg0, s32 arg1) {
    s32 fn_800C9400(void *, s32, u32, char *, u32);
    void fn_800C96F8(void *, char *, u32);
    void fn_800C9758(void *, void *, s32, s32);
    void fn_800C9A60(void *, s32);
    void fn_800C9B6C(void *, void *);
    void fn_800C9BC4(void *, void *, s32, void *);
    void fn_800DC454(void *);
    void fn_800DC518(void *, void *, void *);
    void fn_800DF6DC(void *, s32);
    s32 fn_8011C984(s32, s32);
    void fn_8011C9A8(s32, s32);
    void fn_801CADBC(s32, s32);
    void *fn_801CAF2C(s32, s32);
    s32 fn_801CAF50(void);
    s32 fn_801CAF8C(s32);
    void fn_80231D94(char *, char *, ...);
    u32 strlen(const char *);
    extern char lbl_8027D8B0[];

    struct Str {
        u32 size;
        u32 cap;
        char *data;
    };
    struct Entry {
        u8 pad[0x1C];
        s32 nameId;
    };
    char sp38[0x30];
    struct Str sp2C;
    struct Str sp20;
    struct Str sp14;
    struct Str sp8;
    void *self;
    s32 handle;
    s32 count;
    struct Entry *entry;
    u32 len;
    char *base;

    self = arg0;
    sp2C.cap = 0;
    sp20.cap = 0;
    sp2C.size = 0;
    sp2C.data = 0;
    sp2C.cap = 0;
    sp20.size = 0;
    sp20.data = 0;
    sp20.cap = 0;

    fn_800DC454(*(void **)((u8 *)self + 0x438));
    *(s32 *)((u8 *)self + 0x428) = 0;
    handle = fn_8011C984(*(s32 *)((u8 *)self + 0x430), arg1);
    count = fn_801CAF50();
    base = lbl_8027D8B0;
    for (arg1 = 0; arg1 < count; arg1++) {
        entry = (struct Entry *)fn_801CAF2C(handle, arg1);
        fn_80231D94(sp38, base + 0x16, arg1, entry->nameId);
        fn_800C96F8(&sp2C, sp38, strlen(sp38));
        fn_800C9B6C(&sp14, &sp2C);
        fn_800DC518(*(void **)((u8 *)self + 0x438), &sp14, entry);
        fn_800C9A60(&sp14, -1);
        fn_800C9BC4((u8 *)self + 0x424,
                    (void *)(*(s32 *)((u8 *)self + 0x42C) + (*(s32 *)((u8 *)self + 0x428) * 4)),
                    1, &entry->nameId);
    }

    fn_800DF6DC(&sp8, fn_801CAF8C(handle));
    fn_800C9758(&sp20, &sp8, 0, -1);
    fn_800C9A60(&sp8, -1);

    len = strlen((char *)((u8 *)lbl_8027D8B0 + 0x21));
    if (fn_800C9400(&sp20, 0, sp20.size, (char *)((u32)lbl_8027D8B0 + 0x21), len) == 0) {
        fn_8011C9A8(*(s32 *)((u8 *)self + 0x434), 0);
    } else {
        len = strlen((char *)((u8 *)lbl_8027D8B0 + 0x2C));
        if (fn_800C9400(&sp20, 0, sp20.size, (char *)((u32)lbl_8027D8B0 + 0x2C), len) == 0) {
            fn_8011C9A8(*(s32 *)((u8 *)self + 0x434), 1);
        } else {
            len = strlen((char *)((u8 *)lbl_8027D8B0 + 0x37));
            if (fn_800C9400(&sp20, 0, sp20.size, (char *)((u32)lbl_8027D8B0 + 0x37), len) == 0) {
                fn_8011C9A8(*(s32 *)((u8 *)self + 0x434), 2);
            } else {
                len = strlen((char *)((u8 *)lbl_8027D8B0 + 0x42));
                if (fn_800C9400(&sp20, 0, sp20.size, (char *)((u32)lbl_8027D8B0 + 0x42), len) == 0) {
                    fn_8011C9A8(*(s32 *)((u8 *)self + 0x434), 3);
                } else {
                    len = strlen((char *)((u8 *)lbl_8027D8B0 + 0x4D));
                    if (fn_800C9400(&sp20, 0, sp20.size, (char *)((u32)lbl_8027D8B0 + 0x4D), len) == 0) {
                        fn_8011C9A8(*(s32 *)((u8 *)self + 0x434), 4);
                    }
                }
            }
        }
    }

    fn_801CADBC(handle, 0);
    fn_800C9A60(&sp20, -1);
    fn_800C9A60(&sp2C, -1);
}
#pragma global_optimizer reset
#pragma optimization_level reset
#pragma use_lmw_stmw reset

void fn_801CA1B8(s32 arg0) {
    void fn_801C9EE0(s32, s32);
    fn_801C9EE0(arg0, 0);
}

void fn_801CA1DC(void *arg0, s32 arg1) {
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_8011CAAC(s32, M2C_UNK *, s32);
    M2C_UNK fn_801CB280(M2C_UNK *);
    M2C_UNK sp8;

    fn_801CB280(&sp8);
    fn_8011CAAC(M2C_FIELD(arg0, s32 *, 0x430), &sp8, arg1);
    fn_800C9A60(&sp8, -1);
}

#pragma cplusplus off
void *fn_801CA3C8(void *arg0,s32 arg1,s32 arg2,s32 arg3) {
    void fn_801C9B08(void);
    void fn_800C9ABC(void *,char *,void *);
    void fn_800CB90C(void *,void *,char *);
    void fn_800C9A60(void *,s16);
    void fn_800D764C(void *,s32,s32,s32,void *,void *);
    void *fn_800D75FC(void *,void *);
    void fn_800E3F54(void *);
    extern char lbl_8027D8B0[];
    extern u8 lbl_80298418[];
    u32 spB8[3];
    u32 spAC[3];
    u32 spA0[3];
    u32 sp94[3];
    u32 sp88[3];
    u32 sp7C[3];
    u32 sp70[3];
    u32 sp64[3];
    u32 sp58[3];
    u32 sp4C[3];
    u32 sp40[3];
    u32 sp34[3];
    void *sp30;
    void *sp2C;
    void *sp28;
    void *sp24;
    void *sp20;
    void *sp1C;
    void *sp18;
    void *sp14;
    void *sp10;
    void *spC;
    void *sp8;
    u8 *self;
    void *temp;
    self=(u8 *)arg0;
    fn_800C9ABC(spB8,lbl_8027D8B0+0x52,&sp30);
    fn_800CB90C(spAC,spB8,lbl_8027D8B0+0x59);
    fn_800C9ABC(spA0,lbl_8027D8B0+0x67,&sp2C);
    fn_800D764C(self,arg1,arg2,arg3,spAC,spA0);
    fn_800C9A60(spA0,-1);
    fn_800C9A60(spAC,-1);
    fn_800C9A60(spB8,-1);
    *(void **)(self+0xC)=lbl_80298418;
    *(u32 *)(self+0x424)=0;
    *(u32 *)(self+0x428)=0;
    *(u32 *)(self+0x42C)=0;
    fn_800C9ABC(sp94,lbl_8027D8B0+0x71,&sp28);
    *(void **)(self+0x430)=fn_800D75FC(self,sp94);
    fn_800C9A60(sp94,-1);
    fn_800C9ABC(sp88,lbl_8027D8B0+0x7d,&sp24);
    *(void **)(self+0x434)=fn_800D75FC(self,sp88);
    fn_800C9A60(sp88,-1);
    fn_800C9ABC(sp7C,lbl_8027D8B0+0x87,&sp20);
    *(void **)(self+0x438)=fn_800D75FC(self,sp7C);
    fn_800C9A60(sp7C,-1);
    fn_800C9ABC(sp70,lbl_8027D8B0+0x91,&sp1C);
    *(void **)(self+0x43c)=fn_800D75FC(self,sp70);
    fn_800C9A60(sp70,-1);
    fn_800C9ABC(sp64,lbl_8027D8B0+0x98,&sp18);
    *(void **)(self+0x440)=fn_800D75FC(self,sp64);
    fn_800C9A60(sp64,-1);
    fn_800C9ABC(sp58,lbl_8027D8B0+0xa2,&sp14);
    *(void **)(self+0x444)=fn_800D75FC(self,sp58);
    fn_800C9A60(sp58,-1);
    fn_800C9ABC(sp4C,lbl_8027D8B0+0xab,&sp10);
    *(void **)(self+0x448)=fn_800D75FC(self,sp4C);
    fn_800C9A60(sp4C,-1);
    fn_800C9ABC(sp40,lbl_8027D8B0+0xb2,&spC);
    temp=fn_800D75FC(self,sp40);
    *(void **)(self+0x44C)=temp;
    *(void **)(self+0x418)=temp;
    fn_800C9A60(sp40,-1);
    fn_800C9ABC(sp34,lbl_8027D8B0+0xb8,&sp8);
    *(void **)(self+0x450)=fn_800D75FC(self,sp34);
    fn_800C9A60(sp34,-1);
    *(void **)(*(u8 **)(self+0x430)+0xFC)=(void *)fn_801C9D58;
    *(void **)(*(u8 **)(self+0x434)+0xFC)=(void *)fn_801C9CBC;
    *(void **)(*(u8 **)(self+0x438)+0x118)=(void *)fn_801C9C5C;
    *(void **)(*(u8 **)(self+0x43c)+0xA4)=(void *)fn_801C9B08;
    *(void **)(*(u8 **)(self+0x440)+0xA4)=(void *)fn_801C9A90;
    *(void **)(*(u8 **)(self+0x444)+0xA4)=(void *)fn_801C9A88;
    *(void **)(*(u8 **)(self+0x448)+0xA4)=(void *)fn_801C9940;
    *(void **)(*(u8 **)(self+0x44c)+0xA4)=(void *)fn_801C98EC;
    *(void **)(*(u8 **)(self+0x450)+0xA4)=(void *)fn_801C9734;
    *(void **)(self+0x14)=*(void **)(self+0x430);
    *(void **)(self+0x54)=*(void **)(self+0x434);
    *(void **)(self+0x94)=*(void **)(self+0x43c);
    *(void **)(self+0x98)=*(void **)(self+0x440);
    *(void **)(self+0x9c)=*(void **)(self+0x444);
    *(void **)(self+0xd4)=*(void **)(self+0x438);
    *(void **)(self+0x114)=*(void **)(self+0x448);
    *(void **)(self+0x154)=*(void **)(self+0x44c);
    *(void **)(self+0x158)=*(void **)(self+0x450);
    *(void **)(self+0x414)=*(void **)(self+0x430);
    fn_800E3F54(*(void **)(self+0x414));
    return self;
}

void *fn_801CA77C(void *p, s16 n) {
    extern u8 lbl_80298428[];
    void fn_800C9A60(void *, s32);
    void fn_801CBFD0(void *, s32);
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    struct T {
        u8 pad[0x48];
        u8 sub;
    } *t;

    if (p != NULL) {
        t = (struct T *)p;
        *(u8 **)((u8 *)p + 0x40) = lbl_80298428;
        fn_800C9A60((u8 *)p + 0x60, -1);
        fn_800C9A60((u8 *)p + 0x54, -1);
        if (&t->sub != NULL) {
            if (&t->sub != NULL) {
                fn_801CBFD0(&t->sub, 0);
            }
        }
        fn_800DF724(p, 0);
        if (n > 0) {
            fn_800C428C(p);
        }
    }
    return p;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
#pragma opt_strength_reduction off
#pragma cplusplus on
extern "C" void fn_801CA814(void *arg0, void *arg1) {
    u32 strlen(const char *);
    void fn_800C96F8(void *, char *, u32);
    void fn_800CBF24(void *, char *, void *);
    void fn_800CB90C(void *, void *, char *);
    void fn_800C99A0(void *, void *, s32, s32);
    void fn_800C9A60(void *, s16);
    void fn_800C992C(void *, char *, u32);
    char *fn_800C93EC(void *);
    void fn_80231D94(char *, char *, ...);
    void fn_800DF6DC(void *, void *);
    void *fn_800C42D8(s32);
    void *fn_800C4638(s32, char *, s32);
    void fn_8017A430(void *, s32, char *);
    void fn_8017A310(void *, char *);
    extern char lbl_8027DAB0[];
    extern u8 lbl_802842A4[];
    extern u8 lbl_80284C98[];
    struct Str { u32 size; u32 cap; char *data; };
    struct WObj {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void close(s32);
    };
    struct Str sp2C;
    struct Str sp20;
    struct Str sp14;
    struct Str sp8;
    char sp38[0x40];
    s32 i;
    f32 *ent;
    char *base;
    s32 off;
    void *copy;
    u32 len;

    sp2C.cap = 0;
    sp2C.size = 0;
    sp2C.data = 0;
    sp2C.cap = 0;
    {
        u32 n = strlen(lbl_8027DAB0);
        fn_800C96F8(&sp2C, lbl_8027DAB0, n);
    }
    fn_800CBF24(&sp20, (char *)lbl_8027DAB0 + 4, (void *)((u8 *)arg0 + 0x54));
    fn_800CB90C(&sp14, &sp20, (char *)((u8 *)lbl_8027DAB0 + 0x1C));
    fn_800C99A0(&sp2C, &sp14, 0, -1);
    fn_800C9A60(&sp14, -1);
    fn_800C9A60(&sp20, -1);
    len = strlen(lbl_8027DAB0);
    fn_800C992C(&sp2C, lbl_8027DAB0, len);
    len = strlen(&lbl_8027DAB0[0x1C]);
    fn_800C992C(&sp2C, (char *)lbl_8027DAB0 + 0x1C, len);
    len = strlen(&lbl_8027DAB0[0x1F]);
    fn_800C992C(&sp2C, (char *)lbl_8027DAB0 + 0x1F, len);
    len = strlen(&lbl_8027DAB0[0x23]);
    fn_800C992C(&sp2C, (char *)lbl_8027DAB0 + 0x23, len);
    fn_80231D94(sp38, (char *)lbl_8027DAB0 + 0x38, fn_800C93EC((u8 *)arg0 + 0x10));
    fn_800C992C(&sp2C, sp38, strlen(sp38));
    fn_80231D94(sp38, (char *)lbl_8027DAB0 + 0x43, fn_800C93EC((u8 *)arg0 + 0x60));
    fn_800C992C(&sp2C, sp38, strlen(sp38));
    fn_80231D94(sp38, (char *)lbl_8027DAB0 + 0x50, fn_800C93EC((void *)((s8 *)arg0 + 0x54)));
    fn_800C992C(&sp2C, sp38, strlen(sp38));
    fn_800DF6DC(&sp8, *(void **)((u8 *)arg0 + 0x6C));
    fn_80231D94(sp38, (char *)lbl_8027DAB0 + 0x5E, fn_800C93EC(&sp8));
    fn_800C9A60(&sp8, -1);
    fn_800C992C(&sp2C, sp38, strlen(sp38));
    fn_80231D94(sp38, (char *)lbl_8027DAB0 + 0x6B, *(s32 *)((u8 *)arg0 + 0x70));
    fn_800C992C(&sp2C, sp38, strlen(sp38));
    i = 0;
    base = lbl_8027DAB0;
    off = 0;
    while (i < *(s32 *)((u8 *)arg0 + 0x70)) {
        ent = (f32 *)(*(u8 **)((u8 *)arg0 + 0x50) + off);
        fn_80231D94(sp38, base + 0x76, *(ent), *(ent + 1), *(ent + 2));
        fn_800C992C(&sp2C, sp38, strlen(sp38));
        fn_80231D94(sp38, base + 0x8F, *(ent + 3), *(ent + 4), *(ent + 5));
        fn_800C992C(&sp2C, sp38, strlen(sp38));
        fn_80231D94(sp38, base + 0xA8, *(ent + 6));
        fn_800C992C(&sp2C, sp38, strlen(sp38));
        fn_80231D94(sp38, base + 0xB5, *(s32 *)(ent + 7));
        fn_800C992C(&sp2C, sp38, strlen(sp38));
        i = i + 1;
        off = off + 0x20;
    }
    len = strlen(&lbl_8027DAB0[0xC0]);
    fn_800C992C(&sp2C, (char *)lbl_8027DAB0 + 0xC0, len);
    len = strlen(&lbl_8027DAB0[0x1C]);
    fn_800C992C(&sp2C, (char *)lbl_8027DAB0 + 0x1C, len);
    len = strlen(&lbl_8027DAB0[0xC4]);
    fn_800C992C(&sp2C, (char *)lbl_8027DAB0 + 0xC4, len);
    if ((arg0 = fn_800C42D8(0x14)) != 0) {
        *(void **)((u8 *)arg0 + 0x10) = lbl_802842A4;
        copy = (u8 *)arg0 + i;
        copy = (u8 *)copy - i;
        *(u32 *)((u8 *)arg0 + 4) = 0;
        *(u32 *)arg0 = 0;
        *(u32 *)((u8 *)arg0 + 8) = 0;
        *(u8 *)((u8 *)arg0 + 0xC) = 0;
        *(void **)((u8 *)arg0 + 0x10) = lbl_80284C98;
        *(void **)copy = fn_800C4638(0x8000, (char *)lbl_8027DAB0 + 0xC8, 0);
        *(void **)((u8 *)copy + 4) = *(void **)copy;
        *(u32 *)((u8 *)copy + 8) = 0x8000;
        *(u8 *)((u8 *)copy + 0xC) = 1;
    }
    {
        char *s = fn_800C93EC(&sp2C);
        fn_8017A430(arg0, sp2C.size, s);
    }
    fn_8017A310(arg0, fn_800C93EC(arg1));
    if (arg0 != 0) {
        ((WObj *)arg0)->close(1);
    }
    fn_800C9A60(&sp2C, -1);
}
#pragma cplusplus reset
#pragma opt_strength_reduction reset
#pragma global_optimizer reset
void fn_801CACE4(void *arg0, s32 arg1) {
    if (arg1 < *(s32*)((char*)arg0 + 0x70)) {
        s32 temp_r5 = *(s32*)((char*)arg0 + 0x50);
        fn_801CB7F0((char*)arg0 + 0x48, temp_r5 + (arg1 << 5), temp_r5);
        *(s32*)((char*)arg0 + 0x70) = *(s32*)((char*)arg0 + 0x70) - 1;
    }
}

void fn_801CAD38(void *p,s32 n,s32 v){void fn_801CB934(void*,void*,s32,s32);s32 x=n+1; if(x<*(s32*)((u8*)p+0x70))fn_801CB934((u8*)p+0x48,(u8*)(*(u32*)((u8*)p+0x50)+(x<<5)),1,v);else fn_801CB934((u8*)p+0x48,(u8*)(*(u32*)((u8*)p+0x50)+(*(s32*)((u8*)p+0x4c)<<5)),1,v);(*(s32*)((u8*)p+0x70))++;}

s32 fn_801CAF2C(void *arg0, s32 arg1) {
    if (arg1 < (s32) M2C_FIELD(arg0, s32 *, 0x70)) {
        return M2C_FIELD(arg0, s32 *, 0x50) + (arg1 << 5);
    }
    return 0;
}

s32 fn_801CAF50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

void fn_801CAF58(void *arg0) {
    s32 fn_800E7F60(s32);
    M2C_FIELD(arg0, s32 *, 0x6C) = fn_800E7F60(M2C_FIELD(arg0, s32 *, 0));
}

s32 fn_801CAF8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

#pragma cplusplus on
extern "C" void fn_801CAF94(void *arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4) {
    u8 fn_800E903C(void *);
    void fn_800DF6DC(void *, s32);
    void fn_800E7B80(s32, void *);
    void fn_800C9A60(void *, s32);
    void *fn_800E8BB4(void *);
    void fn_800E8BBC(void *, void *);
    void fn_800E8FAC(void *, s32);
    s32 fn_800E8F00(void *);
    void fn_800D5D04(void *, void *, s32, s32);
    void fn_800CB90C(void *, void *, char *);
    void fn_800C9758(void *, void *, s32, s32);
    s32 fn_800C9400(void *, s32, u32, char *, u32);
    void fn_800C96F8(void *, char *, u32);
    void fn_800C99A0(void *, void *, s32, s32);
    void *fn_800C93EC(void *);
    void fn_800E574C(void *, void *, f32, s32, s32, s32, s32);
    u32 strlen(const char *);
    extern char lbl_8027DAB0[];
    extern f32 lbl_8036B4AC;

    struct Str {
        u32 size;
        u32 cap;
        char *data;
    };
    struct Obj {
        u8 pad[0x40];
        virtual void m08(s32) = 0;
    };
    struct Self {
        s32 unk0;
        u8 pad4[0x50];
        s32 unk54;
        u8 pad58[0x14];
        void *unk6C;
        u8 pad70[4];
        s32 unk74;
        s8 unk78;
        s8 unk79;
    };

    struct Str sp44;
    struct Str sp38;
    struct Str sp2C;
    struct Str sp20;
    struct Str sp14;
    struct Str sp8;
    Self *self;
    s32 a1;
    s32 unk0;
    void *child;
    u32 len;

    self = (Self *)arg0;
    a1 = arg1;
    unk0 = self->unk0;
    if (self->unk6C != NULL) {
        if (fn_800E903C(self->unk6C) == 0) {
            fn_800DF6DC(&sp2C, (s32)self->unk6C);
            fn_800E7B80(unk0, &sp2C);
            fn_800C9A60(&sp2C, -1);
        }
        child = fn_800E8BB4(self->unk6C);
        if (child != NULL && *(u32 *)((u8 *)child + 0x6C) != 0) {
            *(s32 *)((u8 *)child + 0x74) = -1;
            fn_800E8BBC(*(void **)((u8 *)child + 0x6C), NULL);
        }
        fn_800E8FAC(self->unk6C, a1);
        fn_800E8BBC(self->unk6C, self);
        if ((u8)arg4 != 0) {
            sp44.cap = 0;
            sp38.cap = 0;
            sp44.size = 0;
            sp44.data = 0;
            sp44.cap = 0;
            sp38.size = 0;
            sp38.data = 0;
            sp38.cap = 0;
            arg4 = fn_800E8F00(self->unk6C);
            if (arg4 != 0) {
                unk0 = self->unk54;
                fn_800D5D04(&sp20, &self->unk54, unk0 - 2, 2);
                fn_800CB90C(&sp14, &sp20, lbl_8027DAB0 + 0xC9);
                fn_800C9758(&sp44, &sp14, 0, -1);
                fn_800C9A60(&sp14, -1);
                fn_800C9A60(&sp20, -1);
                len = strlen((char *)lbl_8027DAB0 + 0xCB);
                if (fn_800C9400(&sp44, 0, sp44.size, &lbl_8027DAB0[0xCB], len) == 0) {
                    len = strlen((char *)lbl_8027DAB0 + 0xCF);
                    fn_800C96F8(&sp44, &lbl_8027DAB0[0xCF], len);
                }
                fn_800D5D04(&sp8, &self->unk54, 5, unk0 - 8);
                fn_800C9758(&sp38, &sp8, 0, -1);
                fn_800C9A60(&sp8, -1);
                len = strlen((char *)lbl_8027DAB0 + 0xD3);
                if (fn_800C9400(&sp38, 0, sp38.size, &lbl_8027DAB0[0xD3], len) == 0) {
                    len = strlen((char *)lbl_8027DAB0 + 0xD8);
                    fn_800C96F8(&sp38, &lbl_8027DAB0[0xD8], len);
                }
                fn_800C99A0(&sp44, &sp38, 0, -1);
                fn_800E574C((void *)arg4, fn_800C93EC(&sp44), lbl_8036B4AC, 0, 1, 0, 0xA);
            }
            fn_800C9A60(&sp38, -1);
            fn_800C9A60(&sp44, -1);
        }
        self->unk74 = 0;
        self->unk78 = arg2;
        self->unk79 = arg3;
        ((Obj *)self)->m08(1);
    }
}
#pragma cplusplus reset

void fn_801CB25C(s32 arg0, s32 arg1) {
    fn_800C9B6C(arg0, arg1 + 0x60);
}

void fn_801CB280(s32 arg0, s32 arg1) {
    fn_800C9B6C(arg0, arg1 + 0x54);
}

void fn_801CB2A4(struct Unit *arg0) {
    if (arg0->unk2E == 0) {
        return;
    }

    if (*(s32*)((char*)arg0 + 0x50) != 0) {
        arg0->unk2E = -1;
        *(s32*)((char*)arg0 + 0x6C) = 0;
        *(s32*)((char*)arg0 + 0x70) = 0;
        return;
    }

    if (*(s32*)((char*)arg0 + 0x6C) != 1) {
        arg0->unk2E = -1;
        return;
    }
    
    *(s32*)((char*)arg0 + 0x74) += 1;
    if (*(s32*)((char*)arg0 + 0x74) > *(s32*)((char*)arg0 + 0x70)) {
        arg0->unk2E = -1;
    }
}

#pragma cplusplus on
#pragma opt_common_subs off
extern "C" void *fn_801CB41C(void *arg0, void *arg1, void *arg2) {
void fn_800DF7A0(void *);
void fn_800C9ABC(void *,void *,void *); void fn_800C8DCC(void *,void *,void *);
u32 strlen(void *); void fn_800C96F8(void *,void *,u32); void fn_800C9A60(void *,s32);
s32 fn_800C9400(void *,s32,u32,void *,u32); u8 *fn_80117CC0(void *,s32);
void fn_800D5D04(void *,void *,s32,s32); void fn_800C9758(void *,void *,s32,s32);
void *fn_800E7F60(void *,void *); void fn_800C8EFC(void *); void fn_800C8D58(void *,void *);
void fn_801CB934(void *,void *,s32,s32);
extern u8 lbl_80298428[],lbl_8027DAB0[];
ParseValue801CB41C p180,p160,p140,p120,p100,pe0,pc0,pa0;
ParseValue801CB41C tmp;
f32 record[8];
String801CB41C str,s48,s3c,s30,s24,s18;
u32 a14,a10,ac,a8;
void *saved;
s32 i;
u8 *self=(u8 *)arg0;
fn_800DF7A0(arg0);
saved=arg1;
*(void **)(self+0x40)=lbl_80298428;
*(u32 *)(self+0x48)=0; *(u32 *)(self+0x4c)=0; *(u32 *)(self+0x50)=0;
*(u32 *)(self+0x54)=0; *(u32 *)(self+0x58)=0; *(u32 *)(self+0x5c)=0; *(u32 *)(self+0x58)=0;
*(u32 *)(self+0x60)=0; *(u32 *)(self+0x64)=0; *(u32 *)(self+0x68)=0; *(u32 *)(self+0x64)=0;
str.b=0;str.a=0;str.c=0;str.b=0;
fn_800C9ABC(&s48,lbl_8027DAB0+0xdd,&a14);
fn_800C8DCC(&p180,arg2,&s48);arg1=&p180;
fn_800C96F8(self+0x54,arg1,strlen(arg1));fn_800C9A60(&s48,-1);
fn_800C9ABC(&s3c,lbl_8027DAB0+0xe5,&a10);
fn_800C8DCC(&p160,arg2,&s3c);arg1=&p160;
fn_800C96F8(self+0x60,arg1,strlen(arg1));fn_800C9A60(&s3c,-1);
if(fn_800C9400(self+0x60,0,*(u32 *)(self+0x60),lbl_8027DAB0+0xc8,strlen(lbl_8027DAB0+0xc8))==0 && (s32)*fn_80117CC0(self+0x54,4)=='_'){
fn_800D5D04(&s30,self+0x54,0,4);fn_800C9758(self+0x60,&s30,0,-1);fn_800C9A60(&s30,-1);
}
fn_800C9ABC(&s24,lbl_8027DAB0+0xec,&ac);
fn_800C8DCC(&p140,arg2,&s24);arg1=&p140;
fn_800C96F8(&str,arg1,strlen(arg1));fn_800C9A60(&s24,-1);
*(void **)(self+0x6c)=fn_800E7F60(saved,&str);
fn_800C9ABC(&s18,lbl_8027DAB0+0xf3,&a8);
fn_800C8DCC(&p120,arg2,&s18);
*(u32 *)(self+0x70)=*(u32 *)&p120;fn_800C9A60(&s18,-1);
fn_800C8EFC(arg2);
for(i=0;i<*(s32 *)(self+0x70);i++){
fn_800C8D58(&pa0,arg2);tmp=pa0;
record[0]=tmp.v[0];record[1]=tmp.v[1];record[2]=tmp.v[2];fn_800C8EFC(arg2);
fn_800C8D58(&pc0,arg2);tmp=pc0;
record[3]=tmp.v[0];record[4]=tmp.v[1];record[5]=tmp.v[2];fn_800C8EFC(arg2);
fn_800C8D58(&pe0,arg2);record[6]=pe0.v[0];fn_800C8EFC(arg2);
fn_800C8D58(&p100,arg2);((u32 *)record)[7]=*(u32 *)&p100;fn_800C8EFC(arg2);
fn_801CB934(self+0x48,*(u8 **)(self+0x50)+(*(u32 *)(self+0x4c)<<5),1,(s32)record);
}
*(s32 *)(self+0x74)=-1;self[0x78]=0;self[0x79]=0;fn_800C9A60(&str,-1);
return self;
}

#pragma use_lmw_stmw on
void fn_801CB934(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    void fn_80232058(void *, void *, ...);
    void fn_8022CF78(void);
    void *fn_800C42D8(s32);
    void fn_801CC030(void *);
    void fn_800C428C(void *);
    extern u8 __files[];
    extern u8 lbl_8027DAB0[];
    u32 n = (u32)arg2;
    void *fill = (void *)arg3;
    if (n == 0) {
        return;
    }
    if (n > 0x07FFFFFFU || *(u32 *)((u8 *)arg0 + 4) > (0x07FFFFFFU - n)) {
        fn_80232058(__files + 0xA0, lbl_8027DAB0 + 0x1A7);
        fn_8022CF78();
    }
    (void)fill;
    (void)arg1;
}

#pragma opt_common_subs on
#pragma cplusplus off

void *fn_801CBFD0(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    void fn_801CC030(void *);

    if (arg0 != NULL) {
        fn_801CC030(arg0);
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            fn_800C428C(M2C_FIELD(arg0, void **, 8));
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801CC030(u32 *arg0) {
    u32 start;
    u32 end;
    s32 ctr;
    start = arg0[2];
    end = start + (arg0[1] << 5);
    ctr = (s32)((end + 0x1F - start) >> 5);
    if (end > start) {
        for (; ctr > 0; ctr--) {
        }
    }
    arg0[1] = 0;
}

#pragma cplusplus on
extern "C" void fn_801CC068(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v6();
}

#pragma global_optimizer off
#pragma peephole off
extern "C" void fn_801CC094(void *arg0) {
    u8 *fn_801CD480(void *, s16, s16);
    void fn_801475FC(void *, s32);
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern f64 lbl_8036B4C0;
    extern u8 lbl_8027DD30[];

    struct Obj {
        virtual void v0() {}
        virtual void v1() {}
        virtual void v2() {}
        virtual void v3() {}
        virtual void v4() {}
        virtual void v5() {}
        virtual void v6() {}
        virtual void v7() {}
        virtual void v8() {}
        virtual void v9() {}
        virtual s16 v10() { return 0; }
        virtual void v11() {}
        virtual s16 v12() { return 0; }
        virtual s16 v13() { return 0; }
        virtual s16 v14() { return 0; }
    };

    Obj *self;
    u32 held;
    u32 pressed;
    s16 saveX;
    s16 saveY;
    s16 saveTop;
    s8 done;
    s8 dir;

    self = (Obj *)arg0;
    {
        u8 skip = 0;
        if ((lbl_80367110 & 0x10) != 0 && (lbl_80367110 & 0x20) == 0) {
            skip = 1;
        }
        if (skip != 0) {
            return;
        }
    }

    {
        u32 *pad = (u32 *)lbl_80367240;
        u32 buttons = pad[1];
        u32 prev = pad[2];

        saveX = *(s16 *)((u8 *)self + 0x48);
        held = pad[3];
        saveY = *(s16 *)((u8 *)self + 0x4A);
        saveTop = *(s16 *)((u8 *)self + 0x46);
        pressed = buttons & (prev ^ buttons);
    }

    if ((held & 0x01000001) != 0) {
        s32 x = saveX - 1;
        *(s16 *)((u8 *)self + 0x48) = x;
        if ((s16)x < 0) {
            if (pressed == held) {
                s32 w = self->v13();
                x = w - 1;
            } else {
                x = *(s16 *)((u8 *)self + 0x48) + 1;
                *(s16 *)((u8 *)self + 0x48) = x;
            }
            *(s16 *)((u8 *)self + 0x48) = x;
        }
        *(s16 *)((u8 *)self + 0x48) = (s16)x;
        done = 0;
        dir = -1;
        while (done == 0) {
            s8 ch = (s8)*fn_801CD480(*(void **)((u8 *)self + 0x3C),
                                      *(s16 *)((u8 *)self + 0x48),
                                      *(s16 *)((u8 *)self + 0x4A));
            switch (ch) {
            case 0xA:
                if (pressed == held) {
                    s32 w = self->v13();
                    *(s16 *)((u8 *)self + 0x48) = (s16)(w - dir - 1);
                } else {
                    dir *= -1;
                }
                break;
            case 9:
                break;
            default:
                done = 1;
                break;
            }
            *(s16 *)((u8 *)self + 0x48) =
                (s16)(*(s16 *)((u8 *)self + 0x48) + (dir & -(done == 0)));
        }
    } else if ((held & 0x02000002) != 0) {
        s32 w = self->v13();
        s16 x = (s16)(*(s16 *)((u8 *)self + 0x48) + 1);
        *(s16 *)((u8 *)self + 0x48) = x;
        if (x >= (s16)w) {
            if (pressed == held) {
                x = 0;
            } else {
                x = (s16)(*(s16 *)((u8 *)self + 0x48) - 1);
                *(s16 *)((u8 *)self + 0x48) = x;
            }
            *(s16 *)((u8 *)self + 0x48) = (s16)x;
        }
        done = 0;
        dir = 1;
        while (done == 0) {
            s8 ch = (s8)*fn_801CD480(*(void **)((u8 *)self + 0x3C),
                                      *(s16 *)((u8 *)self + 0x48),
                                      *(s16 *)((u8 *)self + 0x4A));
            switch (ch) {
            case 0xA:
                if (pressed == held) {
                    *(s16 *)((u8 *)self + 0x48) = (s16)(-dir);
                } else {
                    dir *= -1;
                }
                break;
            case 9:
                break;
            default:
                done = 1;
                break;
            }
            *(s16 *)((u8 *)self + 0x48) =
                (s16)(*(s16 *)((u8 *)self + 0x48) + (dir & -(done == 0)));
        }
    }

    if ((held & 0x08000008) != 0) {
        s32 y = *(s16 *)((u8 *)self + 0x4A);
        if (y == 0) {
            if (held == pressed) {
                s16 h;
                s16 view;
                *(s16 *)((u8 *)self + 0x4A) = (s16)self->v14() - 1;
                h = (s16)self->v14();
                view = (s16)self->v12();
                if (view < h) {
                    h = (s16)self->v14();
                    view = (s16)self->v12();
                    *(s16 *)((u8 *)self + 0x46) = (s16)(h - view);
                } else {
                    *(s16 *)((u8 *)self + 0x46) = 0;
                }
            }
        } else {
            *(s16 *)((u8 *)self + 0x4A) = (s16)(y - 1);
            y = *(s16 *)((u8 *)self + 0x4A);
            if (y > 0) {
                if (y - *(s16 *)((u8 *)self + 0x46) == 0) {
                    *(s16 *)((u8 *)self + 0x46) = (s16)(*(s16 *)((u8 *)self + 0x46) - 1);
                    *(f32 *)((u8 *)self + 0x58) = (f32)(-(s16)self->v10());
                }
            }
        }
    } else if ((held & 0x04000004) != 0) {
        s16 h = (s16)self->v14();
        s16 y = *(s16 *)((u8 *)self + 0x4A);
        if (y == h - 1) {
            if (held == pressed) {
                *(s16 *)((u8 *)self + 0x46) = 0;
                *(s16 *)((u8 *)self + 0x4A) = 0;
            }
        } else {
            *(s16 *)((u8 *)self + 0x4A) = (s16)(y + 1);
            h = (s16)self->v14();
            if (*(s16 *)((u8 *)self + 0x4A) < h - 1) {
                s16 view = (s16)self->v12();
                if (*(s16 *)((u8 *)self + 0x4A) - *(s16 *)((u8 *)self + 0x46) == view - 1) {
                    *(s16 *)((u8 *)self + 0x46) = (s16)(*(s16 *)((u8 *)self + 0x46) + 1);
                    *(f32 *)((u8 *)self + 0x58) = (f32)(s16)self->v10();
                }
            }
        }
    }

    done = 0;
    dir = -1;
    while (done == 0) {
        s8 ch = (s8)*fn_801CD480(*(void **)((u8 *)self + 0x3C),
                                  *(s16 *)((u8 *)self + 0x48),
                                  *(s16 *)((u8 *)self + 0x4A));
        switch (ch) {
        case 0xA:
            dir *= -1;
            break;
        case 9:
            break;
        default:
            done = 1;
            break;
        }
        *(s16 *)((u8 *)self + 0x48) =
            (s16)(*(s16 *)((u8 *)self + 0x48) + (dir & -(done == 0)));
    }

    if (saveX != *(s16 *)((u8 *)self + 0x48) || saveY != *(s16 *)((u8 *)self + 0x4A) ||
        saveTop != *(s16 *)((u8 *)self + 0x46)) {
        fn_801475FC(lbl_8027DD30 + 8, 0x64);
    }
}
#pragma peephole on
#pragma global_optimizer reset

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_801CC5C4(void *arg0, void *arg1) {
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_80161AA8(s16, s16, s16, s16, s32, u8 *);
    extern f32 lbl_8036B4C8;

    struct Obj {
        virtual void v0() {}
        virtual void v1() {}
        virtual void v2() {}
        virtual void v3() {}
        virtual void v4() {}
        virtual void v5() {}
        virtual void v6() {}
        virtual void v7() {}
        virtual void v8() {}
        virtual s16 v9() { return 0; }
        virtual s16 v10() { return 0; }
        virtual s16 v11() { return 0; }
        virtual void v12() {}
        virtual void v13() {}
    };

    u8 color[4];
    s16 w;
    s16 h;
    s32 x0;
    void *arg;
    void *self;
    s16 y0;

    self = arg0;
    arg = arg1;
    ((Obj *)self)->v3();
    x0 = *(s16 *)((u8 *)self + 0x48);
    y0 = (s16)(*(s16 *)((u8 *)self + 0x4A) - ((Obj *)self)->v11());
    w = ((Obj *)self)->v9();
    h = ((Obj *)self)->v10();
    {
        s16 t3;
        s16 t5;
        s16 old4c;

        t3 = (s16)(x0 * w);
        t5 = (s16)(y0 * h);
        if ((old4c = *(s16 *)((u8 *)self + 0x4C)) == -1 && *(s16 *)((u8 *)self + 0x4E) == -1) {
            *(s16 *)((u8 *)self + 0x4C) = t3;
            *(s16 *)((u8 *)self + 0x4E) = t5;
        } else {
            *(s16 *)((u8 *)self + 0x4C) = (old4c + t3 + 1) >> 1;
            *(s16 *)((u8 *)self + 0x4E) = (*(s16 *)((u8 *)self + 0x4E) + t5 + 1) >> 1;
        }
    }
    x0 = *(s16 *)((u8 *)self + 0x4C);
    {
        s16 py;
        void *ptr;
        struct { unsigned b : 8; } eq;

        py = *(s16 *)((u8 *)self + 0x4E);
        if (*(u32 *)((u8 *)arg + 0x34) != 0) {
            ptr = (*(void ***)((u8 *)arg + 0x38))[2];
        } else {
            ptr = 0;
        }
        eq.b = (ptr == self);
        if (eq.b) {
            s32 x1;
            s32 y1;
            s32 x2;
            s32 y2;
            u8 alpha;

            fn_8000A258();
            fn_80009C0C(lbl_8036B4C8);
            fn_8000A248();
            color[0] = 0x9C;
            x1 = (s16)(x0 + ((w - 0x30) >> 1));
            y1 = (s16)(py + ((h - 0x30) >> 1));
            color[1] = 0x2F;
            x2 = (s16)(x1 + 0x30);
            alpha = 0x80;
            y2 = (s16)(y1 + 0x30);
            color[2] = 0x12;
            if (eq.b) {
                alpha = 0xFF;
            }
            color[3] = alpha;
            fn_80161AA8((s16)x1, (s16)(y1 - 1), (s16)x2, (s16)(y1 - 1), *(s32 *)((u8 *)self + 0x34), color);
            fn_80161AA8((s16)x1, (s16)y2, (s16)x2, (s16)y2, *(s32 *)((u8 *)self + 0x34), color);
            fn_80161AA8((s16)(x1 - 1), (s16)y1, (s16)(x1 - 1), (s16)y2, *(s32 *)((u8 *)self + 0x34), color);
            fn_80161AA8((s16)x2, (s16)y1, (s16)x2, (s16)y2, *(s32 *)((u8 *)self + 0x34), color);
            fn_80161AA8((s16)x1, (s16)y1, (s16)x2, (s16)y1, *(s32 *)((u8 *)self + 0x34), color);
            fn_80161AA8((s16)x1, (s16)(y2 - 1), (s16)x2, (s16)(y2 - 1), *(s32 *)((u8 *)self + 0x34), color);
            fn_80161AA8((s16)x1, (s16)y1, (s16)x1, (s16)y2, *(s32 *)((u8 *)self + 0x34), color);
            fn_80161AA8((s16)(x2 - 1), (s16)y1, (s16)(x2 - 1), (s16)y2, *(s32 *)((u8 *)self + 0x34), color);
        }
    }
}

#pragma global_optimizer off
#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_801CC844(void *arg0, void *arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5(void *) = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual s16 v11() = 0;
        virtual s16 v12() = 0;
        virtual s16 v13() = 0;
        virtual s16 v14() = 0;
        virtual s16 v15() = 0;
        virtual s16 v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        u8 pad4[0xE];
        s16 a12, a14, a16, a18;
        u8 pad1A[0x34 - 0x1A];
        u32 unk34;
        u8 pad38[0x3C - 0x38];
        void *unk3C;
        u8 pad40[0x48 - 0x40];
        s16 unk48, unk4A;
        s16 rect[4];
        f32 unk58;
        u8 pad5C[0x68 - 0x5C];
        u8 unk68;
        u8 pad69[0x90 - 0x69];
        u8 unk90;
    };
    struct Sub {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11(s32) = 0;
    };
    void fn_8013F748(void *, s16 *, s16 *);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80009B98(void);
    void fn_8013F920(void *);
    void fn_80009BC0(void (*)(void *), s16 *);
    void fn_8000A174(s32, u16);
    s32 fn_800102BC(s32, f32);
    s32 fn_8001059C(u8 *, s32, f32);
    s32 fn_80010B78(u8 *, s32, f32);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, f32, f32);
    u8 *fn_801CD480(void *, s16, s16);
    extern f32 lbl_8036B4CC;
    extern f32 lbl_8036B4D0;
    extern f32 lbl_8036B4D4;
    extern f32 lbl_8036B4D8;
    extern f32 lbl_8036B4DC;
    extern f32 lbl_80367098[];

    Obj *self;
    void *arg;
    s16 *rect;
    s16 half;
    s16 scroll;
    s16 sign;
    s16 row;
    s16 endrow;
    s16 col;
    s16 ybase;
    u8 same;
    u8 sel;
    f32 scale;
    f32 dx;
    f32 dy;
    u8 *cell;
    s16 x;
    void *ptr;

    self = (Obj *)arg0;
    arg = arg1;
    self->v19();
    self->v5(arg);
    rect = self->rect;
    {
        s16 h = (s16)(self->a18 - self->a14);
        s16 w = (s16)(self->a16 - self->a12);
        rect[0] = 0;
        rect[1] = 0;
        rect[2] = w;
        rect[3] = h;
    }
    fn_8013F748(self, rect, rect);
    rect = self->rect + 2;
    fn_8013F748(self, rect, rect);
    fn_8000A258();
    fn_80009BC0(fn_8013F920, self->rect);
    fn_8000A174(0, (u16)(self->unk34 | 3));
    fn_8000A248();

    half = (s16)((self->v12() - fn_800102BC(-1, lbl_8036B4CC)) >> 1);
    scroll = (s16)(s32)self->unk58;
    {
        f32 zero = lbl_8036B4D0;
        f32 fval = self->unk58;
        if (fval < zero) {
            f32 value = (f32)self->v12() * lbl_8036B4D4 + self->unk58;
            self->unk58 = value;
            if (value >= -lbl_80367098[0]) {
                self->unk58 = zero;
            }
        } else if (fval > zero) {
            f32 value = self->unk58 - (f32)self->v12() * lbl_8036B4D4;
            self->unk58 = value;
            if (value <= lbl_80367098[0]) {
                self->unk58 = zero;
            }
        }
    }

    if (scroll < 0) {
        sign = -1;
    } else {
        sign = (s16)(scroll > 0);
    }

    if (*(u32 *)((u8 *)arg + 0x34) != 0) {
        ptr = (*(void ***)((u8 *)arg + 0x38))[2];
    } else {
        ptr = 0;
    }
    same = (ptr == self);
    row = (s16)((-sign & ~sign) >> 31);
    if (sign < 0) {
        endrow = (s16)(self->v14() + 1);
    } else {
        endrow = (s16)self->v14();
    }

    for (; row < endrow; row++) {
        if ((s16)(row + self->v13()) >= 0) {
            if (self->v16() >= (s16)(row + self->v13())) {
                ybase = (s16)(half + (row * self->v12() + scroll));
                for (col = 0; col < self->v15(); col++) {
                    sel = 0;
                    if (same != 0 && col == self->unk48 &&
                        self->unk4A == (s16)(row + self->v13())) {
                        sel = 1;
                    }
                    if (sel != 0) {
                        scale = lbl_8036B4D8;
                    } else {
                        scale = lbl_8036B4CC;
                    }
                    cell = fn_801CD480(self->unk3C, col, (s16)(row + self->v13()));
                    if (*cell != 9) {
                        x = (s16)(((self->v11() - fn_8001059C(cell, -1, lbl_8036B4CC)) >> 1) +
                                  (col * self->v11()));
                        dx = lbl_8036B4D0;
                        dy = dx;
                        if (sel != 0) {
                            dx = lbl_8036B4DC *
                                 (f32)(fn_80010B78(cell, -1, lbl_8036B4CC) -
                                       fn_80010B78(cell, -1, scale));
                            dy = lbl_8036B4DC *
                                 (f32)(fn_800102BC(-1, lbl_8036B4CC) -
                                       fn_800102BC(-1, scale));
                        }
                        fn_8001003C((s32)((f32)x + dx), (s32)((f32)ybase + dy), 1, 0, 0,
                                    cell, scale, lbl_8036B4D0);
                    }
                }
            }
        }
    }

    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
    self->unk68 = (u8)(self->v13() > 0);
    {
        s16 diff = (s16)(self->v16() - self->v14());
        self->unk90 = (u8)(self->v13() < diff);
    }
    ((Sub *)((u8 *)self + 0x5C))->v11(0x10);
    ((Sub *)((u8 *)self + 0x84))->v11(0x10);
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset
#pragma global_optimizer reset

#pragma cplusplus reset

#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_801CCE7C(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v2();
}
#pragma cplusplus reset

void fn_801CCEA8(u8 *arg0) {
    u8 *fn_801CD480(void *, s16, s16);
    s16 x;
    s16 y;
    x = *(s16 *)(arg0 + 0x48);
    y = *(s16 *)(arg0 + 0x4a);
    fn_801CD480(*(void **)(arg0 + 0x3c), x, y);
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801CCED4(s32 *arg0, void *arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual s32 v11() = 0;
        virtual s32 v12() = 0;
        virtual s32 v13() = 0;
    };
    s32 *fn_8013F748(void *, s32 *, s16 *);
    s16 sp8;
    s16 spA;
    s32 spC;
    Obj *self;
    s16 x;
    s16 y;
    s32 w;
    s32 h;

    self = (Obj *)arg1;
    x = *(s16 *)((u8 *)self + 0x48);
    y = (s16)(*(s16 *)((u8 *)self + 0x4A) - self->v13());
    w = self->v11();
    h = self->v12();
    spA = (s16)(y * h);
    sp8 = (s16)(x * w);
    *arg0 = *fn_8013F748(self, &spC, &sp8);
}
#pragma cplusplus reset

void *fn_801CCF78(void) {
    extern u16 lbl_8027DD30[];
    return &lbl_8027DD30[0x11];
}

void fn_801CCF88(void *arg0) {
    s16 fn_801CD508(s32);
    s16 fn_801CD548(s32);
    extern s16 lbl_80366EA0;
    extern f32 lbl_8036B4E0;
    s16 sp8;
    s16 *var_r5;
    s16 temp_r0;
    s16 temp_r3;
    s16 temp_r3_3;
    s32 temp_r3_2;
    s32 temp_r4;

    sp8 = fn_801CD548(M2C_FIELD(arg0, s32 *, 0x3C));
    temp_r3 = fn_801CD508(M2C_FIELD(arg0, s32 *, 0x3C));
    var_r5 = &lbl_80366EA0;
    M2C_FIELD(arg0, s16 *, 0x40) = sp8;
    if (sp8 < (s16) lbl_80366EA0) {
        var_r5 = &sp8;
    }
    M2C_FIELD(arg0, s16 *, 0x42) = (s16) *var_r5;
    M2C_FIELD(arg0, s16 *, 0x44) = temp_r3;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x44) * M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x2C)(arg0);
    temp_r0 = temp_r4 + 0x20;
    temp_r3_2 = M2C_FIELD(arg0, s16 *, 0x42) * M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, s32), 0x30)(arg0, temp_r4);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) (M2C_FIELD(arg0, s16 *, 0xA) + temp_r0);
    temp_r3_3 = temp_r3_2 + 0x20;
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0xC) + temp_r3_3);
    M2C_FIELD(arg0, s16 *, 0x12) = 0x10;
    M2C_FIELD(arg0, s16 *, 0x14) = 0x10;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) (temp_r0 - 0x10);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) (temp_r3_3 - 0x10);
    M2C_FIELD(arg0, s16 *, 0x6A) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)) >> 1);
    M2C_FIELD(arg0, s16 *, 0x6C) = 0;
    M2C_FIELD(arg0, s16 *, 0x6E) = 0;
    M2C_FIELD(arg0, s16 *, 0x92) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)) >> 1);
    M2C_FIELD(arg0, s16 *, 0x94) = (s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14));
    M2C_FIELD(arg0, s16 *, 0x96) = 0;
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) lbl_8036B4E0;
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) lbl_8036B4E0;
}

#pragma cplusplus on
extern "C" void fn_801CD2AC(void *arg0) {
    void fn_80158DD8(s32, s32, s16, s16, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80158DD8(0, 0,
        (s16)(*(s16 *)((u8 *)arg0 + 0xE) - *(s16 *)((u8 *)arg0 + 0xA)),
        (s16)(*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0xC)),
        0xFF, 0x10);
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void *fn_801CD318(void *arg0, s16 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    struct Owner {
        void *vtbl;
        u8 pad4[0x58];
        void *sub5c;
        u8 pad60[0x24];
        void *sub84;
    };
    void fn_800C428C(void *);
    extern u8 lbl_80298448[];
    extern u8 lbl_80295478[];
    extern u8 lbl_80292230[];
    extern u8 lbl_8028FDB0[];
    Owner *self;

    self = (Owner *)arg0;
    if (arg0 != NULL) {
        self->vtbl = lbl_80298448;
        if (&self->sub84 != NULL) {
            self->sub84 = lbl_80295478;
            ((Obj *)&self->sub84)->v2();
        }
        if (&self->sub5c != NULL) {
            self->sub5c = lbl_80295478;
            ((Obj *)&self->sub5c)->v2();
        }
        if (arg0 != NULL) {
            self->vtbl = lbl_80292230;
            if (arg0 != NULL) {
                self->vtbl = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}
#pragma cplusplus reset
s32 fn_801CD3E4(void) {
    return 0x24;
}

s32 fn_801CD3EC(void) {
    return 0x24;
}

s16 fn_801CD3F4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x46);
}

s16 fn_801CD3FC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x42);
}

s16 fn_801CD404(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x44);
}

s16 fn_801CD40C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x40);
}

void *fn_801CD414(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80298498[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80298498;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma global_optimizer off
s32 fn_801CD480(s32 arg0, s32 arg1, s32 arg2)
{
    extern u8 *lbl_802984C0[];
    extern char lbl_8027DD60[];

    s32 count;
    u8 **table;
    s16 width;
    u8 *result;

    count = 0;
    table = (u8 **)count;

    if (arg0 == 0) {
        goto init_table;
    }
    goto search;

init_table:
    table = lbl_802984C0;
    goto search;

loop:
    table += 1;
    count += 1;
search:
    if ((s32)**table != 0xA) {
        goto loop;
    }

    width = (s16)(count + 1);
    table = (u8 **)0;

    if (arg0 == 0) {
        goto init_lookup;
    }
    goto lookup;

init_lookup:
    table = lbl_802984C0;

lookup:
    result = table[(s16)arg1 + width * (s16)arg2];

    if (result != 0) {
        return (s32)result;
    }

    return (s32)(lbl_8027DD60 + 0x16);
}
#pragma global_optimizer on
s32 fn_801CD508(s32 arg0) {
    extern u8 *lbl_802984C0[];
    s32 count;
    u8 **table;

    count = 0;
    table = (u8 **)count;

    if (arg0 == 0) {
        goto init_table;
    }
    goto search;

init_table:
    table = lbl_802984C0;
    goto search;

search:
    while ((s32)**table != 0xA) {
        table += 1;
        count += 1;
    }
    return count;
}

s32 fn_801CD548(s32 arg0) {
    extern u8 *lbl_802984C0[];
    s32 count;
    u8 **table;
    s32 n;
    s16 stride;
    u8 **cur;
    s32 step;

    count = 0;
    table = (u8 **)count;
    n = 0;

    if (arg0 == 0) {
        goto init_table;
    }
    goto search;

init_table:
    table = lbl_802984C0;
    goto search;

search:
    while ((s32)**table != 0xA) {
        table += 1;
        count += 1;
    }

    stride = (s16)(count + 1);
    cur = (u8 **)0;

    if (arg0 == 0) {
        goto init_lookup;
    }
    goto lookup;

init_lookup:
    cur = lbl_802984C0;
    goto lookup;

lookup:
    step = stride << 2;
    goto check;
loop:
    cur = (u8 **)((u8 *)cur + step);
    n += 1;
check:
    if (*cur != NULL) {
        goto loop;
    }
    return n;
}

s32 fn_801CD5CC(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    
    if (arg1 < 0 || arg1 >= 0x90) {
        return 0;
    }
    
    if ((arg0 & 0xF0) == 0x30) {
        return 4;
    }
    
    if ((arg0 & 0xF0) == 0x40) {
        return 5;
    }
    
    if ((arg0 & 0xF0) == 0x10) {
        return 2;
    }
    
    if ((arg0 & 0xF0) == 0x50) {
        return 6;
    }
    
    if ((arg0 & 0xF0) == 0x20) {
        return 3;
    }
    
    if (arg0 == 0x98) {
        return 7;
    }
    
    if (arg0 == 0xA0) {
        return 8;
    }
    
    if ((arg0 & 0xF0) == 0x60 || (arg0 & 0xF0) == 0x70) {
        return 9;
    }
    
    return 1;
}

void fn_801CD764(void *arg0) {
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_8036B4E8;
    s8 spB;
    s8 spA;
    s8 sp9;
    s8 sp8;
    s16 temp_r0;
    s16 temp_r0_2;
    s16 temp_r0_3;
    s16 temp_r29;
    s16 temp_r30;
    s16 temp_r4;
    s16 temp_r4_2;
    s16 temp_r6;
    s16 temp_r8;
    s16 var_r3;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x14)();
    var_r3 = M2C_FIELD(arg0, s16 *, 0x70) * 0x16;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x78) != 0) {
        var_r3 += 0x18;
    }
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x72);
    if ((temp_r4 < 0) || ((s16) M2C_FIELD(arg0, s16 *, 0x74) < 0)) {
        M2C_FIELD(arg0, s16 *, 0x72) = var_r3;
        M2C_FIELD(arg0, s16 *, 0x74) = 0;
    } else {
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) ((s32) (temp_r4 + (var_r3 + 1)) >> 1);
        M2C_FIELD(arg0, s16 *, 0x74) = (s16) ((s32) (M2C_FIELD(arg0, s16 *, 0x74) + 1) >> 1);
    }
    temp_r30 = M2C_FIELD(arg0, s16 *, 0x72);
    temp_r29 = M2C_FIELD(arg0, s16 *, 0x74);
    fn_8000A258();
    fn_80009C0C(lbl_8036B4E8);
    fn_8000A248();
    sp8 = 0x9C;
    temp_r4_2 = temp_r30 + 0x16;
    temp_r8 = temp_r29 + 0x20;
    temp_r6 = temp_r29 - 1;
    sp9 = 0x2F;
    spA = 0x12;
    spB = 0xFF;
    fn_80161AA8(temp_r30, temp_r6, temp_r4_2, temp_r6, M2C_FIELD(arg0, s32 *, 0x34), &sp8);
    fn_80161AA8(temp_r30, temp_r8, temp_r4_2, temp_r8, M2C_FIELD(arg0, s32 *, 0x34), &sp8);
    temp_r0 = temp_r30 - 1;
    fn_80161AA8(temp_r0, temp_r29, temp_r0, temp_r8, M2C_FIELD(arg0, s32 *, 0x34), &sp8);
    fn_80161AA8(temp_r4_2, temp_r29, temp_r4_2, temp_r8, M2C_FIELD(arg0, s32 *, 0x34), &sp8);
    fn_80161AA8(temp_r30, temp_r29, temp_r4_2, temp_r29, M2C_FIELD(arg0, s32 *, 0x34), &sp8);
    temp_r0_2 = temp_r8 - 1;
    fn_80161AA8(temp_r30, temp_r0_2, temp_r4_2, temp_r0_2, M2C_FIELD(arg0, s32 *, 0x34), &sp8);
    fn_80161AA8(temp_r30, temp_r29, temp_r30, temp_r8, M2C_FIELD(arg0, s32 *, 0x34), &sp8);
    temp_r0_3 = temp_r4_2 - 1;
    fn_80161AA8(temp_r0_3, temp_r29, temp_r0_3, temp_r8, M2C_FIELD(arg0, s32 *, 0x34), &sp8);
}

extern struct efUnit* gEfUnitArray;
s32 fn_801CD940(struct efUnit* unit)
{
    if (unit == NULL)
        return 0;
        
    if (unit->field_0x28 == 0)
        return 0;
        
    if (unit->unit != NULL)
    {
        if (unit->field_0x2C > 0)
            return 1;
    }
    
    return 0;
}

void *fn_801CDACC(void *a, u8 *b) {
    u8 *self;
    u8 c;
    u8 *p;
    u8 is_double;
    u8 d;
    u8 t0;
    u8 t1;
    s32 n;

    self = a;
    c = b[0];
    n = *(s16 *)(self + 0x70);
    p = self + n * 4 + 0x3c;
    *(u32 *)p = 0;

    if ((c >= 0x81U && c <= 0x9FU) || (c >= 0xE0U && c <= 0xFCU)) {
        d = b[1];
        if ((d >= 0x40U && d <= 0x7EU) || (d >= 0x80U && d <= 0xFCU)) {
            is_double = 1;
        } else {
            goto not_double;
        }
    } else {
    not_double:
        is_double = 0;
    }

    if (is_double != 0) {
        t0 = b[0];
        t1 = b[1];
        p[0] = t0;
        p[1] = t1;
    } else {
        p[0] = b[0];
    }

    return self + *(s16 *)(self + 0x70) * 4 + 0x3c;
}

void *fn_801CDB74(void *arg0) {
    s32 i;
    u32 *p;
    s16 count;
    s32 n;
    s32 chunks;

    i = 0;
    p = (u32 *)((u8 *)arg0 + 0x3C);
    while (*p != 0) {
        i++;
        p++;
    }
    count = *(s16 *)((u8 *)arg0 + 0x70);
    i = (s16)i;
    if ((u32)i == (u32)count) {
        return (u8 *)arg0 + ((s32)count * 4) + 0x3C;
    }
    p = (u32 *)((u8 *)arg0 + ((s32)count * 4) + 0x3C);
    n = i - count;
    if ((u32)count < (u32)i) {
        chunks = (u32)n >> 3;
        if (chunks != 0) {
            do {
                p[0] = p[1];
                p[1] = p[2];
                p[2] = p[3];
                p[3] = p[4];
                p[4] = p[5];
                p[5] = p[6];
                p[6] = p[7];
                p[7] = p[8];
                p += 8;
            } while (--chunks);
        }
        n &= 7;
        if (n != 0) {
            do {
                p[0] = p[1];
                p++;
            } while (--n);
        }
    }
    return (u8 *)arg0 + ((s32)*(s16 *)((u8 *)arg0 + 0x70) * 4) + 0x3C;
}

s16 fn_801CDC54(void *self, u8 flag) {
    extern s16 lbl_80366EAA;
    extern u8 lbl_8027DE18[];
    void fn_801475FC(void *, s32);
    s16 sp8;
    s16 *cap;
    s32 i;
    u32 *p;
    s16 old;
    s16 lim;
    s32 v;

    for (i = 0, p = (u32 *)((u8 *)self + 0x3c); *p != 0; i++, p++) {
    }
    sp8 = (s16)i;
    cap = &sp8;
    if (lbl_80366EAA < (s16)i) {
        cap = &lbl_80366EAA;
    }
    old = *(s16 *)((u8 *)self + 0x70);
    lim = *cap;
    v = old + 1;
    *(s16 *)((u8 *)self + 0x70) = (s16)v;
    if ((u32)(s16)v > (u32)lim) {
        *(s16 *)((u8 *)self + 0x70) = lim & ~(((-(s32)flag) | (s32)flag) >> 31);
    }
    if (old != *(s16 *)((u8 *)self + 0x70)) {
        fn_801475FC(lbl_8027DE18 + 8, 0x64);
    }
    return *(s16 *)((u8 *)self + 0x70);
}

s16 fn_801CDD10(void *self, u8 flag) {
    extern s16 lbl_80366EA8;
    extern u8 lbl_8027DE18[];
    void fn_801475FC(void *, s32);
    s16 sp8;
    s16 *cap;
    s32 i;
    u32 *p;
    s16 old;
    s16 lim;
    s16 v;

    for (i = 0, p = (u32 *)((u8 *)self + 0x3c); *p != 0; i++, p++) {
    }
    sp8 = i;
    cap = &sp8;
    if (lbl_80366EA8 < sp8) {
        cap = &lbl_80366EA8;
    }
    old = *(s16 *)((u8 *)self + 0x70);
    lim = *cap;
    v = old - 1;
    *(s16 *)((u8 *)self + 0x70) = v;
    if ((s16)v < 0) {
        *(s16 *)((u8 *)self + 0x70) = lim & (((-(s32)flag) | (s32)flag) >> 31);
    }
    if (old != *(s16 *)((u8 *)self + 0x70)) {
        fn_801475FC(lbl_8027DE18 + 8, 0x64);
    }
    return *(s16 *)((u8 *)self + 0x70);
}

void fn_801CDDC8(void *arg0, char *arg1) {
    s32 strlen(char *);
    void fn_802343E0(char *, char *);

    char *var_r31;

    var_r31 = (char *)arg0 + 0x3C;
    *arg1 = 0;
    while (*(u32 *)var_r31 != 0) {
        strlen(var_r31);
        fn_802343E0(arg1, var_r31);
        var_r31 += 4;
    }
}

s32 fn_801CDE2C(struct efUnit* arg0) {
    struct Unit* unit;
    
    if (arg0 == 0) {
        return 0;
    }
    
    unit = arg0->unit;
    if (unit == 0) {
        return 0;
    }
    
    if ((*(u32*)unit & 0x400) != 0) {
        return 1;
    }
    
    if ((*(u32*)unit & 0x800) != 0) {
        return 1;
    }
    
    // The rest is the same as before
    if ((*(u32*)unit & 0x200) == 0) {
        return 0;
    }
    
    return (*(u32*)unit >> 8) >= lbl_80331D00[(*(u32*)unit >> 8) >> 1];
}

void *fn_801CDF5C(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80298678[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80298678;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801CDFC8(void *arg0)
{
    s16 *p;
    s32 pad;
    s16 ten;
    s16 eight;
    s16 c;
    s16 t10;
    s16 a;
    s16 e;
    s16 diff_v;
    s16 diff_h;
    s16 tmp;
    s32 half;

    p = (s16 *)arg0;
    pad = 0x128;
    if (*(s32 *)((u8 *)arg0 + 0x78) != 0) {
        pad = 0x140;
    }
    ten = 0x10;
    eight = 8;
    p[0xE / 2] = p[0xA / 2] + pad;

    c = p[0xC / 2];
    t10 = p[0x10 / 2];
    a = p[0xA / 2];
    e = p[0xE / 2];
    diff_v = t10 - c;
    p[0x12 / 2] = ten;
    diff_h = e - a;
    tmp = diff_v - 8;
    p[0x14 / 2] = eight;
    p[0x16 / 2] = diff_h - 0x10;
    p[0x18 / 2] = tmp;

    a = p[0xA / 2];
    e = p[0xE / 2];
    c = p[0xC / 2];
    diff_h = e - a;
    half = (0x200 - diff_h) >> 1;
    p[0xE / 2] = (s16)half + diff_h;
    p[0xA / 2] = half;
    p[0x10 / 2] = c + (s16)(p[0x10 / 2] - p[0xC / 2]);
}

void *fn_801CE070(s32 a,char*b,s32 c){void *fn_8000CAA0(void*,s32);void fn_801403F0(void);void fn_800C96F8(void*,char*,s32);extern u8 lbl_802986A8[];void*p=fn_8000CAA0(lbl_802986A8,c);if(p){fn_801403F0();*(s32*)((char*)p+0x40)=0;*(s32*)((char*)p+0x44)=0;*(s32*)((char*)p+0x4c)=0;*(s32*)((char*)p+0x50)=0;*(s32*)((char*)p+0x54)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x5c)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x48)=0;}*(s32*)((char*)p+0x4c)=0;*(s32*)((char*)p+0x50)=a;fn_800C96F8((char*)p+0x54,b,strlen(b));return p;}

void *fn_801CE11C(s32 arg0,char *arg1,s32 arg2,s32 arg3) {
void *fn_8000CAA0(void*,s32); void fn_801403F0(void); void fn_800C96F8(void*,char*,s32); extern u8 lbl_802986A8[];
void *p=fn_8000CAA0(lbl_802986A8,arg3);
if(p){fn_801403F0();*(s32*)((char*)p+0x40)=0;*(s32*)((char*)p+0x44)=0;*(s32*)((char*)p+0x4c)=0;*(s32*)((char*)p+0x50)=0;*(s32*)((char*)p+0x54)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x5c)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x48)=0;}
*(s32*)((char*)p+0x4c)=arg2;*(s32*)((char*)p+0x50)=arg0;fn_800C96F8((char*)p+0x54,arg1,strlen(arg1));return p;
}

void fn_801CE2DC(void *arg0) {
    void *fn_8013FF94(void *, s32, s32);
    void fn_80140210(void *, void *, s32);
    void *self;

    self = arg0;
    fn_80140210(self, fn_8013FF94(self, 3, 0), 0);
    fn_80140210(self, fn_8013FF94(self, 2, 0), 0);
    fn_80140210(self, fn_8013FF94(self, 1, 0), 0);
    fn_80140210(self, fn_8013FF94(self, 0, 0), 1);
}

#pragma cplusplus on
#pragma opt_common_subs off
extern "C" void fn_801CE380(void *arg0) {
void *fn_8013FF94(void *,s32,s32); u32 fn_801CCEA8(void *); void fn_8013FDA0(void *);
u8 fn_80166D8C(void *); void fn_80167190(void *,s32,f32,f32); void fn_8016758C(void *,void *,s32,f32,f32); void fn_801673D0(void *);
void fn_801CDACC(void *,u32); void fn_801CDC54(void *,s32); void fn_801CDD10(void *,s32);
void fn_801475FC(void *,s32); void fn_8000C188(void *);
void fn_8013F748(void *,void *,void *); s16 *fn_8013F6B8(void *,void *,void *);
extern u8 lbl_80330D68[],lbl_8027DE48[]; extern void *lbl_80367240; extern const s32 lbl_80368DC4;
class Pair { public: s16 x,y; Pair() {} Pair(const Pair &o) { *(u32 *)this=*(u32 *)&o; } Pair &operator=(const Pair &o) { *(u32 *)this=*(u32 *)&o; return *this; } };
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual s32 v15(); virtual Pair v16(); };
u32 pos1,pos2,pos3,pos4;
s32 btn;
void *a,*b,*c;
u32 unit;
s32 t;
s16 *v;
a=fn_8013FF94(arg0,0,0);
b=fn_8013FF94(arg0,1,0);
c=fn_8013FF94(arg0,2,0);
unit=fn_801CCEA8(c);
fn_8013FDA0(arg0);
if(unit!=fn_801CCEA8(c)) {
unit=fn_801CCEA8(c);
if(fn_80166D8C(lbl_80330D68)) {
*(Pair *)&pos1=((Obj *)c)->v16();
fn_80167190(lbl_80330D68,((Obj *)c)->v15(),(f32)*(s16 *)&pos1,(f32)*((s16 *)&pos1+1));
}
}
t=M2C_FIELD(lbl_80367240,s32 *,4);
btn=t&(M2C_FIELD(lbl_80367240,s32 *,8)^t);
if((btn&0x100)&&!fn_80166D8C(lbl_80330D68)) {
fn_801CDACC(b,unit);fn_801CDC54(b,0);fn_801475FC(lbl_8027DE48+0x1e,100);
} else if((btn&0x10000040)&&!fn_80166D8C(lbl_80330D68)) {
fn_801CDD10(b,0);
} else if((btn&0x20000020)&&!fn_80166D8C(lbl_80330D68)) {
fn_801CDC54(b,0);
} else if((btn&0x1000)&&!fn_80166D8C(lbl_80330D68)) {
M2C_FIELD(a,s16 *,0x3c)=3;
pos2=M2C_FIELD(c,u32 *,0x4c);
fn_8013F748(c,&pos2,&pos2);
v=fn_8013F6B8(a,&pos2,&pos2);
M2C_FIELD(a,s16 *,0x3e)=v[0];M2C_FIELD(a,s16 *,0x40)=v[1];
fn_8000C188(arg0);fn_801475FC(lbl_8027DE48+0x1e,100);
} else if((btn&0x800)&&!fn_80166D8C(lbl_80330D68)) {
*(Pair *)&pos3=((Obj *)c)->v16();
fn_8016758C(lbl_80330D68,arg0,((Obj *)c)->v15(),(f32)*(s16 *)&pos3,(f32)*((s16 *)&pos3+1));
*(s32 *)lbl_80330D68|=lbl_80368DC4;
} else if((btn&0xa00)&&fn_80166D8C(lbl_80330D68)) {
fn_801673D0(lbl_80330D68);
} else if((btn&0x200)&&!fn_80166D8C(lbl_80330D68)) {
pos4=M2C_FIELD(c,u32 *,0x4c);
fn_8013F748(c,&pos4,&pos4);
v=fn_8013F6B8(a,&pos4,&pos4);
M2C_FIELD(a,s16 *,0x3e)=v[0];M2C_FIELD(a,s16 *,0x40)=v[1];
fn_8000C188(arg0);fn_801475FC(lbl_8027DE48+0x2e,100);
}
}
#pragma opt_common_subs on
#pragma cplusplus off

void fn_801CE744(s32 arg0) {
    void *fn_8013FF94(s32, s32, s32);
    void *fn_8013F6B8(void *, s32 *, s32 *);
    void fn_8013F748(void *, s32 *, s32 *);
    void fn_8013FF00(s32, void *);
    void *base;
    void *obj;
    s32 tmp;

    base = fn_8013FF94(arg0, 0, 0);
    obj = fn_8013FF94(arg0, 2, 0);
    tmp = *(s32 *)((u8 *)base + 0x3E);
    fn_8013F748(base, &tmp, &tmp);
    base = obj;
    obj = fn_8013F6B8(base, &tmp, &tmp);
    *(s16 *)((u8 *)base + 0x4C) = *(s16 *)obj;
    *(s16 *)((u8 *)base + 0x4E) = *(s16 *)((u8 *)obj + 2);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 2, 0));
}

#pragma cplusplus on
extern "C" void fn_801CE7F4(void *arg0) {
void *fn_8013FF94(void *,s32,s32);
s16 fn_801CF614(void *);
void fn_8013FF00(void *,void *);
void fn_801400F4(void *,void *);
void fn_80140210(void *,void *,s32);
void fn_80140234(void *,void *,s32);
u8 fn_80166D8C(void *);
void fn_80167190(void *,s32,f32,f32);
void fn_8016758C(void *,void *,s32,f32,f32);
void fn_801673D0(void *);
void fn_801CDB74(void *);
void fn_801CDDC8(void *,s32);
void fn_801CDE2C(void *,s32);
s32 fn_800C93EC(void *);
void fn_801475FC(void *,s32);
void fn_8000C188(void *);
void fn_8000C070(void *,s32);
extern u8 lbl_80330D68[],lbl_8027DE48[],lbl_802EF4C8[];
extern u32 lbl_80367110;
extern void *lbl_80367240;
extern const s32 lbl_80368DC4;
class Pair { public: s16 x,y; Pair() {} Pair(const Pair &o) { *(u32 *)this=*(u32 *)&o; } Pair &operator=(const Pair &o) { *(u32 *)this=*(u32 *)&o; return *this; } };
struct Obj {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
 virtual void v4(); virtual void v5(); virtual void v6();
 virtual void v7(void *);
 virtual s32 v8(); virtual Pair v9();
};
u32 pos1,pos3;
s32 btn,t;
u8 gate;
u32 flags;
u16 saved;
void *a,*b,*c;
s32 idx;
s32 addr;
a=fn_8013FF94(arg0,0,0);
b=fn_8013FF94(arg0,1,0);
c=fn_8013FF94(arg0,2,0);
saved=*(u16 *)((u8 *)a+0x3c);
((Obj *)a)->v7(arg0);
((Obj *)b)->v7(arg0);
if((s16)saved!=*(s16 *)((u8 *)a+0x3c)) {
 if(fn_80166D8C(lbl_80330D68)) {
  *(Pair *)&pos1=((Obj *)a)->v9();
  fn_80167190(lbl_80330D68,((Obj *)a)->v8(),(f32)*(s16 *)&pos1,(f32)*((s16 *)&pos1+1));
 } else if(fn_801CF614(a)>=0) {
  idx=fn_801CF614(a);
  addr=(s32)arg0+(idx<<2);
  if(c!=*(void **)(addr+0x48)) {
   if(c!=0) fn_80140210(arg0,c,0);
   idx=fn_801CF614(a);
   addr=(s32)arg0+(idx<<2);
   fn_801400F4(arg0,*(void **)(addr+0x48));
   idx=fn_801CF614(a);
   addr=(s32)arg0+(idx<<2);
   fn_80140234(arg0,*(void **)(addr+0x48),1);
   fn_8013FF00(arg0,a);
  }
 }
}
gate=0;
flags=lbl_80367110;
if(flags&0x10) {
 if(!(flags&0x20)) gate=1;
}
if(gate==0) {
 t=M2C_FIELD(lbl_80367240,s32 *,4);
 btn=t&(M2C_FIELD(lbl_80367240,s32 *,8)^t);
 if((btn&0x100)&&!fn_80166D8C(lbl_80330D68)) {
  if(fn_801CF614(a)>=0) {
   fn_8000C188(arg0);
  } else {
   switch(*(s16 *)((u8 *)a+0x3c)) {
   case 1: fn_801CDB74(b); break;
   case 2: fn_801CDE2C(b,fn_800C93EC((u8 *)arg0+0x54)); break;
   case 3: fn_801CDDC8(b,*(s32 *)((u8 *)arg0+0x50)); fn_8000C070(arg0,5); break;
   }
  }
  fn_801475FC(lbl_8027DE48+0x1e,0x64);
 } else if((btn&0x1000)&&!fn_80166D8C(lbl_80330D68)) {
  *(s16 *)((u8 *)a+0x3c)=3;
  fn_801475FC(lbl_8027DE48+0x1e,0x64);
 } else if((btn&0x800)&&!fn_80166D8C(lbl_80330D68)) {
  *(Pair *)&pos3=((Obj *)a)->v9();
  fn_8016758C(lbl_80330D68,arg0,((Obj *)a)->v8(),(f32)*(s16 *)&pos3,(f32)*((s16 *)&pos3+1));
  *(s32 *)lbl_80330D68|=lbl_80368DC4;
 } else if((btn&0xa00)&&fn_80166D8C(lbl_80330D68)) {
  fn_801673D0(lbl_80330D68);
 } else if((btn&0x200)&&!fn_80166D8C(lbl_80330D68)) {
  lbl_802EF4C8[8]=0;
  fn_8000C070(arg0,5);
  fn_801475FC(lbl_8027DE48+0x2e,0x64);
 }
}
}
#pragma cplusplus reset

void fn_801CEC28(void *arg0) {
    void fn_8013FF00(void *, void *);
    void *fn_8013FF94(void *, s32, s32);

    fn_8013FF00(arg0, fn_8013FF94(arg0, 0, 0));
}

#pragma cplusplus on
extern "C" void fn_801CEC68(void *arg0) {
    void *fn_800C42D8(s32);
    void *fn_801CF62C(void *,s16,s16,s16);
    void *fn_801CD0D0(void *,s16,s16,s16,s32);
    void fn_801400F4(void *,void *);
    void fn_8013FF00(void *,void *);
    void fn_80140234(void *,void *,s32);
    void fn_801CDE2C(void *,s32);
    extern u8 lbl_802EF4C8[];
    extern void *lbl_8028FDB0[],*lbl_80292230[],*lbl_80298498[],*lbl_80298678[];
    extern const f32 lbl_8036B508;
    struct Obj {
        virtual void v0()=0;
        virtual void v1()=0;
        virtual void v2()=0;
        virtual void v3()=0;
        virtual void v4()=0;
        virtual void v5()=0;
        virtual void v6()=0;
        virtual void v7()=0;
        virtual void v8()=0;
    };
    u8 *p;
    u8 *self=(u8 *)arg0;
    u8 *child;
    void *created;
    *(u8 *)(lbl_802EF4C8+8)=0xF;
    p=(u8 *)fn_800C42D8(0x3C);
    if(p) {
        *(void **)p=lbl_8028FDB0;
        *(s32 *)(p+4)=0;
        *(void **)p=lbl_80292230;
        *(s16 *)(p+0x8)=-1;
        *(s16 *)(p+0xa)=0x18;
        *(s16 *)(p+0xc)=0x80;
        *(s16 *)(p+0xe)=0x248;
        *(s16 *)(p+0x10)=0x198;
        *(s16 *)(p+0x12)=0;
        *(s16 *)(p+0x14)=0;
        *(s16 *)(p+0x16)=0x230;
        *(s16 *)(p+0x18)=0x118;
        *(s16 *)(p+0x1a)=0;
        *(s16 *)(p+0x1c)=0;
        *(p+0x1e)=0xFF;
        *(p+0x1f)=0xFF;
        *(p+0x20)=0xFF;
        *(p+0x21)=0xFF;
        *(s16 *)(p+0x22)=0x32;
        *(s16 *)(p+0x24)=0;
        *(f32 *)(p+0x28)=lbl_8036B508;
        *(f32 *)(p+0x2C)=lbl_8036B508;
        *(f32 *)(p+0x30)=lbl_8036B508;
        *(s32 *)(p+0x34)=0;
        *(s32 *)(p+0x38)=0;
        *(void **)p=lbl_80298498;
    }
    *(s16 *)(p+8)=3;
    *(u32 *)(p+0x34)|=0x10;
    *(s16 *)(p+0x24)=4;
    fn_801400F4(self,p);
    created=fn_800C42D8(0x44);
    if(created) created=fn_801CF62C(created,0x1D4,0xAC,0x28);
    *(void **)(self+0x40)=created;
    child=*(u8 **)(self+0x40);
    if(child) *(s32 *)(child+4)+=1;
    *(s16 *)(*(u8 **)(self+0x40)+8)=0;
    *(u32 *)(*(u8 **)(self+0x40)+0x34)|=0x10;
    *(s16 *)(*(u8 **)(self+0x40)+0x24)=4;
    fn_801400F4(self,*(void **)(self+0x40));
    child=(u8 *)fn_800C42D8(0x7C);
    if(child) {
        *(void **)child=lbl_8028FDB0;
        *(s32 *)(child+4)=0;
        *(void **)child=lbl_80292230;
        *(s16 *)(child+0x8)=-1;
        *(s16 *)(child+0xa)=0x95;
        *(s16 *)(child+0xc)=0x6C;
        *(s16 *)(child+0xe)=0x95;
        *(s16 *)(child+0x10)=0x9C;
        *(s16 *)(child+0x12)=0;
        *(s16 *)(child+0x14)=0;
        *(s16 *)(child+0x16)=0;
        *(s16 *)(child+0x18)=0x30;
        *(s16 *)(child+0x1a)=0;
        *(s16 *)(child+0x1c)=0;
        *(child+0x1e)=0xFF;
        *(child+0x1f)=0xFF;
        *(child+0x20)=0xFF;
        *(child+0x21)=0xFF;
        *(s16 *)(child+0x22)=0x28;
        *(s16 *)(child+0x24)=0;
        *(f32 *)(child+0x28)=lbl_8036B508;
        *(f32 *)(child+0x2C)=lbl_8036B508;
        *(f32 *)(child+0x30)=lbl_8036B508;
        *(s32 *)(child+0x34)=0;
        *(s32 *)(child+0x38)=0;
        *(void **)child=lbl_80298678;
        *(s16 *)(child+0x70)=0;
        *(s16 *)(child+0x72)=-1;
        *(s16 *)(child+0x74)=-1;
        *(u32 *)(child+0x78)=0;
        ((Obj *)child)->v8();
    }
    *(u8 **)(self+0x44)=child;
    child=*(u8 **)(self+0x44);
    if(child) *(s32 *)(child+4)+=1;
    *(s16 *)(*(u8 **)(self+0x44)+8)=1;
    *(s16 *)(*(u8 **)(self+0x44)+0x24)=4;
    *(u32 *)(*(u8 **)(self+0x44)+0x34)|=0x10;
    *(u32 *)(*(u8 **)(self+0x44)+0x78)=*(u32 *)(self+0x4C);
    ((Obj *)*(void **)(self+0x44))->v8();
    fn_801CDE2C(*(void **)(self+0x44),*(s32 *)(self+0x50));
    fn_801400F4(self,*(void **)(self+0x44));
    created=fn_800C42D8(0xAC);
    if(created) created=fn_801CD0D0(created,0x24,0x90,0x28,0);
    *(void **)(self+0x48)=created;
    child=*(u8 **)(self+0x48);
    if(child) *(s32 *)(child+4)+=1;
    *(s16 *)(*(u8 **)(self+0x48)+8)=2;
    *(u32 *)(*(u8 **)(self+0x48)+0x34)|=0x10;
    *(s16 *)(*(u8 **)(self+0x48)+0x24)=4;
    fn_801400F4(self,*(void **)(self+0x48));
    fn_8013FF00(self,*(void **)(self+0x40));
    fn_80140234(self,p,0);
    fn_80140234(self,*(void **)(self+0x40),0);
    fn_80140234(self,*(void **)(self+0x44),0);
    fn_80140234(self,*(void **)(self+0x48),1);
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_801CF018(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v6();
}

extern "C" void fn_801CF044(void *arg0) {
    void fn_801475FC(void *, s32);
    extern u8 lbl_8027DED8[];
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    u8 skip;
    s32 flags;
    s16 old;
    s16 now;
    void *pad;
    s32 buttons;
    s32 held;
    s32 edge;
    s32 tmp;

    skip = 0;
    flags = lbl_80367110;
    old = *(s16 *)((u8 *)arg0 + 0x3C);
    if ((flags & 0x10) && !(flags & 0x20)) {
        skip = 1;
    }
    if (skip == 0) {
        pad = lbl_80367240;
        now = *(s16 *)((u8 *)arg0 + 0x3C);
        buttons = *(s32 *)((u8 *)pad + 0xC);
        held = *(s32 *)((u8 *)pad + 4);
        edge = held & (*(s32 *)((u8 *)pad + 8) ^ held);
        if (buttons & 0x08000008) {
            if (old == 0) {
                if (buttons == edge) {
                    *(s16 *)((u8 *)arg0 + 0x3C) = 3;
                }
            } else {
                *(s16 *)((u8 *)arg0 + 0x3C) = (s16)(now - 1);
            }
        } else if (buttons & 0x04000004) {
            tmp = old;
            if (tmp == 3) {
                if (buttons == edge) {
                    *(s16 *)((u8 *)arg0 + 0x3C) = 0;
                }
            } else {
                *(s16 *)((u8 *)arg0 + 0x3C) = (s16)(now + 1);
            }
        }
        if (now != *(s16 *)((u8 *)arg0 + 0x3C)) {
            fn_801475FC(lbl_8027DED8 + 0x2C, 0x64);
        }
    }
}

#pragma cplusplus on
void fn_801CF324(void *arg0, s32 arg1) {
    void fn_80152DE0(s32, s32, u8, s32, s32);
    void *self;
    s32 id;
    s32 i;

    self = arg0;
    M2C_FIELD(M2C_FIELD(self, void **, 0), void (**)(void *), 0x30)(self);
    M2C_FIELD(M2C_FIELD(self, void **, 0), void (**)(void *, s32), 0x14)(self, arg1);
    id = 0xD;
    i = 0;
    do {
        fn_80152DE0(5, id, (u8)i,
                    *(s16 *)((u8 *)self + 0x3C) == i,
                    *(s32 *)((u8 *)self + 0x34));
        i += 1;
        id += 0x22;
    } while (i < 4);
}
#pragma cplusplus reset

#pragma cplusplus reset

void fn_801CF5A4(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, s32 *, s16 *);
    s16 sp8;
    s16 spA;
    s32 spC;
    s16 t;

    t = *(s16 *)((u8 *)arg1 + 0x3C);
    sp8 = 5;
    spA = (s16)(t * 0x22 + 0xD);
    *arg0 = *fn_8013F748(arg1, &spC, &sp8);
}

s32 fn_801CF5FC(void *arg0) {
    extern s32 lbl_80298720[];
    return lbl_80298720[M2C_FIELD(arg0, s16 *, 0x3C)];
}

s32 fn_801CF614(void *arg0) {
    s16 v;
    s32 r;
    v = *(s16 *)((u8 *)arg0 + 0x3C);
    r = -1;
    if (v == 0) {
        r = 0;
    }
    return r;
}

#pragma opt_common_subs off
void *fn_801CF62C(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    extern void *lbl_8028FDB0[];
    extern void *lbl_80292230[];
    extern void *lbl_80298730[];
    extern f32 lbl_8036B518;
    f32 zero;
    s16 neg;
    s16 w;
    s16 h;
    s32 z;

    neg = -1;
    z = 0;
    w = 0x67;
    h = 0x9D;
    *(void **)arg0 = lbl_8028FDB0;
    zero = lbl_8036B518;
    *(s32 *)((u8 *)arg0 + 4) = z;
    *(void **)arg0 = lbl_80292230;
    *(s16 *)((u8 *)arg0 + 8) = neg;
    *(s16 *)((u8 *)arg0 + 0xA) = arg1;
    *(s16 *)((u8 *)arg0 + 0xC) = arg2;
    *(s16 *)((u8 *)arg0 + 0xE) = (s16)(arg1 + w);
    *(s16 *)((u8 *)arg0 + 0x10) = (s16)(arg2 + h);
    *(s16 *)((u8 *)arg0 + 0x12) = z;
    *(s16 *)((u8 *)arg0 + 0x14) = z;
    *(s16 *)((u8 *)arg0 + 0x16) = w;
    *(s16 *)((u8 *)arg0 + 0x18) = h;
    *(s16 *)((u8 *)arg0 + 0x1A) = z;
    *(s16 *)((u8 *)arg0 + 0x1C) = z;
    *(u8 *)((u8 *)arg0 + 0x1E) = 0xFF;
    *(u8 *)((u8 *)arg0 + 0x1F) = 0xFF;
    *(u8 *)((u8 *)arg0 + 0x20) = 0xFF;
    *(u8 *)((u8 *)arg0 + 0x21) = 0xFF;
    *(s16 *)((u8 *)arg0 + 0x22) = arg3;
    *(s16 *)((u8 *)arg0 + 0x24) = z;
    *(f32 *)((u8 *)arg0 + 0x28) = zero;
    *(f32 *)((u8 *)arg0 + 0x2C) = zero;
    *(f32 *)((u8 *)arg0 + 0x30) = zero;
    *(s32 *)((u8 *)arg0 + 0x34) = z;
    *(s32 *)((u8 *)arg0 + 0x38) = z;
    *(void **)arg0 = lbl_80298730;
    *(s16 *)((u8 *)arg0 + 0x3C) = z;
    *(s16 *)((u8 *)arg0 + 0x3E) = neg;
    *(s16 *)((u8 *)arg0 + 0x40) = neg;
    return arg0;
}
#pragma opt_common_subs on
void *fn_801CF6F4(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80298730[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80298730;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_801CF760(void *arg0) {
    s32 fn_802342B8(void *, void *);
    extern u16 lbl_80331D00[];
    u8 *p;
    s32 i;

    p = (u8 *)lbl_80331D00;
    i = 0;
    do {
        if ((*(s32 *)(p + 8) & 1) &&
            fn_802342B8(*(void **)(*(void **)(p + 0x24)), arg0) == 0) {
            return (u8 *)lbl_80331D00 + i * 0x15C;
        }
        i += 1;
        p += 0x15C;
    } while (i < 2);
    return NULL;
}

void fn_801CF7F0(void *arg0, void *arg1) {
    s32 fn_802342B8(void *, void *);
    void fn_801CFAB8(void *, u8, void *);
    void fn_8005C8B4(void *);
    void *fn_8000CAF0(void *, void *);
    void fn_801FC980(void *, f32);
    extern u8 lbl_802997CC[];
    extern u16 lbl_80331D00[];
    extern u8 lbl_8027DF20[];
    extern u8 lbl_8029992C[];
    extern f32 lbl_8036B568;
    u8 *row;
    u8 *p;
    u8 *slot;
    s32 i;
    s32 ctr;
    f32 f;

    row = lbl_802997CC;
    for (;;) {
        if (fn_802342B8(arg0, *(void **)row) == 0) {
            break;
        }
        row += 0x10;
    }
    p = (u8 *)lbl_80331D00;
    i = 0;
    for (ctr = 2; ctr != 0; ctr--) {
        if ((*(s32 *)(p + 8) & 1) == 0) {
            slot = (u8 *)lbl_80331D00 + i * 0x15C;
            fn_801CFAB8(slot, (u8)i, row);
            fn_8005C8B4(lbl_8027DF20 + 0x13E);
            fn_8005C8B4(slot + 0x12C);
            *(void **)(slot + 0x150) = fn_8000CAF0(lbl_8029992C, arg1);
            f = lbl_8036B568;
            *(u8 *)(*(u8 **)(slot + 0x150) + 0x30) = i;
            fn_801FC980(*(void **)(slot + 0x150), f);
            return;
        }
        p += 0x15C;
        i += 1;
    }
}

void fn_801CF8E4(void *arg0)
{
    void *record;

    record = (u8 *)lbl_80331D00 +
        (*(u8 *)((u8 *)arg0 + 0x30) * 0x15C);

    fn_8006EDA0(record);
    fn_8006EDA0((u8 *)record + 4);
}

void fn_801CF92C(void *arg0)
{
    void fn_8000C188(void *);
    void fn_801D15D4(void *);
    void fn_801D107C(void *);
    u8 *table;
    u8 *entry;

    table = (u8 *)lbl_80331D00;
    entry = table + *(u8 *)((u8 *)arg0 + 0x30) * 0x15C;
    if ((*(u32 *)(entry + 8) & 1) == 0) {
        fn_8000C188(arg0);
        return;
    }
    fn_801D15D4(entry);
    fn_801D107C((u8 *)lbl_80331D00 + *(u8 *)((u8 *)arg0 + 0x30) * 0x15C);
}

#pragma global_optimizer off
void fn_801CF99C(void *arg0) {
    s32 fn_8005C6A0(void *);
    void fn_8006EEFC(void *, void *);
    void fn_8000C188(void *);
    extern u16 lbl_80331D00[];
    extern u8 lbl_8027DF20[];
    u8 *entry;
    u8 ok;

    entry = (u8 *)lbl_80331D00 + *(u8 *)((u8 *)arg0 + 0x30) * 0x15C;
    if (!(fn_8005C6A0(lbl_8027DF20 + 0x13E) & 0x2000) ||
        !(fn_8005C6A0(entry + 0x12C) & 0x2000)) {
        ok = 0;
    } else {
        fn_8006EEFC(entry, lbl_8027DF20 + 0x13E);
        fn_8006EEFC(entry + 4, entry + 0x12C);
        ok = 1;
    }
    if (ok != 0) {
        fn_8000C188(arg0);
    }
}
#pragma global_optimizer on
void fn_801CFA44(void *arg0)
{
    extern void fn_8000C60C(void *);
    extern void fn_801C18FC(s32);

    s32 i;
    u8 *ptr;
    s32 zero;

    zero = 0;
    i = zero;
    ptr = (u8 *)arg0;

    *(s32 *)(ptr + 0x8) = zero;

    do {
        *(u8 *)(ptr + 0x28) = zero;

        if (*(void **)(ptr + 0x2C) != 0) {
            fn_8000C60C(*(void **)(ptr + 0x2C));
            *(s32 *)(ptr + 0x2C) = zero;
        }

        ptr += 8;
        i++;
    } while (i < 7);

    fn_801C18FC(1);
}

void fn_801CFC4C(void *arg0, s32 arg1) {
    if (arg1 <= 0) {
        arg1 = 1;
    }
    *(u8 *)((u8 *)arg0 + 0x158) = 0xFF;
    *(u8 *)((u8 *)arg0 + 0x159) = 0;
    *(u16 *)((u8 *)arg0 + 0x154) = 0;
    *(u16 *)((u8 *)arg0 + 0x156) = arg1;
    *(u32 *)((u8 *)arg0 + 8) |= 2;
}

void fn_801CFC80(void *arg0, s32 arg1) {
    if (arg1 <= 0) {
        arg1 = 1;
    }
    *(u8 *)((u8 *)arg0 + 0x158) = 0;
    *(u8 *)((u8 *)arg0 + 0x159) = 0xFF;
    *(u16 *)((u8 *)arg0 + 0x154) = 0;
    *(u16 *)((u8 *)arg0 + 0x156) = arg1;
    *(u32 *)((u8 *)arg0 + 8) |= 2;
}

extern void *lbl_80367140;
#pragma global_optimizer off
#pragma opt_strength_reduction off
void fn_801CFCB4(void *arg0) {
    struct S {
        char pad0[0xEC];
        s8 a;
        char pad1[7];
        s8 b;
        char pad2[7];
        s8 c;
        char pad3[7];
        s8 d;
        char pad4[7];
        s8 e;
        char pad5[7];
        s8 f;
    } *p;
    s32 v;

    p = arg0;
    v = 3;
    if (p->a) {
        p->a = v;
    }
    if (p->b) {
        p->b = v;
    }
    p = (void *)((char *)p + 0x10);
    if (p->a) {
        p->a = v;
    }
    if (p->b) {
        p->b = v;
    }
    if (p->c) {
        p->c = v;
    }
    if (p->d) {
        p->d = v;
    }
    if (p->e) {
        p->e = v;
    }
    if (p->f) {
        p->f = v;
    }
}
#pragma opt_strength_reduction on
#pragma global_optimizer on
void fn_801CFD40(u8 *arg0, s32 arg1) {
    arg1 = (arg1 << 3) + 0xEC;
    if ((s8)arg0[arg1] != 0) {
        arg0[arg1] = 3;
    }
}

#pragma global_optimizer off
void fn_801CFD60(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s8 arg4) {
    s32 temp_r8;

    temp_r8 = arg1 * 8;
    temp_r8 += 0xEC;
    temp_r8 = arg0 + temp_r8;
    *(u8 *)(temp_r8 + 0x0) = 1;
    *(u16 *)(temp_r8 + 0x2) = arg2;
    *(u16 *)(temp_r8 + 0x4) = arg3;
    *(u8 *)(temp_r8 + 0x6) = arg4;
    *(u8 *)(temp_r8 + 0x7) = 0;
}
#pragma global_optimizer on
void fn_801CFD8C(s32 arg0, s32 arg1, u8 arg2) {
    u32 temp_r4;

    temp_r4 = (arg1 * 0xE) + 0x60;
    if (arg2 != 0) {
        *(u8*)(arg0 + temp_r4) |= 2;
        return;
    }
    *(u8*)(arg0 + temp_r4) &= 0xFFFFFFFD;
}

#pragma opt_strength_reduction off
void fn_801CFDBC(void *arg0, s32 arg1) {
    struct Ent { u8 flag; u8 pad[0xD]; };
    ((struct Ent *)((u8 *)arg0 + 0x60))[arg1].flag |= 1;
}
#pragma global_optimizer off
#pragma opt_strength_reduction off
void fn_801CFDD4(s8 *a)
{
    s32 c;
    s32 x;
    s8 *p;

    c = 0x63;
    x = a[0x61];
    if (x) {
        a[0x61] = c;
    }
    x = a[0x6f];
    if (x) {
        a[0x6f] = c;
    }
    p = a;
    p += 0x1c;
    x = p[0x61];
    if (x) {
        p[0x61] = c;
    }
    x = p[0x6f];
    if (x) {
        p[0x6f] = c;
    }
    x = p[0x7d];
    if (x) {
        p[0x7d] = c;
    }
    x = p[0x8b];
    if (x) {
        p[0x8b] = c;
    }
    x = p[0x99];
    if (x) {
        p[0x99] = c;
    }
    x = p[0xa7];
    if (x) {
        p[0xa7] = c;
    }
    x = p[0xb5];
    if (x) {
        p[0xb5] = c;
    }
    x = p[0xc3];
    if (x) {
        p[0xc3] = c;
    }
}
#pragma opt_strength_reduction on
#pragma global_optimizer on
void fn_801CFE80(void *arg0, s32 arg1) {
    u8 *p;

    p = (u8 *)arg0 + arg1 * 0xE + 0x60;
    if ((s8)p[1] != 0) {
        p[1] = 0x63;
    }
}

void fn_801CFEA4(s32 arg0, s32 arg1) {
    void fn_801CFEF4(void);
    s32 temp_r4;
    s32 temp_r3;

    fn_801CFEF4();
    temp_r3 = arg1 * 0xE;
    temp_r4 = 3;
    *(u8 *)(arg0 + temp_r3 + 0x61) = temp_r4;
    *(u8 *)(arg0 + temp_r3 + 0x63) = 0x96;
}

#pragma opt_strength_reduction off
void fn_801D0200(void *arg0)
{
    struct T {
        char pad0[0x28];
        signed char a;
        char pad1[7];
        signed char b;
        char pad2[7];
        signed char c;
        char pad3[7];
        signed char d;
        char pad4[7];
        signed char e;
    } *p = arg0;

    if (p->a) {
        p->a = 5;
    }
    if (p->b) {
        p->b = 5;
    }
    p = (void *)((char *)p + 0x10);
    if (p->a) {
        p->a = 5;
    }
    if (p->b) {
        p->b = 5;
    }
    if (p->c) {
        p->c = 5;
    }
    if (p->d) {
        p->d = 5;
    }
    if (p->e) {
        p->e = 5;
    }
}
#pragma opt_strength_reduction on
void fn_801D027C(s32 arg0, s32 arg1) {
    s32 temp_r4;
    
    temp_r4 = (arg1 << 3);
    if ((s8)*(u8*)(arg0 + temp_r4 + 0x28) != 0) {
        *(u8*)(arg0 + temp_r4 + 0x28) = 5;
    }
}

void fn_801D03E4(void *arg0, s32 arg1, u8 arg2) {
    if (arg2 != 0) {
        *(s32*)((char*)arg0 + 8) |= (0x800 << arg1);
        return;
    }
    *(s32*)((char*)arg0 + 8) &= ~(0x800 << arg1);
}

void fn_801D041C(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFB);
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 4);
}

void fn_801D0444(u8 *arg0, s32 arg1) {
    if (arg1 >= 3) {
        return;
    }
    arg0 += arg1 * 2;
    *(s16 *)(arg0 + 0xe) = 0;
}

void fn_801D0460(void *arg0, s32 arg1) {
    if (arg1 < 3) {
        u32* field_ptr = (u32*)((char*)arg0 + 8);
        *field_ptr |= (0x100 << arg1);
    }
}

void fn_801D0480(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    f32 fn_80059500(f32, f32, f32, f32, f32);
    void fn_8006ECCC(void *, void *, s32);
    void fn_80202024(void *, void *, void *);
    void fn_80202300(void *, s32, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_80220DEC(s32, s32, s32);
    void fn_80222C50(void *, s32);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    f64 fn_80237E90(f32);
    extern f32 lbl_80367068;
    extern s32 lbl_8036B520;
    extern s32 lbl_8036B524;
    extern s32 lbl_8036B528;
    extern s32 lbl_8036B52C;
    extern s32 lbl_8036B530;
    extern s32 lbl_8036B534;
    extern s32 lbl_8036B538;
    extern s32 lbl_8036B53C;
    extern f32 lbl_8036B56C;
    extern f64 lbl_8036B578;
    extern f32 lbl_8036B580;
    extern f32 lbl_8036B584;
    extern f32 lbl_8036B588;
    extern f32 lbl_8036B58C;
    extern f32 lbl_8036B590;
    extern f64 lbl_8036B598;
    extern f64 lbl_8036B5A0;
    extern f64 lbl_8036B5A8;
    extern f32 lbl_8036B5B0;
    extern f32 lbl_8036B5B4;
    extern f32 lbl_8036B5B8;
    extern f32 lbl_8036B5BC;
    extern f32 lbl_8036B5C0;
    extern f32 lbl_8036B5C4;
    extern f64 lbl_8036B5C8;

    f32 mtxA[3][4];
    f32 mtxB[3][4];
    f32 mtxC[3][4];
    f32 mtxD[3][4];
    u8 tex[0x20];
    s32 c0, c1;
    f32 zero;
    u8 *self;
    s32 lane;
    s32 off4;
    s32 off2;
    s32 entry;
    s32 acc;
    u8 *seg;
    s32 width;
    s32 i;
    u8 r0, g0, b0, r1, g1, b1;
    s32 cr, cg, cb;
    f32 fade;
    f32 t;
    f32 px, py, lx, ly;
    f32 dist;
    f32 half;
    u8 alpha;
    u32 timer;
    void **lists;

    zero = lbl_8036B580;
    self = (u8 *)arg0;
    lane = 0;
    off4 = 0;
    off2 = 0;
    px = zero;
    py = zero;
    lx = zero;
    ly = zero;
    while (lane < 3) {
        if (*(s16 *)(self + off2 + 0xE) <= 0) {
            lane++;
            off4 += 4;
            off2 += 2;
            continue;
        }
        lists = *(void ***)(*(u8 **)(self + 0x24) + 8);
        if (lists[lane] == NULL) {
            break;
        }
        dist = lbl_8036B580;
        entry = 0;
        acc = 0;
        for (;;) {
            seg = (u8 *)lists[lane] + entry;
            if (*(u16 *)seg & 0x8000) {
                break;
            }
            if (*(u16 *)seg & 4) {
                dist = lbl_8036B580;
                entry += 0x16;
                continue;
            }
            acc += seg[0x13];
            if (*(s16 *)(self + off2 + 0xE) >= acc) {
                width = seg[0x12];
            } else {
                width = (s32)(((f32)seg[0x12] * (f32)(*(s16 *)(self + off2 + 0xE) - (acc - seg[0x13]))) / (f32)seg[0x13]);
            }
            if (width <= 0) {
                break;
            }
            switch (seg[0x14]) {
            case 0:
                c0 = lbl_8036B520;
                c1 = lbl_8036B524;
                break;
            case 1:
                c0 = lbl_8036B528;
                c1 = lbl_8036B52C;
                break;
            case 2:
                c0 = lbl_8036B530;
                c1 = lbl_8036B534;
                break;
            default:
                c0 = lbl_8036B538;
                c1 = lbl_8036B53C;
                break;
            }
            r0 = ((u8 *)&c0)[0];
            g0 = ((u8 *)&c0)[1];
            b0 = ((u8 *)&c0)[2];
            r1 = ((u8 *)&c1)[0];
            g1 = ((u8 *)&c1)[1];
            b1 = ((u8 *)&c1)[2];
            fade = (f32)self[0x14 + lane] / lbl_8036B584;
            timer = *(u32 *)(self + 0x14C);
            if (timer < 0x5DCU) {
                cr = (s32)(fade * fn_800067BC(0, (f32)r0, (f32)r1, (f32)timer, lbl_8036B588));
                cg = (s32)(fade * fn_800067BC(0, (f32)g0, (f32)g1, (f32)timer, lbl_8036B588));
                cb = (s32)(fade * fn_800067BC(0, (f32)b0, (f32)b1, (f32)timer, lbl_8036B588));
            } else {
                cr = (s32)(fade * fn_800067BC(0, (f32)r1, (f32)r0, (f32)(timer - 0x5DC), lbl_8036B588));
                cg = (s32)(fade * fn_800067BC(0, (f32)g1, (f32)g0, (f32)(timer - 0x5DC), lbl_8036B588));
                cb = (s32)(fade * fn_800067BC(0, (f32)b1, (f32)b0, (f32)(timer - 0x5DC), lbl_8036B588));
            }
            alpha = (u8)((self[0x21] * (0xFF * self[0x20])) / 65025);
            fn_8006ECCC(*(void **)self, tex, 0);
            fn_80222C50(tex, 0);
            fn_80202540(mtxA, (f32)*(s16 *)(self + 0x18), (f32)*(s16 *)(self + 0x1A), lbl_8036B580);
            fn_80224E1C(0);
            fn_80224D7C(mtxA, 0);
            for (i = 0; i < width; i++) {
                half = lbl_8036B58C * ((lbl_8036B590 * *(f32 *)(self + 0x1C) * (f32)seg[0x15]) / lbl_8036B584);
                if (*(u16 *)seg & 2) {
                    t = fn_800067BC(0, lbl_8036B580, lbl_8036B56C, (f32)i, (f32)seg[0x12]);
                } else {
                    t = (f32)i / (f32)seg[0x12];
                }
                lx = px;
                ly = py;
                px = *(f32 *)(self + 0x1C) * fn_80059500((f32)*(s16 *)(seg + 2), (f32)*(s16 *)(seg + 6),
                                                           (f32)*(s16 *)(seg + 0xA), (f32)*(s16 *)(seg + 0xE), t);
                py = *(f32 *)(self + 0x1C) * fn_80059500((f32)*(s16 *)(seg + 4), (f32)*(s16 *)(seg + 8),
                                                           (f32)*(s16 *)(seg + 0xC), (f32)*(s16 *)(seg + 0x10), t);
                if (i == 0) {
                    lx = px;
                    ly = py;
                }
                if (*(u16 *)seg & 0x10) {
                    dist += (px - lx) * (px - lx) + (py - ly) * (py - ly);
                }
                fn_80220DEC(0x98, 0, 4);
                *(f32 *)0xCC008000 = px - half;
                *(f32 *)0xCC008000 = py - half;
                *(f32 *)0xCC008000 = lbl_8036B580;
                *(u8 *)0xCC008000 = (u8)cr;
                *(u8 *)0xCC008000 = (u8)cg;
                *(u8 *)0xCC008000 = (u8)cb;
                *(u8 *)0xCC008000 = alpha;
                *(f32 *)0xCC008000 = lbl_8036B580;
                *(f32 *)0xCC008000 = lbl_8036B580;
                *(f32 *)0xCC008000 = px + half;
                *(f32 *)0xCC008000 = py - half;
                *(f32 *)0xCC008000 = lbl_8036B580;
                *(u8 *)0xCC008000 = (u8)cr;
                *(u8 *)0xCC008000 = (u8)cg;
                *(u8 *)0xCC008000 = (u8)cb;
                *(u8 *)0xCC008000 = alpha;
                *(f32 *)0xCC008000 = lbl_8036B56C;
                *(f32 *)0xCC008000 = lbl_8036B580;
                *(f32 *)0xCC008000 = px - half;
                *(f32 *)0xCC008000 = py + half;
                *(f32 *)0xCC008000 = lbl_8036B580;
                *(u8 *)0xCC008000 = (u8)cr;
                *(u8 *)0xCC008000 = (u8)cg;
                *(u8 *)0xCC008000 = (u8)cb;
                *(u8 *)0xCC008000 = alpha;
                *(f32 *)0xCC008000 = lbl_8036B580;
                *(f32 *)0xCC008000 = lbl_8036B56C;
                *(f32 *)0xCC008000 = px + half;
                *(f32 *)0xCC008000 = py + half;
                *(f32 *)0xCC008000 = lbl_8036B580;
                *(u8 *)0xCC008000 = (u8)cr;
                *(u8 *)0xCC008000 = (u8)cg;
                *(u8 *)0xCC008000 = (u8)cb;
                *(u8 *)0xCC008000 = alpha;
                *(f32 *)0xCC008000 = lbl_8036B56C;
                *(f32 *)0xCC008000 = lbl_8036B56C;
            }
            entry += 0x16;
        }
        lane++;
        off4 += 4;
        off2 += 2;
    }
}

void fn_801D107C(void *arg0) {
    void fn_80007340(void (*)(void *), void *);
    void fn_80007698(u8);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(u8);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009EB0(void *, u16, s32, s32);
    void fn_80009F90(void *, u16, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void **fn_8006EDD8(void *, u16);
    void fn_801D0480(void *);
    extern u16 lbl_80331D00[];
    extern f32 lbl_8036B568;
    extern f64 lbl_8036B578;
    extern f32 lbl_8036B580;
    extern f64 lbl_8036B5C8;
    extern f32 lbl_8036B5D0;

    u8 *self = arg0;
    void **tex;
    u16 *pair;
    f32 h;
    f32 w;
    void *node;
    s16 *poly;
    s32 i;
    u8 *ent;
    u16 idx;
    void **tex2;

    fn_8000A258();
    fn_80009D74(
        (f32)*(s16 *)(self + 0x18),
        (f32)*(s16 *)(self + 0x1A),
        (f32)(self[0xC] * 0xA + 0x3B6),
        *(f32 *)(self + 0x1C));
    fn_80009B8C(self[0x20]);
    fn_8000A248();

    fn_8000A258();
    fn_80009F90(*(void **)(self + 4), 0, 0x11);
    fn_8000A248();

    tex = fn_8006EDD8(*(void **)(self + 4), 0);
    pair = (u16 *)*tex;
    h = (f32)pair[1];
    w = (f32)pair[0];
    fn_80007898(1);
    fn_80007838(lbl_8036B580, lbl_8036B580, lbl_8036B580, lbl_8036B580);
    fn_80007818(h, w, h, w);
    fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_8036B568);
    fn_8000A248();

    node = *(void **)(*(u8 **)(self + 0x24) + 0xC);
    if (node != NULL) {
        poly = *(s16 **)((u8 *)node + 4);
        fn_8000A258();
        fn_80009F90(*(void **)(self + 4), *(u16 *)node, 0x11);
        fn_8000A248();
        for (; poly[0] != -1; poly += 4) {
            fn_80007898(1);
            fn_80007838((f32)poly[0], (f32)poly[1], (f32)poly[0], (f32)poly[1]);
            fn_80007818((f32)poly[2], (f32)poly[3], (f32)poly[2], (f32)poly[3]);
            fn_800076AC(0x17, 0x2E, 0x56, 0xFF);
            fn_80007884();
        }
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036B568);
    fn_8000A248();

    for (i = 0, ent = self; i < 0xA; i += 1, ent += 0xE) {
        if ((s8)ent[0x61] != 0) {
            tex = fn_8006EDD8(*(void **)(self + 4), *(u16 *)(ent + 0x68));
            pair = (u16 *)*tex;
            h = (f32)pair[1];
            w = (f32)pair[0];
            fn_8000A258();
            fn_80009F90(*(void **)(self + 4), *(u16 *)(ent + 0x68), 0x10);
            fn_8000A248();
            fn_80007898(1);
            fn_800077D8(
                (f32)*(s16 *)(ent + 0x64),
                (f32)*(s16 *)(ent + 0x66),
                h, w);
            fn_800076AC(
                ent[0x6A], ent[0x6B], ent[0x6C],
                (u8)((ent[0x63] * 0xFF) / 255));
            fn_80007884();
        }
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036B568);
    fn_8000A248();

    if (*(u32 *)(*(u8 **)(self + 0x24) + 8) != 0) {
        fn_8000A258();
        fn_80009F90(*(void **)self, 0, 0x10);
        fn_8000A248();
        fn_80007898(0xB);
        fn_80007340(fn_801D0480, (u8 *)lbl_80331D00 + self[0xC] * 0x15C);
        fn_80007884();
    }

    fn_8000A258();
    fn_80009D74(
        (f32)*(s16 *)(self + 0x18),
        (f32)*(s16 *)(self + 0x1A),
        lbl_8036B5D0,
        *(f32 *)(self + 0x1C));
    fn_8000A248();

    for (i = 0, ent = self; i < 8; i += 1, ent += 8) {
        if ((s8)ent[0xEC] != 0) {
            idx = (u16)((s8)ent[0xF2] + 2);
            tex2 = fn_8006EDD8(*(void **)self, idx);
            pair = (u16 *)*tex2;
            h = (f32)pair[1];
            w = (f32)pair[0];
            fn_8000A258();
            if (tex2[1] != NULL) {
                fn_80009EB0(*(void **)self, idx, 0, 0x10);
            } else {
                fn_80009F90(*(void **)self, idx, 0x10);
            }
            fn_8000A248();
            fn_80007898(1);
            fn_800077D8(
                (f32)*(s16 *)(ent + 0xEE),
                (f32)*(s16 *)(ent + 0xF0),
                h, w);
            fn_80007698(ent[0xF3]);
            fn_80007884();
        }
    }

    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
}

#pragma use_lmw_stmw on
void fn_801D15D4(void *arg0) {
    s64 OSGetTime(void);
    s64 __div2i(s32, s32, s32, s32);
    s64 fn_8022C9FC(s32, s32, s32, s32);
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000C60C(void *);
    extern u32 lbl_8036C528;
    extern u32 lbl_8036C52C;

    s32 sp18;
    s32 sp14;
    u8 sp10[4];
    s32 spC;
    u8 sp8[4];
    void *self;
    void *slot;
    void *p;
    void *obj;
    void *node;
    void *base;
    void **arr;
    s32 k;
    s32 i;
    s32 j;
    s32 v;
    s32 sum;
    s32 bit;
    s16 s;
    u8 r, g, b;
    u8 fl;
    u32 bus;
    u32 mag;
    u32 div;
    s64 t;

    self = arg0;
    t = OSGetTime();
    bus = *(u32 *)0x800000F8;
    mag = 0x10624DD3;
    bus = bus >> 2;
    div = (u32)(((u64)mag * bus) >> 32) >> 6;
    t = __div2i((s32)(t >> 32), (s32)t, 0, (s32)div);
    t = fn_8022C9FC((s32)(t >> 32), (s32)t, 0, 0xBB8);
    *(u32 *)((u8 *)self + 0x14C) = (u32)t;

    if (*(u32 *)((u8 *)self + 8) & 2) {
        *(u16 *)((u8 *)self + 0x154) = (u16)(*(u16 *)((u8 *)self + 0x154) + 1);
        {
            u8 a = *(u8 *)((u8 *)self + 0x158);
            u8 c = *(u8 *)((u8 *)self + 0x159);
            u16 d = *(u16 *)((u8 *)self + 0x154);
            u16 e = *(u16 *)((u8 *)self + 0x156);
            *(u8 *)((u8 *)self + 0x20) = (u8)fn_800067BC(0, (f32)a, (f32)c, (f32)d, (f32)e);
        }
        if (*(u16 *)((u8 *)self + 0x154) >= *(u16 *)((u8 *)self + 0x156)) {
            *(u32 *)((u8 *)self + 8) = *(u32 *)((u8 *)self + 8) & ~2;
        }
    }

    p = self;
    for (k = 10; k != 0; k--) {
        switch ((s8)*(u8 *)((u8 *)p + 0x61)) {
        case 1:
            v = *(u8 *)((u8 *)p + 0x63) + 2;
            if (v < 0xFF) {
                *(u8 *)((u8 *)p + 0x63) = (u8)v;
            } else {
                *(u8 *)((u8 *)p + 0x61) = 2;
                *(u8 *)((u8 *)p + 0x63) = 0xFF;
            }
            break;
        case 2:
            v = *(u8 *)((u8 *)p + 0x63) - 2;
            if (v > 0x96) {
                *(u8 *)((u8 *)p + 0x63) = (u8)v;
            } else {
                *(u8 *)((u8 *)p + 0x61) = 3;
                *(u8 *)((u8 *)p + 0x63) = 0x96;
            }
            break;
        case 3:
            if (*(u8 *)((u8 *)p + 0x60) & 1) {
                *(u8 *)((u8 *)p + 0x61) = 4;
            }
            if (*(u8 *)((u8 *)p + 0x60) & 2) {
                *(u8 *)((u8 *)p + 0x61) = 4;
            }
            break;
        case 4:
            v = *(u8 *)((u8 *)p + 0x63) + 2;
            if (v < 0xFF) {
                *(u8 *)((u8 *)p + 0x63) = (u8)v;
            } else {
                *(u8 *)((u8 *)p + 0x61) = 5;
                *(u8 *)((u8 *)p + 0x63) = 0xFF;
            }
            break;
        case 5:
            v = *(u8 *)((u8 *)p + 0x63) - 2;
            if (v <= 0x96) {
                fl = *(u8 *)((u8 *)p + 0x60);
                v = 0x96;
                if (fl & 1) {
                    *(u8 *)((u8 *)p + 0x60) = (u8)(fl & ~3);
                    *(u8 *)((u8 *)p + 0x61) = 3;
                } else if (fl & 2) {
                    *(u8 *)((u8 *)p + 0x60) = (u8)(fl & ~1);
                    *(u8 *)((u8 *)p + 0x61) = 4;
                } else {
                    *(u8 *)((u8 *)p + 0x61) = 3;
                }
            }
            *(u8 *)((u8 *)p + 0x63) = (u8)v;
            break;
        case 0x63:
            v = *(u8 *)((u8 *)p + 0x63) - 2;
            if (v > 0) {
                *(u8 *)((u8 *)p + 0x63) = (u8)v;
            } else {
                *(u8 *)((u8 *)p + 0x61) = 0;
                *(u8 *)((u8 *)p + 0x63) = 0;
            }
            break;
        }
        p = (u8 *)p + 0xE;
    }

    i = 0;
    slot = self;
    do {
        obj = *(void **)((u8 *)slot + 0x2C);
        if (obj != NULL) {
            sp18 = *(s32 *)((u8 *)*(void **)((u8 *)obj + 0x30) + 0x38);
            r = ((u8 *)&sp18)[0];
            g = ((u8 *)&sp18)[1];
            b = ((u8 *)&sp18)[2];
        }
        switch ((s8)*(u8 *)((u8 *)slot + 0x28)) {
        case 1:
            s = (s16)(*(u8 *)((u8 *)slot + 0x29) + 5);
            if (s >= 0xFF) {
                s = 0xFF;
                *(u8 *)((u8 *)slot + 0x28) = 3;
            }
            *(u8 *)((u8 *)slot + 0x29) = (u8)s;
            if (obj != NULL) {
                *(u32 *)sp10 = lbl_8036C528;
                sp10[0] = r;
                sp10[1] = g;
                sp10[2] = b;
                sp10[3] = *(u8 *)((u8 *)slot + 0x29);
                sp14 = *(s32 *)sp10;
                node = *(void **)((u8 *)obj + 0x30);
                ((u8 *)node)[0x38] = ((u8 *)&sp14)[0];
                ((u8 *)node)[0x39] = ((u8 *)&sp14)[1];
                ((u8 *)node)[0x3A] = ((u8 *)&sp14)[2];
                ((u8 *)node)[0x3B] = ((u8 *)&sp14)[3];
            }
            break;
        case 5:
            s = (s16)((s16)*(u8 *)((u8 *)slot + 0x29) - 5);
            if (s <= 0) {
                *(u8 *)((u8 *)slot + 0x28) = 0;
                if (obj != NULL) {
                    fn_8000C60C(*(void **)((u8 *)slot + 0x2C));
                    *(void **)((u8 *)slot + 0x2C) = NULL;
                }
            } else {
                *(u8 *)((u8 *)slot + 0x29) = (u8)s;
                if (obj != NULL) {
                    *(u32 *)sp8 = lbl_8036C52C;
                    sp8[0] = r;
                    sp8[1] = g;
                    sp8[2] = b;
                    sp8[3] = *(u8 *)((u8 *)slot + 0x29);
                    spC = *(s32 *)sp8;
                    node = *(void **)((u8 *)obj + 0x30);
                    ((u8 *)node)[0x38] = ((u8 *)&spC)[0];
                    ((u8 *)node)[0x39] = ((u8 *)&spC)[1];
                    ((u8 *)node)[0x3A] = ((u8 *)&spC)[2];
                    ((u8 *)node)[0x3B] = ((u8 *)&spC)[3];
                }
            }
            break;
        }
        i += 1;
        slot = (u8 *)slot + 8;
    } while (i < 7);

    p = self;
    for (k = 4; k != 0; k--) {
        switch ((s8)*(u8 *)((u8 *)p + 0xEC)) {
        case 1:
            v = *(u8 *)((u8 *)p + 0xF3) + 0xA;
            if (v > 0xFF) {
                v = 0xFF;
                *(u8 *)((u8 *)p + 0xEC) = 2;
            }
            *(u8 *)((u8 *)p + 0xF3) = (u8)v;
            break;
        case 3:
            v = *(u8 *)((u8 *)p + 0xF3) - 0xA;
            if (v < 0) {
                v = 0;
                *(u8 *)((u8 *)p + 0xEC) = 0;
            }
            *(u8 *)((u8 *)p + 0xF3) = (u8)v;
            break;
        }
        switch ((s8)*(u8 *)((u8 *)p + 0xF4)) {
        case 1:
            v = *(u8 *)((u8 *)p + 0xFB) + 0xA;
            if (v > 0xFF) {
                v = 0xFF;
                *(u8 *)((u8 *)p + 0xF4) = 2;
            }
            *(u8 *)((u8 *)p + 0xFB) = (u8)v;
            break;
        case 3:
            v = *(u8 *)((u8 *)p + 0xFB) - 0xA;
            if (v < 0) {
                v = 0;
                *(u8 *)((u8 *)p + 0xF4) = 0;
            }
            *(u8 *)((u8 *)p + 0xFB) = (u8)v;
            break;
        }
        p = (u8 *)p + 0x10;
    }

    v = *(u8 *)((u8 *)self + 0x21);
    if (*(u32 *)((u8 *)self + 8) & 4) {
        v = v - 0xA;
        if (v < 0) {
            v = 0;
        }
    } else {
        v = v + 0xA;
        if (v > 0xFF) {
            v = 0xFF;
        }
    }
    *(u8 *)((u8 *)self + 0x21) = (u8)v;

    {
        u32 flags = *(u32 *)((u8 *)self + 8);
        u32 sh = 0x800;
        v = *(u8 *)((u8 *)self + 0x14);
        if (flags & (sh << 0)) {
            v = v - 2;
            if (v < 0x32) v = 0x32;
        } else {
            v = v + 2;
            if (v > 0x64) v = 0x64;
        }
        *(u8 *)((u8 *)self + 0x14) = (u8)v;

        v = *(u8 *)((u8 *)self + 0x15);
        if (flags & (sh << 1)) {
            v = v - 2;
            if (v < 0x32) v = 0x32;
        } else {
            v = v + 2;
            if (v > 0x64) v = 0x64;
        }
        *(u8 *)((u8 *)self + 0x15) = (u8)v;

        v = *(u8 *)((u8 *)self + 0x16);
        if (flags & (sh << 2)) {
            v = v - 2;
            if (v < 0x32) v = 0x32;
        } else {
            v = v + 2;
            if (v > 0x64) v = 0x64;
        }
        *(u8 *)((u8 *)self + 0x16) = (u8)v;
    }

    if (*(u32 *)(*(u8 **)((u8 *)self + 0x24) + 8) != 0) {
        i = 0;
        p = self;
        j = 0;
        while (i < 3) {
            bit = 0x100 << i;
            if (*(void **)(*(u8 **)(*(u8 **)((u8 *)self + 0x24) + 8) + i) == NULL) {
                break;
            }
            if (*(u32 *)((u8 *)self + 8) & bit) {
                sum = 0;
                *(s16 *)((u8 *)p + 0xE) = (s16)(*(s16 *)((u8 *)p + 0xE) + 1);
                arr = *(void ***)(*(u8 **)((u8 *)self + 0x24) + 8);
                base = arr[i];
                j = 0;
                for (;;) {
                    if ((*(u16 *)base & 0x8000) != 0) {
                        *(u32 *)((u8 *)self + 8) &= ~bit;
                        break;
                    }
                    sum += ((u8 *)base)[0x13];
                    if (*(s16 *)((u8 *)p + 0xE) < (s16)sum) {
                        break;
                    }
                    if (*(s16 *)((u8 *)p + 0xE) == (s16)sum) {
                        if ((*(u16 *)((u8 *)arr[i] + j + 0x16) & 4) != 0) {
                            *(u32 *)((u8 *)self + 8) &= ~bit;
                            break;
                        }
                    }
                    base = (u8 *)base + 0x16;
                    j += 0x16;
                }
            }
            p = (u8 *)p + 2;
            i += 1;
        }
    }
}
#pragma use_lmw_stmw reset

#pragma cplusplus on
extern "C" void fn_801D1C80(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v6();
}

#pragma cplusplus on
extern "C" void fn_801D1CAC(void *arg0) {
    void fn_8013ED84(void *, s16);
    void fn_801475FC(void *, s32);
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    extern f64 lbl_8036B5D8;
    extern u8 lbl_8027E0F8[];
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v7() = 0;
        virtual void v6() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual s32 v12() = 0;
    };
    s32 *pads;
    register s32 held;
    s32 pressed;
    s32 pad3;
    s16 temp_r0_2;
    s16 temp_r3;
    s16 temp_r4_2;
    s16 temp_r4_3;
    s16 temp_r4_4;
    s16 temp_r5;
    s16 temp_r7;
    s32 var_r3;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r6;
    u8 var_r5;

    var_r3 = ((Obj *)arg0)->v12();
    temp_r0 = *(s32 *)((u8 *)arg0 + 0x6C);
    if ((s16)var_r3 > (s16)temp_r0) {
        var_r3 = (s16)temp_r0;
    }
    var_r5 = 0;
    temp_r7 = *(s16 *)((u8 *)arg0 + 0x4E);
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r5 = 1;
    }
    if (var_r5 == 0) {
        temp_r5 = *(s16 *)((u8 *)arg0 + 0x4E);
        pads = (s32 *)lbl_80367240;
        held = pads[1];
        pressed = held & (pads[2] ^ held);
        pad3 = pads[3];
        if ((s16)(s32)*(f32 *)((u8 *)arg0 + 0x5C) == 0) {
            if (pad3 & 0x08000008) {
                if (temp_r7 == 0) {
                    if (pad3 == pressed) {
                        temp_r4 = (s16)temp_r0 - (s16)var_r3;
                        temp_r6 = (s16)temp_r0 - 1;
                        *(s16 *)((u8 *)arg0 + 0x4E) = temp_r5 + temp_r6;
                        *(s16 *)((u8 *)arg0 + 0x54) = (temp_r4 > 0) ? temp_r4 : 0;
                        if (*(s16 *)((u8 *)arg0 + 0x4E) > temp_r6) {
                            *(s16 *)((u8 *)arg0 + 0x4E) = temp_r6;
                        }
                    }
                } else {
                    *(s16 *)((u8 *)arg0 + 0x4E) = temp_r5 - 1;
                    temp_r4_2 = *(s16 *)((u8 *)arg0 + 0x4E);
                    if (temp_r4_2 > 0) {
                        temp_r3 = *(s16 *)((u8 *)arg0 + 0x54);
                        if (temp_r4_2 - temp_r3 == 0) {
                            *(s16 *)((u8 *)arg0 + 0x54) = temp_r3 - 1;
                            *(f32 *)((u8 *)arg0 + 0x5C) = (f32)-*(s16 *)((u8 *)arg0 + 0x56);
                        }
                    }
                }
                if (temp_r5 != *(s16 *)((u8 *)arg0 + 0x4E)) {
                    *(s16 *)((u8 *)arg0 + 0x8E) = 1;
                    *(u8 *)((u8 *)arg0 + 0x85) = 1;
                }
            } else if (pad3 & 0x04000004) {
                register temp_r4_3 = (s16)temp_r0 - 1;
                if (temp_r7 == temp_r4_3) {
                    if (pad3 == pressed) {
                        *(s16 *)((u8 *)arg0 + 0x4E) = temp_r5 - temp_r4_3;
                        *(s16 *)((u8 *)arg0 + 0x54) = 0;
                    }
                } else {
                    *(s16 *)((u8 *)arg0 + 0x4E) = temp_r5 + 1;
                    if (*(s16 *)((u8 *)arg0 + 0x4E) > temp_r4_3) {
                        *(s16 *)((u8 *)arg0 + 0x4E) = temp_r4_3;
                    }
                    temp_r0_2 = *(s16 *)((u8 *)arg0 + 0x4E);
                    if (temp_r0_2 < temp_r4_3) {
                        temp_r4_4 = *(s16 *)((u8 *)arg0 + 0x54);
                        if ((s16)var_r3 - 1 == temp_r0_2 - temp_r4_4) {
                            *(s16 *)((u8 *)arg0 + 0x54) = temp_r4_4 + 1;
                            *(f32 *)((u8 *)arg0 + 0x5C) = (f32)*(s16 *)((u8 *)arg0 + 0x56);
                        }
                    }
                }
                if (temp_r5 != *(s16 *)((u8 *)arg0 + 0x4E)) {
                    *(s16 *)((u8 *)arg0 + 0xB6) = 1;
                    *(u8 *)((u8 *)arg0 + 0xAD) = 1;
                }
                if (temp_r5 != *(s16 *)((u8 *)arg0 + 0x4E)) {
                    fn_801475FC(lbl_8027E0F8 + 8, 0x64);
                }
            }
        }
    }
    fn_8013ED84(*(void **)((u8 *)arg0 + 0x48),
                (s16)(*(s16 *)((u8 *)arg0 + 0x56) * *(s16 *)((u8 *)arg0 + 0x54)
                      - (s32)*(f32 *)((u8 *)arg0 + 0x5C)));
}

#pragma global_optimizer off
#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801D2118(void *arg0, s32 arg1) {
    struct Node { Node *prev; Node *next; void *obj; void *spr; void *data; };
    struct Obj {
        virtual void v0()=0; virtual void v1()=0; virtual void v2()=0;
        virtual void v3()=0; virtual void v4()=0;
        virtual void v5(s32)=0;
        virtual void v6()=0; virtual void v7()=0; virtual void v8()=0;
        virtual void v9()=0; virtual void v10()=0; virtual void v11()=0;
        virtual void v12()=0;
        virtual void v13()=0;
        virtual s32 v14()=0;
        virtual void v15(s16, s16, void *)=0;
        virtual void v16()=0;
        u8 pad4[6];
        s16 unkA, unkC;
        u8 padE[0x12-0xE];
        s16 a12, a14, a16, a18;
        u8 pad1A[0x22-0x1A];
        s16 a22;
        u8 pad24[0x54-0x24];
        s16 a54, a56;
        u8 pad58[0x5C-0x58];
        f32 a5c;
        s16 a60, a62;
        s16 rect[4];
        u32 a6c;
        u8 pad70[0x74-0x70];
        Node *list;
        u8 pad78[0x84-0x78];
        u8 flag84;
        u8 pad85[0xAC-0x85];
        u8 flagAC;
    };
    struct Sub {
        virtual void v0()=0; virtual void v1()=0; virtual void v2()=0;
        virtual void v3()=0; virtual void v4()=0; virtual void v5()=0;
        virtual void v6()=0; virtual void v7()=0; virtual void v8()=0;
        virtual void v9()=0; virtual void v10()=0;
        virtual void v11(s32)=0;
    };
    typedef void (Sub::*PTMF)(s32);
    struct Pair { PTMF ptmf; s32 arg; };
    void fn_8013F748(void *, s16 *, s16 *);
    void fn_8000A258(void); void fn_8000A248(void); void fn_80009B98(void);
    void fn_80009C0C(f32); void fn_8013F920(void *);
    void fn_80009BC0(void (*)(void *), s16 *);
    void fn_80202300(void *, s32, f32);
    void fn_80202024(void *, void *, void *);
    void fn_802025E8(void *, void *, f32, f32, f32);
    void fn_80202574(void *, void *, f32, f32, f32);
    void fn_80009D74(f32, f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_80009B8C(s32);
    void fn_80007898(s32);
    void fn_80007340(void *, s32);
    void fn_80007884(void);
    void fn_8004BD1C(void *, f32 *, f32);
    u8 fn_800BE890(void *);
    void fn_8005F7E0(void *, s32, s32, s32);
    void fn_8005F7B0(void *, s32);
    void fn_8005F780(void *, s32);
    void fn_80060060(void *);
    void fn_800609DC(void *);
    void fn_8004DDB8(s32);
    extern f32 lbl_8036B5F8, lbl_8036B5E4, lbl_8036B5E8;
    extern f32 lbl_8036B5FC, lbl_8036B600, lbl_8036B604;
    extern f32 lbl_8036B608, lbl_8036B5E0, lbl_8036B60C, lbl_8036B610;
    extern f32 lbl_80367098[];
    extern PTMF lbl_80299980;
    extern void fn_801D2E9C;
    extern void fn_80069F04;
    u8 *raw;
    Obj *self;
    s32 arg;
    s32 visible;
    s16 index, idx0, row_h, scroll, sign, n, row, endrow;
    s16 xbase, xoff, y;
    s32 ypos;
    s16 *rect;
    s16 w, h;
    Node *node;
    Node *it, *sent;
    void *spr;
    f32 fx, fy;
    f32 sp28[2];
    u8 sp34[0x30];
    u8 sp64[0x30];
    Pair p[2];

    raw = (u8 *)arg0;
    self = (Obj *)arg0;
    arg = arg1;
    self->v16();
    self->v5(arg);
    rect = self->rect;
    h = (s16)(self->a18 - self->a14);
    w = (s16)(self->a16 - self->a12);
    rect[0] = 0;
    rect[1] = 0;
    rect[2] = w;
    rect[3] = h;
    fn_8013F748(self, rect, rect);
    rect = self->rect + 2;
    fn_8013F748(self, rect, rect);
    fn_8000A258();
    fn_80009C0C(lbl_8036B5F8);
    fn_80009BC0(fn_8013F920, self->rect);
    fn_8000A248();

    visible = self->v14();
    idx0 = self->a54;
    index = idx0;
    self->v12();
    {
        f32 zero = lbl_8036B5E4;
        f32 fval = self->a5c;
        scroll = (s16)fval;
        row_h = self->a56;
        if (fval < zero) {
            f32 value = (f32)row_h * lbl_8036B5E8 + self->a5c;
            self->a5c = value;
            if (value >= -lbl_80367098[0]) {
                self->a5c = zero;
            }
        } else if (fval > zero) {
            f32 value = self->a5c - (f32)row_h * lbl_8036B5E8;
            self->a5c = value;
            if (value <= lbl_80367098[0]) {
                self->a5c = zero;
            }
        }
    }
    if (scroll < 0) {
        sign = -1;
    } else {
        sign = (s16)(scroll > 0);
    }
    if (sign > 0 && idx0 >= 0) {
        index = (s16)(index - 1);
    }
    node = self->list;
    n = index;
    if (index >= 0) {
        while (n > 0) {
            node = node->next;
            n = (s16)(n - 1);
        }
    } else {
        while (n < 0) {
            node = node->prev;
            n = (s16)(n + 1);
        }
    }
    xbase = self->a60;
    row = (s16)((-sign & ~sign) >> 31);
    endrow = (s16)visible;
    if (sign < 0) {
        endrow = (s16)(endrow + 1);
    }
    ypos = (s32)row * (s32)row_h;
    for (; row < endrow; ypos += row_h, row = (s16)(row + 1), index = (s16)(index + 1)) {
        if ((u32)(s16)index >= self->a6c) {
            break;
        }
        y = (s16)(scroll + ypos + self->a62);
        self->v15(xbase, y, (u8 *)node + 8);
        node = node->next;
    }

    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
    self->v5(arg);

    index = self->a54;
    if (sign > 0 && index >= 0) {
        index = (s16)(index - 1);
    }
    node = self->list;
    n = index;
    if (index >= 0) {
        while (n > 0) {
            node = node->next;
            n = (s16)(n - 1);
        }
    } else {
        while (n < 0) {
            node = node->prev;
            n = (s16)(n + 1);
        }
    }
    xoff = (s16)(self->a60 - 0x10);
    fn_80202300(sp34, 0x79, lbl_8036B5FC);
    fn_80202300(sp64, 0x78, lbl_8036B600);
    fn_80202024(sp64, sp34, sp64);
    fn_802025E8(sp64, sp64, lbl_8036B604, lbl_8036B604, lbl_8036B604);
    fn_8000A258();
    fn_80009D74(lbl_8036B5E4, lbl_8036B5E4, lbl_8036B608 + (f32)self->a22, lbl_8036B5E0, lbl_8036B608);
    fn_8000A174(0, 0x410);
    fn_80009B8C(0xFF);
    if ((s16)self->a5c != 0) {
        fn_80009BC0(fn_8013F920, self->rect);
    }
    fn_8000A248();
    fn_80007898(0xB);
    fn_80007340(&fn_801D2E9C, 0);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B60C);
    fn_8000A248();

    row = (s16)((-sign & ~sign) >> 31);
    endrow = (s16)visible;
    if (sign < 0) {
        endrow = (s16)(endrow + 1);
    }
    ypos = (s32)row * (s32)row_h;
    for (; row < endrow; ypos += row_h, row = (s16)(row + 1), index = (s16)(index + 1)) {
        if ((u32)(s16)index >= self->a6c) {
            break;
        }
        spr = node->spr;
        y = (s16)(ypos + self->a62 + self->a56 + scroll);
        if (spr != NULL) {
            fx = (f32)(s16)(xoff + self->unkA);
            fy = (f32)(s16)(y + self->unkC);
            fn_8004BD1C(node->data, sp28, lbl_8036B604);
            fx += sp28[0];
            fy += sp28[1];
            fn_80202574(sp64, (u8 *)spr + 0x10, fx, fy, (f32)self->a22);
            if (fn_800BE890(node->obj) != 0) {
                *(u32 *)spr &= ~0x20000u;
            } else {
                *(u32 *)spr |= 0x20000u;
            }
            fn_8005F7E0(spr, 0x80, 0x80, 0x80);
            fn_8005F7B0(spr, 0xFF);
            fn_8005F780(spr, 0xFF);
            fn_80060060(spr);
            fn_800609DC(spr);
            fn_80007898(0xB);
            fn_80007340(&fn_80069F04, (s32)spr);
            fn_80007884();
        }
        node = node->next;
    }

    fn_8004DDB8(self->a22 - 1);
    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
    self->v5(arg);
    fn_8000A258();
    fn_80009C0C(lbl_8036B610);
    fn_8000A248();

    self->flag84 = (u8)(self->a54 > 0);
    {
        s16 diff = (s16)((s16)self->a6c - (s16)self->v14());
        self->flagAC = (u8)(self->a54 < diff);
    }
    ((Sub *)(raw + 0x78))->v11(0x10);
    ((Sub *)(raw + 0xA0))->v11(0x10);
    {
        void *bar = *(void **)(raw + 0x48);
        *(s16 *)((u8 *)bar + 0x3C) = (s16)((s16)self->a6c * row_h);
        *(s16 *)((u8 *)bar + 0x3E) = (s16)((s16)visible * row_h);
        *(s16 *)((u8 *)bar + 0x40) = (s16)((row_h * self->a54) - scroll);
    }
    p[0].ptmf = lbl_80299980;
    p[0].arg = arg;
    p[1].ptmf = lbl_80299980;
    p[1].arg = arg;
    it = *(Node **)(raw + 0x44);
    sent = (Node *)(raw + 0x40);
    while (it != sent) {
        (((Sub *)it->obj)->*p[0].ptmf)(p[0].arg);
        it = it->next;
    }
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset
#pragma global_optimizer reset

#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_801D283C(void *arg0) {
    void fn_8015BAA8(s32, s32, s16, s16, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_8015BAA8(0, 0,
        (s16)(*(s16 *)((u8 *)arg0 + 0xE) - *(s16 *)((u8 *)arg0 + 0xA)),
        (s16)(*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0xC)),
        0xFF, 0x10);
}
#pragma cplusplus reset

#pragma cplusplus reset
s32 fn_801D28A8(s32 arg0, s32 arg1)
{
    if (arg0 < 0) {
        return -1;
    }
    
    if (arg1 < 0) {
        return -1;
    }
    
    if (arg0 >= 0x40) {
        return -1;
    }
    
    if (arg1 >= 0x40) {
        return -1;
    }
    
    return ((arg0 * 0x40) + arg1);
}

s32 fn_801D2A38(void *arg0) {
    s32 fn_800BE890(s32);
    struct Node {
        struct Node *prev;
        struct Node *next;
        s32 unk8;
    };
    s32 tmp;
    s16 n;
    struct Node *node;

    if (*(u32 *)((u8 *)arg0 + 0x6C) == 0) {
        return 0;
    }
    tmp = *(s16 *)((u8 *)arg0 + 0x4E);
    node = *(struct Node **)((u8 *)arg0 + 0x74);
    n = (s16)tmp;
    if (n >= 0) {
        goto loop_pos;
        do {
            node = node->next;
            n -= 1;
        loop_pos:
            ;
        } while (n > 0);
    } else {
        goto loop_neg;
        do {
            node = node->prev;
            n += 1;
        loop_neg:
            ;
        } while (n < 0);
    }
    return fn_800BE890(node->unk8);
}

int fn_801D2AAC(void *arg0) {
    struct Node {
        struct Node *prev;
        struct Node *next;
        s32 unk8;
    };
    struct Node *node;
    s16 n;

    if (*(u32 *)((u8 *)arg0 + 0x6C) == 0) {
        return 0;
    }
    n = *(s16 *)((u8 *)arg0 + 0x4E);
    node = *(struct Node **)((u8 *)arg0 + 0x74);
    if (n >= 0) {
        goto loop_pos;
        do {
            node = node->next;
            n -= 1;
        loop_pos:
            ;
        } while (n > 0);
    } else {
        goto loop_neg;
        do {
            node = node->prev;
            n += 1;
        loop_neg:
            ;
        } while (n < 0);
    }
    return node->unk8;
}

s32 fn_801D2B04(void *arg0) {
    s32 fn_8000E0E4(void);
    s32 fn_800A8A88(s32);
    void fn_800BE728(s32);
    struct Node {
        struct Node *prev;
        struct Node *next;
        s32 unk8;
        u8 padC[4];
        void *unk10;
    };
    s32 tmp;
    s16 n;
    struct Node *node;
    void *p;

    if (*(u32 *)((u8 *)arg0 + 0x6C) == 0) {
        return 0;
    }
    tmp = *(s16 *)((u8 *)arg0 + 0x4E);
    node = *(struct Node **)((u8 *)arg0 + 0x74);
    n = (s16)tmp;
    if (n >= 0) {
        goto loop_pos;
        do {
            node = node->next;
            n -= 1;
        loop_pos:
            ;
        } while (n > 0);
    } else {
        goto loop_neg;
        do {
            node = node->prev;
            n += 1;
        loop_neg:
            ;
        } while (n < 0);
    }
    p = node->unk10;
    if (p != NULL) {
        return fn_800A8A88(*(s32 *)((u8 *)p + 0x188));
    }
    fn_800BE728(node->unk8);
    return fn_8000E0E4();
}

void fn_801D2B94(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *, s16, s32, s16);
    M2C_UNK spC;
    s16 spA;
    s16 sp8;
    s16 temp_r6;
    s16 temp_r6_2;
    s32 temp_r7;

    M2C_FIELD(M2C_FIELD(arg1, void **, 0), M2C_UNK (**)(void *), 0x30)(arg1);
    temp_r6 = M2C_FIELD(arg1, s16 *, 0x4E) - M2C_FIELD(arg1, s16 *, 0x54);
    temp_r6_2 = M2C_FIELD(arg1, s16 *, 0x62);
    temp_r7 = M2C_FIELD(arg1, s16 *, 0x56) * temp_r6;
    sp8 = M2C_FIELD(arg1, s16 *, 0x60);
    spA = temp_r7 + temp_r6_2;
    *arg0 = *fn_8013F748(arg1, &spC, &sp8, temp_r6_2, temp_r7, temp_r6);
}

void *fn_801D2C20(void) {
    extern u16 lbl_8027E0F8[];
    return &lbl_8027E0F8[0x12];
}

#pragma cplusplus on
extern "C" void fn_801D2C30(void *arg0) {
    void fn_801C1824(void *, void *, void *, void *);
    void fn_801D2FE4(void *, void *, void *, void *);
    s32 fn_800BE914(void);
    u8 fn_800BE800(s32);
    s32 fn_800BE728(s32);
    u8 fn_80019CC0(void);
    u32 fn_80016BDC(s32);
    void fn_800616A0(void *);
    void *fn_80061870(void);
    void fn_800506E0(u32, s32, void *);
    s32 fn_800639B4(void);
    void fn_8006140C(void *);

    struct Obj {
        virtual void v0() {}
        virtual void v1() {}
        virtual void v2() {}
        virtual void v3() {}
        virtual void v4() {}
        virtual void v5() {}
        virtual void v6() {}
        virtual void v7() {}
        virtual void v8() {}
        virtual void v9() {}
        virtual void v10() {}
        virtual void v11() {}
        virtual s16 v12() { return 0; }
    };

    struct Self {
        u8 unk00[0x4E];
        s16 field4E;
        u8 unk50[4];
        s16 field54;
        u8 unk56[0x16];
        u32 count;
        u8 unk70[4];
        void *field74;
    };

    void *sp18;
    void *sp14;
    s32 sp10;
    void *spC;
    s32 sp8;
    struct {
        s32 idx;
        void *node;
        u32 unit;
    } row;
    u32 unit;
    s32 item;
    s16 cur;
    void *endPtr;
    s32 idx;
    Self *self;
    s32 total;
    void **p14;
    void **p18;

    self = (Self *)arg0;
    endPtr = (u8 *)self + 0x70;
    cur = self->field4E;
    p14 = &sp14;
    p18 = &sp18;
    *p18 = endPtr;
    *p14 = self->field74;
    fn_801C1824(&sp10, &self->count, p14, p18);
    total = fn_800BE914();
    idx = 0;
    while (idx < total) {
        if (fn_800BE800(idx) != 0) {
            s32 kind;
            row.idx = idx;
            row.node = 0;
            row.unit = 0;
            item = fn_800BE728(idx);
            unit = 0;
            kind = (s32)(u8)fn_80019CC0();
            if (kind == 5) {
            } else if (kind >= 5) {
            } else {
                switch (kind) {
                case 1:
                    unit = fn_80016BDC(item);
                    break;
                }
            }
            if (unit != 0) {
                u32 *p;
                if (row.node != 0) {
                    fn_800616A0(row.node);
                }
                row.node = fn_80061870();
                *(s32 *)((u8 *)row.node + 4) = (s32)(unit + 0x1C);
                p = (u32 *)row.node;
                *p = *p | 0x50028400;
                fn_800506E0(unit, 0, p);
                *(s32 *)((u8 *)row.node + 0x44) = fn_800639B4();
                row.unit = unit;
                *(u32 *)((u8 *)row.node + 0x90) = unit;
                fn_8006140C(row.node);
            }
            spC = endPtr;
            fn_801D2FE4(&sp8, &self->count, &spC, &row);
            if (row.node != 0) {
                fn_800616A0(row.node);
            }
        }
        idx += 1;
    }
    {
        u32 count = self->count;
        s32 cur32 = cur;
        register u32 last = count - 1;
        s16 v;
        s16 scroll;
        if ((u32)cur32 > last) {
            cur = (s16)last;
        }
        if (cur < 0) {
            cur = 0;
        }
        v = ((Obj *)self)->v12();
        if (count <= (u32)v) {
            self->field4E = cur;
            self->field54 = 0;
        } else {
            scroll = self->field54;
            if ((u32)(count - scroll) < (u32)v) {
                self->field4E = cur;
                self->field54 = (s16)(count - v);
            } else if (scroll < cur && (s32)(cur - scroll) < (s32)(v - 1)) {
                self->field4E = cur;
            } else if (cur == 0) {
                self->field54 = cur;
                self->field4E = cur;
            } else {
                self->field4E = cur;
                self->field54 = (s16)(cur - 1);
            }
        }
    }
}
#pragma cplusplus reset

void *fn_801D2E40(void *arg0, s16 arg1) {
    void fn_800616A0(void *);
    void fn_800C428C(void *);
    void *temp;

    if (arg0 != NULL) {
        temp = *(void **)((u8 *)arg0 + 4);
        if (temp != NULL) {
            fn_800616A0(temp);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801D2E9C(void) {
    void fn_80059C2C(int, int, int, int, int);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

#pragma cplusplus on
extern "C" void *fn_801D2ED0(void *arg0, s16 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    typedef struct DtorNode {
        struct DtorNode *prev;
        struct DtorNode *next;
    } DtorNode;
    typedef struct {
        u32 unk0;
        DtorNode node;
    } DtorList;
    typedef struct Owner {
        void *vtbl;
        u8 pad4[0x68];
        DtorList list;
        void *sub78;
        u8 pad7C[0x24];
        void *subA0;
    } Owner;
    void fn_801C1824(void *, void *, void *, void *);
    void fn_8013F2A4(void *, s32);
    void fn_800C428C(void *);
    extern u8 lbl_8029998C[];
    extern u8 lbl_80295478[];

    DtorNode *sp10;
    DtorNode *spC;
    u8 sp8[4];
    DtorNode *end;
    Owner *a0;

    a0 = (Owner *)arg0;
    if (arg0) {
        a0->vtbl = lbl_8029998C;
        if (&a0->subA0) {
            a0->subA0 = lbl_80295478;
            ((Obj *)&a0->subA0)->v2();
        }
        if (&a0->sub78) {
            a0->sub78 = lbl_80295478;
            ((Obj *)&a0->sub78)->v2();
        }
        if (&a0->list) {
            if (&a0->list) {
                if (&a0->list) {
                    end = &a0->list.node;
                    sp10 = end;
                    spC = end->next;
                    fn_801C1824(sp8, &a0->list, &spC, &sp10);
                }
            }
        }
        fn_8013F2A4(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}
#pragma cplusplus reset

s16 fn_801D2FC0(void *arg0) {
    s16 a = M2C_FIELD(arg0, s16 *, 0x16);
    s16 b = M2C_FIELD(arg0, s16 *, 0x12);
    return (s16) (a - b);
}

void fn_801D2FD4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x58) = arg1;
}

s16 fn_801D2FDC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x58);
}

void *fn_801D322C(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    void fn_801403F0(void);
    extern u16 lbl_802999D0[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_802999D0, arg0);
    if (temp_r3 != NULL) {
        fn_801403F0();
        *(s32 *)((char *)temp_r3 + 0x40) = 0;
        *(s32 *)((char *)temp_r3 + 0x48) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
        *(s32 *)((char *)temp_r3 + 0x50) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
    }
    return temp_r3;
}

void fn_801D3288(void* unit) {
    // Simplest version that might just compile.
    if (unit == NULL)
        return;
}

void fn_801D341C(void) {
    void fn_8011D79C(void *);
    void fn_80231D94(void *, ...);
    extern u8 lbl_803682DC;
    extern void *lbl_803682D8;
    extern u8 lbl_8027E148[];
    extern u8 lbl_80330708[];

    if ((s8)lbl_803682DC == 0) {
        lbl_803682DC = 1;
        lbl_803682D8 = &lbl_8027E148[0x45];
    }

    fn_80231D94(lbl_803682D8, &lbl_8027E148[0x54], lbl_80330708[0x10], &lbl_8027E148);
    fn_8011D79C(lbl_803682D8);
}

void fn_801D3488(s32 arg0) {
    void fn_8000C188(s32);
    void fn_8011D79C(void *);
    void fn_80231D94(void *, ...);
    extern u8 lbl_803682D4;
    extern void *lbl_803682D0;
    extern u8 lbl_8027E148[];
    extern u8 lbl_80330708[];

    if ((s8)lbl_803682D4 == 0) {
        lbl_803682D4 = 1;
        lbl_803682D0 = &lbl_8027E148[0x65];
    }

    fn_80231D94(lbl_803682D0, &lbl_8027E148[0x76], lbl_80330708[0x10], &lbl_8027E148);
    fn_8011D79C(lbl_803682D0);
    fn_8000C188(arg0);
}

void fn_801D3508(s32 arg0) {
    void fn_8000C188(s32);
    void fn_8011D79C(void *);
    void fn_80231D94(void *, ...);
    extern u8 lbl_803682CC;
    extern void *lbl_803682C8;
    extern u8 lbl_8027E148[];
    extern u8 lbl_80330708[];

    if ((s8)lbl_803682CC == 0) {
        lbl_803682CC = 1;
        lbl_803682C8 = &lbl_8027E148[0x89];
    }

    fn_80231D94(lbl_803682C8, &lbl_8027E148[0x98], lbl_80330708[0x10], &lbl_8027E148);
    fn_8011D79C(lbl_803682C8);
    fn_8000C188(arg0);
}

void fn_801D3588(s32 arg0) {
    void fn_8000C070(s32, s32);
    extern u8 lbl_802CA264[];
    u8 *node;
    u32 flags;

    node = *(u8 **)(lbl_802CA264 + 0x48);
    while (node != NULL) {
        flags = *(u32 *)(node + 0x1A0);
        node = *(u8 **)(node + 0x184);
        if (flags & 0x8000) {
            fn_8000C070(arg0, 2);
            return;
        }
    }
    fn_8000C070(arg0, 3);
}

#pragma cplusplus on
extern "C" void fn_801D35E0(void *arg0) {
    void fn_8000C188(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_80140210(void *, void *, s32);
    void fn_801475FC(void *, s32);
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern u8 lbl_8027E148[];
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7(void *) = 0;
    };
    u8 gate;
    unsigned long t;
    s32 flags;

    if (lbl_80367110 & 3) {
        fn_8000C188(arg0);
        return;
    }
    ((Obj *)fn_8013FF94(arg0, 0x10, 0))->v7(arg0);
    gate = 0;
    flags = lbl_80367110;
    if (flags & 0x10) {
        if (!(flags & 0x20)) {
            gate = 1;
        }
    }
    if (gate == 0) {
        t = *(s32 *)((char *)lbl_80367240 + 4);
        if (t & (*(s32 *)((char *)lbl_80367240 + 8) ^ t) & 0x300) {
            fn_801475FC(lbl_8027E148 + 0xA9, 0x64);
            fn_80140210(arg0, fn_8013FF94(arg0, 0x10, 0), 0);
            fn_8000C188(arg0);
        }
    }
}
#pragma cplusplus reset

void fn_801D36B8(void *arg0) {
    void *fn_800C42D8(s32);
    void *fn_801D3860(void *, s32, s32, s32);
    void fn_801400F4(void *, void *);
    void fn_80140234(void *, void *, s32);
    extern s32 lbl_80367110;
    void *obj;

    if ((lbl_80367110 & 3) == 0) {
        obj = fn_800C42D8(0xA0);
        if (obj != NULL) {
            obj = fn_801D3860(obj, 0x40, 0x10, 0xA);
        }
        *(s16 *)((u8 *)obj + 8) = 0x10;
        *(u32 *)((u8 *)obj + 0x34) |= 0x10;
        *(s16 *)((u8 *)obj + 0x24) = 8;
        fn_801400F4(arg0, obj);
        fn_80140234(arg0, obj, 1);
    }
}

void fn_801D3750(s32 arg0) {
    void fn_8011D908(void *, s32);
    void fn_80231D94(void *, ...);
    extern u8 lbl_803682C4;
    extern void *lbl_803682C0;
    extern u8 lbl_8027E148[];
    extern u8 lbl_80330708[];

    if ((s8)lbl_803682C4 == 0) {
        lbl_803682C4 = 1;
        lbl_803682C0 = &lbl_8027E148[0xB9];
    }

    fn_80231D94(lbl_803682C0, &lbl_8027E148[0xCA], lbl_80330708[0x10], &lbl_8027E148);
    fn_8011D908(lbl_803682C0, arg0);
}

void fn_801D37CC(void *arg0) {
    s32 fn_8003FCCC();
    M2C_UNK fn_80162054();
    M2C_UNK fn_801620AC();
    extern s32 lbl_80367110;
    fn_801620AC();
    M2C_FIELD(arg0, s32 *, 0x44) = fn_8003FCCC();
    fn_80162054();
    lbl_80367110 &= 0xFFFFFFFC;
}

void fn_801D3810(s32 arg0) {
    void fn_800C0BAC(s32);
    void fn_8013FE0C(void);
    extern void *lbl_80367240;
    s32 temp_r4;

    fn_8013FE0C();
    temp_r4 = ((s32 *)lbl_80367240)[1];
    if (temp_r4 & (((s32 *)lbl_80367240)[2] ^ temp_r4) & 0x1000) {
        fn_800C0BAC(arg0);
    }
}

void fn_801D3860(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 < 0) {
        return;
    }
    
    // This part was my initial guess - let's see if we can match this assignment
    // from the assembly. Looking at last diff it seems like there's more logic.
    if (arg2 >= 0x400) {
        arg2 = 0x3FF;
    }
    
    lbl_80331D00[arg0] = ((arg1 & 0xFFFF) << 0xA) | (arg2 & 0x3FF);
}

void fn_801D3A4C(u8 *arg0) {
    s16 x;
    s16 four;
    s16 y;
    s16 eight;
    s16 a;
    s16 zero;
    s16 b;
    s16 w;
    s16 h;
    s16 v12;
    s16 v16;
    s16 v14;
    s16 v18;
    s16 t;

    x = *(s16 *)(arg0 + 0xC);
    four = 4;
    y = *(s16 *)(arg0 + 0x10);
    eight = 8;
    a = *(s16 *)(arg0 + 0xA);
    zero = 0;
    b = *(s16 *)(arg0 + 0xE);
    w = (s16)(y - x);
    *(s16 *)(arg0 + 0x12) = four;
    h = (s16)(b - a);
    *(s16 *)(arg0 + 0x14) = eight;
    h = h - 4;
    w = w - 8;
    *(s16 *)(arg0 + 0x16) = h;
    *(s16 *)(arg0 + 0x18) = w;

    v12 = *(s16 *)(arg0 + 0x12);
    v16 = *(s16 *)(arg0 + 0x16);
    t = (s16)(v16 - v12);
    *(s16 *)(arg0 + 0x5E) = t >> 1;
    *(s16 *)(arg0 + 0x60) = zero;
    *(s16 *)(arg0 + 0x62) = zero;

    v12 = *(s16 *)(arg0 + 0x12);
    v16 = *(s16 *)(arg0 + 0x16);
    v14 = *(s16 *)(arg0 + 0x14);
    t = (s16)(v16 - v12);
    v18 = *(s16 *)(arg0 + 0x18);
    t = t >> 1;
    *(s16 *)(arg0 + 0x86) = t;
    *(s16 *)(arg0 + 0x88) = v18 - v14;
    *(s16 *)(arg0 + 0x8A) = zero;
}

void fn_801D3AE0(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80299CC4[];
    void *temp_r3;
    temp_r3 = fn_8000CAA0(lbl_80299CC4, arg0);
    *(u32 *)((u8 *)temp_r3 + 0x34) = 2;
}

void fn_801D3B14(void *arg0)
{
    extern s32 lbl_80367110;
    extern u8 lbl_80331FB8[];
    extern u8 lbl_80299CC4[];
    extern s32 lbl_803682E0;

    extern s32 fn_801E3620(void *);
    extern void *fn_8000CAA0(void *, void *);

    u8 *entry;

    if (!(lbl_80367110 & 0x10)) {
        if ((u8)fn_801E3620(lbl_80331FB8) == 0) {
            return;
        }
    }

    entry = (u8 *)fn_8000CAA0(lbl_80299CC4, arg0);

    *(s32 *)(entry + 0x34) = 1;
    lbl_803682E0 = 0;
}

void fn_801D3B7C(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80299CC4[];
    extern u8 lbl_80331FB8[];
    extern s32 lbl_803682E0;
    u8 *p = lbl_80331FB8;
    void *ret;

    *(s32 *)(p + 0) = -1;
    *(s32 *)(p + 4) = -1;
    p[0x44] = 1;
    ret = fn_8000CAA0(lbl_80299CC4, arg0);
    *(s32 *)((u8 *)ret + 0x34) = 0;
    lbl_803682E0 = 0;
}

void fn_801D3BD0(void *arg0) {
    void fn_8000BF00(void*);
    void fn_8000C60C(void);
    void fn_8006EDA0(void*);
    void fn_800C4588(void*);
    void fn_801457B4(void);
    void fn_80161F7C(void);
    extern u8 lbl_80299C58[];
    extern u8 lbl_80299A78[];
    void *obj;
    s32 i;
    obj = *(void**)((u8*)arg0 + 0x30);
    fn_8000BF00(lbl_80299C58);
    i = 0;
    do {
        if (*(u32*)(lbl_80299A78 + i * 0xc + 8) != 0) {
            fn_8006EDA0(lbl_80299A78 + i * 0xc + 8);
        }
        *(u32*)(lbl_80299A78 + i * 0xc + 8) = 0;
        i++;
    } while (i < 0x28);
    if (*(u8*)((u8*)obj + 0x5a) != 0) {
        fn_80161F7C();
    }
    if (*(void**)((u8*)obj + 0xc) != 0) {
        fn_8000C60C();
    }
    if (*(u32*)((u8*)obj + 0x8) != 0) {
        fn_8006EDA0((u8*)obj + 0x8);
    }
    fn_800C4588(obj);
    *(u32*)((u8*)arg0 + 0x30) = 0;
    fn_801457B4();
}

#pragma opt_common_subs off
void fn_801D3C88(void *arg0) {
    void *fn_800C4638(s32, void *, s32);
    void fn_8006EEFC(void *, void *);
    void fn_80162054(void);
    void fn_80145828(void);
    s32 fn_80059208(void *, void *);
    void fn_8008A290(s32, s32);
    extern u8 lbl_8027E258[];
    extern s32 lbl_803682E4;
    extern void fn_801D8E80(void);
    void *obj;

    obj = fn_800C4638(0x544, lbl_8027E258 + 0x27b, 0);
    *(void **)((u8 *)arg0 + 0x30) = obj;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 8) = 0;
    *(u8 *)((u8 *)obj + 0x5A) = 0;
    *(u8 *)((u8 *)obj + 0x10) = *(s32 *)((u8 *)arg0 + 0x34);
    fn_8006EEFC((u8 *)obj + 8, lbl_8027E258 + 0x27c);
    lbl_803682E4 = *(s32 *)((u8 *)obj + 8);
    fn_80162054();
    *(u8 *)((u8 *)obj + 0x5A) = 1;
    fn_80145828();
    *(s32 *)((u8 *)obj + 0xC) = fn_80059208(fn_801D8E80, arg0);
    fn_8008A290(2, 0xfa);
}
#pragma opt_common_subs reset
void fn_801D3D3C(void *arg0) {
 void *fn_800D3590(void *);
 void *fn_801DE370(void *);
 void fn_801DBD84(void *);
 void fn_801E2594(void *);
 void fn_801E3118(void *, void *, u8);
 s32 fn_800EB774(void);
 void *fn_801DC10C(s32);
 u8 fn_801DE368(void *);
 void fn_801DE0EC(s32 *, void *);
 u8 fn_801DE3D0(void *);
 u8 fn_801E33F4(void *);
 void fn_801475FC(void *, s32);
 void fn_801DDBA8(void *, void *, u8, u8, s16);
 void *fn_8000E0E4(void *);
 void fn_80231D94(void *, void *, void *, void *);
 void fn_801DE3C4(void *);
 void fn_8008A290(s32, s32);
 void fn_80006220(s32);
 void fn_8000C188(void *);
 void fn_801DC150(void *, s8, s8, s32, void *, s8, void *);
 void fn_801DE3BC(void *, s8);
 void fn_801D8E18(void *, s16, s16, u8, u8);
 void fn_801D8D78(void *, s16, s16, u8, u8);
 void fn_801D8E08(void *);
 void fn_801DDDE8(s32, void *);
 u8 fn_801DE360(void *);
 void fn_801E1440(void *, s32, s32);
 void fn_800E99E4(void *);
 void fn_801E323C(void *, void *);
 void fn_801DF5D8(void *, void *);
 void fn_801DE378(void *);
 void fn_801D8D68(void *);
 void fn_801D8D58(void *);
 void fn_801D8C64(void *, s16, s16);
 s32 fn_801DBFF8(void);
 void *fn_801DC0CC(void);
 void fn_801D8894(void *);
 void fn_801D88B0(void *, s8);
 void fn_801D888C(void *, s16);
 void fn_801E00EC(void *, void *);
 void fn_801E1498(void *, s32, s32, s32, void *);
 void fn_801E21EC(void *, s32);
 void fn_80006160(s32);
 void fn_801D8854(void *, u32);
 void fn_801DBEA8(void *, s32);
 void fn_801D8C0C(void *, s16);
 void fn_801D88B8(void *, void *, u8);
 u8 fn_801DE358(void *);
 void fn_801E080C(void *);
 void fn_801E0B48(void *, s32, s32, void *);
 extern void *lbl_80367240;
 extern s8 lbl_803682EC;
 extern s32 lbl_803682E8;
 extern u8 lbl_803682F0;
 extern u8 lbl_80330708[];
 extern u8 lbl_80331FB8[];
 extern u8 lbl_8027E258[];
 s32 arr_lo[10];
 s32 arr_hi[10];
 s32 i, j, k, m, n, count;
 s32 *p;
 s32 *p24;
 s32 i25;
 s8 saved_byte;
 s32 result;
 u8 tmp_u8;
 s16 x, y;
 s32 v, changed, sel, flags_a, flags_b;
 void *state, *tmp_ptr, *tmp_ptr2;
 u8 *slot;
 state = *(void **)((u8 *)arg0 + 0x30);
 flags_a = (s32)fn_800D3590(lbl_80367240);
 flags_b = (s32)fn_801DE370(lbl_80367240);
 if ((s8)lbl_803682EC == 0) { lbl_803682E8 = 1; lbl_803682EC = 1; }
 switch (*(s32 *)state) {
 case 0:
  saved_byte = *(s8 *)((u8 *)state + 0x11);
  fn_801DBD84(arg0);
  *(s8 *)((u8 *)state + 0x11) = saved_byte;
  fn_801E2594(&lbl_803682F0);
  fn_801E3118(&lbl_803682F0, arg0, *(u8 *)((u8 *)state + 0x10) == 1);
  *(s32 *)state = 3; break;
 case 3:
  result = fn_800EB774();
  if (result == -0x80) { *(s32 *)state = 0x28; break; }
  if (result == -0x42) { *(s32 *)state = 0x1e; break; }
  if (result == -0x41) { *(s32 *)state = 0xd; break; }
  if (result == -0x40) { *(s32 *)state = 0x23; break; }
  if (result == -0xd || result == -6) { *(s32 *)state = 0xf; break; }
  if (result == -5) { *(s32 *)state = 0x18; break; }
  if (result == -4) { *(s32 *)state = 0x19; break; }
  if (result == -3) { *(s32 *)state = 5; break; }
  if (result == -2) { *(s32 *)state = 0xe; break; }
  if (result == -1) { *(s32 *)state = 0; break; }
  if (result != 0) { *(s32 *)state = 5; break; }
  if (*(u8 *)((u8 *)state + 0x10) != 1) {
   p24 = arr_hi; count = 0; i25 = 0;
   while (i25 < 5) {
    if (fn_801DC10C(i25) != 0) { tmp_u8 = fn_801DE368(fn_801DC10C(i25)); count++; *p24 = tmp_u8; p24++; }
    i25++;
   }
   arr_hi[count] = 1; arr_hi[count+1] = 0x20; arr_hi[count+2] = 0x63; arr_hi[count+3] = -1;
   fn_801DE0EC(arr_hi, arg0);
  } else {
   count = 0; p24 = arr_lo; i25 = 0;
   while (i25 < 5) {
    if (fn_801DC10C(i25) != 0) { tmp_u8 = fn_801DE368(fn_801DC10C(i25)); count++; *p24 = tmp_u8; p24++; }
    i25++;
   }
   tmp_u8 = fn_801DE3D0(lbl_80330708);
   if ((s32)tmp_u8 - 2 >= 1) { tmp_u8 = fn_801DE3D0(lbl_80330708); arr_lo[count] = (s32)tmp_u8 - 2; count++; }
   tmp_u8 = fn_801DE3D0(lbl_80330708);
   if ((s32)tmp_u8 - 1 >= 1) { tmp_u8 = fn_801DE3D0(lbl_80330708); arr_lo[count] = (s32)tmp_u8 - 1; count++; }
   tmp_u8 = fn_801DE3D0(lbl_80330708);
   arr_lo[count] = tmp_u8; arr_lo[count+1] = 0x20; arr_lo[count+2] = 0x63; arr_lo[count+3] = -1;
   fn_801DE0EC(arr_lo, arg0);
  }
  tmp_u8 = *(u8 *)((u8 *)state + 0x10);
  if (tmp_u8 == 0) *(s32 *)state = 0x32;
  else if (tmp_u8 == 1) *(s32 *)state = 0x258;
  else if (tmp_u8 == 2) {
   *(u8 *)((u8 *)state + 0x10) = 0;
   if (fn_801E33F4(lbl_80331FB8)) *(s32 *)state = 0x2bc; else *(s32 *)state = 0x32;
  }
  break;
 case 5:
  fn_801475FC(lbl_8027E258 + 0x290, 0x64);
  fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x2a4, 0, 1, 0);
  *(s32 *)state = 6; break;
 case 6:
  if (*(u8 *)((u8 *)state + 0x10) == 1) { *(s32 *)state = 0x2d; break; }
  tmp_ptr = fn_8000E0E4(lbl_8027E258 + 0x2cd);
  tmp_ptr2 = fn_8000E0E4(lbl_8027E258 + 0x2c3);
  fn_80231D94((u8 *)state + 0x1a, lbl_8027E258 + 0x2b2, tmp_ptr2, tmp_ptr);
  *(s32 *)state = 7;
 case 7:
  if (flags_a & 0x100) {
   fn_801DE3C4((u8 *)state + 0x330); *(s32 *)state = 8;
   fn_801475FC(lbl_8027E258 + 0x2d4, 0x64); *(u8 *)((u8 *)state + 0x1a) = 0;
  } else if (flags_a & 0x200) {
   fn_8008A290(3, 0xfa);
   if (*(u8 *)((u8 *)state + 0x10) != 1) fn_80006220(0x1b);
   fn_8000C188(arg0); fn_801E2594(&lbl_803682F0); fn_801475FC(lbl_8027E258 + 0x2e4, 0x64);
  }
  break;
 case 8:
  fn_801DC150(lbl_8027E258 + 0x2f4, 1, 1, 0, lbl_8027E258 + 0x2d4, 0, arg0);
  *(s32 *)state = 9; break;
 case 9:
  if (*(s8 *)((u8 *)state + 0x14) == 0) {
   *(s32 *)state = 0xa;
   fn_801DDBA8((u8 *)state + 0x330, fn_8000E0E4(lbl_8027E258 + 0x307), 1, 0, 1);
   *(u8 *)((u8 *)state + 0x14) = 0;
   fn_801DE3BC((u8 *)state + 0x330, *(s8 *)((u8 *)state + 0x14));
   fn_801D8E18((u8 *)state + 0x52e, *(s16 *)((u8 *)state + 0x33e), *(s16 *)((u8 *)state + 0x340), 0, 1);
  } else {
   fn_8008A290(3, 0xfa);
   if (*(u8 *)((u8 *)state + 0x10) != 1) fn_80006220(0x1b);
   fn_8000C188(arg0); fn_801E2594(&lbl_803682F0);
  }
  break;
 case 0xa:
  sel = *(s8 *)((u8 *)state + 0x14); changed = 0;
  if (flags_a & 0x100) {
   fn_801475FC(lbl_8027E258 + 0x318, 0x64);
   *(u8 *)((u8 *)state + 0x18) = *(u8 *)((u8 *)state + 0x14);
   *(s32 *)state = 0xb; *(u8 *)((u8 *)state + 0x19) = 0;
   fn_801DE3C4((u8 *)state + 0x330); fn_801D8E08((u8 *)state + 0x52e); fn_801DDDE8(5, arg0); break;
  }
  if (flags_a & 0x200) {
   fn_801475FC(lbl_8027E258 + 0x2e4, 0x64); fn_8008A290(3, 0xfa);
   if (*(u8 *)((u8 *)state + 0x10) != 1) fn_80006220(0x1b);
   fn_8000C188(arg0); fn_801E2594(&lbl_803682F0);
  }
  if (flags_b & 0x1000001) {
   *(u8 *)((u8 *)state + 0x14) = *(u8 *)((u8 *)state + 0x14) - 1;
   if (*(s8 *)((u8 *)state + 0x14) < 0) *(u8 *)((u8 *)state + 0x14) = 0;
   if (sel != *(s8 *)((u8 *)state + 0x14)) changed = 1;
  }
  if (flags_b & 0x2000002) {
   *(u8 *)((u8 *)state + 0x14) = *(u8 *)((u8 *)state + 0x14) + 1;
   if (*(s8 *)((u8 *)state + 0x14) > 2) *(u8 *)((u8 *)state + 0x14) = 2;
   if (sel != *(s8 *)((u8 *)state + 0x14)) changed = 1;
  }
  if ((u8)changed == 1) {
   fn_801475FC(lbl_8027E258 + 0x328, 0x64);
   sel = *(s8 *)((u8 *)state + 0x14);
   if (sel == 0) { x = *(s16 *)((u8 *)state + 0x340); y = *(s16 *)((u8 *)state + 0x33e); }
   else if (sel == 1) { x = *(s16 *)((u8 *)state + 0x344); y = *(s16 *)((u8 *)state + 0x342); }
   else if (sel == 2) { x = *(s16 *)((u8 *)state + 0x348); y = *(s16 *)((u8 *)state + 0x346); }
   else { x = 0; y = 0; }
   fn_801D8D78((u8 *)state + 0x52e, y, x, 0, 1);
   fn_801DE3BC((u8 *)state + 0x330, *(s8 *)((u8 *)state + 0x14));
  }
  break;
 case 0xb:
  v = fn_801DE360(lbl_80331FB8); v = ((u8)v == 0); sel = *(s8 *)((u8 *)state + 0x18);
  if (sel == 0) changed = v ? 0 : 3; else if (sel == 1) changed = v != 0; else if (sel == 2) changed = v ? 2 : 1; else changed = 0;
  fn_801E1440(&lbl_803682F0, changed, *(s8 *)((u8 *)state + 0x19) != 0);
  fn_8008A290(3, 0xfa);
  if (*(u8 *)((u8 *)state + 0x10) != 1) fn_80006220(0x1a);
  fn_8000C188(arg0); fn_801E2594(&lbl_803682F0); break;
 case 0xd:
  fn_801475FC(lbl_8027E258 + 0x290, 0x64);
  fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x344, 0, 1, 0); *(s32 *)state = 6; break;
 case 0xe:
  fn_801475FC(lbl_8027E258 + 0x290, 0x64);
  fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x351, 0, 1, 0); *(s32 *)state = 6; break;
 case 0xf:
  if (*(u8 *)((u8 *)state + 0x10) == 1) {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x35e, 0, 1, 0); *(s32 *)state = 0x2d;
  } else {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   fn_801DC150(lbl_8027E258 + 0x36d, 1, 1, 0, lbl_8027E258 + 0x2d4, 1, arg0); *(s32 *)state = 0x10;
  }
  break;
 case 0x10:
  if (*(s8 *)((u8 *)state + 0x14) == 0) {
   fn_801DC150(lbl_8027E258 + 0x37b, 1, 1, 0, lbl_8027E258 + 0x2d4, 0, arg0); *(s32 *)state = 0x11;
  } else { *(s32 *)state = 0x14; }
  break;
 case 0x11:
  if (*(s8 *)((u8 *)state + 0x14) == 0) {
   fn_800E99E4(arg0);
   fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x38a, 0, 0, 0); *(s32 *)state = 0x12;
  } else { *(s32 *)state = 0x14; }
  break;
 case 0x12:
  fn_801DE3C4((u8 *)state + 0x330); *(s32 *)state = 0x13; fn_801DDDE8(5, arg0); break;
 case 0x13:
  if (fn_800EB774() == 0) {
   fn_801DC150(lbl_8027E258 + 0x39a, 0, 0, 0, NULL, 0, arg0); *(s32 *)state = 0;
  } else {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x3ab, 0, 1, 0); *(s32 *)state = 6;
  }
  break;
 case 0x14:
  fn_801475FC(lbl_8027E258 + 0x290, 0x64);
  fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x3bc, 0, 1, 0); *(s32 *)state = 6; break;
 case 0x18:
  fn_801475FC(lbl_8027E258 + 0x290, 0x64);
  fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x3cb, 0, 1, 0); *(s32 *)state = 6; break;
 case 0x19:
  if (*(u8 *)((u8 *)state + 0x10) == 1) *(s32 *)state = 0x23;
  else { fn_801DC150(lbl_8027E258 + 0x3d5, 1, 0, 0, lbl_8027E258 + 0x2d4, 0, arg0); *(s32 *)state = 0x1a; }
  break;
 case 0x1a:
  if (*(s8 *)((u8 *)state + 0x14) == 0) {
   fn_801E323C(&lbl_803682F0, arg0);
   fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x3e3, 0, 0, 0); *(s32 *)state = 0x1b;
  } else { *(s32 *)state = 8; }
  break;
 case 0x1b:
  fn_801DE3C4((u8 *)state + 0x330); *(s32 *)state = 0x1c; fn_801DDDE8(5, arg0); break;
 case 0x1c:
  if (fn_800EB774() == 0) {
   fn_801DC150(lbl_8027E258 + 0x3ef, 0, 0, 0, NULL, 0, arg0); *(s32 *)state = 0;
  } else {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   if (fn_800EB774() == -5) fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x3cb, 0, 1, 0);
   else fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x3fd, 0, 1, 0);
   *(s32 *)state = 6;
  }
  break;
 case 0x1e:
  fn_801475FC(lbl_8027E258 + 0x290, 0x64); fn_801DF5D8(&lbl_803682F0, arg0);
  fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x40b, 0, 1, 0); *(s32 *)state = 0x20; break;
 case 0x1f: break;
 case 0x20:
  if (flags_a & 0x100) {
   fn_801DE3C4((u8 *)state + 0x330); *(s32 *)state = 0;
   fn_801475FC(lbl_8027E258 + 0x2d4, 0x64); *(u8 *)((u8 *)state + 0x1a) = 0;
  }
  break;
 case 0x23:
  fn_801475FC(lbl_8027E258 + 0x290, 0x64);
  fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x417, 0, 1, 0); *(s32 *)state = 0x2d; break;
 case 0x28:
  fn_801475FC(lbl_8027E258 + 0x290, 0x64); fn_801DE378((u8 *)state + 0x330);
  fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x428, 1, 1, 0); *(s32 *)state = 6; break;
 case 0x2d:
  if (*(u8 *)((u8 *)state + 0x10) == 1) {
   tmp_ptr = fn_8000E0E4(lbl_8027E258 + 0x43e); tmp_ptr2 = fn_8000E0E4(lbl_8027E258 + 0x435);
   fn_80231D94((u8 *)state + 0x1a, lbl_8027E258 + 0x2b2, tmp_ptr2, tmp_ptr);
  } else {
   tmp_ptr = fn_8000E0E4(lbl_8027E258 + 0x2cd); tmp_ptr2 = fn_8000E0E4(lbl_8027E258 + 0x435);
   fn_80231D94((u8 *)state + 0x1a, lbl_8027E258 + 0x2b2, tmp_ptr2, tmp_ptr);
  }
  *(s32 *)state = 0x2e;
 case 0x2e:
  if (flags_a & 0x100) {
   fn_801DE3C4((u8 *)state + 0x330); *(s32 *)state = 0;
   fn_801475FC(lbl_8027E258 + 0x2d4, 0x64); *(u8 *)((u8 *)state + 0x1a) = 0;
  } else if (flags_a & 0x200) {
   fn_8008A290(3, 0xfa);
   if (*(u8 *)((u8 *)state + 0x10) != 1) fn_80006220(0x1b);
   fn_8000C188(arg0); fn_801E2594(&lbl_803682F0); fn_801475FC(lbl_8027E258 + 0x2e4, 0x64);
  }
  break;
 case 0x32:
  p24 = (s32 *)state; i25 = 0;
  while (i25 < 6) { fn_801D8D68((u8 *)p24 + 0x7c); i25++; p24 = (s32 *)((u8 *)p24 + 0x34); }
  p24 = (s32 *)state; i25 = 0;
  while (i25 < 5) { fn_801D8D58((u8 *)p24 + 0x1b4); i25++; p24 = (s32 *)((u8 *)p24 + 0x4c); }
  *(u8 *)((u8 *)state + 0x15) = 0;
  result = fn_801DBFF8();
  if (fn_801DC0CC() != 0) {
   fn_801D8C64((u8 *)state + *(s8 *)((u8 *)state + 0x15) * 0x34 + 0x7c, *(s8 *)((u8 *)state + 0x15), 2);
   *(u8 *)((u8 *)state + 0x15) = *(u8 *)((u8 *)state + 0x15) + 1;
  }
  if (result >= 1) {
   fn_801D8C64((u8 *)state + *(s8 *)((u8 *)state + 0x15) * 0x34 + 0x7c, *(s8 *)((u8 *)state + 0x15), 1);
   *(u8 *)((u8 *)state + 0x15) = *(u8 *)((u8 *)state + 0x15) + 1;
  }
  if (result >= 1 && result < 5) {
   fn_801D8C64((u8 *)state + *(s8 *)((u8 *)state + 0x15) * 0x34 + 0x7c, *(s8 *)((u8 *)state + 0x15), 3);
   *(u8 *)((u8 *)state + 0x15) = *(u8 *)((u8 *)state + 0x15) + 1;
  }
  if (result >= 1) {
   fn_801D8C64((u8 *)state + *(s8 *)((u8 *)state + 0x15) * 0x34 + 0x7c, *(s8 *)((u8 *)state + 0x15), 4);
   *(u8 *)((u8 *)state + 0x15) = *(u8 *)((u8 *)state + 0x15) + 1;
  }
  if (result != 5) {
   fn_801D8C64((u8 *)state + *(s8 *)((u8 *)state + 0x15) * 0x34 + 0x7c, *(s8 *)((u8 *)state + 0x15), 0);
   *(u8 *)((u8 *)state + 0x15) = *(u8 *)((u8 *)state + 0x15) + 1;
  }
  if (fn_801E33F4(lbl_80331FB8)) {
   fn_801D8C64((u8 *)state + *(s8 *)((u8 *)state + 0x15) * 0x34 + 0x7c, *(s8 *)((u8 *)state + 0x15), 6);
   *(u8 *)((u8 *)state + 0x15) = *(u8 *)((u8 *)state + 0x15) + 1;
  }
  { s8 idx11 = *(s8 *)((u8 *)state + 0x11);
    if (idx11 < 0 || idx11 >= *(s8 *)((u8 *)state + 0x15)) *(u8 *)((u8 *)state + 0x11) = 0; }
  { s8 idx11 = *(s8 *)((u8 *)state + 0x11);
    s16 *fl = (s16 *)((u8 *)state + idx11 * 0x34 + 0x7c); *fl = (s16)(*fl | 2); }
  *(s32 *)state = 0x37; *(s32 *)((u8 *)state + 4) = 0; fn_801DDDE8(0xf, arg0); break;
 case 0x37: {
  s8 idx = *(s8 *)((u8 *)state + 0x11); u8 *base = (u8 *)state + idx * 0x34;
  fn_801D8E18((u8 *)state + 0x51a, *(s16 *)(base + 0x88), *(s16 *)(base + 0x8a), 1, 0);
  *(s32 *)state = 0x3c;
 }
 case 0x3c:
  if (flags_a & 0x100) { *(s32 *)state = 0x3de; fn_801475FC(lbl_8027E258 + 0x2d4, 0x64); }
  else if (flags_a & 0x200) { *(s32 *)state = 0x384; fn_801475FC(lbl_8027E258 + 0x2e4, 0x64); }
  else if (flags_b & 0x8000008) {
   sel = *(s8 *)((u8 *)state + 0x11);
   { s16 *fl = (s16 *)((u8 *)state + sel * 0x34 + 0x7c); *fl = (s16)(*fl & ~2); }
   *(u8 *)((u8 *)state + 0x11) = *(u8 *)((u8 *)state + 0x11) - 1;
   if (*(s8 *)((u8 *)state + 0x11) < 0) *(u8 *)((u8 *)state + 0x11) = *(u8 *)((u8 *)state + 0x15) - 1;
   { s8 idx = *(s8 *)((u8 *)state + 0x11); s16 *fl = (s16 *)((u8 *)state + idx * 0x34 + 0x7c); *fl = (s16)(*fl | 2);
     fn_801D8D78((u8 *)state + 0x51a, *(s16 *)((u8 *)state + idx * 0x34 + 0x88), *(s16 *)((u8 *)state + idx * 0x34 + 0x8a), 1, 0); }
   if (sel != *(s8 *)((u8 *)state + 0x11)) fn_801475FC(lbl_8027E258 + 0x446, 0x64);
  } else if (flags_b & 0x4000004) {
   sel = *(s8 *)((u8 *)state + 0x11);
   { s16 *fl = (s16 *)((u8 *)state + sel * 0x34 + 0x7c); *fl = (s16)(*fl & ~2); }
   *(u8 *)((u8 *)state + 0x11) = *(u8 *)((u8 *)state + 0x11) + 1;
   if (*(s8 *)((u8 *)state + 0x11) > *(s8 *)((u8 *)state + 0x15) - 1) *(u8 *)((u8 *)state + 0x11) = 0;
   { s8 idx = *(s8 *)((u8 *)state + 0x11); s16 *fl = (s16 *)((u8 *)state + idx * 0x34 + 0x7c); *fl = (s16)(*fl | 2);
     fn_801D8D78((u8 *)state + 0x51a, *(s16 *)((u8 *)state + idx * 0x34 + 0x88), *(s16 *)((u8 *)state + idx * 0x34 + 0x8a), 1, 0); }
   if (sel != *(s8 *)((u8 *)state + 0x11)) fn_801475FC(lbl_8027E258 + 0x446, 0x64);
  }
  break;
 case 0x64:
  fn_801DBEA8(state, 0); *(s8 *)((u8 *)state + 0x12) = -1;
  p24 = (s32 *)state; i25 = 0;
  while (i25 < 5) {
   fn_801D8D58((u8 *)p24 + 0x1b4); fn_801D8C0C((u8 *)p24 + 0x1b4, (s16)i25);
   i25++; p24 = (s32 *)((u8 *)p24 + 0x4c);
  }
  p24 = (s32 *)state; i25 = 0;
  while (i25 < 5) {
   fn_801D88B8((u8 *)p24 + 0x1b4, state, 0);
   if (!(*(s16 *)((u8 *)p24 + 0x1b4) & 4) && *(s8 *)((u8 *)state + 0x12) == -1) *(u8 *)((u8 *)state + 0x12) = (u8)i25;
   i25++; p24 = (s32 *)((u8 *)p24 + 0x4c);
  }
  { s8 idx = *(s8 *)((u8 *)state + 0x12); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2); }
  *(s32 *)state = 0x69; fn_801DDDE8(0x14, arg0); break;
 case 0x69: {
  s8 idx = *(s8 *)((u8 *)state + 0x12); u8 *base = (u8 *)state + idx * 0x4c;
  fn_801D8E18((u8 *)state + 0x51a, *(s16 *)(base + 0x1be), *(s16 *)(base + 0x1c0), 1, 0);
  fn_801D88B0((u8 *)state + 0x5c, 0); *(s32 *)state = 0x6a;
 }
 case 0x6a:
  if (flags_a & 0x100) {
   if (fn_801DC0CC() != 0) {
    fn_801DC150(lbl_8027E258 + 0x462, 1, 1, 1, lbl_8027E258 + 0x2d4, 0, arg0);
    *(s32 *)state = 0x6e; fn_801475FC(lbl_8027E258 + 0x2d4, 0x64);
   } else { *(s32 *)state = 0x73; fn_801475FC(lbl_8027E258 + 0x2d4, 0x64); }
  } else if (flags_a & 0x200) {
   *(s32 *)state = 0x3b6; fn_801475FC(lbl_8027E258 + 0x2e4, 0x64);
  } else if (flags_b & 0x8000008) {
   sel = *(s8 *)((u8 *)state + 0x12);
   { s16 *fl = (s16 *)((u8 *)state + sel * 0x4c + 0x1b4); *fl = (s16)(*fl & ~2); }
   do { *(u8 *)((u8 *)state + 0x12) = *(u8 *)((u8 *)state + 0x12) - 1;
        if (*(s8 *)((u8 *)state + 0x12) < 0) *(u8 *)((u8 *)state + 0x12) = 4;
   } while (*(s16 *)((u8 *)state + *(s8 *)((u8 *)state + 0x12) * 0x4c + 0x1b4) & 4);
   { s8 idx = *(s8 *)((u8 *)state + 0x12); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2);
     fn_801D8D78((u8 *)state + 0x51a, *(s16 *)((u8 *)state + idx * 0x4c + 0x1be), *(s16 *)((u8 *)state + idx * 0x4c + 0x1c0), 1, 0); }
   if (sel != *(s8 *)((u8 *)state + 0x12)) fn_801475FC(lbl_8027E258 + 0x473, 0x64);
  } else if (flags_b & 0x4000004) {
   sel = *(s8 *)((u8 *)state + 0x12);
   { s16 *fl = (s16 *)((u8 *)state + sel * 0x4c + 0x1b4); *fl = (s16)(*fl & ~2); }
   do { *(u8 *)((u8 *)state + 0x12) = *(u8 *)((u8 *)state + 0x12) + 1;
        if (*(s8 *)((u8 *)state + 0x12) > 4) *(u8 *)((u8 *)state + 0x12) = 0;
   } while (*(s16 *)((u8 *)state + *(s8 *)((u8 *)state + 0x12) * 0x4c + 0x1b4) & 4);
   { s8 idx = *(s8 *)((u8 *)state + 0x12); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2);
     fn_801D8D78((u8 *)state + 0x51a, *(s16 *)((u8 *)state + idx * 0x4c + 0x1be), *(s16 *)((u8 *)state + idx * 0x4c + 0x1c0), 1, 0); }
   if (sel != *(s8 *)((u8 *)state + 0x12)) fn_801475FC(lbl_8027E258 + 0x473, 0x64);
  }
  break;
 case 0x6e:
  if (*(s8 *)((u8 *)state + 0x14) == 0) { fn_801E00EC(&lbl_803682F0, arg0); *(s32 *)state = 0x71; }
  else *(s32 *)state = 0x69;
  break;
 case 0x71:
  if (fn_800EB774() == 0) { *(s32 *)state = 0x73; fn_801D8894((u8 *)state + 0x60); }
  else {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   fn_801DC150(lbl_8027E258 + 0x488, 0, 0, 0, NULL, 1, arg0); *(s32 *)state = 0x69;
  }
  break;
 case 0x73:
  fn_801DDBA8((u8 *)state + 0x330, fn_8000E0E4(lbl_8027E258 + 0x307), 1, 0, 1);
  *(u8 *)((u8 *)state + 0x14) = 0;
  fn_801DE3BC((u8 *)state + 0x330, *(s8 *)((u8 *)state + 0x14));
  fn_801D8E18((u8 *)state + 0x52e, *(s16 *)((u8 *)state + 0x33e), *(s16 *)((u8 *)state + 0x340), 0, 1);
  fn_801D88B0((u8 *)state + 0x5c, 0x66); fn_801D888C((u8 *)state + 0x5c, -9);
  *(s32 *)state = 0x74;
 case 0x74:
  sel = *(s8 *)((u8 *)state + 0x14); changed = 0;
  if (flags_a & 0x100) {
   *(u8 *)((u8 *)state + 0x18) = *(u8 *)((u8 *)state + 0x14);
   if (fn_801E33F4(lbl_80331FB8)) { fn_801475FC(lbl_8027E258 + 0x2d4, 0x64); *(s32 *)state = 0x75; }
   else { fn_801475FC(lbl_8027E258 + 0x318, 0x64); *(s32 *)state = 0x77; *(u8 *)((u8 *)state + 0x19) = 0; }
   fn_801DE3C4((u8 *)state + 0x330); fn_801D8E08((u8 *)state + 0x52e); fn_801DDDE8(5, arg0); break;
  }
  if (flags_a & 0x200) {
   fn_801475FC(lbl_8027E258 + 0x2e4, 0x64); *(s32 *)state = 0x69;
   fn_801DE3C4((u8 *)state + 0x330); fn_801D8E08((u8 *)state + 0x52e); fn_801DDDE8(5, arg0);
  }
  if (flags_b & 0x1000001) {
   *(u8 *)((u8 *)state + 0x14) = *(u8 *)((u8 *)state + 0x14) - 1;
   if (*(s8 *)((u8 *)state + 0x14) < 0) *(u8 *)((u8 *)state + 0x14) = 0;
   if (sel != *(s8 *)((u8 *)state + 0x14)) changed = 1;
  }
  if (flags_b & 0x2000002) {
   *(u8 *)((u8 *)state + 0x14) = *(u8 *)((u8 *)state + 0x14) + 1;
   if (*(s8 *)((u8 *)state + 0x14) > 2) *(u8 *)((u8 *)state + 0x14) = 2;
   if (sel != *(s8 *)((u8 *)state + 0x14)) changed = 1;
  }
  if ((u8)changed == 1) {
   fn_801475FC(lbl_8027E258 + 0x328, 0x64); sel = *(s8 *)((u8 *)state + 0x14);
   if (sel == 0) { y = *(s16 *)((u8 *)state + 0x33e); x = *(s16 *)((u8 *)state + 0x340); }
   else if (sel == 1) { y = *(s16 *)((u8 *)state + 0x342); x = *(s16 *)((u8 *)state + 0x344); }
   else if (sel == 2) { y = *(s16 *)((u8 *)state + 0x346); x = *(s16 *)((u8 *)state + 0x348); }
   else { x = 0; y = 0; }
   fn_801D8D78((u8 *)state + 0x52e, y, x, 0, 1);
   fn_801DE3BC((u8 *)state + 0x330, *(s8 *)((u8 *)state + 0x14));
  }
  break;
 case 0x75:
  fn_801DDBA8((u8 *)state + 0x330, fn_8000E0E4(lbl_8027E258 + 0x49b), 1, 0, 2);
  *(u8 *)((u8 *)state + 0x14) = 0;
  fn_801DE3BC((u8 *)state + 0x330, *(s8 *)((u8 *)state + 0x14));
  fn_801D8E18((u8 *)state + 0x52e, *(s16 *)((u8 *)state + 0x33e), *(s16 *)((u8 *)state + 0x340), 0, 1);
  *(s32 *)state = 0x76;
 case 0x76:
  sel = *(s8 *)((u8 *)state + 0x14); changed = 0;
  if (flags_a & 0x100) {
   fn_801475FC(lbl_8027E258 + 0x318, 0x64); *(s32 *)state = 0x77;
   *(u8 *)((u8 *)state + 0x19) = *(u8 *)((u8 *)state + 0x14);
   fn_801DE3C4((u8 *)state + 0x330); fn_801D8E08((u8 *)state + 0x52e); fn_801DDDE8(5, arg0); break;
  }
  if (flags_a & 0x200) {
   if (fn_801E33F4(lbl_80331FB8)) *(s32 *)state = 0x73; else *(s32 *)state = 0x69;
   fn_801475FC(lbl_8027E258 + 0x2e4, 0x64);
   fn_801DE3C4((u8 *)state + 0x330); fn_801D8E08((u8 *)state + 0x52e); fn_801DDDE8(5, arg0);
  }
  if (flags_b & 0x1000001) {
   *(u8 *)((u8 *)state + 0x14) = *(u8 *)((u8 *)state + 0x14) - 1;
   if (*(s8 *)((u8 *)state + 0x14) < 0) *(u8 *)((u8 *)state + 0x14) = 0;
   if (sel != *(s8 *)((u8 *)state + 0x14)) changed = 1;
  }
  if (flags_b & 0x2000002) {
   *(u8 *)((u8 *)state + 0x14) = *(u8 *)((u8 *)state + 0x14) + 1;
   if (*(s8 *)((u8 *)state + 0x14) > 1) *(u8 *)((u8 *)state + 0x14) = 1;
   if (sel != *(s8 *)((u8 *)state + 0x14)) changed = 1;
  }
  if ((u8)changed == 1) {
   fn_801475FC(lbl_8027E258 + 0x328, 0x64); sel = *(s8 *)((u8 *)state + 0x14);
   if (sel == 0) { y = *(s16 *)((u8 *)state + 0x33e); x = *(s16 *)((u8 *)state + 0x340); }
   else if (sel == 1) { y = *(s16 *)((u8 *)state + 0x342); x = *(s16 *)((u8 *)state + 0x344); }
   else if (sel == 2) { y = *(s16 *)((u8 *)state + 0x346); x = *(s16 *)((u8 *)state + 0x348); }
   else { x = 0; y = 0; }
   fn_801D8D78((u8 *)state + 0x52e, y, x, 0, 1);
   fn_801DE3BC((u8 *)state + 0x330, *(s8 *)((u8 *)state + 0x14));
  }
  break;
 case 0x77:
  fn_801D88B0((u8 *)state + 0x5c, 0);
  v = fn_801DE360(lbl_80331FB8); v = ((u8)v == 0);
  sel = *(s8 *)((u8 *)state + 0x18);
  if (sel == 0) changed = v ? 0 : 3; else if (sel == 1) changed = v != 0; else if (sel == 2) changed = v ? 2 : 1; else changed = 0;
  fn_801E1498(&lbl_803682F0, *(s8 *)((u8 *)state + 0x12), changed, *(s8 *)((u8 *)state + 0x19) != 0, arg0);
  fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x4ab, 0, 0, 0);
  *(s32 *)state = 0x78; break;
 case 0x78:
  fn_801DE3C4((u8 *)state + 0x330); *(s32 *)state = 0x7d; fn_801DDDE8(5, arg0);
 case 0x7d:
  if (fn_800EB774() == 0) {
   fn_801E21EC(&lbl_803682F0, *(s8 *)((u8 *)state + 0x12)); *(s32 *)state = 0x82;
  } else {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   fn_801DC150(lbl_8027E258 + 0x4b5, 0, 0, 0, NULL, 1, arg0); *(s32 *)state = 0x69;
  }
  break;
 case 0x82:
  if (fn_800EB774() == 0) {
   fn_801D8854((u8 *)state + *(s8 *)((u8 *)state + 0x12) * 0x4c + 0x1b4, (u32)(lbl_8027E258 + 0x4c1));
   *(s32 *)state = 0x87; fn_801DDDE8(0x64, arg0);
  } else {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   fn_801DC150(lbl_8027E258 + 0x4d2, 0, 0, 0, NULL, 1, arg0); *(s32 *)state = 0x69;
  }
  break;
 case 0x87:
  fn_8008A290(3, 0xfa); fn_80006220(0x1c);
  fn_80006160(*(s8 *)((u8 *)state + 0x12)); fn_8000C188(arg0); break;
    case 0xc8:
    fn_801DBEA8(state, 1); *(s8 *)((u8 *)state + 0x12) = -1;
    p24 = (s32 *)state; i25 = 0;
    while (i25 < 5) {
     fn_801D8D58((u8 *)p24 + 0x1b4); fn_801D8C0C((u8 *)p24 + 0x1b4, i25);
     i25 += 1; p24 = (s32 *)((u8 *)p24 + 0x4c);
    }
    p24 = (s32 *)lbl_80331FB8; tmp_ptr = (void *)state; changed = 0;
    while (changed < 5) {
     fn_801D88B8((u8 *)tmp_ptr + 0x1b4, state, 0);
     if (*(s16 *)((u8 *)tmp_ptr + 0x1b4) & 4) {
      if (*(s8 *)((u8 *)state + 0x12) == -1 || (s32)(u8)fn_801DE358(p24) == changed)
       *(u8 *)((u8 *)state + 0x12) = (u8)changed;
     }
     changed += 1; tmp_ptr = (u8 *)tmp_ptr + 0x4c;
    }
    { s8 idx = *(s8 *)((u8 *)state + 0x12); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2); }
    *(s32 *)state = 0xcd; fn_801DDDE8(0x14, arg0); break;
 case 0xcd: {
  s8 idx = *(s8 *)((u8 *)state + 0x12); u8 *base = (u8 *)state + idx * 0x4c;
  fn_801D8E18((u8 *)state + 0x51a, *(s16 *)(base + 0x1be), *(s16 *)(base + 0x1c0), 1, 0);
  *(s32 *)state = 0xce;
 }
 case 0xce:
  if (flags_a & 0x100) {
   if (fn_801DC0CC() != 0) {
    fn_801DC150(lbl_8027E258 + 0x462, 1, 1, 1, lbl_8027E258 + 0x318, 0, arg0);
    *(s32 *)state = 0xd2; fn_801475FC(lbl_8027E258 + 0x2d4, 0x64);
   } else { *(s32 *)state = 0xd7; fn_801475FC(lbl_8027E258 + 0x318, 0x64); }
  } else if (flags_a & 0x200) {
   *(s32 *)state = 0x3b6; fn_801475FC(lbl_8027E258 + 0x2e4, 0x64);
  } else if (flags_b & 0x8000008) {
   sel = *(s8 *)((u8 *)state + 0x12);
   { s16 *fl = (s16 *)((u8 *)state + sel * 0x4c + 0x1b4); *fl = (s16)(*fl & ~2); }
   do { *(u8 *)((u8 *)state + 0x12) = *(u8 *)((u8 *)state + 0x12) - 1;
        if (*(s8 *)((u8 *)state + 0x12) < 0) *(u8 *)((u8 *)state + 0x12) = 4;
   } while (!(*(s16 *)((u8 *)state + *(s8 *)((u8 *)state + 0x12) * 0x4c + 0x1b4) & 4));
   { s8 idx = *(s8 *)((u8 *)state + 0x12); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2);
     fn_801D8D78((u8 *)state + 0x51a, *(s16 *)((u8 *)state + idx * 0x4c + 0x1be), *(s16 *)((u8 *)state + idx * 0x4c + 0x1c0), 1, 0); }
   if (sel != *(s8 *)((u8 *)state + 0x12)) fn_801475FC(lbl_8027E258 + 0x473, 0x64);
  } else if (flags_b & 0x4000004) {
   sel = *(s8 *)((u8 *)state + 0x12);
   { s16 *fl = (s16 *)((u8 *)state + sel * 0x4c + 0x1b4); *fl = (s16)(*fl & ~2); }
   do { *(u8 *)((u8 *)state + 0x12) = *(u8 *)((u8 *)state + 0x12) + 1;
        if (*(s8 *)((u8 *)state + 0x12) > 4) *(u8 *)((u8 *)state + 0x12) = 0;
   } while (!(*(s16 *)((u8 *)state + *(s8 *)((u8 *)state + 0x12) * 0x4c + 0x1b4) & 4));
   { s8 idx = *(s8 *)((u8 *)state + 0x12); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2);
     fn_801D8D78((u8 *)state + 0x51a, *(s16 *)((u8 *)state + idx * 0x4c + 0x1be), *(s16 *)((u8 *)state + idx * 0x4c + 0x1c0), 1, 0); }
   if (sel != *(s8 *)((u8 *)state + 0x12)) fn_801475FC(lbl_8027E258 + 0x473, 0x64);
  }
  break;
 case 0xd2:
  if (*(s8 *)((u8 *)state + 0x14) == 0) { fn_801E00EC(&lbl_803682F0, arg0); *(s32 *)state = 0xd5; }
  else *(s32 *)state = 0xcd;
  break;
 case 0xd5:
  if (fn_800EB774() == 0) { *(s32 *)state = 0xd7; fn_801D8894((u8 *)state + 0x60); }
  else {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   fn_801DC150(lbl_8027E258 + 0x488, 0, 0, 0, NULL, 1, arg0); *(s32 *)state = 0xcd;
  }
  break;
 case 0xd6: break;
 case 0xd7:
  fn_801E21EC(&lbl_803682F0, *(s8 *)((u8 *)state + 0x12));
  *(s32 *)state = 0xdc; fn_801DDDE8(0xa, arg0); break;
 case 0xdc:
  if (fn_800EB774() == 0) {
   fn_8008A290(3, 0xfa); fn_80006220(0x1c);
   fn_80006160(*(s8 *)((u8 *)state + 0x12)); fn_8000C188(arg0);
  } else {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   fn_801DC150(lbl_8027E258 + 0x4df, 0, 0, 0, NULL, 1, arg0); *(s32 *)state = 0xcd;
  }
  break;
 case 0x12c:
  fn_801DBEA8(state, 2); *(s8 *)((u8 *)state + 0x12) = -1;
  p24 = (s32 *)state; i25 = 0;
  while (i25 < 5) {
   fn_801D8D58((u8 *)p24 + 0x1b4); fn_801D8C0C((u8 *)p24 + 0x1b4, (s16)i25);
   i25++; p24 = (s32 *)((u8 *)p24 + 0x4c);
  }
  p24 = (s32 *)state; i25 = 0;
  while (i25 < 5) {
   fn_801D88B8((u8 *)p24 + 0x1b4, state, 0);
   if ((*(s16 *)((u8 *)p24 + 0x1b4) & 8) && *(s8 *)((u8 *)state + 0x12) == -1) *(u8 *)((u8 *)state + 0x12) = (u8)i25;
   i25++; p24 = (s32 *)((u8 *)p24 + 0x4c);
  }
  { s8 idx = *(s8 *)((u8 *)state + 0x12); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2); }
  *(s32 *)state = 0x131; fn_801DDDE8(0x14, arg0); break;
 case 0x131: {
  s8 idx = *(s8 *)((u8 *)state + 0x12); u8 *base = (u8 *)state + idx * 0x4c;
  fn_801D8E18((u8 *)state + 0x51a, *(s16 *)(base + 0x1be), *(s16 *)(base + 0x1c0), 1, 0);
  *(s32 *)state = 0x132;
 }
 case 0x132:
  if (flags_a & 0x100) { *(s32 *)state = 0x136; fn_801475FC(lbl_8027E258 + 0x318, 0x64); }
  else if (flags_a & 0x200) { *(s32 *)state = 0x3b6; fn_801475FC(lbl_8027E258 + 0x2e4, 0x64); }
  break;
 case 0x136:
  fn_801E080C(&lbl_803682F0); *(s32 *)state = 0x13b; fn_801DDDE8(0xa, arg0); break;
 case 0x13b:
  if (fn_800EB774() == 0) *(s32 *)state = 0x140;
  else {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   fn_801DC150(lbl_8027E258 + 0x4eb, 0, 0, 0, NULL, 1, arg0); *(s32 *)state = 0x131;
  }
  break;
 case 0x140:
  fn_801E00EC(&lbl_803682F0, arg0); *(s32 *)state = 0x145; break;
 case 0x145:
  if (fn_800EB774() == 0) {
   fn_801D8894((u8 *)state + 0x60);
   fn_8008A290(3, 0xfa); fn_80006220(0x1d);
   fn_80006160(*(s8 *)((u8 *)state + 0x12)); fn_8000C188(arg0);
  } else {
   fn_801475FC(lbl_8027E258 + 0x290, 0x64);
   fn_801DC150(lbl_8027E258 + 0x488, 0, 0, 0, NULL, 1, arg0); *(s32 *)state = 0x131;
  }
  break;
 case 0x190:
  fn_801DBEA8(state, 3); *(s8 *)((u8 *)state + 0x12) = -1;
  p24 = (s32 *)state; i25 = 0;
  while (i25 < 5) {
   fn_801D8D58((u8 *)p24 + 0x1b4); fn_801D8C0C((u8 *)p24 + 0x1b4, (s16)i25);
   i25++; p24 = (s32 *)((u8 *)p24 + 0x4c);
  }
  fn_801DDDE8(0x14, arg0); *(s32 *)state = 0x193;
 case 0x193:
  p24 = (s32 *)state; i25 = 0;
  while (i25 < 5) {
   fn_801D88B8((u8 *)p24 + 0x1b4, state, 0);
   if ((*(s16 *)((u8 *)p24 + 0x1b4) & 4) && *(s8 *)((u8 *)state + 0x12) == -1) *(u8 *)((u8 *)state + 0x12) = (u8)i25;
   i25++; p24 = (s32 *)((u8 *)p24 + 0x4c);
  }
  { s8 idx = *(s8 *)((u8 *)state + 0x12); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2); }
  fn_801D8E08((u8 *)state + 0x52e); *(s32 *)state = 0x195; break;
 case 0x195: {
  s8 idx = *(s8 *)((u8 *)state + 0x12); u8 *base = (u8 *)state + idx * 0x4c;
  fn_801D8E18((u8 *)state + 0x51a, *(s16 *)(base + 0x1be), *(s16 *)(base + 0x1c0), 1, 0);
  *(s32 *)state = 0x196;
 }
 case 0x196:
  if (flags_a & 0x100) {
   *(s8 *)((u8 *)state + 0x13) = -1;
   p24 = (s32 *)state; i25 = 0;
   while (i25 < 5) {
    if (fn_801DC10C(i25) != 0) {
     { s16 *fl = (s16 *)((u8 *)p24 + 0x1b4); *fl = (s16)(*fl | 4); }
    } else if (*(s8 *)((u8 *)state + 0x13) == -1) {
     *(u8 *)((u8 *)state + 0x13) = (u8)i25;
    }
    i25++; p24 = (s32 *)((u8 *)p24 + 0x4c);
   }
   { s8 idx = *(s8 *)((u8 *)state + 0x13); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2);
     fn_801D8E18((u8 *)state + 0x52e, *(s16 *)((u8 *)state + idx * 0x4c + 0x1be), *(s16 *)((u8 *)state + idx * 0x4c + 0x1c0), 1, 0); }
   *(s32 *)state = 0x19a; fn_801475FC(lbl_8027E258 + 0x2d4, 0x64);
  } else if (flags_a & 0x200) {
   *(s32 *)state = 0x3b6; fn_801475FC(lbl_8027E258 + 0x2e4, 0x64);
  } else if (flags_b & 0x8000008) {
   sel = *(s8 *)((u8 *)state + 0x12);
   { s16 *fl = (s16 *)((u8 *)state + sel * 0x4c + 0x1b4); *fl = (s16)(*fl & ~2); }
   do { *(u8 *)((u8 *)state + 0x12) = *(u8 *)((u8 *)state + 0x12) - 1;
        if (*(s8 *)((u8 *)state + 0x12) < 0) *(u8 *)((u8 *)state + 0x12) = 4;
   } while (!(*(s16 *)((u8 *)state + *(s8 *)((u8 *)state + 0x12) * 0x4c + 0x1b4) & 4));
   { s8 idx = *(s8 *)((u8 *)state + 0x12); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2);
     fn_801D8D78((u8 *)state + 0x51a, *(s16 *)((u8 *)state + idx * 0x4c + 0x1be), *(s16 *)((u8 *)state + idx * 0x4c + 0x1c0), 1, 0); }
   if (sel != *(s8 *)((u8 *)state + 0x12)) fn_801475FC(lbl_8027E258 + 0x473, 0x64);
  } else if (flags_b & 0x4000004) {
   sel = *(s8 *)((u8 *)state + 0x12);
   { s16 *fl = (s16 *)((u8 *)state + sel * 0x4c + 0x1b4); *fl = (s16)(*fl & ~2); }
   do { *(u8 *)((u8 *)state + 0x12) = *(u8 *)((u8 *)state + 0x12) + 1;
        if (*(s8 *)((u8 *)state + 0x12) > 4) *(u8 *)((u8 *)state + 0x12) = 0;
   } while (!(*(s16 *)((u8 *)state + *(s8 *)((u8 *)state + 0x12) * 0x4c + 0x1b4) & 4));
   { s8 idx = *(s8 *)((u8 *)state + 0x12); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2);
     fn_801D8D78((u8 *)state + 0x51a, *(s16 *)((u8 *)state + idx * 0x4c + 0x1be), *(s16 *)((u8 *)state + idx * 0x4c + 0x1c0), 1, 0); }
   if (sel != *(s8 *)((u8 *)state + 0x12)) fn_801475FC(lbl_8027E258 + 0x473, 0x64);
  }
  break;
 case 0x19a:
  if (flags_a & 0x100) { *(s32 *)state = 0x19f; fn_801475FC(lbl_8027E258 + 0x2d4, 0x64); }
  else if (flags_a & 0x200) {
   *(s32 *)state = 0x193; fn_801D8E08((u8 *)state + 0x52e);
   fn_801475FC(lbl_8027E258 + 0x2e4, 0x64);
  } else if (flags_b & 0x8000008) {
   sel = *(s8 *)((u8 *)state + 0x13);
   { s16 *fl = (s16 *)((u8 *)state + sel * 0x4c + 0x1b4); *fl = (s16)(*fl & ~2); }
   do { *(u8 *)((u8 *)state + 0x13) = *(u8 *)((u8 *)state + 0x13) - 1;
        if (*(s8 *)((u8 *)state + 0x13) < 0) *(u8 *)((u8 *)state + 0x13) = 4;
   } while (*(s16 *)((u8 *)state + *(s8 *)((u8 *)state + 0x13) * 0x4c + 0x1b4) & 4);
   { s8 idx = *(s8 *)((u8 *)state + 0x13); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2);
     fn_801D8D78((u8 *)state + 0x52e, *(s16 *)((u8 *)state + idx * 0x4c + 0x1be), *(s16 *)((u8 *)state + idx * 0x4c + 0x1c0), 1, 0); }
   if (sel != *(s8 *)((u8 *)state + 0x13)) fn_801475FC(lbl_8027E258 + 0x473, 0x64);
  } else if (flags_b & 0x4000004) {
   sel = *(s8 *)((u8 *)state + 0x13);
   { s16 *fl = (s16 *)((u8 *)state + sel * 0x4c + 0x1b4); *fl = (s16)(*fl & ~2); }
   do { *(u8 *)((u8 *)state + 0x13) = *(u8 *)((u8 *)state + 0x13) + 1;
        if (*(s8 *)((u8 *)state + 0x13) > 4) *(u8 *)((u8 *)state + 0x13) = 0;
   } while (*(s16 *)((u8 *)state + *(s8 *)((u8 *)state + 0x13) * 0x4c + 0x1b4) & 4);
   { s8 idx = *(s8 *)((u8 *)state + 0x13); s16 *fl = (s16 *)((u8 *)state + idx * 0x4c + 0x1b4); *fl = (s16)(*fl | 2);
     fn_801D8D78((u8 *)state + 0x52e, *(s16 *)((u8 *)state + idx * 0x4c + 0x1be), *(s16 *)((u8 *)state + idx * 0x4c + 0x1c0), 1, 0); }
   if (sel != *(s8 *)((u8 *)state + 0x13)) fn_801475FC(lbl_8027E258 + 0x473, 0x64);
  }
  break;
 case 0x19f:
  fn_801E0B48(&lbl_803682F0, *(s8 *)((u8 *)state + 0x12), *(s8 *)((u8 *)state + 0x13), arg0);
  fn_801DDBA8((u8 *)state + 0x330, lbl_8027E258 + 0x4fb, 0, 0, 0);
  *(s32 *)state = 0x1a1; break;
    case 0x1a1:
    fn_801DE3C4((u8 *)state + 0x330); *(s32 *)state = 0x1a4;
    if (fn_800EB774() == 0) {
     fn_801D8854((u8 *)state + *(s8 *)((u8 *)state + 0x13) * 0x4c + 0x1b4, (u32)(lbl_8027E258 + 0x4c1));
     fn_801DDDE8(0x64, arg0);
    } else fn_801DDDE8(5, arg0);
    break;
   case 0x1a4:
    if (fn_800EB774() == 0) {
     result = fn_801DBFF8();
     if (result >= 1 && result < 5) {
      *(s8 *)((u8 *)state + 0x12) = -1; *(s32 *)state = 0x193;
     } else *(s32 *)state = 0x3b6;
    } else {
     fn_801475FC(lbl_8027E258 + 0x290, 0x64);
     fn_801DC150(lbl_8027E258 + 0x506, 0, 0, 0, NULL, 1, arg0); *(s32 *)state = 0x193;
    }
    break;
 case 0x1f4: *(s32 *)state = 0x1f4; break;
 case 0x1f7: *(s32 *)state = 0x1f7; break;
 case 0x1f8: break;
 case 0x1f9: *(s32 *)state = 0x1f9; break;
 case 0x1fa: *(s32 *)state = 0x1fa; break;
 case 0x1fe: *(s32 *)state = 0x1fe; break;
 case 0x200: *(s32 *)state = 0x200; break;
 case 0x201: *(s32 *)state = 0x201; break;
 case 0x203: *(s32 *)state = 0x203; break;
 case 0x208: *(s32 *)state = 0x208; break;
 case 0x20a: *(s32 *)state = 0x20a; break;
 case 0x20d: *(s32 *)state = 0x20d; break;
 case 0x212: *(s32 *)state = 0x212; break;
 case 0x258: *(s32 *)state = 0x258; break;
 case 0x25d: *(s32 *)state = 0x25d; break;
 case 0x25e: *(s32 *)state = 0x25e; break;
 case 0x262: *(s32 *)state = 0x262; break;
 case 0x267: *(s32 *)state = 0x267; break;
 case 0x268: *(s32 *)state = 0x268; break;
 case 0x269: *(s32 *)state = 0x269; break;
 case 0x26a: *(s32 *)state = 0x26a; break;
 case 0x26c: *(s32 *)state = 0x26c; break;
 case 0x28a: *(s32 *)state = 0x28a; break;
 case 0x2bc: *(s32 *)state = 0x2bc; break;
 case 0x2c1: *(s32 *)state = 0x2c1; break;
 case 0x2c6: *(s32 *)state = 0x2c6; break;
 case 0x2d0: *(s32 *)state = 0x2d0; break;
 case 0x2d5: *(s32 *)state = 0x2d5; break;
 case 0x2e4: *(s32 *)state = 0x2e4; break;
 case 0x2e9: *(s32 *)state = 0x2e9; break;
 case 0x2ee: *(s32 *)state = 0x2ee; break;
 case 0x2f3: *(s32 *)state = 0x2f3; break;
 case 0x2f8: *(s32 *)state = 0x2f8; break;
 case 0x2fd: *(s32 *)state = 0x2fd; break;
 case 0x320: *(s32 *)state = 0x320; break;
 case 0x321: *(s32 *)state = 0x321; break;
 case 0x325: *(s32 *)state = 0x325; break;
 case 0x326: *(s32 *)state = 0x326; break;
 case 0x32a: *(s32 *)state = 0x32a; break;
 case 0x32d: *(s32 *)state = 0x32d; break;
 case 0x32f: *(s32 *)state = 0x32f; break;
 case 0x334: *(s32 *)state = 0x334; break;
 case 0x352: *(s32 *)state = 0x352; break;
 case 0x357: *(s32 *)state = 0x357; break;
 case 0x384: *(s32 *)state = 0x384; break;
 case 0x389: *(s32 *)state = 0x389; break;
 case 0x3a2: *(s32 *)state = 0x3a2; break;
 case 0x3a7: *(s32 *)state = 0x3a7; break;
 case 0x3b6: *(s32 *)state = 0x3b6; break;
 case 0x3bb: *(s32 *)state = 0x3bb; break;
 case 0x3de: *(s32 *)state = 0x3de; break;
 case 0x3e3: *(s32 *)state = 0x3e3; break;
 case 0x3e8: *(s32 *)state = 0x3e8; break;
 case 0x3ed: *(s32 *)state = 0x3ed; break;
 case 0x3f2: *(s32 *)state = 0x3f2; break;
 case 0x3f7: *(s32 *)state = 0x3f7; break;
 default: break;
 }
}

u8 fn_801D8840(void *arg0) {
    return (u8) (M2C_FIELD(arg0, u8 *, 0x16) == 0x20);
}

void fn_801D8854(void *arg0, u32 arg1) {
    *(u16*)((char*)arg0 + 2) = 0x12C;
    if (arg1 != 0) {
        fn_801475FC(arg1, 0x64);
    }
}

void fn_801D888C(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = arg1;
}

void fn_801D8894(void *arg0) {
    s16 *ptr = (s16 *)arg0;
    ptr[1] = 0x12C;
    ptr[2] = 0;
    ptr[3] = 0x18;
}

void fn_801D88B0(s8 *arg0, s8 arg1) {
    *arg0 = arg1;
}

void fn_801D8C0C(void *arg0, s16 arg1)
{
  memset(arg0, 0, 0x4C);
  *((s16 *) (((char *) arg0) + 2)) = 0;
  *((s16 *) (((char *) arg0) + 0)) = 0;
  *((s16 *) (((char *) arg0) + 8)) = arg1 ^ 0;
  *((s16 *) (((char *) arg0) + 2)) = 0x64;
}

#pragma use_lmw_stmw on
#pragma opt_common_subs off
void fn_801D8C64(void *arg0, s16 arg1, s16 arg2)
{
    extern u32 lbl_8027E228[12];
    extern u8 lbl_8027E258[];
    void *fn_8000E0E4(u32);
    void fn_80234450(void *, u8 *);
    void fn_802343E0(void *, void *);
    u32 stack[12];
    void *tmp;
    s16 idx;

    stack[0] = lbl_8027E228[0];
    stack[1] = lbl_8027E228[1];
    stack[2] = lbl_8027E228[2];
    stack[3] = lbl_8027E228[3];
    stack[4] = lbl_8027E228[4];
    stack[5] = lbl_8027E228[5];
    stack[6] = lbl_8027E228[6];
    stack[7] = lbl_8027E228[7];
    stack[8] = lbl_8027E228[8];
    stack[9] = lbl_8027E228[9];
    stack[10] = lbl_8027E228[10];
    stack[11] = lbl_8027E228[11];
    memset(arg0, 0, 0x34);
    *(s16 *)((u8 *)arg0 + 2) = 0;
    *(s16 *)((u8 *)arg0 + 0) = 0;
    *(s16 *)((u8 *)arg0 + 0xa) = arg1;
    *(s16 *)((u8 *)arg0 + 8) = arg2;
    *(s16 *)((u8 *)arg0 + 2) = 0x64;
    fn_80234450((u8 *)arg0 + 0x18, lbl_8027E258 + 0x5bb);
    idx = *(s16 *)((u8 *)arg0 + 8);
    tmp = fn_8000E0E4(stack[idx]);
    fn_802343E0((u8 *)arg0 + 0x18, tmp);
}
#pragma opt_common_subs on
void fn_801D8D58(void *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
}

void fn_801D8D68(void *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
}

void fn_801D8D78(void *arg0,s16 arg1,s16 arg2,u8 arg3,u8 arg4) { s16 a=M2C_FIELD(arg0,s16*,0xa); s16 b=M2C_FIELD(arg0,s16*,8); M2C_FIELD(arg0,s16*,0)=(s16)(M2C_FIELD(arg0,s16*,0)|1); if(arg3){M2C_FIELD(arg0,s16*,0)=(s16)(M2C_FIELD(arg0,s16*,0)|2);}else{M2C_FIELD(arg0,s16*,0)=(s16)(M2C_FIELD(arg0,s16*,0)&0xfffffffd);} if(arg4){M2C_FIELD(arg0,s16*,0)=(s16)(M2C_FIELD(arg0,s16*,0)|4);}else{M2C_FIELD(arg0,s16*,0)=(s16)(M2C_FIELD(arg0,s16*,0)&0xfffffffb);} M2C_FIELD(arg0,s16*,2)=0xc8; M2C_FIELD(arg0,s16*,0xc)=b; M2C_FIELD(arg0,s16*,8)=b; M2C_FIELD(arg0,s16*,0xe)=a; M2C_FIELD(arg0,s16*,0xa)=a; M2C_FIELD(arg0,s16*,0x10)=arg1; M2C_FIELD(arg0,s16*,0x12)=arg2; M2C_FIELD(arg0,s16*,4)=0; M2C_FIELD(arg0,s16*,6)=4; }

void fn_801D8E08(s16 *arg0) {
    *arg0 &= 0xFFFFFFFE;
}

void fn_801D8E18(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 1);
    if (arg3 != 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 2);
    } else {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) & 0xFFFFFFFD);
    }
    if (arg4 != 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 4);
    } else {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) & 0xFFFFFFFB);
    }
    M2C_FIELD(arg0, s16 *, 2) = 0x64;
    M2C_FIELD(arg0, s16 *, 8) = arg1;
    M2C_FIELD(arg0, s16 *, 0xA) = arg2;
}

void fn_801D8E80(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000BF00(void *);
    void fn_801DB5B4(void *, void *);
    void fn_801DC588(void *);
    s16 fn_8021A8C8(s32, s32, s32);
    extern u8 lbl_80299C88[];
    extern u32 lbl_80367110;
    extern f32 lbl_8036B628;
    extern f32 lbl_8036B62C;
    extern f32 lbl_8036B630;
    extern f32 lbl_8036B634;
    extern f32 lbl_8036B638;
    extern f64 lbl_8036B670;

    u8 *st;
    s16 pad;
    s16 i;
    u8 *slot;
    s8 side;

    st = *(u8 **)((u8 *)arg0 + 0x30);
    if (!(lbl_80367110 & 0x10)) {
        pad = fn_8021A8C8(0, 0, 0);
        if (pad == -0x80) {
            *(s32 *)st = 0x28;
        }
        if (pad != -1) {
            if ((u16)*(s16 *)(st + 0x16) != 0xFFFF) {
                if (*(s16 *)(st + 0x16) == -3 && (pad == -2 || pad == 0)) {
                    *(s32 *)st = 0;
                    fn_8000BF00(lbl_80299C88);
                }
                if ((*(s16 *)(st + 0x16) == -2 || *(s16 *)(st + 0x16) == 0) && pad == -3) {
                    *(s32 *)st = 0;
                    fn_8000BF00(lbl_80299C88);
                }
            }
            *(s16 *)(st + 0x16) = pad;
        }
    }

    switch (*(s16 *)(st + 0x62)) {
    case 0:
        *(s16 *)(st + 0x60) = 0;
        break;
    case 0x64:
        *(f32 *)(st + 0x6C) = *(f32 *)(st + 0x6C) + lbl_8036B628;
        if (*(f32 *)(st + 0x6C) >= lbl_8036B62C) {
            *(f32 *)(st + 0x6C) = *(f32 *)(st + 0x6C) - lbl_8036B62C;
        }
        *(s16 *)(st + 0x70) = 0;
        *(f32 *)(st + 0x74) = lbl_8036B630;
        break;
    case 0x12C:
        *(s16 *)(st + 0x64) = (s16)(*(s16 *)(st + 0x64) + 1);
        *(s16 *)(st + 0x70) = (s16)fn_800067BC(0, lbl_8036B634, lbl_8036B638, (f32)*(s16 *)(st + 0x64), (f32)*(s16 *)(st + 0x66));
        *(f32 *)(st + 0x74) = fn_800067BC(0, lbl_8036B630, lbl_8036B634, (f32)*(s16 *)(st + 0x64), (f32)*(s16 *)(st + 0x66));
        if (*(s16 *)(st + 0x64) >= *(s16 *)(st + 0x66)) {
            *(s16 *)(st + 0x62) = 0;
        }
        break;
    }

    for (i = 0, slot = st; i < 6; i++, slot += 0x34) {
        side = (s8)st[0x15];
        switch (*(s16 *)(slot + 0x7E)) {
        case 0:
            *(s16 *)(slot + 0x7C) = 0;
            break;
        case 0x64:
            *(s16 *)(slot + 0x7C) = (s16)(*(s16 *)(slot + 0x7C) | 1);
            *(s16 *)(slot + 0x7E) = 0x69;
            *(s16 *)(slot + 0x8A) = (s16)(((6 - side) * 0x1E) + (*(s16 *)(slot + 0x86) * 0x3C) + 0x2D);
            if ((*(s16 *)(slot + 0x86) & 1) == 0) {
                *(s16 *)(slot + 0x8C) = -0x156;
                *(s16 *)(slot + 0x88) = -0x156;
                *(s16 *)(slot + 0x90) = 0x9E;
            } else {
                *(s16 *)(slot + 0x8C) = 0x292;
                *(s16 *)(slot + 0x88) = 0x292;
                *(s16 *)(slot + 0x90) = 0x9E;
            }
            *(s16 *)(slot + 0x80) = 0;
            *(s16 *)(slot + 0x82) = 0xF;
            /* fallthrough */
        case 0x69:
            *(s16 *)(slot + 0x80) = (s16)(*(s16 *)(slot + 0x80) + 1);
            *(s16 *)(slot + 0x88) = (s16)fn_800067BC(4, (f32)*(s16 *)(slot + 0x8C), (f32)*(s16 *)(slot + 0x90), (f32)*(s16 *)(slot + 0x80), (f32)*(s16 *)(slot + 0x82));
            if (*(s16 *)(slot + 0x80) >= *(s16 *)(slot + 0x82)) {
                *(s16 *)(slot + 0x7E) = 0x6E;
            }
            break;
        case 0xC8:
            *(s16 *)(slot + 0x7C) = (s16)(*(s16 *)(slot + 0x7C) | 1);
            *(s16 *)(slot + 0x7E) = 0xCD;
            *(s16 *)(slot + 0x8A) = (s16)(((6 - side) * 0x1E) + (*(s16 *)(slot + 0x86) * 0x3C) + 0x2D);
            if ((*(s16 *)(slot + 0x86) & 1) == 0) {
                *(s16 *)(slot + 0x8C) = 0x9E;
                *(s16 *)(slot + 0x88) = 0x9E;
                *(s16 *)(slot + 0x90) = 0x292;
            } else {
                *(s16 *)(slot + 0x8C) = 0x9E;
                *(s16 *)(slot + 0x88) = 0x9E;
                *(s16 *)(slot + 0x90) = -0x156;
            }
            *(s16 *)(slot + 0x80) = 0;
            *(s16 *)(slot + 0x82) = 0xF;
            /* fallthrough */
        case 0xCD:
            *(s16 *)(slot + 0x80) = (s16)(*(s16 *)(slot + 0x80) + 1);
            *(s16 *)(slot + 0x88) = (s16)fn_800067BC(4, (f32)*(s16 *)(slot + 0x8C), (f32)*(s16 *)(slot + 0x90), (f32)*(s16 *)(slot + 0x80), (f32)*(s16 *)(slot + 0x82));
            if (*(s16 *)(slot + 0x80) >= *(s16 *)(slot + 0x82)) {
                *(s16 *)(slot + 0x7E) = 0xD2;
            }
            break;
        case 0x12C:
            *(s16 *)(slot + 0x7C) = (s16)(*(s16 *)(slot + 0x7C) | 1);
            *(s16 *)(slot + 0x7E) = 0x69;
            *(s16 *)(slot + 0x8A) = 0x28;
            *(s16 *)(slot + 0x8C) = 0x292;
            *(s16 *)(slot + 0x88) = 0x292;
            *(s16 *)(slot + 0x90) = 0x9E;
            *(s16 *)(slot + 0x80) = 0;
            *(s16 *)(slot + 0x82) = 0xF;
            break;
        case 0x190:
            *(s16 *)(slot + 0x7C) = (s16)(*(s16 *)(slot + 0x7C) | 1);
            *(s16 *)(slot + 0x7E) = 0xCD;
            *(s16 *)(slot + 0x8A) = 0x28;
            *(s16 *)(slot + 0x8C) = 0x9E;
            *(s16 *)(slot + 0x88) = 0x9E;
            *(s16 *)(slot + 0x90) = -0x156;
            *(s16 *)(slot + 0x80) = 0;
            *(s16 *)(slot + 0x82) = 0xF;
            break;
        }
    }

    {
        s16 j;
        u8 *row;
        for (j = 0, row = st; j < 5; j++, row += 0x4C) {
            fn_801DB5B4(row + 0x1B4, st);
        }
    }

    switch (*(s16 *)(st + 0x332)) {
    case 0:
        *(s16 *)(st + 0x330) = 0;
        break;
    case 0x64:
        *(s16 *)(st + 0x330) = (s16)(*(s16 *)(st + 0x330) | 1);
        *(s16 *)(st + 0x332) = 0x6E;
        /* fallthrough */
    case 0x6E:
        *(s16 *)(st + 0x34E) = (s16)(*(s16 *)(st + 0x34E) + 1);
        if (*(s16 *)(st + 0x34E) >= 5) {
            *(s16 *)(st + 0x34E) = 5;
        }
        break;
    case 0xC8:
        *(s16 *)(st + 0x330) = (s16)(*(s16 *)(st + 0x330) | 1);
        *(s16 *)(st + 0x332) = 0xD2;
        /* fallthrough */
    case 0xD2:
        *(s16 *)(st + 0x34E) = (s16)(*(s16 *)(st + 0x34E) - 1);
        if (*(s16 *)(st + 0x34E) < 1) {
            *(s16 *)(st + 0x34E) = 0;
            *(s16 *)(st + 0x332) = 0;
            *(s16 *)(st + 0x330) = 0;
        }
        break;
    }
    fn_801DC588(st + 0x330);

    {
        s16 k;
        u8 *a;
        for (k = 0, a = st; k < 2; k++, a += 0x14) {
            switch (*(s16 *)(a + 0x51C)) {
            case 0:
                *(s16 *)(a + 0x51A) = 0;
                break;
            case 0xC8:
                *(s16 *)(a + 0x51E) = (s16)(*(s16 *)(a + 0x51E) + 1);
                *(s16 *)(a + 0x522) = (s16)fn_800067BC(4, (f32)*(s16 *)(a + 0x526), (f32)*(s16 *)(a + 0x52A), (f32)*(s16 *)(a + 0x51E), (f32)*(s16 *)(a + 0x520));
                *(s16 *)(a + 0x524) = (s16)fn_800067BC(4, (f32)*(s16 *)(a + 0x528), (f32)*(s16 *)(a + 0x52C), (f32)*(s16 *)(a + 0x51E), (f32)*(s16 *)(a + 0x520));
                if (*(s16 *)(a + 0x51E) >= *(s16 *)(a + 0x520)) {
                    *(s16 *)(a + 0x51C) = 0x64;
                }
                break;
            }
        }
    }
}

void fn_801D9FA4(void *arg0) {}

static s32 fn_801DB5B4(s32 arg0, s32 arg1) {
    u16* unit = (u16*)arg0;
    s32 r0, r3, r4, r5;
    
    switch (unit[1]) {
        case 0x64: // 100
            unit[0] = (u16)(unit[0] | 0x1);
            unit[1] = (s16)0x6E;
            r4 = unit[2];
            r0 = unit[4];
            r4 = (s16)(r4 + 1);
            r0 = r0 << 6;
            r0 += 0x5E;
            unit[6] = (s16)r0;
            unit[7] = (s16)0x2E;
            
            if (unit[2] >= unit[3]) {
                return 0;
            }
            unit[1] = (s16)0x6E;
            break;

        case 0xCD: // 205
            unit[0] = (u16)(unit[0] | 0x1);
            unit[1] = (s16)0xD2;
            r4 = unit[4];
            r0 = unit[6]; 
            r4 = (s16)(r4 + 1);
            r0 = r0 << 6;
            r0 += 0x5E;
            unit[6] = (s16)r0;
            unit[7] = (s16)0x2E;
            
            if (unit[4] >= unit[3]) {
                return 0;
            }
            unit[1] = (s16)0xD2;
            break;

        case 0x69: // 105
            unit[0] = (u16)(unit[0] | 0x1);
            unit[1] = (s16)0x69;
            unit[0x1E] = (s16)0xFF;
            r4 = unit[4];
            r0 = unit[6];
            r4 = (s16)(r4 + 1);
            r0 = r0 << 6;
            r0 += 0x5E;
            unit[6] = (s16)r0;
            
            if (unit[4] >= unit[3]) {
                return 0;
            }
            unit[1] = (s16)0x6E;
            break;

        case 0xC8: // 200
            unit[0] = (u16)(unit[0] | 0x1);
            unit[1] = (s16)0xCD;
            unit[0x1E] = (s16)0xFF;
            r0 = unit[4];
            r0 = r0 << 6;
            r0 += 0x5E;
            unit[6] = (s16)r0;
            unit[7] = (s16)0x2E;
            
            if (unit[4] >= unit[3]) {
                return 0;
            }
            unit[1] = (s16)0xD2;
            break;

        case 0x0: // 0
        case 0x6E:
        case 0xD2:
        case 0x12C:
            unit[0] = (u16)(unit[0] | 0x1);
            unit[1] = (s16)0x00;
            unit[0x1E] = (s16)0xFF;
            
            if (unit[4] < unit[3]) {
                return 0;
            }
            unit[1] = (s16)0xD2;
            break;

        case 0x131: // 305
            unit[0] = (u16)(unit[0] | 0x1);
            unit[1] = (s16)0x46;
            unit[5] = (s16)0xFF;
            unit[6] = (s16)0x3E8;
            
            r4 = unit[1];
            r0 = unit[2];
            r5 = unit[3];
            
            // Absolute value calculation: ((r5 ^ (r5 >> 31)) - (r5 >> 31))
            r5 = (r5 >> 31); 
            r5 = ((r5 ^ r5) - r5);
            r5 >>= 1;
            
            if (r4 < r5) {
                // Branch A
                r0 = unit[1];
                if (r0 & 0x4000) {
                    unit[0] = (u16)(unit[0] | 0x20);
                } else {
                    unit[0] = (u16)(unit[0] & ~0x20);
                }
            } else if (r4 == r5) {
                // Branch B
                r0 = unit[1];
                if (r0 & 0x2000) {
                    unit[0] = (u16)(unit[0] | 0x40);
                } else {
                    unit[0] = (u16)(unit[0] & ~0x40);
                }
            } else {
                // Branch C
                r0 = -r5 + r4;
                if (r0 & 0x8000) {
                    unit[0] = (u16)(unit[0] | 0x20);
                } else {
                    unit[0] = (u16)(unit[0] & ~0x20);
                }
            }
            break;

        default:
            return 0;
    }

    return 0;
}

void fn_801DBD84(struct efUnit* arg0)
{
    volatile struct efUnit* temp = arg0;  // Force usage pattern
    
    if (arg0 == NULL) {
        return;
    }
    
    // Clear some fields directly
    arg0->unit = NULL;
    *(u32*)((u8*)arg0 + 0x0C) = 0;
    *(u32*)((u8*)arg0 + 0x10) = 0;
    *(u8*)((u8*)arg0 + 0x11) = 0;  
    *(u8*)((u8*)arg0 + 0x15) = 0;
    *(s16*)((u8*)arg0 + 0x16) = -1; 
    *(u8*)((u8*)arg0 + 0x1A) = 0;
    *(u8*)((u8*)arg0 + 0x5C) = 0;
    *(s16*)((u8*)arg0 + 0x5E) = 0; 
    
    // Use a simpler but more direct approach - clear large blocks with explicit memsets
    memset((u8*)arg0 + 0x60, 0, 0x1C); 
}

s32 fn_801DBFF8(void)
{
    void *fn_801E2324(void *, s32);
    extern s32 lbl_803682F0;
    s32 i;
    s32 count;
    void *obj;

    count = 0;
    for (i = 0; i < 5; i++) {
        obj = fn_801E2324(&lbl_803682F0, i);
        if (obj != NULL) {
            if (*((u8 *)obj + 0x60) == 2) {
                goto matched;
            }
        }
        obj = NULL;
    matched:
        if (obj != NULL) {
            count += 1;
        }
    }
    return count;
}

void *fn_801DC070(void *arg0)
{
    extern u8 lbl_803682F0;
    void *fn_801E2324(void *, void *);
    u8 *result;

    result = (u8 *)fn_801E2324(&lbl_803682F0, arg0);
    if (result != NULL) {
        if (result[0x60] == 2) {
        } else {
            result = NULL;
        }
    }
    if (result != NULL) {
        if (result[0x64] != 0x20) {
            result = NULL;
        }
    }
    return result;
}

void *fn_801DC0CC(void) {
    void *fn_801E09B4(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    void *temp_r3;

    temp_r3 = fn_801E09B4(&lbl_803682F0);
    if ((temp_r3 != NULL) && ((u8) M2C_FIELD(temp_r3, u8 *, 0x60) == 3)) {
        return temp_r3;
    }
    return NULL;
}

void *fn_801DC10C(void *arg0)
{
    extern u8 lbl_803682F0;
    extern void *fn_801E2324(void *, void *);

    u8 *result;

    result = (u8 *)fn_801E2324(&lbl_803682F0, arg0);

    if (result != 0 && result[0x60] == 2) {
        return result;
    }

    return 0;
}

void fn_801DC150(s32 arg0, s8 arg1, s8 arg2, s32 arg3, s32 arg4, s8 arg5, void *arg6) {
    void *fn_8000CAA0(void *, void *);
    extern u8 lbl_80299C88[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80299C88, arg6);
    *(void **)((u8 *)temp_r3 + 0x30) = *(void **)((u8 *)arg6 + 0x30);
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg0;
    *(s8 *)((u8 *)temp_r3 + 0x3C) = arg1;
    *(s32 *)((u8 *)temp_r3 + 0x40) = arg3;
    *(s32 *)((u8 *)temp_r3 + 0x38) = arg4;
    *(s8 *)((u8 *)(*(void **)((u8 *)temp_r3 + 0x30)) + 0x14) = arg2;
    *(s8 *)((u8 *)temp_r3 + 0x44) = arg5;
}

#pragma global_optimizer off
void fn_801DC1C8(u8 *arg0) {
    u8 *base;
    s32 off;

    base = *(u8 **)(arg0 + 0x30);
    *(s16 *)(base + 0x332) = 0xC8;
    off = *(s32 *)(arg0 + 0x40) * 0x14 + 0x51A;
    *(s16 *)(base + off) = (s16)(*(s16 *)(base + off) & ~1);
}
#pragma global_optimizer on
void fn_801DC1F0(void *arg0) {
    void fn_8000C188(void *);
    void fn_801475FC(void *, s32);
    extern void *lbl_80367240;
    extern u8 lbl_8027E258[];
    void *self;
    s32 pressed;
    void *state;
    s32 bonus;
    s32 buttons;
    s32 prev;
    s32 mask;
    s32 v340;
    void *entry;
    s16 v33e;
    s16 t0;
    s16 t8;
    s16 t10;

    self = arg0;
    buttons = ((s32 *)lbl_80367240)[1];
    prev = ((s32 *)lbl_80367240)[2];
    state = *(void **)((u8 *)self + 0x30);
    pressed = buttons & (prev ^ buttons);

    if (*((u8 *)self + 0x3C) != 1) {
        goto not_mode1;
    }

    
    mask = *(s16 *)((u8 *)state + 0x330);
    mask = (mask >> 2) & 1;
    bonus = mask == 1 ? 0x28 : 0;

    if ((pressed & 0x100) == 0) {
        goto after_100;
    }
    if ((s8)*((u8 *)state + 0x14) == 0) {
        fn_801475FC(*(void **)((u8 *)self + 0x38), 0x64);
    } else {
        fn_801475FC(lbl_8027E258 + 0x2E4, 0x64);
    }
    fn_8000C188(self);
after_100:
    if ((pressed & 0x200) == 0) {
        goto after_200;
    }
    fn_801475FC(lbl_8027E258 + 0x2E4, 0x64);
    *((u8 *)state + 0x14) = 1;
    fn_8000C188(self);
after_200:
    if ((pressed & 0x01000001) == 0) {
        goto after_01;
    }
    if ((s32)*((u8 *)state + 0x14) == 1) {
        fn_801475FC(lbl_8027E258 + 0x328, 0x64);
    }
    {
        s32 zero;
        s32 val_c8;
        s32 four;
        zero = 0;
        val_c8 = 0xC8;
        *((u8 *)state + 0x14) = zero;
        four = 4;
        v340 = *(s16 *)((u8 *)state + 0x340) + bonus;
        v33e = *(s16 *)((u8 *)state + 0x33E);
        entry = (u8 *)state + (*(s32 *)((u8 *)self + 0x40) * 0x14) + 0x51A;
        t0 = *(s16 *)entry;
        t10 = *(s16 *)((u8 *)entry + 0xA);
        t8 = *(s16 *)((u8 *)entry + 8);
        *(s16 *)entry = t0 | 1;
        *(s16 *)entry = *(s16 *)entry & ~2;
        *(s16 *)entry = *(s16 *)entry & ~4;
        *(s16 *)((u8 *)entry + 2) = val_c8;
        *(s16 *)((u8 *)entry + 0xC) = t8;
        *(s16 *)((u8 *)entry + 0xE) = t10;
        *(s16 *)((u8 *)entry + 0x10) = v33e;
        *(s16 *)((u8 *)entry + 0x12) = v340;
        *(s16 *)((u8 *)entry + 4) = zero;
        *(s16 *)((u8 *)entry + 6) = four;
    }
after_01:
    if ((pressed & 0x02000002) == 0) {
        goto done;
    }
    if ((s8)*((u8 *)state + 0x14) == 0) {
        fn_801475FC(lbl_8027E258 + 0x328, 0x64);
    }
    {
        s32 v340;
        void *entry;
        s16 v33e;
        s16 t0;
        s16 t8;
        s16 t10;
        s32 one;
        s32 val_c8;
        s32 zero;
        s32 four;
        one = 1;
        val_c8 = 0xC8;
        *((u8 *)state + 0x14) = one;
        zero = 0;
        four = 4;
        v340 = *(s16 *)((u8 *)state + 0x344) + bonus;
        v33e = *(s16 *)((u8 *)state + 0x342);
        entry = (u8 *)state + (*(s32 *)((u8 *)self + 0x40) * 0x14) + 0x51A;
        t0 = *(s16 *)entry;
        t10 = *(s16 *)((u8 *)entry + 0xA);
        t8 = *(s16 *)((u8 *)entry + 8);
        *(s16 *)entry = t0 | 1;
        *(s16 *)entry = *(s16 *)entry & ~2;
        *(s16 *)entry = *(s16 *)entry & ~4;
        *(s16 *)((u8 *)entry + 2) = val_c8;
        *(s16 *)((u8 *)entry + 0xC) = t8;
        *(s16 *)((u8 *)entry + 0xE) = t10;
        *(s16 *)((u8 *)entry + 0x10) = v33e;
        *(s16 *)((u8 *)entry + 0x12) = v340;
        *(s16 *)((u8 *)entry + 4) = zero;
        *(s16 *)((u8 *)entry + 6) = four;
    }
    goto done;

not_mode1:
    if (pressed & 0x100) {
        fn_801475FC(lbl_8027E258 + 0x2D4, 0x64);
        fn_8000C188(self);
    }
done:
    ;
}

void fn_801DCD3C(u8 *arg0)
{
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80009D74(f32, f32, f32, f32);
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80009C0C(f32);
    void fn_8007CFD8(s32 *, f32, f32, f32, f32);
    void fn_8015A2D8(s16, s16, s16, s16, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007884(void);
    void *fn_8006EDD8(s32, s32);
    void fn_80009F90(s32, s32, s32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    s32 fn_80010B78(void *, s32, f32);
    void fn_8001003C(s16, s16, u8, s32, s32, void *, f32, f32);
    u8 *fn_8000E0E4(void *);
    extern f32 lbl_8036B630, lbl_8036B634, lbl_8036B63C, lbl_8036B650;
    extern f32 lbl_8036B654, lbl_8036B658, lbl_8036B664;
    extern f32 lbl_8036B6A0, lbl_8036B6A4, lbl_8036B6A8, lbl_8036B6AC, lbl_8036B6B0;
    extern s32 lbl_8036B620, lbl_8036B624;
    extern s32 lbl_803674F4;
    extern u8 lbl_8027E258[];

    f32 f30;
    s16 x, y;
    s32 color;
    s16 mode;

    fn_8000A258();
    fn_80009D74(lbl_8036B634, lbl_8036B634, lbl_8036B63C, lbl_8036B630);
    fn_8000A248();
    if (*(s16 *)arg0 & 1) {
        f30 = fn_800067BC(0, lbl_8036B634, lbl_8036B630, (f32)*(s16 *)(arg0 + 0x1E), lbl_8036B650);
        fn_8000A258();
        fn_80009D74(lbl_8036B6A0, lbl_8036B6A4, lbl_8036B63C, f30);
        fn_8000A248();
        x = (s16)(lbl_8036B658 * (f32)(-(s16)*(s16 *)(arg0 + 0xA)));
        y = (s16)(lbl_8036B658 * (f32)(-(s16)*(s16 *)(arg0 + 0xC)));
        fn_8000A258();
        fn_80009C0C(lbl_8036B6A8);
        fn_8000A248();
        mode = *(s16 *)(arg0 + 4);
        if (mode == 0) {
            if (*(s16 *)arg0 & 4) {
                color = lbl_8036B620;
            } else {
                color = lbl_8036B624;
            }
            fn_8007CFD8(&color, (f32)x, (f32)y, (f32)*(s16 *)(arg0 + 0xA), (f32)*(s16 *)(arg0 + 0xC));
        } else {
            fn_8015A2D8(x, y, *(s16 *)(arg0 + 0xA), *(s16 *)(arg0 + 0xC), 0xFF, 0x10);
            if (mode == 1 || mode == 2) {
                s16 x0 = (s16)(x + 0x18);
                s16 y0 = (s16)(y + 0x4C);
                s16 w = (s16)(*(s16 *)(arg0 + 0xA) - 0x30);
                s16 h = (s16)(*(s16 *)(arg0 + 0xC) - 0x60);
                fn_8000A258();
                fn_80009C0C(lbl_8036B654);
                fn_8000A248();
                fn_8000A258();
                fn_8000A174(0, 0x12);
                fn_8000A248();
                fn_80007898(4);
                fn_800077D8((f32)x0, (f32)y0, (f32)w, lbl_8036B634);
                fn_800076AC(0xFF, 0xFF, 0xFF, 0x4D);
                fn_80007884();
                fn_80007898(4);
                fn_800077D8((f32)x0, (f32)(y0 + h), (f32)w, lbl_8036B634);
                fn_800076AC(0xFF, 0xFF, 0xFF, 0x4D);
                fn_80007884();
                fn_80007898(4);
                fn_800077D8((f32)x0, (f32)y0, lbl_8036B634, (f32)h);
                fn_800076AC(0xFF, 0xFF, 0xFF, 0x4D);
                fn_80007884();
                fn_80007898(4);
                fn_800077D8((f32)(x0 + w), (f32)y0, lbl_8036B634, (f32)h);
                fn_800076AC(0xFF, 0xFF, 0xFF, 0x4D);
                fn_80007884();
                fn_8000A258();
                fn_80009C0C(lbl_8036B654);
                fn_8000A248();
                fn_80007898(1);
                fn_800077D8((f32)(x0 + 1), (f32)(y0 + 1), (f32)(w - 2), (f32)(h - 2));
                fn_800076AC(0, 0, 0, 0x4D);
                fn_80007884();
                fn_8000A258();
                fn_80009C0C(lbl_8036B664);
                fn_8000A248();
            }
        }
        fn_8000A258();
        fn_80009C0C(lbl_8036B6AC);
        fn_8000A248();
        fn_8000A258();
        fn_80009D74(lbl_8036B634, lbl_8036B634, lbl_8036B63C, lbl_8036B630);
        fn_8000A248();
    }
}

void fn_801DDAC8(void *arg0) {
    M2C_UNK fn_801DC588();
    s16 temp_r3;
    s16 *temp_r4;

    temp_r3 = *(s16 *)((u8 *)arg0 + 2);
    switch (temp_r3) {                              /* irregular */
    case 0x0:
        *(s16 *)arg0 = 0;
        break;
    case 0x64:
        *(s16 *)arg0 = *(s16 *)arg0 | 1;
        *(s16 *)((u8 *)arg0 + 2) = 0x6E;
        /* fallthrough */
    case 0x6E:
        temp_r4 = (s16 *)((u8 *)arg0 + 0x1E);
        *temp_r4 = *temp_r4 + 1;
        if (*temp_r4 >= 5) {
            *temp_r4 = 5;
        }
        break;
    case 0xC8:
        *(s16 *)arg0 = *(s16 *)arg0 | 1;
        *(s16 *)((u8 *)arg0 + 2) = 0xD2;
        /* fallthrough */
    case 0xD2:
        temp_r4 = (s16 *)((u8 *)arg0 + 0x1E);
        *temp_r4 = *temp_r4 - 1;
        if (*temp_r4 < 1) {
            *temp_r4 = 0;
            *(s16 *)((u8 *)arg0 + 2) = 0;
            *(s16 *)arg0 = 0;
        }
        break;
    }
    fn_801DC588();
}

extern void *lbl_801D3B14;
#pragma opt_propagation off
void fn_801DDBA8(MsgBox *w, s32 arg1, u8 arg2, u8 arg3, s16 arg4) {
    void *memset(void *, s32, u32);
    void *memcpy(void *, const void *, u32);
    char *fn_8000E0E4(s32);
    s32 fn_80010B78(char *, s32, f32);
    M2C_UNK fn_801DC588();
    s32 n;
    char *s;
    char *start;
    s32 len;
    f32 width;
    s32 h;
    s32 t;
    s32 pad;
    s32 x;
    u16 *tex;
    void *str;
    void *obj;
    s32 id;
    s32 width2;

    memset(w, 0, sizeof(MsgBox));
    w->state = 0;
    w->flags = 0;
    w->timer = 0;
    w->state = 100;
    w->type = arg4;
    if (arg3) {
        w->flags |= 4;
    } else {
        w->flags &= ~4;
    }
    w->width = 200;
    if (w->type == 1 || w->type == 2 || w->type == 3) {
        w->width = 400;
    }
    s = fn_8000E0E4(arg1);
    n = len = 0;
    start = s;
    for (;;) {
        if (*s == 0 || *s == '\n') {
            if (len > 0) {
                memcpy(w->lines[n], start, len);
            }
            w->lines[n][len] = 0;
            width = fn_80010B78(w->lines[n], -1, 1.0f);
            if (width > w->width) {
                w->width = width;
            }
            n++;
            if (*s == 0) {
                break;
            }
            s++;
            len = 0;
            start = s;
        } else {
            s++;
            len++;
        }
    }
    w->numLines = n;
    w->width += 0x18;
    t = arg2 ? 20 : 0;
    h = w->numLines * 20;
    h = h + t;
    pad = (w->flags & 4) ? 40 : 0;
    x = h + pad;
    w->height = x + 32;
    if (w->type == 1 || w->type == 2) {
        w->height += 0x88;
    }
    if (w->type == 3) {
        w->height += 10;
    }
    if (arg2) {
        w->flags |= 2;
    }
    fn_801DC588(w);
}
#pragma opt_propagation reset
void fn_801DDDE8(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *lbl, s32 arg);
    extern u8 lbl_80299C74[];
    extern f32 lbl_8036B634;
    extern f64 lbl_8036B670;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80299C74, arg1);
    *(f32 *)((u8 *)temp_r3 + 0x30) = lbl_8036B634;
    *(f32 *)((u8 *)temp_r3 + 0x34) = (f32)arg0;
}

#pragma scheduling off
void fn_801DDE44(void *arg0) {
    extern f32 lbl_8036B630;
    *(f32 *)((u8 *)arg0 + 0x30) += lbl_8036B630;
    if (*(f32 *)((u8 *)arg0 + 0x30) >= *(f32 *)((u8 *)arg0 + 0x34)) {
        fn_8000C188();
    }
}
#pragma scheduling on
void fn_801DDE88(s16 arg0, s16 arg1, s32 arg2) {
    M2C_UNK fn_80007818(f32, f32, f32, f32);
    M2C_UNK fn_80007838(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009F90(u32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258(void *);
    void **fn_8006EDD8(u32, M2C_UNK);
    extern M2C_UNK lbl_80299A78;
    extern f32 lbl_8036B634;
    M2C_UNK *var_r6;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 var_ctr;
    u16 temp_r28;
    u16 temp_r29;
    u32 var_r31;
    void *temp_r3;

    var_r6 = &lbl_80299A78;
    var_ctr = 4;
loop_1:
    if (arg2 == (s32) M2C_FIELD(var_r6, s32 *, 0)) {

    } else {
        temp_r0 = M2C_FIELD(var_r6, s32 *, 0xC);
        var_r6 += 0xC;
        if (arg2 == temp_r0) {

        } else {
            temp_r0_2 = M2C_FIELD(var_r6, s32 *, 0xC);
            var_r6 += 0xC;
            if (arg2 == temp_r0_2) {

            } else {
                temp_r0_3 = M2C_FIELD(var_r6, s32 *, 0xC);
                var_r6 += 0xC;
                if (arg2 == temp_r0_3) {

                } else {
                    temp_r0_4 = M2C_FIELD(var_r6, s32 *, 0xC);
                    var_r6 += 0xC;
                    if (arg2 == temp_r0_4) {

                    } else {
                        temp_r0_5 = M2C_FIELD(var_r6, s32 *, 0xC);
                        var_r6 += 0xC;
                        if (arg2 == temp_r0_5) {

                        } else {
                            temp_r0_6 = M2C_FIELD(var_r6, s32 *, 0xC);
                            var_r6 += 0xC;
                            if (arg2 == temp_r0_6) {

                            } else {
                                temp_r0_7 = M2C_FIELD(var_r6, s32 *, 0xC);
                                var_r6 += 0xC;
                                if (arg2 == temp_r0_7) {

                                } else {
                                    temp_r0_8 = M2C_FIELD(var_r6, s32 *, 0xC);
                                    var_r6 += 0xC;
                                    if (arg2 == temp_r0_8) {

                                    } else {
                                        temp_r0_9 = M2C_FIELD(var_r6, s32 *, 0xC);
                                        var_r6 += 0xC;
                                        if (arg2 == temp_r0_9) {

                                        } else {
                                            var_r6 += 0xC;
                                            var_ctr -= 1;
                                            if (var_ctr == 0) {
                                                var_r6 = NULL;
                                            } else {
                                                goto loop_1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (var_r6 != NULL) {
        var_r31 = M2C_FIELD(var_r6, u32 *, 8);
    } else {
        var_r31 = 0U;
    }
    if (var_r31 != 0U) {
        temp_r3 = *fn_8006EDD8(var_r31, 0);
        temp_r29 = M2C_FIELD(temp_r3, u16 *, 2);
        temp_r28 = M2C_FIELD(temp_r3, u16 *, 0);
        fn_8000A258(temp_r3);
        fn_80009F90(var_r31, 0, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838((f32) arg0, (f32) arg1, lbl_8036B634, lbl_8036B634);
        fn_80007818((f32) (arg0 + temp_r29), (f32) (arg1 + temp_r28), (f32) temp_r29, (f32) temp_r28);
        fn_80007884();
    }
}

void fn_801DE074(void) {
    void fn_8000BF00(void *);
    void fn_8006EDA0(void *);
    extern u8 lbl_80299C58[];
    extern u8 lbl_80299A78[];
    s32 i;
    fn_8000BF00(lbl_80299C58);
    i = 0;
    do {
        if (*(u32 *)(lbl_80299A78 + i * 0xC + 8) != 0) {
            fn_8006EDA0(lbl_80299A78 + i * 0xC + 8);
        }
        *(u32 *)(lbl_80299A78 + i * 0xC + 8) = 0;
        i++;
    } while (i < 0x28);
}

#pragma global_optimizer off
void fn_801DE274(void) {
    void fn_80231D94(void *, void *, ...);
    s32 fn_8005C6A0(void *);
    void fn_8006EEFC(void *, void *);
    extern u8 lbl_8027E258[];
    extern u8 lbl_80299A78[];
    char buf[0x40];
    u8 *p;
    s32 i;

    p = lbl_80299A78;
    i = 0;
    do {
        fn_80231D94(buf, lbl_8027E258 + 0x661, *(s32 *)(p + 4));
        if (fn_8005C6A0(buf) & 0x2000) {
            fn_8006EEFC(p + 8, buf);
        }
        i += 1;
        p += 0xC;
    } while (i < 0x28);
}
#pragma global_optimizer on

#pragma use_lmw_stmw reset
void fn_801DE2FC(s32 arg0) {
    u8 fn_8005BB2C();
    if (fn_8005BB2C() != 0) {
        fn_8000C188(arg0);
    }
}

void fn_801DE338(void *arg0) {
    *(s32*)((char*)arg0 + 0x0) = -1;
    *(s32*)((char*)arg0 + 0x4) = -1;
    *(s8*)((char*)arg0 + 0x44) = 1;
}

u8 fn_801DE350(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x63);
}

u8 fn_801DE358(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x47);
}

s32 fn_801DE360(void) {
    return 1;
}

u8 fn_801DE368(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x64);
}

s32 fn_801DE370(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

void fn_801DE378(void *arg0)
{
  memset(arg0, 0, 0x1EA);
  *((s16 *) arg0) = (*(((s16 *) arg0) + 1) = 0);
  *(((s16 *) arg0) + 0xF) = 0;
}

void fn_801DE3BC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x1E8) = arg1;
}

void fn_801DE3C4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0xC8;
}

u8 fn_801DE3D0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x10);
}

void fn_801DE3D8(void *arg0) {
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    extern f32 lbl_8036B6B8, lbl_8036B6BC;
    s32 flags;
    u8 gate;
    void *pad;
    f32 tmp;

    gate = 0;
    flags = lbl_80367110;
    if ((flags & 0x10) != 0) {
        if ((flags & 0x20) == 0) {
            gate = 1;
        }
    }
    if (gate != 0) {
        return;
    }
    tmp = *(f32 *)((char *)arg0 + 0x44);
    pad = lbl_80367240;
    flags = *(s32 *)((u8 *)pad + 0xc);
    if ((s16)tmp != 0) {
        return;
    }
    if ((flags & 0x04000004) && *(u8 *)((char *)arg0 + 0x84)) {
        *(f32 *)((char *)arg0 + 0x44) = lbl_8036B6B8;
        return;
    }
    if ((flags & 0x08000008) && *(u8 *)((char *)arg0 + 0x5C)) {
        *(f32 *)((char *)arg0 + 0x44) = lbl_8036B6BC;
    }
}

#pragma global_optimizer off
#pragma use_lmw_stmw on
void fn_801DE474(void *arg0, void *arg1)
{
    void fn_8013F748(void *, s16 *, s16 *);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80009C0C(f32);
    void fn_80009BC0(void (*)(void *), s16 *);
    void fn_80009B98(void);
    void fn_8000A174(s32, u16);
    void fn_8013F920(void *);
    s16 fn_800102BC(s32, f32);
    s32 fn_8001059C(u8 *, s32, f32);
    s16 fn_80010B78(u8 *, s32, f32);
    void *fn_8000E0E4(u8 *);
    void fn_8001019C(s32, s32, s32, void *, ...);
    void fn_80007898(s32);
    s32 *fn_8018D900(s32);
    void fn_80007668(s32 *);
    void fn_80006B18(s32, s32, s32, s32, s32);
    void fn_80007884(void);
    void *fn_8014C604(u8 *);
    void *fn_800A8A88(u32);
    void fn_800152F8(s32, s32, s32, s32, s32, s32, s32, s32);
    extern f32 lbl_8036B6C0;
    extern f32 lbl_8036B6C4;
    extern f32 lbl_8036B6C8;
    extern f32 lbl_8036B6CC;
    extern f32 lbl_8036B6D0;
    extern f32 lbl_80367098[];
    extern u8 lbl_8027E8D0[];
    extern u8 lbl_80330708[];
    extern u8 lbl_802B14E4[];
    extern u8 lbl_802CA264[];

    typedef void (*V0)(void *);
    typedef void (*V1)(void *, void *);
    typedef void (*VS)(void *, s16);
    V0 *vt;
    s16 rect_storage[4];
    s16 *rect;
    s16 dy, dx;
    s16 scroll_adj;
    s16 y0, x0, ybase;
    s16 half, gap, right, left_x;
    s16 row_y;
    s16 visible;
    f32 f1;
    s32 tmp;
    u8 *str_colon;
    s16 i;
    u8 any;
    u8 *unit;
    s16 x_cur, y_prev, x_prev;
    s16 name_w;
    void *node;
    void *entry;
    s8 flag;
    u8 flags8[0x20];

    vt = *(V0 **)arg0;
    ((V0)vt[0x30 / 4])(arg0);
    vt = *(V0 **)arg0;
    ((V1)vt[0x14 / 4])(arg0, arg1);

    dy = (s16)(M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14));
    dx = (s16)(M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12));
    rect = (s16 *)((u8 *)arg0 + 0x48);
    rect[0] = 0;
    rect[1] = 0;
    rect[2] = dx;
    rect[3] = dy;
    fn_8013F748(arg0, rect, rect);
    rect = (s16 *)((u8 *)arg0 + 0x4C);
    fn_8013F748(arg0, rect, rect);

    fn_8000A258();
    fn_80009C0C(lbl_8036B6C0);
    fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
    fn_80009BC0(fn_8013F920, (s16 *)((u8 *)arg0 + 0x48));
    fn_8000A248();

    f1 = M2C_FIELD(arg0, f32 *, 0x44);
    str_colon = lbl_8027E8D0 + 0x1D;
    scroll_adj = 0;
    if (f1 < lbl_8036B6C4) {
        f1 = f1 + lbl_8036B6C8;
        M2C_FIELD(arg0, f32 *, 0x44) = f1;
        if (f1 >= -lbl_80367098[0]) {
            M2C_FIELD(arg0, f32 *, 0x44) = lbl_8036B6C4;
            M2C_FIELD(arg0, s16 *, 0x40) = (s16)(M2C_FIELD(arg0, s16 *, 0x40) - 0x1C);
        } else {
            scroll_adj = (s16)(-((s32)M2C_FIELD(arg0, f32 *, 0x44) + 0x1C));
        }
    } else if (f1 > lbl_8036B6C4) {
        f1 = f1 - lbl_8036B6C8;
        M2C_FIELD(arg0, f32 *, 0x44) = f1;
        if (f1 <= lbl_80367098[0]) {
            M2C_FIELD(arg0, f32 *, 0x44) = lbl_8036B6C4;
            M2C_FIELD(arg0, s16 *, 0x40) = (s16)(M2C_FIELD(arg0, s16 *, 0x40) + 0x1C);
        } else {
            scroll_adj = (s16)(0x1C - (s32)M2C_FIELD(arg0, f32 *, 0x44));
        }
    }

    left_x = M2C_FIELD(arg0, s16 *, 0x3C);
    scroll_adj = (s16)(M2C_FIELD(arg0, s16 *, 0x40) + scroll_adj);
    ybase = (s16)(scroll_adj + M2C_FIELD(arg0, s16 *, 0x3E));
    half = fn_800102BC(-1, lbl_8036B6CC);
    gap = (s16)((0x1C - half) >> 1);
    right = (s16)((s16)(M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)) - left_x);
    right = (s16)(right - fn_8001059C(lbl_8027E8D0 + 0x20, -1, lbl_8036B6CC));
    x0 = (s16)(right - 0x18);
    y0 = fn_80010B78(str_colon, -1, lbl_8036B6CC);

#define ROW_VISIBLE(y) ((((s16)((y) + 0x1C) > 0) && ((y) < (s16)(M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14)))) ? 1 : 0)

    visible = ROW_VISIBLE(ybase);
    if (visible) {
        row_y = (s16)(ybase + gap);
        fn_8001019C(left_x, row_y, 0xF, fn_8000E0E4(lbl_8027E8D0 + 0x24));
        fn_8001019C(x0, row_y, 0xF, lbl_8027E8D0 + 0x20);
        fn_80007898(6);
        tmp = *fn_8018D900(0x1D);
        fn_80007668(&tmp);
        fn_80006B18(x0, row_y, 0, 0, *(s32 *)(lbl_80330708 + 0x68));
        fn_80007884();
        vt = *(V0 **)arg0;
        ((VS)vt[0x2C / 4])(arg0, (s16)(half + row_y));
        fn_8000A258();
        fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
        fn_8000A248();
    }

    row_y = (s16)(ybase + 0x1C);
    visible = ROW_VISIBLE(row_y);
    if (visible) {
        row_y = (s16)(row_y + gap);
        fn_8001019C(left_x, row_y, 0xF, fn_8000E0E4(lbl_8027E8D0 + 0x35));
        fn_8001019C(x0, row_y, 0xF, lbl_8027E8D0 + 0x20);
        fn_80007898(6);
        tmp = *fn_8018D900(0x1E);
        fn_80007668(&tmp);
        fn_80006B18(x0, row_y, 0, 0, *(s32 *)(lbl_80330708 + 0x6C));
        fn_80007884();
        vt = *(V0 **)arg0;
        ((VS)vt[0x2C / 4])(arg0, (s16)(half + row_y));
        fn_8000A258();
        fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
        fn_8000A248();
    }

    row_y = (s16)(ybase + 0x38);
    visible = ROW_VISIBLE(row_y);
    if (visible) {
        row_y = (s16)(row_y + gap);
        fn_8001019C(left_x, row_y, 0xF, fn_8000E0E4(lbl_8027E8D0 + 0x44));
        fn_8001019C(x0, row_y, 0xF, lbl_8027E8D0 + 0x20);
        fn_80007898(6);
        tmp = *fn_8018D900(2);
        fn_80007668(&tmp);
        fn_80006B18(x0, row_y, 0, 0, *(s32 *)(lbl_80330708 + 0x18));
        fn_80007884();
        vt = *(V0 **)arg0;
        ((VS)vt[0x2C / 4])(arg0, (s16)(half + row_y));
        fn_8000A258();
        fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
        fn_8000A248();
    }

    row_y = (s16)(ybase + 0x54);
    visible = ROW_VISIBLE(row_y);
    if (visible) {
        row_y = (s16)(row_y + gap);
        fn_8001019C(left_x, row_y, 0xF, fn_8000E0E4(lbl_8027E8D0 + 0x54));
        fn_8001019C(x0, row_y, 0xF, lbl_8027E8D0 + 0x62);
        fn_80007898(6);
        tmp = *fn_8018D900(0x1D);
        fn_80007668(&tmp);
        fn_80006B18(x0, row_y, 0, 0, (s32)M2C_FIELD(lbl_80330708, s16 *, 0x70));
        fn_80007884();
        vt = *(V0 **)arg0;
        ((VS)vt[0x2C / 4])(arg0, (s16)(half + row_y));
        fn_8000A258();
        fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
        fn_8000A248();
    }

    row_y = (s16)(ybase + 0x70);
    visible = ROW_VISIBLE(row_y);
    if (visible) {
        row_y = (s16)(row_y + gap);
        fn_8001019C(left_x, row_y, 0xF, fn_8000E0E4(lbl_8027E8D0 + 0x66));
        fn_8001019C(x0, row_y, 0xF, lbl_8027E8D0 + 0x62);
        fn_80007898(6);
        tmp = *fn_8018D900(0x1D);
        fn_80007668(&tmp);
        fn_80006B18(x0, row_y, 0, 0, (s32)M2C_FIELD(lbl_80330708, s16 *, 0x72));
        fn_80007884();
        vt = *(V0 **)arg0;
        ((VS)vt[0x2C / 4])(arg0, (s16)(half + row_y));
        fn_8000A258();
        fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
        fn_8000A248();
    }

    row_y = (s16)(ybase + 0x8C);
    visible = ROW_VISIBLE(row_y);
    if (visible) {
        row_y = (s16)(row_y + gap);
        fn_8001019C(left_x, row_y, 0xF, fn_8000E0E4(lbl_8027E8D0 + 0x76));
        if (fn_8014C604(lbl_80330708) != NULL) {
            fn_8001019C((s16)(left_x + 0x80), row_y, 2, fn_800A8A88(*(u32 *)((u8 *)fn_8014C604(lbl_80330708) + 0x188)));
        } else {
            fn_8001019C((s16)(left_x + 0x80), row_y, 0xF, lbl_8027E8D0 + 0x84);
        }
        vt = *(V0 **)arg0;
        ((VS)vt[0x2C / 4])(arg0, (s16)(half + row_y));
        fn_8000A258();
        fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
        fn_8000A248();
    }

    ybase = (s16)(ybase + 0xA8);
    visible = ROW_VISIBLE(ybase);
    if (visible) {
        row_y = (s16)(ybase + gap);
        fn_8001019C(left_x, row_y, 0xF, fn_8000E0E4(lbl_8027E8D0 + 0x8D));
        vt = *(V0 **)arg0;
        ((VS)vt[0x2C / 4])(arg0, (s16)(half + row_y));
    }
    fn_8000A258();
    fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
    fn_8000A248();

    x_cur = 0x80;
    x_prev = 0;
    y_prev = 0;
    any = 0;
    fn_800152F8(1, 0, 0, 0, 0, 1, 1, 0);
    row_y = (s16)(ybase + gap);
    for (i = 1; i <= 0x9F; i++) {
        unit = lbl_802B14E4 + (i - 1) * 0x280;
        if (M2C_FIELD(unit, u32 *, 0x188) != 0
            && flags8[M2C_FIELD(*(void **)((u8 *)unit + 0x190), u8 *, 8)] != 0
            && (M2C_FIELD(unit, u32 *, 0x1A0) & 0x80000)) {
            any = 1;
            fn_800A8A88(M2C_FIELD(unit, u32 *, 0x188));
            name_w = fn_80010B78((u8 *)-1, -1, lbl_8036B6CC);
            if ((s32)(x_cur + name_w + y0) > right + 0x18) {
                if (ROW_VISIBLE(ybase)) {
                    vt = *(V0 **)arg0;
                    ((VS)vt[0x2C / 4])(arg0, (s16)(half + row_y));
                }
                fn_8000A258();
                fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
                fn_8000A248();
                x_cur = 0x80;
                row_y = (s16)(row_y + 0x1C);
                ybase = (s16)(ybase + 0x1C);
            }
            if (x_prev != 0) {
                if (ROW_VISIBLE(y_prev)) {
                    fn_8001019C(x_prev, (s16)(y_prev + gap), 2, fn_8000E0E4(str_colon));
                }
            }
            if (ROW_VISIBLE(ybase)) {
                fn_8001019C((s16)(left_x + x_cur), row_y, 2, fn_800A8A88(M2C_FIELD(unit, u32 *, 0x188)));
            }
            y_prev = ybase;
            x_prev = (s16)(left_x + x_cur + name_w);
            x_cur = (s16)(name_w + y0 + x_cur);
        }
    }
    if (any == 0) {
        if (ROW_VISIBLE(ybase)) {
            fn_8001019C((s16)(left_x + 0x80), (s16)(ybase + gap), 0xF, lbl_8027E8D0 + 0x84);
        }
    }
    if (ROW_VISIBLE(ybase)) {
        vt = *(V0 **)arg0;
        ((VS)vt[0x2C / 4])(arg0, (s16)(ybase + gap + half));
    }

    ybase = (s16)(ybase + 0x1C);
    fn_8000A258();
    fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
    fn_8000A248();
    if (ROW_VISIBLE(ybase)) {
        row_y = (s16)(ybase + gap);
        fn_8001019C(left_x, row_y, 0xF, fn_8000E0E4(lbl_8027E8D0 + 0x9C));
        vt = *(V0 **)arg0;
        ((VS)vt[0x2C / 4])(arg0, (s16)(half + row_y));
    }
    fn_8000A258();
    fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
    fn_8000A248();

    row_y = (s16)(ybase + gap);
    x_cur = 0x80;
    node = *(void **)(lbl_802CA264 + 0x48);
    x_prev = 0;
    y_prev = 0;
    any = 0;
    while (node != NULL) {
        entry = M2C_FIELD(node, void **, 0x184);
        if (M2C_FIELD(node, u32 *, 0x1A0) & 0x8000) {
            any = 1;
            fn_800A8A88(M2C_FIELD(node, u32 *, 0x188));
            name_w = fn_80010B78((u8 *)-1, -1, lbl_8036B6CC);
            if ((s32)(x_cur + name_w + y0) > right + 0x18) {
                if (ROW_VISIBLE(ybase)) {
                    vt = *(V0 **)arg0;
                    ((VS)vt[0x2C / 4])(arg0, (s16)(half + row_y));
                }
                fn_8000A258();
                fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
                fn_8000A248();
                x_cur = 0x80;
                row_y = (s16)(row_y + 0x1C);
                ybase = (s16)(ybase + 0x1C);
            }
            if (x_prev != 0) {
                if (ROW_VISIBLE(y_prev)) {
                    fn_8001019C(x_prev, (s16)(y_prev + gap), 2, fn_8000E0E4(str_colon));
                }
            }
            if (ROW_VISIBLE(ybase)) {
                fn_8001019C((s16)(left_x + x_cur), row_y, 2, fn_800A8A88(M2C_FIELD(node, u32 *, 0x188)));
            }
            y_prev = ybase;
            x_prev = (s16)(left_x + x_cur + name_w);
            x_cur = (s16)(name_w + y0 + x_cur);
        }
        node = entry;
    }
    if (any == 0) {
        if (ROW_VISIBLE(ybase)) {
            fn_8001019C((s16)(left_x + 0x80), (s16)(ybase + gap), 0xF, lbl_8027E8D0 + 0x84);
        }
    }
    {
        s16 next_y = (s16)(ybase + 0x1C);
        visible = 0;
        if (next_y > 0 && ybase < (s16)(M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14))) {
            visible = 1;
        }
        if (visible) {
            vt = *(V0 **)arg0;
            ((VS)vt[0x2C / 4])(arg0, (s16)(ybase + gap + half));
        }
        fn_8000A258();
        fn_8000A174(0, (u16)(M2C_FIELD(arg0, u32 *, 0x34) | 3));
        fn_8000A248();
        fn_8000A258();
        fn_80009C0C(lbl_8036B6D0);
        fn_8000A248();
        fn_8000A258();
        fn_80009B98();
        fn_8000A248();

        flag = 0;
        {
            s16 top = (s16)(scroll_adj + M2C_FIELD(arg0, s16 *, 0x3E));
            if (top < 0 || (s16)(top + 0x1C) >= (s16)(M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14))) {
                flag = 1;
            }
        }
        M2C_FIELD(arg0, s8 *, 0x5C) = flag;
        {
            void *sub = (u8 *)arg0 + 0x50;
            vt = *(V0 **)sub;
            ((VS)vt[0x2C / 4])(sub, (s16)M2C_FIELD(arg0, u32 *, 0x34));
        }
        flag = 0;
        if (ybase < 0 || next_y >= (s16)(M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14))) {
            flag = 1;
        }
        M2C_FIELD(arg0, s8 *, 0x84) = flag;
        {
            void *sub = (u8 *)arg0 + 0x78;
            vt = *(V0 **)sub;
            ((VS)vt[0x2C / 4])(sub, (s16)M2C_FIELD(arg0, u32 *, 0x34));
        }
    }
#undef ROW_VISIBLE
}

#pragma cplusplus on
extern "C" void fn_801DF468(void *arg0) {
    void fn_80151EDC(s32, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80151EDC(0, 0, 0x10);
}
#pragma cplusplus reset
void fn_801DF4A4(void *arg0, s32 arg1) {
    struct Color {
        u8 r, g, b, a;
    };
    void fn_80161AA8(s32, s32, s16, s32, s32, struct Color *);
    s16 *arg0_s16;
    s16 h;
    struct Color col;

    arg0_s16 = (s16 *)arg0;
    h = arg0_s16[0x16/2] - arg0_s16[0x12/2];
    col.r = 0x80;
    col.g = 0x78;
    col.b = 0x50;
    col.a = 0xE6;
    fn_80161AA8(0x10, arg1, h - 0x10, arg1, 0x10, &col);
}

#pragma cplusplus on
extern "C" void *fn_801DF50C(void *arg0, s16 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    struct Owner {
        void *vtbl;
        u8 pad4[0x4C];
        void *sub50;
        u8 pad54[0x24];
        void *sub78;
    };
    void fn_800C428C(void *);
    extern u8 lbl_80299D90[];
    extern u8 lbl_80295478[];
    extern u8 lbl_80292230[];
    extern u8 lbl_8028FDB0[];
    Owner *self;

    self = (Owner *)arg0;
    if (arg0) {
        self->vtbl = lbl_80299D90;
        if (&self->sub78) {
            self->sub78 = lbl_80295478;
            ((Obj *)&self->sub78)->v2();
        }
        if (&self->sub50) {
            self->sub50 = lbl_80295478;
            ((Obj *)&self->sub50)->v2();
        }
        if (arg0) {
            self->vtbl = lbl_80292230;
            if (arg0) {
                self->vtbl = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}
#pragma cplusplus reset

extern u8 lbl_80299F4C[];
void fn_801DF5D8(void) {
    extern u8 lbl_80299F4C[];
    void fn_8000CAA0(void *);
    fn_8000CAA0(lbl_80299F4C);
}

extern u64 OSGetTime();
extern u16 fn_802072A0(u32, s32, s32, s32);
extern u8 fn_80209A0C();
extern s32 fn_80211690(s32, s32);
extern void fn_8021D614(u32, s32*, u32);
void fn_801DF7C8(void *arg0) {
    s32 spC;
    s32 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s8 var_r31;
    u64 temp_ret;
    u8 temp_r3;

    fn_8021D614(0, &sp8, 0x20050201);
    memset(arg0, 0, 0x2000);
    
    *(u32*)((char*)arg0 + 0x70) = 0x53595346;
    *(u32*)((char*)arg0 + 0x74) = 0x20050201;
    
    spC = 0;
    sp8 = 0;
    temp_ret = OSGetTime();
    temp_r5 = spC;
    temp_r4 = temp_r5 + (u32) temp_ret;
    spC = temp_r4;
    sp8 = sp8 + temp_ret;
    temp_r6 = fn_80211690(temp_r4, temp_r5) * 0x7B;
    temp_r5_2 = spC + temp_r6;
    temp_r4_2 = sp8;
    spC = temp_r5_2;
    sp8 = temp_r4_2;
    
    *(u32*)((char*)arg0 + 0x7C) = temp_r5_2;
    *(u32*)((char*)arg0 + 0x78) = temp_r4_2;
    *(u16*)((char*)arg0 + 0x80) = 0;
    *(u8*)((char*)arg0 + 0xB0) = 0;
    *(u8*)((char*)arg0 + 0xB1) = 0;
    *(u8*)((char*)arg0 + 0xB2) = 0x40;
    *(u8*)((char*)arg0 + 0xB3) = 0;
    
    if (fn_802072A0(0, temp_r4_2, temp_r5_2, temp_r6) == 1) {
        var_r31 = 0;
    } else {
        temp_r3 = fn_80209A0C();
        switch ((s32) temp_r3) {
            case 0:
                var_r31 = 1;
                break;
            case 1:
                var_r31 = 2;
                break;
            case 2:
                var_r31 = 3;
                break;
            case 3:
                var_r31 = 4;
                break;
            case 4:
                var_r31 = 5;
                break;
            case 5:
                var_r31 = 1;
                break;
        }
    }
    *(u8*)((char*)arg0 + 0xB4) = var_r31;
    *(u8*)((char*)arg0 + 0xB7) = 0;
    memset((char*)arg0 + 0x82, 0, 0x1E);
    memset((char*)arg0 + 0xB5, 0, 2);
    *(u32*)((char*)arg0 + 0xAC) = 0;
    *(u32*)((char*)arg0 + 0xA8) = 0;
    *(u32*)((char*)arg0 + 0xA4) = 0;
    *(u32*)((char*)arg0 + 0xA0) = 0;
    *(u32*)((char*)arg0 + 0x40) = 0;
    *(u32*)((char*)arg0 + 0x48) = 1;
}

void fn_801DFB4C(void *arg0) {
    extern void *lbl_803682F0;
    extern u8 lbl_8027E980[];

    void fn_800056CC(const char *, ...);
    void fn_800C4588(void *);
    void *fn_800C4604(s32, s32, void *, s32);
    void fn_800EA540(void *, void *);

    void *ptr;
    void *arg;

    arg = arg0;

    if (lbl_803682F0 != (int)NULL) {
        fn_800056CC(
            (char *)(lbl_8027E980 + 0x122)
        );

        fn_800C4588(lbl_803682F0);
        lbl_803682F0 = NULL;
    }

    fn_800056CC(
        (char *)(lbl_8027E980 + 0x137)
    );

    ptr = fn_800C4604(
        0,
        -0x26000,
        lbl_8027E980 + 0x14E,
        0
    );

    lbl_803682F0 = ptr;

    fn_800EA540(ptr, arg);
}

#pragma use_lmw_stmw on
#pragma optimization_level 2
s32 fn_801DFBE4(s32 arg0) {
    extern void *lbl_803682F0;
    extern u8 lbl_8027E980[];
    u8 fn_800EB788(void);
    void *fn_800C4638(s32, void *, s32);
    void fn_800C4588(void *);
    void fn_800EC1F8(void);
    u32 fn_800EC0A4(void *, void *, s32);
    void fn_800E9B80(void *, s32, s32, s32, s32);
    void *memset(void *, s32, s32);

    void *buf;
    u32 sum;
    s32 self;
    s32 i;
    u8 *slot;
    s32 off;
    u8 hdrOk;
    u8 chkOk;

    self = arg0;
    if (fn_800EB788() != 0) {
        return 0;
    }

    i = 0;
    off = 0x2000;
    do {
        slot = (u8 *)lbl_803682F0 + off;
        if (*(u32 *)(slot + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(slot + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk != 0) {
            if (*(u32 *)(slot + 0x50) == 0x12345678U) {
                chkOk = 1;
            } else if (*(u8 *)(slot + 0x60) == 1) {
                chkOk = 1;
            } else {
                buf = fn_800C4638(0x400, lbl_8027E980 + 0x14E, 0);
                fn_800EC1F8();
                sum = fn_800EC0A4(buf, slot + 0x70, *(s32 *)(slot + 0x4C) - 0x70);
                fn_800C4588(buf);
                if (*(u32 *)(slot + 0x50) != sum) {
                    chkOk = 0;
                } else {
                    chkOk = 1;
                }
            }
            if (chkOk == 0) {
                memset(slot, 0, 0x2000);
                fn_800E9B80(slot, 0x2000, (s32)(slot - (u8 *)lbl_803682F0), -1, self);
                return 1;
            }
        }
        i += 1;
        off += 0x4000;
    } while (i < 6);

    i = 0;
    off = 0x1A000;
    do {
        slot = (u8 *)lbl_803682F0 + off;
        if (*(u32 *)(slot + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(slot + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk != 0) {
            if (*(u32 *)(slot + 0x50) == 0x12345678U) {
                chkOk = 1;
            } else if (*(u8 *)(slot + 0x60) == 1) {
                chkOk = 1;
            } else {
                buf = fn_800C4638(0x400, lbl_8027E980 + 0x14E, 0);
                fn_800EC1F8();
                sum = fn_800EC0A4(buf, slot + 0x70, *(s32 *)(slot + 0x4C) - 0x70);
                fn_800C4588(buf);
                if (*(u32 *)(slot + 0x50) != sum) {
                    chkOk = 0;
                } else {
                    chkOk = 1;
                }
            }
            if (chkOk == 0) {
                memset(slot, 0, 0x2000);
                fn_800E9B80(slot, 0x2000, (s32)(slot - (u8 *)lbl_803682F0), -1, self);
                return 1;
            }
        }
        i += 1;
        off += 0x6000;
    } while (i < 2);

          return 0;
  }
  #pragma optimization_level reset
  
  static inline u32 save_slot_size(u8 *slot) {
    u32 size = *(u32 *)(slot + 0x48);
    if (size > 0x100000U) {
        return 0;
    }
    return size;
}

static inline u32 save_slot_size_lim(u8 *slot, u32 limit) {
    u32 size = *(u32 *)(slot + 0x48);
    return (size <= limit) ? size : 0;
}
  
#pragma opt_strength_reduction off
void fn_801DFE60(u8 **arg0, s32 arg1) {
    void fn_800062CC(void *, void *, s32);
    void fn_801E3CA8(void *);
    void fn_800E9B80(void *, s32, s32, s32, s32);
    extern void *lbl_803682F0;

    u32 minSize;
    s32 off;
    u8 *best;
    s32 i;
    s32 self;
    s32 ctr;
    u8 *slot;
    u8 hdrOk;
    u32 clamped;
    u8 *found;
    s32 diff;

    minSize = (u32)-1;
    off = 0x2000;
    best = NULL;
    i = 0;
    self = arg1;

    for (ctr = 3; ctr != 0; ctr--) {
        slot = *arg0 + off;
        if (*(u32 *)(slot + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(slot + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            clamped = save_slot_size(slot);
            if (minSize > clamped) {
                best = slot;
                minSize = save_slot_size(slot);
            }
        }
        off += 0x4000;
        slot = *arg0 + off;
        if (*(u32 *)(slot + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(slot + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            clamped = save_slot_size(slot);
            if (minSize > clamped) {
                best = slot;
                minSize = save_slot_size(slot);
            }
        }
        off += 0x4000;
        i += 1;
    }

    i = 0;
    off = 0x2000;
    for (ctr = 2; ctr != 0; ctr--) {
        found = *arg0 + off;
        if (*(u32 *)(found + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(found + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk != 0) {
            goto found_slot;
        }
        off += 0x4000;
        found = *arg0 + off;
        if (*(u32 *)(found + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(found + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk != 0) {
            goto found_slot;
        }
        off += 0x4000;
        found = *arg0 + off;
        if (*(u32 *)(found + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(found + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk != 0) {
            goto found_slot;
        }
        off += 0x4000;
        i += 2;
    }

    found = NULL;

found_slot:
    if (found == NULL) {
        found = *arg0 + 0x2000;
        if (found == best) {
            found = *arg0 + 0x6000;
        }
    }

    fn_800062CC(best, found, *(s32 *)(found + 0x4C));
    fn_801E3CA8(best);
    diff = (s32)best - (s32)lbl_803682F0;
    fn_800E9B80(best, *(s32 *)(best + 0x4C), diff, diff, self);
}
  extern u8 lbl_80299F1C[];
void fn_801E00EC(void *arg0, void *arg1) { void fn_8000CAA0(void *); extern u8 lbl_80299F1C[]; (void)arg0; (void)arg1; fn_8000CAA0(lbl_80299F1C); }

void fn_801E0114(s32 arg0) {
    u8 fn_800EB788(void);
    void fn_801E0154(void *, s32);
    extern u32 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E0154(&lbl_803682F0, arg0);
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
void fn_801E0154(u8 **arg0, s32 arg1) {
    void fn_800062CC(void *, void *, s32);
    void fn_801E3CA8(void *);
    void fn_800E9B80(void *, s32, s32, s32, s32);
    void *fn_800C4638(s32, void *, s32);
    void fn_800C4588(void *);
    void fn_800EC1F8(void);
    u32 fn_800EC0A4(void *, void *, s32);
    extern void *lbl_803682F0;
    extern u8 lbl_8027E980[];

    u8 *base;
    u8 *src;
    u8 *cand;
    u8 *dst;
    s32 off;
    s32 j;
    s32 i;
    s32 dummy;
    s32 ctr;
    s32 self;
    u8 id;
    u8 hdrOk;
    u8 chkOk;
    void *buf;
    u32 sum;

    self = arg1;
    off = 0x20000 - 0x6000;
    i = 0;
loop1:
    base = *arg0;
    src = base + off;
    if (*(u32 *)(src + 0x40) != 0x4645384AU) {
        hdrOk = 0;
    } else if (*(u32 *)(src + 0x44) != 0x20050201U) {
        hdrOk = 0;
    } else {
        hdrOk = 1;
    }
    if (hdrOk == 0) {
        goto next1;
    }
    id = *(u8 *)(src + 0x63);
    dummy = 0;
    j = 0x2000;
    ctr = 2;
    do {
        cand = base + j;
        if (*(u32 *)(cand + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(cand + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            goto miss1;
        }
        if ((s32)*(u8 *)(cand + 0x62) != (s32)id) {
            goto miss1;
        }
        goto found_pair;
    miss1:
        j += 0x4000;
        cand = base + j;
        if (*(u32 *)(cand + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(cand + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            goto miss2;
        }
        if ((s32)*(u8 *)(cand + 0x62) != (s32)id) {
            goto miss2;
        }
        goto found_pair;
    miss2:
        j += 0x4000;
        cand = base + j;
        if (*(u32 *)(cand + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(cand + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            goto miss3;
        }
        if ((s32)*(u8 *)(cand + 0x62) != (s32)id) {
            goto miss3;
        }
        goto found_pair;
    miss3:
        j += 0x4000;
        dummy += 2;
        ctr -= 1;
    } while (ctr != 0);
    cand = NULL;
found_pair:
    if (cand == NULL) {
        goto next1;
    }
    goto phase2;
next1:
    i += 1;
    off += 0x6000;
    if (i < 2) {
        goto loop1;
    }
    src = NULL;

phase2:
    i = 0;
    off = 0x20000 - 0x6000;
loop2:
    dst = *arg0 + off;
    if (*(u32 *)(dst + 0x40) != 0x4645384AU) {
        hdrOk = 0;
    } else if (*(u32 *)(dst + 0x44) != 0x20050201U) {
        hdrOk = 0;
    } else {
        hdrOk = 1;
    }
    if (hdrOk == 0) {
        goto do_copy;
    }
    if (*(u32 *)(dst + 0x50) == 0x12345678U) {
        chkOk = 1;
    } else if (*(u8 *)(dst + 0x60) == 1) {
        chkOk = 1;
    } else {
        buf = fn_800C4638(0x400, lbl_8027E980 + 0x14E, 0);
        fn_800EC1F8();
        sum = fn_800EC0A4(buf, dst + 0x70, *(s32 *)(dst + 0x4C) - 0x70);
        fn_800C4588(buf);
        if (*(u32 *)(dst + 0x50) != sum) {
            chkOk = 0;
        } else {
            chkOk = 1;
        }
    }
    if (chkOk == 0) {
        goto do_copy;
    }
    i += 1;
    off += 0x6000;
    if (i < 2) {
        goto loop2;
    }
    base = *arg0;
    dst = base + 0x1A000;
    if (save_slot_size(base + 0x1A000) >= save_slot_size(base + 0x20000)) {
        dst = base + 0x20000;
    }

do_copy:
    fn_800062CC(dst, src, *(s32 *)(src + 0x4C));
    fn_801E3CA8(dst);
    *(u8 *)(dst + 0x60) = 1;
    fn_800E9B80(dst, 0x2000, (s32)dst - (s32)lbl_803682F0, -1, self);
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
void fn_801E047C(u8 **arg0, s32 arg1) {
    void fn_80006298(void *, s32, s32);
    void fn_800167E4(void *);
    void fn_80016A3C(void *);
    void fn_80048C5C(void *);
    void fn_800C2980(void *, void *);
    void fn_800C33C0(void *, void *);
    void fn_800C4588(void *);
    void *fn_800C4638(s32, void *, s32);
    void fn_800E9B80(void *, s32, s32, s32, s32);
    u32 fn_800EC0A4(void *, void *, s32);
    void fn_800EC1F8(void);
    void fn_8010FBA8(void *, void *);
    void fn_8014C39C(void *, void *);
    void fn_8017A38C(void *, void *);
    void fn_801E3CA8(void *);
    extern u8 lbl_8027E980[];
    extern u8 lbl_802842A4[];
    extern u8 lbl_80284C98[];
    extern u8 lbl_803200AC[];
    extern u8 lbl_803206EC[];
    extern u8 lbl_8032BB58[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80331FB8[];
    extern s32 lbl_803682F0;

    s32 i;
    s32 off;
    u8 *slot;
    u8 hdrOk;
    u8 chkOk;
    void *buf;
    u32 sum;
    u8 *base;
    struct {
        void *start;
        void *cur;
        u32 size;
        u8 owned;
        u8 pad[3];
        void *vtbl;
    } w;
    u8 *p;

    i = 0;
    off = 0x20000 - 0x6000;
loop:
    slot = *arg0 + off;
    if ((u32)(*(u32 *)(slot + 0x40) + 0xB9BB0000) != 0x384AU) {
        hdrOk = 0;
    } else if ((u32)(*(u32 *)(slot + 0x44) + 0xDFFB0000) != 0x201U) {
        hdrOk = 0;
    } else {
        hdrOk = 1;
    }
    if (hdrOk != 0) {
        if ((u32)(*(u32 *)(slot + 0x50) + 0xEDCC0000) == 0x5678U) {
            chkOk = 1;
        } else if (slot[0x60] == 1) {
            chkOk = 1;
        } else {
            buf = fn_800C4638(0x400, lbl_8027E980 + 0x14E, 0);
            fn_800EC1F8();
            sum = fn_800EC0A4(buf, slot + 0x70, *(s32 *)(slot + 0x4C) - 0x70);
            fn_800C4588(buf);
            if (*(u32 *)(slot + 0x50) != sum) {
                chkOk = 0;
            } else {
                chkOk = 1;
            }
        }
        if (chkOk == 0) {
        } else {
            i += 1;
            off += 0x6000;
            if (i < 2) {
                goto loop;
            }
            base = *arg0;
            slot = base + 0x1A000;
            if (save_slot_size(base + 0x1A000) < save_slot_size(base + 0x20000)) {
            } else {
                slot = base + 0x20000;
            }
        }
    }

    fn_80006298(slot, 0, 0x6000);
    *(s32 *)(slot + 0x4C) = 0x6000;
    *(u32 *)(slot + 0x40) = 0x4645384AU;
    *(u32 *)(slot + 0x44) = 0x20050201U;
    *(u32 *)(slot + 0x48) = 0;
    *(u32 *)(slot + 0x5C) = 0;
    *(u32 *)(slot + 0x58) = 0;
    p = slot + 0xB8;
    slot[0x60] = 3;
    slot[0x61] = 0;
    slot[0x62] = 0;
    slot[0x63] = 0;
    slot[0x64] = 0;
    slot[0x65] = 0;
    slot[0x66] = 0;
    slot[0x63] = lbl_80331FB8[0x47];
    *(u32 *)(slot + 0x5C) = *(u32 *)(lbl_80330708 + 0x5C);
    *(u32 *)(slot + 0x58) = *(u32 *)(lbl_80330708 + 0x58);
    slot[0x61] = lbl_80330708[0x51C];
    slot[0x64] = lbl_80330708[0x10];
    slot[0x65] = 8;
    slot[0x66] = lbl_80330708[0xA6];

    w.vtbl = lbl_802842A4;
    w.cur = NULL;
    w.start = NULL;
    w.size = 0;
    w.owned = 0;
    w.vtbl = lbl_80284C98;
    w.owned = 0;
    w.start = p;
    w.cur = p;
    w.size = 0x100000;
    fn_8017A38C(&w, lbl_8027E980 + 0x14F);
    fn_8014C39C(lbl_80330708, &w);
    fn_8017A38C(&w, lbl_8027E980 + 0x154);
    fn_80048C5C(&w);
    fn_8017A38C(&w, lbl_8027E980 + 0x159);
    if (lbl_80330708[0x55] != 0) {
        fn_800167E4(&w);
    } else {
        fn_80016A3C(&w);
    }
    fn_8017A38C(&w, lbl_8027E980 + 0x15E);
    fn_800C33C0(lbl_803200AC, &w);
    fn_8017A38C(&w, lbl_8027E980 + 0x163);
    fn_800C2980(lbl_803206EC, &w);
    fn_8017A38C(&w, lbl_8027E980 + 0x168);
    fn_8010FBA8(lbl_8032BB58, &w);
    w.vtbl = lbl_80284C98;
    w.vtbl = lbl_802842A4;
    if (w.owned != 0) {
        fn_800C4588(w.start);
        w.start = NULL;
        w.owned = 0;
    }
    fn_801E3CA8(slot);
    arg0[1] = slot;
    fn_800E9B80(slot, *(s32 *)(slot + 0x4C), (s32)slot - lbl_803682F0, (s32)slot - lbl_803682F0, arg1);
}
#pragma opt_strength_reduction reset
#pragma use_lmw_stmw reset

#pragma opt_strength_reduction reset
#pragma use_lmw_stmw reset

void fn_801E080C(struct Unit *unit) {
    void *fn_8000CAA0(void *, void *);
    void *fn_800C4638(s32, void *, s32);
    extern u16 lbl_802979C8[];
    extern u8 lbl_8027C128[];

    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_802979C8, 0);
    M2C_FIELD(temp_r31, void **, 0x30) = fn_800C4638(0x114, lbl_8027C128 + 0x68, 0);
    M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x30), s32 *, 0x14) = unit->unk0;
    M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x30), s32 *, 0x10) = 1;
}

void *fn_801E09B4(M2C_UNK *arg0) {
    u32 r3 = (u32) arg0;
    u32 r4 = *(u32 *) (r3 + 0x70);
    
    if (r4 != 0) {
        return *(void **) r4;
    }
    return NULL;
}

void fn_801E0B48(s32 unused, s32 arg1, s32 arg2, s32 arg3) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80299ED8[];
    void *obj;

    obj = fn_8000CAA0(lbl_80299ED8, arg3);
    *(s32 *)((u8 *)obj + 0x60) = arg1;
    *(s32 *)((u8 *)obj + 0x64) = arg2;
}

void fn_801E0D30(void *arg0) {
    u8 fn_800EB788(void);
    void fn_801E0D78(void *, void *, s32, s32);
    extern u16 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E0D78(&lbl_803682F0, arg0, *(s32 *) ((u8 *) arg0 + 0x60), *(s32 *) ((u8 *) arg0 + 0x64));
}

#pragma opt_strength_reduction off
void fn_801E0D78(void **arg0, void *arg1, s32 arg2, s32 arg3) {
    void fn_800062CC(void *, void *, s32);
    void fn_801E3CA8(void *);
    void fn_800E9B80(void *, s32, s32, s32, void *);
    extern void *lbl_803682F0;

    s32 i;
    s32 off;
    s32 val;
    void *self;
    s32 ctr;
    u8 *found;
    u8 hdrOk;
    u8 *best;
    u32 minSize;
    u8 *slot;
    u32 clamped;
    s32 diff;

    i = 0;
    off = 0x2000;
    val = arg3;
    self = arg1;

    for (ctr = 2; ctr != 0; ctr--) {
        found = (u8 *)*arg0 + off;
        if (*(u32 *)(found + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(found + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
        } else if (arg2 != *(u8 *)(found + 0x62)) {
        } else {
            goto found_slot;
        }
        off += 0x4000;
        found = (u8 *)*arg0 + off;
        if (*(u32 *)(found + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(found + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
        } else if (arg2 != *(u8 *)(found + 0x62)) {
        } else {
            goto found_slot;
        }
        off += 0x4000;
        found = (u8 *)*arg0 + off;
        if (*(u32 *)(found + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(found + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
        } else if (arg2 != *(u8 *)(found + 0x62)) {
        } else {
            goto found_slot;
        }
        off += 0x4000;
        i += 2;
    }

    found = NULL;

found_slot:
    best = NULL;
    i = 0;
    minSize = (u32)-1;
    off = 0x2000;
    for (ctr = 3; ctr != 0; ctr--) {
        slot = (u8 *)*arg0 + off;
        if (*(u32 *)(slot + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(slot + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            clamped = save_slot_size(slot);
            if (minSize > clamped) {
                best = slot;
                minSize = save_slot_size(slot);
            }
        }
        off += 0x4000;
        slot = (u8 *)*arg0 + off;
        if (*(u32 *)(slot + 0x40) != 0x4645384AU) {
            hdrOk = 0;
        } else if (*(u32 *)(slot + 0x44) != 0x20050201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            clamped = save_slot_size(slot);
            if (minSize > clamped) {
                best = slot;
                minSize = save_slot_size(slot);
            }
        }
        off += 0x4000;
        i += 1;
    }

    fn_800062CC(best, found, *(s32 *)(found + 0x4C));
    *(u8 *)(best + 0x62) = (u8)val;
    fn_801E3CA8(best);
    diff = (s32)best - (s32)lbl_803682F0;
    fn_800E9B80(best, *(s32 *)(best + 0x4C), diff, diff, self);
    *(void **)((u8 *)self + 0x54) = best;
}
void fn_801E1168(void *arg0) {
    u8 fn_800EB788(void);
    void fn_801E11AC(void *, void *, s32);
    extern u16 lbl_803682F0[4];

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E11AC(lbl_803682F0, arg0, *(s32 *) ((u8 *) arg0 + 0x60));
}

void fn_801E11AC(void *arg0, s32 arg1, s8 arg2) {
    void fn_800062CC(void *, s32);
    void fn_801E3CA8(void *);
    void fn_800E9B80(void *, s32, s32, s32, s32);
    extern u8 *lbl_803682F0;
    u8 *var_r4;
    u8 *var_r31;
    u8 *p;
    u32 temp_r7;
    u32 size;
    u32 clamped;
    s32 temp_valid;
    s32 i;

    var_r4 = NULL;
    for (i = 0; i < 6; i++) {
        p = lbl_803682F0 + 0x2000 + i * 0x4000;
        if (*(u32 *)(p + 0x40) != 0x4645384AU) {
            temp_valid = 0;
        } else if (*(u32 *)(p + 0x44) != 0x20050201U) {
            temp_valid = 0;
        } else {
            temp_valid = 1;
        }
        if (temp_valid != 0 && arg2 == *(u8 *)(p + 0x62)) {
            var_r4 = p;
            break;
        }
    }
    var_r31 = NULL;
    temp_r7 = -1;
    for (i = 0; i < 6; i++) {
        p = lbl_803682F0 + 0x2000 + i * 0x4000;
        if (*(u32 *)(p + 0x40) != 0x4645384AU) {
            temp_valid = 0;
        } else if (*(u32 *)(p + 0x44) != 0x20050201U) {
            temp_valid = 0;
        } else {
            temp_valid = 1;
        }
        if (temp_valid == 0) {
            size = *(u32 *)(p + 0x48);
            clamped = (size <= 0x100000) ? size : 0;
            if (temp_r7 > clamped) {
                var_r31 = p;
                temp_r7 = clamped;
            }
        }
    }
    fn_800062CC(var_r31, *(s32 *)(var_r4 + 0x4C));
    *(u8 *)(var_r31 + 0x62) = arg2;
    fn_801E3CA8(var_r31);
    *(u8 *)(var_r31 + 0x60) = 1;
    fn_800E9B80(var_r31, 0x2000, var_r31 - lbl_803682F0, -1, arg1);
}

void fn_801E1440(s32 arg0, s32 arg1, s32 arg2) {
    void fn_8014D698(void *, s32, u8, u8, s32);
    extern u8 lbl_80330708[];
    extern s32 lbl_80331FB8[];

    s32 temp_r2 = arg2;
    u8 temp_r3 = arg1;
    
    fn_8014D698(lbl_80330708, 0, temp_r3, temp_r2, 1);
    lbl_80331FB8[0] = -1;
    lbl_80331FB8[1] = -1;
    ((u8 *) lbl_80331FB8)[0x44] = 1;
}

void fn_801E1498(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    extern u8 lbl_80299E60[];
    extern void *fn_8000CAA0(void *, s32);

    u8 *entry;

    entry = (u8 *)fn_8000CAA0(lbl_80299E60, arg4);

    *(s32 *)(entry + 0x60) = arg1;
    *(s32 *)(entry + 0x64) = arg2;
    *(s32 *)(entry + 0x68) = arg3;
}

void fn_801E1540(u8 **arg0, void *arg1, s32 arg2, u8 arg3, u8 arg4);

void fn_801E14F4(void *arg0) {
    u8 fn_800EB788(void);
    void fn_801E1540(void *, void *, s32, s32, s32);
    extern u16 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E1540(&lbl_803682F0, arg0, *(s32 *)((u8 *)arg0 + 0x60), *(s32 *)((u8 *)arg0 + 0x64), *(s32 *)((u8 *)arg0 + 0x68));
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
void fn_801E1540(u8 **arg0, void *arg1, s32 arg2, u8 arg3, u8 arg4) {
    void fn_80006298(void *, s32, s32);
    void fn_800167E4(void *);
    void fn_80016A3C(void *);
    void fn_80048C5C(void *);
    void fn_800C2980(void *, void *);
    void fn_800C33C0(void *, void *);
    void fn_800C4588(void *);
    void fn_800E9B80(void *, s32, s32, s32, void *);
    void fn_8010FBA8(void *, void *);
    void fn_8014C39C(void *, void *);
    void fn_8014D698(void *, u8, u8, u8, u8);
    void fn_8017A38C(void *, void *);
    void fn_801E3CA8(void *);
    extern u8 lbl_8027E980[];
    extern u8 lbl_802842A4[];
    extern u8 lbl_80284C98[];
    extern u8 lbl_803200AC[];
    extern u8 lbl_803206EC[];
    extern u8 lbl_8032BB58[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80331FB8[];
    extern void *lbl_803682F0;

    u8 hist[0x28];
    struct {
        void *start;
        void *cur;
        u32 size;
        u8 owned;
        u8 pad[3];
        void *vtbl;
    } w;
    u32 minSize;
    s32 off;
    u8 *best;
    s32 i;
    void *other;
    s32 ctr;
    u8 *slot;
    u8 hdrOk;
    u32 clamped;
    u8 *rec;
    s32 n;
    u8 *found;
    u8 b;
    u8 freeId;
    u8 *hp;
    u8 idx;
    u8 *p;
    s32 diff;
    u8 *base;
    s32 dummy;

    other = arg1;
    best = NULL;
    i = 0;
    lbl_80331FB8[0x47] = (u8)arg2;
    minSize = (u32)-1;
    off = 0x2000;

    for (ctr = 3; ctr != 0; ctr--) {
        base = *arg0;
        slot = base + off;
        if ((u32)(*(u32 *)(slot + 0x40) + 0xB9BB0000) != 0x384AU) {
            hdrOk = 0;
        } else if ((u32)(*(u32 *)(slot + 0x44) + 0xDFFB0000) != 0x201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            clamped = save_slot_size(slot);
            if (minSize > clamped) {
                best = slot;
                minSize = save_slot_size(slot);
            }
        }
        off += 0x4000;
        base = *arg0;
        slot = base + off;
        if ((u32)(*(u32 *)(slot + 0x40) + 0xB9BB0000) != 0x384AU) {
            hdrOk = 0;
        } else if ((u32)(*(u32 *)(slot + 0x44) + 0xDFFB0000) != 0x201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            clamped = save_slot_size(slot);
            if (minSize > clamped) {
                best = slot;
                minSize = save_slot_size(slot);
            }
        }
        off += 0x4000;
        i += 1;
    }

    fn_80006298(best, 0, 0x4000);
    *(s32 *)(best + 0x4C) = 0x4000;
    *(u32 *)(best + 0x40) = 0x4645384AU;
    *(u32 *)(best + 0x44) = 0x20050201U;
    rec = lbl_80331FB8;
    *(u32 *)(best + 0x48) = 0;
    *(u32 *)(best + 0x5C) = 0;
    *(u32 *)(best + 0x58) = 0;
    best[0x60] = 2;
    best[0x61] = 0;
    best[0x62] = (u8)arg2;
    best[0x63] = 0;
    best[0x64] = 0;
    best[0x65] = 0;
    best[0x66] = 0;
    *(u32 *)(best + 0x5C) = 0;
    *(u32 *)(best + 0x58) = 0;

    hist[0x00] = 0; hist[0x01] = 0; hist[0x02] = 0; hist[0x03] = 0;
    hist[0x04] = 0; hist[0x05] = 0; hist[0x06] = 0; hist[0x07] = 0;
    hist[0x08] = 0; hist[0x09] = 0; hist[0x0A] = 0; hist[0x0B] = 0;
    hist[0x0C] = 0; hist[0x0D] = 0; hist[0x0E] = 0; hist[0x0F] = 0;
    hist[0x10] = 0; hist[0x11] = 0; hist[0x12] = 0; hist[0x13] = 0;
    hist[0x14] = 0; hist[0x15] = 0; hist[0x16] = 0; hist[0x17] = 0;
    hist[0x18] = 0; hist[0x19] = 0; hist[0x1A] = 0; hist[0x1B] = 0;
    hist[0x1C] = 0; hist[0x1D] = 0; hist[0x1E] = 0; hist[0x1F] = 0;
    hist[0x20] = 0; hist[0x21] = 0; hist[0x22] = 0; hist[0x23] = 0;
    hist[0x24] = 0; hist[0x25] = 0; hist[0x26] = 0; hist[0x27] = 0;

    for (ctr = 5; ctr != 0; ctr--) {
        b = rec[0x12];
        if (b == 0) {
            break;
        }
        hist[b] += 1;
        b = rec[0x13];
        rec += 1;
        if (b == 0) {
            break;
        }
        hist[b] += 1;
        b = rec[0x13];
        rec += 1;
        if (b == 0) {
            break;
        }
        hist[b] += 1;
        b = rec[0x13];
        rec += 1;
        if (b == 0) {
            break;
        }
        hist[b] += 1;
        b = rec[0x13];
        rec += 1;
        if (b == 0) {
            break;
        }
        hist[b] += 1;
        b = rec[0x13];
        rec += 1;
        if (b == 0) {
            break;
        }
        rec += 1;
        hist[b] += 1;
        dummy += 5;
    }

    i = 0;
    do {
        off = 0x2000;
        dummy = 0;
        for (ctr = 2; ctr != 0; ctr--) {
            found = (u8 *)lbl_803682F0 + off;
            if ((u32)(*(u32 *)(found + 0x40) + 0xB9BB0000) != 0x384AU) {
                hdrOk = 0;
            } else if ((u32)(*(u32 *)(found + 0x44) + 0xDFFB0000) != 0x201U) {
                hdrOk = 0;
            } else {
                hdrOk = 1;
            }
            if (hdrOk == 0) {
            } else if (i != (s32)found[0x62]) {
            } else {
                goto found_id;
            }
            off += 0x4000;
            found = (u8 *)lbl_803682F0 + off;
            if ((u32)(*(u32 *)(found + 0x40) + 0xB9BB0000) != 0x384AU) {
                hdrOk = 0;
            } else if ((u32)(*(u32 *)(found + 0x44) + 0xDFFB0000) != 0x201U) {
                hdrOk = 0;
            } else {
                hdrOk = 1;
            }
            if (hdrOk == 0) {
            } else if (i != (s32)found[0x62]) {
            } else {
                goto found_id;
            }
            off += 0x4000;
            found = (u8 *)lbl_803682F0 + off;
            if ((u32)(*(u32 *)(found + 0x40) + 0xB9BB0000) != 0x384AU) {
                hdrOk = 0;
            } else if ((u32)(*(u32 *)(found + 0x44) + 0xDFFB0000) != 0x201U) {
                hdrOk = 0;
            } else {
                hdrOk = 1;
            }
            if (hdrOk == 0) {
            } else if (i != (s32)found[0x62]) {
            } else {
                goto found_id;
            }
            off += 0x4000;
            dummy += 2;
        }
        found = NULL;
    found_id:
        if (found != NULL) {
            b = found[0x61];
            if (b < 0x28U) {
                hist[b] += 1;
            }
        }
        i += 1;
    } while (i < 5);

    hp = &hist[1];
    idx = 1;
    for (ctr = 0xD; ctr != 0; ctr--) {
        if ((s8)hp[0] == 0) {
            freeId = idx;
            goto got_free;
        }
        idx += 1;
        if ((s8)hp[1] == 0) {
            freeId = idx;
            goto got_free;
        }
        idx += 1;
        if ((s8)hp[2] == 0) {
            freeId = idx;
            goto got_free;
        }
        hp += 3;
        idx += 1;
    }
    freeId = 0;
 got_free:
    best[0x61] = freeId;
    n = 0;
    best[0x64] = 1;
    best[0x65] = 3;
    best[0x66] = arg3;

    rec = lbl_80331FB8;
    dummy = 0;
    for (ctr = 3; ctr != 0; ctr--) {
        if (rec[0x12] == 0) {
            break;
        }
        b = rec[0x13];
        n += 1;
        rec += 1;
        if (b == 0) {
            break;
        }
        b = rec[0x13];
        n += 1;
        rec += 1;
        if (b == 0) {
            break;
        }
        b = rec[0x13];
        n += 1;
        rec += 1;
        if (b == 0) {
            break;
        }
        b = rec[0x13];
        n += 1;
        rec += 1;
        if (b == 0) {
            break;
        }
        b = rec[0x13];
        n += 1;
        rec += 1;
        if (b == 0) {
            break;
        }
        b = rec[0x13];
        n += 1;
        rec += 1;
        if (b == 0) {
            break;
        }
        b = rec[0x13];
        n += 1;
        rec += 1;
        if (b == 0) {
            break;
        }
        b = rec[0x13];
        n += 1;
        rec += 1;
        if (b == 0) {
            break;
        }
        n += 1;
        rec += 1;
        dummy += 9;
    }

    fn_8014D698(lbl_80330708, best[0x61], best[0x66], arg4, (u8)(n + 1));

    p = best + 0xB8;
    w.owned = 0;
    w.vtbl = lbl_802842A4;
    w.cur = NULL;
    w.start = NULL;
    w.size = 0;
    w.vtbl = lbl_80284C98;
    w.owned = 0;
    w.start = p;
    w.cur = p;
    w.size = 0x100000;
    fn_8017A38C(&w, lbl_8027E980 + 0x14F);
    fn_8014C39C(lbl_80330708, &w);
    fn_8017A38C(&w, lbl_8027E980 + 0x154);
    fn_80048C5C(&w);
    fn_8017A38C(&w, lbl_8027E980 + 0x159);
    if (lbl_80330708[0x55] != 0) {
        fn_800167E4(&w);
    } else {
        fn_80016A3C(&w);
    }
    fn_8017A38C(&w, lbl_8027E980 + 0x15E);
    fn_800C33C0(lbl_803200AC, &w);
    fn_8017A38C(&w, lbl_8027E980 + 0x163);
    fn_800C2980(lbl_803206EC, &w);
    fn_8017A38C(&w, lbl_8027E980 + 0x168);
    fn_8010FBA8(lbl_8032BB58, &w);
    w.vtbl = lbl_80284C98;
    w.vtbl = lbl_802842A4;
    if (w.owned != 0) {
        fn_800C4588(w.start);
        w.start = NULL;
        w.owned = 0;
    }
    fn_801E3CA8(best);
    arg0[1] = best;
    diff = (s32)best - (s32)lbl_803682F0;
    fn_800E9B80(best, *(s32 *)(best + 0x4C), diff, diff, other);
}
#pragma opt_strength_reduction reset
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
void fn_801E1CB4(u8 **arg0, void *arg1) {
    void fn_80006298(void *, s32, s32);
    void fn_800167E4(void *);
    void fn_80016A3C(void *);
    void fn_80048C5C(void *);
    void fn_800C2980(void *, void *);
    void fn_800C33C0(void *, void *);
    void fn_800C4588(void *);
    void fn_8010FBA8(void *, void *);
    void fn_8014C39C(void *, void *);
    void fn_8017A38C(void *, void *);
    void fn_801E3CA8(void *);
    extern u8 lbl_8027E980[];
    extern u8 lbl_802842A4[];
    extern u8 lbl_80284C98[];
    extern u8 lbl_803200AC[];
    extern u8 lbl_803206EC[];
    extern u8 lbl_8032BB58[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80331FB8[];

    u32 minSize;
    s32 off;
    u8 *best;
    s32 i;
    void *other;
    s32 ctr;
    u8 *slot;
    u8 hdrOk;
    u32 clamped;
    u8 saved47;
    struct {
        void *start;
        void *cur;
        u32 size;
        u8 owned;
        u8 pad[3];
        void *vtbl;
    } w;
    u8 *p;

    off = 0x2000;
    best = NULL;
    other = arg1;
    i = (s32)best;
    saved47 = lbl_80331FB8[0x47];
    minSize = (u32)-1;

    for (ctr = 3; ctr != 0; ctr--) {
        slot = *arg0 + off;
        if ((u32)(*(u32 *)(slot + 0x40) + 0xB9BB0000) != 0x384AU) {
            hdrOk = 0;
        } else if ((u32)(*(u32 *)(slot + 0x44) + 0xDFFB0000) != 0x201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            clamped = save_slot_size(slot);
            if (minSize > clamped) {
                best = slot;
                minSize = save_slot_size(slot);
            }
        }
        off += 0x4000;
        slot = *arg0 + off;
        if ((u32)(*(u32 *)(slot + 0x40) + 0xB9BB0000) != 0x384AU) {
            hdrOk = 0;
        } else if ((u32)(*(u32 *)(slot + 0x44) + 0xDFFB0000) != 0x201U) {
            hdrOk = 0;
        } else {
            hdrOk = 1;
        }
        if (hdrOk == 0) {
            clamped = save_slot_size(slot);
            if (minSize > clamped) {
                best = slot;
                minSize = save_slot_size(slot);
            }
        }
        off += 0x4000;
        i += 1;
    }

    fn_80006298(best, 0, 0x4000);
    *(s32 *)(best + 0x4C) = 0x4000;
    *(u32 *)(best + 0x40) = 0x4645384AU;
    *(u32 *)(best + 0x44) = 0x20050201U;
    *(u32 *)(best + 0x48) = 0;
    *(u32 *)(best + 0x5C) = 0;
    *(u32 *)(best + 0x58) = 0;
    best[0x60] = 2;
    best[0x61] = 0;
    best[0x62] = saved47;
    best[0x63] = 0;
    best[0x64] = 0;
    best[0x65] = 0;
    best[0x66] = 0;
    *(u32 *)(best + 0x5C) = *(u32 *)(lbl_80330708 + 0x5C);
    *(u32 *)(best + 0x58) = *(u32 *)(lbl_80330708 + 0x58);
    best[0x61] = lbl_80330708[0x51C];
    best[0x64] = lbl_80330708[0x10];
    best[0x65] = lbl_80330708[0x54];
    best[0x66] = lbl_80330708[0xA6];

    p = best + 0xB8;
    w.vtbl = lbl_802842A4;
    w.cur = NULL;
    w.start = NULL;
    w.size = 0;
    w.owned = 0;
    w.vtbl = lbl_80284C98;
    w.owned = 0;
    w.start = p;
    w.cur = p;
    w.size = 0x100000;
    fn_8017A38C(&w, lbl_8027E980 + 0x14F);
    fn_8014C39C(lbl_80330708, &w);
    fn_8017A38C(&w, lbl_8027E980 + 0x154);
    fn_80048C5C(&w);
    fn_8017A38C(&w, lbl_8027E980 + 0x159);
    if (lbl_80330708[0x55] != 0) {
        fn_800167E4(&w);
    } else {
        fn_80016A3C(&w);
    }
    fn_8017A38C(&w, lbl_8027E980 + 0x15E);
    fn_800C33C0(lbl_803200AC, &w);
    fn_8017A38C(&w, lbl_8027E980 + 0x163);
    fn_800C2980(lbl_803206EC, &w);
    fn_8017A38C(&w, lbl_8027E980 + 0x168);
    fn_8010FBA8(lbl_8032BB58, &w);
    w.vtbl = lbl_80284C98;
    w.vtbl = lbl_802842A4;
    if (w.owned != 0) {
        fn_800C4588(w.start);
        w.start = NULL;
        w.owned = 0;
    }
    fn_801E3CA8(best);
    arg0[1] = best;
    *(u8 **)((u8 *)other + 0x54) = best;
}

void fn_801E2014(s32 unused, u8 arg1, s32 arg2) {
    extern u8 lbl_80331FB8[];
    extern u8 lbl_80299E10[];
    void fn_8000CAA0(void *, s32);

    lbl_80331FB8[0x47] = arg1;
    fn_8000CAA0(lbl_80299E10, arg2);
}

void fn_801E204C(void *arg0) {
    extern u8 lbl_80330708[];
    u8 *temp_r5;

    if (lbl_80330708[0x54] == 4 && lbl_80330708[0x10] != 0x20) {
        temp_r5 = *(u8 **)((u8 *)arg0 + 0x54);
        temp_r5[0x64] = lbl_80330708[0x51E];
        temp_r5[0x65] = 9;
    }
}

void fn_801E2084(s32 arg0) {
    u8 fn_800EB788(void);
    void fn_801E1CB4(void *, s32);
    extern u16 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E1CB4(&lbl_803682F0, arg0);
}

void fn_801E20C4(void *arg0) {
    extern void *lbl_803682F0;
    extern u8 lbl_8027E980[];
    extern s32 lbl_80367110;
    extern u8 lbl_80299DE8[];

    void fn_800056CC(const char *, ...);
    void fn_800C4588(void *);
    void *fn_800C4604(s32, s32, void *, s32);
    void fn_801E3014(void **);
    void *fn_8000CAA0(void *, void *);

    void *ptr;
    void *obj;
    void *arg;

    arg = arg0;

    if (lbl_803682F0 != (int)NULL) {
        fn_800056CC((char *)(lbl_8027E980 + 0x122));
        fn_800C4588(lbl_803682F0);
        lbl_803682F0 = NULL;
    }

    fn_800056CC((char *)(lbl_8027E980 + 0x16D));
    ptr = fn_800C4604(0, -0x26000, lbl_8027E980 + 0x14E, 0);
    lbl_803682F0 = ptr;

    if (lbl_80367110 & 0x10) {
        fn_801E3014(&lbl_803682F0);
    } else {
        obj = fn_8000CAA0(lbl_80299DE8, arg);
        *(void **)((u8 *)obj + 0x54) = lbl_803682F0;
        *(s32 *)((u8 *)obj + 0x60) = 1;
    }
}

void fn_801E218C(void) {
    u8 fn_800EB788(void);
    if (fn_800EB788() != 0) {
        return;
    }
}

void fn_801E21B0(void *arg0) {
    void fn_800E9B80(void *, s32, s32, s32, void *);
    extern s32 lbl_803682F0;
    void *temp_r6;
    s32 temp_r5;

    temp_r6 = *(void **)((u8 *)arg0 + 0x54);
    temp_r5 = (s32)temp_r6 - lbl_803682F0;
    fn_800E9B80(temp_r6, *(s32 *)((u8 *)temp_r6 + 0x4C), temp_r5, temp_r5, arg0);
}

extern u8 lbl_80331FB8[72];
void fn_801E21EC(void *arg0, s8 arg1) {
    s32 var_ctr;
    void *var_r7;
    u32 temp_r5;
    s32 temp_r8;
    s32 temp_r8_2;

    var_ctr = 2;
    var_r7 = arg0;
loop_1:
    temp_r8 = (s32) var_r7 + 0x2000;
    var_r7 = (void *) temp_r8;
    temp_r5 = *(u32 *) ((s32) var_r7 + 0x40);
    if ((temp_r5 - 0x4645) != 0x384a) {
        goto skip1;
    }
    temp_r5 = *(u32 *) ((s32) var_r7 + 0x44);
    if ((temp_r5 - 0x2005) != 0x201) {
skip1:
        temp_r8_2 = temp_r8 + 0x4000;
        var_r7 = (void *) temp_r8_2;
        temp_r5 = *(u32 *) ((s32) var_r7 + 0x40);
        if ((temp_r5 - 0x4645) != 0x384a) {
            goto skip2;
        }
        temp_r5 = *(u32 *) ((s32) var_r7 + 0x44);
        if ((temp_r5 - 0x2005) != 0x201) {
skip2:
            temp_r8_2 = temp_r8_2 + 0x4000;
            var_r7 = (void *) temp_r8_2;
            temp_r5 = *(u32 *) ((s32) var_r7 + 0x40);
            if ((temp_r5 - 0x4645) != 0x384a) {
                goto skip3;
            }
            temp_r5 = *(u32 *) ((s32) var_r7 + 0x44);
            if ((temp_r5 - 0x2005) != 0x201) {
skip3:
                temp_r8 = temp_r8_2 + 0x4000;
                var_ctr -= 1;
                if (var_ctr == 0) {
                    var_r7 = NULL;
                } else {
                    goto loop_1;
                }
            } else {
                if ((u8) arg1 != *(u8 *) ((s32) var_r7 + 0x62)) {
                    goto skip3;
                }
            }
        } else {
            if ((u8) arg1 != *(u8 *) ((s32) var_r7 + 0x62)) {
                goto skip2;
            }
        }
    } else {
        if ((u8) arg1 != *(u8 *) ((s32) var_r7 + 0x62)) {
            goto skip1;
        }
    }

    *(void **) ((s32) arg0 + 4) = var_r7;
    lbl_80331FB8[0x47] = arg1;
}

void* fn_801E2324(u16 arg0) {
    s32 i;
    
    for (i = 0; i < 0x20; i++) {
        if (lbl_80331D00[i] == arg0) {
            return &lbl_80331D00[i];
        }
    }
    
    return NULL;
}

void fn_801E2458(void* unit)
{
    void** pUnit = (void**)unit;
    int i;

    for (i = 0; i < 96; i++)
    {
        if (*pUnit == 0) 
            break;

        pUnit = (void**)((u8*)pUnit + 0x10);
    }
}

s32 fn_801E2568(s32 *arg0, s32 arg1) {
    return ((arg1 * 0x6000) + 0x20000 + *arg0) - 0x6000;
}

s32 fn_801E2580(s32 *arg0, s32 arg1) {
    s32 x = *arg0;
    x = (arg1 << 14) + x;
    return x + 0x2000;
}

void fn_801E2594(u32 *arg0) {
    extern u16 lbl_8027E980[];
    void fn_800056CC(char *, ...);

    if (*arg0 != 0U) {
        fn_800056CC((char *)((u8 *)lbl_8027E980 + 0x122));
        fn_800C4588(*arg0);
        *arg0 = 0U;
    }
}

void fn_801E25EC(void) {
    extern u8 lbl_8027E980[];
    void fn_800056CC(char *, ...);
    fn_800056CC((char *)(lbl_8027E980 + 0x181));
    fn_800E9A94();
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_801E2620(void **arg0, u8 arg1) {
    u8 fn_800EB520(void *);
    void fn_800EB760(s32);
    void *fn_800C4638(s32, void *, s32);
    void fn_800C4588(void *);
    void fn_800EC1F8(void);
    u32 fn_800EC0A4(void *, void *, s32);
    void fn_8021D614(u32, s32 *, u32);
    u64 OSGetTime(void);
    s32 fn_80211690(s32, s32);
    u16 fn_802072A0(u32, s32, s32, s32);
    u8 fn_80209A0C(void);
    void *memset(void *, s32, u32);
    extern u8 lbl_8027E980[];
    extern u8 lbl_80331FB8[72];

    u8 counts[5];
    s8 best_idx[5];
    u32 best_val[5];
    u8 hist[6];
    u8 *slots[2];
    s32 spC;
    s32 sp8;
    s32 i;
    s32 off;
    u8 *blk;
    u8 *sys;
    u8 ok;
    u8 ok2;
    void *buf;
    u32 hash;
    u8 *dst;
    u8 *src;
    s32 j;
    u32 size;
    u32 capped;
    u8 *best;
    u32 bestc;
    u8 *less;
    u8 *more;
    s8 lang;
    u32 x0, x1;
    u64 temp_ret;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r4_2;
    u8 temp_r3;
    u8 idx;

    if (fn_800EB520(*arg0) == 0) {
        fn_800EB760(-4);
        return;
    }

    counts[0] = 0;
    i = 0;
    off = 0x2000;
    best_idx[0] = -1;
    best_val[0] = 0;
    counts[1] = 0;
    best_idx[1] = -1;
    best_val[1] = 0;
    counts[2] = 0;
    best_idx[2] = -1;
    best_val[2] = 0;
    counts[3] = 0;
    best_idx[3] = -1;
    best_val[3] = 0;
    counts[4] = 0;
    best_idx[4] = -1;
    best_val[4] = 0;

    do {
        blk = (u8 *)*arg0 + off;
        if (*(u32 *)(blk + 0x40) != 0x4645384AU) {
            ok = 0;
        } else if (*(u32 *)(blk + 0x44) != 0x20050201U) {
            ok = 0;
        } else {
            ok = 1;
        }
        if (ok != 0) {
            if (*(u32 *)(blk + 0x50) == 0x12345678U) {
                ok2 = 1;
            } else if (blk[0x60] == 1) {
                ok2 = 1;
            } else {
                buf = fn_800C4638(0x400, lbl_8027E980 + 0x14E, 0);
                fn_800EC1F8();
                hash = fn_800EC0A4(buf, blk + 0x70, *(s32 *)(blk + 0x4C) - 0x70);
                fn_800C4588(buf);
                if (*(u32 *)(blk + 0x50) != hash) {
                    ok2 = 0;
                } else {
                    ok2 = 1;
                }
            }
            if (ok2 == 0) {
                *(u32 *)(blk + 0x40) = 0;
                fn_800EB760(-0x42);
            } else {
                goto accumulate;
            }
        } else {
        accumulate:
            idx = blk[0x62];
            size = *(u32 *)(blk + 0x48);
            capped = (size <= 0x100000U) ? size : 0;
            counts[idx] = (u8)(counts[idx] + 1);
            if (best_val[idx] < capped) {
                best_idx[idx] = (s8)i;
                best_val[idx] = capped;
            }
        }
        i += 1;
        off += 0x4000;
    } while (i < 6);

    hist[0] = 0;
    hist[1] = 0;
    hist[2] = 0;
    hist[3] = 0;
    hist[4] = 0;
    hist[5] = 0;
    if ((s8)best_idx[0] >= 0) {
        hist[(s8)best_idx[0]] = (u8)(hist[(s8)best_idx[0]] + 1);
    }
    if ((s8)best_idx[1] >= 0) {
        hist[(s8)best_idx[1]] = (u8)(hist[(s8)best_idx[1]] + 1);
    }
    if ((s8)best_idx[2] >= 0) {
        hist[(s8)best_idx[2]] = (u8)(hist[(s8)best_idx[2]] + 1);
    }
    if ((s8)best_idx[3] >= 0) {
        hist[(s8)best_idx[3]] = (u8)(hist[(s8)best_idx[3]] + 1);
    }
    if ((s8)best_idx[4] >= 0) {
        hist[(s8)best_idx[4]] = (u8)(hist[(s8)best_idx[4]] + 1);
    }

    {
        u8 *hp = hist;
        off = 0x2000;
        for (j = 2; j != 0; j--) {
            blk = (u8 *)*arg0 + off;
            if (hp[0] == 0) {
                *(u32 *)(blk + 0x40) = 0;
            } else if (blk[0x60] == 1) {
                *(u32 *)(blk + 0x40) = 0;
            }
            off += 0x4000;
            blk = (u8 *)*arg0 + off;
            if (hp[1] == 0) {
                *(u32 *)(blk + 0x40) = 0;
            } else if (blk[0x60] == 1) {
                *(u32 *)(blk + 0x40) = 0;
            }
            off += 0x4000;
            blk = (u8 *)*arg0 + off;
            if (hp[2] == 0) {
                *(u32 *)(blk + 0x40) = 0;
            } else if (blk[0x60] == 1) {
                *(u32 *)(blk + 0x40) = 0;
            }
            off += 0x4000;
            hp += 3;
        }
    }

    {
        u8 **sp = slots;
        off = 0x1A000;
        i = 0;
        do {
            *sp = (u8 *)*arg0 + off;
            blk = *sp;
            if (*(u32 *)(blk + 0x40) != 0x4645384AU) {
                ok = 0;
            } else if (*(u32 *)(blk + 0x44) != 0x20050201U) {
                ok = 0;
            } else {
                ok = 1;
            }
            if (ok != 0) {
                if (*(u32 *)(blk + 0x50) == 0x12345678U) {
                    ok2 = 1;
                } else if (blk[0x60] == 1) {
                    ok2 = 1;
                } else {
                    buf = fn_800C4638(0x400, lbl_8027E980 + 0x14E, 0);
                    fn_800EC1F8();
                    hash = fn_800EC0A4(buf, blk + 0x70, *(s32 *)(blk + 0x4C) - 0x70);
                    fn_800C4588(buf);
                    if (*(u32 *)(blk + 0x50) != hash) {
                        ok2 = 0;
                    } else {
                        ok2 = 1;
                    }
                }
                if (ok2 == 0) {
                    *(u32 *)(slots[i] + 0x40) = 0;
                    fn_800EB760(-0x42);
                    goto after_pair;
                }
            }
            i += 1;
            sp += 1;
            off += 0x6000;
        } while (i < 2);
    }

    {
        u32 ca = *(u32 *)(slots[0] + 0x48);
        u32 cb = *(u32 *)(slots[1] + 0x48);
        ca = (ca <= 0x100000U) ? ca : 0;
        cb = (cb <= 0x100000U) ? cb : 0;
        if (ca < cb) {
            less = slots[0];
            more = slots[1];
        } else {
            less = slots[1];
            more = slots[0];
        }
        *(u32 *)(less + 0x40) = 0;
        if (more[0x60] == 1) {
            *(u32 *)(more + 0x40) = 0;
        }
    }

after_pair:
    bestc = 0;
    best = NULL;
    off = 0x2000;
    for (j = 3; j != 0; j--) {
        sys = (u8 *)*arg0 + off;
        if (*(u32 *)(sys + 0x70) != 0x53595346U) {
            ok = 0;
        } else if (*(u32 *)(sys + 0x74) != 0x20050201U) {
            ok = 0;
        } else {
            ok = 1;
        }
        if (ok != 0) {
            size = *(u32 *)(sys + 0x48);
            capped = (size <= 0x100000U) ? size : 0;
            if (bestc < capped) {
                best = sys;
                bestc = capped;
            }
        }
        off += 0x4000;
        sys = (u8 *)*arg0 + off;
        if (*(u32 *)(sys + 0x70) != 0x53595346U) {
            ok = 0;
        } else if (*(u32 *)(sys + 0x74) != 0x20050201U) {
            ok = 0;
        } else {
            ok = 1;
        }
        if (ok != 0) {
            size = *(u32 *)(sys + 0x48);
            capped = (size <= 0x100000U) ? size : 0;
            if (bestc < capped) {
                best = sys;
                bestc = capped;
            }
        }
        off += 0x4000;
    }
    sys = (u8 *)*arg0 + 0x1A000;
    if (*(u32 *)(sys + 0x70) != 0x53595346U) {
        ok = 0;
    } else if (*(u32 *)(sys + 0x74) != 0x20050201U) {
        ok = 0;
    } else {
        ok = 1;
    }
    if (ok != 0) {
        size = *(u32 *)(sys + 0x48);
        capped = (size <= 0x100000U) ? size : 0;
        if (bestc < capped) {
            best = sys;
            bestc = capped;
        }
    }
    sys = (u8 *)*arg0 + 0x20000;
    if (*(u32 *)(sys + 0x70) != 0x53595346U) {
        ok = 0;
    } else if (*(u32 *)(sys + 0x74) != 0x20050201U) {
        ok = 0;
    } else {
        ok = 1;
    }
    if (ok != 0) {
        size = *(u32 *)(sys + 0x48);
        capped = (size <= 0x100000U) ? size : 0;
        if (bestc < capped) {
            best = sys;
        }
    }

    if (arg1 != 0) {
        if (best == NULL) {
            fn_800EB760(-0x40);
            return;
        }
        x0 = *(u32 *)(best + 0x78);
        x1 = *(u32 *)(best + 0x7C);
        if (((*(u32 *)(lbl_80331FB8 + 8) ^ x0) | (*(u32 *)(lbl_80331FB8 + 0xC) ^ x1)) == 0) {
            return;
        }
        if (((*(u32 *)(lbl_80331FB8 + 8) ^ 0x01234567U) | (*(u32 *)(lbl_80331FB8 + 0xC) ^ 0x89ABCDEFU)) == 0) {
            return;
        }
        fn_800EB760(-0x40);
        return;
    }

    if (best != NULL) {
        src = best + 0x70;
        dst = lbl_80331FB8;
        *(u32 *)(dst + 0) = *(u32 *)(src + 0);
        *(u32 *)(dst + 4) = *(u32 *)(src + 4);
        *(u32 *)(dst + 0xC) = *(u32 *)(src + 0xC);
        *(u32 *)(dst + 8) = *(u32 *)(src + 8);
        *(u16 *)(dst + 0x10) = *(u16 *)(src + 0x10);
        dst[0x40] = src[0x40];
        dst[0x41] = src[0x41];
        dst[0x42] = src[0x42];
        dst[0x43] = src[0x43];
        dst[0x44] = src[0x44];
        dst[0x47] = src[0x47];
        dst = lbl_80331FB8;
        j = 0;
        for (i = 5; i != 0; i--) {
            u8 *p = src + 0x12 + j;
            j += 6;
            dst[0x12] = p[0];
            dst[0x13] = p[1];
            dst[0x14] = p[2];
            dst[0x15] = p[3];
            dst[0x16] = p[4];
            dst[0x17] = p[5];
            dst += 6;
        }
        dst = lbl_80331FB8;
        *(u32 *)(dst + 0x3C) = 0;
        *(u32 *)(dst + 0x38) = 0;
        *(u32 *)(dst + 0x34) = 0;
        *(u32 *)(dst + 0x30) = 0;
        *(u32 *)(dst + 0x30) = *(u32 *)(src + 0x30);
        *(u32 *)(dst + 0x34) = *(u32 *)(src + 0x34);
        *(u32 *)(dst + 0x38) = *(u32 *)(src + 0x38);
        *(u32 *)(dst + 0x3C) = *(u32 *)(src + 0x3C);
        return;
    }

    *(u32 *)(lbl_80331FB8 + 0) = 0x53595346U;
    *(u32 *)(lbl_80331FB8 + 4) = 0x20050201U;
    spC = 0;
    sp8 = 0;
    fn_8021D614(0, &sp8, 0x20050201U);
    temp_ret = OSGetTime();
    temp_r5 = spC;
    temp_r4 = temp_r5 + (u32)temp_ret;
    spC = temp_r4;
    sp8 = sp8 + (s32)temp_ret;
    temp_r6 = fn_80211690(temp_r4, temp_r5) * 0x7B;
    temp_r5_2 = spC + temp_r6;
    temp_r4_2 = sp8;
    spC = temp_r5_2;
    sp8 = temp_r4_2;
    *(u32 *)(lbl_80331FB8 + 0xC) = temp_r5_2;
    *(u32 *)(lbl_80331FB8 + 8) = temp_r4_2;
    *(u16 *)(lbl_80331FB8 + 0x10) = 0;
    lbl_80331FB8[0x40] = 0;
    lbl_80331FB8[0x41] = 0;
    lbl_80331FB8[0x42] = 0x40;
    lbl_80331FB8[0x43] = 0;
    if (fn_802072A0(0, temp_r4_2, temp_r5_2, temp_r6) == 1) {
        lang = 0;
    } else {
        temp_r3 = fn_80209A0C();
        switch ((s32)temp_r3) {
        case 0:
            lang = 1;
            break;
        case 1:
            lang = 2;
            break;
        case 2:
            lang = 3;
            break;
        case 3:
            lang = 4;
            break;
        case 4:
            lang = 5;
            break;
        case 5:
            lang = 1;
            break;
        }
    }
    lbl_80331FB8[0x44] = (u8)lang;
    lbl_80331FB8[0x47] = 0;
    memset(lbl_80331FB8 + 0x12, 0, 0x1E);
    memset(lbl_80331FB8 + 0x45, 0, 2);
    *(u32 *)(lbl_80331FB8 + 0x3C) = 0;
    *(u32 *)(lbl_80331FB8 + 0x38) = 0;
    *(u32 *)(lbl_80331FB8 + 0x34) = 0;
    *(u32 *)(lbl_80331FB8 + 0x30) = 0;
    fn_800EB760(-0x42);
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset

void fn_801E2F9C(s32 *arg0, s32 arg1) {
    extern u8 lbl_8027E980[];
    void fn_800056CC(char *, ...);
    s32 fn_800C4604(s32, s32, void *, s32);
    void fn_800EA540(s32, s32);

    fn_800056CC((char *)(lbl_8027E980 + 0x137));
    *arg0 = fn_800C4604(0, 0xFFFDA000, lbl_8027E980 + 0x14E, 0);
    fn_800EA540(*arg0, arg1);
}

void fn_801E3014(void* arg0) {
    u32* ptr = (u32*)arg0;
    if (ptr[0] & 0x400000) {
        s32 temp = ((ptr[0] >> 0xD) & 0x7FFF) + 1;
        ptr[0] -= temp;
        ptr[2] += temp;
    }
    if (ptr[1] & 0x400000) {
        s32 temp2 = ((ptr[1] >> 0xD) & 0x7FFF) + 1;
        ptr[1] -= temp2;
        ptr[3] += temp2;
    }
    if (ptr[0] < 0x400000) {
        ptr[0] = 0;
    }
    if (ptr[1] < 0x400000) {
        ptr[1] = 0;
    }
    if (ptr[2] & 0x400000) {
        ptr[2] = 0;
    }
    if (ptr[3] & 0x400000) {
        ptr[3] = 0;
    }
}

void fn_801E3118(s32 *arg0, s32 arg1, u8 arg2) {
    void fn_800056CC(char *, ...);
    s32 fn_800C4604(s32, s32, void *, s32);
    void fn_801E3014(s32 *);
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_8027E980[];
    extern u8 lbl_80299DE8[];
    extern s32 lbl_80367110;
    void *p;

    fn_800056CC((char *)(lbl_8027E980 + 0x16D));
    *arg0 = fn_800C4604(0, 0xFFFDA000, lbl_8027E980 + 0x14E, 0);
    if (lbl_80367110 & 0x10) {
        fn_801E3014(arg0);
    } else {
        p = fn_8000CAA0(lbl_80299DE8, arg1);
        *(s32 *)((u8 *)p + 0x54) = *arg0;
        *(u32 *)((u8 *)p + 0x60) = arg2;
    }
}

void fn_801E31C8(void *arg0)
{
    void fn_801E2620(void *, s32);
    u8 fn_800EB788(void);
    extern u8 lbl_803682F0;
    u32 value;

    if ((u8)fn_800EB788() != 0) {
        return;
    }

    value = *(u32 *)((u8 *)arg0 + 0x60);
    fn_801E2620(&lbl_803682F0, value != 0);
}

void fn_801E3214(void *arg0) {
    M2C_UNK fn_800EA540(s32, void *);
    fn_800EA540(M2C_FIELD(arg0, s32 *, 0x54), arg0);
}

void fn_801E323C(void *arg0, void *arg1)
{
    extern u8 lbl_8027E980[];
    extern u8 lbl_80299DC8[];
    void fn_800056CC(char *, ...);
    void *fn_8000CAA0(void *, void *);
    void *obj;

    fn_800056CC((char *)(lbl_8027E980 + 0x197));
    obj = fn_8000CAA0(lbl_80299DC8, arg1);
    *(s32 *)((u8 *)obj + 0x54) = *(s32 *)arg0;
}

void fn_801E329C(void *arg0) {
    M2C_UNK fn_800EA7CC(s32, void *);
    fn_800EA7CC(M2C_FIELD(arg0, s32 *, 0x54), arg0);
}

void fn_801E32C4(s32 unused, s32 arg1) {
    extern u8 lbl_8027E980[];
    void fn_800056CC(char *, ...);
    void fn_800E9AE4(s32);

    fn_800056CC((char *)(lbl_8027E980 + 0x1AD));
    fn_800E9AE4(arg1);
}

#pragma global_optimizer off
#pragma opt_strength_reduction off
u8 fn_801E3308(u8 *p)
{
    s32 count = 0;
    s32 off = 0;
    s32 i;
    s32 idx;

    for (i = 0; i < 3; i++) {
        idx = off + 0x12;
        if (p[idx] == 0)
            goto end;
        count += 1;
        idx = off + 0x13;
        if (p[idx] == 0)
            goto end;
        count += 1;
        idx = off + 0x14;
        if (p[idx] == 0)
            goto end;
        count += 1;
        idx = off + 0x15;
        if (p[idx] == 0)
            goto end;
        count += 1;
        idx = off + 0x16;
        if (p[idx] == 0)
            goto end;
        count += 1;
        idx = off + 0x17;
        if (p[idx] == 0)
            goto end;
        count += 1;
        idx = off + 0x18;
        if (p[idx] == 0)
            goto end;
        count += 1;
        idx = off + 0x19;
        if (p[idx] == 0)
            goto end;
        count += 1;
        idx = off + 0x1a;
        if (p[idx] == 0)
            goto end;
        count += 1;
        idx = off + 0x1b;
        if (p[idx] == 0)
            goto end;
        count += 1;
        off += 0xa;
    }
end:
    return (u8)(count + 1);
}
#pragma opt_strength_reduction on
#pragma global_optimizer on
s32 fn_801E33F4(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x10) & 1;
}

void fn_801E3400(void *arg0, u8 arg1) {
    u8 *ptr;
    s32 i;
    u16 *status_ptr;

    status_ptr = (u16 *)(((u8 *)arg0) + 0xa6);
    
    switch (*status_ptr) {
        case 2:
            break;
        case 1:
            *(u16*)(((u8 *)arg0) + 0x10) |= 4;
            /* fallthrough */
        case 0:
            *(u16*)(((u8 *)arg0) + 0x10) |= 2;
            /* fallthrough */
        case 3:
            *(u16*)(((u8 *)arg0) + 0x10) |= 1;
            break;
    }

    ptr = (u8 *)arg0 + 0x12;
    for (i = 0; i < 5; i++) {
        if (*ptr != arg1 && *ptr != 0) {
            ptr++;
            continue;
        }
        if (*ptr == 0) {
            *ptr = arg1;
        }
        return;
    }
}

void fn_801E3560(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0x40) = arg1;
    M2C_FIELD(arg0, s8 *, 0x41) = arg2;
    M2C_FIELD(arg0, s8 *, 0x42) = arg3;
}

s32 fn_801E3570(s32 arg0, void *arg1) {
    u8 fn_80105BC0(s32, u8);
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg1, u16 *, 0x18);
    if (temp_r0 >= 0x80U) {
        return 0;
    }
    return fn_80105BC0(arg0 + 0x30, (u8) temp_r0) != 0;
}

void fn_801E35BC(s32 arg0, s32 arg1) {
    M2C_UNK fn_80105D4C(s32, u8);
    if (arg1 < 0x80) {
        fn_80105D4C(arg0 + 0x30, (u8) arg1);
    }
}

void fn_801E35EC(s32 arg0, void *arg1) {
    s32 fn_80105D4C(s32, u8);
    u16 temp_r0 = *(u16 *)((u8 *)arg1 + 0x18);
    if (temp_r0 < 0x80U) {
        s32 a = arg0 + 0x30;
        u8 b = (u8)temp_r0;
        fn_80105D4C(a, b);
    }
}

s32 fn_801E3620(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0) + 0xACA70000) != 0x5346U) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 4) == 0x20050201;
}

void fn_801E3A60(void *arg0, u32 *hours, u32 *mins, u32 *secs) {
    s64 __div2i(s32, s32, s32, s32);
    u32 *sp;
    u32 *hp;
    u32 *mp;
    u32 q;
    s32 lo;

    sp = secs;
    hp = hours;
    mp = mins;
    lo = *(s32 *)((u8 *)arg0 + 0x5C);
    q = (u32)__div2i(*(s32 *)((u8 *)arg0 + 0x58), lo, 0, (s32)(*(u32 *)0x800000F8 >> 2));
    *sp = q % 60U;
    *mp = (q / 60U) % 60U;
    *hp = q / 3600U;
}

void fn_801E3B08(u8* arg0) {
    u32 i;
    
    // Initialize first 32 bytes with 0x20
    for (i = 0; i < 32; i++) {
        arg0[i] = 0x20;
    }
}

#pragma opt_strength_reduction off
void fn_801E3CA8(void *arg0) {
    void *fn_8000E0E4(void *);
    void fn_800056CC(void *, s32, ...);
    void *fn_800C4638(s32, void *, s32);
    void fn_800C4588(void *);
    void fn_800EC1F8(void);
    s32 fn_800EC0A4(void *, void *, s32);
    s64 OSGetTime(void);
    void fn_8020B294(s64, void *);
    void fn_80231E74(void *, s32, void *, ...);
    s32 strlen(void *);
    void *memcpy(void *, void *, s32);
    extern void *lbl_803682F0;
    extern u8 lbl_8027E980[];
    u8 sp58[0x28];
    struct {
        s32 sec, min, hour, mday, mon, year;
        s32 wday, yday, msec, usec;
    } cal;
    u8 sp10;
    s32 i;
    s32 j;
    s32 off;
    s32 ctr;
    u32 best;
    u32 clamped;
    u32 w8;
    u32 wC;
    u8 *base;
    u8 *src;
    void *buf;
    u8 *dst;
    u8 *tmpl;
    void *name;

    j = 0;
    tmpl = lbl_80331FB8;
    src = tmpl;
    *(u32 *)((u8 *)arg0 + 0x70) = *(u32 *)(tmpl + 0);
    *(u32 *)((u8 *)arg0 + 0x74) = *(u32 *)(tmpl + 4);
    w8 = *(u32 *)(tmpl + 8);
    wC = *(u32 *)(tmpl + 0xC);
    *(u32 *)((u8 *)arg0 + 0x7C) = wC;
    *(u32 *)((u8 *)arg0 + 0x78) = w8;
    *(u16 *)((u8 *)arg0 + 0x80) = *(u16 *)(tmpl + 0x10);
    ((u8 *)arg0)[0xB0] = tmpl[0x40];
    ((u8 *)arg0)[0xB1] = tmpl[0x41];
    ((u8 *)arg0)[0xB2] = tmpl[0x42];
    ((u8 *)arg0)[0xB3] = tmpl[0x43];
    ((u8 *)arg0)[0xB4] = tmpl[0x44];
    ((u8 *)arg0)[0xB7] = tmpl[0x47];
    dst = (u8 *)arg0 + 0x70;
    for (ctr = 5; ctr != 0; ctr--) {
        u8 *p = dst + j + 0x12;
        u8 *s = src + 0x12;
        j += 6;
        p[0] = s[0];
        p[1] = s[1];
        p[2] = s[2];
        p[3] = s[3];
        p[4] = s[4];
        p[5] = s[5];
        src += 6;
    }
    *(u32 *)(dst + 0x3C) = 0;
    *(u32 *)(dst + 0x38) = 0;
    *(u32 *)(dst + 0x34) = 0;
    *(u32 *)(dst + 0x30) = 0;
    src = lbl_80331FB8;
    *(u32 *)(dst + 0x30) |= *(u32 *)(src + 0x30);
    *(u32 *)(dst + 0x34) |= *(u32 *)(src + 0x34);
    *(u32 *)(dst + 0x38) |= *(u32 *)(src + 0x38);
    *(u32 *)(dst + 0x3C) |= *(u32 *)(src + 0x3C);
    best = 0;
    off = 0x2000;
    base = (u8 *)lbl_803682F0;
    for (ctr = 2; ctr != 0; ctr--) {
        clamped = save_slot_size(base + off);
        if (best < clamped) {
            best = save_slot_size(base + off);
        }
        off += 0x4000;
        clamped = save_slot_size(base + off);
        if (best < clamped) {
            best = save_slot_size(base + off);
        }
        off += 0x4000;
        clamped = save_slot_size(base + off);
        if (best < clamped) {
            best = save_slot_size(base + off);
        }
        off += 0x4000;
    }
    clamped = save_slot_size(base + 0x1A000);
    if (best < clamped) {
        best = save_slot_size(base + 0x1A000);
    }
    clamped = save_slot_size(base + 0x20000);
    if (best < clamped) {
        best = save_slot_size(base + 0x20000);
    }
    *(u32 *)((u8 *)arg0 + 0x48) = best + 1;
    j = 0;
    for (ctr = 2; ctr != 0; ctr--) {
        u8 *p = (u8 *)arg0 + j;
        j += 8;
        p[0] = 0x20; p[1] = 0x20; p[2] = 0x20; p[3] = 0x20;
        p[4] = 0x20; p[5] = 0x20; p[6] = 0x20; p[7] = 0x20;
        p = (u8 *)arg0 + j;
        j += 8;
        p[0] = 0x20; p[1] = 0x20; p[2] = 0x20; p[3] = 0x20;
        p[4] = 0x20; p[5] = 0x20; p[6] = 0x20; p[7] = 0x20;
        p = (u8 *)arg0 + j;
        j += 8;
        p[0] = 0x20; p[1] = 0x20; p[2] = 0x20; p[3] = 0x20;
        p[4] = 0x20; p[5] = 0x20; p[6] = 0x20; p[7] = 0x20;
        p = (u8 *)arg0 + j;
        j += 8;
        p[0] = 0x20; p[1] = 0x20; p[2] = 0x20; p[3] = 0x20;
        p[4] = 0x20; p[5] = 0x20; p[6] = 0x20; p[7] = 0x20;
    }
    name = fn_8000E0E4(lbl_8027E980 + 0x1C7);
    i = 0;
    for (ctr = 3; ctr != 0; ctr--) {
        if (tmpl[0x12] == 0) break;
        if (tmpl[0x13] == 0) break;
        tmpl += 1;
        if (tmpl[0x13] == 0) break;
        tmpl += 1;
        if (tmpl[0x13] == 0) break;
        tmpl += 1;
        if (tmpl[0x13] == 0) break;
        tmpl += 1;
        if (tmpl[0x13] == 0) break;
        tmpl += 1;
        if (tmpl[0x13] == 0) break;
        tmpl += 1;
        if (tmpl[0x13] == 0) break;
        tmpl += 1;
        if (tmpl[0x13] == 0) break;
        tmpl += 1;
        if (tmpl[0x13] == 0) break;
        tmpl += 1;
        tmpl += 1;
        i += 9;
    }
    fn_8020B294(OSGetTime(), &cal);
    sp10 = 0;
    cal.mon += 1;
    fn_80231E74(sp58, 0x20, lbl_8027E980 + 0x1D0, cal.mon, cal.mday, cal.year % 100, cal.hour, cal.min, &sp10);
    memcpy(arg0, name, strlen(name));
    memcpy((u8 *)arg0 + 0x20, sp58, strlen(sp58));
    buf = fn_800C4638(0x400, lbl_8027E980 + 0x14E, 0);
    fn_800EC1F8();
    *(u32 *)((u8 *)arg0 + 0x50) = fn_800EC0A4(buf, dst, *(s32 *)((u8 *)arg0 + 0x4C) - 0x70);
    fn_800C4588(buf);
    fn_800056CC(lbl_8027E980 + 0x1E9, *(s32 *)((u8 *)arg0 + 0x50));
}
u32 fn_801E417C(void *arg0) {
    u32 size = *(u32 *)((u8 *)arg0 + 0x48);
    if (size > 0x100000U) {
        return 0;
    }
    return size;
}

s32 fn_801E4194(void *arg0) {
    void *fn_800C4638(s32, void *, s32);
    void fn_800EC1F8(void);
    u32 fn_800EC0A4(void *, void *, s32);
    void fn_800C4588(void *);
    void fn_800056CC(char *, ...);
    extern u8 lbl_8027E980[];
    void *buf;
    u8 *p;
    u32 ver;

    if ((u32)(*(u32 *)((u8 *)arg0 + 0x40) + 0xB9BB0000) != 0x384AU) {
        return 0;
    }
    ver = 0x20050201U;
    p = (u8 *)arg0 + 0x70;
    *(u32 *)((u8 *)arg0 + 0x44) = ver;
    if (p) {
        if ((u32)(*(u32 *)p + 0xB9BB0000) == 0x384AU) {
            *(u32 *)(p + 4) = ver;
        }
    }
    buf = fn_800C4638(0x400, lbl_8027E980 + 0x14E, 0);
    fn_800EC1F8();
    *(u32 *)((u8 *)arg0 + 0x50) = fn_800EC0A4(buf, p, *(s32 *)((u8 *)arg0 + 0x4C) - 0x70);
    fn_800C4588(buf);
    fn_800056CC((char *)(lbl_8027E980 + 0x1E9), *(u32 *)((u8 *)arg0 + 0x50));
    return 1;
}

s32 fn_801E4268(void *arg0) {
    void *fn_800C4638(s32, void *, s32);
    void fn_800EC1F8(void);
    u32 fn_800EC0A4(void *, void *, s32);
    void fn_800C4588(void *);
    extern u8 lbl_8027E980[];
    u32 sum;
    void *buf;
    u8 ok;

    if ((u32)(*(u32 *)((u8 *)arg0 + 0x40) + 0xB9BB0000) != 0x384AU) {
        return 0;
    }
    if ((u32)(*(u32 *)((u8 *)arg0 + 0x50) + 0xEDCC0000) == 0x5678U) {
        ok = 1;
    } else if (*(u8 *)((u8 *)arg0 + 0x60) == 1) {
        ok = 1;
    } else {
        buf = fn_800C4638(0x400, lbl_8027E980 + 0x14E, 0);
        fn_800EC1F8();
        sum = fn_800EC0A4(buf, (u8 *)arg0 + 0x70, *(s32 *)((u8 *)arg0 + 0x4C) - 0x70);
        fn_800C4588(buf);
        if (*(u32 *)((u8 *)arg0 + 0x50) != sum) {
            ok = 0;
        } else {
            ok = 1;
        }
    }
    return ok != 0;
}

s32 fn_801E434C(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x40) + 0xB9BB0000) != 0x384AU) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x44) == 0x20050201;
}
extern u8 lbl_80299E10[];
extern u8 lbl_80331FB8[];
#include "global.h"
extern u16 lbl_802842A4[5];
extern u16 lbl_802842B8[6];
extern s16 *lbl_8027C698;

extern void *lbl_803682B8;
extern u8 lbl_802986A8[];
extern u16 lbl_8027C370[];
extern u16 lbl_802CA264[];
#include "global.h"

extern s32 lbl_80367110;
extern f32 lbl_8036B330;
extern f32 lbl_8036B338;
extern f32 lbl_8036B358;
#include "global.h"
#include "m2c.h"

extern u8 lbl_8027E258[];
extern f32 lbl_8036B630;
extern f32 lbl_8036B650;
extern f32 lbl_8036B664;
extern f32 lbl_8036B668;
extern f32 lbl_8036B698;
extern f32 lbl_8036B69C;
#include "common.h"
#include "structs.h"

