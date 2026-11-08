/* Functions from 0x8022CD68 to 0x80267A7C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80366F28;
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

typedef struct __InStrCtrl {
    char *NextChar;
    s32 NullCharDetected;
} __InStrCtrl;

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

extern s32 D_8022EF64;

extern s32 fn_802314D8(s32, s32, s32);

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern f64 lbl_8036C138;
extern f64 lbl_8036C140;

extern f64 lbl_8036C148;

s32 fn_80238E78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 EXIImm(s32, s32, s32, s32, s32);
    s32 EXISync(s32);
    
    s32 var_r31 = arg0;
    s32 var_r28 = arg1;
    s32 var_r29 = arg2;
    s32 var_r30 = arg3;
    s32 var_r27;

loop_9:
    if (var_r29 == 0) {
        return 1;
    }
    if (var_r29 < 4) {
        var_r27 = var_r29;
    } else {
        var_r27 = 4;
    }
    if (EXIImm(var_r31, var_r28, var_r27, var_r30, 0) == 0) {
        return 0;
    }
    if (EXISync(var_r31) == 0) {
        return 0;
    }
    var_r28 += var_r27;
    var_r29 -= var_r27;
    goto loop_9;
}

void EXIClearInterrupts(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = arg0 * 0x14;
    var_r0 = *(volatile u32*)(0xCC006800 + temp_r0);
    var_r0 = var_r0 & 0x7F5;
    if (arg1 != 0) {
        var_r0 |= 2;
    }
    if (arg2 != 0) {
        var_r0 |= 8;
    }
    if (arg3 != 0) {
        var_r0 |= 0x800;
    }
    *(volatile u32*)(0xCC006800 + temp_r0) = var_r0;
}

s32 fn_80239508(s32 arg0) {
    s32 temp_r4;
    s32 var_r3;
    u16 *ptr;

    temp_r4 = arg0 << 6;
    var_r3 = __EXIProbe(arg0);
    if (var_r3 != 0) {
        ptr = &Ecb_8033E188[temp_r4];
        if (ptr[0x20 / sizeof(u16)] == 0) {
            if (EXIGetID(arg0, 0, &arg0) != 0) {
                var_r3 = 1;
            } else {
                var_r3 = 0;
            }
        }
    }

    if (var_r3 != 0) {
        return 1;
    }
    
    if ((*(u32 *)(0x800030C0 + (arg0 * 4))) != 0) {
        return 0;
    }
    
    return -1;
}

void EXIDeselect(void)
{
    u32 *ecb;
    u32 mask;
    s32 channel;
    u32 status;

    BOOL enabled;

    ecb = (u32 *)Ecb_8033E188;
    channel = 0;

    // Disable interrupts
    enabled = OSDisableInterrupts();
    
    while (channel < 3) {
        // Get mask for this channel
        mask = 1 << (channel + 0x1A);
        
        // Check if the channel is busy
        status = ecb[channel * 8 + 3];  // offset 0xc, 3rd word of channel structure
        
        if ((status & 0x20000000) != 0) {  // bit 29
            goto restore_interrupts;
        }
        
        // Clear the EXI channel
        ecb[channel * 8 + 3] = status & ~0x20000000;  // clear bit 29
        
        // Get device ID if available
        if (channel != 0) {
            // Set up the EXI transaction
            ecb[channel * 8 + 3] = (status & ~0x10000000) | 0x40000000;
            
            status = ecb[channel * 8 + 3];
            if ((status & 0x10000000) == 0) {  // bit 28
                goto restore_interrupts;
            }
        }
        
        // Perform EXI probe
        if (channel <= 1) {
            __EXIProbe(channel);
        }
        
        channel++;
    }

restore_interrupts:
    OSRestoreInterrupts(enabled);
}

s32 EXILock(s32 arg0, u32 arg1, u32 arg2) {
    s32 temp_r29;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_ctr;
    void *temp_r30;
    void *var_r3;

    temp_r4 = arg0 << 6;
    temp_r30 = &Ecb_8033E188[temp_r4];
    temp_r29 = OSDisableInterrupts();
    if (*(u32*)((uintptr_t)temp_r30 + 0xC) & 0x10) {
        if (arg2 != 0U) {
            var_r3 = temp_r30;
            temp_r4_2 = *(u32*)((uintptr_t)temp_r30 + 0x24);
            var_ctr = temp_r4_2;
            if (temp_r4_2 > 0) {
loop_3:
                if (*(u32*)((uintptr_t)var_r3 + 0x28) == arg1) {
                    OSRestoreInterrupts(temp_r29);
                    return 0;
                }
                var_r3 = (char*)var_r3 + 8;
                var_ctr -= 1;
                if (var_ctr == 0) {
                    goto block_6;
                }
                goto loop_3;
            }
block_6:
            *(u32*)((uintptr_t)temp_r30 + 0x2C) = arg2;
            *(u32*)((uintptr_t)temp_r30 + (temp_r4_2 * 8) + 0x28) = arg1;
            *(u32*)((uintptr_t)temp_r30 + 0x24) = (s32) (*(u32*)((uintptr_t)temp_r30 + 0x24) + 1);
            goto block_7;
        }
block_7:
        OSRestoreInterrupts(temp_r29);
        return 0;
    }
    *(u32*)((uintptr_t)temp_r30 + 0xC) = (s32) (*(u32*)((uintptr_t)temp_r30 + 0xC) | 0x10);
    *(u32*)((uintptr_t)temp_r30 + 0x18) = arg1;
    SetExiInterruptMask(arg0, temp_r30);
    OSRestoreInterrupts(temp_r29);
    return 1;
}

s32 EXIUnlock(s32 arg0) {
    return 1;
}

s32 fn_8023A114(s32 arg0) {
    s32 r4 = arg0 << 6;
    u16* base = (u16*)Ecb_8033E188;
    return *(s32*)((u8*)base + r4 + 0xC);
}

void UnlockedHandler(void) {
    M2C_UNK EXIGetID(M2C_UNK, M2C_UNK *);
    M2C_UNK sp10;

    EXIGetID(0, &sp10);
}

void fn_8023A504(s32 *arg2) {
    s32 EXIGetID(s32 *);
    s32 sp14;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    if (EXIGetID(&sp14) == 0) {
        return;
    }
    temp_r5 = sp14 & 0xFFFFFF00;
    if (temp_r5 != 0x04020300) {
        if (temp_r5 < 0x04020300) {
            if (temp_r5 != 0x04020200) {
                if (temp_r5 < 0x04020200) {
                    if (temp_r5 != 0x04020100) {
                        goto block_11;
                    }
                    goto block_10;
                }
                goto block_11;
            }
            goto block_10;
        }
        if (temp_r5 != 0x04060000) {
block_11:
            temp_r4 = sp14 & 0xFFFF0000;
            switch (temp_r4) {                      /* irregular */
            case 0x0:
                if (!(sp14 & 0x3803)) {
                    temp_r0 = sp14 & 0xFC;
                    if (temp_r0 != 0x20) {
                        if (temp_r0 < 0x20) {
                            if (temp_r0 != 8) {
                                if (temp_r0 < 8) {
                                    if (temp_r0 != 4) {
                                        goto block_30;
                                    }
                                    goto block_28;
                                }
                                if (temp_r0 != 0x10) {
                                    goto block_30;
                                }
                                goto block_28;
                            }
                            goto block_28;
                        }
                        if (temp_r0 != 0x80) {
                            if (temp_r0 < 0x80) {
                                if (temp_r0 != 0x40) {
                                    goto block_30;
                                }
                                goto block_28;
                            }
                            goto block_30;
                        }
                        goto block_28;
                    }
block_28:
                    *arg2 = temp_r0;
                    return;
                }
            default:
block_30:
                *arg2 = sp14;
                return;
            case 0x5070000:
                *arg2 = 0x05070000;
                return;
            }
        } else {
            goto block_10;
        }
    } else {
block_10:
        *arg2 = temp_r5;
    }
}
