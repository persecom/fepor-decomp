/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"

extern u16 lbl_802822F0[200]; // 400 bytes = 200 u16 values

extern struct {
    u8 unk0;
    u8 unk4;
    u8 pad5[3];
    u8 unk8;
    u8 pad9[0x37];
} lbl_8033B048;
extern u8 lbl_8033B078[];
extern s32 lbl_803682F0;
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

static u32 lbl_803392E8[8];
static u32 lbl_80339308[8];
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

void TRKDestructEvent(void *arg0) {
    M2C_UNK fn_8022699C(s32);
    fn_8022699C(M2C_FIELD(arg0, s32 *, 8));
}

void fn_80225F4C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = -1;
}

s32 TRKGetNextEvent(void) {
    void *fn_802287B0(void *, void *);
    void fn_802287A8(void *);
    s32 var_r3;
    
    var_r3 = 0;

    fn_802287B0(&lbl_8033B048, &lbl_8033B048);
    if (lbl_8033B048.unk4 > 0) {
        u32 arg1 = lbl_8033B048.unk8 * 0xC;
        fn_80003488(0, &lbl_8033B048 + arg1 + 0xC, 0xC);
        lbl_8033B048.unk8 += 1;
        lbl_8033B048.unk4 -= 1;
        if (lbl_8033B048.unk8 == 2) {
            lbl_8033B048.unk8 = 0;
        }
        var_r3 = 1;
    }

    fn_802287A8(&lbl_8033B048);
    return var_r3;
}

void TRKNubWelcome(void) {
    TRK_board_display(&lbl_80289EB8);
}

s32 TRKTerminateNub(void) {
    M2C_UNK fn_80226B68();
    fn_80226B68();
    return 0;
}

void fn_8022641C(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r29;
    u32 temp_r0;
    u32 var_r30;
    s32 var_r31;
    
    var_r29 = 0;
    if (arg0 != NULL) {
        for (;;) {
            u32 temp_r3 = *(u32 *)((char *)arg0 + 0xC);
            if (temp_r3 == 0)
                break;
            var_r30 = 1;
            var_r31 = 0;
            temp_r0 = *(u32 *)((char *)arg0 + 0x8) - temp_r3;
            if (temp_r0 < 1) {
                var_r31 = 0x302;
                var_r30 = temp_r0;
            }
            fn_80003488(arg1 + var_r29, (char *)arg0 + temp_r3 + 0x10, var_r30);
            var_r29 += 1;
            if (var_r29 >= arg2)
                break;
            *(u32 *)((char *)arg0 + 0xC) = temp_r3 + var_r30;
        }
    }
}

void fn_802264B4(void* arg0, void** arg1)
{
    if (arg0 != NULL) {
        u32 temp = *(u32*)arg0;
        if ((*(u16*)&temp == 0x0)) {
            *(u32*)arg1 = temp;
            *(u32*)((u8*)arg0 + 0xC) += 8;
        } else {
            *(u32*)arg1 = 0x302;
            if (arg1 != NULL && *(u32*)arg1 == 0) {
                u8* dest = *(u8**)arg1;
                u8* src = (u8*)arg0 + 0x10;
                int i;
                for (i = 0; i < 8; i++) {
                    dest[i] = src[i];
                }
            }
        }
    }
}

s32 fn_80226698(void *arg0, u8 *arg1, s32 arg2) {
    s32 var_r0;
    s32 var_r7;
    s32 var_r9;
    u32 temp_r7;
    u8 *var_r4;

    var_r4 = arg1;
    var_r9 = 0;
    var_r0 = 0;
loop_5:
    if ((var_r0 == 0) && (var_r9 < arg2)) {
        temp_r7 = *(u32 *)((char *)arg0 + 0xC);
        if (temp_r7 >= 0x880U) {
            var_r7 = 0x301;
        } else {
            if (temp_r7 >= 0x880U) {
                var_r7 = 0x301;
            } else {
                *(u32 *)((char *)arg0 + 0xC) = temp_r7 + 1;
                var_r7 = 0;
                *(u8 *)((char *)arg0 + (temp_r7 + 0x10)) = *var_r4;
                *(u32 *)((char *)arg0 + 0x8) = *(u32 *)((char *)arg0 + 0x8) + 1;
            }
        }
        var_r0 = var_r7;
        var_r9 += 1;
        var_r4 += 1;
        goto loop_5;
    }
    return var_r0;
}

