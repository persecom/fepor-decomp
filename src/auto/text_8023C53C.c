/* Functions from 0x8022CD68 to 0x80267A7C, found by decomp-toolkit. */
#include "common.h"

extern u16 lbl_80366F28;
extern char lbl_80282AE8[];
extern char lbl_80282B20[];
extern u8 lbl_8034C110[];
extern f64 lbl_8036C368;
extern u16 Ecb_8033E188[192];u16 *D_80256B30;
extern s32 lbl_803687F8;
extern f32 lbl_8036C374;
extern s32 lbl_80368A28;
extern s32 lbl_80368A2C;
extern s32 lbl_80368A30;
extern s32 lbl_80368A34;
extern u32* lbl_80368A38;
extern void (*lbl_80368B34)(s16);
extern f32 lbl_8034C324[];
extern s32 D_80368AD0;
extern s32 lbl_80368B0C;
extern void (*__atexit_funcs[])(void);
extern s32 __atexit_curr_func;
extern void (*__console_exit)(void);
extern s32 __aborting;
extern void (*__stdio_exit)(void);
extern void (**_dtors)(void);
extern void _ExitProcess(void);
extern s16 lbl_802A1E90[];
extern u8 lbl_80368AAE;
extern u8 lbl_80368AAD;
extern u16 lbl_8035BF18[];
extern u32 lbl_8035C918[];

u32 fn_8026367C(void);
u16 fn_8025FC64(u8 arg0, u8 arg1, u8 arg2);
s32 fn_8022C568(f32 arg0);
void fn_80261934(u8 arg0, void *arg1, s32 arg2);
void fn_8026146C(s32 *);
void fn_8025FFC8(void *arg0, u8 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5);
s32 fn_80255FB0(void);
extern void func_80013934(s32 arg0);
extern s32 lbl_803689A8;
extern u16 lbl_803548B8;
extern u16 lbl_80368A08;
extern u16 lbl_8035A510[];
extern u16 lbl_8035D118[256];
extern u16 lbl_80361A98[4288];
extern f32 lbl_802831BC[];
extern f64 lbl_8036C348;
extern u16 lbl_803670C0;
extern u32 lbl_803670C8;
extern u32 lbl_800000F8;

#include "musyx/select_source.h"

typedef struct Voice {
    u8 pad0[0x110];
    u64 flags;
    u8 pad118[0x5C];
    s32 unk174;
    s32 unk178;
    s32 unk17C;
    s32 unk180;
    s32 unk184;
    s32 unk188;
    u32 unk18C;
    u32 unk190;
} Voice;

typedef struct VidList {
    struct VidList *next; /* 0x0 */
    struct VidList *prev; /* 0x4 */
    u32 vid;              /* 0x8 */
    u32 root;             /* 0xC */
} VidList;

extern u32 lbl_80368A48;

static u32 GetNewVid(void) {
    u32 vid;

    do {
        vid = lbl_80368A48++;
    } while (vid == 0xFFFFFFFF);
    return vid;
}

typedef struct GroupData {
    u8 pad0[4];
    u16 id;     /* 0x04 */
    u16 type;   /* 0x06 */
    u8 pad8[0x1C - 0x8];
    u32 unk1C;  /* 0x1C */
    u32 unk20;  /* 0x20 */
    u32 unk24;  /* 0x24 */
} GroupData;

typedef struct GroupEntry {
    GroupData *data; /* 0x0 */
    u32 unk4;        /* 0x4 */
    u32 base;        /* 0x8 */
} GroupEntry;

typedef struct GroupNode {
    struct GroupNode *next; /* 0x0 */
    u32 unk4;               /* 0x4 */
    s16 count;              /* 0x8 */
    GroupEntry entries[1];  /* 0xC */
} GroupNode;

typedef struct GroupItem {
    u16 id;
    u8 pad2[0x52];
} GroupItem;

typedef struct SynthVoice {
    struct SynthVoice *next; /* 0x000 */
    struct SynthVoice *prev; /* 0x004 */
    u8 state;                /* 0x008 */
    u8 id;                   /* 0x009 */
    u16 unkA;                /* 0x00A */
    u32 vid;                 /* 0x00C */
    u8 pad10[0xF4 - 0x10];
    u32 unkF4;               /* 0x0F4 */
    struct VidList *unkF8;   /* 0x0F8 */
    struct VidList *unkFC;   /* 0x0FC */
    u8 pad100[0x11C - 0x100];
    s32 unk11C;              /* 0x11C */
    s32 unk120;              /* 0x120 */
    u8 pad124[0xEF0 - 0x124];
    s32 unkEF0;              /* 0xEF0 */
    s32 unkEF4;              /* 0xEF4 */
    u16 unkEF8;              /* 0xEF8 */
    u8 unkEFA;               /* 0xEFA */
    u8 padEFB[0x1508 - 0xEFB];
    struct {
        u8 pad0[0x32];
        u16 unk32;
        u8 pad34[4];
    } unk1508[16];           /* 0x1508 */
} SynthVoice;

typedef struct {
    char gpr;
    char fpr;
    char reserved[2];
    char *input_arg_area;
    char *reg_save_area;
} __va_list;
typedef __va_list va_list[1];

typedef struct {
    char *buffer;
    s32 length;
    s32 position;
} __OutStr;

s32 __pformatter(s32 (*)(void *, const char *, u32), void *, const char *, va_list);
s32 fn_80232220(void *, const char *, u32);

// The structure being used in functions in this file - assumed based on offset 0xF4
typedef struct {
    u8 unkF4;  // This is likely the member accessed in function with 0xF4 offset 
} SStructType;

extern s32 fn_802314D8(s32, s32, s32);

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern f64 lbl_8036C148;

void fn_8023C53C(void) {

}

void fn_8023C540(void) {

}

s32 fn_8023C544(void) {
    return 0;
}

s32 fn_8023C54C(void) {
    return 0;
}

s32 fn_8023C554(void) {
    return 0;
}

void fn_8023C55C(void) {

}

void fn_8023C560(void) {

}

s32 AMC_IsStub(void) {
    return 1;
}

void fn_8023C7B0(void) {
    extern M2C_UNK lbl_8033E578;
    extern s32 lbl_8036894C;
    s32 temp_r6;

    temp_r6 = (lbl_8036894C + 0x1F) & 0xFFFFFFE0;
    M2C_FIELD(&lbl_8033E578, s32 *, 0) = temp_r6;
    M2C_FIELD(&lbl_8033E578, s32 *, 4) = (s32) (temp_r6 + 0x80);
    M2C_FIELD(&lbl_8033E578, s32 *, 8) = (s32) (temp_r6 + 0x100);
    M2C_FIELD(&lbl_8033E578, s32 *, 0xC) = (s32) (temp_r6 + 0x180);
    M2C_FIELD(&lbl_8033E578, s32 *, 0x10) = (s32) (temp_r6 + 0x200);
    M2C_FIELD(&lbl_8033E578, s32 *, 0x14) = (s32) (temp_r6 + 0x280);
}

void fn_8023D2FC(void) {
    extern u16 *lbl_80368950;
    
    u16* ptr = lbl_80368950;
    u16 temp_r3 = ptr[0x1A6];
    ptr[0x1A6] = temp_r3 + 2;
    ptr[0x1A7] = (u16)((ptr[temp_r3+1] & 0xFF) << 8 | (ptr[temp_r3] & 0xFF00));
    ptr[0x1A6] = temp_r3 + 2;
    ptr[0x1A9] = ptr[0x1A7];
}

s32 fn_80243E84(void *arg0) {
    register u8 *temp_r5;
    s32 var_r5;

    if (!(M2C_FIELD(arg0, s32 *, 4) & 0xF)) {
        M2C_FIELD(arg0, s8 *, 8) = (s8) (((u8) *M2C_FIELD(arg0, u8 **, 0) >> 4U) & 7);
        M2C_FIELD(arg0, s8 *, 9) = (s8) (*M2C_FIELD(arg0, u8 **, 0) & 0xF);
        M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) + 1);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 2);
    }
    if (M2C_FIELD(arg0, s32 *, 4) & 1) {
        temp_r5 = M2C_FIELD(arg0, u8 **, 0);
        var_r5 = (s32) (*temp_r5 << 0x1C) >> 0x1C;
        M2C_FIELD(arg0, u8 **, 0) = (u8 *) (temp_r5 + 1);
    } else {
        var_r5 = (s32) ((*M2C_FIELD(arg0, u8 **, 0) << 0x18) & 0xF0000000) >> 0x1C;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    return var_r5;
}

void fn_80243F14(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u8 **, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, s8 *, 8) = (s8) (((u8) *M2C_FIELD(arg0, u8 **, 0) >> 4U) & 7);
    M2C_FIELD(arg0, s8 *, 9) = (s8) (*M2C_FIELD(arg0, u8 **, 0) & 0xF);
    M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) + 1);
}

u32 fn_80243F50(u32 arg0) {
    extern SynthVoice *lbl_80368970;
    extern SynthVoice *lbl_80368974;
    SynthVoice *p;

    for (p = lbl_80368974; p != NULL; p = p->next) {
        if (p->vid == (arg0 & 0x7FFFFFFF)) {
            return p->id | (arg0 & 0x80000000);
        }
    }
    for (p = lbl_80368970; p != NULL; p = p->next) {
        if (p->vid == (arg0 & 0x7FFFFFFF)) {
            return p->id | (arg0 & 0x80000000);
        }
    }
    return -1;
}

void fn_80244A84(SynthVoice *sv) {
    extern SynthVoice *lbl_80368970;
    extern SynthVoice *lbl_80368974;

    if (sv->prev != NULL) {
        sv->prev->next = sv->next;
    } else {
        lbl_80368974 = sv->next;
    }
    if (sv->next != NULL) {
        sv->next->prev = sv->prev;
    }
    if ((sv->next = lbl_80368970) != NULL) {
        lbl_80368970->prev = sv;
    }
    sv->prev = NULL;
    lbl_80368970 = sv;
    sv->state = 2;
}

void fn_80245014(u16 arg0) {
    extern void *lbl_80368970;
    extern void *lbl_80368974;
    void *var_r30;

    var_r30 = lbl_80368974;
    while (var_r30 != NULL) {
        if ((u16) M2C_FIELD(var_r30, u16 *, 0xA) == arg0) {
            fn_80244D64(M2C_FIELD(var_r30, s32 *, 0xC));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0);
    }

    var_r30 = lbl_80368970;
    while (var_r30 != NULL) {
        if ((u16) M2C_FIELD(var_r30, u16 *, 0xA) == arg0) {
            fn_80244D64(M2C_FIELD(var_r30, s32 *, 0xC));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0);
    }
}

void fn_802450A4(u32 arg0, u16 arg1) {
    extern SynthVoice lbl_8033F990[];
    u32 id;
    u32 i;

    id = fn_80243F50(arg0);
    if (!(id & 0x80000000)) {
        for (i = 0; i < 16; i++) {
            lbl_8033F990[id].unk1508[i].unk32 = arg1;
        }
        return;
    }
    lbl_8033F990[id & 0x7FFFFFFF].unkEFA |= 0x20;
    lbl_8033F990[id & 0x7FFFFFFF].unkEF8 = arg1;
}

void fn_80245188(s32 arg0) {
    extern SynthVoice *lbl_80368970;
    extern SynthVoice *lbl_80368974;
    extern SynthVoice lbl_8033F990[];
    u32 id;
    u32 vid;
    SynthVoice *p;
    SynthVoice *sv;

    vid = arg0 & 0x7FFFFFFF;
    for (p = lbl_80368974; p != NULL; p = p->next) {
        if (p->vid == vid) {
            id = p->id | (arg0 & 0x80000000);
            goto found;
        }
    }
    for (p = lbl_80368970; p != NULL; p = p->next) {
        if (p->vid == vid) {
            id = p->id | (arg0 & 0x80000000);
            goto found;
        }
    }
    id = -1;
found:
    if (!(id & 0x80000000)) {
        sv = &lbl_8033F990[id];
        if (sv->state == 2) {
            if (sv->prev != NULL) {
                sv->prev->next = sv->next;
            } else {
                lbl_80368970 = sv->next;
            }
            if (sv->next != NULL) {
                sv->next->prev = sv->prev;
            }
            sv->next = lbl_80368974;
            if (lbl_80368974 != NULL) {
                lbl_80368974->prev = sv;
            }
            sv->prev = NULL;
            lbl_80368974 = sv;
            sv->state = 1;
        }
        return;
    }
    lbl_8033F990[id & 0x7FFFFFFF].unkEFA &= ~8;
}

void fn_80245290(u32 arg0, s32 arg1, s32 arg2) {
    extern SynthVoice lbl_8033F990[];
    u32 id;

    id = fn_80243F50(arg0);
    if (id != 0xFFFFFFFF) {
        if (!(id & 0x80000000)) {
            lbl_8033F990[id].unk11C = arg1;
            lbl_8033F990[id].unk120 = arg2;
        } else {
            lbl_8033F990[id & 0x7FFFFFFF].unkEFA |= 0x10;
            lbl_8033F990[id & 0x7FFFFFFF].unkEF0 = arg1;
            lbl_8033F990[id & 0x7FFFFFFF].unkEF4 = arg2;
        }
    }
}

void fn_80247F1C(s32 arg0, u8 arg1, s32 arg2) {
    extern u16 lbl_8034BED0[];
    u8 var_r3;
    
    var_r3 = arg1;
    if (var_r3 == 0xFF) {
        var_r3 = 8;
    }
    lbl_8034BED0[((var_r3 << 3) * 0x600) + ((arg2 << 2) & 0x3FC)] = arg0;
}

