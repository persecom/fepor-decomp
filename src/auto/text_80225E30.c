/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"

#include <dolphin/os.h>
#include "global.h"

extern __declspec(section ".data") u8 *gTRKInputPendingPtr;

extern u16 lbl_802822F0[200]; // 400 bytes = 200 u16 values


static inline s32 TRKReportCharTerminated_80226E24(s32 ch, s32 zero) {
 void fn_80227FD0(s32);
 s32 fn_80227FDC(void);
 void OSReport(char *);
 char buffer[2];
 s32 saved;
 saved=fn_80227FDC();
 buffer[0]=ch;
 buffer[1]=zero;
 fn_80227FD0(0);
 OSReport(buffer);
 fn_80227FD0(saved);
 return 0;
}

typedef struct TRKEventQueue {
    u8 unk0[4];
    s32 unk4; /* count */
    s32 unk8; /* next index */
    u8 events[0x18];
    u8 pad24[0xC];
    u32 unk24;
} TRKEventQueue;
extern TRKEventQueue lbl_8033B048;
extern u8 lbl_8033B078[];
extern s32 gSaveDataBase;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);


extern s32 lbl_80368614;
extern void (*lbl_803685E8)(void);
extern void* lbl_80368618;
extern void* lbl_8036861C;
extern void* lbl_80368620;
extern void* lbl_80368624;
extern void* lbl_80368628;
extern void* lbl_8036862C;
extern void* lbl_80368630;
extern void* lbl_80368634;
extern void* lbl_80368638;
extern void* lbl_8036863C;
extern void* lbl_80368640;
extern void* lbl_80368644;
extern void* lbl_80368648;
extern void* lbl_8036864C;
extern void* lbl_80368650;
extern void* lbl_80368654;

u8 ErrorCode2Num(s32);

extern u8 lbl_802820B8[];
extern u32 lbl_80368448;

static u32 sFaceResAddrs[8];
static u32 sFaceResIds[8];
static s16 lbl_80339328[8];
static s16 lbl_80339338[8];

extern s32 lbl_803679F0;

extern u16 lbl_8029B634[10];

#pragma opt_common_subs off

#pragma opt_common_subs reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern u16 lbl_8029B7FC[10];

#pragma opt_common_subs off

#pragma opt_common_subs reset

extern u16 lbl_8029B7A4[10];

#pragma opt_common_subs off

#pragma opt_common_subs reset

extern void *IDShouldBe_8036859C;
extern void *fn_8020DAE0;
extern void fn_8020C1A4(u8, u32, void *);

extern u8 lbl_80289EB8[16];

void TRKNubMainLoop(void);
s32 TRKGetNextEvent(void *);
#pragma options sdata=0
void TRKNubMainLoop(void) {
    void *TRKGetBuffer(s32);
    void TRKDispatchMessage(void *);
    void TRKTargetInterrupt(void *);
    s32 TRKTargetSupportRequest(void);
    void TRKGetInput(void);
    s32 TRKTargetStopped(void);
    s32 TRKTargetContinue(void);
    s32 event[3];
    s32 exitFlag;
    s32 isIdle;
    void *buf;

    exitFlag = 0;
    isIdle = 0;
    while (exitFlag == 0) {
        if (TRKGetNextEvent(event) != 0) {
            isIdle = 0;
            switch (event[0]) {
            case 2:
                buf = TRKGetBuffer(event[2]);
                TRKDispatchMessage(buf);
                break;
            case 1:
                exitFlag = 1;
                break;
            case 3:
            case 4:
                TRKTargetInterrupt(event);
                break;
            case 5:
                TRKTargetSupportRequest();
                break;
            case 0:
            default:
                break;
            }
            TRKDestructEvent(event);
        } else if (isIdle == 0 || *gTRKInputPendingPtr != 0) {
            isIdle = 1;
            TRKGetInput();
        } else {
            if (TRKTargetStopped() == 0) {
                TRKTargetContinue();
            }
            isIdle = 0;
        }
    }
}

int TRKDestructEvent(void *arg0) {
    M2C_UNK fn_8022699C(s32);
    fn_8022699C(M2C_FIELD(arg0, s32 *, 8));
}

void fn_80225F4C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = -1;
}

s32 fn_80225F64(void *event) {
    void fn_802287B0(void *);
    void fn_802287A8(void *);
    void fn_80003488(void *, void *, s32);
    s32 result;
    TRKEventQueue *queue;
    s32 offset;
    u32 id;
    u8 *dst;

    result = 0;
    fn_802287B0(&lbl_8033B048);
    queue = &lbl_8033B048;
    if (queue->unk4 == 2) {
        result = 0x100;
    } else {
        offset = ((queue->unk8 + queue->unk4) % 2) * 0xC;
        dst = (u8 *)queue + offset;
        dst = (u8 *)((s32)dst + 0xC);
        fn_80003488(dst, event, 0xC);
        id = *(u32 *)((u8 *)&lbl_8033B048 + 0x24);
        *(u32 *)((u8 *)&lbl_8033B048 + offset + 0x10) = id;
        id = *(u32 *)((u8 *)&lbl_8033B048 + 0x24) + 1;
        *(u32 *)((u8 *)&lbl_8033B048 + 0x24) = id;
        if (id < 0x100U) {
            *(u32 *)((u8 *)&lbl_8033B048 + 0x24) = 0x100;
        }
        queue->unk4 += 1;
    }
    fn_802287A8(&lbl_8033B048);
    return result;
}

s32 TRKGetNextEvent(void *event) {
    void fn_802287B0(void *);
    void fn_802287A8(void *);
    void fn_80003488(void *, void *, s32);
    s32 result;
    TRKEventQueue *queue;
    u8 *src;

    result = 0;
    fn_802287B0(&lbl_8033B048);
    queue = &lbl_8033B048;
    if (queue->unk4 > 0) {
        src = (u8 *)queue + (queue->unk8 * 0xC);
        src = (u8 *)((s32)src + 0xC);
        fn_80003488(event, src, 0xC);
        queue->unk4--;
        if (++queue->unk8 == 2) {
            queue->unk8 = 0;
        }
        result = 1;
    }
    fn_802287A8(&lbl_8033B048);
    return result;
}

int TRKInitializeEventQueue(void) {
    fn_802287B8(&lbl_8033B048);
    fn_802287B0(&lbl_8033B048);

    *(u32 *)((u8 *)&lbl_8033B048 + 0x4) = 0;
    *(u32 *)((u8 *)&lbl_8033B048 + 0x8) = 0;
    *(u32 *)((u8 *)&lbl_8033B048 + 0x24) = 0x100;

    fn_802287A8();

    return 0;
}

void TRKNubWelcome(void) {
    TRK_board_display(&lbl_80289EB8);
}

s32 TRKTerminateNub(void) {
    M2C_UNK fn_80226B68();
    fn_80226B68();
    return 0;
}

#pragma optimization_level 3
s32 TRKInitializeNub(void) {
    extern void MWTRACE(s32, const char *, ...);
    extern u8 gTRKBigEndian[];
    extern char lbl_80282294[];
    extern void usr_put_initialize(void);
    extern s32 TRKInitializeEventQueue(void);
    extern s32 TRKInitializeMessageBuffers(void);
    extern s32 TRKInitializeDispatcher(void);
    extern void InitializeProgramEndTrap(void);
    extern s32 TRKInitializeSerialHandler(void);
    extern s32 TRKInitializeTarget(void);
    extern s32 TRKInitializeIntDrivenUART(s32, s32, s32, void *);
    extern void TRKTargetSetInputPendingPtr(s32);
    extern u8 *gTRKInputPendingPtr;
    enum { FALSE_ = 0, TRUE_ = 1 };
    s32 result = FALSE_;
    s32 uartResult;
    u32 test;
    *(u8 *)&test = 0x12;
    *((u8 *)&test + 1) = 0x34;
    *((u8 *)&test + 2) = 0x56;
    *((u8 *)&test + 3) = 0x78;
    *(u32 *)gTRKBigEndian = TRUE_;
    if (test == 0x12345678U)
        *(u32 *)gTRKBigEndian = TRUE_;
    else if (test == 0x78563412U)
        *(u32 *)gTRKBigEndian = FALSE_;
    else
        result = TRUE_;
    MWTRACE(1, lbl_80282294);
    if (result == FALSE_) usr_put_initialize();
    if (result == FALSE_) result = TRKInitializeEventQueue();
    if (result == FALSE_) result = TRKInitializeMessageBuffers();
    if (result == FALSE_) result = TRKInitializeDispatcher();
    InitializeProgramEndTrap();
    if (result == FALSE_) result = TRKInitializeSerialHandler();
    if (result == FALSE_) result = TRKInitializeTarget();
    if (result == FALSE_) {
        uartResult = TRKInitializeIntDrivenUART(0xE100, 1, 0, &gTRKInputPendingPtr);
        TRKTargetSetInputPendingPtr((s32)gTRKInputPendingPtr);
        if (uartResult != FALSE_) result = uartResult;
    }
    return result;
}
#pragma optimization_level reset
s32 TRKMessageSend(void *arg0)
{
    extern u8 lbl_802822A8[];

    extern s32 TRK_cc_write(void *, s32);
    extern void MWTRACE(s32, const char *, ...);

    s32 result;

    result = TRK_cc_write(
        (u8 *)arg0 + 0x10,
        *(s32 *)((u8 *)arg0 + 8)
    );

    MWTRACE(1, (const char *)lbl_802822A8, result);

    return 0;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
s32 fn_8022632C(void *arg0, u32 *arg1, s32 arg2) {
    void fn_80003488(void *, void *, s32);
    extern u8 gTRKBigEndian[];
    s32 error;
    u8 *source;
    u32 length;
    s32 *endian;
    void *buffer;
    s32 count;
    u8 *dest;
    s32 i;
    u32 temp;
    u32 position;
    u32 remaining;
    s32 result;

    buffer = arg0;
    count = arg2;
    dest = (u8 *)arg1;
    endian = (s32 *)gTRKBigEndian;
    i = 0;
    result = 0;
    while (result == 0 && i < count) {
        if (*endian != 0) {
            source = dest;
        } else {
            source = (u8 *)&temp;
        }
        position = *(u32 *)((u8 *)buffer + 0xC);
        length = 4;
        error = 0;
        remaining = *(u32 *)((u8 *)buffer + 8) - position;
        if (length > remaining) {
            error = 0x302;
            length = remaining;
        }
        fn_80003488(source, (u8 *)buffer + position + 0x10, length);
        *(u32 *)((u8 *)buffer + 0xC) = *(u32 *)((u8 *)buffer + 0xC) + length;
        if (*endian == 0 && error == 0) {
            dest[0] = source[3];
            dest[1] = source[2];
            dest[2] = source[1];
            dest[3] = source[0];
        }
        result = error;
        dest += 4;
        i += 1;
    }
    return result;
}
#pragma global_optimizer on

#pragma use_lmw_stmw on
s32 fn_8022641C(void *arg0, s32 arg1, s32 arg2)
{
    void fn_80003488(void *, void *, s32);
    s32 error;
    u32 count;
    s32 i;
    s32 result;

    i = 0;
    result = 0;
    while (result == 0 && i < arg2) {
        u32 pos = *(u32 *)((u8 *)arg0 + 0xC);
        count = 0;
        count += 1;
        error = 0;
        if (count > (*(u32 *)((u8 *)arg0 + 8) - pos)) {
            error = 0x302;
            count = *(u32 *)((u8 *)arg0 + 8) - pos;
        }
        fn_80003488((void *)(arg1 + i), (void *)((u8 *)arg0 + 0x10 + pos), count);
        {
            u32 tmp = *(u32 *)((u8 *)arg0 + 0xC);
            result = error;
            i += 1;
            *(u32 *)((u8 *)arg0 + 0xC) = tmp + count;
        }
    }
    return result;
}
#pragma use_lmw_stmw on
#pragma global_optimizer off
s32 fn_802264B4(void *buffer, u8 *arg1) {
    extern u8 gTRKBigEndian[];
    void fn_80003488(void *, void *, s32);
    u8 temp[8];
    u32 position;
    u32 remaining;
    u32 length;
    register u8 *source;
    u8 *dest;
    s32 result;

    dest = arg1;
    if (*(s32 *)gTRKBigEndian != 0) {
        source = dest;
    } else {
        source = temp;
    }
    position = *(u32 *)((u8 *)buffer + 0xC);
    length = 8;
    result = 0;
    remaining = *(u32 *)((u8 *)buffer + 8) - position;
    if (length > remaining) {
        result = 0x302;
        length = remaining;
    }
    fn_80003488(source, (u8 *)buffer + position + 0x10, length);
    *(u32 *)((u8 *)buffer + 0xC) = *(u32 *)((u8 *)buffer + 0xC) + length;
    if (*(s32 *)gTRKBigEndian == 0 && result == 0) {
        dest[0] = source[7];
        dest[1] = source[6];
        dest[2] = source[5];
        dest[3] = source[4];
        dest[4] = source[3];
        dest[5] = source[2];
        dest[6] = source[1];
        dest[7] = source[0];
    }
    return result;
}
#pragma optimization_level 3
s32 fn_8022659C(void *buffer, u32 *words, s32 count) {
    extern u8 gTRKBigEndian[];
    void fn_80003488(void *, void *, u32);
    s32 error;
    u32 size;
    void *base;
    u32 *srcWords;
    s32 i;
    s32 *endian;
    u32 rev;
    u32 word;
    u8 *src;
    u32 position;
    u32 remaining;
    s32 result;

    base = buffer;
    srcWords = words;
    endian = (s32 *)gTRKBigEndian;
    i = 0;
    result = 0;

    while (result == 0 && i < count) {
        word = *srcWords;
        if (*endian != 0) {
            src = (u8 *)&word;
        } else {
            ((u8 *)&rev)[0] = ((u8 *)&word)[3];
            ((u8 *)&rev)[1] = ((u8 *)&word)[2];
            ((u8 *)&rev)[2] = ((u8 *)&word)[1];
            ((u8 *)&rev)[3] = ((u8 *)&word)[0];
            src = (u8 *)&rev;
        }

        position = *(u32 *)((u8 *)base + 0xC);
        size = 4;
        error = 0;
        remaining = 0x880U - position;
        if (remaining < 4U) {
            error = 0x301;
            size = remaining;
        }

        if (size == 1) {
            *((u8 *)base + (position + 0x10)) = *src;
        } else {
            fn_80003488((u8 *)((position + 0x10) + (u32)base), src, size);
        }

        *(u32 *)((u8 *)base + 0xC) = *(u32 *)((u8 *)base + 0xC) + size;
        *(u32 *)((u8 *)base + 0x8) = *(u32 *)((u8 *)base + 0xC);
        result = error;
        srcWords += 1;
        i += 1;
    }

    return result;
}
#pragma optimization_level reset
s32 TRKAppendBuffer(void *arg0, u8 *arg1, s32 arg2) {
    u8 byte;
    u32 var;
    s32 err;
    s32 i;

    i = 0;
    err = 0;
    while (err == 0 && i < arg2) {
        var = *(u32 *)((u8 *)arg0 + 0xC);
        byte = *arg1;
        if (var >= 0x880U) {
            var = 0x301;
        } else {
            *(u32 *)((u8 *)arg0 + 0xC) = var + 1;
            *((u8 *)arg0 + (var + 0x10)) = byte;
            var = 0;
            *(u32 *)((u8 *)arg0 + 0x8) = *(u32 *)((u8 *)arg0 + 0x8) + 1;
        }
        err = var;
        i += 1;
        arg1 += 1;
    }
    return err;
}

s32 fn_80226700(void *arg0, u64 value) {
    extern u8 gTRKBigEndian[];
    void fn_80003488(void *, void *, s32);
    u8 rev[8];
    u8 *src;
    s32 result;
    u32 size;
    s32 pos;
    u32 remaining;

    if (*(s32 *)gTRKBigEndian) {
        src = (u8 *)&value;
    } else {
        src = rev;
        rev[0] = ((u8 *)&value)[7];
        rev[1] = ((u8 *)&value)[6];
        rev[2] = ((u8 *)&value)[5];
        rev[3] = ((u8 *)&value)[4];
        rev[4] = ((u8 *)&value)[3];
        rev[5] = ((u8 *)&value)[2];
        rev[6] = ((u8 *)&value)[1];
        rev[7] = ((u8 *)&value)[0];
    }
    pos = *(s32 *)((u8 *)arg0 + 0xC);
    size = 8;
    result = 0;
    remaining = 0x880 - pos;
    if (remaining < 8) {
        result = 0x301;
        size = remaining;
    }
    if (size == 1) {
        pos = (s32)arg0 + pos;
        *(u8 *)(pos + 0x10) = *src;
    } else {
        fn_80003488((u8 *)((s32)arg0 + pos + 0x10), src, size);
    }
    *(s32 *)((u8 *)arg0 + 0xC) = *(s32 *)((u8 *)arg0 + 0xC) + size;
    *(s32 *)((u8 *)arg0 + 0x8) = *(s32 *)((u8 *)arg0 + 0xC);
    return result;
}

s32 fn_802267FC(void *arg0, void *arg1, u32 length)
{
    void fn_80003488(void *, void *, s32);
    s32 result;
    u32 offset;
    u32 remaining;

    result = 0;
    if (!length) {
        return 0;
    }
    offset = *(u32 *)((u8 *)arg0 + 0xC);
    remaining = *(u32 *)((u8 *)arg0 + 8) - offset;
    if (length > remaining) {
        result = 0x302;
        length = remaining;
    }
    fn_80003488(arg1, (u8 *)arg0 + offset + 0x10, length);
    *(u32 *)((u8 *)arg0 + 0xC) += length;
    return result;
}

#pragma global_optimizer off
s32 TRKAppendBuffer_ui8x(void *arg0, u8 *arg1, u32 arg2) {
    void fn_80003488(void *, void *, s32);
    s32 temp_r3;
    s32 var_r31;
    u32 temp_r0;
    u32 var_r30;

    var_r31 = 0;
    var_r30 = arg2;
    if (var_r30 == 0U) {
        return 0;
    }
    temp_r3 = *(s32 *)((u8 *)arg0 + 0xC);
    temp_r0 = 0x880 - temp_r3;
    if (temp_r0 < var_r30) {
        var_r31 = 0x301;
        var_r30 = temp_r0;
    }
    if (var_r30 == 1U) {
        temp_r3 = (s32)arg0 + temp_r3;
        *(u8 *)(temp_r3 + 0x10) = *arg1;
    } else {
        fn_80003488((u8 *)((s32)arg0 + temp_r3 + 0x10), arg1, var_r30);
    }
    *(s32 *)((u8 *)arg0 + 0xC) = *(s32 *)((u8 *)arg0 + 0xC) + var_r30;
    *(s32 *)((u8 *)arg0 + 0x8) = *(s32 *)((u8 *)arg0 + 0xC);
    return var_r31;
}
#pragma global_optimizer on
s32 TRKSetBufferPosition(void *arg0, u32 arg1) {
    s32 var_r5;

    var_r5 = 0;
    if (arg1 > 0x880U) {
        var_r5 = 0x301;
    } else {
        M2C_FIELD(arg0, u32 *, 0xC) = arg1;
        if (arg1 > (u32) M2C_FIELD(arg0, u32 *, 8)) {
            M2C_FIELD(arg0, u32 *, 8) = arg1;
        }
    }
    return var_r5;
}

void TRKResetBuffer(void *arg0, s32 arg1) {
    extern void fn_80003458(void *, s32, s32);

    *(u32 *)((u8 *)arg0 + 0x8) = 0;
    *(u32 *)((u8 *)arg0 + 0xC) = 0;

    if (arg1 == 0) {
        fn_80003458((u8 *)arg0 + 0x10, 0, 0x880);
    }
}

void fn_8022699C(s32 arg0)
{
    extern u8 lbl_8033B078[];
    extern void fn_802287B0(void *);
    extern void fn_802287A8(void *);

    u8 *buffer;

    if (arg0 != -1 && arg0 >= 0 && arg0 < 3) {
        buffer = lbl_8033B078 + arg0 * 0x890;

        fn_802287B0(buffer);

        *(u32 *)(buffer + 4) = 0;

        fn_802287A8(buffer);
    }
}

void *TRKGetBuffer(s32 arg0) {
    extern u8 lbl_8033B078[];
    void *ret;

    ret = NULL;
    if (arg0 >= 0 && arg0 < 3) {
        ret = lbl_8033B078 + arg0 * 0x890;
    }
    return ret;
}

#pragma use_lmw_stmw on
s32 fn_80226A2C(s32 *arg0, void **arg1) {
    extern u8 lbl_8033B078[];
    extern void fn_802287B0(void *);
    extern void fn_802287A8(void *);
    extern s32 fn_80226E24(char *);
    extern char lbl_802822D0[];

    u8 *buf;
    s32 result;
    s32 i;

    result = 0x300;
    *arg1 = NULL;

    for (i = 0; i < 3; i++) {
        buf = NULL;
        if (i >= 0 && i < 3) {
            buf = lbl_8033B078 + i * 0x890;
        }
        fn_802287B0(buf);
        if (*(s32 *)(buf + 4) == 0) {
            *(s32 *)(buf + 8) = 0;
            result = 0;
            *(s32 *)(buf + 0xc) = 0;
            *(s32 *)(buf + 4) = 1;
            *arg1 = buf;
            *arg0 = i;
            i = 3;
        }
        fn_802287A8(buf);
    }

    if (result == 0x300) {
        fn_80226E24(lbl_802822D0);
    }
    return result;
}
#pragma use_lmw_stmw reset
int TRKInitializeMessageBuffers(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        u8 *queue = &((u8 *)&lbl_8033B078)[i * 0x890];
        fn_802287B8(queue);
        fn_802287B0(queue);
        *(u32 *)(queue + 0x4) = 0;
        fn_802287A8(queue);
    }

    return 0;
}