s32 fn_80226888(void *arg0, u8 *arg1, u32 arg2) {
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
        ((u8 *)arg0 + temp_r3)[0x10] = *arg1;
    } else {
        fn_80003488((u8 *)arg0 + temp_r3 + 0x10, arg1, var_r30);
    }
    *(s32 *)((u8 *)arg0 + 0xC) = *(s32 *)((u8 *)arg0 + 0xC) + var_r30;
    *(s32 *)((u8 *)arg0 + 0x8) = *(s32 *)((u8 *)arg0 + 0xC);
    return var_r31;
}

s32 fn_8022692C(void *arg0, u32 arg1) {
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

s32 fn_80226A2C(void) {
    return 0;
}

s32 fn_80226B68(void) {
    return 0;
}

void TRKGetInput(void) {
    void* fn_80226CE4(void);
    void TRKGetBuffer(void);
    void fn_80225F4C(void*, s32);
    void fn_80225F64(void*, void*);
    extern u16 lbl_8033CA28[12]; // 24 bytes = 12 * 2-byte words

    void* temp_r3;
    s32 sp10;
    s32 sp8;

    temp_r3 = fn_80226CE4();
    if (temp_r3 != (void*)-1) {
        TRKGetBuffer();
        fn_80225F4C(&sp8, 2);
        sp10 = (s32)temp_r3;
        lbl_8033CA28[0] = -1;
        fn_80225F64(&sp8, &lbl_8033CA28[0]);
    }
}

void usr_put_initialize(void) {

}

s32 TRKInitializeDispatcher(void) {
    return 0;
}

void fn_80227BF0(void) {
    OSReport("Error: Unknown unit type for %s\n", "null");
}

s32 fn_80227E34(void) {
    return 0;
}

s32 fn_80227E3C(void) {
    return 0;
}

s32 fn_80227E44(void) {
    M2C_UNK fn_8022AD08(void);
    M2C_UNK fn_8022B078(void *, s32);
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
    fn_8022B078(&reply, 0x40);
    fn_8022AD08();
    return 0;
}

s32 fn_80227E9C(void) {
    M2C_UNK fn_800053E0(void);
    M2C_UNK fn_8022B078(void *, s32);
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
    fn_8022B078(&reply, 0x40);
    fn_800053E0();
    return 0;
}

#pragma dont_inline on
s32 fn_80227EF4(void) {
    M2C_UNK fn_80225F64(void *);
    M2C_UNK fn_8022B078(void *, s32);
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
    fn_8022B078(&reply, 0x40);
    fn_80225F4C(event, 1);
    fn_80225F64(event);
    return 0;
}
#pragma dont_inline reset
s32 fn_80227F6C(void) {
    M2C_UNK fn_8022B078(void *, s32);
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
    fn_8022B078(&reply, 0x40);
    return 0;
}

void fn_80227FD0(s32 arg0) {
    extern s32 lbl_8033CA40[];
    lbl_8033CA40[0] = arg0;
}

extern u16 lbl_8033CA40;
u16 fn_80227FDC(void) {
    return lbl_8033CA40;
}

void fn_802283A8(void) {
    u32 var_r30;
    s32 var_r29;
    s32 i = 0;

    if (osIsDebugMonitor() == 1) {
        while (i <= 3) {
            var_r30 = 0;
            var_r29 = *(s32*)(0x80461170 + (i * 0xC));
            do {
                if ((var_r29 & (1 << var_r30)) != 0) {
                    *(u32*)(0x80461330 + (i * 0xC) + var_r30*4) = 1;
                }
                var_r30++;
            } while (var_r30 != 0x10);
            i++;
        }
    }
}

s32 fn_802287A8(void) {
    return 0;
}

s32 fn_802287B0(void) {
    return 0;
}

s32 fn_802287B8(void) {
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

void fn_80228858(s32 arg0, s32 arg1) {
    s32 var_r3;
    s32 var_r4;

    var_r3 = 0xFFFFFFF1 & arg0;
    var_r4 = arg1 + (arg0 - var_r3);
    do {
        M2C_DCACHE_CLEAN(var_r3);
        M2C_DCACHE_CLEAN_INVALIDATE(var_r3);
        M2C_SYNC();
        M2C_ICACHE_INVALIDATE(var_r3);
        var_r3 += 8;
        var_r4 -= 8;
    } while (var_r4 >= 0);
    M2C_SYNC();
}

void fn_80228958(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r6;
    u8 temp_r0;

    var_r6 = 0;
loop_1:
    if (var_r6 != arg2) {
        temp_r0 = *(u8*)(arg1 + var_r6);
        *(u8*)(arg0 + var_r6) = temp_r0;
        var_r6 += 1;
        goto loop_1;
    }
}

void TRKInterruptHandler(void)
{
    // This is a stub for now - need to properly decompile this interrupt handler
    return;
}

void fn_80228CDC(f64 *arg0) {
    *arg0 = M2C_ERROR(/* unknown instruction: mffs $f31 */);
}

void fn_80228D00(f64 *arg0)
{
    f64 temp = 0.0;
    if (arg0 != NULL) {
        temp = *arg0;
    }
    // Just a placeholder that has the same structure but not exact operations
}

s32 fn_80228DF8(void) {
    extern u16 gTRKState[];
    *(u16 *)((u8 *)&gTRKState + 0x98) = 1;
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
    extern u16 gTRKState[];

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
    extern u16 gTRKState[0xA4];
    *(s32 *)((u8 *)gTRKState + 0x98) = arg0;
}

u16 TRKTargetStopped(void) {
    extern u16 gTRKState[];
    return (u16)gTRKState[0x98 / sizeof(u16)];
}

s32 TRKTargetSupportRequest(void) {
    s32 temp_r27;
    s32 var_r30;
    s32 spC;
    s32 sp8;
    s32 temp_r28;
    s32 temp_r7;
    u8* r4_temp;

    temp_r27 = *(u16*) (gTRKCPUState + 0x0C); // offset 0xC
    if ((temp_r27 != 0xD1) && (temp_r27 != 0xD0) && (temp_r27 != 0xD2) && (temp_r27 != 0xD3) && (temp_r27 != 0xD4)) {
        fn_80225F4C(&spC, 4);
        fn_80225F64(&spC);
        return 0;
    }

    switch (temp_r27) {
    case 0xD2:
        var_r30 = fn_8022828C(*(u16*) (gTRKCPUState + 0x10), (u8) *(u16*) (gTRKCPUState + 0x14), *(u16*) (gTRKCPUState + 0x18), &spC);
        if ((spC == 0) && (var_r30 != 0)) {
            spC = 1;
        }
        *(u16*) (gTRKCPUState + 0x0C) = spC;
        break;
    case 0xD3:
        var_r30 = fn_802281A4(*(u16*) (gTRKCPUState + 0x10), &spC);
        if ((spC == 0) && (var_r30 != 0)) {
            spC = 1;
        }
        *(u16*) (gTRKCPUState + 0x0C) = spC;
        break;
    case 0xD4:
        temp_r7 = *(u32*) (gTRKCPUState + 0x14);
        sp8 = temp_r7;
        var_r30 = fn_80228094(*(u16*) (gTRKCPUState + 0x10), &sp8, (u8) *(u16*) (gTRKCPUState + 0x18), &spC, temp_r7);
        if ((spC == 0) && (var_r30 != 0)) {
            spC = 1;
        }
        *(u16*) (gTRKCPUState + 0x0C) = spC;
        *(u32*) (gTRKCPUState + 0x14) = sp8;
        break;
    default:
        temp_r28 = (s32) (gTRKCPUState + 0x14);
        var_r30 = fn_80228588(*(u16*) (gTRKCPUState + 0x10), *(u16*) (gTRKCPUState + 0x18), temp_r28, &spC, 1, temp_r27 == 0xD1);
        if ((spC == 0) && (var_r30 != 0)) {
            spC = 1;
        }
        *(u16*) (gTRKCPUState + 0x0C) = spC;
        if (temp_r27 == 0xD1) {
            fn_80228858(*(u16*) (gTRKCPUState + 0x18), *(u32*) (gTRKCPUState + 0x14));
        }
        break;
    }
    *(u16*) (gTRKCPUState + 0x80) = *(u16*) (gTRKCPUState + 0x80) + 4;
    return var_r30;
}

u32 fn_80229030(void) {
    return *(u32 *)(gTRKCPUState + 0x80);
}

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
    s32 fn_80226698(void *, void *, u32);
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
    fn_80226698(b, &msg, sizeof(msg));
}

s32 fn_80229FA4(s32 arg0, u32 arg1, s32 arg2, s32 *arg3, s32 arg4) {
    extern u16 gTRKExceptionStatus_8029E574[4];
    extern u16 gTRKBigEndian;
    s32 temp_r12;
    s32 var_r3;

    if (arg1 > 0x24U) {
        return 0x701;
    }
    temp_r12 = (arg1 - arg0) + 1;
    gTRKExceptionStatus_8029E574[0xD/2] = 0U;
    *arg3 = temp_r12 * 4;
    if (arg4 != 0) {
        var_r3 = fn_8022659C(arg2, temp_r12);
    } else {
        var_r3 = fn_8022632C(arg2, temp_r12);
    }
    if ((u8) gTRKExceptionStatus_8029E574[0xD/2] != 0) {
        var_r3 = 0x702;
        *arg3 = 0;
    }
    return var_r3;
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

s32 fn_8022A0E4(void *arg0, void *arg1) {
    s32 var_r3;
    if (arg0 == 0) {
        return 0x203;
    }
    if (arg1 == 0) {
        return 0x203;
    }
    var_r3 = 0;
    if (*(u16 *)((char *)arg0 + 0x8) < *(u16 *)((char *)arg1 + 0x8)) {
        var_r3 = 0x301;
    }
    return var_r3;
}

u8 fn_8022A4E0(s32 command, s32 file_handle, s32 *length_ptr, s32 buffer_ptr) {
    __builtin_trap();
}

void fn_8022A4E8(void) {
    return;
}

void InitMetroTRK_BBA(void) {
    // Function appears to be part of the Target Resident Kernel debugging subsystem initialization
    return;
}

void fn_8022AB88(s32 arg0, u32 arg1, s32 *arg2) {
    u32 fn_80214058();
    M2C_UNK fn_80214094(M2C_UNK, s32, s32, u32);
    M2C_UNK fn_80214338();
    u16 fn_80214358();
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r5;
    s32 var_r4;
    u16 temp_r31;
    u32 temp_r0;
    u32 temp_r29;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3;

    if (arg1 >= 0x4000U) {
        temp_r5 = *arg2;
        if ((u32) (arg1 + temp_r5) > 0x08000000U) {
            return;
        }
        var_r4 = 0;
        temp_r29 = (temp_r5 + (arg1 & 0x1F) + 0x1F) & 0xFFFFFFE0;
        var_r3 = (u32) (temp_r29 + 0x1F) >> 5U;
        if (temp_r29 > 0U) {
            temp_r0 = var_r3 >> 3U;
            var_ctr = temp_r0;
            if (temp_r0 != 0) {
                do {
                    M2C_DCACHE_INVALIDATE(var_r4 + arg0);
                    temp_r4 = var_r4 + 0x20;
                    M2C_DCACHE_INVALIDATE(temp_r4 + arg0);
                    temp_r4_2 = temp_r4 + 0x20;
                    M2C_DCACHE_INVALIDATE(temp_r4_2 + arg0);
                    temp_r4_3 = temp_r4_2 + 0x20;
                    M2C_DCACHE_INVALIDATE(temp_r4_3 + arg0);
                    temp_r4_4 = temp_r4_3 + 0x20;
                    M2C_DCACHE_INVALIDATE(temp_r4_4 + arg0);
                    temp_r4_5 = temp_r4_4 + 0x20;
                    M2C_DCACHE_INVALIDATE(temp_r4_5 + arg0);
                    temp_r4_6 = temp_r4_5 + 0x20;
                    M2C_DCACHE_INVALIDATE(temp_r4_6 + arg0);
                    temp_r4_7 = temp_r4_6 + 0x20;
                    M2C_DCACHE_INVALIDATE(temp_r4_7 + arg0);
                    var_r4 = temp_r4_7 + 0x20;
                    var_ctr -= 1;
                } while (var_ctr != 0);
                var_r3 &= 7;
                if (var_r3 != 0) {
                    goto block_7;
                }
            } else {
block_7:
                var_ctr_2 = var_r3;
                do {
                    M2C_DCACHE_INVALIDATE(var_r4 + arg0);
                    var_r4 += 0x20;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        do {

        } while (fn_80214058() != 0U);
        temp_r31 = fn_80214358();
        fn_80214338();
        fn_80214094(1, arg0, arg1 & 0xFFFFFFE0, temp_r29);
        do {

        } while (fn_80214358() == 0);
        if (temp_r31 == 0) {
            fn_80214338();
        }
    }
}

s32 TRKInitializeTarget(void) {
    extern u8 gTRKState[];
    extern u16 lbl_8033CFC8[];
    
    M2C_FIELD(gTRKState, s32 *, 0x98) = 1;
    M2C_FIELD(gTRKState, s32 *, 0x8C) = fn_80228948(gTRKState);
    lbl_8033CFC8[0] = 0xE000;
    
    return 0;
}

u32 fn_8022AE34(u32 arg0) {
    extern u32 lbl_8033CFC8;
    
    if ((arg0 < lbl_8033CFC8) || (arg0 >= (lbl_8033CFC8 + 0x4000)) || 
        !( *(s32*)((char*)gTRKCPUState + 0x238) & 3)) {
        if ((arg0 < 0x7E000000U) || (arg0 > 0x80000000U)) {
            return (arg0 & 0x3FFFFFFF) | 0x80000000;
        }
    }
    return arg0;
}

void EnableMetroTRKInterrupts(void) {
    M2C_UNK fn_8022B120();
    fn_8022B120();
}

void TRK_main(void) {
    // Empty implementation for now - this appears to be related to debugging/tracing
    return;
}

void TRKInitializeIntDrivenUART(void);
void TRKLoadContext(void);
void TRK_main(void);
u32 fn_8022AE34(u32 arg0);
void TRKLoadContext(void) {
    // Empty implementation for now - this appears to be related to debugging/tracing
    return;
}

void TRKUARTInterruptHandler(void) {

}

void UnreserveEXI2Port(void) {
    extern u8 gDBCommTable[40];
    ((void (*)(u8 *))*(u32 **)(gDBCommTable + 0x20))(gDBCommTable);
}

void ReserveEXI2Port(void) {
    extern u8 gDBCommTable[40];
    ((void (*)(u8 *))*(u32 **)(gDBCommTable + 0x24))(gDBCommTable);
}

s32 fn_8022B078(s32 a, s32 b) {
    extern u8 gDBCommTable[40];
    s32 temp_r3;

    temp_r3 = ((s32 (*)(s32, s32))*(u32 *)(gDBCommTable + 0x14))(a, b);
    return (s32)(-temp_r3 | temp_r3) >> 31;
}

s32 fn_8022B0B4(void) {
    extern u16 gDBCommTable[20];
    s32 (*func_ptr)(u16 *) = (s32 (*)(u16 *))(u32)gDBCommTable[0x10 / sizeof(u16)];
    s32 temp_r3;

    temp_r3 = func_ptr((u16 *) gDBCommTable);
    return (s32) (-temp_r3 | temp_r3) >> 0x1F;
}

void fn_8022B0F0(void) {
    extern u16 gDBCommTable[20];
    void (*func)(u16 *) = (void (*)(u16 *))(gDBCommTable + 0xC);
    func(gDBCommTable);
}

void TRKEXICallBack(s32 arg0, s32 arg1) {
    M2C_UNK OSEnableScheduler();
    M2C_UNK TRKLoadContext(s32, M2C_UNK);
    OSEnableScheduler();
    TRKLoadContext(arg1, 0x500);
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
    extern u16 lbl_8033CFE0;
    return (u8)(*(u16*)((char*)&lbl_8033CFE0));
}

void fn_8022B4A0(s8 arg0) {
    extern u16 lbl_8033CFE0;
    lbl_8033CFE0 = (u16)arg0;
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

s32 fn_8022B5EC(s32 arg1, s32 *arg2) {
    s32 sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_lt;
    u8 temp_r0;
    u8 temp_r3;

    if (fn_8022B490() == 0) {
        return 1;
    }
    if (fn_80227FDC() == 0) {
        return 1;
    }
    sp8 = *arg2;
    temp_r3 = fn_8022A4E0(0xD1, 0, &sp8, arg1);
    temp_r0 = temp_r3;
    temp_cr0_eq = (s32) temp_r0 == 1;
    temp_cr0_lt = (s32) temp_r0 < 1;
    *arg2 = sp8;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_lt != 0) {
            if ((s32) temp_r0 < 0) {
                goto block_12;
            }
            return 0;
        }
        if ((s32) temp_r0 < 3) {
            return 2;
        }
        goto block_12;
    }
block_12:
    return 1;
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
    M2C_UNK fn_8022BB3C(M2C_UNK *, M2C_UNK *, s32);
    s32 fn_8023C544();
    s32 fn_8023C54C(M2C_UNK *, s32);
    extern M2C_UNK lbl_8033D7E8;
    M2C_UNK sp8;
    s32 temp_r3;

    temp_r3 = fn_8023C544();
    if (temp_r3 <= 0) {
        return 0;
    }
    if (fn_8023C54C(&sp8, temp_r3) == 0) {
        fn_8022BB3C(&lbl_8033D7E8, &sp8, temp_r3);
        return temp_r3;
    }
    return -0x2719;
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

void ddh_cc_write(s32 arg0, s32 arg1, u32 arg2) {
    *(u32 *)(arg1 + arg0) = arg2;
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

void ddh_cc_initialize(void) {
    return;
}

void fn_8022BA34(void* arg0)
{
    if (arg0 != NULL) {
        s32 temp = *(s32*)((u8*)arg0 + 8);
        if (temp < 0x400) {
            s32 arg1 = *(s32*)((u8*)arg0 + 0x10);
            fn_8022C0B4(arg0, ((temp * 0xA) + (arg1 * 0x1E4)), 0, 0);
        } else {
            *(s32*)((u8*)arg0 + 0x8) = 0;
        }
    }
}

s32 fn_8022BC94(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 gdev_cc_initinterrupts(void) {
    M2C_UNK fn_8026738C();
    fn_8026738C();
    return 0;
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

s32 __va_arg(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r10;
    s32 var_r11;
    s32 var_r5;
    s32 var_r6;
    s32 var_r8;
    s32 var_r9;
    s8 var_r7;

    var_r7 = *arg0;
    var_r0 = 8;
    var_r8 = 4;
    var_r9 = 1;
    var_r5 = 0;
    var_r10 = 0;
    var_r11 = 4;
    
    if (arg1 == 3) {
        var_r7 = *(arg0 + 1);
        arg0++;
        var_r8 = 8;
        var_r10 = 0x20;
        var_r7 = *(arg0 + 1);
        var_r11 = 8;
    }
    
    if (arg1 == 2) {
        var_r8 = 8;
        var_r0 = 7;
        if (var_r7 & 1) {
            var_r5 = 1;
        }
        var_r9 = 2;
    }

    if (var_r7 < var_r0) {
        temp_r7 = var_r7 + var_r5;
        temp_r0 = temp_r7 + var_r9;
        *arg0 = temp_r0;
        
        var_r6 = *(arg0 + 8);
        var_r6 = var_r10 + (temp_r7 * var_r11);
        var_r6 = var_r6 + var_r6;
    } else {
        temp_r0 = var_r8 - 1;
        *arg0 = 8;
        var_r6 = ~temp_r0 & ((var_r8 + *(arg0 + 4)) - 1);
        *(arg0 + 4) = (s32) (var_r6 + var_r8);
    }
    
    if (arg1 == 0) {
        var_r6 = *(u8*)*(arg0 + 0);
    }
    
    return var_r6;
}

void __register_global_object(s32 arg0, s32 arg1, void *arg2) {
    extern void *__global_destructor_chain;
    M2C_FIELD(arg2, void **, 0) = (void *) __global_destructor_chain;
    M2C_FIELD(arg2, s32 *, 4) = arg1;
    M2C_FIELD(arg2, s32 *, 8) = arg0;
    __global_destructor_chain = arg2;
}

void fn_8022C1B8(u8 *arg0, u8 *arg1, u32 arg2) {
    if (arg0 != NULL && arg2 != 0) {
        do {
            *arg0 = *arg1;
            arg1++;
            arg0++;
            arg2--;
        } while (arg2 != 0);
    }
}
#include "global.h"
extern u16 lbl_802822A8[19];
extern u8 TRK_Use_BBA;
extern u32 gDBCommTable[10];
extern u32 lbl_8033CFC8;
extern u8 gTRKCPUState[1072];
#include "common.h"
extern u8 gTRKCPUState[1072];
