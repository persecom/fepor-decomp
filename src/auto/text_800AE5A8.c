/* Functions from 0x800AD24C to 0x800C3F18, found by decomp-toolkit. */
#include "common.h"
static inline void Sound_InitReverbParams(u8 *p) {
extern f32 lbl_80369CB0,lbl_80369CD8,lbl_80369CDC,lbl_80369CE0,lbl_80369CE4,lbl_80369CE8,lbl_80369CEC;
void fn_80263CF0(void *);

M2C_FIELD(p,u8 *,452)=0;
M2C_FIELD(p,f32 *,464)=lbl_80369CD8;
M2C_FIELD(p,f32 *,472)=lbl_80369CDC;
M2C_FIELD(p,f32 *,468)=lbl_80369CE0;
M2C_FIELD(p,f32 *,456)=lbl_80369CB0;
M2C_FIELD(p,f32 *,476)=lbl_80369CB0;
M2C_FIELD(p,f32 *,460)=lbl_80369CE4;
fn_80263CF0(p);
}
static inline void Sound_InitRoomParams(u8 *p) {
extern f32 lbl_80369CB0,lbl_80369CD8,lbl_80369CDC,lbl_80369CE0,lbl_80369CE4,lbl_80369CE8,lbl_80369CEC;
void fn_80263830(void *);

M2C_FIELD(p,u8 *,316)=0;
M2C_FIELD(p,f32 *,328)=lbl_80369CE8;
M2C_FIELD(p,f32 *,336)=lbl_80369CDC;
M2C_FIELD(p,f32 *,332)=lbl_80369CEC;
M2C_FIELD(p,f32 *,320)=lbl_80369CEC;
M2C_FIELD(p,f32 *,324)=lbl_80369CEC;
fn_80263830(p);
}
static inline void Sound_InitDelayParams(u8 *p) {
extern f32 lbl_80369CB0,lbl_80369CD8,lbl_80369CDC,lbl_80369CE0,lbl_80369CE4,lbl_80369CE8,lbl_80369CEC;
void fn_80265230(void *);

M2C_FIELD(p,s32 *,0x90)=10; M2C_FIELD(p,s32 *,0x94)=0; M2C_FIELD(p,s32 *,0x98)=500; fn_80265230(p);
}
static inline void Sound_InitChorusParams(u8 *p) {
extern f32 lbl_80369CB0,lbl_80369CD8,lbl_80369CDC,lbl_80369CE0,lbl_80369CE4,lbl_80369CE8,lbl_80369CEC;
void fn_80264B7C(void *);

M2C_FIELD(p,s32 *,60)=150;M2C_FIELD(p,s32 *,64)=150;M2C_FIELD(p,s32 *,68)=50;M2C_FIELD(p,s32 *,72)=30;M2C_FIELD(p,s32 *,76)=30;M2C_FIELD(p,s32 *,80)=30;M2C_FIELD(p,s32 *,84)=50;M2C_FIELD(p,s32 *,88)=50;M2C_FIELD(p,s32 *,92)=50;fn_80264B7C(p);
}

typedef struct {
    u8 flag : 1;
    u8 unk : 7;
} ItemFlagBits;

typedef struct {
    u8 unk0[8];
    u8 param;
    u8 pad9[3];
    u32 handle;
    u8 pad10[4];
} SoundChan_800B1BFC;

extern f64 lbl_80369CF8;

static inline u32 LoadSoundBankB(void *path) {
    s32 fn_800B4A84(void *, s32, s32);
    s32 fn_800B49C8(void *);
    s32 fn_800B4A14(void *, s32, s32, s32);
    void fn_800B49D0(void *);
    s32 fn_800C4638(s32, void *, s32);
    void fn_800C4588(s32);
    extern u8 Sound_str[];
    s32 handle;
    s32 size;
    u32 buffer;
    u32 value;
    handle = fn_800B4A84(path, 2, 0);
    if (handle == 0) return 0;
    value = fn_800B49C8((void *)handle);
    if (value == 0) return 0;
    size = (value + 31) & ~31;
    buffer = fn_800C4638(size, Sound_str + 0x2E, 0);
    if (buffer == 0) return 0;
    if (fn_800B4A14((void *)handle, buffer, size, 0) <= 0) {
        fn_800C4588(buffer);
        return 0;
    }
    fn_800B49D0((void *)handle);
    return buffer;
}

static inline u32 SoundReadSizeB(u32 offset, u32 limit) {
    u32 size = 0x8000;
    u32 step = 0x10000;
    u32 n;
    if (offset + 0x8000 > limit) size = limit - offset;
    else {
        for (n=2;n<6;n++) {
            if (offset + step > limit) {
                size -= (0x8000 - (limit - (offset + ((n-1)<<15)))) / n;
                size += 0x20 - (size & 31);
                break;
            }
            step += 0x8000;
        }
    }
    return size;
}

typedef struct StreamB { u8 pad[0x2C]; s32 buffers[2]; u8 pad34[0x14]; u32 size; u16 index; } StreamB;
typedef struct {
    u8 pad[0x30];
    void *entries[0xC];
    u8 kinds[0xC];
    s16 count;
    s16 cursor;
} EventBlessProc;
extern s32 fn_80010710(u8* arg0);
  extern s32 gUnitRef;
  extern s32 E_EventCaller_script[];
  extern s32 lbl_80319A68[];
  void Battle_ClearPhaseBannerChild(void *);
  void Battle_DrawPhaseBanner(void *);

#pragma optimization_level 2
/* Collect same-allegiance units with Live/Rest statuses into an E_Bless process; return 0 if none. */

/* Advance the E_Bless queue: begin move-select for the next unit, or finish at label 0x63. */

extern u8 lbl_8028D064[16];

#pragma optimization_level reset

/* Apply prior battle, bump win/battle stats if needed, then setup and calc vs current target. */

/* Setup gBattle for healing the current target from proc HP, then open MapSelect. */

void fn_800ADD04(void);

extern u8 gTargetList[];
extern void fn_8002F61C(void *);
extern void *TargetList_GetCurrent(void *);
extern u8 *UnitRef_GetUnit(void);
extern void Unit_OnZeroHp(void);

/* Init gBattle from the current target entry's unit, apply optional HP delta, and open MapSelect. */

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern void Unit_ApplyTransform(void);

void fn_800AE5A8(void *arg0) {
    f32 Math_Lerp(f32, f32, f32, f32);
    f32 Math_EaseOutPow(s32, f32, f32, f32, f32);
    void Process_ClearFunc(void *);
    extern const f32 lbl_80369C90;
    extern const f32 gPhaseBannerZero;
    extern const f32 lbl_80369C80;
    extern const f64 lbl_80369C88;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 1);
    M2C_FIELD(arg0, f32 *, 0x38) = Math_EaseOutPow(2, lbl_80369C90, gPhaseBannerZero, (f32) M2C_FIELD(arg0, s32 *, 0x44), (f32) M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) Math_Lerp(gPhaseBannerZero, lbl_80369C80, (f32) M2C_FIELD(arg0, s32 *, 0x44), (f32) M2C_FIELD(arg0, s32 *, 0x30));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) >= (s32) M2C_FIELD(arg0, s32 *, 0x44)) {
        Process_ClearFunc(arg0);
    }
}

/* Set up the phase-change banner: ambient FX for this army, banner widget, and draw callback. */
void Battle_InitPhaseBanner(void *proc) {
    void *fn_8014D8FC(void *);
    s8 Fx_FindSlotByName(void *);
    void Fx_StartSlot(s32, void *, s32, s32);
    void *Effect_Create(void *, void *);
    void fn_80053658(void *, s32, void *);
    void Process_AttachFunc(void *, void *);
    extern u8 gBattleState[];
    extern u8 lbl_8026EAA0[];
    extern u8 gFxChannels[];
    extern f32 gPhaseBannerZero;

    void *chapter;
    void *fxName;
    void *bannerName;
    u8 chapterId;
    u8 slot;
    s32 remaining;
    f32 f0;

    chapter = fn_8014D8FC(gBattleState);
    *(s32 *)((u8 *)proc + 0x30) = 0;
    *(s32 *)((u8 *)proc + 0x34) = 0;
    *(f32 *)((u8 *)proc + 0x38) = 0.0f;
    *(f32 *)((u8 *)proc + 0x3C) = 0.0f;
    *(s32 *)((u8 *)proc + 0x44) = 0xF;
    *(s32 *)((u8 *)proc + 0x48) = 0x1E;
    fxName = NULL;
    if ((s8)Fx_FindSlotByName(lbl_8026EAA0 + 0x2B) == -1) {
        switch (gBattleState[0x11]) {
        case 0:
            chapterId = *((u8 *)chapter + 0x3C);
            if ((s32)chapterId <= 0x12 || (s32)chapterId >= 0x32) {
                fxName = lbl_8026EAA0 + 0x38;
            } else {
                fxName = lbl_8026EAA0 + 0x46;
            }
            break;
        case 1:
            chapterId = *((u8 *)chapter + 0x3C);
            if ((s32)chapterId <= 0x12 || (s32)chapterId >= 0x32) {
                fxName = lbl_8026EAA0 + 0x54;
            } else {
                fxName = lbl_8026EAA0 + 0x62;
            }
            break;
        case 2:
            fxName = lbl_8026EAA0 + 0x70;
            break;
        case 3:
            fxName = lbl_8026EAA0 + 0x80;
            break;
        }
        if (fxName != NULL) {
            for (slot = 1, remaining = 3; remaining != 0; remaining--, slot++) {
                if (!(gFxChannels[slot * 0x30 + 0xC] & 1)) {
                    Fx_StartSlot(slot, fxName, 0x64, 1);
                    break;
                }
            }
        }
    }
    switch (gBattleState[0x11]) {
    case 0:
        bannerName = lbl_8026EAA0 + 0x90;
        break;
    case 1:
        bannerName = lbl_8026EAA0 + 0xA0;
        break;
    case 2:
        bannerName = lbl_8026EAA0 + 0xAF;
        break;
    case 3:
        bannerName = lbl_8026EAA0 + 0xBE;
        break;
    default:
        bannerName = NULL;
        break;
    }
    *(void **)((u8 *)proc + 0x4C) = Effect_Create(bannerName, proc);
    *(f32 *)((u8 *)*(void **)((u8 *)*(void **)((u8 *)proc + 0x4C) + 0x30) + 0x1C) = 0.0f;
    *(s16 *)*(void **)((u8 *)*(void **)((u8 *)proc + 0x4C) + 0x30) = 0x63;
    fn_80053658(*(void **)((u8 *)proc + 0x4C), 0, proc);
    *(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)proc + 0x4C) + 0x30) + 0x44) = Battle_ClearPhaseBannerChild;
    Process_AttachFunc(Battle_DrawPhaseBanner, proc);
}

void Battle_ClearPhaseBannerChild(void *arg0) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x4C), s32 *, 0x4C) = 0;
}

void fn_800AE918(s32 arg0) {
    u8 GActor_CheckResources(void *);
    void Process_ClearFunc(s32);
    extern u8 gBattleState[];
    extern u8 lbl_8026EAA0[];
    void *var_r3;

    switch (gBattleState[0x11]) {
    case 0:
        var_r3 = lbl_8026EAA0 + 0x90;
        break;
    case 1:
        var_r3 = lbl_8026EAA0 + 0xA0;
        break;
    case 2:
        var_r3 = lbl_8026EAA0 + 0xAF;
        break;
    case 3:
        var_r3 = lbl_8026EAA0 + 0xBE;
        break;
    default:
        var_r3 = NULL;
        break;
    }
    if (GActor_CheckResources(var_r3) != 0) {
        Process_ClearFunc(arg0);
    }
}

void fn_800AE9CC(void) {
    void fn_8002DEB4(s32);
    void fn_800288E4(void);
    void fn_800555EC(void *, s32);
    extern u8 gBattleState[];
    extern u8 lbl_8026EAA0[];
    void *var_r3;

    fn_8002DEB4(0xFA);
    fn_800288E4();
    switch (gBattleState[0x11]) {
    case 0:
        var_r3 = lbl_8026EAA0 + 0x90;
        break;
    case 1:
        var_r3 = lbl_8026EAA0 + 0xA0;
        break;
    case 2:
        var_r3 = lbl_8026EAA0 + 0xAF;
        break;
    case 3:
        var_r3 = lbl_8026EAA0 + 0xBE;
        break;
    default:
        var_r3 = NULL;
        break;
    }
    fn_800555EC(var_r3, 0);
}

/* Draw the player/enemy phase banner as two full-width gradient bars. */
void Battle_DrawPhaseBanner(void *proc) {
    void Prim2D_SetCornerColors(s32 *, s32 *, s32 *, s32 *);
    void Prim2D_EmitQuad(void);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_SetPrimParam(f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_ResetState(void);
    void Prim2D_SetColorByte(u8);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_SetTex(s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    extern s32 gPhaseBannerBlack0;
    extern s32 gPhaseBannerBlack1;
    extern s32 gPhaseBannerBlack2;
    extern s32 gPhaseBannerBlack3;
    extern f32 gPhaseBannerZero;
    extern f32 gPhaseBannerPrimParam;
    extern f32 gPhaseBannerTopY;
    extern f32 gPhaseBannerWidth;
    extern f32 gPhaseBannerBarH;
    extern f32 gPhaseBannerBottomY;
    extern s32 gPhaseBannerTopColor0;
    extern s32 gPhaseBannerTopColor1;
    extern s32 gPhaseBannerBottomColor0;
    extern s32 gPhaseBannerBottomColor1;
    s32 topC0;
    s32 topC1;
    s32 topBlack0;
    s32 topBlack1;
    s32 botBlack0;
    s32 botBlack1;
    s32 botC0;
    s32 botC1;
    s32 alpha;

    alpha = *(s32 *)((u8 *)proc + 0x34);
    Prim2D_Begin();
    {
        f32 z = gPhaseBannerZero;
        f32 o = 1.0f;
        Prim2D_SetTransform(z, z, o, o);
    }
    Prim2D_SetTex(0, 0x12);
    Prim2D_SetColorByte((u8)alpha);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(3);
    Prim2D_SetPrimParam(gPhaseBannerPrimParam);
    Prim2D_SetRect(gPhaseBannerZero, gPhaseBannerTopY, gPhaseBannerWidth, gPhaseBannerBarH);
    Prim2D_EmitQuad();
    topBlack1 = gPhaseBannerBlack1;
    topBlack0 = gPhaseBannerBlack0;
    topC1 = gPhaseBannerTopColor1;
    topC0 = gPhaseBannerTopColor0;
    Prim2D_SetCornerColors(&topC0, &topC1, &topBlack0, &topBlack1);
    Prim2D_EndPrim();
    Prim2D_AddPrim(3);
    Prim2D_SetPrimParam(gPhaseBannerPrimParam);
    Prim2D_SetRect(gPhaseBannerZero, gPhaseBannerBottomY, gPhaseBannerWidth, gPhaseBannerBarH);
    Prim2D_EmitQuad();
    botC1 = gPhaseBannerBottomColor1;
    botC0 = gPhaseBannerBottomColor0;
    botBlack1 = gPhaseBannerBlack3;
    botBlack0 = gPhaseBannerBlack2;
    Prim2D_SetCornerColors(&botBlack0, &botBlack1, &botC0, &botC1);
    Prim2D_EndPrim();
    Prim2D_ResetState();
}

void fn_800AEB90(void) {
    extern u16 gSoundSys[];
    void DCFlushRange(void *, u32);
    u8 *sys;
    s16 *out;
    u32 count;
    s16 *read;
    u32 size;
    u8 *src;
    s16 *tmp;
    void (*callback)(void) = *(void (**)(void))((u8 *)gSoundSys+0x6D8);
    if (callback) callback();
    sys=(u8 *)gSoundSys;
    DCFlushRange(*(void **)(sys+0x450),*(u32 *)(sys+0x454));
    src=*(u8 **)(sys+0x450);
    size=*(u32 *)(sys+0x454);
    read=(s16 *)((u8 *)gSoundSys+0x458);
    tmp=read;
    while ((s32)size != 0) {
        *tmp++ = (src[0]<<8) | src[1];
        src+=2;
        size-=2;
    }
    count=*(u32 *)(sys+0x454)>>1;
    out=(s16 *)((u8 *)gSoundSys+(*(u16 *)((u8 *)gSoundSys+0x44C)<<11)+0x6DC);
    out+=*(u32 *)((u8 *)gSoundSys+0x26DC);
    while ((s32)count != 0) {
        *out++ = *read;
        read+=2;
        if (++*(u32 *)((u8 *)gSoundSys+0x26DC)>=0x400) {
            *(u32 *)((u8 *)gSoundSys+0x26DC)=0;
            if (++*(u16 *)((u8 *)gSoundSys+0x44C)>=4) *(u16 *)((u8 *)gSoundSys+0x44C)=0;
            out=(s16 *)((u8 *)gSoundSys+(*(u16 *)((u8 *)gSoundSys+0x44C)<<11)+0x6DC);
        }
        count-=2;
    }
}

#pragma push
#pragma optimization_level 4
#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
void fn_800AECC0(void) {
    void fn_800B1720(void *);
    void fn_800B16EC(void *);
    void fn_800B49E0(void *,s32,s32,s32,void *);
    void DCInvalidateRange(void *,u32);
    void fn_80215D9C(void *,void *,s32,s32,u32,void *,u32,void *);
    extern u8 lbl_80317338[];
    s32 i;
    u8 *entry;
    u8 *global;
    u8 *stream;
    u32 size, aligned;
    s32 position;
    u32 base, offset, limit, n, step;
    u16 flags;
    global = lbl_80317338;
    i = 0;
    position = 0;
    do {
        entry = *(u8 **)(global + 0xF8) + position;
        flags = *(u16 *)entry;
        if ((flags & 8) && !(flags & 2)) {
            if (flags & 1) {
                if (*(u32 *)(entry+0x70) != 0 && *(s16 *)(entry+0x80)==0 && !(flags&0x1000)) {
        stream = entry + 0x2C;
        offset = *(u32 *)(entry + 0x60);
        limit = *(u32 *)(entry + 0x8C);
        size = SoundReadSizeB(offset,limit);
        aligned = (size + 0x1F) & ~0x1F;
        if (!(flags & 0x400)) {
            fn_800B49E0(*(void **)stream, *(s32 *)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), aligned, *(u16 *)(entry + 4) + offset, fn_800B1720);
        } else {
            base = *(u32 *)((u8 *)lbl_80317338 + *(u16 *)(entry + 2)*4 + 0x134) + offset + *(u16 *)(entry + 4);
            DCInvalidateRange(*(void **)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), 0x8000);
            fn_80215D9C(stream + 4, stream, 1, 0, base, *(void **)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), aligned, fn_800B16EC);
        }
        *(u32 *)(stream + 0x48) = size;

                    *(u16 *)entry |= 0x1000;
                    if (*(u16 *)entry & 0x400) *(u16 *)(entry+0x80)=1;
                }
                if (*(u16 *)(entry+0x1E)==2 && *(u32 *)(entry+0xF8)!=0 && *(s16 *)(entry+0x108)==0) {
                    flags = *(u16 *)entry;
                    if (!(flags&0x2000)) {
            stream = entry + 0xB4;
            offset = *(u32 *)(entry + 0xE8);
            limit = *(u32 *)(entry + 0x114);
            base = limit + (32 - (limit & 31));
            size = SoundReadSizeB(offset,limit);
            aligned = (size + 0x1F) & ~0x1F;
            if (!(flags & 0x400)) {
                fn_800B49E0(*(void **)stream, *(s32 *)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), aligned, *(u16 *)(entry + 4) + (offset + base), fn_800B1720);
            } else {
                base = offset + base + *(u32 *)((u8 *)lbl_80317338 + *(u16 *)(entry + 2)*4 + 0x134) + *(u16 *)(entry + 4);
                DCInvalidateRange(*(void **)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), 0x8000);
                fn_80215D9C(stream + 4, stream, 1, 0, base, *(void **)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), aligned, fn_800B16EC);
            }
            *(u32 *)(stream + 0x48) = size;

                        *(u16 *)entry |= 0x2000;
                        if (*(u16 *)entry & 0x400) *(u16 *)(entry+0x108)=1;
                    }
                }
            }
            if (*(u16 *)(entry+0x1E)==2 && *(s16 *)(entry+0x80)==0 && *(s16 *)(entry+0x108)==0) {
                u16 state = *(u16 *)(entry+0x78);
                if (state != *(u16 *)(entry+0x100)) {
                    *(u16 *)(entry+0x100)=state;
                    *(u32 *)(entry+0xF8)=*(u32 *)(entry+0x70);
                    *(u32 *)(entry+0xEC)=*(u32 *)(entry+0x64);
                    *(u32 *)(entry+0xE8)=*(u32 *)(entry+0x60);
                }
            }
        }
        i++;
        position += 0x13C;
    } while (i<3);
}
#pragma pop
void fn_800AF0B4(void) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void fn_800B49D0(void *);
    void fn_8024CE60(void *, s32, u8, u8, s32);
    void fn_8024DA2C(void *);
    extern u8 gSoundSys[];
    extern f32 lbl_80369CB0;
    extern f32 lbl_80369CB4;
    s32 off2;
    u8 *e;
    s32 i;
    u8 *e2;
    s32 off;
    u8 *sys;
    u16 flags;
    u16 flags2;
    u16 nest;
    u8 vol;
    f32 f;
    f32 f31;
    f32 cur;
    f32 tgt;

    off = 0;
    off2 = off;
    i = 0;
    sys = gSoundSys;
    do {
        e = *(u8 **)(sys + 0xF8) + off2;
        flags = *(u16 *)e;
        if ((flags & 8) && !(flags & 2)) {
            if (flags & 4) {
                *(u16 *)e = (u16)(flags & ~4);
                e2 = *(u8 **)(sys + 0xF8) + off;
                flags2 = *(u16 *)e2;
                if (flags2 != 0) {
                    if (!(flags2 & 8)) {
                        *(u16 *)e2 = (u16)(flags2 | 4);
                    } else {
                        if (flags2 & 0x400) {
                            *(u16 *)(gSoundSys + (*(u16 *)(e2 + 2) << 1) + 0x13E) = 0;
                        }
                        *(u16 *)e2 = 0;
                        if (*(u16 *)(sys + 0x124) == 0) {
                            *(s32 *)(sys + 0x128) = OSDisableInterrupts();
                        }
                        *(u16 *)(sys + 0x124) = (u16)(*(u16 *)(sys + 0x124) + 1);
                        fn_800B49D0(*(void **)(e2 + 0x2C));
                        fn_800B49D0(*(void **)(e2 + 0xB4));
                        fn_8024DA2C(*(void **)(e2 + 0x50));
                        if (*(u16 *)(e2 + 0x1E) == 2) {
                            fn_8024DA2C(*(void **)(e2 + 0xD8));
                        }
                        nest = *(u16 *)(sys + 0x124);
                        if (nest != 0) {
                            nest -= 1;
                            *(u16 *)(sys + 0x124) = nest;
                            if ((u16)nest == 0) {
                                OSRestoreInterrupts(*(s32 *)(sys + 0x128));
                            }
                        }
                        *(s32 *)(sys + 0xFC) = -1;
                    }
                }
            } else if (flags & 0x40) {
                cur = *(f32 *)(e + 0x10);
                tgt = *(f32 *)(e + 0x14);
                if (cur == tgt) {
                    if (lbl_80369CB0 == cur) {
                        *(u16 *)e = (u16)(flags | 2);
                    }
                    *(u16 *)e = (u16)(*(u16 *)e & ~0x40);
                } else {
                    *(f32 *)(e + 0x10) = cur - *(f32 *)(e + 0x18);
                    if (*(f32 *)(e + 0x10) <= *(f32 *)(e + 0x14)) {
                        *(f32 *)(e + 0x10) = *(f32 *)(e + 0x14);
                    }
                    vol = (u8)*(u16 *)(e + 6);
                    e2 = *(u8 **)(sys + 0xF8) + off;
                    if (*(u16 *)e2 != 0) {
                        *(u16 *)(e2 + 6) = vol;
                        if (*(u16 *)e2 & 8) {
                            if (*(u16 *)(e2 + 0x1E) == 1) {
                                fn_8024CE60(*(void **)(e2 + 0x50), (s32)*(f32 *)(e2 + 0x10), vol, (u8)*(u16 *)(e2 + 8), 0);
                            } else {
                                f = *(f32 *)(e2 + 0x10);
                                f31 = f;
                                if (vol < 0x40) {
                                    f31 = ((f32)vol * f) / lbl_80369CB4;
                                }
                                if ((u32)(vol - 0x40) >> 31 == 0) {
                                    f = ((f32)(s32)(0x7F - vol) * f) / lbl_80369CB4;
                                }
                                fn_8024CE60(*(void **)(e2 + 0x50), (s32)f, 0, (u8)*(u16 *)(e2 + 8), 0);
                                fn_8024CE60(*(void **)(e2 + 0xD8), (s32)f31, 0x7F, (u8)*(u16 *)(e2 + 8), 0);
                            }
                        }
                    }
                    goto check20;
                }
            } else {
            check20:
                flags = *(u16 *)e;
                if (flags & 0x20) {
                    tgt = lbl_80369CB0;
                    cur = *(f32 *)(e + 0x10);
                    if (tgt == cur) {
                        *(u16 *)e = (u16)(flags & ~0x20);
                        e2 = *(u8 **)(sys + 0xF8) + off;
                        flags2 = *(u16 *)e2;
                        if (flags2 != 0) {
                            if (!(flags2 & 8)) {
                                *(u16 *)e2 = (u16)(flags2 | 4);
                            } else {
                                if (flags2 & 0x400) {
                                    *(u16 *)(gSoundSys + (*(u16 *)(e2 + 2) << 1) + 0x13E) = 0;
                                }
                                *(u16 *)e2 = 0;
                                if (*(u16 *)(sys + 0x124) == 0) {
                                    *(s32 *)(sys + 0x128) = OSDisableInterrupts();
                                }
                                *(u16 *)(sys + 0x124) = (u16)(*(u16 *)(sys + 0x124) + 1);
                                fn_800B49D0(*(void **)(e2 + 0x2C));
                                fn_800B49D0(*(void **)(e2 + 0xB4));
                                fn_8024DA2C(*(void **)(e2 + 0x50));
                                if (*(u16 *)(e2 + 0x1E) == 2) {
                                    fn_8024DA2C(*(void **)(e2 + 0xD8));
                                }
                                nest = *(u16 *)(sys + 0x124);
                                if (nest != 0) {
                                    nest -= 1;
                                    *(u16 *)(sys + 0x124) = nest;
                                    if ((u16)nest == 0) {
                                        OSRestoreInterrupts(*(s32 *)(sys + 0x128));
                                    }
                                }
                                *(s32 *)(sys + 0xFC) = -1;
                            }
                        }
                    } else {
                        *(f32 *)(e + 0x10) = cur - *(f32 *)(e + 0x18);
                        if (*(f32 *)(e + 0x10) <= tgt) {
                            *(f32 *)(e + 0x10) = tgt;
                        }
                        vol = (u8)*(u16 *)(e + 6);
                        e2 = *(u8 **)(sys + 0xF8) + off;
                        if (*(u16 *)e2 != 0) {
                            *(u16 *)(e2 + 6) = vol;
                            if (*(u16 *)e2 & 8) {
                                if (*(u16 *)(e2 + 0x1E) == 1) {
                                    fn_8024CE60(*(void **)(e2 + 0x50), (s32)*(f32 *)(e2 + 0x10), vol, (u8)*(u16 *)(e2 + 8), 0);
                                } else {
                                    f = *(f32 *)(e2 + 0x10);
                                    f31 = f;
                                    if (vol < 0x40) {
                                        f31 = ((f32)vol * f) / lbl_80369CB4;
                                    }
                                    if ((u32)(vol - 0x40) >> 31 == 0) {
                                        f = ((f32)(s32)(0x7F - vol) * f) / lbl_80369CB4;
                                    }
                                    fn_8024CE60(*(void **)(e2 + 0x50), (s32)f, 0, (u8)*(u16 *)(e2 + 8), 0);
                                    fn_8024CE60(*(void **)(e2 + 0xD8), (s32)f31, 0x7F, (u8)*(u16 *)(e2 + 8), 0);
                                }
                            }
                        }
                        goto check10;
                    }
                } else {
                check10:
                    if (*(u16 *)e & 0x10) {
                        *(f32 *)(e + 0x10) = *(f32 *)(e + 0x10) + *(f32 *)(e + 0x18);
                        tgt = *(f32 *)(e + 0xC);
                        if (*(f32 *)(e + 0x10) >= tgt) {
                            *(f32 *)(e + 0x10) = tgt;
                            *(f32 *)(e + 0x18) = lbl_80369CB0;
                            *(u16 *)e = (u16)(*(u16 *)e & ~0x10);
                        }
                        vol = (u8)*(u16 *)(e + 6);
                        e2 = *(u8 **)(sys + 0xF8) + off;
                        if (*(u16 *)e2 != 0) {
                            *(u16 *)(e2 + 6) = vol;
                            if (*(u16 *)e2 & 8) {
                                if (*(u16 *)(e2 + 0x1E) == 1) {
                                    fn_8024CE60(*(void **)(e2 + 0x50), (s32)*(f32 *)(e2 + 0x10), vol, (u8)*(u16 *)(e2 + 8), 0);
                                } else {
                                    f = *(f32 *)(e2 + 0x10);
                                    f31 = f;
                                    if (vol < 0x40) {
                                        f31 = ((f32)vol * f) / lbl_80369CB4;
                                    }
                                    if ((u32)(vol - 0x40) >> 31 == 0) {
                                        f = ((f32)(s32)(0x7F - vol) * f) / lbl_80369CB4;
                                    }
                                    fn_8024CE60(*(void **)(e2 + 0x50), (s32)f, 0, (u8)*(u16 *)(e2 + 8), 0);
                                    fn_8024CE60(*(void **)(e2 + 0xD8), (s32)f31, 0x7F, (u8)*(u16 *)(e2 + 8), 0);
                                }
                            }
                        }
                    }
                }
            }
        }
        i += 1;
        off += 0x13C;
        off2 += 0x13C;
    } while (i < 3);
}
void fn_800B16EC(void *arg0) {
    M2C_UNK fn_800B1720(M2C_UNK, s32);
    fn_800B1720(0, *M2C_FIELD(arg0, s32 **, 4) + 0x40);
}

#pragma push
#pragma optimization_level 4
#pragma use_lmw_stmw on
#pragma opt_propagation off
void fn_800B1720(s32 arg0, u8 *arg1)
{
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void fn_8024CE60(void *, s32, u8, u8, s32);
    void fn_8024E100(void *);
    extern u8 lbl_80317338[];
    extern f32 lbl_80369CB4;
    u8 *base;
    u8 *base2;
    s32 i;
    u8 *entry;
    u8 *sub;
    s32 which;
    u32 flags;
    u8 vol;
    u8 *entry2;
    f32 f;
    f32 f31;
    s32 j;
    s32 off;
    s32 ctr;
    u8 *e2;
    u32 nest;

    base = lbl_80317338;
    if (*(u16 *)(base + 0x124) == 0) {
        *(s32 *)(lbl_80317338 + 0x128) = OSDisableInterrupts();
    }
    *(u16 *)(base + 0x124) = (u16)(*(u16 *)(base + 0x124) + 1);
    base2 = lbl_80317338;

    for (i = 0; i < 3 * 0x13C; i += 0x13C) {
        entry = *(u8 **)(base2 + 0xF8) + i;
        if (*(u16 *)entry != 0) {
            sub = NULL;
            which = 0;
            if (*(u8 **)(entry + 0x2C) + 0x40 == arg1) {
                sub = entry + 0x2C;
                which = 0;
            }
            if (*(u8 **)(entry + 0xB4) + 0x40 == arg1) {
                sub = entry + 0xB4;
                which = 1;
            }
            if (sub != NULL) {
                if (arg0 < 0) {
                    goto cleanup;
                }
                *(u32 *)(sub + 0x34) = *(u32 *)(sub + 0x34) + *(u32 *)(sub + 0x48);
                *(u32 *)(sub + 0x3C + ((1 - *(u16 *)(sub + 0x4C)) << 2)) = *(u32 *)(sub + 0x48);
                *(u16 *)(sub + 0x54) = 1;
                if (*(u32 *)(sub + 0x34) >= *(u32 *)(sub + 0x60)) {
                    *(u32 *)(sub + 0x34) = *(u32 *)(sub + 0x64);
                    flags = *(u16 *)entry;
                    if (flags & 0x200) {
                        if (which == 0) {
                            *(u16 *)entry = flags & 0xFFFFEFFF;
                        } else {
                            *(u16 *)entry = flags & 0xFFFFDFFF;
                        }
                    } else {
                        *(u16 *)entry = flags | 0x4000;
                    }
                } else if (which == 0) {
                    *(u16 *)entry = *(u16 *)entry & 0xFFFFEFFF;
                } else {
                    *(u16 *)entry = *(u16 *)entry & 0xFFFFDFFF;
                }
                if (*(u16 *)(entry + 0x1E) == 2) {
                    if (*(u16 *)(base2 + 0x12C) == 2 && *(s16 *)(entry + 0x80) == 1 && *(s16 *)(entry + 0x108) == 1) {
                        *(u16 *)(base2 + 0x12C) = 0;
                    }
                } else if (*(u16 *)(base2 + 0x12C) == 2 && *(s16 *)(entry + 0x80) == 1) {
                    *(u16 *)(base2 + 0x12C) = 0;
                }
            }
        }
    }

    for (j = 0; j < 3; j++) {
        e2 = *(u8 **)(base2 + 0xF8) + j * 0x13C;
        flags = *(u16 *)e2;
        if (flags != 0 && !(flags & 8)) {
            if (*(u8 **)(e2 + 0x2C) + 0x40 == arg1) {
                *(u16 *)(e2 + 0x82) = 1;
            }
            if (*(u8 **)(e2 + 0xB4) + 0x40 == arg1) {
                *(u16 *)(e2 + 0x10A) = 1;
            }
            if (*(u16 *)(e2 + 0x1E) == 2) {
                if (*(s16 *)(e2 + 0x82) != 0) {
                    if (*(s16 *)(e2 + 0x10A) != 0) {
                        goto process;
                    }
                }
                goto cont2;
            }
            if (*(s16 *)(e2 + 0x82) == 0) {
                goto cont2;
            }
        process:
            *(u16 *)(e2 + 0x78) = 0;
            *(u16 *)(e2 + 0x100) = 0;
            *(u16 *)(e2 + 0x80) = 0;
            *(u16 *)(e2 + 0x108) = 0;
            fn_8024E100(*(void **)(e2 + 0x50));
            if (*(u16 *)(e2 + 0x1E) == 2) {
                fn_8024E100(*(void **)(e2 + 0xD8));
            }
            vol = (u8)*(u16 *)(e2 + 6);
            entry2 = *(u8 **)(base2 + 0xF8) + j * 0x13C;
            if (*(u16 *)entry2 != 0) {
                *(u16 *)(entry2 + 6) = vol;
                if (*(u16 *)entry2 & 8) {
                    if (*(u16 *)(entry2 + 0x1E) == 1) {
                        fn_8024CE60(*(void **)(entry2 + 0x50), (s32)*(f32 *)(entry2 + 0x10), vol, (u8)*(u16 *)(entry2 + 8), 0);
                    } else {
                        f = *(f32 *)(entry2 + 0x10);
                        f31 = f;
                        if (vol < 0x40) {
                            f31 = ((f32)vol * f) / lbl_80369CB4;
                        }
                        if ((u32)(vol - 0x40) >> 31 == 0) {
                            f = ((f32)(s32)(0x7F - vol) * f) / lbl_80369CB4;
                        }
                        fn_8024CE60(*(void **)(entry2 + 0x50), (s32)f, 0, (u8)*(u16 *)(entry2 + 8), 0);
                        fn_8024CE60(*(void **)(entry2 + 0xD8), (s32)f31, 0x7F, (u8)*(u16 *)(entry2 + 8), 0);
                    }
                }
            }
            *(u16 *)e2 = (u16)(*(u16 *)e2 | 8);
            goto cleanup;
        }
    cont2:;

    }

cleanup:
    nest = *(u16 *)(base + 0x124);
    if (nest != 0) {
        nest -= 1;
        *(u16 *)(base + 0x124) = nest;
        if ((u16)nest == 0) {
            OSRestoreInterrupts(*(s32 *)(lbl_80317338 + 0x128));
        }
    }
}
#pragma pop
s32 fn_800B1B24(s32 arg0)
{
    extern u8 gSoundSys[];
    extern s32 fn_8024B7DC(void *);

    u8 *entry;
    s32 result;

    entry = *(u8 **)(gSoundSys + 0xF4) + arg0 * 0x14;

    if (*(u16 *)entry == 0) {
        return 0;
    }

    result = fn_8024B7DC(*(void **)(entry + 0xC));

    return result != -1;
}

void fn_800B1B80(s32 arg0, s16 arg1)
{
    extern u8 gSoundSys[];
    extern void Sound_SetDistanceVol(s32, s32, s32);

    u8 *base;
    s32 value;

    base = *(u8 **)(gSoundSys + 0xF4);
    value = *(s32 *)(base + arg0 * 0x14 + 0xC);

    if ((u32)value + 0x10000 != 0xFFFFU) {
        if (arg1 == 0) {
            Sound_SetDistanceVol(value, 0, 0);
        } else if (arg1 >= 0x3E80) {
            Sound_SetDistanceVol(value, 0, 0);
        } else {
            Sound_SetDistanceVol(value, 1, arg1);
        }
    }
}

void fn_800B1BFC(s32 arg0, s32 arg1)
{
    extern u8 gSoundSys[];
    void Snd_SetParamU8(s32, s32, s32);
    s32 off;
    u32 value;
    u8 *sys;
    u8 *base;
    u8 *base2;

    off = arg0 * 0x14;
    sys = gSoundSys;
    base = *(u8 **)(sys + 0xF4);
    *(u8 *)((u32)base + off + 8) = (u8)arg1;
    base2 = *(u8 **)(sys + 0xF4);
    value = *(u32 *)((u32)base2 + off + 0xC);

    if (value != 0xFFFFFFFFu) {
        Snd_SetParamU8((s32)value, 0x83, arg1);
    }
}

void fn_800B1C54(s32 arg0, s32 arg1)
{
    extern u8 gSoundSys[];
    void Snd_SetParamU8(s32, s32, s32);
    s32 off;
    u32 value;
    u8 *sys;
    u8 *base;
    u8 *base2;

    off = arg0 * 0x14;
    sys = gSoundSys;
    base = *(u8 **)(sys + 0xF4);
    *(u16 *)((u32)base + off + 6) = (u8)arg1;
    base2 = *(u8 **)(sys + 0xF4);
    value = *(u32 *)((u32)base2 + off + 0xC);

    if (value != 0xFFFFFFFFu) {
        Snd_SetParamU8((s32)value, 0xA, arg1);
    }
}

void fn_800B1CB0(s32 arg0, s32 arg1)
{
    extern u8 gSoundSys[];
    void Snd_SetParamU8(s32, s32, s32);
    u8 *base;
    s32 off;
    u32 value;

    base = *(u8 **)(gSoundSys + 0xF4);
    off = arg0 * 0x14;
    value = *(u32 *)(base + off + 0xC);

    if (value != 0xFFFFFFFFu) {
        if ((u8)arg1 > 0x7F) {
            arg1 = 0x7F;
        }
        Snd_SetParamU8((s32)value, 0x5D, arg1);
    }
}

void fn_800B1D0C(s32 arg0, s32 arg1)
{
    extern u8 gSoundSys[];
    void Snd_SetParamU8(s32, s32, s32);
    u8 *base;
    s32 off;
    u32 value;

    base = *(u8 **)(gSoundSys + 0xF4);
    off = arg0 * 0x14;
    value = *(u32 *)(base + off + 0xC);

    if (value != 0xFFFFFFFFu) {
        if ((u8)arg1 > 0x7F) {
            arg1 = 0x7F;
        }
        Snd_SetParamU8((s32)value, 0x5B, arg1);
    }
}

void fn_800B1D68(s32 arg0, u8 arg1) {
    void Snd_SetParamU8(u32, s32, u8);
    extern u8 gSoundSys[];
    u8 *entry;
    u32 handle;

    entry = M2C_FIELD(gSoundSys, u8 **, 0xF4) + arg0 * 0x14;
    handle = M2C_FIELD(entry, u32 *, 0xC);
    if (handle != 0xFFFFFFFF) {
        M2C_FIELD(entry, u16 *, 4) = arg1;
        Snd_SetParamU8(handle, 7, arg1);
        if (M2C_FIELD(gSoundSys, u16 *, 0x12C) != 0) {
            Snd_SetParamU8(handle, 7, 0);
        }
    }
}

void fn_800B1DEC(s32 arg0, s32 arg1)
{
    void Snd_SetParamU16(s32, s32, s32);
    extern u8 gSoundSys[];
    u8 *entry;
    u8 *base;
    u32 handle;

    base = *(u8 **)(gSoundSys + 0xF4);
    entry = base + arg0 * 0x14;
    handle = *(u32 *)(entry + 0xC);
    if (handle != 0xFFFFFFFFu) {
        Snd_SetParamU16((s32)handle, 0x80, (u16)(*(u16 *)(entry + 0xA) + arg1));
    }
}

void fn_800B1E44(s32 arg0)
{
    void fn_8024B714(u32);
    extern u8 gSoundSys[];

    u8 *entry;
    u8 *base;

    base = *(u8 **)(gSoundSys + 0xF4);
    entry = base + arg0 * 0x14;

    if (*(u16 *)entry != 0) {
        fn_8024B714(*(u32 *)(entry + 0xC));
        *(u16 *)entry = 0;
    }
}

#pragma use_lmw_stmw on
/* Play a sound effect: find an SE slot, duck pan/vol if the same id is already playing, start the voice. */
s32 Sound_PlaySE(u16 soundId, u8 priority, u8 volParam, u8 paramA)
{
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void *Snd_Start(u16, u8, s32, s32);
    void Snd_SetParamU8(void *, s32, u8);
    void Snd_SetParamU16(void *, s32, u16);
    extern u8 gSoundSys[];

    u8 *sys;
    u8 *base;
    u8 *p;
    s32 i;
    u8 state;
    s32 id;
    u8 *slot;
    s32 idx;
    s32 pan;
    s32 vol;

    base = *(u8 **)(gSoundSys + 0xF4);
    slot = base;
    for (idx = 0; idx < 40; idx++, slot += 0x14) {
        if (*(u16 *)slot == 0) {
            break;
        }
    }
    if (idx >= 0x28) {
        slot = base;
        for (idx = 0; idx < 40; idx++, slot += 0x14) {
            if ((s32)*(u16 *)(slot + 2) <= (s32)priority) {
                break;
            }
        }
        if (idx >= 0x28) {
            return -1;
        }
    }

    id = soundId;
    pan = 0x2000;
    vol = 0x7F;
    p = base;
    for (i = 0; i < 40; i++, p += 0x14) {
        if (*(u16 *)p != 0 && (s32)*(u16 *)(p + 0x10) == id) {
            state = *(u8 *)(p + 9);
            if (state == 0) {
                return -1;
            }
            if (state < 4) {
                pan -= 0x400;
                vol -= 0x1E;
            }
        }
    }
    if (pan < 0) {
        pan += 0x4000;
    }
    if (vol < 0) {
        vol = 0;
    }

    *(u16 *)slot = 0;
    sys = gSoundSys;
    if (*(u16 *)(sys + 0x124) == 0) {
        *(s32 *)(gSoundSys + 0x128) = OSDisableInterrupts();
    }
    *(u16 *)(sys + 0x124) = *(u16 *)(sys + 0x124) + 1;
    *(void **)(slot + 0xC) = Snd_Start(soundId, (u8)vol, 0x40, 0);
    Snd_SetParamU8(*(void **)(slot + 0xC), 7, volParam);
    Snd_SetParamU16(*(void **)(slot + 0xC), 0x80, (u16)pan);
    Snd_SetParamU8(*(void **)(slot + 0xC), 0xA, paramA);
    {
        u16 nest;
        nest = *(u16 *)(sys + 0x124);
        if (nest != 0) {
            nest -= 1;
            *(u16 *)(sys + 0x124) = nest;
            if ((u16)nest == 0) {
                OSRestoreInterrupts(*(s32 *)(gSoundSys + 0x128));
            }
        }
    }
    if ((u32)*(void **)(slot + 0xC) + 0x10000 == 0xFFFFU) {
        return -1;
    }
    *(u16 *)slot = 1;
    *(u16 *)(slot + 2) = priority;
    *(u16 *)(slot + 4) = volParam;
    *(u16 *)(slot + 6) = paramA;
    *(u8 *)(slot + 8) = 0;
    *(u16 *)(slot + 0x10) = (u16)id;
    *(u8 *)(slot + 9) = 0;
    *(u16 *)(slot + 0xA) = (u16)pan;
    if (*(u16 *)(gSoundSys + 0x12C) != 0) {
        Snd_SetParamU8(*(void **)(slot + 0xC), 7, 0);
    }
    return idx;
}

#pragma global_optimizer off
#pragma push
#pragma global_optimizer on
typedef struct Seq { u16 x0, x2, x4, x6; void *x8; struct Seq *next; } Seq;
typedef struct { s32 h; s32 x4; Seq *seq; s32 xc; } Slot;
typedef struct { u8 pad[0xec]; Seq *list; Slot *slots; } SoundSys;
void fn_800B22D8(void) {
    extern u16 gSoundSys[4976];
    extern s16 lbl_80366E38;
    extern s16 lbl_80367808;
    u8 fn_8024B370(s32);
    void fn_8024B3A0(s32);
    void fn_8024B518(s32, u8, s32, u8);
    Slot *sl;
    s32 i;
    s32 j;
    lbl_80367808 += lbl_80366E38;
    if (lbl_80366E38 > 0) {
        if (lbl_80367808 > 0x319c) {
            lbl_80366E38 = -lbl_80366E38;
            lbl_80367808 = 0x319c;
        }
    } else {
        if (lbl_80367808 < -0x3200) {
            lbl_80366E38 = -lbl_80366E38;
            lbl_80367808 = -0x3200;
        }
    }
    sl = ((SoundSys *)gSoundSys)->slots;
    for (i = 0; i < 8; i++, sl++) {
        if (sl->seq != 0 && (u32)sl->h != 0xFFFFFFFF) {
            if (lbl_80367808 >= 0) {
                for (j = 0; j < 0x10; j++) {
                    fn_8024B518(sl->h, j, 0x7f, lbl_80367808 / 200);
                    fn_8024B518(sl->h, j, 0x7e, 0);
                }
            } else {
                for (j = 0; j < 0x10; j++) {
                    fn_8024B518(sl->h, j, 0x7f, 0);
                    fn_8024B518(sl->h, j, 0x7e, -lbl_80367808 / 200);
                }
            }
            if (fn_8024B370(sl->h) != 1) {
                sl->seq->x0 |= 2;
                fn_8024B3A0(sl->h);
                sl->h = -1;
            }
        }
    }
}
#pragma pop
#pragma global_optimizer on
s32 fn_800B2494(s32 arg0)
{
    s32 fn_8024B370(void *);
    extern u8 gSoundSys[];

    u8 *base;
    void *entry;
    s32 result;

    base = *(u8 **)(gSoundSys + 0xF0);
    entry = *(void **)(base + (arg0 << 4));

    result = fn_8024B370(entry);

    return (u8)result != 0;
}

void fn_800B24D8(s32 arg0, u8 arg1) {
    u8 fn_8024B370(s32);
    void fn_8024B4B0(u8, s32, s32, s32);
    extern u8 gSoundSys[];
    s32 *entry;

    entry = (s32 *)(M2C_FIELD(gSoundSys, u8 **, 0xF0) + arg0 * 16);
    if (fn_8024B370(entry[0])) {
        if (arg1 > 0x7F) {
            arg1 = 0x7F;
        }
        entry[1] = arg1;
        fn_8024B4B0(entry[1], 0, entry[0], 0);
        if (M2C_FIELD(gSoundSys, u16 *, 0x12C) != 0) {
            fn_8024B4B0(0, 0, entry[0], 0);
        }
    }
}

void fn_800B2584(s32 arg0)
{
    extern u8 gSoundSys[];

    extern s32 fn_8024B370(s32);
    extern void fn_8024B4B0(s32, u32, s32, s32);

    u8 *base;
    u8 *table;
    s32 offset;
    s32 handle;

    base = gSoundSys;
    offset = arg0 << 4;
    table = *(u8 **)(base + 0xF0);

    handle = *(s32 *)(table + offset);

    if ((u8)fn_8024B370(handle) != 0) {
        fn_8024B4B0(
            0,
            *(u16 *)(gSoundSys + 0x122),
            *(s32 *)(table + offset),
            2
        );
    }
}

void fn_800B25EC(s32 arg0)
{
    extern u8 gSoundSys[];
    s32 fn_8024B370(s32);
    void fn_8024B3A0(s32);
    u8 *base;
    u8 *table;
    s32 offset;

    base = gSoundSys;
    offset = arg0 << 4;
    table = *(u8 **)(base + 0xF0);

    if ((u8)fn_8024B370(*(s32 *)(table + offset)) != 0) {
        fn_8024B3A0(*(s32 *)(table + offset));
        *(s32 *)(table + offset) = -1;
    }
}

void fn_800B2648(s32 arg0) {
    u8 fn_8024B370(s32);
    void fn_8024B420(s32);
    void fn_8024B4B0(u8, s32, s32, s32);
    extern u8 gSoundSys[];
    s32 *entry;

    entry = (s32 *)(M2C_FIELD(gSoundSys, u8 **, 0xF0) + arg0 * 16);
    if (fn_8024B370(entry[0])) {
        fn_8024B420(entry[0]);
        fn_8024B4B0(entry[1], 0, entry[0], 0);
    }
}

extern void *vidListRoot;
void fn_800B26B0(s32 arg0, u32 arg1) {
 extern u8 gSoundSys[];
 u8 fn_8024B370(s32); void fn_8024B3A0(s32); s32 fn_80259584(u16,u16,void *,s32,s32);
 void fn_8024B4B0(u8,s32,s32,s32); void fn_8024B420(s32); void fn_8024B458(s32,s32,s32);
 u8 *node; s32 *entry; u32 id;
 entry=(s32 *)(*(u8 **)(gSoundSys+0xf0)+arg0*16);
 if(fn_8024B370(entry[0])==1) fn_8024B3A0(entry[0]);
 entry[1]=127;
 id=(u8)arg1;
 node=*(u8 **)(gSoundSys+0xec);
 for(;;) {
 if(!node) { node=0; break; }
 if(*(u16 *)(node+2)==id) break;
 node=*(u8 **)(node+12);
 }
 if(node) {
 entry[2]=(s32)node;
 *(u16 *)(node+4)=(arg1>>16)&255;
 *(u16 *)(node+6)=(arg1>>8)&255;
 entry[3]=-1;
 entry[0]=fn_80259584(*(u16 *)(node+4),*(u16 *)(node+6),*(void **)(node+8),0,0);
 fn_8024B4B0((u8)entry[1],0,entry[0],0);
 fn_8024B420(entry[0]); fn_8024B458(entry[0],entry[3],0);
 }
}

void fn_800B27BC(void) {
    u8 Sound_IsReady();
    extern u16 gSoundSys[4976];
    s32 var_r6;
    u16 temp_r5;
    u16 temp_r5_2;
    u16 temp_r5_3;

    if ((Sound_IsReady() != 0) && ((u16) M2C_FIELD(((u8 *)gSoundSys), u16 *, 0x12C) == 1)) {
        var_r6 = 0;
        temp_r5 = M2C_FIELD(M2C_FIELD(((u8 *)gSoundSys), s8 **, 0xF8), u16 *, 0);
        if ((temp_r5 & 8) && !(temp_r5 & 0x400) && !(temp_r5 & 2)) {
            if (temp_r5 & 0x1000) {
                var_r6 = 1;
            }
            if (((u16) M2C_FIELD(M2C_FIELD(((u8 *)gSoundSys), s8 **, 0xF8), u16 *, 0x1E) == 2) && (temp_r5 & 0x2000)) {
                var_r6 = 1;
            }
        }
        temp_r5_2 = M2C_FIELD(M2C_FIELD(((u8 *)gSoundSys), s8 **, 0xF8), u16 *, 0x13C);
        if ((temp_r5_2 & 8) && !(temp_r5_2 & 0x400) && !(temp_r5_2 & 2)) {
            if (temp_r5_2 & 0x1000) {
                var_r6 = 1;
            }
            if (((u16) M2C_FIELD(M2C_FIELD(((u8 *)gSoundSys), s8 **, 0xF8), u16 *, 0x15A) == 2) && (temp_r5_2 & 0x2000)) {
                var_r6 = 1;
            }
        }
        temp_r5_3 = M2C_FIELD(M2C_FIELD(((u8 *)gSoundSys), s8 **, 0xF8), u16 *, 0x278);
        if ((temp_r5_3 & 8) && !(temp_r5_3 & 0x400) && !(temp_r5_3 & 2)) {
            if (temp_r5_3 & 0x1000) {
                var_r6 = 1;
            }
            if (((u16) M2C_FIELD(M2C_FIELD(((u8 *)gSoundSys), s8 **, 0xF8), u16 *, 0x296) == 2) && (temp_r5_3 & 0x2000)) {
                var_r6 = 1;
            }
        }
        if (var_r6 != 0) {
            M2C_FIELD(((u8 *)gSoundSys), u16 *, 0x12C) = 2U;
            return;
        }
        M2C_FIELD(((u8 *)gSoundSys), u16 *, 0x12C) = 0U;
    }
}
void fn_800B28DC(void) {
    extern u8 gSoundSys[];

    if (M2C_FIELD(gSoundSys, u16 *, 0x12C) == 0) {
        M2C_FIELD(gSoundSys, u16 *, 0x12C) = 1;
    }
}

void fn_800B28FC(s32 arg0) {
    extern u8 gSoundSys[];
    void fn_8024B94C(void);
    *(s32 *)(gSoundSys + 0x130) = arg0;
    fn_8024B94C();
}

#pragma global_optimizer off
#pragma use_lmw_stmw on
/* Load .stm/.slib/.stbl sound banks for pack id into the next gSoundSys slot. */
s32 Sound_LoadPack(s32 arg0) {
    s32 fn_800B4A84(void *, s32, s32);
    s32 fn_800B49C8(void *);
    void fn_800B49D0(void *);
    s32 fn_800B4A14(void *, s32, s32, s32);
    extern u8 gSoundSys[];
    s32 fn_800C4638(s32, void *, s32);
    void fn_800C4588(s32);
    void sprintf(void *, void *, ...);
    extern u8 Sound_str[], gSoundPathBuf[];
    u32 value;
    u32 buffer;
    s32 size;
    s32 handle;
    u8 *base;
    u8 *p, *node, *tail;
    u8 *loopBase, *names;
    s32 id = arg0;
    u32 length;
    u16 index;
    base = (u8 *)gSoundSys;
    if (*(u32 *)(base + 0xE4) >= 8) return 0;
    sprintf(gSoundPathBuf, Sound_str + 0x1E, id, Sound_str + 0x2F);

    buffer = LoadSoundBankB(gSoundPathBuf);
    if (buffer == 0) return 0;

    value = *(u32 *)(base + 0xE4);
    loopBase = (u8 *)gSoundSys;
    names = Sound_str;
    p = loopBase + value*4;
    *(u32 *)(p + 0x60) = buffer;
    for (;;) {
        length = *(u32 *)buffer;
        if (length == 0xFFFFFFFF) break;
        node = (u8 *)fn_800C4638(0x10, names + 0x2E, 0);
        if (node == 0) { for (;;) {} }
        index = 0;
        if (*(u8 **)(loopBase + 0xEC) == 0) *(u8 **)(loopBase + 0xEC) = node;
        else {
            tail = *(u8 **)(loopBase + 0xEC);
            for (;;) {
                u8 *next = *(u8 **)(tail + 0xC);
                index++;
                if (next == 0) break;
                tail = next;
            }
            *(u8 **)(tail + 0xC) = node;
        }
        *(u16 *)node = 1;
        *(u16 *)(node + 2) = index;
        *(u16 *)(node + 4) = 0;
        *(u16 *)(node + 6) = 0;
        *(u8 **)(node + 8) = (u8 *)buffer + 0x20;
        *(u32 *)(node + 0xC) = 0;
        buffer += length;
    }
    sprintf(gSoundPathBuf, (u8 *)Sound_str + 0x1E, id, (u8 *)Sound_str + 0x35);

    buffer = LoadSoundBankB(gSoundPathBuf);
    if (buffer == 0) return 0;

    {
        u32 slot = *(u32 *)(base + 0xE4);
        u8 *table = (u8 *)gSoundSys;
        table += slot * 4;
        *(u32 *)(table + 0x80) = buffer;
    }
    sprintf(gSoundPathBuf, &Sound_str[0x1E], id, &Sound_str[0x3B]);

    buffer = LoadSoundBankB(gSoundPathBuf);
    if (buffer == 0) return 0;

    {
        u32 slot = *(u32 *)(base + 0xE4);
        u8 *table = (u8 *)gSoundSys;
        table += slot * 4;
        *(u32 *)(table + 0xA0) = buffer;
    }
    *(u32 *)(base + 0xE4) += 1;
    return 1;
}
#pragma global_optimizer reset
s32 fn_800B2CCC(void) { s32 *p=(s32 *)lbl_80319A68; s32 i; for(i=0;i<16;p++,i++) { if(*p !=0) return 0; } return 1; }

s32 fn_800B2D94(void) {
    lbl_80319A68[0] = 2;
    lbl_80319A68[1] = 3;
    lbl_80319A68[2] = 7;
    lbl_80319A68[3] = 8;
    lbl_80319A68[4] = 9;
    lbl_80319A68[5] = 10;
    lbl_80319A68[6] = 11;
    lbl_80319A68[7] = 12;
    return 1;
}

s32 fn_800B2DE4(s32 arg0, s32 arg1) {
    s32 fn_8020C6D4(char *, void *);
    s32 fn_8020CC28(void *, s32, s32, s32, s32);
    s32 fn_8020C79C(void *);
    extern u8 gSoundSys[];
    u8 sp8[0x3C];

    if (fn_8020C6D4((char *)gSoundSys + 0x342, sp8) == 0) {
        return 0;
    }
    if (fn_8020CC28(sp8, M2C_FIELD(gSoundSys, s32 *, 0x448), arg1, arg0, 2) <= 0) {
        return 0;
    }
    fn_8020C79C(sp8);
    return M2C_FIELD(gSoundSys, s32 *, 0x448);
}

s32 fn_800B2E78(void) {
    extern u8 gSoundIdSlots[16];
    s32 i;
    s32 count;

    count = 0;
    for (i = 0; i < 16; i++) {
        if (gSoundIdSlots[i] != 0) {
            count++;
        }
    }
    return count;
}

/* Return 1 if sound id is present in gSoundIdSlots (stored as id+1). */
s32 Sound_HasId(s32 id) {
    extern u8 gSoundIdSlots[];
    s32 i;
    u8 *p = gSoundIdSlots;
    id = (u8)id + 1;
    for (i = 0; i < 16; p++, i++) {
        if (*p == (u8)id) {
            return 1;
        }
    }
    return 0;
}

extern u16 lbl_80319A18[];
#pragma opt_strength_reduction off
s32 fn_800B2FF4(u8 arg0) {
    extern u16 lbl_80319A18[];
    s32 *ptr;
    s32 i;
    u8 val;
    if (arg0 == 0) {
        ptr = (s32 *)lbl_80319A18;
        for (i = 0; i < 16; ptr++, i++) {
            if (*ptr != 0) return 0;
        }
        return 1;
    }
    val = arg0 + 1;
    ptr = (s32 *)lbl_80319A18;
    for (i = 0; i < 16; ptr++, i++) {
        if ((s32)val == *ptr) return 0;
    }
    return 1;
}
#pragma opt_strength_reduction reset
s32 fn_800B3194(void) {
    void fn_802590E0(void);
    extern u8 gSoundSys[];
    extern u8 gSoundIdSlots[16];
    u32 i;

    while (M2C_FIELD(gSoundSys, u32 *, 0xC4) != 0) {
        fn_802590E0();
        M2C_FIELD(gSoundSys, u32 *, 0xC4)--;
    }
    for (i = 0; i < 16; i++) {
        gSoundIdSlots[i] = 0;
    }
    if (M2C_FIELD(gSoundSys, u32 *, 0x444) != 0) {
        M2C_FIELD(gSoundSys, u32 *, 0x444) = 0;
    }
    return 1;
}

s32 fn_800B3248(u8 id) {
    extern u16 lbl_80319A18[];
    extern u8 gSoundIdSlots[16];
    s32 i;
    s32 n;
    for (i = 0; i < 16; i++) {
        if (gSoundIdSlots[i] == 0) {
            gSoundIdSlots[i] = id + 1;
            break;
        }
    }
    n = 0;
    for (i = 0; i < 16; i++) {
        if (gSoundIdSlots[i] == (u8)(id + 1)) n++;
    }
    if (n > 1) return 0;
    for (i = 0; i < 16; i++) {
        if (((s32 *)lbl_80319A18)[i] == 0) break;
    }
    ((s32 *)lbl_80319A18)[i] = (u8)(id + 1);
    return 1;
}

s32 fn_800B33FC(s32 arg0, s32 arg1) {
    s32 fn_8020C6D4(char *, void *);
    s32 fn_8020CC28(void *, s32, s32, s32, s32);
    s32 fn_8020C79C(void *);
    extern u8 gSoundSys[];
    u8 sp8[0x3C];

    if (fn_8020C6D4((char *)gSoundSys + 0x242, sp8) == 0) {
        return 0;
    }
    if (fn_8020CC28(sp8, M2C_FIELD(gSoundSys, s32 *, 0x444), arg1, arg0, 2) <= 0) {
        return 0;
    }
    fn_8020C79C(sp8);
    return M2C_FIELD(gSoundSys, s32 *, 0x444);
}

void fn_800B3490(void) {
    extern u16 gSoundSys[];
    u32 *p = (u32 *)((u8 *)gSoundSys + 0x444);
    if (*p != 0) {
        *p = 0;
    }
}

#pragma use_lmw_stmw on
typedef struct { s32 x0; u8 pad0[0x1c]; void *x20; u8 pad1[0x1c]; s32 x40; u8 pad2[0x7c]; s32 xc0[8]; u32 xe0; u8 pad3[4]; s32 xe8; u8 pad4[0x56]; char name[0x302]; void *x444; void *x448; } SoundSys_800B34B0;
static inline void *LoadFile_800B34B0(const char *name) {
    extern s32 lbl_8036780C;
    extern u8 Sound_str[];
    void *fn_800B4A84(const char *, s32, s32);
    u32 fn_800B49C8(void *);
    void *fn_800C4638(u32, const char *, s32);
    u32 OSGetResetCode(void);
    void fn_800062EC(void *, u32, u32);
    void DCFlushRange(void *, u32);
    s32 fn_800B4A14(void *, void *, u32, s32);
    void fn_800C4588(void *);
    void fn_800B49D0(void *);
    void *f = fn_800B4A84(name, 2, 0);
    u32 size;
    void *buf;
    if (f == 0) return 0;
    size = fn_800B49C8(f);
    if (size == 0) return 0;
    size = (size + 0x1f) & ~0x1f;
    buf = fn_800C4638(size, (const char *)Sound_str + 0x2E, 0);
    if (buf == 0) return 0;
    (*(u32 *)&lbl_8036780C) = size;
    if ((OSGetResetCode() >> 31) && (OSGetResetCode() & 0x100)) {
        fn_800062EC(buf, 0x81200000 - size, size);
        DCFlushRange(buf, size);
    } else if (fn_800B4A14(f, buf, size, 0) <= 0) {
        fn_800C4588(buf);
        return 0;
    }
    fn_800B49D0(f);
    return buf;
}
s32 fn_800B34B0(u8 *list) {
    extern u16 gSoundSys[4976];
    extern void *gSoundLoadBuf;
    void fn_800C4588(void *);
    void fn_80258D74(u8 *(*)(s32, u32), u32);
    s32 Sound_PushGroup(void *, u16, s32, s32, s32);
    u8 *Sound_CopyLoadChunk(s32, u32);
    s32 *cnt;
    s32 i;
    if ((*(SoundSys_800B34B0 *)&gSoundSys).xe0 >= 8) return 0;
    gSoundLoadBuf = 0;
    gSoundLoadBuf = LoadFile_800B34B0((*(SoundSys_800B34B0 *)&gSoundSys).name);
    if (gSoundLoadBuf == 0) return 0;
    if ((*(SoundSys_800B34B0 *)&gSoundSys).x444 == 0) {
        (*(SoundSys_800B34B0 *)&gSoundSys).x444 = (*(SoundSys_800B34B0 *)&gSoundSys).x448;
        fn_80258D74(Sound_CopyLoadChunk, 0x20000);
    }
cnt = (*(SoundSys_800B34B0 *)&gSoundSys).xc0; *cnt = 0;
    if (list != 0) {
        for (; *list != 0xff; list++) {
            Sound_PushGroup((*(SoundSys_800B34B0 *)&gSoundSys).x20, *list, 0, (*(SoundSys_800B34B0 *)&gSoundSys).x40, (*(SoundSys_800B34B0 *)&gSoundSys).x0);
            (*cnt)++;
        }
    } else {
        for (i = 0; i < 6; i++) {
            if ((u8)Sound_PushGroup((*(SoundSys_800B34B0 *)&gSoundSys).x20, i, 0, (*(SoundSys_800B34B0 *)&gSoundSys).x40, (*(SoundSys_800B34B0 *)&gSoundSys).x0) == 1) {
                (*cnt)++;
                (*(SoundSys_800B34B0 *)&gSoundSys).xe8++;
            }
        }
    }
    if (gSoundLoadBuf != 0) fn_800C4588(gSoundLoadBuf);
    cnt[(*(SoundSys_800B34B0 *)&gSoundSys).xe0] = 0;
    return 1;
}

#pragma global_optimizer off
s32 fn_800B36D8(s32 arg0) {
    void sprintf(void *, void *, ...);
    void strcpy(void *, void *, void *);
    extern u8 Sound_str[], gSoundPathBuf[], gSoundSys[];
    u32 buf;

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0x6C);
    buf = LoadSoundBankB(gSoundPathBuf);
    if (buf == 0) return 0;
    *(u32 *)(gSoundSys + 0x0) = buf;

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0x72);
    buf = LoadSoundBankB(gSoundPathBuf);
    if (buf == 0) return 0;
    *(u32 *)(gSoundSys + 0x20) = buf;

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0x78);
    buf = LoadSoundBankB(gSoundPathBuf);
    if (buf == 0) return 0;
    *(u32 *)(gSoundSys + 0x40) = buf;

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0x7E);
    strcpy(gSoundSys + 0x142, gSoundPathBuf, gSoundSys);

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0x84);
    buf = LoadSoundBankB(gSoundPathBuf);
    if (buf == 0) return 0;
    *(u32 *)(gSoundSys + 0x8) = buf;

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0x8E);
    buf = LoadSoundBankB(gSoundPathBuf);
    if (buf == 0) return 0;
    *(u32 *)(gSoundSys + 0x28) = buf;

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0x98);
    buf = LoadSoundBankB(gSoundPathBuf);
    if (buf == 0) return 0;
    *(u32 *)(gSoundSys + 0x48) = buf;

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0xA2);
    strcpy(gSoundSys + 0x342, gSoundPathBuf, gSoundSys);

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0xAC);
    buf = LoadSoundBankB(gSoundPathBuf);
    if (buf == 0) return 0;
    *(u32 *)(gSoundSys + 0x4) = buf;

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0xB8);
    buf = LoadSoundBankB(gSoundPathBuf);
    if (buf == 0) return 0;
    *(u32 *)(gSoundSys + 0x24) = buf;

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0xC4);
    buf = LoadSoundBankB(gSoundPathBuf);
    if (buf == 0) return 0;
    *(u32 *)(gSoundSys + 0x44) = buf;

    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg0, Sound_str + 0xD0);
    strcpy(gSoundSys + 0x242, gSoundPathBuf, gSoundSys);
    return 1;
}

/* DVD callback: copy size bytes from gSoundLoadBuf+offset into the sound work buffer. */
u8 *Sound_CopyLoadChunk(s32 offset, u32 size) {
    extern u8 gSoundSys[];
    extern void *gSoundLoadBuf;
    void fn_800062EC(u8 *, u8 *, u32);
    u8 *base = gSoundSys;
    u8 *dst = *(u8 **)(base + 0x444);
    u8 *src = (u8 *)gSoundLoadBuf + offset;
    if ((size & 7) == 0) {
        fn_800062EC(dst, src, size);
    } else {
        for (; size != 0; size--) {
            *dst++ = *src++;
        }
    }
    return *(u8 **)(base + 0x444);
}

#pragma global_optimizer on
void fn_800B4060(void) {
    M2C_UNK fn_800AECC0();
    fn_800AECC0();
}

void fn_800B4080(void) {
    void fn_800B22D8(void);
    void fn_800AF0B4(void);
    s32 fn_8024B7DC(void *);
    extern u8 gSoundSys[];
    void fn_8024B714(u32);
    register unsigned long off;
    u8 *sys;
    long i;
    register u8 *entry;
    u8 *p;
    unsigned long result;

    fn_800B22D8();
    i = 0;
    sys = gSoundSys;
    entry = *(u8 **)(sys + 0xF4);
    off = i;
    while (i < 0x28) {
        if (*(u16 *)entry != 0) {
            entry[9] = (u8)(entry[9] + 1);
            result = fn_8024B7DC(*(void **)(*(u8 **)(sys + 0xF4) + off + 0xC));
            if ((u32)(result + 0x10000) == 0xFFFFU) {
                p = *(u8 **)(sys + 0xF4) + off;
                if (*(u16 *)p != 0) {
                    fn_8024B714(*(u32 *)(p + 0xC));
                    *(u16 *)p = 0;
                }
            }
        }
        ++i;
        off += 0x14;
        entry += 0x14;
    }
    fn_800AF0B4();
}

#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
void fn_800B412C(void) {
void fn_800B47F0(void);
extern u8 lbl_80312BD0[], Sound_str[];
extern s32 lbl_80369CA8,lbl_80369CAC;
extern f32 lbl_80369CB0,lbl_80369CD8,lbl_80369CDC,lbl_80369CE0,lbl_80369CE4,lbl_80369CE8,lbl_80369CEC;
void fn_802141EC(void *,s32); void fn_80215D2C(void); void fn_80213B44(s32); void fn_80214184(s32);
void fn_802624DC(void *); void Sound_Init(s32,s32,s32,s32,s32,s32);
void fn_80263CF0(void *); void fn_80263830(void *); void fn_80265230(void *); void fn_80264B7C(void *);
void fn_80263C94(void); void fn_80264F74(void); void fn_800AEB90(void);
void fn_8024BA38(s32,void *,void *,s32,s32,void *,void *,s32,s32);
void fn_8024B8EC(s32,s32,s32); void fn_8024B94C(s32);
s32 fn_8021371C(void *); u32 fn_80213800(void); u32 fn_8021381C(void);
void OSReport(void *,...); void *fn_800C4638(s32,void *,s32);
s32 fn_8024CE1C(s32,s32); void *memset(void *,s32,u32);
s32 fn_8020A558(void *,void *,s32,void *,s32,s32,s32); void fn_8020A9E0(void *);
s32 config[2]; u8 *p; u8 *stream; s32 i; u8 *base=lbl_80312BD0;
config[0]=lbl_80369CA8; config[1]=lbl_80369CAC;
fn_802141EC(base,8); fn_80215D2C(); fn_80213B44(0); fn_80214184(0xbfc000);
fn_802624DC(config); Sound_Init(64,64,64,1,1,0xbfc000);
p=base+0x20;
M2C_FIELD(p,u8 *,452)=0;
M2C_FIELD(p,f32 *,464)=lbl_80369CD8;
M2C_FIELD(p,f32 *,472)=lbl_80369CDC;
M2C_FIELD(p,f32 *,468)=lbl_80369CE0;
M2C_FIELD(p,f32 *,456)=lbl_80369CB0;
M2C_FIELD(p,f32 *,476)=lbl_80369CB0;
M2C_FIELD(p,f32 *,460)=lbl_80369CE4;
fn_80263CF0(p);
p=base+0x200;
M2C_FIELD(p,u8 *,316)=0;
M2C_FIELD(p,f32 *,328)=lbl_80369CE8;
M2C_FIELD(p,f32 *,336)=lbl_80369CDC;
M2C_FIELD(p,f32 *,332)=lbl_80369CEC;
M2C_FIELD(p,f32 *,320)=lbl_80369CEC;
M2C_FIELD(p,f32 *,324)=lbl_80369CEC;
fn_80263830(p);
p=base+0x354;
M2C_FIELD(p,s32 *,0x90)=10; M2C_FIELD(p,s32 *,0x94)=0; M2C_FIELD(p,s32 *,0x98)=500; fn_80265230(p);
p=base+0x3f0;
M2C_FIELD(p,s32 *,60)=150;M2C_FIELD(p,s32 *,64)=150;M2C_FIELD(p,s32 *,68)=50;M2C_FIELD(p,s32 *,72)=30;M2C_FIELD(p,s32 *,76)=30;M2C_FIELD(p,s32 *,80)=30;M2C_FIELD(p,s32 *,84)=50;M2C_FIELD(p,s32 *,88)=50;M2C_FIELD(p,s32 *,92)=50;fn_80264B7C(p);
fn_8024BA38(0,fn_80263C94,base+0x20,255,0,fn_80264F74,base+0x354,255,0);
fn_8024B8EC(127,0,255); M2C_FIELD(base+0x4768,s32 *,0x130)=1; fn_8024B94C(1);
M2C_FIELD(base+0x4768,s32 *,0x6d8)=fn_8021371C(fn_800AEB90);
M2C_FIELD(base+0x4768,u32 *,0x450)=fn_80213800()|0x80000000;
{u32 size=fn_8021381C(); p=base+0x4768; M2C_FIELD(p,u32 *,0x454)=size;
if(size>640) {OSReport(Sound_str); for(;;) {} }}
M2C_FIELD(p,s16 *,1100)=0;M2C_FIELD(p,s32 *,9948)=0;M2C_FIELD(p,s16 *,288)=10;M2C_FIELD(p,s16 *,290)=500;M2C_FIELD(p,s32 *,224)=0;M2C_FIELD(p,s32 *,228)=0;M2C_FIELD(p,s16 *,300)=0;M2C_FIELD(p,s16 *,316)=0;M2C_FIELD(p,s32 *,232)=0;M2C_FIELD(p,s32 *,1092)=0;M2C_FIELD(base+0x4768,void **,0x448)=fn_800C4638(0x20000,Sound_str+46,0);
M2C_FIELD(base+0x4768,s32 *,0xec)=0;
p=fn_800C4638(128,Sound_str+46,0); M2C_FIELD(base+0x4768,void **,0xf0)=p;
if(!p) for(;;) {}
for(i=0;i<8;i++){M2C_FIELD(p,s32 *,i*16)=-1; M2C_FIELD(p,s32 *,i*16+8)=0;}
p=fn_800C4638(800,Sound_str+46,0); M2C_FIELD(base+0x4768,void **,0xf4)=p;
if(!p) for(;;) {}
for(i=0;i<40;i++,p+=20){M2C_FIELD(p,s16 *,0)=0;M2C_FIELD(p,s32 *,12)=-1;M2C_FIELD(p,s16 *,2)=0;M2C_FIELD(p,s16 *,4)=127;M2C_FIELD(p,s16 *,6)=64;}
p=fn_800C4638(0x3b4,Sound_str+46,0); M2C_FIELD(base+0x4768,void **,0xf8)=p;
if(!p) for(;;) {}
stream=p;
for(i=0;i<3;i++,stream+=0x13c) {
M2C_FIELD(stream,s16 *,0)=0;
p=fn_800C4638(0x8000,Sound_str+46,0); if(!p) for(;;) {} M2C_FIELD(stream,void **,88)=p;p=fn_800C4638(0x8000,Sound_str+46,0); if(!p) for(;;) {} M2C_FIELD(stream,void **,92)=p;p=fn_800C4638(fn_8024CE1C(0xe00,0),Sound_str+46,0); if(!p) for(;;) {} M2C_FIELD(stream,void **,84)=p;p=fn_800C4638(0x8000,Sound_str+46,0); if(!p) for(;;) {} M2C_FIELD(stream,void **,224)=p;p=fn_800C4638(0x8000,Sound_str+46,0); if(!p) for(;;) {} M2C_FIELD(stream,void **,228)=p;p=fn_800C4638(fn_8024CE1C(0xe00,0),Sound_str+46,0); if(!p) for(;;) {} M2C_FIELD(stream,void **,220)=p;} p=base+0x4768;
M2C_FIELD(p,void **,0x100)=fn_80263C94; M2C_FIELD(p,void **,0x104)=base+0x20;
M2C_FIELD(p,u8 *,0x108)=255; M2C_FIELD(p,s32 *,0x10c)=0;
M2C_FIELD(p,void **,0x110)=fn_80264F74; M2C_FIELD(p,void **,0x114)=base+0x354;
M2C_FIELD(p,u8 *,0x118)=255; M2C_FIELD(p,s32 *,0x11c)=0;
memset(base+0x6e48,0,64); memset(base+0x6e98,0,64); memset(base+0x6e88,0,16);
if(!fn_8020A558(base+0x450,fn_800B47F0,0,base+0x768+0x4000,0x4000,16,1)) for(;;) {}
fn_8020A9E0(base+0x450);
}
#pragma pop
void fn_800B46D8(void) {
void DCInvalidateRange(void *,u32); void fn_8005E0F0(void); void fn_80208780(void *,u32); void fn_8020A824(void *); s32 fn_802142B0(void); void ARQPostRequest(void *,s32,s32,s32,s32,void *,s32,void *); void fn_80215EF8(void); void fn_800B4794(void);
extern s32 lbl_8036780C; extern u8 lbl_80367810; extern u8 lbl_80313020[];
u8 sp8[0x1C]; s32 dest; s32 size; u8 *base;
if(lbl_8036780C!=0) {
size=lbl_8036780C; base=(u8*)fn_802142B0()+0x500; dest=0x81200000-size; lbl_80367810=1;
fn_8005E0F0(); fn_8020A824(lbl_80313020); fn_80215EF8(); DCInvalidateRange((void*)dest,size);
ARQPostRequest(sp8,0,1,0,(s32)base,(void*)dest,size,fn_800B4794);
while(lbl_80367810!=0) {} fn_80208780((void*)dest,0x81200000);
}}

void fn_800B4794(void) {
    extern s8 lbl_80367810;
    lbl_80367810 = 0;
}

void fn_800B47A0(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

void *fn_800C4638(s32, void *, s32);
void fn_800B47C0(s32 arg0) {
    extern u8 Sound_str[];
    fn_800C4638(arg0, Sound_str + 0x2E, 0);
}

void fn_800B47F0(void) {
    extern u8 lbl_80312BD0[];
    void fn_80258D74(void *, s32);
    void fn_800B33FC(void);
    void fn_800B2DE4(void);
    void Sound_PushGroup(s32, u8, s32, s32, s32);
    void OS_YieldThread(void);

    u8 *base = lbl_80312BD0;
    u8 *snd = base + 0x4768;
    s32 *q1 = (s32 *)(base + 0x6E48);
    s32 *q2 = (s32 *)(base + 0x6E98);
    u32 i;
    s32 val;

    for (;;) {
        if (q1[0] != 0) {
            u8 id = q1[0] - 1;
            if (*(u32 *)(snd + 0x444) == 0) {
                *(u32 *)(snd + 0x444) = *(u32 *)(snd + 0x448);
                fn_80258D74(fn_800B33FC, 0x20000);
            }
            Sound_PushGroup(*(s32 *)(snd + 0x24), id, 0, *(s32 *)(snd + 0x44), *(s32 *)(snd + 4));
            *(s32 *)(snd + 0xC4) += 1;
        }
        val = q2[0];
        for (i = 0; i < 15; i++) {
            q1[i] = q1[i + 1];
        }
        q1[i] = 0;

        if (val != 0) {
            fn_80258D74(fn_800B2DE4, 0x20000);
            Sound_PushGroup(*(s32 *)(snd + 0x28), (u8)(val - 1), 0, *(s32 *)(snd + 0x48), *(s32 *)(snd + 8));
        }
        for (i = 0; i < 15; i++) {
            q2[i] = q2[i + 1];
        }
        q2[i] = 0;

        OS_YieldThread();
    }
}

s32 fn_800B49C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

void fn_800B49D0(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 8);
}

void fn_800B49E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s32 *, 0x84) = arg3;
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 1);
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) & 0xFFFFFFFD);
    M2C_FIELD(arg0, s32 *, 0x8C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
}

s32 fn_800B4A14(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s32 *, 0x84) = arg3;
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 1);
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) & 0xFFFFFFFD);
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
loop_1:
    if (!(M2C_FIELD(arg0, u16 *, 0x90) & 2)) {
        OS_YieldThread();
        goto loop_1;
    }
    return M2C_FIELD(arg0, s32 *, 0x74);
}

extern u16 lbl_8028D0FC[];
void *fn_800B4A84(void *path, s32 mode, s32 arg2) {
    s32 fn_8020C3E0(void);
    void *memset(void *, s32, u32);
    void strcpy(void *, void *);
    s32 fn_8020C6D4(void *, void *);
    extern u8 *lbl_80367820;
    u8 *entry;
    s32 i;

    if (fn_8020C3E0() == -1) {
        return 0;
    }
    entry = lbl_80367820;
    for (i = 0; i < 0x100; i++, entry += 0x98) {
        if (!(*(u16 *)(entry + 0x90) & 0x8000)) {
            break;
        }
    }
    if (i >= 0x100) {
        return 0;
    }
    memset(entry, 0, 0x98);
    strcpy(entry, path);
    *(u16 *)(entry + 0x90) = 0;
    *(u16 *)(entry + 0x92) = (u8)mode;
    *(u16 *)(entry + 0x94) = (u16)arg2;
    *(s32 *)(entry + 0x7C) = 0;
    *(s32 *)(entry + 0x80) = 0;
    *(s32 *)(entry + 0x84) = 0;
    *(s32 *)(entry + 0x88) = 0;
    *(u16 *)(entry + 0x90) |= 0x8000;
    if (fn_8020C6D4(entry, entry + 0x40) == 0) {
        memset(entry, 0, 0x98);
        return 0;
    }
    return entry;
}

#pragma global_optimizer off
#pragma use_lmw_stmw on
void fn_800B4C20(void) {
    void *memset(void *, s32, u32);
    void *memcpy(void *, const void *, u32);
    void fn_800B50FC(u8 **, u32);
    s32 fn_8020C79C(void *);
    s32 fn_8020CC28(void *, s32, s32, s32, s32);
    void OSReport(void *, ...);
    s32 fn_800B4FF8(u8 *, u8 *);
    extern u8 *lbl_80367820;
    extern u8 *lbl_8031DEC0[];
    extern u8 lbl_8031FEC0[];
    extern void (*lbl_80367824)(void);
    extern s32 (*lbl_80367828)(u8 *,u8 *);
    extern u8 lbl_8026EC50[];
    u8 list[256];
    u8 *dst, *entry, *cur, *saved;
    u8 **table, **slot, **walk;
    u32 i, n;
    s32 j, moved, size, result;
    void (*callback)(s32, void *);
    u32 count;
    count = 0;
    memset(list, 0, 256);
    {
    u8 *dst;
    u8 *entry;
    u32 i;
    dst = list;
    entry = lbl_80367820;
    for (i = 0; i < 256; i++) {
        if (*(u16 *)(entry + 0x90) & 0x8000) {
            *dst = i;
            count++;
            dst++;
        }
        entry += 0x98;
    }
    }
    lbl_80367828 = fn_800B4FF8;
    {
    u32 i, n;
    u8 *dst, *cur, *saved;
    u8 **slot, **walk, **table;
    table = lbl_8031DEC0;
    n = count;
    saved = lbl_8031FEC0;
    if (count > 1) {
        walk = table;
        cur = list;
        for (i = count; (s32)i > 0; i--) {
            *walk++ = cur++;
        }
        fn_800B50FC(table, n);
        walk = table;
        cur = list;
        i = 0;
        while (i++ < n) {
            if (*walk != 0) {
                slot = walk;
                if (*walk != cur) {
                dst = cur;
                memcpy(saved, cur, 1);
                do {
                    memcpy(dst, *slot, 1);
                    dst = *slot;
                    *slot = 0;
                    slot = table + (dst - list);
                } while (*slot != cur);
                memcpy(dst, saved, 1);
                *slot = 0;
                }
            }
            cur++;
            walk++;
        }
    }
    }
    cur = list;
    for (j = 0; j < (s32)count; j++, cur++) {
        moved = 0;
        entry = lbl_80367820 + *cur * 0x98;
        if (!(*(u16 *)(entry + 0x90) & 0x80) && (*(u16 *)(entry + 0x90) & 1)) {
            size = *(s32 *)(entry + 0x80);
            if (*(u16 *)(entry + 0x92) != 0 && size > 0x40000) size = 0x40000;
            result = fn_8020CC28(entry + 0x40, *(s32 *)(entry + 0x7C), size, *(s32 *)(entry + 0x84) + *(s32 *)(entry + 0x88), 2);
            if (result == -3) {
                *(u16 *)(entry + 0x90) &= ~1;
                *(u16 *)(entry + 0x90) |= 2;
                callback = *(void (**)(s32,void *))(entry + 0x8C);
                if (callback) callback(result, entry + 0x40);
            } else if (result < 0) {
                OSReport(lbl_8026EC50, entry);
                *(u16 *)(entry + 0x90) |= 0x20;
                *(u16 *)(entry + 0x90) |= 0x80;
            } else {
                *(s32 *)(entry + 0x80) -= size;
                *(s32 *)(entry + 0x88) += size;
                *(s32 *)(entry + 0x7C) += size;
                if (*(s32 *)(entry + 0x80) == 0) {
                    *(u16 *)(entry + 0x90) &= ~1;
                    *(u16 *)(entry + 0x90) |= 2;
                    callback = *(void (**)(s32,void *))(entry + 0x8C);
                    if (callback) callback(result, entry + 0x40);
                }
                moved = 1;
            }
        }
        if (*(u16 *)(entry + 0x90) & 8) {
            if (fn_8020C79C(entry + 0x40) == 0) OSReport(lbl_8026EC50 + 0x1E, entry);
            memset(entry, 0, 0x98);
        }
        if (moved != 0) break;
    }
    if (lbl_80367824) lbl_80367824();
}
#pragma global_optimizer reset
extern u8 *lbl_80367820;
s32 fn_800B4FF8(u8 *arg0, u8 *arg1) {
    u8 *temp_r4;
    u8 temp_r3;
    u8 temp_r0_2;

    temp_r4 = lbl_80367820 + 0x92;
    temp_r3 = *(u16*)(temp_r4 + (*arg0 * 0x98));
    temp_r0_2 = *(u16*)(temp_r4 + (*arg1 * 0x98));
    if (temp_r3 > temp_r0_2) {
        return 1;
    }
    if (temp_r3 < temp_r0_2) {
        return -1;
    }
    return 0;
}

void fn_800B503C(void) {
    void *fn_800C4638(s32, void *, s32);
    void *memset(void *, s32, u32);
    s32 fn_8020A558(void *, void *, s32, void *, s32, s32, s32);
    void fn_8020A9E0(void *);
    void OSReport(char *, ...);
    void fn_800B50E4(void);
    extern u8 lbl_8026EC50[];
    extern u8 *lbl_80367820;
    extern u8 lbl_80319EC0[];
    extern u8 lbl_80319BA8[];
    void *ptr;

    ptr = fn_800C4638(0x9800, lbl_8026EC50 + 0x3A, 0);
    lbl_80367820 = ptr;
    memset(ptr, 0, 0x9800);
    if (fn_8020A558(lbl_80319BA8, fn_800B50E4, 0, lbl_80319EC0 + 0x4000, 0x4000, 0x10, 1) == 0) {
        OSReport((char *)(lbl_8026EC50 + 0x3B));
        for (;;) {
        }
    }
    fn_8020A9E0(lbl_80319BA8);
}

void fn_800B50E4(void) {
    M2C_UNK fn_800B4C20();
    M2C_UNK OS_YieldThread();
loop_1:
    fn_800B4C20();
    OS_YieldThread();
    goto loop_1;
}

#pragma use_lmw_stmw on
void fn_800B50FC(u8 **arg0, u32 arg1) {
    extern s32 (*lbl_80367828)(u8 *, u8 *);
    extern u8 **lbl_8036782C;
    extern u8 **lbl_80367830;
    extern u8 **lbl_80367834;
    extern u8 **lbl_80367838;
    extern u8 *lbl_8036783C;

    u8 **last;
    u8 **mid;
    u8 **left;
    u8 **right;
    u8 **pivot;
    s32 cmp;
    u32 bit;
    s32 shift;
    s32 pos;
    u32 mask;
    u32 stride;
    u32 half;
    s32 step;
    u32 left_n;
    u8 **base;
    u32 n;

    base = arg0;
    n = arg1;

loop:
    last = base + (n - 1);
    lbl_80367838 = last;
    if (n == 2) {
        if (lbl_80367828(*base, *last) > 0) {
            lbl_8036783C = *base;
            *base = *lbl_80367838;
            *lbl_80367838 = lbl_8036783C;
        }
    } else if (n == 4) {
        lbl_8036782C = base;
        mid = last;
        lbl_80367834 = last;
        lbl_80367830 = last - 1;
        goto partition;
    } else if (n < 0x28U) {
        mid = base + (n >> 1);
        if (lbl_80367828(*base, *last) > 0) {
            if (lbl_80367828(*base, *mid) < 0) {
                lbl_8036783C = *lbl_80367838;
                *lbl_80367838 = *mid;
                *mid = *base;
                *base = lbl_8036783C;
            } else if (lbl_80367828(*mid, *lbl_80367838) < 0) {
                lbl_8036783C = *base;
                *base = *mid;
                *mid = *lbl_80367838;
                *lbl_80367838 = lbl_8036783C;
            } else {
                lbl_8036783C = *base;
                *base = *lbl_80367838;
                *lbl_80367838 = lbl_8036783C;
            }
        } else if (lbl_80367828(*base, *mid) > 0) {
            lbl_8036783C = *base;
            *base = *mid;
            *mid = lbl_8036783C;
        } else if (lbl_80367828(*mid, *lbl_80367838) > 0) {
            lbl_8036783C = *mid;
            *mid = *lbl_80367838;
            *lbl_80367838 = lbl_8036783C;
        }
        if (n != 3) {
            lbl_8036782C = base + 1;
            lbl_80367834 = lbl_80367838;
            lbl_80367830 = lbl_80367838 - 1;
            goto partition;
        }
    } else {
        shift = 0x20;
        mask = 0xFFFFFFFFU;
        pos = 0x3F;
        while (mask != 0) {
            step = shift >> 1;
            bit = mask & n;
            half = 1;
            if (step != 0) {
                half = (u32)step;
            }
            mask &= mask << half;
            if (bit != 0) {
                pos -= shift;
            }
            if (bit == 0) {
                mask >>= shift;
            }
            shift = step;
        }
        {
            s32 c = pos > 0x20U ? 0 : 0x20 - pos;
            if (c & 1) {
                half = 1U << (c >> 1);
            } else {
                half = n >> (c >> 1);
            }
            stride = n / half;
            left = base;
            mid = base + ((s32)half / 2) * stride;
            lbl_80367838 = base + (half - 1) * stride;
            step = (s32)(stride * 4);
        }
        for (;;) {
            lbl_8036782C = left;
            lbl_80367834 = lbl_80367838;
            lbl_80367830 = lbl_80367838;
            pivot = left + stride * (((lbl_80367838 - left) / 2) / stride);
sample_right:
while (lbl_80367830 >= lbl_8036782C) {
    cmp = lbl_80367828(*lbl_80367830, *pivot);
    if (cmp > 0) lbl_80367834 = lbl_80367830;
    else if (cmp < 0) goto sample_left;
    lbl_80367830 -= stride;
}
goto sample_done;
sample_left:
while (lbl_8036782C < lbl_80367830) {
    cmp = lbl_80367828(*lbl_8036782C, *pivot);
    if (cmp >= 0) {
        lbl_8036783C = *lbl_8036782C;
        *lbl_8036782C = *lbl_80367830;
        *lbl_80367830 = lbl_8036783C;
        if (cmp > 0) lbl_80367834 = lbl_80367830;
        if (((u32)(-cmp & ~cmp) >> 31) == 0) pivot = lbl_80367830;
        lbl_8036782C += stride;
        lbl_80367830 -= stride;
        goto sample_right;
    }
    lbl_8036782C += stride;
}
sample_done:
            if (lbl_80367834 < pivot) {
                lbl_8036783C = *lbl_80367834;
                *lbl_80367834 = *pivot;
                *pivot = lbl_8036783C;
                lbl_80367834 += stride;
            }
            if (lbl_80367834 <= mid) {
                left = lbl_80367834;
            } else if (lbl_80367830 >= mid) {
                lbl_80367838 = lbl_80367830;
            } else {
                break;
            }
            if (left >= lbl_80367838) {
                break;
            }
        }
        lbl_8036782C = base;
        lbl_80367838 = last;
        lbl_80367834 = last;
        lbl_80367830 = last;
partition:
partition_right:
while (lbl_80367830 >= lbl_8036782C) {
    cmp = lbl_80367828(*lbl_80367830, *mid);
    if (cmp > 0) lbl_80367834 = lbl_80367830;
    else if (cmp < 0) goto partition_left;
    lbl_80367830 -= 1;
}
goto partition_done;
partition_left:
while (lbl_8036782C < lbl_80367830) {
    cmp = lbl_80367828(*lbl_8036782C, *mid);
    if (cmp >= 0) {
        lbl_8036783C = *lbl_8036782C;
        *lbl_8036782C = *lbl_80367830;
        *lbl_80367830 = lbl_8036783C;
        if (cmp > 0) lbl_80367834 = lbl_80367830;
        if (((u32)(-cmp & ~cmp) >> 31) == 0) mid = lbl_80367830;
        lbl_8036782C += 1;
        lbl_80367830 -= 1;
        goto partition_right;
    }
    lbl_8036782C += 1;
}
partition_done:
        if (lbl_80367834 < mid) {
            lbl_8036783C = *lbl_80367834;
            *lbl_80367834++ = *mid;
            *mid = lbl_8036783C;
        }
        {
            u8 **p34;
            u8 **p30;
            p30 = lbl_80367830;
            p34 = lbl_80367834;
            if ((s32)(p30 - base) < (s32)(lbl_80367838 - p34)) {
                lbl_80367830 = base;
                base = p34;
                lbl_8036782C = p30;
            } else {
                lbl_8036782C = lbl_80367838;
                lbl_80367838 = p30;
                lbl_80367830 = p34;
            }
        }
        n = (u32)(lbl_80367838 - base) + 1;
        if (lbl_8036782C > lbl_80367830) {
            fn_800B50FC(lbl_80367830, (u32)(lbl_8036782C - lbl_80367830) + 1);
        }
        if (n > 1U) {
            goto loop;
        }
    }
}

void fn_800B5708(void) {
    void Script_RegisterCommand(void *, void *, s32);
    void Script_RegisterWinCondCommands(void);
    extern u8 lbl_8026ECB8[];
    void fn_800BAD9C(void);
    void fn_800BAE4C(void);
    void fn_800BAB64(void);
    void fn_800BACCC(void);
    void fn_800BABFC(void);
    void fn_800BAAD4(void);
    void fn_800BA9BC(void);
    void fn_800BA8F8(void);
    void fn_800BA784(void);
    void fn_800BA75C(void);
    void fn_800BA638(void);
    void ScriptCmd_GiveItem(void);
    void fn_800BB0B4(void);
    void fn_800BB080(void);
    void fn_800BB04C(void);
    void fn_800BB018(void);
    void fn_800BAFE4(void);
    void fn_800BAEAC(void);
    void fn_800BAF1C(void);
    void fn_800BAEF8(void);
    void fn_800BAF80(void);
    void fn_800BA5AC(void);
    void fn_800BA528(void);
    void fn_800BA4A8(void);
    void ScriptCmd_SetPos(void);
    void fn_800B9B58(void);
    void fn_800B9A9C(void);
    void fn_800B9A34(void);
    void fn_800B9C14(void);
    void fn_800B9C38(void);
    void fn_800B99B8(void);
    void fn_800B98B8(void);
    void fn_800B983C(void);
    void fn_800B97B8(void);
    void fn_800B9724(void);
    void ScriptCmd_PlayEffect(void);
    void fn_800B95B4(void);
    void fn_800B9548(void);
    void fn_800B94CC(void);
    void fn_800B9450(void);
    void fn_800B93D4(void);
    void fn_800B9368(void);
    void fn_800B92EC(void);
    void fn_800B9258(void);
    void fn_800B91AC(void);
    void fn_800B9130(void);
    void fn_800B90C4(void);
    void fn_800BA438(void);
    void fn_800BA38C(void);
    void ScriptCmd_SoundSetParam(void);
    void fn_80108FA8(void);
    void fn_800BA230(void);
    void fn_8005BB2C(void);
    void fn_800B6E8C(void);
    void fn_800B9060(void);
    void fn_800B8FFC(void);
    void fn_8006F014(void);
    void fn_8006F00C(void);
    void fn_800B8E5C(void);
    void fn_800B8DE4(void);
    void fn_800B8D54(void);
    void fn_800B8D34(void);
    void fn_800B8F98(void);
    void ScriptCmd_ShowMsg(void);
    void fn_800B8EBC(void);
    void fn_800B8CB0(void);
    void fn_800B8C34(void);
    void fn_800B8BA8(void);
    void fn_800B8B24(void);
    void fn_800B8AFC(void);
    void fn_800B8AD8(void);
    void fn_800B8A5C(void);
    void fn_800B8A28(void);
    void fn_800B8A04(void);
    void fn_800B8974(void);
    void fn_800B88E8(void);
    void fn_800B88C4(void);
    void fn_800B8894(void);
    void fn_800B8864(void);
    void fn_800B8840(void);
    void fn_800B87B4(void);
    void fn_800B8790(void);
    void fn_800B874C(void);
    void fn_800B870C(void);
    void fn_800B861C(void);
    void fn_800B85EC(void);
    void fn_800B8534(void);
    void fn_800B850C(void);
    void ScriptCmd_Battle(void);
    void fn_800B8070(void);
    void fn_800B7FD8(void);
    void fn_800B7F98(void);
    void fn_800B7EF8(void);
    void fn_800B7E60(void);
    void fn_800B7DB4(void);
    void fn_800B7D08(void);
    void fn_800B7C4C(void);
    void fn_800B7C28(void);
    void fn_800B7C04(void);
    void fn_800B7A80(void);
    void fn_800B7A2C(void);
    void fn_800B7A08(void);
    void fn_800B79E4(void);
    void fn_800B79B4(void);
    void fn_800B7990(void);
    void fn_800B796C(void);
    void fn_800B7948(void);
    void fn_800B7828(void);
    void fn_800B7790(void);
    void fn_800B83A4(void);
    void fn_800B8340(void);
    void fn_800B82D8(void);
    void fn_800B8298(void);
    void fn_800B8250(void);
    void fn_800B7938(void);
    void fn_800B790C(void);
    void fn_800B78F0(void);
    void fn_800B78D4(void);
    void fn_800B81C0(void);
    void fn_800B8198(void);
    void fn_800B812C(void);
    void fn_800B8174(void);
    void fn_800B8150(void);
    void fn_800B8108(void);
    void fn_800B76D0(void);
    void fn_800B7658(void);
    void fn_80089524(void);
    void fn_800894F8(void);
    void ScriptCmd_SaveUnitsClear(void);
    void ScriptCmd_SaveUnits(void);
    void fn_800B7410(void);
    void fn_800B7378(void);
    void fn_800B7210(void);
    void fn_80110094(void);
    void fn_80110048(void);
    void fn_800B72CC(void);
    void fn_800B727C(void);
    void fn_800C4384(void);
    void fn_800C0AF4(void);
    void fn_800C0AE0(void);
    void fn_800C0ACC(void);
    void fn_800B7200(void);
    void fn_800B719C(void);
    void fn_800B7140(void);
    void fn_800B70EC(void);
    void fn_800B7098(void);
    void fn_800B7044(void);
    void fn_800B6DF0(void);
    void fn_800B6DB8(void);
    void fn_800B6D88(void);
    void fn_800B6D50(void);
    void fn_800B6D20(void);
    void fn_800B6FE4(void);
    void fn_800B6CD8(void);
    void fn_800B6C6C(void);
    void fn_800B6C00(void);
    void fn_800B6B94(void);
    void fn_800B6B20(void);
    void fn_800B6AE4(void);
    void fn_800B6AA8(void);
    void fn_80016538(void);
    void fn_800B7250(void);
    void fn_80023DC0(void);
    void fn_8014C6E0(void);
    void fn_8014C6B8(void);
    void fn_800B6F10(void);
    void Card_GetResult(void);
    void ScriptCmd_BMapSuspend(void);
    void ScriptCmd_BMapResume(void);
    void fn_801E4540(void);
    void fn_800B6E00(void);
    void fn_800B6A70(void);
    void fn_800B6A38(void);
    void fn_800B6A30(void);

    Script_RegisterCommand(lbl_8026ECB8 + 0x1A3, fn_800BAD9C, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x1A9, fn_800BAE4C, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x1B6, fn_800BAB64, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x1C0, fn_800BACCC, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x1CA, fn_800BABFC, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x1D8, fn_800BAAD4, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x1EA, fn_800BA9BC, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x1F9, fn_800BA8F8, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x204, fn_800BA784, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x212, fn_800BA75C, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x21D, fn_800BA638, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x22A, ScriptCmd_GiveItem, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x22E, fn_800BB0B4, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x235, fn_800BB080, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x23C, fn_800BB04C, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x240, fn_800BB018, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x244, fn_800BAFE4, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x248, fn_800BAEAC, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x252, fn_800BAF1C, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x25C, fn_800BAEF8, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x267, fn_800BAF80, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x277, fn_800BA5AC, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x281, fn_800BA528, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x28B, fn_800BA4A8, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x294, ScriptCmd_SetPos, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x29F, fn_800B9B58, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x2AA, fn_800B9A9C, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x2B6, fn_800B9A34, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x2C8, fn_800B9C14, 5);
    Script_RegisterCommand(lbl_8026ECB8 + 0x2D7, fn_800B9C38, 6);
    Script_RegisterCommand(lbl_8026ECB8 + 0x2E0, fn_800B99B8, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x2F0, fn_800B98B8, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x300, fn_800B983C, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x30D, fn_800B97B8, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x31E, fn_800B9724, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x32F, ScriptCmd_PlayEffect, 6);
    Script_RegisterCommand(lbl_8026ECB8 + 0x33B, fn_800B95B4, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x348, fn_800B9548, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x358, fn_800B94CC, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x365, fn_800B9450, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x37B, fn_800B93D4, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x389, fn_800B9368, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x39A, fn_800B92EC, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x3AE, fn_800B9258, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x3C3, fn_800B91AC, 5);
    Script_RegisterCommand(lbl_8026ECB8 + 0x3D2, fn_800B9130, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x3E2, fn_800B90C4, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x3F5, fn_800BA438, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x3FD, fn_800BA38C, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x405, ScriptCmd_SoundSetParam, 6);
    Script_RegisterCommand(lbl_8026ECB8 + 0x412, fn_80108FA8, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x41E, fn_800BA230, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x431, fn_8005BB2C, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x439, fn_800B6E8C, 5);
    Script_RegisterCommand(lbl_8026ECB8 + 0x447, fn_800B9060, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x454, fn_800B8FFC, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x45B, fn_8006F014, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x468, fn_8006F00C, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x479, fn_800B8E5C, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x486, fn_800B8DE4, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x493, fn_800B8D54, 4);
    Script_RegisterCommand(lbl_8026ECB8 + 0x4A0, fn_800B8D34, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x4AD, fn_800B8F98, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x4BC, ScriptCmd_ShowMsg, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x4BF, fn_800B8EBC, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x4C3, fn_800B8CB0, 6);
    Script_RegisterCommand(lbl_8026ECB8 + 0x4CD, fn_800B8C34, 5);
    Script_RegisterCommand(lbl_8026ECB8 + 0x4DB, fn_800B8BA8, 7);
    Script_RegisterCommand(lbl_8026ECB8 + 0x4E9, fn_800B8B24, 6);
    Script_RegisterCommand(lbl_8026ECB8 + 0x4FB, fn_800B8AFC, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x50C, fn_800B8AD8, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x520, fn_800B8A5C, 5);
    Script_RegisterCommand(lbl_8026ECB8 + 0x52C, fn_800B8A28, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x531, fn_800B8A04, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x53A, fn_800B8974, 5);
    Script_RegisterCommand(lbl_8026ECB8 + 0x540, fn_800B88E8, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x54A, fn_800B88C4, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x552, fn_800B8894, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x55A, fn_800B8864, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x561, fn_800B8840, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x569, fn_800B87B4, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x572, fn_800B8790, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x579, fn_800B874C, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x582, fn_800B870C, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x58D, fn_800B861C, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x598, fn_800B85EC, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x5A5, fn_800B8534, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x5B0, fn_800B850C, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x5BA, ScriptCmd_Battle, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x5C7, fn_800B8070, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x5CF, fn_800B7FD8, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x5DA, fn_800B7F98, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x5E4, fn_800B7EF8, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x5EC, fn_800B7E60, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x5F6, fn_800B7DB4, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x601, fn_800B7D08, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x609, fn_800B7C4C, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x611, fn_800B7C28, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x61C, fn_800B7C04, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x628, fn_800B7A80, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x632, fn_800B7A2C, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x63A, fn_800B7A08, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x645, fn_800B79E4, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x651, fn_800B79B4, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x65D, fn_800B7990, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x66A, fn_800B796C, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x675, fn_800B7948, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x681, fn_800B7828, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x687, fn_800B7790, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x68D, fn_800B83A4, 6);
    Script_RegisterCommand(lbl_8026ECB8 + 0x693, fn_800B8340, 3);
    Script_RegisterCommand(lbl_8026ECB8 + 0x69E, fn_800B82D8, 4);
    Script_RegisterCommand(lbl_8026ECB8 + 0x6A9, fn_800B8298, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x6B0, fn_800B8250, 4);
    Script_RegisterCommand(lbl_8026ECB8 + 0x6B8, fn_800B7938, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x6C0, fn_800B790C, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x6C7, fn_800B78F0, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x6CC, fn_800B78D4, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x6D3, fn_800B81C0, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x6E4, fn_800B8198, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x6F2, fn_800B812C, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x700, fn_800B8174, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x712, fn_800B8150, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x723, fn_800B8108, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x733, fn_800B76D0, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x73D, fn_800B7658, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x74E, fn_80089524, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x75F, fn_800894F8, 0);
    Script_RegisterWinCondCommands();
    Script_RegisterCommand(lbl_8026ECB8 + 0x76E, ScriptCmd_SaveUnitsClear, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x778, ScriptCmd_SaveUnits, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x78F, fn_800B7410, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x798, fn_800B7378, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x7AB, fn_800B7210, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x7BB, fn_80110094, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x7C4, fn_80110048, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x7CE, fn_800B72CC, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x7D6, fn_800B727C, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x7DD, fn_800C4384, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x7E7, fn_800C0AF4, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x7F0, fn_800C0AE0, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x7FC, fn_800C0ACC, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x807, fn_800B7200, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x80D, fn_800B719C, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x81D, fn_800B7140, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x822, fn_800B70EC, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x838, fn_800B7098, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x84B, fn_800B7044, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x85E, fn_800B6DF0, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x86E, fn_800B6DB8, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x87C, fn_800B6D88, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x88C, fn_800B6D50, 2);
    Script_RegisterCommand(lbl_8026ECB8 + 0x89A, fn_800B6D20, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x8AA, fn_800B6FE4, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x8BA, fn_800B6CD8, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x8C1, fn_800B6C6C, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x8CB, fn_800B6C00, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x8D5, fn_800B6B94, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x193, fn_800B6B20, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x8E9, fn_800B6AE4, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x8F4, fn_800B6AA8, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x8FF, fn_80016538, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x904, fn_800B7250, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x913, fn_80023DC0, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x91D, fn_8014C6E0, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x922, fn_8014C6B8, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x927, fn_800B6F10, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x92D, Card_GetResult, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x936, ScriptCmd_BMapSuspend, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x943, ScriptCmd_BMapResume, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x94F, fn_801E4540, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x95E, fn_800B6E00, 1);
    Script_RegisterCommand(lbl_8026ECB8 + 0x969, fn_800B6A70, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x975, fn_800B6A38, 0);
    Script_RegisterCommand(lbl_8026ECB8 + 0x97F, fn_800B6A30, 0);
}

#pragma use_lmw_stmw reset

s32 fn_800B6A30(void) {
    return 0;
}

s32 fn_800B6A38(void) {
    void Pad_ClearDisableMask(s32, s32);
    extern s32 gPadInput;
    extern s32 gUiInputFlags;

    Pad_ClearDisableMask(gPadInput, 0x1F70);
    gUiInputFlags &= ~0x2000;
    return 1;
}

s32 fn_800B6A70(void) {
    void Pad_SetDisableMask(s32, s32);
    extern s32 gPadInput;
    extern s32 gUiInputFlags;

    Pad_SetDisableMask(gPadInput, 0x1F70);
    gUiInputFlags |= 0x2000;
    return 1;
}

s32 fn_800B6AA8(s32 arg0) {
    extern f32 lbl_80369CF4;
    return (s32) (lbl_80369CF4 * (f32) arg0);
}

s32 fn_800B6AE4(s32 arg0)
{
    extern f32 lbl_80369CF4;
    return (s32)((f32)arg0 / lbl_80369CF4);
}

s32 fn_800B6B20(void)
{
    s32 fn_800C0658(void);
    void Process_CreateChild(u16 *, s32);
    void fn_80013864(void);
    extern u16 lbl_8028D298[];

    Process_CreateChild(lbl_8028D298, fn_800C0658());
    fn_80013864();
    return 1;
}

void fn_800B6B58(s32 arg0) {
    extern void *gPadInput;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(gPadInput, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(gPadInput, s32 *, 8) ^ temp_r5) & 0x1F70) {
        Process_ClearFunc(arg0);
    }
}

extern s32 lbl_8036B3A4;
extern s32 lbl_8036B3A4;
s32 fn_800B6B94(s32 arg0) {
    M2C_UNK fn_801F89AC(s32, s32);
    extern f32 lbl_80369CF4;

    fn_801F89AC((f32) arg0 / lbl_80369CF4, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B6C00(s32 arg0) {
    M2C_UNK fn_801F9D1C(s32, s32);
    extern f32 lbl_80369CF4;

    fn_801F9D1C((f32) arg0 / lbl_80369CF4, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B6C6C(s32 arg0) {
    M2C_UNK fn_801FA4B8(s32, s32);
    extern f32 lbl_80369CF4;

    fn_801FA4B8((f32) arg0 / lbl_80369CF4, fn_800C0658());
    fn_80013864();
    return 1;
}

extern u8 Proc_CpPhaseMain[];
s32 fn_800B6CD8(u32 arg0) {
    void OSReport(void *, ...);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    OSReport((void *)arg0);
    return 1;
}

s32 fn_800B6D20(s32 arg0) {
    M2C_UNK fn_8014CC5C(void *, s32);
    extern u8 gBattleState[];

    fn_8014CC5C(gBattleState, arg0);
    return 1;
}

s32 fn_800B6D50(s32 arg0, s32 arg1) {
    M2C_UNK fn_8014CF10(void *, s8, s8);
    extern u8 gBattleState[];

    fn_8014CF10(gBattleState, arg0, arg1);
    return 1;
}

s32 fn_800B6D88(s32 arg0) {
    M2C_UNK fn_8014CF48(void *, s32);
    extern u8 gBattleState[];

    fn_8014CF48(gBattleState, arg0);
    return 1;
}

s32 fn_800B6DB8(s32 arg0, s32 arg1) {
    M2C_UNK fn_8014D204(void *, s8, s8);
    extern u8 gBattleState[];

    fn_8014D204(gBattleState, arg0, arg1);
    return 1;
}

u8 fn_800B6DF0(void) {
    extern u16 gBattleState[];
    return *(u8 *)((u8 *)gBattleState + 0x56);
}

s32 fn_800B6E00(s32 arg0) {
 void BMapMain_Goto(s32); void GfxEnt_UnlinkByName(void *); void Process_UnlinkByKey(void *);
 extern u8 gBattleState[]; extern u8 lbl_8026ECB8[];
 u8 var=0;
 switch(arg0) {case 1: var=5; break; case 2: var=6; break; case 3: var=7; break;}
 gBattleState[0x54]=var;
 BMapMain_Goto(2);
 GfxEnt_UnlinkByName(lbl_8026ECB8+0x98b);
 Process_UnlinkByKey(Proc_CpPhaseMain);
 return 1;
}

s32 fn_800B6E8C(s32 mode, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 Math_Ease(s32, f32, f32, f32, f32);
    return (s32)Math_Ease(mode, (f32)arg1, (f32)arg2, (f32)arg3, (f32)arg4);
}

s32 fn_800B6F10(void)
{
    s32 fn_800C0658(void);
    void Process_CreateChild(u16 *, s32);
    void fn_80013864(void);
    extern u16 lbl_8028D26C[];

    Process_CreateChild(lbl_8028D26C, fn_800C0658());
    fn_80013864();
    return 1;
}

void fn_800B6F48(void) {
    M2C_UNK SaveData_Release(M2C_UNK *);
    extern M2C_UNK gSaveDataBase;
    SaveData_Release(&gSaveDataBase);
}

void fn_800B6F6C(void *arg0) {
    s32 Card_GetResult(void);
    void Process_ClearFunc(void *);
    void fn_801E047C(void *, void *);
    extern s32 gSaveDataBase;

    if (Card_GetResult() < 0) {
        Process_ClearFunc(arg0);
    } else {
        fn_801E047C(&gSaveDataBase, arg0);
    }
}

void fn_800B6FB8(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK gSaveDataBase;
    fn_801E3118(&gSaveDataBase, arg0, 1);
}

s32 fn_800B6FE4(u32 arg0) {
    M2C_UNK fn_80013864();
    M2C_UNK BMapAuxiliary_Create(u32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    BMapAuxiliary_Create(arg0, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B7044(s32 arg0)
{
    void fn_8004EA60(void *, s32);
    extern u8 gUnitLists[];

    u8 *entry;
    u8 *next;

    entry = *(u8 **)(gUnitLists + arg0 * 0xC);

    while (entry != 0) {
        next = *(u8 **)(entry + 0x184);

        fn_8004EA60(entry, 0);

        entry = next;
    }

    return 1;
}

s32 fn_800B7098(s32 arg0)
{
    void fn_8004EB14(void *, s32);
    extern u8 gUnitLists[];

    u8 *entry;
    u8 *next;

    entry = *(u8 **)(gUnitLists + arg0 * 0xC);

    while (entry != 0) {
        next = *(u8 **)(entry + 0x184);

        fn_8004EB14(entry, 0);

        entry = next;
    }

    return 1;
}

s32 fn_800B70EC(s32 arg0)
{
    void fn_8004F5EC(void *, s32);
    extern u8 gUnitLists[];

    u8 *entry;
    u8 *next;

    entry = *(u8 **)(gUnitLists + arg0 * 0xC);

    while (entry != 0) {
        next = *(u8 **)(entry + 0x184);

        fn_8004F5EC(entry, 0);

        entry = next;
    }

    return 1;
}

s32 fn_800B7140(u32 arg0) {
    void fn_801070FC(u32);
    void fn_80107294(u32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_80107294(arg0, 5);
    fn_801070FC(arg0);
    return 1;
}

u8 fn_800B719C(u8 arg0) {
    s32 fn_800F32A4(void);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    return (u8)fn_800F32A4();
}

u8 fn_800B7200(void) {
    extern u8 gTalkState[];
    return gTalkState[0xa];
}

s32 fn_800B7210(void)
{
    void fn_800162B8(void);
    void fn_801A7CDC(void *);
    void Unit_ResetAll(void);
    void Map_RefreshUnitMap(void *);
    extern u8 gBattle[];
    extern u8 gBattleMap[];

    fn_800162B8();
    fn_801A7CDC(gBattle);
    Unit_ResetAll();
    Map_RefreshUnitMap(gBattleMap);
    return 1;
}

s32 fn_800B7250(void) {
    M2C_UNK fn_800162B8();
    M2C_UNK fn_800163F8();
    fn_800162B8();
    fn_800163F8();
    fn_80016180();
    return 1;
}

s32 fn_800B727C(void) {
    void fn_800BDED8(void *);
    void fn_800162B8(void);
    void fn_801E3654(void *, s32);
    void fn_800C4588(s32);
    extern u8 gBattleState[];
    extern s32 gUnitSaveBuf;
    u8 sp[0x78];

    fn_800BDED8(gBattleState + 0xB4);
    fn_800162B8();
    fn_801E3654(sp, gUnitSaveBuf);
    fn_800C4588(gUnitSaveBuf);
    gUnitSaveBuf = 0;
    return 1;
}

s32 fn_800B72CC(void) {
    void fn_800162B8(void);
    void Unit_ResetAll(void);
    void Map_RefreshUnitMap(void *);
    void fn_800BDED8(void *);
    void fn_800C32A4(void *);
    void fn_800C341C(void *);
    s32 fn_800C4638(s32, void *, s32);
    void fn_8010FF90(void *);
    void fn_801A7CDC(void *);
    void fn_801E38E0(void *, s32);
    extern u8 lbl_8026ECB8[];
    extern u8 gBattleMap[];
    extern u8 gConvoy[];
    extern u8 gIconSlots[];
    extern u8 gMapObjEventList[];
    extern u8 gBattleState[];
    extern u8 gBattle[];
    extern s32 gUnitSaveBuf;
    u8 sp[0x70];

    fn_801E38E0(sp, gUnitSaveBuf = fn_800C4638(0xA000, lbl_8026ECB8 + 0x996, 0));
    fn_800162B8();
    fn_801A7CDC(gBattle);
    Unit_ResetAll();
    Map_RefreshUnitMap(gBattleMap);
    fn_800BDED8(gBattleState + 0xB4);
    fn_8010FF90(gMapObjEventList);
    fn_800C341C(gConvoy);
    fn_800C32A4(gIconSlots);
    Map_RefreshUnitMap(gBattleMap);
    return 1;
}

s32 fn_800B7378(void) {
    M2C_UNK fn_80016628(void *);
    M2C_UNK fn_800C2930(void *, void *);
    M2C_UNK fn_8017A7D4(void *, s32);
    extern u8 gStreamBaseVtbl[];
    extern u8 lbl_802842B8[];
    extern u8 gIconSlots[];
    extern s32 gUnitSaveBuf;
    struct {
        s32 handle;
        u8 pad4[8];
        u8 owned;
        u8 padD[3];
        void *vtbl;
    } obj;

    fn_800162B8();
    fn_8017A7D4(&obj, gUnitSaveBuf);
    fn_80016628(&obj);
    fn_800C2930(gIconSlots, &obj);
    fn_800163F8();
    fn_80016180();
    fn_800C4588(gUnitSaveBuf);
    gUnitSaveBuf = 0;
    obj.vtbl = lbl_802842B8;
    obj.vtbl = gStreamBaseVtbl;
    if (obj.owned) {
        fn_800C4588(obj.handle);
        obj.handle = 0;
        obj.owned = 0;
    }
    return 1;
}

s32 fn_800B7410(void) {
    M2C_UNK fn_80016628(void *);
    M2C_UNK fn_800C2930(void *, void *);
    M2C_UNK fn_8017A7D4(void *, s32);
    M2C_UNK fn_80023DC0();
    extern u8 gStreamBaseVtbl[];
    extern u8 lbl_802842B8[];
    extern u8 gIconSlots[];
    extern s32 gUnitSaveBuf;
    struct {
        s32 handle;
        u8 pad4[8];
        u8 owned;
        u8 padD[3];
        void *vtbl;
    } obj;

    fn_800162B8();
    fn_8017A7D4(&obj, gUnitSaveBuf);
    fn_80016628(&obj);
    fn_800C2930(gIconSlots, &obj);
    fn_80023DC0();
    fn_800163F8();
    fn_80016180();
    fn_800C4588(gUnitSaveBuf);
    gUnitSaveBuf = 0;
    obj.vtbl = lbl_802842B8;
    obj.vtbl = gStreamBaseVtbl;
    if (obj.owned) {
        fn_800C4588(obj.handle);
        obj.handle = 0;
        obj.owned = 0;
    }
    return 1;
}

/* Serialize all units and icon slots into a new gUnitSaveBuf. */
s32 ScriptCmd_SaveUnits(void) {
    void Unit_WriteAll(void *);
    void Icon_WriteSlots(void *, void *);
    void *fn_800C4638(s32, void *, s32);
    void fn_800C4588(void *);
    extern u8 lbl_8026ECB8[];
    extern u8 gStreamBaseVtbl[];
    extern u8 gMemStreamVtbl[];
    extern u8 gIconSlots[];
    extern s32 gUnitSaveBuf;
    struct {
        void *start;
        void *cur;
        u32 size;
        u8 owned;
        u8 pad[3];
        void *vtbl;
    } w;
    u8 *pw;
    void *buf;

    buf = fn_800C4638(0xA000, lbl_8026ECB8 + 0x996, 0);
    pw = (u8 *)&w;
    *(void **)(pw + 16) = gStreamBaseVtbl;
    *(void **)(pw + 4) = NULL;
    *(void **)pw = NULL;
    *(u32 *)(pw + 8) = 0;
    pw[12] = 0;
    gUnitSaveBuf = (s32)buf;
    *(void **)(pw + 16) = gMemStreamVtbl;
    pw[12] = 0;
    *(void **)pw = buf;
    *(void **)(pw + 4) = buf;
    *(u32 *)(pw + 8) = 0x100000;
    Unit_WriteAll(pw);
    Icon_WriteSlots(gIconSlots, &w);
    w.vtbl = gMemStreamVtbl;
    w.vtbl = gStreamBaseVtbl;
    if (w.owned != 0) {
        fn_800C4588(w.start);
        w.start = NULL;
        w.owned = 0;
    }
    return 1;
}

s32 ScriptCmd_SaveUnitsClear(void) {
    /* Serialize all units and icon slots into gUnitSaveBuf, then reset the live unit tables. */
    void Unit_WriteAll(void *);
    void Unit_ResetAll(void);
    void Icon_WriteSlots(void *, void *);
    void *fn_800C4638(s32, void *, s32);
    void fn_800C4588(void *);
    extern u8 lbl_8026ECB8[];
    extern u8 gStreamBaseVtbl[];
    extern u8 gMemStreamVtbl[];
    extern u8 gIconSlots[];
    extern s32 gUnitSaveBuf;
    struct { void *start; void *cur; u32 size; u8 owned; u8 pad[3]; void *vtbl; } w;
    u8 *pw;
    void *p;

    p = fn_800C4638(0xA000, lbl_8026ECB8 + 0x996, 0);
    pw = (u8 *)&w;
    *(void **)(pw + 16) = gStreamBaseVtbl;
    *(void **)(pw + 4) = NULL;
    *(void **)pw = NULL;
    *(u32 *)(pw + 8) = 0;
    pw[12] = 0;
    gUnitSaveBuf = (s32)p;
    *(void **)(pw + 16) = gMemStreamVtbl;
    pw[12] = 0;
    *(void **)pw = p;
    *(void **)(pw + 4) = p;
    *(u32 *)(pw + 8) = 0x100000;
    Unit_WriteAll(pw);
    Icon_WriteSlots(gIconSlots, &w);
    Unit_ResetAll();
    w.vtbl = gMemStreamVtbl;
    w.vtbl = gStreamBaseVtbl;
    if (w.owned != 0) {
        fn_800C4588(w.start);
        w.start = NULL;
        w.owned = 0;
    }
    return 1;
}

s32 fn_800B7658(s32 arg0) {
    M2C_UNK fn_800A5D1C(void *, s32, s32);
    M2C_UNK fn_800A58F0(s32);
    M2C_UNK Process_CreateChild(void *, s32);
    extern u8 lbl_8026ECB8[];
    extern u8 lbl_8028D244[];
    extern s32 gUiInputFlags;

    if (gUiInputFlags & 1) {
        return 0;
    }
    fn_800A5D1C(lbl_8026ECB8 + 0x997, 0, 1);
    fn_800A58F0(arg0);
    Process_CreateChild(lbl_8028D244, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B76D0(u32 arg0) {
    M2C_UNK fn_800A5D1C(u32, s32, s32);
    M2C_UNK Process_CreateChild(void *, s32);
    extern u8 lbl_8028D244[];
    extern s32 gUiInputFlags;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    fn_800A5D1C(arg0, 0, 1);
    Process_CreateChild(lbl_8028D244, fn_800C0658());
    fn_80013864();
    return 1;
}

void fn_800B7748(s32 arg0) {
    u8 fn_800A5C88(void);
    extern s32 gUiInputFlags;

    if (fn_800A5C88() == 0 || (gUiInputFlags & 1)) {
        Process_ClearFunc(arg0);
    }
}

s32 fn_800B7790(s32 arg0) {
    M2C_UNK Process_CreateChild(void *, s32);
    extern u8 lbl_8028D22C[];
    extern s32 gUiInputFlags;
    extern f32 lbl_80369CF4;
    void *obj;
    s32 count;

    fn_80013864();
    if (gUiInputFlags & 1) {
        return 0;
    }
    count = (f32) arg0 / lbl_80369CF4;
    if (count > 1) {
        obj = (void *) Process_CreateChild(lbl_8028D22C, fn_800C0658());
        M2C_FIELD(obj, s32 *, 0x60) = count - 1;
    }
    return 1;
}

s32 fn_800B7828(s32 arg0) {
    M2C_UNK Process_CreateChild(void *, s32);
    extern u8 lbl_8028D22C[];
    extern s32 gUiInputFlags;
    void *obj;

    fn_80013864();
    if (gUiInputFlags & 1) {
        return 0;
    }
    if (arg0 > 1) {
        obj = (void *) Process_CreateChild(lbl_8028D22C, fn_800C0658());
        M2C_FIELD(obj, s32 *, 0x60) = arg0 - 1;
    }
    return 1;
}

void fn_800B7890(void *arg0) {
    extern s32 gUiInputFlags;

    M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(arg0, s32 *, 0x60) - 1;
    if (M2C_FIELD(arg0, s32 *, 0x60) < 0 || (gUiInputFlags & 1)) {
        Process_ClearFunc(arg0);
    }
}

u8 fn_800B78D4(void) {
    extern u8 gBattleState[];
    return gBattleState[0xA6] == 2;
}

u8 fn_800B78F0(void) {
    extern u8 gBattleState[];
    return gBattleState[0xA6] == 1;
}

u8 fn_800B790C(void) {
    extern u8 gBattleState[];
    s32 state;

    state = gBattleState[0xA6];
    return state == 0 || state == 3;
}

u8 fn_800B7938(void) {
    extern u8 gBattleState[];
    return gBattleState[0xA6];
}

s32 fn_800B7948(void) {
    M2C_UNK fn_801453F0();
    fn_801453F0();
    return 1;
}

s32 fn_800B796C(void) {
    M2C_UNK fn_80145488();
    fn_80145488();
    return 1;
}

s32 fn_800B7990(void) {
    M2C_UNK fn_80145520();
    fn_80145520();
    return 1;
}

s32 fn_800B79B4(s32 arg0) {
    M2C_UNK BgmVol_FadeOut(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    BgmVol_FadeOut(var_r3);
    return 1;
}

s32 fn_800B79E4(void) {
    M2C_UNK fn_80145684();
    fn_80145684();
    return 1;
}

s32 fn_800B7A08(void) {
    M2C_UNK fn_8014571C();
    fn_8014571C();
    return 1;
}

s32 fn_800B7A2C(u32 arg0) {
    M2C_UNK Ui_PlaySeCue(u32, s32);
    extern s32 gUiInputFlags;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (!(gUiInputFlags & 3)) {
        Ui_PlaySeCue(arg0, 100);
    }
    return 1;
}

#pragma cplusplus on
extern "C" s32 fn_800B7A80(void) {
    #pragma global_optimizer off
    #pragma opt_common_subs off
    struct Obj {
        u8 pad[8];
        virtual u8 v0() = 0;
        u8 flag;
        u8 pad2[0x23];
    };
    extern Obj gFxChannels;
    void fn_801457B4(void);
    void Fx_FadeIn(void *, s32);
    void fn_80146AF0(void);
    void fn_8014876C(void *, s32, s32);
    void fn_80148980(void *, s32);

    Obj *obj;
    u8 ok;

    fn_801457B4();

    ok = 0;
    obj = &gFxChannels;
    if (obj->flag & 1) {
        if (obj->v0()) {
            ok = 1;
        }
    }
    if (ok) {
        Fx_FadeIn(obj, 0xC8);
    }
    fn_80146AF0();
    fn_8014876C(obj, 0x64, 0xC8);

    ok = 0;
    obj = (Obj *)((u8 *)&gFxChannels + 0x30);
    if (*((u8 *)&gFxChannels + 0x3C) & 1) {
        if (obj->v0()) {
            ok = 1;
        }
    }
    if (ok) {
        fn_80148980(obj, 0xC8);
    }

    ok = 0;
    obj = (Obj *)((u8 *)&gFxChannels + 0x60);
    if (*((u8 *)&gFxChannels + 0x6C) & 1) {
        if (obj->v0()) {
            ok = 1;
        }
    }
    if (ok) {
        fn_80148980(obj, 0xC8);
    }

    ok = 0;
    obj = (Obj *)((u8 *)&gFxChannels + 0x90);
    if (*((u8 *)&gFxChannels + 0x9C) & 1) {
        if (obj->v0()) {
            ok = 1;
        }
    }
    if (ok) {
        fn_80148980(obj, 0xC8);
    }

    #pragma opt_common_subs reset
    #pragma global_optimizer reset
    return 1;
}
#pragma cplusplus reset
s32 fn_800B7C04(void) {
    M2C_UNK fn_801457B4();
    fn_801457B4();
    return 1;
}

s32 fn_800B7C28(void) {
    M2C_UNK fn_80145828();
    fn_80145828();
    return 1;
}

#pragma cplusplus on
extern "C" s32 fn_800B7C4C(s32 arg0, s32 arg1) {
    struct Obj {
        u8 pad[8];
        virtual u8 v0() = 0;
        u8 flag;
        u8 pad2[0x23];
    };
    extern Obj gFxChannels[];
    void fn_80146AF0(void);
    void fn_8014876C(void *, s32, s16);
    void Fx_FadeIn(void *, s16);
    u8 ok;
    Obj *obj;

    ok = 0;
    obj = &gFxChannels[(u8)arg0];
    if (obj->flag & 1) {
        if (obj->v0()) {
            ok = 1;
        }
    }
    if (ok) {
        Fx_FadeIn(obj, (s16)arg1);
    }
    if (arg0 == 0) {
        fn_80146AF0();
        fn_8014876C(obj, 0x64, (s16)arg1);
    }
    return 1;
}

extern "C" s32 fn_800B7D08(s32 arg0, s32 arg1) {
    struct Obj {
        u8 pad[8];
        virtual u8 v0() = 0;
        u8 flag;
        u8 pad2[0x23];
    };
    extern Obj gFxChannels[];
    void fn_80146B00(void);
    void Fx_FadeOut(void *, s16);
    u8 ok;
    Obj *obj;

    ok = 0;
    obj = &gFxChannels[(u8)arg0];
    if (obj->flag & 1) {
        if (obj->v0()) {
            ok = 1;
        }
    }
    if (ok) {
        Fx_FadeOut(obj, (s16)arg1);
    }
    if (arg0 == 0) {
        fn_80146B00();
    }
    return 1;
}

extern "C" s32 fn_800B7DB4(s32 arg0, s32 arg1) {
    struct Obj {
        u8 pad[8];
        virtual u8 v0() = 0;
        u8 flag;
        u8 pad2[0x23];
    };
    extern Obj gFxChannels[];
    void fn_80146B00(void);
    void fn_80148980(void *, s16);
    u8 ok;
    Obj *obj;

    ok = 0;
    obj = &gFxChannels[(u8)arg0];
    if (obj->flag & 1) {
        if (obj->v0()) {
            ok = 1;
        }
    }
    if (ok) {
        fn_80148980(obj, (s16)arg1);
    }
    if (arg0 == 0) {
        fn_80146B00();
    }
    return 1;
}

#pragma cplusplus reset
s32 fn_800B7E60(s32 arg0, u32 arg1, s32 arg2) {
    void Fx_StartSlot(s32, void *, s32, s32);
    void DebugPrint(void *, ...);
    void fn_80146AF0(void);
    extern s32 gUiInputFlags;
    extern u8 lbl_8026ECB8[];

    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if (!(gUiInputFlags & 3)) {
        Fx_StartSlot((u8)arg0, (void *)arg1, 0x64, arg2);
        DebugPrint(lbl_8026ECB8 + 0x9A9, arg1);
    }
    if (arg0 == 0) {
        fn_80146AF0();
    }
    return 1;
}

#pragma cplusplus on
extern "C" s32 fn_800B7EF8(s32 arg0) {
    struct Obj {
        u8 pad[8];
        virtual u8 v0() = 0;
        u8 flag;
        u8 pad2[0x23];
    };
    extern Obj gFxChannels[];
    void fn_80146B00(void);
    void fn_80148980(void *, s32);
    u8 ok;
    Obj *obj;

    ok = 0;
    obj = &gFxChannels[(u8)arg0];
    if (obj->flag & 1) {
        if (obj->v0()) {
            ok = 1;
        }
    }
    if (ok) {
        fn_80148980(obj, 1);
    }
    if (arg0 == 0) {
        fn_80146B00();
    }
    return 1;
}
#pragma cplusplus reset

s32 fn_800B7F98(s32 arg0, s32 arg1, s32 arg2) {
    void fn_8014876C(void *, u8, s16);
    extern u8 gFxChannels[];

    fn_8014876C(gFxChannels + (u8)arg0 * 0x30, (u8)arg1, (s16)arg2);
    return 1;
}

s32 fn_800B7FD8(s32 arg0, u32 arg1, s32 arg2) {
    extern s32 gUiInputFlags;
    extern u8 lbl_8026ECB8[];
    void Fx_StartSlot(u8, u32, u8, s32);
    void DebugPrint(void *, ...);
    void fn_80146AF0(void);

    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if (!(gUiInputFlags & 3)) {
        Fx_StartSlot((u8)arg0, arg1, (u8)arg2, 1);
        DebugPrint(lbl_8026ECB8 + 0x9d4, arg1);
    }
    if (arg0 == 0) {
        fn_80146AF0();
    }
    return 1;
}

s32 fn_800B8070(s32 arg0, u32 arg1) {
    extern s32 gUiInputFlags;
    extern u8 lbl_8026ECB8[];
    void Fx_StartSlot(u8, u32, u8, s32);
    void DebugPrint(void *, ...);
    void fn_80146AF0(void);

    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if (!(gUiInputFlags & 3)) {
        Fx_StartSlot((u8)arg0, arg1, 0x64, 1);
        DebugPrint(lbl_8026ECB8 + 0xa00, arg1);
    }
    if (arg0 == 0) {
        fn_80146AF0();
    }
    return 1;
}

s32 fn_800B8108(void) {
    M2C_UNK fn_8016B5E8();
    fn_8016B5E8();
    return 1;
}

s32 fn_800B812C(void) {
    M2C_UNK fn_8016B68C();
    fn_8016B68C();
    return 1;
}

s32 fn_800B8150(void) {
    M2C_UNK fn_8016B60C();
    fn_8016B60C();
    return 1;
}

s32 fn_800B8174(void) {
    M2C_UNK fn_8016B64C();
    fn_8016B64C();
    return 1;
}

s32 fn_800B8198(void) {
    M2C_UNK fn_800C0658();
    M2C_UNK fn_8016B6D4();
    fn_800C0658();
    fn_8016B6D4();
    return 1;
}

s32 fn_800B81C0(void) {
    void fn_8016B700(void);
    s32 fn_800C0658(void);
    void Process_CreateChild(void *, s32);
    void fn_80013864(void);
    void fn_80013874(void *);
    extern u8 lbl_8028D218[];
    extern u8 lbl_80320060[];

    fn_8016B700();
    Process_CreateChild(lbl_8028D218, fn_800C0658());
    fn_80013864();
    fn_80013874(lbl_80320060);
    return 1;
}

void fn_800B8208(s32 arg0) {
    extern u8 lbl_8026ECB8[];
    u32 Process_FindByName(void *);
    void Process_ClearFunc(s32);

    if (Process_FindByName(lbl_8026ECB8 + 0xA29) == 0U) {
        Process_ClearFunc(arg0);
    }
}

s32 fn_800B8250(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void fn_8010FD70(void *, s8, s8, u8, s32);
    extern u8 gMapObjEventList[];

    fn_8010FD70(gMapObjEventList, arg0, arg1, arg2, arg3);
    return 1;
}

extern u8 gMapObjEventList[];
s32 fn_800B8298(s8 arg0, s8 arg1) {
    void *MapObjEvent_Push(void *, s32, s32, s32, s32);
    MapObjEvent_Push(gMapObjEventList, arg0, arg1, 9, 0);
    return 1;
}

s32 fn_800B82D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 Item_GetByIid(s32);
    void fn_8010FDB8(void *, s8, s8, u8, s32);
    extern u8 gMapObjEventList[];

    fn_8010FDB8(gMapObjEventList, (s8)arg0, (s8)arg1, (u8)arg2, Item_GetByIid(arg3));
    return 1;
}

s32 fn_800B8340(s32 arg0, s32 arg1, s32 arg2) {
    void *MapObjEvent_Push(void *, s8, s8, s32, s32);
    extern u8 gMapObjEventList[];
    u8 *temp_r3;
    s32 t2;

    t2 = arg2;
    temp_r3 = MapObjEvent_Push(gMapObjEventList, arg0, arg1, 4, 0);
    temp_r3[4] = t2;
    temp_r3[5] = t2;
    temp_r3[6] = 0;
    temp_r3[7] = 0;
    return 1;
}

s32 fn_800B83A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *MapObjEvent_Push(void *, s8, s8, u8, u8);
    extern u8 gMapObjEventList[];
    u8 *temp_r3;
    s32 t5;
    s32 t4;

    t5 = arg5;
    t4 = arg4;
    temp_r3 = MapObjEvent_Push(gMapObjEventList, arg0, arg1, arg2, arg3);
    temp_r3[4] = t4;
    temp_r3[5] = t5;
    temp_r3[6] = 0;
    temp_r3[7] = 0;
    return 1;
}

/* Script command: set up and run a battle between two units by deployment id. */
s32 ScriptCmd_Battle(u8 attackerId, u8 defenderId, u8 flag) {
    void Process_CreateChild(void *, s32);
    void fn_80033418(void *);
    void Battle_Execute(void *, s32);
    void Battle_SetupPair(void *, void *, void *);
    s32 fn_800C0658(void);
    void fn_80013864(void);
    extern u8 lbl_8028D200[];
    extern u8 gUnits[];
    extern u8 gBattle[];
    void *defender;
    void *attacker;

    if (attackerId != 0) {
        attacker = gUnits + (attackerId - 1) * 0x280;
    } else {
        attacker = NULL;
    }
    if (defenderId != 0) {
        defender = gUnits + (defenderId - 1) * 0x280;
    } else {
        defender = NULL;
    }
    Battle_SetupPair(gBattle, attacker, defender);
    Battle_Execute(gBattle, 0xF);
    fn_80033418(gBattle + 0x8A0);
    if (flag != 0) {
        *(u32 *)(gBattle + 0xCAC) = *(u32 *)(gBattle + 0xCAC) | 0x80000000;
    } else {
        *(u32 *)(gBattle + 0xCAC) = *(u32 *)(gBattle + 0xCAC) & 0x7FFFFFFF;
    }
    Process_CreateChild(lbl_8028D200, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B850C(s32 arg0, s8 arg1, s16 arg2) {
    extern u8 gBattleHitTbl[];
    gBattleHitTbl[0x61] = 1;
    gBattleHitTbl[arg0] = arg1;
    *(s16 *)(gBattleHitTbl + 0x20 + arg0 * 2) = arg2;
    return 1;
}

s32 fn_800B8534(void) {
    extern u8 gBattleHitTbl[];
    u8 zero;
    u8 *p;
    u8 *q;
    s32 i;

    zero = 0;
    p = gBattleHitTbl;
    p[0x61] = zero;
    q = p;
    p[0x60] = zero;
    for (i = 0; i < 2; i++) {
        p[0] = zero;
        *(u16 *)(q + 0x20) = 0;
        p[1] = zero;
        *(u16 *)(q + 0x22) = 0;
        p[2] = zero;
        *(u16 *)(q + 0x24) = 0;
        p[3] = zero;
        *(u16 *)(q + 0x26) = 0;
        p[4] = zero;
        *(u16 *)(q + 0x28) = 0;
        p[5] = zero;
        *(u16 *)(q + 0x2A) = 0;
        p[6] = zero;
        *(u16 *)(q + 0x2C) = 0;
        p[7] = zero;
        *(u16 *)(q + 0x2E) = 0;
        p[8] = zero;
        *(u16 *)(q + 0x30) = 0;
        p[9] = zero;
        *(u16 *)(q + 0x32) = 0;
        p[10] = zero;
        *(u16 *)(q + 0x34) = 0;
        p[11] = zero;
        *(u16 *)(q + 0x36) = 0;
        p[12] = zero;
        *(u16 *)(q + 0x38) = 0;
        p[13] = zero;
        *(u16 *)(q + 0x3A) = 0;
        p[14] = zero;
        *(u16 *)(q + 0x3C) = 0;
        p[15] = zero;
        p += 0x10;
        *(u16 *)(q + 0x3E) = 0;
        q += 0x20;
    }
    return 1;
}

s32 fn_800B85EC(void) {
    M2C_UNK Pad_ClearDisableMask(s32, s32);
    s32 fn_800B864C();
    extern s32 gPadInput;
    Pad_ClearDisableMask(gPadInput, fn_800B864C());
    return 0;
}

s32 fn_800B861C(void) {
    M2C_UNK Pad_SetDisableMask(s32, s32);
    s32 fn_800B864C();
    extern s32 gPadInput;
    Pad_SetDisableMask(gPadInput, fn_800B864C());
    return 0;
}

#pragma optimization_level 2
u32 fn_800B864C(u8 *p)
{
  s32 flags = 0;
  u8 ch;
  int new_var;
  while (((s8) (ch = *p)) != 0)
  {
    switch ((s8) ch)
    {
      case '2':
        flags |= 0x04000004;
        break;
      case '4':
        flags |= 0x01000001;
        break;
      case '6':
        flags |= 0x02000002;
        break;
      case '8':
        flags |= 0x08000008;
        break;
      case 'A':
        flags |= 0x100;
        break;
      case 'B':
        flags |= 0x200;
        break;
      case 'X':
        flags |= 0x400;
        break;
      case 'Y':
        flags |= 0x800;
        break;
      new_var = 1;
      case 'Z':
        flags |= 0x10;
        break;
      case 'L':
        flags |= 0x40;
        break;
      case 'R':
        flags |= 0x20;
        break;
      case 'S':
        flags |= 0x1000;
        break;
      case '*':
        flags |= (new_var = -1);
        break;
    }
    p++;
  }
  return flags;
}
#pragma optimization_level 4
s32 fn_800B870C(u32 arg0) {
    s32 Process_FindByName();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    return Process_FindByName();
}

s32 fn_800B874C(u32 arg0) {
    M2C_UNK GfxEnt_UnlinkByName();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    GfxEnt_UnlinkByName();
    return 0;
}

u8 fn_800B8790(void) {
    return fn_80089948();
}

s32 fn_800B87B4(void) {
    u8 fn_80089948();
    M2C_UNK Process_CreateChild(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D1EC[];
    extern u8 lbl_80320060[];
    if (fn_80089948() != 0) {
        Process_CreateChild(lbl_8028D1EC, fn_800C0658());
        fn_80013864();
        fn_80013874(lbl_80320060);
    }
    return 1;
}

void fn_800B8804(s32 arg0) {
    M2C_UNK Process_ClearFunc(s32);
    u8 fn_80089948();
    if (fn_80089948() == 0) {
        Process_ClearFunc(arg0);
    }
}

s32 fn_800B8840(void) {
    M2C_UNK fn_80089970();
    fn_80089970();
    return 1;
}

s32 fn_800B8864(s32 arg0) {
    M2C_UNK fn_80089980(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0x7D0;
    }
    fn_80089980(var_r3);
    return 1;
}

s32 fn_800B8894(s32 arg0) {
    M2C_UNK fn_800899D4(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0x7D0;
    }
    fn_800899D4(var_r3);
    return 1;
}

u8 fn_800B88C4(void) {
    return fn_80089ED8();
}

s32 fn_800B88E8(void) {
    u8 fn_80089ED8();
    M2C_UNK Process_CreateChild(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D1D8[];
    extern u8 lbl_80320060[];
    if (fn_80089ED8() != 0) {
        Process_CreateChild(lbl_8028D1D8, fn_800C0658());
        fn_80013864();
        fn_80013874(lbl_80320060);
    }
    return 1;
}

void fn_800B8938(s32 arg0) {
    u8 fn_80089ED8();
    if (fn_80089ED8() == 0) {
        Process_ClearFunc(arg0);
    }
}

s32 fn_800B8974(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_80089F00(u8, u8, u8, s32, s32);
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r5 = arg2;
    var_r6 = arg3;
    var_r7 = arg4;
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    if (var_r3 > 0xFF) {
        var_r3 = 0xFF;
    }
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    if (var_r4 > 0xFF) {
        var_r4 = 0xFF;
    }
    if (var_r5 < 0) {
        var_r5 = 0;
    }
    if (var_r5 > 0xFF) {
        var_r5 = 0xFF;
    }
    if (var_r6 < 0) {
        var_r6 = 0x1F4;
    }
    if (var_r7 < 0) {
        var_r7 = 0x1F4;
    }
    fn_80089F00((u8) var_r3, (u8) var_r4, (u8) var_r5, var_r6, var_r7);
    return 1;
}

u8 fn_800B8A04(void) {
    return fn_8008A59C();
}

s32 fn_800B8A28(u8 arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0x1F4;
    }
    fn_8008A290(arg0, var_r4);
    return 1;
}

#pragma use_lmw_stmw on
s32 fn_800B8A5C(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_801C1D54(s16, s16, u32, s32, s32, s32);
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1D54(arg0, arg1, arg2, arg3, arg4, fn_800C0658());
    return 1;
}
#pragma use_lmw_stmw reset
s32 fn_800B8AD8(void) {
    M2C_UNK fn_801C18FC();
    fn_801C18FC();
    return 1;
}

s32 fn_800B8AFC(s32 arg0) {
    M2C_UNK fn_801C1970(s8);
    fn_801C1970(arg0);
    return 1;
}

#pragma use_lmw_stmw on
s32 fn_800B8B24(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4, s32 arg5) {
    M2C_UNK fn_801C1A18(s8, s16, s16, s16, u32, s32, s32);
    if ((arg4 < 0x80000000U) || (arg4 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1A18(arg0, arg1, arg2, arg3, arg4, arg5, fn_800C0658());
    return 1;
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
s32 fn_800B8BA8(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_UNK fn_801C1AC8(s16, s16, s16, u32, s32, s32, s32, s32);
    if ((arg3 < 0x80000000U) || (arg3 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1AC8(arg0, arg1, arg2, arg3, arg4, arg5, arg6, fn_800C0658());
    return 1;
}
#pragma use_lmw_stmw reset

s32 fn_800B8C34(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    void *fn_800C0658(void);
    void fn_801C1BC0(s8, s16, s16, u32, s32, void *);

    if ((arg3 < 0x80000000U) || (arg3 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1BC0((s8)arg0, (s16)arg1, (s16)arg2, arg3, arg4, fn_800C0658());
    return 1;
}

s32 fn_800B8CB0(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void fn_801C1C64(s16, s16, u32, s32, s32, s32, s32);
    s32 fn_800C0658(void);
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1C64(arg0, arg1, arg2, arg3, arg4, arg5, fn_800C0658());
    return 1;
}

void fn_800B8D34(void) {
    M2C_UNK fn_8006F014();
    fn_8006F014();
}

s32 fn_800B8D54(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    M2C_UNK fn_8006F020();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    if ((arg3 < 0x80000000U) || (arg3 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F020();
    fn_80013864();
    return 1;
}

s32 fn_800B8DE4(u32 arg0, u32 arg1, u32 arg2) {
    M2C_UNK fn_8006F09C();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F09C();
    fn_80013864();
    return 1;
}

s32 fn_800B8E5C(u32 arg0, u32 arg1) {
    M2C_UNK fn_8006F10C();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F10C();
    fn_80013864();
    return 1;
}

s32 fn_800B8EBC(void) {
    extern s32 gUiInputFlags;
    gUiInputFlags |= 0x10;
    return 1;
}

/* Open a message window for msgPtr; multi-line if expanded text has a newline. */
s32 ScriptCmd_ShowMsg(u32 msgPtr) {
    char *Msg_Expand(void);
    char *strchr(char *, s32);
    void *Process_FindByName(void *);
    void MsgWin_OpenSingle(void *, u32, s32, s32);
    void MsgWin_OpenMulti(void *, u32, s32, s32);
    void fn_80013864(void);
    void fn_80013874(void *);
    extern u8 lbl_8026ECB8[];
    extern u8 lbl_80320060[];
    extern s32 gUiInputFlags;

    if ((msgPtr < 0x80000000U) || (msgPtr >= 0x81800000U)) {
        return 0;
    }
    if (strchr(Msg_Expand(), 0xA) == NULL) {
        MsgWin_OpenSingle(Process_FindByName(lbl_8026ECB8 + 0xA3C), msgPtr, 0, 0);
    } else {
        MsgWin_OpenMulti(Process_FindByName(lbl_8026ECB8 + 0xA3C), msgPtr, 0, 0);
    }
    fn_80013864();
    fn_80013874(lbl_80320060);
    gUiInputFlags &= ~0x80;
    gUiInputFlags &= ~0x10;
    return 0;
}

extern void fn_8006F6A4(u32 arg0, u32 arg1, u32 arg2);
s32 fn_800B8F98(u32 arg0) {
    M2C_UNK fn_8006F6A4(s32, u32, s32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F6A4(fn_800C0658(), arg0, 0, 0);
    fn_80013864();
    return 0;
}

extern void MsgWin_OpenSingle(u32 arg0, u32 arg1, u32 arg2);
s32 fn_800B8FFC(u32 arg0) {
    M2C_UNK MsgWin_OpenSingle(s32, u32, s32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    MsgWin_OpenSingle(fn_800C0658(), arg0, 0, 0);
    fn_80013864();
    return 0;
}

extern void MsgWin_OpenSingle(u32 arg0, u32 arg1, u32 arg2);
s32 fn_800B9060(u32 arg0) {
    M2C_UNK MsgWin_OpenSingle(s32, u32, s32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    MsgWin_OpenSingle(fn_800C0658(), arg0, 0, 0);
    fn_80013864();
    return 0;
}

s32 fn_800B90C4(u32 arg0) {
    extern s32 gUiInputFlags;
    u32 ScriptObj_FindByName(void);
    void fn_801CFCB4(void);

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    if (ScriptObj_FindByName() == 0) {
        return 0;
    }
    fn_801CFCB4();
    return 1;
}

s32 fn_800B9130(u32 arg0, s32 arg1) {
    extern s32 gUiInputFlags;
    void *ScriptObj_FindByName(void);
    void fn_801CFD40(void *, s32);
    void *tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    tmp = ScriptObj_FindByName();
    if (tmp == 0) {
        return 0;
    }
    fn_801CFD40(tmp, arg1);
    return 1;
}

s32 fn_800B91AC(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *ScriptObj_FindByName(u32);
    void fn_801CFD60(void *, s32, s32, s32, s32);
    extern s32 gUiInputFlags;
    void *p;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    p = ScriptObj_FindByName(arg0);
    if (p == NULL) {
        return 0;
    }
    fn_801CFD60(p, arg1, arg2, arg3, arg4);
    return 1;
}

s32 fn_800B9258(u32 arg0, s32 arg1, s32 arg2) {
    void *ScriptObj_FindByName(u32);
    void fn_801CFD8C(void *, s32, s32);
    extern s32 gUiInputFlags;
    void *p;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    p = ScriptObj_FindByName(arg0);
    if (p == NULL) {
        return 0;
    }
    fn_801CFD8C(p, arg1, arg2 != 0);
    return 1;
}

s32 fn_800B92EC(u32 arg0, s32 arg1) {
    extern s32 gUiInputFlags;
    void *ScriptObj_FindByName(void);
    void fn_801CFDBC(void *, s32);
    void *tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    tmp = ScriptObj_FindByName();
    if (tmp == 0) {
        return 0;
    }
    fn_801CFDBC(tmp, arg1);
    return 1;
}

s32 fn_800B9368(u32 arg0) {
    extern s32 gUiInputFlags;
    u32 ScriptObj_FindByName(void);
    void fn_801CFDD4(void);

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    if (ScriptObj_FindByName() == 0) {
        return 0;
    }
    fn_801CFDD4();
    return 1;
}

s32 fn_800B93D4(u32 arg0, s32 arg1) {
    extern s32 gUiInputFlags;
    void *ScriptObj_FindByName(void);
    void fn_801CFE80(void *, s32);
    void *tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    tmp = ScriptObj_FindByName();
    if (tmp == 0) {
        return 0;
    }
    fn_801CFE80(tmp, arg1);
    return 1;
}

s32 fn_800B9450(u32 arg0, s32 arg1) {
    extern s32 gUiInputFlags;
    void *ScriptObj_FindByName(void);
    void fn_801CFEA4(void *, s32);
    void *tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    tmp = ScriptObj_FindByName();
    if (tmp == 0) {
        return 0;
    }
    fn_801CFEA4(tmp, arg1);
    return 1;
}

s32 fn_800B94CC(u32 arg0, s32 arg1) {
    extern s32 gUiInputFlags;
    void *ScriptObj_FindByName(void);
    void fn_801CFEF4(void *, s32);
    void *tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    tmp = ScriptObj_FindByName();
    if (tmp == 0) {
        return 0;
    }
    fn_801CFEF4(tmp, arg1);
    return 1;
}

s32 fn_800B9548(u32 arg0) {
    extern s32 gUiInputFlags;
    u32 ScriptObj_FindByName(void);
    void fn_801D0200(void);

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    if (ScriptObj_FindByName() == 0) {
        return 0;
    }
    fn_801D0200();
    return 1;
}

s32 fn_800B95B4(u32 arg0, s32 arg1) {
    extern s32 gUiInputFlags;
    void *ScriptObj_FindByName(void);
    void fn_801D027C(void *, s32);
    void *tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    tmp = ScriptObj_FindByName();
    if (tmp == 0) {
        return 0;
    }
    fn_801D027C(tmp, arg1);
    return 1;
}

/* Script command: play a colored, scaled effect on a named script object at (x,y). */
s32 ScriptCmd_PlayEffect(u32 name, s32 slot, s32 x, s32 y, s32 scalePct, u32 rgb) {
    void *ScriptObj_FindByName(u32);
    void fn_801D029C(void *, s32, s32, s32, void *, f32);
    extern s32 gUiInputFlags;
    extern u32 gColorAlphaFF;
    extern f64 lbl_80369CF8;
    extern f32 gPercentToFloat;
    void *obj;
    u32 packed;
    u32 tmp;
    u32 color;
    u8 g;
    u8 r;

    if ((name < 0x80000000U) || (name >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    obj = ScriptObj_FindByName(name);
    if (obj == NULL) {
        return 0;
    }
    r = (u8)(rgb >> 16);
    g = (u8)(rgb >> 8);
    tmp = gColorAlphaFF;
    ((u8 *)&packed)[0] = r;
    ((u8 *)&packed)[1] = g;
    ((u8 *)&packed)[2] = (u8)rgb;
    ((u8 *)&packed)[3] = ((u8 *)&tmp)[3];
    ((u8 *)&tmp)[0] = r;
    ((u8 *)&tmp)[1] = g;
    ((u8 *)&tmp)[2] = (u8)rgb;
    color = packed;
    fn_801D029C(obj, slot, x, y, &color, gPercentToFloat * (f32)scalePct);
    return 1;
}

s32 fn_800B9724(u32 arg0, s32 arg1, s32 arg2) {
    void *ScriptObj_FindByName(u32);
    void fn_801D03E4(void *, s32, s32);
    extern s32 gUiInputFlags;
    void *p;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    p = ScriptObj_FindByName(arg0);
    if (p == NULL) {
        return 0;
    }
    fn_801D03E4(p, arg1, arg2 != 0);
    return 1;
}

s32 fn_800B97B8(u32 arg0, s32 arg1) {
    void *ScriptObj_FindByName(u32);
    M2C_UNK fn_801D041C(void *, s32);
    extern s32 gUiInputFlags;
    void *p;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    p = ScriptObj_FindByName(arg0);
    if (p == NULL) {
        return 0;
    }
    fn_801D041C(p, arg1 != 0);
    return 1;
}

s32 fn_800B983C(u32 arg0, s32 arg1) {
    extern s32 gUiInputFlags;
    void *ScriptObj_FindByName(void);
    void fn_801D0444(void *, s32);
    void *tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    tmp = ScriptObj_FindByName();
    if (tmp == 0) {
        return 0;
    }
    fn_801D0444(tmp, arg1);
    return 1;
}

s32 fn_800B98B8(u32 arg0) {
    extern s32 gUiInputFlags;
    extern u8 lbl_8028D1C4[];
    extern u8 lbl_80320060[];
    void *ScriptObj_FindByName(void);
    void *fn_800C0658(void);
    void *Process_CreateChild(void *, void *);
    void fn_80013864(void);
    void fn_80013874(void *);
    void *tmp;
    void *obj;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    tmp = ScriptObj_FindByName();
    if (tmp == 0) {
        return 0;
    }
    obj = Process_CreateChild(lbl_8028D1C4, fn_800C0658());
    fn_80013864();
    fn_80013874(lbl_80320060);
    *(void **)((u8 *)obj + 0x54) = tmp;
    return 1;
}

#pragma optimization_level 1
void fn_800B995C(void *arg0) {
    void Process_ClearFunc();
    s32 base;
    s32 shift;
    s32 flags;
    base = 0x100;
    shift = 0;
    flags = *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x54) + 8);
    if (flags & (base << shift)) return;
    shift = 1;
    if (flags & (base << shift)) return;
    shift = 2;
    if (flags & (base << shift)) return;
    Process_ClearFunc(arg0, base);
}
#pragma optimization_level 4
s32 fn_800B99B8(u32 arg0, s32 arg1) {
    extern s32 gUiInputFlags;
    void *ScriptObj_FindByName(void);
    void fn_801D0460(void *, s32);
    void *tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (gUiInputFlags & 1) {
        return 0;
    }
    tmp = ScriptObj_FindByName();
    if (tmp == 0) {
        return 0;
    }
    fn_801D0460(tmp, arg1);
    return 1;
}

s32 fn_800B9A34(u32 arg0, s32 arg1) {
    u32 Sound_FindByName(void);
    void fn_80109BB4(u32, u8);
    u32 tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    tmp = Sound_FindByName();
    if (tmp == 0U) {
        return 0;
    }
    fn_80109BB4(tmp, (u8)arg1);
    return 1;
}

s32 fn_800B9A9C(u32 arg0, s32 arg1) {
    u32 Sound_FindByName(u32);
    void Sound_FadeToVol(u32, u8);
    u32 ScriptObj_FindByName(u32);
    void fn_801CFC4C(u32, s32);
    s32 Str_NCmp(void *, void *, s32);
    extern u8 lbl_8026ECB8[];
    u32 temp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }

    if (Str_NCmp((void *)arg0, lbl_8026ECB8 + 0xA47, 8) != 0) {
        temp = Sound_FindByName(arg0);
        if (temp == 0U) {
            return 0;
        }
        Sound_FadeToVol(temp, arg1);
        return 1;
    }

    temp = ScriptObj_FindByName(arg0);
    if (temp == 0U) {
        return 0;
    }

    fn_801CFC4C(temp, arg1);
    return 1;
}

s32 fn_800B9B58(u32 arg0, s32 arg1) {
    u32 Sound_FindByName(u32);
    void Sound_FadeFromZero(u32, u8);
    u32 ScriptObj_FindByName(u32);
    void fn_801CFC80(u32, s32);
    s32 Str_NCmp(void *, void *, s32);
    extern u8 lbl_8026ECB8[];
    u32 temp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }

    if (Str_NCmp((void *)arg0, lbl_8026ECB8 + 0xA47, 8) != 0) {
        temp = Sound_FindByName(arg0);
        if (temp == 0U) {
            return 0;
        }
        Sound_FadeFromZero(temp, arg1);
        return 1;
    }

    temp = ScriptObj_FindByName(arg0);
    if (temp == 0U) {
        return 0;
    }

    fn_801CFC80(temp, arg1);
    return 1;
}

s32 fn_800B9CD4(u32, s32, s32, s32, u32, f32);

void fn_800B9C14(u32 name, s32 x, s32 y, s32 frames, u32 arg4) {
    fn_800B9CD4(name, x, y, frames, arg4, 1.0f);
}

void fn_800B9C38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void fn_800B9CD4(s32, s32, s32, s32, s32, f32);
    extern f32 lbl_80369D08;
    extern f32 lbl_80369D0C;
    extern f32 lbl_80369D10;
    f32 scale;
    f32 x;
    f32 y;
    scale = (f32)arg3 / lbl_80369D08;
    x = lbl_80369D0C - (f32)arg1 * scale;
    y = lbl_80369D10 - (f32)arg2 * scale;
    fn_800B9CD4(arg0, (s32)x, (s32)y, arg4, arg5, scale);
}

s32 fn_800B9CD4(u32 name, s32 x, s32 y, s32 frames, u32 arg4, f32 scale) {
    void *Sound_FindByName(u32);
    void *ScriptObj_FindByName(u32);
    s32 Str_NCmp(void *, void *, s32);
    s32 fn_800C0658(void);
    void *Process_Create(void *, s32);
    extern u8 lbl_8026ECB8[];
    extern u8 lbl_8028D1B0[];
    void *obj;
    f32 fx;
    f32 fy;
    f32 f29;
    f32 f28;

    if ((name < 0x80000000U) || (name >= 0x81800000U)) {
        return 0;
    }

    if (Str_NCmp((void *)name, lbl_8026ECB8 + 0xA47, 8) != 0) {
        obj = Sound_FindByName(name);
        if (obj == NULL) {
            return 0;
        }
        fx = *(f32 *)((u8 *)obj + 0x40);
        fy = *(f32 *)((u8 *)obj + 0x44);
        f29 = *(f32 *)((u8 *)obj + 0x54);
        f28 = *(f32 *)((u8 *)obj + 0x58);
    } else {
        obj = ScriptObj_FindByName(name);
        if (obj == NULL) {
            return 0;
        }
        f28 = *(f32 *)((u8 *)obj + 0x1C);
        f29 = f28;
        fx = (f32)*(s16 *)((u8 *)obj + 0x18);
        fy = (f32)*(s16 *)((u8 *)obj + 0x1A);
    }

    if (frames <= 0) {
        frames = 1;
    }

    obj = Process_Create(lbl_8028D1B0, fn_800C0658());
    *(f32 *)((u8 *)obj + 0x3C) = fx;
    *(f32 *)((u8 *)obj + 0x48) = (f32)x;
    *(f32 *)((u8 *)obj + 0x40) = fy;
    *(f32 *)((u8 *)obj + 0x4C) = (f32)y;
    *(f32 *)((u8 *)obj + 0x44) = f29;
    *(f32 *)((u8 *)obj + 0x50) = scale;
    *(f32 *)((u8 *)obj + 0x30) = f28;
    *(f32 *)((u8 *)obj + 0x34) = scale;
    *(s32 *)((u8 *)obj + 0x60) = 0;
    *(s32 *)((u8 *)obj + 0x64) = frames;
    *(u32 *)((u8 *)obj + 0x54) = name;
    *(u32 *)((u8 *)obj + 0x68) = arg4;
    return 1;
}

void fn_800B9EA8(u8 *arg0, u8 *arg1, s32 arg2)
{
  s32 Str_NCmp(void *, void *, s32);
  void *Sound_FindByName(u32);
  void *ScriptObj_FindByName(u32);
  void Process_ClearFunc(void *);
  f32 Math_Ease(s32, f32, f32, f32, f32);
  extern u8 lbl_8026ECB8[];
  extern u32 gUiInputFlags;
  u8 *proc;
  u8 *sound;
  u8 *obj;
  s32 frame;
  s32 duration;
  f32 x;
  f32 y;
  f32 z;
  f32 scale;
  proc = arg0;
  if (Str_NCmp(*((void **) (proc + 0x54)), lbl_8026ECB8 + ((unsigned long long) 0xA47), 8) != 0)
  {
    sound = Sound_FindByName(*((u32 *) (proc + 0x54)));
    if (sound == 0)
    {
      Process_ClearFunc(proc);
      return;
    }
  }
  else
  {
    obj = ScriptObj_FindByName(*((u32 *) (proc + 0x54)));
    if (obj == 0)
    {
      Process_ClearFunc(proc);
      return;
    }
  }
  *((s32 *) (proc + 0x60)) = (*((s32 *) (proc + 0x60))) + 1;
  if (gUiInputFlags & 1)
  {
    *((s32 *) (proc + 0x60)) = *((s32 *) (proc + 0x64));
  }
  frame = *((s32 *) (proc + 0x60));
  duration = *((s32 *) (proc + 0x64));
  x = Math_Ease(0, *((f32 *) (proc + 0x3C)), *((f32 *) (proc + 0x48)), (f32) frame, (f32) duration);
  y = Math_Ease(0, *((f32 *) (proc + 0x40)), *((f32 *) (proc + 0x4C)), (f32) (*((s32 *) (proc + 0x60))), (f32) (*((s32 *) (proc + 0x64))));
  z = Math_Ease(0, *((f32 *) (proc + 0x44)), *((f32 *) (proc + 0x50)), (f32) (*((s32 *) (proc + 0x60))), (f32) (*((s32 *) (proc + 0x64))));
  scale = Math_Ease(0, *((f32 *) (proc + 0x30)), *((f32 *) (proc + 0x34)), (f32) (*((s32 *) (proc + 0x60))), (f32) (*((s32 *) (proc + 0x64))));
  if (Str_NCmp(*((void **) (proc + 0x54)), lbl_8026ECB8 + 0xA47, 8) != 0)
  {
    *((f32 *) (sound + 0x40)) = x;
    *((f32 *) (sound + 0x44)) = y;
    *((f32 *) (sound + 0x54)) = z;
    *((f32 *) (sound + 0x58)) = scale;
  }
  else
  {
    *((s16 *) (obj + 0x18)) = (s16) ((s32) x);
    *((s16 *) (obj + 0x1A)) = (s16) ((s32) y);
    *((f32 *) (obj + 0x1C)) = z;
  }
  if ((*((s32 *) (proc + 0x60))) >= (*((s32 *) (proc + 0x64))))
  {
    Process_ClearFunc(proc);
  }
}

s32 ScriptCmd_SetPos(u32 name, s32 x, s32 y) {
    /* Set X/Y on a named sound (floats) or script object (s16s); 0 if missing. */
    void *Sound_FindByName(u32);
    void *ScriptObj_FindByName(u32);
    s32 Str_NCmp(void *, void *, s32);
    extern u8 lbl_8026ECB8[];

    if ((name < 0x80000000U) || (name >= 0x81800000U)) {
        return 0;
    }

    if (Str_NCmp((void *)name, lbl_8026ECB8 + 0xA47, 8) != 0) {
        void *snd = Sound_FindByName(name);
        if (snd == NULL) {
            return 0;
        }
        *(f32 *)((u8 *)snd + 0x40) = (f32)x;
        *(f32 *)((u8 *)snd + 0x44) = (f32)y;
        return 1;
    } else {
        void *obj = ScriptObj_FindByName(name);
        if (obj == NULL) {
            return 0;
        }
        *(s16 *)((u8 *)obj + 0x18) = (s16)x;
        *(s16 *)((u8 *)obj + 0x1A) = (s16)y;
        return 1;
    }
}

s32 fn_800BA230(u32 arg0, s32 arg1) {
    u32 Sound_FindByName(void);
    void fn_80109DC0(u32, s32);
    u32 tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    tmp = Sound_FindByName();
    if (tmp == 0U) {
        return 0;
    }
    fn_80109DC0(tmp, arg1);
    return 1;
}

/* Script command: look up a sound by name and tween/set a typed parameter (percent-scaled for types 5-7). */
s32 ScriptCmd_SoundSetParam(u32 name, s32 type, s32 mode, s32 valueA, s32 valueB, s32 frames) {
    u32 Sound_FindByName(void);
    void Sound_TweenParam(u32, s32, s32, f32, f32, f32);
    extern f32 gPercentToFloat;
    extern f64 lbl_80369CF8;
    u32 snd;
    f32 fromVal;
    f32 toVal;

    if ((name < 0x80000000U) || (name >= 0x81800000U)) {
        return 0;
    }
    snd = Sound_FindByName();
    if (snd == 0U) {
        return 0;
    }
    fromVal = (f32)valueA;
    toVal = (f32)valueB;
    switch (type) {
    case 5:
    case 6:
    case 7:
        toVal *= gPercentToFloat;
        if (valueA != 123456789) {
            fromVal *= gPercentToFloat;
        }
        break;
    }
    Sound_TweenParam(snd, type, mode, fromVal, toVal, (f32)frames);
    return 1;
}

s32 fn_800BA38C(u32 arg0, s32 arg1, s32 arg2) {
    u32 Sound_FindByName(void);
    void fn_80109A54(u32, u8, f32);
    extern f32 gPercentToFloat;
    u32 tmp;
    f32 var_f1;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    tmp = Sound_FindByName();
    if (tmp == 0U) {
        return 0;
    }
    var_f1 = (f32) arg2;
    switch (arg1) {
    case 5:
    case 6:
    case 7:
        var_f1 *= gPercentToFloat;
        break;
    }
    fn_80109A54(tmp, (u8) arg1, var_f1);
    return 1;
}

s32 fn_800BA438(u32 arg0, s32 arg1)
{
  u32 Sound_FindByName(void);
  f32 fn_801099A0(u32, u8);
  u32 tmp;

  if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U))
  {
    return 0;
  }
  tmp = Sound_FindByName();
  if (tmp == 0U)
  {
    return 0;
  }
  return (s32)fn_801099A0(tmp, (u8)arg1);
}

s32 fn_800BA4A8(u32 arg0) {
    void fn_80109020(u32);
    void ScriptObj_FindByName(u32);
    void fn_801CFA44(void);
    s32 Str_NCmp(void *, void *, s32);
    extern u8 lbl_8026ECB8[];

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }

    if (Str_NCmp((void *)arg0, lbl_8026ECB8 + 0xA47, 8) != 0) {
        fn_80109020(arg0);
    } else {
        ScriptObj_FindByName(arg0);
        fn_801CFA44();
    }

    return 0;
}

s32 fn_800BA528(u32 arg0) {
    void Sound_Create(u32, s32);
    void ScriptObj_Start(u32, s32);
    s32 Str_NCmp(void *, void *, s32);
    extern u16 lbl_8026ECB8[];

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }

    if (Str_NCmp((void *)arg0, (u8 *)lbl_8026ECB8 + 0xA47, 8) != 0) {
        Sound_Create(arg0, 0);
    } else {
        ScriptObj_Start(arg0, 0);
    }

    return 0;
}

s32 fn_800BA5AC(u32 arg0) {
    s32 Str_NCmp(void *, void *, s32);
    void Sound_Create(u32, s32);
    void ScriptObj_Start(u32, s32);
    s32 fn_800C0658(void);
    extern u8 lbl_8026ECB8[];
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (Str_NCmp((void *)arg0, lbl_8026ECB8 + 0xA47, 8) != 0) {
        Sound_Create(arg0, fn_800C0658());
    } else {
        ScriptObj_Start(arg0, fn_800C0658());
    }
    return 0;
}

s32 fn_800BA638(s32 arg0) {
    void fn_8014D268(void *, s32);
    void fn_8009149C(s32, s32, s32);
    s32 fn_800C0658(void);
    extern u8 gBattleState[];
    extern s32 gUiContext[];

    fn_8014D268(gBattleState, arg0 + *(s32 *)(gBattleState + 0x18));
    {
        s32 g = *gUiContext;
        fn_8009149C(arg0, fn_800C0658(), g);
    }
    return 0;
}

s32 ScriptCmd_GiveItem(u8 arg0, s32 arg1) {
    void Item_Init(void *);
    void Item_SetByName(void *, s32);
    void Item_Clone(void *, void *);
    void Item_Destroy(void *, s32);
    s32 fn_800C0658(void);
    void Unit_OfferItem(void *, void *, s32);
    extern u8 gUnits[];
    u8 sp10[8];
    u8 sp8[8];
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = gUnits + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || (*(u32 *)((u8 *)var_r31 + 0x188) == 0U)) {
        return 0;
    }
    Item_Init(sp10);
    Item_SetByName(sp10, arg1);
    Item_Clone(sp8, sp10);
    Unit_OfferItem(var_r31, sp8, fn_800C0658());
    Item_Destroy(sp8, -1);
    Item_Destroy(sp10, -1);
    return 1;
}

s32 fn_800BA75C(s8 arg0, s8 arg1, s8 arg2) {
    extern u8 gBattleMap[];
    gBattleMap[arg0 + (arg1 << 6) + 0x100D] = (u8)arg2;
    return 0;
}

s32 fn_800BA784(void) {
void Allegiance_FillMask(s32,u8 *);
void Unit_SeparateRescue(void *,u8,u8);
void fn_8003DFB8(void *);
void Map_RefreshUnitMap(void *);
void fn_800C0658(void);
void fn_800C1060(void);
extern u8 gUnits[],gUnitLists[],gBattleMap[];
u8 mask1[8],mask2[8];
u8 *unit,*rescued;
s32 i;
u32 flags;
{
Allegiance_FillMask(3,mask1);
for(i=1;i<=159;i++){
unit=(u8)i ? gUnits+((u8)i-1)*0x280:0;
if(*(u32*)(unit+0x188)&&mask1[(*(u8**)(unit+0x190))[8]]){
rescued=*(u8**)(unit+0x194);
if(rescued&&(*(u32*)(unit+0x1a0)&2)){
Unit_SeparateRescue(unit,unit[0x19e],unit[0x19f]);
if(rescued) { flags=*(u32*)(rescued+0x1a0); flags &= ~1; *(u32*)(rescued+0x1a0)=flags; }
}
}
}
}
for(unit=*(u8**)(gUnitLists+4);unit;unit=rescued){
rescued=*(u8**)(unit+0x180);
fn_8003DFB8(unit);
}
{
s32 j;
Allegiance_FillMask(3,mask2);
for(j=1;j<=159;j++){
unit=(u8)j ? gUnits+((u8)j-1)*0x280:0;
if(*(u32*)(unit+0x188)&&mask2[(*(u8**)(unit+0x190))[8]]) fn_8003DFB8(unit);
}
}
Map_RefreshUnitMap(gBattleMap);
fn_800C0658();fn_800C1060();return 1;
}

s32 fn_800BA8F8(u8 arg0) {
    void Map_RefreshUnitMap(void *);
    M2C_UNK fn_8003DFB8(void *);
    M2C_UNK fn_801A251C(void);
    extern u8 gUnits[];
    extern u8 gBattleMap[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || M2C_FIELD(unit, void **, 0x188) == NULL) {
        return 0;
    }
    fn_8003DFB8(unit);
    Map_RefreshUnitMap(gBattleMap);
    fn_801A251C();
    return 1;
}

s32 fn_800BA96C(void) {
    void *Res_GetByName(void);
    M2C_UNK fn_800A87D4(s32);
    void *Battle_GetActiveCombatant(void *);
    extern u8 gBattle[];
    void *p;

    p = Battle_GetActiveCombatant(gBattle);
    if (p == NULL) {
        return 0;
    }
    fn_800A87D4(M2C_FIELD(p, s32 *, 0x188));
    return Res_GetByName() != NULL;
}

extern void *Battle_GetActiveCombatant(u32 *);
extern s32 Res_GetByName();
extern s32 fn_800A87D4(s32);
s32 fn_800BA9BC(void) {
    extern u8 gBattle[];
    extern char lbl_8026ECB8[];
    extern u8 gFxChannels[];
    void fn_80146B00(void);
    void fn_80148980(void *, s32);
    void fn_80147FA8(s32);
    void fn_80148618(char *, s32);
    u8 *unit;
    s32 msg;
    s32 TalkUi_ShowMsg(s32);
    s32 fn_8011D908(s32, s32);
    unit = Battle_GetActiveCombatant((void *)gBattle);
    if (!unit) return 0;
    msg = fn_800A87D4(*(s32 *)(unit+0x188));
    if ((void *)Res_GetByName(msg) == 0) return 0;
    if ((void *)Process_FindByName(lbl_8026ECB8+0xA50) != 0) TalkUi_ShowMsg(msg);
    else fn_8011D908(msg, fn_800C0658());
    if ((*(u8 **)(unit+0x190))[8] == 0 || (*(u8 **)(unit+0x190))[8] == 6) {
        fn_80147FA8(1);
        fn_80148980((u8 *)&gFxChannels+0x30,250);
        if ((u8)Status_Test(unit+0x1BC,0)) fn_80148618(lbl_8026ECB8+0xA57,1);
        else fn_80148618(lbl_8026ECB8+0xA61,1);
        fn_80146B00();
    }
    return 1;
}

s32 fn_800BAAD4(void) {
    void *Res_GetByName(void);
    void *Process_FindByName(void *);
    s32 fn_800A876C(s32);
    M2C_UNK TalkUi_ShowMsg(s32);
    M2C_UNK fn_8011D908(s32, s32);
    extern u8 lbl_8026ECB8[];
    extern void *gUiContext[];
    s32 obj;

    if (gUiContext[0] == NULL) {
        return 0;
    }
    obj = fn_800A876C(M2C_FIELD(gUiContext[0], s32 *, 0x188));
    if (Res_GetByName() != NULL) {
        if (Process_FindByName(lbl_8026ECB8 + 0xA50) != NULL) {
            TalkUi_ShowMsg(obj);
        } else {
            fn_8011D908(obj, fn_800C0658());
        }
    }
    return 0;
}

s32 fn_800BAB64(u8 arg0) {
    M2C_UNK BattleState_SetCamPos(void *, f32, f32);
    extern u8 gUnits[];
    extern u8 gBattleState[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit != NULL) {
        BattleState_SetCamPos(gBattleState, M2C_FIELD(unit, s8 *, 0x19E), M2C_FIELD(unit, s8 *, 0x19F));
    }
    return 1;
}

s32 fn_800BABFC(void) {
    u8 Camera_HasMoved(s32);
    M2C_UNK Camera_SyncFromBattleState(void);
    M2C_UNK Process_CreateChild(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D19C[];
    extern u8 lbl_80320060[];
    extern s32 gUiInputFlags;

    if (gUiInputFlags & 1) {
        Camera_SyncFromBattleState();
        return 0;
    }
    if (Camera_HasMoved(1) == 0) {
        return 0;
    }
    Process_CreateChild(lbl_8028D19C, fn_800C0658());
    fn_80013864();
    fn_80013874(lbl_80320060);
    return 1;
}

void fn_800BAC70(s32 arg0) {
    u8 Camera_HasMoved(s32);
    M2C_UNK Camera_SyncFromBattleState(void);
    extern s32 gUiInputFlags;

    if (Camera_HasMoved(1) == 0) {
        Process_ClearFunc(arg0);
    } else if (gUiInputFlags & 1) {
        Camera_SyncFromBattleState();
        Process_ClearFunc(arg0);
    }
}

s32 fn_800BACCC(void) {
    u8 Camera_HasMoved(s32);
    M2C_UNK Camera_SyncFromBattleState(void);
    M2C_UNK Process_CreateChild(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D188[];
    extern u8 lbl_80320060[];
    extern s32 gUiInputFlags;

    if (gUiInputFlags & 1) {
        Camera_SyncFromBattleState();
        return 0;
    }
    if (Camera_HasMoved(0) == 0) {
        return 0;
    }
    Process_CreateChild(lbl_8028D188, fn_800C0658());
    fn_80013864();
    fn_80013874(lbl_80320060);
    return 1;
}

void fn_800BAD40(s32 arg0) {
    u8 Camera_HasMoved(s32);
    M2C_UNK Camera_SyncFromBattleState(void);
    extern s32 gUiInputFlags;

    if (Camera_HasMoved(0) == 0) {
        Process_ClearFunc(arg0);
    } else if (gUiInputFlags & 1) {
        Camera_SyncFromBattleState();
        Process_ClearFunc(arg0);
    }
}

s32 fn_800BAD9C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8001885C(void);
    M2C_UNK BattleState_SetCamPos(void *, f32, f32);
    extern u8 gBattleState[];
    extern s32 gUiInputFlags;

    if (gUiInputFlags & 1) {
        BattleState_SetCamPos(gBattleState, arg0, arg1);
        fn_8001885C();
        return 0;
    }
    BattleState_SetCamPos(gBattleState, arg0, arg1);
    return 0;
}

s32 fn_800BAE4C(s32 arg0, s32 arg1) {
    void fn_8001885C(void);
    void BattleState_SetCamPos(void *, f32, f32);
    extern u8 gBattleState[];

    BattleState_SetCamPos(gBattleState, (f32)arg0, (f32)arg1);
    fn_8001885C();
    return 0;
}

s32 fn_800BAEAC(void) {
 void *Process_FindByName(void *);
 extern u16 gUiPanelFlags;
 extern u8 lbl_8026ECB8[];
 if (Process_FindByName(lbl_8026ECB8+0xA50)==NULL) return 0;
 return (u32)__cntlzw(gUiPanelFlags & 0x10) >> 5;
}

s32 fn_800BAEF8(void) {
    M2C_UNK fn_8011D650();
    fn_8011D650();
    return 1;
}

s32 fn_800BAF1C(s32 arg0) {
    void *Process_FindByName(void *);
    M2C_UNK TalkUi_ShowMsg(s32);
    M2C_UNK fn_8011D908(s32, s32);
    extern u8 lbl_8026ECB8[];

    if (Process_FindByName(lbl_8026ECB8 + 0xA50) != NULL) {
        TalkUi_ShowMsg(arg0);
        return 1;
    }
    fn_8011D908(arg0, fn_800C0658());
    return 1;
}

s32 fn_800BAF80(s32 arg0) {
    void *Process_FindByName(void *);
    M2C_UNK fn_8011D6F4(s32);
    M2C_UNK UiPanel_Create(s32, s32);
    extern u8 lbl_8026ECB8[];

    if (Process_FindByName(lbl_8026ECB8 + 0xA50) != NULL) {
        fn_8011D6F4(arg0);
        return 1;
    }
    UiPanel_Create(arg0, fn_800C0658());
    return 1;
}

s32 fn_800BAFE4(s32 arg0) {
    M2C_UNK EventFlag_Clear(void *, s32);
    extern u8 gBattleState[];

    EventFlag_Clear(gBattleState + 0xB4, arg0);
    return 0;
}

s32 fn_800BB018(s32 arg0) {
    M2C_UNK fn_800BDC68(void *, s32);
    extern u8 gBattleState[];

    fn_800BDC68(gBattleState + 0xB4, arg0);
    return 0;
}

u8 fn_800BB04C(s32 arg0) {
    s32 EventFlag_IsSet(void *, s32, void *);
    extern u8 gBattleState[];

    return (u8)EventFlag_IsSet(gBattleState + 0xB4, arg0, gBattleState);
}

s32 fn_800BB080(s32 arg0) {
    M2C_UNK fn_800BDDCC(void *, s32);
    extern u8 gBattleState[];

    fn_800BDDCC(gBattleState + 0xB4, arg0);
    return 1;
}

s32 fn_800BB0B4(s32 arg0) {
    M2C_UNK fn_800BDE40(void *, s32);
    extern u8 gBattleState[];

    fn_800BDE40(gBattleState + 0xB4, arg0);
    return 1;
}

void fn_800BB0E8(void) {
    void Script_RegisterCommand(void *, void *, s32);
    extern u8 lbl_8026F728[];
    void fn_800BD610(void);
    void fn_800BD5E0(void);
    void fn_800BD704(void);
    void ScriptCmd_UnitSet(void);
    void fn_800BD470(void);
    void fn_800BD424(void);
    void fn_800BD5AC(void);
    void ScriptCmd_UnitGetByPos(void);
    void fn_800BD0CC(void);
    void fn_800BD08C(void);
    void fn_800BD034(void);
    void fn_800BCFF4(void);
    void fn_800BCC88(void);
    void fn_800BD3DC(void);
    void fn_800BD388(void);
    void fn_800BD334(void);
    void fn_800BCF9C(void);
    void fn_800BCF44(void);
    void fn_800BCDF0(void);
    void fn_800BCD7C(void);
    void fn_800BCD58(void);
    void fn_800BCD34(void);
    void fn_800BCD24(void);
    void fn_800BCC44(void);
    void fn_800BCED4(void);
    void fn_800BCE64(void);
    void fn_800BCA38(void);
    void fn_800BD284(void);
    void ScriptCmd_UnitRescue(void);
    void fn_800BD10C(void);
    void fn_800BC9D4(void);
    void fn_800BC970(void);
    void fn_800BC90C(void);
    void fn_800BC8A8(void);
    void fn_800BC82C(void);
    void fn_800BC7C8(void);
    void fn_800BC760(void);
    void fn_800BC6E8(void);
    void fn_800BC684(void);
    void fn_800BC5FC(void);
    void fn_800BC588(void);
    void fn_800BC458(void);
    void fn_800BC4FC(void);
    void fn_800BC3F4(void);
    void fn_800BC380(void);
    void fn_800BC29C(void);
    void fn_800BC204(void);
    void Unit_SetItemDroppable(void);
    void fn_800BC0A4(void);
    void Unit_SendAllItemsToConvoy(void);
    void Unit_SendItemToConvoy(void);
    void fn_800BCC34(void);
    void fn_800BCC14(void);
    void fn_800BCBBC(void);
    void fn_800BCB80(void);
    void fn_800BCB38(void);
    void fn_800BCB0C(void);
    void fn_800BCAFC(void);
    void fn_800BCC24(void);
    void fn_800BCC04(void);
    void fn_800BCB24(void);
    void fn_800BCB70(void);
    void fn_800BCAEC(void);
    void fn_800BCADC(void);
    void fn_800BBD68(void);
    void fn_800BBE9C(void);
    void fn_800BBE1C(void);
    void fn_800BBD9C(void);
    void Rand_Range(void);
    void fn_800BBD44(void);
    void fn_800BBD20(void);
    void fn_800BBCFC(void);
    void fn_800BBC58(void);
    void fn_800BBC50(void);
    void fn_800BBC40(void);
    void fn_800BBC14(void);
    void fn_800BBB58(void);
    void fn_800BBA38(void);
    void fn_800BB9E8(void);
    void fn_800BB9E0(void);

    Script_RegisterCommand(lbl_8026F728 + 0x101, fn_800BD610, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x10F, fn_800BD5E0, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x11D, fn_800BD704, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x125, ScriptCmd_UnitSet, 3);
    Script_RegisterCommand(lbl_8026F728 + 0x12D, fn_800BD470, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x139, fn_800BD424, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x146, fn_800BD5AC, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x153, ScriptCmd_UnitGetByPos, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x160, fn_800BD0CC, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x169, fn_800BD08C, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x172, fn_800BD034, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x17F, fn_800BCFF4, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x189, fn_800BCC88, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x195, fn_800BD3DC, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x1A3, fn_800BD388, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x1B1, fn_800BD334, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x1BF, fn_800BCF9C, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x1C9, fn_800BCF44, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x1D4, fn_800BCDF0, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x1E4, fn_800BCD7C, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x1F6, fn_800BCD58, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x200, fn_800BCD34, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x20E, fn_800BCD24, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x21A, fn_800BCC44, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x225, fn_800BCED4, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x232, fn_800BCE64, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x23F, fn_800BCA38, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x253, fn_800BD284, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x25F, ScriptCmd_UnitRescue, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x26A, fn_800BD10C, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x27A, fn_800BC9D4, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x28D, fn_800BC970, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x29E, fn_800BC90C, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x2AF, fn_800BC8A8, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x2C0, fn_800BC82C, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x2CF, fn_800BC7C8, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x2DB, fn_800BC760, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x2E7, fn_800BC6E8, 3);
    Script_RegisterCommand(lbl_8026F728 + 0x2F7, fn_800BC684, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x30A, fn_800BC5FC, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x31B, fn_800BC588, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x32A, fn_800BC458, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x337, fn_800BC4FC, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x344, fn_800BC3F4, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x355, fn_800BC380, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x366, fn_800BC29C, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x378, fn_800BC204, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x387, Unit_SetItemDroppable, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x397, fn_800BC0A4, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x3AC, Unit_SendAllItemsToConvoy, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x3BF, Unit_SendAllItemsToConvoy, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x3DA, Unit_SendItemToConvoy, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x3F2, fn_800BCC34, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x3FC, fn_800BCC14, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x407, fn_800BCBBC, 4);
    Script_RegisterCommand(lbl_8026F728 + 0x412, fn_800BCB80, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x41D, fn_800BCB38, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x427, fn_800BCB0C, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x432, fn_800BCAFC, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x43F, fn_800BCC24, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x449, fn_800BCC04, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x454, fn_800BCB24, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x45F, fn_800BCB70, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x46A, fn_800BCAEC, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x474, fn_800BCADC, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x47E, fn_800BBD68, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x48B, fn_800BBE9C, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x498, fn_800BBE1C, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x4A5, fn_800BBD9C, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x4B2, Rand_Range, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x4B9, fn_800BBD44, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x4C4, fn_800BBD20, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x4D2, fn_800BBCFC, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x4DE, fn_800BBC58, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x4EE, fn_800BBC50, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x4F3, fn_800BBC40, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x501, fn_800BBC14, 0);
    Script_RegisterCommand(lbl_8026F728 + 0x50D, fn_800BBB58, 2);
    Script_RegisterCommand(lbl_8026F728 + 0x520, fn_800BBA38, 3);
    Script_RegisterCommand(lbl_8026F728 + 0x533, fn_800BB9E8, 1);
    Script_RegisterCommand(lbl_8026F728 + 0x543, fn_800BB9E0, 0);
}

s32 fn_800BB9E0(void) {
    return 1;
}

s32 fn_800BB9E8(u8 arg0) {
    extern u8 gUnits[];
    u8 *var_r4;
    s32 temp_r3;

    if (arg0 != 0) {
        var_r4 = gUnits + (arg0 - 1) * 0x280;
    } else {
        var_r4 = NULL;
    }
    if ((var_r4 == NULL) || (*(u32 *)(var_r4 + 0x188) == 0U)) {
        return 0;
    }
    temp_r3 = *(s32 *)(var_r4 + 0x254) & 0xFCFFFFFF;
    *(s32 *)(var_r4 + 0x254) = temp_r3;
    return temp_r3;
}

#pragma optimization_level 3
s32 fn_800BBA38(void *arg0, void *arg1, s32 mode) {
    void *Unit_FindByName(void *);
    s32 fn_80036DE0(void *, void *);
    void fn_80036FC4(void *, s32);
    void *unitA;
    void *unitB;
    s32 indexA;
    s32 indexB;
    u8 *row;
    u8 value;

    unitA = Unit_FindByName(arg0);
    unitB = Unit_FindByName(arg1);
    if (unitA == NULL || unitB == NULL) {
        return -1;
    }
    indexA = fn_80036DE0(unitA, unitB);
    indexB = fn_80036DE0(unitB, unitA);
    if ((s8)indexA < 0 || (s8)indexB < 0) {
        return -1;
    }
    indexA = (s8)indexA;
    fn_80036FC4(unitA, indexA);
    row = *(u8 **)((u8 *)*(void **)((u8 *)unitA + 0x188) + 0x50) + indexA * 8 + 8;
    switch (mode) {
    case 0:
        value = row[4];
        break;
    case 1:
        value = row[5];
        break;
    case 2:
        value = row[6];
        break;
    case 3:
        value = (u8)(row[6] + 1);
        break;
    }
    ((u8 *)unitA + indexA)[0x214] = value;
    ((u8 *)unitB + (s8)indexB)[0x214] = value;
    return (u8)value;
}
#pragma optimization_level reset
s32 fn_800BBB58(s32 arg0, s32 arg1) {
    u32 Unit_FindByName(s32);
    s8 fn_80036DE0(u32, u32);
    void fn_80036FC4(u32, s8);
    u8 Unit_GetSupportRank(u32, s8);
    s8 temp_r31;
    u32 temp_r30;
    u32 temp_r29;
    s8 temp_r3;

    temp_r30 = Unit_FindByName(arg0);
    temp_r29 = Unit_FindByName(arg1);
    if (temp_r30 == 0 || temp_r29 == 0) {
        return -1;
    }
    temp_r31 = fn_80036DE0(temp_r30, temp_r29);
    temp_r3 = fn_80036DE0(temp_r29, temp_r30);
    if (temp_r31 < 0 || temp_r3 < 0) {
        return -1;
    }
    temp_r31 = (s8)temp_r31;
    fn_80036FC4(temp_r30, temp_r31);
    return (u8)Unit_GetSupportRank(temp_r30, temp_r31);
}

u8 fn_800BBC14(void) {
    s32 SystemSave_CountPackedSlots(void *);
    extern u8 gSystemSave[];
    return (u8)SystemSave_CountPackedSlots(gSystemSave);
}

s32 fn_800BBC40(void) {
    extern u16 gBattle[];
    return *(s32 *)((u8 *)gBattle + 0xcac);
}

s32 fn_800BBC50(void) {
    extern s32 gUiInputFlags;
    return gUiInputFlags;
}

s16 fn_800BBC58(u8 arg0, s32 arg1) {
    void fn_800227F8(void *, s32);
    extern u8 gUnits[];
    extern u8 gBattleMap[];
    s16 var_r3;
    u16 temp_r0;
    void *var_r4;

    if (arg0 != 0) {
        var_r4 = gUnits + (arg0 - 1) * 0x280;
    } else {
        var_r4 = NULL;
    }
    if ((var_r4 == NULL) || ((u32) M2C_FIELD(var_r4, u32 *, 0x188) == 0U)) {
        return 0;
    }
    fn_800227F8(gBattleMap, M2C_FIELD(var_r4, s32 *, 0x18C));
    temp_r0 = ((u16 *)(gBattleMap + 0x10000) + arg1)[0x210A];
    var_r3 = (s16) temp_r0;
    if ((s16) temp_r0 > 0x7530) {
        var_r3 = -1;
    }
    return var_r3;
}

u8 fn_800BBCFC(s8 arg0, s8 arg1) {
    extern u8 gBattleMap[];
    return gBattleMap[arg0 + (arg1 << 6) + 0x200D];
}

u8 fn_800BBD20(s8 arg0, s8 arg1) {
    extern u8 gBattleMap[];
    return gBattleMap[arg0 + (arg1 << 6) + 0x100D];
}

u8 fn_800BBD44(s8 arg0, s8 arg1) {
    extern u8 gBattleMap[];
    return gBattleMap[arg0 + (arg1 << 6) + 0xD];
}

u16 fn_800BBD68(void) {
    void *Item_GetByIid();
    void *temp_r3;

    temp_r3 = Item_GetByIid();
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u16 *, 0xE);
}

s32 fn_800BBD9C(u32 arg0, void *arg1)
{
    extern u8 gUnits[];

    extern u8 *fn_80019DD0(void *);
    extern void Status_Set(void *, u32);

    u8 *entry;
    u8 *result;

    if ((u8)arg0 != 0) {
        entry = gUnits + ((u8)arg0 - 1) * 0x280;
    } else {
        entry = 0;
    }

    if (entry == 0 || *(u32 *)(entry + 0x188) == 0) {
        return 0;
    }

    result = fn_80019DD0(arg1);

    Status_Set(entry + 0x1BC, result[0x18]);

    return 1;
}

u32 fn_800BBE1C(u32 arg0, void *arg1)
{
    extern u8 gUnits[];

    extern u8 *fn_80019DD0(void *);
    extern u32 Status_Test(void *, u32);

    u8 *entry;
    u8 *result;

    if ((u8)arg0 != 0) {
        entry = gUnits + ((u8)arg0 - 1) * 0x280;
    } else {
        entry = 0;
    }

    if (entry == 0 || *(u32 *)(entry + 0x188) == 0) {
        return 0;
    }

    result = fn_80019DD0(arg1);

    return (u8)Status_Test(entry + 0x1BC, result[0x18]);
}

s32 fn_800BBE9C(u8 arg0,s32 arg1) {
 void Status_OrByName(void *,s32);
 extern u8 gUnits[];
 void *unit;
 if(arg0) unit=gUnits+(arg0-1)*0x280;
 else unit=NULL;
 if(unit==NULL || *(u32 *)((u8 *)unit+0x188)==0) return 0;
 Status_OrByName((u8 *)unit+0x1BC,arg1);
 return 1;
}

s32 Unit_SendItemToConvoy(u8 unitId, s32 slotIndex) {
    /* Move one item from a unit slot into the convoy (when battle state allows), then remove it from the unit. */
    u32 *Unit_GetItemSlot(void *, s32);
    void Unit_RemoveItem(void *, s8);
    void Convoy_AddItem(void *, u32 *);
    u8 fn_8014D8DC(void *);
    extern u8 gUnits[];
    extern u8 gConvoy[];
    extern u8 gBattleState[];
    u32 *slot;
    void *unit;

    if (unitId != 0) {
        unit = gUnits + ((unitId - 1) * 0x280);
    } else {
        unit = NULL;
    }
    if ((unit == NULL) || (*(u32 *)((u8 *)unit + 0x188) == 0U)) {
        return 0;
    }
    if (fn_8014D8DC(gBattleState) == 0) {
        return 0;
    }
    slot = Unit_GetItemSlot(unit, slotIndex);
    if (*slot == 0U) {
        return 0;
    }
    Convoy_AddItem(gConvoy, slot);
    Unit_RemoveItem(unit, (s8)slotIndex);
    return 1;
}

s32 Unit_SendAllItemsToConvoy(u8 unitId) {
    /* Move every item on the unit into the convoy, clear those slots, then compact inventory. */
    u32 *Unit_GetItemSlot(void *, s32);
    void Unit_CompactItems(void *);
    void Convoy_AddItem(void *, u32 *);
    void Item_Clear(u32 *);
    extern u8 gUnits[];
    extern u8 gConvoy[];
    void *unit;
    u32 *slot;
    s32 i;

    if (unitId != 0) {
        unit = gUnits + ((unitId - 1) * 0x280);
    } else {
        unit = NULL;
    }
    if ((unit == NULL) || (*(u32 *)((u8 *)unit + 0x188) == 0U)) {
        return 0;
    }
    i = 0;
    do {
        slot = Unit_GetItemSlot(unit, i);
        if ((slot != NULL) && (*slot != 0U)) {
            Convoy_AddItem(gConvoy, slot);
            Item_Clear(slot);
        }
        i += 1;
    } while (i < 8);
    Unit_CompactItems(unit);
    return 1;
}

s32 fn_800BC0A4(u8 arg0, s32 arg1) {
    s32 fn_8001CA2C(void *);
    u32 *Unit_GetItemSlot(void *, s32);
    extern u8 gUnits[];
    void *unit;
    u32 *temp;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    temp = Unit_GetItemSlot(unit, arg1);
    if (*temp == 0) {
        return 0;
    }
    return fn_8001CA2C(temp);
}

/* Mark the given inventory slot as droppable if the unit has none already. */
s32 Unit_SetItemDroppable(u8 unitId, s32 slotIndex) {
    u8 *Unit_GetItemSlot(void *, s32);
    extern u8 gUnits[];
    typedef struct {
        u8 pad : 1;
        u8 droppable : 1;
        u8 rest : 6;
    } ItemFlags;
    void *unit;
    s32 i;
    u8 *slot;

    if (unitId != 0) {
        unit = gUnits + ((unitId - 1) * 0x280);
    } else {
        unit = NULL;
    }
    if ((unit == NULL) || (*(u32 *)((u8 *)unit + 0x188) == 0U)) {
        return 0;
    }
    for (i = 0; i < 8; i++) {
        slot = Unit_GetItemSlot(unit, i);
        if (*(u32 *)slot != 0U && ((ItemFlags *)&slot[5])->droppable) {
            return 0;
        }
    }
    slot = Unit_GetItemSlot(unit, slotIndex);
    if (*(u32 *)slot == 0U) {
        return 0;
    }
    ((ItemFlags *)&slot[5])->droppable = 1;
    return 1;
}

s32 fn_800BC204(u8 arg0) {
    s8 fn_80037CCC(void *);
    extern u8 gUnits[];
    typedef struct {
        u8 flag : 1;
        u8 rest : 7;
    } Bit7;
    void *unit;
    s32 temp;
    s8 slot;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    temp = fn_80037CCC(unit);
    slot = (s8)temp;
    if (slot < 0) {
        return -1;
    }
    ((Bit7 *)((u8 *)unit + slot * 8 + 0x1F1))->flag = 0;
    return slot + 4;
}

typedef struct { void *x0; u8 x4; u8 b7 : 1; u8 b6 : 1; u8 rest : 6; } Item8;
typedef struct { u8 pad[0x188]; void *x188; u8 pad2[0x280 - 0x18c]; } Unit_800BC29C;
static inline Unit_800BC29C *GetUnit(u8 id) {
    extern u8 gUnits[],gUnitLists[],gBattleMap[]; return id ? &((Unit_800BC29C *)gUnits)[id - 1] : 0; }
s32 fn_800BC29C(u8 id) {
    u8 Status_Test(void *, s32);
    s8 Unit_GetActiveItemSlot(Unit_800BC29C *);
    Item8 *Unit_GetHeldItemSlot(Unit_800BC29C *, s32);
    void Mu_StartBlend(Unit_800BC29C *, s32, s32, s32);
    Unit_800BC29C *u = GetUnit(id);
    s32 i;
    if (u == 0 || u->x188 == 0) return 0;
    if (Status_Test((u8 *)u + 0x1bc, 8)) return -1;
    i = Unit_GetActiveItemSlot(u);
    if (i < 0) return -1;
    { Item8 *it = Unit_GetHeldItemSlot(u, i); it->b7 = 0; }
    if (i >= 0 && i <= 3) Mu_StartBlend(u, 0, 4, 0);
    return i;
}
s8 fn_800BC380(u8 arg0) {
    s32 fn_80037CCC(void *);
    extern u8 gUnits[];
    void *unit;
    s32 temp;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    temp = fn_80037CCC(unit);
    if ((s8)temp >= 0) {
        temp = (s8)(temp + 4);
    }
    return (s8)temp;
}

s8 fn_800BC3F4(u8 arg0) {
    s32 Unit_GetActiveItemSlot(void *);
    extern u8 gUnits[];
    void *unit;
    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    return Unit_GetActiveItemSlot(unit);
}

s32 fn_800BC458(u8 arg0, s32 arg1) {
    void fn_80094CDC(void *, s32);
    void Mu_StartBlend(void *, s32, s32, s32);
    extern u8 gUnits[];
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = gUnits + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || (*(u32 *)((u8 *)var_r31 + 0x188) == 0U)) {
        return 0;
    }
    fn_80094CDC(var_r31, arg1);
    if ((arg1 >= 0) && (arg1 <= 3)) {
        Mu_StartBlend(var_r31, 0, 4, 0);
    }
    return 1;
}

u8 fn_800BC4FC(u8 arg0, s32 arg1) {
    u32 *Unit_GetItemSlot(s32, s32);
    s32 fn_800939FC(void *, u32);
    extern u8 gUnits[];
    u32 temp_r4;
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = gUnits + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || ((u32) M2C_FIELD(var_r31, u32 *, 0x188) == 0U)) {
        return 0U;
    }
    temp_r4 = *Unit_GetItemSlot((s32) var_r31, arg1);
    if (temp_r4 != 0U) {
        return fn_800939FC(var_r31, temp_r4);
    }
    return 0U;
}

s32 fn_800BC588(u8 arg0, s32 arg1) {
    u8 *Unit_GetItemSlot(void *, s32);
    extern u8 gUnits[];
    void *unit;
    u8 *p;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    p = Unit_GetItemSlot(unit, arg1);
    return ((p[5] & 0x80) >> 7) != 0;
}

s32 fn_800BC5FC(u8 arg0) {
    s32 fn_80092F38(void *);
    s32 fn_80092F9C(void *);
    extern u8 gUnits[];
    u8 temp_r31;
    u8 temp_r0;
    void *var_r30;

    if (arg0 != 0) {
        var_r30 = gUnits + ((arg0 - 1) * 0x280);
    } else {
        var_r30 = NULL;
    }
    if ((var_r30 == NULL) || (*(u32 *)((u8 *)var_r30 + 0x188) == 0U)) {
        return 0;
    }
    temp_r31 = (u8)fn_80092F38(var_r30);
    temp_r0 = (u8)fn_80092F9C(var_r30);
    return temp_r0 + temp_r31;
}

u8 fn_800BC684(u8 arg0) {
    s32 fn_80092F9C(void);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    return (u8)fn_80092F9C();
}

s32 fn_800BC6E8(u8 arg0, s32 arg1, s32 arg2) {
    void *Unit_GetItemSlot(void *, s32);
    void Item_SetByName(void *, s32);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    Item_SetByName(Unit_GetItemSlot(unit, arg1), arg2);
    return 1;
}

s32 fn_800BC760(u8 arg0, s8 arg1) {
    void Unit_RemoveItem(void *, s32);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    Unit_RemoveItem(unit, arg1);
    return 1;
}

s32 fn_800BC7C8(u8 arg0, s32 arg1) {
    void fn_80094A54(void *, s32);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    fn_80094A54(unit, arg1);
    return 1;
}

s32 fn_800BC82C(u8 arg0, s32 arg1) {
    s32 Item_GetByIid(s32);
    s32 fn_80093010(void *, s32);
    extern u8 gUnits[];
    u8 *entry;
    s32 tmp;

    if (arg0 != 0) {
        entry = gUnits + (arg0 - 1) * 0x280;
    } else {
        entry = 0;
    }

    if (entry == 0 || *(u32 *)(entry + 0x188) == 0) {
        return 0;
    }

    tmp = Item_GetByIid(arg1);
    return fn_80093010(entry, tmp);
}

s32 fn_800BC8A8(u8 arg0, s32 arg1) {
    void fn_8003C56C(void *, s32);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    fn_8003C56C(unit, arg1);
    return 1;
}

s32 fn_800BC90C(u8 arg0, s32 arg1) {
    void fn_8003C5AC(void *, s32);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    fn_8003C5AC(unit, arg1);
    return 1;
}

s32 fn_800BC970(u8 arg0, s32 arg1) {
    void fn_8003C5EC(void *, s32);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    fn_8003C5EC(unit, arg1);
    return 1;
}

s32 fn_800BC9D4(u8 arg0, s32 arg1) {
    void fn_8003C634(void *, s32);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    fn_8003C634(unit, arg1);
    return 1;
}

s32 fn_800BCA38(u8 arg0, s32 arg1) {
    void *fn_80016A9C(s32);
    void Unit_SetDisposId(void *, u8);
    void Unit_MoveToList(void *, s32);
    void fn_80050268(void *);
    extern u8 gUnits[];
    void *temp_r3;
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = gUnits + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || (*(u32 *)((u8 *)var_r31 + 0x188) == 0U)) {
        return 0;
    }
    temp_r3 = fn_80016A9C(arg1);
    if (temp_r3 != NULL) {
        Unit_SetDisposId(var_r31, *(u8 *)((u8 *)temp_r3 + 0x199));
    }
    Unit_MoveToList(var_r31, arg1);
    fn_80050268(var_r31);
    return 1;
}

s16 fn_800BCADC(void) {
    extern u8 gTalkState[];
    return *(s16 *)((char *)gTalkState + 2);
}

s16 fn_800BCAEC(void) {
    extern u8 gTalkState[];
    return *(s16 *)((char *)gTalkState + 0);
}

u8 fn_800BCAFC(void) {
    extern u16 gBattleState[];
    return (*(u8*)((u8*)&gBattleState[0x10/2]));
}

s16 fn_800BCB0C(s32 arg0, s16 arg1) {
    extern u16 gBattleState[];
    gBattleState[arg0] = arg1;
    return arg1;
}

extern u16 gBattleState[700];
s32 fn_800BCB24(s32 arg0) {
    return ((s16 *)gBattleState)[arg0];
}

s32 fn_800BCB38(s32 arg0, s32 arg1) {
    void fn_8014CA98(void *, s32, s32);
    extern u16 gBattleState[700];

    fn_8014CA98(gBattleState, arg0, arg1);
    return 1;
}

extern u16 gBattleState[];
s32 fn_800BCB70(void) {
    return *(s32*)(((char*)&gBattleState) + 0x18);
}

s32 fn_800BCB80(s32 arg0) {
    extern u16 gBattleState[700];
    fn_8014D268(gBattleState, arg0);
    return arg0;
}

s32 fn_800BCBBC(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    fn_8014D254(gBattleState, arg0, arg1, arg2, arg3);
    return 1;
}

u8 fn_800BCC04(void) {
    return *(u8 *)((u8 *)gBattleState + 0x11);
}

void fn_800BCC14(s8 arg0) {
    *(u8*)((u8*)gBattleState + 0x11) = arg0;
}

s16 fn_800BCC24(void) {
    return *(s16*)((char*)gBattleState + 0x12);
}

void fn_800BCC34(s16 arg0) {
    *(u16*)((char*)gBattleState + 0x12) = arg0;
}

#pragma peephole off
s32 fn_800BCC44(void) {
    void *Unit_FindByPerson(void);
    void Person_GetByPid(void);
    void *temp_r3;

    Person_GetByPid();
    temp_r3 = Unit_FindByPerson();
    if (temp_r3 == NULL) {
        return 0;
    }
    return (*(s32 *)((u8 *)temp_r3 + 0x1A0) & 8) == 0;
}

#pragma peephole reset
s32 fn_800BCC88(u8 arg0) {
    u8 Status_Test(void *, s32);
    extern u8 gUnits[];
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = gUnits + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || ((u32) *(u32 *)((u8 *)var_r31 + 0x188) == 0U)) {
        return 0;
    }
    if (Status_Test((u8 *)var_r31 + 0x1BC, 9) != 0) {
        return 2;
    }
    return Status_Test((void *)((u32)var_r31 + 0x1BC), 8) != 0;
}
extern u8 gUiContext[24];
u8 fn_800BCD24(void) {
    return gUiContext[9];
}

u8 fn_800BCD34(void) {
    extern u8 gUiContext[24];
    u8 *p = *(u8 **)(gUiContext + 4);
    if (p != NULL) {
        return p[0x198];
    }
    return 0;
}

u8 fn_800BCD58(void) {
    extern u8 gUiContext[24];
    u8 *p = *(u8 **)gUiContext;
    if (p != NULL) {
        return p[0x198];
    }
    return 0;
}

s32 fn_800BCD7C(u8 arg0) {
    extern u8 gUnits[];
    void *unit;
    u32 flags;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || M2C_FIELD(unit, void **, 0x188) == NULL) {
        return 0;
    }
    switch (M2C_FIELD(M2C_FIELD(unit, void **, 0x190), u8 *, 8)) {
    case 0:
    case 5:
        flags = M2C_FIELD(unit, u32 *, 0x1A0);
        flags |= 0x20000;
        M2C_FIELD(unit, u32 *, 0x1A0) = flags;
        break;
    }
    return 1;
}

s32 fn_800BCDF0(u8 arg0) {
    extern u8 gUnits[];
    void *unit;
    u32 flags;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || M2C_FIELD(unit, void **, 0x188) == NULL) {
        return 0;
    }
    switch (M2C_FIELD(M2C_FIELD(unit, void **, 0x190), u8 *, 8)) {
    case 0:
    case 5:
        flags = M2C_FIELD(unit, u32 *, 0x1A0);
        flags |= 0x10000;
        M2C_FIELD(unit, u32 *, 0x1A0) = flags;
        break;
    }
    return 1;
}

s32 fn_800BCE64(u32 arg0, s32 arg1)
{
    extern u8 gUnits[];
    s32 Job_GetByJid(s32);

    u8 *unit;
    s32 value;

    if ((u8)arg0 != 0) {
        unit = gUnits + ((u8)arg0 - 1) * 0x280;
    } else {
        unit = 0;
    }

    if (unit == 0) {
        return 0;
    }

    value = *(s32 *)(unit + 0x18C);

    return (u8)(value == Job_GetByJid(arg1));
}

s32 fn_800BCED4(u32 arg0, void *arg1)
{
    extern u8 gUnits[];
    extern void *Person_GetByPid(void *);

    u8 *unit;
    void *value;

    if ((u8)arg0 != 0) {
        unit = gUnits + ((u8)arg0 - 1) * 0x280;
    } else {
        unit = 0;
    }

    if (unit == 0) {
        return 0;
    }

    value = *(void **)(unit + 0x188);

    return (u8)(value == Person_GetByPid(arg1));
}

s32 fn_800BCF44(u8 arg0, s32 arg1) {
    M2C_UNK fn_8003868C(void *, s32);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    fn_8003868C(unit, arg1);
    return 0;
}

s32 fn_800BCF9C(u8 arg0, s32 arg1) {
    M2C_UNK Unit_SetHp(void *, s32);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    Unit_SetHp(unit, arg1);
    return 0;
}

s32 fn_800BCFF4(u8 arg0)
{
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    return *(s8 *)((u8 *)unit + 0x1A8);
}

s32 fn_800BD034(u8 arg0) {
    s8 Unit_GetMaxHp(void *);
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    return Unit_GetMaxHp(unit);
}

s32 fn_800BD08C(u8 arg0) {
    extern u8 gUnits[];
    void *unit;

    if (arg0 != 0) {
        unit = gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    return M2C_FIELD(unit, s8 *, 0x19F);
}

extern u16 gUnits[];
s32 fn_800BD0CC(u8 arg0) {
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &gUnits[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if (var_r3 == NULL) {
        return 0;
    }
    return *(s8 *)((u8 *)var_r3 + 0x19E);
}

s32 fn_800BD10C(u8 arg0) {
    u8 Status_Test(void *, s32);
    s32 fn_800C0658(void);
    void fn_801EDA88(void *, s32);
    void fn_80013864(void);
    void *unit;

    if (arg0 != 0) {
        unit = (u8 *)gUnits + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    if (Status_Test((u8 *)unit + 0x1bc, 0x4d) == 0) {
        return 0;
    }
    fn_801EDA88(unit, fn_800C0658());
    fn_80013864();
    return 1;
}

/* Script: have rescuerId carry rescueeId (place beside, link, refresh map). */
s32 ScriptCmd_UnitRescue(u8 rescuerId, u8 rescueeId) {
    void Unit_SetMapPos(void *, s8, u8);
    void Unit_Rescue(void *, void *);
    void Map_RefreshUnitMap(void *);
    extern u8 gBattleMap[];
    void *rescuer;
    void *rescuee;

    if (rescuerId != 0) {
        rescuer = (u8 *)gUnits + ((rescuerId - 1) * 0x280);
    } else {
        rescuer = NULL;
    }
    if (rescuer == NULL || *(u32 *)((u8 *)rescuer + 0x188) == 0U) {
        return 0;
    }
    if (rescueeId != 0) {
        rescuee = (u8 *)gUnits + ((rescueeId - 1) * 0x280);
    } else {
        rescuee = NULL;
    }
    if (rescuee == NULL || *(u32 *)((u8 *)rescuee + 0x188) == 0U) {
        return 0;
    }
    Unit_SetMapPos(rescuee, (s8)(*(u8 *)((u8 *)rescuer + 0x19E) + 1), *(u8 *)((u8 *)rescuer + 0x19F));
    Unit_Rescue(rescuer, rescuee);
    Map_RefreshUnitMap(&gBattleMap);
    return 1;
}

s32 fn_800BD284(u8 arg0) {
    void Unit_SeparateRescue(void *, u8, u8);
    extern u16 gUnits[];
    void *temp_r31;
    void *var_r30;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = (u8 *)gUnits + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    var_r30 = var_r3;
    if ((var_r3 == NULL) || (*(u32 *)((u8 *)var_r3 + 0x188) == 0U)) {
        return 0;
    }
    if (*(s32 *)((u8 *)var_r3 + 0x1A0) & 4) {
        var_r30 = *(void **)((u8 *)var_r3 + 0x194);
    }
    temp_r31 = *(void **)((u8 *)var_r30 + 0x194);
    Unit_SeparateRescue(var_r30, *(u8 *)((u8 *)var_r30 + 0x19E), *(u8 *)((u8 *)var_r30 + 0x19F));
    *(s32 *)((u8 *)var_r30 + 0x1A0) = *(s32 *)((u8 *)var_r30 + 0x1A0) & ~1;
    *(s32 *)((u8 *)temp_r31 + 0x1A0) = *(s32 *)((u8 *)temp_r31 + 0x1A0) & ~1;
    return 1;
}

s32 fn_800BD334(u8 arg0, s32 arg1)
{
  extern u16 gUnits[];
  u8 *new_var;
  void *var_r3;
  if (arg0 != 0)
  {
    var_r3 = &gUnits[(arg0 - 1) * 0x140];
  }
  else
  {
    var_r3 = NULL;
  }
  if ((var_r3 == NULL) || ((*((u32 *) (((u8 *) var_r3) + 0x188))) == 0U))
  {
    return 0;
  }
  new_var = (u8 *) var_r3;
  *((s32 *) (new_var + 0x1A0)) = (*((s32 *) (new_var + 0x1A0))) | arg1;
  return *((s32 *) (new_var + 0x1A0));
}

s32 fn_800BD388(u8 arg0, s32 arg1)
{
  u8 *new_var;
  void *var_r3;
  if (arg0 != 0)
  {
    var_r3 = &gUnits[(arg0 - 1) * 0x140];
  }
  else
  {
    var_r3 = NULL;
  }
  if ((var_r3 == NULL) || ((*((u32 *) (((u8 *) var_r3) + 0x188))) == 0U))
  {
    return 0;
  }
  new_var = (u8 *) var_r3;
  *((s32 *) (new_var + 0x1A0)) = *((s32 *) (new_var + 0x1A0));
  *((s32 *) (new_var + 0x1A0)) = (*((s32 *) (new_var + 0x1A0))) & (~arg1);
  return *((s32 *) (new_var + 0x1A0));
}

s32 fn_800BD3DC(u8 arg0) {
    extern u16 gUnits[];
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &gUnits[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || (*(u32 *)((u8 *)var_r3 + 0x188) == 0U)) {
        return 0;
    }
    return *(s32 *)((u8 *)var_r3 + 0x1A0);
}

u8 fn_800BD424(u8 arg0) {
    extern u16 gUnits[];
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &gUnits[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || (*(u32 *)((u8 *)var_r3 + 0x188) == 0U)) {
        return 0U;
    }
    return *(u8 *)((u8 *)*(void **)((u8 *)var_r3 + 0x190) + 8);
}

u8 fn_800BD470(u8 arg0) {
    extern u16 gUnits[];
    void *temp_r3;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = (void *)((u8 *)gUnits + ((arg0 - 1) * 0x280));
    } else {
        var_r3 = NULL;
    }
    if (var_r3 == NULL) {
        return 0U;
    }
    temp_r3 = *(void **)((u8 *)var_r3 + 0x184);
    if (temp_r3 != NULL) {
        return *(u8 *)((u8 *)temp_r3 + 0x198);
    }
    return 0U;
}

u8 ScriptCmd_UnitGetByPos(s32 mapX, s32 mapY) {
    /* Return the unit index at (mapX, mapY), or 0 if none among allegiances 0-3. */
    void Allegiance_FillMask(s32, void *);
    extern u16 gUnits[];
    u8 allegMask[8];
    u8 *found;
    u8 *unit;
    s32 i;

    found = NULL;
    Allegiance_FillMask(3, allegMask);
    for (i = 1; i <= 0x9F; i++) {
        if ((u8)i != 0) {
            unit = (u8 *)gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            if (allegMask[*(u8 *)(*(u8 **)(unit + 0x190) + 8)] != 0) {
                if (!(*(u32 *)(unit + 0x1A0) & 0x1C)) {
                    if (mapX == (s8)*(u8 *)(unit + 0x19E)) {
                        if (mapY == (s8)*(u8 *)(unit + 0x19F)) {
                            found = unit;
                        }
                    }
                }
            }
        }
    }
    if (found == NULL) {
        return 0;
    }
    return found[0x198];
}

u8 fn_800BD5AC(void) {
    void *Unit_FindByName();
    void *temp_r3;

    temp_r3 = Unit_FindByName();
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u8 *, 0x198);
}

void fn_800BD5E0(s32 arg0) {
    void fn_80015680(void *);
    extern u8 gUnitLists[];
    fn_80015680(&gUnitLists[arg0 * 0xC]);
}

extern u16 gUnitLists[50];
u8 fn_800BD610(s32 arg0) {
    extern u16 gUnitLists[50];
    void *temp_r3;

    temp_r3 = *(void **)((u8 *)gUnitLists + (arg0 * 0xC));
    if (temp_r3 == NULL) {
        return 0U;
    }
    return *(u8 *)((u8 *)temp_r3 + 0x198);
}

/* Script UnitSet: write member mid on unit id (level/exp/gauge/HP/dispos); unsupported mids return 0. */
s32 ScriptCmd_UnitSet(u8 id, s32 mid, s32 val) {
    extern u16 gUnits[];
    void fn_8003868C(void *, s32);
    void Unit_SetHp(void *, s32);
    void Unit_SetDisposId(void *, u8);
    u8 *unit;

    if (id != 0) {
        unit = (u8 *)gUnits + (id - 1) * 0x280;
    } else {
        unit = 0;
    }
    if (unit == 0 || *(u32 *)(unit + 0x188) == 0) {
        return 0;
    }
    switch (mid) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
    case 12:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
        return 0;
    case 0:
        unit[0x19A] = val;
        break;
    case 6:
        fn_8003868C(unit, val);
        break;
    case 7:
        unit[0x19C] = val;
        break;
    case 8:
        Unit_SetHp(unit, val);
        break;
    case 13:
        *(s16 *)(unit + 0x228) = val;
        break;
    case 0x26:
        Unit_SetDisposId(unit, (u8)val);
        break;
    }
    return val;
}

s32 fn_800BD704(u8 id,u32 property) {
extern u16 gUnits[];
f32 fn_80037904(void *,s32);
u8 *unit; void *person; void *p; s32 bonus; s32 value;
if(id)unit=(u8 *)gUnits+(id-1)*0x280;else unit=0;
if(!unit || !(person=M2C_FIELD(unit,void **,0x188)))return 0;
switch(property){
case 0: case 48: return 0;
case 1: p=M2C_FIELD(unit,void **,388); return p?M2C_FIELD(p,u8 *,0x198):0;
case 2: p=M2C_FIELD(unit,void **,384); return p?M2C_FIELD(p,u8 *,0x198):0;
case 3: return M2C_FIELD(M2C_FIELD(unit,void **,0x190),u8 *,8);
case 4: p=M2C_FIELD(unit,void **,0x194);return p?M2C_FIELD(p,u8 *,0x198):0;
case 5: return M2C_FIELD(unit,u8 *,0x198);
case 6: return M2C_FIELD(unit,s8 *,0x19a);
case 7: return (u8)fn_800386B0(unit);
case 8: bonus=(u8)Status_Test(unit+0x1bc,9)?100:0;value = (s8)fn_8003C114(unit); return value + bonus;
case 9: return M2C_FIELD(unit,s8 *,0x19e);
case 10: return M2C_FIELD(unit,s8 *,0x19f);
case 11: return (s32)(100.0f*fn_80037904(unit,-1));
case 12: return (s8)Unit_GetMaxHp(unit);
case 13: return M2C_FIELD(unit,s8 *,0x1a8);
case 14: return (s8)Unit_GetCarryWtLimit(unit);
case 15: return (s8)Unit_GetMagAtk(unit);
case 16: return (s8)fn_8003AF28(unit);
case 17: return (s8)fn_8003AEB0(unit);
case 18: return (s8)fn_8003ACF8(unit);
case 19: return (s8)fn_8003AA40(unit);
case 20: return (s8)fn_8003A778(unit);
case 21: return (s8)Unit_GetCon(unit);
case 22: return (s8)Unit_GetMov(unit);
case 23: return (s8)fn_8003A1C4(unit);
case 24: return M2C_FIELD(unit,u16 *,552);
case 25: return M2C_FIELD(unit,u16 *,554);
case 26: return M2C_FIELD(unit,u16 *,558);
case 27: return M2C_FIELD(unit,u16 *,560);
case 28: return M2C_FIELD(unit,u16 *,562);
case 29: return M2C_FIELD(unit,u8 *,564);
case 30: return M2C_FIELD(unit,u8 *,565);
case 31: return (u8)Ai_GetFactionBehavior(unit+0x236);
case 32: return M2C_FIELD(person,u16 *,0x18);
case 33: return M2C_FIELD(M2C_FIELD(unit,void **,0x18c),u16 *,0x38);
case 34: return M2C_FIELD(unit,u8 *,0x199);
case 35: return (u8)Unit_GetWpnExp(unit,0);
case 36: return (u8)Unit_GetWpnExp(unit,1);
case 37: return (u8)Unit_GetWpnExp(unit,2);
case 38: return (u8)Unit_GetWpnExp(unit,3);
case 39: return (u8)Unit_GetWpnExp(unit,4);
case 40: return (u8)Unit_GetWpnExp(unit,5);
case 41: return (u8)Unit_GetWpnExp(unit,6);
case 42: return (u8)Unit_GetWpnExp(unit,7);
case 43: if((u8)Status_Test(unit+0x1bc,0x28))return (u8)Unit_GetWpnExp(unit,7);return 0;
case 44: return (u8)Status_Test(unit+0x1bc,0x22)!=0;
default: break;
}
return 0;
}

void fn_800BDA9C(u8 *arg0, void *arg1)
{
    extern u8 Stream_ReadU8(void *);
    u8 *a0;
    void *a1;
    s32 i;

    a0 = arg0;
    a1 = arg1;
    i = 0;
    do {
        a0[i + 0x300] = Stream_ReadU8(a1);
        i++;
    } while (i < 12);
}

void fn_800BDAF8(u8 *arg0, void *arg1)
{
    extern void Stream_WriteU8(void *, s32);
    u8 *a0;
    void *a1;
    s32 i;

    a0 = arg0;
    a1 = arg1;
    i = 0;
    do {
        Stream_WriteU8(a1, a0[i + 0x300]);
        i++;
    } while (i < 12);
}

void fn_800BDB54(s32 arg0, s32 arg1) {
    s32 addr;
    u8 v;
    s32 bit;

    addr = arg0 + (arg1 >> 3);
    bit = 1 << (arg1 & 7);
    v = *(u8 *)(addr + 0x300);
    *(u8 *)(addr + 0x300) = v & ~bit;
}

void fn_800BDB78(s32 arg0, s32 arg1) {
    s32 addr;
    u8 v;
    s32 bit;

    addr = arg0 + (arg1 >> 3);
    bit = 1 << (arg1 & 7);
    v = *(u8 *)(addr + 0x300);
    *(u8 *)(addr + 0x300) = v | bit;
}

s32 fn_800BDB9C(s32 arg0, s32 arg1) {
    u8 *p = (u8 *)(arg1 >> 3);
    s32 bit = arg1 & 7;
    p = (u8 *)(arg0 + (s32)p);
    return (p[0x300] & (1U << bit)) != 0;
}

static inline s32 EventFlag_Find(s32 base, s32 name) {
    u32 hash = fn_8000D598(name);
    s32 walk = base;
    s32 i = 0;
    do {
        if (hash == *(u32 *)(walk + 0x180) && Str_Cmp(*(s32 *)walk, name) == 0) return i;
        i++;
        walk += 4;
    } while (i < 0x60);
    return -1;
}
#pragma use_lmw_stmw on
void EventFlag_Clear(s32 arg0, s32 arg1) {
    s32 i;
    s32 p;

    i = EventFlag_Find(arg0, arg1);
    if (i >= 0) {
        p = arg0 + (i >> 3);
        *(u8 *)(p + 0x300) = *(u8 *)(p + 0x300) & ~(1 << (i & 7));
    }
}

#pragma dont_inline on
#pragma use_lmw_stmw on
#pragma dont_inline off
void fn_800BDC68(void *arg0, void *arg1) {
    s32 i;
    s32 p;

    i = EventFlag_Find((s32)arg0, (s32)arg1);
    if (i >= 0) {
        p = (s32)arg0 + (i >> 3);
        *(u8 *)(p + 0x300) = *(u8 *)(p + 0x300) | (1 << (i & 7));
    }
}
#pragma dont_inline reset
#pragma dont_inline off
s32 EventFlag_IsSet(s32 arg0, s32 arg1) {
    s32 i;
    u8 *p;

    if (*(s8 *)arg1 == 0) return 0;
    i = EventFlag_Find(arg0, arg1);
    if (i < 0) return 0;
    p = (u8 *)arg0;
    p += i >> 3;
    return (p[0x300] & (1 << (i & 7))) != 0;
}
#pragma dont_inline reset
#pragma push
#pragma opt_common_subs off
#pragma opt_strength_reduction off
#pragma scheduling on
#pragma push
#pragma optimization_level 4
typedef struct { void *keys[0x60]; s32 vals[0x60]; } S_800BDDCC;
void fn_800BDDCC(void *s_, s32 k_) {
    S_800BDDCC *s = (S_800BDDCC *)s_;
    void *k = (void *)k_;
    s32 fn_8000D598(void *);
    s32 i;
    for (i = 0x5f; i >= 0; i--) {
        if (s->keys[i] == 0) {
            s->keys[i] = k;
            s->vals[i] = fn_8000D598(k);
            return;
        }
    }
}
#pragma pop
#pragma pop
void fn_800BDE40(void *arg0, s32 arg1) {
    struct Foo {
        u32 arr[0x60];
        u32 other[0x60];
        u8 flags[0x40];
    };
    s32 i;
    struct Foo *self = (struct Foo *)arg0;
    for (i = 0; i < 0x60; i++) {
        if (self->arr[i] == 0) {
            self->arr[i] = arg1;
            self->other[i] = fn_8000D598(arg1);
            self->flags[i >> 3] &= ~(1 << (i & 7));
            return;
        }
    }
}

void fn_800BDED8(void *arg0) {
    u32 *p;
    s32 i;
    u32 z;

    p = (u32 *)((u8 *)arg0 + 0x17C);
    i = 0x5F;
    z = 0;
    for (; i >= 0; i--) {
        if (*p == 0) break;
        {
            *p = z;
            *(p + 0x60) = z;
        }
        p--;
    }

    for (i = 0; i < 0x60; i++) {
        if (((u32 *)arg0)[i] == 0) {
            ((u8 *)arg0)[0x300 + (i >> 3)] &= ~(1 << (i & 7));
        }
    }
}

#pragma push
#pragma optimization_level 4
void fn_800BE068(void *arg0) {
 s32 i;
 u32 *p;
 u32 *q;
 u32 z;
 z=0;
 ((u8 *)arg0)[768]=z;
 ((u8 *)arg0)[769]=z;
 ((u8 *)arg0)[770]=z;
 ((u8 *)arg0)[771]=z;
 ((u8 *)arg0)[772]=z;
 ((u8 *)arg0)[773]=z;
 ((u8 *)arg0)[774]=z;
 ((u8 *)arg0)[775]=z;
 ((u8 *)arg0)[776]=z;
 ((u8 *)arg0)[777]=z;
 ((u8 *)arg0)[778]=z;
 ((u8 *)arg0)[779]=z;
 p=(u32 *)((u8 *)arg0+0x17C);
 i=0x5F;
 for(;i>=0;i--) {
  if(*p==0) break;
  *p=z;
  p[0x60]=z;
  p--;
 }
 q=(u32 *)arg0;
 for(i=0;i<0x60;q++,i++) {
  if(*q==0) ((u8 *)arg0)[0x300+(i>>3)] &= ~(1<<(i&7));
 }
}
#pragma pop
void EventFlag_Reset(s32 *flags) {
    /* Clear all 0x60 event-flag name/hash slots and the 12-byte occupancy bitset at +0x300. */
    s32 *p;
    s32 i;

    p = flags;
    for (i = 0; i < 6; i++) {
        p[0] = 0;
        p[0x60] = 0;
        p[1] = 0;
        p[0x61] = 0;
        p[2] = 0;
        p[0x62] = 0;
        p[3] = 0;
        p[0x63] = 0;
        p[4] = 0;
        p[0x64] = 0;
        p[5] = 0;
        p[0x65] = 0;
        p[6] = 0;
        p[0x66] = 0;
        p[7] = 0;
        p[0x67] = 0;
        p[8] = 0;
        p[0x68] = 0;
        p[9] = 0;
        p[0x69] = 0;
        p[10] = 0;
        p[0x6A] = 0;
        p[11] = 0;
        p[0x6B] = 0;
        p[12] = 0;
        p[0x6C] = 0;
        p[13] = 0;
        p[0x6D] = 0;
        p[14] = 0;
        p[0x6E] = 0;
        p[15] = 0;
        p[0x6F] = 0;
        p += 16;
    }

    ((u8 *)flags)[0x300] = 0;
    ((u8 *)flags)[0x301] = 0;
    ((u8 *)flags)[0x302] = 0;
    ((u8 *)flags)[0x303] = 0;
    ((u8 *)flags)[0x304] = 0;
    ((u8 *)flags)[0x305] = 0;
    ((u8 *)flags)[0x306] = 0;
    ((u8 *)flags)[0x307] = 0;
    ((u8 *)flags)[0x308] = 0;
    ((u8 *)flags)[0x309] = 0;
    ((u8 *)flags)[0x30A] = 0;
    ((u8 *)flags)[0x30B] = 0;
}

#pragma global_optimizer off
s32 Battle_CheckEndFlags(void) {
    /* If chapter-end event flags are set, jump BMapMain and tear down CP phase gfx. */
    u8 EventFlag_IsSet(void *, void *);
    void BMapMain_Goto(s32);
    void GfxEnt_UnlinkByName(void *);
    void Process_UnlinkByKey(void *);
    extern u8 gMapEventFlagNames[];
    extern u8 Proc_CpPhaseMain[];
    void *flags;

    flags = (u8 *)gBattleState + 0xB4;
    if (EventFlag_IsSet(flags, gMapEventFlagNames + 0xF9) != 0) {
        BMapMain_Goto(3);
    }
    if (EventFlag_IsSet(flags, gMapEventFlagNames + 0x105) != 0) {
        BMapMain_Goto(1);
    }
    if (EventFlag_IsSet(flags, gMapEventFlagNames + 0xF9) != 0 ||
        EventFlag_IsSet(flags, gMapEventFlagNames + 0x105) != 0) {
        GfxEnt_UnlinkByName(gMapEventFlagNames + 0x111);
        Process_UnlinkByKey(Proc_CpPhaseMain);
        return 1;
    }
    return 0;
}

#pragma optimization_level 3
s32 fn_800BE3CC(void *unitA, void *unitB, u8 mode, s32 parent) {
#pragma optimization_level 3
    void *Event_NextEntry(void *);
    void *Event_GetString(void *, u32);
    void *Person_GetByPid(void);
    void *Person_Get(s32);
    void *Process_CreateChild(void *, s32);
    s32 Talk_MatchesStoredPair(void *);
    void *fn_800A8524(void *, void *, u8);
    void *Res_GetByName(void *);
    void fn_8011D908(void *, s32);
    extern s16 gTalkState[];
    void *entry;
    s16 *state;
    void *personA, *personB, *statePerson0, *statePerson1;
    void *proc;
    void *msg;
    u8 found;

    if (unitA == 0 || unitB == 0) {
        return 0;
    }
    state = gTalkState;
    state[4] = *(u16 *)((u8 *)unitB + 0x18);
    state[3] = *(u16 *)((u8 *)unitA + 0x18);
    state[0] = mode;

    entry = Event_NextEntry(0);
    while (entry) {
        if (*(s8 *)((u8 *)entry + 0xC) == 0xD) {
            if (gTalkState[0] != *(s16 *)((u8 *)entry + 0x18)) {
                found = 0;
            } else {
                Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x14));
                personA = Person_GetByPid();
                Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x16));
                personB = Person_GetByPid();
                statePerson0 = Person_Get(state[3]);
                statePerson1 = Person_Get(state[4]);
                if (statePerson0 == personA && statePerson1 == personB) {
                    found = 1;
                } else if (statePerson0 == personB && statePerson1 == personA) {
                    found = 1;
                } else {
                    found = 0;
                }
            }
            if ((u32)found == 0) {

            } else {
                found = 1;
                goto check;
            }
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
check:
    if ((short)found == 0) {

    } else {
        proc = Process_CreateChild(E_EventCaller_script, parent);
        *(s32 *)((u8 *)proc + 0x34) = 0xD;
        *(s32 *)((u8 *)proc + 0x38) = (s32)Talk_MatchesStoredPair;
        return 1;
    }
    msg = fn_800A8524(unitA, unitB, mode);
    if (Res_GetByName(msg) != 0) {
        fn_8011D908(msg, parent);
        return 1;
    }
    return 0;
}
#pragma optimization_level reset
/* True if this talk entry's mode and persons match gTalkState (either order). */
s32 Talk_MatchesStoredPair(void *entry) {
    void Event_GetString(void *, u32);
    void *Person_GetByPid(void);
    void *Person_Get(s32);
    extern s16 gTalkState[];
    void *obj;
    void *personA;
    void *personB;
    void *statePerson0;
    void *statePerson1;

    obj = entry;
    if (gTalkState[0] != *(s16 *)((u8 *)obj + 0x18)) {
        return 0;
    }
    Event_GetString(obj, (u16)*(s16 *)((u8 *)obj + 0x14));
    personA = Person_GetByPid();
    Event_GetString(obj, (u16)*(s16 *)((u8 *)obj + 0x16));
    personB = Person_GetByPid();
    statePerson0 = Person_Get(gTalkState[3]);
    statePerson1 = Person_Get(gTalkState[4]);
    if (statePerson0 == personA && statePerson1 == personB) {
        return 1;
    }
    if (statePerson0 == personB && statePerson1 == personA) {
        return 1;
    }
    return 0;
}
#pragma global_optimizer on
/* Find the index-th kind-0xE (talk) event, spawn E_Event_script on it, clear run-flag and UI input. */
void Event_StartTalkByIndex(s32 index, s32 parent) {
    void *Event_NextEntry(void *);
    void *Process_CreateChild(void *, s32);
    void EventFlag_Clear(void *, void *);
    extern u8 gTalkState[];
    extern u8 E_Event_script[];
    extern u8 gMapEventFlagNames[];
    extern s32 gUiInputFlags;
    s32 count;
    u8 *entry;
    s32 kind;
    void *proc;

    entry = Event_NextEntry(0);
    count = 0;
    kind = 0xE;
    while (entry != 0) {
        if (entry[0xC] == kind) {
            if (count++ == index) {
                break;
            }
        }
        entry = Event_NextEntry(entry);
    }
    gTalkState[0xA] = 0;
    proc = Process_CreateChild(E_Event_script, parent);
    *(void **)((u8 *)proc + 0x30) = entry;
    EventFlag_Clear((u8 *)gBattleState + 0xB4, gMapEventFlagNames + 0x11C);
    gUiInputFlags &= ~1;
}

void fn_800BE728(s32 arg0) {
    void *Event_NextEntry(void *);
    void Event_GetString(void *, u32);
    u8 *entry;
    s32 count;
    s32 kind;

    kind = 0xE;
    entry = Event_NextEntry(0);
    count = 0;
    while (entry != 0) {
        if (entry[0xC] == kind) {
            if (count++ == arg0) {
                break;
            }
        }
        entry = Event_NextEntry(entry);
    }
    Event_GetString(entry, (u16)*(s16 *)(entry + 0x16));
}

s16 fn_800BE798(s32 arg0) {
    void *Event_NextEntry(void *);
    u8 *entry;
    s32 count;
    s32 kind;

    kind = 0xE;
    entry = Event_NextEntry(0);
    count = 0;
    while (entry != 0) {
        if (entry[0xC] == kind) {
            if (count++ == arg0) {
                break;
            }
        }
        entry = Event_NextEntry(entry);
    }
    return *(s16 *)(entry + 0x18);
}

#pragma scheduling on
#pragma push
#pragma dont_inline off
typedef struct { u8 pad[0xc]; u8 type; u8 pad2[7]; s16 x14; } Ev;
static inline Ev *NthEvent(s32 type, s32 n) {
    Ev *Event_NextEntry(Ev *);
    s32 i;
    Ev *p = Event_NextEntry(0);
    i = 0;
    while (p) {
        if (p->type == type) {
            if (i++ == n) break;
        }
        p = Event_NextEntry(p);
    }
    return p;
}
u32 fn_800BE800(s32 n) {
    extern u8 gTalkState[];
    void fn_80013778(s32, Ev *);
    s32 fn_80013880(void);
    Ev *p = NthEvent(0xe, n);
    gTalkState[0xa] = 1;
    fn_80013778(0, p);
    return fn_80013880() ? 1 : 0;
}
#pragma pop
extern u8 lbl_80317334[];
extern s32 lbl_80368320;
void fn_800BE890(s32 arg0) {
    void *Event_NextEntry(void *);
    s32 Event_GetString(void *, u32);
    s32 EventFlag_IsSet(void *, s32, void *);
    u8 *entry;
    s32 count;
    s32 kind;

    kind = 0xE;
    entry = Event_NextEntry(0);
    count = 0;
    while (entry != 0) {
        if (entry[0xC] == kind) {
            if (count++ == arg0) {
                break;
            }
        }
        entry = Event_NextEntry(entry);
    }
    EventFlag_IsSet((u8 *)gBattleState + 0xb4, Event_GetString(entry, (u16)*(s16 *)(entry + 0x14)), gBattleState);
}

s32 fn_800BE914(void)
{
  void *Event_NextEntry(void *);
  u8 *entry;
  s32 count;
  int new_var;
  count = 0;
  new_var = 0xE;
  entry = (u8 *) Event_NextEntry(0);
  while (entry != 0)
  {
    if (entry[0xC] == new_var)
    {
      count++;
    }
    entry = (u8 *) Event_NextEntry(entry);
  }

  return count;
}

s32 fn_800BE968(u8 arg0, s8 arg1, s8 arg2) {
    extern s16 gTalkState[];
    void *Event_NextEntry(void *);
    s32 Event_GetString(void *, u16);
    u8 EventFlag_IsSet(void *, s32);
    s16 *state;
    s8 *entry;
    u8 *flags;
    s16 value;
    u8 found;

    state = gTalkState;
    state[0] = arg1;
    state[1] = arg2;
    state[2] = arg0;

    entry = Event_NextEntry(0);
    flags = (u8 *)gBattleState + 0xB4;
    while (entry != 0) {
        if (entry[0xC] == 5) {
            value = gTalkState[0];
            if (value >= 0 && value != *(s16 *)(entry + 0x14)) {
                found = 0;
            } else {
                value = state[1];
                if (value >= 0 && value != *(s16 *)(entry + 0x16)) {
                    found = 0;
                } else {
                    value = state[2];
                    if (value != 0 && value != *(s16 *)(entry + 0x18)) {
                        found = 0;
                    } else if (EventFlag_IsSet(flags, Event_GetString(entry, (u16)*(s16 *)(entry + 0x1A))) != 0) {
                        found = 0;
                    } else {
                        found = 1;
                        gTalkState[0] = *(s16 *)(entry + 0x14);
                        state[1] = *(s16 *)(entry + 0x16);
                        state[2] = *(s16 *)(entry + 0x18);
                    }
                }
            }
            if (found) return 1;
        }
        entry = Event_NextEntry(entry);
    }
    return 0;
}

s32 fn_800BEAC0(s32 parent, u8 arg1, s8 arg2, s8 arg3) {
    extern s16 gTalkState[];
    void *Event_NextEntry(void *);
    s32 Event_GetString(void *, u16);
    u8 EventFlag_IsSet(void *, s32);
    void *Process_CreateChild(void *, s32);
    void fn_800BEC5C(void);
    s16 *state;
    s8 *entry;
    u8 *flags;
    s16 value;
    u8 found;
    void *proc;

    state = gTalkState;
    state[0] = arg2;
    state[1] = arg3;
    state[2] = arg1;

    entry = Event_NextEntry(0);
    flags = (u8 *)gBattleState + 0xB4;
    while (entry != 0) {
        if (entry[0xC] == 5) {
            value = gTalkState[0];
            if (value >= 0 && value != *(s16 *)(entry + 0x14)) {
                found = 0;
            } else {
                value = state[1];
                if (value >= 0 && value != *(s16 *)(entry + 0x16)) {
                    found = 0;
                } else {
                    value = state[2];
                    if (value != 0 && value != *(s16 *)(entry + 0x18)) {
                        found = 0;
                    } else if (EventFlag_IsSet(flags, Event_GetString(entry, (u16)*(s16 *)(entry + 0x1A))) != 0) {
                        found = 0;
                    } else {
                        found = 1;
                        gTalkState[0] = *(s16 *)(entry + 0x14);
                        state[1] = *(s16 *)(entry + 0x16);
                        state[2] = *(s16 *)(entry + 0x18);
                    }
                }
            }
            if (found == 0) {

            } else {
                found = 1;
                goto check;
            }
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
check:
    if (found == 0) {
        return 0;
    }
    proc = Process_CreateChild(E_EventCaller_script, parent);
    *(s32 *)((u8 *)proc + 0x34) = 5;
    *(s32 *)((u8 *)proc + 0x38) = (s32)fn_800BEC5C;
    return 1;
}

#pragma optimization_level 3
s32 fn_800BEC5C(void *arg0) {
    extern s16 gTalkState[];
    s32 Event_GetString(void *, u16);
    u8 EventFlag_IsSet(void *, s32);
    s16 *state1;
    s16 *state2;
    s16 value;

    value = gTalkState[0];
    if (value >= 0) {
        if (value != *(s16 *)((u8 *)arg0 + 0x14)) {
            return 0;
        }
    }

    state1 = gTalkState;
    value = state1[1];

    if (value >= 0) {
        if (value != *(s16 *)((u8 *)arg0 + 0x16)) {
            return 0;
        }
    }

    state2 = gTalkState;
    value = state2[2];

    if (value != 0) {
        if (value != *(s16 *)((u8 *)arg0 + 0x18)) {
            return 0;
        }
    }

    if (EventFlag_IsSet(
            (u8 *)gBattleState + 0xB4,
            Event_GetString(arg0, (u16)*(s16 *)((u8 *)arg0 + 0x1A))
        ) != 0) {
        return 0;
    }

    gTalkState[0] = *(s16 *)((u8 *)arg0 + 0x14);
    state1[1] = *(s16 *)((u8 *)arg0 + 0x16);
    state2[2] = *(s16 *)((u8 *)arg0 + 0x18);

    return 1;
}

#pragma optimization_level 3
s32 fn_800BED64(void) {
    void *Event_NextEntry(void *);
    void *Event_GetString(void *, u32);
    u8 EventFlag_IsSet(void *, void *);
    void *Person_GetByPid(void);
    extern u16 gBattleState[700];
    extern u8 gUiContext[24];
    void *entry;
    u8 *flags;
    void *personA, *personB, *uiA, *uiB;
    u8 found;

    entry = Event_NextEntry(0);
    flags = (u8 *)gBattleState + 0xB4;
    while (entry != 0) {
        if (*(s8 *)((u8 *)entry + 0xC) == 9) {
            if (EventFlag_IsSet(flags,
                    Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x1A))) != 0) {
                found = 0;
            } else if (*(void **)(gUiContext + 4) == 0) {
                found = 0;
            } else {
                Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x14));
                personA = Person_GetByPid();
                Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x16));
                personB = Person_GetByPid();
                uiA = *(void **)(*(u8 **)gUiContext + 0x188);
                uiB = *(void **)(*(u8 **)(gUiContext + 4) + 0x188);
                if (*(s16 *)((u8 *)entry + 0x18) == 0) {
                    if (personA != uiA) {
                        found = 0;
                    } else if (personB != 0 && personB != uiB) {
                        found = 0;
                    } else {
                        goto success;
                    }
                } else if (personA != 0 && personA != uiA && personA != uiB) {
                    found = 0;
                } else if (personB != 0 && personB != uiA && personB != uiB) {
                    found = 0;
                } else {
success:
                    found = 1;
                }
            }
            if (found != 0) return 1;
        }
        entry = Event_NextEntry(entry);
    }
    return 0;
}

#pragma optimization_level 3
s32 fn_800BEEF4(s32 parent) {
    void *Event_NextEntry(void *);
    void *Event_GetString(void *, u32);
    u8 EventFlag_IsSet(void *, void *);
    void *Person_GetByPid(void);
    void *Process_CreateChild(void *, s32);
    s32 fn_800BF0A8(void *);
    extern u16 gBattleState[700];
    extern u8 gUiContext[24];
    void *entry;
    u8 *flags;
    void *personA, *personB, *uiA, *uiB;
    u8 found;
    void *proc;

    entry = Event_NextEntry(0);
    flags = (u8 *)gBattleState + 0xB4;
    while (entry != 0) {
        if (*(s8 *)((u8 *)entry + 0xC) == 9) {
            if (EventFlag_IsSet(flags,
                    Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x1A))) != 0) {
                found = 0;
            } else if (*(void **)(gUiContext + 4) == 0) {
                found = 0;
            } else {
                Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x14));
                personA = Person_GetByPid();
                Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x16));
                personB = Person_GetByPid();
                uiA = *(void **)(*(u8 **)gUiContext + 0x188);
                uiB = *(void **)(*(u8 **)(gUiContext + 4) + 0x188);
                if (*(s16 *)((u8 *)entry + 0x18) == 0) {
                    if (personA != uiA) {
                        found = 0;
                    } else if (personB != 0 && personB != uiB) {
                        found = 0;
                    } else {
                        goto success;
                    }
                } else if (personA != 0 && personA != uiA && personA != uiB) {
                    found = 0;
                } else if (personB != 0 && personB != uiA && personB != uiB) {
                    found = 0;
                } else {
success:
                    found = 1;
                }
            }
            if (found == 0) {

            } else {
                found = 1;
                goto check;
            }
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
check:
    if (found == 0) {
        return 0;
    }
    proc = Process_CreateChild(E_EventCaller_script, parent);
    *(s32 *)((u8 *)proc + 0x34) = 9;
    *(s32 *)((u8 *)proc + 0x38) = (s32)fn_800BF0A8;
    return 1;
}
#pragma optimization_level reset

#pragma optimization_level reset

#pragma optimization_level reset
s32 fn_800BF0A8(void *entry) {
    void *Event_GetString(void *, u32);
    u8 EventFlag_IsSet(void *, void *);
    void *Person_GetByPid(void);
    extern u16 gBattleState[700];
    extern u8 gUiContext[24];
    void *personA;
    void *personB;
    void *uiA;
    void *uiB;

    if (EventFlag_IsSet((u8 *)gBattleState + 0xB4,
                        Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x1A))) != 0) {
        return 0;
    }
    if (*(void **)(gUiContext + 4) == 0) {
        return 0;
    }
    Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x14));
    personA = Person_GetByPid();
    Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x16));
    personB = Person_GetByPid();
    uiA = *(void **)(*(u8 **)gUiContext + 0x188);
    uiB = *(void **)(*(u8 **)(gUiContext + 4) + 0x188);

    if (*(s16 *)((u8 *)entry + 0x18) == 0) {
        if (personA != uiA) return 0;
        if (personB != 0 && personB != uiB) return 0;
    } else {
        if (personA != 0 && personA != uiA && personA != uiB) return 0;
        if (personB != 0 && personB != uiA && personB != uiB) return 0;
    }
    return 1;
}
#pragma optimization_level 3
s32 fn_800BF1E8(void) {
    void *Event_NextEntry(void *);
    void *Event_GetString(void *, u32);
    u8 EventFlag_IsSet(void *, void *);
    void *Person_GetByPid(void);
    extern u16 gBattleState[700];
    extern u8 gUiContext[24];
    void *entry;
    u8 *flags;
    void *personA, *personB, *uiA, *uiB;

    entry = Event_NextEntry(0);
    flags = (u8 *)gBattleState + 0xB4;
    while (entry != 0) {
        u8 found;
        if (*(s8 *)((u8 *)entry + 0xC) == 8) {
            if (EventFlag_IsSet(flags,
                    Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x1A))) != 0) {
                found = 0;
            } else {
                Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x14));
                personA = Person_GetByPid();
                Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x16));
                personB = Person_GetByPid();
                uiA = *(void **)(*(u8 **)gUiContext + 0x188);
                uiB = *(void **)(*(u8 **)(gUiContext + 4) + 0x188);
                if (uiA == personA && uiB == personB) {
                    found = 1;
                } else if (*(s16 *)((u8 *)entry + 0x18) != 0 && uiA == personB && uiB == personA) {
                    found = 1;
                } else {
                    found = 0;
                }
            }
            if (found != 0) return 1;
        }
        entry = Event_NextEntry(entry);
    }
    return 0;
}
#pragma optimization_level reset
s32 fn_800BF32C(s32 parent) {
    void *Event_NextEntry(void *);
    void *Process_CreateChild(void *, s32);
    void *Event_GetString(void *, u32);
    u8 EventFlag_IsSet(void *, void *);
    void *Person_GetByPid(void);
    s32 Talk_MatchesUiPair(void *);
    u8 *entry;
    u8 *flagBase;
    u8 *uiCtx;
    void *personA, *personB, *uiA, *uiB;
    void *proc;
    u8 found;

    entry = Event_NextEntry(0);
    flagBase = (u8 *)gBattleState + 0xB4;
    uiCtx = gUiContext;
    while (entry != 0) {
        if ((s8)entry[0xC] == 8) {
            if (EventFlag_IsSet(flagBase,
                    Event_GetString(entry, (u16)*(s16 *)(entry + 0x1A))) != 0) {
                found = 0;
            } else {
                Event_GetString(entry, (u16)*(s16 *)(entry + 0x14));
                personA = Person_GetByPid();
                Event_GetString(entry, (u16)*(s16 *)(entry + 0x16));
                personB = Person_GetByPid();
                uiA = *(void **)(*(u8 **)gUiContext + 0x188);
                uiB = *(void **)(*(u8 **)(uiCtx + 4) + 0x188);
                if (uiA == personA && uiB == personB) {
                    found = 1;
                } else if (*(s16 *)(entry + 0x18) != 0 && uiA == personB && uiB == personA) {
                    found = 1;
                } else {
                    found = 0;
                }
            }
            if (found != 0) {
                found = 1;
                goto check;
            }
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
check:
    if (found == 0) {
        return 0;
    }
    proc = Process_CreateChild(E_EventCaller_script, parent);
    *(s32 *)((u8 *)proc + 0x34) = 8;
    *(s32 *)((u8 *)proc + 0x38) = (s32)Talk_MatchesUiPair;
    return 1;
}

/* True if this talk entry's persons match the UI unit pair (order or swapped). */
s32 Talk_MatchesUiPair(void *entry) {
    void *Event_GetString(void *, u32);
    u8 EventFlag_IsSet(void *, void *);
    void *Person_GetByPid(void);
    extern u8 gUiContext[24];
    void *personA;
    void *personB;
    void *uiPerson0;
    void *uiPerson1;

    if (EventFlag_IsSet((u8 *)gBattleState + 0xB4,
                    Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x1A))) != 0) {
        return 0;
    }
    Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x14));
    personA = Person_GetByPid();
    Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x16));
    personB = Person_GetByPid();
    uiPerson0 = *(void **)(*(u8 **)gUiContext + 0x188);
    uiPerson1 = *(void **)(*(u8 **)(gUiContext + 4) + 0x188);
    if (uiPerson0 == personA && uiPerson1 == personB) {
        return 1;
    }
    if (*(s16 *)((u8 *)entry + 0x18) != 0 && uiPerson0 == personB && uiPerson1 == personA) {
        return 1;
    }
    return 0;
}

s32 fn_800BF574(s32 arg0) {
    void *Event_NextEntry(void *);
    void *Process_CreateChild(void *, s32);
    s32 fn_800BF694(void);
    u8 *entry;
    u8 found;
    void *obj;
    s32 kind;

    kind = 0xF;
    entry = Event_NextEntry(0);
    while (entry != 0) {
        if (entry[0xC] == kind) {
            found = 1;
            goto check;
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
check:
    if (found == 0) {
        return 0;
    }
    obj = Process_CreateChild(E_EventCaller_script, arg0);
    *(s32 *)((u8 *)obj + 0x34) = 0xF;
    *(s32 *)((u8 *)obj + 0x38) = (s32)fn_800BF694;
    return 1;
}

s32 fn_800BF604(s32 arg0) {
    void *Event_NextEntry(void *);
    void *Process_CreateChild(void *, s32);
    s32 fn_800BF694(void);
    u8 *entry;
    u8 found;
    void *obj;
    s32 kind;

    kind = 0x7;
    entry = Event_NextEntry(0);
    while (entry != 0) {
        if (entry[0xC] == kind) {
            found = 1;
            goto check;
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
check:
    if (found == 0) {
        return 0;
    }
    obj = Process_CreateChild(E_EventCaller_script, arg0);
    *(s32 *)((u8 *)obj + 0x34) = 0x7;
    *(s32 *)((u8 *)obj + 0x38) = (s32)fn_800BF694;
    return 1;
}

s32 fn_800BF694(void) {
    return 1;
}

#pragma optimization_level 3
s32 fn_800BF69C(s32 parent) {
    void *Event_NextEntry(void *);
    void *Process_CreateChild(void *, s32);
    void *Event_GetString(void *, u16);
    u8 EventFlag_IsSet(void *, void *);
    s32 fn_800BF87C(void *);
    extern u8 gUiContext[24];
    extern u16 gBattleState[700];
    extern u8 gBattleMap[];
    void *entry;
    u8 *mapBase;
    u8 *flagBase;
    u8 *uiCtx;
    void *proc;
    u8 found;
    u8 ok;
    void *unit;
    s8 x1;
    s8 y1;
    s8 y0;
    s8 x0;

    entry = Event_NextEntry(0);
    flagBase = (u8 *)gBattleState + 0xB4;
    mapBase = gBattleMap;
    uiCtx = gUiContext;
    while (entry != 0) {
        if ((s8)*(u8 *)((u8 *)entry + 0xC) == 4) {
            unit = *(void **)gUiContext;
            if (*(s8 *)((u8 *)unit + 0x1A8) == 0) {
                ok = 0;
            } else if (*(s16 *)((u8 *)entry + 0x1C) >= 0
                && *(s16 *)((u8 *)entry + 0x1C) != ((u8 *)*(void **)((u8 *)unit + 0x190))[8]) {
                ok = 0;
            } else if (EventFlag_IsSet(flagBase,
                    Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x1E))) != 0) {
                ok = 0;
            } else {
                x1 = (s8)*(s16 *)((u8 *)entry + 0x18);
                x0 = (s8)*(s16 *)((u8 *)entry + 0x14);
                y0 = (s8)*(s16 *)((u8 *)entry + 0x16);
                y1 = (s8)*(s16 *)((u8 *)entry + 0x1A);
                if (x1 <= 0) {
                    x1 = (((s32 *)gBattleMap)[0] - 1) - x1;
                }
                if (y1 <= 0) {
                    y1 = (((s32 *)mapBase)[1] - 1) - y1;
                }
                if (x0 > (s8)uiCtx[0xD]) {
                    ok = 0;
                } else if ((s8)uiCtx[0xD] > x1) {
                    ok = 0;
                } else if (y0 > (s8)uiCtx[0xE]) {
                    ok = 0;
                } else if ((s8)uiCtx[0xE] > y1) {
                    ok = 0;
                } else {
                    ok = 1;
                }
            }
            if (ok != 0) {
                found = 1;
                goto check;
            }
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
check:
    if (found == 0) {
        return 0;
    }
    proc = Process_CreateChild(E_EventCaller_script, parent);
    *(s32 *)((u8 *)proc + 0x34) = 4;
    *(s32 *)((u8 *)proc + 0x38) = (s32)fn_800BF87C;
    return 1;
}
#pragma optimization_level reset
s32 fn_800BF87C(void *arg0) {
    void *Event_GetString(void *, u16);
    u8 EventFlag_IsSet(void *, void *);
    extern u8 gUiContext[24];
    extern u16 gBattleState[700];
    extern u8 gBattleMap[];
    void *unit;
    s8 x0;
    s8 y0;
    s8 x1;
    s8 y1;
    u8 *ctx;

    unit = *(void **)gUiContext;
    if (*(s8 *)((u8 *)unit + 0x1A8) == 0) {
        return 0;
    }
    if (*(s16 *)((u8 *)arg0 + 0x1C) >= 0
        && *(s16 *)((u8 *)arg0 + 0x1C) != ((u8 *)*(void **)((u8 *)unit + 0x190))[8]) {
        return 0;
    }
    if (EventFlag_IsSet((u8 *)gBattleState + 0xB4,
                        Event_GetString(arg0, (u16)*(s16 *)((u8 *)arg0 + 0x1E))) != 0) {
        return 0;
    }
    x1 = (s8)*(s16 *)((u8 *)arg0 + 0x18);
    x0 = (s8)*(s16 *)((u8 *)arg0 + 0x14);
    y0 = (s8)*(s16 *)((u8 *)arg0 + 0x16);
    y1 = (s8)*(s16 *)((u8 *)arg0 + 0x1A);
    if (x1 <= 0) {
        x1 = (((s32 *)gBattleMap)[0] - 1) - x1;
    }
    if (y1 <= 0) {
        y1 = (((s32 *)gBattleMap)[1] - 1) - y1;
    }
    ctx = gUiContext;
    if (x0 > (s8)ctx[0xD]) {
        return 0;
    }
    if ((s8)ctx[0xD] > x1) {
        return 0;
    }
    if (y0 > (s8)ctx[0xE]) {
        return 0;
    }
    return (s8)ctx[0xE] <= y1;
}

#pragma dont_inline on
#pragma global_optimizer off
s32 fn_800BF9D8(void *arg0) {
    extern u8 gBattle[];
    extern u8 gMapEventFlagNames[];
    u8 Status_Test(void *, s32);
    u8 EventFlag_IsSet(void *, void *);
    void fn_800BDC68(void *, void *);
    void *fn_800A8704(void *);
    void *Res_GetByName(void *);
    void fn_8011D908(void *, void *);
    u8 *unit;
    void *flags;
    void *msg;

    if ((*(u32 *)(gBattle + 0xCAC) & 0x1000) == 0) {
        return 0;
    }
    unit = *(u8 **)(gBattle + 0x280);
    if (Status_Test(unit + 0x1BC, 0x54)) {
        flags = (u8 *)gBattleState + 0xB4;
        if (EventFlag_IsSet(flags, gMapEventFlagNames + 0x128)) {
            return 0;
        }
        fn_800BDC68(flags, gMapEventFlagNames + 0x128);
    }
    if (Status_Test(unit + 0x1BC, 0x55)) {
        flags = (u8 *)gBattleState + 0xB4;
        if (EventFlag_IsSet(flags, gMapEventFlagNames + 0x130)) {
            return 0;
        }
        fn_800BDC68(flags, gMapEventFlagNames + 0x130);
    }
    msg = fn_800A8704(*(void **)(unit + 0x188));
    if (Res_GetByName(msg) == 0) {
        return 0;
    }
    fn_8011D908(msg, arg0);
    return 1;
}
#pragma global_optimizer reset
#pragma dont_inline reset
s32 fn_800BFB10(void) {
    void *Battle_GetActiveCombatant(void *);
    void *Event_NextEntry(void *);
    void *Event_GetString(void *, u16);
    void *Person_GetByPid(void *);
    s32 fn_800BA96C(void);
    extern u8 gBattle[];
    extern u16 gBattleState[700];
    void *entry;
    void *person;
    void *combatant;
    u8 found;
    s32 match;

    if (Battle_GetActiveCombatant(gBattle) == NULL) {
        return 0;
    }

    entry = Event_NextEntry(NULL);
    while (entry != NULL) {
        if ((s32)*(u8 *)((u8 *)entry + 0xC) == 0xB) {
            person = Person_GetByPid(Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x14)));
            combatant = Battle_GetActiveCombatant(gBattle);
            if (combatant == NULL) {
                match = 0;
            } else {
                match = (*(void **)((u8 *)combatant + 0x188) == person);
            }
            if ((u8)match) {
                found = 1;
                goto after1;
            }
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
after1:
    if (found) {
        return 1;
    }

    if ((((u8 *)gBattleState)[0x9F] >> 3) & 1) {
        return 0;
    }

    entry = Event_NextEntry(NULL);
    while (entry != NULL) {
        if ((s32)*(u8 *)((u8 *)entry + 0xC) == 0xA) {
            person = Person_GetByPid(Event_GetString(entry, (u16)*(s16 *)((u8 *)entry + 0x14)));
            combatant = Battle_GetActiveCombatant(gBattle);
            if (combatant == NULL) {
                match = 0;
            } else {
                match = (*(void **)((u8 *)combatant + 0x188) == person);
            }
            if ((u8)match) {
                found = 1;
                goto after2;
            }
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
after2:
    if (found) {
        return 1;
    }

    return fn_800BA96C();
}

extern u16* const lbl_8036A0D0;
s32 fn_800BFCA8(s32 arg0)
{
  void *Battle_GetActiveCombatant(void *);
  void *Event_NextEntry(void *);
  void *Event_GetString(void *, u16);
  void *Person_GetByPid(void *);
  void *Process_CreateChild(void *, s32);
  s32 fn_800BA9BC(void);
  s32 fn_800BFECC(void);
  extern u8 gBattle[];
  extern u16 gBattleState[700];
  extern s32 gUiInputFlags;
  void *entry;
  void *person;
  void *combatant;
  void *proc;
  u8 found;
  s32 match;
  if (Battle_GetActiveCombatant(gBattle) == NULL)
  {
    return 0;
    return match;
  }
  entry = Event_NextEntry(NULL);
  while (entry != NULL)
  {
    if (((s32) (*((u8 *) (((u8 *) entry) + 0xC)))) == 0xB)
    {
      person = Person_GetByPid(Event_GetString(entry, (u16) (*((s16 *) (((u8 *) entry) + 0x14)))));
      combatant = Battle_GetActiveCombatant(gBattle);
      if (combatant == NULL)
      {
        match = 0;
      }
      else
      {
        match = (*((void **) (((u8 *) combatant) + 0x188))) == person;
      }
      if ((u8) match)
      {
        found = 1;
        goto after1;
      }
    }
    entry = Event_NextEntry(entry);
  }

  found = 0;
  after1:
  if (found)
  {
    proc = Process_CreateChild(E_EventCaller_script, arg0);
    *((s32 *) (((u8 *) proc) + 0x34)) = 0xB;
    *((s32 *) (((u8 *) proc) + 0x38)) = (s32) fn_800BFECC;
    gUiInputFlags |= 4;
    return 1;
  }

  if ((((u8 *) gBattleState)[0x9F] >> 3) & 1)
  {
    return 0;
  }
  entry = Event_NextEntry(NULL);
  while (entry != NULL)
  {
    if (((s32) (*((u8 *) (((u8 *) entry) + 0xC)))) == 0xA)
    {
      person = Person_GetByPid(Event_GetString(entry, (u16) (*((s16 *) (((u8 *) entry) + 0x14)))));
      combatant = Battle_GetActiveCombatant(gBattle);
      if (combatant == NULL)
      {
        match = 0;
      }
      else
      {
        match = (*((void **) (((u8 *) combatant) + 0x188))) == person;
      }
      if ((u8) match)
      {
        found = 1;
        goto after2;
      }
    }
    entry = Event_NextEntry(entry);
  }

  found = 0;
  after2:
  if (found)
  {
    proc = Process_CreateChild(E_EventCaller_script, arg0);
    *((s32 *) (((u8 *) proc) + 0x34)) = 0xA;
    *((s32 *) (((u8 *) proc) + 0x38)) = (s32) fn_800BFECC;
    gUiInputFlags |= 4;
    return 1;
  }

  match = fn_800BA9BC() != 0;
  if (match)
  {
    gUiInputFlags |= 4;
  }
}

s32 fn_800BFECC(void *arg0)
{
    extern u8 gBattle[];

    extern void Event_GetString(void *, u32);
    extern void *Person_GetByPid(void);
    extern void *Battle_GetActiveCombatant(void *);

    void *value;
    u8 *unit;
    s16 index;

    index = *(s16 *)((u8 *)arg0 + 0x14);

    Event_GetString(arg0, (u16)index);

    value = Person_GetByPid();

    unit = (u8 *)Battle_GetActiveCombatant(gBattle);

    if (unit == 0) {
        return 0;
    }

    return *(void **)(unit + 0x188) == value;
}

/* If any kind-2 event entry has its flag set, start E_EventCaller under parent and return 1. */
s32 Event_StartCallerKind2(s32 parent) {
    void *Event_NextEntry(void *);
    void *Process_CreateChild(void *, s32);
    void *Event_GetString(void *, u32);
    u8 EventFlag_IsSet(void *, void *);
    s32 EventEntry_FlagIsSet(s32);
    u8 *entry;
    u8 *flagBase;
    u8 found;
    void *proc;
    s32 kind;

    kind = 2;
    entry = Event_NextEntry(0);
    flagBase = (u8 *)gBattleState + 0xB4;
    while (entry != 0) {
        if (entry[0xC] == kind) {
            if (EventFlag_IsSet(flagBase, Event_GetString(entry, (u16)*(s16 *)(entry + 0x14))) != 0) {
                found = 1;
                goto check;
            }
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
check:
    if (found == 0) {
        return 0;
    }
    proc = Process_CreateChild(E_EventCaller_script, parent);
    *(s32 *)((u8 *)proc + 0x34) = 2;
    *(s32 *)((u8 *)proc + 0x38) = (s32)EventEntry_FlagIsSet;
    return 1;
}

s32 fn_800C000C(s32 parent) {
    void *Event_NextEntry(void *);
    void *Process_CreateChild(void *, s32);
    void *Event_GetString(void *, u32);
    u8 EventFlag_IsSet(void *, void *);
    void Allegiance_FillMask(s32, u8 *);
    void fn_8001520C(void *, s32);
    s32 EventEntry_FlagIsSet(s32);
    extern u16 gBattleState[700];
    extern u16 gUnits[];
    u8 mask[8];
    u8 *entry;
    u8 *flagBase;
    u8 found;
    void *proc;
    u8 *unit;
    s32 i;
    s32 kind;
    u32 flags;

    kind = 1;
    entry = Event_NextEntry(0);
    flagBase = (u8 *)gBattleState + 0xB4;
    while (entry != 0) {
        if (entry[0xC] == kind) {
            if (EventFlag_IsSet(flagBase, Event_GetString(entry, (u16)*(s16 *)(entry + 0x14))) != 0) {
                found = 1;
                goto check;
            }
        }
        entry = Event_NextEntry(entry);
    }
    found = 0;
check:
    if (found == 0) {
        return 0;
    }
    Allegiance_FillMask(3, mask);
    for (i = 1; i <= 0x9F; i++) {
        if ((u8)i != 0) {
            unit = (u8 *)gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0 && mask[(*(u8 **)(unit + 0x190))[8]] != 0) {
            flags = *(u32 *)(unit + 0x1A0);
            flags &= ~1;
            *(u32 *)(unit + 0x1A0) = flags;
            flags = *(u32 *)(unit + 0x1A0);
            flags &= ~0x800;
            *(u32 *)(unit + 0x1A0) = flags;
        }
    }
    fn_8001520C((u8 *)gBattleState + 0x94, 0);
    fn_8001520C((u8 *)gBattleState + 0x98, 3);
    proc = Process_CreateChild(E_EventCaller_script, parent);
    *(s32 *)((u8 *)proc + 0x34) = 1;
    *(s32 *)((u8 *)proc + 0x38) = (s32)EventEntry_FlagIsSet;
    return 1;
}

extern s32 lbl_80367FCC;
void EventEntry_FlagIsSet(void *arg0) {
    void *Event_GetString(void *, u16);
    void EventFlag_IsSet(void *, void *, void *);
    extern u16 gBattleState[700];

    EventFlag_IsSet((u8 *)gBattleState + 0xB4, Event_GetString(arg0, (u16)*(s16 *)((u8 *)arg0 + 0x14)), gBattleState);
}

s32 fn_800C01CC(s32 parent) {
 void *Event_NextEntry(void *); void *Process_CreateChild(void *,s32); s32 fn_800C03DC(void *);
 u8 *entry; u8 *battle; u8 found; u8 valid; s16 value; s16 turn; void *proc;
 entry=Event_NextEntry(0); battle=(u8 *)gBattleState;
 while(entry) {
 if((s32)entry[0xc]==6) {
 value=*(s16 *)(entry+0x18);
 if(value>=0 && value!=battle[0x11]) valid=0;
 else {
 value=*(s16 *)(entry+0x14);
 if(value==0) valid=1;
 else { turn=*(s16 *)(battle+0x12);
 if(value>turn) valid=0;
 else if(*(s16 *)(entry+0x16)<turn) valid=0;
 else valid=1;
 }}
 if(valid) { found=1; goto check; }
 }
 entry=Event_NextEntry(entry);
 }
 found=0;
 check:
 if(!found) return 0;
 proc=Process_CreateChild(E_EventCaller_script,parent);
 *(s32 *)((u8 *)proc+0x34)=6;
 *(s32 *)((u8 *)proc+0x38)=(s32)fn_800C03DC;
 return 1;
}

u32 fn_800C02D4(void *arg0) {
 void *Event_NextEntry(void *); void *Process_CreateChild(void *,void *); s32 fn_800C03DC(void *);
 u8 *entry; u8 *battle; u8 found; u8 valid; s16 value; s16 turn; void *proc;
 entry=Event_NextEntry(0); battle=(u8 *)gBattleState;
 while(entry) {
 if((s32)entry[0xc]==3) {
 value=*(s16 *)(entry+0x18);
 if(value>=0 && value!=battle[0x11]) valid=0;
 else {
 value=*(s16 *)(entry+0x14);
 if(value==0) valid=1;
 else { turn=*(s16 *)(battle+0x12);
 if(value>turn) valid=0;
 else if(*(s16 *)(entry+0x16)<turn) valid=0;
 else valid=1;
 }}
 if(valid) { found=1; goto check; }
 }
 entry=Event_NextEntry(entry);
 }
 found=0;
 check:
 if(!found) return 0;
 proc=Process_CreateChild(E_EventCaller_script,arg0);
 *(s32 *)((u8 *)proc+0x34)=3;
 *(void **)((u8 *)proc+0x38)=(void *)fn_800C03DC;
 return 1;
}

s32 fn_800C03DC(void *arg0)
{
  s16 *new_var2;
  s16 temp_r5;
  s16 temp_r5_2;
  s16 *new_var;
  temp_r5 = *((s16 *) (((u8 *) arg0) + 0x18));
  if ((temp_r5 >= 0) && (temp_r5 != (*((u8 *) (((u8 *) (&gBattleState)) + 0x11)))))
  {
    return 0;
  }
  ;
  if ((*((s16 *) (((u8 *) arg0) + 0x14))) == 0)
  {
    return 1;
  }
  new_var = (s16 *) (((u8 *) (&gBattleState)) + 0x12);
  new_var2 = new_var;
  if ((*((s16 *) (((u8 *) arg0) + 0x14))) > (*new_var2))
  {
    return 0;
  }
  return (*new_var2) <= (*((s16 *) (((u8 *) arg0) + 0x16)));
}

s32 fn_800C044C(s32 arg0)
{
    void *Event_NextEntry(void *);
    u8 *entry;
    s32 count;

    count = 0;
    entry = (u8 *)Event_NextEntry(0);
    while (entry != 0) {
        if ((s8)entry[0xC] == arg0) {
            count++;
        }
        entry = (u8 *)Event_NextEntry(entry);
    }
    return count;
}

s32 fn_800C04B0(s32 arg0, u8 (*arg1)(void *)) {
    void *Event_NextEntry(void *);

    s32 count;
    u8 *entry;

    count = 0;
    entry = (u8 *)Event_NextEntry(0);

    while (entry != 0) {
        if ((s8)entry[0xC] == arg0) {
            if (arg1(entry) != 0) {
                count++;
            }
        }

        entry = (u8 *)Event_NextEntry(entry);
    }

    return count;
}

void Event_DispatchMatching(void *proc) {
    /* Walk the event list for the next entry matching kind+predicate, start E_Event, clear gf_canceled. */
    void *Event_NextEntry(void *);
    void *Process_CreateChild(void *, void *);
    void EventFlag_Clear(void *, void *);
    void Process_ClearFunc(void *);
    extern u8 E_Event_script[];
    extern u8 gMapEventFlagNames[];
    extern s32 gUiInputFlags;

    void *self;
    void *saved;
    void *entry;
    void *child;

    self = proc;
    while ((entry = *(void **)((u8 *)self + 0x30)) != 0) {
        if ((s32)(s8)((u8 *)entry)[0xC] == *(s32 *)((u8 *)self + 0x34)) {
            if (((u8 (*)(void *))*(void **)((u8 *)self + 0x38))(entry) != 0) {
                saved = *(void **)((u8 *)self + 0x30);
                child = Process_CreateChild(E_Event_script, self);
                *(void **)((u8 *)child + 0x30) = saved;
                EventFlag_Clear((u8 *)gBattleState + 0xB4, gMapEventFlagNames + 0x11C);
                gUiInputFlags &= ~1;
                *(void **)((u8 *)self + 0x30) = Event_NextEntry(*(void **)((u8 *)self + 0x30));
                if (*(void **)((u8 *)self + 0x30) == 0) {
                    goto destroy;
                }
                return;
            }
        }
        *(void **)((u8 *)self + 0x30) = Event_NextEntry(*(void **)((u8 *)self + 0x30));
    }
destroy:
    Process_ClearFunc(self);
}

void fn_800C0624(void *arg0) {
    s32 Event_NextEntry(M2C_UNK);
    M2C_FIELD(arg0, s32 *, 0x30) = Event_NextEntry(0);
}

int fn_800C0658(void) {
    unsigned int Process_Find(void *);
    int fn_801270A4(void);
    extern u8 E_Event_script[];
    if (Process_Find(E_Event_script) == 0U) {
        return fn_801270A4();
    }
}

/* Restore battle-map UI after BMapSuspend: reset UI, restore saved BMap procs, restart the event. */
void ScriptCmd_BMapResume(void) {
    void UiCtx_Reset(void *);
    void MapUi_ClearOverlays(void);
    void *Process_Find(void *);
    void Process_UnlinkByKey(void *);
    void *Process_CreateChild(void *, void *);
    void EventWork_Set(void *);
    void *fn_801270A4(void);
    void Process_Goto(void *, s32);
    void EventLock_Dec(void);
    extern u8 gUiContext[24];
    extern s32 gUiInputFlags;
    extern u8 Proc_BMapMain[];
    extern u32 gBMapMainSaved;
    extern u32 gBMapPlphSaved;
    extern u8 Proc_BMapPlph[];
    extern u8 gEventWork[];
    extern u8 E_Event_script[];
    void *bmapMain;
    void *bmapPlph;

    UiCtx_Reset(gUiContext);
    MapUi_ClearOverlays();
    gUiInputFlags &= ~0x890;
    bmapMain = Process_Find(Proc_BMapMain);
    if (gBMapMainSaved != 0) {
        *(u32 *)((u8 *)bmapMain + 4) = gBMapMainSaved;
    } else {
        Process_UnlinkByKey(Proc_BMapMain);
    }
    if (gBMapPlphSaved != 0) {
        bmapPlph = Process_CreateChild(Proc_BMapPlph, bmapMain);
        *(u32 *)((u8 *)bmapPlph + 4) = gBMapPlphSaved;
    }
    EventWork_Set(gEventWork);
    Process_Goto(Process_CreateChild(E_Event_script, fn_801270A4()), 0);
    EventLock_Dec();
}

/* Save BMapMain/BMapPlph state, ensure BMap exists, and switch context for an event. */
void ScriptCmd_BMapSuspend(void) {
    extern s32 gUiInputFlags;
    extern s32 gBMapMainSaved;
    extern s32 gBMapPlphSaved;
    extern u8 Proc_BMapMain[];
    extern u8 Proc_BMapBGMCtrl[];
    extern u8 Proc_BMapPlph[];
    extern u8 gMapEventFlagNames[];
    extern u8 gEventWorkSuspend[];
    void *Process_Find(void *);
    void *Process_FindByName(void *);
    void *Process_CreateChild(void *, void *);
    void *Process_Create(void *, void *);
    void GfxEnt_UnlinkByName(void *);
    void EventWork_Set(void *);
    void EventLock_Inc(void);
    void *proc;
    s32 saved;

    gUiInputFlags |= 0x10;
    proc = Process_Find(Proc_BMapMain);
    if (proc != 0) {
        saved = *(s32 *)((u8 *)proc + 4);
    } else {
        saved = 0;
    }
    gBMapMainSaved = saved;
    if (proc == 0) {
        Process_Create(Proc_BMapBGMCtrl, Process_CreateChild(Proc_BMapMain, Process_FindByName(gMapEventFlagNames + 0x138)));
    }
    proc = Process_Find(Proc_BMapPlph);
    if (proc != 0) {
        saved = *(s32 *)((u8 *)proc + 4);
    } else {
        saved = 0;
    }
    gBMapPlphSaved = saved;
    GfxEnt_UnlinkByName(gMapEventFlagNames + 0xE3);
    EventWork_Set(gEventWorkSuspend);
    EventLock_Inc();
}

void fn_800C0818(u8 flag) {
    extern u8 E_Event_script[];
    extern u16 gBattleState[700];
    extern u8 gMapEventFlagNames[];
    extern s32 gUiInputFlags;
    void *Process_Find(void *);
    void Process_Unlink(void *);
    void EventFlag_Clear(void *, void *);
    void fn_80089650(s32, s32);
    void fn_8008A290(s32, s32);

    void *obj;

    obj = Process_Find(E_Event_script);
    if (obj != 0) {
        if (flag != 0) {
            EventFlag_Clear((u8 *)gBattleState + 0xB4, gMapEventFlagNames + 0x11C);
            gUiInputFlags &= ~1;
            fn_80089650(0, 0);
            fn_8008A290(0, 0);
        }
        Process_Unlink(obj);
    }
}

void Event_StartByName(void *arg0, void *arg1)
{
    extern u8 E_Event_script[];
    extern u8 gMapEventFlagNames[];
    extern s32 gUiInputFlags;

    extern void *Res_GetByName(void *);
    extern void *Process_CreateChild(void *, void *);
    extern void EventFlag_Clear(void *, void *);

    void *result;
    u8 *entry;

    result = Res_GetByName(arg0);

    if (result != 0) {
        entry = (u8 *)Process_CreateChild(E_Event_script, arg1);

        *(void **)(entry + 0x30) = result;

        EventFlag_Clear(
            (u8 *)gBattleState + 0xB4,
            gMapEventFlagNames + 0x11C
        );

        gUiInputFlags &= ~1;
    }
}

void fn_800C0924(void)
{
    extern u16 gBattleState[700];
    extern u8 gMapEventFlagNames[];
    extern s32 gUiInputFlags;

    extern void EventFlag_Clear(void *, void *);
    extern void fn_80089650(s32, s32);
    extern void fn_8008A290(s32, s32);

    EventFlag_Clear(
        (u8 *)gBattleState + 0xB4,
        gMapEventFlagNames + 0x11C
    );

    gUiInputFlags &= ~1;

    fn_80089650(0, 0);
    fn_8008A290(0, 0);
}

void fn_800C0980(void) {
    M2C_UNK EventLock_Dec();
    EventLock_Dec();
}

void fn_800C09A0(void) {
    M2C_UNK fn_80089634(void);
    M2C_UNK fn_80089650(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8008A290(M2C_UNK, M2C_UNK);
    if ((u16)fn_80089634() == 6) {
        fn_80089650(2, 0x85);
        fn_8008A290(0, 0);
    }
}

void fn_800C09E4(s32 arg0) {
    s32 fn_800142B8();
    fn_80013880();
    if (fn_800142B8() != 6) {
        Process_ClearFunc(arg0);
    }
}

void fn_800C0A24(void *arg0) {
    void fn_80013778(s32, void *);
    void EventLock_Inc(void);
    extern u32 gUiInputFlags;
    u32 flags;

    fn_80013778(0, *(void **)((u8 *)arg0 + 0x30));
    EventLock_Inc();
    flags = gUiInputFlags;
    flags &= ~0x4;
    gUiInputFlags = flags;
}

void fn_800C0A60(void *arg0)
{
    extern u32 gUiInputFlags;
    extern void *gPadInput;
    extern u8 lbl_8028D4D0[];

    u32 current;
    u32 previous;

    if ((gUiInputFlags & 0x84) != 0) {
        return;
    }

    current = *(u32 *)((u8 *)gPadInput + 4);
    previous = *(u32 *)((u8 *)gPadInput + 8);

    if (((current & (previous ^ current)) & 0x1000) == 0) {
        return;
    }

    if ((u8)fn_80089640() != 0) {
        return;
    }

    Process_CreateChild(lbl_8028D4D0, arg0);
}

s32 fn_800C0ACC(void) {
    extern s32 gUiInputFlags;
    gUiInputFlags &= ~0x4;
    return 1;
}

s32 fn_800C0AE0(void)
{
    extern s32 gUiInputFlags;
    gUiInputFlags |= 0x4;
    return 1;
}

s32 fn_800C0AF4(void) {
    extern u8 lbl_8028D4D0[];
    extern u16 gBattleState[700];
    extern u8 gMapEventFlagNames[];
    extern s32 gUiInputFlags;
    u8 EventFlag_IsSet(void *, void *);
    void *Process_Find(void *);
    void Process_UnlinkByKey(void *);
    void EventFlag_Clear(void *, void *);
    void fn_80089650(s32, s32);
    void fn_8008A290(s32, s32);

    if (!(gUiInputFlags & 1)) {
        if (EventFlag_IsSet((u8 *)gBattleState + 0xB4, gMapEventFlagNames + 0x11C) == 0
            && Process_Find(lbl_8028D4D0) == 0) {
            return 0;
        }
    }

    Process_UnlinkByKey(lbl_8028D4D0);
    EventFlag_Clear((u8 *)gBattleState + 0xB4, gMapEventFlagNames + 0x11C);
    gUiInputFlags &= ~1;
    fn_80089650(0, 0);
    fn_8008A290(0, 0);
    return 1;
}

extern u8 lbl_8028D4D0[16];
void fn_800C0BAC(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 lbl_8028D4D0[16];
    Process_CreateChild(lbl_8028D4D0, arg0);
}

void fn_800C0BD8(void)
{
    extern s32 gUiInputFlags;
    extern u8 gMapEventFlagNames[];

    fn_800BDC68(
        (u8 *)gBattleState + 0xB4,
        gMapEventFlagNames + 0x11C
    );

    gUiInputFlags |= 1;
}

void fn_800C0C1C(void) {
    u16 fn_80089634();
    M2C_UNK fn_80089650(M2C_UNK, M2C_UNK);
    if (fn_80089634() != 6) {
        fn_80089650(3, 0x85);
    }
}

void fn_800C0C54(void)
{
  extern u16 lbl_8028D5B8[];
  if (Process_Find(lbl_8028D5B8) != (0 & 0xFFFFu))
  {
    Process_UnlinkByKey(lbl_8028D5B8);
    return;
  }
  Process_Create(lbl_8028D5B8, 7);
}

void fn_800C0CA4(void *arg0) {
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x50));
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}

/* Copy the EFB into the capture buffer, then draw it as a Z-rotated textured strip. */
void Capture_DrawRotated(void *cap) {
    void fn_8022097C(void);
    void fn_8022124C(s32, s32, s32, s32);
    void fn_802212FC(u16, u16, s32, u8);
    void GXCopyTex(s32, s32);
    void fn_802209FC(void);
    void fn_80222EB4(void);
    void Camera_ApplyOrtho(s32);
    void GXClearVtxDesc(void);
    void GXSetVtxDesc(s32, s32);
    void GXSetVtxAttrFmt(s32, s32, s32, s32, s32);
    void GXSetNumChans(s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void GXSetCullMode(s32);
    void GXSetNumTevStages(s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void GXSetNumTexGens(s32, s32);
    void PSMTXTrans(void *, f32, f32, f32);
    void PSMTXRotRad(void *, s32, f32);
    void PSMTXScale(void *, f32, f32, f32);
    void PSMTXConcat(void *, void *, void *);
    void GXLoadPosMtxImm(void *, s32);
    void fn_80222C50(void *, s32);
    void GXBegin(s32, s32, s32);
    extern f32 lbl_80369D24;
    extern f32 lbl_80369D28;
    extern f32 lbl_80369D2C;
    extern f32 lbl_80369D30;
    extern f32 lbl_80369D34;
    extern f32 lbl_80369D38;
    extern f32 lbl_80369D3C;
    extern f32 lbl_80369D40;
    u8 mtx_rot[0x30];
    u8 mtx_center[0x30];
    u8 mtx_origin[0x30];
    u8 mtx_scale[0x30];
    u8 mtx[0x30];
    void *self;
    f32 vals[2];
    volatile f32 *wgpipe;

    self = cap;
    fn_8022097C();
    fn_8022124C(0, 0, 0x260, 0x1E0);
    fn_802212FC(0x260, 0x1E0, 4, 0);
    GXCopyTex(*(s32 *)((u8 *)self + 0x50), 1);
    fn_802209FC();
    fn_80222EB4();
    Camera_ApplyOrtho(0);
    GXClearVtxDesc();
    GXSetVtxDesc(9, 1);
    GXSetVtxDesc(0xD, 1);
    GXSetVtxAttrFmt(0, 9, 1, 4, 0);
    GXSetVtxAttrFmt(0, 0xD, 1, 4, 0);
    GXSetNumChans(1);
    fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
    GXSetCullMode(0);
    GXSetNumTevStages(1);
    GXSetTevOrder(0, 0, 0, 0xFF);
    GXSetNumTexGens(0, 3);
    PSMTXTrans(mtx_center, lbl_80369D24, lbl_80369D24, lbl_80369D28);
    PSMTXTrans(mtx_origin, lbl_80369D2C, lbl_80369D30, lbl_80369D28);
    PSMTXRotRad(mtx_rot, 0x5A, lbl_80369D34);
    PSMTXScale(mtx_scale, lbl_80369D38, lbl_80369D3C, lbl_80369D40);
    PSMTXConcat(mtx_scale, mtx_center, mtx);
    PSMTXConcat(mtx_rot, mtx, mtx);
    PSMTXConcat(mtx_origin, mtx, mtx);
    GXLoadPosMtxImm(mtx, 0);
    fn_80222C50((u8 *)self + 0x30, 0);
    GXBegin(0x98, 0, 4);
    vals[0] = lbl_80369D28;
    wgpipe = (volatile f32 *)0xCC008000;
    vals[1] = lbl_80369D40;
    *wgpipe = vals[0];
    *wgpipe = vals[0];
    *wgpipe = vals[0];
    *wgpipe = vals[0];
    *wgpipe = vals[0];
    *wgpipe = vals[1];
    *wgpipe = vals[0];
    *wgpipe = vals[0];
    *wgpipe = vals[1];
    *wgpipe = vals[0];
    *wgpipe = vals[0];
    *wgpipe = vals[1];
    *wgpipe = vals[0];
    *wgpipe = vals[0];
    *wgpipe = vals[1];
    *wgpipe = vals[1];
    *wgpipe = vals[1];
    *wgpipe = vals[0];
    *wgpipe = vals[1];
    *wgpipe = vals[1];
}

s32 GXGetTexBufferSize(s32, s32, s32, s32, s32);
void *fn_800C45B8(s32, void *, s32);
void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
void GXInitTexObjLOD(void *, s32, s32, s32, s32, s32, f32, f32, f32);
void fn_800C0EEC(u8 *obj) {
    extern char lbl_8026FDC0[];
    extern f32 lbl_80369D28;
    s32 size;

    size = GXGetTexBufferSize(0x260, 0x1E0, 4, 0, 0);
    *(void **)(obj + 0x50) = fn_800C45B8(-size, lbl_8026FDC0 + 0x53, 0);
    fn_80222644(obj + 0x30, *(void **)(obj + 0x50), 0x260, 0x1E0, 4, 0, 0, 0);
    GXInitTexObjLOD(obj + 0x30, 1, 1, 0, 0, 0, lbl_80369D28, lbl_80369D28, lbl_80369D28);
}

#pragma optimization_level 3
void fn_800C0F94(void) {
 void Process_UnlinkByKey(void *);
 void fn_800C4588(void *);
 extern u8 lbl_8028D588[], lbl_8028D560[];
 extern void *gMapBlendBufs[];
 s32 i;
 Process_UnlinkByKey(lbl_8028D588);
 Process_UnlinkByKey(lbl_8028D560);
 for (i = 0; i < 3; i++) {
  fn_800C4588(gMapBlendBufs[i]);
  gMapBlendBufs[i] = NULL;
  gMapBlendBufs[i] = NULL;
 }
}
#pragma optimization_level reset
s32 fn_800C1010(void)
{
  unsigned int new_var;
  extern u16 lbl_8028D560[20];
  extern u16 lbl_8028D588[24];
  new_var = 0;
  if (Process_Find(lbl_8028D560) != new_var)
  {
    return 1;
  }
  return Process_Find(lbl_8028D588) != 0;
}

void fn_800C1060(s32 arg0) {
    u8 fn_80040824(void);
    extern u16 lbl_8028D560[20];
    extern u16 lbl_8028D588[24];
    
    if (fn_80040824() != 0) {
        Process_CreateEx(lbl_8028D560, arg0);
        Process_CreateEx(lbl_8028D588, arg0);
    }
}

void fn_800C10B4(void) {
    M2C_UNK fn_80016180();
    fn_80016180();
}

void fn_800C10D4(void *arg0) {
    void Allegiance_SetMask(s32, s32, s32, s32, s32, s32, s32, s32, void *);
    void Model_SetAlpha(void *, u8);

    extern u16 gUnits[];

    u8 *self;
    u8 *unit;
    u8 *allegiance;
    u8 mask[8];
    s32 index;
    s32 alpha;
    u32 flags;

    self = (u8 *)arg0;

    *(s32 *)(self + 0x60) += 0x10;

    Allegiance_SetMask(0, 1, 0, 0, 0, 0, 0, 0, mask);

    for (index = 1; index <= 0x9F; index++) {
        if ((u8)index != 0) {
            unit = (u8 *)gUnits + (((u8)index - 1) * 0x280);
        } else {
            unit = NULL;
        }

        if (*(void **)(unit + 0x188) == NULL) {
            continue;
        }

        allegiance = *(u8 **)(unit + 0x190);

        if (mask[allegiance[8]] == 0) {
            continue;
        }

        flags = *(u32 *)(unit + 0x1A0);

        if ((flags & 0x200) == 0) {
            continue;
        }

        if (flags & 0x40) {
            alpha = 0xFF - *(s32 *)(self + 0x60);

            if (alpha < 0) {
                alpha = 0;
            }

            if (unit[0x27] == 0) {
                continue;
            }
        } else {
            alpha = *(s32 *)(self + 0x60);

            if (alpha > 0xFF) {
                alpha = 0xFF;
            }

            if (unit[0x27] == 0xFF) {
                continue;
            }
        }

        Model_SetAlpha(unit + 0x1C, (u8)alpha);
    }
}

void fn_800C11F4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = -1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0x10;
}

void fn_800C1208(void) {
    extern u8 *gMapBlendBufs[4];
    extern s32 gMapBlendBufIndex;
    void DCFlushRange(void *, u32);
    s32 i;
    u8 *dst;
    u8 *src;
    s32 j;
    s32 k;
    u8 v;
    s32 a;
    s32 b;

    src = gMapBlendBufs[(gMapBlendBufIndex + 2) % 3];
    dst = gMapBlendBufs[gMapBlendBufIndex];
    for (i = 0; i < 0x80; i++) {
        for (j = 0; j < 8; j++) {
            for (k = 0; k < 8; k++) {
                v = *src++;
                a = (v * 0x10) & 0xF0;
                b = v & 0xF0;
                *dst++ = (u8)((a >> 4) + b);
            }
        }
    }
    DCFlushRange(gMapBlendBufs[gMapBlendBufIndex], 0x2000);
}

void fn_800C1360(void *arg0)
{
    extern u8 *gMapBlendBufs[4];
    extern s32 gMapBlendBufIndex;
    void DCFlushRange(void *, u32);
    void Process_ClearFunc(void *);
    s32 i, j;
    u8 *dst;
    s32 t, inv;
    s32 a, b, loA, loB;
    s32 p, q, r, s;
    u8 *src, *next;
    M2C_FIELD(arg0, s32*, 0x60)++;
    next = gMapBlendBufs[(gMapBlendBufIndex + 2) % 3];
    src = gMapBlendBufs[(gMapBlendBufIndex + 1) % 3];
    dst = gMapBlendBufs[gMapBlendBufIndex];
    t = M2C_FIELD(arg0, s32*, 0x60);
    inv = 16 - t;
    for (i=0;i<128;i++) {
        for (j=0;j<32;j++) {
            a = *src++;
            b = *next++;
            loA = a & 15; a &= 240; loB = b & 15; b &= 240;
            p = loB * t; q = loA * inv; r = b * t; s = a * inv;
            *dst++ = ((p + q)>>4) + (((r + s)>>4)&240);
            a = *src++;
            b = *next++;
            loA = a & 15; a &= 240; loB = b & 15; b &= 240;
            p = loB * t; q = loA * inv; r = b * t; s = a * inv;
            *dst++ = ((p + q)>>4) + (((r + s)>>4)&240);
        }
    }
    DCFlushRange(gMapBlendBufs[gMapBlendBufIndex], 0x2000);
    if (M2C_FIELD(arg0, s32*, 0x60)==16) Process_ClearFunc(arg0);
}

void Map_SyncBlendBuffers(void *proc) {
    /* Copy the current map-blend buffer into the other two slots, rebuild the blend mask, and advance the ring index. */
    void fn_800062EC(s32, s32, u32);
    void DCFlushRange(void *, u32);
    void fn_800C1BDC();
    extern s32 gMapBlendBufs[];
    extern s32 gMapBlendBufIndex;
    s32 dst;
    s32 i;

    i = 1;
    M2C_FIELD(proc, s32 *, 0x60) = 0;
    do {
        dst = gMapBlendBufs[(gMapBlendBufIndex + i) % 3];
        fn_800062EC(dst, gMapBlendBufs[gMapBlendBufIndex], 0x2000);
        DCFlushRange((void *)dst, 0x2000);
        i += 1;
    } while (i < 3);
    fn_800C1BDC();
    gMapBlendBufIndex += 1;
    gMapBlendBufIndex %= 3;
}

typedef f32 Mtx[3][4];
typedef struct { u8 b[0x20]; } TexObj;
void fn_800C15A8(void) {
    void C_MTXLightOrtho(Mtx, f32, f32, f32, f32, f32, f32, f32, f32);
    void PSMTXTrans(Mtx, f32, f32, f32);
    void PSMTXIdentity(Mtx);
    void PSMTXConcat(Mtx, Mtx, Mtx);
    s32 GMaterial_AllocTevStage(void);
    s32 GMaterial_AllocTexCoord(void);
    s32 GMaterial_AllocTexMap(void);
    s32 GMaterial_AllocMtx(void);
    void fn_80222C50(void *, s32);
    void fn_80224E50(Mtx, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    extern TexObj lbl_8031FFD0[];
    extern s32 gMapBlendBufIndex;
    Mtx tr, lo, m;
    s32 stage, coord, map, mtx;
    C_MTXLightOrtho(lo, 64.0f, -64.0f, -64.0f, 64.0f, 0.5f, 0.5f, 0.5f, 0.5f);
    PSMTXTrans(tr, -63.0f, -63.0f, 0.0f);
    PSMTXIdentity(m);
    PSMTXConcat(tr, m, m);
    PSMTXConcat(lo, m, m);
    stage = GMaterial_AllocTevStage();
    coord = GMaterial_AllocTexCoord();
    map = GMaterial_AllocTexMap();
    fn_80222C50(&lbl_8031FFD0[gMapBlendBufIndex], map);
    mtx = GMaterial_AllocMtx();
    fn_80224E50(m, mtx, 1);
    fn_802201A8(coord, 1, 0, mtx, 0, 0x7d);
    GXSetTevOrder(stage, coord, map, 0xff);
    GXSetTevColorIn(stage, 0xf, 0, 8, 0xf);
    GXSetTevColorOp(stage, 0, 0, 0, 1, 0);
    GXSetTevAlphaIn(stage, 7, 7, 7, 0);
    GXSetTevAlphaOp(stage, 0, 0, 0, 1, 0);
}

#pragma optimization_level 2
/* Set up map blend-mode TEV (ortho UV, texture, blend ops). Returns 0 if blend off. */
s32 Map_SetupBlendTev(void) {
    s32 GMaterial_AllocMtx(void);
    s32 GMaterial_AllocTexCoord(void);
    s32 GMaterial_AllocTexMap(void);
    s32 GMaterial_AllocTevStage(void);
    void fn_8006A384(void *);
    void PSMTXConcat(void *, void *, void *);
    void PSMTXTrans(void *, f32, f32, f32);
    void C_MTXLightOrtho(void *, f32, f32, f32, f32, f32, f32, f32, f32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void fn_80223C78(s32, s32 *);
    void fn_80223CDC(s32, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void fn_80224E50(void *, s32, s32);
    extern u8 lbl_8031FFD0[];
    extern u8 gMapBlendMode;
    extern s32 gMapBlendBufIndex;
    extern s32 lbl_80369D20;
    extern f32 lbl_80369D28;
    extern f32 lbl_80369D44;
    extern f32 lbl_80369D48;
    extern f32 lbl_80369D4C;
    extern f32 lbl_80369D50;
    u8 mtxTrans[0x30];
    u8 mtxOrtho[0x30];
    u8 mtxOut[0x30];
    s32 tevColor;
    s32 tevStage;
    s32 texCoord;
    s32 texMap;
    s32 mtxId;
    f32 half;
    void *ortho;
    f32 top;
    f32 bottom;

    if ((s32)gMapBlendMode == 0) {
        return 0;
    }
    half = lbl_80369D4C;
    ortho = mtxOrtho;
    top = lbl_80369D44;
    bottom = lbl_80369D48;
    C_MTXLightOrtho(ortho, top, bottom, bottom, top, half, half, half, half);
    PSMTXTrans(mtxTrans, lbl_80369D50, lbl_80369D50, lbl_80369D28);
    fn_8006A384(mtxOut);
    PSMTXConcat(mtxTrans, mtxOut, mtxOut);
    PSMTXConcat(mtxOrtho, mtxOut, mtxOut);
    tevStage = GMaterial_AllocTevStage();
    texCoord = GMaterial_AllocTexCoord();
    texMap = GMaterial_AllocTexMap();
    mtxId = GMaterial_AllocMtx();
    fn_80222C50(lbl_8031FFD0 + (gMapBlendBufIndex << 5), texMap);
    fn_80224E50(mtxOut, mtxId, 1);
    fn_802201A8(texCoord, 1, 0, mtxId, 0, 0x7D);
    GXSetTevOrder(tevStage, texCoord, texMap, 4);
    switch ((s32)gMapBlendMode) {
    case 1:
        GXSetTevColorIn(tevStage, 0xF, 0, 8, 0xF);
        GXSetTevColorOp(tevStage, 0, 0, 0, 1, 0);
        break;
    case 2:
        GXSetTevColorIn(tevStage, 0xD, 0xF, 8, 0);
        GXSetTevColorOp(tevStage, 0, 0, 0, 1, 0);
        break;
    case 3:
        tevColor = lbl_80369D20;
        fn_80223C78(3, &tevColor);
        fn_80223CDC(tevStage, 0xF);
        GXSetTevColorIn(tevStage, 0, 0xE, 8, 0);
        GXSetTevColorOp(tevStage, 0, 0, 3, 1, 0);
        break;
    }
    GXSetTevAlphaIn(tevStage, 7, 7, 7, 0);
    GXSetTevAlphaOp(tevStage, 0, 0, 0, 1, 0);
    return 1;
}
#pragma optimization_level 4
void fn_800C1984(void) {
    s32 Map_Get(void);
    void fn_800462FC(s32, s32, void *);
    void fn_80046360(s32, s32, void *, s32, s32, s32);
    void Map_SetupBlendTev(void);
    extern u8 gMapBlendMode;

    if (gMapBlendMode == 0) {
        fn_800462FC(Map_Get(), 0, Map_SetupBlendTev);
        return;
    }
    fn_80046360(Map_Get(), 0, Map_SetupBlendTev, 0, 0, 0x8000);
}

#pragma push
#pragma optimization_level 3
#pragma peephole off
#pragma opt_common_subs off
void fn_800C19E8(u8 *src) {
    extern u8 *gMapBlendBufs[];
    extern s32 gMapBlendBufIndex;
    extern s32 lbl_80367854;
    extern s32 lbl_80367858;
    void fn_800062B0(void *, s32, s32);
    void DCFlushRange(void *, u32);
    u32 *dst;
    s32 y;
    s32 x;
    s32 i;
    s32 ctr;
    u32 word;
    u8 *p;
    u8 *col;

    if (src == NULL) {
        fn_800062B0(gMapBlendBufs[gMapBlendBufIndex], 0, 0x2000);
    } else {
        word = 0;
        y = 0;
        dst = (u32 *)gMapBlendBufs[gMapBlendBufIndex];
        goto check_y;
        do {
            x = 0;
            goto check_x;
            do {
                col = src + x;
                i = 0;
                for (ctr = 4; ctr != 0; ctr--) {
                    p = col + lbl_80367858 * (y + i);
                    word = (((((((((((((((word << 4) | ((p[0] >> 4) & 0xF)) << 4) | ((p[1] >> 4) & 0xF)) << 4) | ((p[2] >> 4) & 0xF)) << 4) | ((p[3] >> 4) & 0xF)) << 4) | ((p[4] >> 4) & 0xF)) << 4) | ((p[5] >> 4) & 0xF)) << 4) | ((p[6] >> 4) & 0xF)) << 4) | ((p[7] >> 4) & 0xF);
                    dst[0] = word;
                    i += 1;
                    p = col + lbl_80367858 * (y + i);
                    word = (((((((((((((((word << 4) | ((p[0] >> 4) & 0xF)) << 4) | ((p[1] >> 4) & 0xF)) << 4) | ((p[2] >> 4) & 0xF)) << 4) | ((p[3] >> 4) & 0xF)) << 4) | ((p[4] >> 4) & 0xF)) << 4) | ((p[5] >> 4) & 0xF)) << 4) | ((p[6] >> 4) & 0xF)) << 4) | ((p[7] >> 4) & 0xF);
                    dst[1] = word;
                    dst += 2;
                    i += 1;
                }
                x += 8;
            check_x:
                ;
            } while (x < lbl_80367858);
            y += 8;
        check_y:
            ;
        } while (y < lbl_80367854);
    }
    DCFlushRange(gMapBlendBufs[gMapBlendBufIndex], 0x2000);
}
#pragma pop
void fn_800C1BDC(void) {
    void *fn_800C45B8(s32, void *, s32);
    void fn_800C19E8(u8 *);
    void fn_800C4588(void *);
    void fn_800062B0(void *, s32, s32);
    s32 Map_Get(void);
    s32 fn_80047AF8(void);
    extern s32 gMapBlendBufIndex;
    extern u8 gMapBlendMode;
    extern s32 lbl_80367854;
    extern s32 lbl_80367858;
    extern char lbl_8026FDC0[];
    extern u8 gBattleMap[];
    void *buf;
    u8 margin;
    s32 color;
    u8 *row;
    s32 x;
    s32 y;
    u8 *dst;
    s32 y1;

    gMapBlendBufIndex += 1;
    gMapBlendBufIndex %= 3;
    if (gMapBlendMode == 0) {
        fn_800C19E8(NULL);
        return;
    }
    buf = fn_800C45B8(-lbl_80367854 * lbl_80367858, lbl_8026FDC0 + 0x53, 0);
    Map_Get();
    margin = fn_80047AF8();
    color = 0;
    switch ((s32)gMapBlendMode) {
    case 1:
        color = 0x80808080;
        break;
    case 2:
        color = 0x40404040;
        break;
    }
    switch ((s32)gMapBlendMode) {
    case 1:
    case 2:
        fn_800062B0(buf, color, lbl_80367854 * lbl_80367858);
        dst = (u8 *)buf + lbl_80367858;
        y = 1;
        while (y < lbl_80367854 - 1) {
            x = 1;
            dst += 1;
            row = gBattleMap + ((s8)(y - 1) << 6);
            while (x < lbl_80367858 - 1) {
                if (row[(s8)(x - 1) + 0x200D] != 0) {
                    *dst = 0xFF;
                }
                x += 1;
                dst += 1;
            }
            dst += 1;
            y += 1;
        }
        break;
    case 3:
        fn_800062B0(buf, -1, lbl_80367854 * lbl_80367858);
        dst = (u8 *)buf + lbl_80367858;
        y = 1;
        while (y < lbl_80367854 - 1) {
            y1 = y - 1;
            x = 1;
            dst += 1;
            while (x < lbl_80367858 - 1) {
                if ((x - 1) >= (s32)margin && y1 >= (s32)margin
                    && (x - 1) < *(s32 *)gBattleMap - (s32)margin
                    && y1 < ((s32 *)gBattleMap)[1] - (s32)margin) {
                    *dst = 0;
                }
                x += 1;
                dst += 1;
            }
            dst += 1;
            y += 1;
        }
        break;
    }
    fn_800C19E8(buf);
    fn_800C4588(buf);
}

#pragma opt_strength_reduction reset
void fn_800C1E24(void) {
    M2C_UNK DCFlushRange(s32, M2C_UNK);
    M2C_UNK fn_800C1BDC();
    s32 fn_800C4638(M2C_UNK, void *, M2C_UNK);
    M2C_UNK fn_80222644(M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802228D8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
    extern M2C_UNK lbl_8026FDC0;
    extern M2C_UNK lbl_8031FFD0;
    extern s32 lbl_80320030;
    extern s32 lbl_80367850;
    extern s32 lbl_80367854;
    extern s32 lbl_80367858;
    extern s32 lbl_8036785C;
    extern f32 lbl_80369D28;
    M2C_UNK *var_r29;
    s32 *var_r30;
    s32 var_r28;

    var_r30 = &lbl_80320030;
    var_r29 = &lbl_8031FFD0;
    var_r28 = 0;
    lbl_80367850 = 0x4000;
    lbl_80367854 = 0x80;
    lbl_80367858 = 0x80;
    lbl_8036785C = 0;
    do {
        *var_r30 = fn_800C4638(0x2000, &lbl_8026FDC0 + 0x53, 0);
        fn_80222644(var_r29, *var_r30, 0x80, 0x80, 0, 0, 0, 0);
        fn_802228D8(var_r29, 1, 1, 0, 0, 0, lbl_80369D28, lbl_80369D28, lbl_80369D28);
        DCFlushRange(*var_r30, 0x2000);
        var_r28 += 1;
        var_r29 += 0x20;
        var_r30 += 4;
    } while (var_r28 < 3);
    fn_800C1BDC();
}

s32 fn_800C1F1C(void *arg0, void **arg1) {
    void *Event_NextEntry(void *);
    u8 EventFlag_IsSet(void *, void *);
    void *Person_GetByPid(void *);
    void *Unit_FindByPerson(void *);
    void *personA;
    void *other;
    void *personB;
    u8 *unit;
    s32 count = 0;
    u8 *entry;
    for (entry=Event_NextEntry(0); entry; entry=Event_NextEntry(entry)) {
        if ((s32)entry[0xC] == 8) {
            if (EventFlag_IsSet((u8 *)gBattleState+0xB4, *(u8 **)(*(u8 **)(entry+8)+0x24)+(u16)*(s16 *)(entry+0x1A))) continue;
            personA=Person_GetByPid(*(u8 **)(*(u8 **)(entry+8)+0x24)+(u16)*(s16 *)(entry+0x14));
            personB=Person_GetByPid(*(u8 **)(*(u8 **)(entry+8)+0x24)+(u16)*(s16 *)(entry+0x16));
            if (*(void **)((u8 *)arg0+0x188)==personA) {
                other=personB;
            } else {
                if (*(s16 *)(entry+0x18)==0 || *(void **)((u8 *)arg0+0x188)!=personB) continue;
                other=personA;
            }
            unit=Unit_FindByPerson(other);
            if (!unit || !*(void **)(unit+0x188) || (*(u32 *)(unit+0x1A0)&0xD8)) continue;
            arg1[count++]=unit;
            if(count==4) break;
        }
    }
    return count;
}

#pragma push
#pragma optimization_level 4
char *fn_800C2048(s8 arg0, s8 arg1) {
    void *Event_NextEntry(void *);
    u8 EventFlag_IsSet(void *, char *);
    s32 Str_Cmp(char *, char *);
    u8 cont;
    u8 *p;
    s32 value;
    void *node;
    char *base;

    for (node = Event_NextEntry(NULL); node != NULL; node = Event_NextEntry(node)) {
        if ((s32) M2C_FIELD(node, u8 *, 0xC) == 5 && arg0 == M2C_FIELD(node, s16 *, 0x14) && arg1 == M2C_FIELD(node, s16 *, 0x16)) {
            if (EventFlag_IsSet((u8 *) gBattleState + 0xB4, M2C_FIELD(M2C_FIELD(node, void **, 8), char **, 0x24) + (u16) M2C_FIELD(node, s16 *, 0x1A)) == 0) {
                p = M2C_FIELD(node, u8 **, 4);
                value = 0;
                cont = 1;
                while (cont) {
                    switch (*p++) {
                    case 0:
                        cont = 0;
                        break;
                    case 1: case 3: case 5: case 7: case 9: case 11: case 13: case 15: case 17: case 19: case 21: case 23: case 25:
                    case 55: case 65:
                        p += 1;
                        break;
                    case 2: case 4: case 6: case 8: case 10: case 12: case 14: case 16: case 18: case 20: case 22: case 24: case 26:
                    case 58: case 59: case 60: case 61: case 62:
                        p += 2;
                        break;
                    case 27: case 64:
                        p += 4;
                        break;
                    case 28:
                        value = *p++;
                        break;
                    case 29:
                        p += 2;
                        value = (s16) (((p[-2] & 0xFF) << 8) + p[-1]);
                        break;
                    case 30:
                        value = p[0] << 24;
                        value += (p[1] & 0xFF) << 16;
                        value += (p[2] & 0xFF) << 8;
                        value += p[3];
                        p += 4;
                        break;
                    case 56:
                        base = M2C_FIELD(M2C_FIELD(node, void **, 8), char **, 0x24);
                        base += (s16) (((p[0] & 0xFF) << 8) + p[1]);
                        p += 3;
                        if (Str_Cmp("MindGetItem", base) == 0) {
                            return M2C_FIELD(M2C_FIELD(node, void **, 8), char **, 0x24) + value;
                        }
                        break;
                    }
                }
                return NULL;
            }
        }
    }
    return NULL;
}
#pragma pop
void fn_800C221C(void)
{
    void DebugPrint(const char *, ...);
    void fn_800142C0(s32 **, s16 *);
    void *Event_NextEntry(void *);
    char *Allegiance_GetNameStr(s32);
    extern char lbl_8026FE18[];
#pragma global_optimizer off
    s32 *entry;
    s16 count;
    u8 type;
    const char *name;
    char *baseA;
    s32 i;
    s32 j;
    u8 *event;
    char *baseB;
    u32 head;

    DebugPrint(lbl_8026FE18 + 0x29);
    fn_800142C0(&entry, &count);

    baseA = lbl_8026FE18;
    for (i = 0; i < count; i++) {
        DebugPrint(baseA + 0x47, *entry);
        for (j = 0; j < (s8)((u8 *)entry)[0xD]; j++) {
            DebugPrint(baseA + 0x52);
            if (j < (s8)((u8 *)entry)[0xD] - 1) {
                DebugPrint(baseA + 0x56);
            }
        }
        DebugPrint(baseA + 0x58);
        entry = (s32 *)((u8 *)entry + 0x10);
    }

    i = 0;
    event = Event_NextEntry((void *)0);
    baseB = lbl_8026FE18;
    while (event != 0) {
        DebugPrint(baseB + 0x5B, i);
        if (*(u8 **)(event + 8) != 0) {
            DebugPrint(lbl_8026FE18 + 0x62, *(u8 **)(event + 8) + 4);
        } else {
            DebugPrint(lbl_8026FE18 + 0x66);
        }
        head = *(u32 *)event;
        if (head != 0) {
            DebugPrint(lbl_8026FE18 + 0x6E, head);
        } else {
            type = event[0xC];
            if ((s8)type != 0) {
                switch ((s8)type) {
                case 1: name = lbl_8026FE18 + 0x71; break;
                case 2: name = lbl_8026FE18 + 0x7A; break;
                case 3: name = lbl_8026FE18 + 0x83; break;
                case 4: name = lbl_8026FE18 + 0x8C; break;
                case 5: name = lbl_8026FE18 + 0x91; break;
                case 6: name = lbl_8026FE18 + 0x9B; break;
                case 7: name = lbl_8026FE18 + 0xA0; break;
                case 8: name = lbl_8026FE18 + 0xA5; break;
                case 9: name = lbl_8026FE18 + 0xAB; break;
                case 10: name = lbl_8026FE18 + 0xB0; break;
                case 11: name = lbl_8026FE18 + 0xB9; break;
                case 12: name = lbl_8026FE18 + 0xBD; break;
                case 13: name = lbl_8026FE18 + 0xC6; break;
                case 14: name = lbl_8026FE18 + 0xCE; break;
                case 15: name = lbl_8026FE18 + 0xD7; break;
                default: name = lbl_8026FE18 + 0xDC; break;
                case 0: name = lbl_8026FE18 + 0xE3; break;
                }
                DebugPrint(name);
            } else {
                DebugPrint(lbl_8026FE18 + 0xED);
            }
        }
        DebugPrint(baseB + 0xF3);
        type = event[0xC];
        if ((s8)type != 0) {
            switch ((s8)type) {
            case 1:
                DebugPrint(lbl_8026FE18 + 0xF5,
                    *(s32 *)(*(u8 **)(event + 8) + 0x24) + *(s16 *)(event + 0x14));
                break;
            case 2:
                DebugPrint(lbl_8026FE18 + 0xFA,
                    *(s16 *)(event + 0x14),
                    *(s16 *)(event + 0x16),
                    Allegiance_GetNameStr(*(s16 *)(event + 0x18)));
                break;
            case 3:
                DebugPrint(lbl_8026FE18 + 0x103,
                    *(s16 *)(event + 0x14),
                    *(s16 *)(event + 0x16),
                    *(s16 *)(event + 0x18),
                    *(s16 *)(event + 0x1A),
                    Allegiance_GetNameStr(*(s16 *)(event + 0x1C)),
                    *(s32 *)(*(u8 **)(event + 0x8) + 0x24) + *(s16 *)(event + 0x1E));
                break;
            case 4:
                DebugPrint(lbl_8026FE18 + 0x117,
                    *(s16 *)(event + 0x14),
                    *(s16 *)(event + 0x16),
                    *(s16 *)(event + 0x18),
                    *(s32 *)(*(u8 **)(event + 8) + 0x24) + *(s16 *)(event + 0x1A));
                break;
            case 5: {
                char *s;
                const char *tag;
                u8 *scr;
                s = (char *)lbl_8026FE18;
                tag = s + 0x12A;
                if (*(s16 *)(event + 0x18) != 0) {
                    tag = s + 0x125;
                }
                scr = *(u8 **)(event + 8);
                DebugPrint(lbl_8026FE18 + 0x130,
                    *(s32 *)(scr + 0x24) + *(s16 *)(event + 0x14),
                    *(s32 *)(scr + 0x24) + *(s16 *)(event + 0x16),
                    tag,
                    *(s32 *)(scr + 0x24) + *(s16 *)(event + 0x1A));
                break;
            }
            case 6: {
                s8 *p;
                s16 x;
                u8 *scr;
                s32 tab;
                char *base;
                base = lbl_8026FE18;
                scr = *(u8 **)(event + 8);
                p = (s8 *)(base + *(s16 *)(event + 0x18));
                x = *(s16 *)(event + 0x14);
                tab = *(s32 *)(scr + 0x24);
                DebugPrint(base + 0x142, tab + x, tab + *(s16 *)(event + 0x16), p[0x152]);
                break;
            }
            case 7: {
                u8 *scr;
                scr = *(u8 **)(event + 8);
                DebugPrint(lbl_8026FE18 + 0x157,
                    *(s32 *)(scr + 0x24) + *(s16 *)(event + 0x14),
                    *(s32 *)(scr + 0x24) + *(s16 *)(event + 0x16),
                    *(s16 *)(event + 0x18));
                break;
            }
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            default: {
                s32 k;
                baseA = lbl_8026FE18;
                for (k = 0; k < (s8)event[0xD]; k++) {
                    DebugPrint(baseA + 0x52);
                    if (k < (s8)event[0xD] - 1) {
                        DebugPrint(baseA + 0x56);
                    }
                }
                DebugPrint(baseB + 0x58);
                break;
            }
            }
        }
        i++;
        event = Event_NextEntry(event);
    }
    DebugPrint(lbl_8026FE18 + 0x164);
}
#pragma global_optimizer on
s32 Event_GetString(void *arg0, u16 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x24) + arg1;
}

#pragma push
#pragma global_optimizer off
void fn_800C2750(void) {
    M2C_UNK fn_80014000(s32, s32);
    M2C_UNK fn_80013F6C(void *, s32);
    M2C_UNK EventWork_Set(void *);
    M2C_UNK Script_RegisterCommands(void);
    M2C_UNK Script_RegisterEventArrowCommands(void);
    M2C_UNK fn_8019DB68(void);
    M2C_UNK ScriptCmd_CmLoadScript(void *);
    M2C_UNK ScriptCtx_Begin(void *);
    M2C_UNK ScriptCtx_Call(void);
    void EventFlag_Reset(s32 *);
    void fn_800BDE40(void *, s32);
    extern u8 gEventWork[];
    extern u8 lbl_8026FE18[];
    extern u16 gBattleState[700];
    u8 *work;

    work = gEventWork;
    fn_80014000(0x20, 0x1A0);
    fn_80013F6C(work + 0x0, 0x80);
    fn_80013F6C(work + 0x20, 0x80);
    fn_80013F6C(work + 0x40, 0x80);
    EventWork_Set(work + 0x0);
    fn_800BB0E8();
    fn_800B5708();
    Script_RegisterCommands();
    Script_RegisterEventArrowCommands();
    fn_8019DB68();
    ScriptCmd_CmLoadScript(lbl_8026FE18 + 0x167);
    work = (u8 *)gBattleState + 0xB4;
    EventFlag_Reset((s32 *)work);
    fn_800BDE40(work, (s32)(lbl_8026FE18 + 0x17B));
    fn_800BDE40(work, (s32)(lbl_8026FE18 + 0x187));
    fn_800BDE40(work, (s32)(lbl_8026FE18 + 0x193));
    fn_800BDE40(work, (s32)(lbl_8026FE18 + 0x19F));
    fn_800BDE40(work, (s32)(lbl_8026FE18 + 0x1AC));
    fn_800BDE40(work, (s32)(lbl_8026FE18 + 0x1B9));
    fn_800BDE40(work, (s32)(lbl_8026FE18 + 0x1C6));
    fn_800BDE40(work, (s32)(lbl_8026FE18 + 0x1CE));
    ScriptCtx_Begin(lbl_8026FE18 + 0x1D6);
    ScriptCtx_Call();
}
#pragma pop
extern u8 lbl_8028D768[16];
void fn_800C28A0(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 lbl_8028D768[16];
    Process_CreateChild(lbl_8028D768, arg0);
}

void fn_800C28CC(void) {
    M2C_UNK fn_80013880();
    fn_80013880();
}

void fn_800C28EC(void) {
    M2C_UNK ScriptCtx_Call();
    M2C_UNK ScriptCtx_Begin(void *);
    M2C_UNK ScriptCmd_CmLoadScript(void *);
    M2C_UNK fn_800AA1CC();
    extern u8 lbl_80270000[];
    fn_800AA1CC();
    ScriptCmd_CmLoadScript(lbl_80270000 + 0x26);
    ScriptCtx_Begin(lbl_80270000 + 0x37);
    ScriptCtx_Call();
}

void fn_800C2930(s32 arg0, s32 arg1) {
    M2C_UNK Stream_Read(s32, s32, s32);
    M2C_UNK fn_801A7CDC(void *);
    extern u8 gBattle[];
    fn_801A7CDC(gBattle);
    Stream_Read(arg1, 0x480, arg0);
}

#pragma scheduling on

#pragma scheduling reset

#pragma optimization_level 2

#pragma optimization_level reset

#pragma use_lmw_stmw on
#pragma opt_common_subs off
#pragma global_optimizer off
#pragma scheduling on

#pragma scheduling reset
#pragma global_optimizer on
#pragma opt_common_subs reset
#pragma use_lmw_stmw reset

extern struct Unit;

#pragma optimization_level 3

#pragma optimization_level reset

/* Return index of first empty convoy item slot, or -1 if full. */

#include "common.h"
extern u8 gFxChannels[];
extern void Fx_FadeOut(u32*, s16);
extern void fn_80146B00(void);
#include "global.h"
extern u16 gSoundSys[];

extern u16 gSoundSys[4976];

u16 Fx_GetFlags(s32 arg0) {
    return *(u16 *)(*(u8 **)((u8 *)gSoundSys + 0xF8) + arg0 * 0x13C);
}

void Fx_SetVolume(s32 slot, u16 volume) {
    /* Store FX channel volume; if the channel is active, apply it to its voice handle(s). */
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void Sound_SetVolume(void *, u16);
    u8 *sys;
    u8 *entry;
    u16 nest;

    sys = (u8 *)gSoundSys;
    entry = *(u8 **)(sys + 0xF8) + slot * 0x13C;
    if (*(u16 *)entry != 0) {
        *(u16 *)(entry + 0x1C) = volume;
        if (*(u16 *)entry & 8) {
            if (*(u16 *)(sys + 0x124) == 0) {
                *(s32 *)((u8 *)gSoundSys + 0x128) = OSDisableInterrupts();
            }
            *(u16 *)(sys + 0x124) = *(u16 *)(sys + 0x124) + 1;
            Sound_SetVolume(*(void **)(entry + 0x50), *(u16 *)(entry + 0x1C));
            if (*(u16 *)(entry + 0x1E) == 2) {
                Sound_SetVolume(*(void **)(entry + 0xD8), *(u16 *)(entry + 0x1C));
            }
            nest = *(u16 *)(sys + 0x124);
            if (nest != 0) {
                nest -= 1;
                *(u16 *)(sys + 0x124) = nest;
                if ((u16)nest == 0) {
                    OSRestoreInterrupts(*(s32 *)((u8 *)gSoundSys + 0x128));
                }
            }
        }
    }
}

void fn_800AF7F0(s32 arg0, u8 arg1) {
    void fn_8024CE60(void *, s32, u8, u8, s32);
    extern u16 gSoundSys[4976];
    extern f32 lbl_80369CB4;
    u8 *e;
    u8 *e2;
    u8 v;
    f32 f;
    f32 f31;

    e = *(u8 **)((u8 *)gSoundSys + 0xF8) + arg0 * 0x13C;
    if (*(u16 *)e != 0) {
        *(u16 *)(e + 8) = arg1;
        if (*(u16 *)e & 8) {
            v = (u8)*(u16 *)(e + 6);
            e2 = *(u8 **)((u8 *)gSoundSys + 0xF8) + arg0 * 0x13C;
            if (*(u16 *)e2 != 0) {
                *(u16 *)(e2 + 6) = v;
                if (*(u16 *)e2 & 8) {
                    if (*(u16 *)(e2 + 0x1E) == 1) {
                        fn_8024CE60(*(void **)(e2 + 0x50), (s32)*(f32 *)(e2 + 0x10), v, (u8)*(u16 *)(e2 + 8), 0);
                    } else {
                        f = *(f32 *)(e2 + 0x10);
                        f31 = f;
                        if (v < 0x40) {
                            f31 = ((f32)v * f) / lbl_80369CB4;
                        }
                        if ((u32)(v - 0x40) >> 31 == 0) {
                            f = ((f32)(s32)(0x7F - v) * f) / lbl_80369CB4;
                        }
                        fn_8024CE60(*(void **)(e2 + 0x50), (s32)f, 0, (u8)*(u16 *)(e2 + 8), 0);
                        fn_8024CE60(*(void **)(e2 + 0xD8), (s32)f31, 0x7F, (u8)*(u16 *)(e2 + 8), 0);
                    }
                }
            }
        }
    }
}

void fn_800AF96C(s32 arg0, u8 arg1) {
    void fn_8024CE60(void *, s32, u8, u8, s32);
    extern u16 gSoundSys[4976];
    extern f32 lbl_80369CB4;
    u8 *e;
    u8 *e2;
    u8 v;
    f32 f;
    f32 f31;
    f32 temp;

    e = *(u8 **)((u8 *)gSoundSys + 0xF8) + arg0 * 0x13C;
    if (*(u16 *)e != 0) {
        temp = (f32)arg1;
        *(f32 *)(e + 0x10) = temp;
        *(f32 *)(e + 0xC) = temp;
        if (*(u16 *)e & 8) {
            v = (u8)*(u16 *)(e + 6);
            e2 = *(u8 **)((u8 *)gSoundSys + 0xF8) + arg0 * 0x13C;
            if (*(u16 *)e2 != 0) {
                *(u16 *)(e2 + 6) = v;
                if (*(u16 *)e2 & 8) {
                    if (*(u16 *)(e2 + 0x1E) == 1) {
                        fn_8024CE60(*(void **)(e2 + 0x50), (s32)*(f32 *)(e2 + 0x10), v, (u8)*(u16 *)(e2 + 8), 0);
                    } else {
                        f = *(f32 *)(e2 + 0x10);
                        f31 = f;
                        if (v < 0x40) {
                            f31 = ((f32)v * f) / lbl_80369CB4;
                        }
                        if ((u32)(v - 0x40) >> 31 == 0) {
                            f = ((f32)(s32)(0x7F - v) * f) / lbl_80369CB4;
                        }
                        fn_8024CE60(*(void **)(e2 + 0x50), (s32)f, 0, (u8)*(u16 *)(e2 + 8), 0);
                        fn_8024CE60(*(void **)(e2 + 0xD8), (s32)f31, 0x7F, (u8)*(u16 *)(e2 + 8), 0);
                    }
                }
            }
        }
    }
}

void fn_800AFAFC(s32 arg0, u8 arg1) {
    void fn_8024CE60(void *, s32, u8, u8, s32);
    extern u16 gSoundSys[4976];
    extern f32 lbl_80369CB4;
    u8 *e2;
    f32 f;
    f32 f31;

    e2 = *(u8 **)((u8 *)gSoundSys + 0xF8) + arg0 * 0x13C;
    if (*(u16 *)e2 != 0) {
        *(u16 *)(e2 + 6) = arg1;
        if (*(u16 *)e2 & 8) {
            if (*(u16 *)(e2 + 0x1E) == 1) {
                fn_8024CE60(*(void **)(e2 + 0x50), (s32)*(f32 *)(e2 + 0x10), arg1, (u8)*(u16 *)(e2 + 8), 0);
            } else {
                f = *(f32 *)(e2 + 0x10);
                f31 = f;
                if (arg1 < 0x40) {
                    f31 = ((f32)arg1 * f) / lbl_80369CB4;
                }
                if ((u32)(arg1 - 0x40) >> 31 == 0) {
                    f = ((f32)(s32)(0x7F - arg1) * f) / lbl_80369CB4;
                }
                fn_8024CE60(*(void **)(e2 + 0x50), (s32)f, 0, (u8)*(u16 *)(e2 + 8), 0);
                fn_8024CE60(*(void **)(e2 + 0xD8), (s32)f31, 0x7F, (u8)*(u16 *)(e2 + 8), 0);
            }
        }
    }
}

extern f64 lbl_80369CC0;
extern f32 lbl_80369CC8;
extern f32 lbl_80369CCC;
extern f32 lbl_80369CB0;
extern f32 lbl_80369CD0;
typedef struct { u16 flags; u8 pad[0xa]; f32 xc; f32 x10; u8 pad2[4]; f32 x18; u8 pad3[0x13c - 0x1c]; } Fade;
typedef struct { u8 pad[0xf8]; Fade *fades; u8 pad2[0x24]; u16 x120; } SoundSys2;
void fn_800AFC54(s32 i) {
    extern u16 gSoundSys[4976];
    u16 ms = ((SoundSys2 *)gSoundSys)->x120;
    Fade *e = &((SoundSys2 *)gSoundSys)->fades[i];
    if (e->flags) {
        f32 t = (s32)ms / 16.666666f;
        if (t < 1.0f) t = 1.0f;
        e->flags &= ~2;
        e->x18 = (e->xc - e->x10) / t;
        e->flags |= 0x10;
        e->flags &= ~0x20;
        e->flags &= ~0x40;
    }
}

#pragma optimization_level 3
#pragma global_optimizer off
#pragma push
#pragma optimization_level 4
typedef struct { u16 flags; u8 pad[0xa]; f32 xc; f32 x10; f32 x14; f32 x18; u8 pad3[0x13c - 0x1c]; } Fade_800AFCFC;
typedef struct { u8 pad[0xf8]; Fade_800AFCFC *fades; u8 pad2[0x26]; u16 x122; } SoundSys8;
void fn_800AFCFC(s32 i) {
    extern u16 gSoundSys[4976];
    extern f32 lbl_80369CB0,lbl_80369CD8,lbl_80369CDC,lbl_80369CE0,lbl_80369CE4,lbl_80369CE8,lbl_80369CEC;
    u16 ms = ((SoundSys8 *)gSoundSys)->x122;
    Fade_800AFCFC *e = &((SoundSys8 *)gSoundSys)->fades[i];
    if (e->flags) {
        f32 t = (s32)ms / 16.666666f;
        s32 v;
        if (t < 1.0f) t = 1.0f;
        v = e->xc * (*(f32 *)&lbl_80369CB0) / 100.0f;
        {
            f32 mx = e->x10;
            if (v > mx) v = mx;
        }
        e->x14 = v;
        e->x18 = (e->x10 - e->x14) / t;
        e->flags |= 0x40;
        e->flags &= ~0x10;
        e->flags &= ~0x20;
    }
}
#pragma pop
#pragma push
#pragma optimization_level 4
#pragma dont_inline off
typedef struct { u16 flags; u16 slot; u8 pad[0x18]; u16 vol; u16 x1e; u8 pad1[0xc]; void *x2c; u8 pad2[0x20]; void *x50; u8 pad3[0x60]; void *xb4; u8 pad4[0x20]; void *xd8; u8 pad5[0x13c - 0xdc]; } Fade_800AFE0C;
typedef struct { u8 pad[0xf8]; Fade_800AFE0C *fades; s32 xfc; u8 pad2[0x24]; u16 lock; u16 pad3; s32 level; u8 pad4[0x12]; u16 slots[8]; } SoundSys7;
static inline void SndLock(void) {
    extern u16 gSoundSys[4976];
    s32 OSDisableInterrupts(void);
    if (((SoundSys7 *)gSoundSys)->lock == 0) ((SoundSys7 *)gSoundSys)->level = OSDisableInterrupts();
    ((SoundSys7 *)gSoundSys)->lock++;
}
static inline void SndUnlock(void) {
    extern u16 gSoundSys[4976];
    s32 OSRestoreInterrupts(s32);
    if (((SoundSys7 *)gSoundSys)->lock != 0) {
        if (--((SoundSys7 *)gSoundSys)->lock == 0) OSRestoreInterrupts(((SoundSys7 *)gSoundSys)->level);
    }
}
void fn_800AFE0C(s32 i) {
    extern u16 gSoundSys[4976];
    void fn_800B49D0(void *);
    void fn_8024DA2C(void *);
    Fade_800AFE0C *e = &((SoundSys7 *)gSoundSys)->fades[i];
    if (e->flags) {
        u16 fl = e->flags;
        if (!(fl & 8)) {
            e->flags = fl | 4;
            return;
        }
        if (fl & 0x400) ((SoundSys7 *)gSoundSys)->slots[e->slot] = 0;
        e->flags = 0;
        SndLock();
        fn_800B49D0(e->x2c);
        fn_800B49D0(e->xb4);
        fn_8024DA2C(e->x50);
        if (e->x1e == 2) fn_8024DA2C(e->xd8);
        SndUnlock();
        ((SoundSys7 *)gSoundSys)->xfc = -1;
    }
}
#pragma pop
#pragma push
#pragma optimization_level 3
#pragma opt_strength_reduction on
void fn_800AFF28(s32 arg0, u32 arg1) {
    void fn_800062EC(void *, void *, s32);
    void fn_800B1720(void *);
    void fn_800B16EC(void *);
    void fn_800B125C(void *);
    void fn_800B49E0(void *, s32, s32, s32, void *);
    void DCInvalidateRange(void *, u32);
    void ARQPostRequest(void *, void *, s32, s32, u32, void *, u32, void *);
    u32 fn_8024CE1C(s32, s32);
    void *fn_8024C97C(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *, s32, void *);
    void fn_8024CE60(void *, s32, u8, u8, s32);
    u32 fn_800B49C8(void *);
    void fn_800B0AEC(void);
    extern f32 lbl_80369CB4;
    u8 *e;
    s32 idx;
    u8 *sys;
    u8 *src;
    u8 kind;
    u32 aligned, size;
    u8 *stream;
    StreamB *slot;
    u32 offset, limit;
    u32 base;
    u32 clear;
    u8 *p;
    u8 *p2;
    s32 r8;
    u8 *peer;
    u8 vol;
    f32 f, f31;
    u32 sz2;
    u32 ctr, rem;

    if (arg0 < 0) return;
    sys = (u8 *)gSoundSys;
    {
        u8 *walk = *(u8 **)(sys + 0xF8);
        s32 i;
        for (i = 0; i < 3; i++, walk += 0x13C) {
            idx = i;
            e = walk;
            if (*(u16 *)walk && *(u32 *)(walk + 0x2C) + 0x40 == arg1) break;
        }
        idx = i;
    }
    src = *(u8 **)(e + 0x54);
    kind = src[0];
    *(u16 *)(e + 0x1C) = *(u16 *)(src + 2);
    *(u16 *)(e + 0x1E) = (u16)*(u32 *)(src + 4);
    *(u32 *)(e + 0x20) = *(u32 *)(src + 8);
    *(u32 *)(e + 0x24) = *(u32 *)(src + 0xC);
    *(u32 *)(e + 0x8C) = *(u32 *)(src + 0x10);
    *(u32 *)(e + 0x114) = *(u32 *)(src + 0x14);
    *(u32 *)(e + 0x90) = *(u32 *)(src + 0x18);
    *(u32 *)(e + 0x118) = *(u32 *)(src + 0x1C);
    if (*(u32 *)(e + 0x24) + 0x10000 != 0xFFFF) {
        *(u16 *)e = (u16)(*(u16 *)e | 0x200);
    } else {
        *(u32 *)(e + 0x24) = 0;
    }
    switch (kind) {
    case 0:
        *(u32 *)(e + 0x8C) = *(u32 *)(e + 0x20);
        *(u32 *)(e + 0x114) = *(u32 *)(e + 0x20);
        *(u32 *)(e + 0x90) = *(u32 *)(e + 0x24);
        *(u32 *)(e + 0x118) = *(u32 *)(e + 0x24);
        *(u16 *)(e + 4) = 0x40;
        break;
    case 2:
        *(u16 *)e = (u16)(*(u16 *)e | 0x100);
        fn_800062EC(e + 0x94, src + 0x5C, 0x20);
        if (*(u16 *)(e + 0x1E) == 2) {
            fn_800062EC(e + 0x11C, src + 0xBC, 0x20);
        }
        *(u16 *)(e + 4) = 0x100;
        break;
    }
    *(u16 *)(e + 0x78) = 0;
    *(u32 *)(e + 0x70) = 0;
    *(u32 *)(e + 0x60) = 0;
    *(u32 *)(e + 0x64) = 0;
    *(u16 *)(e + 0x80) = 0;
    *(u16 *)(e + 0x82) = 0;
    *(u16 *)(e + 0x84) = 0;
    *(u16 *)(e + 0x86) = 0;
    *(u16 *)(e + 0x88) = 0;
    *(u16 *)(e + 0x100) = 0;
    *(u32 *)(e + 0xF8) = 0;
    *(u32 *)(e + 0xE8) = 0;
    *(u32 *)(e + 0xEC) = 0;
    *(u16 *)(e + 0x108) = 0;
    *(u16 *)(e + 0x10A) = 0;
    *(u16 *)(e + 0x10C) = 0;
    *(u16 *)(e + 0x10E) = 0;
    *(u16 *)(e + 0x110) = 0;
    if (!(*(u16 *)e & 0x400)) {
        *(u16 *)(e + 0x78) = 1;
        stream = e + 0x2C;
        offset = *(u32 *)(e + 0x60);
        limit = *(u32 *)(e + 0x8C);
        {
            u32 step = 0x10000, n;
            size = 0x8000;
            if (offset + 0x8000 > limit) size = limit - offset;
            else for (n = 2; n < 6; n++) {
                if (offset + step > limit) {
                    size -= (0x8000 - (limit - (offset + ((n-1)<<15)))) / n;
                    size += 0x20 - (size & 31);
                    break;
                }
                step += 0x8000;
            }
        }
        aligned = (size + 0x1F) & ~0x1F;
        if (!(*(u16 *)e & 0x400)) {
            slot = (StreamB *)(stream + (1 - *(u16 *)(stream + 0x4C)) * 4);
            fn_800B49E0(*(void **)stream, slot->buffers[0], aligned, *(u16 *)(e + 4) + offset, fn_800B1720);
        } else {
            base = *(u32 *)((u8 *)gSoundSys + *(u16 *)(e + 2) * 4 + 0x134) + offset + *(u16 *)(e + 4);
            slot = (StreamB *)(stream + (1 - *(u16 *)(stream + 0x4C)) * 4);
            DCInvalidateRange((void *)slot->buffers[0], 0x8000);
            slot = (StreamB *)(stream + (1 - *(u16 *)(stream + 0x4C)) * 4);
            ARQPostRequest(stream + 4, stream, 1, 0, base, (void *)slot->buffers[0], aligned, fn_800B16EC);
        }
        *(u32 *)(stream + 0x48) = size;
        *(u16 *)e = (u16)(*(u16 *)e | 0x1000);
        if (*(u16 *)(e + 0x1E) == 2) {
            *(u16 *)(e + 0x100) = 1;
            stream = e + 0xB4;
            offset = *(u32 *)(e + 0xE8);
            limit = *(u32 *)(e + 0x114);
            base = limit + (32 - (limit & 31));
            {
            u32 step = 0x10000, n;
            size = 0x8000;
            if (offset + 0x8000 > limit) size = limit - offset;
            else for (n = 2; n < 6; n++) {
                if (offset + step > limit) {
                    size -= (0x8000 - (limit - (offset + ((n-1)<<15)))) / n;
                    size += 0x20 - (size & 31);
                    break;
                }
                step += 0x8000;
            }
        }
            aligned = (size + 0x1F) & ~0x1F;
            if (!(*(u16 *)e & 0x400)) {
                slot = (StreamB *)(stream + (1 - *(u16 *)(stream + 0x4C)) * 4);
                fn_800B49E0(*(void **)stream, slot->buffers[0], aligned, *(u16 *)(e + 4) + (offset + base), fn_800B1720);
            } else {
                base = offset + base + *(u32 *)((u8 *)gSoundSys + *(u16 *)(e + 2) * 4 + 0x134) + *(u16 *)(e + 4);
                slot = (StreamB *)(stream + (1 - *(u16 *)(stream + 0x4C)) * 4);
                DCInvalidateRange((void *)slot->buffers[0], 0x8000);
                slot = (StreamB *)(stream + (1 - *(u16 *)(stream + 0x4C)) * 4);
                ARQPostRequest(stream + 4, stream, 1, 0, base, (void *)slot->buffers[0], aligned, fn_800B16EC);
            }
            *(u32 *)(stream + 0x48) = size;
            *(u16 *)e = (u16)(*(u16 *)e | 0x2000);
        }
    }
    clear = fn_8024CE1C(0xE00, 0);
    p = *(u8 **)(e + 0x54);
    for (rem = clear; rem != 0; --rem) *p++ = 0;
    if (*(u16 *)(e + 0x1E) == 2) {
        p2 = *(u8 **)(e + 0xDC);
        for (rem = clear; rem != 0; --rem) *p2++ = 0;
    }
    r8 = 0;
    if (*(u16 *)(e + 0x1E) == 1) r8 = 0x40;
    if (!(*(u16 *)e & 0x100)) {
        *(void **)(e + 0x50) = fn_8024C97C(0xFF, *(void **)(e + 0x54), 0xE00, *(u16 *)(e + 0x1C), 0, r8, 0, 0, 0, 0, 0x10000, (void *)fn_800B0AEC, idx, 0);
        if (*(u16 *)(e + 0x1E) == 2) {
            *(void **)(e + 0xD8) = fn_8024C97C(0xFF, *(void **)(e + 0xDC), 0xE00, *(u16 *)(e + 0x1C), 0, 0x7F, 0, 0, 0, 0, 0x10000, (void *)fn_800B0AEC, idx | 0x100, 0);
        }
        *(u16 *)e = (u16)(*(u16 *)e | 8);
    } else {
        *(void **)(e + 0x50) = fn_8024C97C(0xFF, *(void **)(e + 0x54), 0xE00, *(u16 *)(e + 0x1C), 0, r8, 0, 0, 0, 0, 0x10001, (void *)fn_800B0AEC, idx, e + 0x94);
        if (*(u16 *)(e + 0x1E) == 2) {
            *(void **)(e + 0xD8) = fn_8024C97C(0xFF, *(void **)(e + 0xDC), 0xE00, *(u16 *)(e + 0x1C), 0, 0x7F, 0, 0, 0, 0, 0x10001, (void *)fn_800B0AEC, idx | 0x100, e + 0x11C);
        }
    }
    vol = (u8)*(u16 *)(e + 6);
    peer = *(u8 **)(sys + 0xF8) + idx * 0x13C;
    if (*(u16 *)peer != 0) {
        *(u16 *)(peer + 6) = vol;
        if (*(u16 *)peer & 8) {
            if (*(u16 *)(peer + 0x1E) == 1) {
                fn_8024CE60(*(void **)(peer + 0x50), (s32)*(f32 *)(peer + 0x10), vol, (u8)*(u16 *)(peer + 8), 0);
            } else {
                f = *(f32 *)(peer + 0x10);
                f31 = f;
                if (vol < 0x40) {
                    f31 = ((f32)vol * f) / lbl_80369CB4;
                }
                if ((u32)(vol - 0x40) >> 31 == 0) {
                    f = ((f32)(s32)(0x7F - vol) * f) / lbl_80369CB4;
                }
                fn_8024CE60(*(void **)(peer + 0x50), (s32)f, 0, (u8)*(u16 *)(peer + 8), 0);
                fn_8024CE60(*(void **)(peer + 0xD8), (s32)f31, 0x7F, (u8)*(u16 *)(peer + 8), 0);
            }
        }
    }
    *(f32 *)(e + 0x18) = *(f32 *)(e + 0xC);
    *(u16 *)e = (u16)(*(u16 *)e | 0x10);
    if (*(u16 *)e & 0x400) {
        sz2 = fn_800B49C8(*(void **)(e + 0x2C));
        offset = *(u32 *)(e + 0x60);
        size = 0x8000;
        if (offset + 0x8000 >= sz2) size = sz2 - offset;
        fn_800B49E0(*(void **)(e + 0x2C), *(s32 *)(e + 0x58), (size + 0x1F) & ~0x1F, 0, fn_800B125C);
        *(u32 *)(e + 0x74) = size;
    }
}
#pragma pop
#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
void fn_800B080C(s32 arg0, s32 arg1, s32 arg2) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void fn_800B49D0(void *);
    void fn_800B49E0(void *, s32, s32, s32, void *);
    void *fn_800B4A84(void *, s32, s32);
    void sprintf(void *, void *, ...);
    void fn_8024DA2C(void *);
    extern f32 lbl_80369CB0;
    extern f32 lbl_80369CD4;
    extern u8 gSoundPathBuf[];
    extern u8 Sound_str[];
    void fn_800AFF28(s32, u32);

    u8 *buf;
    u16 flags;
    u32 nest;
    s32 i;
    u8 *p;
    s32 ctr;
    void *h;
    u16 *slot;
    f32 f0;
    f32 f1;
    u8 *entry;

    buf = (u8 *)gSoundSys;
    entry = *(u8 **)(buf + 0xF8) + arg0 * 0x13C;
    flags = *(u16 *)entry;
    if (flags != 0) {
        if (flags != 0) {
            if (!(flags & 8)) {
                *(u16 *)entry = (u16)(flags | 4);
            } else {
                if (flags & 0x400) {
                    slot = (u16 *)(buf + 0x13E);
                    slot[*(u16 *)(entry + 2)] = 0;
                }
                *(u16 *)entry = 0;
                buf = (u8 *)gSoundSys;
                if (*(u16 *)(buf + 0x124) == 0) {
                    *(s32 *)((u8 *)gSoundSys + 0x128) = OSDisableInterrupts();
                }
                *(u16 *)(buf + 0x124) = (u16)(*(u16 *)(buf + 0x124) + 1);
                fn_800B49D0(*(void **)(entry + 0x2C));
                fn_800B49D0(*(void **)(entry + 0xB4));
                fn_8024DA2C(*(void **)(entry + 0x50));
                if (*(u16 *)(entry + 0x1E) == 2) {
                    fn_8024DA2C(*(void **)(entry + 0xD8));
                }
                nest = *(u16 *)(buf + 0x124);
                if (nest != 0) {
                    nest -= 1;
                    *(u16 *)(buf + 0x124) = nest;
                    if ((u16)nest == 0) {
                        OSRestoreInterrupts(*(s32 *)((u8 *)gSoundSys + 0x128));
                    }
                }
                *(s32 *)((u8 *)gSoundSys + 0xFC) = -1;
            }
        }
    }

    if (arg2 != 0) {
        buf = (u8 *)gSoundSys;
        p = buf;
        ctr = *(u16 *)(buf + 0x13C);
        for (i = 0; i < ctr; i++) {
            if (*(u16 *)(p + 0x13E) == 0) {
                slot = (u16 *)((u8 *)gSoundSys + 0x13E);
                slot[i] = 1;
                *(u16 *)(entry + 2) = (u16)i;
                break;
            }
            p += 2;
        }
        if (i >= *(u16 *)(buf + 0x13C)) {
            return;
        }
    }

    {
        s32 zero;
        s32 forty;
        s32 one;

        buf = (u8 *)gSoundSys;
        zero = 0;
        forty = 0x40;
        one = 1;
        *(s32 *)(buf + 0xFC) = arg0;
        if (arg2 != 0) {
        }
        f1 = 0.0f;
        *(u16 *)(entry + 0x78) = zero;
        f0 = lbl_80369CD4;
        *(s32 *)(entry + 0x70) = zero;
        *(s32 *)(entry + 0x60) = zero;
        *(s32 *)(entry + 0x64) = zero;
        *(u16 *)(entry + 0x80) = zero;
        *(u16 *)(entry + 0x82) = zero;
        *(u16 *)(entry + 0x84) = zero;
        *(u16 *)(entry + 0x86) = zero;
        *(u16 *)(entry + 0x88) = zero;
        *(u16 *)(entry + 0x100) = zero;
        *(s32 *)(entry + 0xF8) = zero;
        *(s32 *)(entry + 0xE8) = zero;
        *(s32 *)(entry + 0xEC) = zero;
        *(u16 *)(entry + 0x108) = zero;
        *(u16 *)(entry + 0x10A) = zero;
        *(u16 *)(entry + 0x10C) = zero;
        *(u16 *)(entry + 0x10E) = zero;
        *(u16 *)(entry + 0x110) = zero;
        *(u16 *)(entry + 6) = forty;
        *(u16 *)(entry + 8) = zero;
        *(f32 *)(entry + 0xC) = f0;
        *(f32 *)(entry + 0x10) = f1;
        *(f32 *)(entry + 0x14) = f0;
        *(u16 *)entry = one;
        if (arg2 != 0) {
            *(u16 *)entry = (u16)(*(u16 *)entry | 0x400);
        }
    }
    sprintf(gSoundPathBuf, Sound_str + 0x1E, arg1, Sound_str + 0x23);
    buf = gSoundPathBuf;
    h = fn_800B4A84(buf, 0, 0);
    *(void **)(entry + 0x2C) = h;
    if (h == NULL) {
        *(u16 *)entry = 0;
        return;
    }
    h = fn_800B4A84(buf, 0, 0);
    *(void **)(entry + 0xB4) = h;
    if (h == NULL) {
        *(u16 *)entry = 0;
        return;
    }
    fn_800B49E0(*(void **)(entry + 0x2C), *(s32 *)(entry + 0x54), 0x100, 0, fn_800AFF28);
}
void fn_800B0AC8(void *arg0, void *arg1) {
    M2C_UNK fn_800B080C(void *, void *, M2C_UNK);
    fn_800B080C(arg0, arg1, 0);
}

s32 fn_800B0AEC(u16 *dstL, u32 nL, u16 *dstR, u32 nR, u32 ch) {
    extern u16 gSoundSys[4976];
    u32 n;
    u8 *bp;
    s16 *sp;
    u8 *entry;
    u8 *side;
    u16 flags;
    u32 lim;
    StreamB *bufferSlot;
    u8 *start;

    entry = *(u8 **)((u8 *)gSoundSys + 0xF8) + (u8)ch * 0x13C;
    if (dstL == 0 && dstR == 0 && nL == 0 && nR == 0) {
        return 0;
    }
    *(s32 *)(entry + 0x28) = 0;
    flags = *(u16 *)entry;
    if ((flags & 0x8006) != 0 || *(u16 *)((u8 *)gSoundSys + 0x12C) != 0) {
        if (!(flags & 0x100)) {
            while (nL != 0) {
                *dstL++ = 0;
                nL--;
                *(s32 *)(entry + 0x28) += 1;
            }
            while (nR != 0) {
                *dstR++ = 0;
                nR--;
                *(s32 *)(entry + 0x28) += 1;
            }
            return *(s32 *)(entry + 0x28);
        } else {
            { s32 count = (nL / 14) * 8;
            count /= 2;
            while (count != 0) { *dstL++ = 0; count--; } }
            { s32 count = (nR / 14) * 8;
            count /= 2;
            while (count != 0) { *dstR++ = 0; count--; } }
            return nL + nR;
        }
    }
    if (ch & 0x100) {
        side = entry + 0xB4;
    } else {
        side = entry + 0x2C;
    }
    if (flags & 0x100) {
        bufferSlot=(StreamB *)(side + *(u16 *)(side + 0x4C)*4);
        start = (u8 *)bufferSlot->buffers[0];
        start += *(u32 *)(side + 0x44);
        bp = start;
        n = ((nL + 0xD) / 14) * 8;
        while (n != 0) {
            *(u8 *)dstL = *bp;
            bp++;
            n--;
            dstL = (u16 *)((u8 *)dstL + 1);
            *(u32 *)(side + 0x44) += 1;
            *(u32 *)(side + 0x38) += 1;
            if (*(u32 *)(side + 0x44) >= *(u32 *)(side + (*(u16 *)(side + 0x4C) * 4) + 0x3C)) {
                if (*(s16 *)(side + 0x54) == 0 && !(*(u16 *)entry & 0x4000)) {
                    *(u32 *)(side + 0x38) -= *(u32 *)(side + 0x44);
                    *(u32 *)(side + 0x44) = 0;
                    bp = (u8 *)*(u32 *)(side + *(u16 *)(side + 0x4C) * 4 + 0x2C);
                    continue;
                } else {
                    *(s16 *)(side + 0x54) = 0;
                    *(u32 *)(side + 0x44) = 0;
                    *(u16 *)(side + 0x4C) = 1 - *(u16 *)(side + 0x4C);
                    bp = (u8 *)*(u32 *)(side + *(u16 *)(side + 0x4C) * 4 + 0x2C);
                }
            }
            if (*(u32 *)(side + 0x38) >= *(u32 *)(entry + 0x20)) {
                u16 flags;
                *(u32 *)(side + 0x38) = *(u32 *)(entry + 0x24);
                flags = *(u16 *)entry;
                if (!(flags & 0x200)) {
                    *(u16 *)entry = flags | 4;
                    break;
                }
            }
        }
        {
        u32 count = ((nR + 0xD) / 14) * 8;
        while (count != 0) {
            *(u8 *)dstR = *bp;
            bp++;
            count--;
            dstR = (u16 *)((u8 *)dstR + 1);
            *(u32 *)(side + 0x44) += 1;
            *(u32 *)(side + 0x38) += 1;
            if (*(u32 *)(side + 0x44) >= *(u32 *)(side + (*(u16 *)(side + 0x4C) * 4) + 0x3C)) {
                if (*(s16 *)(side + 0x54) == 0 && !(*(u16 *)entry & 0x4000)) {
                    *(u32 *)(side + 0x38) -= *(u32 *)(side + 0x44);
                    *(u32 *)(side + 0x44) = 0;
                    bp = (u8 *)*(u32 *)(side + *(u16 *)(side + 0x4C) * 4 + 0x2C);
                    continue;
                } else {
                    *(s16 *)(side + 0x54) = 0;
                    *(u32 *)(side + 0x44) = 0;
                    *(u16 *)(side + 0x4C) = 1 - *(u16 *)(side + 0x4C);
                    bp = (u8 *)*(u32 *)(side + *(u16 *)(side + 0x4C) * 4 + 0x2C);
                }
            }
            if (*(u32 *)(side + 0x38) >= *(u32 *)(entry + 0x20)) {
                u16 flags;
                *(u32 *)(side + 0x38) = *(u32 *)(entry + 0x24);
                flags = *(u16 *)entry;
                if (!(flags & 0x200)) {
                    *(u16 *)entry = flags | 4;
                    break;
                }
            }
        }
        }
        *(s32 *)(entry + 0x28) = (s32)(nL + nR);
    } else {
        StreamB *pcmBufferSlot;
        
        pcmBufferSlot=(StreamB *)(side + *(u16 *)(side + 0x4C)*4);
        sp = (s16 *)((u8 *)pcmBufferSlot->buffers[0] + (*(u32 *)(side + 0x44) & ~1U));
        while (nL != 0) {
            *dstL = *sp;
            sp++;
            nL--;
            dstL++;
            *(s32 *)(entry + 0x28) += 1;
            *(u32 *)(side + 0x44) += 2;
            *(u32 *)(side + 0x38) += 2;
            if (*(u32 *)(side + 0x44) >= *(u32 *)(side + (*(u16 *)(side + 0x4C) * 4) + 0x3C)) {
                if (*(s16 *)(side + 0x54) == 0 && !(*(u16 *)entry & 0x4000)) {
                    *(u32 *)(side + 0x38) -= *(u32 *)(side + 0x44);
                    *(u32 *)(side + 0x44) = 0;
                    sp = (s16 *)*(u32 *)(side + *(u16 *)(side + 0x4C) * 4 + 0x2C);
                    continue;
                } else {
                    *(s16 *)(side + 0x54) = 0;
                    *(u32 *)(side + 0x44) = 0;
                    *(u16 *)(side + 0x4C) = 1 - *(u16 *)(side + 0x4C);
                    sp = (s16 *)*(u32 *)(side + *(u16 *)(side + 0x4C) * 4 + 0x2C);
                }
            }
            if (*(u32 *)(side + 0x38) >= *(u32 *)(entry + 0x20)) {
                u16 flags;
                *(u32 *)(side + 0x38) = *(u32 *)(entry + 0x24);
                flags = *(u16 *)entry;
                if (!(flags & 0x200)) {
                    *(u16 *)entry = flags | 4;
                    break;
                }
            }
        }
        while (nR != 0) {
            *dstR = *sp;
            sp++;
            nR--;
            dstR++;
            *(s32 *)(entry + 0x28) += 1;
            *(u32 *)(side + 0x44) += 2;
            *(u32 *)(side + 0x38) += 2;
            if (*(u32 *)(side + 0x44) >= *(u32 *)(side + (*(u16 *)(side + 0x4C) * 4) + 0x3C)) {
                if (*(s16 *)(side + 0x54) == 0 && !(*(u16 *)entry & 0x4000)) {
                    *(u32 *)(side + 0x38) -= *(u32 *)(side + 0x44);
                    *(u32 *)(side + 0x44) = 0;
                    sp = (s16 *)*(u32 *)(side + *(u16 *)(side + 0x4C) * 4 + 0x2C);
                    continue;
                } else {
                    *(s16 *)(side + 0x54) = 0;
                    *(u32 *)(side + 0x44) = 0;
                    *(u16 *)(side + 0x4C) = 1 - *(u16 *)(side + 0x4C);
                    sp = (s16 *)*(u32 *)(side + *(u16 *)(side + 0x4C) * 4 + 0x2C);
                }
            }
            if (*(u32 *)(side + 0x38) >= *(u32 *)(entry + 0x20)) {
                u16 flags;
                *(u32 *)(side + 0x38) = *(u32 *)(entry + 0x24);
                flags = *(u16 *)entry;
                if (!(flags & 0x200)) {
                    *(u16 *)entry = flags | 4;
                    break;
                }
            }
        }
    }
    return *(s32 *)(entry + 0x28);
}

#pragma optimization_level 3
typedef struct { u16 flags; u16 x2; u8 pad[0x28]; u32 x2c; u8 x30[0x28]; void *x58; u8 pad2[4]; u32 x60; u32 x64; u8 pad3[0xc]; u32 x74; u8 pad4[0x13c - 0x78]; } Ch_800B125C;
typedef struct { u8 pad[0xf8]; Ch_800B125C *ch; u8 pad2[0x38]; u32 x134[4]; } SoundSys_800B125C;
void fn_800B125C(s32 result, u32 req) {
    extern u16 gSoundSys[4976];
    extern u32 lbl_80367818;
    void DCFlushRange(void *, u32);
    void ARQPostRequest(void *, u32, u32, u32, u32, u32, u32, void (*)(void *));
    void fn_800B1368(void *);
    Ch_800B125C *e = (*(SoundSys_800B125C *)&gSoundSys).ch;
    s32 i;
    for (i = 0; i < 3; e++, i++) {
        if (e->flags != 0 && e->x2c + 0x40 == req) {
            if (result >= 0) {
                u32 addr;
                e->x60 += e->x74;
                addr = e->x64 + ((u32 *)((u8 *)gSoundSys + 0x134))[e->x2];
                DCFlushRange(e->x58, 0x8000);
                ARQPostRequest(e->x30, (lbl_80367818++ << 16) | i, 0, 0, (u32)e->x58, addr, 0x8000, fn_800B1368);
                e->x64 += e->x74;
            }
            return;
        }
    }
}
#pragma push
#pragma optimization_level 4
#pragma opt_pointer_analysis off
void fn_800B1368(void *arg0) {
    void fn_800B1720(void *);
    s32 fn_800B49C8(void *);
    void fn_800B49E0(void *, s32, s32, s32, void *);
    void DCInvalidateRange(void *, u32);
    void ARQPostRequest(void *, void *, s32, s32, u32, void *, u32, void *);

    u32 base, offset, limit, n, step;
    u32 size;
    u32 aligned;
    u8 *entry;
    u8 *stream;

    entry = *(u8 **)((u8 *)gSoundSys + 0xF8) + (u8)*(u32 *)((u8 *)arg0 + 4) * 0x13C;
    if (*(u32 *)(entry + 0x64) >= (u32)fn_800B49C8(*(void **)(entry + 0x2C))) {
        *(u32 *)(entry + 0x60) = 0;
        *(u32 *)(entry + 0x64) = 0;
        *(u32 *)(entry + 0xE8) = 0;
        *(u32 *)(entry + 0xEC) = 0;
        *(u16 *)(entry + 0x78) = 1;
        stream = entry + 0x2C;
        size = 0x8000;
        step = 0x10000;
        offset = *(u32 *)(entry + 0x60);
        limit = *(u32 *)(entry + 0x8C);
        if (offset + 0x8000 > limit) size = limit - offset;
        else {
            for (n = 2; n < 6; n++) {
                if (offset + step > limit) {
                    size -= (0x8000 - (limit - (offset + ((n - 1) << 15)))) / n;
                    size += 0x20 - (size & 0x1F);
                    break;
                }
                step += 0x8000;
            }
        }
        aligned = (size + 0x1F) & ~0x1F;
        if (!(*(u16 *)entry & 0x400)) {
            fn_800B49E0(*(void **)stream, *(s32 *)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), aligned, *(u16 *)(entry + 4) + offset, fn_800B1720);
        } else {
            base = *(u32 *)((u8 *)gSoundSys + *(u16 *)(entry + 2)*4 + 0x134) + offset + *(u16 *)(entry + 4);
            DCInvalidateRange(*(void **)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), 0x8000);
            ARQPostRequest(stream + 4, stream, 1, 0, base, *(void **)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), aligned, fn_800B16EC);
        }
        *(u32 *)(stream + 0x48) = size;
        if (*(u16 *)(entry + 0x1E) == 2) {
            *(u16 *)(entry + 0x100) = 1;
            stream = entry + 0xB4;
            size = 0x8000;
            step = 0x10000;
            offset = *(u32 *)(entry + 0xE8);
            limit = *(u32 *)(entry + 0x114);
            base = limit + (0x20 - (limit & 0x1F));
            if (offset + 0x8000 > limit) size = limit - offset;
            else {
                for (n = 2; n < 6; n++) {
                    if (offset + step > limit) {
                        size -= (0x8000 - (limit - (offset + ((n - 1) << 15)))) / n;
                        size += 0x20 - (size & 0x1F);
                        break;
                    }
                    step += 0x8000;
                }
            }
            aligned = (size + 0x1F) & ~0x1F;
            if (!(*(u16 *)entry & 0x400)) {
                fn_800B49E0(*(void **)stream, *(s32 *)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), aligned, *(u16 *)(entry + 4) + (offset + base), fn_800B1720);
            } else {
                base = offset + base + *(u32 *)((u8 *)gSoundSys + *(u16 *)(entry + 2)*4 + 0x134) + *(u16 *)(entry + 4);
                DCInvalidateRange(*(void **)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), 0x8000);
                ARQPostRequest(stream + 4, stream, 1, 0, base, *(void **)(stream + (1 - *(u16 *)(stream + 0x4C))*4 + 0x2C), aligned, fn_800B16EC);
            }
            *(u32 *)(stream + 0x48) = size;
        }
    } else {
        limit = fn_800B49C8(*(void **)(entry + 0x2C));
        offset = *(u32 *)(entry + 0x60);
        size = 0x8000;
        step = 0x10000;
        if (offset + 0x8000 >= limit) size = limit - offset;
        fn_800B49E0(*(void **)(entry + 0x2C), *(s32 *)(entry + 0x58), (size + 0x1F) & ~0x1F, offset, fn_800B125C);
        *(u32 *)(entry + 0x74) = size;
    }
}
#pragma pop