s32 fn_80247F60(void *arg0) {
    extern M2C_UNK lbl_8034BED0;
    u8 temp_r0;
    u8 var_r4;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x122);
    var_r4 = 8;
    if (temp_r0 != 0xFF) {
        var_r4 = temp_r0;
    }
    return *(&lbl_8034BED0 + (var_r4 << 6) + (M2C_FIELD(arg0, u8 *, 0x123) * 4));
}

void fn_80247F94(void *arg0) {
    s32 temp_r5;
    s32 temp_r7;

    temp_r7 = M2C_FIELD(arg0, s32 *, 0x118);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x114) & 0x20000;
    if ((((temp_r7 & 0x20000) ^ 0) | (temp_r5 ^ 0)) == 0) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x133) == 1) {
            if ((((temp_r7 & 0x1000) ^ 0) | (temp_r5 ^ 0)) == 0) {
                M2C_FIELD(arg0, s32 *, 0x140) = 0;
            } else {
                M2C_FIELD(arg0, s32 *, 0x140) = (s32) M2C_FIELD(arg0, s32 *, 0x138);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x140) = (s32) M2C_FIELD(arg0, s32 *, 0x138);
        }
        M2C_FIELD(arg0, s32 *, 0x13C) = (s32) (M2C_FIELD(arg0, u8 *, 0x132) << 0x10);
    }
}

void fn_80249D6C(void *arg0)
{
    extern s32 lbl_803689B8;
    extern s32 lbl_803689BC;
    
    s32 r0 = (s32) lbl_803689B8;
    s32 r6 = (s32) lbl_803689BC;

    M2C_FIELD(arg0, s32 *, 0x28) = r6;
    M2C_FIELD(arg0, s32 *, 0x24) = r0;
    M2C_FIELD(arg0, s32 *, 0x30) = r6;
    M2C_FIELD(arg0, s32 *, 0x2C) = r0;

    fn_80249C1C(NULL, 0, 0);
    fn_80249C1C(arg0, 1, 0);
}

void fn_80249DD0(s32 arg0) {
    fn_80249C1C(0, 0);
    fn_80249C1C(arg0, 1, 0);
}

void fn_80249E14(void) {
    fn_80249C1C(2, 0);
}

void fn_8024A34C(u16 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4, s32 arg5) {
    void *r3;
    
    r3 = (void *)fn_802509D8();
    if (r3 != NULL) {
        *(u16*)((char*)r3 + 0x2) = arg0 | 0x80000000;
    }
}

s32 fn_8024A430(u16 arg0) {
    void *fn_802509D8();
    s32 fn_80256738(u8, u8, s32, M2C_UNK, s32 *);
    s32 sp8;
    s32 temp_r31;
    void *temp_r3;

    temp_r3 = fn_802509D8();
    if (temp_r3 == NULL) {
        return 0;
    }
    temp_r31 = arg0 | 0x80000000;
    if (fn_80256738(M2C_FIELD(temp_r3, u8 *, 5), M2C_FIELD(temp_r3, u8 *, 4), temp_r31, 1, &sp8) != 0) {
        return temp_r31 == sp8;
    }
    return 0;
}

s32 fn_8024A4AC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 ret;
    s32 var_r3;
    char *temp_r7;

    ret = 0;
    var_r3 = fn_80255FB0();
    while ((u32)(var_r3 + 0x10000) != 0xFFFF) {
        u8 idx = (u8)var_r3;
        temp_r29 = idx * 0x458;
        temp_r7 = (char *)lbl_803689A8 + temp_r29;
        if ((u32)var_r3 == *(u32 *)(temp_r7 + 0xF4)) {
            if (*(u64 *)(temp_r7 + 0x114) & 2) {
                fn_8025F534(arg1, idx, *(u8 *)(temp_r7 + 0x217), arg2);
            } else {
                fn_8025F534(arg1, idx, *(u8 *)(temp_r7 + 0x122), arg2);
            }
            ret = 1;
            var_r3 = *(s32 *)((char *)lbl_803689A8 + temp_r29 + 0xEC);
        } else {
            return ret;
        }
    }
    return ret;
}

s32 fn_8024A590(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 ret;
    s32 var_r3;
    char *temp_r7;

    ret = 0;
    var_r3 = fn_80255FB0();
    while ((u32)(var_r3 + 0x10000) != 0xFFFF) {
        u8 idx = (u8)var_r3;
        temp_r29 = idx * 0x458;
        temp_r7 = (char *)lbl_803689A8 + temp_r29;
        if ((u32)var_r3 == *(u32 *)(temp_r7 + 0xF4)) {
            if (*(u64 *)(temp_r7 + 0x114) & 2) {
                fn_8025FA50(arg1, idx, *(u8 *)(temp_r7 + 0x217), arg2);
            } else {
                fn_8025FA50(arg1, idx, *(u8 *)(temp_r7 + 0x122), arg2);
            }
            ret = 1;
            var_r3 = *(s32 *)((char *)lbl_803689A8 + temp_r29 + 0xEC);
        } else {
            return ret;
        }
    }
    return ret;
}

void fn_8024A674(s32 arg0, s32 arg1) {
    M2C_UNK fn_80260060(M2C_UNK, s32, s32);
    fn_80260060(7, arg0, arg1);
    fn_80260060(0xA, arg0, arg1);
    fn_80260060(0x5B, arg0, arg1);
    fn_80260060(0x80, arg0, arg1);
    fn_80260060(0x84, arg0, arg1);
}

s32 fn_8024A6F8(void) {
    if (lbl_803687F8 == 0) {
        s32 var_r3 = fn_8023A964(0xE100);
        if (var_r3 == 0) {
            lbl_803687F8 = 1;
            return 1;
        }
        return 0;
    }
    return 0;
}

s32 fn_8024AD2C(s32 arg0, u8 arg1) {
    s32 temp_r31;
    s32 var_r30;
    s32 r3;

    var_r30 = 0;
    switch (arg0) {                                 /* irregular */
    case 0:
        temp_r31 = arg1 * 0x458;
        if ((u8) (*(u8**)(lbl_803689A8 + temp_r31 + 0x11C)) == 0) {
            fn_80262510(arg1);
            fn_80258488();
            r3 = *(u32*)(lbl_803689A8 + temp_r31 + 0xF4);
            if (arg1 == r3) {
                fn_80255054();
            }
        }
        break;
    case 1:
        fn_80256FF0(arg1);
        break;
    case 2:
        var_r30 = fn_802581BC(arg1);
        break;
    case 3:
        fn_80262510(arg1);
        fn_80258488();
        break;
    }
    return var_r30;
}

u32 fn_8024B370(void) {
    s32 fn_80243F50();
    s32 temp_r3;

    temp_r3 = fn_80243F50();
    return (u32) ((-1 - temp_r3) | (temp_r3 + 1)) >> 0x1FU;
}

void fn_8024B3A0(s32 arg0) {
    M2C_UNK fn_80244D64(s32);
    M2C_UNK fn_802636F4();
    M2C_UNK fn_8026372C();
    fn_8026372C();
    fn_80244D64(arg0);
    fn_802636F4();
}

void fn_8024B3D8(s32 arg0, s32 arg1) {
    M2C_UNK fn_802450A4(s32, s32);
    fn_8026372C();
    fn_802450A4(arg0, arg1);
    fn_802636F4();
}

void fn_8024B420(s32 arg0) {
    M2C_UNK fn_80245188(s32);
    fn_8026372C();
    fn_80245188(arg0);
    fn_802636F4();
}

void fn_8024B458(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80245290(s32, s32, s32);
    fn_8026372C();
    fn_80245290(arg0, arg1, arg2);
    fn_802636F4();
}

void fn_8024B4B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_8026372C();
    fn_8024534C(arg0, arg1, arg2, arg3);
    fn_802636F4();
}

s32 fn_8024B518(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 fn_8026372C(void);
    s32 fn_80243F50(s32);
    s32 fn_8025F534(s32, s32, u8, s32);
    s32 fn_802636F4(void);
    s32 var_r31;
    u8 temp_r3;

    var_r31 = 0;
    fn_8026372C();
    temp_r3 = fn_80243F50(arg0);
    if ((u32) ((temp_r3 + 0x10000)) != -1U) {
        fn_8025F534(arg2, arg1, temp_r3, arg3);
        var_r31 = 1;
    }
    fn_802636F4();
    return var_r31;
}

u16 fn_8024B594(s32 arg0, s32 arg1) {
    extern M2C_UNK lbl_8034BDD0;
    return *(&lbl_8034BDD0 + ((arg0 << 5) & 0x1FE0) + ((arg1 * 2) & 0x1FE));
}

s32 fn_8024B5B0(u32 arg0) {
    extern void *lbl_80368974;
    s32 i;
    void *r5;
    void *r6;

    i = 8;
loop_1:
    r6 = lbl_80368974;
loop_18:
    if (r6 == NULL) {
        i -= 1;
        if (i == 0) {
            return -1;
        }
        goto loop_1;
    }
    r5 = *(void**)((u8*)r6 + 0xE64);
loop_6:
    if (r5 == NULL) {
        r5 = *(void**)((u8*)r6 + 0xE68);
loop_11:
        if (r5 == NULL) {
            r5 = *(void**)((u8*)r6 + 0xE6C);
loop_16:
            if (r5 == NULL) {
                r6 = *(void**)((u8*)r6);
                goto loop_18;
            }
            if (*(u32*)((u8*)r5 + 8) == arg0) {
                return *(s32*)((u8*)r6 + 0xC);
            }
            r5 = *(void**)((u8*)r5);
            goto loop_16;
        }
        if (*(u32*)((u8*)r5 + 8) == arg0) {
            return *(s32*)((u8*)r6 + 0xC);
        }
        r5 = *(void**)((u8*)r5);
        goto loop_11;
    }
    if (*(u32*)((u8*)r5 + 8) == arg0) {
        return *(s32*)((u8*)r6 + 0xC);
    }
    r5 = *(void**)((u8*)r5);
    goto loop_6;
}

s32 fn_8024B654(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_8024A4AC(s32, s32, s32);
    s32 temp_r31;

    fn_8026372C();
    temp_r31 = fn_8024A4AC(arg0, arg1, arg2);
    fn_802636F4();
    return temp_r31;
}

s32 fn_8024B6B4(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_8024A590(s32, s32, s32);
    s32 temp_r31;

    fn_8026372C();
    temp_r31 = fn_8024A590(arg0, arg1, arg2);
    fn_802636F4();
    return temp_r31;
}

s32 fn_8024B714(s32 arg0) {
    s32 fn_8024A6F8(s32);
    s32 temp_r31;

    fn_8026372C();
    temp_r31 = fn_8024A6F8(arg0);
    fn_802636F4();
    return temp_r31;
}

s32 fn_8024B7DC(s32 arg0) {
    s32 fn_80255FB0(s32);
    s32 var_r31;

    var_r31 = arg0;
    fn_8026372C();
    if ((u32) (fn_80255FB0(var_r31) + 0x10000) == -1U) {
        var_r31 = -1;
    }
    fn_802636F4();
    return var_r31;
}

void fn_8024B828(s32 arg0, s32 arg1, s32 arg2) {
#pragma dont_inline on
    if (arg1 == 1) {
        fn_8026372C();
        fn_8024A590(arg0, 0x1F, (s32)(16383.0f * (1.0f - (f32)(u32)(arg2 - 0x50) / 15920.0f)));
        fn_802636F4();
        fn_8026372C();
        fn_8024A4AC(arg0, 0x4F, 0x7F);
        fn_802636F4();
    } else {
        fn_8026372C();
        fn_8024A4AC(arg0, 0x4F, 0);
        fn_802636F4();
    }
}

void fn_8024B8EC(s32 arg0, s32 arg1, s32 arg2) {
#pragma dont_inline reset
    M2C_UNK fn_8024A780(s32, s32, s32, M2C_UNK, M2C_UNK);
    fn_8026372C();
    fn_8024A780(arg0, arg1, arg2, 0, -1);
    fn_802636F4();
}

void fn_8024C5C8(void) {

}

void fn_8024C5CC(u32 arg0) {
    extern u16 *lbl_8034D4B8;
    s32 i;
    u16 *entry;
    
    entry = lbl_8034D4B8;
    for (i = 0x40; i != 0; i--) {
        if ((entry[0xC / 2] == 1) || (entry[0xC / 2] == 2)) {
            u32 temp_r4 = entry[0x4C / 2];
            if (temp_r4 == arg0) {
                if (entry[0xC / 2] == 2) {
                    fn_80256DD8(temp_r4);
                }
                entry[0xC / 2] = 3;
                ((void (*)(u32, u32, u32, u32, s32))entry[0x10 / 2])(0, 0, 0, 0, entry[0x50 / 2]);
                return;
            }
        }
        entry += 0x68 / 2;
    }
}

void fn_8024C7C4(s8 *arg0, s8 *arg1) {
    extern s32 lbl_803689A4;
    if (lbl_803689A4 & 1) {
        *arg0 = 0x40;
        *arg1 = 0;
        return;
    }
    if (!(lbl_803689A4 & 2)) {
        *arg1 = 0;
    }
}

void fn_8024C7F8(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0x59) = arg1;
    M2C_FIELD(arg0, s8 *, 0x5C) = arg2;
    M2C_FIELD(arg0, s8 *, 0x5D) = arg3;
}

