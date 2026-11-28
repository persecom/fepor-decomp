/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
static inline void *MenuCreateAt(u8 *base, s32 offset) {
    void *Process_Create(void *, s32);
    return Process_Create(base + offset, 7);
}

typedef struct {
    f32 x, y;
    u8 unk8[4];
    s8 next;
    u8 type;
    u8 unkE[6];
} Menu888Entry;
extern void* lbl_803674E8;
extern f64 lbl_80369688;
extern f32 lbl_803696C8;
typedef struct { u16 a, b, c; } Fn89980Struct;
typedef struct { f32 a, b; } FloatPair892E8;
typedef struct {
    void *f00;
    u8 pad04[0x44];
    void *f48;
    u8 pad50[8];
    void *f58;
    u8 pad60[0x1C];
    void *f7C;
} Struct_80089490;

extern s32 gSaveDataBase;
extern u8 lbl_8026CC58[];
extern f32 gScreenOrigin;
extern f32 lbl_803696A8;
extern f32 lbl_803696AC;
extern f64 lbl_803696C0;

extern void* gActiveFace;
extern s32 gFaceDbgMouthStartStr;
extern s32 gFaceDbgMouthEndStr;
extern f64 lbl_803693C8;
extern f32 lbl_803693D4;
extern f32 lbl_803693D8;
extern f32 gFaceDbgTextScale;

extern u8 gBattleState[1400];

extern u16 *lbl_803674E0;

#pragma inline

extern f32 lbl_8036A118;
extern f32 lbl_8036A120;
extern f32 lbl_8036A130;
extern f32 gTextScale2;

extern f32 lbl_80369768;
extern u16 lbl_80289A60[];

extern u8 lbl_80289B00[16];

extern void* fn_800980D4(s32 arg0);
extern void fn_8017E394(void* arg0, void* arg1, void* arg2, s32 arg3);

extern u8 lbl_80289EB8[16];

extern f32 lbl_803697E0;
extern f32 lbl_803697E4;

/* Draw the unit info panel: child widgets, gradient bar, and status text. */

#pragma use_lmw_stmw on

#pragma optimization_level 3
#pragma opt_strength_reduction off

#pragma optimization_level reset

#pragma scheduling on

#pragma scheduling reset

void fn_8000BFEC(void (*arg0)(void *));
void fn_80089490(void *);

#pragma opt_strength_reduction off

#pragma opt_strength_reduction on

void fn_8008A5AC(void *);
void Ui_DrawColorFade(void *);
void fn_80089A28(void *);
void fn_800898E4(void *);
void fn_80089680(void *);
extern u8 lbl_8026CC5F[];
extern u8 lbl_8026CC67[];
extern u8 lbl_8026CC6E[];

void fn_80089554(void);
void fn_800893E0(void *);
void fn_800892E8(void *);
void fn_80089460(void *);
void fn_80088FFC(void *);
void fn_80088F8C(void *);
extern u8 lbl_8026CC7A[];

#pragma force_active on
u32 lbl_80289950[] = {
    0x2003, (u32)lbl_8026CC58, 0x54911001,
    0x201A, (u32)fn_8008A5AC, 0,
};
static u32 colorFadeScript[] = {
    0x2003, (u32)lbl_8026CC5F, 0x54911001,
    0x201A, (u32)Ui_DrawColorFade, 0,
};
static u32 overlayScript[] = {
    0x2003, (u32)lbl_8026CC67, 0x54911001,
    0x201A, (u32)fn_80089A28, 0,
};
u32 lbl_80289998[] = {
    0x100A, 0x200F, (u32)fn_800898E4, 0,
};
static u32 panelScript[] = {
    0x2003, (u32)lbl_8026CC6E, 0x54911001,
    0x201A, (u32)fn_80089680, 0,
};
u32 lbl_802899C0[] = {
    0x201A, (u32)fn_80089554, 0,
};
u32 lbl_802899CC[] = {
    0x2003, (u32)lbl_8026CC7A, 0x54911001,
    0x2004, (u32)fn_800893E0, 0x200F, (u32)fn_800892E8,
    0x100A, 0x200F, (u32)fn_80089460, 0x100A,
    0x2005, (u32)fn_80088FFC, 0x6101B, 0x201A, (u32)fn_80088F8C,
    0x100B, 0,
};
#pragma force_active reset