s32 fn_80226B68(void) {
    return 0;
}

#pragma push
#pragma optimization_level 2
s32 TRKInitializeSerialHandler(void) {
    void MWTRACE(u8 level, char *fmt, ...);
    extern u16 lbl_802822F0[200];
    extern u16 lbl_8033CA28[12];
    u8 *g = (u8 *)lbl_8033CA28;
    char *msgs = (char *)lbl_802822F0;

    *(s32 *)(g + 0) = -1;
    *(s32 *)(g + 8) = 0;
    *(s32 *)(g + 0xc) = 0;
    MWTRACE(1, msgs + 0, 0x40);
    MWTRACE(1, msgs + 0x24, 0x40);
    MWTRACE(1, msgs + 0x48, 0x40);
    MWTRACE(1, msgs + 0x6c, 0x40);
    MWTRACE(1, msgs + 0x8c, 0x40);
    MWTRACE(1, msgs + 0xac, 0x40);
    return 0;
}
#pragma pop
void fn_80226C34(s32 arg0) {
    void fn_80225F4C(void *, s32);
    void fn_80225F64(void *, s32 *);
    extern s32 lbl_8033CA28[6];
    s32 event[3];

    fn_80225F4C(event, 2);
    event[2] = arg0;
    lbl_8033CA28[0] = -1;
    fn_80225F64(event, lbl_8033CA28);
}

void TRKGetInput(void)
{
    void *fn_80226CE4(void);
    void TRKGetBuffer(void);
    void fn_80225F4C(void *, s32);
    void fn_80225F64(void *, s32 *);
    extern s32 lbl_8033CA28[6];
    s32 event[3];
    s32 temp;

    temp = (s32)fn_80226CE4();
    if (temp != -1) {
        TRKGetBuffer();
        fn_80225F4C(event, 2);
        event[2] = temp;
        lbl_8033CA28[0] = -1;
        fn_80225F64(event, lbl_8033CA28);
    }
}

s32 fn_80226CE4(void) {
s32 fn_8022B0F0(void);
void TRKSetBufferPosition(void *,u32);
s32 fn_8022B0B4(s32,s32);
s32 fn_80226A2C(s32 *, s32 *);
s32 TRKAppendBuffer(void *,void *,s32);
void MWTRACE(s32,const char *,...);
void fn_8022699C(s32);
u8 body[0x880];
u8 header[0x40];
s32 id;
s32 buffer;
s32 result;
s32 remaining;
char *strings=(char *)lbl_802822F0;
if(fn_8022B0F0()<=0) return -1;
result=fn_80226A2C(&id,&buffer);
MWTRACE(4,strings+0xD0,result);
TRKSetBufferPosition((void *)buffer,0);
if(fn_8022B0B4((s32)header,0x40)==0) {
TRKAppendBuffer((void *)buffer,header,0x40);
result=id;
remaining=*(s32 *)header-0x40;
if(remaining>0) {
MWTRACE(1,strings+0xF4,remaining);
if(fn_8022B0B4((s32)body,*(s32 *)header-0x40)==0)
TRKAppendBuffer((void *)buffer,body,*(s32 *)header);
else { MWTRACE(8,strings+0x110); fn_8022699C(result); result=-1; }
}
} else { MWTRACE(8,strings+0x144); fn_8022699C(result); result=-1; }
MWTRACE(1,strings+0x16C,result);
return result;
}

void usr_put_initialize(void) {

}

#pragma global_optimizer off
s32 fn_80226E24(s8 *arg0) {
s32 result=0;
s32 ch;
while(result==0 && (ch=*arg0++)!=0) {
result=TRKReportCharTerminated_80226E24(ch,0);
}
return result;
}

s32 TRKDispatchMessage(void *arg0) {
void TRKSetBufferPosition(void *,u32);
void MWTRACE(s32,const char *,...);
extern char lbl_80282480[],lbl_8028249C[];
s32 fn_80227F6C(void *);
s32 fn_80227EF4(void *);
s32 fn_80227E9C(void *);
s32 fn_80227E44(void *);
s32 fn_80227E3C(void *);
s32 fn_80227E34(void *);
s32 fn_80227BF0(void *);
s32 fn_802279B4(void *);
s32 TRKDoReadRegisters(void *);
s32 TRKDoWriteRegisters(void *);
s32 fn_80227394(void *);
s32 fn_80227174(void *);
s32 fn_802270CC(void *);
s32 fn_80227024(void *);
s32 result=0x500;
TRKSetBufferPosition(arg0,0);
MWTRACE(1,lbl_80282480,((u8 *)arg0)[0x14]);
switch(((u8 *)arg0)[0x14]) {
case 1: result=fn_80227F6C(arg0); break;
case 2: result=fn_80227EF4(arg0); break;
case 3: result=fn_80227E9C(arg0); break;
case 7: result=fn_80227E44(arg0); break;
case 4: result=fn_80227E3C(arg0); break;
case 5: result=fn_80227E34(arg0); break;
case 16: result=fn_80227BF0(arg0); break;
case 17: result=fn_802279B4(arg0); break;
case 18: result=TRKDoReadRegisters(arg0); break;
case 19: result=TRKDoWriteRegisters(arg0); break;
case 24: result=fn_80227394(arg0); break;
case 25: result=fn_80227174(arg0); break;
case 26: result=fn_802270CC(arg0); break;
case 23: result=fn_80227024(arg0); break;
}
MWTRACE(1,lbl_8028249C,result);
return result;
}

#pragma global_optimizer reset
s32 TRKInitializeDispatcher(void) {
    return 0;
}

#pragma global_optimizer off
s32 fn_80227024(void *arg0) {
    extern char gTRK_str_SerialIO[];
    s32 fn_80226E24(char *);
    void fn_8022B4A0(u8);
    s32 TRK_cc_write(void *, s32);
    void *memset(void *, int, u32);

    u8 reply[0x40];
    u8 enabled;
    char *strings;

    enabled = *((u8 *)arg0 + 0x1C);
    strings = gTRK_str_SerialIO;

    if (*((u8 *)arg0 + 0x18) == 1) {
        fn_80226E24(strings + 0);
        if (enabled != 0) {
            fn_80226E24(strings + 0x20);
        } else {
            fn_80226E24(strings + 0x28);
        }
        fn_8022B4A0(enabled);
    }

    memset(reply, 0, 0x40);
    reply[4] = 0x80;
    *(u32 *)reply = 0x40;
    reply[8] = 0;
    TRK_cc_write(reply, 0x40);
    return 0;
}
#pragma global_optimizer reset
s32 fn_802270CC(void) {
    s32 fn_80228DF8(void);
    s32 TRK_cc_write(s32, s32);
    u8 buffer[0x40];
    s8 status;
    switch (fn_80228DF8()) {
    case 0: status = 0; break;
    case 0x704: status = 0x21; break;
    case 0x705: status = 0x22; break;
    case 0x706: status = 0x20; break;
    default: status = 1; break;
    }
    memset(buffer, 0, 0x40);
    buffer[4] = 0x80;
    *(u32 *)buffer = 0x40;
    buffer[8] = status;
    TRK_cc_write((s32)buffer, 0x40);
    return 0;
}

s32 TRKTargetStopped(void);
s32 TRKTargetStopper(void);
u32 fn_80229030(void);
s32 fn_80229040(u32, u32, s32);
s32 fn_802290F8(u32, s32);
s32 TRK_cc_write(s32, s32);
#pragma use_lmw_stmw on
s32 fn_80227174(void *arg0) {
    s32 TRKSetBufferPosition(void *, u32);
    void *a;
    u8 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    s32 ret;

    a = arg0;
    TRKSetBufferPosition(a, 0);
    unk18 = *(u8 *)((u8 *)a + 0x18);
    unk20 = *(u32 *)((u8 *)a + 0x20);
    unk24 = *(u32 *)((u8 *)a + 0x24);

    switch (unk18) {
    case 0:
    case 16:
        unk1C = *(u8 *)((u8 *)a + 0x1c);
        if (unk1C < 1) {
            u8 buf[0x40];
            memset(buf, 0, 0x40);
            buf[4] = 0x80;
            *(s32 *)buf = 0x40;
            buf[8] = 0x11;
            TRK_cc_write((s32)(void *)buf, 0x40);
            return 0;
        }
        break;
    case 1:
    case 17: {
        u32 pc = fn_80229030();
        if (pc < unk20 || pc > unk24) {
            u8 buf[0x40];
            memset(buf, 0, 0x40);
            buf[4] = 0x80;
            *(s32 *)buf = 0x40;
            buf[8] = 0x11;
            TRK_cc_write((s32)(void *)buf, 0x40);
            return 0;
        }
        break;
    }
    default: {
        u8 buf[0x40];
        memset(buf, 0, 0x40);
        buf[4] = 0x80;
        *(s32 *)buf = 0x40;
        buf[8] = 0x12;
        TRK_cc_write((s32)(void *)buf, 0x40);
        return 0;
    }
    }

    if (TRKTargetStopped() == 0) {
        u8 buf[0x40];
        memset(buf, 0, 0x40);
        buf[4] = 0x80;
        *(s32 *)buf = 0x40;
        buf[8] = 0x16;
        TRK_cc_write((s32)(void *)buf, 0x40);
        return 0;
    }
    {
        u8 buf[0x40];
        memset(buf, 0, 0x40);
        buf[4] = 0x80;
        *(s32 *)buf = 0x40;
        buf[8] = 0x0;
        TRK_cc_write((s32)(void *)buf, 0x40);
    }

    ret = 0;
    switch (unk18) {
    case 0:
    case 16:
        ret = fn_802290F8(unk1C, unk18 == 16);
        break;
    case 1:
    case 17:
        ret = fn_80229040(unk20, unk24, unk18 == 17);
        break;
    }
    return ret;
}

s32 fn_80227394(void) {
    void MWTRACE(u8, char *, ...);
    s32 TRKTargetStopped(void);
    s32 TRKTargetContinue(void);
    s32 TRK_cc_write(void *, s32);
    void *memset(void *, s32, s32);
    extern char lbl_802824F4[];

    struct {
        u32 size;
        u8 b4;
        u8 pad5[3];
        u8 b8;
        u8 pad9[0x37];
    } reply_ack, reply_cont;

    MWTRACE(1, lbl_802824F4);

    if (TRKTargetStopped() == 0) {
        memset(&reply_ack, 0, 0x40);
        reply_ack.b4 = 0x80;
        reply_ack.size = 0x40;
        reply_ack.b8 = 0x16;
        TRK_cc_write(&reply_ack, 0x40);
        return 0;
    }

    memset(&reply_cont, 0, 0x40);
    reply_cont.b4 = 0x80;
    reply_cont.size = 0x40;
    reply_cont.b8 = 0;
    TRK_cc_write(&reply_cont, 0x40);
    return TRKTargetContinue();
}

s32 TRKDoWriteRegisters(void *buffer) {
    /* MetroTRK: write a register range from the command buffer to the target. */
    void TRKSetBufferPosition(void *, u32);
    void TRKResetBuffer(void *, u32);
    s32 TRKTargetAccessDefault(u16, u16, void *, s32 *, s32);
    s32 TRKTargetAccessFP(u16, u16, void *, s32 *, s32);
    s32 TRKTargetAccessExtended1(u16, u16, void *, s32 *, s32);
    s32 TRKTargetAccessExtended2(u16, u16, void *, s32 *, s32);
    s32 TRKAppendBuffer_ui8x(void *, void *, s32);
    s32 TRK_cc_write(void *, s32);
    s32 TRKMessageSend(void *);
    void MWTRACE(u8, char *, ...);
    void *memset(void *, s32, s32);
    extern char gTRK_str_SendACK[];
    extern char gTRK_str_MessageSendErr[];

    s32 err;
    u16 firstReg;
    u16 lastReg;
    void *buf;
    s32 outLen;
    u8 ackReply[0x40];
    u8 invalidReply[0x40];
    u8 errorReply[0x40];

    buf = buffer;
    err = ((u8 *)buffer)[0x18];
    firstReg = *(u16 *)((u8 *)buffer + 0x1C);
    lastReg = *(u16 *)((u8 *)buffer + 0x20);
    TRKSetBufferPosition(buffer, 0);

    if (firstReg > lastReg) {
        memset(invalidReply, 0, 0x40);
        invalidReply[4] = 0x80;
        *(s32 *)invalidReply = 0x40;
        invalidReply[8] = 0x14;
        TRK_cc_write(invalidReply, 0x40);
        return 0;
    }

    TRKSetBufferPosition(buf, 0x40);

    switch (err) {
    case 0:
        err = TRKTargetAccessDefault(firstReg, lastReg, buf, &outLen, 0);
        break;
    case 1:
        err = TRKTargetAccessFP(firstReg, lastReg, buf, &outLen, 0);
        break;
    case 2:
        err = TRKTargetAccessExtended1(firstReg, lastReg, buf, &outLen, 0);
        break;
    case 3:
        err = TRKTargetAccessExtended2(firstReg, lastReg, buf, &outLen, 0);
        break;
    default:
        err = 0x703;
        break;
    }

    TRKResetBuffer(buf, 0);

    if (err == 0) {
        memset(ackReply, 0, 0x40);
        *(s32 *)ackReply = 0x40;
        ackReply[4] = 0x80;
        ackReply[8] = (u8)err;
        err = TRKAppendBuffer_ui8x(buf, ackReply, 0x40);
    }

    if (err != 0) {
        switch (err) {
        case 0x703:
            err = 0x12;
            break;
        case 0x701:
            err = 0x14;
            break;
        case 0x302:
            err = 0x2;
            break;
        case 0x702:
            err = 0x15;
            break;
        case 0x704:
            err = 0x21;
            break;
        case 0x705:
            err = 0x22;
            break;
        case 0x706:
            err = 0x20;
            break;
        default:
            err = 0x3;
            break;
        }

        memset(errorReply, 0, 0x40);
        errorReply[4] = 0x80;
        *(s32 *)errorReply = 0x40;
        errorReply[8] = (u8)err;
        TRK_cc_write(errorReply, 0x40);
        return 0;
    }

    MWTRACE(1, gTRK_str_SendACK);
    err = TRKMessageSend(buf);
    MWTRACE(1, gTRK_str_MessageSendErr, err);
    return err;
}