void fn_8024C84C(u32 arg0) {
    extern u16 *lbl_8034D4B8;
    s32 i;
    u16 *entry;
    
    entry = lbl_8034D4B8;
    for (i = 0x14; i != 0; i--) {
        if ((entry[0] == 1) || (entry[0] == 2)) {
            if (entry[0x26] == arg0) {
                if (entry[0] == 2) {
                    fn_80256DD8(entry[0x26]);
                }
                entry[0] = 3;
                ((void (*)(u32, u32, u32, u32, s32))entry[0x8])(0, 0, 0, 0, entry[0x28]);
                return;
            }
        }
        entry += 0x34;
    }
}

s32 fn_8024CE1C(s32 arg0, s32 arg1) {
    s32 temp_r3;

    if (arg1 & 1) {
        temp_r3 = (arg0 + 0xD) / 7;
        return (((((u32) ((arg0 + 0xD) - temp_r3) >> 1U) + temp_r3) & 0xFFFFFFF8) + 0x1F) & 0xFFFFFFE0;
    }
    return ((arg0 * 2) + 0x1F) & 0xFFFFFFE0;
}

s32 fn_8024FD80(u16 id, s32 arg1) {
    struct Entry {
        u16 id;
        u16 ref;
        u32 unk4;
        u32 unk8;
        u8 unkC[0x14];
    };
    struct Group {
        struct Entry *entries;
        u32 unk4;
        u32 unk8;
    };
    void fn_80262430(void *, u32, s32);
    extern struct Group lbl_803542B8[];
    extern u16 lbl_80368A18;
    struct Entry *e;
    u32 i;

    for (i = 0; i < lbl_80368A18; i++) {
        e = lbl_803542B8[i].entries;
        while (e->id != 0xFFFF) {
            if (e->id == id && e->ref != 0) {
                e->ref--;
                if (e->ref == 0) {
                    fn_80262430(e->unkC, e->unk8, arg1);
                }
                return 1;
            }
            e++;
        }
    }
    return 0;
}

s32 fn_8024FE1C(u16 arg0, void *arg1, u16 arg2) {
    s32 i;
    u16 *entry;
    u16 temp;
    
    for (i = 0; i < lbl_80368A08; i++) {
        entry = &lbl_803548B8 + (i * 0xC);
        if (arg0 == *entry) {
            entry[2] = entry[2] + 1;
            return 0;
        }
    }
    
    if (lbl_80368A08 >= 0x80) {
        return 0;
    }
    
    fn_8026372C();
    
    temp = lbl_80368A08;
    lbl_80368A08 = temp + 1;
    
    entry = &lbl_803548B8 + (temp * 0xC);
    entry[0] = arg0;
    entry[1] = arg2;
    entry[4] = (u32)arg1;
    entry[2] = 1;
    
    if (arg2 > 0) {
        u32 count = arg2 >> 3;
        if (count != 0) {
            u8 *ptr = (u8 *)arg1;
            do {
                ptr[0x9] = 0x1F;
                ptr[0x13] = 0x1F;
                ptr[0x1D] = 0x1F;
                ptr[0x27] = 0x1F;
                ptr[0x31] = 0x1F;
                ptr[0x3B] = 0x1F;
                ptr[0x45] = 0x1F;
                ptr[0x4F] = 0x1F;
                ptr += 0x50;
                count--;
            } while (count != 0);
            
            arg2 &= 7;
        }
        
        if (arg2 != 0) {
            u8 *ptr = (u8 *)arg1;
            do {
                ptr[0x9] = 0x1F;
                ptr += 0xA;
                arg2--;
            } while (arg2 != 0);
        }
    }
    
    fn_802636F4(temp);
    return 1;
}

s32 fn_80250698(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_80250734(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

s32 fn_80250744(u16 id, void *arg1) {
    struct Header {
        u32 unk0;
        u32 unk4;
        u32 unk8;
        u32 unkC;
    };
    struct Entry {
        u16 id;
        u16 ref;
        u32 unk4;
        u32 unk8;
        struct Header header;
        u32 unk1C;
    };
    struct Group {
        struct Entry *entries;
        u32 unk4;
        u16 count;
        u16 pad;
    };
    struct Info {
        u32 unk0;
        u32 unk4;
        u32 unk8;
        u32 unkC;
        u32 unk10;
        u32 unk14;
        u32 unk18;
        u8 unk1C;
    };
    void *fn_802612A0(void *, void *, u16, s32, s32 (*)(u16 *, u16 *));
    extern struct Entry lbl_803596B8;
    extern struct Group lbl_803542B8[];
    extern u16 lbl_80368A18;
    extern struct Entry *lbl_803689F0;
    extern struct Header *lbl_803689EC;
    struct Info *info = arg1;
    s32 i;

    lbl_803596B8.id = id;
    for (i = 0; i < lbl_80368A18; i++) {
        if ((lbl_803689F0 = fn_802612A0(&lbl_803596B8, lbl_803542B8[i].entries, lbl_803542B8[i].count, 0x20, fn_80250734)) != NULL && lbl_803689F0->ref != 0) {
            lbl_803689EC = &lbl_803689F0->header;
            info->unk0 = lbl_803689EC->unk0;
            info->unk4 = lbl_803689F0->unk8;
            info->unkC = 0;
            info->unk14 = lbl_803689EC->unk8;
            info->unk10 = lbl_803689EC->unk4 & 0xFFFFFF;
            info->unk18 = lbl_803689EC->unkC;
            info->unk1C = lbl_803689EC->unk4 >> 24;
            if (lbl_803689F0->unk1C != 0) {
                info->unk8 = lbl_803689F0->unk1C + (u32)lbl_803542B8[i].entries;
            } else {
                info->unk8 = 0;
            }
            return 0;
        }
    }
    return -1;
}

s32 fn_80250874(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_80250884(u16 id) {
    struct Key {
        s32 data;
        u16 id;
        u16 pad;
    };
    s32 *fn_802612A0(void *, void *, u16, s32, s32 (*)(void *, void *));
    extern struct Key lbl_803689E4;
    extern struct Key lbl_803502B8[];
    extern u16 lbl_80368A10;
    extern s32 *lbl_803689E0;

    lbl_803689E4.id = id;
    if ((lbl_803689E0 = fn_802612A0(&lbl_803689E4, lbl_803502B8, lbl_80368A10, 8, fn_80250874)) != NULL) {
        return *lbl_803689E0;
    }
    return 0;
}

s32 fn_802508E0(u16 id) {
    struct Key {
        s32 data;
        u16 id;
        u16 pad;
    };
    s32 *fn_802612A0(void *, void *, u16, s32, s32 (*)(void *, void *));
    extern struct Key lbl_803689D8;
    extern struct Key lbl_8034EEB8[];
    extern u16 lbl_80368A0E;
    extern s32 *lbl_803689D4;

    lbl_803689D8.id = id;
    if ((lbl_803689D4 = fn_802612A0(&lbl_803689D8, lbl_8034EEB8, lbl_80368A0E, 8, fn_80250874)) != NULL) {
        return *lbl_803689D4;
    }
    return 0;
}

s32 fn_8025093C(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_802509C8(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

void fn_802511F8(void *arg0, u32 *arg1) {
    M2C_UNK fn_80250B58(void *, u32 *);
    u32 fn_802575A0(void *);
    M2C_UNK fn_80260174(u8, u8, u8);
    u16 temp_r3_2;
    u16 var_r0;
    u32 temp_r3;

    temp_r3 = *arg1;
    if ((temp_r3 >> 0x18U) == 0) {
        M2C_FIELD(arg0, u16 *, 0x12E) = (u16) (M2C_FIELD(arg0, u16 *, 0x12E) + (s8) (u8) (temp_r3 >> 8U));
    } else {
        M2C_FIELD(arg0, u16 *, 0x12E) = (u16) (M2C_FIELD(arg0, u8 *, 0x131) + (s8) (u8) (temp_r3 >> 8U));
    }
    temp_r3_2 = M2C_FIELD(arg0, u16 *, 0x12E);
    if ((s16) temp_r3_2 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 0x7F;
        if (temp_r3_2 <= 0x7FU) {
            var_r0 = temp_r3_2;
        }
    }
    M2C_FIELD(arg0, u16 *, 0x12E) = var_r0;
    M2C_FIELD(arg0, s8 *, 0x130) = (s8) ((u32) *arg1 >> 0x10U);
    if (fn_802575A0(arg0) != 0U) {
        fn_80260174(M2C_FIELD(arg0, u8 *, 0x121), M2C_FIELD(arg0, u8 *, 0x122), (u8) M2C_FIELD(arg0, u16 *, 0x12E));
    }
    *arg1 = 4;
    fn_80250B58(arg0, arg1);
}

void fn_802514D0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x9C) > 0) {
        M2C_FIELD(arg0, s32 *, 0x9C) = M2C_FIELD(arg0, s32 *, 0x9C) - 1;
        if (M2C_FIELD(arg0, s32 *, 0x9C) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        }
    }
}

void fn_80251A44(SynthVoice *sv, u32 *arg1) {
    extern f32 lbl_8029FF7C[];
    extern s32 lbl_8029F1CC[];
    extern u8 lbl_8029FB7C[];
    extern f32 lbl_8036C260;
    struct {
        s32 unk0;
        s32 unk4;
        s16 unk8;
        s16 unkA;
        s32 unkC;
        s32 unk10;
    } params;
    f32 vol;

    vol = lbl_8029FF7C[fn_8025FC64(arg1[0] >> 24, M2C_FIELD(sv, u8 *, 0x121), M2C_FIELD(sv, u8 *, 0x122)) >> 7];
    params.unk0 = lbl_8029F1CC[fn_8025FC64(arg1[0] >> 8, M2C_FIELD(sv, u8 *, 0x121), M2C_FIELD(sv, u8 *, 0x122)) >> 7];
    params.unk4 = lbl_8029F1CC[fn_8025FC64(arg1[0] >> 16, M2C_FIELD(sv, u8 *, 0x121), M2C_FIELD(sv, u8 *, 0x122)) >> 7];
    params.unk8 = 0xC1 - lbl_8029FB7C[fn_8022C568(lbl_8036C260 * vol)];
    params.unkA = lbl_8029F1CC[fn_8025FC64(arg1[1], M2C_FIELD(sv, u8 *, 0x121), M2C_FIELD(sv, u8 *, 0x122)) >> 7];
    params.unkC = 0x80000000;
    params.unk10 = 0x80000000;
    fn_80261934(sv->unkF4, &params, 2);
    M2C_FIELD(sv, u32 *, 0x118) |= 0x100;
}

void fn_80251DEC(Voice *arg0, u32 *arg1) {
    u32 time;
    s32 delta;

    time = arg1[0] >> 16;
    arg0->unk18C = time;
    fn_8026146C((s32 *)&arg0->unk18C);
    delta = (s8)arg1[1] << 16;
    arg0->unk174 = (arg1[0] << 8) & 0xFF0000;
    arg0->unk184 = arg0->unk174 + delta;
    if (arg0->unk18C != 0) {
        arg0->unk17C = delta / (s32)time;
    } else {
        arg0->unk17C = delta;
    }
    arg0->flags |= 0x2000;
}

void fn_80251E88(Voice *arg0, u32 *arg1) {
    u32 time;
    s32 delta;

    time = arg1[0] >> 16;
    arg0->unk190 = time;
    fn_8026146C((s32 *)&arg0->unk190);
    delta = (s8)arg1[1] << 16;
    arg0->unk178 = (arg1[0] << 8) & 0xFF0000;
    arg0->unk188 = arg0->unk178 + delta;
    if (arg0->unk190 != 0) {
        arg0->unk180 = delta / (s32)time;
    } else {
        arg0->unk180 = delta;
    }
    arg0->flags |= 0x2000;
}

s32 fn_80252058(s32 arg0) {
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    u32 temp_r6;
    s32 temp_r7;
    s32 temp_r10;
    
    var_r3 = 0x8034C110;
    if (arg0 < 0) {
        return 0;
    } else if (arg0 > 0xFF) {
        return 0;
    }
    
    var_r5 = 0;
    do {
        temp_r7 = (u32)*((u8*)var_r3);
        var_r4 = (temp_r7 & 0xF) + ((temp_r7 >> 4) & 0xF);
        if (var_r4 > 0xF) {
            var_r5 += 0x10;
        }
        var_r5 += var_r4;
        var_r3 += 1;
    } while (var_r5 < arg0);
    
    temp_r6 = var_r5 - arg0;
    temp_r10 = (temp_r6 & 0xF) + ((temp_r6 >> 4) & 0xF);
    if (temp_r10 > 0xF) {
        return 0x8034C120 + (var_r5 >> 4);
    }
    return 0x8034C120 + (var_r5 >> 4) + temp_r10;
}

void fn_80252460(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x224, arg1, 0x80000, 1);
}

void fn_80252668(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x290, arg1, 0x200000, 8);
}

void fn_80252B7C(void *arg0, void *arg1) {
    u32 r7;
    u32 r8;
    s32 r5;
    u32 r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    r7 = *(u32*)((char*)arg0 + 0x114);
    r8 = *(u32*)((char*)arg0 + 0x118);
    if ((((r8 & 0x20000000) ^ 0) | ((r7 & 0) ^ 0)) == 0) {
        *(u32*)((char*)arg0 + 0x118) = (r8 | 0x20000000);
        *(u32*)((char*)arg0 + 0x114) = r7;
    } else {
        var_r6 = *(u8*)((char*)arg1 + 0x4);
    }
    r0 = *(u32*)((char*)arg1 + 0x0);
    temp_r5 = (r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        r5 = temp_r5 - (((s8) ((u32) *(u32*)((char*)arg1 + 0x4) >> 0x10U) << 8) / 100);
    } else {
        r5 = temp_r5 + (((s8) ((u32) *(u32*)((char*)arg1 + 0x4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) *(u32*)((char*)arg1 + 0x4) >> 8U);
    fn_8025FFC8((char*)arg0 + 0x344, (u8) (r0 >> 8U), r5, var_r6, temp_r8_2 != 0, temp_r8_2);
    *(u32*)((char*)arg0 + 0x220) = (*(u32*)((char*)arg0 + 0x220) | 0x100);
}

void fn_80252C80(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x38C, arg1, 0x40000000, 0x400);
}

void fn_80252D84(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x3B0, arg1, 0x80000000, 0x800);
}

void fn_80252E88(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x26C, arg1, 0x4000000, 4);
}

