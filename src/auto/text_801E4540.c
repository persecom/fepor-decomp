/* Functions from 0x801E4540 to 0x801EA8C0, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

struct UnkStruct {
    u32 field_0[0x10];
    u32 field_8;
};

void fn_801E4540(void)
{
    void fn_800C0818(s32);
    void fn_8008A290(s32, s32);
    s32 fn_801270A4(void);
    void *fn_8000CAA0(void *, s32);
    void fn_80142060(void *);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80299FE0[];
    u8 *ptr;

    fn_800C0818(1);
    fn_8008A290(1, 0);
    ptr = (u8 *)fn_8000CAA0(lbl_80299FE0, fn_801270A4());
    if (ptr == 0) {
        return;
    }
    *(u8 *)(ptr + 0x30) = 0;
    *(u8 *)(ptr + 0x31) = 0;
    *(u8 *)(ptr + 0x32) = 0;
    *(u8 *)(ptr + 0x33) = 0;
    *(u8 *)(ptr + 0x34) = 0;
    *(u16 *)(ptr + 0x36) = 0;
    *(u16 *)(ptr + 0x38) = 0;
    *(u16 *)(ptr + 0x3A) = 8;
    *(s16 *)(ptr + 0x3C) = -1;
    *(s16 *)(ptr + 0x3E) = -1;
    *(u32 *)(ptr + 0x40) = 0;
    *(u32 *)(ptr + 0x44) = 0;
    *(u32 *)(ptr + 0x48) = 0;
    *(u32 *)(ptr + 0x4C) = 0;
    fn_80142060(ptr + 0x50);
    *(u32 *)(ptr + 0x5C) = 0;
    *(u32 *)(ptr + 0x60) = 0;
    *(u32 *)(ptr + 0x64) = 0;
    fn_8000C070(ptr, 3);
}

s32 fn_801E45FC(void) {
    extern char lbl_80299FA8[];
    return *(s32*)((u8*)lbl_80299FA8 + 4);
}

void fn_801E460C(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_801475FC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_801673D0(void *);
    void fn_8016758C(void *, void *, void *, f32, f32);
    void fn_801E4900(s16 *, void *);
    void fn_801E4C48(void *, s8);
    void fn_801E80B4(void *);
    void fn_801E8D34(void *);
    extern u8 lbl_8027EB78[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern u32 *lbl_80367240;
    extern u32 lbl_80368DC4;
    s16 spC[2];
    s16 sp8[2];
    s16 hold_val;
    s32 pressed;
    s32 held;
    s32 mode;
    s8 slot;
    u8 skip;
    void *msg;

    skip = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        skip = 1;
    }
    if (skip == 0) {
        held = lbl_80367240[1];
        pressed = held & (lbl_80367240[2] ^ held);
        if ((pressed & 0x100) != 0) {
            mode = *(u8 *)((u8 *)arg0 + 0x31);
            if (mode == 1 && fn_80166D8C(lbl_80330D68) == 0) {
                fn_8000C070(arg0, 2);
                return;
            }
        }
        if ((pressed & 0x40) && (fn_80166D8C(lbl_80330D68) == 0)) {
            slot = *(u8 *)((u8 *)arg0 + 0x30);
            if (slot > 0) {
                fn_801E4C48(arg0, (s8)(slot - 1));
            } else {
                fn_801E4C48(arg0, 2);
            }
            fn_801475FC(lbl_8027EB78 + 0x13F, 0x64);
            return;
        }
        if ((pressed & 0x20) && (fn_80166D8C(lbl_80330D68) == 0)) {
            slot = *(u8 *)((u8 *)arg0 + 0x30);
            if (slot < 2) {
                fn_801E4C48(arg0, (s8)(slot + 1));
            } else {
                fn_801E4C48(arg0, 0);
            }
            fn_801475FC(lbl_8027EB78 + 0x13F, 0x64);
            return;
        }
        if ((pressed & 0x800) && (fn_80166D8C(lbl_80330D68) == 0)) {
            fn_801E4900(sp8, arg0);
            msg = NULL;
            *(s32 *)spC = *(s32 *)sp8;
            switch ((s8)*(u8 *)((u8 *)arg0 + 0x31)) {
            case 0:
                msg = lbl_8027EB78 + 0x15B;
                break;
            case 1:
                msg = lbl_8027EB78 + 0x166;
                break;
            }
            fn_8016758C(lbl_80330D68, arg0, msg, (f32)spC[0], (f32)spC[1]);
            *(u32 *)lbl_80330D68 |= lbl_80368DC4;
            return;
        }
        if ((pressed & 0xA00) && (fn_80166D8C(lbl_80330D68) != 0)) {
            fn_801673D0(lbl_80330D68);
            return;
        }
        if ((pressed & 0x200) && (fn_80166D8C(lbl_80330D68) == 0)) {
            fn_8000C070(arg0, 5);
            fn_801475FC(lbl_8027EB78 + 0x172, 0x64);
            return;
        }
        hold_val = 8;
        if (held & 0x400) {
            hold_val = 0x10;
        }
        *(s16 *)((u8 *)arg0 + 0x3A) = hold_val;
        switch ((s8)*(u8 *)((u8 *)arg0 + 0x31)) {
        case 0:
            fn_801E8D34(arg0);
            break;
        case 1:
            fn_801E80B4(arg0);
            break;
        }
    }
}

void fn_801E4900(void *arg0, void *arg1, s16 arg5, s16 arg6) {
    s32 fn_800102BC(M2C_UNK, s8, f32);
    s8 fn_801E4A60(void *, s8);
    extern u16 lbl_80332260[4];
    extern u8 lbl_803682F8;
    extern f32 lbl_8036B6E8;
    
    s16 sp12;
    s16 sp10;
    s16 spE;
    s16 spC;
    s16 spA;
    s16 sp8;
    s16 var_r8;
    s16 var_r9;
    s32 temp_r4;
    s8 temp_r31;
    s8 temp_r31_2;
    s8 temp_r3;
    u8 temp_r0;

    
        var_r8 = arg5;
        var_r9 = arg6;
        if ((s8) lbl_803682F8 == 0) {
            sp10 = 0x100;
            sp12 = 0x1B;
            spC = 0x16A;
            spE = 0x1B;
            sp8 = 0x1D4;
            spA = 0x1B;
            M2C_FIELD(&lbl_80332260, s32 *, 0) = (s32) sp10;
            M2C_FIELD(&lbl_80332260, s32 *, 4) = (s32) spC;
            M2C_FIELD(&lbl_80332260, s32 *, 8) = (s32) sp8;
            lbl_803682F8 = 1;
        }
        temp_r0 = M2C_FIELD(arg1, u8 *, 0x31);
        switch ((s8) temp_r0) {                         /* irregular */
        case 0:
            temp_r3 = fn_801E4A60(arg1, (s8) M2C_FIELD(arg1, u8 *, 0x32));
            temp_r31 = temp_r3 - ((s16) M2C_FIELD(arg1, s16 *, 0x38) / 32);
            var_r8 = 0x28;
            var_r9 = (s16) ((s16) ((s32) (0x20 - fn_800102BC(-1, temp_r3, lbl_8036B6E8)) >> 1) + 0x62) + (temp_r31 << 5);
            break;
        case 1:
            temp_r4 = (s16) M2C_FIELD(arg1, s16 *, 0x38) / 32;
            temp_r31_2 = (s8) M2C_FIELD(arg1, u8 *, 0x33) - temp_r4;
            var_r8 = 0xA0;
            var_r9 = (s16) ((s16) ((s32) (0x20 - fn_800102BC(-1, (s8) temp_r4, lbl_8036B6E8)) >> 1) + 0x62) + (temp_r31_2 << 5);
            break;
        }
        M2C_FIELD(arg0, s16 *, 0) = var_r8;
        M2C_FIELD(arg0, s16 *, 2) = var_r9;
}

s8 fn_801E4A60(void *arg0, u8 arg1) {
    void *temp_r3;
    void *temp_r6;
    s8 var_r5;
    u8 temp_r0;
    u8 var_r4;
    u8 var_r4_2;
    u8 var_r4_3;
    void *temp_r6_2;
    void *temp_r6_3;
    void *temp_r6_4;
    void *sp54;
    void *sp48;
    void *sp3C;
    void *sp50;
    void *sp44;
    void *sp38;
    void *sp58;
    void *sp4C;
    void *sp40;
    void *sp60;
    void *sp2C;
    void *sp28;
    void *sp24;
    void *sp20;
    void *sp30;
    void *sp34;
    u8 sp1C;
    u8 sp18;
    u8 sp14;
    u8 sp10;
    u8 spC;
    u8 sp8;

    temp_r0 = *(u8 *)((char *)arg0 + 0x30);
    temp_r3 = (char *)arg0 + 0x54;
    temp_r6 = *(void **)((char *)temp_r3 + 0x4);
    
    switch ((s8) temp_r0) {
    case 0:
        sp18 = arg1;
        sp1C = arg1;
        sp50 = temp_r3;
        sp54 = temp_r6;
        while (sp54 != temp_r3) {
            temp_r6_2 = *(void **)((char *)sp54 + 0x8);
            var_r4 = 0;
            if (((s8) *(u8 *)((char *)temp_r6_2 + 0x0) >= 0) && ((s8) arg1 == (s8) *(u8 *)((char *)temp_r6_2 + 0x2))) {
                var_r4 = 1;
            }
            if (var_r4 == 0) {
                sp54 = *(void **)((char *)sp54 + 0x4);
                continue;
            }
            break;
        }
        sp58 = sp54;
        sp30 = sp54;
        break;
    case 1:
        sp10 = arg1;
        sp14 = arg1;
        sp44 = temp_r3;
        sp48 = temp_r6;
        while (sp48 != temp_r3) {
            temp_r6_3 = *(void **)((char *)sp48 + 0x8);
            var_r4_2 = 0;
            if (((s8) *(u8 *)((char *)temp_r6_3 + 0x0) >= 0) && ((s8) arg1 == (s8) *(u8 *)((char *)temp_r6_3 + 0x1))) {
                var_r4_2 = 1;
            }
            if (var_r4_2 == 0) {
                sp48 = *(void **)((char *)sp48 + 0x4);
                continue;
            }
            break;
        }
        sp4C = sp48;
        sp30 = sp48;
        break;
    case 2:
        sp8 = arg1;
        spC = arg1;
        sp38 = temp_r3;
        sp3C = temp_r6;
        while (sp3C != temp_r3) {
            temp_r6_4 = *(void **)((char *)sp3C + 0x8);
            var_r4_3 = 0;
            if (((s8) *(u8 *)((char *)temp_r6_4 + 0x0) >= 0) && ((s8) arg1 == (s8) *(u8 *)((char *)temp_r6_4 + 0x4))) {
                var_r4_3 = 1;
            }
            if (var_r4_3 == 0) {
                sp3C = *(void **)((char *)sp3C + 0x4);
                continue;
            }
            break;
        }
        sp40 = sp3C;
        sp30 = sp3C;
        break;
    default:
        return 0;
    }
    
    var_r5 = 0;
    sp34 = sp60;
    while (sp34 != sp30) {
        var_r5 += 1;
        sp34 = *(void **)((char *)sp34 + 0x4);
    }
    return var_r5;
}

#pragma global_optimizer off
void fn_801E4C48(void *arg0, s8 arg1) {
    void *fn_8000E0E4(void *);
    void fn_80056AE0(void *, void *);
    void fn_80057860(void *, s16);
    void fn_801E4CF8(void *);
    extern u8 lbl_8027EB78[];
    s32 zero;
    s16 t;

    *(u8 *)((u8 *)arg0 + 0x30) = (u8)arg1;
    fn_801E4CF8(arg0);
    zero = 0;
    *(u8 *)((u8 *)arg0 + 0x31) = (u8)zero;
    switch (zero) {
    case 0:
        fn_80056AE0(*(void **)((u8 *)arg0 + 0x60), fn_8000E0E4(lbl_8027EB78 + 0x182));
        break;
    case 1:
        fn_80056AE0(*(void **)((u8 *)arg0 + 0x60), fn_8000E0E4(lbl_8027EB78 + 0x18D));
        break;
    }
    *(u8 *)((u8 *)arg0 + 0x32) = 0;
    *(u8 *)((u8 *)arg0 + 0x33) = 0;
    *(u8 *)((u8 *)arg0 + 0x34) = 0;
    *(s16 *)((u8 *)arg0 + 0x36) = 0;
    *(s16 *)((u8 *)arg0 + 0x38) = 0;
    t = *(s16 *)((u8 *)arg0 + 0x36);
    fn_80057860(*(void **)((u8 *)arg0 + 0x5C), t);
}
#pragma global_optimizer on
void fn_801E4CF8(void *arg0) {
    M2C_UNK fn_801E4D54();
    M2C_UNK fn_801E4E8C();
    M2C_UNK fn_801E4FB8();
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x30);
    switch ((s8) temp_r0) {                         /* irregular */
    case 0:
        fn_801E4FB8();
        return;
    case 1:
        fn_801E4E8C();
        return;
    case 2:
        fn_801E4D54();
        return;
    }
}

