/* Functions from 0x80132800 to 0x80149F38, found by decomp-toolkit. */
#include "common.h"
#include "dolphin/os.h"

extern u16 lbl_80331FB8[36]; // 72 bytes 
extern f32 lbl_8036A6D0;
extern f32 lbl_8036A6C4;

extern u16 lbl_80331FB8[36]; // 72 bytes = 36 * 2-byte entries
extern f32 lbl_8036A5A8;
extern f32 lbl_8036A5AC;
extern f32 lbl_8036A5B8;

extern u8 lbl_803301A8[1344];

typedef struct Vec2s {
    s16 x;
    s16 y;
} Vec2s;

typedef struct {
    u8 unk0;
} Unk1;


typedef struct ListNode {
    struct ListNode *prev;
    struct ListNode *next;
    void *val;
} ListNode;

typedef struct ListIter {
    ListNode *node;
} ListIter;

typedef struct List {
    s32 size;
} List;

typedef struct Anim Anim;
typedef void (*AnimFn)(Anim *);

struct Anim {
    u8 pad0[8];
    AnimFn *funcs;      /* +0x08 */
    u8 flags;           /* +0x0C */
    u8 unk_d;           /* +0x0D */
    u8 unk_e;           /* +0x0E */
    u8 pad_f;           /* +0x0F */
    u8 unk_10;          /* +0x10 */
    u8 delay;           /* +0x11 */
    s16 unk_12;         /* +0x12 */
    u8 pad14[2];
    u8 cur;             /* +0x16 */
    u8 prev;            /* +0x17 */
    AnimFn *draw;       /* +0x18 */
    u8 pad1C[0xC];
    u8 start;           /* +0x28 */
    u8 end;             /* +0x29 */
    u8 pad2A[2];
    u16 frame;          /* +0x2C */
    u16 frames;         /* +0x2E */
};

void *fn_80132800(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x50 / 2];
}

void *fn_80132810(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0x59;
}

s32 fn_80132820(s32 arg0, s32 arg1) {
    void fn_80024398(void *, s32, s32);
    extern u8 lbl_80367AC4;
    fn_80024398(&lbl_80367AC4, arg1, 0);
    return 4;
}

void *fn_8013284C(void) {
    extern u16 lbl_80276008;
    return (u8*)&lbl_80276008 + 0x124;
}

void *fn_8013285C(void) {
    extern u16 lbl_80276008;
    return (u16*)((uintptr_t)&lbl_80276008 + 0x97);
}

s32 fn_8013286C(void) {
    return 2;
}

s32 fn_80132874(void) {
    return 0x10;
}

void *fn_8013287C(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0xb4;
}

void *fn_8013288C(void) {
    extern u16 lbl_80276008;
    return (u8 *)&lbl_80276008 + 0xC2;
}

s32 fn_8013289C(void) {
    return 0;
}

s32 fn_801328A4(void) {
    extern u16 lbl_80276008[];
    void fn_801C1C64(s32, s32, void *, s32, s32, s32, s32);

    fn_801C1C64(0x17C, 0x50, (u8 *)lbl_80276008 + 0xE5, 0xFA, 0x7D0, 0xFA, 3);
    return 5;
}

void *fn_801328EC(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0xee;
}

void *fn_801328FC(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x7E];
}

s32 fn_8013290C(void) {
    return 0;
}

s32 fn_80132914(void) {
    extern u16 lbl_80276008[];
    fn_8006F09C((u8 *)lbl_80276008 + 0x117, (u8 *)lbl_80276008 + 0x120, (u8 *)lbl_80276008 + 0x129);
    return 5;
}

void *fn_8013294C(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0x132;
}

void *fn_8013295C(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0x140;
}

s32 fn_8013296C(void) {
    return 0;
}

s32 fn_80132974(void) {
    extern u16 lbl_80276008[];
    fn_8006F10C((u8 *)lbl_80276008 + 0x117, (u8 *)lbl_80276008 + 0x120);
    return 5;
}

void *fn_801329A8(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0x15b;
}

void *fn_801329B8(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0x16b;
}

s32 fn_801329C8(void) {
    return 0;
}

s32 fn_801329D0(void) {
    extern u16 lbl_80276008[];
    void fn_8006F6A4(s32, void *, s32, s32);
    s32 fn_800C0658(void);

    fn_8006F6A4(fn_800C0658(), (u8 *)lbl_80276008 + 0x186, 0, 0);
    return 5;
}

void *fn_80132A0C(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0x1b2;
}

void *fn_80132A1C(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0x1bb;
}

s32 fn_80132A2C(void) {
    return 2;
}

s32 fn_80132A34(void) {
    return 0x10;
}

void *fn_80132A3C(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0x1e2;
}

void *fn_80132A4C(void) {
    extern u16 lbl_80276008[];
    return (u8 *)lbl_80276008 + 0x1fa;
}

s32 fn_80132A5C(void) {
    return 0;
}

s32 fn_80132A64(void) {
    extern u16 lbl_80331FB8[36]; // 72 bytes = 36 * 2-byte entries
    
    s32 i;
    
    i = 0;
    lbl_80331FB8[0x8] |= 1;
    lbl_80331FB8[0x8] |= 2;
    lbl_80331FB8[0x8] |= 4;
    lbl_80331FB8[0x8] |= 8;
    lbl_80331FB8[0x8] |= 0x10;
    lbl_80331FB8[0x8] |= 0x20;
    
    do {
        fn_801E35BC(lbl_80331FB8, i);
        i += 1;
    } while (i < 0x80);
    
    return 6;
}

void *fn_80132B00(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    M2C_UNK fn_8016A6A4(void *);
    extern u8 lbl_80276270[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80276270, arg0);
    if (temp_r3 != NULL) {
        fn_8016A6A4(temp_r3);
    }
    M2C_FIELD(temp_r3, s32 *, 0x44) = arg1;
    return temp_r3;
}

void fn_80132B58(void *arg0) {
    M2C_UNK fn_8003F670(s32);
    M2C_UNK fn_80161F7C();
    M2C_UNK fn_8016A650(void *, M2C_UNK);
    fn_80161F7C();
    fn_8003F670(M2C_FIELD(arg0, s32 *, 0x48));
    if (arg0 != NULL) {
        fn_8016A650(arg0, 0);
    }
}

void fn_80132BA0(void *arg0) {
    s32 fn_8003FCCC();
    M2C_UNK fn_80162018();
    M2C_UNK fn_801620AC();
    fn_80162018();
    fn_801620AC();
    M2C_FIELD(arg0, s32 *, 0x48) = fn_8003FCCC();
}

void fn_80132BD8(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    s32 fn_80161FB8();
    if (fn_80161FB8() != 0) {
        fn_8000C188(arg0);
    }
}

void fn_80132C14(s32 arg0) {
    void *fn_8014D8FC(void *);
    M2C_UNK fn_80162054(void);
    M2C_UNK fn_8016A5DC(s32, s32, f32);
    extern u8 lbl_80330708[];
    fn_80162054();
    fn_8016A5DC(arg0, M2C_FIELD(fn_8014D8FC(lbl_80330708), s32 *, 0x44), 90.0f);
}

void fn_80132C5C(void *arg0) {
    switch (*(s32 *)((u8 *)arg0 + 0x44)) {
    case 0:
        fn_8016E9DC(arg0);
        break;
    case 1:
        fn_80234450((void *)0x8032FE80, (const char *)0x802762DC + 0x2C);
        fn_801CE070((void *)0x8032FE80, (const char *)0x802762DC + 0x2C, arg0);
        break;
    }
}

void fn_80132CDC(void) {
    M2C_UNK fn_8000C188();
    fn_8000C188();
}

void fn_80133E50(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    fn_8008AB7C(arg1 + (arg3 >> 1), arg2 + (arg4 >> 1), arg3, 0x18, 0x19, 0x4C, arg5);
}

void fn_80133EA4(s32 *arg0, void *arg1) {
    s32 fn_800102BC(M2C_UNK, s32, s16, s32, s16, s16, s16, f32);
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *);
    extern f32 lbl_8036A5AC;
    M2C_UNK spC;
    s16 spA;
    s16 sp8;
    s16 temp_r29;
    s16 temp_r5;
    s16 temp_r6_2;
    s16 temp_r7;
    s16 temp_r9;
    s16 var_r27;
    s16 var_r28;
    s32 temp_r4;
    s32 temp_r6;
    s32 temp_r8;

    temp_r9 = M2C_FIELD(arg1, s16 *, 0x44);
    temp_r7 = M2C_FIELD(arg1, s16 *, 0x3E);
    temp_r29 = M2C_FIELD(arg1, s16 *, 0x46);
    temp_r8 = (s16) (M2C_FIELD(arg1, s16 *, 0x16) - M2C_FIELD(arg1, s16 *, 0x12)) / temp_r9;
    temp_r6 = (s16) temp_r8 * (s16) (M2C_FIELD(arg1, s16 *, 0x3E) % temp_r9);
    temp_r4 = temp_r29 * (s16) (temp_r7 / temp_r9);
    temp_r5 = temp_r6 + M2C_FIELD(arg1, s16 *, 0x48);
    var_r28 = temp_r5;
    var_r27 = temp_r4 + M2C_FIELD(arg1, s16 *, 0x4A);
    temp_r6_2 = (s16) ((s32) (temp_r29 - fn_800102BC(-1, temp_r4, temp_r5, temp_r6, temp_r7, (s16) temp_r8, temp_r9, lbl_8036A5AC)) >> 1);
    if ((s16) M2C_FIELD(arg1, s16 *, 0x3E) == 4) {
        var_r28 = (s16) (M2C_FIELD(arg1, s16 *, 0x16) - M2C_FIELD(arg1, s16 *, 0x12)) - 0x50;
        var_r27 = (s16) (M2C_FIELD(arg1, s16 *, 0x18) - M2C_FIELD(arg1, s16 *, 0x14)) - 0x10;
    }
    sp8 = var_r28;
    spA = var_r27 + temp_r6_2;
    *arg0 = *fn_8013F748(arg1, &spC, &sp8);
}

s32 fn_80133FA4(void *arg0) {
    extern s32 lbl_80291744[];
    return lbl_80291744[M2C_FIELD(arg0, s16 *, 0x3E)];
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_8013406C(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(s32) = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual s32 v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        u8 pad4[0xE];
        s16 unk12;
        u8 pad14[2];
        s16 unk16;
        u8 pad18[0x1C];
        u32 unk34;
        u8 pad38[0xC];
        s16 unk44;
        s16 unk46;
        s16 unk48;
        s16 unk4A;
        s32 unk4C;
        u8 *unk50;
    };
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8000A174(s32, u16);
    void fn_80009B80(s32);
    s32 fn_800102BC(s32, f32);
    void *fn_80019E04(void *);
    void fn_8005AC24(void *, s16, s16, s32);
    s32 fn_8000E0E4(void *);
    void fn_8001003C(s16, s16, s32, s32, s32, s32, ...);
    extern f32 lbl_8036A5AC;
    extern f32 lbl_8036A5D0;
    extern f32 lbl_8036A5BC;
    extern u8 lbl_802F0308[];
    Obj *self;
    s32 startX;

    self = (Obj *)arg0;
    startX = arg1;
    self->v12();
    self->v3(startX);
    {
        s16 cols;
        s16 rows;
        s16 rowH;
        s16 startY0;
        s16 colW;
        s16 yOff;
        s32 x;
        s32 y;
        s32 row;
        s32 col;
        s32 idx;
        s32 curY;
        u8 *rowBase;
        u8 *cell;
        s32 vret;
        s16 rowHs;
        s16 colsExt;
        s16 x16;
        s16 curY16;
        void *p;
        s32 str;
        s32 sum;

        cols = self->unk44;
        vret = self->v10();
        sum = cols + (s16)vret;
        sum = sum - 1;
        rows = (s16)(sum / cols);
        colW = (s16)((s16)(self->unk16 - self->unk12) / self->unk44);
        startX = self->unk48;
        rowH = self->unk46;
        startY0 = self->unk4A;
        rowHs = rowH;
        startY0 = (s16)(startY0 + ((rowHs - fn_800102BC(-1, lbl_8036A5AC)) >> 1));
        curY = startY0;
        yOff = (s16)((0x18 - fn_800102BC(-1, lbl_8036A5AC)) >> 1);
        self->v10();
        idx = 0;
        fn_8000A258();
        fn_80009C0C(lbl_8036A5D0);
        fn_8000A248();
        y = (s16)(startY0 + yOff);
        row = 0;
        rowBase = self->unk50 + self->unk4C * 0x48;
        colsExt = cols;
        while ((s16)row < rows) {
            x = startX;
            cell = rowBase;
            curY16 = (s16)curY;
            col = 0;
            while ((s16)col < colsExt) {
                if ((s16)idx >= 9) {
                    goto done;
                }
                if (*(u32 *)cell != 0) {
                    p = fn_80019E04(*(void **)cell);
                    x16 = (s16)x;
                    fn_8005AC24(lbl_802F0308, x16, curY16, ((u8 *)p)[0x15] + 0x61);
                    fn_8000A258();
                    fn_8000A174(0, (u16)(self->unk34 | 0x13));
                    fn_8000A248();
                    str = fn_8000E0E4(*(void **)(cell + 4));
                    fn_8001003C((s16)(x16 + 0x18), (s16)y, 0xE, 1, 0, str, lbl_8036A5AC, lbl_8036A5BC);
                    x = x + colW;
                    col = col + 1;
                }
                cell = cell + 8;
                rowBase = rowBase + 8;
                idx = idx + 1;
            }
            y = y + rowHs;
            curY = curY + rowH;
            row = row + 1;
        }
    }
done:
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

s16 fn_8013432C(void *arg0) {
    s16 count;
    u8 *ptr;

    count = 0;
    ptr = *(u8 **)((u8 *)arg0 + 0x50) + *(u32 *)((u8 *)arg0 + 0x4c) * 0x48;
    if (*(u32 *)(ptr + 0) != 0) {
        count = 1;
    }
    if (*(u32 *)(ptr + 8) != 0) {
        count += 1;
    }
    if (*(u32 *)(ptr + 0x10) != 0) {
        count += 1;
    }
    if (*(u32 *)(ptr + 0x18) != 0) {
        count += 1;
    }
    if (*(u32 *)(ptr + 0x20) != 0) {
        count += 1;
    }
    if (*(u32 *)(ptr + 0x28) != 0) {
        count += 1;
    }
    if (*(u32 *)(ptr + 0x30) != 0) {
        count += 1;
    }
    if (*(u32 *)(ptr + 0x38) != 0) {
        count += 1;
    }
    if (*(u32 *)(ptr + 0x40) != 0) {
        count += 1;
    }
    return count;
}

void *fn_801343F8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    extern u16 lbl_80276354;
    extern u8 lbl_802764BC[];
    extern u16 lbl_80291794[];
    extern u8 lbl_80330708[];
    void *fn_8000D354(void *);
    void fn_80134E48(s32, s32, s32, s32, s32);
    void fn_80231D94(void *, void *, u8);

    fn_80134E48(arg2, arg3, arg4, arg5, arg6);
    *(u16 **)arg0 = lbl_80291794;
    *(s32 *)((char *)arg0 + 0x4c) = arg1;
    fn_80231D94(lbl_802764BC + 0x218, lbl_802764BC + 0x228, *(u8 *)((char *)lbl_80330708 + 0x10));
    *(void **)((char *)arg0 + 0x50) = fn_8000D354(lbl_802764BC + 0x218);
    if (*(void **)((char *)arg0 + 0x50) == NULL) {
        *(void **)((char *)arg0 + 0x50) = &lbl_80276354;
    }
    return arg0;
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_801344AC(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(s32) = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        u8 pad4[0xE];
        s16 unk12;
        u8 pad14[2];
        s16 unk16;
        u8 pad18[0x1C];
        u32 unk34;
        u8 pad38[0xC];
        s16 unk44;
        s16 unk46;
        s16 unk48;
        s16 unk4A;
    };
    typedef struct {
        s16 x;
        s16 y;
        s16 unk4;
        u16 pad6;
        void *str;
    } Cell;
    typedef struct {
        Cell c[5];
    } Cells;
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, s16, s32, f32);
    void *fn_8000E0E4(void *);
    void fn_8005AC24(void *, s16, s16, s16);
    void fn_8000A174(s32, u16);
    void fn_8001003C(s16, s16, s32, s32, s32, void *, ...);
    void fn_80009B80(s32);
    extern f32 lbl_8036A5AC;
    extern f32 lbl_8036A5D0;
    extern f32 lbl_8036A5BC;
    extern Cells lbl_80276318;
    extern u8 lbl_802764BC[];
    extern u8 lbl_802F0308[];
    Cells cells;
    s16 temp_r31;
    s16 temp_r30;
    s32 temp_r29;
    s16 temp_r28;
    s16 temp_r27;
    Obj *self;
    s16 x1;
    s16 y1;
    s16 y2;
    Cell *p;
    s16 cx;
    s16 cy;
    s32 i;
    s32 startX;

    self = (Obj *)arg0;
    startX = arg1;
    self->v12();
    self->v3(startX);
    temp_r31 = self->unk46;
    temp_r29 = (s16)(self->unk16 - self->unk12) / self->unk44;
    temp_r30 = self->unk48;
    temp_r28 = (s16)(self->unk4A + ((temp_r31 - 0x18) >> 1));
    temp_r27 = (s16)((0x18 - fn_800102BC(-1, self->unk4A, temp_r29, lbl_8036A5AC)) >> 1);
    fn_8000A258();
    fn_80009C0C(lbl_8036A5D0);
    fn_8000A248();
    cells = lbl_80276318;
    cells.c[0].x = temp_r30;
    cells.c[0].y = temp_r28;
    cells.c[0].str = fn_8000E0E4(lbl_802764BC + 0x23A);
    x1 = (s16)(temp_r30 + (s16)temp_r29);
    cells.c[1].x = x1;
    cells.c[1].y = temp_r28;
    cells.c[1].str = fn_8000E0E4(lbl_802764BC + 0x241);
    y1 = (s16)(temp_r28 + temp_r31);
    cells.c[2].x = temp_r30;
    cells.c[2].y = y1;
    cells.c[2].str = fn_8000E0E4(lbl_802764BC + 0x248);
    cells.c[3].x = x1;
    cells.c[3].y = y1;
    cells.c[3].str = fn_8000E0E4(lbl_802764BC + 0x24F);
    y2 = y1;
    y2 = (s16)(temp_r31 + y2);
    cells.c[4].x = temp_r30;
    cells.c[4].y = y2;
    cells.c[4].str = fn_8000E0E4(lbl_802764BC + 0x256);
    p = cells.c;
    for (i = 0; i < 5; i++) {
        cx = p->x;
        cy = p->y;
        fn_8005AC24(lbl_802F0308, cx, cy, p->unk4);
        fn_8000A258();
        fn_8000A174(0, (u16)(self->unk34 | 0x13));
        fn_8000A248();
        fn_8001003C((s16)(cx + 0x18), (s16)(cy + temp_r27), 1, 1, 0, p->str, lbl_8036A5AC, lbl_8036A5BC);
        p++;
    }
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

s32 fn_80134718(void *arg0) {
    extern s32 lbl_80291730[];
    return lbl_80291730[M2C_FIELD(arg0, s16 *, 0x3E)];
}

#pragma cplusplus on
extern "C" void fn_80134730(void *arg0) {
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
#pragma cplusplus reset
s32 fn_80134988(s32 arg0, s32 arg1) {
    if (arg0 < 0) {
        return -1;
    }
    
    if (arg1 < 0) {
        return -1;
    }
    
    if ((arg0 == 0) && (arg1 == 0)) {
        return 0;
    }
    
    if (arg0 == arg1) {
        return 1;
    }
    
    if (arg0 > arg1) {
        return 2;
    }
    
    return 3;
}

void fn_80134B58(void *arg0) {
    M2C_UNK fn_801569C4(M2C_UNK, M2C_UNK, s16, s16, M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x10)();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x3D) != 0) {
        fn_801569C4(0, 0, (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)), (s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)), 0xE6, 0x10);
    }
}

void fn_80134BD0(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    fn_8008AB7C(arg1 + (arg3 >> 1), arg2 + (arg4 >> 1), arg3, 0x17, 0x19, 0x4C, arg5);
}

void fn_80134C24(s32 *arg0, void *arg1) {
    s32 fn_800102BC(M2C_UNK, s32, s16, s32, s16, s16, s16, f32);
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *);
    extern f32 lbl_8036A5AC;
    s16 sp8;
    s16 spA;
    s16 temp_r27;
    s16 temp_r29;
    s16 temp_r5;
    s16 temp_r7;
    s16 temp_r9;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_r10;

    temp_r9 = M2C_FIELD(arg1, s16 *, 0x44);
    temp_r7 = M2C_FIELD(arg1, s16 *, 0x3e);
    temp_r29 = M2C_FIELD(arg1, s16 *, 0x46);
    temp_r8 = (s16) ((M2C_FIELD(arg1, s16 *, 0x16) - M2C_FIELD(arg1, s16 *, 0x12)) / temp_r9);
    temp_r10 = (s16) temp_r8;
    temp_r6 = (s16) (temp_r10 * (M2C_FIELD(arg1, s16 *, 0x3e) % temp_r9));
    temp_r4 = temp_r29 * (s16) (temp_r7 / temp_r9);
    temp_r5 = temp_r6 + M2C_FIELD(arg1, s16 *, 0x48);
    temp_r27 = temp_r4 + M2C_FIELD(arg1, s16 *, 0x4a);
    temp_r3 = fn_800102BC(-1, temp_r4, temp_r5, temp_r6, temp_r7, (s16) temp_r8, temp_r9, lbl_8036A5AC);
    sp8 = temp_r5;
    spA = temp_r27 + (s16) ((s32) (temp_r29 - temp_r3) >> 1);
    *arg0 = *fn_8013F748(arg1, (M2C_UNK *)&sp8, &spA);
}

void fn_80134CE8(void *arg0) {
    s16 temp_r30;

    temp_r30 = M2C_FIELD(arg0, s16 *, 0x44);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0xC) + (s16) ((M2C_FIELD(arg0, s16 *, 0x4A) * 2) + ((s16) ((s32) ((temp_r30 + M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 (**)(), 0x30)()) - 1) / temp_r30) * M2C_FIELD(arg0, s16 *, 0x46)) + 0x10));
    M2C_FIELD(arg0, s16 *, 0x12) = 2;
    M2C_FIELD(arg0, s16 *, 0x14) = 8;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)) - 2);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)) - 8);
}

s32 fn_80134E40(void) {
    return 4;
}

void fn_80134E48(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    extern M2C_UNK lbl_8028FDB0;
    extern M2C_UNK lbl_8029180C;
    extern M2C_UNK lbl_80292230;
    extern f32 lbl_8036A5AC;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_8028FDB0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80292230;
    M2C_FIELD(arg0, s16 *, 8) = -1;
    M2C_FIELD(arg0, s16 *, 0xA) = arg1;
    M2C_FIELD(arg0, s16 *, 0xC) = arg2;
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) (arg1 + arg3);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (arg2 + arg4);
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
    M2C_FIELD(arg0, s16 *, 0x16) = arg3;
    M2C_FIELD(arg0, s16 *, 0x18) = arg4;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1E) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x1F) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x20) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x21) = 0xFF;
    M2C_FIELD(arg0, s16 *, 0x22) = arg5;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036A5AC;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_8036A5AC;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_8036A5AC;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_8029180C;
    M2C_FIELD(arg0, s8 *, 0x3C) = 1;
    M2C_FIELD(arg0, s8 *, 0x3D) = 1;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s16 *, 0x40) = -1;
    M2C_FIELD(arg0, s16 *, 0x42) = -1;
    M2C_FIELD(arg0, s16 *, 0x44) = 2;
    M2C_FIELD(arg0, s16 *, 0x46) = 0x30;
    M2C_FIELD(arg0, s16 *, 0x48) = 0x10;
    M2C_FIELD(arg0, s16 *, 0x4A) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 2;
    M2C_FIELD(arg0, s16 *, 0x14) = 8;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)) - 2);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)) - 8);
}

