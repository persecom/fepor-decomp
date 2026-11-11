/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"
typedef struct { u32 unk0; s8 vals[4]; } E2C4Info;
#include "global.h"
extern void* lbl_803674E8;
extern f32 lbl_803696C8;

extern s32 lbl_803682F0;
extern void *lbl_8026CC58;
extern void *lbl_80289998;
extern f32 lbl_80369690;
extern f32 lbl_803696A8;
extern f32 lbl_803696AC;

s32 fn_8007C5E4(void) {
    return 0;
}

void *fn_8007C64C(void) {
    extern u16 lbl_8026C640[];
    return (u8 *)lbl_8026C640 + 0x144;
}

s32 fn_8007C65C(void) {
    extern void *lbl_80367488;
    void *temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367488, void **, 0x54);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x36) = 7;
    }
    return 0;
}

void *fn_8007C67C(void) {
    extern u16 lbl_8026C640[];
    return (u8 *)lbl_8026C640 + 0x14F;
}

s32 fn_8007C68C(void) {
    return 0;
}

void *fn_8007C6AC(void) {
    extern u16 lbl_8026C640[];
    return (u8 *)lbl_8026C640 + 0x15a;
}

s32 fn_8007C6BC(void) {
    extern void *lbl_80367488;
    u8 *ptr;

    ptr = *(u8 **)((u8 *)lbl_80367488 + 0x54);

    if (ptr != NULL) {
        *(u16 *)(ptr + 0x36) = 3;
    }

    return 0;
}

void *fn_8007C6DC(void) {
    extern u16 lbl_8026C640[];
    return (u8 *)lbl_8026C640 + 0x169;
}

s32 fn_8007C6EC(void) {
    extern void *lbl_80367488;
    u8 *ptr;

    ptr = *(u8 **)((u8 *)lbl_80367488 + 0x54);

    if (ptr != NULL) {
        *(u16 *)(ptr + 0x36) = 4;
    }

    return 0;
}

void *fn_8007C70C(void) {
    extern u16 lbl_8026C640[];
    return (u8 *)lbl_8026C640 + 0x17a;
}

s32 fn_8007C71C(void) {
    return 0;
}

void *fn_8007C73C(void) {
    extern u16 lbl_8026C640[];
    return (u8 *)lbl_8026C640 + 0x189;
}

s32 fn_8007C74C(void) {
    return 0;
}