void fn_80089490(void *proc) {
    void fn_8000A408(void *);
    u32 *script;

    if (*((u8 *)proc + 0x2B) != 0x7B) {
        script = *(u32 **)proc;
        if (script != lbl_802899CC && script != lbl_80289950 &&
            script != panelScript && script != lbl_80289998) {
            fn_8000A408(proc);
        }
    }
}

s32 fn_800894F8(void) {
    void Process_UnlinkByKey(void *);
    Process_UnlinkByKey(lbl_802899C0);
    return 1;
}

s32 fn_80089524(void) {
    Process_Create(lbl_802899C0, 4);
    return 1;
}

void fn_80089554(void) {
    M2C_UNK Prim2D_SetRect(f32, f32, f32, f32);
    M2C_UNK Prim2D_EndPrim();
    M2C_UNK Prim2D_AddPrim(M2C_UNK);
    M2C_UNK Prim2D_SetTransform(f32, f32, f32, f32);
    extern f32 gScreenOrigin;
    extern f32 lbl_803696B0;
    extern f32 lbl_803696B4;
    extern f32 lbl_803696B8;
    Prim2D_Begin();
    Prim2D_SetTransform(gScreenOrigin, gScreenOrigin, gScreenOrigin, lbl_803696B0);
    Prim2D_SetTex(0, 0x800);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect(gScreenOrigin, gScreenOrigin, lbl_803696B4, lbl_803696B8);
    Prim2D_EndPrim();
}


#pragma push
#pragma opt_lifetimes off
void fn_800895B8(void) {
    void *Process_Create(void *, s32);
    extern u16 *lbl_803674E0;
    extern void *lbl_803674E4;
    extern void *lbl_803674E8;
    extern void *lbl_803674EC;
    void *tmp;

    lbl_803674E0 = Process_Create(lbl_80289950, 7);
    lbl_803674E4 = Process_Create(panelScript, 7);
    tmp = Process_Create(colorFadeScript, 7);
    lbl_803674E8 = tmp;
    *(s16 *)((u8 *)tmp + 0x32) = 0;
    tmp = Process_Create(overlayScript, 7);
    lbl_803674EC = tmp;
    *(s16 *)((u8 *)tmp + 0x32) = 0;
}
#pragma pop
u16 fn_80089634(void) {
    extern void *lbl_803674E4;
    return M2C_FIELD(lbl_803674E4, u16 *, 0x32);
}

u32 fn_80089640(void) {
    extern u16 *lbl_803674E4;

    return lbl_803674E4[0x19] & 1;
}

void fn_80089650(s32 arg0, s32 arg1) {
    void fn_8008A32C(void *, s32, s32);
    extern void *lbl_803674E4;

    fn_8008A32C(lbl_803674E4, arg0, arg1);
}

