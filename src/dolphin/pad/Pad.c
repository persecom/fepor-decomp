/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern u16 Scb_80339420[];
extern s32 PauseFlag_803685A4;
extern s32 PausingFlag_803685A8;
extern void* executing_80368598;
extern u32 lbl_803685B8;
extern void (*lbl_803685BC)(void*, void*);
extern void stateReady(void);
extern void fn_8020F0B8(void *arg0);
extern void __DVDClearWaitingQueue(void);
extern s32 __DVDPopWaitingQueue(void);;
extern s32 lbl_803682F0;;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);
extern s32 lbl_80366F60;
extern s32 lbl_8029CFE8;

typedef struct PADStatus {
    u16 button;
    s8 stickX;
    s8 stickY;
    s8 substickX;
    s8 substickY;
    u8 triggerLeft;
    u8 triggerRight;
    u8 analogA;
    u8 analogB;
    s8 err;
} PADStatus;


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
extern u16* lbl_80368648;
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

typedef struct OSResetFunctionInfo OSResetFunctionInfo;
struct OSResetFunctionInfo {
    BOOL (*func)(BOOL final);
    u32 priority;
    OSResetFunctionInfo *next;
    OSResetFunctionInfo *prev;
};

typedef struct OSResetFunctionQueue {
    OSResetFunctionInfo *head;
    OSResetFunctionInfo *tail;
} OSResetFunctionQueue;

extern OSResetFunctionQueue ResetFunctionQueue_803684E8;

typedef struct OSContext {
    u8 data[0x2C8];
} OSContext;

void OSRegisterResetFunction(OSResetFunctionInfo *info);
BOOL __OSCallResetFunctions(BOOL final);
void __OSReboot(u32 resetCode, u32 bootDol);
void OSClearContext(OSContext *context);
void OSSetCurrentContext(OSContext *context);
void fn_80206E1C(u32 bootDol, u32 resetCode, char **argv);
s32 __OSSyncSram(void);

extern void DecrementerExceptionCallback(void);

extern u32 __SPR_392;

extern u16 InterruptHandlerTable_803684C8[];

extern s32 StopAtNextInt_80368530;
extern u16 lbl_80368550;

extern u32 lbl_80368514;
extern u32 lbl_80368510;
extern s32 lbl_803684FC;
extern s32 lbl_80368500;
extern void (*lbl_803684F8)();

extern void* __OSSystemCallVectorStart;
extern void* __OSSystemCallVectorEnd;

extern s32* FstStart_8036857C;
extern s32 lbl_80368588;

extern u16 Scb_803394;

u32 __OSGetResetSWState(void);

extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);

extern u16 Scb_80339420[4];
extern u16 lbl_80282268[8];
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern u16 lbl_8029D210[];

static void PADDisable(s32 chan) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void fn_80209C10(s32 chan, u16 id);
    u32 fn_8023B930(u32 poll);
    extern u32 lbl_8036866C;
    extern u32 lbl_80368678;
    extern u32 lbl_8036867C;
    extern u32 lbl_80368680;
    extern u32 lbl_80368684;
    s32 enabled;
    u32 chanBit;

    enabled = OSDisableInterrupts();
    chanBit = 0x80000000 >> chan;
    fn_8023B930(chanBit);
    lbl_8036866C &= ~chanBit;
    lbl_80368678 &= ~chanBit;
    lbl_8036867C &= ~chanBit;
    lbl_80368680 &= ~chanBit;
    lbl_80368684 &= ~chanBit;
    fn_80209C10(chan, 0);
    OSRestoreInterrupts(enabled);
}

void fn_80211F78(s32 arg0, s32 arg1) {
    extern s32 lbl_80366FA4;
    extern s32 lbl_80366FAC;
    extern s32 lbl_8036866C;
    extern s32 lbl_80368670;
    extern char lbl_8033A1C0[];
    extern void fn_802121E0(void);
    void fn_80211DD4(s32);
    void fn_8023BA70(s32, void *);
    void fn_8023B804(s32, s32);
    void fn_8023B894(s32);
    void fn_8023C188(s32, void *);
    void *memset(void *, int, unsigned int);
    s32 r31;
    char buf[24];

    if (!(arg1 & 0xF)) {
        fn_80211DD4(lbl_80366FA4);
        r31 = lbl_80366FA4;
        lbl_8036866C |= 0x80000000U >> r31;
        fn_8023BA70(r31, buf);
        fn_8023B804(r31, lbl_80366FAC | 0x400000);
        fn_8023B894(lbl_8036866C);
    }
    lbl_80366FA4 = __cntlzw(lbl_80368670);
    if (lbl_80366FA4 != 0x20) {
        lbl_80368670 &= ~(0x80000000U >> lbl_80366FA4);
        memset(lbl_8033A1C0 + (lbl_80366FA4 * 0xC), 0, 0xC);
        fn_8023C188(lbl_80366FA4, fn_802121E0);
    }
}

