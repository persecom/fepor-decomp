/* Functions from 0x801A2AC4 to 0x801A7D3C, found by decomp-toolkit. */
#include "common.h"

void fn_801A2AC4(void) {
    extern u16 lbl_8027B368[];
    extern u16 lbl_80297118[];
    
    fn_8000D3EC(&lbl_8027B368[0xE1], &lbl_80297118[0x58]);
    fn_8000D3EC(&lbl_8027B368[0xEE], &lbl_80297118[0x58]);
    fn_8000D3EC(&lbl_8027B368[0xFD], &lbl_80297118[0x58]);
    fn_8000D3EC(&lbl_8027B368[0x10C], &lbl_80297118[0x58]);
    fn_8000D3EC(&lbl_8027B368[0x11C], &lbl_80297118[0x68]);
    fn_8000D3EC(&lbl_8027B368[0x12C], &lbl_80297118[0x78]);
    fn_8000D3EC(&lbl_8027B368[0x139], &lbl_80297118[0x88]);
    fn_8000D3EC(&lbl_8027B368[0x149], &lbl_80297118[0x98]);
    fn_8000D3EC(&lbl_8027B368[0x157], &lbl_80297118[0xA8]);
    fn_8000D3EC(&lbl_8027B368[0x167], &lbl_80297118[0xB8]);
    fn_8000D3EC(&lbl_8027B368[0x177], &lbl_80297118[0xC8]);
    fn_8000D3EC(&lbl_8027B368[0x184], &lbl_80297118[0xD8]);
    fn_8000D3EC(&lbl_8027B368[0x193], &lbl_80297118[0xE8]);
    fn_8000D3EC(&lbl_8027B368[0x1A2], &lbl_80297118[0xF8]);
    fn_8000D3EC(&lbl_8027B368[0x1B3], &lbl_80297118[0x108]);
    fn_8000D3EC(&lbl_8027B368[0x1C1], &lbl_80297118[0x118]);
}

s32 fn_801A2D2C(void) {
    return 0;
}

s32 fn_801A2E68(void) {
    M2C_UNK fn_8002A084();
    extern s32 lbl_802EF4E0;
    fn_8002A084();
    return lbl_802EF4E0 != 0;
}

void fn_801A2EA0(s32 arg0) {
    extern u16 lbl_802EF4C8;
    s8 sp8;

    sp8 = 0x43;
    fn_80026770(&lbl_802EF4C8, &sp8);
    fn_800319E8(arg0);
}

s32 fn_801A2EEC(void) {
    extern u16 lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    s8 spC;
    u8 sp8;

    spC = 0x43;
    fn_80026770(&lbl_802EF4C8, &spC);
    sp8 = M2C_FIELD(&lbl_802EF4C8, u8 *, 0x13);
    fn_8002A784(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), &sp8);
    return lbl_802EF4E0 != 0;
}

u32 fn_801A2FE0(void) {
    extern void *lbl_8036C574;
    extern void *lbl_8036C5F4;

    *(void **)((char *)lbl_8036C574 + 0x20) = lbl_8036C5F4;
    return 0;
}

s32 fn_801A30B8(void) {
    return 1;
}

s32 fn_801A30C0(s32 arg0) {
    M2C_UNK fn_80036150(M2C_UNK *);
    M2C_UNK fn_8003816C(s32, u8, u8);
    M2C_UNK fn_8019BCC0(s8, s8, s32);
    M2C_UNK fn_801A49AC(M2C_UNK *, u8, M2C_UNK *);
    M2C_UNK fn_801A7794(M2C_UNK *, s32, s32, M2C_UNK *);
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_80330EAC;
    fn_8003816C(M2C_FIELD(&lbl_802EF4C8, s32 *, 4), M2C_FIELD(&lbl_802EF4C8, u8 *, 0xF), M2C_FIELD(&lbl_802EF4C8, u8 *, 0x10));
    fn_801A7794(&lbl_80330EAC, M2C_FIELD(&lbl_802EF4C8, s32 *, 0), M2C_FIELD(&lbl_802EF4C8, s32 *, 4), &lbl_80330EAC);
    fn_801A49AC(&lbl_80330EAC, M2C_FIELD(&lbl_802EF4C8, u8 *, 0xA), &lbl_80330EAC);
    fn_80036150(&lbl_80330EAC);
    fn_8019BCC0((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xF), (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0x10), arg0);
    return 0;
}

extern u16 lbl_80330EAC[];
void fn_801A372C(void) {
    u16* temp_r31;
    
    temp_r31 = (u16*)lbl_80330EAC;
    fn_80104480(&temp_r31[0x242]); // 0x484 / 2
    fn_80104480((u16*)(((u8*)temp_r31) + 0x560) + 0x1A4); // Equivalent to the original instruction pattern
}

s32 fn_801A3E24(s32 arg0)
{
    s32 temp_r3;
    s32 result = 0;

    if (arg0 < 0 || arg0 > 16)
        return 0;

    switch (arg0)
    {
        case 0:
            return 0x00000000;
        case 1:
            temp_r3 = fn_80019E04(0x00000000);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 2:
            temp_r3 = fn_80019E04(0x00000008);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 3:
            temp_r3 = fn_80019E04(0x00000010);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 4:
            temp_r3 = fn_80019E04(0x00000018);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 5:
            temp_r3 = fn_80019E04(0x00000020);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 6:
            temp_r3 = fn_80019E04(0x00000028);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 7:
            temp_r3 = fn_80019E04(0x00000030);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 8:
            temp_r3 = fn_80019E04(0x00000038);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 9:
            temp_r3 = fn_80019E04(0x00000040);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 10:
            temp_r3 = fn_80019E04(0x00000048);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 11:
            temp_r3 = fn_80019E04(0x00000050);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 12:
            temp_r3 = fn_80019E04(0x00000058);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 13:
            temp_r3 = fn_80019E04(0x00000060);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 14:
            temp_r3 = fn_80019E04(0x00000068);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 15:
            temp_r3 = fn_80019E04(0x00000070);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
        case 16:
            temp_r3 = fn_80019E04(0x00000078);
            if (temp_r3 == arg0)
                result = 0x00000001;
            break;
    }

    return result;
}