/* Build reply with all CPU register banks and send it. */
s32 TRKDoReadRegisters(void *buffer) {
    void TRKResetBuffer(void *, u32);
    s32 TRKAppendBuffer(void *, void *, s32);
    s32 TRKTargetAccessDefault(u16, u16, void *, s32 *, s32);
    s32 TRKTargetAccessFP(u16, u16, void *, s32 *, s32);
    s32 TRKTargetAccessExtended1(u16, u16, void *, s32 *, s32);
    s32 TRKTargetAccessExtended2(u16, u16, void *, s32 *, s32);
    s32 TRK_cc_write(void *, s32);
    s32 TRKMessageSend(void *);
    void MWTRACE(u8, char *, ...);
    void *memset(void *, s32, s32);
    extern char gTRK_str_SerialIO[];

    s32 result, err;
    s8 replyCode;
    char *strings = gTRK_str_SerialIO;
    u8 header[0x40], invalidReply[0x40], errorReply[0x40];
    s32 outLen;

    if (*(u16 *)((u8 *)buffer + 0x1c) > *(u16 *)((u8 *)buffer + 0x20)) {
        memset(invalidReply, 0, 0x40);
        invalidReply[4] = 0x80;
        *(s32 *)invalidReply = 0x40;
        invalidReply[8] = 0x14;
        TRK_cc_write(invalidReply, 0x40);
        return 0;
    }

    header[4] = 0x80;
    *(s32 *)header = 0x468;
    TRKResetBuffer(buffer, 0);
    MWTRACE(4, strings + 0x98, *(s32 *)((u8 *)buffer + 8));
    TRKAppendBuffer(buffer, header, 0x40);
    MWTRACE(4, strings + 0x98, *(s32 *)((u8 *)buffer + 8));
    err = TRKTargetAccessDefault(0, 0x24, buffer, &outLen, 1);
    MWTRACE(4, strings + 0xc0, err);
    MWTRACE(4, strings + 0x98, *(s32 *)((u8 *)buffer + 8));
    if (!err)
        err = TRKTargetAccessFP(0, 0x21, buffer, &outLen, 1);
    MWTRACE(4, strings + 0xf8, err);
    MWTRACE(4, strings + 0x98, *(s32 *)((u8 *)buffer + 8));
    if (!err)
        err = TRKTargetAccessExtended1(0, 0x60, buffer, &outLen, 1);
    MWTRACE(4, strings + 0x120, err);
    MWTRACE(4, strings + 0x98, *(s32 *)((u8 *)buffer + 8));
    if (!err)
        err = TRKTargetAccessExtended2(0, 0x1f, buffer, &outLen, 1);
    MWTRACE(4, strings + 0x150, err);
    MWTRACE(4, strings + 0x98, *(s32 *)((u8 *)buffer + 8));
    if (err) {
        switch (err) {
        case 0x703:
            replyCode = 0x12;
            break;
        case 0x701:
            replyCode = 0x14;
            break;
        case 0x702:
            replyCode = 0x15;
            break;
        case 0x704:
            replyCode = 0x21;
            break;
        case 0x705:
            replyCode = 0x22;
            break;
        case 0x706:
            replyCode = 0x20;
            break;
        default:
            replyCode = 3;
            break;
        }
        memset(errorReply, 0, 0x40);
        errorReply[4] = 0x80;
        *(s32 *)errorReply = 0x40;
        errorReply[8] = replyCode;
        TRK_cc_write(errorReply, 0x40);
        return 0;
    }
    MWTRACE(1, strings + 0x60);
    result = TRKMessageSend(buffer);
    MWTRACE(1, strings + 0x80, result);
    return result;
}

s32 fn_802279B4(void *buffer) {
#pragma inline_depth(0)
 s32 fn_80228D24(s32,u32,s32 *,s32);
 s32 fn_8022A0E4(u32 *,u32,u32 *,s32,s32);
 void MWTRACE(u8,char *,...);
 void *memset(void *,s32,s32);
 s32 TRK_cc_write(void *,s32);
 void TRKSetBufferPosition(void *,u32);
 void TRKResetBuffer(void *,u32);
 s32 TRKAppendBuffer_ui8x(void *,void *,s32);
 s32 TRKMessageSend(void *);
 extern char gTRK_str_SerialIO[];
 u8 data[0x820] __attribute__((aligned(32)));
 u8 ack[0x40],invalid[0x40],error[0x40];
 u32 length;
 s32 err;
 s32 options;
 u16 size;
 u32 address;
 s32 result;
 char *strings=gTRK_str_SerialIO;
 address=*(u32 *)((u8 *)buffer+0x20);
 size=*(u16 *)((u8 *)buffer+0x1C);
 options=((u8 *)buffer)[0x18];
 MWTRACE(1,strings+0x180,((u8 *)buffer)[0x14],address,size,options);
 if(options&2) {
 memset(invalid,0,0x40);
 invalid[4]=0x80;
 *(u32 *)invalid=0x40;
 invalid[8]=0x12;
 TRK_cc_write(invalid,0x40);
 return 0;
 }
 length=size;
 TRKSetBufferPosition(buffer,0x40);
 if(options&0x40) {
 fn_802267FC(buffer,data+(address&31),length);
 options=fn_80228D24((s32)data,address,(s32 *)&length,0);
 } else {
 fn_802267FC(buffer,data,length);
 options=fn_8022A0E4((u32 *)data,address,&length,((options >> 3)&1)^1,0);
 }
 err=options;
 TRKResetBuffer(buffer,0);
 if(err==0) {
 memset(ack,0,0x40);
 *(u32 *)ack=0x40;
 ack[4]=0x80;
 ack[8]=err;
 err=TRKAppendBuffer_ui8x(buffer,ack,0x40);
 }
 if(err!=0) {
 switch(err) {
 case 0x702:err=0x15;break;
 case 0x700:err=0x13;break;
 case 0x704:err=0x21;break;
 case 0x705:err=0x22;break;
 case 0x706:err=0x20;break;
 default:err=3;break;
 }
 memset(error,0,0x40);
 error[4]=0x80;
 *(u32 *)error=0x40;
 error[8]=err;
 TRK_cc_write(error,0x40);
 return 0;
 }
 MWTRACE(1,strings+0x60);
 {result=TRKMessageSend(buffer);
 MWTRACE(1,strings+0x80,result);
 return result;}
#pragma inline_depth reset
}

#pragma use_lmw_stmw reset
s32 fn_80227BF0(void *buffer) {
#pragma inline_depth(0)
 s32 fn_80228D24(s32,u32,s32 *,s32);
 s32 fn_8022A0E4(u32 *,u32,u32 *,s32,s32);
 void MWTRACE(u8,char *,...);
 void *memset(void *,s32,s32);
 s32 TRK_cc_write(void *,s32);
 void TRKSetBufferPosition(void *,u32);
 void TRKResetBuffer(void *,u32);
 s32 TRKAppendBuffer_ui8x(void *,void *,s32);
 s32 TRKMessageSend(void *);
 extern char gTRK_str_SerialIO[];
 u8 data[0x820] __attribute__((aligned(32)));
 u8 ack[0x40],invalid[0x40],error[0x40];
 u32 length;
 s32 result;
 s32 err;
 s32 extended;
 u8 replyError;
 s32 options;
 u16 size;
 u32 address;
 
 char *strings=gTRK_str_SerialIO;
 address=*(u32 *)((u8 *)buffer+0x20);
 size=*(u16 *)((u8 *)buffer+0x1C);
 options=((u8 *)buffer)[0x18];
 MWTRACE(1,strings+0x1B0,((u8 *)buffer)[0x14],address,size,options);
 if(options&2) {
 memset(invalid,0,0x40);
 invalid[4]=0x80;
 *(u32 *)invalid=0x40;
 invalid[8]=0x12;
 TRK_cc_write(invalid,0x40);
 return 0;
 }
 extended=options&0x40;
 length=size;
 if(extended) {
 options=fn_80228D24((s32)data,address,(s32 *)&length,1);
 } else {
 options=fn_8022A0E4((u32 *)data,address,&length,((options >> 3)&1)^1,1);
 }
 err=options;
 TRKResetBuffer(buffer,0);
 if(err==0) {
 memset(ack,0,0x40);
 ack[8]=err;
 *(u32 *)ack=length+0x40;
 ack[4]=0x80;
 TRKAppendBuffer_ui8x(buffer,ack,0x40);
 if(extended) err=TRKAppendBuffer_ui8x(buffer,data+(address&31),length);
 else err=TRKAppendBuffer_ui8x(buffer,data,length);
 }
 if(err!=0) {
 switch(err) {
 case 0x702:replyError=0x15;break;
 case 0x700:replyError=0x13;break;
 case 0x704:replyError=0x21;break;
 case 0x705:replyError=0x22;break;
 case 0x706:replyError=0x20;break;
 default:replyError=3;break;
 }
 memset(error,0,0x40);
 error[4]=0x80;
 *(u32 *)error=0x40;
 error[8]=replyError;
 TRK_cc_write(error,0x40);
 return 0;
 }
 MWTRACE(1,strings+0x60);
 {result=TRKMessageSend(buffer);
 MWTRACE(1,strings+0x80,result);
 return result;}
#pragma inline_depth reset
}

s32 fn_80227E34(void) {
    return 0;
}

s32 fn_80227E3C(void) {
    return 0;
}

s32 fn_80227E44(void) {
    M2C_UNK fn_8022AD08(void);
    M2C_UNK TRK_cc_write(void *, s32);
    M2C_UNK memset(void *, s32, s32);
    struct {
        u32 unk0;
        u8 unk4;
        u8 pad5[3];
        u8 unk8;
        u8 pad9[0x37];
    } reply;

    memset(&reply, 0, sizeof(reply));
    reply.unk4 = 0x80;
    reply.unk0 = 0x40;
    reply.unk8 = 0;
    TRK_cc_write(&reply, 0x40);
    fn_8022AD08();
    return 0;
}

s32 fn_80227E9C(void) {
    M2C_UNK fn_800053E0(void);
    M2C_UNK TRK_cc_write(void *, s32);
    M2C_UNK memset(void *, s32, s32);
    struct {
        u32 unk0;
        u8 unk4;
        u8 pad5[3];
        u8 unk8;
        u8 pad9[0x37];
    } reply;

    memset(&reply, 0, sizeof(reply));
    reply.unk4 = 0x80;
    reply.unk0 = 0x40;
    reply.unk8 = 0;
    TRK_cc_write(&reply, 0x40);
    fn_800053E0();
    return 0;
}

#pragma dont_inline on
s32 fn_80227EF4(void) {
    M2C_UNK fn_80225F64(void *);
    M2C_UNK TRK_cc_write(void *, s32);
    M2C_UNK memset(void *, s32, s32);
    extern s32 lbl_8033CA40[];
    u8 event[0xC];
    struct {
        u32 unk0;
        u8 unk4;
        u8 pad5[3];
        u8 unk8;
        u8 pad9[0x37];
    } reply;

    lbl_8033CA40[0] = 0;
    memset(&reply, 0, sizeof(reply));
    reply.unk4 = 0x80;
    reply.unk0 = 0x40;
    reply.unk8 = 0;
    TRK_cc_write(&reply, 0x40);
    fn_80225F4C(event, 1);
    fn_80225F64(event);
    return 0;
}
#pragma dont_inline reset
s32 fn_80227F6C(void) {
    M2C_UNK TRK_cc_write(void *, s32);
    M2C_UNK memset(void *, s32, s32);
    extern s32 lbl_8033CA40[];
    struct {
        u32 unk0;
        u8 unk4;
        u8 pad5[3];
        u8 unk8;
        u8 pad9[0x37];
    } reply;

    lbl_8033CA40[0] = 1;
    memset(&reply, 0, sizeof(reply));
    reply.unk4 = 0x80;
    reply.unk0 = 0x40;
    reply.unk8 = 0;
    TRK_cc_write(&reply, 0x40);
    return 0;
}

void fn_80227FD0(s32 arg0) {
    extern s32 lbl_8033CA40[];
    lbl_8033CA40[0] = arg0;
}

s32 fn_80227FDC(void) {
    extern s32 lbl_8033CA40[];
    return lbl_8033CA40[0];
}

#pragma use_lmw_stmw on
void fn_80227FEC(const u8 *bytes, s32 count) {
    void MWTRACE(s32, char *, ...);
    extern char lbl_8028269C[];
    extern char lbl_802826A4[];
    s32 i;

    for (i = 0; i < count; i++) {
        MWTRACE(8, lbl_8028269C, bytes[i]);
        if (i % 16 == 15) {
            MWTRACE(8, lbl_802826A4);
        }
    }

    MWTRACE(8, lbl_802826A4);
}
s32 fn_80228094(s32 arg0, s32 *arg1, s8 arg2, s32 *arg3, s32 arg4) {
void *TRKGetBuffer(s32);
s32 TRKAppendBuffer(void *, void *, s32);
void fn_8022699C(s32);
s32 fn_80226A2C(s32 *, s32 *);
s32 fn_802283A8(s32, s32 *, s32, s32, s32);
u8 msg[0x40];
s32 sp10;
s32 spC;
s32 sp8;
s32 err;
void *buf;
memset(msg,0,0x40);
msg[4]=0xD4;
*(s32*)msg=0x40;
*(s32*)(msg+8)=arg0;
*(s32*)(msg+12)=*arg1;
msg[16]=arg2;
err=fn_80226A2C(&spC,&sp8);
if(err==0) err=TRKAppendBuffer((void*)sp8,msg,0x40);
if(err==0) {
*arg3=0;
*arg1=-1;
err=fn_802283A8(sp8,&sp10,3,3,0);
if(err==0) {
buf=TRKGetBuffer(sp10);
if(buf!=NULL) {
*arg3=*(s32*)((u8*)buf+0x20);
*arg1=*(s32*)((u8*)buf+0x28);
}
}
fn_8022699C(sp10);
}
fn_8022699C(spC);
return err;
}

s32 fn_802281A4(s32 arg0, s32 *arg1) {
    void *TRKGetBuffer(s32);
    s32 TRKAppendBuffer(void *, void *, s32);
    void fn_8022699C(s32);
    s32 fn_80226A2C(s32 *, s32 *);
    s32 fn_802283A8(s32, s32 *, s32, s32, s32);

    u8 msg[0x40];
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 err;
    void *buf;

    memset(msg, 0, 0x40);
    msg[4] = 0xD3;
    *(s32 *)msg = 0x40;
    *(s32 *)(msg + 8) = arg0;
    err = fn_80226A2C(&spC, &sp8);
    if (err == 0) {
        err = TRKAppendBuffer((void *)sp8, msg, 0x40);
    }
    if (err == 0) {
        *arg1 = 0;
        err = fn_802283A8(sp8, &sp10, 3, 3, 0);
        if (err == 0) {
            buf = TRKGetBuffer(sp10);
        }
        if (err == 0) {
            *arg1 = *(s32 *)((u8 *)buf + 0x20);
        }
        fn_8022699C(sp10);
    }
    fn_8022699C(spC);
    return err;
}

s32 fn_8022828C(u32 arg0, s8 arg1, u32 arg2, s32 *arg3) {
#pragma push
#pragma use_lmw_stmw on
void *TRKGetBuffer(s32);
s32 TRKAppendBuffer(void *, void *, s32);
void fn_8022699C(s32);
s32 fn_80226A2C(s32 *, s32 *);
s32 fn_802283A8(s32, s32 *, s32, s32, s32);
u8 msg[0x40];
s32 sp10, spC, sp8;
s32 err;
void *buf;
memset(msg,0,0x40);
*(s32 *)arg2=0;
msg[4]=0xD2;
*(s32 *)msg=strlen((char *)arg0)+0x41;
msg[8]=arg1;
*(u16 *)(msg+12)=strlen((char *)arg0)+1;
fn_80226A2C(&spC,&sp8);
err=TRKAppendBuffer((void *)sp8,msg,0x40);
if(err==0) err=TRKAppendBuffer((void *)sp8,(void *)arg0,strlen((char *)arg0)+1);
if(err==0){
*arg3=0;
err=fn_802283A8(sp8,&sp10,7,3,0);
if(err==0) buf=TRKGetBuffer(sp10);
*arg3=*(s32 *)((u8 *)buf+0x20);
*(s32 *)arg2=*(s32 *)((u8 *)buf+0x18);
fn_8022699C(sp10);
}
fn_8022699C(spC);
return err;
#pragma pop
}

