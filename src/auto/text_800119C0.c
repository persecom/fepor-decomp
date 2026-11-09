/* Functions from 0x800119C0 to 0x80016EE8, found by decomp-toolkit. */
#include "common.h"

u16 *fn_800119C0(void) {
    extern u16 lbl_80267DC8;
    return (u16*)((u32)&lbl_80267DC8 + 0x86);
}

s32 fn_800119D0(void) {
    return 0x18;
}

s32 fn_800119D8(void) {
    return 0x18;
}

extern u16 lbl_80283948;
extern u16 lbl_80283EFC;
void *fn_800119E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(u16**)arg0 = &lbl_80283EFC;
        if (arg0 != NULL) {
            *(u16**)arg0 = &lbl_80283948;
            if (*(u32*)((char*)arg0 + 4) != 0) {
                fn_8006EDA0((char*)arg0 + 4);
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
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
    return 0;
}

s32 fn_800138BC(void *arg0) {
    s32 *temp_r3;
    extern void *lbl_80367180;
    M2C_UNK fn_80011EDC();

    lbl_80367180 = arg0;
    temp_r3 = M2C_FIELD(lbl_80367180, s32 **, 0x18) - 4;
    fn_80011EDC();
    M2C_FIELD(lbl_80367180, s32 **, 0x18) = temp_r3;
    return *temp_r3;
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
    void *obj;
    s32 *cursor;

    obj = lbl_80367180;
    cursor = *(s32 **)((u8 *)obj + 0x18);
    *(s32 **)((u8 *)obj + 0x18) = (s32 *)((u8 *)cursor + 4);
    *cursor = arg0;
    lbl_80367188 += 1;
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

void fn_80013F48(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
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
    s32 temp_r0;

    temp_r0 = lbl_803671A4;
    lbl_803671A4 = arg0;
    return temp_r0;
}

void fn_800142E4(void) {
    extern u16 lbl_80284098;
    fn_8000A440(1, (u16*)&lbl_80284098);
}

void fn_80014310(void *arg0, s32 arg1, void *arg2) {
    if (arg0 != NULL) {
        void **v0 = M2C_FIELD(arg0, void **, 0x4);
        *(s32*)((char*)arg0 + 0x14) = arg1;
        fn_80059208(arg1);
        *(s32*)((char*)arg0 + 0x1C) = (s32)arg2;
    }
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

s32 fn_80014558(void* arg0, void* arg1, s32 arg2) {
    u32* temp_r3;
    
    if (arg0 == NULL || arg1 == NULL) {
        return 0;
    }
    
    temp_r3 = (u32*)M2C_FIELD(arg0, s32**, 0x4);
    *temp_r3 = (u32)arg1;
    
    return (s32)M2C_FIELD(arg1, s32**, arg2);
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
    void *temp_r3;
    
    temp_r3 = *(void **)((u8 *)arg0 + 4);
    fn_8008A290((u8)((u32) temp_r3 >> 16), *(s32 *)((u8 *)temp_r3 + 4));
    *(void **)((u8 *)arg0 + 4) = (void *) ((u8 *)*(void **)((u8 *)arg0 + 4) + 8);
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

u32 fn_80014790(u32 arg0) {
    return 0;
}

u8 fn_80014E70(void) {
    extern u8 lbl_803671B8;
    return lbl_803671B8;
}

extern u8 lbl_803671B8;
extern void* lbl_803671B4;
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

s32 fn_80014EDC(s32 arg0) {
    u32 fn_8000D354(s32, s32);
    s32 fn_8000E0E4(s32);
    extern s32 lbl_80367210;
    s32 var_r31;

    var_r31 = M2C_FIELD((lbl_80367210 + ((arg0 * 4) & 0x3FC)), s32 *, 4);
    if (fn_8000D354(var_r31, lbl_80367210) != 0U) {
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
    switch ((s32) temp_r0) {                        /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_r4 = 1;
block_7:
        temp_r0_2 = *(u8 *)arg0;
        switch ((s32) temp_r0_2) {                  /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if (var_r4 != 0) {
                var_r3 = &lbl_80268018[0x1D];
            } else {
                var_r3 = &lbl_80268018[0x22];
            }
            return fn_8000E0E4(var_r3);
        case 1:                                     /* switch 2 */
            if (var_r4 != 0) {
                var_r3 = &lbl_80268018[0x28];
            } else {
                var_r3 = &lbl_80268018[0x2E];
            }
            return fn_8000E0E4(var_r3);
        case 2:                                     /* switch 2 */
            if (var_r4 != 0) {
                var_r3 = &lbl_80268018[0x34];
            } else {
                var_r3 = &lbl_80268018[0x3A];
            }
            return fn_8000E0E4(var_r3);
        case 3:                                     /* switch 2 */
            if (var_r4 != 0) {
                var_r3 = &lbl_80268018[0x40];
            } else {
                var_r3 = &lbl_80268018[0x46];
            }
            return fn_8000E0E4(var_r3);
        case 4:                                     /* switch 2 */
            if (var_r4 != 0) {
                var_r3 = &lbl_80268018[0x4C];
            } else {
                var_r3 = &lbl_80268018[0x52];
            }
            return fn_8000E0E4(var_r3);
        default:                                    /* switch 2 */
            return &lbl_80268018[0x1D];
        }
        break;
    case 3:                                         /* switch 1 */
        var_r4 = 0;
        goto block_7;
    default:                                        /* switch 1 */
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
    M2C_UNK fn_80036998(void *, s32);
    s32 fn_80036A24(void *);
    void *fn_80036FD0(void *, s32);
    u8 fn_8003701C(void *);

    void *var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if ((u32) M2C_FIELD(var_r31, u32 *, 0x188) != 0U) {
                s32 var_r30 = 0;
                s32 temp_r3 = fn_8003701C(var_r31);
                do {
                    void *temp_r28 = fn_80036FD0(var_r31, var_r30);
                    if ((temp_r28 != NULL) && 
                        ((u32) M2C_FIELD(temp_r28, u32 *, 0x190) == (u32) M2C_FIELD(var_r31, u32 *, 0x190)) &&
                        (fn_80036A24(var_r31) < 5) && 
                        (fn_80036A24(temp_r28) < 5)) {
                        fn_80036998(var_r31, var_r30);
                    }
                    var_r30 += 1;
                } while (var_r30 < temp_r3);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0x184);
        } while (var_r31 != NULL);
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

void fn_80015680(void **arg0) {
    void *var_r4;

    var_r4 = *arg0;
loop_2:
    if (var_r4 != NULL) {
        var_r4 = *(void **)((s32)var_r4 + 0x184);
        goto loop_2;
    }
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

void fn_80015ED4(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8004B218();
    M2C_UNK fn_8004B984();
    M2C_UNK fn_8004C108();
    M2C_UNK fn_8004D370();
    M2C_UNK fn_8004D3A4();
    M2C_UNK fn_8004DC5C(M2C_UNK);
    u32 fn_80055D94(M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    extern s32 lbl_803682A4;
    M2C_UNK sp8;
    u8 var_r29;
    void *var_r3;

    if ((fn_80055D94(0x200) == 0U) && !(lbl_803682A4 & 2)) {
        fn_8004D370();
        fn_8004C108();
        fn_8004B218();
        fn_80015320(3, &sp8);
        var_r29 = 1;
        do {
            if (var_r29 != 0) {
                var_r3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
            } else {
                var_r3 = NULL;
            }
            if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
                fn_8004D3A4();
            }
            var_r29 += 1;
        } while ((s32) var_r29 <= 0x9F);
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
    s32 i = 0;
    do {
        fn_8003CA94(var_r31, arg0);
        i += 1;
        var_r31 = (char*)var_r31 + 0x280;
    } while (i < 0x9F);
}

s32 fn_80016A9C(s32 arg0) {
    s32 fn_80037710();
    extern M2C_UNK lbl_802CA264;
    if ((u32) *(&lbl_802CA264 + (arg0 * 0xC)) != 0U) {
        return fn_80037710();
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
