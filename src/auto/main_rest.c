/* Functions from 0x800119C0 to 0x80016EE8, found by decomp-toolkit. */
#include "common.h"

static inline s32 Script_ReadSignedShort(void) {
    extern void *lbl_80367180;
    s32 value;
    value = *(*(s8 **)((u8 *)lbl_80367180 + 0xC))++;
    return (value << 8) + *(*(u8 **)((u8 *)lbl_80367180 + 0xC))++;
}
static inline void Script_PushWord(s32 value) {
    extern void *lbl_80367180;
    s32 *stack = (*(s32 **)((u8 *)lbl_80367180 + 0x18))++;
    *stack = value;
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma opt_strength_reduction off

#pragma pop

#pragma push
#pragma global_optimizer on
#pragma scheduling on

#pragma pop

#pragma push
#pragma opt_propagation off

#pragma pop
#pragma dont_inline on

#pragma scheduling reset

#pragma global_optimizer off

#pragma global_optimizer on

extern s32 fn_8006785C(s16, s32, void *);

#pragma push
#pragma global_optimizer off
#pragma opt_propagation off

#pragma pop

u8 fn_80014E70(void) {
    extern u8 lbl_803671B8;
    return lbl_803671B8;
}

void fn_80014E78(void) {
    extern u8 lbl_803671B8;
    extern void OS_YieldThread(void);
    while (lbl_803671B8 == 0) {
        OS_YieldThread();
    }
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
        VIWaitForRetrace();
    }
}

#pragma optimization_level 3
s32 fn_80014EDC(u32 arg0) {
    u32 Res_GetByName(void *);
    void *Msg_Expand(void *);
    extern void *lbl_80367210;
    s32 var_r31;

    arg0 = (u32)((u8 *)lbl_80367210 + ((arg0 & 0xFF) << 2));
    var_r31 = *(s32 *)((u8 *)arg0 + 4);
    if (Res_GetByName((void *)var_r31) != 0U) {
        var_r31 = (s32)Msg_Expand((void *)var_r31);
    }
    return var_r31;
}
#pragma optimization_level reset
void fn_80014F30(void *arg0, s32 arg1) {
    s8 Stream_ReadU8(s32);
    M2C_FIELD(arg0, s8 *, 0) = Stream_ReadU8(arg1);
    M2C_FIELD(arg0, s8 *, 1) = Stream_ReadU8(arg1);
    M2C_FIELD(arg0, s8 *, 2) = Stream_ReadU8(arg1);
    M2C_FIELD(arg0, s8 *, 3) = Stream_ReadU8(arg1);
}

void fn_80014F94(void *arg0, s32 arg1) {
    M2C_UNK Stream_WriteU8(s32, u8);
    Stream_WriteU8(arg1, M2C_FIELD(arg0, u8 *, 0));
    Stream_WriteU8(arg1, M2C_FIELD(arg0, u8 *, 1));
    Stream_WriteU8(arg1, M2C_FIELD(arg0, u8 *, 2));
    Stream_WriteU8(arg1, M2C_FIELD(arg0, u8 *, 3));
}

void *Msg_ExpandMmTag(void *ctrl) {
    /* Select an MM_* message tag from two control bytes and expand it via Msg_Expand. */
    void *Msg_Expand(void *);
    extern u8 gMsgCommonStr[];
    u8 variant;
    u8 kind;
    u8 useAlt;
    void *tag;

    variant = *(u8 *)((u8 *)ctrl + 1);
    switch ((s32) variant) {
    case 0:
        useAlt = 1;
        break;
    case 3:
        useAlt = 0;
        break;
    default:
        return &gMsgCommonStr[0x1D];
    }
    kind = *(u8 *)ctrl;
    switch ((s32) kind) {
    case 0:
        if (useAlt != 0) {
            tag = &gMsgCommonStr[0x1D];
        } else {
            tag = &gMsgCommonStr[0x22];
        }
        return Msg_Expand(tag);
    case 1:
        if (useAlt != 0) {
            tag = &gMsgCommonStr[0x28];
        } else {
            tag = &gMsgCommonStr[0x2E];
        }
        return Msg_Expand(tag);
    case 2:
        if (useAlt != 0) {
            tag = &gMsgCommonStr[0x34];
        } else {
            tag = &gMsgCommonStr[0x3A];
        }
        return Msg_Expand(tag);
    case 3:
        if (useAlt != 0) {
            tag = &gMsgCommonStr[0x40];
        } else {
            tag = &gMsgCommonStr[0x46];
        }
        return Msg_Expand(tag);
    case 4:
        if (useAlt != 0) {
            tag = &gMsgCommonStr[0x4C];
        } else {
            tag = &gMsgCommonStr[0x52];
        }
        return Msg_Expand(tag);
    default:
        return &gMsgCommonStr[0x1D];
    }
}

