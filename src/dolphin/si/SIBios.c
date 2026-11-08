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

s32 fn_8023ABD4(void) {
    extern u16 Si_8029EFAC[];
if ((s32) Si_8029EFAC != -1) {
        return 1;
    }
    return 0;
}

s32 fn_8023ABF4(s32 arg0) {
    extern u16 Packet_8033E248[128];
    extern s32 Si_8029EFAC;

    s32 var_r5 = 1;
    if (((s32) *(Packet_8033E248 + (arg0 << 5)) == -1) && ((s32) Si_8029EFAC != arg0)) {
        var_r5 = 0;
    }
    return var_r5;
}

s32 fn_8023B270(s32 arg0) {
    M2C_UNK OSRestoreInterrupts(s32);
    extern M2C_UNK Packet_8033E248;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r30;
    s32 var_r5;

    OSDisableInterrupts(&Packet_8033E248);
    temp_r5 = *(s32 *)0xCC006434;
    if (temp_r5 & 0x08000000) {
        var_r30 = 1;
    } else {
        var_r30 = 0;
    }
    if (arg0 != 0) {
        M2C_FIELD(&Packet_8033E248, s32 *, 0x1E0) = 0;
        var_r5 = temp_r5 | 0x08000000;
        M2C_FIELD(&Packet_8033E248, s32 *, 0x1E4) = 0;
        M2C_FIELD(&Packet_8033E248, s32 *, 0x1E8) = 0;
        M2C_FIELD(&Packet_8033E248, s32 *, 0x1EC) = 0;
    } else {
        var_r5 = temp_r5 & 0xF7FFFFFF;
    }
    temp_r5_2 = var_r5 & 0x7FFFFFFE;
    M2C_FIELD((s32 *)0xCC000000, s32 *, 0x6434) = temp_r5_2;
    OSRestoreInterrupts(temp_r5_2);
    return var_r30;
}

s32 fn_8023B3D4(u32 arg0) {
    M2C_UNK OSRestoreInterrupts(s32);
    M2C_UNK fn_8023B270(M2C_UNK);
    extern u32 lbl_8033E3E8;
    s32 temp_r31;
    s32 var_ctr;
    s32 var_r4;
    s32 var_r4_2;
    u32 *temp_r3;
    u32 *var_r3;

    var_ctr = 4;
    temp_r31 = OSDisableInterrupts();
    var_r3 = &lbl_8033E3E8;
    var_r4 = 0;
loop_1:
    if ((u32) *var_r3 == arg0) {
        (&lbl_8033E3E8)[var_r4] = 0U;
        var_r4_2 = 0;
        if ((u32) M2C_FIELD(&lbl_8033E3E8, u32 *, 0) == 0U) {
            temp_r3 = &lbl_8033E3E8 + 4;
            var_r4_2 = 1;
            if ((u32) M2C_FIELD(&lbl_8033E3E8, u32 *, 4) == 0U) {
                var_r4_2 = 2;
                if ((u32) M2C_FIELD(temp_r3, u32 *, 4) == 0U) {
                    var_r4_2 = 3;
                    if ((u32) M2C_FIELD((temp_r3 + 4), u32 *, 4) == 0U) {
                        var_r4_2 = 4;
                    }
                }
            }
        }
        if (var_r4_2 == 4) {
            fn_8023B270(0);
        }
        OSRestoreInterrupts(temp_r31);
        return 1;
    }
    var_r3 += 4;
    var_r4 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        OSRestoreInterrupts(temp_r31);
        return 0;
    }
    goto loop_1;
}

