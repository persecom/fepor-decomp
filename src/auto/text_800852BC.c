/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
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
extern u8 lbl_80289998[];
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


void fn_800852BC(s32 arg0) {
    M2C_UNK fn_80069F04(s32);
    M2C_UNK fn_80223E5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802246B8(M2C_UNK);
    fn_802246B8(0);
    fn_80223E5C(6, 0x80, 1, 0, 0);
    fn_80069F04(arg0);
    fn_802246B8(1);
    fn_80223E5C(7, 0, 1, 7, 0);
}

void fn_8008532C(s32 unused, s16 *p) {
    extern void GXSetScissor(s16, s16, s16, s16);
    GXSetScissor(p[0], p[1], p[2], p[3]);
}

/* Draw the unit info panel: child widgets, gradient bar, and status text. */
void Ui_DrawUnitInfo(void *proc) {
    M2C_UNK Prim2D_SetCornerColors(s32 *, s32 *, s32 *, s32 *, s32, s32, s32);
    M2C_UNK Prim2D_EmitQuad();
    M2C_UNK Prim2D_SetQuadMax(f32, f32, f32, f32);
    M2C_UNK Prim2D_SetQuadMin(f32, f32, f32, f32);
    M2C_UNK Prim2D_SetColorByte(M2C_UNK);
    void *Msg_Expand(void *);
    void fn_8001003C(s16, s32, s32, s32, s32, void *, ...);
    s32 Text_MeasureWidth(void *, s32, f32);
    M2C_UNK fn_80083E70(void *);
    M2C_UNK fn_80083F08(void *);
    M2C_UNK strcat(void *, void *);
    M2C_UNK strcpy(void *, void *);
    extern u8 gUiStrings[];
    extern s32 lbl_80369400;
    extern s32 lbl_80369404;
    extern s32 lbl_80369408;
    extern s32 lbl_8036940C;
    extern f32 lbl_80369418;
    extern f32 gUiCaptionBarY0;
    extern f32 gUiCaptionBarX1;
    extern f32 gUiCaptionBarY1;
    extern f32 gUiCaptionBarY2;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_80369488;
    extern s32 lbl_8036C460;
    extern s32 lbl_8036C464;
    extern s32 lbl_8036C468;
    extern s32 lbl_8036C46C;
    char text[128];
    s32 colorB3;
    s32 colorB2;
    s32 colorB1;
    s32 colorB0;
    s32 colorA3;
    s32 colorA2;
    s32 colorA1;
    s32 colorA0;
    s16 textX;
    void *panel;

    if (proc != NULL) {
        panel = *(void **)((u8 *)proc + 0x30);
        fn_80083F08(panel);
        fn_80083E70(panel);
        Prim2D_Begin();
        Prim2D_SetColorByte(0xFF);
        Prim2D_SetTransform(lbl_80369418, lbl_80369418, lbl_80369488, lbl_80369430);
        Prim2D_PrepareTex();
        strcpy(text, (u8 *)gUiStrings + 0x1B5);
        strcat(text, Msg_Expand((u8 *)gUiStrings + 0x1BB));
        strcat(text, (u8 *)gUiStrings + 0x1C3);
        strcat(text, Msg_Expand((u8 *)gUiStrings + 0x1CA));
        strcat(text, (u8 *)gUiStrings + 0x1D1);
        strcat(text, Msg_Expand((u8 *)gUiStrings + 0x1D8));
        strcat(text, (u8 *)gUiStrings + 0x1DF);
        strcat(text, Msg_Expand((u8 *)gUiStrings + 0x1E6));
        if (*(u32 *)((u8 *)(*(void **)((u8 *)panel + 0x58)) + 0x194) != 0U) {
            strcat(text, (u8 *)gUiStrings + 0x1F0);
            strcat(text, Msg_Expand((u8 *)gUiStrings + 0x1F7));
        }
        Prim2D_Begin();
        Prim2D_SetTex(0, 0x12);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(3);
        Prim2D_SetQuadMin(lbl_80369418, gUiCaptionBarY0, lbl_80369418, lbl_80369418);
        Prim2D_SetQuadMax(gUiCaptionBarX1, gUiCaptionBarY1, lbl_80369418, lbl_80369418);
        colorA3 = lbl_80369404;
        colorA2 = lbl_80369400;
        colorA1 = lbl_8036C464;
        colorA0 = lbl_8036C460;
        Prim2D_SetCornerColors(&colorA0, &colorA1, &colorA2, &colorA3, lbl_8036C464, lbl_80369400, lbl_80369404);
        Prim2D_EmitQuad();
        Prim2D_EndPrim();
        Prim2D_AddPrim(3);
        Prim2D_SetQuadMin(lbl_80369418, gUiCaptionBarY1, lbl_80369418, lbl_80369418);
        Prim2D_SetQuadMax(gUiCaptionBarX1, gUiCaptionBarY2, lbl_80369418, lbl_80369418);
        colorB3 = lbl_8036C46C;
        colorB2 = lbl_8036C468;
        colorB1 = lbl_8036940C;
        colorB0 = lbl_80369408;
        Prim2D_SetCornerColors(&colorB0, &colorB1, &colorB2, &colorB3, lbl_8036940C, lbl_8036C468, lbl_8036C46C);
        Prim2D_EmitQuad();
        Prim2D_EndPrim();
        Prim2D_Begin();
        Prim2D_AddZ(lbl_8036942C);
        Prim2D_PrepareTex();
        Prim2D_Begin();
        Prim2D_SetTex(0, 0x13);
        Prim2D_PrepareTex();
        textX = 0x130 - (Text_MeasureWidth(text, -1, lbl_80369430) / 2);
        fn_8001003C(textX, 0x197, 1, 1, 0, text, lbl_80369430, lbl_80369418);
        Prim2D_Begin();
        Prim2D_AddZ(lbl_80369430);
        Prim2D_PrepareTex();
        Prim2D_Begin();
        Prim2D_SetColorByte(0xFF);
        Prim2D_PrepareTex();
    }
}