#pragma push
#pragma optimization_level 1
s32 fn_802283A8(s32 message, s32 *reply, s32 unused, s32 retries, s32 timeout) {
 void fn_80226C34(u32); void fn_8022699C(u32);
 s32 TRKMessageSend(s32); void *TRKGetBuffer(u32); void TRKSetBufferPosition(void*,s32); void fn_80227FEC(void*,u32);
 void MWTRACE(u8,char*,...);
 extern char lbl_802826A8[];
 char *strings=lbl_802826A8;
 s32 error; u8 *buffer; u32 ticks; s32 attempts; u32 command; s32 status; s32 invalid; s32 id;
 attempts=retries+1; error=0; invalid=1; *reply=-1;
 while(attempts!=0 && *reply==-1 && error==0) {
 MWTRACE(1,strings+0);
 error=TRKMessageSend(message);
 if(error==0) {
 if(timeout) ticks=0;
 for(;;) {
 do {
 *reply=fn_80226CE4();
 id=*reply; if(id!=-1) break;
 } while(!timeout || ++ticks<80000000U-20U);
 if(id!=-1) {
 invalid=0; buffer=TRKGetBuffer(id); TRKSetBufferPosition(buffer,0);
 fn_80227FEC(buffer+0x10,*(u32*)(buffer+8));
 command=buffer[0x14];
 MWTRACE(1,strings+0x18,command,command);
 if(command<0x80) {fn_80226C34(*reply); *reply=-1; continue;}
 }
 break;
 }
 if(*reply!=-1) {
 if(*(u32*)(buffer+8)<0x40) invalid=1;
 if(error==0 && !invalid) {status=buffer[0x18]; MWTRACE(1,strings+0x40,status);}
 if(error==0 && !invalid && ((s32)command!=0x80 || status!=0)) {
 MWTRACE(8,strings+0x54,command,status); invalid=1;
 }
 if(error!=0 || invalid) {fn_8022699C(*reply); *reply=-1;}
 }
 }
 attempts--;
 }
 if(*reply==-1) error=0x800;
 return error;
}
#pragma pop
s32 fn_80228588(u32 arg0, u8 *arg1, u32 *arg2, s32 *arg3, s32 arg4, s32 arg5) {
    void *TRKGetBuffer(s32);
    s32 fn_802262E8(s32);
    s32 fn_8022641C(void *, u8 *, u32);
    s32 fn_80226698(s32, void *, u32);
    void fn_8022692C(void *, u32);
    void fn_8022699C(s32);
    s32 fn_80226A2C(s32 *, s32 *);
    s32 fn_802283A8(s32, s32 *, s32, s32, s32);
    void *memset(void *, int, u32);

    u8 msg[0x40];
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r19;
    s32 temp_r20;
    void *var_r22;
    s32 var_r21;
    s32 var_r31;
    u32 var_r30;
    s32 var_r29;

    if (arg1 == NULL || *arg2 == 0) {
        return 2;
    }
    var_r29 = 0;
    *arg3 = 0;
    var_r30 = 0;
    var_r21 = 0;
    while (var_r29 == 0 && var_r30 < *arg2 && var_r21 == 0 && *arg3 == 0) {
        s32 cmd;
        s32 len_field;
        s32 flag;
        u32 remain;

        memset(msg, 0, 0x40);
        remain = 0x800;
        if (*arg2 - var_r30 <= 0x800U) {
            remain = *arg2 - var_r30;
        }
        var_r31 = remain;
        cmd = 0xD0;
        if (arg5 != 0) {
            cmd = 0xD1;
        }
        msg[4] = cmd;
        len_field = 0x40;
        if (arg5 == 0) {
            len_field = var_r31 + 0x40;
        }
        *(s32 *)msg = len_field;
        *(u32 *)(msg + 8) = arg0;
        *(u16 *)(msg + 0xC) = (u16)var_r31;
        fn_80226A2C(&spC, &sp8);
        var_r21 = fn_80226698(sp8, msg, 0x40U);
        if ((arg5 == 0) && (var_r21 == 0)) {
            var_r21 = fn_80226698(sp8, arg1 + var_r30, var_r31);
        }
        if (var_r21 == 0) {
            if (arg4 != 0) {
                flag = 0;
                if ((arg5 != 0) && (arg0 == 0U)) {
                    flag = 1;
                }
                var_r21 = fn_802283A8(sp8, &sp10, arg5 ? 5 : 5, 3, flag == 0);
                if (var_r21 == 0) {
                    var_r22 = TRKGetBuffer(sp10);
                }
                temp_r20 = (u8)*(u32 *)((u8 *)var_r22 + 0x20);
                temp_r19 = *(u16 *)((u8 *)var_r22 + 0x24);
                if ((arg5 != 0) && (var_r21 == 0) && ((u32)temp_r19 <= (u32)var_r31)) {
                    fn_8022692C(var_r22, 0x40);
                    var_r21 = fn_8022641C(var_r22, arg1 + var_r30, temp_r19);
                    if (var_r21 == 0x302) {
                        var_r21 = 0;
                    }
                }
                if ((u32)temp_r19 != (u32)var_r31) {
                    var_r31 = temp_r19;
                    var_r29 = 1;
                }
                *arg3 = temp_r20;
                fn_8022699C(sp10);
            } else {
                var_r21 = fn_802262E8(sp8);
            }
        }
        fn_8022699C(spC);
        var_r30 += var_r31;
    }
    *arg2 = var_r30;
    return var_r21;
}
#pragma use_lmw_stmw reset

int fn_802287A8(void) {
    return 0;
}

int fn_802287B0(void) {
    return 0;
}

int fn_802287B8(void) {
    return 0;
}

s32 fn_802287C0(s32 arg0) {
    s32 fn_80226A2C(s32 *, s32 *);
    s32 fn_802283A8(s32, s32 *, s32, s32, s32);
    void fn_802291A4(s32);
    void fn_80229228(s32);
    void fn_8022699C(s32);
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 var_r31;

    var_r31 = fn_80226A2C(&spC, &sp8);
    if (var_r31 == 0) {
        if (var_r31 == 0) {
            if (arg0 == 0x90) {
                fn_80229228(sp8);
            } else {
                fn_802291A4(sp8);
            }
        }
        var_r31 = fn_802283A8(sp8, &sp10, 2, 3, 1);
        if (var_r31 == 0) {
            fn_8022699C(sp10);
        }
        fn_8022699C(spC);
    }
    return var_r31;
}

asm void fn_80228858(u32 param_1, int param_2)
{
nofralloc
lis r5, 0xFFFFFFF1@h
ori r5, r5, 0xFFFFFFF1@l
and r5, r5, r3
subf r3, r5, r3
add r4, r4, r3
loop:
dcbst 0, r5
dcbf 0, r5
sync
icbi 0, r5
addic r5, r5, 8
addic. r4, r4, -8
bge loop
isync
blr
}

#pragma optimization_level 3
void fn_80228890(void *arg0, u32 arg1, u32 arg2)
{
    u8 *dest;
    u32 value;
    u32 align;

    dest = ((u8 *)arg0) - 1;
    value = (u8)arg1;
    if (arg2 >= 0x20U) {
        align = (~((u32)dest)) & 3;
        if (align != 0) {
            arg2 -= align;
            do {
                *(++dest) = (u8)value;
            } while ((--align) != 0);
        }
        if (value != 0) {
            value |= ((value << 24) | (value << 16)) | (value << 8);
        }
        arg0 = dest - 3;
        if ((arg1 = arg2 >> 5) != 0) {
            do {
                ((u32 *)arg0)[1] = value;
                ((u32 *)arg0)[2] = value;
                arg0 = ((u8 *)arg0) + 4;
                ((u32 *)arg0)[2] = value;
                ((u32 *)arg0)[3] = value;
                ((u32 *)arg0)[4] = value;
                ((u32 *)arg0)[5] = value;
                ((u32 *)arg0)[6] = value;
                arg0 = ((u8 *)arg0) + 0x1C;
                *((u32 *)arg0) = value;
            } while ((--arg1) != 0);
        }
        if ((arg1 = (arg2 >> 2) & 7) != 0) {
            do {
                arg0 = ((u32 *)arg0) + 1;
                *((u32 *)arg0) = value;
            } while ((--arg1) != 0);
        }
        dest = ((u8 *)arg0) + 3;
        arg2 &= 3;
    }
    if (arg2 != 0) {
        do {
            *(++dest) = (u8)value;
        } while ((--arg2) != 0);
    }
}
#pragma optimization_level reset
#pragma push

asm u32 fn_80228948() {
    nofralloc
    mfmsr r3
    blr
}
#pragma pop
asm void fn_80228950(register u32 v)
{
mtmsr v
blr
}

static asm void fn_80228958(register void* dest, register const void* src, register int n, register u32 param_4, register u32 param_5)
{
nofralloc
mfmsr r8
li r10 , 0
top_loop:
cmpw r10 , n
beq out_loop
mtmsr param_5
sync
lbzx r9 , r10 , src
mtmsr param_4
sync
stbx r9 , r10 , dest
addi r10 , r10 , 1
b top_loop
out_loop:
mtmsr r8
sync
blr
}

extern u8 gTRKState[];
extern u8 TRK_saved_exceptionID_8033CA48[];
extern u8 gTRKCPUState[1072];
void TRKUARTInterruptHandler(void);
extern u8 gTRKExceptionStatus_8029E574[];
extern u8 gTRKSaveState[];
void TRKExceptionHandler(u16 exceptionID);
void TRKSaveExtended1Block(void);
void TRKPostInterruptEvent(void);
#pragma push
asm void TRKInterruptHandler(void) {
    nofralloc
    mtsrr0 r2
    mtsrr1 r4
    mfsprg r4, 3
    mfcr r2
    mtsprg 3, r2
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, 0x8c(r2)
    ori r2, r2, 0x8002
    xori r2, r2, 0x8002
    sync
    mtmsr r2
    sync
    lis r2, TRK_saved_exceptionID_8033CA48@h
    ori r2, r2, TRK_saved_exceptionID_8033CA48@l
    sth r3, 0x0(r2)
    cmpwi r3, 0x500
    bne L_80228A5C
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    mflr r3
    stw r3, 0x42c(r2)
    bl TRKUARTInterruptHandler
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    lwz r3, 0x42c(r2)
    mtlr r3
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, 0xa0(r2)
    lbz r2, 0x0(r2)
    cmpwi r2, 0x0
    beq L_80228A40
    lis r2, gTRKExceptionStatus_8029E574@h
    ori r2, r2, gTRKExceptionStatus_8029E574@l
    lbz r2, 0xc(r2)
    cmpwi r2, 0x1
    beq L_80228A40
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    li r3, 0x1
    stb r3, 0x9c(r2)
    b L_80228A5C
L_80228A40:
    lis r2, gTRKSaveState@h
    ori r2, r2, gTRKSaveState@l
    lwz r3, 0x88(r2)
    mtcrf 255, r3
    lwz r3, 0xc(r2)
    lwz r2, 0x8(r2)
    rfi
L_80228A5C:
    lis r2, TRK_saved_exceptionID_8033CA48@h
    ori r2, r2, TRK_saved_exceptionID_8033CA48@l
    lhz r3, 0x0(r2)
    lis r2, gTRKExceptionStatus_8029E574@h
    ori r2, r2, gTRKExceptionStatus_8029E574@l
    lbz r2, 0xc(r2)
    cmpwi r2, 0x0
    bne TRKExceptionHandler
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    stw r0, 0x0(r2)
    stw r1, 0x4(r2)
    mfsprg r0, 1
    stw r0, 0x8(r2)
    sth r3, 0x2f8(r2)
    sth r3, 0x2fa(r2)
    mfsprg r0, 2
    stw r0, 0xc(r2)
    stmw r4, 0x10(r2)
    mfsrr0 r27
    mflr r28
    mfsprg r29, 3
    mfctr r30
    mfxer r31
    stmw r27, 0x80(r2)
    bl TRKSaveExtended1Block
    lis r2, gTRKExceptionStatus_8029E574@h
    ori r2, r2, gTRKExceptionStatus_8029E574@l
    li r3, 0x1
    stb r3, 0xc(r2)
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r0, 0x8c(r2)
    sync
    mtmsr r0
    sync
    lwz r0, 0x80(r2)
    mtlr r0
    lwz r0, 0x84(r2)
    mtctr r0
    lwz r0, 0x88(r2)
    mtxer r0
    lwz r0, 0x94(r2)
    mtdsisr r0
    lwz r0, 0x90(r2)
    mtdar r0
    lmw r3, 0xc(r2)
    lwz r0, 0x0(r2)
    lwz r1, 0x4(r2)
    lwz r2, 0x8(r2)
    b TRKPostInterruptEvent
}
#pragma pop

typedef struct StopInfo_PPC {
    u32 PC;
    u32 PCInstruction;
    u16 exceptionID;
} StopInfo_PPC;
typedef struct TRKExceptionStatus {
    StopInfo_PPC exceptionInfo;
    u8 inTRK;
    u8 exceptionDetected;
} TRKExceptionStatus;
extern u8 gTRKExceptionStatus_8029E574[];
asm void TRKExceptionHandler(u16 exceptionID)
{
nofralloc
lis r2, gTRKExceptionStatus_8029E574@h
ori r2, r2, gTRKExceptionStatus_8029E574@l
sth r3, TRKExceptionStatus.exceptionInfo.exceptionID(r2)
mfsrr0 r3
stw r3, TRKExceptionStatus.exceptionInfo.PC(r2)
lhz r3, TRKExceptionStatus.exceptionInfo.exceptionID(r2)
cmpwi r3, 0x200
beq LAB_00010ba4
cmpwi r3, 0x300
beq LAB_00010ba4
cmpwi r3, 0x400
beq LAB_00010ba4
cmpwi r3, 0x600
beq LAB_00010ba4
cmpwi r3, 0x700
beq LAB_00010ba4
cmpwi r3, 0x800
beq LAB_00010ba4
cmpwi r3, 0x1000
beq LAB_00010ba4
cmpwi r3, 0x1100
beq LAB_00010ba4
cmpwi r3, 0x1200
beq LAB_00010ba4
cmpwi r3, 0x1300
beq LAB_00010ba4
b LAB_00010bb0
LAB_00010ba4:
mfsrr0 r3
addi r3, r3, 0x4
mtsrr0 r3
LAB_00010bb0:
lis r2, gTRKExceptionStatus_8029E574@h
ori r2, r2, gTRKExceptionStatus_8029E574@l
li r3, 0x1
stb r3, TRKExceptionStatus.exceptionDetected(r2)
mfsprg r3, 3
mtcrf 0xff, r3
mfsprg r2, 1
mfsprg r3, 2
rfi
}
extern u8 gTRKState[];
void TRKInterruptHandlerEnableInterrupts(void);
void TRKRestoreExtended1Block(void);
extern u8 gTRKCPUState[1072];
#pragma push
asm M2C_UNK TRKSwapAndGo(void) {
    nofralloc
    lis r3, gTRKState@h
    ori r3, r3, gTRKState@l
    stmw r0, 0x0(r3)
    mfmsr r0
    stw r0, 0x8c(r3)
    mflr r0
    stw r0, 0x80(r3)
    mfctr r0
    stw r0, 0x84(r3)
    mfxer r0
    stw r0, 0x88(r3)
    mfdsisr r0
    stw r0, 0x94(r3)
    mfdar r0
    stw r0, 0x90(r3)
    li r1, -0x7ffe
    nor r1, r1, r1
    mfmsr r3
    and r3, r3, r1
    mtmsr r3
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, 0xa0(r2)
    lbz r2, 0x0(r2)
    cmpwi r2, 0x0
    beq L_80228C40
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    li r3, 0x1
    stb r3, 0x9c(r2)
    b TRKInterruptHandlerEnableInterrupts
L_80228C40:
    lis r2, gTRKExceptionStatus_8029E574@h
    ori r2, r2, gTRKExceptionStatus_8029E574@l
    li r3, 0x0
    stb r3, 0xc(r2)
    bl TRKRestoreExtended1Block
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    lmw r27, 0x80(r2)
    mtsrr0 r27
    mtlr r28
    mtcrf 255, r29
    mtctr r30
    mtxer r31
    lmw r3, 0xc(r2)
    lwz r0, 0x0(r2)
    lwz r1, 0x4(r2)
    lwz r2, 0x8(r2)
    rfi
}
#pragma pop


#pragma push
asm void TRKInterruptHandlerEnableInterrupts(void) {
    nofralloc
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r0, 0x8c(r2)
    sync
    mtmsr r0
    sync
    lwz r0, 0x80(r2)
    mtlr r0
    lwz r0, 0x84(r2)
    mtctr r0
    lwz r0, 0x88(r2)
    mtxer r0
    lwz r0, 0x94(r2)
    mtdsisr r0
    lwz r0, 0x90(r2)
    mtdar r0
    lmw r3, 0xc(r2)
    lwz r0, 0x0(r2)
    lwz r1, 0x4(r2)
    lwz r2, 0x8(r2)
    b TRKPostInterruptEvent
}
#pragma pop

#pragma intrinsic __mffs
asm void fn_80228CDC(register f64*)
{
nofralloc
stwu r1, -0x40(r1)
stfd f31, 0x10(r1)
psq_st f31, 0x20(r1),0,0
mffs f31
stfd f31, 0x0(r3)
psq_l f31, 0x20(r1),0,0
lfd f31, 0x10(r1)
addi r1, r1, 0x40
blr
}
asm void fn_80228D00(register f64*)
{
nofralloc
stwu r1, -0x40(r1)
stfd f31, 0x10(r1)
psq_st f31, 0x20(r1), 0, 0
lfd f31, 0(r3)
mtfsf 0xff, f31
psq_l f31, 0x20(r1), 0, 0
lfd f31, 0x10(r1)
addi r1, r1, 0x40
blr
}

s32 fn_80228D24(s32 arg0, u32 arg1, s32 *arg2, s32 arg3) {
    extern u8 gTRKExceptionStatus_8029E574[];
    void fn_8022AB88(s32, u32, s32 *);
    void fn_8022A99C(s32, u32, s32 *);
    typedef struct { u32 words[4]; } ExceptionStatus;
    ExceptionStatus saved;
    s32 result = 0;
    u8 *status = gTRKExceptionStatus_8029E574;
    saved = *(ExceptionStatus *)status;
    status[0xd] = 0;
    if (arg3) fn_8022AB88(arg0, arg1, arg2);
    else fn_8022A99C(arg0, arg1, arg2);
    if (status[0xd]) { result = 0x702; *arg2 = 0; }
    *(ExceptionStatus *)gTRKExceptionStatus_8029E574 = saved;
    return result;
}

void TRKTargetSetInputPendingPtr(s32 arg0) {
    extern u8 gTRKState[];
    *(s32 *)((u8 *)gTRKState + 0xA0) = arg0;
}

s32 fn_80228DF8(void) {
    extern u8 gTRKState[];
    *(s32 *)(gTRKState + 0x98) = 1;
    return 0;
}

typedef struct TRKStepStatus {
    s32 active;
    s32 type;
    u32 count;
    u32 rangeStart;
    u32 rangeEnd;
} TRKStepStatus;

extern TRKStepStatus lbl_8029E584;
extern u8 gTRKCPUState[1072];
void MWTRACE(u8 level, char *fmt, ...);

static inline s32 TRKTargetDoStep(void) {
    extern u8 gTRKState[];

    lbl_8029E584.active = 1;
    MWTRACE(1, "TargetDoStep()\n");
    *(u32 *)(gTRKCPUState + 0x1F8) |= 0x400;
    if (lbl_8029E584.type == 0 || lbl_8029E584.type == 0x10) {
        lbl_8029E584.count--;
    }
    *(s32 *)((u8 *)gTRKState + 0x98) = 0;
    return 0;
}

void TRKTargetSetStopped(s32 arg0) {
    extern u8 gTRKState[];
    *(s32 *)((u8 *)gTRKState + 0x98) = arg0;
}

s32 TRKTargetStopped(void) {
    extern u8 gTRKState[];
    return *(s32 *)((u8 *)gTRKState + 0x98);
}