void fn_801A442C(void) {
    s32 var_r3;
    u8 *var_r5;

    for (var_r3 = 0; var_r3 < 0x11F; var_r3++) {
        if (*(u8 *)((char *)0x801A7DFC + var_r3) != 0) {
            var_r5 = (u8 *)((char *)0xA29058C4 + var_r3);
            *var_r5 = *var_r5 + 1;
        }
    }
}

s32 fn_801A44AC(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    return 0;
}

void *fn_801A46BC(void *arg0, void *arg1) {
    M2C_UNK fn_80029E58(void *, void *);
    void *sp8;
    
    sp8 = (void *)fn_80029E58(arg0, arg1);
    return sp8;
}

void fn_801A48A4(s32 arg0) {
    M2C_UNK fn_80034068(s32, M2C_UNK, s8);
    M2C_UNK fn_800351FC(s32, u8, M2C_UNK, s32);
    s8 fn_800386B0(s32);
    u8 fn_8003D094();
    u8 fn_8003D13C(s32);
    u8 var_r31;

    var_r31 = fn_8003D094();
    if (var_r31 > fn_8003D13C(arg0)) {
        var_r31 = fn_8003D13C(arg0);
    }
    if (var_r31 != 0) {
        fn_80034068(arg0 + 0x8A0, 0x25, 0);
        fn_80034068(arg0 + 0x8A0, 0x27, fn_800386B0(arg0));
        fn_80034068(arg0 + 0x8A0, 0x28, (s8) var_r31);
        fn_800351FC(arg0, var_r31, 0, arg0 + 0x8A0);
    }
}

void fn_801A4958(void *arg0) {
    s32 *field_cac = (s32 *)((u8 *)arg0 + 0xCAC);
    *field_cac = *field_cac | 4;
    fn_801A601C(arg0, (u8 *)arg0 + 0x2E0, 0);
    fn_80034068((u8 *)arg0 + 0x8A0, 0x54, 0);
}

void fn_801A4A24(s32 arg0, u8 arg1) {
    M2C_UNK fn_80034068(s32, u8, M2C_UNK);
    u8 var_r0;

    fn_80034068(arg0 + 0x8A0, 0x20U, 0);
    var_r0 = 0x52;
    if (arg1 != 0) {
        var_r0 = 0x50;
    }
    fn_80034068(arg0 + 0x8A0, var_r0, 0);
}

s32 fn_801A4A88(struct unit *arg0) {
    s32 r31 = 0;
    if (M2C_FIELD(arg0, s32*, 0x8) == 0) {
        return 0;
    }
    r31 = M2C_FIELD(arg0, s32*, 0xC);
    return r31;
}

void fn_801A4BE0(void *arg0) {
    extern u8 lbl_8032BB58[516];
    void fn_801A9AF8(void *);
    void fn_80034F40(void *);
    void *fn_8010FF24(void *, u8, u8, u8);
    void fn_8010FE08(void *, u8, u8, u8);
    void *entry;

    fn_801A9AF8(arg0);
    if (!(M2C_FIELD(arg0, u32 *, 0xCAC) & 1)) {
        fn_801A9AF8((s8 *)arg0 + 0x2E0);
    }
    fn_80034F40(arg0);
    if (!(M2C_FIELD(arg0, u32 *, 0xCAC) & 1)) {
        fn_80034F40((s8 *)arg0 + 0x2E0);
    }
    if (M2C_FIELD(arg0, u32 *, 0xCAC) & 0x100) {
        entry = fn_8010FF24(lbl_8032BB58, M2C_FIELD(arg0, u8 *, 0x47E), M2C_FIELD(arg0, u8 *, 0x47F), 4);
        M2C_FIELD(entry, s8 *, 4) = M2C_FIELD(arg0, s8 *, 0x488);
        if (M2C_FIELD(arg0, s8 *, 0x488) == 0) {
            fn_8010FE08(lbl_8032BB58, M2C_FIELD(arg0, u8 *, 0x47E), M2C_FIELD(arg0, u8 *, 0x47F), 4);
        }
    }
}

void fn_801A7CDC(void *arg0)
{
    fn_801A9EB8(arg0);
    fn_801A9EB8((char *)arg0 + 0x2E0);
    fn_801A9EB8((char *)arg0 + 0x5C0);
    fn_800340F0((char *)arg0 + 0x8A0);
    *(s32 *)((char *)arg0 + 0xCA8) = 0;
    *(s32 *)((char *)arg0 + 0xCAC) = 0;
    *(s32 *)((char *)arg0 + 0xCB0) = 0;
    *(s32 *)((char *)arg0 + 0xCB4) = 0;
    *(s32 *)((char *)arg0 + 0xCBC) = 0;
    *(s32 *)((char *)arg0 + 0xCC0) = 0;
}

#include "global.h"
extern u16 lbl_802EF4C8;
extern s32 lbl_802EF4E0;
#include "global.h"