/* True if this unit-list command can run: phase 0, and the allegiance list is large enough. */
s32 UnitList_CmdIsAvailable(u8 *cmd) {
    u8 BattleState_IsPhaseZero(void *);
    extern u8 gBattleState[];
    extern u32 gUnitLists[];
    s32 count;
    void *node;
    s32 kind;

    if ((u8)BattleState_IsPhaseZero(gBattleState) == 0) {
        return 0;
    }
    kind = cmd[1];
    switch (kind) {
    case 0:
        count = 0;
        node = (void *)gUnitLists[kind * 3];
        while (node != NULL) {
            node = *(void **)((u8 *)node + 0x184);
            count += 1;
        }
        return count > 1;
    case 3:
        count = 0;
        node = (void *)gUnitLists[kind * 3];
        while (node != NULL) {
            node = *(void **)((u8 *)node + 0x184);
            count += 1;
        }
        return count > 0;
    default:
        return 0;
    }
}

void fn_8001520C(void *arg0, u8 arg1) {
    M2C_FIELD(arg0, u8 *, 1) = arg1;
    M2C_FIELD(arg0, u8 *, 0) = (u8) (arg1 == 3);
    M2C_FIELD(arg0, s8 *, 2) = -1;
    M2C_FIELD(arg0, s8 *, 3) = -1;
}

/* Walk a unit list and grant support points to same-faction partners under the rank cap. */
void UnitList_GainSupportPoints(void **listHead) {
    void Unit_AddSupportPoints(void *, s32);
    s32 Unit_GetSupportRankTotal(void *);
    void *Unit_GetSupportPartner(void *, s32);
    u8 Unit_CountSupportPartners(void *);
    void *partner;
    void *unit;
    s32 i;

    unit = *listHead;
    while (unit != NULL) {
        if (*(u32 *)((u8 *)unit + 0x188) != 0) {
            for (i = 0; i < (s32)Unit_CountSupportPartners(unit); i++) {
                partner = Unit_GetSupportPartner(unit, i);
                if (partner != NULL &&
                    *(u32 *)((u8 *)partner + 0x190) == *(u32 *)((u8 *)unit + 0x190) &&
                    Unit_GetSupportRankTotal(unit) < 5 &&
                    Unit_GetSupportRankTotal(partner) < 5) {
                    Unit_AddSupportPoints(unit, i);
                }
            }
        }
        unit = *(void **)((u8 *)unit + 0x184);
    }
}