s32 TRKTargetSupportRequest(void) {
#pragma inline_depth(0)
    s32 fn_8022828C(u32, u8, u32, s32 *);
    s32 fn_80228094(s32, s32 *, u8, s32 *, s32);
    s32 fn_802281A4(s32, s32 *);
    s32 fn_80228588(u32, u8 *, u32 *, s32 *, s32, s32);
    void fn_80228858(u32, s32);
    void fn_80225F4C(void *, s32);
    void fn_80225F64(void *);

    s32 *ptr;
    s32 err;
    s32 status;
    s32 value;
    s32 command;
    u8 event[0xC];

    command = *(s32 *)(gTRKCPUState + 0xC);
    if (command != 0xD1 && command != 0xD0 && command != 0xD2 && command != 0xD3 && command != 0xD4) {
        fn_80225F4C(event, 4);
        fn_80225F64(event);
        return 0;
    }

    if (command == 0xD2) {
        err = fn_8022828C(*(u32 *)(gTRKCPUState + 0x10), (u8)*(u32 *)(gTRKCPUState + 0x14), *(u32 *)(gTRKCPUState + 0x18), &status);
        if (status == 0 && err != 0) {
            status = 1;
        }
        *(s32 *)(gTRKCPUState + 0xC) = status;
    } else if (command == 0xD3) {
        err = fn_802281A4(*(s32 *)(gTRKCPUState + 0x10), &status);
        if (status == 0 && err != 0) {
            status = 1;
        }
        *(s32 *)(gTRKCPUState + 0xC) = status;
    } else if (command == 0xD4) {
        value = **(s32 **)(gTRKCPUState + 0x14);
        err = fn_80228094(*(s32 *)(gTRKCPUState + 0x10), &value, (u8)*(u32 *)(gTRKCPUState + 0x18), &status, value);
        if (status == 0 && err != 0) {
            status = 1;
        }
        *(s32 *)(gTRKCPUState + 0xC) = status;
        **(s32 **)(gTRKCPUState + 0x14) = value;
    } else {
        ptr = *(s32 **)(gTRKCPUState + 0x14);
        err = fn_80228588(*(u32 *)(gTRKCPUState + 0x10), (u8 *)*(u32 *)(gTRKCPUState + 0x18), (u32 *)ptr, &status, 1, command == 0xD1);
        if (status == 0 && err != 0) {
            status = 1;
        }
        *(s32 *)(gTRKCPUState + 0xC) = status;
        if (command == 0xD1) {
            fn_80228858(*(u32 *)(gTRKCPUState + 0x18), *ptr);
        }
    }

    *(u32 *)(gTRKCPUState + 0x80) = *(u32 *)(gTRKCPUState + 0x80) + 4;
    return err;
#pragma inline_depth reset
}

u32 fn_80229030(void) {
    return *(u32 *)(gTRKCPUState + 0x80);
}

#pragma inline_depth(10)
s32 fn_80229040(u32 rangeStart, u32 rangeEnd, s32 stepOver) {
    s32 error = 0;

    if (stepOver) {
        error = 0x703;
    } else {
        lbl_8029E584.type = 1;
        lbl_8029E584.rangeStart = rangeStart;
        lbl_8029E584.rangeEnd = rangeEnd;
        error = TRKTargetDoStep();
    }
    return error;
}

s32 fn_802290F8(u32 count, s32 stepOver) {
    s32 error = 0;

    if (stepOver) {
        error = 0x703;
    } else {
        lbl_8029E584.type = 0;
        lbl_8029E584.count = count;
        error = TRKTargetDoStep();
    }
    return error;
}

void fn_802291A4(void *b) {
    void *memset(void *, int, u32);
    s32 fn_8022A098(u32 *, u32);
    s32 TRKAppendBuffer(void *, void *, u32);
    extern u8 gTRKExceptionStatus_8029E574[];
    struct {
        u32 size;
        u8 command;
        u32 exceptionPC;
        u32 instruction;
        u32 exceptionID;
        u8 pad[0x2C];
    } msg;
    u32 instruction;

    memset(&msg, 0, sizeof(msg));
    msg.size = sizeof(msg);
    msg.command = 0x91;
    msg.exceptionPC = *(u32 *)gTRKExceptionStatus_8029E574;
    fn_8022A098(&instruction, *(u32 *)gTRKExceptionStatus_8029E574);
    msg.instruction = instruction;
    msg.exceptionID = *(u16 *)(gTRKExceptionStatus_8029E574 + 8);
    TRKAppendBuffer(b, &msg, sizeof(msg));
}

void fn_80229228(void *b) {
 void *memset(void *, int, u32);
 s32 fn_8022A098(u32 *, u32);
 s32 TRKAppendBuffer(void *, void *, u32);
 struct { u32 size; u8 command; u32 exceptionPC; u32 instruction; u32 exceptionID; u8 pad[0x2C]; } msg;
 u32 instruction;
 memset(&msg, 0, sizeof(msg));
 msg.size=sizeof(msg); msg.command=0x90;
 msg.exceptionPC=*(u32 *)(gTRKCPUState+0x80);
 fn_8022A098(&instruction, *(u32 *)(gTRKCPUState+0x80));
 msg.instruction=instruction;
 msg.exceptionID=(u16)*(u32 *)(gTRKCPUState+0x2F8);
 TRKAppendBuffer(b,&msg,sizeof(msg));
}

s32 TRKTargetInterrupt(s32 *event) {
#pragma inline_depth(0)
 extern u8 gTRKState[]; extern char lbl_802827D8[];
 s32 result=0;
 switch(*event) {case 3: case 4:
 if(lbl_8029E584.active) {
 s32 done=1;
 *(u32*)(gTRKCPUState+0x1F8)&=~0x400;
 if(lbl_8029E584.active && (u16)*(u32*)(gTRKCPUState+0x2F8)==0xD00) {
 switch(lbl_8029E584.type) {
 case 0: if(lbl_8029E584.count) done=0; break;
 case 1: if(*(u32*)(gTRKCPUState+0x80)>=lbl_8029E584.rangeStart && *(u32*)(gTRKCPUState+0x80)<=lbl_8029E584.rangeEnd) done=0; break;
 }
 }
 if(done) lbl_8029E584.active=0;
 else { lbl_8029E584.active=1; MWTRACE(1,lbl_802827D8);
 *(u32*)(gTRKCPUState+0x1F8)|=0x400;
 if(lbl_8029E584.type==0 || lbl_8029E584.type==0x10) lbl_8029E584.count--;
 *(s32*)(gTRKState+0x98)=0; }
 }
 if(!lbl_8029E584.active) { *(s32*)(gTRKState+0x98)=1; result=fn_802287C0(0x90); }
 break;
 }
 return result;
#pragma inline_depth reset
}

#pragma global_optimizer off
void TRKPostInterruptEvent(void) {
    void fn_80225F4C(void *, s32);
    void fn_80225F64(void *);
    s32 fn_8022A098(u32 *, u32);
    extern u8 gTRKState[];
    extern u8 gTRKCPUState[1072];

    u8 event[0xC];
    u32 instruction;
    s32 type;
    u16 exception;

    if (*(s32 *)(gTRKState + 0x9C) != 0) {
        *(s32 *)(gTRKState + 0x9C) = 0;
        return;
    }

    exception = (u16)*(u32 *)(gTRKCPUState + 0x2F8);
    switch (exception) {
    case 0x700:
    case 0xD00:
        fn_8022A098(&instruction, *(u32 *)(gTRKCPUState + 0x80));
        if (instruction == 0xFE00000U) {
            type = 5;
        } else {
            type = 3;
        }
        break;
    default:
        type = 4;
        break;
    }

    fn_80225F4C(event, type);
    fn_80225F64(event);
}
#pragma push
#pragma optimization_level 2
#pragma opt_common_subs off
#pragma opt_propagation on
s32 TRKTargetAccessExtended2(u32 first, u32 arg1, s32 arg2, s32 *arg3, s32 arg4) {
void fn_802264B4(s32, s32 *);
s32 fn_80226700(s32, u64);
void fn_80228858(u32 *, s32);
extern const u32 lbl_80282760[];
extern const u32 lbl_80282788[];
extern u8 gTRKExceptionStatus_8029E574[];
extern u8 lbl_8033CFB4[];

    typedef void (*Thunk)(void *, void *);
    struct {
        s32 sp8;
        s32 vals[2];
        s32 saved[4];
        u32 buf4[10];
        u32 buf3[10];
        u32 buf2[10];
        u32 buf1[10];
        u32 buf0[10];
    } st;
    u8 *status;
    u32 tr;
    u32 *tmpl;
    u32 *p4;
    s32 s3, s2, s1, s0;
    u32 op;
    s32 err;
    const u32 *src;
    u32 arg0;

    if (arg1 > 0x1F) {
        return 0x701;
    }

    status = gTRKExceptionStatus_8029E574;
    {
        const u32 *t = lbl_80282760;
        st.buf0[0] = t[0];
        s0 = *(s32 *)status;
        s3 = *(s32 *)(status + 0xC);
        st.buf0[1] = t[1];
        s1 = *(s32 *)(status + 4);
        st.buf0[9] = t[9];
        s2 = *(s32 *)(status + 8);
        st.saved[0] = s0;
        st.saved[1] = s1;
        st.saved[2] = s2;
        st.saved[3] = s3;
        status[0xD] = 0;
        st.buf0[2] = t[2];
        st.buf0[3] = t[3];
        st.buf0[4] = t[4];
        st.buf0[5] = t[5];
        st.buf0[6] = t[6];
        st.buf0[7] = t[7];
        st.buf0[8] = t[8];
        st.buf0[0] = 0x7C98E2A6;
        st.buf0[1] = 0x90830000;
        st.buf0[9] = 0x4E800020;
        fn_80228858(st.buf0, 0x28);
        ((Thunk)st.buf0)(&st.sp8, lbl_8033CFB4);
    }

    {
        const u32 *t = lbl_80282760;
        st.buf1[0] = t[0];
        st.buf1[1] = t[1];
        st.buf1[9] = t[9];
        st.sp8 |= 0xA0000000;
        st.buf1[2] = t[2];
        st.buf1[3] = t[3];
        st.buf1[4] = t[4];
        st.buf1[5] = t[5];
        st.buf1[6] = t[6];
        st.buf1[7] = t[7];
        st.buf1[8] = t[8];
        st.buf1[0] = 0x80830000;
        st.buf1[1] = 0x7C98E3A6;
        st.buf1[9] = 0x4E800020;
        fn_80228858(st.buf1, 0x28);
        ((Thunk)st.buf1)(&st.sp8, lbl_8033CFB4);
    }

    {
        const u32 *t = lbl_80282760;
        st.buf2[0] = t[0];
        st.buf2[1] = t[1];
        st.buf2[9] = t[9];
        st.sp8 = 0;
        st.buf2[2] = t[2];
        st.buf2[3] = t[3];
        st.buf2[4] = t[4];
        st.buf2[5] = t[5];
        st.buf2[6] = t[6];
        st.buf2[7] = t[7];
        st.buf2[8] = t[8];
        st.buf2[0] = 0x80830000;
        st.buf2[1] = 0x7C90E3A6;
        st.buf2[9] = 0x4E800020;
        fn_80228858(st.buf2, 0x28);
        ((Thunk)st.buf2)(&st.sp8, lbl_8033CFB4);
    }

    arg0 = first;
    tr = arg0 << 21;
    *arg3 = 0;
    tmpl = st.buf3;
    p4 = st.buf4;
    err = 0;
    while (arg0 <= arg1 && err == 0) {
        if (arg4 != 0) {
            src = lbl_80282788;
            op = tr | 0xE0030000;
            st.buf3[0] = src[0];
            st.buf3[1] = src[1];
            st.buf3[2] = src[2];
            st.buf3[3] = src[3];
            st.buf3[4] = src[4];
            st.buf3[5] = src[5];
            st.buf3[6] = src[6];
            st.buf3[7] = src[7];
            st.buf3[8] = src[8];
            st.buf3[9] = src[9];
            if (arg4 != 0) {
                op = tr | 0xF0030000;
            }
            st.buf3[0] = op;
            st.buf3[9] = 0x4E800020;
            fn_80228858(tmpl, 0x28);
            ((Thunk)st.buf3)(st.vals, lbl_8033CFB4);
            err = fn_80226700(arg2, *(u64 *)st.vals);
        } else {
            fn_802264B4(arg2, st.vals);
            src = lbl_80282788;
            op = tr | 0xE0030000;
            st.buf4[0] = src[0];
            st.buf4[1] = src[1];
            st.buf4[2] = src[2];
            st.buf4[3] = src[3];
            st.buf4[4] = src[4];
            st.buf4[5] = src[5];
            st.buf4[6] = src[6];
            st.buf4[7] = src[7];
            st.buf4[8] = src[8];
            st.buf4[9] = src[9];
            if (arg4 != 0) {
                op = tr | 0xF0030000;
            }
            st.buf4[0] = op;
            st.buf4[9] = 0x4E800020;
            fn_80228858(p4, 0x28);
            ((Thunk)st.buf4)(st.vals, lbl_8033CFB4);
            err = 0;
        }
        tr += 0x200000;
        arg0 += 1;
        *arg3 += 8;
    }

    if (status[0xD] != 0) {
        err = 0x702;
        *arg3 = 0;
    }
    status = gTRKExceptionStatus_8029E574;
    *(s32 *)(status + 0) = st.saved[0];
    *(s32 *)(status + 4) = st.saved[1];
    *(s32 *)(status + 8) = st.saved[2];
    *(s32 *)(status + 0xC) = st.saved[3];
    return err;
}
#pragma pop
s32 TRKTargetAccessExtended1(u32 arg0, u32 arg1, void *arg2, s32 *arg3, s32 arg4) {
    extern u8 gTRKExceptionStatus_8029E574[];
    extern u8 gTRKRestoreFlags[];
    typedef struct {
        u32 words[4];
    } ExceptionStatus;
    ExceptionStatus saved;
    u8 *status;

    if (arg1 > 0x60) {
        return 0x701;
    }
    status = gTRKExceptionStatus_8029E574;
    saved = *(ExceptionStatus *)status;
    status[0xd] = 0;
    *arg3 = 0;
    if (arg0 <= arg1) {
        s32 count = (arg1 - arg0) + 1;
        u32 *registers = (u32 *)(gTRKCPUState + 0x1a8) + arg0;
        *arg3 += count * 4;
        if (arg4) {
            arg0 = fn_8022659C(arg2, registers, count);
        } else {
            if (registers <= (u32 *)(gTRKCPUState + 0x1ec) &&
                registers + count - 1 >= (u32 *)(gTRKCPUState + 0x1e8)) {
                gTRKRestoreFlags[0] = 1;
            }
            if (registers <= (u32 *)(gTRKCPUState + 0x278) &&
                registers + (u32)count - 1 >= (u32 *)(gTRKCPUState + 0x278)) {
                gTRKRestoreFlags[1] = 1;
            }
            arg0 = fn_8022632C(arg2, registers, count);
        }
    }
    if (status[0xd]) {
        arg0 = 0x702;
        *arg3 = 0;
    }
    *(ExceptionStatus *)gTRKExceptionStatus_8029E574 = saved;
    return arg0;
}

#pragma push
#pragma inline_depth(10)
#pragma inline_max_size(10000)
#pragma inline_max_total_size(10000)
static inline s32 TRKAccessFPRegister(u32 reg,u64 *value,s32 read) {
extern u32 lbl_802827B0[],lbl_80282760[]; extern u8 lbl_8033CFB4[];
void fn_80228858(void *,s32);void fn_80228CDC(f64 *);void fn_80228D00(f64 *);
typedef void (*Thunk)(void *,void *);
u32 special[10];u32 fpr[10];u32 *source;u32 opcode;u32 regBits=reg<<21;u32 *vals=(u32*)value;
            source = lbl_802827B0;

            fpr[0] = source[0];
            fpr[1] = source[1];
            fpr[2] = source[2];
            fpr[3] = source[3];
            fpr[4] = source[4];
            fpr[5] = source[5];
            fpr[6] = source[6];
            fpr[7] = source[7];
            fpr[8] = source[8];
            fpr[9] = source[9];

            if (reg < 0x20) {
                opcode = regBits | 0xC8030000;

                if (read != 0) {
                    opcode = regBits | 0xD8030000;
                }

                fpr[0] = opcode;
                fpr[9] = 0x4E800020;

                fn_80228858(fpr, 0x28);

                ((Thunk)fpr)(vals, lbl_8033CFB4);
            } else if (reg == 0x20) {
                if (read != 0) {
                    fn_80228CDC((f64 *)vals);
                } else {
                    fn_80228D00((f64 *)vals);
                }

                *(u64*)vals &= 0xFFFFFFFFULL;
            } else if (reg == 0x21) {
                if (read == 0) {
                    vals[0] = vals[1];
                }

                source = lbl_80282760;

                special[0] = source[0];
                special[1] = source[1];
                special[2] = source[2];
                special[3] = source[3];
                special[4] = source[4];
                special[5] = source[5];
                special[6] = source[6];
                special[7] = source[7];
                special[8] = source[8];
                special[9] = source[9];

                if (read != 0) {
                    special[0] = 0x7C9FFAA6;
                    special[1] = 0x90830000;
                } else {
                    special[0] = 0x80830000;
                    special[1] = 0x7C9FFBA6;
                }

                special[9] = 0x4E800020;

                fn_80228858(special, 0x28);

                ((Thunk)special)(vals, lbl_8033CFB4);

                if (read != 0) {
                    *(u64*)vals = (u64)vals[0] & 0xFFFFFFFFULL;
                }
            }

return 0;
}