void fn_80212108(s32 chan, u32 type) {
    void fn_8023B804(s32, u32);
    void fn_8023B894(u32);
    void fn_8023BA70(s32, u32 *);
    void fn_8023C188(s32, void (*)(s32, u32));
    void memset(void *, int, u32);
    extern void fn_802121E0(s32, u32);
    extern u8 lbl_8033A1C0[];
    extern s32 lbl_80366FA4;
    extern u32 lbl_80366FAC;
    extern u32 lbl_8036866C;
    extern u32 lbl_80368670;
    extern u32 lbl_80368678;
    u32 sr;
    u32 pad[4];
    s32 chanBit;
    u32 bit;
    u32 bitConst;

    (void)pad;
    if (!(type & 0xF)) {
        bitConst = 0x80000000U;
        chanBit = lbl_80366FA4;
        lbl_8036866C |= bitConst >> chanBit;
        fn_8023BA70(chanBit, &sr);
        fn_8023B804(chanBit, lbl_80366FAC | 0x400000);
        fn_8023B894(lbl_8036866C);
        lbl_80368678 |= bitConst >> lbl_80366FA4;
    }
    bit = lbl_80368670;
    lbl_80366FA4 = __cntlzw(bit);
    if (lbl_80366FA4 != 0x20) {
        lbl_80368670 = bit & ~(0x80000000U >> lbl_80366FA4);
        memset(&lbl_8033A1C0[lbl_80366FA4 * 12], 0, 12);
        fn_8023C188(lbl_80366FA4, fn_802121E0);
    }
}

void fn_8021250C(s32 chan, u32 type) {
    s32 SITransfer(s32 chan, void *output, u32 outputBytes, void *input, u32 inputBytes, void *callback, s64 delay);
    extern void fn_8021203C(void);
    extern u8 lbl_8033A1C0[];
    extern u32 lbl_80366FB8;
    extern u32 lbl_8036866C;
    extern u32 lbl_80368678;
    extern u32 lbl_8036867C;
    u32 error;
    u32 chanBit;

    chanBit = 0x80000000 >> chan;
    if (!(lbl_8036866C & chanBit)) {
        return;
    }

    error = type & 0xFF;
    type &= ~0xFF;

    lbl_80368678 &= ~chanBit;
    lbl_8036867C &= ~chanBit;

    if (!(error & 0xF) && (type & 0x80000000) && (type & 0x00100000) && (type & 0x40000000) &&
        !(type & 0x04000000) && !(type & 0x00080000) && !(type & 0x00040000)) {
        SITransfer(chan, &lbl_80366FB8, 1, &lbl_8033A1C0[chan * 0xC], 10, fn_8021203C, 0);
    } else {
        PADDisable(chan);
    }
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
u32 fn_802129C0(PADStatus *status)
{
  s32 OSDisableInterrupts(void);
  void OSRestoreInterrupts(s32);
  s32 fn_8021264C(u32);
  s32 fn_8023ABF4(s32);
  u32 fn_8023B788(s32);
  u32 SIGetType(s32);
  s32 fn_8023BA70(s32, void *);
  void fn_8023C188(s32, void *);
  void fn_8021203C(void);
  void fn_8021250C(s32, u32);
  s32 SITransfer(s32, void *, u32, void *, u32, void *, s64);
  void *memset(void *, s32, u32);
  extern u8 lbl_8033A1C0[];
  extern s32 lbl_80366FA4;
  extern u16 lbl_80366FB8;
  extern u32 lbl_8036866C;
  extern u32 lbl_80368670;
  extern u32 lbl_80368678;
  extern u32 lbl_8036867C;
  extern u32 lbl_80368680;
  extern void (*lbl_80366FB4)(s32, PADStatus *, u32 *);
  u64 response;
  u8 *origin;
  s32 enabled;
  s32 chan;
  u32 result;
  u32 bit;
  u32 offset;
  enabled = OSDisableInterrupts();
  chan = (result = 0);
  offset = chan * 12;
  origin = lbl_8033A1C0 + offset;
  do
  {
    bit = 0x80000000U >> chan;
    if (lbl_80368680 & bit)
    {
      fn_8021264C(0);
      status->err = -2;
      memset(status, 0, 10);
    }
    else if ((lbl_80368670 & bit) || (lbl_80366FA4 == chan))
    {
      status->err = -2;
      memset(status, 0, 10);
    }
    else if (!(lbl_8036866C & bit))
    {
      status->err = -1;
      memset(status, 0, 10);
    }
    else if (fn_8023ABF4(chan))
    {
      status->err = -3;
      memset(status, 0, 10);
    }
    else if (fn_8023B788(chan) & 8)
    {
      fn_8023BA70(chan, (u32 *) (&response));
      if (lbl_80368678 & bit)
      {
        status->err = 0;
        memset(status, 0, 10);
        if (!(lbl_8036867C & bit))
        {
          lbl_8036867C |= bit;
          fn_8023C188(chan, fn_8021250C);
        }
      }
      else
      {
        PADDisable(chan);
        status->err = -1;
        memset(status, 0, 10);
      }
    }
    else
    {
      if (!(SIGetType(chan) & 0x20000000))
      {
        result |= bit;
      }
      if (!fn_8023BA70(chan, (u32 *) (&response)))
      {
        status->err = -3;
        memset(status, 0, 10);
      }
      else if (((u32 *) (&response))[0] & 0x80000000)
      {
        status->err = -3;
        memset(status, 0, 10);
      }
      else
      {
        lbl_80366FB4(chan, status, (u32 *) (&response));
        if (status->button & 0x2000)
        {
          status->err = -3;
          memset(status, 0, 10);
          SITransfer(chan, &lbl_80366FB8, 1, origin, 10, fn_8021203C, 0);
        }
        else
        {
          status->err = 0;
          status->button &= ~0x80;
        }
      }
    }
    chan++;
    origin += 12;
    status++;
  }
  while (chan < 4);
  OSRestoreInterrupts(enabled);
  return result;
}
#pragma opt_strength_reduction reset
#pragma use_lmw_stmw reset
void fn_80212CC0(s32 arg0, u32 arg1) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 SIGetType(s32);
    void fn_8023B804(s32, u32);
    void fn_8023B818(void);
    extern s32 lbl_8036866C;
    extern u32 lbl_80366FB0;
    extern u32 lbl_80366FAC;
    s32 enabled;
    u32 var_r30;
    s32 pad;

    var_r30 = arg1;
    enabled = OSDisableInterrupts();
    if ((lbl_8036866C & (0x80000000U >> arg0)) && (SIGetType(arg0) & 0x20000000) == 0) {
        if (lbl_80366FB0 < 2U && var_r30 == 2) {
            var_r30 = 0;
        }
        if (*(u8 *)0x800030E3 & 0x20) {
            var_r30 = 0;
        }
        fn_8023B804(arg0, lbl_80366FAC | 0x400000 | (var_r30 & 3));
        fn_8023B818();
    }
    OSRestoreInterrupts(enabled);
}