void fn_80252F8C(void *arg0, void *arg1) {
    u32 temp_r0;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u8 temp_r6;
    u8 temp_r8_2;
    
    if (((*(u32*)((u8*)arg0 + 0x114) & 0x08000000) != 0) || 
        ((*(u32*)((u8*)arg0 + 0x118) & 0x08000000) == 0)) {
        
        *(u32*)((u8*)arg0 + 0x118) = (*(u32*)((u8*)arg0 + 0x118) | 0x08000000);
        *(u32*)((u8*)arg0 + 0x114) = *(u32*)((u8*)arg0 + 0x114);
    } else {
        temp_r6 = *(u8*)((u8*)arg1 + 0x4);
    }
    
    temp_r0 = *(u32*)((u8*)arg1 + 0x0);
    temp_r5 = (temp_r0 & 0xFFFF0000) >> 16;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - ((((s8)(temp_r0 >> 16)) << 8) / 100);
    } else {
        var_r5 = temp_r5 + ((((s8)(temp_r0 >> 16)) << 8) / 100);
    }
    
    temp_r8_2 = (u8)(temp_r0 >> 8);
    fn_8025FFC8((u8*)arg0 + 0x2B4, (u8)(temp_r0 >> 8), var_r5, temp_r6, temp_r8_2 != 0, temp_r8_2);
    
    *(u32*)((u8*)arg0 + 0x220) |= 0x10;
}

void fn_80253090(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x3D4, arg1, 0x10000000, 0x1000);
}

void fn_80253194(void *arg0, void *arg1) {
    u32 temp_r7;
    u32 temp_r5;
    s32 temp_r3;
    u8 temp_r8;
    u32 temp_r0;
    s32 var_r5;
    u32 temp_r4;
    u32 r31_2;

    temp_r7 = *(u32 *)((u8 *)arg0 + 0x118);
    temp_r5 = *(u32 *)((u8 *)arg0 + 0x114);
    
    if ((temp_r7 & 0x40) == 0 || (temp_r5 & 0) == 0) {
        *(u32 *)((u8 *)arg0 + 0x118) = temp_r7 | 0x40;
        *(u32 *)((u8 *)arg0 + 0x114) = temp_r5;
    } else {
        temp_r0 = *(u32 *)((u8 *)arg1 + 0x4);
        temp_r8 = (u8)(temp_r0 >> 8U);
        r31_2 = 0x51EC7AE1;
        temp_r3 = ((s32)r31_2 * (s32)((temp_r0 & 0xFFFF0000) >> 16)) >> 19;
        if (temp_r3 < 0) {
            s32 r4_val = (s32)(((u32)(temp_r0 >> 16)) << 8);
            r4_val = r4_val * (s32)r31_2;
            r4_val >>= 19;
            var_r5 = temp_r3 - r4_val;
        } else {
            s32 r4_val = (s32)(((u32)(temp_r0 >> 16)) << 8);
            r4_val = r4_val * (s32)r31_2;
            r4_val >>= 19;
            var_r5 = temp_r3 + r4_val;
        }
        
        fn_8025FFC8((u8 *)arg0 + 0x3F8, 
                    (u8)(temp_r0 >> 8U), 
                    var_r5,
                    temp_r8 != 0,
                    temp_r8,
                    0);
    }
    *(u32 *)((u8 *)arg0 + 0x220) |= 0x2000;
}

void fn_80253694(unsigned char arg0, unsigned char arg1, unsigned char arg2, int arg3) {
    // Simple version to avoid header issues
    return;
}

s16 fn_802537F8(s32 arg0, u32 arg1, s32 arg2) {
    u16 fn_80260F18(s32);
    extern u16 lbl_8034CB74[];
    u32 temp_r0;
    u16 var_r3;

    if (arg1 != 0U) {
        var_r3 = fn_80260F18(arg2);
    } else {
        temp_r0 = arg2 & 0x1F;
        if (temp_r0 < 0x10U) {
            u32 addr = arg0 + ((temp_r0 * 4) & 0x3FC) + 0xAC;
            var_r3 = *(u16*) addr;
        } else {
            var_r3 = *(u16*) (lbl_8034CB74 + ((temp_r0 * 4) & 0x3FC) - 0x40);
        }
    }
    return (s16) var_r3;
}

void fn_80253E10(void *arg0, u32 *arg1) {
    u32 temp_r4;
    s32 temp_r4_2;

    temp_r4 = *arg1;
    if ((u8)(temp_r4 >> 0x10U) == 0) {
        *(u32 *)((char *)arg0 + 0xAC) = *(u32 *)((char *)arg0 + 0xF8);
    } else {
        *(u32 *)((char *)arg0 + 0xAC) = *(u32 *)((char *)arg0 + 0x108);
    }
}

void fn_80253E90(void) {
    _savegpr_26();
    // Function body not fully understood by decompiler yet.
    // Placeholder implementation to match the known parts
    // TODO: Implement the remaining logic correctly
    _restgpr_26();
}

s32 fn_80255100(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    return (((arg0 >> 0x10) * ((arg1 & 0xFFFF) + 1)) + ((arg0 & 0xFFFF) * (arg1 >> 0x10))) & 0xFFFF;
}

void fn_802551F0(void *arg0, u32 arg1) {
    if (arg1 != 0) {
        ((u32*)arg0)[0x45] = ((u32*)arg0)[0x45] | 0x100;
        return;
    }
    
    if (((u32*)arg0)[0xD] != 0) {
        u32 temp_r4 = ((u32*)arg0)[0x45];
        u32 temp_r6 = ((u32*)arg0)[0x46];
        
        if ((temp_r4 & 0x400) || (temp_r6 & 0)) {
            if (((u8*)arg0)[0x68] != 0 && ((u32*)arg0)[0x14] != 0) {
                ((u32*)arg0)[0xE] = ((u32*)arg0)[0x17];
                ((u32*)arg0)[0xD] = ((u32*)arg0)[0x14];
                ((u32*)arg0)[0x14] = 0;
                fn_8025539C(arg0);
                return;
            }
        } else {
            if (((u32*)arg0)[0x46] & 4) {
                fn_8025539C(arg0);
            }
        }
    }
    
    ((u32*)arg0)[0x46] = ((u32*)arg0)[0x46] & ~0;
    ((u32*)arg0)[0x45] = ((u32*)arg0)[0x45] & ~0x500;
}

void fn_802559D8(void) {
    u8* ptr;
    u32 count;
    s32 i;
    
    lbl_80368A34 = 0;
    lbl_80368A30 = 0; 
    lbl_80368A2C = 0;
    lbl_80368A28 = 0;
    count = 0U;
    
    ptr = &lbl_8034C110[0x34];
    i = 0;
    do {
        *(ptr + i) = 0;
        i += 0x458;
        count++;
        if (count >= lbl_8034C110[0x210]) break;
    } while (1);
    
    ptr = &lbl_8034C110[0x4C];
    i = 0;
    do {
        *(ptr + i) = 2;
        i += 0x458;
        count++;
        if (count >= lbl_8034C110[0x210]) break;
    } while (1);
    
    ptr = &lbl_8034C110[0xAA];
    i = 0;
    do {
        *(ptr + i) = 0;
        i += 0x458;
        count++;
        if (count >= lbl_8034C110[0x210]) break;
    } while (1);
}

void* fn_80255A40(void)
{
    s32* p = (s32*)lbl_8034C110;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    return (void*)p;
}

s32 fn_80255E88(void *arg0) {
    M2C_FIELD(arg0, void **, 0xFC) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 8);
}

u32 fn_80255E9C(SynthVoice *sv, u32 isMaster) {
    extern VidList *lbl_80368A44;
    extern VidList *lbl_80368A40;
    u32 vid;
    VidList *nvl;
    VidList *vl;
    VidList *lvl;

    vid = GetNewVid();
restart:
    lvl = NULL;
    for (vl = lbl_80368A44; vl != NULL; vl = vl->next) {
        if (vl->vid > vid) {
            break;
        }
        if (vl->vid == vid) {
            vid = GetNewVid();
            if (vid < vl->vid) {
                goto restart;
            }
        }
        lvl = vl;
    }
    nvl = lbl_80368A40;
    if (nvl == NULL) {
        return -1;
    }
    lbl_80368A40 = nvl->next;
    if (lbl_80368A40 != NULL) {
        lbl_80368A40->prev = NULL;
    }
    if (lvl == NULL) {
        lbl_80368A44 = nvl;
    } else {
        lvl->next = nvl;
    }
    nvl->prev = lvl;
    nvl->next = vl;
    if (vl != NULL) {
        vl->prev = nvl;
    }
    nvl->vid = vid;
    nvl->root = sv->unkF4;
    sv->unkFC = isMaster ? nvl : NULL;
    sv->unkF8 = nvl;
    return isMaster ? vid : sv->unkF4;
}

s32 fn_80256738(s32 *arg4) {
    s32 temp_r3;
    
    temp_r3 = fn_802562A0();
    if (temp_r3 == -1) {
        return 0;
    }
    if (lbl_8035A510[temp_r3] == 1) {
        return 0;
    }
    *arg4 = *(s32*)(lbl_803689A8 + (temp_r3 * 0x458) + 0x100);
    return 1;
}

void fn_80257224(void) {
    if (lbl_8036C368 < 0.0) {
        lbl_8036C368 = 0.0;
    }
}

s32 fn_802575A0(void *arg0) {
    extern u16 lbl_8035A610[];
    extern u16 lbl_8035A650[];
    s32 temp_r4;
    u8 temp_r0;
    u8 temp_r5;

    temp_r4 = *(s32*) ((u8*) arg0 + 0xF4);
    if ((u32) (temp_r4 + 0x10000) != -1U) {
        temp_r5 = *(u8*) ((u8*) arg0 + 0x121);
        if (temp_r5 != 0xFF) {
            temp_r0 = *(u8*) ((u8*) arg0 + 0x122);
            if (temp_r0 == 0xFF) {
                if (*(u8*) (lbl_8035A610 + (u8) temp_r4) == (u8) temp_r4) {
                    return 1;
                }
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return 0;
            }
            if ((u8) temp_r4 == *(u8*) (lbl_8035A650 + (((temp_r0 * 0x10) & 0xFF0) + temp_r5))) {
                return 1;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return 0;
        }
    }
    return 0;
}

void fn_80257614(void *arg0) {
    extern M2C_UNK lbl_8035A610;
    extern M2C_UNK lbl_8035A650;
    s32 temp_r4;
    u8 temp_r0;
    u8 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF4);
    if ((u32) (temp_r4 + 0x10000) != -1U) {
        temp_r5 = M2C_FIELD(arg0, u8 *, 0x121);
        if (temp_r5 != 0xFF) {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x122);
            if (temp_r0 == 0xFF) {
                *(&lbl_8035A610 + (u8) temp_r4) = (u8) temp_r4;
                return;
            }
            *(&lbl_8035A650 + ((temp_r0 * 0x10) & 0xFF0) + temp_r5) = (u8) temp_r4;
        }
    }
}

void fn_802576DC(void) {
    u8 *ptr;
    int i, j;
    
    // First loop: fill 128 bytes (16 bytes at a time, 8 times)
    ptr = (u8 *)0x8035A650;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 16; j++) {
            ptr[j] = 0xFF;
        }
        ptr += 16;
    }
    
    // Second loop: fill 64 bytes (16 bytes at a time, 4 times)
    ptr = (u8 *)0x8035A610;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 16; j++) {
            ptr[j] = 0xFF;
        }
        ptr += 16;
    }
}

s32 fn_80257820(u16 arg0) {
    extern f32 lbl_8036C268;
    return (s32) (lbl_8036C268 * (f32) arg0);
}

void fn_80257C04(void *arg0) {
    M2C_UNK fn_80257998();
    M2C_FIELD(arg0, s8 *, 1) = 0;
    fn_80257998();
}

s32 fn_80257C2C(void *arg0, u32 arg1) {
    u32 fn_8022C568(f32, f32, f32);
    extern M2C_UNK lbl_8029FB7C;
    extern f32 lbl_8036C298;
    f32 temp_f2;
    u32 temp_r3;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    switch ((s32) temp_r0) {                        /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 1) = 4U;
        M2C_FIELD(arg0, u32 *, 4) = arg1;
        if (arg1 == 0) {
            M2C_FIELD(arg0, u32 *, 4) = 1U;
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            return 1;
        }
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) -(s32) ((u32) M2C_FIELD(arg0, u32 *, 8) / arg1);
block_13:
    default:
        return 0;
    case 1:
        if (((u8) M2C_FIELD(arg0, u8 *, 0x26) == 0) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 1)) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((0xC1 - *(&lbl_8029FB7C + ((s32) M2C_FIELD(arg0, u32 *, 8) >> 0x15))) << 0x10);
        }
        temp_f2 = lbl_8036C298 * (f32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, u32 *, 4) = (u32) (fn_8022C568(temp_f2 * (f32) arg1, temp_f2, lbl_8036C298) >> 0xCU);
        M2C_FIELD(arg0, u8 *, 1) = 4U;
        temp_r3 = M2C_FIELD(arg0, u32 *, 4);
        if (temp_r3 == 0) {
            M2C_FIELD(arg0, u32 *, 4) = 1U;
            M2C_FIELD(arg0, u32 *, 8) = 0U;
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            return 1;
        }
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) -(s32) ((u32) M2C_FIELD(arg0, s32 *, 0xC) / temp_r3);
        goto block_13;
    }
}