extern void* lbl_80367488;
extern s32 lbl_803693C0;
extern s32 lbl_803693C4;
extern f64 lbl_803693C8;
extern f32 lbl_803693D4;
extern f32 lbl_803693D8;
extern f32 lbl_803693E4;
void fn_8007C968(void *arg0, void *arg1, void *arg2) {
    void fn_80007124(void *);
    void fn_8000727C(f32);
    void fn_80007290(s32, s32, s32, s32);
    void fn_80007858(f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    s32 sp[2];
    s32 var_r30;

    var_r30 = 0;
    sp[0] = lbl_803693C0;
    sp[1] = lbl_803693C4;
    if ((*(u16*)((u8*)lbl_80367488 + 0x46) & 2) != 0) {
        var_r30 = 1;
    }
    fn_8000A258();
    fn_80009D74((f32)(*(s16*)((u8*)arg1 + 0x30)), (f32)(*(s16*)((u8*)arg1 + 0x32)), lbl_803693D4, lbl_803693D8);
    fn_8000A174(0, 3);
    fn_8000A248();
    fn_80007898(5);
    fn_80007858((f32)(*(s16*)((u8*)arg2 + 0x30)), (f32)(*(s16*)((u8*)arg2 + 0x32)));
    fn_80007124((void *)sp[var_r30]);
    fn_8000727C(lbl_803693E4);
    if (*(u8*)((u8*)arg2 + 0x38) != 0) {
        fn_80007290(0xFF, 0xFF, 0, 0xFF);
    }
    if (*(u8*)((u8*)arg2 + 0x39) == 2) {
        fn_80007290(0, 0, 0, 0xFF);
    }
    fn_80007884();
}

s32 fn_8007CAC4(void) {
    extern void *lbl_80367488;
    u8 *base;
    s32 flag;
    u16 val;

    base = lbl_80367488;
    flag = 2;
    if ((*(u16 *)(base + 0x46) & 2) != 0) {
        flag = 0;
    }
    val = *(u16 *)((u8 *)lbl_80367488 + 0x46);
    *(u16 *)(base + 0x46) = val & -0x203;
    base = lbl_80367488;
    *(u16 *)(base + 0x46) = *(u16 *)(base + 0x46) | (u16)flag;
    return 0;
}

s32 fn_8007CB08(void) {
    extern u16 lbl_80289894[];
    s32 v = fn_8000C0C0(lbl_80289894);
    return v != 0;
}

void fn_8007CB3C(void *arg0, u8 arg1) {
    void fn_800072B0(s32 *, s32 *, s32 *, s32 *);
    void fn_800075D8(void);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8001003C(s16, s32, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    extern s32 lbl_80369400;
    extern s32 lbl_80369404;
    extern s32 lbl_80369408;
    extern s32 lbl_8036940C;
    extern f32 lbl_80369418;
    extern f32 lbl_8036941C;
    extern f32 lbl_80369420;
    extern f32 lbl_80369424;
    extern f32 lbl_80369428;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern s32 lbl_8036C460;
    extern s32 lbl_8036C464;
    extern s32 lbl_8036C468;
    extern s32 lbl_8036C46C;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s16 var_r3;

    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(3);
    fn_80007838(lbl_80369418, lbl_8036941C, lbl_80369418, lbl_80369418);
    fn_80007818(lbl_80369420, lbl_80369424, lbl_80369418, lbl_80369418);
    sp14 = lbl_80369404;
    sp10 = lbl_80369400;
    spC = lbl_8036C464;
    sp8 = lbl_8036C460;
    fn_800072B0(&sp8, &spC, &sp10, &sp14);
    fn_800075D8();
    fn_80007884();
    fn_80007898(3);
    fn_80007838(lbl_80369418, lbl_80369424, lbl_80369418, lbl_80369418);
    fn_80007818(lbl_80369420, lbl_80369428, lbl_80369418, lbl_80369418);
    sp24 = lbl_8036C46C;
    sp20 = lbl_8036C468;
    sp1C = lbl_8036940C;
    sp18 = lbl_80369408;
    fn_800072B0(&sp18, &sp1C, &sp20, &sp24);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036942C);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    if (arg1 != 0) {
        var_r3 = 0x18;
    } else {
        var_r3 = 0x130 - (fn_80010B78(arg0, -1, lbl_80369430) / 2);
    }
    fn_8001003C(var_r3, 0x197, 1, 1, 0, arg0, lbl_80369430, lbl_80369418);
    fn_8000A258();
    fn_80009C0C(lbl_80369430);
    fn_8000A248();
}

void fn_8007CCE8(void) {
    M2C_UNK fn_80087F50();
    fn_80087F50();
}

void fn_8007CF98(void) {
    M2C_UNK fn_8007F844();
    fn_8007F844();
}

void fn_8007CFB8(void) {
    M2C_UNK fn_80082298();
    fn_80082298();
}

void fn_8007CFD8(s32 *arg0) {
    M2C_UNK fn_8008563C(s32 *);
    s32 sp8;

    sp8 = *arg0;
    fn_8008563C(&sp8);
}

void fn_8007D004(void) {
    M2C_UNK fn_80086020();
    fn_80086020();
}

void fn_8007D024(void) {
    M2C_UNK fn_80086C14();
    fn_80086C14();
}

void fn_8007D044(void) {
    M2C_UNK fn_800875B4();
    fn_800875B4();
}

void fn_8007D064(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    void fn_801475FC(void *, s32, void *);
    extern u8 lbl_80289894[];
    extern u8 lbl_8026C86C[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80289894, arg1);
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg0;
    fn_801475FC((*(s32 *)((u8 *)temp_r3 + 0x38) = arg2, lbl_8026C86C + 0x140), 0x64, lbl_8026C86C);
}

void fn_8007D0C0(void *arg0) {
    extern f32 lbl_80369418;
    extern f32 lbl_80369448;
    extern f32 lbl_8036944C;
    extern f32 lbl_80369450;
    extern f32 lbl_80369454;
    extern f32 lbl_80369458;
    extern f32 lbl_8036945C;
    extern f32 lbl_80369460;
    extern f32 lbl_80369464;
    extern f32 lbl_80369468;
    extern f32 lbl_8036946C;
    s16 temp_r4;
    s16 temp_r4_2;
    s16 temp_r4_3;
    s16 temp_r4_4;
    s16 temp_r4_5;
    s8 temp_r0;
    void *temp_r31;

    temp_r31 = *(void **)((u8 *)arg0 + 0x30);
    *(s16 *)((u8 *)temp_r31 + 6) = *(s16 *)((u8 *)temp_r31 + 6) - 1;
    if (*(s32 *)((u8 *)temp_r31 + 0x20) == 1) {
        temp_r4 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x10) = fn_800067BC(4, temp_r4, lbl_80369448, lbl_8036944C, (f32)(7 - temp_r4), lbl_80369450);
        temp_r4_2 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x18) = fn_800067BC(4, temp_r4_2, lbl_80369454, lbl_80369458, (f32)(7 - temp_r4_2), lbl_80369450);
    } else {
        temp_r4_3 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x10) = fn_800067BC(4, temp_r4_3, lbl_8036945C, lbl_8036944C, (f32)(7 - temp_r4_3), lbl_80369450);
        temp_r4_4 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x18) = fn_800067BC(4, temp_r4_4, lbl_80369460, lbl_80369458, (f32)(7 - temp_r4_4), lbl_80369450);
    }
    *(f32 *)((u8 *)temp_r31 + 0xC) = lbl_80369464;
    *(f32 *)((u8 *)temp_r31 + 0x14) = lbl_80369468;
    temp_r4_5 = *(s16 *)((u8 *)temp_r31 + 6);
    temp_r0 = (s8) fn_800067BC(4, temp_r4_5, lbl_80369418, lbl_8036946C, (f32)(7 - temp_r4_5), lbl_80369450);
    *(s8 *)((u8 *)temp_r31 + 0xA) = temp_r0;
    *(s8 *)((u8 *)temp_r31 + 8) = temp_r0;
    if (*(s16 *)((u8 *)temp_r31 + 6) <= 0) {
        fn_8000C188(arg0);
    }
}

