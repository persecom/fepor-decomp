/* Functions from 0x8022CD68 to 0x80267A7C, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8034C110[];
extern f64 lbl_8036C368;
extern u16 *D_80256B30;
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
extern s16 lbl_802A1E90[];
extern u8 lbl_80368AAE;
extern u8 lbl_80368AAD;
extern u16 lbl_8035BF18[];
extern u32 lbl_8035C918[];

u32 fn_8026367C(void);

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

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern s32 lbl_803689A8;
s32 fn_80255FB0(void);

#pragma dont_inline on

#pragma dont_inline reset

extern u16 lbl_803548B8;
extern u16 lbl_80368A08;

u16 fn_8025FC64(u8 arg0, u8 arg1, u8 arg2);
s32 fn_8022C568(f32 arg0);
void fn_80261934(u8 arg0, void *arg1, s32 arg2);

void fn_8026146C(s32 *);
void fn_8025FFC8(void *arg0, u8 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5);

static void SelectSource(void *svoice, void *dest, u32 *cstep, u64 tstflag, u32 dirtyflag) {
    u8 comb;
    s32 scale;
    u32 inv;

    if ((*(u64 *)((u8 *)svoice + 0x114) & tstflag) == 0) {
        *(u64 *)((u8 *)svoice + 0x114) |= tstflag;
        comb = 0;
    } else {
        comb = cstep[1];
    }
    scale = (s32)(cstep[0] & 0xFFFF0000) / 100;
    if (scale < 0) {
        scale -= ((s8)(cstep[1] >> 16) << 8) / 100;
    } else {
        scale += ((s8)(cstep[1] >> 16) << 8) / 100;
    }
    inv = (cstep[1] >> 8) & 0xFF;
    fn_8025FFC8(dest, cstep[0] >> 8, scale, comb, inv != 0, inv);
    *(u32 *)((u8 *)svoice + 0x220) |= dirtyflag;
}

extern void func_80013934(s32 arg0);

extern u8 lbl_8034C110[];

extern u16 lbl_8035A510[];

extern u16 lbl_8035D118[256];

extern u16 lbl_80361A98[4288];

extern f32 lbl_802831BC[];
extern f64 lbl_8036C348;

extern u16 lbl_803670C0;

extern u32 lbl_803670C8;

extern u32 lbl_800000F8;

extern s32 lbl_80368B30;
extern s32 lbl_80368B44;

extern u16 lbl_802A1E10[4];
extern u16 lbl_8034CBB4[288];
extern u16 lbl_8035D118[];
#include "common.h"

extern s32 lbl_80368B2C;
extern u16 lbl_80368AA0[];
extern u16 lbl_803670C0;
#include "common.h"
#include "include/common.h"
#include "global.h"
#include "structs.h"
extern u16 lbl_80368AFC;
extern s32 lbl_80368AF8;
extern u16 lbl_80368AFC;
extern s32 lbl_80368AF8;
extern u8 lbl_8035A610[];
extern u8 lbl_8035A650[];
extern s32 lbl_8035B838[];
typedef struct {
    u32 field_0x0;
    u32 field_0x4;
    u32 field_0x8;
    // ... padding ...
    u32 field_0xF8;
    u32 field_0xFC;
    u32 field_0x100;
    u32 field_0x104;
    u32 field_0x108;
} SomeStruct;
extern u16 lbl_8035A6D0[];
#include "global.h"
#include "structs.h"

typedef struct {
    u16 id;
    u16 ref;
    u32 unk4;
    u32 unk8;
    u8 unkC[0x14];
} Entry;

extern struct Entry lbl_803542B8[];
extern u16 lbl_80368A18;
extern u32 lbl_80368A14;
#include "global.h"
#include "structs.h"

extern s32 lbl_8035B220[];
extern s32 lbl_80368A58;
extern s32 *lbl_80368A5C;
extern s32 *lbl_80368A60;
extern void *lbl_80368950;
extern u8 *lbl_803688E8;
extern u16 lbl_803688EC[10];
extern s32 lbl_8036894C;
extern s32 lbl_8033E578[];

void fn_802668D4(s32 arg0) {
    extern u16 lbl_803669A0[1024];
    void *temp_r3;

    temp_r3 = &lbl_803669A0 + (arg0 << 18);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x20) == 0) {
        *M2C_FIELD(temp_r3, s8 **, 0x14) = M2C_FIELD(temp_r3, u8 *, 5) & 0x3A;
    }
}

void fn_80266A5C(s32 arg0, s32 arg1, M2C_UNK *arg2) {
    M2C_UNK OSClearContext(M2C_UNK *);
    M2C_UNK OSSetCurrentContext(M2C_UNK *);
    extern M2C_UNK lbl_803669A0;
    extern s32 lbl_80368B2C;
    M2C_UNK sp18;
    M2C_UNK (*temp_r12)(s32);
    M2C_UNK (*temp_r12_2)(s32, s32);
    void *temp_r31;

    temp_r31 = &lbl_803669A0 + (arg0 << 8);
    if ((s32) lbl_80368B2C == 0) {
        if (arg1 & 0xF) {
            M2C_FIELD(temp_r31, s32 *, 0x20) = 1;
        } else {
            M2C_FIELD(temp_r31, s32 *, 0x20) = 0;
        }
        temp_r12 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32), 0x38);
        if (temp_r12 != NULL) {
            M2C_FIELD(temp_r31, M2C_UNK (**)(s32), 0x38) = NULL;
            temp_r12(arg0);
        }
        if (((M2C_UNK (*)(s32, s32)) M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x1C)) != NULL) {
            OSClearContext(&sp18);
            OSSetCurrentContext(&sp18);
            temp_r12_2 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x1C);
            M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x1C) = NULL;
            temp_r12_2(arg0, M2C_FIELD(temp_r31, s32 *, 0x20));
            OSClearContext(&sp18);
            OSSetCurrentContext(arg2);
        }
    }
}

void fn_80266B38(s32 arg0) {
    extern u16 lbl_803669A0[];
    s32 temp = arg0 << 8;
    u16 *ptr = &lbl_803669A0[temp + 0x24];
    fn_8020AEC4(ptr);
}

s32 fn_80266D70(s32 arg0, s32 arg2, s32 arg3) {
    extern u16 lbl_803669A0[512];
    s32 temp_r3;
    void *temp_r7;

    temp_r7 = &lbl_803669A0 + (arg0 << 18);
    temp_r3 = *(s32 *)((u8 *)temp_r7 + 0x30);
    *(s32 *)((u8 *)temp_r7 + 0x34) = arg3;
    *(s32 *)((u8 *)temp_r7 + 0x30) = arg2;
    return temp_r3;
}

void fn_80266E70(u32 arg0) {
    // Simple placeholder - I will fix this by getting a working base
}

void fn_80266F18(void) {
    lbl_8034C110[0] = 1;
    lbl_8036C368 = 0.0;
}

void fn_80266FFC(void) {

}

void fn_80267000(void) {

}

void fn_80267458(s16 arg0) {
    *(u16 *)0xCC003000 = 0x1000;
    if (lbl_80368B34 != NULL) {
        lbl_80368B34(arg0);
    }
}

void fn_80267498(s32 arg0) {
    s32 var = arg0;
    if (var != 0) {
        *(s8*)&lbl_80368B44 = (s8)var;
        if (lbl_80368B30 != 0) {
            // Jump to lbl_80368B30
            ((void(*)())lbl_80368B30)();
        }
    }
}

s32 fn_80267580(s32 arg0, s32 *arg1, s32 arg2) {
    s32 sp24;
    s32 sp20;
    s32 *var_r26;
    s32 temp_r6;
    s32 var_r27;
    s32 var_r30;
    void *temp_r28;

    var_r30 = arg2;
    var_r26 = arg1;
    temp_r6 = (*(s32 *)0xCC006828 & 0x405) | 0xC0;
    *(s32 *)0xCC006800 = temp_r6;
    sp24 = ((arg0 << 8) & 0x01FFFC00) | 0xA0000000;
    var_r27 = 0;
    
    do {
        temp_r28 = (void *)0xCC006800;
    } while (*(s32 *)((char *)temp_r28 + 0x34) & 1);
    
    if (var_r30 != 0) {
        do {
            sp20 = *var_r26;
            var_r26 += 1;
            var_r27 |= fn_802677E4(&sp20, 4, 1);
            do {
                temp_r28 = (void *)0xCC006800;
            } while (*(s32 *)((char *)temp_r28 + 0x34) & 1);
            var_r30 -= 4;
            if (var_r30 < 0) {
                var_r30 = 0;
            }
        } while (var_r30 != 0);
    }
    *(s32 *)0xCC006800 = *(s32 *)0xCC006800 & 0x405;
    return var_r27 == 0;
}

s32 fn_8026765C(s32 arg0, s32 *arg1, s32 arg2) {
    s32 sp24;
    s32 sp20;
    s32 *var_r26;
    s32 temp_r6;
    s32 var_r27;
    s32 var_r30;
    void *temp_r28;

    var_r30 = arg2;
    var_r26 = arg1;
    temp_r6 = (*(s32 *)0xCC006828 & 0x405) | 0xC0;
    *(s32 *)0xCC006800 = temp_r6;
    sp24 = ((arg0 << 8) & 0x01FFFC00) | 0x20000000;
    var_r27 = fn_802677E4(&sp24, 4, 1, temp_r6);
    do {
        temp_r28 = (void *)0xCC006800;
    } while (*(s32 *)temp_r28 & 0x80000000);
loop_7:
    if (var_r30 != 0) {
        var_r27 |= fn_802677E4(&sp20, 4, 0, temp_r6);
        do {

        } while (*(s32 *)temp_r28 & 0x80000000);
        var_r30 -= 4;
        *var_r26 = sp20;
        var_r26 += 1;
        if (var_r30 < 0) {
            var_r30 = 0;
        }
        goto loop_7;
    }
    *(s32 *)0xCC006800 = *(s32 *)0xCC006800 & 0x405;
    return var_r27 == 0;
}

s32 fn_80267738(s32 *arg0) {
    s32 sp18;
    s32 temp_r31;
    s32 temp_r3;
    void *temp_r28;

    M2C_FIELD((void *)0xCC006800, s32 *, 0x28) = (s32) ((*(s32 *)0xCC006828 & 0x405) | 0xC0);
    sp18 = 0x60000000;
    temp_r31 = fn_802677E4(&sp18, 2, 1) == 0;
    do {
        temp_r28 = (s32 *)0xCC000000 + 0x6800;
    } while (M2C_FIELD(temp_r28, s32 *, 0x34) & 1);
    temp_r3 = temp_r31 | (fn_802677E4(arg0, 4, 0) == 0);
    do {

    } while (M2C_FIELD(temp_r28, s32 *, 0x34) & 1);
    M2C_FIELD((void *)0xCC006800, s32 *, 0x28) = (s32) (M2C_FIELD((void *)0xCC006800, s32 *, 0x28) & 0x405);
    return temp_r3 == 0;
}