s32 fn_8025807C(s32 arg0, s32 arg1, s32 arg2) {
    u32 fn_80257EE4(s32, s32, s32);
    s32 i;

    for (i = 0; i < 15; i++) {
        if (fn_80257EE4(arg0, arg1, arg2) != 0) {
            return 1;
        }
    }
    return 0;
}

void fn_80258100(void) {
    extern M2C_UNK lbl_8035A6D0;
    M2C_UNK *var_r5;
    s32 var_ctr;

    var_r5 = &lbl_8035A6D0;
    M2C_FIELD(&lbl_8035A6D0, s8 *, 0) = 0;
    var_ctr = 2;
    do {
        M2C_FIELD(var_r5, s8 *, 0xB08) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB09) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0A) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0B) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0C) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0D) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0E) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0F) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB10) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB11) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB12) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB13) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB14) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB15) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB16) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB17) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB18) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB19) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1A) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1B) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1C) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1D) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1E) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1F) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB20) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB21) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB22) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB23) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB24) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB25) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB26) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB27) = 0xFF;
        var_r5 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(&lbl_8035A6D0, s16 *, 0xB48) = 0;
    M2C_FIELD(&lbl_8035A6D0, s32 *, 0xB4C) = 0;
}

void fn_80258A98(s32 arg0, s32 arg1) {
    extern s32 lbl_8035B220[];
    extern s32 *lbl_80368A60;
    extern s32 *lbl_80368A5C;
    extern s32 *lbl_80368A58;

    lbl_80368A60 = NULL;
    lbl_8035B220[1] = -2;
    M2C_FIELD(lbl_8035B220, u16 *, 8) = 0;
    lbl_8035B220[0x183] = arg0;
    lbl_8035B220[0x185] = arg0;
    lbl_8035B220[0x184] = arg0 + arg1;
    lbl_8035B220[0] = 0;
    lbl_80368A60 = lbl_8035B220;
    lbl_80368A58 = NULL;
    lbl_80368A5C = lbl_8035B220;
}

void *fn_80258AD8(void) {
    extern u16 lbl_8035B220[];
    return &lbl_8035B220[0x60C];
}

void fn_80258D74(void) {
    M2C_UNK fn_80262410();
    fn_80262410();
}

s32 fn_80259430(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    u32 var_r3;
    u32 var_r4;
    
    if (arg0 < 0) {
        arg0 = -arg0;
    }
    if (arg1 < 0) {
        arg1 = -arg1;
    }
    
    if (arg0 > arg1) {
        temp_r3 = arg0;
        temp_r4 = arg1;
    } else {
        temp_r3 = arg1;
        temp_r4 = arg0;
    }
    
    temp_r5 = temp_r3 >> 1;
    temp_r6 = temp_r4 >> 1;
    
    temp_r7 = 0;
    
    while (temp_r3 != 0) {
        if ((temp_r3 & 1) != 0) {
            temp_r7 += temp_r4;
        }
        
        temp_r3 >>= 1;
        temp_r4 <<= 1;
        
        if (temp_r3 == 0) {
            break;
        }
    }
    
    var_r3 = temp_r7;
    var_r4 = temp_r6;
    
    return temp_r5 + temp_r6 + var_r3 + var_r4;
}

s32 fn_80259584(u16 gid, u16 sid, s32 arg2, s32 arg3, s32 arg4) {
    extern GroupNode *lbl_80368A60;
    s32 fn_80243FB8(void *, void *, GroupItem *, s32, s32, s32, u16);
    s32 ret;
    GroupNode *node;
    s32 i;
    GroupData *data;
    u32 base;
    GroupItem *item;
    void *b;
    void *a;

    node = lbl_80368A60;
    while (node != NULL) {
        for (i = 0; i < node->count; i++) {
            if (node->entries[i].data->id == gid) {
                data = node->entries[i].data;
                if (data->type == 0) {
                    base = node->entries[i].base;
                    a = (void *)(base + data->unk1C);
                    b = (void *)(base + data->unk20);
                    for (item = (GroupItem *)(base + data->unk24); item->id != 0xFFFF; item++) {
                        if (item->id == sid) {
                            fn_8026372C();
                            ret = fn_80243FB8(a, b, item, arg2, arg3, arg4, gid);
                            fn_802636F4();
                            goto done;
                        }
                    }
                    ret = -1;
                } else {
                    ret = -1;
                }
                goto done;
            }
        }
        node = node->next;
    }
    ret = -1;
done:
    return ret;
}

void fn_80259A5C(void) {
    M2C_UNK DCFlushRangeNoSync(s32, M2C_UNK);
    M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
    extern s32 lbl_80368A94;
    memset(lbl_80368A94, 0, 0x100);
    DCFlushRangeNoSync(lbl_80368A94, 0x100);
}

s32 fn_80259BE4(s16 *arg0, s16 *arg1, u16 *arg2, u16 arg3, s32 arg4, s32 arg5) {
    u16 temp_r9;
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r3;
    s32 temp_r3_2;
    
    temp_r9 = *arg2;
    if (arg3 != temp_r9) {
        temp_r0 = arg3 - temp_r9;
        if ((temp_r0 >= 0x20) && (temp_r0 < 0xA0)) {
            temp_r0_2 = temp_r0 >> 5;
            if (temp_r0_2 < 5) {
                temp_r3 = temp_r0_2 * 2;
                ((u16*)arg4)[temp_r3] = ((u16*)arg4)[temp_r3] | arg5;
            }
            *arg1 = 1;
            *arg2 += temp_r0_2 << 5;
            return 1;
        }
        if ((temp_r0 <= -0x20) && (temp_r0 > -0xA0)) {
            temp_r0_3 = -temp_r0 >> 5;
            if (temp_r0_3 < 5) {
                temp_r3_2 = temp_r0_3 * 2;
                ((u16*)arg4)[temp_r3_2] = ((u16*)arg4)[temp_r3_2] | arg5;
            }
            *arg1 = 0xFFFF;
            *arg2 -= temp_r0_3 << 5;
            return 1;
        }
        if ((arg3 == 0) && (temp_r0 > -0x20)) {
            *arg2 = 0;
            *arg0 = 0;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        *arg1 = 0;
        return 0;
    }
    *arg1 = 0;
    return 0;
}

void fn_80259CD8(u16 *arg0, u16 *arg1, s16 arg2) {
    *arg0 = (arg2 - (s16) *arg1) / 160;
    *arg1 += (s16) *arg0 * 0xA0;
}

void fn_80259D20(void *arg0) {
    u32 temp_r4;
    u32 var_r5;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) == 0U) {
        if ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 8) != 2) {
            var_r5 = (M2C_FIELD(arg0, s32 *, 0xE4) << 5);
        } else {
            var_r5 = 0x200000;
        }
        temp_r4 = M2C_FIELD(arg0, u32 *, 0xE0);
        M2C_FIELD(arg0, u32 *, 0xE0) = (u32) (temp_r4 + (var_r5 << 0x10));
        if (temp_r4 > (u32) M2C_FIELD(arg0, u32 *, 0xE0)) {
            s32 temp_r0;
            temp_r0 = (var_r5 >> 0x10U);
            M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (temp_r0 + M2C_FIELD(arg0, s32 *, 0xDC) + 1);
            return;
        }
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xDC);
        var_r5 = (var_r5 >> 0x10U);
        M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (temp_r4 + var_r5);
    }
}

void fn_80259D94(s32 *arg0, s16 *arg1, s32 *arg2) {
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r0;

    temp_r0 = *arg2;
    if (temp_r0 <= -0xA0) {
        if (temp_r0 <= -0xC80) {
            var_r0 = 0x14;
        } else {
            var_r0 = (s16) (-temp_r0 / 160);
        }
        *arg1 = var_r0;
    } else if (temp_r0 >= 0xA0) {
        if (temp_r0 >= 0xC80) {
            var_r0_2 = -0x14;
        } else {
            var_r0_2 = (s16) (-temp_r0 / 160);
        }
        *arg1 = var_r0_2;
    } else {
        *arg1 = 0;
    }
    *arg0 = *arg2;
    *arg2 += *arg1 * 0xA0;
}

void fn_8025C9E0(void *arg0, u8 arg1) {
    M2C_UNK fn_8025CA80();
    extern M2C_UNK lbl_8035B838;
    void *temp_r0;
    void *temp_r4;

    if ((u8) M2C_FIELD(arg0, u8 *, 0xF0) != 0) {
        fn_8025CA80();
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) | 0x20);
    }
    M2C_FIELD(arg0, s8 *, 0xF1) = 0;
    temp_r4 = &lbl_8035B838 + (arg1 * 0xBC);
    temp_r0 = M2C_FIELD(temp_r4, void **, 0x48);
    M2C_FIELD(arg0, void **, 0xC) = temp_r0;
    if (temp_r0 != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x10) = arg0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r4, void **, 0x48) = arg0;
    M2C_FIELD(arg0, s8 *, 0xF2) = 0;
    M2C_FIELD(arg0, u8 *, 0xF0) = 1U;
    M2C_FIELD(arg0, u8 *, 0xF3) = arg1;
}

void fn_8025CA80(void *arg0) {
    extern u16 lbl_8035B838;
    void *temp_r4;

    if ((u8) M2C_FIELD(arg0, u8 *, 0xF0) != 0) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x10);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0xC);
        } else {
            temp_r4 = &lbl_8035B838 + ((u32) M2C_FIELD(arg0, u8 *, 0xF3) * 0xBC);
            M2C_FIELD(temp_r4, void **, 0x48) = (void *) M2C_FIELD(arg0, void **, 0xC);
        }
        if (M2C_FIELD(arg0, void **, 0xC) != NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0x10);
        }
        M2C_FIELD(arg0, u8 *, 0xF0) = 0U;
    }
}

void fn_8025EC10(u32 arg0) {
    extern s8 lbl_80368AAF;
    extern s8 lbl_80368AB0;
    extern s8 lbl_80368AB1;
    extern s8 lbl_80368AB2;
    extern s32 lbl_80368AB4;
    extern s32 lbl_80368AB8;
    extern s32 lbl_80368ABC;
    extern s8 lbl_80368AC0;
    lbl_80368ABC = 0;
    lbl_80368AB8 = 0;
    lbl_80368AB4 = 0;
    lbl_80368AB2 = 1;
    lbl_80368AB1 = 3;
    lbl_80368AC0 = 0;
    lbl_80368AB0 = (arg0 >> 1U) & 1;
    lbl_80368AAF = (arg0 >> 2U) & 1;
}

s32 fn_8025EC48(u8 voices, u8 music, u8 sfx, u8 studios, u32 flags, u32 aramSize) {
#pragma dont_inline on
    s32 fn_80261620(u32 *, u8, u8, u32);
    s32 fn_80262AF0(void);
    s32 fn_80262B14(u32);
    void fn_80258A98(s32, s32);
    void fn_80250A74(s32, u32);
    void fn_80247D74(void);
    void fn_8024ADFC(u32, u8);
    void fn_8024BB90(void);
    void fn_80258100(void);
    extern u8 lbl_80368978;
    extern u8 lbl_803689B0;
    u32 rate;
    s32 ret;
    u8 num;
    s32 base;

    lbl_80368978 = 0;
    if (voices <= 64) {
        lbl_8034C110[0x210] = voices;
    } else {
        lbl_8034C110[0x210] = 64;
    }
    if (studios <= 8) {
        lbl_8034C110[0x213] = studios;
    } else {
        lbl_8034C110[0x213] = 8;
    }
    rate = 32000;
    lbl_8034C110[0x211] = music;
    lbl_8034C110[0x212] = sfx;
    ret = fn_80261620(&rate, lbl_8034C110[0x210], lbl_8034C110[0x213], flags);
    if (ret == 0) {
        base = fn_80262AF0();
        num = lbl_8034C110[0x210];
        fn_80258A98(base, fn_80262B14(aramSize));
        fn_80250A74(0, aramSize);
        fn_80247D74();
        lbl_803689B0 = 0;
        fn_8024ADFC(32000, num);
        fn_8024BB90();
        fn_80258100();
        fn_8025EC10(flags);
        ret = 0;
        lbl_80368978 = 1;
    }
    return ret;
}

u8 fn_8025ED80(void) {
#pragma dont_inline reset
    extern u8 lbl_80368978;
    return lbl_80368978;
}

void fn_8025ED88(f32 *arg0, f32 *arg1, f32 *arg2) {
    arg2[0] = (arg0[0x24] + (arg0[8] * arg1[8])) + ((arg0[0] * arg1[0]) + (arg0[4] * arg1[4]));
    arg2[1] = (arg0[0x28] + (arg0[0x14] * arg1[8])) + ((arg0[0xC] * arg1[0]) + (arg0[0x10] * arg1[4]));
    arg2[2] = (arg0[0x2C] + (arg0[0x20] * arg1[8])) + ((arg0[0x18] * arg1[0]) + (arg0[0x1C] * arg1[4]));
}