#pragma use_lmw_stmw on
void fn_801E50E4(void *arg0) {
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009B8C(s32);
    void fn_8000A248(void);
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, s32);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80009B80(u8);
    void fn_80056B0C(s32);
    void fn_801E6CEC(void *);
    void fn_80009BC0(void *, s32);
    void fn_801E6694(void *);
    void fn_801E601C(void *);
    void fn_801E554C(void *);
    void fn_80009B98(void);
    void fn_801E551C(void);
    extern f32 lbl_8036B6EC;
    extern f32 lbl_8036B6F0;
    extern f32 lbl_8036B6E8;
    extern u8 lbl_80332000[];
    extern s16 lbl_803682FC;
    extern f64 lbl_8036B6E0;
    extern f32 lbl_8036B6F4;
    extern f32 lbl_8036B6F8;
    extern s16 lbl_8036830C;
    extern f32 lbl_8036B6FC;
    extern f32 lbl_8036B700;
    extern f32 lbl_8036B704;
    extern f32 lbl_8036B708;

    u8 *rect;
    s16 *p;
    s16 t2, t6, t0, t4;
    s32 alpha;

    fn_8000A258();
    fn_80009D74(lbl_8036B6EC, lbl_8036B6EC, lbl_8036B6F0, lbl_8036B6E8);
    fn_80009B8C(0xFF);
    fn_8000A248();
    fn_8006ECCC(*(s32 *)((u8 *)arg0 + 0x64), lbl_80332000, 0);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    p = &lbl_803682FC;
    t2 = p[1];
    t6 = p[3];
    t0 = lbl_803682FC;
    t4 = p[2];
    fn_8000770C(lbl_8036B6F4, lbl_8036B6F8, (f32)lbl_803682FC, (f32)p[1], (f32)(s16)(t4 - t0), (f32)(s16)(t6 - t2));
    fn_8000A258();
    alpha = 0x40;
    if ((s8)*(u8 *)((u8 *)arg0 + 0x30) == 0) {
        alpha = 0x80;
    }
    fn_80009B80((u8)alpha);
    fn_8000A248();
    fn_8006ECCC(*(s32 *)((u8 *)arg0 + 0x64), lbl_80332000, 4);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    rect = (u8 *)&lbl_8036830C;
    t2 = *(s16 *)(rect + 2);
    t6 = *(s16 *)(rect + 6);
    t0 = lbl_8036830C;
    t4 = *(s16 *)(rect + 4);
    fn_8000770C(lbl_8036B6FC, lbl_8036B700, (f32)lbl_8036830C, (f32)*(s16 *)(rect + 2), (f32)(s16)(t4 - t0), (f32)(s16)(t6 - t2));
    fn_8000A258();
    alpha = 0x40;
    if ((s32)*(u8 *)((u8 *)arg0 + 0x30) == 1) {
        alpha = 0x80;
    }
    fn_80009B80((u8)alpha);
    fn_8000A248();
    fn_8006ECCC(*(s32 *)((u8 *)arg0 + 0x64), lbl_80332000, 5);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    t2 = *(s16 *)(rect + 2);
    t6 = *(s16 *)(rect + 6);
    t0 = lbl_8036830C;
    t4 = *(s16 *)(rect + 4);
    fn_8000770C(lbl_8036B704, lbl_8036B700, (f32)lbl_8036830C, (f32)*(s16 *)(rect + 2), (f32)(s16)(t4 - t0), (f32)(s16)(t6 - t2));
    fn_8000A258();
    alpha = 0x40;
    if ((s32)*(u8 *)((u8 *)arg0 + 0x30) == 2) {
        alpha = 0x80;
    }
    fn_80009B80((u8)alpha);
    fn_8000A248();
    fn_8006ECCC(*(s32 *)((u8 *)arg0 + 0x64), lbl_80332000, 6);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    t2 = *(s16 *)(rect + 2);
    t6 = *(s16 *)(rect + 6);
    t0 = lbl_8036830C;
    t4 = *(s16 *)(rect + 4);
    fn_8000770C(lbl_8036B708, lbl_8036B700, (f32)lbl_8036830C, (f32)*(s16 *)(rect + 2), (f32)(s16)(t4 - t0), (f32)(s16)(t6 - t2));
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
    fn_80056B0C(*(s32 *)((u8 *)arg0 + 0x60));
    fn_801E6CEC(arg0);
    fn_8000A258();
    fn_80009BC0((void *)fn_801E551C, 0);
    fn_8000A248();
    switch ((s8)*(u8 *)((u8 *)arg0 + 0x30)) {
    case 0:
        fn_801E6694(arg0);
        break;
    case 1:
        fn_801E601C(arg0);
        break;
    case 2:
        fn_801E554C(arg0);
        break;
    }
    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
}
void fn_801E551C(void) {
    M2C_UNK fn_80225058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80225058(0x20, 0x5A, 0x220, 0x136);
}

#pragma use_lmw_stmw on
void fn_801E554C(void *arg0) {
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, f32);
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, s32);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800076EC(void);
    void fn_80007790(f32, f32, f32, f32);
    void fn_80007668(s32 *);
    void fn_80007884(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s16, u8, s32, s32, void *, f32, f32);
    s32 fn_80010B78(void *, s32, f32);
    u8 fn_80105BC0(void *, u8);
    s8 fn_801E4A60(void *, u8);
    void fn_801E5C1C(void *, s16, s16, s16, s16, u8, void *);
    extern f32 lbl_8036B70C, lbl_8036B710, lbl_8036B714, lbl_8036B6E8, lbl_8036B6EC, lbl_8036B718, lbl_8036B71C;
    extern u8 lbl_80330708[];
    extern u8 lbl_80332000[];
    extern s16 lbl_8036833C;

    struct Node { struct Node *prev; struct Node *next; u8 *data; };

    u8 color[4];
    s32 color_word;
    void *self;
    struct Node *node;
    s16 *rect;
    void *tbl74;
    void *tbl84;
    s8 row;
    s8 t;
    s16 y0;
    s16 y1;
    s16 pad;
    s16 pad2;
    s16 y;
    s16 w;
    s16 x2;
    s16 yline;
    s32 rem;
    s32 page;
    s8 lim;
    u8 in_view;
    u8 mark;
    u8 sel;
    void *str;
    void *str2;
    s32 unk36;
    u8 *data;
    struct Node *cur;

    self = arg0;
    fn_8000A258();
    fn_80009D74(lbl_8036B70C, lbl_8036B710, lbl_8036B714, lbl_8036B6E8);
    fn_8000A248();

    unk36 = *(s16 *)((u8 *)self + 0x36);
    node = *(struct Node **)((u8 *)self + 0x58);
    row = (s8)(unk36 / 32);
    t = row;
    if (row >= 0) {
        goto walk_fwd_chk;
        walk_fwd:
        node = node->next;
        t -= 1;
        walk_fwd_chk:
        if (t > 0) goto walk_fwd;
    } else {
        goto walk_back_chk;
        walk_back:
        node = node->prev;
        t += 1;
        walk_back_chk:
        if (t < 0) goto walk_back;
    }

    rem = unk36 % 32;
    y0 = (s16)(8 - rem);
    y1 = (s16)(y0 + ((0x20 - fn_800102BC(-1, lbl_8036B6E8)) >> 1));
    rect = &lbl_8036833C;
    tbl74 = lbl_80330708 + 0x74;
    tbl84 = lbl_80330708 + 0x84;
    goto loop_chk;

    loop_body:
    data = node->data;
    if ((s8)data[0] < 0) {
        pad = (s16)((0x20 - (s16)(rect[3] - rect[1])) >> 1);
        pad2 = (s16)(pad + 0xC);
        fn_8006ECCC(*(s32 *)((u8 *)self + 0x64), lbl_80332000, 0xC);
        fn_8000A258();
        fn_8000A174(lbl_80332000, 0x11);
        fn_8000A248();
        fn_80007898(1);
        y = (s16)((((s8)(row - (s8)page) << 5) + 8) - rem);
        yline = (s16)(y + pad);
        w = (s16)(rect[2] - rect[0]);
        fn_8000770C(lbl_8036B718, (f32)yline, (f32)rect[0], (f32)rect[1],
                    (f32)w, (f32)(s16)(rect[3] - rect[1]));
        fn_800076EC();
        x2 = (s16)(0x208 - (s16)(rect[2] - rect[0]));
        fn_8000A258();
        fn_8000A174(lbl_80332000, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)x2, (f32)yline, (f32)rect[0], (f32)rect[1],
                    (f32)(s16)(rect[2] - rect[0]), (f32)(s16)(rect[3] - rect[1]));
        color[0] = 0xFF;
        w = (s16)(rect[2] - rect[0]);
        color[1] = 0xFF;
        color[2] = 0xFF;
        x2 = (s16)(0x208 - w);
        color[3] = 0x4C;
        fn_8000A258();
        fn_8000A174(0, 0x12);
        fn_8000A248();
        fn_80007898(4);
        {
            f32 fy = lbl_8036B71C + (f32)(s16)(y + pad2);
            fn_80007790(lbl_8036B71C + (f32)(s16)(w + 8), fy,
                        lbl_8036B71C + (f32)x2, fy);
        }
        color_word = *(s32 *)color;
        fn_80007668(&color_word);
        fn_80007884();
    } else {
        if (fn_801E4A60(self, data[4]) == row) {
            str = fn_8000E0E4(((void **)*(void **)((u8 *)self + 0x4C))[(s8)data[4]]);
            sel = 0;
            t = (s8)*(u8 *)((u8 *)self + 0x33);
            cur = *(struct Node **)((u8 *)self + 0x58);
            {
                s8 idx = (s8)data[4];
                if (t >= 0) {
                    goto sel_fwd_chk;
                    sel_fwd:
                    cur = cur->next;
                    t -= 1;
                    sel_fwd_chk:
                    if (t > 0) goto sel_fwd;
                } else {
                    goto sel_back_chk;
                    sel_back:
                    cur = cur->prev;
                    t += 1;
                    sel_back_chk:
                    if (t < 0) goto sel_back;
                }
                switch ((s8)*(u8 *)((u8 *)self + 0x31)) {
                case 0:
                    sel = (u8)(idx == (s8)*(u8 *)((u8 *)self + 0x32));
                    break;
                case 1:
                    switch ((s8)*(u8 *)((u8 *)self + 0x30)) {
                    case 0:
                        sel = (u8)(idx == (s8)cur->data[2]);
                        break;
                    case 1:
                        sel = (u8)(idx == (s8)cur->data[1]);
                        break;
                    case 2:
                        sel = (u8)(idx == (s8)cur->data[4]);
                        break;
                    }
                    break;
                }
            }
            fn_801E5C1C(self, 0x13, (s16)(y0 + 3), 0x5A, 0x1A, sel, str);
        }
        mark = 0;
        if (fn_80105BC0(tbl74, data[0]) != 0) {
            mark = 0x14;
            if (fn_80105BC0(tbl84, data[0]) != 0) {
                mark = 1;
            }
        }
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001003C(0x88, y1, mark, 1, 0, fn_8000E0E4(*(void **)(data + 0xC)),
                    lbl_8036B6E8, lbl_8036B6EC);
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        str2 = fn_8000E0E4(((void **)*(void **)((u8 *)self + 0x44))[(s8)data[2]]);
        {
            s16 x = (s16)(((0x58 - fn_80010B78(str2, -1, lbl_8036B6E8)) >> 1) + 0x140);
            fn_8001003C(x, y1, mark, 1, 0, str2, lbl_8036B6E8, lbl_8036B6EC);
        }
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001003C(0x1A0, y1, mark, 1, 0,
                    fn_8000E0E4(((void **)*(void **)((u8 *)self + 0x48))[(s8)data[1]]),
                    lbl_8036B6E8, lbl_8036B6EC);
    }

    node = node->next;
    y1 = (s16)(y1 + 0x20);
    y0 = (s16)(y0 + 0x20);
    row = (s8)(row + 1);

    loop_chk:
    unk36 = *(s16 *)((u8 *)self + 0x36);
    rem = unk36 % 32;
    page = unk36 / 32;
    lim = (s8)((s8)page + 8);
    if (rem != 0) {
        lim = (s8)((s8)page + 9);
    }
    in_view = 0;
    if ((s8)page <= row && row <= lim) {
        in_view = 1;
    }
    if (in_view != 0 && node != (struct Node *)((u8 *)self + 0x54)) {
        goto loop_body;
    }
}
void fn_801E5C1C(s32 unused, s16 arg1, s16 arg2, s16 arg3, s16 arg4, u8 arg5, void *arg6) {
    s32 fn_80010B78(void *, s32, f32);
    s32 fn_800102BC(s32, f32);
    void fn_8000A258(void);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007790(f32, f32, f32, f32);
    void fn_80007668(s32 *);
    void fn_80007884(void);
    void fn_8001019C(s16, s16, u8, void *, ...);
    void fn_80009C0C(f32);
    void fn_800077D8(f32, f32, f32, f32);
    extern f32 lbl_8036B6E8;
    extern f32 lbl_8036B71C;
    extern f32 lbl_8036B720;
    extern f32 lbl_8036B724;
    u8 border[4];
    u8 fill[4];
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    f32 f_top;
    f32 f_right;
    f32 f_bottom;
    f32 f_left;
    s16 x;
    s16 y;
    s16 left;
    s16 top;
    s16 right;
    s16 bottom;
    s16 half_w;
    s16 half_h;
    u32 c;
    s16 tw;
    s32 th;
    s32 mode;
    s16 px;
    s32 py;

    tw = (s16)fn_80010B78(arg6, -1, lbl_8036B6E8);
    th = fn_800102BC(-1, lbl_8036B6E8);
    x = arg1;
    y = arg2;
    left = (s16)(x - 1);
    top = (s16)(y - 1);
    right = (s16)(x + arg3);
    bottom = (s16)(y + arg4);
    half_w = (s16)((arg3 - tw) >> 1);
    half_h = (s16)((arg4 - (s16)th) >> 1);

    c = 0x0B4A39FF;
    if (arg5 != 0) {
        c = 0x318D7FFF;
    }
    border[0] = (u8)(c >> 24);
    c = 0x0B4A39FF;
    if (arg5 != 0) {
        c = 0x318D7FFF;
    }
    border[1] = (u8)(c >> 16);
    c = 0x0B4A39FF;
    if (arg5 != 0) {
        c = 0x318D7FFF;
    }
    border[2] = (u8)(c >> 8);
    c = 0x0B4A39FF;
    if (arg5 != 0) {
        c = 0x318D7FFF;
    }
    border[3] = (u8)c;

    fill[0] = 0x1E;
    fill[1] = 0x1E;
    fill[2] = 0x1E;
    fill[3] = 0xFF;

    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(4);
    f_top = lbl_8036B71C + (f32)top;
    f_left = lbl_8036B71C + (f32)left;
    f_right = lbl_8036B71C + (f32)right;
    fn_80007790(f_left, f_top, f_right, f_top);
    sp14 = *(s32 *)border;
    fn_80007668(&sp14);
    fn_80007884();

    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(4);
    f_bottom = lbl_8036B71C + (f32)bottom;
    fn_80007790(f_right, f_top, f_right, f_bottom);
    sp10 = *(s32 *)border;
    fn_80007668(&sp10);
    fn_80007884();

    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(4);
    fn_80007790(f_right, f_bottom, f_left, f_bottom);
    spC = *(s32 *)border;
    fn_80007668(&spC);
    fn_80007884();

    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(4);
    fn_80007790(f_left, f_bottom, f_left, f_top);
    sp8 = *(s32 *)border;
    fn_80007668(&sp8);
    fn_80007884();

    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    px = (s16)(x + half_w);
    mode = 0x16;
    py = y + half_h;
    if (arg5 != 0) {
        mode = 0x15;
    }
    fn_8001019C(px, (s16)py, (u8)mode, arg6);

    fn_8000A258();
    fn_80009C0C(lbl_8036B720);
    fn_8000A248();

    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)arg1, (f32)arg2, (f32)arg3, (f32)arg4);
    sp18 = *(s32 *)fill;
    fn_80007668(&sp18);

    fn_8000A258();
    fn_80009C0C(lbl_8036B724);
    fn_8000A248();
}