void *fn_80134F74(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_80291794[];
    extern u8 lbl_8029180C[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80291794;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_8029180C;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_80134FF0(void) {
    return 0;
}

void *fn_80134FF8(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_802917D0[];
    extern u8 lbl_8029180C[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_802917D0;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_8029180C;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_80135074(void) {
    return 5;
}

s32 fn_8013507C(void) {
    return 0;
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80135084(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(s32) = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9(s16, s16, s32) = 0;
        virtual void v10() = 0;
        u8 pad4[0xE];
        s16 unk12;
        s16 unk14;
        s16 unk16;
        s16 unk18;
        u8 pad1A[0x1A];
        u32 unk34;
        u8 pad38[4];
        s32 unk3C;
        s16 unk40;
        s16 unk42;
        s16 unk44;
        s16 unk46;
        s16 unk48;
        s16 unk4A;
    };
    void fn_8013F748(void *, s16 *, s16 *);
    void fn_8000A258(void);
    void fn_80009BC0(void (*)(void *), s16 *);
    void fn_80009C0C(f32);
    void fn_8000A174(s32, u16);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, f32);
    u8 *fn_801057BC(s32);
    u8 *fn_80104970(u8 *);
    void fn_800C9874(s32 *, s32, s8);
    s32 fn_800C93EC(s32 *);
    void fn_8001019C(s16, s16, s32, void *, s32, ...);
    void fn_800C9A60(s32 *, s32);
    void fn_80009B98(void);
    void fn_8013F920(void *);
    extern f32 lbl_8036A5D8;
    extern f32 lbl_8036A5DC;
    extern u8 lbl_80276720[];
    s32 arg;
    u8 *p;
    s16 ay;
    Obj *self;
    s16 ax;
    s32 saved;
    s16 w;
    s16 h;
    s16 pad;
    u8 *end;
    u8 done;
    s32 buf[3];
    u8 ch;
    s16 *rect;

    self = (Obj *)arg0;
    arg = arg1;
    saved = self->unk3C;
    self->v10();
    self->v3(arg);
    rect = &self->unk44;
    h = (s16)(self->unk18 - self->unk14);
    w = (s16)(self->unk16 - self->unk12);
    self->unk44 = 0;
    self->unk46 = 0;
    self->unk48 = w;
    self->unk4A = h;
    fn_8013F748(self, rect, rect);
    rect = &self->unk48;
    fn_8013F748(self, rect, rect);
    fn_8000A258();
    fn_80009BC0(fn_8013F920, &self->unk44);
    fn_80009C0C(lbl_8036A5D8);
    fn_8000A174(0, (u16)(self->unk34 | 3));
    fn_8000A248();
    ax = self->unk40;
    ay = self->unk42;
    self->v9(ax, ay, saved);
    fn_8000A258();
    fn_8000A174(0, (u16)(self->unk34 | 3));
    fn_8000A248();
    pad = (s16)((0x1A - fn_800102BC(-1, lbl_8036A5DC)) >> 1);
    ay = (s16)(pad + (fn_800102BC(-1, lbl_8036A5DC) * 2 + ay));
    p = fn_801057BC(saved);
    for (;;) {
        done = 0;
        buf[1] = 0;
        buf[0] = 0;
        buf[2] = 0;
        buf[1] = 0;
        while (done == 0) {
            ch = *p;
            if ((s8)ch != 0xA) {
                if ((s8)ch >= 0xA) {
                    goto copy_run;
                }
                if ((s8)ch != 0) {
                    goto copy_run;
                }
            }
            fn_800C9874(buf, 1, 0);
            done = 1;
            continue;
        copy_run:
            end = fn_80104970(p);
            do {
                fn_800C9874(buf, 1, (s8)*p);
                p += 1;
            } while (p != end);
        }
        fn_8001019C(ax, ay, 1, lbl_80276720 + 0x1D, fn_800C93EC(buf));
        ch = *p;
        if ((s32)ch == 0xA) {
            ay += 0x1A;
            fn_800C9A60(buf, -1);
            p += 1;
        } else if ((s8)ch != 0) {
            fn_800C9A60(buf, -1);
            p += 1;
        } else {
            fn_800C9A60(buf, -1);
            break;
        }
    }
    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
}

extern "C" void fn_801352F0(void *arg0) {
    void fn_80154A74(s32, s32, s16, s16, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80154A74(0, 0,
        (s16)(*(s16 *)((u8 *)arg0 + 0xE) - *(s16 *)((u8 *)arg0 + 0xA)),
        (s16)(*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0xC)),
        0xB3, 0x10);
}

#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus on
extern "C" void fn_8013547C(void *arg0) {
    void fn_80154BE4(s32, s32, s16, s16, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80154BE4(0, 0,
        (s16)(*(s16 *)((u8 *)arg0 + 0xE) - *(s16 *)((u8 *)arg0 + 0xA)),
        (s16)(*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0xC)),
        0xB3, 0x10);
}
#pragma cplusplus reset

s32 fn_80135664(void *arg0, void *arg1) {
    u8 fn_80105BC0(s32, u8);
    u8 (*temp_r12)(void *, s32);

    temp_r12 = M2C_FIELD(arg0, u8 (**)(void *, s32), 0x74);
    if (temp_r12 != NULL) {
        return temp_r12(arg1, M2C_FIELD(arg0, s32 *, 0x78)) != 0;
    }
    return fn_80105BC0(M2C_FIELD(arg0, s32 *, 0xCC) + 0x1BC, M2C_FIELD(arg1, u8 *, 0x18)) == 0;
}

void fn_801356D0(void **arg0, s32 arg1) {
    M2C_UNK __ptmf_scall(s32, s32);
    extern M2C_UNK lbl_80291860;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    void *temp_r30;
    void *var_r31;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
    sp14 = arg1;
    temp_r30 = arg0 + 0x40;
    sp8 = M2C_FIELD(&lbl_80291860, s32 *, 0);
    spC = M2C_FIELD(&lbl_80291860, s32 *, 4);
    sp10 = M2C_FIELD(&lbl_80291860, s32 *, 8);
    sp18 = M2C_FIELD(&lbl_80291860, s32 *, 0);
    var_r31 = M2C_FIELD(temp_r30, void **, 4);
    sp1C = M2C_FIELD(&lbl_80291860, s32 *, 4);
    sp20 = M2C_FIELD(&lbl_80291860, s32 *, 8);
    sp24 = arg1;
loop_2:
    if (var_r31 != temp_r30) {
        __ptmf_scall(M2C_FIELD(var_r31, s32 *, 8), sp14);
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        goto loop_2;
    }
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80135AC0(void *self, void *other) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
    };
    struct Sub {
        virtual void v0() = 0;
    };
    struct Node {
        Node *prev;
        Node *next;
        Sub *obj;
    };
    typedef void (Sub::*PTMF)(void *);
    struct Pair {
        PTMF ptmf;
        void *arg;
    };
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, f32);
    void fn_8008BF68(s16, s32, u8);
    void fn_8008AB7C(s32, s32, s16, s32, s32, s32, u8);
    extern u8 lbl_80291854[];
    extern f32 lbl_8036A5F4;
    extern f32 lbl_8036A5DC;
    extern f32 lbl_8036A5F8;
    u8 r31;
    s16 r30;
    s16 r29;
    s16 r28;
    Pair p[2];
    Node *it;
    Node *sent;
    u8 flag;
    void *ptr;

    ((Obj *)self)->v3();
    {
        s16 t56;
        s16 t4e;
        s16 t50;
        s32 quot;
        s16 t12;
        s16 t16;
        s16 t54;
        s16 t5c;
        s16 t5e;
        s16 q;
        s16 rem;

        t56 = *(s16 *)((u8 *)self + 0x56);
        t4e = *(s16 *)((u8 *)self + 0x4E);
        t50 = *(s16 *)((u8 *)self + 0x50);
        quot = t4e / t56;
        t12 = *(s16 *)((u8 *)self + 0x12);
        t16 = *(s16 *)((u8 *)self + 0x16);
        t54 = *(s16 *)((u8 *)self + 0x54);
        q = (s16)quot;
        r30 = (s16)((s16)(t16 - t12) / t56);
        t5c = *(s16 *)((u8 *)self + 0x5C);
        t5e = *(s16 *)((u8 *)self + 0x5E);
        r28 = (s16)(((s16)(q - t54) << 5) + t5e);
        rem = (s16)(t4e % t56);
        r29 = (s16)(r30 * rem + t5c);
        if (t50 < 0 || *(s16 *)((u8 *)self + 0x52) < 0) {
            *(s16 *)((u8 *)self + 0x50) = r29;
            *(s16 *)((u8 *)self + 0x52) = r28;
        } else {
            *(s16 *)((u8 *)self + 0x50) = (t50 + r29 + 1) >> 1;
            *(s16 *)((u8 *)self + 0x52) = (*(s16 *)((u8 *)self + 0x52) + r28 + 1) >> 1;
        }
    }
    if (*(u8 *)((u8 *)self + 0x4C) != 0 && *(u32 *)((u8 *)self + 0x68) != 0) {
        r31 = 0;
        flag = r31;
        if (*(u8 *)((u8 *)other + 0x2D) == 0) {
            if (*(u8 *)((u8 *)other + 0x2E) == 0) {
                flag = 1;
            }
        }
        if (flag) {
            if (*(u32 *)((u8 *)other + 0x34) != 0) {
                ptr = (*(void ***)((u8 *)other + 0x38))[2];
            } else {
                ptr = 0;
            }
            if (ptr == self) {
                r31 = 1;
            }
        }
        fn_8000A258();
        fn_80009C0C(lbl_8036A5F4);
        fn_8000A248();
        fn_8008BF68(*(s16 *)((u8 *)self + 0x50),
                    *(s16 *)((u8 *)self + 0x52) + (s16)((0x20 - fn_800102BC(-1, lbl_8036A5DC)) >> 1),
                    r31);
        fn_8000A258();
        fn_80009C0C(lbl_8036A5F8);
        fn_8000A248();
        fn_8008AB7C((r30 >> 1) + (r29 - *(s16 *)((u8 *)self + 0x5C)),
                    r28 + 0x10, r30, 0x18, 0x19, 0x4C, r31);
    }
    p[0].arg = other;
    sent = (Node *)((u8 *)self + 0x40);
    p[0].ptmf = *(PTMF *)lbl_80291854;
    p[1].ptmf = *(PTMF *)lbl_80291854;
    it = *(Node **)((u8 *)self + 0x44);
    p[1].arg = other;
    while (it != sent) {
        (it->obj->*p[0].ptmf)(p[0].arg);
        it = it->next;
    }
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus on
extern "C" void fn_801360FC(void *arg0) {
    void fn_8015BA88(s32, s32, s16, s16, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_8015BA88(0, 0,
        (s16)(*(s16 *)((u8 *)arg0 + 0xE) - *(s16 *)((u8 *)arg0 + 0xA)),
        (s16)(*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0xC)),
        0xB3, 0x10);
}
#pragma cplusplus reset

void fn_80136168(void *arg0, s16 arg1, s16 arg2, void *arg4, u8 arg5) {
    M2C_UNK fn_8000A258(u8);
    M2C_UNK fn_8000A174(s32, u16);
    M2C_UNK fn_8000A248(void);
    M2C_UNK fn_8001019C(s16, s16, s32, void *, s32);
    M2C_UNK fn_8005AC24(M2C_UNK *, s16, s16, u8);
    s32 fn_8010586C(void *);
    s32 *fn_8018D900(s32);
    extern M2C_UNK lbl_80276720;
    extern M2C_UNK lbl_802F0350;
    extern f32 lbl_8036A5E0;
    
    s32 sp4;
    s16 temp_r30;
    s16 temp_r29;
    s32 temp_r0;
    u16 temp_r4;
    s32 temp_r7;

    temp_r0 = arg5 != 0;
    fn_8000A258(arg5);
    fn_8000A174(0, (u16) ((s32) M2C_FIELD(arg0, s32 *, 0x34) | 0x13));
    fn_8000A248();
    temp_r30 = arg1 + 0x20;
    temp_r29 = arg2;
    temp_r7 = fn_8010586C(arg4);
    fn_8001019C(temp_r30, (s16) (temp_r29 + 4), temp_r0, &lbl_80276720 + 0x1D, temp_r7);
    fn_80007898(6);
    sp4 = *fn_8018D900(temp_r0);
    fn_80007668(&sp4);
    fn_80007220(1, lbl_8036A5E0);
    fn_80006B18(temp_r30, temp_r29 + 8, 0, 0, M2C_FIELD(arg4, u8 *, 0x1A));
    fn_80007884();
    fn_8005AC24(&lbl_802F0350, arg1, arg2, M2C_FIELD(arg4, u8 *, 0x19));
}

s32 fn_80136268(void *arg0, void *arg1) {
    u8 (*temp_r12)(void *, s32);

    temp_r12 = M2C_FIELD(arg0, u8 (**)(void *, s32), 0x74);
    if (temp_r12 != NULL) {
        return temp_r12(arg1, M2C_FIELD(arg0, s32 *, 0x78)) != 0;
    }
    return M2C_FIELD(arg1, u8 *, 0x19) != 0;
}

s32 fn_801362C8(void *arg0) {
    s16 *var_r4;
    s16 var_r3;

    if (*(u32 *)((char *)arg0 + 0x68) == 0U) {
        return 0;
    }
    var_r4 = (s16 *) *(u32 *)((char *)arg0 + 0x70);
    var_r3 = *(s16 *)((char *)arg0 + 0x4E);
    
    if (var_r3 >= 0) {
        do {
            if (var_r3 <= 0) {
                break;
            }
            var_r4 = (s16 *) var_r4[1];
            var_r3 -= 1;
        } while(1);
    } else {
        do {
            if (var_r3 >= 0) {
                break;
            }
            var_r4 = (s16 *) *var_r4;
            var_r3 += 1;
        } while(1);
    }
    return var_r4[2];
}

void fn_80136320(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *, s32, s16, s32, s16, s16);
    M2C_UNK spC;
    s16 spA;
    s16 sp8;
    s16 temp_r10;
    s16 temp_r11;
    s16 temp_r12;
    s16 temp_r9;
    s32 temp_r6;
    s32 temp_r8;

    temp_r12 = *(s16 *)((char *)arg1 + 0x56);
    temp_r9 = *(s16 *)((char *)arg1 + 0x4E);
    temp_r8 = temp_r9 / temp_r12;
    temp_r10 = *(s16 *)((char *)arg1 + 0x54);
    temp_r11 = *(s16 *)((char *)arg1 + 0x16) - *(s16 *)((char *)arg1 + 0x12);
    temp_r11 = (s16) temp_r11 / temp_r12;
    spA = ((s16) ((s16) temp_r8 - temp_r10) << 5) + *(s16 *)((char *)arg1 + 0x5E);
    temp_r6 = (s16) temp_r11 * (s16) (temp_r9 % temp_r12);
    sp8 = temp_r6 + *(s16 *)((char *)arg1 + 0x5C);
    *arg0 = *fn_8013F748(arg1, &spC, &sp8, temp_r6, (s16) temp_r11, temp_r8, temp_r9, temp_r10);
}

void *fn_801363C4(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_8029186C[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_8029186C;
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

void fn_80136430(void *arg0) {
    s16 r8;
    s16 r7;
    s16 r6;
    s16 r5;
    s16 r4;
    s16 r0;

    r8 = *(s16*) ((u8*) arg0 + 0xC);
    r4 = 5;
    r7 = *(s16*) ((u8*) arg0 + 0x10);
    r0 = 0xC;
    r6 = *(s16*) ((u8*) arg0 + 0xA);
    r5 = *(s16*) ((u8*) arg0 + 0xE);

    r7 = r8 - r7;
    r7 = (s16) r7;
    *(s16*) ((u8*) arg0 + 0x12) = r4;
    r4 = r6 - r5;
    r4 = (s16) r4;
    r5 = r7 - 0xC;
    *(s16*) ((u8*) arg0 + 0x14) = r0;
    r4 = r4 - 0x5;
    *(s16*) ((u8*) arg0 + 0x16) = r4;
    *(s16*) ((u8*) arg0 + 0x18) = r5;
}

s16 fn_80136474(void *arg0) {
    return (s16) ((s32) ((s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14)) - (M2C_FIELD(arg0, s16 *, 0x5E) * 2)) / 32);
}

void fn_801364A0(void) {
    extern u16 lbl_80276008[];
    
    s32 i;

    lbl_80276008[0x1C0] = 0;
    
    for (i = 0; i < 0xA; i++) {
        lbl_80276008[i * 2 + 0x1C0] = 0;
    }
}

s16 fn_801366E4(void *arg0) {
    return (s16) ((s32) ((s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14)) - M2C_FIELD(arg0, s16 *, 0x5E)) / 32);
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void *fn_80136AC4(void *arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    struct Sub {
        virtual void v0() = 0;
        virtual void v1(s32, s32, f32) = 0;
    };
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80292230[];
    extern u8 lbl_80291914[];
    extern u8 lbl_80295478[];
    extern u8 lbl_802918E0[];
    extern f32 lbl_8036A5DC;
    extern f32 lbl_8036A5E4;
    s32 temp_r31;
    void *temp_r30;
    void *temp_r29;
    s32 temp_r28;
    void *temp_r27;
    s32 flag;
    s32 a;
    s32 b;
    f32 f0;
    f32 f;

    temp_r30 = arg0;
    temp_r27 = temp_r30;
    temp_r31 = arg1;
    temp_r28 = 0;
    temp_r29 = (u8 *)temp_r30 + 0x4C;
    f0 = lbl_8036A5DC;
    *(void **)temp_r30 = lbl_8028FDB0;
    *(s32 *)((u8 *)temp_r27 + 4) = temp_r28;
    *(void **)temp_r27 = lbl_80292230;
    *(s16 *)((u8 *)temp_r27 + 8) = -1;
    *(s16 *)((u8 *)temp_r27 + 0xA) = arg2;
    *(s16 *)((u8 *)temp_r27 + 0xC) = arg3;
    *(s16 *)((u8 *)temp_r27 + 0xE) = (s16)((s16)arg2 + (s16)arg4);
    *(s16 *)((u8 *)temp_r27 + 0x10) = (s16)((s16)arg3 + (s16)arg5);
    flag = 2;
    *(s16 *)((u8 *)temp_r27 + 0x12) = (s16)temp_r28;
    *(s16 *)((u8 *)temp_r27 + 0x14) = (s16)temp_r28;
    *(s16 *)((u8 *)temp_r27 + 0x16) = arg4;
    *(s16 *)((u8 *)temp_r27 + 0x18) = arg5;
    *(s16 *)((u8 *)temp_r27 + 0x1A) = (s16)temp_r28;
    *(s16 *)((u8 *)temp_r27 + 0x1C) = (s16)temp_r28;
    *(u8 *)((u8 *)temp_r27 + 0x1E) = 0xFF;
    *(u8 *)((u8 *)temp_r27 + 0x1F) = 0xFF;
    *(u8 *)((u8 *)temp_r27 + 0x20) = 0xFF;
    *(u8 *)((u8 *)temp_r27 + 0x21) = 0xFF;
    *(s16 *)((u8 *)temp_r27 + 0x22) = arg6;
    *(s16 *)((u8 *)temp_r27 + 0x24) = (s16)temp_r28;
    *(f32 *)((u8 *)temp_r27 + 0x28) = f0;
    *(f32 *)((u8 *)temp_r27 + 0x2C) = f0;
    *(f32 *)((u8 *)temp_r27 + 0x30) = f0;
    *(s32 *)((u8 *)temp_r27 + 0x34) = temp_r28;
    *(s32 *)((u8 *)temp_r27 + 0x38) = temp_r28;
    *(void **)temp_r30 = lbl_80291914;
    *(s16 *)((u8 *)temp_r30 + 0x3C) = (s16)temp_r28;
    *(s16 *)((u8 *)temp_r30 + 0x3E) = (s16)temp_r28;
    *(s16 *)((u8 *)temp_r30 + 0x40) = (s16)temp_r28;
    *(s32 *)((u8 *)temp_r30 + 0x44) = temp_r31;
    *(s32 *)((u8 *)temp_r30 + 0x48) = temp_r28;
    *(void **)temp_r29 = lbl_80295478;
    *(s32 *)((u8 *)temp_r30 + 0x50) = temp_r28;
    if (temp_r31 == 0) {
        flag = temp_r28;
    }
    *(s32 *)((u8 *)temp_r29 + 8) = flag;
    b = 1;
    a = 0;
    f = lbl_8036A5DC;
    *(u8 *)((u8 *)temp_r29 + 0xC) = (u8)b;
    *(u8 *)((u8 *)temp_r29 + 0xD) = (u8)b;
    *(s16 *)((u8 *)temp_r29 + 0x14) = (s16)a;
    *(s16 *)((u8 *)temp_r29 + 0x16) = (s16)a;
    *(f32 *)((u8 *)temp_r29 + 0x18) = f;
    *(f32 *)((u8 *)temp_r29 + 0x1C) = f;
    *(u8 *)((u8 *)temp_r29 + 0x20) = 0xFF;
    *(u8 *)((u8 *)temp_r29 + 0x21) = 0xFF;
    *(u8 *)((u8 *)temp_r29 + 0x22) = 0xFF;
    *(u8 *)((u8 *)temp_r29 + 0x23) = 0xFF;
    *(f32 *)((u8 *)temp_r29 + 0x24) = lbl_8036A5E4;
    ((Sub *)temp_r29)->v1(a, b, f);
    *(void **)temp_r29 = lbl_802918E0;
    temp_r27 = (u8 *)temp_r30 + 0x74;
    *(u8 *)((u8 *)temp_r29 + 0xD) = 0;
    flag = 3;
    *(void **)temp_r27 = lbl_80295478;
    *(s32 *)((u8 *)temp_r30 + 0x78) = 0;
    if (temp_r31 == 0) {
        flag = 1;
    }
    *(s32 *)((u8 *)temp_r27 + 8) = flag;
    b = 1;
    a = 0;
    f = lbl_8036A5DC;
    *(u8 *)((u8 *)temp_r27 + 0xC) = (u8)b;
    *(u8 *)((u8 *)temp_r27 + 0xD) = (u8)b;
    *(s16 *)((u8 *)temp_r27 + 0x14) = (s16)a;
    *(s16 *)((u8 *)temp_r27 + 0x16) = (s16)a;
    *(f32 *)((u8 *)temp_r27 + 0x18) = f;
    *(f32 *)((u8 *)temp_r27 + 0x1C) = f;
    *(u8 *)((u8 *)temp_r27 + 0x20) = 0xFF;
    *(u8 *)((u8 *)temp_r27 + 0x21) = 0xFF;
    *(u8 *)((u8 *)temp_r27 + 0x22) = 0xFF;
    *(u8 *)((u8 *)temp_r27 + 0x23) = 0xFF;
    *(f32 *)((u8 *)temp_r27 + 0x24) = lbl_8036A5E4;
    ((Sub *)temp_r27)->v1(a, b, f);
    *(void **)temp_r27 = lbl_802918E0;
    *(u8 *)((u8 *)temp_r27 + 0xD) = 0;
    return temp_r30;
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

s32 fn_80136CD4(void *arg0) {
    s32 temp_r0;
    void *temp_r31;
    void *var_r3;

    var_r3 = arg0;
    temp_r0 = M2C_FIELD(var_r3, s32 *, 8);
    temp_r31 = var_r3;
    if (temp_r0 < 2) {
        if (temp_r0 < 0) {

        } else {
            var_r3 = M2C_FIELD(M2C_FIELD(var_r3, void **, 0), void *(**)(), 0x1C)();
        }
    } else if (temp_r0 < 4) {
        var_r3 = M2C_FIELD(M2C_FIELD(var_r3, void **, 0), void *(**)(), 0x18)();
    }
    return (s32) (M2C_FIELD(temp_r31, f32 *, 0x18) * (f32) (s16) var_r3);
}

s32 fn_80136D78(void) {
    return 0x10;
}

s32 fn_80136D80(void) {
    return 0x20;
}

s32 fn_80136E68(void) {
    return 1;
}

s32 fn_80136E70(void) {
    return 8;
}

s32 fn_80136E78(void) {
    return 0x10;
}

s32 fn_80136F24(void) {
    return 6;
}

void fn_80136F2C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    M2C_UNK fn_800C428C();
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r5;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_4:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        *arg2 = M2C_FIELD(temp_r3_2, void ***, 4);
        fn_800C428C();
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void fn_80136FDC(void *arg0) {
    void (**vptr)(void) = (void (**)(void))*(void***)arg0;
    vptr[4]();
    fn_8008B464(*(s32*)((char*)arg0 + 0x3C), 0, 0);
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80137024(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(s32) = 0;
        u8 pad4[6];
        s16 unkA;
        s16 unkC;
        s16 unkE;
        s16 unk10;
        u8 pad12[0x22];
        u32 unk34;
        u8 pad38[4];
        s32 unk3C;
    };
    void fn_801546B0(s32, s32, s16, s16, s32, s16);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_80092ADC(s32, u8);
    u8 *fn_8001CDE4(void);
    u8 fn_80105BC0(void *, s32);
    void *fn_8000E0E4(void *);
    u8 fn_8005A310(void *, u8, s32);
    void fn_8001E5D0(u8, s32);
    s32 fn_800102BC(s32, f32);
    void fn_8005AC24(void *, s16, s16, u8);
    void fn_8000A174(s32, u16);
    void fn_8001019C(s16, s16, s32, void *, ...);
    s8 fn_8003A398(s32);
    s8 fn_8003A1E0(s32);
    s8 fn_8003A5B4(s32);
    extern f32 lbl_8036A61C;
    extern f32 lbl_8036A620;
    extern s32 lbl_8036A608;
    extern s32 lbl_8036A60C;
    extern s32 lbl_8036A610;
    extern s32 lbl_8036A614;
    extern u8 lbl_802767E0[];
    extern u8 lbl_802F0308[];
    s32 coords[4];
    Obj *self;
    s32 idx;
    u8 idx_u8;
    s32 unit;
    u32 flags;
    s32 slot;
    u8 *str;
    s32 slot_ext;
    s16 x;

    self = (Obj *)arg0;
    idx = arg1;
    self->v2();
    fn_801546B0(0, 0, (s16)(self->unkE - self->unkA), (s16)(self->unk10 - self->unkC), 0x10, self->unkA);
    self->v3(idx);
    fn_8000A258();
    fn_80009C0C(lbl_8036A61C);
    fn_8000A248();
    slot = 0;
    idx = 0;
    do {
        coords[0] = lbl_8036A608;
        idx_u8 = (u8)idx;
        coords[1] = lbl_8036A60C;
        unit = self->unk3C;
        coords[2] = lbl_8036A610;
        coords[3] = lbl_8036A614;
        flags = self->unk34;
        fn_80092ADC(unit, idx_u8);
        str = fn_8001CDE4();
        if ((s32)*str != 0x2D) {
            s16 *row;
            slot_ext = (s8)slot;
            row = (s16 *)((u8 *)coords + (idx & 0));
            slot = row[slot_ext + 4];
            x = row[slot_ext];
            if ((s8)idx == 7) {
                if (fn_80105BC0((u8 *)unit + 0x1BC, 0x23) != 0) {
                    unit = 0x53;
                    fn_8000E0E4(&lbl_802767E0[0x3B + (idx - 7)]);
                    goto after_icon;
                }
            }
            unit = (u8)fn_8005A310(lbl_802F0308, idx_u8, 0);
            fn_8001E5D0(idx_u8, 0);
        after_icon:
            fn_8005AC24(lbl_802F0308, x, (s16)((s16)slot + ((fn_800102BC(-1, lbl_8036A620) - 0x18) >> 1)), (u8)unit);
            fn_8000A258();
            fn_8000A174(0, (u16)(flags | 3));
            fn_8000A248();
            fn_8001019C((s16)(x + 0x20), (s16)slot, 2, str);
            slot = (s8)(slot_ext + 1);
        }
        idx += 1;
    } while (idx < 8);
    fn_8000A258();
    fn_8000A174(0, (u16)(self->unk34 | 3));
    fn_8000A248();
    fn_8001019C(0xE0, 0x12, 2, lbl_802767E0 + 0x44, fn_8003A398(self->unk3C));
    fn_8001019C(0xE0, 0x34, 2, lbl_802767E0 + 0x44, fn_8003A1E0(self->unk3C));
    fn_8001019C(0xE0, 0x54, 2, lbl_802767E0 + 0x44, fn_8003A5B4(self->unk3C));
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

extern f32 lbl_8036A620;
extern f32 lbl_8036A628;
extern f64 lbl_8036A630;
extern u8 lbl_802767E0[192];
extern void fn_8000A258(void);
extern s32 fn_8000A174(s32, u16);
extern void fn_8000A248(void);
extern void *fn_8000E0E4(s32);
extern s32 fn_8001003C(s16, s16, u8, u8, u8, void*, f32, f32, f32);
extern s32 fn_8007CCE8(s32, f32, f32);
void fn_801377BC(void *arg0, s16 arg1, s16 arg2, s32 arg3, s8 arg4, s8 arg5, s8 arg6) {
    u16 temp_r0;
    
    fn_8000A258();
    temp_r0 = *(u32*)((char*)arg0 + 0x34) | 3;
    fn_8000A174(0, temp_r0);
    fn_8000A248();
    
    // Call to fn_8001003C with correct arguments - first call
    fn_8001003C(arg1, arg2, 6, 1, 0, fn_8000E0E4(arg3), lbl_8036A620, lbl_8036A628, lbl_8036A630);
    
    // Second call with conditions
    if (arg4 < arg6) {
        fn_8001003C((arg1 + 0x2F), arg2, 1, 1, 0, &lbl_802767E0 + 0x44, arg4, lbl_8036A620, lbl_8036A628);
    } else {
        fn_8001003C((arg1 + 0x2F), arg2, 0x22, 1, 0, &lbl_802767E0 + 0x44, arg4, lbl_8036A620, lbl_8036A628);
    }
    
    fn_8007CCE8((arg5 - arg4), (f32)(arg1 + 0x46), (f32)(arg2 + 4));
}

void fn_801378E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

void *fn_801378F0(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_802919DC[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_802919DC;
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

void fn_80137EA0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

void *fn_80137EA8(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80291A0C[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80291A0C;
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

void fn_80138808(void *arg0, s32 arg1) {
    M2C_UNK fn_800506E0(s32, M2C_UNK, void *);
    M2C_UNK fn_8006140C(void *, void *);
    M2C_UNK fn_800616A0();
    void *fn_80061870();
    s32 fn_800639B4();
    s32 temp_r31;
    void *temp_r4;
    void *temp_r5;

    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x3C);
    if ((void *) M2C_FIELD(arg0, void **, 0x50) != NULL) {
        fn_800616A0();
    }
    M2C_FIELD(arg0, void **, 0x50) = fn_80061870();
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s32 *, 4) = (s32) (temp_r31 + 0x1C);
    temp_r5 = M2C_FIELD(arg0, void **, 0x50);
    M2C_FIELD(temp_r5, s32 *, 0) = (s32) (M2C_FIELD(temp_r5, s32 *, 0) | 0x50020000 | 0x8400);
    fn_800506E0(temp_r31, 0, temp_r5);
    temp_r4 = M2C_FIELD(arg0, void **, 0x50);
    M2C_FIELD(temp_r4, s32 *, 0x44) = fn_800639B4();
    fn_8006140C(M2C_FIELD(arg0, void **, 0x50), temp_r4);
}

void fn_80138898(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) (M2C_FIELD(arg0, s16 *, 0xA) + 0x108);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0xC) + 0x55);
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 7;
    M2C_FIELD(arg0, s16 *, 0x16) = 0x108;
    M2C_FIELD(arg0, s16 *, 0x18) = 0x4F;
}

void fn_801388D4(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

s32 fn_80138908(void) {
    f32 fn_8013893C();
    extern f32 lbl_8036A618;
    return (s32) (lbl_8036A618 * fn_8013893C());
}

extern s32 fn_80138AB8(void *);
f32 fn_8013893C(void *arg0) {
    f32 var_f23;
    void *temp_r4;
    
    if (arg0 == NULL) {
        return 0.0f;
    }
    
    temp_r4 = *(void **)((u8 *)arg0 + 0x38);
    var_f23 = *(f32 *)((u8 *)arg0 + 0x2C);
    
    if (temp_r4 != NULL) {
        void *temp_r3 = *(void **)((u8 *)temp_r4 + 0x38);
        f32 var_f24 = *(f32 *)((u8 *)temp_r4 + 0x2C);
        
        if (temp_r3 != NULL) {
            if (fn_80138AB8(temp_r3) != 0) {
                fn_80138AB8(temp_r3);
                var_f24 *= fn_8013893C(temp_r3);
            }
            var_f23 *= var_f24;
        }
    }
    
    return var_f23;
}

s32 fn_80138AB8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void *fn_80138C3C(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80291988[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80291988;
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

void *fn_80138CA8(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_802919B0[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_802919B0;
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

void fn_80138D14(void *arg0) {
    s16 h = M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xc);
    s16 w = M2C_FIELD(arg0, s16 *, 0xe) - M2C_FIELD(arg0, s16 *, 0xa);

    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
    M2C_FIELD(arg0, s16 *, 0x16) = w;
    M2C_FIELD(arg0, s16 *, 0x18) = h;
}

void fn_80138D44(void *arg0) {
    s16 *ptr = (s16 *)arg0;
    ptr[0x12/2] = 3;
    ptr[0x14/2] = 5;
    ptr[0x16/2] = (s16) ((s16) (ptr[0xE/2] - ptr[0xA/2]) - 3);
    ptr[0x18/2] = (s16) ((s16) (ptr[0x10/2] - ptr[0xC/2]) - 5);
}

void fn_80138D88(void *arg0) {
    s16 var_r5;
    s16 var_r4;
    s16 var_r6;
    s16 var_r7;
    s16 var_r8;

    var_r8 = *(s16 *)((u8 *)arg0 + 0xC);
    var_r7 = *(s16 *)((u8 *)arg0 + 0x10);
    var_r6 = *(s16 *)((u8 *)arg0 + 0xA);
    var_r5 = *(s16 *)((u8 *)arg0 + 0xE);

    var_r7 = var_r7 - var_r8;
    var_r7 = (s16)var_r7;
    *(s16 *)((u8 *)arg0 + 0x12) = 3;
    var_r4 = var_r5 - var_r6;
    var_r4 = (s16)var_r4;
    var_r5 = var_r7 - 5;
    *(s16 *)((u8 *)arg0 + 0x14) = 5;
    var_r4 = var_r4 - 3;
    *(s16 *)((u8 *)arg0 + 0x16) = var_r4;
    *(s16 *)((u8 *)arg0 + 0x18) = var_r5;
}

void *fn_80138DCC(void *arg0, s16 arg1) {
    void fn_800616A0(void *);
    M2C_UNK fn_800C428C(void *);
    extern u16 lbl_8028FDB0[];
    extern u8 lbl_80291A3C[];
    extern u16 lbl_80292230[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80291A3C;
        if (M2C_FIELD(arg0, void **, 0x50) != NULL) {
            fn_800616A0(M2C_FIELD(arg0, void **, 0x50));
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80292230;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80138E58(void *self, void *other) {
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
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16(s16, s16, s32, s16, u8) = 0;
        virtual void v17() = 0;
        virtual void v18(void *) = 0;
    };
    void *fn_80009E44(void *);
    void fn_80202574(void *, void *, f32, f32, f32);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, f32);
    void fn_8008BF68(s16, s32, u8);
    void fn_80009B98(void);
    void fn_80009B80(s32);
    extern f32 lbl_8036A668;
    extern f32 lbl_8036A66C;
    extern f32 lbl_8036A670;
    extern f32 lbl_8036A674;
    extern f32 lbl_8036A678;
    s16 t5a;
    u8 r30;
    s32 r29;
    s16 r28;
    s16 r27;
    s16 t24;
    u8 flag;
    void *ptr;
    u8 sp8[8];
    void *tmp;

    ((Obj *)self)->v3();
    tmp = fn_80009E44(sp8);
    fn_80202574(tmp, tmp, lbl_8036A668, lbl_8036A668, lbl_8036A66C);
    r29 = ((Obj *)self)->v11();
    {
        s16 t4e = *(s16 *)((u8 *)self + 0x4E);
        s16 t58 = *(s16 *)((u8 *)self + 0x58);
        s16 t62 = *(s16 *)((u8 *)self + 0x62);
        s32 quot = t4e / t58;
        s16 t52 = *(s16 *)((u8 *)self + 0x52);
        s16 t62m = t62 - 0x20;
        s16 t56 = *(s16 *)((u8 *)self + 0x56);
        t5a = *(s16 *)((u8 *)self + 0x5A);
        s16 t64 = *(s16 *)((u8 *)self + 0x64);
        r28 = (s16)((r29 * (s16)(t4e - quot * t58)) + t62m);
        r27 = (s16)((t5a * (s16)((s16)quot - t56)) + t64);
        if (t52 < 0 || *(s16 *)((u8 *)self + 0x54) < 0) {
            *(s16 *)((u8 *)self + 0x52) = r28;
            *(s16 *)((u8 *)self + 0x54) = r27;
        } else {
            *(s16 *)((u8 *)self + 0x52) = (t52 + r28 + 1) >> 1;
            *(s16 *)((u8 *)self + 0x54) = (*(s16 *)((u8 *)self + 0x54) + r27 + 1) >> 1;
        }
    }
    if (*(u8 *)((u8 *)self + 0x4C) != 0 && *(u32 *)((u8 *)self + 0x70) != 0) {
        u8 b1 = *(u8 *)((u8 *)other + 0x2D);
        r30 = 0;
        flag = r30;
        if (b1 == 0) {
            if (*(u8 *)((u8 *)other + 0x2E) == 0) {
                flag = 1;
            }
        }
        if (flag) {
            if (*(u32 *)((u8 *)other + 0x34) != 0) {
                ptr = (*(void ***)((u8 *)other + 0x38))[2];
            } else {
                ptr = 0;
            }
            if (ptr == self) {
                r30 = 1;
            }
        }
        fn_8000A258();
        fn_80009C0C(lbl_8036A670);
        fn_8000A248();
        t24 = *(s16 *)((u8 *)self + 0x5A);
#pragma optimization_level 2
        {
            s32 h = fn_800102BC(-1, lbl_8036A674);
            s16 xpos = *(s16 *)((u8 *)self + 0x52);
            h = ((s16)t24 - h) >> 1;
            s16 ypos = *(s16 *)((u8 *)self + 0x54);
            fn_8008BF68((s16)(xpos + 0x20), ypos + h, r30);
        }
#pragma optimization_level reset
        fn_8000A258();
        fn_80009C0C(lbl_8036A678);
        fn_8000A248();
        ((Obj *)self)->v16((s16)((r28 - *(s16 *)((u8 *)self + 0x62)) + 0x20), r27, r29, t5a, r30);
    }
    ((Obj *)self)->v18(other);
    fn_8000A258();
    fn_80009B98();
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus on
extern "C" void fn_80009C0C(f32);
extern "C" void fn_8001019C(s16, s16, u8, char *, ...);
extern "C" s32 fn_800102BC(s32, f32);
extern "C" s32 fn_800C3D48(void *);
extern "C" u8 fn_8014D8DC(void *);
extern "C" void fn_80155F20(s32, s32, s16, s16, s32, s32);
extern "C" void fn_80161AA8(s16, s16, s16, s16, s32, u8 *);
extern "C" void fn_80139884(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(s32) = 0;
        s16 GetLineHeight() { return M2C_FIELD(this, s16 *, 0x5A); }
    };
    extern u8 lbl_802768A0[];
    extern u8 lbl_803200AC[];
    extern u8 lbl_80330708[];
    extern f32 lbl_8036A674;
    extern f32 lbl_8036A6A0;
    u8 color[4];
    s16 width;
    s16 margin;
    s16 height;
    s16 lineHeight;
    u8 flag;
    s16 y;
    s32 shadow;

    ((Obj *)arg0)->v2();
    fn_80155F20(0, 0, (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)), (s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)), 0xFF, 0x10);
    ((Obj *)arg0)->v3(arg1);
    width = M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12);
    margin = M2C_FIELD(arg0, s16 *, 0x62);
    height = M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14);
    color[0] = 0xFF;
    color[1] = 0xFF;
    color[2] = 0xFF;
    color[3] = 0x33;
    fn_80161AA8(margin, height, margin + (s16) (width - margin * 2), height, 0x10, color);
    fn_8000A258();
    fn_8000A174(0, M2C_FIELD(arg0, s32 *, 0x34) | 0x13);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036A6A0);
    fn_8000A248();
    lineHeight = ((Obj *)arg0)->GetLineHeight();
    y = (lineHeight - fn_800102BC(-1, lbl_8036A674)) >> 1;
    flag = 0;
    if (!fn_8014D8DC(lbl_80330708) || fn_800C3D48(lbl_803200AC) < 0) {
        flag = 1;
    }
    shadow = 6;
    if (flag) {
        shadow = 0;
    }
    fn_8001019C(margin, height + y, shadow, (char *) lbl_802768A0 + 0x39, fn_8000E0E4((s32) lbl_802768A0 + 0x3E));
}
#pragma cplusplus reset

void *fn_80139A50(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x1D8];
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80139B3C(void *self, void *other) {
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
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16(s16, s16, s32, s16, u8) = 0;
        virtual void v17() = 0;
        virtual void v18(void *) = 0;
    };
    extern void fn_8000A258(void);
    extern void fn_80009C0C(f32);
    extern void fn_8000A248(void);
    extern s32 fn_800102BC(s32, f32);
    extern void fn_8008BF68(s16, s32, u8);
    extern void fn_80009B98(void);
    extern void fn_80009B80(s32);
    extern f32 lbl_8036A670;
    extern f32 lbl_8036A674;
    extern f32 lbl_8036A678;
    extern f32 lbl_8036A6A4;
    extern f32 lbl_8036A6A8;
    s16 t5a;
    u8 r30;
    s32 r29;
    s16 r28;
    s16 r27;
    s16 t24;
    u8 flag;
    void *ptr;
    f32 f;
    s16 x;
    s16 y;

    ((Obj *)self)->v3();
    r29 = ((Obj *)self)->v11();
    {
        s16 t4e = *(s16 *)((u8 *)self + 0x4E);
        s16 t58 = *(s16 *)((u8 *)self + 0x58);
        s16 t52 = *(s16 *)((u8 *)self + 0x52);
        s32 quot = t4e / t58;
        s16 t56 = *(s16 *)((u8 *)self + 0x56);
        t5a = *(s16 *)((u8 *)self + 0x5A);
        s16 t62 = *(s16 *)((u8 *)self + 0x62);
        s16 t64 = *(s16 *)((u8 *)self + 0x64);
        r28 = (s16)((r29 * (s16)(t4e - quot * t58)) + t62);
        r27 = (s16)((t5a * (s16)((s16)quot - t56)) + t64);
        if (t52 < 0 || *(s16 *)((u8 *)self + 0x54) < 0) {
            *(s16 *)((u8 *)self + 0x52) = r28;
            *(s16 *)((u8 *)self + 0x54) = r27;
        } else {
            *(s16 *)((u8 *)self + 0x52) = (t52 + r28 + 1) >> 1;
            *(s16 *)((u8 *)self + 0x54) = (*(s16 *)((u8 *)self + 0x54) + r27 + 1) >> 1;
        }
    }
    if (*(u8 *)((u8 *)self + 0x4C) != 0 && *(u32 *)((u8 *)self + 0x70) != 0) {
        u8 b1 = *(u8 *)((u8 *)other + 0x2D);
        r30 = 0;
        flag = r30;
        if (b1 == 0) {
            if (*(u8 *)((u8 *)other + 0x2E) == 0) {
                flag = 1;
            }
        }
        if (flag) {
            if (*(u32 *)((u8 *)other + 0x34) != 0) {
                ptr = (*(void ***)((u8 *)other + 0x38))[2];
            } else {
                ptr = 0;
            }
            if (ptr == self) {
                r30 = 1;
            }
        }
        fn_8000A258();
        if (r30 != 0) {
            f = lbl_8036A6A4;
        } else {
            f = lbl_8036A670;
        }
        fn_80009C0C(f);
        fn_8000A248();
        t24 = *(s16 *)((u8 *)self + 0x5A);
        x = (s16)fn_800102BC(-1, lbl_8036A674);
        y = (s16)((t24 - x) >> 1);
        fn_8008BF68(*(s16 *)((u8 *)self + 0x52), *(s16 *)((u8 *)self + 0x54) + y, r30);
        fn_8000A258();
        if (r30 != 0) {
            f = lbl_8036A6A8;
        } else {
            f = lbl_8036A678;
        }
        fn_80009C0C(f);
        fn_8000A248();
        ((Obj *)self)->v16((s16)(r28 - *(s16 *)((u8 *)self + 0x62)), r27, r29, t5a, r30);
    }
    ((Obj *)self)->v18(other);
    fn_8000A258();
    fn_80009B98();
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

void fn_80139D60(void *arg0, void *arg1) {
    u8 *ptr = (u8*)arg1;
    
    if (*(u8*)(ptr + 0x17) & 1) {
        if (*(u8*)(ptr + 0x17) & 2) {
            *(u8*)(ptr + 0x54) |= 0x10;
        } else {
            *(u8*)(ptr + 0x54) |= 0x20;
        }
    } else {
        *(u8*)(ptr + 0x54) = 0x0;
    }

    if (*(u8*)(ptr + 0x17) & 8) {
        *(u8*)(ptr + 0x54) |= 0x40;
    } else {
        *(u8*)(ptr + 0x54) |= 0x80;
    }
    
    *(u8*)(ptr + 0x5C) = 2;
}

#pragma cplusplus on
extern "C" void fn_80139E5C(void *arg0) {
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

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_8013A39C(void *self, void *other) {
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
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16(s16, s16, s32, s16, u8) = 0;
        virtual void v17() = 0;
        virtual void v18(void *) = 0;
    };
    extern void fn_8000A258(void);
    extern void fn_80009C0C(f32);
    extern void fn_8000A248(void);
    extern s32 fn_800102BC(s32, f32);
    extern void fn_8008BF68(s16, s32, u8);
    extern void fn_80009B98(void);
    extern void fn_80009B80(s32);
    extern f32 lbl_8036A670;
    extern f32 lbl_8036A674;
    extern f32 lbl_8036A678;
    s16 t5a;
    u8 r30;
    s32 r29;
    s16 r28;
    s16 r27;
    s16 t24;
    u8 flag;
    void *ptr;

    ((Obj *)self)->v3();
    r29 = ((Obj *)self)->v11();
    {
        s16 t4e = *(s16 *)((u8 *)self + 0x4E);
        s16 t58 = *(s16 *)((u8 *)self + 0x58);
        s16 t52 = *(s16 *)((u8 *)self + 0x52);
        s32 quot = t4e / t58;
        s16 t56 = *(s16 *)((u8 *)self + 0x56);
        t5a = *(s16 *)((u8 *)self + 0x5A);
        s16 t62 = *(s16 *)((u8 *)self + 0x62);
        s16 t64 = *(s16 *)((u8 *)self + 0x64);
        r28 = (s16)(r29 * (s16)(t4e - quot * t58) + t62);
        r27 = (s16)(t5a * (s16)((s16)quot - t56) + t64);
        if (t52 < 0 || *(s16 *)((u8 *)self + 0x54) < 0) {
            *(s16 *)((u8 *)self + 0x52) = r28;
            *(s16 *)((u8 *)self + 0x54) = r27;
        } else {
            *(s16 *)((u8 *)self + 0x52) = (t52 + r28 + 1) >> 1;
            *(s16 *)((u8 *)self + 0x54) = (*(s16 *)((u8 *)self + 0x54) + r27 + 1) >> 1;
        }
    }
    if (*(u8 *)((u8 *)self + 0x4C) != 0 && *(u32 *)((u8 *)self + 0x70) != 0) {
        u8 b1 = *(u8 *)((u8 *)other + 0x2D);
        r30 = 0;
        flag = r30;
        if (b1 == 0) {
            if (*(u8 *)((u8 *)other + 0x2E) == 0) {
                flag = 1;
            }
        }
        if (flag) {
            if (*(u32 *)((u8 *)other + 0x34) != 0) {
                ptr = (*(void ***)((u8 *)other + 0x38))[2];
            } else {
                ptr = 0;
            }
            if (ptr == self) {
                r30 = 1;
            }
        }
        fn_8000A258();
        fn_80009C0C(lbl_8036A670);
        fn_8000A248();
        t24 = *(s16 *)((u8 *)self + 0x5A);
        fn_8008BF68(*(s16 *)((u8 *)self + 0x52),
                    *(s16 *)((u8 *)self + 0x54) + ((s16)(((s16)t24 - fn_800102BC(-1, lbl_8036A674)) >> 1)),
                    r30);
        fn_8000A258();
        fn_80009C0C(lbl_8036A678);
        fn_8000A248();
        ((Obj *)self)->v16((s16)(r28 - *(s16 *)((u8 *)self + 0x62)), r27, r29, t5a, r30);
    }
    ((Obj *)self)->v18(other);
    fn_8000A258();
    fn_80009B98();
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus reset

void fn_8013A9F4(void *arg0) {
    M2C_UNK fn_80155F20(M2C_UNK, M2C_UNK, s16, s16, M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x10)();
    fn_80155F20(0, 0, (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)), (s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)), 0xFF, 0x10);
}

void fn_8013AA60(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    fn_8008AB7C(arg1 + (arg3 >> 1), arg2 + (arg4 >> 1), arg3, 0x18, 0x19, 0x4C, arg5);
}

void fn_8013AAB4(void *arg0, s32 arg1, s16 arg2, void *arg4, u8 arg5) {
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8001019C(s32, s16, s32, void *, s32);
    s32 fn_800102BC(M2C_UNK, f32);
    s32 fn_800A8A88(s32);
    M2C_UNK fn_80152010(s16, s16, s16, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_802768A0;
    extern f32 lbl_8036A674;
    extern f32 lbl_8036A6B0;
    extern f32 lbl_8036A6B4;
    s16 temp_r28;
    s16 temp_r31;
    s32 temp_r26;
    s32 var_r27;

    var_r27 = arg5 != 0;
    if ((u32) ((M2C_FIELD(arg4, s32 *, 0x1A0) & 0x010000DC) + 0xFF000000) == 0xDCU) {
        var_r27 = 0;
    }
    fn_8000A258();
    fn_8000A174(0, (u16) (M2C_FIELD(arg0, s32 *, 0x34) | 0x13));
    fn_8000A248();
    temp_r28 = M2C_FIELD(arg0, s16 *, 0x5A);
    temp_r26 = fn_800A8A88(M2C_FIELD(arg4, s32 *, 0x188));
    fn_8001019C(arg1, (s16) (arg2 + (s16) ((s32) (temp_r28 - fn_800102BC(-1, lbl_8036A674)) >> 1)), var_r27, &lbl_802768A0 + 0x39, temp_r26);
    fn_8000A258();
    fn_80009C0C(lbl_8036A6B0);
    fn_8000A248();
    temp_r31 = M2C_FIELD(arg0, s16 *, 0x5A);
    fn_80152010((s16) (arg1 - 6), (s16) (arg2 + (temp_r31 >> 1)), (s16) ((M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x34)(arg0) - (M2C_FIELD(arg0, s16 *, 0x62) * 2)) + 6), 0xFF, 0x10);
    fn_8000A258();
    fn_80009C0C(lbl_8036A6B4);
    fn_8000A248();
}

s32 fn_8013AC00(void *arg0, s32 arg1) {
    u8 (*temp_r12)(s32, s32);

    temp_r12 = M2C_FIELD(arg0, u8 (**)(s32, s32), 0x7C);
    if (temp_r12 != NULL) {
        return temp_r12(arg1, M2C_FIELD(arg0, s32 *, 0x80)) != 0;
    }
    return 1;
}

void fn_8013AC54(void *arg0) {
    M2C_UNK arg0_field_0x48;
    s32 arg0_field_0x54 = *(s32 *)((char *)arg0 + 0x54);
    
    arg0_field_0x48 = *(M2C_UNK *)((char *)arg0 + 0x48);
    if (arg0_field_0x54 != 0) {
        *(s32 *)arg0 = *(s32 *)((char *)arg0 + 0x50);
        *(s32 *)((char *)arg0 + 0x50) = arg0_field_0x54;
        *(M2C_UNK *)((char *)arg0 + 0x48) = arg0_field_0x48;
    }
}

void fn_8013ACC4(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *, s32, s16, s16, s16, s16);
    M2C_UNK spC;
    s16 spA;
    s16 sp8;
    s16 temp_r10;
    s16 temp_r6;
    s16 temp_r7;
    s16 temp_r8;
    s16 temp_r9;
    s32 temp_r6_2;

    temp_r10 = M2C_FIELD(arg1, s16 *, 0x4E);
    temp_r6 = M2C_FIELD(arg1, s16 *, 0x58);
    temp_r8 = M2C_FIELD(arg1, s16 *, 0x5A);
    temp_r7 = M2C_FIELD(arg1, s16 *, 0x64);
    temp_r9 = (s16) (temp_r10 / temp_r6) - M2C_FIELD(arg1, s16 *, 0x56);
    temp_r6_2 = temp_r8 * temp_r9;
    sp8 = (M2C_FIELD(M2C_FIELD(arg1, void **, 0), s32 (**)(void *), 0x34)(arg1) * (s16) (M2C_FIELD(arg1, s16 *, 0x4E) % temp_r6)) + M2C_FIELD(arg1, s16 *, 0x62);
    spA = temp_r6_2 + temp_r7;
    *arg0 = *fn_8013F748(arg1, &spC, &sp8, temp_r6_2, temp_r7, temp_r8, temp_r9, temp_r10);
}

#pragma cplusplus on
extern "C" void fn_8013AF08(void *arg0, s16 arg1) {
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
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual s16 v13() = 0;
    };
    typedef struct {
        u8 pad0[0x4E];
        s16 unk4E;
        s16 unk50;
        s16 unk52;
        s16 unk54;
        s16 unk56;
        s16 unk58;
        u8 pad5A[0x16];
        s32 unk70;
    } Unk8013AF08;
    Unk8013AF08 *obj;
    s16 var_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 t;

    obj = (Unk8013AF08 *)arg0;
    if (arg1 != obj->unk4E) {
        var_r3 = ((Obj *)arg0)->v13();
        temp_r5 = obj->unk70;
        temp_r4 = obj->unk58;
        temp_r7 = (s16) temp_r5;
        temp_r6 = temp_r4 - 1;
        temp_r8 = (s16) ((temp_r7 + temp_r6) / temp_r4);
        if ((arg1 < 0) || (temp_r7 <= arg1)) {
            return;
        }
        if (var_r3 > temp_r8) {
            var_r3 = temp_r8;
        }
        if (arg1 < obj->unk4E) {
            do {
                obj->unk4E = (s16) (obj->unk4E - 1);
                if (obj->unk4E > temp_r6) {
                    if ((s16) (obj->unk4E / temp_r4) - obj->unk56 == 0) {
                        obj->unk56 = (s16) (obj->unk56 - 1);
                    }
                }
            } while (arg1 < obj->unk4E);
        } else {
            temp_r6 = temp_r7 - 1;
            temp_r7 = temp_r8 - 1;
            temp_r8 = var_r3 - 1;
            do {
                obj->unk4E = (s16) (obj->unk4E + 1);
                if (obj->unk4E > temp_r6) {
                    obj->unk4E = (s16) temp_r6;
                }
                t = (s16) (obj->unk4E / temp_r4);
                if (t < temp_r7) {
                    if (temp_r8 == t - (s16) obj->unk56) {
                        obj->unk56 = (s16) (obj->unk56 + 1);
                    }
                }
            } while (obj->unk4E < arg1);
        }
        obj->unk52 = -1;
        obj->unk54 = -1;
    }
}
#pragma cplusplus reset