void fn_8025EE34(f32 *arg0) {
    extern f32 lbl_8036C330;
    extern f64 lbl_8036C338;
    extern f64 lbl_8036C340;
    f32 temp_f1;
    f32 temp_f0;
    f32 temp_f3;
    f32 var_f1;
    f32 sp8;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;

    temp_f1 = arg0[0];
    temp_f0 = arg0[1];
    temp_f3 = arg0[2];
    var_f1 = (temp_f3 * temp_f3) + ((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
    if (var_f1 > lbl_8036C330) {
        temp_f2 = __frsqrte(var_f1);
        temp_f2_2 = lbl_8036C338 * temp_f2 * (lbl_8036C340 - ((f64) var_f1 * (temp_f2 * temp_f2)));
        temp_f2_3 = lbl_8036C338 * temp_f2_2 * (lbl_8036C340 - ((f64) var_f1 * (temp_f2_2 * temp_f2_2)));
        sp8 = (f32) ((f64) var_f1 * (lbl_8036C338 * temp_f2_3 * (lbl_8036C340 - ((f64) var_f1 * (temp_f2_3 * temp_f2_3)))));
        var_f1 = sp8;
    }
    arg0[0] = arg0[0] / var_f1;
    arg0[1] = arg0[1] / var_f1;
    arg0[2] = arg0[2] / var_f1;
}

void fn_8025EEE8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    void *temp_r4;

    temp_r3 = (arg0 << 2) & 0x3FC;
    temp_r4 = lbl_8035D118 + ((arg1 << 6) & 0x3FC0);
    *(u16*)((char*)temp_r4 + temp_r3) |= arg2;
}

void *fn_8025FF28(u8 arg0, u8 arg1) {
    extern u16 lbl_80363C18;
    extern u16 lbl_80361618;
    if (arg1 == 0xFF) {
        return ((u16*)((u8*)&lbl_80363C18 + (arg0 * 9)));
    }
    return ((u16*)((u8*)&lbl_80361618 + (arg1 * 0x90) + (arg0 * 9)));
}

void fn_8025FF6C(u8 arg0, u8 arg1) {
    extern u8 lbl_80361618[];
    extern u8 lbl_80363C18[];
    extern s32 lbl_80368AC8;
    extern s32 lbl_80368ACC;
    
    char *var_r3;

    if (arg1 != 0xFF) {
        var_r3 = (char *)&lbl_80361618 + (arg1 * 0x90) + (arg0 * 9);
    } else {
        var_r3 = (char *)&lbl_80363C18 + (arg0 * 9);
    }
    *(u8 *)var_r3 = 2;
    *(s32 *)((char *)var_r3 + 1) = lbl_80368ACC;
    *(s32 *)((char *)var_r3 + 5) = lbl_80368AC8;
}

void fn_8025FFC8(void *arg0, u8 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5) {
    u8 temp_r31;
    u8 *r27;
    u8 r30;
    u8 r29;
    u8 r28;
    u8 *r3;

    // Save registers needed by caller
    r27 = (u8 *) arg0;  // Original arg0
    r30 = arg4;         // Original arg4 (arg5)
    r29 = arg1;
    r28 = arg2 & 0x000000FF;

    *(u8 *) ((u8 *) r27 + 0x0) = r29;
    *(u8 *) ((u8 *) r27 + 0x1) = r28;
    *(u8 *) ((u8 *) r27 + 0x2) = 0x00;

    temp_r31 = *(u8 *) ((u8 *) r27 + 0x22);
    if (temp_r31 >= 0x4) {
        *(u8 *) ((u8 *) r27 + 0x22) = 0x0;
    } else {
        *(u8 *) ((u8 *) r27 + 0x22) = temp_r31 + 0x1;
    }

    if (r30 != 0) {
        // arg5 was non-zero, call fn_80260EA8 with some value
        *(u8 *) ((u8 *) r27 + 0x22) = 0x00; // Set to zero or equivalent logic
    }

    if (r30 != 0) {
        // More complex logic: set multiple values
        u8 *r0;
        r0 = r27 + ((temp_r31 << 24) >> 24); // Shift logic
        *(u8 *) ((u8 *) r0 + 0x1) = r29;     // arg1 -> offset 1
        *(u32 *) ((u8 *) r0 + 0x4) = (u32) r28; // arg2 -> offset 4
    } else {
        *(u8 *) ((u8 *) r27 + 0x5) = r30;
        *(u8 *) ((u8 *) r27 + 0x6) = arg5;
    }
}

void fn_80260060(u8 arg0, void *arg1, void *arg2) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_3;
    void *temp_r8;
    void *temp_r8_2;
    void *temp_r8_3;

    temp_r4 = *(u32*)((u8*)arg1 + 0xF4);
    temp_r0 = *(u32*)((u8*)arg2 + 0xF4);
    if (arg0 < 0x40U) {
        temp_r6 = (u8) temp_r0 * 0x86;
        temp_r5 = arg0 & 0x1F;
        temp_r7 = (u8) temp_r4 * 0x86;
        temp_r8 = &lbl_80361A98 + 0x20;
        *(u16*)((u8*)(&lbl_80361A98) + temp_r7 + temp_r5) = *(u16*)((u8*)(&lbl_80361A98) + temp_r6 + temp_r5);
        *(u16*)((u8*)temp_r8 + (temp_r7 + temp_r5)) = *(u16*)((u8*)temp_r8 + (temp_r6 + temp_r5));
        return;
    }
    switch (arg0) {                                 /* irregular */
    case 0x80:
    case 0x81:
        temp_r6_2 = (u8) temp_r0 * 0x86;
        temp_r5_2 = arg0 & 0xFE;
        temp_r7_2 = (u8) temp_r4 * 0x86;
        temp_r8_2 = &lbl_80361A98 + 1;
        *(u16*)((u8*)(&lbl_80361A98) + temp_r7_2 + temp_r5_2) = *(u16*)((u8*)(&lbl_80361A98) + temp_r6_2 + temp_r5_2);
        *(u16*)((u8*)temp_r8_2 + (temp_r7_2 + temp_r5_2)) = *(u16*)((u8*)temp_r8_2 + (temp_r6_2 + temp_r5_2));
        return;
    case 0x84:
    case 0x85:
        temp_r6_3 = (u8) temp_r0 * 0x86;
        temp_r5_3 = arg0 & 0xFE;
        temp_r7_3 = (u8) temp_r4 * 0x86;
        temp_r8_3 = &lbl_80361A98 + 1;
        *(u16*)((u8*)(&lbl_80361A98) + temp_r7_3 + temp_r5_3) = *(u16*)((u8*)(&lbl_80361A98) + temp_r6_3 + temp_r5_3);
        *(u16*)((u8*)temp_r8_3 + (temp_r7_3 + temp_r5_3)) = *(u16*)((u8*)temp_r8_3 + (temp_r6_3 + temp_r5_3));
        return;
    default:
        *(u16*)((u8*)(&lbl_80361A98) + ((u8) temp_r4 * 0x86) + arg0) = *(u16*)((u8*)(&lbl_80361A98) + ((u8) temp_r0 * 0x86) + arg0);
        return;
    }
}

void fn_80260174(u8 arg0, u8 arg1, s8 arg2) {
    extern u16 lbl_80363E58[];
    extern u8 lbl_80363ED8[];
    if (arg1 != 0xFF) {
        u16* ptr = (u16*)((u8*)lbl_80363E58 + ((arg1 * 0x10) & 0xFF0) + arg0);
        *ptr = arg2;
        return;
    }
    lbl_80363ED8[arg0] = arg2;
}

u8 fn_802601B0(u8 arg0, u8 arg1) {
    extern u8 lbl_80363E58[128];
    extern u8 lbl_80363ED8[64];
    
    if (arg1 != 0xFF) {
        return lbl_80363E58[((arg1 & 0xFF) * 0x10) & 0xFF0] + arg0;
    }
    return lbl_80363ED8[arg0];
}

u16 fn_8026068C(void *arg0) {
    s32 temp_r4;
    u16 ret;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 1)) {
        return *(u16 *)((u8 *)arg0 + 0x244);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = (s32)(temp_r4 & 0xFFFFFFFE);
    ret = fn_802601EC((u8 *)arg0 + 0x224, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
    return ret;
}

u16 fn_802606D4(void *arg0) {
    u32 temp_r4;

    temp_r4 = *(u32 *)((char *)arg0 + 0x220);
    if (!(temp_r4 & 2)) {
        return *(u16 *)((char *)arg0 + 0x268);
    }
    *(u32 *)((char *)arg0 + 0x220) = temp_r4 & 0xFFFFFFFD;
    return fn_802601EC((char *)arg0 + 0x248, *(u8 *)((char *)arg0 + 0x121), *(u8 *)((char *)arg0 + 0x122));
}

u16 fn_8026071C(void *arg0) {
    s32 temp_r4;
    u16 ret;

    temp_r4 = *(s32 *)((char *)arg0 + 0x220);
    if (!(temp_r4 & 4)) {
        return *(u16 *)((char *)arg0 + 0x28C);
    }
    *(u32 *)((char *)arg0 + 0x220) = temp_r4 & 0xFFFFFFFB;
    ret = fn_802601EC((char *)arg0 + 0x26C, *(u8 *)((char *)arg0 + 0x121), *(u8 *)((char *)arg0 + 0x122));
    return ret;
}

u16 fn_802607AC(void *arg0) {
    s32 temp_r4;
    u16 temp_r3;

    temp_r4 = *(s32*)((char*)arg0 + 0x220);
    if (!(temp_r4 & 0x10)) {
        return *(u16*)((char*)arg0 + 0x2D4);
    }
    *(u32*)((char*)arg0 + 0x220) = (s32) (temp_r4 & 0xFFFFFFEF);
    temp_r3 = fn_802601EC((char*)arg0 + 0x2B4, *(u8*)((char*)arg0 + 0x121), *(u8*)((char*)arg0 + 0x122));
    return (u16)temp_r3;
}

u16 fn_802607F4(void *arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = *(s32 *)((char *)arg0 + 0x220);
    if (!(temp_r4 & 0x20)) {
        return *(u16 *)((char *)arg0 + 0x2F8);
    }
    *(s32 *)((char *)arg0 + 0x220) = (s32) (temp_r4 & 0xFFFFFFDF);
    temp_r5 = (char *)arg0 + 0x2D8;
    return fn_802601EC(temp_r5, *(u8 *)((char *)arg0 + 0x121), *(u8 *)((char *)arg0 + 0x122));
}

u16 fn_8026083C(void *arg0) {
    s32 temp_r4;
    u16 return_val;
    
    temp_r4 = *(s32 *)((char *)arg0 + 0x220);
    if (!(temp_r4 & 0x40)) {
        return_val = *(u16 *)((char *)arg0 + 0x31C);
        return return_val;
    }
    *(u32 *)((char *)arg0 + 0x220) = temp_r4 & 0xFFFFFFBF;
    
    return fn_802601EC((char *)arg0 + 0x2FC, *(u8 *)((char *)arg0 + 0x121), *(u8 *)((char *)arg0 + 0x122));
}

u16 fn_80260884(void *arg0) {
    u32 temp_r4;
    u16 result;

    temp_r4 = *((u32*)((char*)arg0 + 0x220));
    if (!(temp_r4 & 0x100)) {
        return *((u16*)((char*)arg0 + 0x364));
    }
    *((u32*)((char*)arg0 + 0x220)) = (s32) (temp_r4 & 0xFFFFFEFF);
    result = fn_802601EC((char*)arg0 + 0x344, *((u8*)((char*)arg0 + 0x121)), *((u8*)((char*)arg0 + 0x122)));
    return (u16)result;
}

u16 fn_802608CC(void *arg0) {
    u32 temp_r4;
    u16 result;

    temp_r4 = *((u32*)((char*)arg0 + 0x220));
    if (!(temp_r4 & 0x200)) {
        return *((u16*)((char*)arg0 + 0x388));
    }
    *((u32*)((char*)arg0 + 0x220)) = (s32) (temp_r4 & 0xFFFFFDFF);
    result = fn_802601EC((char*)arg0 + 0x368, *((u8*)((char*)arg0 + 0x121)), *((u8*)((char*)arg0 + 0x122)));
    return result;
}

u16 fn_80260914(void *arg0) {
    u32 temp_r4;
    u16 result;

    temp_r4 = *(u32 *)((char *)arg0 + 0x220);
    if (!(temp_r4 & 0x400)) {
        return *(u16 *)((char *)arg0 + 0x3AC);
    }
    *(u32 *)((char *)arg0 + 0x220) = (u32)(temp_r4 & 0xFFFFFBFF);

    result = fn_802601EC((char *)arg0 + 0x38C, *(u8 *)((char *)arg0 + 0x121), *(u8 *)((char *)arg0 + 0x122));
    return result;
}

void fn_8026095C(struct unit* param_1, s32 param_2, s32 param_3) {
    param_1->unk_0x8 = param_2;
    param_1->unk_0xC = param_3;
    lbl_803689A8 = 1;
    lbl_80368B34(0);
}

u16 fn_802609A4(void *arg0) {
    s32 temp_r4;
    u16 temp_r3;

    temp_r4 = *(s32*)((char*)arg0 + 0x220);
    if (!(temp_r4 & 0x1000)) {
        return *(u16*)((char*)arg0 + 0x3F4);
    }
    *(s32*)((char*)arg0 + 0x220) = temp_r4 & 0xFFFFEFFF;
    temp_r3 = fn_802601EC((char*)arg0 + 0x3D4, *(u8*)((char*)arg0 + 0x121), *(u8*)((char*)arg0 + 0x122));
    return temp_r3;
}

void fn_802609EC(struct unit* param_1)
{
    s32 r4;
    
    if ((param_1->unk_0x8 & 0x400) != 0)
        param_1->unk_0xC = param_1->unk_0xC | 0x8000;
    else
        param_1->unk_0xC = param_1->unk_0xC & 0xFFFF7FFF;
}

s32 fn_80260EA8(u8 arg0) {
    switch (arg0) {
    case 0:
        return 0;
    case 1:
        return 0x7;
    case 2:
        return 0x9;
    case 3:
        return 0x8;
    case 4:
        return 0x4;
    case 5:
        return 0x6;
    case 6:
        return 0x5;
    case 7:
        return 0x2;
    case 8:
        return 0x3;
    default:
        return 0;
    }
}

s32 fn_80260F18(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    s32 var_r9;
    s32 var_r10;
    s32 var_r11;
    s32 var_r12;
    s32 var_r13;
    s32 *var_r14;
    s32 var_r15;
    s32 var_r16;
    s32 var_r17;
    s32 var_r18;
    s32 var_r19;
    s32 var_r20;
    s32 var_r21;
    s32 var_r22;
    s32 var_r23;
    s32 var_r24;
    s32 var_r25;
    s32 var_r26;
    s32 var_r27;
    s32 var_r28;
    s32 var_r29;
    s32 var_r30;
    s32 var_r31;
    
    if (arg1 == 0) {
        return 0;
    }
    
    if (*arg2 != 0) {
        *arg2 = 0;
        return 1;
    }

    if ((arg0 >= 0x15) || (arg0 < 0)) {
        return 0;
    }

    var_r3 = 0;
    var_r4 = 0;

    while (var_r3 != 0) {
        if (var_r4 >= 0x14) {
            break;
        }
        
        if (*arg2 == 0) {
            *arg2 = 1;
        }

        // This is a complex nested logic that's hard to match
        var_r6 = *(arg3 + var_r4) * 4;
        var_r7 = (arg0 - (var_r6 & 0xFFFF)) << 8;
        var_r8 = 0x10000;
        
        if ((s32) var_r7 < 0) {
            var_r8 = 0;
        }

        var_r9 = var_r7 + var_r8;
        var_r10 = var_r9 >> 0x10;
        
        if ((s32) var_r10 < 0) {
            var_r10 = 0;
        }

        var_r11 = var_r10 * 0x10000;
        var_r12 = 0x100000000ULL; // This is the high part of a u64
        var_r13 = (s32)var_r12 + var_r11;
        
        if ((s32) var_r13 < 0) {
            var_r13 = 0;
        }

        if (arg0 == 0x14) {
            *arg2 = 0;
            return 1;
        }

        var_r8 = 0;

        // This part is also complex and needs accurate logic
        if (var_r3 != 0) {
            *arg2 = 0;
            return 1;
        }
        
        var_r14 = arg3 + var_r4;
        var_r15 = var_r6 & 0xFFFF;
        var_r16 = ((s32) var_r11 < 0x10000) ? 0x100 : (var_r11 >> 0x10);
        
        if (var_r15 == 0x14) {
            *arg2 = 0;
            return 1;
        }

        var_r3 = 0;
        var_r4++;
    }

    if (arg0 != 0x14) {
        *arg2 = 0;
        return 1;
    }
    
    *arg2 = 1;
    return 0;
}

u16 fn_802611F8(void) {
    extern u32 lbl_803670B8;
    u32 temp_r0;

    temp_r0 = lbl_803670B8 * 0xA8351D63;
    lbl_803670B8 = temp_r0;
    return (u16) (temp_r0 >> 6U);
}

s16 fn_80261214(s32 arg0) {
    u32 temp_r0;
    s16 *ptr;

    temp_r0 = arg0 & 0xFFF;
    if (temp_r0 < 0x400U) {
        ptr = (s16*)((char*)lbl_802A1E90 + ((temp_r0 * 2) & 0x1FFFE));
        return *ptr;
    }
    if (temp_r0 < 0x800U) {
        ptr = (s16*)((char*)lbl_802A1E90 + ((0x3FF - (temp_r0 & 0x3FF)) * 2));
        return *ptr;
    }
    if (temp_r0 < 0xC00U) {
        ptr = (s16*)((char*)lbl_802A1E90 + ((temp_r0 * 2) & 0x7FE));
        return -(*ptr);
    }
    ptr = (s16*)((char*)lbl_802A1E90 + ((0x3FF - (temp_r0 & 0x3FF)) * 2));
    return -(*ptr);
}

s32 fn_802612A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 (*arg4)(s32, s32), M2C_UNK arg_sp0) {
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    if (arg2 != 0) {
        var_r31 = 1;
        var_r30 = arg2;
loop_2:
        temp_r29 = (s32) (var_r31 + var_r30) >> 1;
        temp_r28 = arg1 + (arg3 * (temp_r29 - 1));
        temp_r3 = arg4(arg0, temp_r28);
        if (temp_r3 == 0) {
            return temp_r28;
        }
        if (temp_r3 < 0) {
            var_r30 = temp_r29 - 1;
        }
        if (((u32) temp_r3 >> 0x1FU) == 0) {
            var_r31 = temp_r29 + 1;
        }
        if (var_r31 > var_r30) {
            goto block_9;
        }
        goto loop_2;
    }
block_9:
    return 0;
}