void Allegiance_SetMask(s8 arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5, s8 arg6, s8 arg7, void *arg_sp8) {
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
/* Clear an 8-byte allegiance mask, then set bits by mode vs the current phase allegiance (0=self, 1=hostile/rel==1, 2=non-hostile, 3=0-3, 4=0+5, 5=all). */
void Allegiance_FillMask(u8 mode, u8 *mask) {
    extern u8 gBattleState[];
    u8 zero;
    u8 phaseAllegiance;
    u8 rel2;
    u8 rel3;
    u8 *p;

    zero = 0;
    p = mask;
    *p++ = zero;
    *p++ = zero;
    *p++ = zero;
    *p++ = zero;
    *p++ = zero;
    *p++ = zero;
    *p++ = zero;
    *p = zero;
    phaseAllegiance = gBattleState[0x11];
    switch (mode) {
    case 0:
        mask[phaseAllegiance] = 1;
        return;
    case 1:
        if (phaseAllegiance == 0) {
            zero = zero;
            goto case1_after;
        }
        if (phaseAllegiance == 1) {
            zero = 1;
            goto case1_after;
        }
        zero = 2;
    case1_after:
        if ((u8)zero == 1) {
            mask[0] = 1;
        }
        if ((u32)(((u32)(1 - phaseAllegiance) | (u32)(phaseAllegiance - 1)) >> 31) == 1) {
            mask[1] = 1;
        }
        if (phaseAllegiance == 2) {
            rel2 = 0;
        } else if (phaseAllegiance == 1) {
            rel2 = 1;
        } else {
            rel2 = 2;
        }
        if ((u8)rel2 == 1) {
            mask[2] = 1;
        }
        if (phaseAllegiance == 3) {
            rel3 = 0;
        } else if (phaseAllegiance == 1) {
            rel3 = 1;
        } else {
            rel3 = 2;
        }
        if ((u8)rel3 == 1) {
            mask[3] = 1;
        }
        return;
    case 2:
        if (phaseAllegiance == 0) {
            zero = zero;
            goto case2_after;
        }
        if (phaseAllegiance == 1) {
            zero = 1;
            goto case2_after;
        }
        zero = 2;
    case2_after:
        if ((u8)zero != 1) {
            mask[0] = 1;
        }
        if ((u32)(((u32)(1 - phaseAllegiance) | (u32)(phaseAllegiance - 1)) >> 31) != 1) {
            mask[1] = 1;
        }
        if (phaseAllegiance == 2) {
            rel2 = 0;
        } else if (phaseAllegiance == 1) {
            rel2 = 1;
        } else {
            rel2 = 2;
        }
        if ((u8)rel2 != 1) {
            mask[2] = 1;
        }
        if (phaseAllegiance == 3) {
            rel3 = 0;
        } else if (phaseAllegiance == 1) {
            rel3 = 1;
        } else {
            rel3 = 2;
        }
        if ((u8)rel3 != 1) {
            mask[3] = 1;
        }
        return;
    case 3:
        mask[0] = 1;
        mask[1] = 1;
        mask[2] = 1;
        mask[3] = 1;
        return;
    case 4:
        mask[0] = 1;
        mask[5] = 1;
        return;
    case 5:
        mask[0] = 1;
        mask[1] = 1;
        mask[2] = 1;
        mask[3] = 1;
        mask[4] = 1;
        mask[5] = 1;
        mask[6] = 1;
        mask[7] = 1;
        return;
    }
}

char *Allegiance_GetNameStr(s32 arg0)
{
    extern u8 gMsgCommonStr[];
    char *base;
    char *result;

    switch ((u32)arg0) {
    case 0:
        return (char *)gMsgCommonStr + 0x58;
    case 1:
        return (char *)gMsgCommonStr + 0x5F;
    case 2:
        return (char *)gMsgCommonStr + 0x65;
    case 3:
        return (char *)gMsgCommonStr + 0x6B;
    case 5:
        return (char *)gMsgCommonStr + 0x73;
    case 6:
        return (char *)gMsgCommonStr + 0x7A;
    case 4:
    default:
        base = (char *)gMsgCommonStr;
        result = base + 0x83;
        if (arg0 >= 0) {
            return result;
        }
        return base + 0x7F;
    }
}

#pragma global_optimizer reset
s32 Allegiance_Compare(void *arg0, void *arg1) {
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

s32 Allegiance_CompareIds(u8 arg0, u8 arg1) {
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
    }
    if (kind < 0) {
        goto done_sw;
    } else {
        goto done_sw;
    }
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

#pragma optimization_level 3
void fn_800157DC(void *arg0, void *arg1) {
    void fn_8003B6C4(void *, void *);
    void *list;
    void *node;
    s32 kind;
    void *head;

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
    }
    if (kind < 0) {
        goto done_sw;
    }
    goto Ldup;
Ldup:
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
#pragma optimization_level reset
void fn_800158A0(void *arg0) {
    extern u8 gUnits[];
    u8 *unit;
    u32 temp;
    s32 k;
    s32 i;

    *(void **)arg0 = NULL;
    i = 1;
    *(void **)((u8 *)arg0 + 4) = NULL;

    for (k = 0x9F; k != 0; k--) {
        if ((u8)i != 0) {
            unit = gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u8 *)((u8 *)arg0 + 8) == (*(u8 **)(unit + 0x190))[8]) {
            temp = *(u32 *)(unit + 0x180);
            if (temp != 0 || *(u32 *)(unit + 0x184) != 0) {
                if (temp == 0) {
                    *(void **)arg0 = unit;
                } else if (*(u32 *)(unit + 0x184) == 0) {
                    *(void **)((u8 *)arg0 + 4) = unit;
                }
                if (*(void **)arg0 != NULL && *(void **)((u8 *)arg0 + 4) != NULL) {
                    return;
                }
            }
        }
        i += 1;
    }
}

void fn_8001594C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = arg1;
}

void fn_80015960(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 lbl_80284128[16];
    Process_CreateChild(lbl_80284128, arg0);
}

void fn_8001598C(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void fn_8004EB14(u8 *, s32);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;
    Allegiance_FillMask(5, sp8);
    i = 1;
    do {
        if ((u8)i != 0) unit = gUnits + ((u8)i - 1) * 0x280;
        else unit = NULL;
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[(*(u8 **)(unit + 0x190))[8]] != 0) fn_8004EB14(unit, 0);
        }
        i += 1;
    } while (i <= 0x9F);
}

