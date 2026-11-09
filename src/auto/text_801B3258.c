/* Functions from 0x801B3258 to 0x801E4380, found by decomp-toolkit. */
#include "common.h"

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

static inline s32 MsgBoxAddPad(s32 h, s32 pad) {
    return h + pad;
}

void fn_801E00EC(void *arg0, void *arg1);
extern u8 lbl_8032FF08[];
extern u16 lbl_80331D00[];
extern f32 lbl_8036B4A8;

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
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x30);
    fn_8014876C(lbl_8032FF08 + (M2C_FIELD(temp_r31, u8 *, 0x10C) * 0x30), 0x64, 0x3E8);
    if ((u32) M2C_FIELD(temp_r31, u32 *, 0x18) != 0U) {
        fn_8005C7E8();
    }
    fn_800C4588(temp_r31);
}

void fn_801B4810(void) {
    extern u16 lbl_8027C128[];
    fn_800558D8((u8 *)lbl_8027C128 + 0xb1);
    fn_800558D8((u8 *)lbl_8027C128 + 0x95);
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

void fn_801B6064(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

#pragma opt_common_subs reset

s32 fn_801B6098(s32 arg0) {
    void fn_801B32C8(void *);
    extern u16 lbl_80330EAC[];
    
    s32 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    void *temp_r3;
    void *var_r3;

    temp_r0 = *(s32 *)((char *)&lbl_80330EAC + 0xCAC);
    if ((temp_r0 >> 4) & 1) {
        temp_r0 = 0;
    } else if (temp_r0 & 0x800) {
        temp_r0 = 1;
    } else {
        temp_r0 = 0;
    }

    if (temp_r0 == 0) {
        return 0;
    }

    var_r3 = *(void **)((char *)&lbl_80330EAC + 0x280);
    if (var_r3 != NULL) {
        temp_r3 = *(void **)((char *)var_r3 + 0x190);
        temp_r0_2 = *(u8 *)((char *)temp_r3 + 8);
        if (temp_r0_2 != 0 && temp_r0_2 != 5) {
            goto block_11;
        }
    } else {
block_11:
        var_r3 = *(void **)((char *)&lbl_80330EAC + 0x560);
        if (var_r3 != NULL) {
            temp_r3 = *(void **)((char *)var_r3 + 0x190);
            temp_r0_3 = *(u8 *)((char *)temp_r3 + 8);
            if (temp_r0_3 != 0 && temp_r0_3 != 5) {
                goto block_15;
            }
        } else {
block_15:
            var_r3 = NULL;
        }
    }

    fn_801B32C8(var_r3);
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
    M2C_UNK fn_8000CAA0(M2C_UNK *, u32, M2C_UNK *);
    M2C_UNK fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80297B3C;
    extern M2C_UNK lbl_80330EAC;
    u8 var_r0;
    u8 var_r0_2;

    if (((u32) M2C_FIELD(&lbl_80330EAC, u32 *, 0xCAC) >> 4U) & 1) {
        var_r0 = 0;
    } else if (M2C_FIELD(&lbl_80330EAC, u32 *, 0xCAC) & 0x800) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        var_r0_2 = 1;
    } else if (M2C_FIELD(&lbl_80330EAC, u32 *, 0xCAC) & 0x400) {
        var_r0_2 = 1;
    } else if ((u32) (M2C_FIELD(&lbl_80330EAC, u32 *, 0xCAC) & 0x10) != 0) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 == 0) {
        return 0;
    }
    if (arg0 == 0U) {
        fn_8000CAF0(&lbl_80297B3C, 3);
    } else {
        fn_8000CAA0(&lbl_80297B3C, arg0, &lbl_80297B3C);
    }
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

void fn_801B657C(void *arg0) {
    f32 fn_80059F64(u16, f32, f32, f32, f32);
    extern f32 lbl_8036B1B8;
    extern f32 lbl_8036B1BC;
    extern f32 lbl_8036B1C0;
    extern f32 lbl_8036B1C8;
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0x3C);
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) (temp_r3 + 1);
    M2C_FIELD(arg0, s8 *, 0x39) = (s8) fn_80059F64(temp_r3, lbl_8036B1BC, lbl_8036B1B8, lbl_8036B1C0, (f32) M2C_FIELD(arg0, u16 *, 0x3C));
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3C) == 8) {
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

s32 fn_801B7330(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r4;
    s32 temp_r5;

    if (arg2 < 0) {
        temp_r3 = -arg2;
    } else {
        temp_r3 = arg2;
    }

    var_r4 = arg1;
    if (arg0 == 0) {
        temp_r5 = var_r4;
        var_r4 = temp_r3;
        temp_r3 = temp_r5;
    }

    return var_r4 * temp_r3;
}

s32 fn_801B7564(s32 arg0) {
    extern u16 lbl_8027C370[];
    extern u16 lbl_802CA264[];

    s32 temp_r30;
    void *temp_r31;
    void *var_r5;
    
    temp_r30 = 0;
    fn_800056CC((void *) (lbl_8027C370 + 0x21C), (void *) lbl_8027C370);
    var_r5 = *(void **) (lbl_802CA264 + 0xC);
loop_4:
    if (var_r5 != NULL) {
        temp_r31 = *(void **) ((u8 *) var_r5 + 0x184);
        if (fn_802342B8(*(s32 **) ((u8 *) var_r5 + 0x188), arg0) == 0) {
            temp_r30 += 1;
        }
        var_r5 = temp_r31;
        goto loop_4;
    }
    return temp_r30;
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
    s32 temp_r6;
    s32 var_r7;
    s32 var_r8;
    u32 var_ctr;
    void *var_r5;
    s32 temp_r0;
    s32 temp_r7;
    s32 temp_r4;
    s32 var_ctr_2;
    void *var_r3;

    temp_r6 = *(s32 *)((char *)arg0 + 0x224);
    var_r7 = 0;
    var_r8 = 0;
    if (temp_r6 > 0) {
        temp_r4 = temp_r6 - 8;
        if (temp_r6 > 8) {
            var_r5 = arg0;
            var_ctr = (u32)(temp_r4 + 7) >> 3U;
            if (temp_r4 > 0) {
                do {
                    var_r8 += 8;
                    temp_r0 = *(s32 *)((char *)var_r5 + 0x21C);
                    temp_r7 = var_r7 + *(s32 *)((char *)var_r5 + 0x200) +
                              *(s32 *)((char *)var_r5 + 0x204) +
                              *(s32 *)((char *)var_r5 + 0x208) +
                              *(s32 *)((char *)var_r5 + 0x20C) +
                              *(s32 *)((char *)var_r5 + 0x210) +
                              *(s32 *)((char *)var_r5 + 0x214) +
                              *(s32 *)((char *)var_r5 + 0x218);
                    var_r5 = (char *)var_r5 + 0x20;
                    var_r7 = temp_r7 + temp_r0;
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        var_r3 = (char *)arg0 + (var_r8 << 2);
        var_ctr_2 = temp_r6 - var_r8;
        if (var_r8 < temp_r6) {
            do {
                temp_r0 = *(s32 *)((char *)var_r3 + 0x200);
                var_r3 = (char *)var_r3 + 4;
                var_r7 += temp_r0;
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    return var_r7;
}

void fn_801B77E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x228) = arg1;
}

void fn_801B77F0(s32 arg0, s32 arg1) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(arg0 + (arg1 << 6));
}

s32 fn_801B7818(s32 arg0, s32 arg1) {
    M2C_UNK fn_80234450(s32, s32, s32);
    extern u8 lbl_80330708[];
    extern s32 lbl_80368250;
    extern s32 lbl_80368254;
    s32 var_r31;
    u8 v;

    var_r31 = arg1;
    fn_80234450(lbl_80368254 + (lbl_80368250 << 6), arg0, lbl_80368254);
    v = lbl_80330708[0xA6];
    if (v == 2) {
        var_r31 = var_r31 / 2;
    }
    if (v == 3) {
        var_r31 += var_r31 / 2;
    }
    {
        s32 temp = lbl_80368254 + (lbl_80368250 << 2);
        *(s32 *)(temp + 0x200) = var_r31;
    }
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

void fn_801B9254(void *arg0) {
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    M2C_UNK fn_8005C8B4(void *);
    M2C_UNK fn_80147188(M2C_UNK);
    s32 fn_801B767C(void *);
    s32 fn_801B7734(void *);
    extern M2C_UNK lbl_8027C5E8;
    s32 temp_r31;
    void *temp_r30;

    temp_r30 = M2C_FIELD(arg0, void **, 0x30);
    fn_80147188(0x3E8);
    if ((s32) M2C_FIELD(M2C_FIELD(temp_r30, void **, 0xC), s32 *, 0x220) == 0) {
        fn_8000C070(arg0, 0x63);
        return;
    }
    M2C_FIELD(temp_r30, s32 *, 0) = 0;
    M2C_FIELD(temp_r30, s32 *, 4) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x18) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x24) = 0;
    temp_r31 = fn_801B767C(M2C_FIELD(temp_r30, void **, 0xC));
    M2C_FIELD(temp_r30, s32 *, 0x28) = (s32) (temp_r31 - fn_801B7734(M2C_FIELD(temp_r30, void **, 0xC)));
    fn_8005C8B4(&lbl_8027C5E8 + 0x9C);
}

void fn_801B94DC(void *arg0) {
    u8 val = *(u8 *)((u8 *)arg0 + 0x44);
    fn_8000C070(val);
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
#pragma cplusplus reset
void fn_801B9748(void *a) {
    void *fn_8013FF94(void *, s32, s32);
    s32 fn_80019DF0(u8, void *);
    void fn_8017A9F0(void *, s32, void *, void *);
    extern u8 lbl_802EF4C8[];
    extern f32 lbl_8036B2DC;

    void *p;
    void *q;
    s32 x;

    p = fn_8013FF94(a, 0x82, 0);
    *(f32 *)((char *)p + 0x30) = lbl_8036B2DC;

    p = fn_8013FF94(a, 0x108, 0);
    *(f32 *)((char *)p + 0x30) = lbl_8036B2DC;

    q = *(void **)((char *)a + 0x60);
    x = fn_80019DF0(lbl_802EF4C8[0x14], lbl_802EF4C8);
    *(u8 *)((char *)q + 0x3c) = 0;
    fn_8017A9F0(q, x, a, q);
}

void fn_801B97C8(void) {
    extern u8 lbl_802EF4C8[24];
    
    u8 temp_r0 = *(u8*)((u32)&lbl_802EF4C8 + 8);
    switch ((s32)temp_r0) {
        case 0x81:
            fn_8000C188();
            return;
        case 0x80:
            fn_8000C070(0x18);
            return;
    }
}

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
#pragma cplusplus reset
void fn_801BCC60(s32 arg0) {
    extern s32 lbl_802EF4C8;
    extern u16 lbl_80330EAC[];
    
    s32 temp_r31;
    
    temp_r31 = *(s32*)((char*)&lbl_802EF4C8);
    fn_801A4BE0(lbl_80330EAC, lbl_80330EAC, &lbl_802EF4C8);
    
    if (lbl_80330EAC[0x6D6] & 0x10) {
        fn_801ED970(temp_r31, arg0);
    }
}

void fn_801BCD8C(void *arg0) {
    extern u8 lbl_802EF4C8[24];
    extern f32 lbl_8036B2D8;
    s16 sp16;
    s16 sp14;
    s16 sp12;
    s16 sp10;
    s16 spE;
    s16 spC;
    s16 spA;
    s16 sp8;
    s16 *temp_r29;
    s16 *temp_r31;
    s16 *temp_r4;
    s16 temp_r7;
    s16 temp_r7_2;
    s16 temp_r7_3;
    s16 temp_r7_4;
    s16 temp_r8;
    void *temp_r6;

    temp_r6 = *(void **)((char *)arg0 + 0x4C);
    temp_r29 = *(s16 **)((char *)arg0 + 0x54);
    temp_r31 = *(s16 **)((char *)arg0 + 0x58);
    switch ((u8)lbl_802EF4C8[8]) {
    case 0x81:
        temp_r7 = *(s16 *)((char *)temp_r6 + 0xA);
        temp_r8 = *(s16 *)((char *)temp_r6 + 0xC);
        sp16 = temp_r8;
        sp14 = -(s16) (*(s16 *)((char *)temp_r6 + 0xE) - temp_r7);
        fn_80140258(temp_r6, &sp14, (s16 *)1, temp_r7, temp_r8);
        temp_r7_2 = *(s16 *)((char *)temp_r29 + 0xC);
        sp12 = temp_r7_2;
        sp10 = -(s16) (*(s16 *)((char *)temp_r29 + 0xE) - *(s16 *)((char *)temp_r29 + 0xA));
        fn_80140258(arg0, temp_r29, &sp10, (s16 *)0, temp_r7_2);
        temp_r7_3 = *(s16 *)((char *)temp_r31 + 0xC);
        spC = 0x260;
        spE = temp_r7_3;
        fn_80140258(arg0, temp_r31, &spC, (s16 *)0, temp_r7_3);
        temp_r4 = *(s16 **)((char *)arg0 + 0x5C);
        temp_r7_4 = *(s16 *)((char *)temp_r4 + 0xC);
        sp8 = 0x260;
        spA = temp_r7_4;
        fn_80140258(arg0, temp_r4, &sp8, (s16 *)0, temp_r7_4);
        fn_8000C188(arg0);
        return;
    case 0x80:
        *(f32 *)((char *)temp_r6 + 0x30) = lbl_8036B2D8;
        *(f32 *)((char *)temp_r29 + 0x30) = lbl_8036B2D8;
        *(f32 *)((char *)temp_r31 + 0x30) = lbl_8036B2D8;
        fn_8000C070(6);
        return;
    }
}

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
    void *fn_8000CAA0(void *, s32, void *, void *);
    void fn_801403F0(void);
    extern u8 lbl_80297C14[];
    extern u8 lbl_80297E78[];
    extern u8 lbl_802EF4C8[];
    extern s8 lbl_80368274;
    
    void *temp_r3 = fn_8000CAA0(lbl_80297C14, arg0, lbl_80297C14, lbl_802EF4C8);
    
    if (temp_r3 != NULL) {
        fn_801403F0();
        
        *(u32*)((char*)temp_r3 + 0x40) = (u32)lbl_80297E78;
        *(u32*)((char*)temp_r3 + 0x48) = 0; // Initialize to zero
        *(u32*)((char*)temp_r3 + 0x4c) = 0;
        *(u32*)((char*)temp_r3 + 0x50) = 0;
        *(u32*)((char*)temp_r3 + 0x54) = 0;
        *(u32*)((char*)temp_r3 + 0x58) = 0;
        *(u32*)((char*)temp_r3 + 0x5c) = 0;
        *(u32*)((char*)temp_r3 + 0x60) = 0;
        *(u32*)((char*)temp_r3 + 0x64) = 0;
        *(u32*)((char*)temp_r3 + 0x68) = 0;
        *(u32*)((char*)temp_r3 + 0x6c) = 0;
        
        lbl_80368274 = 0x80;
    }

    fn_8000C070(temp_r3, 0xB);
    return temp_r3;
}

void *fn_801BE748(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    void fn_801403F0(void);
    extern u8 lbl_80297C14[];
    extern u8 lbl_80297E78[];
    extern s8 lbl_80368274;

    void *temp_r3 = fn_8000CAA0(lbl_80297C14, arg0, lbl_80297C14);
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
        lbl_80368274 = (s8)0x80;
    }
    return temp_r3;
}

void fn_801BE7CC(void) {
    extern u16 lbl_8027C698[];
    void *ptr = lbl_8027C698;
    fn_8000E0E4((u8 *)ptr + 0x37c);
}

void *fn_801BE7F8(void){extern u8 lbl_8027C698[];return lbl_8027C698+0x29b;}

void fn_801BE8F0(void) {
    extern u16 lbl_8027C698[];
    fn_8000E0E4((u8 *)lbl_8027C698 + 0x16E);
}

void *fn_801BE91C(void) { extern u8 lbl_8027C698[]; return lbl_8027C698+0x2D4; }

void *fn_801BEB24(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    s16 spE;
    s16 spC;
    s16 spA;
    s16 sp8;

    spA = arg3;
    spC = arg1;
    spE = arg2;
    sp8 = 0x108;

    fn_801BEB9C(&spC, &sp8, arg4);
    *(u16 **)arg0 = (u16 *)0x802918A0;
    *(s32 *)((u8 *)arg0 + 0xCC) = 0;
    ((void (*)(void *, u16 *))((u32 *)*(u32 **)arg0)[0x28 / 4])(arg0, (u16 *)0x802918A0);
    return arg0;
}

void fn_801BEDC4(void) {
    // Function body will be filled in
}

void fn_801C0A28(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_8013FF94(arg0, 0x81, 0);
    fn_8016A5AC(*(s32 *)((char *)arg0 + 0x18));
    fn_8013FEF0();
    fn_8014876C(lbl_8032FF08, 0x46, 0x2EE);
    fn_800BE658(fn_801D2AAC(temp_r31), arg0);
}

void fn_801C0A9C(void)
{
    extern u8 lbl_802EF4C8[0x18];
    
    if (lbl_802EF4C8[8] >= 0x81) {
        if (lbl_802EF4C8[8] == 0x81) {
            fn_8000C070(4);
        }
    }
}

void fn_801C0F54(s32 arg0) {
    void *fn_8013FF94(s32,s32,s32); 
    void fn_801658DC(void*); 
    void *fn_8000E0E4(void*);
    extern u8 lbl_8027CF10[]; 
    
    s32 r30_temp;
    void *p;
    
    p = fn_8013FF94(arg0, 0x80, 0);
    *(s32*)((u8*)p + 0x48) = 1;
    fn_801658DC(lbl_8027CF10 + 0x86);
    r30_temp = (s32)fn_8000E0E4(lbl_8027CF10 + 0x99);
    if (fn_8013FF94(arg0, -0x1000, 0)) {
        fn_801658DC((void*)r30_temp);
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
#pragma cplusplus reset

s32 fn_801C13F0(void) {
    u8 fn_800BE800(s32);
    u8 fn_800BE890(s32);
    s32 fn_800BE914();
    
    s32 temp_r31 = fn_800BE914();
    s32 var_r30 = 0;
    
loop_5:
    if (var_r30 >= temp_r31) {
        return 0;
    }
    if ((fn_800BE800(var_r30) != 0) && (fn_800BE890(var_r30) == 0)) {
        return 1;
    }
    var_r30 += 1;
    goto loop_5;
}

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
        fn_0C428C(node);
        list->size--;
    }
    ret->node = end->node;
}

void fn_801C18FC(s32 arg0) {
    M2C_UNK fn_8000A388(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32);
    extern M2C_UNK fn_801C19E4;
    extern M2C_UNK lbl_80297FF8;
    extern M2C_UNK lbl_80368280;
    extern f32 lbl_8036B328;
    f32 temp_f1;

    M2C_FIELD(&lbl_80368280, s8 *, 0) = -1;
    temp_f1 = (f32) arg0;
    M2C_FIELD(&lbl_80368280, s32 *, 4) = (s32) (temp_f1 / lbl_8036B328);
    fn_8000A388(&lbl_80297FF8, &fn_801C19E4, &lbl_80368280, &lbl_80368280, temp_f1);
}

void fn_801C1970(s8 arg0, s32 arg1) {
    M2C_UNK fn_8000A388(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32);
    extern M2C_UNK fn_801C19E4;
    extern M2C_UNK lbl_80297FF8;
    extern M2C_UNK lbl_80368280;
    extern f32 lbl_8036B328;
    f32 temp_f1;

    M2C_FIELD(&lbl_80368280, s8 *, 0) = arg0;
    temp_f1 = (f32) arg1;
    M2C_FIELD(&lbl_80368280, s32 *, 4) = (s32) (temp_f1 / lbl_8036B328);
    fn_8000A388(&lbl_80297FF8, &fn_801C19E4, &lbl_80368280, &lbl_80368280, temp_f1);
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

void fn_801C2250(void *arg0) {
    if (arg0 != NULL) {
        *(u8 *)((u32)arg0 + 0x31) = 0;
        *(u16 *)((u32)arg0 + 0x34) = 0;
        fn_8000C188();
    }
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

void fn_801C2A3C(void *arg0) {
    u32 fn_801090C0(u32);
    void fn_8000C60C(void);
    void fn_8006EDA0(void *);
    void fn_80161F7C(void);
    void fn_8003F670(u32);
    void fn_800C4588(void *);

    u32 *obj = *(u32 **)((u8 *)arg0 + 0x30);

    u32 p = obj[0x30/4];
    if (p && fn_801090C0(p)) {
        fn_801090C0(p);
        fn_8000C60C();
    }
    
    fn_801090C0(obj[0x2c/4]);
    fn_8000C60C();

    p = obj[0x38/4];
    if (p) {
        void (*method)(void *, s32) = (void (*)(void *, s32))(*(u32 *)(*(u32 *)(p + 0x2c) + 0x20));
        method((void *)p, 1);
    }
    
    fn_8006EDA0((void *)obj);
    fn_80161F7C();
    fn_8003F670(obj[4/4]);
    fn_800C4588((void *)obj);
}

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

void fn_801C4394(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

void *fn_801C43C8(void *arg0, s16 arg1) {
    extern u16 lbl_802981AC;
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 0x2C) = &lbl_802981AC;
        fn_800578F0(0, &lbl_802981AC);
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
    M2C_FIELD(fn_8000CAF0(&lbl_8029824C, 4), s32 *, 0x3C) = arg0;
}

void fn_801C44A4(void *arg0) {
    void fn_800616A0(void *, void *);
    void fn_800C426C(void *);
    void fn_800C428C(void *);

    u32 i = 0;
    u32 offset = 0;
    u8 *obj = (u8 *)arg0;
    u8 *work;
    u8 *data;

    do {
        work = *(u8 **)(obj + 0x44);
        data = *(u8 **)work;
        fn_800616A0(data + offset + 8, work);
        i++;
        offset += 0xa8;
    } while (i < 0x10);

    fn_800616A0(*(void **)(obj + 0x40), NULL);

    work = *(u8 **)(obj + 0x44);
    if (work != NULL) {
        u32 a = *(u32 *)(work + 0x0);
        if (a != 0) {
            fn_800C426C((void *)(a - 0x10));
            *(u32 *)work = 0;
        }
        a = *(u32 *)(work + 0x4);
        if (a != 0) {
            fn_800C426C((void *)a);
            *(u32 *)(work + 0x4) = 0;
        }
        fn_800C428C(work);
    }

    *(u32 *)(obj + 0x44) = 0;
}

void fn_801C4564(void) { M2C_UNK fn_801C45A4(); fn_801C45A4(); }

void fn_801C4584(void){ fn_801C5B80(); /*try*/ }

void fn_801C6008(s32 arg0) {
    extern u16 lbl_80298224[20];
    void *temp_r3;
    s32 temp_r4;

    temp_r4 = (s32)&lbl_80298224;
    temp_r3 = (void *)fn_8000CAF0(&temp_r4, 4);
    *(s32 *)((char *)temp_r3 + 0x30) = arg0;
}

void fn_801C6044(void *arg0) {
    void fn_800C426C(void *);
    void fn_800C428C(void *);

    u8 *obj = (u8 *)arg0;
    u8 *work = *(u8 **)(obj + 0x44);
    
    if (work) {
        u32 a = *(u32 *)work;
        if (a) {
            fn_800C426C((void *)(a - 0x10));
            *(u32 *)work = 0;
        }
        // Early exit after first check, match target branch
        a = *(u32 *)(work + 4);
        if (a) {
            fn_800C426C((void *)a);
            *(u32 *)(work + 4) = 0;
        }
        fn_800C428C(work);
    }
    
    *(u32 *)(obj + 0x44) = 0;
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

void fn_801C68D0(u32 arg0) {
 extern u8 lbl_802981D0[]; void *fn_8000C0C0(void *); void fn_8005FA14(s32);
 void *manager=fn_8000C0C0(lbl_802981D0); u8 *table=manager?*(u8 **)((u8 *)manager+0x30):0;
 if(table){u8 *ptr=table; s32 i=0; do {if(*(u32 *)(ptr+4)==arg0){s32 off=i*0x14+4;if(*(u32 *)(table+off)){fn_8005FA14(0);*(u32 *)(table+off)=0;}break;}ptr+=0x14;i++;}while(i!=32);}
}

void fn_801C6DB8(u32 arg0) {
 extern u8 lbl_802981D0[]; void *fn_8000C0C0(void *,void *); void fn_8005F788(u32,s32,s32);
 void *p=fn_8000C0C0(lbl_802981D0,lbl_802981D0); u8 *list, *start; s32 i;
 if(p) list=(u8 *)*(void **)((u8 *)p+0x30); else list=0;

 if(list && arg0) {
  start = list;
  for(i=0;i<64;i++) {
   if(*(u32 *)(list+0x290) == arg0){
    *(u32 *)(list+0x290)=0;
    fn_8005F788(arg0,0,1);
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

extern u32 lbl_8036C510;
void fn_801C7598(void* arg0) {
    void* temp_r3;
    
    temp_r3 = (void*)fn_800675E0();
    if (temp_r3 != NULL && *(u8*)temp_r3 != 0) {
        u8 r6 = ((u8*)temp_r3)[1];
        u8 r5 = ((u8*)temp_r3)[2];
        u8 r0 = ((u8*)temp_r3)[3];
        
        u32 temp_r4 = lbl_8036C510;
        u32 arg_ptr;
        
        *(u8*)((char*)&temp_r4 + 0xC) = r6;
        *(u8*)((char*)&temp_r4 + 0xD) = r5;
        *(u8*)((char*)&temp_r4 + 0xE) = r0;
        
        arg_ptr = (u32)temp_r4;
        fn_802217AC(&arg_ptr, 0xFFFFFF, r5, r6);
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
    
    void *x = fn_8000C0C0(lbl_802981D0);
    if (x != NULL) {
        s32 *p = *(s32 **)((u8 *)x + 0x30);
        if (p != NULL) {
            fn_80067708(3, 0, fn_801C7598, 0);
            fn_80067708(1, 4, fn_801C7644, *p);
            fn_80067708(2, 0, fn_801C7604, 0);
        }
    }
}

extern u8 lbl_802981D0[];
void fn_801C777C(void){extern u8 lbl_802981D0[];void fn_8000BF00(void*);fn_8000BF00(lbl_802981D0);}

void fn_801C77A4(void) {
    fn_8000CAF0((void*)&lbl_802981D0, 4);
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

void fn_801C7BF8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801C7C08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801C7F60(void){void fn_801C7F80(void);fn_801C7F80();}

void fn_801C7FC0(u32 arg0) {
    M2C_UNK fn_801C7FE8();
    if (arg0 != 0U) {
        fn_801C7FE8();
    }
    return;
}

void fn_801C838C(void *arg0) {
    void **vtable_entry;
    
    // Check if arg0 is null (this is checking r31 not null)
    if (arg0 != NULL) {
        // First check at offset 0x30
        if (*(u32*)((char*)arg0 + 0x30) != 0) {
            fn_8006EDA0((char*)arg0 + 0x30);
        }
        
        // Check and call vtable entry at offset 0x40  
        vtable_entry = *(void***)((char*)arg0 + 0x40);
        if (vtable_entry != NULL) {
            void (*func)(s32) = (void (*)(s32))(*(u32*)((char*)vtable_entry + 0x8));
            func(1);
        }
        
        // Check and call vtable entry at offset 0x44
        vtable_entry = *(void***)((char*)arg0 + 0x44);
        if (vtable_entry != NULL) {
            void (*func)(s32) = (void (*)(s32))(*(u32*)((char*)vtable_entry + 0x8));
            func(1);
        }
        
        // Check and call vtable entry at offset 0x38
        vtable_entry = *(void***)((char*)arg0 + 0x38);
        if (vtable_entry != NULL) {
            void (*func)(s32) = (void (*)(s32))(*(u32*)((char*)vtable_entry + 0x8));
            func(1);
        }
        
        // Check and call vtable entry at offset 0x3C
        vtable_entry = *(void***)((char*)arg0 + 0x3C);
        if (vtable_entry != NULL) {
            void (*func)(s32) = (void (*)(s32))(*(u32*)((char*)vtable_entry + 0x8));
            func(1);
        }
        
        // Check and call vtable entry at offset 0x48
        vtable_entry = *(void***)((char*)arg0 + 0x48);
        if (vtable_entry != NULL) {
            void (*func)(s32) = (void (*)(s32))(*(u32*)((char*)vtable_entry + 0x8));
            func(1);
        }
        
        // Check and call vtable entry at offset 0x4C
        vtable_entry = *(void***)((char*)arg0 + 0x4C);
        if (vtable_entry != NULL) {
            void (*func)(s32) = (void (*)(s32))(*(u32*)((char*)vtable_entry + 0x8));
            func(1);
        }
    }
}

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
    s32 fn_800C9400(s32 *, M2C_UNK, s32, void *, s32);
    M2C_UNK fn_800C9758(s32 *, s32 *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_800C992C(s32 *, void *, s32);
    M2C_UNK fn_800C99A0(s32 *, s32 *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_800CB90C(s32 *, s32 *, void *);
    M2C_UNK fn_800DF6DC(s32 *, s32);
    s32 fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    M2C_UNK fn_801CA814(s32, s32 *);
    M2C_UNK fn_801CB25C(s32 *, s32);
    s32 strlen(void *);
    extern char lbl_8027D8B0[];
    extern s32 *lbl_80368278;
    extern void *lbl_803682B8;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp20;
    s32 sp14;
    s32 sp8;
    s32 temp_r3;
    void *temp_r31;

    sp3C = 0;
    temp_r31 = lbl_803682B8;
    sp30 = 0;
    sp38 = 0;
    sp40 = 0;
    sp3C = 0;
    sp2C = 0;
    sp34 = 0;
    sp30 = 0;
    temp_r3 = fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430)));
    fn_801CB25C(&sp20, temp_r3);
    fn_800C9758(&sp2C, &sp20, 0, -1);
    fn_800C9A60(&sp20, -1);
    fn_800C9758(&sp38, lbl_80368278, 0, -1);
    fn_800C992C(&sp38, &lbl_8027D8B0[8], strlen(&lbl_8027D8B0[8]));
    if (fn_800C9400(&sp2C, 0, sp2C, &lbl_8027D8B0[0xE], strlen(&lbl_8027D8B0[0xE])) != 0) {
        fn_800CB90C(&sp14, &sp2C, &lbl_8027D8B0[0xF]);
        fn_800C99A0(&sp38, &sp14, 0, -1);
        fn_800C9A60(&sp14, -1);
    }
    fn_800DF6DC(&sp8, temp_r3);
    fn_800C99A0(&sp38, &sp8, 0, -1);
    fn_800C9A60(&sp8, -1);
    fn_800C992C(&sp38, &lbl_8027D8B0[0x11], strlen(&lbl_8027D8B0[0x11]));
    fn_801CA814(temp_r3, &sp38);
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

s32 fn_801C9A88(void) {
    return 0;
}

s32 fn_801C9A90(void) {
    s32 fn_800DC3B0(s32);
    M2C_UNK fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    M2C_UNK fn_801C9EE0(void *, s32);
    M2C_UNK fn_801CACE4(s32);
    extern void *lbl_803682B8;
    s32 temp_r30;
    void *temp_r31;

    temp_r31 = lbl_803682B8;
    temp_r30 = fn_800DC3B0(M2C_FIELD(lbl_803682B8, s32 *, 0x438));
    fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430)));
    fn_801CACE4(temp_r30);
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
 extern u8 lbl_803682B8[];
 void fn_800C9758(void *,void *,s32,s32),fn_800C9A60(void *,s32),fn_801C9D94(void *,void *),fn_801CAF58(s32,void *);
 s32 fn_8011C984(s32,s32),fn_8011C9E4(s32);
 s32 a[2]={0,0}, b[2]={0,0}, *obj=(s32 *)lbl_803682B8, t;
 t=fn_8011C984(obj[0x430/4],fn_8011C9E4(obj[0x430/4]));
 fn_801C9D94(a,lbl_803682B8); fn_800C9758(b,a,0,-1); fn_800C9A60(a,-1); fn_801CAF58(t,b); fn_800C9A60(b,-1); return 0;
}

s32 fn_801C9D58(void) {
    s32 fn_8011C9E4(s32);
    void fn_801C9EE0(void *, s32);
    extern void *lbl_803682B8;

    s32 temp_r3 = fn_8011C9E4(*(s32 *)((char *)lbl_803682B8 + 0x430));
    fn_801C9EE0(lbl_803682B8, temp_r3);
    return 0;
}

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

void *fn_801CA77C(void *p,s16 n){extern u8 lbl_80298428[];void fn_800C9A60(void*,s32),fn_801CBFD0(void*,s32),fn_800DF724(void*,s32),fn_800C428C(void*); if(p){*(u8**)((u8*)p+0x40)=lbl_80298428;fn_800C9A60((u8*)p+0x60,-1);fn_800C9A60((u8*)p+0x54,-1);if((u8*)p+0x48 && (u8*)p+0x48)fn_801CBFD0((u8*)p+0x48,0);fn_800DF724(p,0);if(n>0)fn_800C428C(p);}return p;}

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

void fn_801CC030(void *arg0) {
    u32 temp_r4;
    u32 temp_r5;
    u32 var_ctr;

    temp_r4 = M2C_FIELD(arg0, u32 *, 8);
    temp_r5 = temp_r4 + (M2C_FIELD(arg0, s32 *, 4) << 5);
    var_ctr = (u32) ((temp_r5 + 0x1F) - temp_r4) >> 5U;
    if (temp_r5 > temp_r4) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
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

void fn_801CCEA8(void* arg0, int arg1) {
    short val1 = *(short*)((char*)arg0 + 0x48);
    short val2 = *(short*)((char*)arg0 + 0x4a);
    void* vtable_ptr = *(void**)((char*)arg0 + 0x3c);
    fn_801CD480((int)vtable_ptr, val1, val2);
}

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

void *fn_801CD318(void *arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    void fn_801403F0(void);
    extern void lbl_80297C14;
    extern void lbl_80297E78;
    extern void lbl_802EF4C8;
    extern s8 lbl_80368274;

    void *temp_r3;
    
    temp_r3 = fn_8000CAA0(&lbl_80297C14, (s32)arg0, &lbl_80297C14);
    if (temp_r3 != NULL) {
        *(void **)((char *)temp_r3 + 0x40) = &lbl_80297E78;
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

void fn_801CD508(s32 arg0) {
    extern u8 *lbl_802984C0;
    u8 **var_r0;
    u8 **var_r5;

    var_r0 = NULL;
    if (arg0 != 0) {

    } else {
        var_r0 = &lbl_802984C0;
    }
    var_r5 = var_r0;
loop_5:
    if ((s32) **var_r5 != 0xA) {
        var_r5 += 4;
        goto loop_5;
    }
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

void *fn_801CDACC(void *a,void *b){u8 *x=b;u8 c=*x,d=x[1];s32 n=*(s16*)((u8*)a+0x70);u8 *p=(u8*)a+0x3c+n*4;p[0]=0;if(c>=0x81&&c<=0x9f || c>=0xe0&&c<=0xfc){if(d>=0x40&&d<=0x7e || d>=0x80&&d<=0xfc){p[0]=c;p[1]=d;}else p[0]=c;}else p[0]=c;return (u8*)a+0x3c+*(s16*)((u8*)a+0x70)*4;}

void *fn_801CDB74(void *arg0) {
    s32 var_r3;
    void *var_r4;
    s16 temp_r5;

    var_r3 = 0;
    var_r4 = (char *)arg0 + 0x3C;
loop_1:
    if (*(u32 *)var_r4 != 0) {
        var_r3 += 1;
        var_r4 = (char *)var_r4 + 4;
        goto loop_1;
    }
    temp_r5 = *(s16 *)((char *)arg0 + 0x70);
    if (var_r3 == temp_r5) {
        return (char *)arg0 + ((temp_r5 * 4) + 0x3C);
    }
    if (temp_r5 < var_r3) {
        s32 temp_r0 = var_r3 - temp_r5;
        s32 var_ctr = temp_r0 >> 3;
        if (var_ctr != 0) {
            do {
                *(u32 *)((char *)var_r4 + 0x0) = *(u32 *)((char *)var_r4 + 0x4);
                *(u32 *)((char *)var_r4 + 0x4) = *(u32 *)((char *)var_r4 + 0x8);
                *(u32 *)((char *)var_r4 + 0x8) = *(u32 *)((char *)var_r4 + 0xC);
                *(u32 *)((char *)var_r4 + 0xC) = *(u32 *)((char *)var_r4 + 0x10);
                *(u32 *)((char *)var_r4 + 0x10) = *(u32 *)((char *)var_r4 + 0x14);
                *(u32 *)((char *)var_r4 + 0x14) = *(u32 *)((char *)var_r4 + 0x18);
                *(u32 *)((char *)var_r4 + 0x18) = *(u32 *)((char *)var_r4 + 0x1C);
                *(u32 *)((char *)var_r4 + 0x1C) = *(u32 *)((char *)var_r4 + 0x20);
                var_r4 = (char *)var_r4 + 0x20;
                var_ctr--;
            } while (var_ctr != 0);
        }
        temp_r0 &= 7;
        if (temp_r0 != 0) {
            s32 var_ctr_2 = temp_r0;
            do {
                *(u32 *)((char *)var_r4 + 0x0) = *(u32 *)((char *)var_r4 + 0x4);
                var_r4 = (char *)var_r4 + 0x4;
                var_ctr_2--;
            } while (var_ctr_2 != 0);
        }
    }
    return (char *)arg0 + ((temp_r5 * 4) + 0x3C);
}

s16 fn_801CDC54(void *p,u8 flag){extern s16 lbl_80366EAA;extern u8 lbl_8027DE18[];s16 sp=0;u32 *q=(u32*)((u8*)p+0x3c);s16 *cap=&sp; s16 old=*(s16*)((u8*)p+0x70),v;void fn_801475FC(void*,s32);for(;;){if(*q==0)break;sp++;q+=4;}if(lbl_80366EAA<sp)cap=&lbl_80366EAA;v=old+1;*(s16*)((u8*)p+0x70)=v;if((u32)v>(u32)*cap)*(s16*)((u8*)p+0x70)=*cap & ~((-(s32)flag|flag)>>31);if(old!=*(s16*)((u8*)p+0x70))fn_801475FC(lbl_8027DE18+8,100);return *(s16*)((u8*)p+0x70);}

s16 fn_801CDD10(void *p,u8 flag){extern s16 lbl_80366EA8;extern u8 lbl_8027DE18[];s16 sp=0;u32*q=(u32*)((u8*)p+0x3c);s16*cap=&sp; s16 old=*(s16*)((u8*)p+0x70),v;void fn_801475FC(void*,s32);for(;;){if(*q==0)break;sp++;q+=4;}if(lbl_80366EA8<sp)cap=&lbl_80366EA8;v=old-1;*(s16*)((u8*)p+0x70)=v;if(v<0)*(s16*)((u8*)p+0x70)=*cap & ((-(s32)flag|flag)>>31);if(old!=*(s16*)((u8*)p+0x70))fn_801475FC(lbl_8027DE18+8,100);return *(s16*)((u8*)p+0x70);}

void fn_801CDDC8(s32 arg0, s8 *arg1) {
    u32 *var_r31;

    var_r31 = (u32 *) (arg0 + 0x3C);
    *arg1 = 0;
    if ((u32) *var_r31 != 0U) {
        goto loop_2;
    }
    return;
loop_2:
    fn_802343E0(arg1, var_r31);
    var_r31 += 4;
    if ((u32) *var_r31 != 0U) {
        goto loop_2;
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

void *fn_801CE070(s32 a,char*b,s32 c){void *fn_8000CAA0(void*,s32);void fn_801403F0(void);void fn_800C96F8(void*,char*,s32);extern u8 lbl_802986A8[];void*p=fn_8000CAA0(lbl_802986A8,c);if(p){fn_801403F0();*(s32*)((char*)p+0x40)=0;*(s32*)((char*)p+0x44)=0;*(s32*)((char*)p+0x4c)=0;*(s32*)((char*)p+0x50)=0;*(s32*)((char*)p+0x54)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x5c)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x48)=0;}*(s32*)((char*)p+0x4c)=0;*(s32*)((char*)p+0x50)=a;fn_800C96F8((char*)p+0x54,b,strlen(b));return p;}

void *fn_801CE11C(s32 arg0,char *arg1,s32 arg2,s32 arg3) {
void *fn_8000CAA0(void*,s32); void fn_801403F0(void); void fn_800C96F8(void*,char*,s32); extern u8 lbl_802986A8[];
void *p=fn_8000CAA0(lbl_802986A8,arg3);
if(p){fn_801403F0();*(s32*)((char*)p+0x40)=0;*(s32*)((char*)p+0x44)=0;*(s32*)((char*)p+0x4c)=0;*(s32*)((char*)p+0x50)=0;*(s32*)((char*)p+0x54)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x5c)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x48)=0;}
*(s32*)((char*)p+0x4c)=arg2;*(s32*)((char*)p+0x50)=arg0;fn_800C96F8((char*)p+0x54,arg1,strlen(arg1));return p;
}

void fn_801CE2DC(s32 arg0)
{
    s32 temp_r3;
    s32 r31_copy = arg0;
    
    temp_r3 = fn_8013FF94(r31_copy, 3, 0);
    fn_80140210(r31_copy, temp_r3, 0);
    
    temp_r3 = fn_8013FF94(r31_copy, 2, 0);
    fn_80140210(r31_copy, temp_r3, 0);
    
    temp_r3 = fn_8013FF94(r31_copy, 1, 0);
    fn_80140210(r31_copy, temp_r3, 0);
    
    temp_r3 = fn_8013FF94(r31_copy, 0, 0);
    fn_80140210(r31_copy, temp_r3, 1);
}

void fn_801CE744(s32 arg0) {
    void *fn_8013FF94(s32, s32, s32);
    void *fn_8013F6B8(void *, s32 *);
    void fn_8013F748(void *, s32 *, s32 *);
    void fn_8013FF00(s32, void *);
    void *base;
    void *obj;
    s32 tmp[2];
    base = fn_8013FF94(arg0, 0, 0);
    obj = fn_8013FF94(arg0, 2, 0);
    tmp[0] = *(s32 *)((u8 *)base + 0x3E);
    fn_8013F748(base, &tmp[0], &tmp[0]);
    base = obj;
    obj = fn_8013F6B8(base, &tmp[0]);
    *(s16 *)((u8 *)base + 0x4C) = *(s16 *)obj;
    *(s16 *)((u8 *)base + 0x4E) = *(s16 *)((u8 *)obj + 2);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 2, 0));
}

void fn_801CEC28(s32 arg0) {
    M2C_UNK fn_8013FF00(s32, s32);
    s32 fn_8013FF94(M2C_UNK, M2C_UNK);
    fn_8013FF00(arg0, fn_8013FF94(0, 0));
}

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
#pragma cplusplus reset

void fn_801CF5A4(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *, s32);
    M2C_UNK spC;
    s16 temp_r8;
    s16 spA;
    s32 temp_r6;

    temp_r6 = *(s16 *)((u8 *)arg1 + 0x3C) * 0x22;
    temp_r8 = 5;
    spA = temp_r6 + 0xD;
    *arg0 = fn_8013F748(arg1, &spC, &temp_r8, temp_r6)[0];
}

s32 fn_801CF5FC(void *arg0) {
    extern u16 lbl_80298720[];
    s16 val = *(s16*)((u8*)arg0 + 0x3C);
    return lbl_80298720[val * 2];
}

s32 fn_801CF614(void *arg0) {
    s16 temp = *(s16 *)((u8 *)arg0 + 0x3C);
    if (temp == 0) {
        return 0;
    }
    return -1;
}

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

void fn_801CF92C(void *arg0) {
    void *temp_r4;
    u8 temp_r4_2;

    temp_r4 = (u16 *)&lbl_80331D00 + (M2C_FIELD(arg0, u8 *, 0x30) * 0x2B8);
    if (!(M2C_FIELD(temp_r4, s32 *, 8) & 1)) {
        fn_8000C188();
        return;
    }
    fn_801D15D4(temp_r4);
    temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x30);
    fn_801D107C((u16 *)&lbl_80331D00 + (temp_r4_2 * 0x2B8), temp_r4_2);
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

void fn_801CFCB4(void*a){u8*p=(u8*)a; s8 x; x=(s8)p[0xec];if(x)p[0xec]=3;x=(s8)p[0xf4];if(x)p[0xf4]=3;p+=16;x=(s8)p[0xec];if(x)p[0xec]=3;x=(s8)p[0xf4];if(x)p[0xf4]=3;x=(s8)p[0xfc];if(x)p[0xfc]=3;x=(s8)p[0x104];if(x)p[0x104]=3;x=(s8)p[0x10c];if(x)p[0x10c]=3;x=(s8)p[0x114];if(x)p[0x114]=3;}

void fn_801CFD60(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s8 arg4) {
    s32 temp_r8;

    temp_r8 = arg1 * 8;
    temp_r8 += 0xEC;
    temp_r8 += arg0;
    *(u8 *)(temp_r8 + 0x0) = 1;
    *(u16 *)(temp_r8 + 0x2) = arg2;
    *(u16 *)(temp_r8 + 0x4) = arg3;
    *(u8 *)(temp_r8 + 0x6) = arg4;
    *(u8 *)(temp_r8 + 0x7) = 0;
}

void fn_801CFD8C(s32 arg0, s32 arg1, u8 arg2) {
    u32 temp_r4;

    temp_r4 = (arg1 * 0xE) + 0x60;
    if (arg2 != 0) {
        *(u8*)(arg0 + temp_r4) |= 2;
        return;
    }
    *(u8*)(arg0 + temp_r4) &= 0xFFFFFFFD;
}

void fn_801CFDBC(s32 arg0, s32 arg1) {
    s32 temp_r4;
    
    temp_r4 = (arg1 * 0xE) + 0x60;
    *(u8*)(arg0 + temp_r4) |= 1;
}

void fn_801CFDD4(void*a){u8*p=(u8*)a;s8 x;x=(s8)p[0x61];if(x)p[0x61]=0x63;x=(s8)p[0x6f];if(x)p[0x6f]=0x63;p+=0x1c;x=(s8)p[0x61];if(x)p[0x61]=0x63;x=(s8)p[0x6f];if(x)p[0x6f]=0x63;x=(s8)p[0x7d];if(x)p[0x7d]=0x63;x=(s8)p[0x8b];if(x)p[0x8b]=0x63;x=(s8)p[0x99];if(x)p[0x99]=0x63;x=(s8)p[0xa7];if(x)p[0xa7]=0x63;x=(s8)p[0xb5];if(x)p[0xb5]=0x63;x=(s8)p[0xc3];if(x)p[0xc3]=0x63;}

void fn_801CFE80(s32 arg0, s32 arg1) {
    u8 *temp_r4;

    temp_r4 = (u8 *)(arg0 + ((arg1 * 0xE) + 0x60));
    if ((s8)(*temp_r4) != 0) {
        *(temp_r4 + 1) = 0x63;
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

void fn_801D0200(s8 *arg0) {
    s8 temp;
    
    temp = arg0[0x28];
    if (temp != 0) {
        arg0[0x28] = 5;
    }
    temp = arg0[0x30];
    if (temp != 0) {
        arg0[0x30] = 5;
    }
    arg0 += 0x10;
    temp = arg0[0x28];
    if (temp != 0) {
        arg0[0x28] = 5;
    }
    temp = arg0[0x30];
    if (temp != 0) {
        arg0[0x30] = 5;
    }
    temp = arg0[0x38];
    if (temp != 0) {
        arg0[0x38] = 5;
    }
    temp = arg0[0x40];
    if (temp != 0) {
        arg0[0x40] = 5;
    }
    temp = arg0[0x48];
    if (temp != 0) {
        arg0[0x48] = 5;
    }
}

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

void fn_801D0444(s32 arg0, s32 arg1) {
    if (arg1 >= 3) {
        return;
    }
    *(s16*)(arg0 + (arg1 * 2)) = 0;
    *(s16*)(arg0 + 0xE) = 0;
}

void fn_801D0460(void *arg0, s32 arg1) {
    if (arg1 < 3) {
        u32* field_ptr = (u32*)((char*)arg0 + 8);
        *field_ptr |= (0x100 << arg1);
    }
}

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
    struct Node *var_r4;
    s16 var_r3;

    if (*(u32 *)((u8 *)arg0 + 0x6C) == 0) {
        return 0;
    }
    var_r4 = *(struct Node **)((u8 *)arg0 + 0x74);
    var_r3 = *(s16 *)((u8 *)arg0 + 0x4E);
    if (var_r3 >= 0) {
        goto loop_pos;
        do {
            var_r4 = var_r4->next;
            var_r3 -= 1;
        loop_pos:
            ;
        } while (var_r3 > 0);
    } else {
        goto loop_neg;
        do {
            var_r4 = var_r4->prev;
            var_r3 += 1;
        loop_neg:
            ;
        } while (var_r3 < 0);
    }
    return fn_800BE890(var_r4->unk8);
}

s32 fn_801D2B04(void*a){
    s32 fn_8000E0E4(void);
    s32 fn_800A8A88(s32);
    void fn_800BE728(s32);
    void*p;
    s16 n;
    
    if(M2C_FIELD(a,u32*,0x6c) == 0)
        return 0;
        
    n = M2C_FIELD(a,s16*,0x4e);
    p = M2C_FIELD(a,void**,0x74);
    
    if(n < 0) {
        while(n < 0) {
            p = M2C_FIELD(p,void**,0);
            n++;
        }
    } else {
        while(n > 0) {
            p = M2C_FIELD(p,void**,4);
            n--;
        }
    }

    if(M2C_FIELD(p,void**,0x10)) {
        return fn_800A8A88(M2C_FIELD(M2C_FIELD(p,void**,0x10),s32*,0x188));
    }
    
    fn_800BE728(M2C_FIELD(p,s32*,8));
    return fn_8000E0E4();
}

void *fn_801D2C20(void) {
    extern u16 lbl_8027E0F8[];
    return &lbl_8027E0F8[0x12];
}

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

void fn_801D3588(void) {
    extern u16 lbl_802CA264[50];
    
    u16 *var_r4;
    s32 temp_r0;
    
    var_r4 = &lbl_802CA264[0x48 / sizeof(u16)];
    
loop_3:
    if (var_r4 == NULL) {
        fn_8000C070(3);
        return;
    }
    temp_r0 = var_r4[0x1A0 / sizeof(u16)];
    var_r4 = &var_r4[0x184 / sizeof(u16)];
    if (temp_r0 & 0x8000) {
        fn_8000C070(2);
        return;
    }
    goto loop_3;
}

void fn_801D36B8(void *arg0) { void *fn_800C42D8(s32); void *fn_801D3860(s32,s32,s32); void fn_801400F4(void*,void*); void fn_80140234(void*,void*,s32); extern s32 lbl_80367110; void *obj; if((lbl_80367110&3)==0){ obj=fn_800C42D8(0xa0); if(obj){ obj=fn_801D3860(0x40,0x10,0xa); *(s16*)((u8*)obj+8)=0x10; *(u32*)((u8*)obj+0x34)|=0x10; *(s16*)((u8*)obj+0x24)=8; fn_801400F4(arg0,obj); fn_80140234(arg0,obj,1); } } }

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
    M2C_UNK fn_800C0BAC(s32);
    M2C_UNK fn_8013FE0C();
    extern u16 lbl_80367240[];
    s32 temp_r4;

    fn_8013FE0C();
    temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r4 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r4) & 0x1000) {
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

void fn_801D3A4C(void *arg0) { s16 x=M2C_FIELD(arg0,s16*,0xc), y=M2C_FIELD(arg0,s16*,0x10), a=M2C_FIELD(arg0,s16*,0xa), b=M2C_FIELD(arg0,s16*,0xe); s16 width=(s16)(y-x), height=(s16)(b-a); M2C_FIELD(arg0,s16*,0x12)=4; M2C_FIELD(arg0,s16*,0x14)=8; M2C_FIELD(arg0,s16*,0x16)=height-4; M2C_FIELD(arg0,s16*,0x18)=width-8; M2C_FIELD(arg0,s16*,0x5e)=(M2C_FIELD(arg0,s16*,0x16)-M2C_FIELD(arg0,s16*,0x12))>>1; M2C_FIELD(arg0,s16*,0x60)=0; M2C_FIELD(arg0,s16*,0x62)=0; M2C_FIELD(arg0,s16*,0x86)=(M2C_FIELD(arg0,s16*,0x16)-M2C_FIELD(arg0,s16*,0x12))>>1; M2C_FIELD(arg0,s16*,0x88)=M2C_FIELD(arg0,s16*,0x18)-M2C_FIELD(arg0,s16*,0x14); M2C_FIELD(arg0,s16*,0x8a)=0; }

s32 fn_801D3AE0(s32 arg0) {
    extern u16 lbl_80299CC4[];
    void *fn_8000CAA0(void *, s32, void *);
    
    fn_8000CAA0(lbl_80299CC4, arg0, lbl_80299CC4);
    *(u16 *)((char *)lbl_80299CC4 + 0x34) = 2;
    
    return 0;
}

void fn_801D3B7C(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *, void *, s32);
    extern u8 lbl_80299CC4[];
    extern u8 lbl_80331FB8[];
    extern s32 lbl_803682E0;
    
    *(s32*)(lbl_80331FB8 + 0x0) = -1;
    *(s32*)(lbl_80331FB8 + 0x4) = -1;
    *(u8*)(lbl_80331FB8 + 0x44) = 1;
    
    fn_8000CAA0(lbl_80299CC4, arg0, lbl_80299CC4, lbl_80331FB8, -1);
    
    *(s32*)(lbl_80331FB8 + 0x34) = 0;
    *(s32*)(&lbl_803682E0) = 0;
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

    void *obj = fn_800C4638(0x544, lbl_8027E258 + 0x27b, 0);
    *(void **)((char*)arg0 + 0x30) = obj;
    *(s32*)((char*)obj + 0xC) = 0;
    *(s32*)((char*)obj + 8) = 0;
    *(u8*)((char*)obj + 0x5A) = 0;
    *(u8*)((char*)obj + 0x10) = *(u8*)((char*)arg0 + 0x34);
    fn_8006EEFC((char*)obj + 8, lbl_8027E258 + 0x27c);
    lbl_803682E4 = *(s32*)((char*)obj + 8);
    fn_80162054();
    *(u8*)((char*)obj + 0x5A) = 1;
    fn_80145828();
    *(s32*)((char*)obj + 0xC) = fn_80059208(fn_801D8E80, arg0);
    fn_8008A290(2, 0xfa);
}

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

void fn_801D8C64(s32 arg0, s32 arg1)
{
    s32 temp_r3;
    s32 *temp_r4;
    
    temp_r3 = fn_800C4638(0);
    temp_r4 = (s32 *)temp_r3;
    *temp_r4 = 0;
    *(temp_r4 + 1) = 0;
    *(temp_r4 + 2) = 0;
    
    *(u16 *)((char *)arg0 + 0x0) = 0;
    *(u16 *)((char *)arg0 + 0x2) = (u16)arg1;
    *(u16 *)((char *)arg0 + 0x8) = 0;
    *(u16 *)((char *)arg0 + 0xa) = (u16)arg0;
    *(u16 *)((char *)arg0 + 0x18) = 0;
}

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

s32 fn_801DBFF8(void) {
    return 0;
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

void fn_801DC150(s32 arg0, s8 arg1, s8 arg2, s32 arg3, s32 arg4, s8 arg5, void *arg6) {
    void *fn_8000CAA0(M2C_UNK *, void *, M2C_UNK *);
    extern M2C_UNK lbl_80299C88;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80299C88, arg6, &lbl_80299C88);
    M2C_FIELD(temp_r3, void **, 0x30) = (void *) M2C_FIELD(arg6, void **, 0x30);
    M2C_FIELD(temp_r3, s32 *, 0x34) = arg0;
    M2C_FIELD(temp_r3, s8 *, 0x3C) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x40) = arg3;
    M2C_FIELD(temp_r3, s32 *, 0x38) = arg4;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x30), s8 *, 0x14) = arg2;
    M2C_FIELD(temp_r3, s8 *, 0x44) = arg5;
}

void fn_801DC1C8(void *arg0) {
    void *temp_r4;
    s32 temp_r0;

    temp_r4 = *(void**)((char*)arg0 + 0x30);
    *(u8*)((char*)temp_r4 + 0x332) = 0xC8;
    temp_r0 = (*(s32*)((char*)arg0 + 0x40) * 0x14) + 0x51A;
    *(s16*)((char*)temp_r4 + temp_r0) = (*(s16*)((char*)temp_r4 + temp_r0)) & 0xFFFFFFFE;
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
    h += (w->flags & 4) ? 40 : 0;
    w->height = h + 32;
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

void fn_801DDE44(void *arg0) {
    extern f32 lbl_8036B630;
    *(f32*)((char*)arg0 + 0x30) += lbl_8036B630;
    
    if (*(f32*)((char*)arg0 + 0x30) == *(f32*)((char*)arg0 + 0x34)) {
        fn_8000C188();
    }
}

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
    M2C_UNK fn_8000BF00(M2C_UNK *);
    M2C_UNK fn_8006EDA0(void *);
    extern M2C_UNK lbl_80299A78;
    extern M2C_UNK lbl_80299C58;
    M2C_UNK *var_r30;
    s32 var_r29;

    fn_8000BF00(&lbl_80299C58);
    var_r29 = 0;
    var_r30 = &lbl_80299A78;
    do {
        if ((u32) M2C_FIELD(var_r30, u32 *, 8) != 0U) {
            fn_8006EDA0(var_r30 + 8);
        }
        var_r29 += 1;
        M2C_FIELD(var_r30, u32 *, 8) = 0U;
        var_r30 += 0xC;
    } while (var_r29 < 0x28);
}

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
 extern s32 lbl_80367110; extern u32 lbl_80367240[]; extern f32 lbl_8036B6B8,lbl_8036B6BC;
 u8 gate=0; s32 flags;
 if(lbl_80367110&0x10) { if(!(lbl_80367110&0x20)) gate=1; }
 if(gate) return;
 flags=lbl_80367240[3];
 if((s16)*(f32*)((char*)arg0+0x44)!=0) return;
 if((flags&0x04000004) && *(u8*)((char*)arg0+0x84)) { *(f32*)((char*)arg0+0x44)=lbl_8036B6B8; return; }
 if((flags&0x08000008) && *(u8*)((char*)arg0+0x5C)) *(f32*)((char*)arg0+0x44)=lbl_8036B6BC;
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
    s16 h;
    struct Color col;

    h = M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12);
    col.r = 0x80;
    col.g = 0x78;
    col.b = 0x50;
    col.a = 0xE6;
    fn_80161AA8(0x10, arg1, h - 0x10, arg1, 0x10, &col);
}

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