void fn_8013B064(s32 arg0, s32 arg1) {
    void *fn_80061870();
    s32 fn_800639B4();
    void fn_800506E0(s32, s32, void *);
    void fn_8006140C(void *, void *);
    void fn_800616A0();
    void fn_8013BAD4(void *, s32, s32 *, s32 *);

    void *sp14;
    s32 sp10;
    s32 spC;
    void *sp8;

    void *temp_r3 = fn_80061870();
    *(s32 *)((char *)temp_r3 + 4) = arg1 + 0x1C;
    *(s32 *)temp_r3 = (*(s32 *)temp_r3 | 0x50020000 | 0x8400);
    fn_800506E0(arg1, 0, temp_r3);
    *(s32 *)((char *)temp_r3 + 0x44) = fn_800639B4();
    fn_8006140C(temp_r3, temp_r3);
    spC = arg0 + 0x74;
    fn_8013BAD4(&sp8, arg0 + 0x70, &spC, &sp10);
    if (temp_r3 != NULL) {
        fn_800616A0();
    }
}

void fn_8013B120(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

void fn_8013B254(void *arg0) {
    s16 temp_r3;
    s16 temp_r5;
    void *temp_r6;

    M2C_FIELD(arg0, s16 *, 0x64) = (s16) (M2C_FIELD(arg0, s16 *, 0x64) + 8);
    M2C_FIELD(arg0, s16 *, 0x92) = (s16) (((s16) (M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)) >> 1) - 0x20);
    M2C_FIELD(arg0, s16 *, 0x94) = 0;
    M2C_FIELD(arg0, s16 *, 0x96) = 0;
    M2C_FIELD(arg0, s16 *, 0xBA) = (s16) (((s16) (M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)) >> 1) - 0x20);
    M2C_FIELD(arg0, s16 *, 0xBC) = (s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14));
    M2C_FIELD(arg0, s16 *, 0xBE) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s32 *, 0x48) = 0;
    temp_r6 = M2C_FIELD(arg0, void **, 0x48);
    temp_r5 = M2C_FIELD(temp_r6, s16 *, 0xA);
    temp_r3 = temp_r5 - 0x20;
    M2C_FIELD(temp_r6, s16 *, 0xE) = (s16) (temp_r3 + (s16) (M2C_FIELD(temp_r6, s16 *, 0xE) - temp_r5));
    M2C_FIELD(temp_r6, s16 *, 0xA) = temp_r3;
    M2C_FIELD(temp_r6, s16 *, 0x10) = (s16) (M2C_FIELD(temp_r6, s16 *, 0xC) + (s16) (M2C_FIELD(temp_r6, s16 *, 0x10) - M2C_FIELD(temp_r6, s16 *, 0xC)));
}