void fn_80212D78(s32 arg0) {
    extern s32 __PADSpec;
    extern M2C_UNK fn_80212DD8;
    extern M2C_UNK fn_80212F4C;
    extern M2C_UNK fn_802130C0;
    extern s32 lbl_80366FB0;
    extern M2C_UNK *lbl_80366FB4;
    __PADSpec = 0;
    switch (arg0) {                                 /* irregular */
    case 0:
        lbl_80366FB4 = &fn_80212DD8;
        break;
    case 1:
        lbl_80366FB4 = &fn_80212F4C;
        break;
    default:
        lbl_80366FB4 = &fn_802130C0;
        break;
    }
    lbl_80366FB0 = arg0;
}

void fn_80212DD8(s32 chan, PADStatus *status, u32 *data) {
    status->button = 0;
    status->button |= ((data[0] >> 16) & 0x0008) ? 0x0100 : 0;
    status->button |= ((data[0] >> 16) & 0x0020) ? 0x0200 : 0;
    status->button |= ((data[0] >> 16) & 0x0100) ? 0x0400 : 0;
    status->button |= ((data[0] >> 16) & 0x0001) ? 0x0800 : 0;
    status->button |= ((data[0] >> 16) & 0x0010) ? 0x1000 : 0;

    status->stickX = (s8)(data[1] >> 16);
    status->stickY = (s8)(data[1] >> 24);
    status->substickX = (s8)(data[1]);
    status->substickY = (s8)(data[1] >> 8);

    status->triggerLeft = (u8)(data[0] >> 8) & 0xFF;
    status->triggerRight = (u8)data[0] & 0xFF;

    status->analogA = 0;
    status->analogB = 0;

    if (170 <= status->triggerLeft) {
        status->button |= 0x0040;
    }
    if (170 <= status->triggerRight) {
        status->button |= 0x0020;
    }

    status->stickX -= 128;
    status->stickY -= 128;
    status->substickX -= 128;
    status->substickY -= 128;
}

void fn_80212F4C(s32 chan, PADStatus *status, u32 *data) {
    status->button = 0;
    status->button |= ((data[0] >> 16) & 0x0080) ? 0x0100 : 0;
    status->button |= ((data[0] >> 16) & 0x0100) ? 0x0200 : 0;
    status->button |= ((data[0] >> 16) & 0x0020) ? 0x0400 : 0;
    status->button |= ((data[0] >> 16) & 0x0010) ? 0x0800 : 0;
    status->button |= ((data[0] >> 16) & 0x0200) ? 0x1000 : 0;

    status->stickX = (s8)(data[1] >> 16);
    status->stickY = (s8)(data[1] >> 24);
    status->substickX = (s8)(data[1]);
    status->substickY = (s8)(data[1] >> 8);

    status->triggerLeft = (u8)(data[0] >> 8) & 0xFF;
    status->triggerRight = (u8)data[0] & 0xFF;

    status->analogA = 0;
    status->analogB = 0;

    if (170 <= status->triggerLeft) {
        status->button |= 0x0040;
    }
    if (170 <= status->triggerRight) {
        status->button |= 0x0020;
    }

    status->stickX -= 128;
    status->stickY -= 128;
    status->substickX -= 128;
    status->substickY -= 128;
}

static void ClampS8(s8* p, s8 o) {
    s8 s = *p;
    s8 m;
    if (0 < o) {
        m = (s8)(o - 128);
        if (s < m) {
            s = m;
        }
    } else if (o < 0) {
        m = (s8)(o + 127);
        if (m < s) {
            s = m;
        }
    }
    s -= o;
    *p = s;
}

static void ClampU8(u8* p, u8 o) {
    u8 s = *p;
    if (s < o) {
        s = o;
    }
    s -= o;
    *p = s;
}