#pragma use_lmw_stmw on
void fn_8007D270(void *arg0) {
    u8 fn_8001F4CC(void *, u8, u8);
    void *fn_8003A114(void *);
    void fn_800506E0(void *, s32, void *);
    void fn_8006140C(void *);
    void fn_800616A0(void *);
    void *fn_80061870(void);
    s32 fn_800639B4(void);
    void fn_8007B990(void *);
    void *fn_8007BA4C(void *, s32);
    void fn_8007DD78(void *);
    void fn_801A7218(void *, void *, s32);
    extern u8 lbl_802CA264[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_80330EAC[];
    void *obj;
    void *node;
    void *link;
    void *tmp;
    s32 flags;
    s32 idx;
    s32 val;
    u8 kind;

    obj = *(void **)((u8 *)arg0 + 0x30);
    if (*(s32 *)((u8 *)obj + 0x20) == 1) {
        do {
            node = *(void **)((u8 *)obj + 0x58);
            tmp = *(void **)((u8 *)node + 0x184);
            if (tmp != NULL) {
                *(void **)((u8 *)obj + 0x58) = tmp;
            } else if (*(u32 *)obj & 0x01000000) {
                link = *(void **)((u8 *)node + 0x190);
                kind = *(u8 *)((u8 *)link + 8);
                switch (kind) {
                case 0:
                    tmp = *(void **)(lbl_802CA264 + 0x3C);
                    if (tmp != NULL) {
                        *(void **)((u8 *)obj + 0x58) = tmp;
                    } else {
                        *(void **)((u8 *)obj + 0x58) = *(void **)link;
                    }
                    break;
                case 5:
                    tmp = *(void **)lbl_802CA264;
                    if (tmp != NULL) {
                        *(void **)((u8 *)obj + 0x58) = tmp;
                    } else {
                        *(void **)((u8 *)obj + 0x58) = *(void **)link;
                    }
                    break;
                default:
                    *(void **)((u8 *)obj + 0x58) = *(void **)link;
                    break;
                }
            } else {
                link = *(void **)((u8 *)node + 0x190);
                *(void **)((u8 *)obj + 0x58) = *(void **)link;
            }
            node = *(void **)((u8 *)obj + 0x58);
            flags = *(s32 *)((u8 *)node + 0x1A0);
            if ((flags & 0x40) || (flags & 0x80) || (flags & 0x18) ||
                fn_8001F4CC(lbl_802CA518, *(u8 *)((u8 *)node + 0x19E), *(u8 *)((u8 *)node + 0x19F)) == 0) {
                if (!(*(u32 *)obj & 0x01000000)) {
                    continue;
                }
            }
            break;
        } while (1);
    } else if (*(s32 *)((u8 *)obj + 0x20) == -1) {
        do {
            node = *(void **)((u8 *)obj + 0x58);
            tmp = *(void **)((u8 *)node + 0x180);
            if (tmp != NULL) {
                *(void **)((u8 *)obj + 0x58) = tmp;
            } else if (*(u32 *)obj & 0x01000000) {
                link = *(void **)((u8 *)node + 0x190);
                kind = *(u8 *)((u8 *)link + 8);
                switch (kind) {
                case 0:
                    tmp = *(void **)(lbl_802CA264 + 0x40);
                    if (tmp != NULL) {
                        *(void **)((u8 *)obj + 0x58) = tmp;
                    } else {
                        *(void **)((u8 *)obj + 0x58) = *(void **)((u8 *)link + 4);
                    }
                    break;
                case 5:
                    tmp = *(void **)(lbl_802CA264 + 4);
                    if (tmp != NULL) {
                        *(void **)((u8 *)obj + 0x58) = tmp;
                    } else {
                        *(void **)((u8 *)obj + 0x58) = *(void **)((u8 *)link + 4);
                    }
                    break;
                default:
                    *(void **)((u8 *)obj + 0x58) = *(void **)((u8 *)link + 4);
                    break;
                }
            } else {
                link = *(void **)((u8 *)node + 0x190);
                *(void **)((u8 *)obj + 0x58) = *(void **)((u8 *)link + 4);
            }
            node = *(void **)((u8 *)obj + 0x58);
            flags = *(s32 *)((u8 *)node + 0x1A0);
            if ((flags & 0x40) || (flags & 0x80) || (flags & 0x18) ||
                fn_8001F4CC(lbl_802CA518, *(u8 *)((u8 *)node + 0x19E), *(u8 *)((u8 *)node + 0x19F)) == 0) {
                if (!(*(u32 *)obj & 0x01000000)) {
                    continue;
                }
            }
            break;
        } while (1);
    } else {
        node = *(void **)((u8 *)obj + 0x58);
        *(void **)((u8 *)obj + 0x58) = *(void **)((u8 *)node + 0x194);
    }

    tmp = *(void **)((u8 *)obj + 0x5C);
    if (tmp != NULL) {
        fn_8007B990(tmp);
    }
    *(void **)((u8 *)obj + 0x5C) = fn_8007BA4C(fn_8003A114(*(void **)((u8 *)obj + 0x58)), 0);

    tmp = *(void **)((u8 *)obj + 0x60);
    if (tmp != NULL) {
        fn_800616A0(tmp);
    }
    *(void **)((u8 *)obj + 0x60) = fn_80061870();
    node = *(void **)((u8 *)obj + 0x58);
    tmp = *(void **)((u8 *)obj + 0x60);
    *(void **)((u8 *)tmp + 4) = (u8 *)node + 0x1C;
    tmp = *(void **)((u8 *)obj + 0x60);
    *(u32 *)tmp = *(u32 *)tmp | 0x50028400;
    fn_800506E0(*(void **)((u8 *)obj + 0x58), 0, node);
    val = fn_800639B4();
    *(s32 *)((u8 *)*(void **)((u8 *)obj + 0x60) + 0x44) = val;
    fn_8006140C(*(void **)((u8 *)obj + 0x60));
    fn_801A7218(lbl_80330EAC, *(void **)((u8 *)obj + 0x58), -1);

    node = *(void **)((u8 *)obj + 0x58);
    idx = 0;
    *(s16 *)((u8 *)obj + 0x24) = -1;
    *(s16 *)((u8 *)obj + 0x26) = -1;
    *(s16 *)((u8 *)obj + 0x28) = -1;
    *(s16 *)((u8 *)obj + 0x2A) = -1;
    *(s16 *)((u8 *)obj + 0x2C) = -1;
    if ((*(u8 *)((u8 *)node + 0x1A4) >> 5) & 7) {
        idx = 1;
        *(s16 *)((u8 *)obj + 0x24) = 0x1B;
        *(s16 *)((u8 *)obj + 0x2E) = (*(u8 *)((u8 *)node + 0x1A4) >> 5) & 7;
    }
    if ((*(u16 *)((u8 *)node + 0x1A4) >> 7) & 7) {
        tmp = (u8 *)obj + (idx * 2);
        idx += 1;
        *(s16 *)((u8 *)tmp + 0x24) = 0x1C;
        *(s16 *)((u8 *)tmp + 0x2E) = (*(u16 *)((u8 *)node + 0x1A4) >> 7) & 7;
    }
    if ((*(u8 *)((u8 *)node + 0x1A5) >> 4) & 7) {
        tmp = (u8 *)obj + (idx * 2);
        idx += 1;
        *(s16 *)((u8 *)tmp + 0x24) = 0x1D;
        *(s16 *)((u8 *)tmp + 0x2E) = (*(u8 *)((u8 *)node + 0x1A5) >> 4) & 7;
    }
    if ((*(u8 *)((u8 *)node + 0x1A4) >> 2) & 7) {
        tmp = (u8 *)obj + (idx * 2);
        idx += 1;
        *(s16 *)((u8 *)tmp + 0x24) = 0x1E;
        *(s16 *)((u8 *)tmp + 0x2E) = (*(u8 *)((u8 *)node + 0x1A4) >> 2) & 7;
    }
    if (*(u8 *)((u8 *)node + 0x1A5) & 7) {
        tmp = (u8 *)obj + (idx * 2);
        *(s16 *)((u8 *)tmp + 0x24) = 0x1F;
        *(s16 *)((u8 *)tmp + 0x2E) = *(u8 *)((u8 *)node + 0x1A5) & 7;
    }
    fn_8007DD78(obj);
    *(s16 *)((u8 *)obj + 6) = 7;
}
#pragma use_lmw_stmw reset

void fn_8007D638(void *arg0) {
    f32 fn_800067BC(s32, s16, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern f32 lbl_80369418;
    extern f32 lbl_80369448;
    extern f32 lbl_8036944C;
    extern f32 lbl_80369450;
    extern f32 lbl_80369454;
    extern f32 lbl_80369458;
    extern f32 lbl_8036945C;
    extern f32 lbl_80369460;
    extern f32 lbl_80369464;
    extern f32 lbl_80369468;
    extern f32 lbl_8036946C;
    s16 temp_r4;
    s16 temp_r4_2;
    s16 temp_r4_3;
    s16 temp_r4_4;
    s16 temp_r4_5;
    s8 temp_r0;
    void *temp_r31;
    f32 f_c;
    f32 f_14;

    temp_r31 = *(void **)((u8 *)arg0 + 0x30);
    *(s16 *)((u8 *)temp_r31 + 6) = *(s16 *)((u8 *)temp_r31 + 6) - 1;
    if (*(s32 *)((u8 *)temp_r31 + 0x20) == 1) {
        temp_r4 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x10) = fn_800067BC(4, temp_r4, lbl_8036944C, lbl_8036945C, (f32)(7 - temp_r4), lbl_80369450);
        temp_r4_2 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x18) = fn_800067BC(4, temp_r4_2, lbl_80369458, lbl_80369460, (f32)(7 - temp_r4_2), lbl_80369450);
    } else {
        temp_r4_3 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x10) = fn_800067BC(4, temp_r4_3, lbl_8036944C, lbl_80369448, (f32)(7 - temp_r4_3), lbl_80369450);
        temp_r4_4 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x18) = fn_800067BC(4, temp_r4_4, lbl_80369458, lbl_80369454, (f32)(7 - temp_r4_4), lbl_80369450);
    }
    f_c = lbl_80369464;
    f_14 = lbl_80369468;
    *(f32 *)((u8 *)temp_r31 + 0xC) = f_c;
    *(f32 *)((u8 *)temp_r31 + 0x14) = f_14;
    temp_r4_5 = *(s16 *)((u8 *)temp_r31 + 6);
    temp_r0 = (s8)fn_800067BC(4, temp_r4_5, lbl_8036946C, lbl_80369418, (f32)(7 - temp_r4_5), lbl_80369450);
    *(s8 *)((u8 *)temp_r31 + 0xA) = temp_r0;
    *(s8 *)((u8 *)temp_r31 + 8) = temp_r0;
    if (*(s16 *)((u8 *)temp_r31 + 6) <= 0) {
        fn_8000C188(arg0);
    }
}