void fn_80089680(void *arg0) {
    void PSMTXTrans(void *, f32, f32, f32);
    void C_MTXOrtho(void *, f32, f32, f32, f32, f32, f32);
    void GXSetVtxDesc(s32, s32);
    void GXClearVtxDesc(void);
    void GXSetVtxAttrFmt(s32, s32, s32, s32, s32);
    void GXSetNumChans(s32);
    void GXBegin(s32, s32, s32);
    void GXSetChanMatColor(s32, s32 *);
    void GXSetCullMode(s32);
    void GXSetBlendMode(s32, s32, s32, s32, s32, s32, s32);
    void GXSetNumTexGens(s32, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void GXSetNumTevStages(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void GXSetZMode(s32, s32, s32);
    void GXSetProjection(void *, s32);
    void GXLoadPosMtxImm(void *, s32);
    void GXSetCurrentMtx(s32);
    void GXSetViewport(f32, f32, f32, f32, f32, f32);
    extern f32 gScreenHeight;
    extern f32 gScreenWidth;
    extern f32 gOrthoFar;
    extern f32 gFadeQuadZ;
    extern f32 gViewportFar;
    extern const f32 lbl_803696BC;
    u8 spC[0x44];
    s32 sp8;
    f32 ratio;
    f32 diff;
    f32 hi;
    f32 lo;
    f32 bc;
    u16 bits;
    u32 u34;
    u32 u36;

    if (*(u16 *)((u8 *)arg0 + 0x34) >= *(u16 *)((u8 *)arg0 + 0x36)) {
        bc = lbl_803696BC;
        bits = *(u16 *)((u8 *)arg0 + 0x32);
        bits &= 0xFFFE;
        *(u16 *)((u8 *)arg0 + 0x32) = bits;
        bits = *(u16 *)((u8 *)arg0 + 0x32);
        bits |= 2;
        *(u16 *)((u8 *)arg0 + 0x32) = bits;
        *(u8 *)((u8 *)arg0 + 0x43) = (u8)(s32)(bc * *(f32 *)((u8 *)arg0 + 0x3C));
    }
    if (*(u16 *)((u8 *)arg0 + 0x32) & 1) {
        *(u16 *)((u8 *)arg0 + 0x34) = *(u16 *)((u8 *)arg0 + 0x34) + 1;
        bc = lbl_803696BC;
        u34 = *(u16 *)((u8 *)arg0 + 0x34);
        u36 = *(u16 *)((u8 *)arg0 + 0x36);
        lo = *(f32 *)((u8 *)arg0 + 0x38);
        hi = *(f32 *)((u8 *)arg0 + 0x3C);
        ratio = (f32)u34 / (f32)u36;
        diff = hi - lo;
        *(u8 *)((u8 *)arg0 + 0x43) = (u8)(s32)(bc * (ratio * diff + lo));
    }
    if (*(u8 *)((u8 *)arg0 + 0x43) != 0) {
        C_MTXOrtho(spC, gScreenOrigin, gScreenHeight, gScreenOrigin, gScreenWidth, gScreenOrigin, gOrthoFar);
        GXSetProjection(spC, 1);
        PSMTXTrans(spC, gScreenOrigin, gScreenOrigin, gFadeQuadZ);
        GXLoadPosMtxImm(spC, 0);
        GXSetCurrentMtx(0);
        GXSetViewport(gScreenOrigin, gScreenOrigin, gScreenWidth, gScreenHeight, gScreenOrigin, gViewportFar);
        sp8 = *(s32 *)((u8 *)arg0 + 0x40);
        GXSetChanMatColor(4, &sp8);
        GXClearVtxDesc();
        GXSetVtxDesc(9, 1);
        GXSetVtxAttrFmt(0, 9, 1, 3, 0);
        GXSetNumTevStages(1);
        GXSetNumTexGens(0, 4);
        GXSetTevOrder(0, 0xFF, 0xFF, 4);
        GXSetNumChans(0);
        GXSetCullMode(1);
        GXSetBlendMode(4, 0, 0, 0, 0, 0, 2);
        fn_802245D8(1, 4, 5, 0);
        GXSetZMode(0, 3, 0);
        GXBegin(0x98, 0, 4);
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x260;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x1C0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x260;
        *(volatile s16 *)0xCC008000 = 0x1C0;
        *(volatile s16 *)0xCC008000 = 0;
    }
}

void fn_800898E4(void *arg0) {
    M2C_UNK fn_802209FC();
    M2C_UNK fn_8022124C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    void fn_802212FC(u16, u16, s32, u8);
    M2C_UNK GXCopyTex(s32, M2C_UNK);
    M2C_UNK fn_80222EB4();
    void *temp_r31;

    temp_r31 = *(void **)((char *)arg0 + 0x54);
    fn_8022124C(0, 0, 0x260, 0x1C0);
    fn_802212FC(0x260, 0x1C0, 4, 0);
    GXCopyTex(*(s32 *)((char *)temp_r31 + 0x48), 0);
    fn_802209FC();
    fn_80222EB4();
}

u32 fn_80089948(void) {
    extern u8 *lbl_803674EC;
    u16 value;

    value = *(u16 *)(lbl_803674EC + 0x32);

    if (value == 1 || value == 3) {
        return 1;
    }

    return 0;
}

void fn_80089970(void) {
    extern void *lbl_803674EC;
    M2C_FIELD(lbl_803674EC, s16 *, 0x32) = 0;
}

#pragma global_optimizer reset
#pragma peephole off