void fn_802130C0(s32 chan, PADStatus* status, u32* data) {
    extern u32 lbl_80366FAC;
    extern u32 lbl_8033A1B0[];
    extern u32 lbl_80368684;
    extern u8 lbl_8033A1C0[];
    u8* origin;

    status->button = (u16)((data[0] >> 16) & 0x3fff);
    status->stickX = (s8)(data[0] >> 8);
    status->stickY = (s8)(data[0] >> 0);

    switch (lbl_80366FAC & 0x700) {
    case 0x000:
    case 0x500:
    case 0x600:
    case 0x700:
        status->substickX = (s8)(data[1] >> 24);
        status->substickY = (s8)(data[1] >> 16);
        status->triggerLeft = (u8)((data[1] >> 8) & 0xf0);
        status->triggerRight = (u8)((data[1] >> 4) & 0xf0);
        status->analogA = (u8)(data[1] & 0xf0);
        status->analogB = (u8)((data[1] << 4) & 0xf0);
        break;
    case 0x100:
        status->substickX = (s8)(s32)((data[1] >> 24) & 0xf0);
        status->substickY = (s8)(s32)((data[1] >> 20) & 0xf0);
        status->triggerLeft = (u8)(data[1] >> 16);
        status->triggerRight = (u8)(data[1] >> 8);
        status->analogA = (u8)(data[1] & 0xf0);
        status->analogB = (u8)((data[1] << 4) & 0xf0);
        break;
    case 0x200:
        status->substickX = (s8)(s32)((data[1] >> 24) & 0xf0);
        status->substickY = (s8)(s32)((data[1] >> 20) & 0xf0);
        status->triggerLeft = (u8)((data[1] >> 16) & 0xf0);
        status->triggerRight = (u8)((data[1] >> 12) & 0xf0);
        status->analogA = (u8)(data[1] >> 8);
        status->analogB = (u8)(data[1] >> 0);
        break;
    case 0x300:
        status->substickX = (s8)(data[1] >> 24);
        status->substickY = (s8)(data[1] >> 16);
        status->triggerLeft = (u8)(data[1] >> 8);
        status->triggerRight = (u8)(data[1] >> 0);
        status->analogA = 0;
        status->analogB = 0;
        break;
    case 0x400:
        status->substickX = (s8)(data[1] >> 24);
        status->substickY = (s8)(data[1] >> 16);
        status->triggerLeft = 0;
        status->triggerRight = 0;
        status->analogA = (u8)(data[1] >> 8);
        status->analogB = (u8)(data[1] >> 0);
        break;
    }

    status->stickX -= 128;
    status->stickY -= 128;
    status->substickX -= 128;
    status->substickY -= 128;

    if (((lbl_8033A1B0[chan] & 0xffff0000) == 0x09000000) &&
        ((status->button & 0x0080) ^ 0x0080)) {
        lbl_80368684 |= 0x80000000U >> chan;
        status->stickX = 0;
        status->stickY = 0;
        status->substickX = 0;
        status->substickY = 0;
        return;
    }

    lbl_80368684 &= ~(0x80000000U >> chan);
    origin = &lbl_8033A1C0[chan * 12];

    ClampS8(&status->stickX, (s8)origin[2]);
    ClampS8(&status->stickY, (s8)origin[3]);
    ClampS8(&status->substickX, (s8)origin[4]);
    ClampS8(&status->substickY, (s8)origin[5]);
    ClampU8(&status->triggerLeft, origin[6]);
    ClampU8(&status->triggerRight, origin[7]);
}

s32 fn_80213530(s32 arg0)
{
  s32 fn_8021275C(M2C_UNK);
  int new_var;
  M2C_UNK fn_8021364C(M2C_UNK);
  s32 fn_8023ABD4();
  extern s32 lbl_80366FA4;
  extern u32 lbl_80368670;
  int new_var2;
  extern u32 lbl_80368688;
  extern s32 lbl_8036868C;
  s32 var_r31;
  s32 var_r3;
  if (((u32) lbl_80368688) != 0U)
  {
    fn_8021364C(0);
  }
  if (arg0 == 0)
  {
    var_r31 = 0;
    var_r3 = 0;
    new_var2 = ((u32) lbl_80368670) == 0U;
    if (new_var2 && (((s32) lbl_80366FA4) == 0x20))
    {
      var_r3 = 1;
    }
    new_var = 1;
    if ((var_r3 != 0) && (fn_8023ABD4() == 0))
    {
      var_r31 = new_var;
    }
    if ((((s32) lbl_8036868C) == 0) && (var_r31 != 0))
    {
      lbl_8036868C = fn_8021275C(0xF0000000);
      return (int) 0;
    }
    return var_r31;
  }
  lbl_8036868C = 0;
  return 1;
}

void fn_802135EC(s32 arg0, OSContext *context)
{
    extern void (*lbl_80368688)(void);
    void OSClearContext(void *);
    void OSSetCurrentContext(void *);

    OSContext tempContext;

    if (lbl_80368688 != 0) {
        OSClearContext(&tempContext);
        OSSetCurrentContext(&tempContext);

        lbl_80368688();

        OSClearContext(&tempContext);
        OSSetCurrentContext(context);
    }
}