f64 fn_80261344(f32 farg0) {
    extern f32 lbl_802831B8[3];
    f64 temp_f3;
    f64 temp_f3_2;
    f64 temp_f3_3;

    temp_f3_2 = __frsqrte(farg0);
    if (farg0 != lbl_802831B8[0]) {
        temp_f3_3 = temp_f3_2 * (f64)lbl_802831B8[1] * -(((f64)farg0 * (temp_f3_2 * temp_f3_2)) - (f64)lbl_802831B8[2]);
        temp_f3 = temp_f3_3 * (f64)lbl_802831B8[1] * -(((f64)farg0 * (temp_f3_3 * temp_f3_3)) - (f64)lbl_802831B8[2]);
        return (f64)farg0 * (temp_f3 * (f64)lbl_802831B8[1] * -(((f64)farg0 * (temp_f3 * temp_f3)) - (f64)lbl_802831B8[2]));
    }
    return (f64)farg0;
}

f32* fn_80261398(void) {
    f32 f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12;
    s32 r5;
    f64 temp_f7;
    
    // Load the first float from lbl_802831BC
    f1 = lbl_802831BC[0];
    // Load some more values from the same array
    f6 = lbl_802831BC[3];
    f12 = lbl_802831BC[4];
    
    // Calculate intermediate value by adding to itself and adding another
    f1 = f1 + f1 + f6;
    f1 = __fabsf(f1);
    f1 = f1 * f6; // scalar product
    
    // Now let's load from a double (which is an array with 2 elements)
    temp_f7 = lbl_8036C348; 
    r5 = (s32)temp_f7;
    
    if ((r5 & 0x1) != 0) {
        f1 = f1 + (f32)r5;
    }
    
    // Perform some computation
    f1 = f1 - r5;
    f4 = f1 * f1;
    f5 = f4 * f4;
    f1 = f1 * f6; // ps_muls1

    f8 = lbl_802831BC[1] * f1; // ps_muls0
    f9 = lbl_802831BC[2] * f1; // ps_muls0
    
    f10 = f1 * f12;  // another scalar product

    f9 = f9 * f5;
    f10 = f10 * f5;
    f9 = f9 * f4;
    f8 = f8 * f4;
    f9 = f8 + f9;
    f9 = f9 * f5;
    f8 = f10 + f9;
    f8 = f8 * f4;
    f8 = f8 + f1;
    
    if (f8 < 0.0f) {
        f8 = -f8;
    }
    
    return lbl_802831BC;
}

void fn_8026146C(s32 *arg0) {
    *arg0 <<= 8;
}

void fn_8026147C(u32 *arg0, s32 arg1) {
    u32 fn_80247F60(s32);
    *arg0 = (u32) (((u32) (*arg0 << 0x10) / fn_80247F60(arg1)) * 0x3E8) >> 5U;
}

u32 fn_802614C4(u32 arg0) {
    return arg0 >> 8U;
}

void fn_802616E4(s8 arg0) {
    extern s8 lbl_80368AD0;
    lbl_80368AD0 = arg0;
}

u8 fn_802616EC(void) {
    extern u8 lbl_80368AD0;
    return lbl_80368AD0;
}

void fn_80261714(s32 arg0) {
    extern s32 lbl_80368AA4;
    lbl_80368AA4 = arg0;
}

void fn_8026171C(s32 arg0, s32 arg1) {
      extern u16 lbl_80368AA0[];
      M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), s32 *, 0x1C) = arg1;
  }

void fn_80261AE0(s32 arg0, s32 arg1, s32 arg2) {
    extern u16 lbl_80368AA0;
    s32 temp_r6;

    temp_r6 = arg0 * 0xF8;
    *(s32 *)((u8 *)(&lbl_80368AA0) + temp_r6 + 0x94) = arg1;
    *(s32 *)((u8 *)(&lbl_80368AA0) + temp_r6 + 0x98) = arg2;
}

u8 fn_80261B00(s32 arg0) {
    extern s32 lbl_80368AA0;
    return M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), u8 *, 0x9C);
}

u8 fn_80261B14(s32 arg0) {
    extern s32 lbl_80368AA0;
    return M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), u8 *, 0x90);
}

u16 fn_80261B28(s32 arg0) {
    extern s32 lbl_80368AA0;
    return M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), u16 *, 0x70);
}

s32 fn_80261B3C(s32 arg0) {
    extern s32 lbl_80368AA0;
    return M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), s32 *, 0x7C);
}

void fn_80261B50(s32 arg0, s8 arg1) {
    extern s32 lbl_80368AA0;
    M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), s8 *, 0xA0) = arg1;
}

s32 fn_80261C40(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        return (lbl_803670C0 & 0xFFFF);
    }
    return (lbl_803670C0 >> 0x10);
}

s32 fn_80261C6C(s32 arg0) {
    return *(u32*)((char*)lbl_803670C8 + (arg0 * 4)) & 0xFFFFFF;
}

void fn_80261E10(s32 arg0, u8 arg1) {
    extern s32 lbl_80368AA0;
    s32 temp_r5;
    s32 *temp_r3;

    if (arg1 != 0) {
        temp_r5 = arg0 * 0xF8;
        temp_r3 = (s32 *) (lbl_80368AA0 + temp_r5);
        temp_r3[0x3D] |= 0x80000000;
    } else {
        temp_r5 = arg0 * 0xF8;
        temp_r3 = (s32 *) (lbl_80368AA0 + temp_r5);
        temp_r3[0x3D] &= 0x7FFFFFFF;
    }
}

void fn_8026212C(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern u16 lbl_8035B838[];
    void *temp_r3;

    temp_r3 = (char *)lbl_8035B838 + (arg0 * 0xBC);
    *(s32 *)((char *)temp_r3 + 0xAC) = arg1;
    *(s32 *)((char *)temp_r3 + 0xB4) = arg2;
    *(s32 *)((char *)temp_r3 + 0xB0) = arg3;
    *(s32 *)((char *)temp_r3 + 0xB8) = arg4;
}

void fn_80262290(void) {
    M2C_UNK fn_80263074();
    fn_80263074();
}

void fn_802622B0(void) {
    M2C_UNK fn_802631E4();
    fn_802631E4();
}

void fn_802622F4(void) {

}

void fn_80262354(void *arg0, void *arg1) {
    void fn_802627EC(void *);
    fn_802627EC(arg1);
}

void fn_80262378(void **arg0, s32 *arg1) {
    s32 fn_80262B74(s32, s32);
    u32 temp_r3;
    u32 temp_r0;
    u32 var_r4;

    temp_r3 = M2C_FIELD(*arg0, u32 *, 4);
    temp_r0 = temp_r3 >> 0x18U;
    var_r4 = temp_r3 & 0xFFFFFF;
    switch ((s32) temp_r0) {                        /* irregular */
    case 3:
        break;
    default:
        {
            u32 temp_r3_2;
            temp_r3_2 = (var_r4 + 0xD) / 7;
            var_r4 = (((u32) ((var_r4 + 0xD) - temp_r3_2) >> 1U) + temp_r3_2) & 0xFFFFFFF8;
        }
        break;
    case 6:
    case 2:
        var_r4 *= 2;
        break;
    }
    *arg1 = fn_80262B74(*arg1, var_r4);
}

void fn_80262410(void) {
    M2C_UNK fn_80262B1C();
    fn_80262B1C();
}

void fn_802624B8(void) {
    M2C_UNK fn_802627D4();
    fn_802627D4();
}

void fn_802624D8(void) {

}

void fn_802624DC(void *arg0) {
    extern M2C_UNK lbl_80363F18;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&lbl_80363F18, s32 *, 0) = temp_r0;
    M2C_FIELD(&lbl_80363F18, s32 *, 4) = temp_r0;
    M2C_FIELD(&lbl_80363F18, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 4);
}

void fn_802624F8(void) {
    extern s32 lbl_80368A90;
    lbl_80368A90 = 0;
}

void fn_80262504(void) {
    extern s32 lbl_80368A8C;
    lbl_80368A8C = 1;
}

s32 fn_80262538(s32 arg0) {
      extern u16* lbl_80368AA0;
      s32 var = ((u8*)lbl_80368AA0)[(arg0 * 0xF8) + 0xF0];
      return var == 1;
  }

