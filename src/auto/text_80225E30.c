/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"

extern u8 *gTRKInputPendingPtr;

extern u16 lbl_802822F0[200]; // 400 bytes = 200 u16 values

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

void fn_8022695C(void *arg0, s32 arg1) {
    extern void fn_80003458(void *, s32, s32);

    *(u32 *)((u8 *)arg0 + 0x8) = 0;
    *(u32 *)((u8 *)arg0 + 0xC) = 0;

    if (arg1 == 0) {
        fn_80003458((u8 *)arg0 + 0x10, 0, 0x880);
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

s32 fn_80226A2C(void) {
    return 0;
}

int TRKInitializeMessageBuffers(void) {
    u8 *queue;
    s32 i;

    queue = &((u8 *)&lbl_8033B078)[0];

    for (i = 0; i < 3; i++) {
        fn_802287B8(queue);
        fn_802287B0(queue);

        *(u32 *)(queue + 0x4) = 0;

        fn_802287A8(queue);

        queue += 0x890;
    }

    return 0;
}

s32 fn_80226B68(void) {
    return 0;
}

s32 TRKInitializeSerialHandler(void) {
    void MWTRACE(u8 level, char *fmt, ...);
    extern u16 lbl_802822F0[200];
    extern u16 lbl_8033CA28[12];
    u8 *g = (u8 *)lbl_8033CA28;
    char *table = (char *)lbl_802822F0;

    *(s32 *)(g + 0) = -1;
    *(s32 *)(g + 8) = 0;
    *(s32 *)(g + 0xc) = 0;
    MWTRACE(1, &table[0x00], 0x40);
    MWTRACE(1, &table[0x24], 0x40);
    MWTRACE(1, &table[0x48], 0x40);
    MWTRACE(1, &table[0x6c], 0x40);
    MWTRACE(1, &table[0x8c], 0x40);
    MWTRACE(1, &table[0xac], 0x40);
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

s32 TRKTargetStopped(void);
s32 TRKTargetStopper(void);
u32 fn_80229030(void);
s32 fn_80229040(u32, u32, s32);
s32 fn_802290F8(u32, s32);
s32 fn_8022B078(s32, s32);
#pragma use_lmw_stmw on
s32 fn_80227174(void *arg0) {
    void *a = arg0;
    u8 unk18 = *(u8 *)((u8 *)a + 0x18);
    u32 unk1C;
    u32 unk20 = *(u32 *)((u8 *)a + 0x20);
    u32 unk24 = *(u32 *)((u8 *)a + 0x24);
    fn_8022692C(a, 0);

    switch (unk18) {
    case 16:
    case 0: {
        unk1C = *(u8 *)((u8 *)a + 0x1c);
        if (unk1C < 1) {
            u8 buf[0x40];
            memset(buf, 0, 0x40);
            buf[4] = 0x80;
            *(s32 *)buf = 0x40;
            buf[8] = 0x11;
            fn_8022B078((s32)(void *)buf, 0x40);
            return 0;
        }
        for (;;) {
            u32 v = fn_80229030();
            if (v < unk20) {
                break;
            }
            if (v > unk24) {
                break;
            }
        }
        {
            u8 buf[0x40];
            memset(buf, 0, 0x40);
            buf[4] = 0x80;
            *(s32 *)buf = 0x40;
            buf[8] = 0x11;
            fn_8022B078((s32)(void *)buf, 0x40);
            return 0;
        }
    }
    case 1:
    case 17: {
        if (TRKTargetStopper() == 0) {
            u8 buf[0x40];
            memset(buf, 0, 0x40);
            buf[4] = 0x80;
            *(s32 *)buf = 0x40;
            buf[8] = 0x16;
            fn_8022B078((s32)(void *)buf, 0x40);
            return 0;
        }
        {
            u8 buf[0x40];
            memset(buf, 0, 0x40);
            buf[4] = 0x80;
            *(s32 *)buf = 0x40;
            buf[8] = 0x0;
            fn_8022B078((s32)(void *)buf, 0x40);
            break;
        }
    }
    default: {
        u8 buf[0x40];
        memset(buf, 0, 0x40);
        buf[4] = 0x80;
        *(s32 *)buf = 0x40;
        buf[8] = 0x12;
        fn_8022B078((s32)(void *)buf, 0x40);
        return 0;
    }
    }
    switch (unk18) {
    case 0:
    case 16:
        return fn_802290F8(unk1C, unk18 == 16);
    case 1:
    case 17:
        return fn_80229040(unk20, unk24, unk18 == 17);
    default:
        return 0;
    }
    return 0;
}

s32 fn_80227444(void *arg0) {
    void fn_8022692C(void *, u32);
    void fn_8022695C(void *, u32);
    s32 fn_80229FA4(u16, u16, void *, s32 *, s32);
    s32 fn_80229A98(u16, u16, void *, s32 *, s32);
    s32 fn_80229928(u16, u16, void *, s32 *, s32);
    s32 fn_802294F0(u16, u16, void *, s32 *, s32);
    s32 fn_80226888(void *, void *, s32);
    s32 fn_8022B078(void *, s32);
    s32 fn_802262E8(void *);
    void MWTRACE(u8, char *, ...);
    void *memset(void *, s32, s32);
    extern char lbl_80282520[];
    extern char lbl_80282540[];

    s32 err;
    u16 start;
    u16 end;
    void *obj;
    s32 outLen;
    u8 reply2[0x40];
    u8 reply1[0x40];
    u8 reply3[0x40];

    obj = arg0;
    err = ((u8 *)arg0)[0x18];
    start = *(u16 *)((u8 *)arg0 + 0x1C);
    end = *(u16 *)((u8 *)arg0 + 0x20);
    fn_8022692C(arg0, 0);

    if (start > end) {
        memset(reply1, 0, 0x40);
        reply1[4] = 0x80;
        *(s32 *)reply1 = 0x40;
        reply1[8] = 0x14;
        fn_8022B078(reply1, 0x40);
        return 0;
    }

    fn_8022692C(obj, 0x40);

    switch (err) {
    case 0:
        err = fn_80229FA4(start, end, obj, &outLen, 0);
        break;
    case 1:
        err = fn_80229A98(start, end, obj, &outLen, 0);
        break;
    case 2:
        err = fn_80229928(start, end, obj, &outLen, 0);
        break;
    case 3:
        err = fn_802294F0(start, end, obj, &outLen, 0);
        break;
    default:
        err = 0x703;
        break;
    }

    fn_8022695C(obj, 0);

    if (err == 0) {
        memset(reply2, 0, 0x40);
        *(s32 *)reply2 = 0x40;
        reply2[4] = 0x80;
        reply2[8] = (u8)err;
        err = fn_80226888(obj, reply2, 0x40);
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

        memset(reply3, 0, 0x40);
        reply3[4] = 0x80;
        *(s32 *)reply3 = 0x40;
        reply3[8] = (u8)err;
        fn_8022B078(reply3, 0x40);
        return 0;
    }

    MWTRACE(1, lbl_80282520);
    err = fn_802262E8(obj);
    MWTRACE(1, lbl_80282540, err);
    return err;
}

s32 fn_802276D4(void *arg0) {
void fn_8022695C(void*,u32);
s32 fn_80226698(void*,void*,s32);
s32 fn_80229FA4(u16,u16,void*,s32*,s32);
s32 fn_80229A98(u16,u16,void*,s32*,s32);
s32 fn_80229928(u16,u16,void*,s32*,s32);
s32 fn_802294F0(u16,u16,void*,s32*,s32);
s32 fn_8022B078(void*,s32);
s32 fn_802262E8(void*);
void MWTRACE(u8,char*,...);
void *memset(void*,s32,s32);
extern char lbl_802824C0[];
s32 result, err; s8 code; char *strings=lbl_802824C0;
u8 request[0x40], invalid[0x40], reply[0x40];
s32 outLen;
if(*(u16*)((u8*)arg0+0x1c)>*(u16*)((u8*)arg0+0x20)){
memset(invalid,0,0x40); invalid[4]=0x80; *(s32*)invalid=0x40; invalid[8]=0x14;
fn_8022B078(invalid,0x40);return 0;
}
request[4]=0x80; *(s32*)request=0x468;
fn_8022695C(arg0,0);
MWTRACE(4,strings+0x98,*(s32*)((u8*)arg0+8));
fn_80226698(arg0,request,0x40);
MWTRACE(4,strings+0x98,*(s32*)((u8*)arg0+8));
err=fn_80229FA4(0,0x24,arg0,&outLen,1);
MWTRACE(4,strings+0xc0,err);
MWTRACE(4,strings+0x98,*(s32*)((u8*)arg0+8));
if(!err) err=fn_80229A98(0,0x21,arg0,&outLen,1);
MWTRACE(4,strings+0xf8,err);
MWTRACE(4,strings+0x98,*(s32*)((u8*)arg0+8));
if(!err) err=fn_80229928(0,0x60,arg0,&outLen,1);
MWTRACE(4,strings+0x120,err);
MWTRACE(4,strings+0x98,*(s32*)((u8*)arg0+8));
if(!err) err=fn_802294F0(0,0x1f,arg0,&outLen,1);
MWTRACE(4,strings+0x150,err);
MWTRACE(4,strings+0x98,*(s32*)((u8*)arg0+8));
if(err){
switch(err){
case 0x703:code=0x12;break;
case 0x701:code=0x14;break;
case 0x702:code=0x15;break;
case 0x704:code=0x21;break;
case 0x705:code=0x22;break;
case 0x706:code=0x20;break;
default:code=3;break;
}
memset(reply,0,0x40);reply[4]=0x80;*(s32*)reply=0x40;reply[8]=code;fn_8022B078(reply,0x40);return 0;
}
MWTRACE(1,strings+0x60);
result=fn_802262E8(arg0);MWTRACE(1,strings+0x80,result);return result;
}

#pragma use_lmw_stmw reset
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

#pragma use_lmw_stmw on
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
    s32 var_r31;
    u32 var_r30;
    s32 var_r29;
    s32 temp_r19;
    s32 temp_r20;
    s32 var_r21;
    void *var_r22;

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
                var_r21 = fn_802283A8(sp8, &sp10, 5, 3, flag == 0);
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

s32 fn_80228950(void) {
    return 0;
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

void fn_80228CDC(f64 *arg0)
{
    f64 __mffs(void);

    *arg0 = __mffs();
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

s32 TRKTargetStopped(void) {
    extern u16 gTRKState[];
    return *(s32 *)((u8 *)gTRKState + 0x98);
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
            temp_r28 = *(s32 *)(gTRKCPUState + 0x14);
            var_r30 = fn_80228588(*(u32 *)(gTRKCPUState + 0x10), (u8 *)*(u32 *)(gTRKCPUState + 0x18), (u32 *)temp_r28, &spC, 1, temp_r27 == 0xD1);
            if ((spC == 0) && (var_r30 != 0)) {
                spC = 1;
            }
            *(u32 *)(gTRKCPUState + 0x0C) = spC;
            if (temp_r27 == 0xD1) {
                fn_80228858(*(u32 *)(gTRKCPUState + 0x18), *(u32 *)temp_r28);
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

    end = start + length - 1;
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
                subEnd = (lbl_80282750[i].start - start) + start - 1;
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
                    subEnd = (end - entryEnd) + entryEnd - 1;
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

u8 fn_8022A4E0(s32 command, s32 file_handle, s32 *length_ptr, s32 buffer_ptr) {
    (void)command;
    (void)file_handle;
    (void)length_ptr;
    (void)buffer_ptr;
    return 0;
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
    extern u32 lbl_8033CFC8[];

    M2C_FIELD(gTRKState, s32 *, 0x98) = 1;
    M2C_FIELD(gTRKState, s32 *, 0x8C) = fn_80228948(gTRKState);
    lbl_8033CFC8[0] = 0xE0000000;

    return 0;
}

void fn_8022AD08(void) {
    extern u32 lbl_8033CFC8;
    extern u32 lbl_8029E598[];
    extern u8 gTRKInterruptVectorTable[];
    extern void fn_80003488(u32, void *, u32);
    extern void fn_80228858(u32, u32);

    u32 *var_r5;
    u32 temp_r29;
    u8 *var_r31;
    s32 var_r30;
    u32 temp_r6;
    u32 var_r27;

    if (lbl_8033CFC8 > 0x44 && lbl_8033CFC8 + 0x4000 > 0x44 &&
        (*(u32 *)((u8 *)gTRKCPUState + 0x238) & 3)) {
        var_r5 = (u32 *)0x44;
    } else {
        var_r5 = (u32 *)0x80000044;
    }
    temp_r29 = *var_r5;

    var_r31 = (u8 *)lbl_8029E598;
    for (var_r30 = 0; var_r30 <= 0xE; var_r30++, var_r31 += 4) {
        if ((temp_r29 & (1 << var_r30)) && var_r30 != 4) {
            temp_r6 = *(u32 *)var_r31;
            if (temp_r6 >= lbl_8033CFC8 &&
                temp_r6 < lbl_8033CFC8 + 0x4000 &&
                (*(u32 *)((u8 *)gTRKCPUState + 0x238) & 3)) {
                var_r27 = temp_r6;
            } else if (temp_r6 >= 0x7e000000U && temp_r6 <= 0x80000000U) {
                var_r27 = temp_r6;
            } else {
                var_r27 = (temp_r6 & 0x3FFFFFFF) | 0x80000000;
            }
            fn_80003488(var_r27, (void *)((u8 *)gTRKInterruptVectorTable + temp_r6), 0x100);
            fn_80228858(var_r27, 0x100);
        }
    }
}

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

void InitializeProgramEndTrap(void)
{
    void *fn_80003488(void *, const void *, u32);
    void ICInvalidateRange(void *, u32);
    void DCFlushRange(void *, u32);
    void PPCHalt(void);

    u8 *address;

    address = (u8 *)PPCHalt + 4;

    fn_80003488(address, (const void *)0x802827F8, 4);
    ICInvalidateRange(address, 4);
    DCFlushRange(address, 4);
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
    s32 fn_80267264(void *, s32);
    void fn_8022BB3C(void *, void *, s32);
    extern u8 lbl_8033DD08[];
    u8 sp8[0x500];
    s32 size;
    s32 result;

    size = fn_802672F0();
    if (size <= 0) {
        return 0;
    }
    if (fn_80267264(sp8, size) == 0) {
        fn_8022BB3C(lbl_8033DD08, sp8, size);
        result = size;
    } else {
        result = -0x2719;
    }
    return result;
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