u32 fn_8021364C(u32 arg0) {
    void fn_8023B308(void (*)(void));
    void fn_8023B3D4(void (*)(void));
    void fn_802135EC(void);
    extern u32 lbl_80368688;
    u32 prev;

    prev = lbl_80368688;
    lbl_80368688 = arg0;
    if (arg0 != 0) {
        fn_8023B308(fn_802135EC);
    } else {
        fn_8023B3D4(fn_802135EC);
    }
    return prev;
}

s32 __PADDisableRecalibration(s32 disable) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 enabled;
    s32 interrupted;

    interrupted = OSDisableInterrupts();
    if ((*(u8 *)0x800030E3) & 0x40) {
        enabled = 1;
    } else {
        enabled = 0;
    }
    *(u8 *)0x800030E3 &= ~0x40;
    if (disable != 0) {
        *(u8 *)0x800030E3 |= 0x40;
    }
    OSRestoreInterrupts(interrupted);
    return enabled;
}

extern s32 lbl_8036869C;
s32 fn_8021371C(s32 arg0) {
    extern s32 lbl_8036869C;
    s32 temp_r31;

    temp_r31 = lbl_8036869C;
    OSDisableInterrupts();
    lbl_8036869C = arg0;
    OSRestoreInterrupts();
    return temp_r31;
}

void fn_80213760(u16 arg0, u32 arg1) {
    u16 temp_r4;
    void *temp_r5;
    void *temp_r6;
    void *temp_r7;

    OSDisableInterrupts();
    temp_r5 = (u16 *)0xCC000000 + 0x5000;
    temp_r6 = (u16 *)0xCC000000 + 0x5000;
    temp_r7 = (u16 *)0xCC000000 + 0x5000;
    M2C_FIELD(temp_r5, u16 *, 0x30) = (arg0 >> 16) | (*(u16 *)0xCC005030 & 0xFC00);
    M2C_FIELD(temp_r6, u16 *, 0x32) = (M2C_FIELD(temp_r6, u16 *, 0x32) & 0x001F) | arg0;
    temp_r4 = M2C_FIELD(temp_r7, u16 *, 0x36) & 0x8000;
    M2C_FIELD(temp_r7, u16 *, 0x36) = temp_r4 | (arg1 >> 5);
    OSRestoreInterrupts();
}

volatile u16 __PADRegs[32] : 0xCC005000;
void fn_802137E8(void) {
    __PADRegs[0x1B] |= 0x8000;
}

s32 fn_80213800(void) {
    u16* addr = (u16*)0xCC005000;
    u16 low = *(addr + 0x30/2);
    u16 high = *(addr + 0x32/2);
    return (high & 0xFFE0) | ((low << 16) & 0x03FF0000);
}

s32 fn_8021381C(void) {
    return (*(u16 *)0xCC005036 << 5) & 0xFFFE0;
}

s32 fn_80213904(void) {
    return *(s32 *)0xCC006C00 & 1;
}

s32 fn_802139F4(void) {
    return (((u32) *(u32 *)0xCC006C00 >> 6U) & 1) ^ 1;
}

s32 fn_80213ADC(void) {
    return ((u32) *(u32 *)0xCC006C00 >> 1U) & 1;
}

void fn_80213AEC(s32 arg0) {
    u32 *ptr = (u32 *)0xCC000000 + 0x1B00;
    u32 temp = ptr[1];
    temp = (temp & 0xFFFFFF00) | ((u32)arg0 & 0xFF);
    ptr[1] = temp;
}

u8 fn_80213B08(void) {
    return (u8) *(s32 *)0xCC006C04;
}

void fn_80213B18(s32 arg0) {
    struct R { u32 a; u32 b; } *p = (struct R *)0xCC006C00;
    u32 t = p->b;
    t = (t & 0xFFFF00FF) | ((arg0 << 8) & 0xFF00);
    p->b = t;
}

u8 fn_80213B34(void) {
    return (u8) ((u32) *(u32 *)0xCC006C04 >> 8U);
}

void fn_80213CB0(s32 arg0)
{
    lbl_80368698(arg0);
}

void fn_80213DD8(void) {
    void (*funcPtr)(void) = (void (*)(void))lbl_803685E8;
    if (funcPtr != NULL) {
        funcPtr();
    }
}

extern s32 lbl_803686D8;
s32 fn_80214014(s32 arg0) {
    extern s32 lbl_803686D8;
    s32 temp_r31;

    temp_r31 = lbl_803686D8;
    OSDisableInterrupts();
    lbl_803686D8 = arg0;
    OSRestoreInterrupts();
    return temp_r31;
}

s32 fn_80214058(void) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 enabled;
    s32 temp_r31;

    enabled = OSDisableInterrupts();
    temp_r31 = *(u16 *)0xCC00500A & 0x200;
    OSRestoreInterrupts(enabled);
    return temp_r31;
}

s32 fn_802142B0(void) {
    return 0x4000;
}

s32 fn_802142B8(void) {
    extern s32 lbl_803686DC;
    return lbl_803686DC;
}

BOOL fn_802142C0(void)
{
    return OSGetResetButtonState() != 0;
}

void fn_80214338(void) {
    extern volatile u16 __PADRegs[];
    typedef struct { u8 pad[0xA]; u16 val; } PadReg;
    volatile PadReg *p;
    u16 v;
    p = (volatile PadReg *)__PADRegs;
    v = p->val;
    p->val = (u16)((v & -0x89) | 0x20);
}