void fn_8007D7E8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

void fn_8007D924(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x20) == 1) {
        M2C_FIELD(temp_r4, u8 *, 9) = (u8) (M2C_FIELD(temp_r4, u8 *, 9) + 1);
        if ((s8) M2C_FIELD(temp_r4, u8 *, 9) > 2) {
            M2C_FIELD(temp_r4, u8 *, 9) = 0U;
        }
    } else {
        M2C_FIELD(temp_r4, u8 *, 9) = (u8) (M2C_FIELD(temp_r4, u8 *, 9) - 1);
        if ((s8) M2C_FIELD(temp_r4, u8 *, 9) < 0) {
            M2C_FIELD(temp_r4, u8 *, 9) = 2U;
        }
    }
    M2C_FIELD(temp_r4, s16 *, 6) = 7;
}

void fn_8007DAB4(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

void fn_8007DD78(void *arg0) {
    s32 i;
    s32 j;
    s32 k;
    void **ptr_array1;
    void **ptr_array2;
    void **ptr_array3;
    void **ptr_array4;
    void **ptr_array5;
    void **temp_r3;
    void *temp_r30;
    void *temp_r31;
    
    *(u32*)((uintptr_t)arg0 + 0x38) = 0;
    *(u32*)((uintptr_t)arg0 + 0x3C) = 0;
    *(u32*)((uintptr_t)arg0 + 0x40) = 0;
    *(u32*)((uintptr_t)arg0 + 0x44) = 0;
    *(u32*)((uintptr_t)arg0 + 0x48) = 0;
    *(u32*)((uintptr_t)arg0 + 0x4C) = 0;
    *(u32*)((uintptr_t)arg0 + 0x50) = 0;
    *(u32*)((uintptr_t)arg0 + 0x54) = 0;
    
    for (i = 0; i < 0x62; i++) {
        temp_r3 = (void**)fn_80105C5C(*(u32*)((uintptr_t)*(u32*)((uintptr_t)arg0 + 0x58) + 0x18C) + 0x1C, (u8)i);
        if ((temp_r3 != NULL) && (*(u8*)((uintptr_t)temp_r3 + 0x19) != 0)) {
            *(u32*)((uintptr_t)arg0 + 0x38) = (u32)temp_r3;
            arg0 = (void*)((uintptr_t)arg0 + 4);
        } else {
            break;
        }
    }
    
    ptr_array1 = (void**)arg0;
    i = 0;
    j = 0;
    while (j < 0x62) {
        temp_r3 = (void**)fn_80105C5C(*(u32*)((uintptr_t)arg0 + 0x58) + 0x1BC, (u8)j);
        if ((temp_r3 != NULL) && (*(u8*)((uintptr_t)temp_r3 + 0x19) != 0)) {
            k = 0;
loop_1:
            temp_r30 = (void**)fn_80105C5C(*(u32*)((uintptr_t)*(u32*)((uintptr_t)arg0 + 0x58) + 0x18C) + 0x1C, (u8)k);
            if (temp_r30 != NULL) {
                if (*(u32*)((uintptr_t)temp_r3 + 0x0) != *(u32*)((uintptr_t)temp_r30 + 0x0)) {
                    i = 0;
                    if ((*(u8*)((uintptr_t)temp_r3 + 0x19) != 0) && (*(u8*)((uintptr_t)temp_r3 + 0x1A) == 0)) {
                        i = 1;
                    }
                    if (i != 0) {
                        goto block_2;
                    }
                } else {
                    goto block_3;
                }
            } else {
block_2:
                k++;
                if (k < 0x62) {
                    goto loop_1;
                }
            }
block_3:
            if (k == 0x62) {
                *ptr_array1 = temp_r3;
                ptr_array1 += 1;
                i++;
            }
        }
        j++;
    }
    
    j = 0;
    ptr_array2 = (void**)((uintptr_t)arg0 + (i << 2));
    while (j < 0x62) {
        temp_r3 = (void**)fn_80105C5C(*(u32*)((uintptr_t)arg0 + 0x58) + 0x1BC, (u8)j);
        if ((temp_r3 != NULL) && (*(u8*)((uintptr_t)temp_r3 + 0x19) != 0)) {
            k = 0;
loop_3:
            temp_r30 = (void**)fn_80105C5C(*(u32*)((uintptr_t)*(u32*)((uintptr_t)arg0 + 0x58) + 0x18C) + 0x1C, (u8)k);
            if (temp_r30 != NULL) {
                if (*(u32*)((uintptr_t)temp_r3 + 0x0) != *(u32*)((uintptr_t)temp_r30 + 0x0)) {
                    i = 0;
                    if ((*(u8*)((uintptr_t)temp_r3 + 0x19) != 0) && (*(u8*)((uintptr_t)temp_r3 + 0x1A) == 0)) {
                        i = 1;
                    }
                    if (i == 0) {
                        goto block_4;
                    }
                } else {
                    goto block_5;
                }
            } else {
block_4:
                k++;
                if (k < 0x62) {
                    goto loop_3;
                }
            }
block_5:
            if (k == 0x62) {
                *ptr_array2 = temp_r3;
                ptr_array2 += 1;
            }
        }
        j++;
    }
}

extern u8 lbl_80330708[1400];
void fn_8007DF6C(void *arg0) {
    void fn_8004BE88(s32, s32);
    void fn_8007B990(void *);
    void fn_800616A0(void *);
    void fn_800C4588(void *);
    void *temp_r31;
    void *temp;

    temp_r31 = *(void **)((u8 *)arg0 + 0x30);
    fn_8004BE88(*(s32 *)((u8 *)temp_r31 + 0x58), 1);
    lbl_80330708[0xA8] = *(u8 *)((u8 *)temp_r31 + 0x9);
    *(s32 *)(lbl_80330708 + 0xAC) = *(s32 *)((u8 *)temp_r31 + 0x58);

    temp = *(void **)((u8 *)temp_r31 + 0x5C);
    if (temp != NULL) {
        fn_8007B990(temp);
    }
    temp = *(void **)((u8 *)temp_r31 + 0x60);
    if (temp != NULL) {
        fn_800616A0(temp);
    }
    fn_800C4588(temp_r31);
}

void fn_8007E2C4(void *arg0) {
 void fn_801A8CB8(void *,void *);
 void **fn_8006EDD8(void *,s32);
 u32 *fn_8018D900(s32);
 void fn_8000A258(void);
 void fn_80009F90(void *,s32,s32);
 void fn_8000A248(void);
 void fn_80007898(s32);
 void fn_80007870(f32);
 void fn_80007838(f32,f32,f32,f32);
 void fn_80007818(f32,f32,f32,f32);
 void fn_800076AC(u8,u8,u8,u8);
 void fn_800075D8(void);
 void fn_80007884(void);
 void fn_80009C0C(f32);
 void fn_8000A174(s32,s32);
 void fn_80231D94(void *,void *,...);
 s32 fn_80010B78(void *,s32,f32);
 void fn_8001003C(s32,s32,s32,s32,s32,void *,...);
 extern u8 lbl_80330EAC[],lbl_8026C86C[];
 extern void *lbl_803674F4;
 extern f32 lbl_8036948C,lbl_80369430,lbl_80369418,lbl_8036942C;
 extern f32 lbl_803694B0,lbl_803694B4,lbl_803694B8,lbl_803694BC;
 char b3[16];
 char b2[16];
 char b1[16];
 char b0[16];
 s8 info[8];
 u32 color;
 f32 x,y,texw,texh,scaledh,scaledw;
 void *obj;
 u16 *dim;
 s32 left,right,top,bottom,width;
 u8 k0,k1,k2,k3;
 s32 val;
 f32 scale;
 x=lbl_8036948C+M2C_FIELD(arg0,f32 *,0x14);
 y=M2C_FIELD(arg0,f32 *,0x18);
 fn_801A8CB8(lbl_80330EAC,info);
 dim=*fn_8006EDD8(lbl_803674F4,0x1A);
 scale=lbl_80369430;
 scaledw=(f32)dim[0]*scale;
 scaledh=(f32)dim[1]*scale;
 color=*fn_8018D900(1);
 obj=lbl_803674F4;
 dim=*fn_8006EDD8(obj,0x1A);
 texh=(f32)dim[1]; texw=(f32)dim[0];
 fn_8000A258();fn_80009F90(obj,0x1A,0x11);fn_8000A248();
 fn_80007898(1);fn_80007870(lbl_80369418);
 fn_80007838(x,y,lbl_80369418,lbl_80369418);
 fn_80007818(x+scaledh,y+scaledw,texh,texw);
 fn_800076AC(((u8 *)&color)[0],((u8 *)&color)[1],((u8 *)&color)[2],0xFF);
 fn_800075D8();fn_80007884();
 fn_8000A258();fn_80009C0C(lbl_8036942C);fn_8000A248();
 fn_8000A258();fn_8000A174(0,0x13);fn_8000A248();
 val=info[4];
 if(val>0) {fn_80231D94(b0,lbl_8026C86C+0x210,val);k0=0xC;} else {fn_80231D94(b0,lbl_8026C86C+0x215);k0=2;}
 width=(s16)fn_80010B78(b0,-1,lbl_80369430);
top=(s32)(lbl_803694B4+y); left=(s32)(lbl_803694B0+x)+0x10;
fn_8001003C((s16)(left-width/2),(s16)(top),k0,0,0,b0,lbl_80369430,lbl_80369418);
val=info[5];
 if(val>0) {fn_80231D94(b1,lbl_8026C86C+0x210,val);k1=0xC;} else {fn_80231D94(b1,lbl_8026C86C+0x215);k1=2;}
 width=(s16)fn_80010B78(b1,-1,lbl_80369430);
right=(s32)(lbl_803694B8+x)+0x10;
fn_8001003C((s16)(right-width/2),(s16)(top),k1,0,0,b1,lbl_80369430,lbl_80369418);
val=info[6];
 if(val>0) {fn_80231D94(b2,lbl_8026C86C+0x210,val);k2=0xC;} else {fn_80231D94(b2,lbl_8026C86C+0x215);k2=2;}
 width=(s16)fn_80010B78(b2,-1,lbl_80369430);
bottom=(s32)(lbl_803694BC+y);
fn_8001003C((s16)(left-width/2),(s16)(bottom),k2,0,0,b2,lbl_80369430,lbl_80369418);
val=info[7];
 if(val>0) {fn_80231D94(b3,lbl_8026C86C+0x210,val);k3=0xC;} else {fn_80231D94(b3,lbl_8026C86C+0x215);k3=2;}
 width=(s16)fn_80010B78(b3,-1,lbl_80369430);
fn_8001003C((s16)(right-width/2),(s16)(bottom),k3,0,0,b3,lbl_80369430,lbl_80369418);

 fn_8000A258();fn_80009C0C(lbl_80369430);fn_8000A248();
}

#pragma use_lmw_stmw on
void fn_8007E764(void *arg0)
{
    void *fn_8014C5A8(void *, s32);
    void fn_800875B4(s32, s32, f32, f32, f32, f32);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8000A174(s32, s32);
    u8 fn_80105BC0(void *, s32);
    u8 fn_8001512C(void *);
    void *fn_8000E0E4(void *);
    void fn_80234450(void *, void *);
    void fn_802343E0(void *, void *);
    void *fn_80014FF8(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    void *fn_80017010(void *);
    s32 fn_80010B78(void *, s32, f32);
    extern u8 lbl_8026C86C[];
    extern f32 lbl_803694C0;
    extern f32 lbl_803694C4;
    extern f32 lbl_803694C8;
    extern f32 lbl_8036942C;
    extern f32 lbl_803694CC;
    extern f32 lbl_803694D0;
    extern f32 lbl_80369430;
    extern f32 lbl_80369418;
    extern f32 lbl_803694D4;
    extern f32 lbl_803694D8;
    extern f64 lbl_80369470;
    u8 sp8[0x20];
    f32 y;
    f32 x;
    void *namePtr;
    void *obj3;
    void *obj0;
    u8 kind;
    s32 w;

    x = lbl_803694C0 + *(f32 *)((u8 *)arg0 + 0x18);
    y = *(f32 *)((u8 *)arg0 + 0x14);
    namePtr = (u8 *)*(void **)((u8 *)arg0 + 0x58) + 0x236;
    obj0 = fn_8014C5A8(lbl_80330708, 0);
    obj3 = fn_8014C5A8(lbl_80330708, 3);
    fn_800875B4(0xB3, 0, y, x, lbl_803694C4, lbl_803694C8);
    fn_8000A258();
    fn_80009C0C(lbl_8036942C);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    if (fn_80105BC0((u8 *)*(void **)((u8 *)arg0 + 0x58) + 0x1BC, 0) != 0) {
        if (fn_8001512C(obj0) != 0) {
            fn_80234450(sp8, fn_8000E0E4(lbl_8026C86C + 0x218));
            fn_802343E0(sp8, lbl_8026C86C + 0x221);
            fn_802343E0(sp8, fn_80014FF8(obj0));
            fn_8001003C((s32)(y + lbl_803694CC), (s32)(lbl_803694D0 + x), 1, 1, 0, sp8, lbl_80369430, lbl_80369418);
        }
        if (fn_8001512C(obj3) != 0) {
            fn_80234450(sp8, fn_8000E0E4(lbl_8026C86C + 0x223));
            fn_802343E0(sp8, lbl_8026C86C + 0x221);
            fn_802343E0(sp8, fn_80014FF8(obj3));
            fn_8001003C((s32)(y + lbl_803694D4), (s32)(lbl_803694D0 + x), 1, 1, 0, sp8, lbl_80369430, lbl_80369418);
        }
    } else {
        kind = *(u8 *)(*(u8 **)((u8 *)*(void **)((u8 *)arg0 + 0x58) + 0x190) + 8);
        if (fn_8001512C(fn_8014C5A8(lbl_80330708, kind)) != 0) {
            kind = *(u8 *)(*(u8 **)((u8 *)*(void **)((u8 *)arg0 + 0x58) + 0x190) + 8);
            switch (kind) {
            case 0:
                fn_80234450(sp8, fn_8000E0E4(lbl_8026C86C + 0x218));
                break;
            case 3:
                fn_80234450(sp8, fn_8000E0E4(lbl_8026C86C + 0x223));
                break;
            }
            fn_802343E0(sp8, lbl_8026C86C + 0x221);
            fn_802343E0(sp8, fn_8000E0E4(fn_80017010(namePtr)));
            w = (fn_80010B78(sp8, -1, lbl_80369430) >> 1) & 0x7FFF;
            fn_8001003C((s32)((lbl_803694D8 + y) - (f32)w), (s32)(lbl_803694D0 + x), 1, 1, 0, sp8, lbl_80369430, lbl_80369418);
        }
    }
    fn_8000A258();
    fn_80009C0C(lbl_80369430);
    fn_8000A248();
}
#pragma use_lmw_stmw reset
extern u16 *lbl_803674E0;

#pragma inline

extern f32 lbl_8036A118;
extern f32 lbl_8036A120;
extern f32 lbl_8036A130;
extern f32 lbl_8036A154;

extern f32 lbl_80369768;
extern u16 lbl_80289A60[];

extern u8 lbl_80289B00[16];

extern void* fn_800980D4(s32 arg0);
extern void fn_8017E394(void* arg0, void* arg1, void* arg2, s32 arg3);

extern u8 lbl_80289EB8[16];

extern f32 lbl_803697E0;
extern f32 lbl_803697E4;