#pragma use_lmw_stmw on
void fn_801E601C(void *arg0) {
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, f32);
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, s32);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800076EC(void);
    void fn_80007790(f32, f32, f32, f32);
    void fn_80007668(s32 *);
    void fn_80007884(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s16, u8, s32, s32, void *, f32, f32);
    s32 fn_80010B78(void *, s32, f32);
    u8 fn_80105BC0(void *, u8);
    s8 fn_801E4A60(void *, u8);
    void fn_801E5C1C(void *, s16, s16, s16, s16, u8, void *);
    extern f32 lbl_8036B70C, lbl_8036B710, lbl_8036B714, lbl_8036B6E8, lbl_8036B6EC, lbl_8036B718, lbl_8036B71C;
    extern u8 lbl_80330708[];
    extern u8 lbl_80332000[];
    extern s16 lbl_8036833C;

    struct Node { struct Node *prev; struct Node *next; u8 *data; };

    u8 color[4];
    s32 color_word;
    void *self;
    struct Node *node;
    s16 *rect;
    void *tbl74;
    void *tbl84;
    s8 row;
    s8 t;
    s16 y0;
    s16 y1;
    s16 pad;
    s16 pad2;
    s16 y;
    s16 w;
    s16 x2;
    s16 yline;
    s32 rem;
    s32 page;
    s8 lim;
    u8 in_view;
    u8 mark;
    u8 sel;
    void *str;
    void *str2;
    s32 unk36;
    u8 *data;
    struct Node *cur;

    self = arg0;
    fn_8000A258();
    fn_80009D74(lbl_8036B70C, lbl_8036B710, lbl_8036B714, lbl_8036B6E8);
    fn_8000A248();

    unk36 = *(s16 *)((u8 *)self + 0x36);
    node = *(struct Node **)((u8 *)self + 0x58);
    row = (s8)(unk36 / 32);
    t = row;
    if (row >= 0) {
        goto walk_fwd_chk;
        walk_fwd:
        node = node->next;
        t -= 1;
        walk_fwd_chk:
        if (t > 0) goto walk_fwd;
    } else {
        goto walk_back_chk;
        walk_back:
        node = node->prev;
        t += 1;
        walk_back_chk:
        if (t < 0) goto walk_back;
    }

    rem = unk36 % 32;
    y0 = (s16)(8 - rem);
    y1 = (s16)(y0 + ((0x20 - fn_800102BC(-1, lbl_8036B6E8)) >> 1));
    rect = &lbl_8036833C;
    tbl74 = lbl_80330708 + 0x74;
    tbl84 = lbl_80330708 + 0x84;
    goto loop_chk;

    loop_body:
    data = node->data;
    if ((s8)data[0] < 0) {
        pad = (s16)((0x20 - (s16)(rect[3] - rect[1])) >> 1);
        pad2 = (s16)(pad + 0xC);
        fn_8006ECCC(*(s32 *)((u8 *)self + 0x64), lbl_80332000, 0xC);
        fn_8000A258();
        fn_8000A174(lbl_80332000, 0x11);
        fn_8000A248();
        fn_80007898(1);
        y = (s16)((((s8)(row - (s8)page) << 5) + 8) - rem);
        yline = (s16)(y + pad);
        w = (s16)(rect[2] - rect[0]);
        fn_8000770C(lbl_8036B718, (f32)yline, (f32)rect[0], (f32)rect[1],
                    (f32)w, (f32)(s16)(rect[3] - rect[1]));
        fn_800076EC();
        x2 = (s16)(0x208 - (s16)(rect[2] - rect[0]));
        fn_8000A258();
        fn_8000A174(lbl_80332000, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)x2, (f32)yline, (f32)rect[0], (f32)rect[1],
                    (f32)(s16)(rect[2] - rect[0]), (f32)(s16)(rect[3] - rect[1]));
        color[0] = 0xFF;
        w = (s16)(rect[2] - rect[0]);
        color[1] = 0xFF;
        color[2] = 0xFF;
        x2 = (s16)(0x208 - w);
        color[3] = 0x4C;
        fn_8000A258();
        fn_8000A174(0, 0x12);
        fn_8000A248();
        fn_80007898(4);
        {
            f32 fy = lbl_8036B71C + (f32)(s16)(y + pad2);
            fn_80007790(lbl_8036B71C + (f32)(s16)(w + 8), fy,
                        lbl_8036B71C + (f32)x2, fy);
        }
        color_word = *(s32 *)color;
        fn_80007668(&color_word);
        fn_80007884();
    } else {
        if (fn_801E4A60(self, data[1]) == row) {
            str = fn_8000E0E4(((void **)*(void **)((u8 *)self + 0x48))[(s8)data[1]]);
            sel = 0;
            t = (s8)*(u8 *)((u8 *)self + 0x33);
            cur = *(struct Node **)((u8 *)self + 0x58);
            {
                s8 idx = (s8)data[1];
                if (t >= 0) {
                    goto sel_fwd_chk;
                    sel_fwd:
                    cur = cur->next;
                    t -= 1;
                    sel_fwd_chk:
                    if (t > 0) goto sel_fwd;
                } else {
                    goto sel_back_chk;
                    sel_back:
                    cur = cur->prev;
                    t += 1;
                    sel_back_chk:
                    if (t < 0) goto sel_back;
                }
                switch ((s8)*(u8 *)((u8 *)self + 0x31)) {
                case 0:
                    sel = (u8)(idx == (s8)*(u8 *)((u8 *)self + 0x32));
                    break;
                case 1:
                    switch ((s8)*(u8 *)((u8 *)self + 0x30)) {
                    case 0:
                        sel = (u8)(idx == (s8)cur->data[2]);
                        break;
                    case 1:
                        sel = (u8)(idx == (s8)cur->data[1]);
                        break;
                    case 2:
                        sel = (u8)(idx == (s8)cur->data[4]);
                        break;
                    }
                    break;
                }
            }
            fn_801E5C1C(self, 0x13, (s16)(y0 + 3), 0x5A, 0x1A, sel, str);
        }
        mark = 0;
        if (fn_80105BC0(tbl74, data[0]) != 0) {
            mark = 0x14;
            if (fn_80105BC0(tbl84, data[0]) != 0) {
                mark = 1;
            }
        }
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001003C(0x88, y1, mark, 1, 0, fn_8000E0E4(*(void **)(data + 0xC)),
                    lbl_8036B6E8, lbl_8036B6EC);
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        str2 = fn_8000E0E4(((void **)*(void **)((u8 *)self + 0x44))[(s8)data[2]]);
        {
            s16 x = (s16)(((0x58 - fn_80010B78(str2, -1, lbl_8036B6E8)) >> 1) + 0x140);
            fn_8001003C(x, y1, mark, 1, 0, str2, lbl_8036B6E8, lbl_8036B6EC);
        }
    }

    node = node->next;
    y1 = (s16)(y1 + 0x20);
    y0 = (s16)(y0 + 0x20);
    row = (s8)(row + 1);

    loop_chk:
    unk36 = *(s16 *)((u8 *)self + 0x36);
    rem = unk36 % 32;
    page = unk36 / 32;
    lim = (s8)((s8)page + 8);
    if (rem != 0) {
        lim = (s8)((s8)page + 9);
    }
    in_view = 0;
    if ((s8)page <= row && row <= lim) {
        in_view = 1;
    }
    if (in_view != 0 && node != (struct Node *)((u8 *)self + 0x54)) {
        goto loop_body;
    }
}