void SIInit(void) {
    M2C_UNK OSRegisterVersion(s32, M2C_UNK *);
    M2C_UNK SIGetType(M2C_UNK);
    M2C_UNK SISetSamplingRate(M2C_UNK, M2C_UNK *, M2C_UNK);
    M2C_UNK __OSSetInterruptHandler(M2C_UNK, M2C_UNK *);
    M2C_UNK __OSUnmaskInterrupts(M2C_UNK);
    extern M2C_UNK Packet_8033E248;
    extern M2C_UNK SIInterruptHandler;
    extern M2C_UNK Si_8029EFAC;
    extern s32 __SIVersion;
    OSRegisterVersion(__SIVersion, &Packet_8033E248);
    M2C_FIELD(&Packet_8033E248, s32 *, 0x60) = -1;
    M2C_FIELD(&Packet_8033E248, s32 *, 0x40) = -1;
    M2C_FIELD(&Packet_8033E248, s32 *, 0x20) = -1;
    M2C_FIELD(&Packet_8033E248, s32 *, 0) = -1;
    M2C_FIELD(&Si_8029EFAC, s32 *, 4) = 0;
    SISetSamplingRate(0, &Si_8029EFAC, -1);
    do {

    } while (M2C_FIELD((void *)0xCC006400, s32 *, 0x34) & 1);
    M2C_FIELD((void *)0xCC006400, s32 *, 0x34) = 0x80000000;
    __OSSetInterruptHandler(0x14, &SIInterruptHandler);
    __OSUnmaskInterrupts(0x800);
    SIGetType(0);
    SIGetType(1);
    SIGetType(2);
    SIGetType(3);
}

u32 fn_8023B788(s32 arg0) {
    extern M2C_UNK Type_8029EFC0;
    s32 *temp_r4;
    u32 temp_r31;

    OSDisableInterrupts();
    temp_r31 = (u32) *(u32 *)0xCC006438 >> ((3 - arg0) * 8);
    if (temp_r31 & 8) {
        temp_r4 = &Type_8029EFC0 + (arg0 * 4);
        if (!(*temp_r4 & 0x80)) {
            *temp_r4 = 8;
        }
    }
    OSRestoreInterrupts();
    return temp_r31;
}

void fn_8023B804(s32 arg0, s32 arg1) {
    s32 r3 = 0xCC006400;
    s32 offset = (arg0 * 0xC);
    *(s32*)(r3 + offset) = arg1;
}

void fn_8023B818(void) {
    *(s32 *)0xCC006438 = 0x80000000;
}

s32 fn_8023B930(u32 arg0) {
    extern u16 Si_8029EFAC[10];
    s32 r31;
    
    if (arg0 == 0) {
        return Si_8029EFAC[2];
    }
    OSDisableInterrupts();
    r31 = Si_8029EFAC[2] & ~((arg0 >> 0x18U) & 0xF0);
    *(volatile u32 *)0xCC006430 = r31;
    Si_8029EFAC[2] = r31;
    OSRestoreInterrupts();
    return r31;
}

void fn_8023B99C(void)
{
    D_80368AD0 = 0;
}

void fn_8023BB34(void *alarm, void *context) {
    typedef struct SIAlarm {
        u8 pad[0x28];
    } SIAlarm;
    typedef struct SIPacket {
        s32 chan;
        void *output;
        u32 outputBytes;
        void *input;
        u32 inputBytes;
        void *callback;
        s64 fire;
    } SIPacket;
    extern SIAlarm lbl_8033E2C8[];
    extern SIPacket Packet_8033E248[];
    s32 fn_8023B57C(s32, void *, u32, void *, u32, void *);
    s32 chan;
    SIPacket *packet;

    chan = (SIAlarm *)alarm - lbl_8033E2C8;
    packet = &Packet_8033E248[chan];
    if (packet->chan != -1) {
        if (fn_8023B57C(packet->chan, packet->output, packet->outputBytes, packet->input, packet->inputBytes, packet->callback)) {
            packet->chan = -1;
        }
    }
}

u32 fn_8023C410(s32 chan) {
    u32 SIGetType(s32);
    u32 fn_8023C2C4(u32);
    return fn_8023C2C4(SIGetType(chan));
}

void fn_8023C518(void) {
    void SISetSamplingRate(u32);
    extern u32 SamplingRate_80368828;
    SISetSamplingRate(SamplingRate_80368828);
}
