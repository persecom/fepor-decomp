/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
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

void TRKNubWelcome(void) {
    TRK_board_display(&lbl_80289EB8);
}

s32 TRKTerminateNub(void) {
    M2C_UNK fn_80226B68();
    fn_80226B68();
    return 0;
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

s32 fn_80226B68(void) {
    return 0;
}

void usr_put_initialize(void) {

}

s32 TRKInitializeDispatcher(void) {
    return 0;
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

s32 fn_802287A8(void) {
    return 0;
}

s32 fn_802287B0(void) {
    return 0;
}

s32 fn_802287B8(void) {
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
extern u8 gTRKCPUState[];
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
    *(u16*)((u8*)gTRKState + 0x98) = (u16)arg0;
}

u16 TRKTargetStopped(void) {
    extern u16 gTRKState[];
    return (u16)gTRKState[0x98 / sizeof(u16)];
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

void EnableMetroTRKInterrupts(void) {
    M2C_UNK fn_8022B120();
    fn_8022B120();
}

void TRKUARTInterruptHandler(void) {

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

void __register_global_object(s32 arg0, s32 arg1, void *arg2) {
    extern void *__global_destructor_chain;
    M2C_FIELD(arg2, void **, 0) = (void *) __global_destructor_chain;
    M2C_FIELD(arg2, s32 *, 4) = arg1;
    M2C_FIELD(arg2, s32 *, 8) = arg0;
    __global_destructor_chain = arg2;
}