/* Tick E_DispLoadWhole: clear when all units' display resources are ready, or after timeout. */
void E_DispLoadWhole_Wait(void *proc) {
    void Process_ClearFunc(void *);
    void Allegiance_FillMask(s32, u8 *, s32);
    u8 Unit_IsDisplayReady(void *);
    extern u8 gUnits[];
    u8 allegMask[8];
    s32 ticks;
    s32 i;
    u8 *unit;
    u8 *allegInfo;
    u8 ready;

    ticks = *(s32 *)((u8 *)proc + 0x60);
    *(s32 *)((u8 *)proc + 0x60) = ticks + 1;
    Allegiance_FillMask(5, allegMask, ticks);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            allegInfo = *(u8 **)(unit + 0x190);
            if (allegMask[allegInfo[8]] != 0) {
                if (Unit_IsDisplayReady(unit) == 0) {
                    ready = 0;
                    goto after;
                }
            }
        }
        i += 1;
    } while (i <= 0x9F);
    ready = 1;
after:
    if (ready != 0 || *(s32 *)((u8 *)proc + 0x60) > 0x4650) {
        Process_ClearFunc(proc);
    }
}

void fn_80015B00(void *arg0) {
    void Allegiance_FillMask(s32, u8 *);
    u8 Unit_IsDisplayReady(void *);
    void fn_8004F5EC(void *, s32);
    extern u8 gUnits[];
    u8 mask2[8];
    u8 mask1[8];
    s32 i;
    u8 *unit;
    *(s32 *)((u8 *)arg0+0x60)=0;
    Allegiance_FillMask(3, mask1);
    for (i=1;i<=0x9F;i++) {
        if ((u8)i != 0) unit=gUnits+((u8)i-1)*0x280;
        else unit=0;
        if (*(u32 *)(unit+0x188) && mask1[(*(u8 **)(unit+0x190))[8]]) {
            if (!Unit_IsDisplayReady(unit)) break;
        }
    }
    Allegiance_FillMask(5, mask2);
    for (i=1;i<=0x9F;i++) {
        if ((u8)i != 0) unit=gUnits+((u8)i-1)*0x280;
        else unit=0;
        if (*(u32 *)(unit+0x188) && mask2[(*(u8 **)(unit+0x190))[8]]) {
            fn_8004F5EC(unit,0x100);
        }
    }
}

void fn_80015C18(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void Mu_StartBlend(u8 *, s32, s32, s32);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;

    Allegiance_FillMask(3, sp8);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[(*(u8 **)(unit + 0x190))[8]] != 0) {
                if (unit[2] != 0) {
                    Mu_StartBlend(unit, 0, 8, 0);
                }
            }
        }
        i += 1;
    } while (i <= 0x9F);
}

void fn_80015CBC(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void fn_8003A064(u8 *);
    void *fn_8007C3BC(void);
    void fn_8007C4D4(void *, s32);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;
    u8 *sub;

    Allegiance_FillMask(4, sp8);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            sub = *(u8 **)(unit + 0x190);
            if (sp8[sub[8]] != 0) {
                fn_8003A064(unit);
                fn_8007C4D4(fn_8007C3BC(), 0x100);
            }
        }
        i += 1;
    } while (i <= 0x9F);
}

void fn_80015D54(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void fn_8003A114(u8 *);
    void *fn_8007C3BC(void);
    void fn_8007C4D4(void *, s32);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;
    u8 *sub;

    Allegiance_FillMask(3, sp8);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            sub = *(u8 **)(unit + 0x190);
            if (sp8[sub[8]] != 0) {
                fn_8003A114(unit);
                fn_8007C4D4(fn_8007C3BC(), 0x108);
            }
        }
        i += 1;
    } while (i <= 0x9F);
}

void fn_80015DEC(void) {
    void Allegiance_FillMask(s32, u8 *);
    void Unit_SetWorldXY(void *, f32, f32);
    extern u8 gUnits[];
    extern f32 lbl_80368C78;
    u8 sp8[8];
    s32 i;
    u8 *unit;
    u8 *sub;

    Allegiance_FillMask(3, sp8);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            sub = *(u8 **)(unit + 0x190);
            if (sp8[sub[8]] != 0) {
                Unit_SetWorldXY(unit,
                                lbl_80368C78 + (f32)(s32)*(f32 *)(unit + 4),
                                lbl_80368C78 + (f32)(s32)*(f32 *)(unit + 8));
            }
        }
        i += 1;
    } while (i <= 0x9F);
}