void fn_8013B308(void) {

}

s16 fn_8013B30C(void *arg0) {
    return (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)) / (s16) M2C_FIELD(arg0, s16 *, 0x58));
}

void fn_8013B32C(void) {

}

s16 fn_8013B330(void *arg0) {
    return (s16) ((s32) ((s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14)) - (M2C_FIELD(arg0, s16 *, 0x64) * 2)) / (s16) M2C_FIELD(arg0, s16 *, 0x5A));
}

s16 fn_8013B35C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xD4);
}

void fn_8013B594(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0xD4) = arg1;
}

void fn_8013B69C(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0xD4) = arg1;
}

s16 fn_8013B6A4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xD4);
}

void fn_8013BA08(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    void fn_800616A0();
    void fn_800C428C(void **);
    void **temp_r5;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_4;
    void **temp_r0;
    void *temp_r3_3;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    *M2C_FIELD(temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = temp_r5;
loop_7:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        temp_r3_3 = temp_r3_2 + 8;
        if ((temp_r3_3 != NULL) && ((u32) M2C_FIELD(temp_r3_3, u32 *, 4)) != 0U) {
            fn_800616A0();
        }
        temp_r3_4 = *arg2;
        *arg2 = M2C_FIELD(temp_r3_4, void ***, 4);
        fn_800C428C(temp_r3_4);
        *arg1 -= 1;
        goto loop_7;
    }
    *arg0 = temp_r0;
}

int fn_8013BBF8(void *arg0) {
    u32 *ptr;

    ptr = (u32 *)((u8 *)arg0 + 0x4);
    *(u32 *)arg0 = 0;
    ptr[1] = (u32)ptr;
    ptr[0] = (u32)ptr;
}

void *fn_8013BC10(void *arg0, void *arg1) {
    void *fn_800C42D8(s32);
    extern u8 lbl_80276908[];
    extern u8 lbl_8028459C[];
    extern u8 lbl_802845E8[];
    extern u8 lbl_80291BE0[];
    extern u8 lbl_80291BEC[];
    extern u8 lbl_80291CF8[];
    extern u8 lbl_80291DA0[];
    extern u8 lbl_80291E48[];
    extern u8 lbl_80291EAC[];
    extern u8 lbl_80292090[];
    extern u8 lbl_802920E0[];
    extern u8 lbl_8032FEF0[];
    extern u8 lbl_8032FEFC[];
    extern u8 lbl_80367AD4;
    extern u8 lbl_80367AD5;
    extern f32 lbl_8036A6B8;
    extern f32 lbl_8036A6BC;
    void *obj;

    if ((s8)lbl_80367AD4 == 0) {
        *(void **)lbl_8032FEF0 = lbl_8028459C;
        *(void **)lbl_8032FEF0 = lbl_80292090;
        *(void **)lbl_8032FEF0 = lbl_80291BEC;
        *(void **)(lbl_8032FEF0 + 4) = lbl_80276908 + 0x46;
        lbl_8032FEF0[8] = 2;
        lbl_8032FEF0[9] = 0;
        *(void **)lbl_8032FEF0 = lbl_80291EAC;
        lbl_80367AD4 = 1;
    }
    if ((s8)lbl_80367AD5 == 0) {
        *(void **)lbl_8032FEFC = lbl_8028459C;
        *(void **)lbl_8032FEFC = lbl_80292090;
        *(void **)lbl_8032FEFC = lbl_80291BEC;
        *(void **)(lbl_8032FEFC + 4) = lbl_80276908 + 0x4E;
        lbl_8032FEFC[8] = 2;
        lbl_8032FEFC[9] = 0;
        *(void **)lbl_8032FEFC = lbl_80291E48;
        lbl_80367AD5 = 1;
    }

    {
        void *tmp_obj;
        if (arg0 == NULL) {
            tmp_obj = lbl_80276908 + 0x46;
        } else {
            tmp_obj = arg0;
        }
        *(void **)(lbl_8032FEF0 + 4) = tmp_obj;
    }

    {
        void *tmp_obj;
        if (arg1 == NULL) {
            tmp_obj = lbl_80276908 + 0x4E;
        } else {
            tmp_obj = arg1;
        }
        *(void **)(lbl_8032FEFC + 4) = tmp_obj;
    }

    lbl_8032FEF0[8] = 1;
    lbl_8032FEFC[8] = 1;
    lbl_8032FEF0[9] |= 1;
    lbl_8032FEFC[9] |= 1;

    obj = fn_800C42D8(0x28);
    if (obj != NULL) {
        *(void **)((u8 *)obj + 4) = lbl_802845E8;
        *(void **)obj = lbl_80291BE0;
        *(void **)((u8 *)obj + 4) = lbl_802920E0;
        *(s16 *)((u8 *)obj + 8) = 0x80;
        *(s16 *)((u8 *)obj + 0xA) = 0x9C;
        *(s16 *)((u8 *)obj + 0xC) = 0x160;
        *(s16 *)((u8 *)obj + 0xE) = 0x88;
        *(s16 *)((u8 *)obj + 0x10) = 0;
        *(s16 *)((u8 *)obj + 0x12) = 0;
        *(s16 *)((u8 *)obj + 0x14) = 0;
        *(s16 *)((u8 *)obj + 0x16) = 0;
        *(f32 *)((u8 *)obj + 0x18) = lbl_8036A6B8;
        *(s16 *)((u8 *)obj + 0x1C) = 0x20;
        *(s16 *)((u8 *)obj + 0x1E) = 4;
        *(void **)((u8 *)obj + 4) = lbl_80291DA0;
        *(s32 *)((u8 *)obj + 0x20) = 0;
        *(s8 *)((u8 *)obj + 0x24) = 0;
        *(void **)((u8 *)obj + 4) = lbl_80291CF8;
        *(s16 *)((u8 *)obj + 0xE) = 0x1C;
        *(s16 *)((u8 *)obj + 0xC) = 0xC8;
        *(f32 *)((u8 *)obj + 0x18) = lbl_8036A6BC;
        *(s16 *)((u8 *)obj + 0x10) = 0;
        *(s16 *)((u8 *)obj + 0x12) = 0;
    }
    return obj;
}

void fn_8013BE3C(s32 arg0) {
    void *fn_800C42D8(M2C_UNK);
    extern M2C_UNK lbl_80276908;
    extern M2C_UNK lbl_8028459C;
    extern M2C_UNK lbl_802845E8;
    extern M2C_UNK lbl_80291BD4;
    extern M2C_UNK lbl_80291BEC;
    extern M2C_UNK lbl_80291C50;
    extern M2C_UNK lbl_80291DA0;
    extern M2C_UNK lbl_80291E48;
    extern M2C_UNK lbl_80291EAC;
    extern M2C_UNK lbl_80292090;
    extern M2C_UNK lbl_802920E0;
    extern M2C_UNK lbl_8032FED8;
    extern M2C_UNK lbl_8032FEE4;
    extern u8 lbl_80367AD2;
    extern u8 lbl_80367AD3;
    extern f32 lbl_8036A6B8;
    void *temp_r3;

    if ((s8) lbl_80367AD2 == 0) {
        M2C_FIELD(&lbl_8032FED8, M2C_UNK **, 0) = &lbl_8028459C;
        M2C_FIELD(&lbl_8032FED8, M2C_UNK **, 0) = &lbl_80292090;
        M2C_FIELD(&lbl_8032FED8, M2C_UNK **, 0) = &lbl_80291BEC;
        M2C_FIELD(&lbl_8032FED8, void **, 4) = (void *) (&lbl_80276908 + 0x46);
        M2C_FIELD(&lbl_8032FED8, s8 *, 8) = 2;
        M2C_FIELD(&lbl_8032FED8, s8 *, 9) = 0;
        M2C_FIELD(&lbl_8032FED8, M2C_UNK **, 0) = &lbl_80291EAC;
        lbl_80367AD2 = 1;
    }
    if ((s8) lbl_80367AD3 == 0) {
        M2C_FIELD(&lbl_8032FEE4, M2C_UNK **, 0) = &lbl_8028459C;
        M2C_FIELD(&lbl_8032FEE4, M2C_UNK **, 0) = &lbl_80292090;
        M2C_FIELD(&lbl_8032FEE4, M2C_UNK **, 0) = &lbl_80291BEC;
        M2C_FIELD(&lbl_8032FEE4, void **, 4) = (void *) (&lbl_80276908 + 0x4E);
        M2C_FIELD(&lbl_8032FEE4, s8 *, 8) = 2;
        M2C_FIELD(&lbl_8032FEE4, s8 *, 9) = 0;
        M2C_FIELD(&lbl_8032FEE4, M2C_UNK **, 0) = &lbl_80291E48;
        lbl_80367AD3 = 1;
    }
    temp_r3 = fn_800C42D8(0x28);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, M2C_UNK **, 4) = &lbl_802845E8;
        M2C_FIELD(temp_r3, M2C_UNK **, 0) = &lbl_80291BD4;
        M2C_FIELD(temp_r3, M2C_UNK **, 4) = &lbl_802920E0;
        M2C_FIELD(temp_r3, s16 *, 8) = 0x80;
        M2C_FIELD(temp_r3, s16 *, 0xA) = 0x9C;
        M2C_FIELD(temp_r3, s16 *, 0xC) = 0x160;
        M2C_FIELD(temp_r3, s16 *, 0xE) = 0x88;
        M2C_FIELD(temp_r3, s16 *, 0x10) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x12) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x14) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x16) = 0;
        M2C_FIELD(temp_r3, f32 *, 0x18) = (f32) lbl_8036A6B8;
        M2C_FIELD(temp_r3, s16 *, 0x1C) = 0x20;
        M2C_FIELD(temp_r3, s16 *, 0x1E) = 4;
        M2C_FIELD(temp_r3, M2C_UNK **, 4) = &lbl_80291DA0;
        M2C_FIELD(temp_r3, s32 *, 0x20) = 0;
        M2C_FIELD(temp_r3, s8 *, 0x24) = 0;
        M2C_FIELD(temp_r3, M2C_UNK **, 4) = &lbl_80291C50;
        M2C_FIELD(temp_r3, s16 *, 0xC) = 0x110;
        M2C_FIELD(temp_r3, s16 *, 0xE) = 0x80;
        M2C_FIELD(temp_r3, s16 *, 8) = 0xA8;
        M2C_FIELD(temp_r3, s16 *, 0xA) = 0xA0;
    }
    M2C_FIELD(temp_r3, s32 *, 0x20) = arg0;
}

void fn_8013C388(void *arg0) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_8013C3AC(void) {
    return 0;
}

#pragma cplusplus on
extern "C" void fn_8013C3B4(void *unused, void *arg1) {
    void *fn_8000B908(u8);
    s32 fn_80166D8C(void *);
    void fn_80167190(void *, void *, f32, f32);
    void fn_801475FC(void *, s32);
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern u8 lbl_80330D68[];
    extern u8 lbl_80276908[];
    extern f64 lbl_8036A6C8;
    struct Inner {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14(void *, void *) = 0;
        virtual void v15(void *, void *) = 0;
    };
    s32 gate;
    s32 flags;
    s32 btn;
    s32 cur;
    void *pad;
    f32 f31;
    f32 f30;
    void *tmp;
    void *res;
    u8 *p;

    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if ((u8)gate == 0) {
        u8 t62;
        s32 prev;
        pad = lbl_80367240;
        t62 = *(u8 *)((u8 *)arg1 + 0x62);
        cur = *(s32 *)((u8 *)pad + 4);
        prev = *(s32 *)((u8 *)pad + 8);
        *(u8 *)((u8 *)arg1 + 0x63) = t62;
        btn = cur & (prev ^ cur);
        if ((s8)*(u8 *)((u8 *)arg1 + 0x62) != 0 && (btn & 0x01000001) != 0) {
            *(u8 *)((u8 *)arg1 + 0x62) = *(u8 *)((u8 *)arg1 + 0x62) - 1;
        }
        if ((s8)*(u8 *)((u8 *)arg1 + 0x62) != ((s8)*(u8 *)((u8 *)arg1 + 0x60) - 1) && (btn & 0x02000002) != 0) {
            *(u8 *)((u8 *)arg1 + 0x62) = *(u8 *)((u8 *)arg1 + 0x62) + 1;
        }
        if ((s8)*(u8 *)((u8 *)arg1 + 0x62) != (s8)*(u8 *)((u8 *)arg1 + 0x63) && (u8)fn_80166D8C(lbl_80330D68) != 0) {
            p = (u8 *)arg1;
            p += (s8)*(u8 *)((u8 *)arg1 + 0x62);
            tmp = fn_8000B908(p[0x40]);
            f31 = (f32)(*(s16 *)((u8 *)arg1 + 0x30) + *(s16 *)((u8 *)tmp + 0x30));
            p = (u8 *)arg1;
            p += (s8)*(u8 *)((u8 *)arg1 + 0x62);
            tmp = fn_8000B908(p[0x40]);
            f30 = (f32)(*(s16 *)((u8 *)arg1 + 0x32) + *(s16 *)((u8 *)tmp + 0x32));
            p = (u8 *)arg1;
            p += (s8)*(u8 *)((u8 *)arg1 + 0x62);
            tmp = fn_8000B908(p[0x40]);
            res = (*(Inner **)((u8 *)tmp + 0x34))->v2();
            if (res != NULL) {
                fn_80167190(lbl_80330D68, res, f31, f30);
            }
        }
        if ((s8)*(u8 *)((u8 *)arg1 + 0x62) != (s8)*(u8 *)((u8 *)arg1 + 0x63)) {
            p = (u8 *)arg1;
            p += (s8)*(u8 *)((u8 *)arg1 + 0x63);
            tmp = fn_8000B908(p[0x40]);
            (*(Inner **)((u8 *)tmp + 0x34))->v15(arg1, tmp);
            p = (u8 *)arg1;
            p += (s8)*(u8 *)((u8 *)arg1 + 0x62);
            tmp = fn_8000B908(p[0x40]);
            (*(Inner **)((u8 *)tmp + 0x34))->v14(arg1, tmp);
            fn_801475FC(lbl_80276908 + 0x56, 0x64);
        }
    }
}
#pragma cplusplus reset

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_8013C600(void *arg0, void *arg1) {
    struct Inner {
        virtual void v0() = 0;
        virtual s32 v1() = 0;
    };
    struct Outer {
        u8 pad[4];
        virtual s32 v0() = 0;
        virtual s32 v1() = 0;
        virtual s32 v2() = 0;
        virtual s32 v3() = 0;
        virtual s32 v4() = 0;
        virtual s32 v5() = 0;
        virtual s32 v6() = 0;
        virtual s32 v7() = 0;
        virtual s32 v8() = 0;
        virtual s32 v9() = 0;
        virtual s32 v10() = 0;
        virtual s32 v11() = 0;
        virtual s32 v12() = 0;
        virtual s32 v13() = 0;
        virtual s32 v14() = 0;
        virtual s32 v15() = 0;
        virtual s32 v16() = 0;
        virtual s32 v17() = 0;
        virtual s32 v18() = 0;
        virtual s32 v19() = 0;
        virtual s32 v20() = 0;
        virtual s32 v21() = 0;
        virtual s32 v22() = 0;
        virtual s32 v23() = 0;
        virtual s32 v24() = 0;
        virtual s32 v25() = 0;
        virtual s32 v26() = 0;
        virtual s32 v27() = 0;
        virtual s32 v28() = 0;
        virtual s32 v29() = 0;
        virtual s32 v30() = 0;
        virtual s32 v31() = 0;
        virtual s32 v32() = 0;
        virtual s32 v33() = 0;
        virtual s32 v34() = 0;
        virtual s32 v35() = 0;
        virtual s32 v36() = 0;
        virtual s32 v37() = 0;
        virtual s32 v38() = 0;
        virtual s32 v39() = 0;
        virtual s32 v40() = 0;
        virtual s32 v41() = 0;
        virtual s32 v42() = 0;
    };
    void *fn_8000B908(u8);
    s32 fn_800102BC(s32, f32);
    s32 fn_80010B78(s32, s32, f32);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8008BF68(s16, s32, s32);
    void fn_8008AB7C(s32, s32, s16, s32, s32, s32, s32);
    extern f32 lbl_8036A6C0;
    extern f32 lbl_8036A6D0;
    extern f32 lbl_8036A6C8;
    extern f32 lbl_8036A6D4;
    extern f32 lbl_8036A6D8;
    extern f32 lbl_8036A6DC;
    s16 iconH;
    s16 iconW;
    s32 flag;
    s32 v;
    s16 t3a;
    s16 t38;
    s32 halfW;
    s16 w;
    s16 y;
    s16 x;
    void *item;
    Outer *self;
    u8 *a1;

    self = (Outer *)arg0;
    a1 = (u8 *)arg1;
    item = fn_8000B908(a1[0x40 + (s8)a1[0x62]]);
    x = *(s16 *)((u8 *)item + 0x30);
    y = *(s16 *)((u8 *)item + 0x32);
    w = (s16)fn_800102BC(-1, lbl_8036A6C0);
    v = ((Inner *)*(void **)((u8 *)item + 0x34))->v1();
    halfW = (s16)fn_80010B78(v, -1, lbl_8036A6C0);
    x = (s16)(x - (halfW / 2));
    t38 = *(s16 *)(a1 + 0x38);
    if (t38 < 0 || *(s16 *)(a1 + 0x3a) < 0) {
        *(s16 *)(a1 + 0x38) = x;
        *(s16 *)(a1 + 0x3a) = y;
    } else {
        *(s16 *)(a1 + 0x38) = (s16)((t38 + x) / 2);
        t3a = *(s16 *)(a1 + 0x3a);
        *(s16 *)(a1 + 0x3a) = (s16)((t3a + y) / 2);
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A6D0);
    fn_8000A248();
    v = self->v38();
    fn_8008BF68(*(s16 *)(a1 + 0x38),
        (s32)((f32)*(s16 *)(a1 + 0x3a) + lbl_8036A6D4 * (f32)((s16)v - w)),
        1);
    if (*(u8 *)((u8 *)self + 0x24) != 0) {
        iconW = (s16)self->v35();
        iconH = (s16)self->v20();
        fn_8000A258();
        fn_80009C0C(lbl_8036A6D8);
        fn_8000A248();
        flag = 0;
        if (a1[0x2d] == 0 && a1[0x2e] == 0) {
            flag = 1;
        }
        fn_8008AB7C(*(s16 *)(a1 + 0x38) + (halfW >> 1),
            *(s16 *)(a1 + 0x3a) + (iconH >> 1),
            iconW, 0x18, 0x19, 0x4c, flag);
        fn_8000A258();
        fn_80009C0C(lbl_8036A6DC);
        fn_8000A248();
    }
}

#pragma cplusplus on
extern "C" void fn_8013C814(void *arg0) {
    struct Outer {
        u8 pad[4];
        virtual s32 v0() = 0;
        virtual s32 v1() = 0;
        virtual s32 v2() = 0;
        virtual s32 v3() = 0;
        virtual s32 v4() = 0;
        virtual s32 v5() = 0;
        virtual s32 v6() = 0;
        virtual s32 v7() = 0;
        virtual s32 v8() = 0;
        virtual s32 v9() = 0;
        virtual s32 v10() = 0;
        virtual s32 v11() = 0;
        virtual s32 v12() = 0;
        virtual s32 v13() = 0;
        virtual s32 v14() = 0;
        virtual s32 v15() = 0;
        virtual s32 v16() = 0;
        virtual s32 v17() = 0;
        virtual s32 v18() = 0;
        virtual s32 v19() = 0;
        virtual s32 v20() = 0;
        virtual s32 v21() = 0;
        virtual s32 v22() = 0;
        virtual s32 v23() = 0;
        virtual s32 v24() = 0;
        virtual s32 v25() = 0;
        virtual s32 v26() = 0;
        virtual s32 v27() = 0;
        virtual s32 v28() = 0;
        virtual s32 v29() = 0;
        virtual s32 v30() = 0;
        virtual s32 v31() = 0;
        virtual s32 v32() = 0;
        virtual s32 v33() = 0;
        virtual s32 v34() = 0;
        virtual s32 v35() = 0;
        virtual s32 v36() = 0;
        virtual s32 v37() = 0;
        virtual s32 v38() = 0;
        virtual s32 v39() = 0;
    };
    void *fn_8000E0E4(void *);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    s32 fn_80010B78(void *, s32, f32);
    s32 fn_800102BC(s32, f32);
    void fn_80007898(s32);
    void fn_80007858(f32, f32);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007124(void *);
    void fn_80007884(void);
    void fn_80009B80(s32);
    extern u8 lbl_80276908[];
    extern f32 lbl_8036A6C0;
    extern f32 lbl_8036A6D0;
    extern f32 lbl_8036A6C8;
    f32 f31;
    f32 f30;
    void *ptr;
    void *v36v;
    Outer *self;
    s32 half;

    self = (Outer *)arg0;
    ptr = 0;
    self->v39();
    if (*(u32 *)((u8 *)self + 0x20) != 0) {
        ptr = fn_8000E0E4(*(void **)((u8 *)self + 0x20));
    } else {
        ptr = &lbl_80276908[0x72];
    }
    if (ptr != 0) {
        fn_8000A258();
        fn_80009C0C(lbl_8036A6D0);
        fn_8000A174(0, 0x13);
        fn_8000A248();
        if (*(u32 *)((u8 *)self + 0x20) != 0) {
            ptr = fn_8000E0E4(*(void **)((u8 *)self + 0x20));
        } else {
            ptr = &lbl_80276908[0x72];
        }
        half = (s16)self->v18() / 2;
        f31 = (f32)(half - (fn_80010B78(ptr, -1, lbl_8036A6C0) / 2));
        half = ((s16)self->v38() - fn_800102BC(-1, lbl_8036A6C0)) / 2;
        v36v = (void *)(s32)(s16)self->v36();
        f30 = (f32)(((s16)(s32)v36v - (s16)self->v38()) + half);
        fn_80007898(6);
        fn_80007858(f31, f30);
        fn_800076AC(0, 0, 0, 0xff);
        if (*(u32 *)((u8 *)self + 0x20) != 0) {
            ptr = fn_8000E0E4(*(void **)((u8 *)self + 0x20));
        } else {
            ptr = &lbl_80276908[0x72];
        }
        fn_80007124(ptr);
        fn_80007884();
    }
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma cplusplus reset

#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus on
struct RefObj {
    virtual ~RefObj();
    s32 refCount;
};
extern "C" void fn_8015B954(s32, s32, s32);
extern "C" void fn_8013692C(s32, s32, s32, s32, s32, s32);
extern "C" void fn_8013CA2C(void *arg0) {
    struct Obj {
        u8 pad[4];
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
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
    };
    ((Obj *)arg0)->v30();
    fn_8015B954(0, 0, 0x10);
}
#pragma cplusplus reset
void fn_8013CD7C(void) {
    extern s8 lbl_802EF4C8;
    *(s8*)((char*)&lbl_802EF4C8 + 8) = 0x80;
}

void fn_8013CD90(void) {
    return;
}

s32 fn_8013CDCC(void) {
    s8 fn_801475FC(void *, int);
    extern u8 lbl_802EF4C8[24];
    extern u8 lbl_80276908[];
    u8 *ptr1 = (u8 *)&lbl_802EF4C8;
    u8 *ptr2 = (u8 *)&lbl_80276908;
    ptr1[8] = 0x80;
    fn_801475FC(ptr2 + 0x73, 0x64);
    return 1;
}

void fn_8013CE10(void *arg0) {
    extern u16 lbl_8028459C[];
    extern u16 lbl_80291BEC[];
    extern u16 lbl_80292090[];
    extern u16 lbl_80276908[];
    extern u16 lbl_80291E48[];
    
    *(u16 **)arg0 = lbl_8028459C;
    *(u16 **)arg0 = lbl_80291BEC;
    *(u16 **)arg0 = lbl_80292090;
    *(void **)((char *)arg0 + 4) = (void *)((s32)lbl_80276908 + 0x4E);
    *((u8 *)arg0 + 8) = 2;
    *((u8 *)arg0 + 9) = 0;
    *(u16 **)arg0 = lbl_80291E48;
}

s32 fn_8013CE64(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x81;
    return 5;
}

void fn_8013CE7C(void *arg0) {
    extern u16 lbl_8028459C[];
    extern u16 lbl_80292090[];
    extern u16 lbl_80291BEC[];
    extern u16 lbl_80276908[];
    extern u16 lbl_80291EAC[];

    u16** ptr = (u16**)arg0;
    ptr[0] = lbl_8028459C;
    ptr[1] = lbl_80292090;
    ptr[2] = lbl_80291BEC;
    ptr[3] = (u16*)(lbl_80276908 + 0x8C);
    ((u8*)arg0)[0x10] = 2;
    ((u8*)arg0)[0x11] = 0;
    ptr[4] = lbl_80291EAC;
}

#pragma cplusplus on
extern "C" void fn_8013CF50(void **arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80007124(s32);
    M2C_UNK fn_80007220(M2C_UNK, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 fn_800102BC(M2C_UNK, f32);
    s32 fn_80010B78(s32, M2C_UNK, f32);
    M2C_UNK fn_801533F8(s32, s32, u8, M2C_UNK);
    s32 *fn_8018D900(M2C_UNK);
    extern f32 lbl_8036A6C0;
    extern f32 lbl_8036A6C4;
    extern f32 lbl_8036A6E8;
    extern f32 lbl_8036A6EC;
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual s32 v4(void *) = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
    };
    s32 temp_r31;
    s32 temp_r30;
    void *var_r29;
    s32 sp8;
    f32 temp_f31;
    f32 temp_f30;
    void *temp_r3;
    s32 temp_virt;
    void *temp_r3_2;
    s32 temp_virt2;

    var_r29 = arg2;
    ((Obj *)arg0)->v17();
    fn_8000A258();
    fn_80009C0C(lbl_8036A6E8);
    fn_8000A248();
    temp_r3 = M2C_FIELD(var_r29, void **, 0x34);
    temp_virt = ((Obj *)temp_r3)->v4(var_r29);
    temp_r31 = (0x9A - fn_80010B78(temp_virt, -1, lbl_8036A6C0)) >> 1;
    temp_r30 = (0x24 - fn_800102BC(-1, lbl_8036A6C0)) >> 1;
    temp_f31 = (f32)M2C_FIELD(var_r29, s16 *, 0x30);
    temp_f30 = (f32)M2C_FIELD(var_r29, s16 *, 0x32);
    fn_80007898(6);
    fn_80007858(temp_f31 + (f32)temp_r31, temp_f30 + (f32)temp_r30);
    if ((u8)M2C_FIELD(var_r29, u8 *, 0x39) == 2) {
        sp8 = *fn_8018D900(0);
        fn_80007668(&sp8);
    } else {
        fn_80007220(1, lbl_8036A6C4);
    }
    temp_r3_2 = M2C_FIELD(var_r29, void **, 0x34);
    temp_virt2 = ((Obj *)temp_r3_2)->v4(var_r29);
    fn_80007124(temp_virt2);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036A6EC);
    fn_8000A248();
    fn_801533F8((s32)temp_f31, (s32)temp_f30, M2C_FIELD(var_r29, u8 *, 0x38), 0x10);
}
#pragma cplusplus reset
void fn_8013D10C(void) {
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
}

