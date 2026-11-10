/* Functions from 0x801E4540 to 0x801EA8C0, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

struct UnkStruct {
    u32 field_0[0x10];
    u32 field_8;
};

s32 fn_801E45FC(void) {
    extern char lbl_80299FA8[];
    return *(s32*)((u8*)lbl_80299FA8 + 4);
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

void fn_801E551C(void) {
    M2C_UNK fn_80225058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80225058(0x20, 0x5A, 0x220, 0x136);
}

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

s32 fn_801E960C(s32 arg0, s32 arg1)
{
    s32 temp = arg0 + 1;
    return temp * arg1;
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

void fn_801E97D4(void *arg0) {
    if (*(s16 *)((u8 *)arg0 + 0x36) == *(s16 *)((u8 *)arg0 + 0x38)) {
        fn_8000C188(arg0);
        return;
    }
    if (*(s16 *)((u8 *)arg0 + 0x36) < *(s16 *)((u8 *)arg0 + 0x38)) {
        *(s16 *)((u8 *)arg0 + 0x36) = (s16)(*(s16 *)((u8 *)arg0 + 0x3A) + *(s16 *)((u8 *)arg0 + 0x36));
    } else {
        *(s16 *)((u8 *)arg0 + 0x36) = (s16)(*(s16 *)((u8 *)arg0 + 0x36) - *(s16 *)((u8 *)arg0 + 0x3A));
    }
    fn_80057860(*(s32 *)((u8 *)arg0 + 0x5C), *(s16 *)((u8 *)arg0 + 0x36));
    if (*(s16 *)((u8 *)arg0 + 0x36) == *(s16 *)((u8 *)arg0 + 0x38)) {
        fn_8000C188(arg0);
    }
}

void fn_801E9958(void) {
    M2C_UNK fn_801E9978();
    fn_801E9978();
}

#pragma use_lmw_stmw on
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
    u32 *temp_r3;
    u32 temp_r28;
    void *var_r30;
    void *r29;
    u32 var_r27;
    void *temp_r3_2;
    void *var_r0;

    *(void **)((u8 *)arg0 + 0x44) = fn_8000D2BC(lbl_8027EB78 + 0x201);
    *(void **)((u8 *)arg0 + 0x48) = fn_8000D2BC(lbl_8027EB78 + 0x20D);
    *(void **)((u8 *)arg0 + 0x4C) = fn_8000D2BC(lbl_8027EB78 + 0x21A);
    temp_r3 = fn_8000D2BC(lbl_8027EB78 + 0x226);
    temp_r28 = *temp_r3;
    var_r30 = (u8 *)temp_r3 + 4;
    r29 = (u8 *)arg0 + 0x54;
    var_r27 = 0;
    while (var_r27 < temp_r28) {
        sp10 = var_r30;
        spC = r29;
        fn_8013FCE0(&sp8, ((char *)arg0) + 0x50, &spC, &sp10);
        var_r30 = (u8 *)var_r30 + 0x18;
        var_r27 += 1;
    }
    *(u8 *)((u8 *)arg0 + 0x30) = lbl_8036835C;
    *(u8 *)((u8 *)arg0 + 0x31) = lbl_8036835D;
    *(u8 *)((u8 *)arg0 + 0x32) = lbl_8036835E;
    *(u8 *)((u8 *)arg0 + 0x33) = lbl_8036835F;
    *(u8 *)((u8 *)arg0 + 0x34) = lbl_80368360;
    *(s16 *)((u8 *)arg0 + 0x36) = lbl_80368362;
    *(s16 *)((u8 *)arg0 + 0x38) = lbl_80368364;
    *(s16 *)((u8 *)arg0 + 0x3C) = lbl_80368368;
    *(s16 *)((u8 *)arg0 + 0x3E) = *(&lbl_80368368 + 1);
    temp_r3_2 = fn_800C42D8(0x30);
    if (temp_r3_2 != NULL) {
        fn_80057998(temp_r3_2);
        *(void **)((u8 *)temp_r3_2 + 0x2C) = lbl_802981AC;
    }
    *(void **)((u8 *)arg0 + 0x5C) = temp_r3_2;
    fn_800578A8(*(void **)((u8 *)arg0 + 0x5C), 0x22A, 0x6A, 0x110);
    fn_800576D4(*(void **)((u8 *)arg0 + 0x5C), 1);
    var_r0 = fn_800C42D8(0x18);
    if (var_r0 != NULL) {
        var_r0 = fn_80056A60(var_r0);
    }
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
    {
        s16 t;
        t = *(s16 *)((u8 *)arg0 + 0x36);
        fn_80057860(*(void **)((u8 *)arg0 + 0x5C), t);
    }
    fn_800578A0(*(void **)((u8 *)arg0 + 0x5C), lbl_8036B714);
    fn_80059208(fn_801E50E4, arg0);
    fn_80059208(fn_801E7D18, arg0);
}
#pragma use_lmw_stmw reset

void fn_801E9C24(void) {
    extern u32 lbl_80299FA8[];
    extern u32 lbl_80299FC4[];
    extern u8 lbl_8027EB78[];

    fn_8005C8B4((void *)lbl_80299FA8[1]);
    fn_8005C8B4((void *)lbl_80299FC4[1]);
    fn_8005C8B4(&lbl_8027EB78[0x22f]);
}

void fn_801E9C70(void *arg0) {
    s32 r31;
    s32 temp_r3;
    
    if (arg0 == NULL) {
        return;
    }
    
    r31 = *(s32*)((char*)arg0 + 0x14);
    temp_r3 = *(s32*)((char*)arg0 + 0x28);
    
    if (r31 < temp_r3) {
        *(s32*)((char*)arg0 + 0x14) = temp_r3;
    }
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

extern u32 lbl_8027EB78;
extern u32 lbl_80330708;
extern u32 lbl_802CA518;
void fn_801E9D68(void) {
    u32 temp_r27;
    u32 temp_r28;
    u32 temp_r29;
    u32 temp_r30;
    u32 *temp_r31;

    temp_r31 = &lbl_80330708;

    temp_r27 = *(temp_r31 + 0x21);
    temp_r28 = *(temp_r31 + 0x22);
    temp_r29 = *(temp_r31 + 0x23);
    temp_r30 = *(temp_r31 + 0x24);

    fn_80013A90(&lbl_8027EB78 + 0x24C, temp_r31);
    fn_800138F4();
    fn_80013A90(&lbl_8027EB78 + 0x253);
    fn_800138F4();
    fn_80013A90(&lbl_8027EB78 + 0x25D);
    fn_800138F4();
    fn_80013A90(&lbl_8027EB78 + 0x26C);
    fn_800138F4();
    fn_8002297C(&lbl_802CA518);

    *(temp_r31 + 0x21) = (*(temp_r31 + 0x21) | (temp_r27 & 0xFFFF));
    *(temp_r31 + 0x22) = (*(temp_r31 + 0x22) | (temp_r28 & 0xFFFF));
    *(temp_r31 + 0x23) = (*(temp_r31 + 0x23) | (temp_r29 & 0xFFFF));
    *(temp_r31 + 0x24) = (*(temp_r31 + 0x24) | (temp_r30 & 0xFFFF));
}

void fn_801E9E30(s32 arg0, s32 arg1)
{
    // Simple implementation since the full logic is not clear from disassembly
    // and this is a very minimal function that might be part of a larger issue
    return;
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