/* Draw map units (shadows/models/icons) for allegiances 0-3 unless suppressed by game flags. */
void Unit_DrawAll(void) {
    void Allegiance_FillMask(s32, u8 *);
    void fn_8004B218(void);
    void fn_8004B984(void);
    void fn_8004C108(void);
    void fn_8004D370(void);
    void fn_8004D3A4(u8 *);
    void fn_8004DC5C(s32);
    u32 fn_80055D94(s32);
    extern u8 gUnits[];
    extern s32 gGameFlags;
    u8 allegMask[4];
    u8 *units;
    s32 i;
    u8 *unit;
    u8 *faction;

    if (fn_80055D94(0x200) == 0U && !(gGameFlags & 2)) {
        fn_8004D370();
        fn_8004C108();
        fn_8004B218();
        Allegiance_FillMask(3, allegMask);
        units = gUnits;
        i = 1;
        do {
            if ((u8)i != 0) {
                unit = units + ((u8)i - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (*(u32 *)(unit + 0x188) != 0U) {
                faction = *(u8 **)(unit + 0x190);
                if (allegMask[faction[8]] != 0) {
                    fn_8004D3A4(unit);
                }
            }
            i += 1;
        } while (i <= 0x9F);
        fn_8004B984();
        fn_8004DC5C(1);
    }
}

void fn_80015FA4(void) {
    void Allegiance_FillMask(s32, u8 *);
    void fn_8004DF20(u8 *);
    void Unit_UpdateVisual(u8 *);
    u32 fn_80055D94(s32);
    extern u8 gUnits[];
    extern s32 gGameFlags;
    u8 sp10[8];
    u8 sp8[8];
    u8 *units;
    u8 *faction;

    if (fn_80055D94(0x200) == 0U) {
        if (gGameFlags & 2) {
            s32 i;
            Allegiance_FillMask(3, sp10);
            units = gUnits;
            i = 1;
            do {
                if ((u8)i != 0) {
                    faction = units + ((u8)i - 1) * 0x280;
                } else {
                    faction = NULL;
                }
                if (*(u32 *)(faction + 0x188) != 0U) {
                    u8 *f = *(u8 **)(faction + 0x190);
                    if (sp10[f[8]] != 0) {
                        fn_8004DF20(faction);
                    }
                }
                i += 1;
            } while (i <= 0x9F);
        } else {
            s32 i;
            Allegiance_FillMask(3, sp8);
            i = 1;
            do {
                if ((u8)i != 0) {
                    units = gUnits + ((u8)i - 1) * 0x280;
                } else {
                    units = NULL;
                }
                if (*(u32 *)(units + 0x188) != 0U) {
                    faction = *(u8 **)(units + 0x190);
                    if (sp8[faction[8]] != 0) {
                        fn_8004DF20(units);
                        Unit_UpdateVisual(units);
                    }
                }
                i += 1;
            } while (i <= 0x9F);
        }
    }
}

void fn_800160D4(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void fn_8004E040(u8 *);
    u32 fn_80055D94(s32);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;

    if (fn_80055D94(0x200) == 0) {
        Allegiance_FillMask(3, sp8);
        i = 1;
        do {
            if ((u8)i != 0) {
                unit = gUnits + ((u8)i - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (*(u32 *)(unit + 0x188) != 0) {
                if (sp8[(*(u8 **)(unit + 0x190))[8]] != 0) {
                    fn_8004E040(unit);
                }
            }
            i += 1;
        } while (i <= 0x9F);
    }
}

void fn_80016180(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void fn_80050C90(u8 *);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;

    Allegiance_FillMask(3, sp8);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[(*(u8 **)(unit + 0x190))[8]] != 0) {
                fn_80050C90(unit);
            }
        }
        i += 1;
    } while (i <= 0x9F);
}

void fn_8001621C(void) {
    void fn_8004EA60(void *, s32);
    extern u8 gUnitLists[];
    void *node;
    void *next;

    node = *(void **)(gUnitLists + 0x3C);
    while (node != NULL) {
        next = *(void **)((u8 *)node + 0x184);
        fn_8004EA60(node, 0);
        node = next;
    }
    node = *(void **)(gUnitLists + 0x48);
    while (node != NULL) {
        next = *(void **)((u8 *)node + 0x184);
        fn_8004EA60(node, 0);
        node = next;
    }
    node = *(void **)(gUnitLists + 0x54);
    while (node != NULL) {
        next = *(void **)((u8 *)node + 0x184);
        fn_8004EA60(node, 0);
        node = next;
    }
}

void fn_800162B8(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void fn_8004EA60(u8 *, s32);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;
    Allegiance_FillMask(5, sp8);
    i = 1;
    do {
        if ((u8)i != 0) unit = gUnits + ((u8)i - 1) * 0x280;
        else unit = NULL;
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[(*(u8 **)(unit + 0x190))[8]] != 0) fn_8004EA60(unit, 0);
        }
        i += 1;
    } while (i <= 0x9F);
}

void fn_80016358(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void fn_8004EB14(u8 *, s32);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;
    Allegiance_FillMask(5, sp8);
    i = 1;
    do {
        if ((u8)i != 0) unit = gUnits + ((u8)i - 1) * 0x280;
        else unit = NULL;
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[(*(u8 **)(unit + 0x190))[8]] != 0) fn_8004EB14(unit, 0);
        }
        i += 1;
    } while (i <= 0x9F);
}