s32 fn_80214358(void) {
    return *(u16 *)0xCC00500A & 0x20;
}

void fn_80215C5C(void) {

}

void fn_80215C60(void) {
    if (Scb_803394 & 0x2000) {
        Scb_803394 = 0;
        OSResetSystem(1, 0, 0);
    }
}

void fn_80215D2C(void) {
    char* text = "%s\n";
    OSRegisterVersion(0x43);
    OSReport(text, "ResetSW");
}

void fn_80215D9C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5, s32 arg6, void *arg7) {
    u32 r31;
    u32 r30;
    u32 r29;
    
    if (arg0 != NULL) {
        *(u32*)((char*)arg0 + 0x1c) = 0;
    }
}

void fn_80215EF8(void) {
    extern s32 lbl_803686F8;
    extern s32 lbl_803686FC;
    extern s32 lbl_80368700;
    extern s32 lbl_80368704;
    OSDisableInterrupts();
    lbl_803686F8 = 0;
    lbl_803686FC = 0;
    lbl_80368700 = 0;
    lbl_80368704 = 0;
    OSRestoreInterrupts();
}

s32 fn_80215F30(void) {
    extern s32 lbl_80368718;
    return lbl_80368718;
}

s32 fn_80215F38(void) {
    extern s32 lbl_8036871C;
    return lbl_8036871C;
}

s32 fn_80215F40(void) {
    return ((u16) *(u16 *)0xCC005000 >> 0xFU) & 1;
}

s32 fn_80215F50(void) {
    return ((u16) *(u16 *)0xCC005004 >> 0xFU) & 1;
}

s32 fn_80215F60(void) {
    return (__PADRegs[2] << 16) | __PADRegs[3];
}

void fn_80215F78(u16 arg0) {
    *(u16 *)0xCC005000 = (arg0 >> 16);
    *(u16 *)0xCC005002 = arg0;
}

void fn_80216050(void) {
    OSDisableInterrupts();
}

void fn_802160C0(u8 level, char *fmt, ...) {
}

void fn_80216110(s32 arg0, OSContext *ctx) {
    void OSClearContext(void *);
    void OSSetCurrentContext(void *);
    u32 fn_80215F40(void);
    u32 fn_80215F50(void);
    s32 fn_80215F60(void);
    void fn_80215F78(s32);
    void fn_80216534(void *, void *);
    void fn_80216900(void *);
    extern s32 lbl_80368728;
    extern void *lbl_8036872C;
    extern void *lbl_80368734;
    extern void *lbl_80368738;
    extern void *lbl_8036873C;
    extern volatile u16 __PADRegs[];

    typedef struct { u8 pad[0xA]; u16 val; } PadReg;
    struct Node {
        s32 state;
        s32 unk04;
        s32 unk08;
        u8 pad[0x1C];
        void (*cb28)(void);
        void (*cb2C)(void);
        void (*cb30)(void *);
        void (*cb34)(void *);
        struct Node *next;
        struct Node *prev;
    };

    u8 temp[sizeof(OSContext) + 8];
    volatile PadReg *p;
    u16 v;
    s32 type;
    struct Node *node;

    p = (volatile PadReg *)__PADRegs;
    v = p->val;
    p->val = (u16)((v & ~0x28) | 0x80);
    OSClearContext(temp);
    OSSetCurrentContext(temp);

    do {
    } while (fn_80215F50() == 0);

    type = fn_80215F60();
    node = (struct Node *)lbl_8036873C;
    if ((node->unk08 & 2) && ((u32)(type + 0x232F0000) == 2)) {
        type = 0xDCD10003;
    }
    switch (type) {
    case 0xDCD10000:
        node->state = 1;
        if (((struct Node *)lbl_8036873C)->cb28 != NULL) {
            ((struct Node *)lbl_8036873C)->cb28();
        }
        break;
    case 0xDCD10001:
        node->state = 1;
        if (((struct Node *)lbl_8036873C)->cb2C != NULL) {
            ((struct Node *)lbl_8036873C)->cb2C();
        }
        break;
    case 0xDCD10002:
        if (lbl_80368728 != 0) {
            if (lbl_8036873C == lbl_8036872C) {
                fn_80215F78(0xCDD10003);
                do {
                } while (fn_80215F40() != 0);
                lbl_8036872C = NULL;
                lbl_80368728 = 0;
                if (((struct Node *)lbl_8036873C)->cb2C != NULL) {
                    ((struct Node *)lbl_8036873C)->cb2C();
                }
            } else {
                fn_80215F78(0xCDD10001);
                do {
                } while (fn_80215F40() != 0);
                fn_80216534(lbl_8036873C, lbl_8036872C);
                *(s32 *)lbl_8036873C = 2;
                lbl_80368728 = 0;
                lbl_8036873C = lbl_8036872C;
                lbl_8036872C = 0;
            }
        } else if (((struct Node *)lbl_8036873C)->next == NULL) {
            if (lbl_8036873C == lbl_80368738) {
                fn_80215F78(0xCDD10003);
                do {
                } while (fn_80215F40() != 0);
                if (((struct Node *)lbl_8036873C)->cb2C != NULL) {
                    ((struct Node *)lbl_8036873C)->cb2C();
                }
            } else {
                fn_80215F78(0xCDD10001);
                do {
                } while (fn_80215F40() != 0);
                fn_80216534(lbl_8036873C, lbl_80368738);
                ((struct Node *)lbl_8036873C)->state = 2;
                lbl_8036873C = lbl_80368738;
            }
        } else {
            fn_80215F78(0xCDD10001);
            do {
            } while (fn_80215F40() != 0);
            fn_80216534(lbl_8036873C, ((struct Node *)lbl_8036873C)->next);
            ((struct Node *)lbl_8036873C)->state = 2;
            lbl_8036873C = ((struct Node *)lbl_8036873C)->next;
        }
        break;
    case 0xDCD10003:
        if (lbl_80368728 != 0) {
            if (((struct Node *)lbl_8036873C)->cb30 != NULL) {
                ((struct Node *)lbl_8036873C)->cb30(lbl_8036873C);
            }
            fn_80215F78(0xCDD10001);
            do {
            } while (fn_80215F40() != 0);
            fn_80216534(NULL, lbl_8036872C);
            fn_80216900(lbl_8036873C);
            lbl_80368728 = 0;
            lbl_8036873C = lbl_8036872C;
            lbl_8036872C = 0;
        } else if (((struct Node *)lbl_8036873C)->next == NULL) {
            if (lbl_8036873C == lbl_80368738) {
                if (((struct Node *)lbl_8036873C)->cb30 != NULL) {
                    ((struct Node *)lbl_8036873C)->cb30(lbl_8036873C);
                }
                fn_80215F78(0xCDD10002);
                do {
                } while (fn_80215F40() != 0);
                ((struct Node *)lbl_8036873C)->state = 3;
                fn_80216900(lbl_8036873C);
            } else {
                if (((struct Node *)lbl_8036873C)->cb30 != NULL) {
                    ((struct Node *)lbl_8036873C)->cb30(lbl_8036873C);
                }
                fn_80215F78(0xCDD10001);
                do {
                } while (fn_80215F40() != 0);
                ((struct Node *)lbl_8036873C)->state = 3;
                fn_80216534(NULL, lbl_80368738);
                lbl_8036873C = lbl_80368738;
                fn_80216900(lbl_80368734);
            }
        } else {
            if (((struct Node *)lbl_8036873C)->cb30 != NULL) {
                ((struct Node *)lbl_8036873C)->cb30(lbl_8036873C);
            }
            fn_80215F78(0xCDD10001);
            do {
            } while (fn_80215F40() != 0);
            ((struct Node *)lbl_8036873C)->state = 3;
            fn_80216534(NULL, ((struct Node *)lbl_8036873C)->next);
            lbl_8036873C = ((struct Node *)lbl_8036873C)->next;
            fn_80216900(((struct Node *)lbl_8036873C)->prev);
        }
        break;
    case 0xDCD10004:
        if (((struct Node *)lbl_8036873C)->cb34 != NULL) {
            ((struct Node *)lbl_8036873C)->cb34(lbl_8036873C);
        }
        break;
    }
    OSClearContext(temp);
    OSSetCurrentContext(ctx);
}