#pragma pop
s32 TRKTargetAccessFP(u32 arg0, u32 arg1, void *arg2, s32 *arg3, s32 arg4)
{
    extern u8 gTRKExceptionStatus_8029E574[];
    extern u32 lbl_802827B0[];
    extern u32 lbl_80282760[];
    extern u8 lbl_8033CFB4[];

    u32 fn_80228948(void);
    void fn_80228950(u32);
    void fn_80228858(void *, s32);
    void fn_80228CDC(f64 *);
    void fn_80228D00(f64 *);
    s32 fn_802264B4(void *, u8 *);
    s32 fn_80226700(void *, u64);

    typedef void (*Thunk)(void *, void *);

    u64 value;
    u32 saved[4];
    u32 fprRead[10];
    u32 fprWrite[10];
    u32 specialRead[10];
    u32 specialWrite[10];

    s32 read; s32 *length; void *buffer;u32 last;
    u32 *readCode,*readSpecial,*writeCode,*writeSpecial;
    u32 *tmpl;
    u32 *source;
    u8 *status;
    u32 opcode;
    u32 regBits;
    u32 msr;
    u32 count;
    s32 result;
    s32 accessResult;
    u32 index;

    read=arg4;length=arg3;buffer=arg2;last=arg1;
    if (last > 0x21) {
        return 0x701;
    }

    status = gTRKExceptionStatus_8029E574;

    saved[0] = *(u32 *)(status + 0);
    saved[1] = *(u32 *)(status + 4);
    saved[2] = *(u32 *)(status + 8);
    saved[3] = *(u32 *)(status + 12);

    status[13] = 0;

    msr = fn_80228948();
    fn_80228950(msr | 0x2000);

    *length = 0;

    index=arg0;
    regBits = (u32)arg0 << 21;
    readCode=fprRead;readSpecial=specialRead;writeCode=fprWrite;writeSpecial=specialWrite;
    result = 0;

    while (index <= last && result == 0) {
        if (read != 0) {
            source = lbl_802827B0;

            fprRead[0] = source[0];
            fprRead[1] = source[1];
            fprRead[2] = source[2];
            fprRead[3] = source[3];
            fprRead[4] = source[4];
            fprRead[5] = source[5];
            fprRead[6] = source[6];
            fprRead[7] = source[7];
            fprRead[8] = source[8];
            fprRead[9] = source[9];

            if (index < 0x20) {
                opcode = regBits | 0xC8030000;

                if (read != 0) {
                    opcode = regBits | 0xD8030000;
                }

                fprRead[0] = opcode;
                fprRead[9] = 0x4E800020;

                fn_80228858(readCode, 0x28);

                ((Thunk)fprRead)(&value, lbl_8033CFB4);
            } else if (index == 0x20) {
                if (read != 0) {
                    fn_80228CDC((f64 *)&value);
                } else {
                    fn_80228D00((f64 *)&value);
                }

                value &= 0xFFFFFFFFULL;
            } else if (index == 0x21) {
                if (read == 0) {
                    ((u32*)&value)[0] = ((u32*)&value)[1];
                }

                source = lbl_80282760;

                specialRead[0] = source[0];
                specialRead[1] = source[1];
                specialRead[2] = source[2];
                specialRead[3] = source[3];
                specialRead[4] = source[4];
                specialRead[5] = source[5];
                specialRead[6] = source[6];
                specialRead[7] = source[7];
                specialRead[8] = source[8];
                specialRead[9] = source[9];

                if (read != 0) {
                    specialRead[0] = 0x7C9EFAA6;
                    specialRead[1] = 0x90830000;
                } else {
                    specialRead[0] = 0x80830000;
                    specialRead[1] = 0x7C9EFBA6;
                }

                specialRead[9] = 0x4E800020;

                fn_80228858(readSpecial, 0x28);

                ((Thunk)specialRead)(&value, lbl_8033CFB4);

                if (read != 0) {
                    value = (u64)((u32*)&value)[0] & 0xFFFFFFFFULL;
                }
            }

            result = fn_80226700(
                buffer,
                ((u64)((u32*)&value)[0] << 32) | ((u32*)&value)[1]
            );
        } else {
            fn_802264B4(buffer, (u8 *)&value);
            accessResult=0;
            source = lbl_802827B0;

            fprWrite[0] = source[0];
            fprWrite[1] = source[1];
            fprWrite[2] = source[2];
            fprWrite[3] = source[3];
            fprWrite[4] = source[4];
            fprWrite[5] = source[5];
            fprWrite[6] = source[6];
            fprWrite[7] = source[7];
            fprWrite[8] = source[8];
            fprWrite[9] = source[9];

            if (index < 0x20) {
                opcode = regBits | 0xC8030000;

                if (read != 0) {
                    opcode = regBits | 0xD8030000;
                }

                fprWrite[0] = opcode;
                fprWrite[9] = 0x4E800020;

                fn_80228858(writeCode, 0x28);

                ((Thunk)fprWrite)(&value, lbl_8033CFB4);
                accessResult=0;
            } else if (index == 0x20) {
                if (read != 0) {
                    fn_80228CDC((f64 *)&value);
                } else {
                    fn_80228D00((f64 *)&value);
                }

                value &= 0xFFFFFFFFULL;
            } else if (index == 0x21) {
                if (read == 0) {
                    ((u32*)&value)[0] = ((u32*)&value)[1];
                }

                source = lbl_80282760;

                specialWrite[0] = source[0];
                specialWrite[1] = source[1];
                specialWrite[2] = source[2];
                specialWrite[3] = source[3];
                specialWrite[4] = source[4];
                specialWrite[5] = source[5];
                specialWrite[6] = source[6];
                specialWrite[7] = source[7];
                specialWrite[8] = source[8];
                specialWrite[9] = source[9];

                if (read != 0) {
                    specialWrite[0] = 0x7C9EFAA6;
                    specialWrite[1] = 0x90830000;
                } else {
                    specialWrite[0] = 0x80830000;
                    specialWrite[1] = 0x7C9EFBA6;
                }

                specialWrite[9] = 0x4E800020;

                fn_80228858(writeSpecial, 0x28);

                ((Thunk)specialWrite)(&value, lbl_8033CFB4);
                accessResult=0;

                if (read != 0) {
                    value = (u64)((u32*)&value)[0] & 0xFFFFFFFFULL;
                }
            }

            result = accessResult;
        }

        regBits += 0x200000;
        index++;

        count = *(u32 *)length;
        *length = count + 8;
    }

    if (status[13] != 0) {
        *length = 0;
        result = 0x702;
    }

    *(u32 *)(gTRKExceptionStatus_8029E574 + 0) = saved[0];
    *(u32 *)(gTRKExceptionStatus_8029E574 + 4) = saved[1];
    *(u32 *)(gTRKExceptionStatus_8029E574 + 8) = saved[2];
    *(u32 *)(gTRKExceptionStatus_8029E574 + 12) = saved[3];

    return result;
}

#pragma optimization_level reset
s32 TRKTargetAccessDefault(u32 arg0, u32 arg1, void *arg2, s32 *arg3, s32 arg4) {
    extern u8 gTRKExceptionStatus_8029E574[];
    typedef struct {
        u32 words[4];
    } ExceptionStatus;
    ExceptionStatus saved;
    u8 *status;
    s32 count;
    u32 *registers;
    s32 result;

    if (arg1 > 0x24) {
        return 0x701;
    }
    status = gTRKExceptionStatus_8029E574;
    saved = *(ExceptionStatus *)status;
    status[0xd] = 0;
    registers = (u32 *)gTRKCPUState + arg0;
    count = (arg1 - arg0) + 1;
    *arg3 = count * 4;
    if (arg4) {
        result = fn_8022659C(arg2, registers, count);
    } else {
        result = fn_8022632C(arg2, registers, count);
    }
    if (status[0xd]) {
        result = 0x702;
        *arg3 = 0;
    }
    *(ExceptionStatus *)gTRKExceptionStatus_8029E574 = saved;
    return result;
}

s32 fn_8022A098(u32 *arg0, u32 arg1) {
    s32 fn_8022A0E4(u32 *, u32, u32 *, s32, s32);
    u32 sp8;
    s32 var_r3;

    sp8 = 4U;
    var_r3 = fn_8022A0E4(arg0, arg1, &sp8, 0, 1);
    if ((var_r3 == 0) && (sp8 != 4U)) {
        var_r3 = 0x700;
    }
    return var_r3;
}