#pragma use_lmw_stmw on
void fn_801E6694(void *arg0) {
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, f32);
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, s32);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800076EC(void);
    void fn_80007790(f32, f32, f32, f32);
    void fn_80007668(s32 *);
    void fn_80007884(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s16, u8, s32, s32, void *, f32, f32);
    u8 fn_80105BC0(void *, u8);
    s8 fn_801E4A60(void *, u8);
    void fn_801E5C1C(void *, s16, s16, s16, s16, u8, void *);
    extern f32 lbl_8036B70C, lbl_8036B710, lbl_8036B714, lbl_8036B6E8, lbl_8036B6EC, lbl_8036B718, lbl_8036B71C;
    extern u8 lbl_80330708[];
    extern u8 lbl_80332000[];
    extern s16 lbl_8036833C;

    struct Node { struct Node *prev; struct Node *next; u8 *data; };

    u8 color[4];
    s32 color_word;
    void *self = arg0;
    struct Node *node;
    s16 *rect;
    void *tbl74;
    void *tbl84;
    s8 row;
    s8 t;
    s16 y0;
    s16 y1;
    s16 pad;
    s16 pad2;
    s16 y;
    s16 w;
    s16 x2;
    s16 yline;
    s32 rem;
    s32 page;
    s8 lim;
    u8 in_view;
    u8 mark;
    u8 sel;
    void *str;
    s32 unk36;
    u8 *data;
    struct Node *cur;

    fn_8000A258();
    fn_80009D74(lbl_8036B70C, lbl_8036B710, lbl_8036B714, lbl_8036B6E8);
    fn_8000A248();

    unk36 = *(s16 *)((u8 *)self + 0x36);
    node = *(struct Node **)((u8 *)self + 0x58);
    row = (s8)(unk36 / 32);
    t = row;
    if (row >= 0) {
        goto walk_fwd_chk;
        walk_fwd:
        node = node->next;
        t -= 1;
        walk_fwd_chk:
        if (t > 0) goto walk_fwd;
    } else {
        goto walk_back_chk;
        walk_back:
        node = node->prev;
        t += 1;
        walk_back_chk:
        if (t < 0) goto walk_back;
    }

    rem = unk36 % 32;
    y0 = (s16)(8 - rem);
    y1 = (s16)(y0 + ((0x20 - fn_800102BC(-1, lbl_8036B6E8)) >> 1));
    rect = &lbl_8036833C;
    tbl74 = lbl_80330708 + 0x74;
    tbl84 = lbl_80330708 + 0x84;
    goto loop_chk;

    loop_body:
    data = node->data;
    if ((s8)data[0] < 0) {
        pad = (s16)((0x20 - (s16)(rect[3] - rect[1])) >> 1);
        pad2 = (s16)(pad + 0xC);
        fn_8006ECCC(*(s32 *)((u8 *)self + 0x64), lbl_80332000, 0xC);
        fn_8000A258();
        fn_8000A174(lbl_80332000, 0x11);
        fn_8000A248();
        fn_80007898(1);
        y = (s16)((((s8)(row - (s8)page) << 5) + 8) - rem);
        yline = (s16)(y + pad);
        w = (s16)(rect[2] - rect[0]);
        fn_8000770C(lbl_8036B718, (f32)yline, (f32)rect[0], (f32)rect[1],
                    (f32)w, (f32)(s16)(rect[3] - rect[1]));
        fn_800076EC();
        x2 = (s16)(0x208 - (s16)(rect[2] - rect[0]));
        fn_8000A258();
        fn_8000A174(lbl_80332000, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)x2, (f32)yline, (f32)rect[0], (f32)rect[1],
                    (f32)(s16)(rect[2] - rect[0]), (f32)(s16)(rect[3] - rect[1]));
        color[0] = 0xFF;
        w = (s16)(rect[2] - rect[0]);
        color[1] = 0xFF;
        color[2] = 0xFF;
        x2 = (s16)(0x208 - w);
        color[3] = 0x4C;
        fn_8000A258();
        fn_8000A174(0, 0x12);
        fn_8000A248();
        fn_80007898(4);
        {
            f32 fy = lbl_8036B71C + (f32)(s16)(y + pad2);
            fn_80007790(lbl_8036B71C + (f32)(s16)(w + 8), fy,
                        lbl_8036B71C + (f32)x2, fy);
        }
        color_word = *(s32 *)color;
        fn_80007668(&color_word);
        fn_80007884();
    } else {
        if (fn_801E4A60(self, data[2]) == row) {
            str = fn_8000E0E4(((void **)*(void **)((u8 *)self + 0x44))[(s8)data[2]]);
            sel = 0;
            t = (s8)*(u8 *)((u8 *)self + 0x33);
            cur = *(struct Node **)((u8 *)self + 0x58);
            {
                s8 idx = (s8)data[2];
                if (t >= 0) {
                    goto sel_fwd_chk;
                    sel_fwd:
                    cur = cur->next;
                    t -= 1;
                    sel_fwd_chk:
                    if (t > 0) goto sel_fwd;
                } else {
                    goto sel_back_chk;
                    sel_back:
                    cur = cur->prev;
                    t += 1;
                    sel_back_chk:
                    if (t < 0) goto sel_back;
                }
                switch ((s8)*(u8 *)((u8 *)self + 0x31)) {
                case 0:
                    sel = (u8)(idx == (s8)*(u8 *)((u8 *)self + 0x32));
                    break;
                case 1:
                    switch ((s8)*(u8 *)((u8 *)self + 0x30)) {
                    case 0:
                        sel = (u8)(idx == (s8)cur->data[2]);
                        break;
                    case 1:
                        sel = (u8)(idx == (s8)cur->data[1]);
                        break;
                    case 2:
                        sel = (u8)(idx == (s8)cur->data[4]);
                        break;
                    }
                    break;
                }
            }
            fn_801E5C1C(self, 0x13, (s16)(y0 + 3), 0x5A, 0x1A, sel, str);
        }
        mark = 0;
        if (fn_80105BC0(tbl74, data[0]) != 0) {
            mark = 0x14;
            if (fn_80105BC0(tbl84, data[0]) != 0) {
                mark = 1;
            }
            mark = mark;
        }
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001003C(0x88, y1, mark, 1, 0, fn_8000E0E4(*(void **)(data + 0xC)),
                    lbl_8036B6E8, lbl_8036B6EC);
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001003C(0x148, y1, mark, 1, 0,
                    fn_8000E0E4(((void **)*(void **)((u8 *)self + 0x48))[(s8)data[1]]),
                    lbl_8036B6E8, lbl_8036B6EC);
    }

    node = node->next;
    y1 = (s16)(y1 + 0x20);
    y0 = (s16)(y0 + 0x20);
    row = (s8)(row + 1);

    loop_chk:
    unk36 = *(s16 *)((u8 *)self + 0x36);
    rem = unk36 % 32;
    page = unk36 / 32;
    lim = (s8)((s8)page + 8);
    if (rem != 0) {
        lim = (s8)((s8)page + 9);
    }
    in_view = 0;
    if ((s8)page <= row && row <= lim) {
        in_view = 1;
    }
    if (in_view != 0 && node != (struct Node *)((u8 *)self + 0x54)) {
        goto loop_body;
    }
}