void fn_80216534(void *arg0, void *arg1) {
    M2C_UNK fn_80215F78(s32);
    if (arg0 != NULL) {
        fn_80215F78(M2C_FIELD(arg0, s32 *, 0x18));
        do {

        } while (fn_80215F40() != 0U);
        fn_80215F78(M2C_FIELD(arg0, s32 *, 0x1C));
        do {

        } while (fn_80215F40() != 0U);
        fn_80215F78(M2C_FIELD(arg0, s32 *, 0x20));
        do {

        } while (fn_80215F40() != 0U);
    } else {
        fn_80215F78(0);
        do {

        } while (fn_80215F40() != 0U);
        fn_80215F78(0);
        do {

        } while (fn_80215F40() != 0U);
        fn_80215F78(0);
        do {

        } while (fn_80215F40() != 0U);
    }
    fn_80215F78(M2C_FIELD(arg1, s32 *, 0xC));
    do {

    } while (fn_80215F40() != 0U);
    fn_80215F78(M2C_FIELD(arg1, s32 *, 0x10));
    do {

    } while (fn_80215F40() != 0U);
    fn_80215F78(M2C_FIELD(arg1, s32 *, 0x14));
    do {

    } while (fn_80215F40() != 0U);
    if ((u32) M2C_FIELD(arg1, u32 *, 0) == 0U) {
        fn_80215F78((s32) M2C_FIELD(arg1, u16 *, 0x24));
        do {

        } while (fn_80215F40() != 0U);
        fn_80215F78(0);
        do {

        } while (fn_80215F40() != 0U);
        fn_80215F78(0);
        do {

        } while (fn_80215F40() != 0U);
        fn_80215F78(0);
        do {

        } while (fn_80215F40() != 0U);
        return;
    }
    fn_80215F78((s32) M2C_FIELD(arg1, u16 *, 0x26));
    do {

    } while (fn_80215F40() != 0U);
    fn_80215F78(M2C_FIELD(arg1, s32 *, 0x18));
    do {

    } while (fn_80215F40() != 0U);
    fn_80215F78(M2C_FIELD(arg1, s32 *, 0x1C));
    do {

    } while (fn_80215F40() != 0U);
    fn_80215F78(M2C_FIELD(arg1, s32 *, 0x20));
    do {

    } while (fn_80215F40() != 0U);
}