void fn_8013D13C(void) {

}

void fn_8013D140(void *arg0) {
    M2C_UNK fn_80009B80(M2C_UNK);
    M2C_UNK fn_80153634(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x80)();
    fn_80153634(0, 0, 0x10);
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}

void fn_8013DAD8(void **arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80007124();
    M2C_UNK fn_80007220(M2C_UNK, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK, s32, s16);
    M2C_UNK fn_80009B80(M2C_UNK);
    s32 fn_800102BC(M2C_UNK, f32);
    M2C_UNK fn_8005AC24(M2C_UNK *, s32, s32, s32);
    s32 *fn_8018D900(M2C_UNK);
    extern M2C_UNK lbl_802F0308;
    extern f32 lbl_8036A6C0;
    extern f32 lbl_8036A6C4;
    s32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    s16 temp_r30;
    s16 temp_r3_4;
    s32 temp_r30_2;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r5_2;
    void **temp_r3;
    void **temp_r3_5;
    void **temp_r3_6;
    void **temp_r3_7;
    void *temp_r3_3;
    void *temp_r5;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x4C)();
    temp_r3 = M2C_FIELD(arg2, void ***, 0x34);
    temp_r3_2 = M2C_FIELD(*temp_r3, s32 (**)(void **), 0x1C)(temp_r3);
    temp_r5 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r4 = (s32) (-temp_r3_2 | temp_r3_2) >> 0x1F;
    temp_r30 = M2C_FIELD(M2C_FIELD(temp_r5, void **, 4), s16 (**)(void *, s32, void *), 0x58)(temp_r5, temp_r4, temp_r5);
    temp_r3_3 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r30_2 = (s32) (temp_r30 - fn_800102BC(-1, lbl_8036A6C0)) >> 1;
    temp_r3_4 = M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), s16 (**)(void *), 0x58)(temp_r3_3);
    temp_r5_2 = temp_r3_4 - 0x18;
    temp_f31 = (f32) M2C_FIELD(arg2, s16 *, 0x30);
    temp_f30 = (f32) M2C_FIELD(arg2, s16 *, 0x32);
    fn_80007898(6, temp_r5_2, temp_r3_4);
    fn_80007858(temp_f31 + (f32) (0x18 & temp_r4), temp_f30 + (f32) temp_r30_2);
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        sp8 = *fn_8018D900(0);
        fn_80007668(&sp8);
    } else {
        fn_80007220(1, lbl_8036A6C4);
    }
    temp_r3_5 = M2C_FIELD(arg2, void ***, 0x34);
    M2C_FIELD(*temp_r3_5, M2C_UNK (**)(void **, void *), 0x18)(temp_r3_5, arg2);
    fn_80007124();
    fn_80007884();
    temp_r3_6 = M2C_FIELD(arg2, void ***, 0x34);
    if (M2C_FIELD(*temp_r3_6, s32 (**)(void **), 0x1C)(temp_r3_6) != 0) {
        temp_r3_7 = M2C_FIELD(arg2, void ***, 0x34);
        fn_8005AC24(&lbl_802F0308, (s32) temp_f31, (s32) (temp_f30 + (f32) (temp_r5_2 >> 1)), M2C_FIELD(*temp_r3_7, s32 (**)(void **), 0x1C)(temp_r3_7));
    }
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}

void fn_8013DD1C(s32 arg0, void *arg1) {
    M2C_UNK fn_80009B80(M2C_UNK);
    u8 var_r3;
    u8 var_r3_2;

    fn_8000A258();
    fn_8000A174(0, 0x13);
    var_r3 = 0;
    if ((M2C_FIELD(arg1, u8 *, 0x2D) == 0) && (M2C_FIELD(arg1, u8 *, 0x2E) == 0)) {
        var_r3 = 1;
    }
    var_r3_2 = 0x40;
    if (var_r3 != 0) {
        var_r3_2 = 0x80;
    }
    fn_80009B80(var_r3_2);
    fn_8000A248();
}

void fn_8013DD90(void* arg0, void* arg1) {
    if (arg0 == NULL) {
        return;
    }
    
    *(u16*)arg0 = 0x2000;
    
    if (arg1 != NULL) {
        ((u16*)arg1)[5] = 0;
        ((u16*)arg1)[0] = 0;
    }
}

#pragma cplusplus on
extern "C" void fn_8015AD7C(s32, s32, s32, s16, s32, s32);
s32 fn_80009B80(u8);
extern "C" void fn_8013DF7C(void *arg0, s32 arg1) {
    struct Obj {
        u8 pad[4];
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
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual s16 v17() = 0;
        virtual s32 v18() = 0;
        virtual s16 v19() = 0;
        virtual s16 v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
        virtual void v31() = 0;
        virtual void v32() = 0;
        virtual s16 v33(s32) = 0;
    };
    s16 y;

    ((Obj *)arg0)->v30();
    y = ((Obj *)arg0)->v19();
    if (y == 0) {
        y = ((Obj *)arg0)->v20() * ((Obj *)arg0)->v33(arg1) + ((Obj *)arg0)->v17() * 2;
    }
    fn_8015AD7C(0, 0, ((Obj *)arg0)->v18(), y, 0xE6, 0x10);
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}

extern "C" void *fn_8000B908(u8);
extern "C" void fn_8013E218(void *arg0, void *arg1) {
    struct Obj {
        u8 pad[4];
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
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
        virtual s16 v31() = 0;
        virtual s16 v32() = 0;
    };
    s32 i;
    void *p;
    u8 *arg1_bytes = (u8 *)arg1;

    for (i = 0; i < *(s8 *)&arg1_bytes[0x60]; i++) {
        p = fn_8000B908(arg1_bytes[0x40 + i]);
        *(s16 *)((u32)p + 0x30) += ((Obj *)arg0)->v31();
        *(s16 *)((u32)p + 0x32) += ((Obj *)arg0)->v32();
    }
}
#pragma cplusplus reset

void fn_8013E300(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0;
}

void *fn_8013E314(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80291C50[];
    extern void *lbl_80291DA0[];
    extern void *lbl_802920E0[];

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 4) = lbl_80291C50;
        if (arg0 != NULL) {
            *(void **)((u8 *)arg0 + 4) = lbl_80291DA0;
            if (arg0 != NULL) {
                *(void **)((u8 *)arg0 + 4) = lbl_802920E0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_8013E380(void) {
    return 0x38;
}

s32 fn_8013E388(void) {
    return 0x62;
}

s32 fn_8013E390(void) {
    return 0x1C;
}

#pragma cplusplus on
extern "C" void fn_8015B820(s32, s32, s32);
extern "C" void fn_8013E398(void *arg0) {
    struct Obj {
        u8 pad[4];
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
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
    };
    ((Obj *)arg0)->v30();
    fn_8015B820(0, 0, 0x10);
}

#pragma cplusplus reset
void *fn_8013E3D4(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80291CF8[];
    extern void *lbl_80291DA0[];
    extern void *lbl_802920E0[];

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 4) = lbl_80291CF8;
        if (arg0 != NULL) {
            *(void **)((u8 *)arg0 + 4) = lbl_80291DA0;
            if (arg0 != NULL) {
                *(void **)((u8 *)arg0 + 4) = lbl_802920E0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_8013E440(void) {
    extern void *lbl_80276908;
    return (char *)lbl_80276908 + 0x9F;
}

s32 fn_8013E450(void) {
    return 0;
}

s32 fn_8013E458(void) {
    return 0;
}

s32 fn_8013E460(void) {
    return 0x1C;
}

s32 fn_8013E468(void) {
    return 0x1C;
}

s32 fn_8013E470(void) {
    return 0x1C;
}

void fn_8013E478(void *arg0) {
    M2C_UNK fn_80009B80(M2C_UNK);
    M2C_UNK fn_80009C0C(f32);
    extern f32 lbl_8036A6D0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x80)();
    fn_8000A258();
    fn_80009C0C(lbl_8036A6D0);
    fn_80009B80(0x80);
    fn_8000A248();
}

void fn_8013E4BC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 9) = (u8) (M2C_FIELD(arg0, u8 *, 9) | arg1);
}

u8 fn_8013E4CC(void *arg0, s32 arg1) {
    return (u8) (M2C_FIELD(arg0, u8 *, 9) & arg1);
}

void fn_8013E4DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

void *fn_8013E4E4(void *arg0, s16 arg1) {
    extern u16 lbl_80291DA0[76];
    extern u16 lbl_802920E0[76];
    
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 4) = lbl_80291DA0;
        if (arg0 != NULL) {
            *(u16**)((char*)arg0 + 4) = lbl_802920E0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_8013E540(void *arg0, s16 arg1) {
    extern u16 lbl_802920E0[76];
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 4) = lbl_802920E0;
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_8013E588(void) {
    return 0x1C;
}

void fn_8013E590(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0xA0)();
}

s16 fn_8013E5BC(void *arg0) {
    s32 temp_r31;
    s16 temp_r4;

    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(), 0x50)();
    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x48)(arg0);
    return (s16) ((temp_r31 - (temp_r4 * 2)) / 3);
}

s16 fn_8013E63C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x10);
}

s16 fn_8013E644(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xC);
}

s32 fn_8013E64C(void) {
    return 0x3B;
}

s16 fn_8013E654(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xE);
}

f32 fn_8013E65C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x18);
}

s16 fn_8013E664(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xA);
}

s16 fn_8013E66C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 8);
}

s32 fn_8013E674(void) {
    return 0x68;
}

s16 fn_8013E67C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x20);
}

s16 fn_8013E684(void *arg0, void *arg1) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(), 0x90)();
    return (s16) ((s32) ((temp_r3 + (s8) M2C_FIELD(arg1, u8 *, 0x60)) - 1) / temp_r3);
}

s16 fn_8013E6D8(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x16);
}

s16 fn_8013E6E0(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x12);
}

s16 fn_8013E6E8(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x14);
}

s16 fn_8013E6F0(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1C);
}

#pragma cplusplus on
extern "C" s16 fn_8013E6F8(void *arg0) {
    struct Obj {
        u8 pad[4];
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
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual s16 v16() = 0;
        virtual void v17() = 0;
        virtual s32 v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
        virtual void v31() = 0;
        virtual void v32() = 0;
        virtual void v33() = 0;
        virtual s16 v34() = 0;
    };
    s16 t = ((Obj *)arg0)->v18() - ((Obj *)arg0)->v16() * 2;
    return t / ((Obj *)arg0)->v34();
}
#pragma cplusplus reset

s16 fn_8013E780(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(), 0x50)();
    return (s16) (temp_r31 - (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x48)(arg0) * 2));
}

s32 fn_8013E7E8(s32 unused, void *arg1) {
    return *(s8 *)((u8 *)arg1 + 0x60);
}

void *fn_8013E7F4(void) {
    extern u16 lbl_80276908;
    return (u16 *)((u32)&lbl_80276908 + 0x13e);
}

void *fn_8013E804(void) {
    extern u8 lbl_80276908[];
    return &lbl_80276908[0xAF];
}

void *fn_8013E814(void) {
    extern u8 lbl_80276908[];
    return &lbl_80276908[0xC8];
}

s32 fn_8013E824(void) {
    return 1;
}

s16 fn_8013E82C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1E);
}

s16 fn_8013E834(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1E);
}

void *fn_8013E83C(void *arg0, s16 arg1) {
    extern u16 lbl_80291F60[76];
    extern u16 lbl_802920E0[76];
    
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 4) = lbl_80291F60;
        if (arg0 != NULL) {
            *(u16**)((char*)arg0 + 4) = lbl_802920E0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_8013E898(void *arg0, s16 arg1) {
    extern u16 lbl_80291FF8[76];
    extern u16 lbl_802920E0[76];
    
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 4) = lbl_80291FF8;
        if (arg0 != NULL) {
            *(u16**)((char*)arg0 + 4) = lbl_802920E0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_8013E8F4(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80292178[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80292178;
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

void fn_8013EB6C(void **arg0) {
    void (**func_ptr)(void);
    
    func_ptr = (void (**)(void))((char *) *arg0 + 0x10);
    (*func_ptr)();
    
    fn_801528E4(0, 0, 0x10);
}

void fn_8013EBA8(void *arg0) {
    s16 h = M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xc);
    s16 w = M2C_FIELD(arg0, s16 *, 0xe) - M2C_FIELD(arg0, s16 *, 0xa);

    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
    M2C_FIELD(arg0, s16 *, 0x16) = w;
    M2C_FIELD(arg0, s16 *, 0x18) = h;
}

void fn_8013ED84(void *arg0, s16 arg1) {
    s16 temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x3C) > 0) {
        temp_r5 = M2C_FIELD(arg0, s16 *, 0x40);
        if (temp_r5 != arg1) {
            if (arg1 < temp_r5) {
                M2C_FIELD(arg0, s16 *, 0x62) = 1;
                M2C_FIELD(arg0, s8 *, 0x59) = 0;
            } else {
                M2C_FIELD(arg0, s16 *, 0x8A) = 1;
                M2C_FIELD(arg0, s8 *, 0x81) = 0;
            }
            M2C_FIELD(arg0, s16 *, 0x40) = arg1;
        }
    }
}

s16 fn_8013EED8(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA));
}

s16 fn_8013EEEC(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14));
}

#pragma cplusplus on
extern "C" void fn_8013EF00(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
    };
    M2C_UNK fn_8000A258(void);
    M2C_UNK fn_8000A174(s32, u16);
    M2C_UNK fn_8000A248(void);
    M2C_UNK fn_80007898(s32);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007884(void);
    extern f32 lbl_8036A708;
    s32 sp8;
    s16 a;
    s16 b;
    s16 c;
    s16 d;

    ((Obj *)arg0)->v3();
    fn_8000A258();
    fn_8000A174(0, (u16) (M2C_FIELD(arg0, u32 *, 0x34) | 2));
    fn_8000A248();
    fn_80007898(1);
    a = M2C_FIELD(arg0, s16 *, 0x12);
    b = M2C_FIELD(arg0, s16 *, 0x16);
    c = M2C_FIELD(arg0, s16 *, 0x14);
    d = M2C_FIELD(arg0, s16 *, 0x18);
    fn_800077D8(lbl_8036A708, lbl_8036A708, (f32) (s16) (b - a), (f32) (s16) (d - c));
    sp8 = M2C_FIELD(arg0, s32 *, 0x1E);
    fn_80007668(&sp8);
    fn_80007884();
}
#pragma cplusplus reset

void *fn_8013EFCC(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_802921E0[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_802921E0;
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

#pragma cplusplus on
extern "C" void *fn_8013F038(void *arg0, s16 arg1, u8 arg2) {
    struct Item {
        virtual ~Item();
        virtual void *find(s16, u8);
        u8 pad[4];
        s16 id;
    };
    struct Node {
        Node *next;
        void *pad;
        Item *item;
    };
    Node *end = (Node *)((char *)arg0 + 0x40);
    Node *it;
    Node *head = *(Node **)((char *)arg0 + 0x44);
    Item *res = 0;

    for (it = end; it != head; it = it->next) {
        Item *item = it->item;
        if (arg1 == item->id) {
            res = item;
            break;
        }
        if (arg2 != 0) {
            res = (Item *)item->find(arg1, arg2);
            if (res != 0) {
                break;
            }
        }
    }
    return res;
}
#pragma cplusplus off

#pragma cplusplus on
#pragma cplusplus on
void fn_8013F0F0(void) {
    return;
}

void fn_8013F1A0(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        void **temp_r6 = (void**)((char*)arg0 + 0x44);
        void *var_r3 = *temp_r6;
loop_3:
        if ((var_r3 != *temp_r6) && ((u32)*(void**)((char*)var_r3 + 0x8) != (u32)arg1)) {
            var_r3 = *(void**)((char*)var_r3 + 0x4);
            goto loop_3;
        }
        if (var_r3 == *temp_r6) {
            *(void**)((char*)arg1 + 0x38) = arg0;
        }
    }
}

#pragma cplusplus off

void fn_8013F3C0(void) {

}

void fn_8013F3C4(void) {

}

void fn_8013F3C8(void) {

}

void fn_8013F3CC(void) {

}

void fn_80059C2C(s32, s32, s32, s32, s32);
void fn_8013F3D0(void) {
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

void *fn_8013F6B8(void *arg0, void *arg1, void *arg2) {
    void fn_8013F748(void *, void *, void *);
    struct Point {
        s16 x;
        s16 y;
    };
    struct Point pt;
    struct Point temp2;
    struct Point temp;

    pt.x = 0;
    pt.y = 0;
    fn_8013F748(arg0, &pt, &pt);
    temp = *(struct Point *)arg2;
    temp.x -= pt.x;
    temp.y -= pt.y;
    temp2 = temp;
    *(s16 *)((char *)arg1 + 0) = temp2.x;
    *(s16 *)((char *)arg1 + 2) = temp2.y;
    return arg1;
}

void fn_8013F920(void *arg1) {
    s16 *ptr = (s16*)arg1;
    s16 temp;

    // Process first element
    if (ptr[0] < 0) {
        temp = 0;
    } else if (ptr[0] > 0x7FF) {
        temp = 0x7FF;
    } else {
        temp = ptr[0];
    }
    ptr[0] = temp;

    // Process second element
    if (ptr[1] < 0) {
        temp = 0;
    } else if (ptr[1] > 0x7FF) {
        temp = 0x7FF;
    } else {
        temp = ptr[1];
    }
    ptr[1] = temp;

    // Process third element
    if (ptr[2] < 0) {
        temp = 0;
    } else if (ptr[2] > 0x7FF) {
        temp = 0x7FF;
    } else {
        temp = ptr[2];
    }
    ptr[2] = temp;

    // Process fourth element
    if (ptr[3] < 0) {
        temp = 0;
    } else if (ptr[3] > 0x7FF) {
        temp = 0x7FF;
    } else {
        temp = ptr[3];
    }
    ptr[3] = temp;

    fn_80225058(ptr[0], ptr[1], ptr[2] - ptr[0], ptr[3] - ptr[1]);
}

s32 fn_8013FA10(void) {
    f32 fn_80138AC0();
    extern f32 lbl_8036A728;
    return (s32) (lbl_8036A728 * fn_80138AC0());
}

void fn_8013FA44(void *arg0, void *arg1, void *arg2) {
    *(s16 *)((char *)arg1 + 0) = *(s16 *)((char *)arg2 + 0);
    *(s16 *)((char *)arg1 + 2) = *(s16 *)((char *)arg2 + 2);
}

s32 fn_8013FBC0(s32 arg0) {
    return arg0 + 0x12;
}

void fn_8013FBC8(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 fn_8013FBD4(s32 arg0) {
    return arg0 + 0xA;
}

void fn_8013FBDC(void *arg0, void *arg1) {
    s16 *a0 = (s16 *)arg0;
    s16 *a1 = (s16 *)arg1;
    a0[0] = a0[0] + a1[0];
    a0[1] = a0[1] + a1[1];
}

void fn_8013FC00(void *arg0, void *arg1) {
    *(s16 *)((char *)arg0 + 0x0) = *(s16 *)((char *)arg1 + 0x0);
    *(s16 *)((char *)arg0 + 0x2) = *(s16 *)((char *)arg1 + 0x2);
}

#pragma scheduling off
void fn_8013FC14(void *arg0, void *arg1) {
    s16 src0;
    s16 src1;

    src0 = *(s16 *)((u8 *)arg1 + 0);
    src1 = *(s16 *)((u8 *)arg1 + 2);
    *(s16 *)((u8 *)arg0 + 0) = src0;
    *(s16 *)((u8 *)arg0 + 2) = src1;
}
#pragma scheduling reset
void fn_8013FC64(void) {

}

void fn_8013FC68(ListIter *ret, List *list, ListIter *it) {
    ListNode *node = it->node;
    ListNode *next = node->next;
    ListNode *prev = node->prev;
    s32 size;

    it->node = next;
    prev->next = next;
    node->next->prev = node->prev;
    fn_800C428C(node);
    size = list->size;
    next = it->node;
    list->size = --size;
    ret->node = next;
}

void fn_8013FDA0(void *arg0) {
    u32 temp_r5;
    void **var_r0;
    void **var_r3;

    temp_r5 = M2C_FIELD(arg0, u32 *, 0x34);
    if (temp_r5 != 0U) {
        var_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void ***, 8);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r5 != 0U) {
            var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void ***, 8);
        } else {
            var_r3 = NULL;
        }
        M2C_FIELD(*var_r3, M2C_UNK (**)(), 0x24)();
    }
}

void fn_8013FEC0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) - 1);
}

void fn_8013FED0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) + 1);
}

void fn_8013FEE0(void) {
    extern u8 lbl_80367AD8;
    lbl_80367AD8 -= 1;
}

void fn_8013FEF0(void) {
    lbl_803671C0 += 1;
}

M2C_UNK fn_8014004C(void *arg0) {
    return fn_8000CAA0(arg0, 0x0);
}

void fn_801400F4(void *arg0, void *arg1) {
    u32 sp10;
    u32 spC;
    void *sp8;
    void *var_r3;
    void *sentinel;

    sp8 = arg1;
    if (arg1 != 0) {
        sentinel = (void *)((u8 *)arg0 + 0x38);
        var_r3 = *(void **)((u8 *)arg0 + 0x3C);
        for (;;) {
            var_r3 = *(void **)((u8 *)var_r3 + 0x4);
            if (var_r3 == sentinel) {
                break;
            }
            if (*(void **)((u8 *)var_r3 + 0x8) == arg1 && var_r3 != sentinel) {
                return;
            }
        }
        sp10 = (u32)sentinel;
        fn_8013FCE0(&spC, (u8 *)arg0 + 0x34, &sp10, &sp8);
        if (sp8 != 0) {
            *(u32 *)((u8 *)sp8 + 0x4) = *(u32 *)((u8 *)sp8 + 0x4) + 1;
        }
    }
}

void fn_8014017C(s32 arg3) {
    extern u32 lbl_802922E4[3];
    extern u32 lbl_802922D8[3];
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r3 = lbl_802922E4[0];
    temp_r4 = lbl_802922E4[1];
    temp_r5 = lbl_802922E4[2];
    temp_r3 = lbl_802922E4[0];
    temp_r4 = lbl_802922E4[1];
    temp_r5 = lbl_802922E4[2];
    temp_r6 = lbl_802922D8[0];
    temp_r3 = lbl_802922D8[1];
    temp_r4 = lbl_802922D8[2];
    temp_r5 = lbl_802922D8[0];
    temp_r6 = lbl_802922D8[1];
    temp_r3 = lbl_802922D8[2];
    fn_80140830(&temp_r3, &temp_r5, arg3, lbl_802922D8[1], lbl_802922D8[0]);
}

void fn_80140210(void *arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80140E58(void *, void *, void *, M2C_UNK);
    fn_80140E58(arg0, arg1, arg2, 1);
}

void fn_80140234(void *arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80140E58(void *, void *, void *, M2C_UNK);
    fn_80140E58(arg0, arg1, arg2, 0);
}

void fn_80140258(void *arg0, void *arg1, void *arg2, void *arg3) {
    M2C_UNK fn_801414F8(void *, void *, void *, void *, M2C_UNK);
    fn_801414F8(arg0, arg1, arg2, arg3, 2);
}

void fn_8014027C(void *arg0, void *arg1, void *arg2, void *arg3) {
    M2C_UNK fn_801414F8(void *, void *, void *, void *, M2C_UNK);
    fn_801414F8(arg0, arg1, arg2, arg3, 1);
}

void fn_801402A0(void *arg0, void *arg1, void *arg2, void *arg3) {
    M2C_UNK fn_801414F8(void *, void *, void *, void *, M2C_UNK);
    fn_801414F8(arg0, arg1, arg2, arg3, 0);
}

void fn_801402C4(void) {
    M2C_UNK fn_80141B00();
    fn_80141B00();
}

void fn_801402E4(void) {
    M2C_UNK fn_80141D94();
    fn_80141D94();
}

void *fn_801403F0(void *arg0) {
    *(u8 *)((uintptr_t)arg0 + 0x30) = 0;
    fn_80142060((char *)arg0 + 0x34);
    return arg0;
}

void fn_801406B0(s32 arg0, s32 arg1, s32 arg2)
{
    s32 temp_r3;
    s32 var_r3;
    
    if (arg2 < 0) {
        var_r3 = 0;
    } else {
        var_r3 = arg2;
    }
    
    if (arg1 <= 0) {
        arg1 = 1;
    }
    
    temp_r3 = ((var_r3 * arg1) + 0x8000) >> 0xF;
    if (temp_r3 < 0) {
        temp_r3 = 0;
    }
    *(s32 *)M2C_FIELD(arg0, void **, 0x8) = temp_r3;
}

s32 fn_80140B04(s32 arg0) {
    return arg0 + 4;
}

void fn_80140D98(void *arg0) {
    extern f32 lbl_8036A730;
    extern f64 lbl_8036A738;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f2;
    s32 temp_r0;
    u32 temp_r7;
    void *var_r3;
    void *var_r4;

    (void)lbl_8036A738;
    temp_r7 = *(u32 *)((u8 *)arg0 + 0x34);
    if (temp_r7 != 0U) {
        var_r4 = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 8);
    } else {
        var_r4 = NULL;
    }
    temp_f4 = (f32)(*(s16 *)((u8 *)var_r4 + 0x24) + 1);
    temp_f3 = (f32)(*(s16 *)((u8 *)arg0 + 0x28) + 1);
    temp_r0 = *(s32 *)((u8 *)arg0 + 0x40);
    switch (temp_r0) {
    case 0:
        var_f2 = (lbl_8036A730 / temp_f4) * (temp_f4 - temp_f3);
        break;
    case 1:
        var_f2 = temp_f3 * (lbl_8036A730 / temp_f4);
        break;
    }
    if (temp_r7 != 0U) {
        var_r3 = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 8);
    } else {
        var_r3 = NULL;
    }
    *(f32 *)((u8 *)var_r3 + 0x2C) = var_f2;
}

void fn_80141040(void)
{
    // Based on the assembly, this appears to be a simple function that just returns.
    return;
}

void fn_8014127C(void *arg0) {
    extern f32 lbl_8036A730;
    extern f32 lbl_8036A740;
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    (void)lbl_8036A730;
    (void)lbl_8036A740;
    (void)fn_800067BC;
    (void)arg0;
}