void fn_800163F8(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void fn_8004EB14(u8 *, s32);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;

    Allegiance_FillMask(3, sp8);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[(*(u8 **)(unit + 0x190))[8]] != 0) {
                fn_8004EB14(unit, 0);
            }
        }
        i += 1;
    } while (i <= 0x9F);
}

void fn_80016498(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void fn_8004F5EC(u8 *, s32);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;

    Allegiance_FillMask(3, sp8);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[(*(u8 **)(unit + 0x190))[8]] != 0) {
                fn_8004F5EC(unit, 0);
            }
        }
        i += 1;
    } while (i <= 0x9F);
}

#pragma global_optimizer off
#pragma use_lmw_stmw on
#pragma push
#pragma global_optimizer on
#pragma opt_loop_invariants off
#pragma dont_inline off
static inline void Debug_PrintUnitLists(u8 *list, const char *strings, s32 index)
{
    extern char lbl_802680A8[];
    extern void DebugPrint(const char *, ...);
    extern s32 Msg_ResolveName(void *);
    u8 id;
    s8 x;
    s8 y;
    u32 flags;
    struct { u8 *ptr; } unit;
    void *name;

    do {
        DebugPrint(strings + 0x23, index, fn_80015680((void **)list));
        unit.ptr = *(u8 **)list;
        while (unit.ptr != NULL) {
            name = *(void **)(unit.ptr + 0x188);
            if (name != NULL) {
                flags = *(u32 *)(unit.ptr + 0x1A0);
                y = *(s8 *)(unit.ptr + 0x19F);
                x = *(s8 *)(unit.ptr + 0x19E);
                id = *(u8 *)(unit.ptr + 0x198);
                DebugPrint(lbl_802680A8 + 0x3B, id, x, y, flags, Msg_ResolveName(name));
            } else {
                DebugPrint(lbl_802680A8 + 0x59, *(u8 *)(unit.ptr + 0x198), *(s8 *)(unit.ptr + 0x19E),
                           *(s8 *)(unit.ptr + 0x19F), *(u32 *)(unit.ptr + 0x1A0));
            }
            unit.ptr = *(u8 **)(unit.ptr + 0x184);
        }
        index++;
        list += 0xC;
    } while (index < 8);
}