#pragma push
#pragma optimization_level 3
#pragma opt_common_subs off
void fn_8008563C(u8 *arg0, f32 x, f32 y, f32 w, f32 h) {
    typedef struct { u8 r, g, b, a; } Color;
    void fn_8000A258(void);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007884(void);
    void fn_80009C0C(f32);
    u16 **fn_8006EDD8(s32, s32);
    Color *fn_8018D900(s32);
    void fn_80009F90(s32, s32, s32);
    void fn_80007870(f32);
    void fn_800075D8(void);
    extern s32 lbl_803674F4;
    extern f32 lbl_80369418;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_8036943C;
    extern f64 lbl_80369440;
    extern f64 lbl_80369470;
    extern f32 lbl_80369480;
    extern f32 lbl_803694CC;
    extern f32 lbl_803694D0;
    extern f32 lbl_803694E4;
    extern f32 lbl_8036951C;
    extern f32 lbl_803695AC;

    Color c4, c5, c6, c7, c0, c1, c2, c3;
    f32 edgeB;
    f32 edgeT;
    f32 edgeR;
    f32 edgeL;
    f32 y4;
    f32 x4;
    f32 y3;
    f32 x3;
    f32 y2;
    f32 x2;
    f32 th;
    f32 tw;
    f32 sw;
    f32 sh;
    f32 fh;
    f32 fw;
    f32 fy;
    f32 fx;
    f32 top;
    u16 *tex;
    s32 id;
    s16 ix, iy;

    fx = x;
    fy = y;
    fw = w;
    fh = h;
    ix = (s16)(lbl_8036951C + fx);
    top = lbl_8036951C + fy;
    iy = (s16)top;
    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838((f32)ix, (f32)iy, lbl_80369418, lbl_80369418);
    fn_80007818((f32)(ix + (s16)(fw - lbl_8036943C)), (f32)(iy + (s16)(fh - lbl_8036943C)), lbl_80369418, lbl_80369418);
    fn_800076AC(arg0[0], arg0[1], arg0[2], arg0[3]);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036942C);
    fn_8000A248();

    tex = *fn_8006EDD8(lbl_803674F4, 0x45);
    sh = (f32)tex[0] * lbl_80369430;
    sw = (f32)tex[1] * lbl_80369430;
    c0 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x45);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x45, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    fn_80007838(fx, fy, lbl_80369418, lbl_80369418);
    fn_80007818(fx + sw, fy + sh, tw, th);
    fn_800076AC(c0.r, c0.g, c0.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = *fn_8006EDD8(lbl_803674F4, 0x47);
    sh = (f32)tex[0] * lbl_80369430;
    sw = (f32)tex[1] * lbl_80369430;
    c1 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x47);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x47, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    x2 = fx + fw;
    edgeR = x2 - lbl_80369480;
    fn_80007838(edgeR, fy, lbl_80369418, lbl_80369418);
    fn_80007818(edgeR + sw, fy + sh, tw, th);
    fn_800076AC(c1.r, c1.g, c1.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = *fn_8006EDD8(lbl_803674F4, 0x4A);
    sh = (f32)tex[0] * lbl_80369430;
    sw = (f32)tex[1] * lbl_80369430;
    c2 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x4A);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x4A, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    y2 = fy + fh;
    edgeB = y2 - lbl_803694CC;
    fn_80007838(fx, edgeB, lbl_80369418, lbl_80369418);
    fn_80007818(fx + sw, edgeB + sh, tw, th);
    fn_800076AC(c2.r, c2.g, c2.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = *fn_8006EDD8(lbl_803674F4, 0x4C);
    sh = (f32)tex[0] * lbl_80369430;
    sw = (f32)tex[1] * lbl_80369430;
    c3 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x4C);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x4C, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    fn_80007838(edgeR, edgeB, lbl_80369418, lbl_80369418);
    fn_80007818(edgeR + sw, edgeB + sh, tw, th);
    fn_800076AC(c3.r, c3.g, c3.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    c4 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x46);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x46, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    edgeL = lbl_80369480 + fx;
    {
        f32 yb = top;
        fn_80007838(edgeL, yb, lbl_80369418, lbl_80369418);
        x3 = edgeL + ((fw - lbl_80369480) - lbl_80369480);
        fn_80007818(x3, yb + lbl_803694D0, tw, th);
    }
    fn_800076AC(c4.r, c4.g, c4.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    c5 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x4B);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x4B, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    y3 = y2 - lbl_803694E4;
    fn_80007838(edgeL, y3, lbl_80369418, lbl_80369418);
    fn_80007818(x3, y3 + lbl_803694D0, tw, th);
    fn_800076AC(c5.r, c5.g, c5.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    c6 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x48);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x48, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    y4 = lbl_803695AC + fy;
    fn_80007838(fx, y4, lbl_80369418, lbl_80369418);
    x4 = y4 + ((fh - lbl_803694CC) - lbl_803694CC);
    fn_80007818(fx + lbl_803694D0, x4, tw, th);
    fn_800076AC(c6.r, c6.g, c6.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    c7 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x49);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x49, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    edgeT = x2 - lbl_8036943C;
    fn_80007838(edgeT, y4, lbl_80369418, lbl_80369418);
    fn_80007818(edgeT + lbl_803694D0, x4, tw, th);
    fn_800076AC(c7.r, c7.g, c7.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_80369430);
    fn_8000A248();
}
#pragma pop
void fn_80086020(s32 arg0, s32 arg1, f32 x, f32 y, f32 w, f32 h) {
    void Prim2D_EmitQuad(void);
    void Prim2D_SetColor(s32, s32, s32, s32);
    void Prim2D_SetQuadMax(f32, f32, f32, f32);
    void Prim2D_SetQuadMin(f32, f32, f32, f32);
    void Prim2D_SetPrimParam(f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_AddZ(f32);
    void Prim2D_BindTexture(void *, s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    void **fn_8006EDD8(void *, s32);
    s32 *Ui_GetColor(u8);
    extern void *gUiAtlas;
    extern f32 lbl_80369418;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_8036943C;
    extern f32 lbl_80369464;
    extern f32 lbl_80369480;
    extern f32 lbl_8036949C;
    extern f32 lbl_803694D0;
    extern f32 lbl_803694E4;
    extern f32 lbl_80369500;
    extern f32 lbl_80369514;
    extern f32 lbl_8036951C;
    extern f32 lbl_80369598;
    extern f32 lbl_8036959C;
    extern f32 lbl_803695AC;
    extern f32 lbl_80369668;

    s32 sp30, sp2C, sp28, sp24, sp20, sp1C, sp18, sp14, sp10, spC, sp8;
    void *mgr;
    u16 *tex;
    f32 x1, y1, xR, yB, xR2, yB2, xL2, edge, yT2;
    f32 xa, ya, xb, yMid;
    f32 tw, th, sw, sh;

    sp30 = *Ui_GetColor((u8)(arg1 + 0x24));
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x21);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0x21, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    x1 = lbl_8036951C + x;
    y1 = lbl_8036951C + y;
    Prim2D_SetQuadMin(x1, y1, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(x1 + (w - lbl_8036943C), y1 + (h - lbl_8036943C), th, tw);
    Prim2D_SetColor(((u8 *)&sp30)[0], ((u8 *)&sp30)[1], ((u8 *)&sp30)[2], arg0);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036942C);
    Prim2D_PrepareTex();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 0xC);
    sw = (f32)tex[0] * lbl_80369430;
    sh = (f32)tex[1] * lbl_80369430;
    sp1C = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xC);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0xC, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    Prim2D_SetQuadMin(x, y, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(x + sh, y + sw, th, tw);
    Prim2D_SetColor(((u8 *)&sp1C)[0], ((u8 *)&sp1C)[1], ((u8 *)&sp1C)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 0xD);
    sw = (f32)tex[0] * lbl_80369430;
    sh = (f32)tex[1] * lbl_80369430;
    sp18 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xD);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0xD, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    xR = x + w;
    xR2 = xR - lbl_80369464;
    Prim2D_SetQuadMin(xR2, y, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(xR2 + sh, y + sw, th, tw);
    Prim2D_SetColor(((u8 *)&sp18)[0], ((u8 *)&sp18)[1], ((u8 *)&sp18)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 0xE);
    sw = (f32)tex[0] * lbl_80369430;
    sh = (f32)tex[1] * lbl_80369430;
    sp14 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xE);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0xE, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    yB = y + h;
    yB2 = yB - lbl_8036949C;
    Prim2D_SetQuadMin(x, yB2, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(x + sh, yB2 + sw, th, tw);
    Prim2D_SetColor(((u8 *)&sp14)[0], ((u8 *)&sp14)[1], ((u8 *)&sp14)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 0xF);
    sw = (f32)tex[0] * lbl_80369430;
    sh = (f32)tex[1] * lbl_80369430;
    sp10 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xF);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0xF, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    yB2 = yB - lbl_8036959C;
    Prim2D_SetQuadMin(xR2, yB2, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(xR2 + sh, yB2 + sw, th, tw);
    Prim2D_SetColor(((u8 *)&sp10)[0], ((u8 *)&sp10)[1], ((u8 *)&sp10)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    sp2C = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 4);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 4, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    xL2 = lbl_80369464 + x;
    Prim2D_SetQuadMin(xL2, y, lbl_80369418, lbl_80369418);
    edge = xL2 + ((w - lbl_80369464) - lbl_80369464);
    Prim2D_SetQuadMax(edge, y + lbl_803694D0, th, tw);
    Prim2D_SetColor(((u8 *)&sp2C)[0], ((u8 *)&sp2C)[1], ((u8 *)&sp2C)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    sp28 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x10);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0x10, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    yT2 = yB - lbl_80369500;
    Prim2D_SetQuadMin(xL2, yT2, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(edge, yT2 + lbl_803694D0, th, tw);
    Prim2D_SetColor(((u8 *)&sp28)[0], ((u8 *)&sp28)[1], ((u8 *)&sp28)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    sp24 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x11);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0x11, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    ya = lbl_80369668 + y;
    Prim2D_SetQuadMin(x, ya, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(x + lbl_803694D0, ya + ((h - lbl_80369668) - lbl_8036949C), th, tw);
    Prim2D_SetColor(((u8 *)&sp24)[0], ((u8 *)&sp24)[1], ((u8 *)&sp24)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    sp20 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x12);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0x12, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    xb = xR - lbl_803694E4;
    ya = lbl_803695AC + y;
    Prim2D_SetQuadMin(xb, ya, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(xb + lbl_803694D0, ya + ((h - lbl_803695AC) - lbl_8036959C), th, tw);
    Prim2D_SetColor(((u8 *)&sp20)[0], ((u8 *)&sp20)[1], ((u8 *)&sp20)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    if (h >= lbl_80369598) {
        tex = (u16 *)*fn_8006EDD8(gUiAtlas, 0x13);
        sw = (f32)tex[0] * lbl_80369430;
        sh = (f32)tex[1] * lbl_80369430;
        spC = *Ui_GetColor(1);
        mgr = gUiAtlas;
        tex = (u16 *)*fn_8006EDD8(mgr, 0x13);
        th = (f32)tex[1];
        tw = (f32)tex[0];
        Prim2D_Begin();
        Prim2D_BindTexture(mgr, 0x13, 0x11);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetPrimParam(lbl_80369418);
        yMid = ((h - lbl_80369480) * lbl_80369514) + y;
        Prim2D_SetQuadMin(x, yMid, lbl_80369418, lbl_80369418);
        Prim2D_SetQuadMax(x + sh, yMid + sw, th, tw);
        Prim2D_SetColor(((u8 *)&spC)[0], ((u8 *)&spC)[1], ((u8 *)&spC)[2], 0xFF);
        Prim2D_EmitQuad();
        Prim2D_EndPrim();

        tex = (u16 *)*fn_8006EDD8(gUiAtlas, 0x14);
        sw = (f32)tex[0] * lbl_80369430;
        sh = (f32)tex[1] * lbl_80369430;
        sp8 = *Ui_GetColor(1);
        mgr = gUiAtlas;
        tex = (u16 *)*fn_8006EDD8(mgr, 0x14);
        th = (f32)tex[1];
        tw = (f32)tex[0];
        Prim2D_Begin();
        Prim2D_BindTexture(mgr, 0x14, 0x11);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetPrimParam(lbl_80369418);
        xa = lbl_80369430 + xR2;
        Prim2D_SetQuadMin(xa, yMid, lbl_80369418, lbl_80369418);
        Prim2D_SetQuadMax(xa + sh, yMid + sw, th, tw);
        Prim2D_SetColor(((u8 *)&sp8)[0], ((u8 *)&sp8)[1], ((u8 *)&sp8)[2], 0xFF);
        Prim2D_EmitQuad();
        Prim2D_EndPrim();
    }

    Prim2D_Begin();
    Prim2D_AddZ(lbl_80369430);
    Prim2D_PrepareTex();
}

void fn_80086C14(s32 arg0, s32 arg1, f32 x, f32 y, f32 w, f32 h) {
    void Prim2D_EmitQuad(void);
    void Prim2D_SetColor(s32, s32, s32, s32);
    void Prim2D_SetQuadMax(f32, f32, f32, f32);
    void Prim2D_SetQuadMin(f32, f32, f32, f32);
    void Prim2D_SetPrimParam(f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_AddZ(f32);
    void Prim2D_BindTexture(void *, s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    void **fn_8006EDD8(void *, s32);
    s32 *Ui_GetColor(u8);
    extern void *gUiAtlas;
    extern f32 lbl_80369418;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_8036943C;
    extern f32 lbl_80369450;
    extern f32 lbl_80369464;
    extern f32 lbl_80369484;
    extern f32 lbl_803694CC;
    extern f32 lbl_803694D0;
    extern f32 lbl_80369518;
    extern f32 lbl_8036951C;
    extern f32 lbl_803695AC;

    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    void *mgr;
    u16 *tex;
    f32 tw, th;
    f32 x1, y1;
    f32 sw, sh;
    f32 xR, yB;
    f32 xR2, yB2;
    f32 xL2, yT2;
    f32 tmp;
    f32 scale;

    sp28 = *Ui_GetColor((u8)(arg1 + 0x24));
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x21);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0x21, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    x1 = lbl_8036951C + x;
    y1 = lbl_8036951C + y;
    Prim2D_SetQuadMin(x1, y1, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(x1 + (w - lbl_8036943C), y1 + (h - lbl_8036943C), th, tw);
    Prim2D_SetColor(((u8 *)&sp28)[0], ((u8 *)&sp28)[1], ((u8 *)&sp28)[2], arg0);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036942C);
    Prim2D_PrepareTex();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 6);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    sp14 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 6);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 6, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    Prim2D_SetQuadMin(x, y, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(x + sh, y + sw, th, tw);
    Prim2D_SetColor(((u8 *)&sp14)[0], ((u8 *)&sp14)[1], ((u8 *)&sp14)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 7);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    sp10 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 7);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 7, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    xR = x + w;
    xR2 = xR - lbl_80369518;
    Prim2D_SetQuadMin(xR2, y, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(xR2 + sh, y + sw, th, tw);
    Prim2D_SetColor(((u8 *)&sp10)[0], ((u8 *)&sp10)[1], ((u8 *)&sp10)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 8);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    spC = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 8);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 8, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    yB = y + h;
    yB2 = yB - lbl_803694CC;
    Prim2D_SetQuadMin(x, yB2, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(x + sh, yB2 + sw, th, tw);
    Prim2D_SetColor(((u8 *)&spC)[0], ((u8 *)&spC)[1], ((u8 *)&spC)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 9);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    sp8 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 9);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 9, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    Prim2D_SetQuadMin(xR2, yB2, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(xR2 + sh, yB2 + sw, th, tw);
    Prim2D_SetColor(((u8 *)&sp8)[0], ((u8 *)&sp8)[1], ((u8 *)&sp8)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    sp24 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xA);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0xA, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    xL2 = lbl_80369464 + x;
    Prim2D_SetQuadMin(xL2, y, lbl_80369418, lbl_80369418);
    tmp = xL2 + ((w - lbl_80369464) - lbl_80369518);
    Prim2D_SetQuadMax(tmp, y + lbl_803694D0, th, tw);
    Prim2D_SetColor(((u8 *)&sp24)[0], ((u8 *)&sp24)[1], ((u8 *)&sp24)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    sp20 = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xB);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0xB, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    yT2 = yB - lbl_80369450;
    Prim2D_SetQuadMin(xL2, yT2, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(tmp, yT2 + lbl_803694D0, th, tw);
    Prim2D_SetColor(((u8 *)&sp20)[0], ((u8 *)&sp20)[1], ((u8 *)&sp20)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    sp1C = *Ui_GetColor(1);
    mgr = gUiAtlas;
    tex = (u16 *)*fn_8006EDD8(mgr, 5);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 5, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    {
        f32 xa = lbl_80369430 + x;
        f32 ya = lbl_803695AC + y;
        Prim2D_SetQuadMin(xa, ya, lbl_80369418, lbl_80369418);
        {
            f32 yb = ya + ((h - lbl_803694CC) - lbl_803694CC);
            Prim2D_SetQuadMax(xa + lbl_803694D0, yb, th, tw);
            Prim2D_SetColor(((u8 *)&sp1C)[0], ((u8 *)&sp1C)[1], ((u8 *)&sp1C)[2], 0xFF);
            Prim2D_EmitQuad();
            Prim2D_EndPrim();

            sp18 = *Ui_GetColor(1);
            mgr = gUiAtlas;
            tex = (u16 *)*fn_8006EDD8(mgr, 5);
            tw = (f32)tex[0];
            th = (f32)tex[1];
            Prim2D_Begin();
            Prim2D_BindTexture(mgr, 5, 0x11);
            Prim2D_PrepareTex();
            Prim2D_AddPrim(1);
            Prim2D_SetPrimParam(lbl_80369418);
            {
                f32 xb = xR - lbl_80369484;
                Prim2D_SetQuadMin(xb, ya, th, lbl_80369418);
                Prim2D_SetQuadMax(xb + lbl_803694D0, yb, lbl_80369418, tw);
                Prim2D_SetColor(((u8 *)&sp18)[0], ((u8 *)&sp18)[1], ((u8 *)&sp18)[2], 0xFF);
                Prim2D_EmitQuad();
                Prim2D_EndPrim();
            }
        }
    }
    Prim2D_Begin();
    Prim2D_AddZ(lbl_80369430);
    Prim2D_PrepareTex();
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma opt_propagation off
void fn_800875B4(s32 arg0, s32 arg1, f32 x, f32 y, f32 w, f32 h) {
    void Prim2D_EmitQuad(void);
    void Prim2D_SetColor(s32, s32, s32, s32);
    void Prim2D_SetQuadMax(f32, f32, f32, f32);
    void Prim2D_SetQuadMin(f32, f32, f32, f32);
    void Prim2D_SetPrimParam(f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_AddZ(f32);
    void Prim2D_BindTexture(void *, s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    void **fn_8006EDD8(void *, s32);
    s32 *Ui_GetColor(u8);
    extern void *gUiAtlas;
    extern f64 lbl_80369440;
    extern f32 lbl_80369418;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_8036943C;
    extern f32 lbl_80369484;
    extern f32 lbl_803694D0;
    extern f32 lbl_8036951C;
    extern f32 lbl_803695AC;
    extern f32 lbl_8036966C;

    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 *colp;
    void *mgr;
    u16 *tex;
    f32 t0, t1;
    f32 xb, yb, ya, xa;
    f32 edge;
    f32 yT2;
    f32 xL2;
    f32 xR2, yB2;
    f32 yB, xR;
    f32 sw, sh;
    f32 y1, x1;
    f32 th, tw;

    colp = Ui_GetColor((u8)(arg1 + 0x24));
    mgr = gUiAtlas;
    sp28 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x21);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0x21, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    x1 = lbl_8036951C + x;
    y1 = lbl_8036951C + y;
    Prim2D_SetQuadMin(x1, y1, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(x1 + (w - lbl_8036943C), y1 + (h - lbl_8036943C), th, tw);
    Prim2D_SetColor(((u8 *)&sp28)[0], ((u8 *)&sp28)[1], ((u8 *)&sp28)[2], arg0);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036942C);
    Prim2D_PrepareTex();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 0);
    sw = (f32)tex[0] * lbl_80369430;
    sh = (f32)tex[1] * lbl_80369430;
    colp = Ui_GetColor(1);
    mgr = gUiAtlas;
    sp14 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 0);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 0, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    Prim2D_SetQuadMin(x, y, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(x + sh, y + sw, th, tw);
    Prim2D_SetColor(((u8 *)&sp14)[0], ((u8 *)&sp14)[1], ((u8 *)&sp14)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 1);
    sw = (f32)tex[0] * lbl_80369430;
    sh = (f32)tex[1] * lbl_80369430;
    colp = Ui_GetColor(1);
    mgr = gUiAtlas;
    sp10 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 1);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 1, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    xR = x + w;
    xR2 = xR - lbl_8036966C;
    Prim2D_SetQuadMin(xR2, y, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(xR2 + sh, y + sw, th, tw);
    Prim2D_SetColor(((u8 *)&sp10)[0], ((u8 *)&sp10)[1], ((u8 *)&sp10)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 2);
    sw = (f32)tex[0] * lbl_80369430;
    sh = (f32)tex[1] * lbl_80369430;
    colp = Ui_GetColor(1);
    mgr = gUiAtlas;
    spC = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 2);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 2, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    yB = y + h;
    yB2 = yB - lbl_803695AC;
    Prim2D_SetQuadMin(x, yB2, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(x + sh, yB2 + sw, th, tw);
    Prim2D_SetColor(((u8 *)&spC)[0], ((u8 *)&spC)[1], ((u8 *)&spC)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    tex = (u16 *)*fn_8006EDD8(gUiAtlas, 3);
    sw = (f32)tex[0] * lbl_80369430;
    sh = (f32)tex[1] * lbl_80369430;
    colp = Ui_GetColor(1);
    mgr = gUiAtlas;
    sp8 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 3);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 3, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    Prim2D_SetQuadMin(xR2, yB2, lbl_80369418, lbl_80369418);
    Prim2D_SetQuadMax(xR2 + sh, yB2 + sw, th, tw);
    Prim2D_SetColor(((u8 *)&sp8)[0], ((u8 *)&sp8)[1], ((u8 *)&sp8)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    colp = Ui_GetColor(1);
    mgr = gUiAtlas;
    sp24 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 4);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 4, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    xL2 = lbl_8036966C + x;
    Prim2D_SetQuadMin(xL2, y, lbl_80369418, lbl_80369418);
    edge = xL2 + ((w - lbl_8036966C) - lbl_8036966C);
    Prim2D_SetQuadMax(edge, y + lbl_803694D0, th, tw);
    Prim2D_SetColor(((u8 *)&sp24)[0], ((u8 *)&sp24)[1], ((u8 *)&sp24)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    colp = Ui_GetColor(1);
    mgr = gUiAtlas;
    sp20 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 4);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 4, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    yT2 = yB - lbl_803694D0;
    Prim2D_SetQuadMin(xL2, yT2, lbl_80369418, tw);
    Prim2D_SetQuadMax(edge, yT2 + lbl_803694D0, th, lbl_80369418);
    Prim2D_SetColor(((u8 *)&sp20)[0], ((u8 *)&sp20)[1], ((u8 *)&sp20)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    colp = Ui_GetColor(1);
    mgr = gUiAtlas;
    sp1C = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 5);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 5, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    xa = lbl_80369430 + x;
    ya = lbl_803695AC + y;
    Prim2D_SetQuadMin(xa, ya, lbl_80369418, lbl_80369418);
    yb = ya + ((h - lbl_803695AC) - lbl_803695AC);
    Prim2D_SetQuadMax(xa + lbl_803694D0, yb, th, tw);
    Prim2D_SetColor(((u8 *)&sp1C)[0], ((u8 *)&sp1C)[1], ((u8 *)&sp1C)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    colp = Ui_GetColor(1);
    mgr = gUiAtlas;
    sp18 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 5);
    tw = (f32)tex[0];
    th = (f32)tex[1];
    Prim2D_Begin();
    Prim2D_BindTexture(mgr, 5, 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetPrimParam(lbl_80369418);
    xb = xR - lbl_80369484;
    Prim2D_SetQuadMin(xb, ya, th, lbl_80369418);
    Prim2D_SetQuadMax(xb + lbl_803694D0, yb, lbl_80369418, tw);
    Prim2D_SetColor(((u8 *)&sp18)[0], ((u8 *)&sp18)[1], ((u8 *)&sp18)[2], 0xFF);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_AddZ(lbl_80369430);
    Prim2D_PrepareTex();
    (void)lbl_80369440;
}
#pragma push
#pragma optimization_level 4
#pragma use_lmw_stmw on
#pragma opt_common_subs off
#pragma opt_register_coloring off
void fn_80087F50(s32 arg0, f32 farg0, f32 farg1) {
    void Prim2D_EmitQuad(void);
    void Prim2D_SetColor(s32, s32, s32, s32);
    void Prim2D_SetQuadMax(f32, f32, f32, f32);
    void Prim2D_SetQuadMin(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_BindTexture(s32, s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    s32 Abs(s32);
    void sprintf(char *, char *, ...);
    s32 strlen(char *);
    extern s32 lbl_8026C7DC[];
    extern u8 gUiStrings[];
    extern s32 gUiAtlas;
    extern f64 lbl_80369470;
    extern f32 lbl_803694A4;

    char buf[8];
    s32 widths[10];
    s32 abs_val;
    s32 saved;
    s32 sign;
    s32 x;
    s16 v_base;
    s16 y;
    s16 u_off;
    s32 len;
    s32 i;
    char *p;
    s8 ch;

    widths[0] = lbl_8026C7DC[0];
    widths[1] = lbl_8026C7DC[1];
    widths[2] = lbl_8026C7DC[2];
    widths[3] = lbl_8026C7DC[3];
    widths[4] = lbl_8026C7DC[4];
    widths[5] = lbl_8026C7DC[5];
    widths[6] = lbl_8026C7DC[6];
    widths[7] = lbl_8026C7DC[7];
    widths[8] = lbl_8026C7DC[8];
    widths[9] = lbl_8026C7DC[9];

    if (arg0 != 0) {
        abs_val = Abs(arg0);
        saved = gUiAtlas;
        Prim2D_Begin();
        Prim2D_BindTexture(saved, 0x29, 0x11);
        Prim2D_PrepareTex();
        {
        s32 x0, y0;
        s16 u0, v0;
        x0 = (s32)farg0;
        y0 = (s32)farg1;
        if (arg0 > 0) {
            u0 = 0x96;
            v0 = 0;
        } else {
            u0 = 0x96;
            v0 = 0x10;
        }
        Prim2D_AddPrim(1);
        Prim2D_SetQuadMin((f32)(s16)x0, (f32)(s16)y0, (f32)u0, (f32)v0);
        Prim2D_SetQuadMax((f32)((s16)x0 + 0xF), (f32)((s16)y0 + 0x10), (f32)(u0 + 0xF), (f32)(v0 + 0x10));
        Prim2D_SetColor(0xFF, 0xFF, 0xFF, 0xFF);
        Prim2D_EmitQuad();
        Prim2D_EndPrim();
        }
        sprintf(buf, (char *)(gUiStrings + 0x215), abs_val);
        len = strlen(buf);
        x = (s32)(lbl_803694A4 + farg0);
        y = (s16)(s32)farg1;
        v_base = arg0 > 0 ? 0 : 0x10;
        p = buf;
        for (i = 0; i < len; i++, p++) {
            u_off = (s16)(((s8)*p - 0x30) * 0xF);
            Prim2D_AddPrim(1);
            Prim2D_SetQuadMin((f32)(s16)x, (f32)y, (f32)u_off, (f32)v_base);
            Prim2D_SetQuadMax((f32)((s16)x + 0xF), (f32)(y + 0x10), (f32)(u_off + 0xF), (f32)(v_base + 0x10));
            Prim2D_SetColor(0xFF, 0xFF, 0xFF, 0xFF);
            Prim2D_EmitQuad();
            Prim2D_EndPrim();
            ch = *p;
            x = (s16)(x + widths[ch - 0x30]);
        }
    }
}
#pragma pop
void fn_80088300(void *arg0) {
typedef struct { u8 pad[8]; s8 dir[4]; s8 next; u8 type; u8 pad2[6]; } LocalEntry;
u32 *Unit_GetItemSlot(void *, s32);
void fn_8007DAC4(void *, void *);
void Ui_PlaySeCue(void *, s32);
void Ui_HideUnitInfoPopup(void *);
extern u8 gUiStrings[];
extern Menu888Entry lbl_80288FE8[][37];
extern u8 gUnitInfoPopup[];
extern void *gPadInput;
void *self = M2C_FIELD(arg0, void **, 0x30);
u32 pressed = M2C_FIELD(gPadInput,u32 *,4);
u32 repeat = M2C_FIELD(gPadInput,u32 *,12);
pressed &= M2C_FIELD(gPadInput,u32 *,8) ^ pressed;
if ((pressed & 0x200) || (pressed & 0x800)) {
M2C_FIELD(self,s16 *,4)=0; Ui_HideUnitInfoPopup(gUnitInfoPopup); return;
}
if (repeat & 0x08000008) {
LocalEntry (*base)[37];
LocalEntry *row;
s32 index=M2C_FIELD(self,s32 *,0x1c);
u32 type;
s32 valid;
base = (LocalEntry (*)[37])lbl_80288FE8;
for (;;) {
row = base[M2C_FIELD(self,s8 *,9)];
index = row[index].dir[0];
if(index==-1) return;
type = row[index].type;
if(type>=10 && type<=14) {
if(M2C_FIELD((u8 *)self + (type-10)*2, s16 *, 0x24)==-1) valid=0; else valid=1;
} else if(type>=2 && type<=9) {
if(*Unit_GetItemSlot(M2C_FIELD(self,void **,0x58),type-2)!=0) valid=1; else valid=0;
} else if(type>=15 && type<=22) {
if(M2C_FIELD((u8 *)self + (type-15)*4, u32 *, 0x38)==0) valid=0; else valid=1;
} else valid=1;
if(valid) break;
}
M2C_FIELD(self,s32 *,0x1c)=index;
fn_8007DAC4(self,(u8 *)lbl_80288FE8+M2C_FIELD(self,s8 *,9)*0x2e4+M2C_FIELD(self,s32 *,0x1c)*20);
Ui_PlaySeCue(gUiStrings+0x19b,100);
}
else if (repeat & 0x04000004) {
LocalEntry (*base)[37];
LocalEntry *row;
s32 index=M2C_FIELD(self,s32 *,0x1c);
u32 type;
s32 valid;
base = (LocalEntry (*)[37])lbl_80288FE8;
for (;;) {
row = base[M2C_FIELD(self,s8 *,9)];
index = row[index].dir[1];
if(index==-1) return;
type = row[index].type;
if(type>=10 && type<=14) {
if(M2C_FIELD((u8 *)self + (type-10)*2, s16 *, 0x24)==-1) valid=0; else valid=1;
} else if(type>=2 && type<=9) {
if(*Unit_GetItemSlot(M2C_FIELD(self,void **,0x58),type-2)!=0) valid=1; else valid=0;
} else if(type>=15 && type<=22) {
if(M2C_FIELD((u8 *)self + (type-15)*4, u32 *, 0x38)==0) valid=0; else valid=1;
} else valid=1;
if(valid) break;
}
M2C_FIELD(self,s32 *,0x1c)=index;
fn_8007DAC4(self,(u8 *)lbl_80288FE8+M2C_FIELD(self,s8 *,9)*0x2e4+M2C_FIELD(self,s32 *,0x1c)*20);
Ui_PlaySeCue(gUiStrings+0x19b,100);
}
else if (repeat & 0x01000001) {
LocalEntry (*base)[37];
LocalEntry *row;
s32 index=M2C_FIELD(self,s32 *,0x1c);
u32 type;
s32 valid;
base = (LocalEntry (*)[37])lbl_80288FE8;
for (;;) {
row = base[M2C_FIELD(self,s8 *,9)];
index = row[index].dir[2];
if(index==-1) return;
type = row[index].type;
if(type>=10 && type<=14) {
if(M2C_FIELD((u8 *)self + (type-10)*2, s16 *, 0x24)==-1) valid=0; else valid=1;
} else if(type>=2 && type<=9) {
if(*Unit_GetItemSlot(M2C_FIELD(self,void **,0x58),type-2)!=0) valid=1; else valid=0;
} else if(type>=15 && type<=22) {
if(M2C_FIELD((u8 *)self + (type-15)*4, u32 *, 0x38)==0) valid=0; else valid=1;
} else valid=1;
if(valid) break;
}
M2C_FIELD(self,s32 *,0x1c)=index;
fn_8007DAC4(self,(u8 *)lbl_80288FE8+M2C_FIELD(self,s8 *,9)*0x2e4+M2C_FIELD(self,s32 *,0x1c)*20);
Ui_PlaySeCue(gUiStrings+0x19b,100);
}
else if (repeat & 0x02000002) {
LocalEntry (*base)[37];
LocalEntry *row;
s32 index=M2C_FIELD(self,s32 *,0x1c);
u32 type;
s32 valid;
base = (LocalEntry (*)[37])lbl_80288FE8;
for (;;) {
row = base[M2C_FIELD(self,s8 *,9)];
index = row[index].dir[3];
if(index==-1) return;
type = row[index].type;
if(type>=10 && type<=14) {
if(M2C_FIELD((u8 *)self + (type-10)*2, s16 *, 0x24)==-1) valid=0; else valid=1;
} else if(type>=2 && type<=9) {
if(*Unit_GetItemSlot(M2C_FIELD(self,void **,0x58),type-2)!=0) valid=1; else valid=0;
} else if(type>=15 && type<=22) {
if(M2C_FIELD((u8 *)self + (type-15)*4, u32 *, 0x38)==0) valid=0; else valid=1;
} else valid=1;
if(valid) break;
}
M2C_FIELD(self,s32 *,0x1c)=index;
fn_8007DAC4(self,(u8 *)lbl_80288FE8+M2C_FIELD(self,s8 *,9)*0x2e4+M2C_FIELD(self,s32 *,0x1c)*20);
Ui_PlaySeCue(gUiStrings+0x19b,100);
}
}
#pragma pop
#pragma optimization_level 3
#pragma opt_strength_reduction off
static inline void Menu888_InitSelection(void *self) {
    s32 initial[3] = {29, 19, 17};
    M2C_FIELD(self, s16 *, 4) = 1;
    M2C_FIELD(self, s32 *, 0x1C) = initial[M2C_FIELD(self, s8 *, 9)];
}
void fn_800888A4(void *arg0) {
    void Process_Goto(void *, s32);
    void *Unit_GetItemSlot(void *, s32);
    void fn_8007DAC4(void *, void *);
    void Ui_PlaySeCue(void *, s32);
    u8 Ui_IsUnitInfoPopupOpen(void *);
    void Ui_OpenUnitInfoText(void *, void *, void *, f32, f32);
    extern u8 gUnitInfoPopup[];
    extern u8 gUiStrings[];
    extern s32 lbl_8026C7D0[];
    extern Menu888Entry lbl_80288FE8[][37];
    extern void *gPadInput;
    extern f32 lbl_80369670, lbl_80369674, lbl_80369678;
    s32 sp8[3];
    Menu888Entry (*base)[37];
    s32 *select;
    s32 *initial;
    u32 repeat;
    u32 pressed, buttons;
    void *self;
    Menu888Entry *entry;
    Menu888Entry *row;
    s32 valid;
    u32 type;
    self = M2C_FIELD(arg0, void * *, 0x30);
    buttons = M2C_FIELD(gPadInput, u32 *, 4);
    repeat = M2C_FIELD(gPadInput, u32 *, 0xC);
    pressed = buttons & (M2C_FIELD(gPadInput, u32 *, 8) ^ buttons);
    if (Ui_IsUnitInfoPopupOpen(gUnitInfoPopup) != 0) return;
    if (pressed & 0x200) {
        Process_Goto(arg0, 3);
        Ui_PlaySeCue(gUiStrings + 0x394, 100);
        return;
    }
    if (repeat & 0x02000002) {
        Process_Goto(arg0, 1);
        M2C_FIELD(self, s32 *, 0x20) = 1;
        Ui_PlaySeCue(gUiStrings + 0x3A4, 100);
        return;
    }
    if (repeat & 0x01000001) {
        Process_Goto(arg0, 1);
        M2C_FIELD(self, s32 *, 0x20) = -1;
        Ui_PlaySeCue(gUiStrings + 0x3A4, 100);
        return;
    }
    if (repeat & 0x08000008) {
        Process_Goto(arg0, 2);
        M2C_FIELD(self, s32 *, 0x20) = -1;
        Ui_PlaySeCue(gUiStrings + 0x3C0, 100);
        return;
    }
    if (repeat & 0x04000004) {
        Process_Goto(arg0, 2);
        M2C_FIELD(self, s32 *, 0x20) = 1;
        Ui_PlaySeCue(gUiStrings + 0x3C0, 100);
        return;
    }
    if ((repeat & 0x100) && M2C_FIELD(M2C_FIELD(self, void * *, 0x58), u32 *, 0x194) != 0) {
        Process_Goto(arg0, 2);
        M2C_FIELD(self, s32 *, 0x20) = 0;
        Ui_PlaySeCue(gUiStrings + 0x3C0, 100);
        return;
    }
    if (pressed & 0x800) {
        Menu888_InitSelection(self);
        base = lbl_80288FE8;
        goto check;
    next:
        row = (Menu888Entry *)((s32)base + M2C_FIELD(self, s8 *, 9) * 0x2E4);
        entry = &row[M2C_FIELD(self, s32 *, 0x1C)];
        M2C_FIELD(self, s32 *, 0x1C) = entry->next;
    check:
        {
            row = base[M2C_FIELD(self, s8 *, 9)];
            entry = &row[M2C_FIELD(self, s32 *, 0x1C)];
            type = entry->type;
            if (type >= 10 && type <= 14) {
                if (M2C_FIELD((u8 *)self + (type - 10) * 2, s16 *, 0x24) == -1)
                    valid = 0;
                else
                    valid = 1;
            } else if (type >= 2 && type <= 9) {
                if (M2C_FIELD(Unit_GetItemSlot(M2C_FIELD(self, void * *, 0x58), type - 2), u32 *, 0) != 0)
                    valid = 1;
                else
                    valid = 0;
            } else if (type >= 15 && type <= 22) {
                if (M2C_FIELD((u8 *)self + (type - 15) * 4, u32 *, 0x38) == 0)
                    valid = 0;
                else
                    valid = 1;
            } else
                valid = 1;
            if (!valid)
                goto next;
        }
        entry = &lbl_80288FE8[M2C_FIELD(self, s8 *, 9)][M2C_FIELD(self, s32 *, 0x1C)];
        Ui_OpenUnitInfoText(gUnitInfoPopup, arg0, gUiStrings + 0x3E1, M2C_FIELD(entry, f32 *, 0), M2C_FIELD(entry, f32 *, 4));
        fn_8007DAC4(self, entry);
        return;
    }
    if (gBattleState[0x57] >= 2) {
        f32 lower = lbl_80369674;
        M2C_FIELD(self, f32 *, 0x64) -= (f32)(s32)(M2C_FIELD(M2C_FIELD(gPadInput, void * *, 0), s8 *, 4) * lbl_80369670);
        if (M2C_FIELD(self, f32 *, 0x64) < 0.0f)
            M2C_FIELD(self, f32 *, 0x64) += lbl_80369678;
        {
            f32 value = M2C_FIELD(self, f32 *, 0x64);
            f32 upper = lbl_80369678;
            if (value > upper)
                M2C_FIELD(self, f32 *, 0x64) = value - upper;
        }
    }
}
#pragma optimization_level reset
void fn_80088CC4(void *arg0) {
    M2C_UNK fn_80088300(void *);
    M2C_UNK fn_800888A4(void *);
    s16 temp_r0;

    temp_r0 = *(s16 *)((char *)*(void **)((char *)arg0 + 0x30) + 4);
    switch (temp_r0) {
    case 0:
        fn_800888A4(arg0);
        return;
    case 1:
        fn_80088300(arg0);
        return;
    }
}

void fn_80088D0C(void *arg0) {
    extern u8 gUiStrings[], gBattle[];
    void *fn_800C4638(s32, void *, s32);
    void *fn_8003A114(void *);
    void *Face_Create(void *, s32);
    void *GActor_Create(void);
    void *fn_800506E0(void *, s32);
    s32 fn_800639B4(void *);
    void GActor_Finalize(void *);
    void fn_801A7218(void *, void *, s32);
    void fn_8007DD78(void *);
    u8 *p, *unit, *actor, *q;
    s32 n;
    p = fn_800C4638(0x68, gUiStrings + 0x3E8, 0);
    *(void **)((u8 *)arg0+0x30)=p;
    *(u32 *)(p+0x58)=*(u32 *)((u8 *)arg0+0x34);
    *(u32 *)p=*(u32 *)((u8 *)arg0+0x38);
    if(arg0 != NULL) {
        p=*(void **)((u8 *)arg0+0x30);
        if(*(void **)(p+0x58) != NULL) {
            *(s16 *)(p+4)=0;
            *(s16 *)(p+6)=0;
            *(f32 *)(p+0x64)=0.0f;
            *(void **)(p+0x5C)=Face_Create(fn_8003A114(*(void **)(p+0x58)),0);
            *(void **)(p+0x60)=GActor_Create();
            *(void **)(*(u8 **)(p+0x60)+4)=*(u8 **)(p+0x58)+0x1C;
            actor=*(u8 **)(p+0x60);
            *(u32 *)actor = (*(u32 *)actor | 0x50020000) | 0x8400;
            *(s32 *)(*(u8 **)(p+0x60)+0x44)=fn_800639B4(fn_800506E0(*(void **)(p+0x58),0));
            GActor_Finalize(*(void **)(p+0x60));
            fn_801A7218(gBattle,*(void **)(p+0x58),-1);
            unit=*(u8 **)(p+0x58);
            n=0;
            *(s16 *)(p+0x24)=-1;
            *(s16 *)(p+0x26)=-1;
            *(s16 *)(p+0x28)=-1;
            *(s16 *)(p+0x2A)=-1;
            *(s16 *)(p+0x2C)=-1;
            if ((unit[0x1A4] >> 5) & 7) {
                n=1;
                *(s16 *)(p+0x24)=0x1B;
                *(s16 *)(p+0x2E)=(unit[0x1A4] >> 5) & 7;
            }
            if ((*(u16 *)(unit+0x1A4) >> 7) & 7) {
                q=p+n*2;
                n++;
                *(s16 *)(q+0x24)=28;
                *(s16 *)(q+0x2E)=(*(u16 *)(unit+0x1A4) >> 7) & 7;
            }
            if ((unit[0x1A5] >> 4) & 7) {
                q=p+n*2;
                n++;
                *(s16 *)(q+0x24)=29;
                *(s16 *)(q+0x2E)=(unit[0x1A5] >> 4) & 7;
            }
            if ((unit[0x1A4] >> 2) & 7) {
                q=p+n*2;
                n++;
                *(s16 *)(q+0x24)=30;
                *(s16 *)(q+0x2E)=(unit[0x1A4] >> 2) & 7;
            }
            if (unit[0x1A5] & 7) {
                q=p+n*2;
                *(s16 *)(q+0x24)=31;
                *(s16 *)(q+0x2E)=unit[0x1A5] & 7;
            }
            fn_8007DD78(p);
            p[8]=0xFF;
            *(f32 *)(p+0xC)=32.0f;
            *(f32 *)(p+0x10)=40.0f;
            p[9]=gBattleState[0xA8];
            p[0xA]=0xFF;
            *(f32 *)(p+0x14)=31.0f;
            *(f32 *)(p+0x18)=139.0f;
        }
    }
}

void fn_80088F34(void) {
    void *Process_Find(void *);
    void Process_Create(void *, s32);
    extern u8 lbl_802899CC[];
    void *p;

    if (Process_Find(lbl_802899CC) != 0) {
        p = Process_Find(lbl_802899CC);
        *(u8 *)((u8 *)p + 0x30) = 0x7B;
        return;
    }
    Process_Create(lbl_802899CC, 5);
}

void fn_80088F8C(void *arg0) {
    f32 Math_Ease(s32, s16, f32, f32, f32, f32);
    s16 temp_r4;
    f32 f4 = 6.0f;
    temp_r4 = *(s16 *)((u8 *)arg0 + 0x28);
    *(s16 *)((u8 *)arg0 + 0x34) = (s16)Math_Ease(0, temp_r4, *(f32 *)((u8 *)arg0 + 0x38), *(f32 *)((u8 *)arg0 + 0x3C), (f32)(6 - temp_r4), f4);
}

#pragma push
#pragma optimization_level 2
void fn_80088FFC(void *arg0) {
    void C_MTXOrtho(void *, f32, f32, f32, f32, f32, f32);
    void GXSetProjection(void *, s32);
    void PSMTXTrans(void *, f32, f32, f32);
    void GXLoadPosMtxImm(void *, s32);
    void GXSetCurrentMtx(s32);
    void GXSetViewport(f32, f32, f32, f32, f32, f32);
    void GXClearVtxDesc(void);
    void GXSetVtxDesc(s32, s32);
    void GXSetVtxAttrFmt(s32, s32, s32, s32, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void GXSetNumChans(s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void GXSetNumTevStages(s32);
    void GXSetCullMode(s32);
    void GXSetBlendMode(s32, s32, s32, s32, s32, s32, s32);
    void fn_802245D8(s32, s32, s32, s32);
    void GXSetZMode(s32, s32, s32);
    void GXBegin(s32, s32, s32);
    void fn_8022097C(void);
    void Process_Unlink(void *);
    extern f32 gScreenOrigin;
    extern f32 gScreenHeight;
    extern f32 gScreenWidth;
    extern f32 gOrthoFar;
    extern f32 gFadeQuadZ;
    extern f32 gViewportFar;
    u8 sp8[0x40];
    u8 alpha;
    void *mtx;

    mtx = &sp8[0];
    C_MTXOrtho(mtx, gScreenOrigin, gScreenHeight, gScreenOrigin, gScreenWidth, gScreenOrigin, gOrthoFar);
    GXSetProjection(mtx, 1);
    PSMTXTrans(mtx, gScreenOrigin, gScreenOrigin, gFadeQuadZ);
    GXLoadPosMtxImm(mtx, 0);
    GXSetCurrentMtx(0);
    GXSetViewport(gScreenOrigin, gScreenOrigin, gScreenWidth, gScreenHeight, gScreenOrigin, gViewportFar);
    GXClearVtxDesc();
    GXSetVtxDesc(9, 1);
    GXSetVtxAttrFmt(0, 9, 1, 3, 0);
    GXSetVtxDesc(0xB, 1);
    GXSetVtxAttrFmt(0, 0xB, 1, 5, 0);
    GXSetVtxDesc(0xD, 1);
    GXSetVtxAttrFmt(0, 0xD, 1, 3, 0);
    GXSetTevColorIn(0, 0xF, 0xA, 8, 0xF);
    GXSetTevColorOp(0, 0, 0, 0, 1, 0);
    GXSetTevAlphaIn(0, 7, 7, 7, 5);
    GXSetTevAlphaOp(0, 0, 0, 0, 1, 0);
    GXSetTevOrder(0, 0, 0, 4);
    fn_80222C50((u8 *)arg0 + 0x4C, 0);
    GXSetNumChans(1);
    fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
    GXSetNumTevStages(1);
    GXSetCullMode(1);
    GXSetBlendMode(4, 0, 1, 1, 0, 0, 2);
    fn_802245D8(1, 4, 5, 0);
    GXSetZMode(1, 3, 0);
    alpha = (u8)*(u16 *)((u8 *)arg0 + 0x34);
    GXBegin(0x98, 0, 4);
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0x3DD;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = alpha;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0x260;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0x3DD;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = alpha;
    *(volatile s16 *)0xCC008000 = 1;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0x1C0;
    *(volatile s16 *)0xCC008000 = 0x3DD;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = alpha;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 1;
    *(volatile s16 *)0xCC008000 = 0x260;
    *(volatile s16 *)0xCC008000 = 0x1C0;
    *(volatile s16 *)0xCC008000 = 0x3DD;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = alpha;
    *(volatile s16 *)0xCC008000 = 1;
    *(volatile s16 *)0xCC008000 = 1;
    if (*(u8 *)((u8 *)arg0 + 0x30) == 0x7B) {
        fn_8022097C();
        Process_Unlink(arg0);
    }
}
#pragma pop
#pragma push
#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
#pragma scheduling on
void fn_800892E8(void *arg0) {
    s32 GXGetTexBufferSize(s32, s32, s32, s32, s32);
    void *fn_800C45B8(s32, void *, s32);
    void DCInvalidateRange(void *, s32);
    void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
    void GXInitTexObjLOD(void *, s32, s32, s32, s32, s32, f32, f32, f32);
    void *Process_Create(void *, s32);
    u8 *obj;
    s32 size;
    void *tmp;
    f32 f3c;
    f32 f38;

    obj = (u8 *)arg0;
    *(s32 *)(obj + 0x48) = 0;
    size = GXGetTexBufferSize(0x260, 0x1C0, 4, 0, 0);
    *(void **)(obj + 0x48) = fn_800C45B8(-size, lbl_8026CC58 + 0x2A, 0);
    DCInvalidateRange(*(void **)(obj + 0x48), size);
    fn_80222644(obj + 0x4C, *(void **)(obj + 0x48), 0x260, 0x1C0, 4, 0, 0, 0);
    GXInitTexObjLOD(obj + 0x4C, 0, 0, 0, 0, 0, gScreenOrigin, gScreenOrigin, gScreenOrigin);
    tmp = Process_Create(lbl_80289998, 6);
    *(void **)((u8 *)tmp + 0x54) = arg0;
    f38 = 255.0f;
    f3c = 127.0f;
    *(f32 *)(obj + 0x38) = f38;
    *(f32 *)(obj + 0x3C) = f3c;
    *(u16 *)(obj + 0x34) = 0;
    obj[0x30] = 0;
}
#pragma pop

void fn_800893E0(void *arg0)
{
    extern void fn_80089424(void);
    extern void fn_8000BFEC(void *);
    extern void fn_800C4588(void *);

    u8 *obj = (u8 *)arg0;

    fn_8000BFEC(fn_80089424);
    fn_800C4588(*(void **)(obj + 0x48));
    *(u32 *)(obj + 0x48) = 0;
}

#pragma scheduling reset
void fn_80089424(s32 arg0) {
    M2C_UNK Process_DecRef(s32);
    s32 fn_8000A418();
    if (fn_8000A418() != 0) {
        Process_DecRef(arg0);
    }
}

void fn_8000BFEC(void (*arg0)(void *));
void fn_80089490(void *);
void fn_80089460(void *arg0) {
    *(u16 *)((char *)arg0 + 0x36) = 0;
    fn_8000BFEC(fn_80089490);
}

#pragma opt_strength_reduction off