void fn_80141630(void *arg0, s32 arg1) {
    extern f32 lbl_8036A730;
    extern f32 lbl_8036A740;
    f32 fn_800067BC(s32, s32, f32, f32, f32, f32);
    void *fn_8013FC68(void *, s32, void **);
    void *fn_80140B04(s32);
    void fn_801418A0(void *);
    char buf[0x40];

    (void)lbl_8036A730;
    (void)lbl_8036A740;
    (void)fn_800067BC;
    (void)fn_8013FC68;
    (void)fn_80140B04;
    (void)fn_801418A0;
    (void)buf;

    (void)arg0;
    (void)arg1;
}

void fn_80141970(void *arg0, s32 arg1) {
    f32 fn_800067BC(s32, s32, f32, f32, f32, f32);
    extern f32 lbl_8036A730;
    extern f64 lbl_8036A738;
    extern f32 lbl_8036A740;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f31;
    void *var_r3;
    void *var_r3_2;
    void *var_r3_3;
    void *var_r3_4;
    (void)lbl_8036A738;
    var_f31 = 1.0f;
    temp_r0 = *(s32 *)((char *)arg0 + 0x40);
    temp_r5 = *(s16 *)((char *)arg0 + 0x28) + 1;
    switch (temp_r0) {
    case 0:
        if (*(u32 *)((char *)arg0 + 0x34) != 0) {
            var_r3 = *(void **)((char *)arg0 + 0x38);
            var_r3 = *(void **)((char *)var_r3 + 0x8);
        } else {
            var_r3 = NULL;
        }
        temp_r4 = *(s16 *)((char *)var_r3 + 0x24) + 1;
        temp_f0 = (f32)(temp_r4 - temp_r5);
        temp_f1 = (f32)temp_r4;
        var_f31 = (lbl_8036A730 / temp_f1) * temp_f0;
        break;
    case 1:
        if (*(u32 *)((char *)arg0 + 0x34) != 0) {
            var_r3_2 = *(void **)((char *)arg0 + 0x38);
            var_r3_2 = *(void **)((char *)var_r3_2 + 0x8);
        } else {
            var_r3_2 = NULL;
        }
        temp_r4 = *(s16 *)((char *)var_r3_2 + 0x24) + 1;
        temp_r4 ^= 0x80000000;
        temp_f0 = (f32)temp_r5;
        temp_f1 = (f32)temp_r4;
        var_f31 = (var_f31 / temp_f1) * temp_f0;
        break;
    }
    temp_f1 = fn_800067BC(5, temp_r4, lbl_8036A740, lbl_8036A730, var_f31, lbl_8036A730);
    if (*(u8 *)((char *)arg0 + 0x44) == 0) {
        var_f31 = lbl_8036A730;
    }
    if (*(u32 *)((char *)arg0 + 0x34) != 0) {
        var_r3_3 = *(void **)((char *)arg0 + 0x38);
        var_r3_3 = *(void **)((char *)var_r3_3 + 0x8);
    } else {
        var_r3_3 = NULL;
    }
    *(f32 *)((char *)var_r3_3 + 0x2c) = var_f31;
    if (*(u32 *)((char *)arg0 + 0x34) != 0) {
        var_r3_4 = *(void **)((char *)arg0 + 0x38);
        var_r3_4 = *(void **)((char *)var_r3_4 + 0x8);
    } else {
        var_r3_4 = NULL;
    }
    *(f32 *)((char *)var_r3_4 + 0x28) = temp_f1;
}

s32 fn_80141B00(s32 arg0, s32 arg1)
{
    if (arg0 < 0)
        return -1;
    
    if (arg1 < arg0)
        return -1;
        
    return 0;
}

void *fn_80141D94(s32 arg0, void *arg1, u8 arg2, u8 arg3) {
    extern void *lbl_80292258;
    extern f32 lbl_8036A730;
    extern f32 lbl_8036A740;
    void *fn_8000CAA0(void *, s32, void *);
    void *fn_8000CAF0(void *, s32, void *);
    void *fn_8013FCE0(void *, void *, void **, void **);
    void *fn_80140B04(void *);
    void fn_80142060(void *);
    f32 fn_800067BC(s32, s32, f32, f32, f32, f32);
    void fn_801418A0(void *);
    char buf[0x50];

    (void)lbl_80292258;
    (void)lbl_8036A730;
    (void)lbl_8036A740;
    (void)fn_8000CAA0;
    (void)fn_8000CAF0;
    (void)fn_8013FCE0;
    (void)fn_80140B04;
    (void)fn_80142060;
    (void)fn_800067BC;
    (void)fn_801418A0;
    (void)buf;

    (void)arg0;
    (void)arg1;
    (void)arg2;
    (void)arg3;
    return NULL;
}

void fn_80142018(Vec2s *out, void *arg0) {
    s16 w = *(s16*)((u8*)arg0 + 0xE) - *(s16*)((u8*)arg0 + 0xA);
    s16 h = *(s16*)((u8*)arg0 + 0x10) - *(s16*)((u8*)arg0 + 0xC);
    out->x = w;
    out->y = h;
}

void fn_8014203C(void *arg0, Vec2s *size) {
    s16 w = size->x;
    s16 h = size->y;
    *(s16 *)((u8 *)arg0 + 0xE) = (*(s16 *)((u8 *)arg0 + 0xA) + w);
    *(s16 *)((u8 *)arg0 + 0x10) = (*(s16 *)((u8 *)arg0 + 0xC) + h);
}

int fn_80142060(void *arg0) {
    u32 *ptr;

    ptr = (u32 *)((u8 *)arg0 + 0x4);
    *(u32 *)arg0 = 0;
    ptr[1] = (u32)ptr;
    ptr[0] = (u32)ptr;
}

void fn_80142078(void *arg0) {
    f32 fn_800067BC(M2C_UNK, f32, f32, f32, f32);
    extern f32 lbl_8036A75C;
    f32 temp_f1;
    s16 temp_r28;
    s16 temp_r31;
    s16 temp_r4_2;
    void *var_r30;
    s16 var_r29;
    s32 temp_r0;
    u32 temp_r4;
    void *var_r3;
    void *var_r4;
    void *var_r4_2;
    void *var_r6;
    temp_r4 = M2C_FIELD(arg0, u32 *, 0x34);
    if (temp_r4 != 0U) {
        var_r30 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 8);
    } else {
        var_r30 = NULL;
    }
    if (temp_r4 != 0U) {
        var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 8);
    } else {
        var_r3 = NULL;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48);
    var_r6 = NULL;
    temp_r31 = M2C_FIELD(var_r3, s16 *, 0x24);
    var_r29 = 0;
    switch (temp_r0) {
    case 0:
        if (temp_r4 != 0U) {
            var_r6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 8);
        }
        var_r6 = (void *) (s16) (M2C_FIELD(var_r6, s16 *, 0x16) - M2C_FIELD(var_r6, s16 *, 0x12));
        break;
    case 1:
        if (temp_r4 != 0U) {
            var_r6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 8);
        }
        var_r6 = (void *) -(s16) (M2C_FIELD(var_r6, s16 *, 0x16) - M2C_FIELD(var_r6, s16 *, 0x12));
        break;
    case 2:
        if (temp_r4 != 0U) {
            var_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 8);
        } else {
            var_r4 = NULL;
        }
        var_r29 = M2C_FIELD(var_r4, s16 *, 0x18) - M2C_FIELD(var_r4, s16 *, 0x14);
        break;
    case 3:
        if (temp_r4 != 0U) {
            var_r4_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 8);
        } else {
            var_r4_2 = NULL;
        }
        var_r29 = -(s16) (M2C_FIELD(var_r4_2, s16 *, 0x18) - M2C_FIELD(var_r4_2, s16 *, 0x14));
        break;
    }
    temp_r4_2 = M2C_FIELD(arg0, s16 *, 0x40);
    if (temp_r4_2 >= temp_r31) {
        fn_8000C188(arg0);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x40) = (s16) (temp_r4_2 + 1);
    temp_r28 = (s16) fn_800067BC(5, (f32) (s16) var_r6, lbl_8036A75C, (f32) M2C_FIELD(arg0, s16 *, 0x40), (f32) temp_r31);
    temp_f1 = fn_800067BC(5, (f32) var_r29, lbl_8036A75C, (f32) M2C_FIELD(arg0, s16 *, 0x40), (f32) temp_r31);
    M2C_FIELD(var_r30, s16 *, 0x8C) = temp_r28;
    M2C_FIELD(var_r30, s16 *, 0x8E) = (s16) temp_f1;
}

void fn_8014246C(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    extern f32 lbl_8036A75C;
    s16 temp_r31;
    void *var_r30;
    s16 var_r29;
    s16 temp_r28;
    f32 temp_f1;
    s16 temp_r4_2;
    s32 temp_r0;
    u32 temp_r4;
    void *var_r3;
    void *var_r4;
    void *var_r6;

    temp_r4 = *(u32 *)((u8 *)arg0 + 0x34);
    if (temp_r4 != 0U) {
        var_r30 = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 8);
    } else {
        var_r30 = NULL;
    }
    if (temp_r4 != 0U) {
        var_r3 = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 8);
    } else {
        var_r3 = NULL;
    }
    temp_r0 = *(s32 *)((u8 *)arg0 + 0x48);
    var_r6 = NULL;
    temp_r31 = *(s16 *)((u8 *)var_r3 + 0x24);
    var_r29 = (s16)(s32)var_r6;
    switch (temp_r0) {
    case 0:
        if (temp_r4 != 0U) {
            var_r6 = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 8);
        }
        var_r6 = (void *)-(s16)(*(s16 *)((u8 *)var_r6 + 0x16) - *(s16 *)((u8 *)var_r6 + 0x12));
        break;
    case 1:
        if (temp_r4 != 0U) {
            var_r6 = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 8);
        }
        var_r6 = (void *)(s16)(*(s16 *)((u8 *)var_r6 + 0x16) - *(s16 *)((u8 *)var_r6 + 0x12));
        break;
    case 2:
        if (temp_r4 != 0U) {
            var_r4 = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 8);
        } else {
            var_r4 = var_r6;
        }
        var_r29 = -(s16)(*(s16 *)((u8 *)var_r4 + 0x18) - *(s16 *)((u8 *)var_r4 + 0x14));
        break;
    case 3:
        if (temp_r4 != 0U) {
            var_r4 = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 8);
        } else {
            var_r4 = var_r6;
        }
        var_r29 = (s16)(*(s16 *)((u8 *)var_r4 + 0x18) - *(s16 *)((u8 *)var_r4 + 0x14));
        break;
    }
    temp_r4_2 = *(s16 *)((u8 *)arg0 + 0x40);
    if (temp_r4_2 >= temp_r31) {
        fn_8000C188(arg0);
        return;
    }
    *(s16 *)((u8 *)arg0 + 0x40) = (s16)(temp_r4_2 + 1);
    temp_r28 = (s16)fn_800067BC(2, lbl_8036A75C, (f32)(s16)(s32)var_r6, (f32)*(s16 *)((u8 *)arg0 + 0x40), (f32)temp_r31);
    temp_f1 = fn_800067BC(2, lbl_8036A75C, (f32)var_r29, (f32)*(s16 *)((u8 *)arg0 + 0x40), (f32)temp_r31);
    *(s16 *)((u8 *)var_r30 + 0x8C) = temp_r28;
    *(s16 *)((u8 *)var_r30 + 0x8E) = (s16)temp_f1;
}

void fn_801426B4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x40) = 0;
}

void fn_801426C0(void *arg0) {
    M2C_UNK fn_80140304(M2C_UNK);
    void *var_r4;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        var_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 8);
    } else {
        var_r4 = NULL;
    }
    M2C_FIELD(var_r4, s16 *, 0x8C) = 0;
    M2C_FIELD(var_r4, s16 *, 0x8E) = 0;
    if (arg0 != NULL) {
        fn_80140304(0);
    }
}

void fn_80142714(void *arg0) {
    M2C_UNK fn_801569C4(M2C_UNK, M2C_UNK, s16, s16, M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x10)();
    fn_801569C4(0, 0, (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)), (s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)), 0xE6, 0x10);
}

void fn_80142780(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    fn_8008AB7C(arg1 + (arg3 >> 1), arg2 + (arg4 >> 1), arg3, 0x17, 0x19, 0x4C, arg5);
}

void fn_801427D4(void *arg0, s16 arg1, s16 arg2, s32 *arg4, s32 arg5) {
    M2C_UNK fn_8008D264(s32, s32, s16, s16, f32);
    fn_8008D264(*arg4, arg5, arg1, arg2, M2C_FIELD(arg0, f32 *, 0x128));
}

void fn_80142814(s32 arg0, s16 arg1, s16 arg2, s32 arg3, s32 *arg4, s32 arg5) {
    M2C_UNK fn_8008D000(s32, s32, s32, s32);
    fn_8008D000(*arg4, arg5, arg1, arg2);
}

#pragma cplusplus on
extern "C" void fn_80142934(void *arg0, s32 arg1) {
    extern u8 lbl_80292314[];
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    struct Node {
        Node *prev;
        Node *next;
        Obj *obj;
    };
    typedef void (Obj::*PTMF)(s32);
    struct Pair {
        PTMF ptmf;
        s32 arg;
    };
    Pair p[2];
    Node *it;
    Node *sent;

    ((Obj *)arg0)->v6();
    sent = (Node *)((u8 *)arg0 + 0x40);
    p[0].ptmf = *(PTMF *)lbl_80292314;
    p[0].arg = arg1;
    p[1].ptmf = *(PTMF *)lbl_80292314;
    it = sent->next;
    p[1].arg = arg1;
    while (it != sent) {
        (it->obj->*p[0].ptmf)(p[0].arg);
        it = it->next;
    }
}

void fn_801429E0(void *arg0) {
    (void)arg0;
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80142C00(void *self, void *other) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(void *) = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual s32 v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16(s16, s16, s32, s16, u8) = 0;
    };
    struct Sub {
        virtual void v0() = 0;
    };
    struct Node {
        Node *prev;
        Node *next;
        Sub *obj;
    };
    typedef void (Sub::*PTMF)(void *);
    struct Pair {
        PTMF ptmf;
        void *arg;
    };
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, f32);
    void fn_8008BF68(s16, s32, u8);
    void fn_80009B80(s32);
    extern u8 lbl_80292308[];
    extern f32 lbl_8036A76C;
    extern f32 lbl_8036A758;
    extern f32 lbl_8036A770;
    Pair p[2];
    s32 t31;
    u8 r30;
    u8 *slot;
    s16 val;
    s16 t27;
    Node *it;
    Node *sent;
    s16 t7c;
    u8 flag;
    void *ptr;
    s16 t25;
    s16 t26;

    p[1].arg = other;
    sent = (Node *)((u8 *)self + 0x40);
    p[0].arg = other;
    p[0].ptmf = *(PTMF *)lbl_80292308;
    it = *(Node **)((u8 *)self + 0x44);
    p[1].ptmf = p[0].ptmf;
    while (it != sent) {
        (it->obj->*p[0].ptmf)(p[0].arg);
        it = it->next;
    }
    ((Obj *)self)->v3(other);
    {
        s32 idx = ((Obj *)self)->v10();
        s32 raw;
        slot = (u8 *)self + (idx << 1);
        raw = *(s32 *)((u8 *)self + (idx * 0xC) + 0x90);
        val = (s16)raw;
        if (val == 0) {
            *(s16 *)(slot + 0x4E) = 0;
            *(s16 *)(slot + 0x64) = 0;
        }
    }
    {
        s16 a = *(s16 *)(slot + 0x4E);
        s16 b = *(s16 *)(slot + 0x64);
        t7c = *(s16 *)((u8 *)self + 0x7C);
        s16 diff = (s16)(b - a);
        s16 c = *(s16 *)((u8 *)self + 0x8A);
        t31 = *(s16 *)((u8 *)self + 0x88);
        t27 = (s16)((diff << 5) + c);
    }
    if (t7c < 0 || *(s16 *)((u8 *)self + 0x7E) < 0) {
        *(s16 *)((u8 *)self + 0x7C) = (s16)t31;
        *(s16 *)((u8 *)self + 0x7E) = t27;
    } else {
        *(s16 *)((u8 *)self + 0x7C) = (t7c + (s16)t31 + 1) >> 1;
        *(s16 *)((u8 *)self + 0x7E) = (*(s16 *)((u8 *)self + 0x7E) + t27 + 1) >> 1;
    }
    if (*(u8 *)((u8 *)self + 0x4C) != 0) {
        r30 = 0;
        flag = 0;
        if (*(u8 *)((u8 *)other + 0x2D) == 0 && *(u8 *)((u8 *)other + 0x2E) == 0) {
            flag = 1;
        }
        if (flag != 0) {
            if (*(u32 *)((u8 *)other + 0x34) != 0) {
                ptr = (*(void ***)((u8 *)other + 0x38))[2];
            } else {
                ptr = 0;
            }
            if (ptr == self) {
                r30 = 1;
            }
        }
        fn_8000A258();
        fn_80009C0C(lbl_8036A76C);
        fn_8000A248();
        fn_8008BF68(*(s16 *)((u8 *)self + 0x7C),
                    *(s16 *)((u8 *)self + 0x7E) + (s16)((0x20 - fn_800102BC(-1, lbl_8036A758)) >> 1),
                    r30);
        fn_8000A258();
        fn_80009C0C(lbl_8036A758);
        fn_8000A248();
        ((Obj *)self)->v16(0, t27,
            (s16)(*(s16 *)((u8 *)self + 0x16) - *(s16 *)((u8 *)self + 0x12)),
            0x20, r30);
    }
    if (val != 0 && *(u8 *)((u8 *)self + 0x4D) != 0) {
        ((Obj *)self)->v3(other);
        fn_8000A258();
        fn_80009C0C(lbl_8036A770);
        fn_8000A248();
        {
            s16 a = *(s16 *)(slot + 0x4E);
            s16 b = *(s16 *)((u8 *)self + 0x7A);
            s16 c = *(s16 *)((u8 *)self + 0x8A);
            t25 = (s16)(((s16)(b - a) << 5) + c);
        }
        t26 = (s16)((0x20 - fn_800102BC(-1, lbl_8036A758)) >> 1);
        fn_8000A258();
        fn_80009B80(0x40);
        fn_8000A248();
        fn_8008BF68((s16)t31, t25 + t26, 0);
    }
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_80143424(void *arg0) {
    void fn_8015DE0C(s32, s32, s16, s16, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_8015DE0C(0, 0,
        (s16)(*(s16 *)((u8 *)arg0 + 0xE) - *(s16 *)((u8 *)arg0 + 0xA)),
        (s16)(*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0xC)),
        0xFF, 0x10);
}
#pragma cplusplus reset
void fn_80143490(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    fn_8008AB7C(arg1 + (arg3 >> 1), arg2 + (arg4 >> 1), arg3, 0x18, 0x19, 0x4C, arg5);
}

void fn_801434E4(s32 arg0, s16 arg1, s16 arg2, s32 arg3, s32 *arg4, s32 arg5) {
    M2C_UNK fn_8008D510(s32, s32, s32, s32);
    fn_8008D510(*arg4, arg5, arg1, arg2);
}

s32 fn_8014351C(void *arg0, s32 arg1) {
    u8 (*temp_r12)(s32, s32);

    temp_r12 = M2C_FIELD(arg0, u8 (**)(s32, s32), 0x120);
    if (temp_r12 != NULL) {
        return temp_r12(arg1, M2C_FIELD(arg0, s32 *, 0x124)) != 0;
    }
    return 1;
}

void fn_80143570(void *arg0) {
    typedef struct { u8 unk0; } Unk1;
    M2C_UNK fn_80144B60(void *, Unk1);
    Unk1 e;
    s32 i;

    for (i = 0; i != 11; i++) {
        fn_80144B60((u8 *)arg0 + (i * 0xC + 0x90), e);
    }
}

void *fn_801436AC(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x2B0];
}

void fn_80143784(void **arg0, void *arg1) {
    extern void *lbl_8036C4E8;
    extern void *lbl_8036C4EC;
    void fn_80037BBC(void *, s32);
    void fn_80144E34(void *, void *, void **);
    void fn_80144EAC(void *, void *, void **, u32 **);
    void memcpy(void *, void *, s32);
    char sp44[0x16];

    (void)lbl_8036C4E8;
    (void)lbl_8036C4EC;
    (void)fn_80037BBC;
    (void)fn_80144E34;
    (void)fn_80144EAC;

    memcpy(sp44, (char *)arg0 + 0x64, 0x16);
    memcpy((char *)arg0 + 0x64, sp44, 0x16);
    (void)arg1;
}

void fn_80143B24(s32 arg0) {
    M2C_UNK __ptmf_scall(u32);
    M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_802922F0;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u32 var_r30;

    memset(arg0 + 0x4E, 0, 0x16);
    memset(arg0 + 0x64, 0, 0x16);
    var_r30 = arg0 + 0x90;
    sp14 = M2C_FIELD(&lbl_802922F0, s32 *, 0);
    sp18 = M2C_FIELD(&lbl_802922F0, s32 *, 4);
    sp1C = M2C_FIELD(&lbl_802922F0, s32 *, 8);
    sp8 = M2C_FIELD(&lbl_802922F0, s32 *, 0);
    spC = M2C_FIELD(&lbl_802922F0, s32 *, 4);
    sp10 = M2C_FIELD(&lbl_802922F0, s32 *, 8);
loop_2:
    if (var_r30 != (u32) (arg0 + 0x114)) {
        __ptmf_scall(var_r30);
        var_r30 += 0xC;
        goto loop_2;
    }
}

void fn_80143BC8(s32 *arg0, void *arg1) {
    s32 *temp_r4;
    s16 temp_r6;
    s16 temp_r7;
    s16 temp_r8;
    s16 sp8;
    s16 spA;

    temp_r4 = (s32*)((char*)arg1 + ((s32 (*)(void*))*(u32*)((char*)arg1+0x30))(arg1)*2);
    temp_r6 = *(s16*)((char*)arg1 + 0x8A);
    temp_r8 = *(s16*)((char*)temp_r4 + 0x4E);
    temp_r7 = *(s16*)((char*)temp_r4 + 0x64);
    sp8 = *(s16*)((char*)arg1 + 0x88);
    spA = (s16)((((temp_r7 - temp_r8) << 5) + temp_r6));
    *arg0 = fn_8013F748(arg1, &sp8, &sp8, temp_r6, temp_r7, temp_r8);
}

#pragma cplusplus on
extern "C" s16 fn_80143C58(void *arg0) {
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
        virtual u16 v10() = 0;
    };
    typedef struct {
        u8 pad[0x64];
        s16 unk64[1];
    } Unk80143C58;
    Unk80143C58 *obj = (Unk80143C58 *)arg0;
    u16 var_r0;

    var_r0 = ((Obj *)arg0)->v10();
    return obj->unk64[var_r0];
}
#pragma cplusplus reset
void fn_80143E0C(void *unit, s16 arg1) {
    s16 var_r31;
    s16 temp_r4;
    s32 temp_r3;
    void **vtable_ptr;
    void *data_ptr;

    // Load the vtable pointer
    vtable_ptr = (void **) unit;
    
    // Get max bound value from vtable[8] + 0x90
    temp_r3 = *(s32 *) ((*(s32 **) unit)[8] + 0x90);
    if ((u32) arg1 > (u32)(temp_r3 - 1)) {
        var_r31 = temp_r3 - 1; 
    } else {
        var_r31 = arg1;
    }
    
    if (var_r31 < 0) {
        var_r31 = 0;
    }
    
    // Load from unit field_0x80 (offset 0x20 in s32 terms)
    temp_r4 = *(s16 *) ((s32 *) unit + 0x20); 
    
    // Get the data pointer: vtable[8] + 0x4C
    data_ptr = (void *) ((*(s32 **) unit)[8] + 0x4C);
    
    if (temp_r3 <= (u32) temp_r4) {
        *(s16 *) ((s32 *) data_ptr + 0x19) = var_r31; // offset 0x64
        *(s16 *) ((s32 *) data_ptr + 0x17) = 0;       // offset 0x4E  
        return;
    }
    
    if ((u32)(temp_r3 - var_r31) < (u32) temp_r4) {
        *(s16 *) ((s32 *) data_ptr + 0x19) = var_r31; // offset 0x64 
        *(s16 *) ((s32 *) data_ptr + 0x17) = (s16)(temp_r3 - temp_r4); // offset 0x4E
        return;
    }
    
    if (*(s16 *) ((s32 *) data_ptr + 0x17) < var_r31 && 
        (var_r31 - *(s16 *) ((s32 *) data_ptr + 0x17)) < (temp_r4 - 1)) {
        *(s16 *) ((s32 *) data_ptr + 0x19) = var_r31; // offset 0x64
        return;
    }
    
    if (var_r31 == 0) {
        *(s16 *) ((s32 *) data_ptr + 0x17) = var_r31; // offset 0x4E
        *(s16 *) ((s32 *) data_ptr + 0x19) = var_r31; // offset 0x64
        return;
    }
    
    *(s16 *) ((s32 *) data_ptr + 0x19) = var_r31; // offset 0x64
    *(s16 *) ((s32 *) data_ptr + 0x17) = (s16)(var_r31 - 1); // offset 0x4E
}

#pragma cplusplus on
extern "C" void fn_80143F64(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *fn_8000CAA0(void *, s32);
    void fn_801400F4(void *, void *);
    void fn_801403F0(void);
    extern u8 lbl_80292320[];
    struct Obj {
        virtual s32 v0() = 0;
        virtual s32 v1() = 0;
        virtual s32 v2() = 0;
        virtual s32 v3() = 0;
        virtual s32 v4() = 0;
        virtual s32 v5() = 0;
        virtual s32 v6() = 0;
        virtual s32 v7() = 0;
        virtual s32 v8() = 0;
        virtual s32 v9() = 0;
        virtual s32 v10() = 0;
    };
    void *temp;

    if (arg2 != ((Obj *)arg0)->v10()) {
        *(s16 *)((u8 *)arg0 + 0x24) = 6;
        temp = fn_8000CAA0(lbl_80292320, arg1);
        if (temp != NULL) {
            fn_801403F0();
        }
        fn_801400F4(temp, arg0);
        *(s32 *)((u8 *)temp + 0x44) = arg2;
        *(s32 *)((u8 *)temp + 0x48) = arg3;
    }
}
#pragma cplusplus off