void fn_80016538(void)
{
    extern u8 gUnitLists[];
    extern char lbl_802680A8[];
    Debug_PrintUnitLists(gUnitLists, lbl_802680A8, 0);
}
#pragma pop
#pragma global_optimizer on
#pragma use_lmw_stmw on
void fn_80016628(s32 arg0) {
    M2C_UNK fn_80015718(void *, void *);
    M2C_UNK fn_800158A0(void *);
    M2C_UNK Unit_Clear(void *, s32);
    u8 Unit_Read(void *, s32);
    extern u8 gUnits[];
    extern u8 gUnitLists[];
    struct Ctx { u8 *units; s32 context; } c;
    s32 var_r29;
    register u8 *var_r28;
    u8 *temp_r27;
    s32 var_r27;

    c.context = arg0;
    fn_8001594C(gUnitLists, 0);
    fn_8001594C(gUnitLists + 0xC, 1);
    fn_8001594C(gUnitLists + 0x18, 2);
    fn_8001594C(gUnitLists + 0x24, 3);
    temp_r27 = gUnitLists + 0x30;
    fn_8001594C(temp_r27, 4);
    fn_8001594C(gUnitLists + 0x3C, 5);
    fn_8001594C(gUnitLists + 0x48, 6);
    fn_8001594C(gUnitLists + 0x54, 7);
    var_r29 = 0;
    c.units = gUnits;
    var_r28 = c.units;
    do {
        Unit_Clear(var_r28, var_r29 + 1);
        fn_80015718(temp_r27, var_r28);
        var_r29 += 1;
        var_r28 += 0x280;
    } while (var_r29 < 0x9F);
    var_r28 = c.units;
    var_r29 = 0;
    do {
        fn_800156A0(temp_r27, var_r28);
        if (Unit_Read(var_r28, c.context) == 0) {
            fn_80015718(temp_r27, var_r28);
        }
        var_r29 += 1;
        var_r28 += 0x280;
    } while (var_r29 < 0x9F);
    var_r27 = 0;
    var_r28 = gUnitLists;
    do {
        if (var_r27 != 4) {
            fn_800158A0(var_r28);
        }
        var_r27 += 1;
        var_r28 += 0xC;
    } while (var_r27 < 8);
    var_r27 = 0;
    do {
        if (((u32) M2C_FIELD(c.units, u32 *, 0x180) == 0U) && ((u32) M2C_FIELD(c.units, u32 *, 0x184) == 0U)) {
            fn_80015718(gUnitLists + (M2C_FIELD(M2C_FIELD(c.units, void **, 0x190), u8 *, 8) * 0xC), c.units);
        }
        var_r27 += 1;
        c.units += 0x280;
    } while (var_r27 < 0x9F);
}
#pragma optimization_level 3
void fn_800167E4(void *arg0)
{
  extern u8 gUnits[];
  u8 new_var2;
  void Allegiance_SetMask(s32, s32, s32, s32, s32, s32, s32, s32, void *);
  s32 Status_Test(void *, s32);
  void Unit_MoveToList(void *, s32);
  void fn_80016F78(void *);
  void Unit_Clear(void *, s32);
  void Unit_Write(void *, void *);
  void Array_Destroy(void *, void *, s32, s32);
  void Item_Destroy(void);
  u8 savedIds[8];
  u8 flags[8];
  void *savedUnits[8];
  int new_var;
  u8 temp[0x280];
  u8 *new_var3[2];
  s32 savedCount;
  s32 i;
  savedCount = 0;
  Allegiance_SetMask(0, 1, 1, 1, 0, 0, 0, 0, flags);
  for (i = 1; i <= 0x9F; i++)
  {
    if (((u8) i) != 0)
    {
      new_var3[1] = gUnits + ((((u8) i) - 1) * 0x280);
    }
    else
    {
      new_var3[1] = 0;
    }
    new_var = 0;
    if ((*((u32 *) (new_var3[1] + 0x188))) != 0)
    {
      new_var3[0] = *((u8 **) (new_var3[1] + 0x190));
      if (flags[new_var3[0][8]] != 0)
      {
        if (((u8) Status_Test(new_var3[1] + 0x1BC, 0x59)) != new_var)
        {
          savedUnits[savedCount] = new_var3[1];
          savedIds[savedCount++] = (new_var2 = *((*((u8 **) (new_var3[1] + 0x190))) + 8));
          Unit_MoveToList(new_var3[1], 7);
        }
      }
    }
  }

  fn_80016F78(temp);
  Unit_Clear(temp, -1);
  for (i = 0; i < 0x9F; i++)
  {
    new_var3[1] = gUnits + (i * 0x280);
    new_var3[0] = *((u8 **) (new_var3[1] + 0x190));
    switch (new_var3[0][8])
    {
      case 0:

      case 5:

      case 6:

      case 7:
        Unit_Write(new_var3[1], arg0);
        break;

      case 1:

      case 2:

      case 3:

      case 4:
        Unit_Write(temp, arg0);
        break;

    }

  }

  for (i = 0; i < savedCount; i++)
  {
    Unit_MoveToList(savedUnits[i], savedIds[i]);
  }

  Array_Destroy(temp + 0x1EC, Item_Destroy, 8, 4);
  Array_Destroy(temp + 0x1CC, Item_Destroy, 8, 4);
}
#pragma optimization_level reset
void *fn_800169A8(void *arg0, s16 arg1)
{
    void Heap_Free(void *);
    void Array_Destroy(void *, void (*)(void), s32, s32);
    void Item_Destroy(void);

    if (arg0 != NULL) {
        if (arg0 == NULL) {
            goto after;
        }
        if (arg0 == NULL) {
            goto after;
        }
        if (arg0 == NULL) {
            goto after;
        }
        if (arg0 == NULL) {
            goto after;
        }
        if (arg0 == NULL) {
            goto after;
        }
        if (arg0 == NULL) {
            goto after;
        }
        Array_Destroy((u8 *)arg0 + 0x1EC, Item_Destroy, 8, 4);
        Array_Destroy((u8 *)arg0 + 0x1CC, Item_Destroy, 8, 4);
    after:
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

#pragma opt_lifetimes off
void Unit_WriteAll(s32 arg0) {
    extern u8 gUnits[];
    void Unit_Write(void *, s32);
    s32 i;
    for (i = 0; i < 0x9F; i++) {
        Unit_Write(&gUnits[i * 0x280], arg0);
    }
}
#pragma opt_lifetimes on
s32 fn_80016A9C(s32 arg0) {
    s32 Unit_FindDisposLeader(s32);
    extern u32 gUnitLists[];
    u32 v;

    v = gUnitLists[arg0 * 3];
    if (v != 0U) {
        return Unit_FindDisposLeader(v);
    }
    return 0;
}

void fn_80016ADC(void) {
    void Allegiance_FillMask(s32, u8 *);
    void fn_8004DF04(void);
    void fn_8004E178(u8 *);
    extern u8 gUnits[];
    u8 sp8[4];
    u8 *pBase;
    s32 i;
    u8 *entry;
    u8 *sub;

    fn_8004DF04();
    Allegiance_FillMask(3, sp8);
    pBase = gUnits;
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
                fn_8004E178(entry);
            }
        }
        i += 1;
    } while (i <= 0x9F);
}

