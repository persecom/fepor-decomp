/* Functions from 0x8022CD68 to 0x80267A7C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80366F28;
extern char lbl_80282AE8[];
extern char lbl_80282B20[];
extern u8 lbl_8034C110[];
extern f64 lbl_8036C368;
typedef struct EXIControl {
    void (*exiCallback)(s32 chan, void *context);
    void (*tcCallback)(s32 chan, void *context);
    void (*extCallback)(s32 chan, void *context);
    volatile u32 state;
    int immLen;
    u8 *immBuf;
    u32 dev;
    u32 id;
    s32 idTime;
    int items;
    struct {
        u32 dev;
        void (*callback)(s32 chan, void *context);
    } queue[3];
} EXIControl;

extern EXIControl Ecb_8033E188[3];
s32 EXIGetID(s32 chan, u32 dev, u32 *id);
u16 *D_80256B30;
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

volatile u32 __EXIRegs[16] : 0xCC006800;
s32 __EXIProbeStartTime[2] : 0x800030C0;

typedef struct OSContext {
    u32 gpr[32];
    u32 cr;
    u32 lr;
    u32 ctr;
    u32 xer;
    f64 fpr[32];
    u32 fpscr_pad;
    u32 fpscr;
    u32 srr0;
    u32 srr1;
    u16 mode;
    u16 state;
    u32 gqr[8];
    u32 psf_pad;
    f64 psf[32];
} OSContext;

extern s32 fn_802314D8(s32, s32, s32);

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

static void CompleteTransfer(s32 chan)
{
    EXIControl *exi = &Ecb_8033E188[chan];
    u8 *buf;
    u32 data;
    s32 i;
    s32 len;

    if (exi->state & 3) {
        if (exi->state & 2) {
            if ((len = exi->immLen) != 0) {
                buf = exi->immBuf;
                data = __EXIRegs[(chan * 5) + 4];
                for (i = 0; i < len; i++) {
                    *buf++ = (u8)(data >> (8 * (3 - i)));
                }
            }
        }
        exi->state &= ~3;
    }
}

extern f64 lbl_8036C138;
extern f64 lbl_8036C140;

extern f64 lbl_8036C148;

#pragma scheduling off
void SetExiInterruptMask(s32 arg0, void *arg1) {
    void __OSMaskInterrupts(u32);
    void __OSUnmaskInterrupts(u32);
    u32 fn_80207BAC(u32);
    u32 *ecb2 = (u32 *)((u8 *)Ecb_8033E188 + 0x80);
    switch (arg0) {
    case 0:
        if (((u32)M2C_FIELD(arg1, u32 *, 0) == 0U && *ecb2 == 0U) || (M2C_FIELD(arg1, s32 *, 0xC) & 0x10)) {
            __OSMaskInterrupts(0x410000);
            return;
        }
        __OSUnmaskInterrupts(0x410000);
        return;
    case 1:
        if (((u32)M2C_FIELD(arg1, u32 *, 0) == 0U) || (M2C_FIELD(arg1, s32 *, 0xC) & 0x10)) {
            __OSMaskInterrupts(0x80000);
            return;
        }
        __OSUnmaskInterrupts(0x80000);
        return;
    case 2:
        if ((fn_80207BAC(0x19) == 0U) || (M2C_FIELD(arg1, s32 *, 0xC) & 0x10)) {
            __OSMaskInterrupts(0x40);
            return;
        }
        __OSUnmaskInterrupts(0x40);
        return;
    }
}

#pragma scheduling off
#pragma use_lmw_stmw on
BOOL EXIImm(s32 chan, void *buf, s32 len, u32 type, void (*callback)(s32, void *))
{
    BOOL enabled;
    EXIControl *exi = &Ecb_8033E188[chan];
    u32 data;
    s32 i;

    enabled = OSDisableInterrupts();
    if ((exi->state & 3) || !(exi->state & 4)) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }

    exi->tcCallback = callback;
    if (exi->tcCallback) {
        EXIClearInterrupts(chan, FALSE, TRUE, FALSE);
        __OSUnmaskInterrupts(0x200000U >> (chan * 3));
    }

    exi->state |= 2;

    if (type != 0) {
        data = 0;
        for (i = 0; i < len; i++) {
            data |= ((u8 *)buf)[i] << (8 * (3 - i));
        }
        __EXIRegs[chan * 5 + 4] = data;
    }

    exi->immBuf = buf;
    exi->immLen = (type != 1) ? len : 0;

    __EXIRegs[chan * 5 + 3] = ((type << 2) | 1) | ((len - 1) << 4);

    OSRestoreInterrupts(enabled);
    return TRUE;
}
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

s32 EXIDma(s32 chan, void *buffer, s32 length, s32 type, void *callback)
{
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);
    void EXIClearInterrupts(s32, s32, s32, s32);
    void __OSUnmaskInterrupts(u32);

    struct EXIControl *ecb;
    volatile u32 *exi;
    u32 interrupts;
    u32 flags;

    ecb = &Ecb_8033E188[chan];

    interrupts = OSDisableInterrupts();

    flags = *(u32 *)((u8 *)ecb + 0xC);

    if ((flags & 3) != 0 || (flags & 4) == 0) {
        OSRestoreInterrupts(interrupts);
        return 0;
    }

    *(void **)((u8 *)ecb + 4) = callback;

    if (callback != 0) {
        EXIClearInterrupts(chan, 0, 1, 0);
        __OSUnmaskInterrupts(0x200000 >> (chan * 3));
    }

    *(u32 *)((u8 *)ecb + 0xC) |= 1;

    exi = (volatile u32 *)(0xCC006800 + chan * 0x14);

    exi[1] = (u32)buffer & 0x03FFFFE0;
    exi[2] = length;
    exi[3] = (type << 2) | 3;

    OSRestoreInterrupts(interrupts);

    return 1;
}

s32 fn_80204410(void);
u32 fn_80203AAC(void);
s32 EXISync(s32 arg0) {
    EXIControl *exi;
    s32 ret;
    u32 data;
    u8 *buf;
    s32 len;
    s32 temp;
    u32 ctr;
    s32 i;
    s32 ctr2;
    s32 enabled;

    exi = &Ecb_8033E188[arg0];
    ret = 0;

wait:
    while (__EXIRegs[arg0 * 5 + 3] & 1) {
    }

    enabled = OSDisableInterrupts();
    if (exi->state & 2) {
        if (exi->state & 1) {
            len = exi->immLen;
            if (len != 0) {
                buf = exi->immBuf;
                data = __EXIRegs[arg0 * 5 + 4];
                if ((s32)data > 0) {
                    temp = len - 8;
                    if (len > 8) {
                        ctr = (u32)(temp + 7) >> 3;
                        if (temp > 0) {
                            i = 0;
                            do {
                                buf[0] = (s8)(data >> ((3 - i) * 8));
                                buf[1] = (s8)(data >> ((3 - (i + 1)) * 8));
                                buf[2] = (s8)(data >> ((3 - (i + 2)) * 8));
                                buf[3] = (s8)(data >> ((3 - (i + 3)) * 8));
                                buf[4] = (s8)(data >> ((3 - (i + 4)) * 8));
                                buf[5] = (s8)(data >> ((3 - (i + 5)) * 8));
                                buf[6] = (s8)(data >> ((3 - (i + 6)) * 8));
                                buf[7] = (s8)(data >> ((3 - (i + 7)) * 8));
                                buf += 8;
                                i += 8;
                                ctr -= 1;
                            } while (ctr != 0);
                        }
                        ctr2 = len - i;
                        if (i < len) {
                            do {
                                *buf = (s8)(data >> ((3 - i) * 8));
                                buf += 1;
                                i += 1;
                                ctr2 -= 1;
                            } while (ctr2 != 0);
                        }
                    }
                }
                exi->state &= ~3;
            }
        }
        if (fn_80204410() == 0xFF &&
            (fn_80203AAC() & 0xF0000000) != 0x20000000 &&
            exi->immLen == 4 &&
            (__EXIRegs[arg0 * 5] & 0x0E000000) == 0 &&
            *(u16 *)0x800030E6 == 0x8200) {
            ret = 1;
        }
    }
    OSRestoreInterrupts(enabled);
    if (exi->state & 2) {
        goto wait;
    }
    return ret;
}

BOOL EXIClearInterrupts(s32 chan, BOOL exi, BOOL tc, BOOL ext) {
    u32 cpr;
    u32 prev;

    prev = cpr = __EXIRegs[chan * 5];
    cpr &= 0x7F5;
    if (exi) {
        cpr |= 2;
    }
    if (tc) {
        cpr |= 8;
    }
    if (ext) {
        cpr |= 0x800;
    }
    __EXIRegs[chan * 5] = cpr;
    return prev;
}

BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
s64 OSGetTime(void);
#pragma scheduling off
BOOL __EXIProbe(s32 chan) {
    EXIControl *exi = &Ecb_8033E188[chan];
    BOOL enabled;
    BOOL rc;
    u32 cpr;
    s32 t;

    if (chan == 2) {
        return TRUE;
    }

    rc = TRUE;
    enabled = OSDisableInterrupts();
    cpr = __EXIRegs[chan * 5];
    if (!(exi->state & 8)) {
        if (cpr & 0x800) {
            EXIClearInterrupts(chan, FALSE, FALSE, TRUE);
            exi->idTime = 0;
            __EXIProbeStartTime[chan] = 0;
        }

        if (cpr & 0x1000) {
            t = (s32)(OSGetTime() / ((*(u32 *)0x800000F8 / 4) / 1000) / 100) + 1;
            if (__EXIProbeStartTime[chan] == 0) {
                __EXIProbeStartTime[chan] = t;
            }
            if (t - __EXIProbeStartTime[chan] < 3) {
                rc = FALSE;
            }
        } else {
            exi->idTime = 0;
            __EXIProbeStartTime[chan] = 0;
            rc = FALSE;
        }
    } else if (!(cpr & 0x1000) || (cpr & 0x800)) {
        exi->idTime = 0;
        __EXIProbeStartTime[chan] = 0;
        rc = FALSE;
    }
    OSRestoreInterrupts(enabled);

    return rc;
}
#pragma scheduling reset
s32 fn_80239508(s32 arg0) {
    s32 temp_r4;
    s32 var_r3;
    u16 *ptr;

    temp_r4 = arg0 << 6;
    var_r3 = __EXIProbe(arg0);
    if (var_r3 != 0) {
        ptr = (u16 *)&Ecb_8033E188[temp_r4];
        if (ptr[0x20 / sizeof(u16)] == 0) {
            if (EXIGetID(arg0, 0, (u32 *)&arg0) != 0) {
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

s32 fn_802395BC(s32 chan, void *callback)
{
    u8 *ecb;
    u32 id;
    u32 enabled;
    u32 enabled2;
    s32 result;

    ecb = (u8 *)Ecb_8033E188 + (chan << 6);

    if (__EXIProbe(chan) != 0) {
        if (*(u32 *)(ecb + 0x20) == 0) {
            EXIGetID(chan, 0, &id);
        }
    }

    enabled = OSDisableInterrupts();

    if (*(u32 *)(ecb + 0x20) == 0) {
        OSRestoreInterrupts(enabled);
        return 0;
    }

    enabled2 = OSDisableInterrupts();

    if ((*(u32 *)(ecb + 0xC) & 8) == 0) {
        if (__EXIProbe(chan) == 0) {
            OSRestoreInterrupts(enabled2);
            result = 0;
            goto done;
        }
    } else {
        EXIClearInterrupts(chan, 1, 0, 0);
    }

    *(void **)(ecb + 8) = callback;

    __OSUnmaskInterrupts(0x100000U >> (chan * 3));

    *(u32 *)(ecb + 0xC) |= 8;

    OSRestoreInterrupts(enabled2);
    result = 1;

done:
    OSRestoreInterrupts(enabled);
    return result;
}

s32 EXISelect(s32 chan, u32 dev, u32 freq)
{
    u8 *ecb;
    u32 interrupts;
    u32 flags;
    u32 value;
    u32 mask;
    volatile u32 *exi;

    ecb = (u8 *)Ecb_8033E188 + (chan << 6);

    interrupts = OSDisableInterrupts();

    flags = *(u32 *)(ecb + 0xC);

    if (flags & 4) {
        OSRestoreInterrupts(interrupts);
        return 0;
    }

    if (chan != 2) {
        if (dev == 0 && !(flags & 8)) {
            if (!__EXIProbe(chan)) {
                OSRestoreInterrupts(interrupts);
                return 0;
            }
        }

        if (!(flags & 0x10) ||
            *(u32 *)(ecb + 0x18) != dev) {
            OSRestoreInterrupts(interrupts);
            return 0;
        }
    }

    *(u32 *)(ecb + 0xC) |= 4;

    exi = (volatile u32 *)(0xCC006800 + chan * 0x14);

    value = *exi & 0x405;
    value |= (1U << dev) << 7;
    value |= freq << 4;

    *exi = value;

    if (*(u32 *)(ecb + 0xC) & 8) {
        if (chan == 0) {
            __OSMaskInterrupts(0x00100000);
        } else if (chan == 1) {
            __OSMaskInterrupts(0x00020000);
        }
    }

    OSRestoreInterrupts(interrupts);

    return 1;
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

void EXIIntrruptHandler(s16 interrupt, OSContext *context)
{
    void OSClearContext(void *);
    void OSSetCurrentContext(void *);

    s32 chan;
    u8 *ecb;
    volatile u32 *exi;
    u32 value;
    void (*callback)(s32, OSContext *);
    OSContext tempContext;

    chan = ((s32)interrupt - 9) / 3;

    exi = (volatile u32 *)(0xCC006800 + chan * 0x14);

    value = *exi;
    value &= 0x7F5;
    value |= 2;
    *exi = value;

    ecb = (u8 *)Ecb_8033E188 + (chan << 6);

    callback = *(void (**)(s32, OSContext *))ecb;

    if (callback != 0) {
        OSClearContext(&tempContext);
        OSSetCurrentContext(&tempContext);

        callback(chan, context);

        OSClearContext(&tempContext);
        OSSetCurrentContext(context);
    }
}

void OSClearContext(void *);
void OSSetCurrentContext(void *);
#pragma scheduling off
void TCIntrruptHandler(s16 interrupt, OSContext *context)
{
    s32 chan;
    EXIControl *exi;
    void (*callback)(s32, void *);
    OSContext exceptionContext;
    u8 filler[8];

    (void)filler;
    chan = (interrupt - 10) / 3;
    exi = &Ecb_8033E188[chan];
    __OSMaskInterrupts(0x80000000U >> interrupt);
    __EXIRegs[chan * 5] = (__EXIRegs[chan * 5] & 0x7F5) | 8;
    callback = exi->tcCallback;
    if (callback) {
        exi->tcCallback = 0;
        CompleteTransfer(chan);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        callback(chan, context);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
}

void EXTIntrruptHandler(s16 interrupt, OSContext *context)
{
    s32 chan;
    EXIControl *exi;
    void (*callback)(s32, void *);
    OSContext exceptionContext;

    chan = (interrupt - 11) / 3;
    __OSMaskInterrupts(0x500000U >> (chan * 3));
    exi = &Ecb_8033E188[chan];
    callback = exi->extCallback;
    exi->state &= ~0x8;
    if (callback) {
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        exi->extCallback = 0;
        callback(chan, context);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
}

#pragma scheduling reset
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
    return M2C_FIELD((&Ecb_8033E188 + (arg0 << 6)), s32 *, 0xC);
}

void UnlockedHandler(s32 chan, void *context) {
    s32 EXIGetID(s32, s32, u32 *);
    u32 id;

    (void)context;
    EXIGetID(chan, 0, &id);
}

void fn_8023A504(s32 *arg2) {
    s32 EXIGetID(s32, u32, u32 *);
    u32 sp14;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    if (EXIGetID(0, 0, &sp14) == 0) {
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

s32 fn_8023A61C(s32 arg0, u32 arg1, s32 *arg2) {
    s32 EXIDeselect(s32);
    s32 EXIImm(s32, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 EXILock(s32, u32, M2C_UNK);
    s32 EXISelect(s32, u32, M2C_UNK);
    s32 EXISync(s32);
    M2C_UNK EXIUnlock(s32);
    s32 fn_802395BC(s32, M2C_UNK);
    M2C_UNK fn_802396C8(s32);
    s32 r28;
    s32 r30; 
    s32 r31;

    if ((arg0 != 2) && (arg1 == 0U) && (fn_802395BC(arg0, 0) == 0)) {
        return 0;
    }
    r30 = EXILock(arg0, arg1, 0);
    if (r30 != 0) {
        goto block_10;
    }
    r30 = EXISelect(arg0, arg1, 0);
    if (r30 != 0) {
        goto block_10;
    }
    *(u32 *)&r31 = 0x20011300;
    r30 = EXIImm(arg0, &r31, 4, 1, 0);
    if (r30 != 0) {
        goto block_10;
    }
    r30 = EXISync(arg0);
    if (r30 != 0) {
        goto block_10;
    }
    r30 = EXIImm(arg0, arg2, 4, 0, 0);
    if (r30 != 0) {
        goto block_10;
    }
    r30 = EXISync(arg0);
    if (r30 != 0) {
        goto block_10;
    }
    r30 = EXIDeselect(arg0);
    if (r30 != 0) {
        goto block_10;
    }
    EXIUnlock(arg0);
    if ((arg0 != 2) && (arg1 == 0U)) {
        fn_802396C8(arg0);
    }
    return 0;
block_10:
    EXIUnlock(arg0);
    if ((arg0 != 2) && (arg1 == 0U)) {
        fn_802396C8(arg0);
    }
    r28 = 0;
    if ((u32) (*arg2 + 0x10000) != -1U) {
        r28 = 1;
    }
    return r28;
}

void __OSEnableBarnacle(s32 arg0, s32 arg1) {
    s32 EXIGetID(s32, u32, u32 *);
    s32 fn_8023A61C(s32, s32, s32 *);
    extern u16 lbl_80368808;
    extern u16 lbl_8036880C;
    extern u16 lbl_80368810;
    extern u16 lbl_80368814;
    s32 sp10;

    if ((EXIGetID(0, 0, (u32 *)&sp10) != 0) && (sp10 != 0x01020000)) {
        if (sp10 < 0x01020000) {
            if (sp10 != 4) {
                if (sp10 < 4) {
                    if (sp10 != 0x80000010) {
                        if (sp10 < 0x80000010) {
                            if (sp10 != 0x80000008) {
                                if (sp10 < 0x80000008) {
                                    if (sp10 != 0x80000004) {
                                        goto block_42;
                                    }
                                } else {
                                    goto block_42;
                                }
                            }
                        } else if (sp10 != -1) {
                            if (sp10 < -1) {
                                if (sp10 != 0x80000020) {
                                    goto block_42;
                                }
                            } else {
                                goto block_42;
                            }
                        }
                    }
                } else if (sp10 != 0x20) {
                    if (sp10 < 0x20) {
                        if (sp10 != 0x10) {
                            if (sp10 < 0x10) {
                                if (sp10 != 8) {
                                    goto block_42;
                                }
                            } else {
                                goto block_42;
                            }
                        }
                    } else if (sp10 != 0x01010000) {
                        goto block_42;
                    }
                }
            }
        } else if (sp10 != 0x04040404) {
            if (sp10 < 0x04040404) {
                if (sp10 != 0x04020100) {
                    if (sp10 < 0x04020100) {
                        if (sp10 != 0x03010000) {
                            if (sp10 < 0x03010000) {
                                if (sp10 != 0x02020000) {
                                    goto block_42;
                                }
                            } else {
                                goto block_42;
                            }
                        }
                    } else if (sp10 != 0x04020300) {
                        if (sp10 < 0x04020300) {
                            if (sp10 != 0x04020200) {
                                goto block_42;
                            }
                        } else {
                            goto block_42;
                        }
                    }
                }
            } else if (sp10 != 0x04130000) {
                if (sp10 < 0x04130000) {
                    if (sp10 != 0x04120000) {
                        if (sp10 < 0x04120000) {
                            if (sp10 != 0x04060000) {
                                goto block_42;
                            }
                        } else {
                            goto block_42;
                        }
                    }
                } else if (sp10 != 0x04220000) {
block_42:
                    if (fn_8023A61C(arg0, arg1, &sp10) != 0) {
                        lbl_80368808 = arg0;
                        lbl_8036880C = arg1;
                        lbl_80368814 = 0xA5FF005A;
                        lbl_80368810 = 0xA5FF005A;
                    }
                }
            }
        }
    }
}