s32 fn_8022A0E4(u32 *arg0, u32 arg1, u32 *arg2, s32 arg3, s32 arg4) {
extern u8 gTRKExceptionStatus_8029E574[];
u32 fn_8022AE34(u32);
s32 fn_8022A230(u32,s32,s32);
u32 fn_80228948(void);
void fn_80228858(u32,u32);
void fn_80228958(u32,u32,u32,u32,u32);
typedef struct { u32 words[4]; } ExceptionStatus;
ExceptionStatus saved;
u32 translated;
s32 result;
u8 *status=gTRKExceptionStatus_8029E574;
u32 msr, targetMsr;
s32 mode;
saved=*(ExceptionStatus *)status;
status[0xd]=0;
translated=fn_8022AE34(arg1);
mode=arg4==0;
result=fn_8022A230(translated,*arg2,mode);
if(result!=0) *arg2=0;
else {
msr=fn_80228948();
targetMsr=msr | (*(u32 *)(gTRKCPUState+0x1f8)&0x10);
if(arg4) fn_80228958((u32)arg0,translated,*arg2,msr,targetMsr);
else {
fn_80228958(translated,(u32)arg0,*arg2,targetMsr,msr);
fn_80228858(translated,*arg2);
if(arg1!=translated) fn_80228858(arg1,*arg2);
}
}
if(status[0xd]) {result=0x702;*arg2=0;}
*(ExceptionStatus *)gTRKExceptionStatus_8029E574=saved;
return result;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
s32 fn_8022A230(u32 start, s32 length, s32 mode) {
    typedef struct {
        u32 start;
        u32 end;
        s32 readable;
        s32 writable;
    } MemRange;
    extern MemRange lbl_80282750[];
    u32 end;
    s32 result;
    s32 sub;
    u32 subEnd;
    s32 i;
    s32 j;
    u32 entryEnd;

    end = start + length;
    end = end - 1;
    result = 0x700;
    if (end < start) {
        return 0x700;
    }
    i = 0;
    if (start <= lbl_80282750[0].end && end >= lbl_80282750[0].start) {
        if ((mode == 0 && lbl_80282750[i].readable == 0) ||
            (mode == 1 && lbl_80282750[i].writable == 0)) {
            result = 0x700;
        } else {
            result = 0;
            if (start < lbl_80282750[i].start) {
                sub = 0x700;
                subEnd = lbl_80282750[i].start - start;
                subEnd = subEnd + start - 1;
                if (subEnd >= start) {
                    j = 0;
                    if (start <= lbl_80282750[0].end && subEnd >= lbl_80282750[0].start) {
                        if ((mode == 0 && lbl_80282750[j].readable == 0) ||
                            (mode == 1 && lbl_80282750[j].writable == 0)) {
                            sub = 0x700;
                        } else {
                            sub = 0;
                            if (start < lbl_80282750[j].start) {
                                sub = fn_8022A230(start, lbl_80282750[j].start - start, mode);
                            }
                            if (sub == 0) {
                                entryEnd = lbl_80282750[j].end;
                                if (subEnd > entryEnd) {
                                    sub = fn_8022A230(entryEnd, subEnd - entryEnd, mode);
                                }
                            }
                        }
                    }
                }
                result = sub;
            }
            if (result == 0) {
                entryEnd = lbl_80282750[i].end;
                if (end > entryEnd) {
                    sub = 0x700;
                    subEnd = end - entryEnd;
                    subEnd = subEnd + entryEnd - 1;
                    if (subEnd >= entryEnd) {
                        j = 0;
                        if (entryEnd <= lbl_80282750[0].end && subEnd >= lbl_80282750[0].start) {
                            if ((mode == 0 && lbl_80282750[j].readable == 0) ||
                                (mode == 1 && lbl_80282750[j].writable == 0)) {
                                sub = 0x700;
                            } else {
                                sub = 0;
                                if (entryEnd < lbl_80282750[j].start) {
                                    sub = fn_8022A230(entryEnd, lbl_80282750[j].start - entryEnd, mode);
                                }
                                if (sub == 0) {
                                    if (subEnd > lbl_80282750[j].end) {
                                        sub = fn_8022A230(lbl_80282750[j].end, subEnd - lbl_80282750[j].end, mode);
                                    }
                                }
                            }
                        }
                    }
                    result = sub;
                }
            }
        }
    }
    return result;
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset

#pragma push
#pragma use_lmw_stmw off
#pragma global_optimizer on
/* TRKAccessFile: debugger file access. The trap is serviced by the host debugger,
   which resumes with the result in r3. */
asm u8 fn_8022A4E0(u8 command, s32 file_handle, s32 *length_ptr, s32 buffer_ptr) {
    nofralloc
    twi 31, r0, 0x0
    blr
}
#pragma pop

#pragma push
#pragma use_lmw_stmw off
#pragma global_optimizer on
/* MetroTRK file-I/O trap stub (TRKOpenFile in MetroTRK). Nothing in GFEE01 calls it,
   so its argument list can't be established from this binary; left as void(void). */
asm void fn_8022A4E8(void) {
    nofralloc
    twi 31, r0, 0x0
    blr
}
#pragma pop

extern u8 _db_stack_addr[];
s32 InitMetroTRKCommTable(s32 arg0);
void TRK_main(void);
#pragma push
asm void InitMetroTRK(void) {
    nofralloc
    subi r1, r1, 0x4
    stw r3, 0x0(r1)
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    stmw r0, 0x0(r3)
    lwz r4, 0x0(r1)
    addi r1, r1, 0x4
    stw r1, 0x4(r3)
    stw r4, 0xc(r3)
    mflr r4
    stw r4, 0x84(r3)
    stw r4, 0x80(r3)
    mfcr r4
    stw r4, 0x88(r3)
    mfmsr r4
    ori r3, r4, 0x8000
    xori r3, r3, 0x8000
    mtmsr r3
    mtsrr1 r4
    bl TRKSaveExtended1Block
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    opword 0xB8030000
    li r0, 0x0
    mtspr 1010, r0
    mtspr 1013, r0
    lis r1, _db_stack_addr@h
    ori r1, r1, _db_stack_addr@l
    mr r3, r5
    bl InitMetroTRKCommTable
    cmpwi r3, 0x1
    bne L_8022A900
    lwz r4, 0x84(r3)
    mtlr r4
    opword 0xB8030000
    blr
L_8022A900:
    b TRK_main
}
#pragma pop
#pragma push
__declspec(weak) asm void InitMetroTRK_BBA(void) {
    nofralloc
    subi r1, r1, 0x4
    stw r3, 0x0(r1)
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    stmw r0, 0x0(r3)
    lwz r4, 0x0(r1)
    addi r1, r1, 0x4
    stw r1, 0x4(r3)
    stw r4, 0xc(r3)
    mflr r4
    stw r4, 0x84(r3)
    stw r4, 0x80(r3)
    mfcr r4
    stw r4, 0x88(r3)
    mfmsr r4
    ori r3, r4, 0x8000
    mtmsr r3
    mtsrr1 r4
    bl TRKSaveExtended1Block
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    opword 0xB8030000
    li r0, 0x0
    mtspr 1010, r0
    mtspr 1013, r0
    lis r1, _db_stack_addr@h
    ori r1, r1, _db_stack_addr@l
    li r3, 0x2
    bl InitMetroTRKCommTable
    cmpwi r3, 0x1
    bne L_8022A994
    lwz r4, 0x84(r3)
    mtlr r4
    opword 0xB8030000
    blr
L_8022A994:
    b TRK_main
    blr
}
#pragma pop

#pragma intrinsic __dcbi
void fn_8022A99C(s32 arg0, u32 arg1, s32 *arg2) {
    u32 fn_80214058(void);
    void fn_80214094(s32, void *, u32, u32);
    void fn_80214338(void);
    u16 fn_80214358(void);
    void *fn_80003488(void *, void *, u32);

    u8 buf[32] __attribute__((aligned(32)));
    u8 *bufp;
    u16 old;
    u32 address;
    u32 length;
    u32 offset;
    u32 head;
    u32 aligned;
    u32 endOff;
    u32 endAlign;
    u32 endAddr;
    s32 dst;

    if (arg1 >= 0x4000U) {
        length = *arg2;
        if ((u32)(arg1 + length) <= 0x08000000U) {
            head = arg1 & 31;
            aligned = arg1 & ~31U;
            length += head;
            offset = 0;
            length = (length + 31) & ~31U;
            for (offset = 0; offset < length; offset += 32) {
                __dcbf((void *)offset, (int)arg0);
            }
            while (fn_80214058() != 0) {
            }
            old = fn_80214358();
            address = 0x08000000;
            if ((arg1 & 31) != 0) {
                head = arg1 & 31;
                address = aligned;
                bufp = buf;
                __dcbi(bufp);
                fn_80214338();
                fn_80214094(1, bufp, aligned, 0x20);
                while (fn_80214358() == 0) {
                }
                fn_80003488((void *)arg0, bufp, head);
                __dcbf((void *)0, (int)arg0);
            }
            endAddr = arg1 + *arg2;
            endOff = endAddr & 31;
            if (endOff != 0) {
                endAlign = endAddr & ~31U;
                if (endAlign != address) {
                    bufp = buf;
                    __dcbi(bufp);
                    fn_80214338();
                    fn_80214094(1, bufp, endAlign, 0x20);
                    while (fn_80214358() == 0) {
                    }
                }
                dst = arg0 + endAddr;
                bufp = buf;
                fn_80003488((void *)dst, bufp + endOff, 0x20 - endOff);
                __dcbf((void *)0, (int)dst);
            }
            __sync();
            fn_80214338();
            fn_80214094(0, (void *)arg0, aligned, length);
            if (old == 0) {
                while (fn_80214358() == 0) {
                }
                fn_80214338();
            }
        }
    }
}
typedef u32 size_t;
void fn_8022AB88(register int c, register u32 p2, void *p3) {
    u32 fn_80214058();
    void fn_80214094(u32 type, u32 mainmem_addr, u32 aram_addr, u32 length);
    u16 fn_80214358();
    u32 err;
    int i;
    register int counter;
    u16 r;
    u32 g;
    u32 x;
    u32 size;
    if ((size_t)p2 < 0x4000 || p2 + *(u32 *)p3 > 0x8000000) {
        return;
    }
    x = p2 & ~0x1F;
    size = *(u32 *)p3 + (p2 & 0x1F);
    size = (((u32)(size) + 0x1F) & ~(0x1F));
    counter = 0;
    for (i = 0; i < size; i += 0x20) {
        asm {dcbi counter, c }
        ;
        counter += 0x20;
    }
    do {
        err = fn_80214058();
    } while (err);
    r = fn_80214358();
    g = 0x8000000;
    __ARClearInterrupt();
    fn_80214094(1, c, x, size);
    while (!fn_80214358()) {
    }
    if (!r) {
        __ARClearInterrupt();
    }
}

s32 TRKInitializeTarget(void) {
    extern u8 gTRKState[];
    extern u32 lbl_8033CFC8[];

    M2C_FIELD(gTRKState, s32 *, 0x98) = 1;
    M2C_FIELD(gTRKState, s32 *, 0x8C) = fn_80228948(gTRKState);
    lbl_8033CFC8[0] = 0xE0000000;

    return 0;
}

#pragma push
#pragma opt_common_subs off
void fn_8022AD08(void)
{
  extern u32 lbl_8033CFC8[];
  extern u32 lbl_8029E598[];
  extern u8 gTRKInterruptVectorTable[];
  extern void fn_80003488(u32, void *, u32);
  extern void fn_80228858(u32, u32);
  u32 *var_r5;
  u32 temp_r29;
  u32 var_r27;
  s32 var_r30;
  u32 temp_r6;
  if (((lbl_8033CFC8[0] <= 0x44) && ((lbl_8033CFC8[0] + 0x4000) > 0x44)) && ((*((u32 *) (((u8 *) gTRKCPUState) + 0x238))) & 3))
  {
    var_r5 = (u32 *) 0x44;
  }
  else
  {
    var_r5 = (u32 *) 0x80000044;
  }
  temp_r29 = *var_r5;
  for (var_r30 = 0; var_r30 <= 0xE; var_r30++)
  {
    if ((temp_r29 & (1 << var_r30)) && (var_r30 != 4))
    {
      temp_r6 = lbl_8029E598[var_r30];
      if (((temp_r6 >= lbl_8033CFC8[0]) && (temp_r6 < (lbl_8033CFC8[0] + 0x4000))) && ((*((u32 *) (((u8 *) gTRKCPUState) + 0x238))) & 3))
      {
        var_r27 = temp_r6;
      }
      else
        if ((temp_r6 >= 0x7e000000U) && (temp_r6 <= 0x80000000U))
      {
        var_r27 = temp_r6;
      }
      else
      {
        var_r27 = (temp_r6 & 0x3FFFFFFF) | 0x80000000;
      }
      fn_80003488(var_r27, (void *) (((u8 *) gTRKInterruptVectorTable) + temp_r6), 0x100);
      fn_80228858(var_r27, 0x100);
    }
  }

}
#pragma pop
u32 fn_8022AE34(u32 arg0) {
    extern u32 lbl_8033CFC8[];
    extern u8 gTRKCPUState[1072];

    if ((arg0 < lbl_8033CFC8[0]) || (arg0 >= (lbl_8033CFC8[0] + 0x4000)) ||
        !(*(u32 *)(gTRKCPUState + 0x238) & 3)) {
        if ((arg0 < 0x7E000000U) || (arg0 > 0x80000000U)) {
            return (arg0 & 0x3FFFFFFFU) | 0x80000000U;
        }
    }
    return arg0;
}

void EnableMetroTRKInterrupts(void) {
    M2C_UNK fn_8022B120();
    fn_8022B120();
}

void TRK_main(void) {
extern void MWTRACE(s32,const char*,...);
extern s32 TRKInitializeNub(void);
extern void TRKNubWelcome(void);
extern void TRKNubMainLoop(void);
extern s32 TRKTerminateNub(void);
extern s32 TRK_mainError_8033CFD0[];
extern char lbl_802827E8[];
s32 err;
MWTRACE(1,lbl_802827E8);
err=TRKInitializeNub(); TRK_mainError_8033CFD0[0]=err;
if(err==0) { TRKNubWelcome(); TRKNubMainLoop(); }
err=TRKTerminateNub(); TRK_mainError_8033CFD0[0]=err;
}

s32 TRKInitializeIntDrivenUART(s32 arg0, s32 arg1, s32 arg2, void *arg3);
void TRKLoadContext(void *ctx, u32 exception);
void TRK_main(void);
u32 fn_8022AE34(u32 arg0);
void TRKInterruptHandler(void);
#pragma push
/* Restores the OSContext in r3 (no shared OSContext type in include/) and tail-branches to TRKInterruptHandler with the
   exception id in r4; it does not return to its caller. */
asm void TRKLoadContext(void *ctx, u32 exception) {
    nofralloc
    lwz r0, 0x0(r3)
    lwz r1, 0x4(r3)
    lwz r2, 0x8(r3)
    lhz r5, 0x1a2(r3)
    rlwinm. r6, r5, 0, 30, 30
    beq L_8022AF2C
    rlwinm r5, r5, 0, 31, 29
    sth r5, 0x1a2(r3)
    lmw r5, 0x14(r3)
    b L_8022AF30
L_8022AF2C:
    lmw r13, 0x34(r3)
L_8022AF30:
    mr r31, r3
    mr r3, r4
    lwz r4, 0x80(r31)
    mtcrf 255, r4
    lwz r4, 0x84(r31)
    mtlr r4
    lwz r4, 0x88(r31)
    mtctr r4
    lwz r4, 0x8c(r31)
    mtxer r4
    mfmsr r4
    rlwinm r4, r4, 0, 17, 15
    rlwinm r4, r4, 0, 31, 29
    mtmsr r4
    mtsprg 1, r2
    lwz r4, 0xc(r31)
    mtsprg 2, r4
    lwz r4, 0x10(r31)
    mtsprg 3, r4
    lwz r2, 0x198(r31)
    lwz r4, 0x19c(r31)
    lwz r31, 0x7c(r31)
    b TRKInterruptHandler
}
#pragma pop

void TRKUARTInterruptHandler(void) {

}

__declspec(section ".rodata") static const u32 EndofProgramInstruction = 0x00454E44;

void InitializeProgramEndTrap(void)
{
    void *fn_80003488(void *, const void *, u32);
    void ICInvalidateRange(void *, u32);
    void DCFlushRange(void *, u32);
    void PPCHalt(void);
    u8 *halt;

    halt = (u8 *)PPCHalt;
    fn_80003488(halt + 4, &EndofProgramInstruction, 4);
    ICInvalidateRange(halt + 4, 4);
    DCFlushRange(halt + 4, 4);
}

int TRK_board_display(char *arg0) { int OSReport(char *, ...); extern char lbl_802827FC[]; return OSReport(lbl_802827FC, arg0); }

void UnreserveEXI2Port(void) {
    extern u8 gDBCommTable[40];
    ((void (*)(u8 *))*(u32 **)(gDBCommTable + 0x20))(gDBCommTable);
}

void ReserveEXI2Port(void) {
    extern u8 gDBCommTable[40];
    ((void (*)(u8 *))*(u32 **)(gDBCommTable + 0x24))(gDBCommTable);
}

s32 TRK_cc_write(s32 a, s32 b) {
    extern u8 gDBCommTable[40];
    s32 temp_r3;

    temp_r3 = ((s32 (*)(s32, s32))*(u32 *)(gDBCommTable + 0x14))(a, b);
    return (s32)(-temp_r3 | temp_r3) >> 31;
}

s32 fn_8022B0B4(s32 a, s32 b) {
    extern u8 gDBCommTable[40];
    s32 temp_r3;

    temp_r3 = ((s32 (*)(s32, s32))*(u32 *)(gDBCommTable + 0x10))(a, b);
    return (s32)(-temp_r3 | temp_r3) >> 31;
}

void fn_8022B0F0(void) {
    extern u16 gDBCommTable[20];
    ((void (*)(u16 *))*(void **)(gDBCommTable + 6))(gDBCommTable);
}

void fn_8022B120(void) {
    extern u8 TRK_Use_BBA[];
    extern u8 gDBCommTable[40];
    void (*fn)(u8 *);

    if (TRK_Use_BBA[0] == 0) {
        fn = *(void (**)(u8 *))(gDBCommTable + 4);
        if (fn != NULL) {
            fn(gDBCommTable);
        }
    }
}

s32 TRKInitializeIntDrivenUART(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    extern u8 gDBCommTable[40];
    void TRKEXICallBack(s32, s32);

    ((s32 (*)(void *, void *))*(void **)gDBCommTable)(arg3, (void *)TRKEXICallBack);
    ((s32 (*)(u8 *))*(void **)(gDBCommTable + 0x18))(gDBCommTable);
    return 0;
}

s32 udp_cc_initialize(void);
s32 udp_cc_open(void);
s32 udp_cc_close(void);
s32 udp_cc_read(void);
s32 udp_cc_write(void);
s32 udp_cc_shutdown(void);
s32 udp_cc_peek(void);
s32 udp_cc_pre_continue(void);
s32 udp_cc_post_stop(void);
s32 ddh_cc_initialize(void *, void *);
s32 ddh_cc_open(void);
s32 ddh_cc_close(void);
u32 ddh_cc_read(void *, u32);
s32 ddh_cc_write(void *, s32);
s32 ddh_cc_shutdown(void);
s32 ddh_cc_peek(void);
s32 ddh_cc_pre_continue(void);
s32 ddh_cc_post_stop(void);
s32 ddh_cc_initinterrupts(void);
s32 gdev_cc_initialize(void *, void *);
s32 gdev_cc_open(void);
s32 gdev_cc_close(void);
u32 gdev_cc_read(void *, u32);
s32 gdev_cc_write(void *, s32);
s32 gdev_cc_shutdown(void);
s32 gdev_cc_peek(void);
s32 gdev_cc_pre_continue(void);
s32 gdev_cc_post_stop(void);
s32 gdev_cc_initinterrupts(void);
#pragma push
#pragma options sdata=0
s32 InitMetroTRKCommTable(s32 arg0) {
extern u8 TRK_Use_BBA[];
extern u32 gDBCommTable[10];
s32 Hu_IsStub(void);
s32 AMC_IsStub(void);
void OSReport(const char *, ...);
const char *base = (const char *)&EndofProgramInstruction;
s32 device = arg0;
s32 result = 1;
OSReport(base+8,device);
TRK_Use_BBA[0]=0;
if (device==2) {
OSReport(base+32);
TRK_Use_BBA[0]=1;
gDBCommTable[0]=(u32)udp_cc_initialize;
gDBCommTable[6]=(u32)udp_cc_open;
gDBCommTable[7]=(u32)udp_cc_close;
gDBCommTable[4]=(u32)udp_cc_read;
gDBCommTable[5]=(u32)udp_cc_write;
gDBCommTable[2]=(u32)udp_cc_shutdown;
gDBCommTable[3]=(u32)udp_cc_peek;
gDBCommTable[8]=(u32)udp_cc_pre_continue;
gDBCommTable[9]=(u32)udp_cc_post_stop;
gDBCommTable[1]=0;
return 0;
}
else if (device==1) {
OSReport(base+56);
result=Hu_IsStub();
gDBCommTable[0]=(u32)gdev_cc_initialize;
gDBCommTable[6]=(u32)gdev_cc_open;
gDBCommTable[7]=(u32)gdev_cc_close;
gDBCommTable[4]=(u32)gdev_cc_read;
gDBCommTable[5]=(u32)gdev_cc_write;
gDBCommTable[2]=(u32)gdev_cc_shutdown;
gDBCommTable[3]=(u32)gdev_cc_peek;
gDBCommTable[8]=(u32)gdev_cc_pre_continue;
gDBCommTable[9]=(u32)gdev_cc_post_stop;
gDBCommTable[1]=(u32)gdev_cc_initinterrupts;
}
else if (device==0) {
OSReport(base+92);
result=AMC_IsStub();
gDBCommTable[0]=(u32)ddh_cc_initialize;
gDBCommTable[6]=(u32)ddh_cc_open;
gDBCommTable[7]=(u32)ddh_cc_close;
gDBCommTable[4]=(u32)ddh_cc_read;
gDBCommTable[5]=(u32)ddh_cc_write;
gDBCommTable[2]=(u32)ddh_cc_shutdown;
gDBCommTable[3]=(u32)ddh_cc_peek;
gDBCommTable[8]=(u32)ddh_cc_pre_continue;
gDBCommTable[9]=(u32)ddh_cc_post_stop;
gDBCommTable[1]=(u32)ddh_cc_initinterrupts;
}
else {OSReport(base+0x80,device);OSReport(base+0xAC);OSReport(base+0xDC);}return result;
}
#pragma pop
void TRKEXICallBack(s32 arg0, s32 arg1) {
    M2C_UNK OSEnableScheduler();
    OSEnableScheduler();
    TRKLoadContext((void *)arg1, 0x500);
}

s32 TRKTargetContinue(void) {
    M2C_UNK ReserveEXI2Port();
    M2C_UNK TRKSwapAndGo();
    M2C_UNK TRKTargetSetStopped(M2C_UNK);
    M2C_UNK UnreserveEXI2Port();
    TRKTargetSetStopped(0);
    UnreserveEXI2Port();
    TRKSwapAndGo();
    ReserveEXI2Port();
    return 0;
}

u8 fn_8022B490(void) {
    extern u8 lbl_8033CFE0[];
    return lbl_8033CFE0[0];
}

void fn_8022B4A0(u8 arg0) {
    extern u8 lbl_8033CFE0[];
    lbl_8033CFE0[0] = arg0;
}

s32 fn_8022B4AC(s32 arg0) {
    s32 fn_80227FDC(void);
    u8 fn_8022A4F0(u8, s32);

    if (fn_80227FDC() == 0) {
        return 1;
    }
    switch ((s32) fn_8022A4F0(0xD3, arg0)) {
    case 0:
        return 0;
    case 2:
        return 2;
    default:
        return 1;
    }
}

s32 fn_8022B530(s32 arg0, s32 arg1, s32 *arg2) {
    s32 fn_80227FDC(void);
    u8 fn_8022A4E0(u8, s32, s32 *, s32);
    u8 fn_8022B490(void);
    s32 length;
    u8 result;
    if (fn_8022B490() == 0) return 1;
    if (fn_80227FDC() == 0) return 1;
    length = *arg2;
    result = fn_8022A4E0(0xd0, 1, &length, arg1);
    *arg2 = length;
    switch ((s32)result) {
    case 0: return 0;
    case 2: return 2;
    default: return 1;
    }
}

s32 fn_8022B5EC(s32 arg0, s32 arg1, s32 *arg2) {
    s32 fn_80227FDC(void);
    u8 fn_8022A4E0(u8, s32, s32 *, s32);
    u8 fn_8022B490(void);
    s32 length;
    u8 result;
    if (fn_8022B490() == 0) return 1;
    if (fn_80227FDC() == 0) return 1;
    length = *arg2;
    result = fn_8022A4E0(0xd1, 0, &length, arg1);
    *arg2 = length;
    switch ((s32)result) {
    case 0: return 0;
    case 2: return 2;
    default: return 1;
    }
}

s32 udp_cc_post_stop(void) {
    return -1;
}

s32 udp_cc_pre_continue(void) {
    return -1;
}

s32 udp_cc_peek(void) {
    return 0;
}

s32 udp_cc_write(void) {
    return 0;
}

s32 udp_cc_read(void) {
    return 0;
}

s32 udp_cc_close(void) {
    return -1;
}

s32 udp_cc_open(void) {
    return -1;
}

s32 udp_cc_shutdown(void) {
    return -1;
}

s32 udp_cc_initialize(void) {
    return -1;
}

s32 ddh_cc_initinterrupts(void) {
    M2C_UNK fn_8023C540();
    fn_8023C540();
    return 0;
}

s32 ddh_cc_peek(void) {
    void fn_8022BB3C(u8 *, u8 *, s32);
    s32 fn_8023C544(void);
    s32 fn_8023C54C(u8 *, s32);
    extern u8 lbl_8033D7E8[];
    u8 buf[0x800];
    s32 size;

    size = fn_8023C544();
    if (size <= 0) {
        return 0;
    }
    if (fn_8023C54C(buf, size) == 0) {
        fn_8022BB3C(lbl_8033D7E8, buf, size);
    } else {
        return -0x2719;
    }
    return size;
}

s32 ddh_cc_post_stop(void) {
    M2C_UNK fn_8023C55C();
    fn_8023C55C();
    return 0;
}

s32 ddh_cc_pre_continue(void) {
    M2C_UNK fn_8023C560();
    fn_8023C560();
    return 0;
}

#pragma optimization_level 2
s32 ddh_cc_write(void *arg0, s32 arg1) {
    void MWTRACE(u8, char *, ...);
    s32 fn_8023C554(void *, s32);
    extern s32 lbl_803687B8;
    extern char lbl_80282900[];
    s32 remaining;
    u8 *buffer;
    s32 written;
    char *messages;
    buffer = (u8 *)arg0;
    remaining = arg1;
    messages = lbl_80282900;
    if (lbl_803687B8 == 0) {
        MWTRACE(8, messages + 0);
        return -0x2711;
    }
    MWTRACE(8, messages + 0x14, arg0, arg1);
    while (remaining > 0) {
        MWTRACE(1, messages + 0x40, remaining);
        written = fn_8023C554(buffer, remaining);
        if (written == 0) break;
        buffer += written;
        remaining -= written;
    }
    return 0;
}
#pragma optimization_level reset
u32 ddh_cc_read(void *arg0, u32 arg1) {
    extern s32 lbl_803687B8;
    extern u8 lbl_8028295C[], lbl_80282984[], lbl_8033D7E8[];
    void MWTRACE(s32, const char *, ...);
    void fn_8022BA34(void *, void *, u32);
    void fn_8022BB3C(void *, void *, s32);
    u32 fn_8022BC94(void *);
    s32 fn_8023C544(void);
    u32 fn_8023C54C(void *, s32);
    u8 buffer[0x800];
    s32 size = 0;
    u32 error = 0;
    if (!lbl_803687B8) return -0x2711;
    MWTRACE(1, (const char *)lbl_8028295C, arg1, arg1);
    while (fn_8022BC94(lbl_8033D7E8) < arg1) {
        error = 0;
        size = fn_8023C544();
        if (size != 0) {
            error = fn_8023C54C(buffer, size);
            if (!error) fn_8022BB3C(lbl_8033D7E8, buffer, size);
        }
    }
    if (!error) fn_8022BA34(lbl_8033D7E8, arg0, arg1);
    else MWTRACE(8, (const char *)lbl_80282984, error);
    return error;
}

s32 ddh_cc_close(void) {
    return 0;
}

s32 ddh_cc_open(void) {
    extern s32 lbl_803687B8;
    if ((s32) lbl_803687B8 != 0) {
        return -0x2715;
    }
    lbl_803687B8 = 1;
    return 0;
}

s32 ddh_cc_shutdown(void) {
    return 0;
}

s32 ddh_cc_initialize(void *arg0, void *arg1) {
 extern u8 lbl_802829B4[], lbl_802829C8[], lbl_8033D7E8[], lbl_8033CFE8[];
 void MWTRACE(s32, const char *, ...);
 void fn_8023C53C(void *, void *);
 void fn_8022BC44(void *, void *, s32);
 MWTRACE(1, (const char *)lbl_802829B4);
 fn_8023C53C(arg0, arg1);
 MWTRACE(1, (const char *)lbl_802829C8);
 fn_8022BC44(lbl_8033D7E8, lbl_8033CFE8, 0x800);
 return 0;
}

s32 fn_8022BA34(void *arg0, void *arg1, u32 arg2) {
void fn_8022C05C(void *);
void fn_8022C038(void *);
void *memcpy(void *, const void *, u32);
u32 *self=arg0;
u32 remaining;
u8 *dest=arg1;
if(arg2>self[4]) return -1;
fn_8022C05C(self+6);
remaining=self[3]-(self[0]-self[2]);
if(arg2<remaining) {
memcpy(dest,(void*)self[0],arg2);
self[0]+=arg2;
} else {
memcpy(dest,(void*)self[0],remaining);
memcpy(dest+remaining,(void*)self[2],arg2-remaining);
self[0]=self[2]+arg2-remaining;
}
if(self[3]==self[0]-self[2]) self[0]=self[2];
self[5]+=arg2;
self[4]-=arg2;
fn_8022C038(self+6);
return 0;
}

s32 fn_8022BB3C(void *arg0, void *arg1, u32 arg2) {
void fn_8022C05C(void *);
void fn_8022C038(void *);
void *memcpy(void *, const void *, u32);
u32 *self=arg0;
u32 remaining;
u8 *dest=arg1;
if(arg2>self[5]) return -1;
fn_8022C05C(self+6);
remaining=self[3]-(self[1]-self[2]);
if(remaining>=arg2) {
memcpy((void*)self[1],dest,arg2);
self[1]+=arg2;
} else {
memcpy((void*)self[1],dest,remaining);
memcpy((void*)self[2],dest+remaining,arg2-remaining);
self[1]=self[2]+arg2-remaining;
}
if(self[3]==self[1]-self[2]) self[1]=self[2];
self[5]-=arg2;
self[4]+=arg2;
fn_8022C038(self+6);
return 0;
}

void fn_8022BC44(void *arg0, s32 arg1, s32 arg2) {
    void fn_8022C08C(void *, s32, s32);
    void *self;
    s32 t;

    self = arg0;
    *(s32 *)((u8 *)self + 8) = arg1;
    *(s32 *)((u8 *)self + 0xC) = arg2;
    t = *(s32 *)((u8 *)self + 8);
    *(s32 *)((u8 *)self + 0) = t;
    t = *(s32 *)((u8 *)self + 8);
    *(s32 *)((u8 *)self + 4) = t;
    *(s32 *)((u8 *)self + 0x10) = 0;
    *(s32 *)((u8 *)self + 0x14) = *(s32 *)((u8 *)self + 0xC);
    fn_8022C08C((u8 *)self + 0x18, t, arg2);
}

s32 fn_8022BC94(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 gdev_cc_initinterrupts(void) {
    M2C_UNK fn_8026738C();
    fn_8026738C();
    return 0;
}

s32 gdev_cc_peek(void) {
s32 fn_802672F0(void);
s32 fn_80267264(void *,s32);
void fn_8022BB3C(void *,void *,s32);
extern u8 lbl_8033DD08[];
u8 buf[0x500];
s32 size;
size=fn_802672F0();
if(size<=0) return 0;
if(fn_80267264(buf,size)==0) {
fn_8022BB3C(lbl_8033DD08,buf,size);
} else { return -0x2719; }
return size;
}

s32 gdev_cc_post_stop(void) {
    M2C_UNK fn_80267000();
    fn_80267000();
    return 0;
}

s32 gdev_cc_pre_continue(void) {
    M2C_UNK fn_80266FFC();
    fn_80266FFC();
    return 0;
}

#pragma optimization_level 3
s32 gdev_cc_write(void *arg0, s32 arg1) {
    void MWTRACE(u8, char *, ...);
    s32 fn_80267004(void *, s32);

    extern s32 lbl_803687C0;
    extern char lbl_802829E0[];

    s32 written;
    s32 remaining;
    u8 *buffer;
    char *messages;

    buffer = (u8 *)arg0;
    remaining = arg1;
    messages = lbl_802829E0;

    if (lbl_803687C0 == 0) {
        MWTRACE(8, messages += 0);
        return -0x2711;
    }

    MWTRACE(8, messages + 0x14, arg0, arg1);

    while (remaining > 0) {
        MWTRACE(1, messages + 0x40, remaining);

        written = fn_80267004(buffer, remaining);
        if (!written) {
            break;
        }

        buffer += written;
        remaining -= written;
    }

    return 0;
}
#pragma optimization_level reset
u32 gdev_cc_read(void *arg0, u32 arg1) {
    extern s32 lbl_803687C0;
    extern u8 lbl_80282A3C[], lbl_80282A64[], lbl_8033DD08[];
    void MWTRACE(s32, const char *, ...);
    void fn_8022BA34(void *, void *, u32);
    void fn_8022BB3C(void *, void *, s32);
    u32 fn_8022BC94(void *);
    s32 fn_802672F0(void);
    u32 fn_80267264(void *, u32);
    u8 buffer[0x500];
    u32 requested;
    u32 length;
    u32 error = 0;
    if (!lbl_803687C0) return -0x2711;
    MWTRACE(1, (const char *)lbl_80282A3C, arg1, arg1);
    length = arg1;
    requested = arg1;
    while (fn_8022BC94(lbl_8033DD08) < requested) {
        error = 0;
        arg1 = fn_802672F0();
        if (arg1 != 0) {
            error = fn_80267264(buffer, requested);
            if (!error) fn_8022BB3C(lbl_8033DD08, buffer, arg1);
        }
    }
    if (!error) fn_8022BA34(lbl_8033DD08, arg0, length);
    else MWTRACE(8, (const char *)lbl_80282A64, error);
    return error;
}

s32 gdev_cc_close(void) {
    return 0;
}

s32 gdev_cc_open(void) {
    extern s32 lbl_803687C0;
    if ((s32) lbl_803687C0 != 0) {
        return -0x2715;
    }
    lbl_803687C0 = 1;
    return 0;
}

s32 gdev_cc_shutdown(void) {
    return 0;
}

s32 gdev_cc_initialize(void *arg0, void *arg1)
{
    extern u8 lbl_80282A94[];
    extern u8 lbl_80282AA8[];
    extern u8 lbl_8033DD08[];
    extern u8 lbl_8033D808[];

    extern void MWTRACE(s32, const char *, ...);
    extern void fn_802673E0(void *, void *);
    extern void fn_8022BC44(void *, void *, s32);

    MWTRACE(1, (const char *)lbl_80282A94);

    fn_802673E0(arg0, arg1);

    MWTRACE(1, (const char *)lbl_80282AA8);

    fn_8022BC44(lbl_8033DD08, lbl_8033D808, 0x500);

    return 0;
}

void MWTRACE(u8 level, char *fmt, ...) {
}

void fn_8022C038(s32 *arg0) {
    M2C_UNK OSRestoreInterrupts(s32);
    OSRestoreInterrupts(*arg0);
}

void fn_8022C05C(s32 *arg0) {
    s32 OSDisableInterrupts();
    *arg0 = OSDisableInterrupts();
}

void fn_8022C08C(void) {

}

s32 __va_arg(u8 *arg0, s32 arg1)
{
  u8 *value;
  s32 pad;
  u8 *counter;
  s32 index;
  s32 limit;
  s32 size;
  s32 count;
  s32 offset;
  s32 stride;
  u32 result;
  index = *((s8 *) arg0);
  counter = arg0;
  limit = 8;
  size = 4;
  count = 1;
  pad = 0;
  offset = 0;
  stride = 4;
  if (arg1 == 3)
  {
    index = *((s8 *) (arg0 + 1));
    counter = arg0 + 1;
    size = 8;
    offset = 0x20;
    stride = 8;
  }
  if (arg1 == 2)
  {
    size = 8;
    limit = 7;
    if (index & 1)
    {
      pad = 1;
    }
    count = 2;
  }
  if (index < limit)
  {
    s32 prod;
    index += pad;
    result = *((u32 *) (arg0 + 8));
    prod = index * stride;
    *counter = index + count;
    value = (((u8 *) result) + offset) + prod;
  }
  else
  {
    u32 new_var;
    *counter = 8;
    value = (u8 *) (~(size - 1));
    result = size + (*((u32 *) (arg0 + 4)));
    new_var = ((u32) value) & (result - 1);
    *((u32 *) (arg0 + 4)) = new_var + size;
  }
  if (arg1 == 0)
  {
    value = *((u8 **) value);
  }
  return (s32) value;
}

void __destroy_global_chain(void)
{
    struct DestructorNode {
        struct DestructorNode *next;
        void (*destructor)(void *, s32);
        void *object;
    };

    extern struct DestructorNode *__global_destructor_chain;

    struct DestructorNode *node;

    while (__global_destructor_chain != 0) {
        node = __global_destructor_chain;

        __global_destructor_chain = node->next;

        node->destructor(node->object, -1);
    }
}

void __register_global_object(s32 arg0, s32 arg1, void *arg2) {
    extern void *__global_destructor_chain;
    M2C_FIELD(arg2, void **, 0) = (void *) __global_destructor_chain;
    M2C_FIELD(arg2, s32 *, 4) = arg1;
    M2C_FIELD(arg2, s32 *, 8) = arg0;
    __global_destructor_chain = arg2;
}

u8 *fn_8022C1B8(u8 *arg0, u8 *arg1, u32 arg2) {
    u8 *var_r6;
    u8 temp_r0;

    if (arg0 != NULL && arg2 != 0U) {
        var_r6 = arg0;
        do {
            temp_r0 = *arg1;
            arg2 -= 1;
            arg1 += 1;
            *var_r6 = temp_r0;
            var_r6 += 1;
        } while (arg2 != 0U);
    }
    return arg0;
}
#include "global.h"
extern u16 lbl_802822A8[19];
extern u8 TRK_Use_BBA;
extern u32 gDBCommTable[10];
extern u32 lbl_8033CFC8;
extern u8 gTRKCPUState[1072];
#include "common.h"
extern u8 gTRKCPUState[1072];

/* TRKCloseFile: result returned in r3 by the debugger, see fn_8022B4AC. */
asm u8 fn_8022A4F0(u8 command, s32 file_handle) {
    nofralloc
    twi 31, r0, 0x0
    blr
}

/* MetroTRK file-I/O trap stub (TRKPositionFile in MetroTRK). No callers in GFEE01;
   left as void(void). */
asm void fn_8022A4F8(void) {
    nofralloc
    twi 31, r0, 0x0
    blr
}

#pragma push
asm void TRKSaveExtended1Block(void) {
    nofralloc
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    mfsr r16, 0
    mfsr r17, 1
    mfsr r18, 2
    mfsr r19, 3
    mfsr r20, 4
    mfsr r21, 5
    mfsr r22, 6
    mfsr r23, 7
    mfsr r24, 8
    mfsr r25, 9
    mfsr r26, 10
    mfsr r27, 11
    mfsr r28, 12
    mfsr r29, 13
    mfsr r30, 14
    mfsr r31, 15
    stmw r16, 0x1a8(r2)
    mftb r10, 268
    mftb r11, 269
    mfspr r12, 1008
    mfspr r13, 1009
    mfsrr1 r14
    mfspr r15, 287
    mfibatu r16, 0
    mfibatl r17, 0
    mfibatu r18, 1
    mfibatl r19, 1
    mfibatu r20, 2
    mfibatl r21, 2
    mfibatu r22, 3
    mfibatl r23, 3
    mfdbatu r24, 0
    mfdbatl r25, 0
    mfdbatu r26, 1
    mfdbatl r27, 1
    mfdbatu r28, 2
    mfdbatl r29, 2
    mfdbatu r30, 3
    mfdbatl r31, 3
    stmw r10, 0x1e8(r2)
    mfsdr1 r22
    mfdar r23
    mfdsisr r24
    mfsprg r25, 0
    mfsprg r26, 1
    mfsprg r27, 2
    mfsprg r28, 3
    li r29, 0x0
    mfspr r30, 1010
    mfear r31
    stmw r22, 0x25c(r2)
    mfspr r20, 912
    mfspr r21, 913
    mfspr r22, 914
    mfspr r23, 915
    mfspr r24, 916
    mfspr r25, 917
    mfspr r26, 918
    mfspr r27, 919
    mfspr r28, 920
    mfspr r29, 921
    mfspr r30, 922
    mfspr r31, 923
    stmw r20, 0x2fc(r2)
    b L_8022A650
    mfspr r16, 928
    mfspr r17, 935
    mfspr r18, 936
    mfspr r19, 937
    mfspr r20, 938
    mfspr r21, 939
    mfspr r22, 940
    mfspr r23, 941
    mfspr r24, 942
    mfspr r25, 943
    mfspr r26, 944
    mfspr r27, 951
    mfspr r28, 959
    mfspr r29, 1014
    mfspr r30, 1015
    mfspr r31, 1023
    stmw r16, 0x2b8(r2)
L_8022A650:
    mfspr r19, 1013
    mfspr r20, 953
    mfspr r21, 954
    mfspr r22, 957
    mfspr r23, 958
    mfspr r24, 955
    mfspr r25, 952
    mfspr r26, 956
    mfspr r27, 1020
    mfspr r28, 1021
    mfspr r29, 1022
    mfspr r30, 1019
    mfspr r31, 1017
    stmw r19, 0x284(r2)
    blr
    mfspr r25, 976
    mfspr r26, 977
    mfspr r27, 978
    mfspr r28, 979
    mfspr r29, 980
    mfspr r30, 981
    mfspr r31, 982
    stmw r25, 0x240(r2)
    mfdec r31
    stw r31, 0x278(r2)
    blr
}
#pragma pop

extern u8 gTRKRestoreFlags[];
#pragma push
asm void TRKRestoreExtended1Block(void) {
    nofralloc
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    lis r5, gTRKRestoreFlags@h
    ori r5, r5, gTRKRestoreFlags@l
    lbz r3, 0x0(r5)
    lbz r6, 0x1(r5)
    li r0, 0x0
    stb r0, 0x0(r5)
    stb r0, 0x1(r5)
    cmpwi r3, 0x0
    beq L_8022A6F4
    lwz r24, 0x1e8(r2)
    lwz r25, 0x1ec(r2)
    mttbl r24
    mttbu r25
L_8022A6F4:
    lmw r20, 0x2fc(r2)
    mtspr 912, r20
    mtspr 913, r21
    mtspr 914, r22
    mtspr 915, r23
    mtspr 916, r24
    mtspr 917, r25
    mtspr 918, r26
    mtspr 919, r27
    mtspr 920, r28
    mtspr 922, r30
    mtspr 923, r31
    b L_8022A740
    lmw r26, 0x2e0(r2)
    mtspr 944, r26
    mtspr 951, r27
    mtspr 1014, r29
    mtspr 1015, r30
    mtspr 1023, r31
L_8022A740:
    lmw r19, 0x284(r2)
    mtspr 1013, r19
    mtspr 953, r20
    mtspr 954, r21
    mtspr 957, r22
    mtspr 958, r23
    mtspr 955, r24
    mtspr 952, r25
    mtspr 956, r26
    mtspr 1020, r27
    mtspr 1021, r28
    mtspr 1022, r29
    mtspr 1019, r30
    mtspr 1017, r31
    b L_8022A7AC
    cmpwi r6, 0x0
    beq L_8022A78C
    lwz r26, 0x278(r2)
    mtdec r26
L_8022A78C:
    lmw r25, 0x240(r2)
    mtspr 976, r25
    mtspr 977, r26
    mtspr 978, r27
    mtspr 979, r28
    mtspr 980, r29
    mtspr 981, r30
    mtspr 982, r31
L_8022A7AC:
    lmw r16, 0x1a8(r2)
    mtsr 0, r16
    mtsr 1, r17
    mtsr 2, r18
    mtsr 3, r19
    mtsr 4, r20
    mtsr 5, r21
    mtsr 6, r22
    mtsr 7, r23
    mtsr 8, r24
    mtsr 9, r25
    mtsr 10, r26
    mtsr 11, r27
    mtsr 12, r28
    mtsr 13, r29
    mtsr 14, r30
    mtsr 15, r31
    lmw r12, 0x1f0(r2)
    mtspr 1008, r12
    mtspr 1009, r13
    mtsrr1 r14
    mtspr 287, r15
    mtibatu 0, r16
    mtibatl 0, r17
    mtibatu 1, r18
    mtibatl 1, r19
    mtibatu 2, r20
    mtibatl 2, r21
    mtibatu 3, r22
    mtibatl 3, r23
    mtdbatu 0, r24
    mtdbatl 0, r25
    mtdbatu 1, r26
    mtdbatl 1, r27
    mtdbatu 2, r28
    mtdbatl 2, r29
    mtdbatu 3, r30
    mtdbatl 3, r31
    lmw r22, 0x25c(r2)
    mtsdr1 r22
    mtdar r23
    mtdsisr r24
    mtsprg 0, r25
    mtsprg 1, r26
    mtsprg 2, r27
    mtsprg 3, r28
    mtspr 1010, r30
    mtear r31
    blr
}
#pragma pop