void fn_80262558(void *arg0) {
    extern u8 lbl_80363F28[0x284];
    extern u8 lbl_803641AC[0x284];
    u8* base;
    u32 count;
    u8* ptr;

    if (*(u32*)((char*)arg0 + 0xC) == 1) {
        base = lbl_803641AC;
    } else {
        base = lbl_80363F28;
    }

    count = 0;
    ptr = base;
    do {
        if (arg0 == ptr) {
            void (*func)(s32) = *(void (**)(s32))(ptr + 0x20);
            if (func != NULL) {
                func(*(s32*)(ptr + 0x24));
            }
        }
        count += 1;
        ptr += 0x28;
    } while (count < 0x10);

    *(u8*)(base + 0x281) -= 1;
}

void fn_802627D4(void) {
    extern u8 lbl_80363F28[];
    while ((u8) lbl_80363F28[0x281] != 0)
        ;
}

void fn_80262AD0(void) {
    M2C_UNK fn_802142B0();
    fn_802142B0();
}

s32 fn_80262AF0(void) {
    return fn_802142B0() + 0x500;
}

s32 fn_80262B14(s32 arg0) {
    return arg0 - 0x500;
}

void fn_80262B1C(s32 arg0, s32 arg1) {
    u32 fn_80215F30();
    extern u32 lbl_80368AE4;
    extern s32 lbl_80368AE8;
    u32 temp_r31;
    u32 temp_r3;
    u32 var_r0;

    if (arg0 != 0) {
        temp_r31 = (arg1 + 0x1F) & 0xFFFFFFE0;
        temp_r3 = fn_80215F30();
        var_r0 = temp_r31;
        if (temp_r31 < temp_r3) {
            var_r0 = temp_r3;
        }
        lbl_80368AE4 = var_r0;
    }
    lbl_80368AE8 = arg0;
}

void fn_80262F98(s32 arg1, void *arg2) {
    s32 val = ((s32 *)arg2)[2];
    s32 tmp = (arg1 + 0x1F);
    ((s32 *)arg2)[2] = val - (tmp & 0xFFFFFFE0);
}

s32 fn_802631AC(s32 arg0, s32 *arg1) {
    extern u16 lbl_80364430[];
    s32 tmp;
    if (arg1 != NULL) {
        tmp = *(u16*)((u8*)lbl_80364430 + ((arg0 << 4) & 0xFF0) + 8);
        *arg1 = tmp;
    }
    return *(u16*)((u8*)lbl_80364430 + ((arg0 << 4) & 0xFF0) + 4);
}

void fn_80263384(void) {
    extern s32 lbl_80368B08;
    extern s32 lbl_80368B18;
    lbl_80368B18 = 1;
    lbl_80368B08 = 1;
}

void fn_80263394(void)
{
    extern s32 lbl_80368B18;
    extern s32 lbl_80368B14;
    extern s32 lbl_80368B10;
    extern void (*lbl_80368B24)(void);
    
    lbl_80368B18 = 1;
    if (lbl_80368B14 != 0) {
        lbl_80368B14 = 0;
        if (lbl_80368B10 == 0) {
            lbl_80368B10 = 1;
            OSEnableInterrupts();
            lbl_80368B24();
            OSDisableInterrupts();
            lbl_80368B10 = 0;
        }
    }
}

void fn_802633F8(void) {
    M2C_UNK fn_8020AEC4(M2C_UNK *);
    extern M2C_UNK lbl_80368B00;
    fn_8020AEC4(&lbl_80368B00);
}

s32 fn_8026341C(s32 arg0) {
    s32 temp_r31;
    
    temp_r31 = lbl_8034C110[arg0];
    return temp_r31;
}

void fn_802634E4(void) {
    M2C_UNK fn_802137E8();
    fn_802137E8();
}

s32 fn_80263504(void) {
    extern s32 lbl_80368B1C;
    extern u8 lbl_80368B20;
    u32 temp_r0;
    u32 temp_r3;
    u32 temp_r3_2;

    temp_r3_2 = lbl_80368B20 + 2;
    temp_r3 = temp_r3_2 >> 0x1FU;
    temp_r0 = (temp_r3_2 << 0x1E) - temp_r3;
    return lbl_80368B1C + ((u8) (((temp_r0 << 2) | (temp_r0 >> 0x1EU)) + temp_r3) * 0x280);
}

u32 fn_8026367C(void) {
    s32 OSGetTick();
    extern s32 lbl_80368B0C;
    return (u32) ((OSGetTick() - lbl_80368B0C) * 8) / (u32) (*(u32 *)0x800000F8 / 500000);
}

void fn_802636C8(void) {
    extern s32 lbl_80368AF8;
    extern s16 lbl_80368AFC;
    lbl_80368AF8 = OSDisableInterrupts();
    lbl_80368AFC = 1;
}

void fn_80263764(void) {
    M2C_UNK OSDisableInterrupts();
    OSDisableInterrupts();
}

void fn_80263784(void) {
    M2C_UNK OSEnableInterrupts();
    OSEnableInterrupts();
}

void fn_802637A4(void) {
    lbl_80363F18(&lbl_80363F18);
}

void fn_80263800(void) {
    u16* ptr = (u16*)lbl_80363F18;
    u16 (*func)(u16*) = (u16 (*)(u16*))ptr[2];
    func(ptr);
}

void fn_80263830(void *arg0) {
    M2C_UNK fn_8026386C(f32, f32, f32, f32, f32);
    M2C_FIELD(arg0, s8 *, 0x13C) = 0;
    fn_8026386C(M2C_FIELD(arg0, f32 *, 0x140), M2C_FIELD(arg0, f32 *, 0x148), M2C_FIELD(arg0, f32 *, 0x144), M2C_FIELD(arg0, f32 *, 0x14C), M2C_FIELD(arg0, f32 *, 0x150));
}

void fn_80263C94(u8 arg0, void *arg1, void *arg2) {
    M2C_UNK fn_802648CC(s32, s32, s32, void *);
    switch ((s32) arg0) {                           /* irregular */
    case 0:
        if ((u8) M2C_FIELD(arg2, u8 *, 0x1C4) == 0) {
            fn_802648CC(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), arg2);
        }
        /* fallthrough */
    case 1:
        return;
    }
}

void fn_80263CF0(void *arg0) {
    M2C_UNK fn_80263D30(f32, f32, f32, f32, f32, f32);
    M2C_FIELD(arg0, s8 *, 0x1C4) = 0;
    fn_80263D30(M2C_FIELD(arg0, f32 *, 0x1C8), M2C_FIELD(arg0, f32 *, 0x1D0), M2C_FIELD(arg0, f32 *, 0x1CC), M2C_FIELD(arg0, f32 *, 0x1D4), M2C_FIELD(arg0, f32 *, 0x1D8), M2C_FIELD(arg0, f32 *, 0x1DC));
}

void *fn_8026423C(void *arg0, void *arg1) {
    double temp_f0;
    s32 var_ctr;
    float f5, f6, f7, f8;
    float temp_f8_1;
    float temp_f8_2;
    float temp_f9_1;
    float temp_f9_2;
    
    temp_f0 = *(double*)0x8036C3D8;
    var_ctr = 0x4F;
    do {
        f5 = ((float*)arg0)[2] - (float)temp_f0;
        f6 = ((float*)arg0)[3] - (float)temp_f0;
        f7 = ((float*)arg1)[2] - (float)temp_f0;
        f8 = ((float*)arg1)[3] - (float)temp_f0;
        
        temp_f8_1 = f5 * ((float*)arg0)[0];
        temp_f8_2 = f6 * ((float*)arg0)[1];
        temp_f9_1 = f7 * ((float*)arg1)[0];
        temp_f9_2 = f8 * ((float*)arg1)[1];
        
        temp_f8_1 += temp_f8_2;
        temp_f9_1 += temp_f9_2;
        
        *((s32*)((char*)arg0 + 0xC)) = (s32)temp_f8_1;
        *((s32*)((char*)arg0 + 0x14)) = (s32)temp_f9_1;
        
        arg0 = (char*)arg0 + 8;
        arg1 = (char*)arg1 + 8;
        var_ctr -= 1;
    } while (var_ctr != 0);
    
    return arg0;
}

void fn_802648CC(s32 arg0, s32 arg1, s32 arg2, void *arg3, M2C_UNK arg_sp0) {
    M2C_UNK fn_8026423C(s32, s32, f32, f32);
    M2C_UNK fn_802643C0(s32, void *, M2C_UNK);
    extern f32 lbl_8036C3A8;
    extern f32 lbl_8036C3AC;
    extern f32 lbl_8036C3E8;
    f32 temp_f1;
    f32 temp_f2;
    u8 var_r31;

    var_r31 = 0;
loop_13:
    if (var_r31 < 3U) {
        switch ((s32) var_r31) {                    /* irregular */
        case 0:
            temp_f2 = M2C_FIELD(arg3, f32 *, 0x1A8);
            if (lbl_8036C3A8 != temp_f2) {
                temp_f1 = lbl_8036C3E8 * temp_f2;
                fn_8026423C(arg0, arg1, temp_f1, lbl_8036C3AC - temp_f1);
            }
            fn_802643C0(arg0, arg3, 0);
            break;
        case 1:
            fn_802643C0(arg1, arg3, 1);
            break;
        case 2:
            fn_802643C0(arg2, arg3, 2);
            break;
        }
        var_r31 += 1;
        goto loop_13;
    }
}

void fn_80264B7C(void *arg0) {
    M2C_UNK fn_802649AC();
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    fn_802649AC();
}

s32 fn_80264BA4(void) {
    s32 OSGetTick();
    s32 temp_r31;
    
    temp_r31 = OSGetTick() - lbl_80368B0C;
    return (temp_r31 * 8) / (lbl_800000F8 / 500000);
}

f32 fn_80264BF0(void *arg0) {
    s32 temp_r10;
    s32 var_ctr;
    s32 var_r5;
    u32 var_r4;

    var_r4 = M2C_FIELD(arg0, u32 *, 0xC);
    var_r5 = M2C_FIELD(arg0, s32 *, 0x10);
    var_ctr = 0xA0;
loop_1:
    temp_r10 = ((var_r4 << 7) & 0x780) | ((var_r4 >> 0x19U) & 0x70);
    var_r4 += M2C_FIELD(arg0, s32 *, 0x14);
    M2C_ERROR(/* unknown instruction: mcrxr $cr0 */);
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        M2C_ERROR(/* unknown instruction: stfiwx $f10, $r26, $r30 */);
        var_ctr -= 1;
        if (var_ctr == 0) {

        } else {
            goto loop_1;
        }
    } else {
        var_r5 += 1;
        if (var_r5 == (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
            var_r5 = M2C_FIELD(arg0, s32 *, 0x20);
        }
        var_ctr -= 1;
        if (var_ctr != 0) {
            M2C_ERROR(/* unknown instruction: stfiwx $f10, $r26, $r30 */);
            goto loop_1;
        }
        M2C_ERROR(/* unknown instruction: stfiwx $f10, $r26, $r30 */);
    }
    M2C_ERROR(/* unknown instruction: stfiwx $f2, $zero, $r10 */);
    M2C_ERROR(/* unknown instruction: stfiwx $f3, $zero, $r10 */);
    M2C_FIELD(arg0, u32 *, 0xC) = var_r4;
    M2C_FIELD(arg0, s32 *, 0x10) = var_r5;
    return M2C_ERROR(/* unknown instruction: stfiwx $f1, $zero, $r9 */);
}

void fn_80265430(s32 arg0) {
    extern u16 lbl_803669A0[1024];
    u8 *temp_r3;

    temp_r3 = (u8 *) &lbl_803669A0 + (arg0 << 8);
    if ((s32) *(s32 *) (temp_r3 + 0x20) == 0) {
        if (*((u8 *) temp_r3 + 5) != 0 || *((u8 *) temp_r3 + 6) != 4) {
            *(s32 *) (temp_r3 + 0x20) = 1;
            return;
        }
        *(u8 *) *(u32 *) (temp_r3 + 0x14) = *(u8 *) (temp_r3 + 7) & 0x3A;
    }
}

void fn_802658B0(void)
{
    lbl_8034C110[0] = 0;
    lbl_8034C110[1] = 0;
}

s32 fn_802659EC(s32 arg0) {
    if (arg0 < 0) {
        return -1;
    }
    if (arg0 == 0) {
        return 0;
    }
    return 1;
}

void fn_80265B64(s32 arg0, s32 arg1) {
    // Placeholder for the full function
}

s32 fn_80265C34(s32 arg0, s32 arg1) {
    s32 *var_r3;
    s32 temp_r3;
    s32 var_r4;
    s32 var_r5;
    
    temp_r3 = arg0 + 1;
    if (arg0 != -1) {
        var_r3 = (s32 *) fn_8026367C();
        if (var_r3 == NULL) {
            return 0;
        }
        temp_r3 = arg0 & 0xFF;
        var_r4 = *(var_r3 + 0x18/4) >> 8;
        var_r5 = arg1 - var_r4;
        if (var_r5 >= 0) {
            if ((u32) var_r5 < (u32) *(var_r3 + 0x1C/4)) {
                return 1;
            }
        }
    }
    return temp_r3;
}
#include "common.h"
extern f32 lbl_8036C3F0;
extern u8 lbl_802A4590[];
#include "global.h"
#include "ef.h"

extern s32 lbl_80368AA0;
extern u16 lbl_8029FB7C[];
extern s32 lbl_80368AA0;
extern u8 lbl_80368AD0;
#include "global.h"

extern s32 lbl_80368AF8;
extern u16 lbl_80368A0C;
extern u16 lbl_80368AFC;
extern u16 lbl_8034F6B8[];