#pragma peephole off
void fn_801E6CEC(void *arg0) {
    typedef struct { s16 x, y, x2, y2; } Rect;
    typedef struct { u8 r, g, b, a; } Color;
    void fn_80007358(f32, f32);
    void fn_80007668(Color *);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007790(f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(s32);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80057020(void *);
    void fn_8006ECCC(void *, void *, s32);
    extern u8 lbl_80332000[];
    extern Rect lbl_80368304;
    extern Rect lbl_8036831C;
    extern Rect lbl_80368324;
    extern Rect lbl_8036832C;
    extern Rect lbl_80368334;
    extern Rect lbl_80368344;
    extern Rect lbl_8036834C;
    extern Rect lbl_80368354;
    extern u16 lbl_8036B6D8;
    extern u8 lbl_8036B6DA;
    extern f32 lbl_8036B6E8;
    extern f32 lbl_8036B6EC;
    extern f32 lbl_8036B6F0;
    extern f32 lbl_8036B70C;
    extern f32 lbl_8036B710;
    extern f32 lbl_8036B71C;
    extern f32 lbl_8036B728;
    extern f32 lbl_8036B72C;
    extern f32 lbl_8036B730;
    extern f32 lbl_8036B734;
    extern f32 lbl_8036B738;
    extern f32 lbl_8036B73C;
    extern f32 lbl_8036B740;
    extern f32 lbl_8036B744;
    extern f32 lbl_8036B748;
    extern f32 lbl_8036B74C;
    extern f32 lbl_8036B750;
    extern f32 lbl_8036B754;

    u8 pal[3];
    Color c0, c1;
    Color tmp;
    s16 h;
    s16 y0;
    f32 fy0, fy1;
    s16 w1, w2, w3, h2;
    s16 xL, xR;

    fn_8000A258();
    fn_80009D74(lbl_8036B70C, lbl_8036B728, lbl_8036B6F0, lbl_8036B6E8);
    fn_80009B8C(0xFF);
    fn_8000A248();
    *(u16 *)pal = lbl_8036B6D8;
    pal[2] = lbl_8036B6DA;
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, pal[(s8)((u8 *)arg0)[0x30]]);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036B6EC, lbl_8036B6EC, (f32)lbl_80368304.x, (f32)lbl_80368304.y, (f32)(s16)(lbl_80368304.x2 - lbl_80368304.x), (f32)(s16)(lbl_80368304.y2 - lbl_80368304.y));
    h = (s16)(lbl_80368304.y2 - lbl_80368304.y);
    c0.r = 0xC5; c0.g = 0xA6; c0.b = 0x4B; c0.a = 0xFF;
    c1.r = 0x66; c1.g = 0x45; c1.b = 0x18; c1.a = 0xFF;
    fn_8000A258();
    fn_8000A174(NULL, 0x12);
    fn_8000A248();
    fn_80007898(4);
    y0 = (s16)(h + 0x136);
    fy0 = lbl_8036B71C + (f32)h;
    fy1 = lbl_8036B71C + (f32)y0;
    fn_80007790(lbl_8036B71C, fy0, lbl_8036B71C, fy1);
    tmp = c0;
    fn_80007668(&tmp);
    fn_80007884();
    fn_8000A258();
    fn_8000A174(NULL, 0x12);
    fn_8000A248();
    fn_80007898(4);
    fn_80007790(lbl_8036B72C, fy0, lbl_8036B72C, fy1);
    tmp = c1;
    fn_80007668(&tmp);
    fn_80007884();
    fn_8000A258();
    fn_8000A174(NULL, 0x12);
    fn_8000A248();
    fn_80007898(4);
    fn_80007790(lbl_8036B730, fy0, lbl_8036B730, fy1);
    tmp = c0;
    fn_80007668(&tmp);
    fn_80007884();
    fn_8000A258();
    fn_8000A174(NULL, 0x12);
    fn_8000A248();
    fn_80007898(4);
    fn_80007790(lbl_8036B734, fy0, lbl_8036B734, fy1);
    tmp = c1;
    fn_80007668(&tmp);
    fn_80007884();
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 0xD);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036B6EC, (f32)y0, (f32)lbl_80368344.x, (f32)lbl_80368344.y, (f32)(s16)(lbl_80368344.x2 - lbl_80368344.x), (f32)(s16)(lbl_80368344.y2 - lbl_80368344.y));
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 0xE);
    w1 = (s16)(lbl_80368344.x2 - lbl_80368344.x);
    w2 = (s16)(lbl_80368354.x2 - lbl_80368354.x);
    h2 = (s16)(lbl_8036834C.y2 - lbl_8036834C.y);
    w3 = (s16)((0x220 - w1) - w2);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(9);
    fn_800077D8((f32)w1, (f32)y0, (f32)w3, (f32)h2);
    fn_800077B0((f32)lbl_8036834C.x, (f32)lbl_8036834C.y, (f32)lbl_8036834C.x, (f32)lbl_8036834C.y, (f32)(s16)(lbl_8036834C.x2 - lbl_8036834C.x), (f32)(s16)(lbl_8036834C.y2 - lbl_8036834C.y));
    fn_80007358(lbl_8036B6EC, lbl_8036B6EC);
    fn_80007884();
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 0xF);
    xR = (s16)(0x220 - (s16)(lbl_80368354.x2 - lbl_80368354.x));
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C((f32)xR, (f32)y0, (f32)lbl_80368354.x, (f32)lbl_80368354.y, (f32)(s16)(lbl_80368354.x2 - lbl_80368354.x), (f32)(s16)(lbl_80368354.y2 - lbl_80368354.y));
    fn_8000A258();
    fn_80009D74(lbl_8036B70C, lbl_8036B710, lbl_8036B6F0, lbl_8036B6E8);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B738);
    fn_8000A248();
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 8);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(9);
    fn_800077D8(lbl_8036B6EC, lbl_8036B6EC, lbl_8036B73C, lbl_8036B740);
    fn_800077B0((f32)lbl_8036831C.x, (f32)lbl_8036831C.y, (f32)lbl_8036831C.x, (f32)lbl_8036831C.y, (f32)(s16)(lbl_8036831C.x2 - lbl_8036831C.x), (f32)(s16)(lbl_8036831C.y2 - lbl_8036831C.y));
    fn_80007358(lbl_8036B6EC, lbl_8036B6EC);
    fn_80007884();
    fn_8000A258();
    fn_80009D74(lbl_8036B6EC, lbl_8036B6EC, lbl_8036B6F0, lbl_8036B6E8);
    fn_8000A248();
    fn_8000A258();
    fn_80009D74(lbl_8036B70C, lbl_8036B710, lbl_8036B744, lbl_8036B6E8);
    fn_8000A248();
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 9);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036B748, lbl_8036B74C, (f32)lbl_80368324.x, (f32)lbl_80368324.y, (f32)(s16)(lbl_80368324.x2 - lbl_80368324.x), (f32)(s16)(lbl_80368324.y2 - lbl_80368324.y));
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 0xA);
    h2 = (s16)(lbl_80368324.y2 - lbl_80368324.y);
    w2 = (s16)(lbl_80368334.y2 - lbl_80368334.y);
    w3 = (s16)((0x12E - h2) - w2);
    w1 = (s16)(lbl_8036832C.x2 - lbl_8036832C.x);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(9);
    fn_800077D8(lbl_8036B748, (f32)(s16)(h2 + 4), (f32)w1, (f32)w3);
    fn_800077B0((f32)lbl_8036832C.x, (f32)lbl_8036832C.y, (f32)lbl_8036832C.x, (f32)lbl_8036832C.y, (f32)(s16)(lbl_8036832C.x2 - lbl_8036832C.x), (f32)(s16)(lbl_8036832C.y2 - lbl_8036832C.y));
    fn_80007358(lbl_8036B6EC, lbl_8036B6EC);
    fn_80007884();
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 0xB);
    xL = (s16)(0x132 - (s16)(lbl_80368334.y2 - lbl_80368334.y));
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036B748, (f32)xL, (f32)lbl_80368334.x, (f32)lbl_80368334.y, (f32)(s16)(lbl_80368334.x2 - lbl_80368334.x), (f32)(s16)(lbl_80368334.y2 - lbl_80368334.y));
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 9);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036B750, lbl_8036B74C, (f32)lbl_80368324.x, (f32)lbl_80368324.y, (f32)(s16)(lbl_80368324.x2 - lbl_80368324.x), (f32)(s16)(lbl_80368324.y2 - lbl_80368324.y));
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 0xA);
    h2 = (s16)(lbl_80368324.y2 - lbl_80368324.y);
    w2 = (s16)(lbl_80368334.y2 - lbl_80368334.y);
    w3 = (s16)((0x12E - h2) - w2);
    w1 = (s16)(lbl_8036832C.x2 - lbl_8036832C.x);
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(9);
    fn_800077D8(lbl_8036B750, (f32)(s16)(h2 + 4), (f32)w1, (f32)w3);
    fn_800077B0((f32)lbl_8036832C.x, (f32)lbl_8036832C.y, (f32)lbl_8036832C.x, (f32)lbl_8036832C.y, (f32)(s16)(lbl_8036832C.x2 - lbl_8036832C.x), (f32)(s16)(lbl_8036832C.y2 - lbl_8036832C.y));
    fn_80007358(lbl_8036B6EC, lbl_8036B6EC);
    fn_80007884();
    fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 0xB);
    xL = (s16)(0x132 - (s16)(lbl_80368334.y2 - lbl_80368334.y));
    fn_8000A258();
    fn_8000A174(lbl_80332000, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036B750, (f32)xL, (f32)lbl_80368334.x, (f32)lbl_80368334.y, (f32)(s16)(lbl_80368334.x2 - lbl_80368334.x), (f32)(s16)(lbl_80368334.y2 - lbl_80368334.y));
    if ((s32)((u8 *)arg0)[0x30] == 2) {
        fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 9);
        fn_8000A258();
        fn_8000A174(lbl_80332000, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_8036B754, lbl_8036B74C, (f32)lbl_80368324.x, (f32)lbl_80368324.y, (f32)(s16)(lbl_80368324.x2 - lbl_80368324.x), (f32)(s16)(lbl_80368324.y2 - lbl_80368324.y));
        fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 0xA);
        h2 = (s16)(lbl_80368324.y2 - lbl_80368324.y);
        w2 = (s16)(lbl_80368334.y2 - lbl_80368334.y);
        w3 = (s16)((0x12E - h2) - w2);
        w1 = (s16)(lbl_8036832C.x2 - lbl_8036832C.x);
        fn_8000A258();
        fn_8000A174(lbl_80332000, 0x11);
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8(lbl_8036B754, (f32)(s16)(h2 + 4), (f32)w1, (f32)w3);
        fn_800077B0((f32)lbl_8036832C.x, (f32)lbl_8036832C.y, (f32)lbl_8036832C.x, (f32)lbl_8036832C.y, (f32)(s16)(lbl_8036832C.x2 - lbl_8036832C.x), (f32)(s16)(lbl_8036832C.y2 - lbl_8036832C.y));
        fn_80007358(lbl_8036B6EC, lbl_8036B6EC);
        fn_80007884();
        fn_8006ECCC(*(void **)((u8 *)arg0 + 0x64), lbl_80332000, 0xB);
        xL = (s16)(0x132 - (s16)(lbl_80368334.y2 - lbl_80368334.y));
        fn_8000A258();
        fn_8000A174(lbl_80332000, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_8036B754, (f32)xL, (f32)lbl_80368334.x, (f32)lbl_80368334.y, (f32)(s16)(lbl_80368334.x2 - lbl_80368334.x), (f32)(s16)(lbl_80368334.y2 - lbl_80368334.y));
    }
    fn_80057020(*(void **)((u8 *)arg0 + 0x5C));
}
#pragma peephole on
void fn_801E7D18(void *arg0) {
    f32 fn_800067BC(s32, u8, f32, f32, f32, f32);
    void fn_80009B8C(s32);
    void fn_80009C20( f32, f32, f32, f32, f32, f32, f32, f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    s32 fn_800102BC(s32, s32, f32);
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    void fn_8008BF68(s16, s16, s32);
    void fn_801E7FC0(void *);
    extern f64 lbl_8036B6E0;
    extern f32 lbl_8036B6E8;
    extern f32 lbl_8036B6EC;
    extern f32 lbl_8036B718;
    extern f32 lbl_8036B758;
    extern f32 lbl_8036B75C;
    extern f32 lbl_8036B760;
    extern f32 lbl_8036B764;
    extern f32 lbl_8036B768;
    extern f32 lbl_8036B76C;
    extern f32 lbl_8036B770;
    extern f64 lbl_8036B778;

    void *self;
    s8 row;
    s32 mode;
    s32 div;
    s16 y;
    s16 x;
    s32 flag;
    s32 m;
    f32 fade;
    f32 scale;
    s16 xpos;
    s16 drawX;
    s16 drawY;

    self = arg0;
    fn_8000A258();
    fn_80009D74(lbl_8036B6EC, lbl_8036B6EC, lbl_8036B758, lbl_8036B6E8);
    fn_80009B8C(0xFF);
    fn_8000A248();

    mode = (s8)*(u8 *)((u8 *)self + 0x31);
    switch (mode) {
    case 0:
        fn_801E7FC0(self);
        break;
    case 1:
        div = *(s16 *)((u8 *)self + 0x38) / 32;
        row = (s8)*(u8 *)((u8 *)self + 0x33) - div;
        y = (s16)((0x20 - fn_800102BC(-1, div, lbl_8036B6E8)) >> 1);
        x = *(s16 *)((u8 *)self + 0x3C);
        y = (s16)((s16)(y + 0x62) + (row << 5));
        if (x < 0 || *(s16 *)((u8 *)self + 0x3E) < 0) {
            *(s16 *)((u8 *)self + 0x3C) = 0xA0;
            *(s16 *)((u8 *)self + 0x3E) = y;
        } else {
            s32 targetY = y + 1;
            *(s16 *)((u8 *)self + 0x3C) = (s16)((x + 0xA1) >> 1);
            *(s16 *)((u8 *)self + 0x3E) = (s16)((targetY + *(s16 *)((u8 *)self + 0x3E)) >> 1);
        }
        drawX = *(s16 *)((u8 *)self + 0x3C);
        drawY = *(s16 *)((u8 *)self + 0x3E);
        flag = 0;
        if (*(u8 *)((u8 *)self + 0x2D) == 0 && *(u8 *)((u8 *)self + 0x2E) == 0) {
            flag = 1;
        }
        fn_8008BF68(drawX, drawY, flag);
        break;
    }

    m = *(u8 *)((u8 *)self + 0x31);
    if (m == 1) {
        if (*(u8 *)((u8 *)arg0 + 0x34) < 8) {
            *(u8 *)((u8 *)self + 0x34) = *(u8 *)((u8 *)self + 0x34) + 1;
        }
    } else if (*(u8 *)((u8 *)arg0 + 0x34) != 0) {
        *(u8 *)((u8 *)self + 0x34) = *(u8 *)((u8 *)self + 0x34) - 1;
    }

    fade = fn_800067BC(5, *(u8 *)((u8 *)self + 0x34), lbl_8036B6EC, lbl_8036B6E8, (f32)*(u8 *)((u8 *)self + 0x34), lbl_8036B718);
    div = *(s16 *)((u8 *)self + 0x38) / 32;
    row = (s8)*(u8 *)((u8 *)self + 0x33) - div;
    scale = (f32)*(u8 *)((u8 *)self + 0x34) * lbl_8036B75C;
    fn_8000A258();
    xpos = (s16)((row << 5) + 0x62);
    fn_80009C20(lbl_8036B760, (f32)xpos, lbl_8036B764, lbl_8036B768, lbl_8036B76C, scale, scale, lbl_8036B6EC);
    fn_80009B8C((s32)(lbl_8036B770 * fade));
    fn_8000A248();
    fn_8008AB7C(0xC4, 0x10, 0x188, 0x18, 0x19, 0x4B, 1);
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
}

void fn_801E80B4(void *arg0) {
    u8 fn_801E8B38(void *, void *, s8);
    s32 fn_80230BCC(s32);
    void fn_8000C188(void *);
    void fn_8000C070(void *, s32);
    void fn_80057860(void *, s16);
    u8 fn_80166D8C(void *);
    void fn_801E4900(s16 *, void *);
    void fn_80167190(void *, void *, f32, f32);
    void fn_801475FC(void *, s32);
    u8 fn_801E85A4(void *, s8);
    void *fn_8000E0E4(void *);
    void fn_80056AE0(void *, void *);
    extern u32 *lbl_80367240;
    extern u8 lbl_80330D68[];
    extern u8 lbl_8027EB78[];
    extern f64 lbl_8036B6E0;
    s16 sp14[2];
    s16 sp1C[2];
    s16 sp10[2];
    s16 sp18[2];
    s8 old33;
    u8 *p33;
    u32 held;
    u32 buttons;
    u32 cur;
    u32 *pad;
    u8 t;
    s32 max;
    s16 pos;
    s16 tgt;
    s32 pos32;
    s32 tgt32;
    void *str;
    void **node;
    s8 idx;
    s8 mode;
    u8 b;
    s32 zero;

    pad = lbl_80367240;
    t = *(u8 *)((u8 *)arg0 + 0x33);
    p33 = (u8 *)((u8 *)arg0 + 0x33);
    held = *(u32 *)((u8 *)pad + 0x10);
    old33 = (s8)t;
    cur = *(u32 *)((u8 *)pad + 4);
    buttons = cur & (*(u32 *)((u8 *)pad + 8) ^ cur);
    max = *(s32 *)((u8 *)arg0 + 0x50);

    if (held & 0x08000008U) {
        t = *p33;
        if ((s8)t == 0) {
            if (buttons == held) {
                *p33 = (u8)(max - 1);
            }
        } else {
            *p33 = (u8)(t - 1);
        }
    } else if (held & 0x04000004U) {
        t = *p33;
        max = max - 1;
        if ((u32)max == (u32)(s8)t) {
            if (buttons == held) {
                *p33 = 0;
            }
        } else {
            *p33 = (u8)(t + 1);
        }
    }

    t = *p33;
    if (old33 != (s8)t) {
        if (fn_801E8B38(arg0, p33, old33) != 0) {
            if (fn_80230BCC((s32)(old33 - (s8)*p33)) <= 2) {
                pos = *(s16 *)((u8 *)arg0 + 0x36);
                tgt = *(s16 *)((u8 *)arg0 + 0x38);
                if (pos == tgt) {
                    fn_8000C188(arg0);
                } else {
                    pos32 = pos;
                    tgt32 = tgt;
                    if (pos32 < tgt32) {
                        *(s16 *)((u8 *)arg0 + 0x36) = (s16)(*(s16 *)((u8 *)arg0 + 0x3A) + pos);
                    } else {
                        *(s16 *)((u8 *)arg0 + 0x36) = (s16)(pos - *(s16 *)((u8 *)arg0 + 0x3A));
                    }
                    fn_80057860(*(void **)((u8 *)arg0 + 0x5C), *(s16 *)((u8 *)arg0 + 0x36));
                    if (*(s16 *)((u8 *)arg0 + 0x36) == *(s16 *)((u8 *)arg0 + 0x38)) {
                        fn_8000C188(arg0);
                    }
                }
                fn_8000C070(arg0, 4);
            } else if ((s8)*p33 < old33) {
                *(s16 *)((u8 *)arg0 + 0x36) = 0;
                *(s16 *)((u8 *)arg0 + 0x38) = 0;
                fn_80057860(*(void **)((u8 *)arg0 + 0x5C), *(s16 *)((u8 *)arg0 + 0x36));
            } else {
                *(s16 *)((u8 *)arg0 + 0x36) = *(s16 *)((u8 *)arg0 + 0x38);
                fn_80057860(*(void **)((u8 *)arg0 + 0x5C), *(s16 *)((u8 *)arg0 + 0x36));
            }
        }
        if (fn_80166D8C(lbl_80330D68) != 0) {
            fn_801E4900(sp14, arg0);
            str = NULL;
            *(s32 *)sp1C = *(s32 *)sp14;
            switch ((s8)*(u8 *)((u8 *)arg0 + 0x31)) {
            case 0:
                str = lbl_8027EB78 + 0x15B;
                break;
            case 1:
                str = lbl_8027EB78 + 0x166;
                break;
            }
            fn_80167190(lbl_80330D68, str, (f32)sp1C[0], (f32)sp1C[1]);
        }
        fn_801475FC(lbl_8027EB78 + 0x199, 0x64);
        return;
    }

    if (buttons & 0x01000001U) {
        node = *(void ***)((u8 *)arg0 + 0x58);
        idx = (s8)t;
        if (idx >= 0) {
            while (idx > 0) {
                node = (void **)node[1];
                idx = (s8)(idx - 1);
            }
        } else {
            while (idx < 0) {
                node = (void **)*node;
                idx = (s8)(idx + 1);
            }
        }
        mode = (s8)*(u8 *)((u8 *)arg0 + 0x30);
        switch (mode) {
        case 0:
            b = ((u8 *)node[2])[2];
            break;
        case 1:
            b = ((u8 *)node[2])[1];
            break;
        case 2:
            b = ((u8 *)node[2])[4];
            break;
        }
        *(u8 *)((u8 *)arg0 + 0x32) = b;
        zero = 0;
        *(u8 *)((u8 *)arg0 + 0x31) = (u8)zero;
        switch (zero) {
        case 0:
            fn_80056AE0(*(void **)((u8 *)arg0 + 0x60), fn_8000E0E4(lbl_8027EB78 + 0x182));
            break;
        case 1:
            fn_80056AE0(*(void **)((u8 *)arg0 + 0x60), fn_8000E0E4(lbl_8027EB78 + 0x18D));
            break;
        }
        if (fn_801E85A4(arg0, (s8)*(u8 *)((u8 *)arg0 + 0x32)) != 0) {
            *(s16 *)((u8 *)arg0 + 0x3A) = 0x10;
            pos = *(s16 *)((u8 *)arg0 + 0x36);
            tgt = *(s16 *)((u8 *)arg0 + 0x38);
            if (pos == tgt) {
                fn_8000C188(arg0);
            } else {
                pos32 = pos;
                tgt32 = tgt;
                if (pos32 < tgt32) {
                    *(s16 *)((u8 *)arg0 + 0x36) = (s16)(*(s16 *)((u8 *)arg0 + 0x3A) + pos);
                } else {
                    *(s16 *)((u8 *)arg0 + 0x36) = (s16)(pos - *(s16 *)((u8 *)arg0 + 0x3A));
                }
                fn_80057860(*(void **)((u8 *)arg0 + 0x5C), *(s16 *)((u8 *)arg0 + 0x36));
                if (*(s16 *)((u8 *)arg0 + 0x36) == *(s16 *)((u8 *)arg0 + 0x38)) {
                    fn_8000C188(arg0);
                }
            }
            fn_8000C070(arg0, 4);
        }
        if (fn_80166D8C(lbl_80330D68) != 0) {
            fn_801E4900(sp10, arg0);
            str = NULL;
            *(s32 *)sp18 = *(s32 *)sp10;
            switch ((s8)*(u8 *)((u8 *)arg0 + 0x31)) {
            case 0:
                str = lbl_8027EB78 + 0x15B;
                break;
            case 1:
                str = lbl_8027EB78 + 0x166;
                break;
            }
            fn_80167190(lbl_80330D68, str, (f32)sp18[0], (f32)sp18[1]);
        }
        fn_801475FC(lbl_8027EB78 + 0x13F, 0x64);
    }
}

#pragma global_optimizer on
s32 fn_801E85A4(void *arg0, s32 arg1) {
    s8 fn_801E4A60(void);
    s32 fn_801E8734(void *, s32);
    s32 fn_801E87EC(void *, s32);
    s8 fn_801E8920(void *, s32);
    s32 result;
    s8 v0;
    s8 v1;
    s8 field50;
    s16 f36;
    s32 q;
    s32 rem;
    s32 band;
    u8 inrange;

    result = 0;
    v0 = fn_801E4A60();
    v1 = fn_801E8920(arg0, arg1);
    field50 = *(s32 *)((u8 *)arg0 + 0x50);
    if (v0 > 0) {
        v0 -= 1;
    }
    if (v1 < field50 - 1) {
        v1 += 1;
    }
    f36 = *(s16 *)((u8 *)arg0 + 0x36);
    q = f36 / 32;
    rem = f36 % 32;
    band = (s8)q + 8;
    if (rem != 0) {
        band = (s8)q + 9;
    }
    inrange = 0;
    if ((s8)q <= v0) {
        if (v0 <= (s8)band) {
            inrange = 1;
        }
    }
    if (inrange == 0) {
        if ((s8)q < v0) {
            result = fn_801E87EC(arg0, arg1);
        } else {
            result = fn_801E8734(arg0, arg1);
        }
    } else {
        band = (s8)q + 8;
        if (rem != 0) {
            band = (s8)q + 9;
        }
        inrange = 0;
        if ((s8)q <= v1) {
            if (v1 <= (s8)band) {
                inrange = 1;
            }
        }
        if (inrange == 0) {
            if ((s8)q < v1) {
                result = fn_801E87EC(arg0, arg1);
            } else {
                result = fn_801E8734(arg0, arg1);
            }
        }
    }
    return result;
}

s32 fn_801E8734(void *arg0) {
    s8 fn_801E4A60();
    s16 temp_r5;
    s32 temp_r7;
    s8 var_r3;
    s8 var_r8;
    u32 temp_r0;
    u32 temp_r3;
    u8 var_r3_2;

    var_r8 = fn_801E4A60();
    if (var_r8 > 0) {
        var_r8 -= 1;
    }
    temp_r5 = M2C_FIELD(arg0, s16 *, 0x36);
    temp_r3 = (u32) temp_r5 >> 0x1FU;
    temp_r0 = (temp_r5 << 0x1B) - temp_r3;
    temp_r7 = temp_r5 / 32;
    var_r3 = (s8) temp_r7 + 8;
    if ((((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r3) != 0) {
        var_r3 = (s8) temp_r7 + 9;
    }
    var_r3_2 = 0;
    if (((s8) temp_r7 <= var_r8) && (var_r8 <= var_r3)) {
        var_r3_2 = 1;
    }
    if (var_r3_2 == 0) {
        M2C_FIELD(arg0, s16 *, 0x38) = (s16) (temp_r5 - ((s8) ((s8) temp_r7 - var_r8) << 5));
        return 1;
    }
    return 0;
}

s32 fn_801E87EC(void *arg0, s32 arg1) {
    s8 fn_801E4A60();
    s8 fn_801E8920(void *, s32);
    s8 v0;
    s8 v1;
    s16 f36;
    s32 q;
    s32 rem;
    s32 band;
    s32 t;
    u8 inrange;

    v0 = fn_801E4A60();
    v1 = fn_801E8920(arg0, arg1);
    if (v0 > 0) {
        v0 -= 1;
    }
    if ((u32) v1 < (u32) (M2C_FIELD(arg0, s32 *, 0x50) - 1)) {
        v1 += 1;
    }
    f36 = M2C_FIELD(arg0, s16 *, 0x36);
    q = f36 / 32;
    t = v1 - v0 + 1;
    rem = f36 % 32;
    band = (s8) q + 8;
    if (rem != 0) {
        band = (s8) q + 9;
    }
    inrange = 0;
    if ((s8) q <= v1 && v1 <= (s8) band) {
        inrange = 1;
    }
    if (inrange == 0) {
        if ((s8) t <= 9) {
            M2C_FIELD(arg0, s16 *, 0x38) = (s16) (((s8) (v1 - ((s8) q + 8)) << 5) + f36);
        } else {
            M2C_FIELD(arg0, s16 *, 0x38) = (s16) (f36 - ((s8) ((s8) q - v0) << 5));
        }
        return 1;
    }
    return 0;
}

s8 fn_801E8920(void *arg0, u8 arg1) {
    typedef struct { void *node; } It;
    It sp74;
    It sp70;
    It sp6C;
    It sp68;
    It sp64;
    It sp60;
    It sp5C;
    It sp58;
    It sp54;
    It sp50;
    It sp4C;
    It sp48;
    It sp44;
    It sp40;
    It sp3C;
    It sp38;
    It sp34;
    It sp30;
    It sp2C;
    It sp28;
    It sp24;
    It sp20;
    u8 sp1C;
    u8 sp18;
    u8 sp14;
    u8 sp10;
    u8 spC;
    u8 sp8;
    void *head;
    void *tail;
    void *node;
    void *data;
    s32 count;
    u8 found;
    s8 key;

    key = *(s8 *)((u8 *)arg0 + 0x30);
    head = (u8 *)arg0 + 0x54;
    tail = *(void **)((u8 *)arg0 + 0x58);
    sp3C.node = head;
    sp38.node = head;
    sp34.node = head;
    sp30.node = head;
    sp70.node = head;
    sp2C.node = tail;
    sp28.node = tail;
    sp24.node = tail;
    sp20.node = tail;
    sp6C.node = tail;

    switch (key) {
    case 0:
        sp18 = arg1;
        sp1C = arg1;
        sp60.node = tail;
        sp64.node = head;
        while (sp64.node != tail) {
            found = 0;
            node = *(void **)sp64.node;
            data = *(void **)((u8 *)node + 8);
            if (*(s8 *)data >= 0 && (s8)arg1 == *(s8 *)((u8 *)data + 2)) {
                found = 1;
            }
            if (found == 0) {
                sp64.node = node;
                continue;
            }
            break;
        }
        sp68 = sp64;
        sp74 = sp64;
        break;
    case 1:
        sp10 = arg1;
        sp14 = arg1;
        sp54.node = tail;
        sp58.node = head;
        while (sp58.node != tail) {
            found = 0;
            node = *(void **)sp58.node;
            data = *(void **)((u8 *)node + 8);
            if (*(s8 *)data >= 0 && (s8)arg1 == *(s8 *)((u8 *)data + 1)) {
                found = 1;
            }
            if (found == 0) {
                sp58.node = node;
                continue;
            }
            break;
        }
        sp5C = sp58;
        sp74 = sp58;
        break;
    case 2:
        sp8 = arg1;
        spC = arg1;
        sp48.node = tail;
        sp4C.node = head;
        while (sp4C.node != tail) {
            found = 0;
            node = *(void **)sp4C.node;
            data = *(void **)((u8 *)node + 8);
            if (*(s8 *)data >= 0 && (s8)arg1 == *(s8 *)((u8 *)data + 4)) {
                found = 1;
            }
            if (found == 0) {
                sp4C.node = node;
                continue;
            }
            break;
        }
        sp50 = sp4C;
        sp74 = sp4C;
        break;
    }

    node = *(void **)sp74.node;
    data = *(void **)((u8 *)node + 8);
    if (*(s8 *)data >= 0) {
        count = 0;
        sp40 = sp74;
        sp44 = sp6C;
        while (sp40.node != sp6C.node) {
            count += 1;
            sp40.node = *(void **)sp40.node;
        }
        return (s8)(count - 1);
    }
          return *(s8 *)data;
}

s32 fn_801E8B38(void *arg0, u8 *arg1, s8 arg2) {
    return 0;
}

void fn_801E8D34(void *arg0) {
    s32 fn_801E9410(void);
    u8 fn_801E85A4(void *, s32);
    s32 fn_80230BCC(s32);
    void fn_8000C188(void *);
    void fn_8000C070(void *, s32);
    void fn_80057860(void *, s16);
    s8 fn_801E4A60(void *, u8);
    u8 fn_80166D8C(void *);
    void fn_801E4900(s16 *, void *);
    void fn_80167190(void *, void *, f32, f32);
    void fn_801475FC(void *, s32);
    s8 fn_801E8920(void *, u8);
    void *fn_8000E0E4(void *);
    void fn_80056AE0(void *, void *);
    u8 fn_801E91E8(void *, void *);
    extern u32 *lbl_80367240;
    extern u8 lbl_80330D68[];
    extern u8 lbl_8027EB78[];
    extern f64 lbl_8036B6E0;
    s32 max;
    s8 old32;
    u32 held;
    u32 buttons;
    u32 cur;
    u32 *pad;
    u8 t;
    s16 pos;
    s16 tgt;
    s32 pos32;
    s32 tgt32;
    s8 lo;
    s8 hi;
    void *str;
    s16 spC[2];
    s16 sp14[2];
    s16 sp8[2];
    s16 sp10[2];

    max = fn_801E9410();
    pad = lbl_80367240;
    t = *(u8 *)((u8 *)arg0 + 0x32);
    held = pad[3];
    cur = pad[1];
    old32 = (s8)t;
    buttons = cur & (pad[2] ^ cur);

    if (held & 0x08000008U) {
        t = *(u8 *)((u8 *)arg0 + 0x32);
        if ((s8)t == 0) {
            if (buttons == held) {
                *(u8 *)((u8 *)arg0 + 0x32) = (u8)(max - 1);
            }
        } else {
            *(u8 *)((u8 *)arg0 + 0x32) = t - 1;
        }
    } else if (held & 0x04000004U) {
        t = *(u8 *)((u8 *)arg0 + 0x32);
        max = max - 1;
        if ((u32)max == (u32)(s8)t) {
            if (buttons == held) {
                *(u8 *)((u8 *)arg0 + 0x32) = 0;
            }
        } else {
            *(u8 *)((u8 *)arg0 + 0x32) = t + 1;
        }
    }

    if (old32 != (s8)*(u8 *)((u8 *)arg0 + 0x32)) {
        if (fn_801E85A4(arg0, *(u8 *)((u8 *)arg0 + 0x32))) {
            if (fn_80230BCC(old32 - (s8)*(u8 *)((u8 *)arg0 + 0x32)) == 1) {
                *(s16 *)((u8 *)arg0 + 0x3A) = 0x10;
                pos = *(s16 *)((u8 *)arg0 + 0x36);
                tgt = *(s16 *)((u8 *)arg0 + 0x38);
                if (pos == tgt) {
                    fn_8000C188(arg0);
                } else {
                    pos32 = pos;
                    tgt32 = tgt;
                    if (pos32 < tgt32) {
                        *(s16 *)((u8 *)arg0 + 0x36) = (s16)(*(s16 *)((u8 *)arg0 + 0x3A) + pos);
                    } else {
                        *(s16 *)((u8 *)arg0 + 0x36) = (s16)(pos - *(s16 *)((u8 *)arg0 + 0x3A));
                    }
                    fn_80057860(*(void **)((u8 *)arg0 + 0x5C), *(s16 *)((u8 *)arg0 + 0x36));
                    if (*(s16 *)((u8 *)arg0 + 0x36) == *(s16 *)((u8 *)arg0 + 0x38)) {
                        fn_8000C188(arg0);
                    }
                }
                fn_8000C070(arg0, 4);
            } else if ((s8)*(u8 *)((u8 *)arg0 + 0x32) < old32) {
                *(u8 *)((u8 *)arg0 + 0x33) = 0;
                *(s16 *)((u8 *)arg0 + 0x36) = 0;
                *(s16 *)((u8 *)arg0 + 0x38) = 0;
                fn_80057860(*(void **)((u8 *)arg0 + 0x5C), *(s16 *)((u8 *)arg0 + 0x36));
            } else {
                *(u8 *)((u8 *)arg0 + 0x33) = (u8)fn_801E4A60(arg0, *(u8 *)((u8 *)arg0 + 0x32));
                *(s16 *)((u8 *)arg0 + 0x36) = *(s16 *)((u8 *)arg0 + 0x38);
                fn_80057860(*(void **)((u8 *)arg0 + 0x5C), *(s16 *)((u8 *)arg0 + 0x36));
            }
        }
        if (fn_80166D8C(lbl_80330D68)) {
            fn_801E4900(spC, arg0);
            str = NULL;
            *(s32 *)sp14 = *(s32 *)spC;
            switch ((s8)*(u8 *)((u8 *)arg0 + 0x31)) {
            case 0:
                str = lbl_8027EB78 + 0x15B;
                break;
            case 1:
                str = lbl_8027EB78 + 0x166;
                break;
            }
            fn_80167190(lbl_80330D68, str, (f32)sp14[0], (f32)sp14[1]);
        }
        fn_801475FC(lbl_8027EB78 + 0x1AB, 0x64);
        return;
    }

    if (buttons & 0x02000002U) {
        lo = fn_801E4A60(arg0, *(u8 *)((u8 *)arg0 + 0x32));
        hi = fn_801E8920(arg0, *(u8 *)((u8 *)arg0 + 0x32));
        *(u8 *)((u8 *)arg0 + 0x31) = 1;
        switch ((s8)*(u8 *)((u8 *)arg0 + 0x31)) {
        case 0:
            fn_80056AE0(*(void **)((u8 *)arg0 + 0x60), fn_8000E0E4(lbl_8027EB78 + 0x182));
            break;
        case 1:
            fn_80056AE0(*(void **)((u8 *)arg0 + 0x60), fn_8000E0E4(lbl_8027EB78 + 0x18D));
            break;
        }
        if ((s8)*(u8 *)((u8 *)arg0 + 0x33) > hi) {
            *(u8 *)((u8 *)arg0 + 0x33) = (u8)hi;
        }
        if ((s8)*(u8 *)((u8 *)arg0 + 0x33) < lo) {
            *(u8 *)((u8 *)arg0 + 0x33) = (u8)lo;
        }
        if (fn_801E91E8(arg0, (u8 *)arg0 + 0x33)) {
            *(s16 *)((u8 *)arg0 + 0x3A) = 0x10;
            pos = *(s16 *)((u8 *)arg0 + 0x36);
            tgt = *(s16 *)((u8 *)arg0 + 0x38);
            if (pos == tgt) {
                fn_8000C188(arg0);
            } else {
                pos32 = pos;
                tgt32 = tgt;
                if (pos32 < tgt32) {
                    *(s16 *)((u8 *)arg0 + 0x36) = (s16)(*(s16 *)((u8 *)arg0 + 0x3A) + pos);
                } else {
                    *(s16 *)((u8 *)arg0 + 0x36) = (s16)(pos - *(s16 *)((u8 *)arg0 + 0x3A));
                }
                fn_80057860(*(void **)((u8 *)arg0 + 0x5C), *(s16 *)((u8 *)arg0 + 0x36));
                if (*(s16 *)((u8 *)arg0 + 0x36) == *(s16 *)((u8 *)arg0 + 0x38)) {
                    fn_8000C188(arg0);
                }
            }
            fn_8000C070(arg0, 4);
        }
        if (fn_80166D8C(lbl_80330D68)) {
            fn_801E4900(sp8, arg0);
            str = NULL;
            *(s32 *)sp10 = *(s32 *)sp8;
            switch ((s8)*(u8 *)((u8 *)arg0 + 0x31)) {
            case 0:
                str = lbl_8027EB78 + 0x15B;
                break;
            case 1:
                str = lbl_8027EB78 + 0x166;
                break;
            }
            fn_80167190(lbl_80330D68, str, (f32)sp10[0], (f32)sp10[1]);
        }
        fn_801475FC(lbl_8027EB78 + 0x13F, 0x64);
    }
}

s32 fn_801E91E8(void *arg0, u8 *arg1) {
    s16 temp_r6;
    s32 var_r8;
    u32 temp_r5;
    u32 temp_r0;
    s32 temp_r6_2;
    s8 var_r0;
    u8 var_r7;
    void *var_r5;
    s32 var_r0_2;
    u8 temp_r8;
    s16 temp_r7;
    u8 temp_r9;
    s32 temp_r6_3;
    s8 var_r6;

    temp_r6 = *(s16 *)((u8 *)arg0 + 0x36);
    var_r8 = 0;
    temp_r5 = (u32)temp_r6 >> 0x1F;
    temp_r0 = (temp_r6 << 0x1B) - temp_r5;
    temp_r6_2 = temp_r6 / 32;
    var_r0 = (s8)temp_r6_2 + 8;
    if ((((temp_r0 << 5) | (temp_r0 >> 0x1B)) + temp_r5) != 0) {
        var_r0 = (s8)temp_r6_2 + 9;
    }
    var_r7 = *arg1;
    if ((s8)var_r7 <= (s8)temp_r6_2) {
        var_r5 = *(void **)((u8 *)arg0 + 0x58);
        var_r0_2 = 0;
        if ((s8)var_r7 >= 0) {
            while ((s8)var_r7 > 0) {
                var_r5 = *(void **)((u8 *)var_r5 + 4);
                var_r7 -= 1;
            }
        } else {
            while ((s8)var_r7 < 0) {
                var_r5 = *(void **)var_r5;
                var_r7 += 1;
            }
        }
        do {
            temp_r8 = *arg1;
            if ((((s8)temp_r8 >= 0) && ((s8)(temp_r8 - (*(s16 *)((u8 *)arg0 + 0x38) / 32)) < 0))
                || (((s8)temp_r8 > 0) && ((s8)(temp_r8 - (*(s16 *)((u8 *)arg0 + 0x38) / 32)) == 0))) {
                temp_r7 = *(s16 *)((u8 *)arg0 + 0x36);
                var_r0_2 = 1;
                *(s16 *)((u8 *)arg0 + 0x38) = (s16)(temp_r7 - ((s8)(((s8)(temp_r7 / 32) - temp_r8) + 1) << 5));
            }
            if ((s8)*(u8 *)(*(void **)((u8 *)var_r5 + 8)) >= 0) {
                break;
            }
            var_r5 = *(void **)var_r5;
            *arg1 -= 1;
        } while (1);
        var_r8 = var_r0_2;
    } else if (var_r0 <= (s8)var_r7) {
        var_r5 = *(void **)((u8 *)arg0 + 0x58);
        var_r8 = 0;
        if ((s8)var_r7 >= 0) {
            while ((s8)var_r7 > 0) {
                var_r5 = *(void **)((u8 *)var_r5 + 4);
                var_r7 -= 1;
            }
        } else {
            while ((s8)var_r7 < 0) {
                var_r5 = *(void **)var_r5;
                var_r7 += 1;
            }
        }
        do {
            temp_r9 = *arg1;
            temp_r6_3 = *(s32 *)((u8 *)arg0 + 0x50) - 1;
            if ((((u32)(s8)temp_r9 <= (u32)temp_r6_3) && ((s8)((s8)temp_r9 - (*(s16 *)((u8 *)arg0 + 0x38) / 32)) > 8))
                || (((u32)(s8)temp_r9 < (u32)temp_r6_3) && ((s8)((s8)temp_r9 - (*(s16 *)((u8 *)arg0 + 0x38) / 32)) == 8))) {
                temp_r7 = *(s16 *)((u8 *)arg0 + 0x36);
                var_r6 = (s8)((s8)temp_r9 - ((s8)(temp_r7 / 32) + 8));
                if ((u32)(s8)temp_r9 < (u32)temp_r6_3) {
                    var_r6 += 1;
                }
                var_r8 = 1;
                *(s16 *)((u8 *)arg0 + 0x38) = (s16)((var_r6 << 5) + temp_r7);
            }
            if ((s8)*(u8 *)(*(void **)((u8 *)var_r5 + 8)) >= 0) {
                break;
            }
            var_r5 = *(void **)((u8 *)var_r5 + 4);
            *arg1 += 1;
        } while (1);
    }
    return var_r8;
}

void fn_801E960C(void *arg0) {
    void fn_80105D4C(void *, u8);
    void fn_80013A90(void *);
    void fn_80013A6C(void *);
    void fn_800138F4(void);
    void fn_800C08AC(void *, void *);
    extern u8 lbl_80330708[];
    extern u8 lbl_8027EB78[];
    void **node;
    s8 idx;
    u8 t;

    t = *(u8 *)((u8 *)arg0 + 0x33);
    node = *(void ***)((u8 *)arg0 + 0x58);
    idx = (s8)t;
    if (idx >= 0) {
        while (idx > 0) {
            node = (void **)node[1];
            idx -= 1;
        }
    } else {
        while (idx < 0) {
            node = (void **)*node;
            idx += 1;
        }
    }
    fn_80105D4C(lbl_80330708 + 0x84, *(u8 *)node[2]);
    fn_80013A90(lbl_8027EB78 + 0x1C7);
    fn_80013A6C(*(void **)((u8 *)node[2] + 0x10));
    fn_80013A6C(*(void **)((u8 *)node[2] + 0x14));
    fn_800138F4();
    fn_800C08AC(lbl_8027EB78 + 0x1D6, arg0);
}

void fn_801E96D0(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 r31;
    
    if (arg0 == NULL) {
        return;
    }

    temp_r3 = *(s32*)((char*)arg0 + 0x58);
    r31 = *(s32*)((char*)arg0 + 0x4);
    
    if (r31 < temp_r3) {
        *(s32*)((char*)arg0 + 0x4) = temp_r3;
    }
}

#pragma optimization_level 2
void fn_801E97D4(void *arg0) {
    void fn_8000C188(void *);
    void fn_80057860(s32, s16);
    s32 a;
    s32 b;
    s16 t;

    a = *(s16 *)((u8 *)arg0 + 0x36);
    b = *(s16 *)((u8 *)arg0 + 0x38);
    if (a == b) {
        fn_8000C188(arg0);
        return;
    }
    if ((s16)a < (s16)b) {
        *(s16 *)((u8 *)arg0 + 0x36) = (s16)(*(s16 *)((u8 *)arg0 + 0x3A) + a);
    } else {
        *(s16 *)((u8 *)arg0 + 0x36) = (s16)(a - *(s16 *)((u8 *)arg0 + 0x3A));
    }
    t = *(s16 *)((u8 *)arg0 + 0x36);
    fn_80057860(*(s32 *)((u8 *)arg0 + 0x5C), t);
    if (*(s16 *)((u8 *)arg0 + 0x36) == *(s16 *)((u8 *)arg0 + 0x38)) {
        fn_8000C188(arg0);
    }
}
#pragma optimization_level reset
void fn_801E9958(void) {
    M2C_UNK fn_801E9978();
    fn_801E9978();
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_801E9978(void *arg0) {
    void *fn_8000D2BC(void *);
    void *fn_8000E0E4(void *);
    void *fn_80056A60(void *);
    void fn_80056AE0(void *, void *);
    void fn_800576D4(void *, s32);
    void fn_80057860(void *, s16);
    void fn_80057880(void *, s32);
    void fn_800578A0(void *, f32);
    void fn_800578A8(void *, s32, s32, s32);
    void *fn_80057998(void *);
    void fn_80059208(void (*)(void), void *);
    void *fn_800C42D8(s32);
    void fn_8013FCE0(void *, void *, void **, void **);
    void fn_801E4CF8(void *);
    void fn_801E50E4(void);
    void fn_801E7D18(void);
    extern u8 lbl_8027EB78[];
    extern void *lbl_802981AC[];
    extern u8 lbl_8036835C;
    extern u8 lbl_8036835D;
    extern u8 lbl_8036835E;
    extern u8 lbl_8036835F;
    extern u8 lbl_80368360;
    extern s16 lbl_80368362;
    extern s16 lbl_80368364;
    extern s16 lbl_80368368;
    extern f32 lbl_8036B714;

    void *sp10;
    void *spC;
    void *sp8;
    void *var_r30;
    void *r29;
    u32 temp_r28;
    u32 var_r27;
    u32 *temp_r3;
    void *temp_r3_2;
    void *var_r0;
    s16 t;
    s16 *p68;

    *(void **)((u8 *)arg0 + 0x44) = fn_8000D2BC(lbl_8027EB78 + 0x201);
    *(void **)((u8 *)arg0 + 0x48) = fn_8000D2BC(lbl_8027EB78 + 0x20D);
    *(void **)((u8 *)arg0 + 0x4C) = fn_8000D2BC(lbl_8027EB78 + 0x21A);
    temp_r3 = fn_8000D2BC(lbl_8027EB78 + 0x226);
    temp_r28 = temp_r3[0];
    var_r30 = temp_r3 + 1;
    r29 = (u8 *)arg0 + 0x54;
    for (var_r27 = 0; var_r27 < temp_r28; var_r27 += 1) {
        sp10 = var_r30;
        spC = r29;
        fn_8013FCE0(&sp8, (u8 *)arg0 + 0x50, &spC, &sp10);
        var_r30 = (u8 *)var_r30 + 0x18;
    }
    *(u8 *)((u8 *)arg0 + 0x30) = lbl_8036835C;
    *(u8 *)((u8 *)arg0 + 0x31) = lbl_8036835D;
    *(u8 *)((u8 *)arg0 + 0x32) = lbl_8036835E;
    *(u8 *)((u8 *)arg0 + 0x33) = lbl_8036835F;
    *(u8 *)((u8 *)arg0 + 0x34) = lbl_80368360;
    *(s16 *)((u8 *)arg0 + 0x36) = lbl_80368362;
    *(s16 *)((u8 *)arg0 + 0x38) = lbl_80368364;
    p68 = &lbl_80368368;
    *(s16 *)((u8 *)arg0 + 0x3C) = p68[0];
    *(s16 *)((u8 *)arg0 + 0x3E) = p68[1];
    temp_r3_2 = fn_800C42D8(0x30);
    if (temp_r3_2 == 0) {
        goto skip_obj;
    }
    fn_80057998(temp_r3_2);
    *(void **)((u8 *)temp_r3_2 + 0x2C) = lbl_802981AC;
skip_obj:
    *(void **)((u8 *)arg0 + 0x5C) = temp_r3_2;
    fn_800578A8(*(void **)((u8 *)arg0 + 0x5C), 0x22A, 0x6A, 0x110);
    fn_800576D4(*(void **)((u8 *)arg0 + 0x5C), 1);
    var_r0 = fn_800C42D8(0x18);
    if (var_r0 == 0) {
        goto skip_sub;
    }
    var_r0 = fn_80056A60(var_r0);
skip_sub:
    *(void **)((u8 *)arg0 + 0x60) = var_r0;
    switch ((s8)*(u8 *)((u8 *)arg0 + 0x31)) {
    case 0:
        fn_80056AE0(*(void **)((u8 *)arg0 + 0x60), fn_8000E0E4(lbl_8027EB78 + 0x182));
        break;
    case 1:
        fn_80056AE0(*(void **)((u8 *)arg0 + 0x60), fn_8000E0E4(lbl_8027EB78 + 0x18D));
        break;
    }
    fn_801E4CF8(arg0);
    fn_80057880(*(void **)((u8 *)arg0 + 0x5C), 0x120);
    t = *(s16 *)((u8 *)arg0 + 0x36);
    fn_80057860(*(void **)((u8 *)arg0 + 0x5C), t);
    fn_800578A0(*(void **)((u8 *)arg0 + 0x5C), lbl_8036B714);
    fn_80059208(fn_801E50E4, arg0);
    fn_80059208(fn_801E7D18, arg0);
}

void fn_801E9B80(void *arg0) {
    u8 fn_8005BA10(void *);
    s32 fn_8003FCCC(void *);
    s32 fn_8006D948(void *);
    void fn_8000C188(void *);
    extern u32 lbl_80299FA8[];
    extern u32 lbl_80299FC4[];
    extern u8 lbl_8027EB78[];
    u32 *a;
    u32 *b;

    a = lbl_80299FA8;
    if (fn_8005BA10((void *)a[1]) == 0) {
        return;
    }
    b = lbl_80299FC4;
    if (fn_8005BA10((void *)b[1]) == 0) {
        return;
    }
    if (fn_8005BA10(&lbl_8027EB78[0x22f]) != 0) {
        *(s32 *)((u8 *)arg0 + 0x40) = fn_8003FCCC((void *)a[1]);
        *(s32 *)((u8 *)arg0 + 0x64) = fn_8006D948((void *)b[1]);
        fn_8000C188(arg0);
    } else {
        goto end;
    }
end:
    ;
}

#pragma global_optimizer reset
#pragma use_lmw_stmw reset

void fn_801E9C24(void) {
    extern u32 lbl_80299FA8[];
    extern u32 lbl_80299FC4[];
    extern u8 lbl_8027EB78[];

    fn_8005C8B4((void *)lbl_80299FA8[1]);
    fn_8005C8B4((void *)lbl_80299FC4[1]);
    fn_8005C8B4(&lbl_8027EB78[0x22f]);
}

void *fn_801E9C70(void *arg0)
{
    void *fn_8000CAA0(void *, void *);
    void fn_80142060(void *);

    extern u8 lbl_80299FE0[];

    u8 *ptr;

    ptr = (u8 *)fn_8000CAA0(lbl_80299FE0, arg0);

    if (ptr != 0) {
        *(u8 *)(ptr + 0x30) = 0;
        *(u8 *)(ptr + 0x31) = 0;
        *(u8 *)(ptr + 0x32) = 0;
        *(u8 *)(ptr + 0x33) = 0;
        *(u8 *)(ptr + 0x34) = 0;

        *(u16 *)(ptr + 0x36) = 0;
        *(u16 *)(ptr + 0x38) = 0;
        *(u16 *)(ptr + 0x3A) = 8;
        *(s16 *)(ptr + 0x3C) = -1;
        *(s16 *)(ptr + 0x3E) = -1;

        *(u32 *)(ptr + 0x40) = 0;
        *(u32 *)(ptr + 0x44) = 0;
        *(u32 *)(ptr + 0x48) = 0;
        *(u32 *)(ptr + 0x4C) = 0;

        fn_80142060(ptr + 0x50);

        *(u32 *)(ptr + 0x5C) = 0;
        *(u32 *)(ptr + 0x60) = 0;
        *(u32 *)(ptr + 0x64) = 0;
    }

    return ptr;
}

void fn_801E9D0C(void) {
    extern u16 lbl_8027EB78[40];
    fn_80013A90(&lbl_8027EB78[0x244 / 2]);
    fn_800138F4();
}

void fn_801E9D3C(s32 arg0) {
    void fn_8014C718(void *, s32);
    extern u8 lbl_80330708[16];
    fn_8014C718(lbl_80330708, arg0);
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_801E9D68(void) {
    extern u8 lbl_8027EB78[];
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA518[];
    void fn_80013A90(void *);
    void fn_800138F4(void);
    void fn_8002297C(void *);

    u8 *base;
    u32 v84;
    u32 v90;
    u32 v8c;
    u32 v88;

    base = lbl_80330708;
    v84 = *(u32 *)(base + 0x84);
    v88 = *(u32 *)(base + 0x88);
    v8c = *(u32 *)(base + 0x8C);
    v90 = *(u32 *)(base + 0x90);

    fn_80013A90(lbl_8027EB78 + 0x24C);
    fn_800138F4();
    fn_80013A90(lbl_8027EB78 + 0x253);
    fn_800138F4();
    fn_80013A90(lbl_8027EB78 + 0x25D);
    fn_800138F4();
    fn_80013A90(lbl_8027EB78 + 0x26C);
    fn_800138F4();
    fn_8002297C(lbl_802CA518);

    *(u32 *)(base + 0x84) = *(u32 *)(base + 0x84) | v84;
    *(u32 *)(base + 0x88) = *(u32 *)(base + 0x88) | v88;
    *(u32 *)(base + 0x8C) = *(u32 *)(base + 0x8C) | v8c;
    *(u32 *)(base + 0x90) = *(u32 *)(base + 0x90) | v90;
}
#pragma global_optimizer on
#pragma use_lmw_stmw reset

void fn_801E9E30(s32 arg0, s32 arg1)
{
    // Simple implementation since the full logic is not clear from disassembly
    // and this is a very minimal function that might be part of a larger issue
    return;
}

void fn_801EA018(s32 *arg0, u8 *arg1) {
    void fn_800C428C(void *);
    void fn_801EA618(s32 *, s32 *, u8 *);
    void *sp1C;
    void *sp18;
    s32 sp14;
    u8 sp10;
    u8 spC;
    u8 sp8;
    void *temp_r3;
    void *var_r29;
    void *var_r7;
    void *temp_r6;
    void *temp_r8;
    void *temp_r9;
    void *temp_r5;
    void *node8;
    void *tmp;
    s32 temp_r0;
    u32 half;
    u32 var_r3;
    u32 n;
    u8 var_r0;

    temp_r0 = arg0[0];
    if (temp_r0 == 2) {
        temp_r6 = (void *)arg0[2];
        temp_r8 = *(void **)((u8 *)temp_r6 + 4);
        temp_r5 = *(void **)((u8 *)temp_r6 + 8);
        node8 = *(void **)((u8 *)temp_r8 + 8);
        if ((s8)*(u8 *)((u8 *)node8 + 1) == (s8)*(u8 *)((u8 *)temp_r5 + 1)) {
            var_r0 = (s8)*(u8 *)((u8 *)node8 + 3) < (s8)*(u8 *)((u8 *)temp_r5 + 3);
        } else {
            var_r0 = (s8)*(u8 *)((u8 *)node8 + 1) < (s8)*(u8 *)((u8 *)temp_r5 + 1);
        }
        if (var_r0 != 0) {
            tmp = *(void **)temp_r6;
            *(void **)temp_r6 = *(void **)((u8 *)temp_r6 + 4);
            *(void **)((u8 *)temp_r6 + 4) = tmp;
            tmp = *(void **)temp_r8;
            *(void **)temp_r8 = *(void **)((u8 *)temp_r8 + 4);
            *(void **)((u8 *)temp_r8 + 4) = tmp;
            tmp = (void *)arg0[1];
            arg0[1] = arg0[2];
            arg0[2] = (s32)tmp;
        }
    } else if (temp_r0 < 0 || temp_r0 >= 3) {
        half = (u32)temp_r0 >> 1;
        var_r7 = (void *)arg0[2];
        var_r3 = half;
        if (half != 0) {
            n = half >> 3;
            if (n != 0) {
                do {
                    var_r7 = *(void **)((u8 *)var_r7 + 4);
                    var_r7 = *(void **)((u8 *)var_r7 + 4);
                    var_r7 = *(void **)((u8 *)var_r7 + 4);
                    var_r7 = *(void **)((u8 *)var_r7 + 4);
                    var_r7 = *(void **)((u8 *)var_r7 + 4);
                    var_r7 = *(void **)((u8 *)var_r7 + 4);
                    var_r7 = *(void **)((u8 *)var_r7 + 4);
                    var_r7 = *(void **)((u8 *)var_r7 + 4);
                    n -= 1;
                } while (n != 0);
                var_r3 &= 7;
            }
            if (var_r3 != 0) {
                do {
                    var_r7 = *(void **)((u8 *)var_r7 + 4);
                    var_r3 -= 1;
                } while (var_r3 != 0);
            }
        }
        sp14 = 0;
        sp1C = &sp18;
        sp18 = &sp18;
        temp_r9 = (void *)arg0[1];
        tmp = *(void **)var_r7;
        *(void **)((u8 *)tmp + 4) = *(void **)((u8 *)temp_r9 + 4);
        tmp = *(void **)var_r7;
        **(void ***)((u8 *)temp_r9 + 4) = tmp;
        *(void **)((u8 *)sp18 + 4) = var_r7;
        *(void **)var_r7 = sp18;
        sp18 = temp_r9;
        *(void **)((u8 *)temp_r9 + 4) = &sp18;
        sp14 = arg0[0] - (s32)half;
        arg0[0] = (s32)half;
        sp10 = *arg1;
        fn_801EA018(arg0, &sp10);
        spC = *arg1;
        fn_801EA018(&sp14, &spC);
        sp8 = *arg1;
        fn_801EA618(arg0, &sp14, &sp8);
        var_r29 = sp1C;
        if (var_r29 != &sp18) {
            tmp = *(void **)var_r29;
            *(void **)((u8 *)tmp + 4) = *(void **)((u8 *)sp18 + 4);
            tmp = *(void **)var_r29;
            **(void ***)((u8 *)sp18 + 4) = tmp;
            while (var_r29 != &sp18) {
                temp_r3 = var_r29;
                var_r29 = *(void **)((u8 *)var_r29 + 4);
                fn_800C428C(temp_r3);
                sp14 -= 1;
            }
        }
    }
}

void fn_801EA430(void) {
    // This is an empty placeholder function for the purpose of this example.
    // The actual implementation would need to be filled in with the correct logic,
    // based on the assembly code shown by claim_function and objdiff output.
}
/* Functions from 0x801E4540 to 0x801EA8C0, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

extern f32 lbl_8036B6E8;
#include "global.h"
#include "ef.h"

extern u16* lbl_80332020;