void fn_801E0B48(s32 arg1, s32 arg2, s32 arg3) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80299ED8[];
    
    void *temp_r3;
    temp_r3 = fn_8000CAA0(lbl_80299ED8, arg3);
    *(s32 *) ((u8 *) temp_r3 + 0x60) = arg1;
    *(s32 *) ((u8 *) temp_r3 + 0x64) = arg2;
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

void fn_801E1168(void *arg0) {
    u8 fn_800EB788(void);
    void fn_801E11AC(void *, void *, s32);
    extern u16 lbl_803682F0[4];

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E11AC(lbl_803682F0, arg0, *(s32 *) ((u8 *) arg0 + 0x60));
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

void fn_801E204C(void *arg0) {
    extern M2C_UNK lbl_80330708;
    void *temp_r5;

    if (((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x54) == 4) && ((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x10) != 0x20)) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x54);
        M2C_FIELD(temp_r5, u8 *, 0x64) = (u8) M2C_FIELD(&lbl_80330708, u8 *, 0x51E);
        M2C_FIELD(temp_r5, s8 *, 0x65) = 9;
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

void fn_801E218C(void) {
    fn_800EB788();
    if (0) {
        // Dummy to add the clrlwi. r0, r3, 24 instruction
    }
}

void fn_801E21B0(void *arg0) {
    void *temp_r6;
    s32 temp_r5;

    temp_r6 = *(void **)((char *)arg0 + 0x54);
    temp_r5 = *(s32 *)((char *)arg0 + 0x4C);
    fn_800E9B80(temp_r6, temp_r6, temp_r5, temp_r5, arg0);
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
    s32 temp_r3 = (arg1 << 0xE) + *arg0;
    return temp_r3 + 0x2000;
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

void fn_801E3118(s32 *arg0,s32 arg1,u8 arg2) {
    void fn_800056CC(const char*,const char*);
    s32 fn_800C4604(s32,s32,const char*,s32);
    void fn_801E3014(s32*);
    void *fn_8000CAA0(void*,s32);
    extern u8 lbl_8027E980[];
    extern u8 lbl_80299DE8[];
    extern s32 lbl_80367110;
    
    s32 value;
    void *p;
    
    // First call: fn_800056CC with string arguments  
    fn_800056CC((char*)lbl_8027E980+0x16d,(char*)lbl_8027E980);
    
    // Second call: fn_800C4604 
    value = fn_800C4604(0, 0xfffda000, (char*)lbl_8027E980 + 0x14e, 0);
    
    // Store return value to arg0
    *arg0 = value;
    
    // Check condition - need to match the exact register usage and control flow
    if ((lbl_80367110 & 0x10) != 0) {
        fn_801E3014(arg0);
    } else {
        // Call fn_8000CAA0 and get pointer p - match register usage exactly  
        p = fn_8000CAA0(lbl_80299DE8, arg1);
        
        // Store value to (p + 0x54)
        *(s32*)((u8*)p + 0x54) = *arg0;
        
        // Store arg2 to (p + 0x60) - use proper bit extraction
        *(u32*)((u8*)p + 0x60) = (u32)arg2;
    }
}

void fn_801E3214(void *arg0) {
    M2C_UNK fn_800EA540(s32, void *);
    fn_800EA540(M2C_FIELD(arg0, s32 *, 0x54), arg0);
}

void fn_801E323C(s32 *arg0, s32 arg1) {
    M2C_UNK fn_800056CC(void *, M2C_UNK *);
    void *fn_8000CAA0(M2C_UNK *, s32);
    extern M2C_UNK lbl_8027E980;
    extern M2C_UNK lbl_80299DC8;
    fn_800056CC(&lbl_8027E980 + 0x197, &lbl_8027E980);
    M2C_FIELD(fn_8000CAA0(&lbl_80299DC8, arg1), s32 *, 0x54) = (s32) *arg0;
}

void fn_801E329C(void *arg0) {
    M2C_UNK fn_800EA7CC(s32, void *);
    fn_800EA7CC(M2C_FIELD(arg0, s32 *, 0x54), arg0);
}

void fn_801E32C4(s32 arg1) {
    extern u16 lbl_8027E980[];
    u16* temp = &lbl_8027E980[0x1AD];
    fn_800056CC(temp);
    fn_800E9AE4(arg1);
}

u8 fn_801E3308(s32 arg0) {
    u8 *ptr = (u8*) arg0;
    s32 count = 0;
    s32 i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 10; j++) {
            if (ptr[0x12 + j] != 0) {
                count++;
            } else {
                break;
            }
        }
        ptr += 0xA;
    }
    
    return (u8) (count + 1);
}

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
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg1, u16 *, 0x18);
    if (temp_r0 < 0x80U) {
        fn_80105D4C(arg0 + 0x30, (u8) temp_r0);
    }
}

s32 fn_801E3620(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0) + 0xACA70000) != 0x5346U) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 4) == 0x20050201;
}

void fn_801E3B08(u8* arg0) {
    u32 i;
    
    // Initialize first 32 bytes with 0x20
    for (i = 0; i < 32; i++) {
        arg0[i] = 0x20;
    }
}

s32 fn_801E417C(void *arg0) {
    s32 temp_r3;
    s32 temp_r0;

    temp_r3 = *(s32 *)((u8 *)arg0 + 0x48);
    temp_r0 = 0x100000 - temp_r3;
    return temp_r3 & ~(temp_r0 | (temp_r0 - 1));
}

s32 fn_801E434C(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x40) + 0xB9BB0000) != 0x384AU) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x44) == 0x20050201;
}
extern u16 lbl_80299E10;
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
