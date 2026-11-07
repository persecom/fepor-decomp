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

void fn_80216994(void) {

}

void fn_80217488(void) {
    lbl_803682F0 = 0;
}

u16 fn_80217AD8(void) {
    extern u16 lbl_80368740;
    return lbl_80368740;
}

s32 fn_80219258(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_8021965C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_8021BA9C(void *arg0, char *name) {
    char *p = (char *)arg0 + 8;
    s32 n = 0x20;

    while (n-- > 0) {
        char a = *p++;
        char b = *name++;
        if (a != b) {
            return 0;
        }
        if (b == 0) {
            return 1;
        }
    }
    if (*name == 0) {
        return 1;
    }
    return 0;
}

s32 fn_8021BB04(void *arg0, u8 *arg1) {
    s32 fn_80231944(void *, void *, u32);
    extern u8 lbl_8033A420[];
    u8 *p = M2C_FIELD(arg0, u8 **, 0x10C);

    if (*arg1 == 0xFF) {
        return -4;
    }
    if (p == lbl_8033A420 || (fn_80231944(arg1, p, 4) == 0 && fn_80231944(arg1 + 4, p + 4, 2) == 0)) {
        return 0;
    }
    return -10;
}

void fn_8021C02C(s32 *arg0) {
    s32 fn_80217B18(s32, s32 *);
    M2C_UNK fn_80217BD0(s32, M2C_UNK);
    s32 spC;

    if (fn_80217B18(*arg0, &spC) < 0) {
        return;
    }
    *arg0 = -1;
    fn_80217BD0(spC, 0);
}

s32 fn_8021C080(void) {
    return 0;
}

void fn_8021C84C(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_80217C64(s32);
    s32 fn_8021C708(s32 *, s32, s32, s32, M2C_UNK *);
    extern M2C_UNK fn_80216998;
    if (fn_8021C708(arg0, arg1, arg2, arg3, &fn_80216998) < 0) {
        return;
    }
    fn_80217C64(*arg0);
}

void fn_8021CDC4(void) {
    s32 temp_r3;
    
    temp_r3 = fn_80013E50(0);
    fn_80013E74((void*)temp_r3, 0);
}

void fn_8021D28C(s32 arg0) {
    M2C_UNK fn_80217C64(s32);
    s32 fn_8021D118(M2C_UNK *);
    extern M2C_UNK fn_80216998;
    if (fn_8021D118(&fn_80216998) < 0) {
        return;
    }
    fn_80217C64(arg0);
}

s32 fn_8021D2D4(s32 arg0, s32 index, void *dst) {
    s32 fn_80217B18(s32, s32 *);
    s32 fn_80217BD0(s32, s32);
    s32 fn_8021BCCC(s32, u8 *);
    void *memcpy(void *, const void *, u32);
    s32 sp14;
    s32 ret;
    u8 *entry;

    if (index < 0 || index >= 0x7F) {
        return -0x80;
    }
    ret = fn_80217B18(arg0, &sp14);
    if (ret < 0) {
        return ret;
    }
    entry = (u8 *)fn_8021965C((void *)sp14) + (index << 6);
    ret = fn_8021BCCC(sp14, entry);
    if (ret >= 0) {
        memcpy(dst, entry, 0x40);
    }
    return fn_80217BD0(sp14, ret);
}

void fn_8021ED98(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

s32 fn_8021F250(s32 *arg0) {
    return *arg0;
}

s32 fn_8021F258(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 fn_8021F4CC(void) {
    extern s32 lbl_80368770;
    return lbl_80368770;
}

s32 fn_8021F4D4(void) {
    extern s32 lbl_80368774;
    return lbl_80368774;
}

s32 fn_8021F4DC(void) {
    extern s32 lbl_80368788;
    return lbl_80368788;
}

void fn_80220198(void) {
    *(s8 *)0xCC008000 = 0x48;
}

u16 fn_80220970(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

void fn_80221A2C(s32 arg0) {
    extern void *__GXData;
    M2C_FIELD(__GXData, s32 *, 0x1EC) = (s32) ((M2C_FIELD(__GXData, s32 *, 0x1EC) & ~0x180) | ((arg0 << 7) & 0x180));
}

void fn_80221D6C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg3;
    M2C_FIELD(arg0, f32 *, 0x20) = farg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg5;
}

void fn_80221FE8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x30) = farg2;
}

void fn_802220DC(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) *arg1;
}

s32 fn_80222A74(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0xC) << 5) & 0x03FFFFE0;
}

s32 fn_80222A80(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x3FF) + 1;
}

s32 fn_80222A90(void *arg0) {
    return (((u32) M2C_FIELD(arg0, u32 *, 8) >> 0xAU) & 0x3FF) + 1;
}

s32 fn_80222AA0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

u8 fn_80222AA8(void *arg0) {
    return (u8) (((M2C_FIELD(arg0, u8 *, 0x1F) & 1) - 1) == 0);
}

s32 fn_80222CDC(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) << 5) & 0x03FFFFE0;
}

u16 fn_80222CE8(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 8);
}

void fn_80223978(void) {

}

void fn_80224E1C(void *arg0, s32 arg1) {
    *(s32*)((u8*)arg0 + 0x50) = arg1;
    *(s32*)((u8*)arg0 + 0x54) = arg1;
}

void fn_80225BF4(void) {
    extern void *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

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
    M2C_UNK fn_8022AD08();
    M2C_UNK fn_8022B078(s32 *, M2C_UNK, M2C_UNK);
    M2C_UNK memset(s32 *, M2C_UNK, M2C_UNK);
    s8 sp10;
    s8 spC;
    s32 sp8;

    memset(&sp8, 0, 0x40);
    spC = 0x80;
    sp8 = 0x40;
    sp10 = 0;
    fn_8022B078(&sp8, 0x40, 0x40);
    fn_8022AD08();
    return 0;
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
    void *ptr = (char *)arg1 + arg0;
    *(u32 *)ptr = arg2;
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