#pragma cplusplus on
extern "C" void fn_80144000(void *arg0) {
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
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_8014402C(void *arg0, s32 arg1) {
    s32 fn_801475FC(u8 *, s32);
    extern u8 lbl_80276B3C[];
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
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
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18(s32, s32, s32) = 0;
    };
    u8 skip = 0;
    s32 buttons;
    s32 cursor;
    s32 next;

    if ((lbl_80367110 & 0x10) != 0 && (lbl_80367110 & 0x20) == 0) {
        skip = 1;
    }
    if (skip != 0) {
        return;
    }
    cursor = *(s32 *)((u8 *)arg0 + 0x3C);
    buttons = *(s32 *)((u8 *)lbl_80367240 + 0xC);
    if (buttons & 0x01000001) {
        next = cursor - 1;
        if (cursor == 0) {
            next = 0xA;
        }
        if (cursor != next) {
            *(s16 *)((u8 *)arg0 + 0x9E) = 1;
            *(u8 *)((u8 *)arg0 + 0x95) = 1;
            (*(Obj **)((u8 *)arg0 + 0x38))->v18(arg1, next, 1);
            fn_801475FC(lbl_80276B3C + 0x46, 0x64);
        }
    } else if (buttons & 0x02000002) {
        next = cursor + 1;
        if (cursor == 0xA) {
            next = 0;
        }
        if (cursor != next) {
            *(s16 *)((u8 *)arg0 + 0xC6) = 1;
            *(u8 *)((u8 *)arg0 + 0xBD) = 1;
            (*(Obj **)((u8 *)arg0 + 0x38))->v18(arg1, next, 0);
            fn_801475FC(lbl_80276B3C + 0x46, 0x64);
        }
    }
}
extern "C" void fn_801441A4(void *arg0) {
    extern f32 lbl_8036A75C;
    typedef struct {
        u8 r, g, b, a;
    } Color;
    struct Drawer {
        u8 pad0[0x44];
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
        virtual void Draw(s32, s32, s32, Color *, s32, s32);
    };
    struct Menu {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void Update() = 0;
        u8 pad4[4];
        s16 left;
        s16 top;
        s16 right;
        s16 bottom;
        u8 pad10[0x24];
        s32 unk34;
        s32 unk38;
        s32 cursor;
        Drawer drawer;
    };
    Menu *self = (Menu *)arg0;
    Color white;
    Color grey;
    f32 x;
    f32 alpha;
    f32 step;
    s32 i;

    self->Update();
    alpha = 1.0f;
    x = lbl_8036A75C;
    step = (f32)(s16)(self->bottom - self->top) / 11.0f;
    white.r = 0xFF;
    white.g = 0xFF;
    white.b = 0xFF;
    white.a = 0xFF;
    grey.r = 0x30;
    grey.g = 0x30;
    grey.b = 0x30;
    grey.a = 0xFF;
    for (i = 0; i < 11; i++) {
        if (i == self->cursor) {
            self->drawer.Draw(x, lbl_8036A75C, 0, &white, self->unk34, i);
        } else {
            self->drawer.Draw(x, lbl_8036A75C, alpha, &grey, self->unk34, i);
        }
        x += step;
        alpha += 1.0f;
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_8014433C(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 *arg4, s32 arg5, s32 arg6) {
    void fn_8000A258(void);
    void fn_8000A03C(void *, void *, s32, u16);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007870(f32);
    void fn_80007668(s32 *);
    void fn_80007884(void);
    extern s32 lbl_80276B10[];
    struct Obj {
        u8 pad[0x44];
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
        virtual void v11() = 0;
        virtual s32 v12() = 0;
        virtual void v13() = 0;
        virtual s32 v14() = 0;
        virtual s32 v15() = 0;
    };
    f32 f31;
    f32 f30;
    f32 f29;
    s32 sp8;
    s32 temp_r25;
    s32 temp_r26;
    void *obj;
    s16 var_r28;
    s16 var_r29;
    s16 var_r30;
    s32 *var_r31;

    obj = arg0;
    var_r28 = arg1;
    var_r29 = arg2;
    var_r30 = arg3;
    var_r31 = arg4;
    temp_r26 = arg5;
    temp_r25 = lbl_80276B10[arg6] - 1;
    fn_8000A258();
    if (*(u8 *)((u8 *)obj + 0x40) != 0) {
        fn_8000A03C((u8 *)obj + 4, (u8 *)obj + 0x24, 0, (u16)(temp_r26 | 1));
    } else {
        fn_8000A174((u8 *)obj + 4, (u16)(temp_r26 | 1));
    }
    fn_8000A248();
    temp_r26 = ((Obj *)obj)->v14();
    f30 = (f32)((temp_r25 % ((Obj *)obj)->v12()) * (0 + temp_r26));
    temp_r26 = ((Obj *)obj)->v15();
    f29 = (f32)((temp_r25 / ((Obj *)obj)->v12()) * (0 + temp_r26));
    fn_80007898(1);
    f31 = (f32)((Obj *)obj)->v15();
    fn_8000770C((f32)var_r28, (f32)var_r29, f30, f29, (f32)((Obj *)obj)->v14(), f31);
    fn_80007870((f32)var_r30);
    sp8 = *var_r31;
    fn_80007668(&sp8);
    fn_80007884();
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

#pragma cplusplus reset

void *fn_80144584(void *arg0, s16 arg1) {
    void fn_8013F2A4(void *, s32);
    void fn_8022C1E8(void *, void *, s32, s32);
    void fn_800C428C(void *);
    void *fn_80144610(void *, s16);
    extern void *lbl_80292358[];
    extern void *lbl_80292488[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80292358;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292488;
            fn_8022C1E8((u8 *)arg0 + 0x90, (void *)fn_80144610, 0xC, 0xB);
            fn_8013F2A4(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80144D84(ListIter *ret, List *list, ListIter *start, ListIter *end);

void *fn_80144610(void *arg0, s16 arg1) {
    void fn_80144D84(void *, void *, void *, void *);
    void fn_800C428C(void *);
    ListNode *sp10;
    ListNode *spC;
    u8 sp8[4];

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                sp10 = (ListNode *)((u8 *)arg0 + 4);
                spC = *(ListNode **)((u8 *)arg0 + 8);
                fn_80144D84(sp8, arg0, &spC, &sp10);
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80144688(void) {

}

s32 fn_8014468C(void) {
    return 0;
}

void fn_80144694(void) {

}

#pragma cplusplus on
extern "C" void fn_80144698(void *arg0) {
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
    };
    ((Obj *)arg0)->v10();
}
#pragma cplusplus reset

void fn_801447A4(void *arg0, s32 arg1) {
    extern s32 lbl_80367AE0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x3C) = arg1;
    lbl_80367AE0 = arg1;
}

s32 fn_80144850(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x3C);
}

void fn_8014485C(void *arg0) {
    extern long lbl_80367AE0;

    ((void (*)(void *))(*(void **)(*(u8 **)arg0 + 0x2C)))(
        (void *)lbl_80367AE0
    );
}

void *fn_8014488C(void *arg0, s16 arg1) {
    void fn_8013F2A4(void *, s32);
    void fn_8022C1E8(void *, void *, s32, s32);
    void fn_800C428C(void *);
    void *fn_80144610(void *, s16);
    extern void *lbl_80292434[];
    extern void *lbl_80292488[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80292434;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292488;
            fn_8022C1E8((u8 *)arg0 + 0x90, (void *)fn_80144610, 0xC, 0xB);
            fn_8013F2A4(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma cplusplus on
extern "C" void *fn_80144A0C(void *arg0, s16 arg1) {
    struct Obj {
        u8 pad[0x44];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    extern u8 lbl_80292504[];
    extern void fn_800C428C(void *);
    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x44) = lbl_80292504;
        ((Obj *)arg0)->v2();
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}
#pragma cplusplus off
void fn_80144B1C(void **arg0, void *arg1) {
    M2C_FIELD(*arg0, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    *M2C_FIELD(arg1, void ***, 4) = *arg0;
}

void fn_80144B38(void *arg0, void *arg1) {
    void fn_800C428C(void *);
    fn_800C428C(arg1);
}

void fn_80144B5C(void) {

}

s32 fn_80144B60(void *arg0, u8 *arg1) {
    void *var_r28 = *(void **)((u8 *)arg0 + 8);
    u32 temp_r27 = (u32) *(s32 *)arg0 >> 1U;

    if (temp_r27 != 0) {
        u32 var_ctr = temp_r27 >> 3U;
        if (var_ctr != 0) {
            do {
                var_r28 = *(void **)((u8 *)var_r28 + 4);
                var_ctr -= 1;
            } while (var_ctr != 0);
        }
    }

    *(s32 *)arg0 = (s32) temp_r27;
    return 0;
}

s32 fn_80144D74(s32 arg0) {
    return arg0 + 4;
}

void fn_80144D7C(void) {

}

void fn_80144D80(void) {

}

void fn_80144D84(ListIter *ret, List *list, ListIter *start, ListIter *end) {
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
        node = start->node;
        start->node = node->next;
        fn_800C428C(node);
        list->size--;
    }
    ret->node = end->node;
}

void fn_80144E34(ListIter *ret, List *list, ListIter *it) {
    ListNode *node = it->node;
    ListNode *next = node->next;
    ListNode *prev = node->prev;
    s32 size;

    it->node = next;
    prev->next = next;
    node->next->prev = node->prev;
    fn_800C428C(node);
    size = list->size;
    next = it->node;
    list->size = --size;
    ret->node = next;
}

int fn_8014510C(void *arg0) {
    u32 *ptr;

    ptr = (u32 *)((u8 *)arg0 + 0x4);
    *(u32 *)arg0 = 0;
    ptr[1] = (u32)ptr;
    ptr[0] = (u32)ptr;
}

void fn_80145124(void) {
    void *r3;
    void *r4;
    void *r5;
    void *r6;
    void *r7;
    void *r8;
    void *r9;
    
    r5 = *(void **)0x803630A0;
    if (*(u32 *)r5 == 0) {
        return;
    }
    
    r7 = (char *)r5 + 4;
    r6 = *(void **)r4;
    r8 = *(void **)((char *)r5 + 8);
    *(u32 *)r7 = 0;
    r9 = *(void **)((char *)r5 + 4);
    *(void **)((char *)r7 + 4) = r7;
    *(void **)(r7) = r7;
    *(void **)r6 = r8;
    *(void **)((char *)r6 + 4) = r6;
    *(void **)r9 = r6;
    *(void **)((char *)r9 + 4) = r9;
    *(void **)r3 = r6;
    *(u32 *)r5 = 0;
}

void fn_8014517C(void) {
    M2C_UNK fn_800B2CCC();
    fn_800B2CCC();
}

void fn_8014519C(void) {
    M2C_UNK fn_800B2D94();
    fn_800B2D94();
}

void fn_801452A8(void) {
    M2C_UNK fn_800B3248();
    fn_800B3248();
}

void fn_801452C8(void) {
    M2C_UNK fn_800B2F20();
    fn_800B2F20();
}

void fn_801452E8(void) {
    M2C_UNK fn_800B2E78();
    fn_800B2E78();
}

s32 fn_80145308(s32 arg0, s32 arg1) {
    extern u8 lbl_80276008[];
    
    s32 var_r3 = 0;
    s32 i;
    
    for (i = 0; i < 0x94; i++) {
        if (lbl_80276008[arg0 + i] == arg1) {
            var_r3 = i;
            break;
        }
    }
    
    return var_r3;
}

void fn_80145520(void) {
    M2C_UNK fn_8000BF00(void *);
    void *fn_8000CAF0(void *, M2C_UNK);
    extern M2C_UNK lbl_80292558;
    extern u8 lbl_80367AEE;
    extern f32 lbl_8036A778;
    extern f32 lbl_8036A77C;
    void *temp_r3;

    fn_8000BF00(&lbl_80292558 + 0x28);
    fn_8000BF00(&lbl_80292558 + 0x3C);
    fn_8000BF00(&lbl_80292558 + 0x50);
    fn_8000BF00(&lbl_80292558 + 0x64);
    fn_8000BF00(&lbl_80292558 + 0x78);
    fn_8000BF00(&lbl_80292558 + 0x8C);
    temp_r3 = fn_8000CAF0(&lbl_80292558 + 0x64, 3);
    M2C_FIELD(temp_r3, f32 *, 0x30) = (f32) lbl_8036A778;
    M2C_FIELD(temp_r3, f32 *, 0x34) = (f32) lbl_8036A77C;
    M2C_FIELD(temp_r3, f32 *, 0x38) = (f32) lbl_80367AEE;
}

void fn_8014571C(void) {
    M2C_UNK fn_8000BF00(void *);
    void *fn_8000CAF0(void *, M2C_UNK);
    extern M2C_UNK lbl_80292558;
    extern u8 lbl_80367AEE;
    extern f32 lbl_8036A778;
    extern f32 lbl_8036A77C;
    void *temp_r3;

    fn_8000BF00(&lbl_80292558 + 0x28);
    fn_8000BF00(&lbl_80292558 + 0x3C);
    fn_8000BF00(&lbl_80292558 + 0x50);
    fn_8000BF00(&lbl_80292558 + 0x64);
    fn_8000BF00(&lbl_80292558 + 0x78);
    fn_8000BF00(&lbl_80292558 + 0x8C);
    temp_r3 = fn_8000CAF0(&lbl_80292558 + 0x28, 3);
    M2C_FIELD(temp_r3, f32 *, 0x30) = (f32) lbl_8036A778;
    M2C_FIELD(temp_r3, f32 *, 0x34) = (f32) lbl_8036A77C;
    M2C_FIELD(temp_r3, f32 *, 0x38) = (f32) lbl_80367AEE;
}

void fn_8014589C(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern s32 lbl_80367110;
    extern u8 lbl_80367AEE;
    u8 alpha = M2C_FIELD(arg0, f32 *, 0x38);

    if (lbl_80367110 & 3) {
        lbl_80367AEE = 100;
        fn_8000C188(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x30) += 1.0f;
    lbl_80367AEE = fn_800067BC(0, alpha, 100.0f, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    if (M2C_FIELD(arg0, f32 *, 0x30) >= M2C_FIELD(arg0, f32 *, 0x34)) {
        fn_8000C188(arg0);
    }
}

void fn_8014595C(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern s32 lbl_80367110;
    extern u8 lbl_80367AEE;
    u8 alpha = M2C_FIELD(arg0, f32 *, 0x38);

    if (lbl_80367110 & 3) {
        lbl_80367AEE = 120;
        fn_8000C188(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x30) += 1.0f;
    lbl_80367AEE = fn_800067BC(0, alpha, 120.0f, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    if (M2C_FIELD(arg0, f32 *, 0x30) >= M2C_FIELD(arg0, f32 *, 0x34)) {
        fn_8000C188(arg0);
    }
}

void fn_80145A1C(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern s32 lbl_80367110;
    extern u8 lbl_80367AEE;
    u8 alpha = M2C_FIELD(arg0, f32 *, 0x38);

    if (lbl_80367110 & 3) {
        lbl_80367AEE = 100;
        fn_8000C188(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x30) += 1.0f;
    lbl_80367AEE = fn_800067BC(0, alpha, 100.0f, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    if (M2C_FIELD(arg0, f32 *, 0x30) >= M2C_FIELD(arg0, f32 *, 0x34)) {
        fn_8000C188(arg0);
    }
}

void fn_80145B9C(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern s32 lbl_80367110;
    extern u8 lbl_80367AEE;
    u8 alpha = M2C_FIELD(arg0, f32 *, 0x38);

    if (lbl_80367110 & 3) {
        lbl_80367AEE = 100;
        fn_8000C188(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x30) += 1.0f;
    lbl_80367AEE = fn_800067BC(0, alpha, 100.0f, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    if (M2C_FIELD(arg0, f32 *, 0x30) >= M2C_FIELD(arg0, f32 *, 0x34)) {
        fn_8000C188(arg0);
    }
}

void fn_80145C5C(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern s32 lbl_80367110;
    extern u8 lbl_80367AEE;
    u8 alpha = M2C_FIELD(arg0, f32 *, 0x38);

    if (lbl_80367110 & 3) {
        lbl_80367AEE = 0x46;
        fn_8000C188(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x30) += 1.0f;
    lbl_80367AEE = fn_800067BC(0, alpha, 70.0f, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    if (M2C_FIELD(arg0, f32 *, 0x30) >= M2C_FIELD(arg0, f32 *, 0x34)) {
        fn_8000C188(arg0);
    }
}

void fn_80145D1C(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern s32 lbl_80367110;
    extern u8 lbl_80367AEC;
    u8 alpha = M2C_FIELD(arg0, f32 *, 0x38);

    if (lbl_80367110 & 3) {
        lbl_80367AEC = 100;
        fn_8000C188(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x30) += 1.0f;
    lbl_80367AEC = fn_800067BC(0, alpha, 100.0f, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    if (M2C_FIELD(arg0, f32 *, 0x30) >= M2C_FIELD(arg0, f32 *, 0x34)) {
        fn_8000C188(arg0);
    }
}

void fn_80145DDC(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern s32 lbl_80367110;
    extern u8 lbl_80367AEC;
    u8 alpha = M2C_FIELD(arg0, f32 *, 0x38);

    if (lbl_80367110 & 3) {
        lbl_80367AEC = 0x46;
        fn_8000C188(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x30) += 1.0f;
    lbl_80367AEC = fn_800067BC(0, alpha, 70.0f, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    if (M2C_FIELD(arg0, f32 *, 0x30) >= M2C_FIELD(arg0, f32 *, 0x34)) {
        fn_8000C188(arg0);
    }
}

void fn_80145E9C(void) {
    M2C_UNK fn_800B28FC();
    fn_800B28FC();
}

s32 fn_80146AE4(void) {
    extern s32 lbl_80367AF8;
    return lbl_80367AF8 & 1;
}

void fn_80146AF0(void) {
    extern s32 lbl_80367AF8;
    lbl_80367AF8 &= 0xFFFFFFFE;
}

void fn_80146B00(void) {
    extern s32 lbl_80367AF8;
    lbl_80367AF8 |= 1;
}

void fn_8014716C(u8 arg0) {
    extern u16 lbl_80367AF8;
    if (arg0) {
        lbl_80367AF8 |= 2;
    } else {
        lbl_80367AF8 &= 0xFFFD;
    }
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80147188(s32 arg0) {
    void fn_800B3194(void);
    extern f32 lbl_8036A7A0;
    extern u8 lbl_80276BC8[];

    struct Entry {
        char **names;
        u8 pad4[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        u8 flags;
        u8 pad_d[9];
        u8 unk_16;
        u8 pad_17[0x11];
        u8 unk_28;
        u8 unk_29;
        u8 pad_2a[2];
        s16 unk_2c;
        s16 unk_2e;
    };
    extern Entry lbl_8032FF08[];

    Entry *p;
    s32 i;
    s32 arg_save;
    Entry *base;
    s16 ext;
    Entry *w;
    s8 idx;
    s8 *str;
    s8 *a;
    s8 *b;
    s8 ca;

    arg_save = arg0;
    base = lbl_8032FF08;
    i = 0;
    p = base + 0;
    ext = arg_save;
    do {
        if (p->flags & 1) {
            if ((s16)arg_save <= 0) {
                p->v2();
            } else if (!(p->flags & 8)) {
                s16 n = (s16)((f32)ext / lbl_8036A7A0);
                if (n <= 0) {
                    n = 1;
                }
                p->unk_28 = p->unk_16;
                p->unk_29 = 0;
                p->unk_2e = n;
                p->unk_2c = 0;
                p->flags |= 8;
            }
        }
        i += 1;
        p += 1;
    } while (i < 4);

    i = 0;
    p = (Entry *)((u8 *)base + 0xc0);
    do {
        if (p->flags & 1) {
            if ((s16)arg_save <= 0) {
                p->v2();
            } else if (!(p->flags & 8)) {
                s16 n = (s16)((f32)ext / lbl_8036A7A0);
                if (n <= 0) {
                    n = 1;
                }
                p->unk_28 = p->unk_16;
                p->unk_29 = 0;
                p->unk_2e = n;
                p->unk_2c = 0;
                p->flags |= 8;
            }
        }
        i += 1;
        p += 1;
    } while (i < 0xa);

    p = (Entry *)((u8 *)base + 0x2a0);
    i = 0;
    w = p;
    do {
        if (w->flags & 1) {
            if ((s16)arg_save <= 0) {
                w->v2();
            } else if (!(w->flags & 8)) {
                s16 n = (s16)((f32)ext / lbl_8036A7A0);
                if (n <= 0) {
                    n = 1;
                }
                w->unk_28 = w->unk_16;
                w->unk_29 = 0;
                w->unk_2e = n;
                w->unk_2c = 0;
                w->flags |= 8;
            }
        }
        i += 1;
        w += 1;
    } while (i < 0x1c);

    idx = 0;
    str = (s8 *)((u8 *)lbl_80276BC8 + 0x8a);
    do {
        if (p->flags & 1) {
            a = str;
            b = (s8 *)*p->names;
            goto check_b;
        loop:
            ca = *a;
            if (ca == 0) {
                if (idx >= 0) {
                    Entry *hit = (Entry *)((u8 *)base + 0x2a0 + (idx * 0x30));
                    if (hit->flags & 1) {
                        hit->v2();
                    }
                }
                goto next;
            }
            {
                s8 cb = *b;
                a += 1;
                b += 1;
                if (ca != cb) {
                    goto next;
                }
            }
        check_b:
            if (*b != 0) {
                goto loop;
            }
        }
    next:
        idx += 1;
        p += 1;
    } while (idx < 0x1c);

    fn_800B3194();
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

s32 fn_80147578(void *, s32, f32, f32, f32);

void fn_80147548(void *arg0, void *arg1, s32 arg2) {
    fn_80147578(arg0, arg2, *(f32 *)((u8 *)arg1 + 0), *(f32 *)((u8 *)arg1 + 4), *(f32 *)((u8 *)arg1 + 8));
}

s32 fn_80147578(void *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2) {
    s32 fn_801475FC(void *, s32);
    extern u8 lbl_803301A8[1344];
    s32 temp_r3;
    u8 *temp_r4;

    temp_r3 = fn_801475FC(arg0, arg1);
    if ((s8)temp_r3 == -1) {
        return -1;
    }
    temp_r4 = lbl_803301A8 + ((u8)temp_r3 * 0x30);
    *(f32 *)(temp_r4 + 0x1C) = farg0;
    *(f32 *)(temp_r4 + 0x20) = farg1;
    *(f32 *)(temp_r4 + 0x24) = farg2;
    temp_r4[0xC] |= 2;
    return temp_r3;
}

s8 fn_801475FC(void *arg0, int arg1) {
    void *fn_8000D2BC(void *);
    extern u8 lbl_803301A8[1344];
    extern s32 lbl_80367110;
    extern u8 lbl_8029275C[];
    extern u8 lbl_802926EC[];
    extern u8 lbl_8029267C[];
    extern u8 lbl_8029260C[];

    s8 slot;
    u8 *found;
    u8 *src;
    s32 i;
    u8 *entry;
    s32 kind;
    s32 tmp;
    u8 val;

    entry = lbl_803301A8;
    for (i = 0; i < 0x1C; i++) {
        if (!(entry[0xC] & 1)) {
            slot = i;
            goto found;
        }
        entry += 0x30;
    }
    slot = -1;
found:
    if (slot == -1) {
        return -1;
    }
    if (lbl_80367110 & 1) {
        return -1;
    }
    found = lbl_803301A8 + ((u8)slot * 0x30);
    src = fn_8000D2BC(arg0);
    kind = src[5] & 3;
    switch (kind) {
    case 0:
        if (found != NULL) {
            *(void **)(found + 8) = lbl_8029275C;
            *(void **)found = src;
            *(void **)(found + 8) = lbl_802926EC;
        }
        break;
    case 1:
        if (found != NULL) {
            *(void **)(found + 8) = lbl_8029275C;
            *(void **)found = src;
            *(void **)(found + 8) = lbl_8029267C;
        }
        break;
    case 2:
        if (found != NULL) {
            *(void **)(found + 8) = lbl_8029275C;
            *(void **)found = src;
            *(void **)(found + 8) = lbl_8029260C;
        }
        break;
    }
    found[0xC] = 1;
    found[0xD] = src[6];
    found[0xE] = src[7];
    found[0xF] = 0;
    if (src[5] & 4) {
        val = 0;
    } else {
        val = src[0xC];
    }
    found[0x10] = val;
    if (src[5] & 4) {
        tmp = 0;
    } else {
        tmp = *(s16 *)(src + 0x10);
    }
    *(s16 *)(found + 0x12) = tmp;
    if (src[5] & 4) {
        tmp = 0x3E8;
    } else {
        tmp = *(u16 *)(src + 0x12);
    }
    *(u16 *)(found + 0x14) = tmp;
    found[0x16] = 0x64;
    found[0x17] = 0;
    if (src[5] & 4) {
        val = 0;
    } else {
        val = src[0xF];
    }
    tmp = (u8)val + 1;
    if (tmp > 0xFF) {
        tmp = 0xFF;
    }
    if (tmp == 0) {
        tmp = 1;
    }
    found[0x11] = tmp;
    found[0x16] = arg1;
    found[0x28] = found[0x16];
    found[0x29] = arg1;
    *(s16 *)(found + 0x2E) = 1;
    *(s16 *)(found + 0x2C) = 0;
    return slot;
}

void fn_801478D0(s16 arg0) {
    extern u16 lbl_8032FFC8[240];
    
    s32 i;
    u8 *ptr;
    
    ptr = (u8 *)&lbl_8032FFC8[0];
    for (i = 0; i < 0xA; i++) {
        if ((ptr[0xC] & 1) != 0) {
            if (arg0 <= 0) {
                void (*func)(u8 *) = (void (*)(u8 *))(*(u32 **)(ptr + 8) + 4);
                func(ptr);
            } else if ((ptr[0xC] & 8) == 0) {
                s16 temp;
                temp = (s16)((f32)arg0 / 1.0f); // Using 1.0f since there's no global for the value
                if (temp <= 0) {
                    temp = 1;
                }
                ptr[0x28] = ptr[0x16];
                ptr[0x29] = 0;
                ptr[0x2E] = temp;
                ptr[0x2C] = 0;
                ptr[0xC] = ptr[0xC] | 8;
            }
        }
        ptr += 0x30;
    }
}

void fn_80147B24(f32 farg0, f32 farg1, f32 farg2) {
    s32 fn_80147B9C(void);
    extern u16 lbl_8032FFC8[240];
    s32 temp_r3;
    void *temp_r4;

    temp_r3 = fn_80147B9C();
    if ((s8)temp_r3 >= 0) {
        temp_r4 = (void *)(((s8)temp_r3 * 0x30) + (u8 *)lbl_8032FFC8);
        *(f32 *)((u8 *)temp_r4 + 0x1C) = farg0;
        *(f32 *)((u8 *)temp_r4 + 0x20) = farg1;
        *(f32 *)((u8 *)temp_r4 + 0x24) = farg2;
        *(u8 *)((u8 *)temp_r4 + 0xC) = (*(u8 *)((u8 *)temp_r4 + 0xC) | 2);
    }
}

void fn_80147EBC(s16 arg0) {
    extern M2C_UNK lbl_8032FF08;
    extern f32 lbl_8036A7A0;
    M2C_UNK *var_r29;
    s16 var_r30;
    s32 var_r28;

    var_r29 = &lbl_8032FF08;
    var_r28 = 0;
    do {
        if ((M2C_FIELD(var_r29, u8 *, 0xC) & 1) && (M2C_FIELD(M2C_FIELD(var_r29, void **, 8), u8 (**)(M2C_UNK *), 0x6C)(var_r29) != 0)) {
            var_r30 = (s16) ((f32) arg0 / lbl_8036A7A0);
            if (var_r30 <= 0) {
                var_r30 = 1;
            }
            M2C_FIELD(M2C_FIELD(var_r29, void **, 8), M2C_UNK (**)(M2C_UNK *), 0x18)(var_r29);
            M2C_FIELD(var_r29, s8 *, 0x28) = 0;
            M2C_FIELD(var_r29, u8 *, 0x29) = (u8) M2C_FIELD(var_r29, u8 *, 0x2A);
            M2C_FIELD(var_r29, s16 *, 0x2E) = var_r30;
            M2C_FIELD(var_r29, s16 *, 0x2C) = 0;
        }
        var_r28 += 1;
        var_r29 += 0x30;
    } while (var_r28 < 4);
}

void fn_80147FA8(s16 arg0) {
    extern struct Unk30 {
        u8 pad_0x0[8];
        void **vtbl;     /* +0x8 */
        u8 flags;        /* +0xC */
        u8 pad_d[9];
        u8 unk_16;       /* +0x16 */
        u8 pad_17[0x11];
        u8 unk_28;       /* +0x28 */
        u8 unk_29;       /* +0x29 */
        u8 unk_2A;       /* +0x2A */
        u8 pad_2B;
        s16 unk_2C;      /* +0x2C */
        s16 unk_2E;      /* +0x2E */
    } lbl_8032FF08;
    extern f32 lbl_8036A7A0;
    s32 var_r31;
    struct Unk30 *var_r30;
    s32 var_r29;
    s32 temp;
    s16 var_r4;

    var_r31 = arg0;
    var_r30 = &lbl_8032FF08;
    var_r29 = 0;
    do {
        if ((var_r30->flags & 1) &&
            (((u8 (*)(M2C_UNK *))var_r30->vtbl[0x6C / 4])((M2C_UNK *)var_r30) == 0)) {
            if (arg0 <= 0) {
                if (!(var_r30->flags & 4)) {
                    var_r30->unk_2A = var_r30->unk_16;
                    ((void (*)(M2C_UNK *))var_r30->vtbl[0x14 / 4])((M2C_UNK *)var_r30);
                }
            } else {
                temp = (s32) ((f32) var_r31 / lbl_8036A7A0);
                var_r4 = (s16) temp;
                if (var_r4 <= 0) {
                    var_r4 = 1;
                }
                var_r30->unk_2A = var_r30->unk_16;
                var_r30->unk_28 = var_r30->unk_16;
                var_r30->unk_29 = 0;
                var_r30->unk_2E = var_r4;
                var_r30->unk_2C = 0;
                var_r30->flags = (u8)(var_r30->flags | 4);
            }
        }
        var_r29 += 1;
        var_r30 = (struct Unk30 *)((u8 *)var_r30 + 0x30);
    } while (var_r29 < 4);
}

#pragma use_lmw_stmw on
s8 fn_8014832C(u8 arg0, void *arg1, s8 arg2, s16 arg3) {
    void *fn_8000D2BC(void *);
    extern u8 lbl_8032FF08[];
    extern u8 lbl_8029275C[];
    extern u8 lbl_802926EC[];
    extern u8 lbl_8029267C[];
    extern u8 lbl_8029260C[];
    extern f32 lbl_8036A7A0;

    s8 slot;
    u8 *found;
    u8 *src;
    s32 i;
    u8 *entry;
    s32 kind;
    s32 tmp;
    u8 val;
    u8 active;
    s16 n;
    void *h1;
    void *h2;

    found = lbl_8032FF08 + (arg0 * 0x30);
    i = 0;
    do {
        active = 0;
        entry = lbl_8032FF08 + ((u8)i * 0x30);
        if ((entry[0xc] & 1) &&
            ((u8 (*)(u8 *))(*(void ***)(entry + 8))[2])(entry) != 0) {
            active = 1;
        }
        if (active != 0) {
            h1 = fn_8000D2BC(arg1);
            h2 = fn_8000D2BC(*(void **)(*(void **)entry));
            if (h1 == h2) {
                slot = i;
                goto after_search;
            }
        }
        i += 1;
    } while (i < 4);
    slot = -1;
after_search:
    if (slot != -1) {
        return -1;
    }

    active = 0;
    if ((found[0xc] & 1) &&
        ((u8 (*)(u8 *))(*(void ***)(found + 8))[2])(found) != 0) {
        active = 1;
    }
    if (active != 0) {
        ((void (*)(u8 *))(*(void ***)(found + 8))[4])(found);
    }

    src = fn_8000D2BC(arg1);
    kind = src[5] & 3;
    switch (kind) {
    case 0:
        if (found != NULL) {
            *(void **)(found + 8) = lbl_8029275C;
            *(void **)found = src;
            *(void **)(found + 8) = lbl_802926EC;
        }
        break;
    case 1:
        if (found != NULL) {
            *(void **)(found + 8) = lbl_8029275C;
            *(void **)found = src;
            *(void **)(found + 8) = lbl_8029267C;
        }
        break;
    case 2:
        if (found != NULL) {
            *(void **)(found + 8) = lbl_8029275C;
            *(void **)found = src;
            *(void **)(found + 8) = lbl_8029260C;
        }
        break;
    }
    found[0xc] = 1;
    found[0xd] = src[6];
    found[0xe] = src[7];
    found[0xf] = 0;
    if (src[5] & 4) {
        val = 0;
    } else {
        val = src[0xc];
    }
    found[0x10] = val;
    if (src[5] & 4) {
        tmp = 0;
    } else {
        tmp = *(s16 *)(src + 0x10);
    }
    *(s16 *)(found + 0x12) = tmp;
    if (src[5] & 4) {
        tmp = 0x3e8;
    } else {
        tmp = *(u16 *)(src + 0x12);
    }
    *(u16 *)(found + 0x14) = tmp;
    found[0x16] = 0x64;
    found[0x17] = 0;
    if (src[5] & 4) {
        val = 0;
    } else {
        val = src[0xf];
    }
    tmp = (u8)val + 1;
    if (tmp > 0xff) {
        tmp = 0xff;
    }
    if (tmp == 0) {
        tmp = 1;
    }
    found[0x11] = tmp;
    found[0x16] = 0;
    n = (s16)((f32)arg3 / lbl_8036A7A0);
    if (n <= 0) {
        n = 1;
    }
    found[0x28] = found[0x16];
    found[0x29] = arg2;
    *(s16 *)(found + 0x2e) = n;
    *(s16 *)(found + 0x2c) = 0;
    return arg0;
}
#pragma use_lmw_stmw reset

void fn_8014876C(void *arg0, s8 arg1, s16 arg2) {
    extern f32 lbl_8036A7A0;
    s16 var_r6;

    var_r6 = (s16) ((f32) arg2 / lbl_8036A7A0);
    if (var_r6 <= 0) {
        var_r6 = 1;
    }
    M2C_FIELD(arg0, u8 *, 0x28) = (u8) M2C_FIELD(arg0, u8 *, 0x16);
    M2C_FIELD(arg0, s8 *, 0x29) = arg1;
    M2C_FIELD(arg0, s16 *, 0x2E) = var_r6;
    M2C_FIELD(arg0, s16 *, 0x2C) = 0;
}

extern f64 lbl_8036A788;
void fn_801487D0(void *arg0, s16 arg1) {
    extern f32 lbl_8036A7A0;
    s16 var_r31;
    void *temp_r4;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 (**)(), 0x6c)() != 0) {
        var_r31 = (s16) ((f32) arg1 / lbl_8036A7A0);
        if (var_r31 <= 0) {
            var_r31 = 1;
        }
        temp_r4 = M2C_FIELD(arg0, void **, 8); 
        M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x18), M2C_UNK (**)(void *), 0) (arg0);
        M2C_FIELD(arg0, s8 *, 0x28) = 0;
        M2C_FIELD(arg0, u8 *, 0x29) = (u8) M2C_FIELD(arg0, u8 *, 0x2A);
        M2C_FIELD(arg0, s16 *, 0x2E) = var_r31;
        M2C_FIELD(arg0, s16 *, 0x2C) = 0;
    }
}

#pragma cplusplus on
extern "C" void fn_80148888(void *arg0, s16 arg1) {
    struct Obj {
        u8 pad[8];
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
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual u8 v25() = 0;
    };
    extern f32 lbl_8036A7A0;
    s32 temp;
    s16 var_r4;

    if (((Obj *)arg0)->v25() == 0) {
        if (arg1 <= 0) {
            if (!(M2C_FIELD(arg0, u8 *, 0xC) & 4)) {
                M2C_FIELD(arg0, u8 *, 0x2A) = M2C_FIELD(arg0, u8 *, 0x16);
            }
            ((Obj *)arg0)->v3();
            return;
        }
        if (!(M2C_FIELD(arg0, u8 *, 0xC) & 4)) {
            temp = (s32)((f32)arg1 / lbl_8036A7A0);
            var_r4 = (s16)temp;
            if (var_r4 <= 0) {
                var_r4 = 1;
            }
            M2C_FIELD(arg0, u8 *, 0x2A) = M2C_FIELD(arg0, u8 *, 0x16);
            M2C_FIELD(arg0, u8 *, 0x28) = M2C_FIELD(arg0, u8 *, 0x16);
            M2C_FIELD(arg0, u8 *, 0x29) = 0;
            M2C_FIELD(arg0, s16 *, 0x2E) = var_r4;
            M2C_FIELD(arg0, s16 *, 0x2C) = 0;
            M2C_FIELD(arg0, u8 *, 0xC) = (u8)(M2C_FIELD(arg0, u8 *, 0xC) | 4);
        }
    }
}
extern "C" void fn_80148980(void *arg0, s16 arg1) {
    struct Obj {
        u8 pad[8];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    extern f32 lbl_8036A7A0;
    s32 temp;
    s16 var_r5;

    if (arg1 <= 0) {
        ((Obj *)arg0)->v2();
        return;
    }
    if (!(M2C_FIELD(arg0, u8 *, 0xC) & 8)) {
        temp = (s32)((f32)arg1 / lbl_8036A7A0);
        var_r5 = (s16)temp;
        if (var_r5 <= 0) {
            var_r5 = 1;
        }
        M2C_FIELD(arg0, u8 *, 0x28) = M2C_FIELD(arg0, u8 *, 0x16);
        M2C_FIELD(arg0, u8 *, 0x29) = 0;
        M2C_FIELD(arg0, s16 *, 0x2E) = var_r5;
        M2C_FIELD(arg0, s16 *, 0x2C) = 0;
        M2C_FIELD(arg0, u8 *, 0xC) = (u8)(M2C_FIELD(arg0, u8 *, 0xC) | 8);
    }
}
#pragma cplusplus reset
extern u8 lbl_80367AEA;
extern u8 lbl_80367AEB;
s32 fn_8014953C(void);
#pragma cplusplus on
extern "C" void fn_80148A28(void *arg0, s32 arg1) {
    struct Obj {
        u8 pad0[8];
        virtual u8 v0() = 0;
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
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual u8 v19() = 0;
        u8 flags;
        u8 unk_d;
        u8 unk_e;
        u8 pad_f;
        u8 unk_10;
        u8 delay;
        s16 unk_12;
        u8 pad14[2];
        u8 cur;
        u8 prev;
        u8 pad18[0x10];
        u8 start;
        u8 end;
        u8 pad2A[2];
        u16 frame;
        u16 frames;
    };
    struct DrawIface {
        u8 pad0[0x18];
        virtual void Set(u8, u8, u8, u16) = 0;
        virtual void Draw() = 0;
    };
    s32 rate;
    Obj *self = (Obj *)arg0;
    u8 level;
    u8 alive;

    rate = 0x64;
    if (self->flags & 1) {
        register u8 delay = self->delay;
        if (delay == 0) {
            if (self->flags & 2) {
                rate = fn_8014953C();
            }
            if (self->frame <= self->frames) {
                self->cur = (u8)((f32)self->start + (f32)self->frame * ((f32)self->end - (f32)self->start) / (f32)self->frames);
                self->frame++;
                if (self->frame > self->frames && (self->flags & 4)) {
                    self->v3();
                    self->flags &= ~4;
                }
                if (self->frame > self->frames && (self->flags & 8)) {
                    self->v2();
                    self->flags &= ~8;
                }
            }
            if (self->cur != self->prev || lbl_80367AEA != lbl_80367AEB || (self->flags & 2)) {
                level = (u8)(lbl_80367AEA * rate / 100);
                self->unk_d = (u8)(level * (self->cur * self->v19()) / 10000);
                self->prev = self->cur;
            }
            ((DrawIface *)self)->Draw();
            alive = 0;
            if ((self->flags & 1) && self->v0()) {
                alive = 1;
            }
            if (alive == 0) {
                self->flags &= ~1;
            }
        } else {
            self->delay = delay - 1;
            if (self->delay == 0) {
                if (self->flags & 2) {
                    rate = fn_8014953C();
                }
                level = (u8)(lbl_80367AEA * rate / 100);
                self->unk_d = (u8)(level * (self->cur * self->v19()) / 10000);
                ((DrawIface *)self)->Set(self->unk_d, self->unk_e, self->unk_10, (u16)self->unk_12);
                ((DrawIface *)self)->Draw();
            }
        }
    }
}

extern "C" void fn_80148D54(void *arg0) {
    s32 fn_8014953C(void);
    extern u8 lbl_80367AE8;
    extern u8 lbl_80367AE9;
    extern u8 lbl_80367AEE;
    extern u8 lbl_80367AEF;
    extern u8 lbl_80367AF0;
    extern u8 lbl_80367AF1;
    extern u8 lbl_80367AF3;
    struct Obj {
        u8 pad0[8];
        virtual u8 v0() = 0;
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
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual u8 v19() = 0;
        u8 flags;
        u8 unk_d;
        u8 unk_e;
        u8 pad_f;
        u8 unk_10;
        u8 delay;
        s16 unk_12;
        u8 pad14[2];
        u8 cur;
        u8 prev;
        u8 pad18[0x10];
        u8 start;
        u8 end;
        u8 pad2A[2];
        u16 frame;
        u16 frames;
    };
    struct DrawIface {
        u8 pad0[0x18];
        virtual void Set(u8, u8, u8, u16) = 0;
        virtual void Draw() = 0;
    };
    s32 rate;
    Obj *self = (Obj *)arg0;
    s32 flags;
    u8 level;
    u8 factor;
    u8 alive;

    rate = 0x64;
    flags = self->flags;
    if (flags & 1) {
        register u8 delay = self->delay;
        if (delay == 0) {
            if (flags & 2) {
                rate = fn_8014953C();
            }
            if (self->frame <= self->frames) {
                self->cur = (u8)((f32)self->start + (f32)self->frame * ((f32)self->end - (f32)self->start) / (f32)self->frames);
                self->frame++;
                if (self->frame > self->frames && (self->flags & 4)) {
                    self->v3();
                    self->flags &= ~4;
                }
                if (self->frame > self->frames && (self->flags & 8)) {
                    self->v2();
                    self->flags &= ~8;
                }
            }
            if (self->cur != self->prev || lbl_80367AE8 != lbl_80367AE9 || lbl_80367AEE != lbl_80367AEF || lbl_80367AF0 != lbl_80367AF1 || (self->flags & 2)) {
                level = (u8)(lbl_80367AF3 * (lbl_80367AEE * rate) / 10000);
                factor = lbl_80367AE8;
                self->unk_d = (u8)(level * (factor * (self->cur * self->v19())) / 1000000);
                self->prev = self->cur;
            }
            ((DrawIface *)self)->Draw();
            alive = 0;
            if ((self->flags & 1) && self->v0()) {
                alive = 1;
            }
            if (alive == 0) {
                self->flags &= ~1;
            }
        } else {
            self->delay = delay - 1;
            if (self->delay == 0) {
                if (self->flags & 2) {
                    rate = fn_8014953C();
                }
                level = (u8)(lbl_80367AF3 * (lbl_80367AEE * rate) / 10000);
                factor = lbl_80367AE8;
                self->unk_d = (u8)(level * (factor * (self->cur * self->v19())) / 1000000);
                ((DrawIface *)self)->Set(self->unk_d, self->unk_e, self->unk_10, (u16)self->unk_12);
                ((DrawIface *)self)->Draw();
            }
        }
    }
}

#pragma cplusplus reset
s8 fn_80149734(void) {
    s8 var_r31;
    s32 temp_r3;

    var_r31 = 0;
loop_1:
    temp_r3 = fn_800AF704(var_r31);
    if (temp_r3 == 0U) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 3) {
        return -1;
    }
    goto loop_1;
}

void fn_80149784(void *arg0) {
    fn_800AFAFC(*(s8*)((uintptr_t)arg0 + 4));
}

void fn_801497AC(void *arg0) {
    fn_800AF7F0(*(s8*)((uintptr_t)arg0 + 4));
}

void fn_801497D4(void *arg0) {
    fn_800AF96C(*(s8*)((uintptr_t)arg0 + 4));
}

void fn_801497FC(void *arg0) {
    fn_800AF71C(*(s8*)((uintptr_t)arg0 + 4));
}

void fn_801498C8(void *arg0) {
    fn_800AFE0C(*(s8*)((uintptr_t)arg0 + 4));
}

void fn_801498F0(void *arg0) {
    fn_800AFCFC(*(s8*)((uintptr_t)arg0 + 4));
}

void fn_80149918(void *arg0) {
    fn_800AFC54(*(s8*)((uintptr_t)arg0 + 4));
}

s32 fn_80149940(void *arg0) {
    s32 temp = *(u8*)((uintptr_t)arg0 + 4);
    return fn_800AF704((s8)temp) != 0;
}

s32 fn_80149974(void *arg0) {
    return (fn_800AF704(*(s8 *)((u8 *)arg0 + 4)) >> 1) & 1;
}

s8 fn_801499A0(void) {
    u8 fn_800B2494(s8);

    s8 var_r31 = 0;
loop_1:
    if (fn_800B2494(var_r31) == 0) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 8) {
        return -1;
    }
    goto loop_1;
}

void fn_801499F0(void *arg0) {
    fn_800B24D8(*(s8*)((uintptr_t)arg0 + 4));
}

#pragma cplusplus on
extern "C" void fn_80149A18(void *arg0, s32 arg1) {
    struct Obj {
        u8 pad[8];
        virtual s32 v0();
        virtual s32 v1();
        virtual s32 v2();
        virtual s32 v3();
        virtual s32 v4();
        virtual s32 v5();
        virtual s32 v6();
        virtual s32 v7();
        virtual s32 v8();
        virtual s32 v9();
        virtual s32 v10();
        virtual s32 v11();
        virtual s32 v12();
        virtual s32 v13();
        virtual s32 v14();
        virtual s32 v15();
        virtual s32 v16();
        virtual s32 v17();
        virtual s32 v18();
        virtual s32 v19();
        virtual s32 v20();
        virtual s32 v21();
        virtual s32 v22();
        virtual s32 v23();
    };
    void fn_800B24D8(s32, s32);
    s32 fn_800B26B0(s32, s32);

    s32 tmp = ((Obj *)arg0)->v5();
    *(s8 *)((u8 *)arg0 + 4) = (s8)tmp;
    s8 b = *(s8 *)((u8 *)arg0 + 4);
    if (b >= 0) {
        fn_800B24D8((s32)b, arg1);
        fn_800B26B0((s32)*(s8 *)((u8 *)arg0 + 4), ((Obj *)arg0)->v23());
    }
}
#pragma cplusplus reset
void fn_80149A9C(void *arg0) {
    fn_800B25EC(*(s8*)((uintptr_t)arg0 + 4));
}

void fn_80149AC4(void *arg0) {
    fn_800B2584(*(s8*)((uintptr_t)arg0 + 4));
}

void fn_80149AEC(void *arg0) {
    fn_800B2648(*(s8*)((uintptr_t)arg0 + 4));
}

void fn_80149B14(void *arg0) {
    fn_800B2494(*(s8*)((uintptr_t)arg0 + 4));
}

s32 fn_80149B3C(void) {
    return 0;
}

void fn_80149B44(void *arg0) {
    void fn_800B1C54(s32);
    s32 temp;

    temp = *(u8 *)((u8 *)arg0 + 4);
    if ((s8)temp >= 0) {
        fn_800B1C54((s8)temp);
    }
}

void fn_80149B74(void *arg0) {
    void fn_800B1BFC(s32);
    s32 temp;

    temp = *(u8 *)((u8 *)arg0 + 4);
    if ((s8)temp >= 0) {
        fn_800B1BFC((s8)temp);
    }
}

void fn_80149BA4(void *arg0) {
    void fn_800B1D68(s32);
    s32 temp;

    temp = *(u8 *)((u8 *)arg0 + 4);
    if ((s8)temp >= 0) {
        fn_800B1D68((s8)temp);
    }
}

void fn_80149BD4(void *arg0) {
    void fn_800B1DEC(s32);
    s32 temp;

    temp = *(u8 *)((u8 *)arg0 + 4);
    if ((s8)temp >= 0) {
        fn_800B1DEC((s8)temp);
    }
}

void fn_80149C04(void *arg0) {
    void fn_800B1D0C(s32);
    s32 temp;

    temp = *(u8 *)((u8 *)arg0 + 4);
    if ((s8)temp >= 0) {
        fn_800B1D0C((s8)temp);
    }
}

void fn_80149C34(void *arg0) {
    void fn_800B1CB0(s32);
    s32 temp;

    temp = *(u8 *)((u8 *)arg0 + 4);
    if ((s8)temp >= 0) {
        fn_800B1CB0((s8)temp);
    }
}

void fn_80149C64(void *arg0) {
    void fn_800B1B80(s32);
    s32 temp;

    temp = *(u8 *)((u8 *)arg0 + 4);
    if ((s8)temp >= 0) {
        fn_800B1B80((s8)temp);
    }
}

void fn_80149D1C(void *arg0) {
    void fn_800B1E44(s32);
    s32 temp;

    temp = *(u8 *)((u8 *)arg0 + 4);
    if ((s8)temp >= 0) {
        fn_800B1E44((s8)temp);
    }
}

s32 fn_80149D4C(void *arg0)
{
    s32 fn_800B1B24(s32);
    s32 temp;

    temp = *(u8 *)((u8 *)arg0 + 4);
    if ((s8)temp < 0) {
        return 0;
    }
    return fn_800B1B24((s8)temp);
}

#pragma cplusplus on
extern "C" void fn_80149D84(void *arg0) {
    struct Obj {
        u8 pad[8];
        virtual void v0() = 0;
        virtual void v1() = 0;
    };
    ((Obj *)arg0)->v1();
}
#pragma cplusplus reset
void fn_80149DB0(void) {

}

void fn_80149DB4(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(u8), 0x28)(M2C_FIELD(arg0, u8 *, 0xD));
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(void *, u8), 0x20)(arg0, M2C_FIELD(arg0, u8 *, 0xE));
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(void *, u8), 0x24)(arg0, M2C_FIELD(arg0, u8 *, 0xF));
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(void *, u8), 0x3C)(arg0, M2C_FIELD(arg0, u8 *, 0x10));
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(void *, s16), 0x38)(arg0, M2C_FIELD(arg0, s16 *, 0x12));
}

void fn_80149E50(void) {

}

void fn_80149E54(void) {

}

void fn_80149E58(void) {

}

void fn_80149E5C(void) {

}

void fn_80149E60(void) {

}

void fn_80149E64(void) {

}

void fn_80149E68(void) {

}

s32 fn_80149E6C(void) {
    return 0;
}

void fn_80149E74(void) {

}

u8 fn_80149E78(void **arg0) {
    return M2C_FIELD(*arg0, u8 *, 6);
}

s32 fn_80149E84(void **arg0) {
    u16 var_r0;
    void *temp_r3;

    temp_r3 = *arg0;
    if (*(u8 *)((u8 *)temp_r3 + 5) & 4) {
        var_r0 = 0x3E8;
    } else {
        var_r0 = *(u16 *)((u8 *)temp_r3 + 0x12);
    }
    return var_r0;
}

s32 fn_80149EA8(void **arg0) {
    u8 var_r0;
    void *temp_r3;

    temp_r3 = *arg0;
    if (*(u8 *)((u8 *)temp_r3 + 5) & 4) {
        var_r0 = 0;
    } else {
        var_r0 = *(u8 *)((u8 *)temp_r3 + 0xC);
    }
    return var_r0;
}

void fn_80149ECC(void) {

}

void fn_80149ED0(void) {

}

void fn_80149ED4(void) {

}

void fn_80149ED8(void) {

}

void fn_80149EDC(void) {

}

u8 fn_80149EE0(void **arg0) {
    return M2C_FIELD(*arg0, u8 *, 7);
}

s32 fn_80149EEC(void **arg0) {
    u8 var_r0;
    void *temp_r3;

    temp_r3 = *arg0;
    if (*(u8 *)((u8 *)temp_r3 + 5) & 4) {
        var_r0 = 0;
    } else {
        var_r0 = *(u8 *)((u8 *)temp_r3 + 0xF);
    }
    return var_r0;
}

s32 fn_80149F10(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

s32 fn_80149F1C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

void fn_80149F28(void) {

}

void fn_80149F2C(void) {

}

s32 fn_80149F30(void) {
    return -1;
}
#include "common.h"
#include "global.h"

typedef struct {
    void *unk0;
    s32 unk4;
} Struct801405E0;

typedef struct {
    Struct801405E0 *unk0;
    s32 unk4;
} Struct801405E0_2;

typedef struct {
    Struct801405E0_2 *unk38;
    s32 unk34;
    s32 unk3C;
} Struct8013FC68_Args;
extern u32 lbl_80291A74;
extern u32 lbl_80291B70;
extern u32 lbl_80295478;
extern u8 lbl_803301A8[];
extern u8 lbl_8032FF08[];
#include "common.h"
extern u32 lbl_802922F0;

extern u8 lbl_80292298[];
extern f32 lbl_8036A730;
extern f32 lbl_8036A738;
#include "include/structs.h"
extern s32 gUnknown_0x8013C030;
#include "global.h"
#include "unit.h"
extern u32 lbl_802918E0;
extern u32 lbl_80295478;

extern s32 fn_800B503C(void);
extern s32 fn_800B412C(void);
extern void fn_80210008(void *arg0);
extern s32 fn_800C44F4(s32 arg0);
extern void fn_800B36D8(void *arg0, void *arg1);
extern void fn_800C4664(s32 arg0);
extern void fn_800B34B0(s32 arg0);
extern void fn_800B3490(void);
extern void fn_800B2928(void *arg0);
extern void* fn_8003FCCC(void *arg0);
extern s32 fn_8000D3EC(s32 arg0, void *arg1);
extern s32 fn_802097D4(s32 arg0);
extern s32 fn_800B28FC(s32 arg0);
extern void fn_800B4060(void);
extern u8* gUnknown_802C9248;
extern f32 lbl_8036A674;
extern u8 lbl_802768A0[];
extern f32 lbl_8036A6B0;
extern f32 lbl_8036A6B4;
extern u8 lbl_80367AD2;
extern u8 lbl_80367AD3;
extern u32 lbl_8028459C;
extern u32 lbl_8032FED8;
extern u32 lbl_80292090;
extern u32 lbl_80291BEC;
extern u32 lbl_80276908;
extern u32 lbl_80291EAC;
extern u32 lbl_8032FEE4;
extern u32 lbl_80291E48;
extern u32 lbl_802845E8;
extern u32 lbl_80291BD4;
extern u32 lbl_80291DA0;
extern u32 lbl_80291C50;
extern u32 lbl_802920E0;
extern f32 lbl_8036A6B8;

void* fn_800C42D8(int);
#include "common.h"
#include "dolphin/os.h"

extern f32 lbl_8036A6C0;
extern f32 lbl_8036A6C4;
extern f32 lbl_8036A6C8;
extern u16 lbl_80291730[];
#include "common.h"
#include "dolphin/os.h"

extern f64 lbl_8036A600;

typedef s32 (*FuncPtr0)(void);