void fn_802166D4(void *arg0) {
    s32 fn_80215F50();
    void fn_80215F60();
    void fn_80215F78(void *);
    s32 fn_80215F40();
    void fn_802160C0(void *, void *);
    extern u16 lbl_8029D860[160];

    // First loop with fn_80215F50
    do {
        if (fn_80215F50() == 0) {
            break;
        }
    } while (1);
    
    fn_80215F60();
    
    // Process various fields through calls to fn_80215F78 with hard-coded values 
    fn_80215F78((void *)0x80F3A001);
    
    do {
        if (fn_80215F40() == 0) {
            break;
        }
    } while (1);
    
    fn_80215F78(M2C_FIELD(arg0, void **, 0xC));
    
    do {
        if (fn_80215F40() == 0) {
            break;
        }
    } while (1);
    
    fn_80215F78((void *)0x80F3C002);
    
    do {
        if (fn_80215F40() == 0) {
            break;
        }
    } while (1);
    
    fn_80215F78((void *)((u16)M2C_FIELD(arg0, s32 *, 0x14)));
    
    do {
        if (fn_80215F40() == 0) {
            break;
        }
    } while (1);
    
    fn_80215F78((void *)0x80F3A002);
    
    do {
        if (fn_80215F40() == 0) {
            break;
        }
    } while (1);
    
    fn_80215F78(M2C_FIELD(arg0, void **, 0x10));
    
    do {
        if (fn_80215F40() == 0) {
            break;
        }
    } while (1);
    
    fn_80215F78((void *)0x80F3B002);
    
    do {
        if (fn_80215F40() == 0) {
            break;
        }
    } while (1);
    
    fn_80215F78(NULL);
    
    do {
        if (fn_80215F40() == 0) {
            break;
        }
    } while (1);
    
    fn_80215F78((void *)0x80F3D001);
    
    do {
        if (fn_80215F40() == 0) {
            break;
        }
    } while (1);
    
    fn_80215F78((void *)M2C_FIELD(arg0, u16 *, 0x24));
    
    do {
        if (fn_80215F40() == 0) {
            break;
        }
    } while (1);
    
    // Final calls to fn_802160C0
    fn_802160C0(&lbl_8029D860, arg0);
    fn_802160C0(&lbl_8029D860 + 0x20, M2C_FIELD(arg0, void **, 0xC));
    fn_802160C0(&lbl_8029D860 + 0x50, (void *)M2C_FIELD(arg0, s32 *, 0x14));
    fn_802160C0(&lbl_8029D860 + 0x80, M2C_FIELD(arg0, void **, 0x10));
    fn_802160C0(&lbl_8029D860 + 0xB0, M2C_FIELD(arg0, void **, 0x1C));
    fn_802160C0(&lbl_8029D860 + 0xE0, (void *)M2C_FIELD(arg0, u16 *, 0x24));
}

void fn_80216860(void *arg0) {
    extern void *lbl_80368734;
    extern void *lbl_80368738;
    extern void *lbl_8036873C;
    struct Node {
        s32 state;
        s32 unk04;
        s32 unk08;
        u8 pad[0x2C];
        struct Node *next;
        struct Node *prev;
    } *node = (struct Node *)arg0;
    struct Node *cur;
    struct Node *tmp;

    if (lbl_80368738 == NULL) {
        lbl_8036873C = node;
        lbl_80368734 = node;
        lbl_80368738 = node;
        node->prev = NULL;
        node->next = NULL;
        return;
    }

    cur = (struct Node *)lbl_80368738;
    goto check;
loop:
    if ((u32)node->unk04 < (u32)cur->unk04) {
        node->prev = cur->prev;
        cur->prev = node;
        node->next = cur;
        tmp = node->prev;
        if (tmp == NULL) {
            lbl_80368738 = node;
        } else {
            tmp->next = node;
        }
    } else {
        cur = cur->next;
check:
        if (cur != NULL) {
            goto loop;
        }
        if (cur == NULL) {
            ((struct Node *)lbl_80368734)->next = node;
            node->next = NULL;
            node->prev = (struct Node *)lbl_80368734;
            lbl_80368734 = node;
        }
    }
}

void fn_80216900(void *arg0) {
    extern void *lbl_80368738;
    extern void *lbl_80368734;
    extern void *lbl_8036873C;
    struct Node {
        s32 state;
        s32 unk04;
        s32 unk08;
        u8 pad[0x2C];
        struct Node *next;
        struct Node *prev;
    } *node = (struct Node *)arg0;
    struct Node *tmp;

    node->unk08 = 0;
    node->state = 3;
    if ((struct Node *)lbl_80368738 == node) {
        if (node->next != NULL) {
            lbl_80368738 = node->next;
            node->next->prev = NULL;
            return;
        }
        lbl_8036873C = NULL;
        lbl_80368734 = NULL;
        lbl_80368738 = NULL;
        return;
    }
    if ((struct Node *)lbl_80368734 == node) {
        lbl_80368734 = node->prev;
        node->prev->next = NULL;
        lbl_8036873C = lbl_80368738;
        return;
    }
    lbl_8036873C = node->next;
    node->prev->next = node->next;
    node->next->prev = node->prev;
}
#include "common.h"
#include <dolphin/os.h>