void *Unit_FindByPerson(u32 arg0) {
    extern u8 gUnits[];
    u8 *p;
    s32 i;
    u32 v;

    if (arg0 == 0U) {
        return NULL;
    }
    p = gUnits;
    for (i = 0; i < 0x9F; i++) {
        v = *(u32 *)(p + 0x188);
        if (v != 0U && v == arg0) {
            return &gUnits[i * 0x280];
        }
        p += 0x280;
    }
    return NULL;
}

void *Unit_FindByName(void) {
    u32 Res_GetByName(void);
    extern u8 gUnits[];
    u8 *p;
    s32 i;
    u32 id;
    u32 v;

    id = Res_GetByName();
    if (id == 0U) {
        return NULL;
    }
    p = gUnits;
    for (i = 0; i < 0x9F; i++) {
        v = *(u32 *)(p + 0x188);
        if (v != 0U && v == id) {
            return &gUnits[i * 0x280];
        }
        p += 0x280;
    }
    return NULL;
}

#pragma optimization_level 3
void fn_80016C58(void) {
    void Unit_MoveToListHead(void *, s32);
    void fn_800156A0(void *, void *);
    void Unit_Clear(void *, s32);
    void fn_80015718(void *, void *);
    void Unit_SetMapPos(void *, s8, s8);
    void fn_8001594C(void *, s8);
    extern u8 gUnitLists[];
    extern u8 gUnits[];
    void *unit;
    void *list4;
    s32 i;
    s32 j;
    s32 alleg;

    {
        void *cur;
        cur = *(void **)(gUnitLists + 4);
        while (cur != NULL) {
            unit = *(void **)((u8 *)cur + 0x180);
            Unit_MoveToListHead(cur, 5);
            cur = unit;
        }
    }

    i = 0;
    unit = gUnits;
    list4 = gUnitLists + 0x30;
    do {
        if (*(u32 *)((u8 *)unit + 0x188) != 0) {
            alleg = (*(u8 **)((u8 *)unit + 0x190))[8];
            if (alleg != 0) {
                if (alleg < 0) {
                } else if (alleg < 4) {
                    fn_800156A0(gUnitLists + alleg * 0xC, unit);
                    Unit_Clear(unit, -1);
                    fn_80015718(list4, unit);
                }
            }
        }
        i += 1;
        unit = (u8 *)unit + 0x280;
    } while (i < 0x9F);

    j = 0;
    {
        void *cur;
        cur = *(void **)(gUnitLists + 0x3C);
        while (cur != NULL) {
            unit = *(void **)((u8 *)cur + 0x184);
            Unit_SetMapPos(cur, (s8)((j % 16) * 4 + 1), (s8)((j / 16) * 4 + 0x41));
            cur = unit;
            j += 1;
        }
    }

    fn_8001594C(gUnitLists, 0);
    fn_8001594C(gUnitLists + 0xC, 1);
    fn_8001594C(gUnitLists + 0x18, 2);
    fn_8001594C(gUnitLists + 0x24, 3);
}
#pragma optimization_level reset
void Unit_ResetAll(void) {
    M2C_UNK fn_80015718(M2C_UNK *, M2C_UNK *);
    M2C_UNK Unit_Clear(M2C_UNK *, s32);
    extern u8 gUnits[];
    extern u8 gUnitLists[];
    u8 *list;
    s32 i;
    fn_8001594C(gUnitLists, 0);
    fn_8001594C(gUnitLists + 0xC, 1);
    fn_8001594C(gUnitLists + 0x18, 2);
    fn_8001594C(gUnitLists + 0x24, 3);
    list = gUnitLists + 0x30;
    fn_8001594C(list, 4);
    fn_8001594C(gUnitLists + 0x3C, 5);
    fn_8001594C(gUnitLists + 0x48, 6);
    fn_8001594C(gUnitLists + 0x54, 7);
    for (i = 0; i < 0x9F; i++) {
        Unit_Clear((M2C_UNK *)(gUnits + i * 0x280), i + 1);
        fn_80015718((M2C_UNK *)list, (M2C_UNK *)(gUnits + i * 0x280));
    }
}

#include "common.h"
#include "common.h"

extern void* gCmScriptList;
extern u16 gCmScriptUsed;
extern s32 gCmScriptStatus;
#include "common.h"
extern u32 gUnitLists[];
extern u32 gBattleState[];
#include "global.h"
#include "common.h"
extern s32 lbl_80367184;
extern s32 lbl_8036718C;
extern void *lbl_80367180;
extern s32 lbl_803671A4;
extern s32 lbl_80367198;
