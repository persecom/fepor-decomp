/* Functions from 0x80055C74 to 0x8005A29C, found by decomp-toolkit. */
#include "common.h"

void *Process_CreateChild(void *, s32, void *);             /* extern */
s32 strcpy(void *, s32);                       /* extern */
extern u16 lbl_80285BD0[16];
extern const f64 lbl_80369160;    /* 0.5 double constant, .sdata2 */

#pragma optimization_level reset

/* Free up/down scroll arrows; if create, alloc new ones (kinds 8 and 4). */

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern u8 Proc_GActorNodeLink[16];

/* Create a process that links two named nodes on a GActor; assert if either is missing. */

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#pragma scheduling on

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#pragma optimization_level reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#pragma optimization_level 3

#pragma optimization_level reset

#pragma push
#pragma use_lmw_stmw on
#pragma optimization_level 4
void fn_8005956C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0) {
    void fn_80059C2C(s32, s32, s32, s32, s32);
    void fn_80066D00(s32);
    void PSMTXIdentity(void *);
    void GXSetVtxDesc(s32, s32);
    void GXClearVtxDesc(void);
    void GXSetVtxAttrFmt(s32, s32, s32, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void GXSetNumChans(s32);
    void GXBegin(s32, s32, s32);
    void GXSetCullMode(s32);
    void GXSetBlendMode(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222644(void *, s32, s32, s32, s32, s32, s32, s32);
    void GXInitTexObjLOD(void *, s32, s32, s32, s32, s32, f32, f32, f32);
    void fn_80222C50(void *, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void GXSetNumTevStages(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void GXSetZMode(s32, s32, s32);
    void fn_80224E50(void *, s32, s32);
    extern const f32 gF32_0;
    extern const f64 lbl_80369118;
    extern const f32 lbl_80369128;
    extern const f32 lbl_8036912C;

    u8 sp58[0x30];
    u8 sp28[0x30];
    u8 sp8[0x20];
    f32 scale;
    f32 fz;
    f32 f0;
    s32 x1;
    s32 y1;
    s32 a0;
    s32 a1;
    s32 a2;
    s32 a3;
    s32 a4;
    s32 a6;
    void *p;
    s32 t;

    fz = farg0;
    a4 = arg4;
    a0 = arg0;
    a1 = arg1;
    a2 = arg2;
    a3 = arg3;
    a6 = arg6;

    fn_80059C2C(arg0, arg1, arg2, arg3, arg5);
    p = sp8;
    t = a6;
    fn_80222644(p, t, a2 & 0xFFFF, a3 & 0xFFFF, 0x11, 0, 0, 0);
    f0 = gF32_0;
    GXInitTexObjLOD(sp8, 1, 1, 0, 0, 0, f0, f0, f0);
    fn_80222C50(sp8, 0);
    fn_80222C50(sp8, 1);
    PSMTXIdentity(sp58);
    scale = lbl_80369128 * (f32)a4;
    *(f32 *)(sp58 + 0xC) = scale / (f32)a2;
    PSMTXIdentity(sp28);
    *(f32 *)(sp28 + 0x1C) = scale / (f32)a3;
    GXSetNumChans(2);
    GXSetNumTevStages(2);
    GXSetCullMode(1);
    GXSetBlendMode(4, 0, 1, 1, 0, 0, 2);
    GXSetTevOrder(0, 0, 0, 4);
    GXSetTevColorIn(0, 0xF, 0xF, 0xF, 0xF);
    GXSetTevColorOp(0, 0, 0, 0, 1, 0);
    GXSetTevAlphaIn(0, 4, 7, 7, 7);
    GXSetTevAlphaOp(0, 0, 0, 0, 0, 0);
    GXSetTevOrder(1, 1, 1, 0xFF);
    GXSetTevColorIn(1, 0xF, 0xF, 0xF, 0);
    GXSetTevColorOp(1, 0, 0, 0, 1, 0);
    GXSetTevAlphaIn(1, 4, 7, 7, 0);
    GXSetTevAlphaOp(1, 1, 0, 0, 0, 0);
    fn_80224E50(sp58, 0x1E, 1);
    fn_80224E50(sp28, 0x21, 1);
    GXClearVtxDesc();
    GXSetVtxDesc(9, 1);
    GXSetVtxDesc(0xD, 1);
    GXSetVtxAttrFmt(0, 9, 1, 4, 0);
    GXSetVtxAttrFmt(0, 0xD, 1, 4, 0);
    fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
    fn_802201A8(1, 1, 4, 0x21, 0, 0x7D);
    fn_80223E5C(6, 1, 0, 3, 0xFF);
    GXSetZMode(0, 3, 0);
    fn_802245D8(1, 6, 7, 0);
    GXBegin(0x80, 0, 4);

    x1 = a0 + a2;
    y1 = a1 + a3;
    (void)lbl_80369118;
    f0 = gF32_0;

    *(volatile f32 *)0xCC008000 = (f32)a0;
    *(volatile f32 *)0xCC008000 = (f32)a1;
    *(volatile f32 *)0xCC008000 = fz;
    *(volatile f32 *)0xCC008000 = gF32_0;
    *(volatile f32 *)0xCC008000 = gF32_0;

    *(volatile f32 *)0xCC008000 = (f32)x1;
    *(volatile f32 *)0xCC008000 = (f32)a1;
    *(volatile f32 *)0xCC008000 = fz;
    *(volatile f32 *)0xCC008000 = lbl_8036912C;
    *(volatile f32 *)0xCC008000 = gF32_0;

    *(volatile f32 *)0xCC008000 = (f32)x1;
    *(volatile f32 *)0xCC008000 = (f32)y1;
    *(volatile f32 *)0xCC008000 = fz;
    *(volatile f32 *)0xCC008000 = lbl_8036912C;
    *(volatile f32 *)0xCC008000 = lbl_8036912C;

    *(volatile f32 *)0xCC008000 = (f32)a0;
    *(volatile f32 *)0xCC008000 = (f32)y1;
    *(volatile f32 *)0xCC008000 = fz;
    *(volatile f32 *)0xCC008000 = gF32_0;
    *(volatile f32 *)0xCC008000 = lbl_8036912C;

    fn_80066D00(-1);
}
#pragma pop
void fn_800599D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_8022124C(s32, s32, s32, s32);
    void fn_802212FC(u16, u16, s32, u8);
    void GXCopyTex(s32, s32);
    void fn_802209FC(void);
    void fn_80222EB4(void);
    s32 a2;
    s32 a3;
    s32 a4;

    a4 = arg4;
    a3 = arg3;
    a2 = arg2;
    fn_8022124C(arg0 & 0xFFFF, arg1 & 0xFFFF, arg2 & 0xFFFF, arg3 & 0xFFFF);
    fn_802212FC((u16)a2, (u16)a3, 0x27, 0);
    GXCopyTex(a4, 0);
    fn_802209FC();
    fn_80222EB4();
}

void Gfx_FillRect(s32 x, s32 y, s32 w, s32 h) {
    s32 x1;
    s32 y1;
    f32 left;
    f32 right;

    // Fill an axis-aligned screen rect with a solid untextured GX quad.
    GXClearVtxDesc();
    GXSetVtxDesc(9, 1);
    GXSetVtxAttrFmt(0, 9, 1, 4, 0);
    GXSetNumChans(0);
    GXSetCullMode(1);
    GXSetBlendMode(4, 0, 1, 1, 0, 0, 2);
    GXSetNumTevStages(1);
    GXSetTevOrder(0, 0xFF, 0xFF, 4);
    GXSetNumTexGens(0, 4);
    GXSetZMode(0, 3, 0);
    fn_802245D8(1, 0, 7, 0);
    GXBegin(0x80, 0, 4);

    x1 = x + w;
    y1 = y + h;

    *(f32 *)0xCC008000 = (f32) x;
    *(f32 *)0xCC008000 = (f32) y;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = (f32) x1;
    *(f32 *)0xCC008000 = (f32) y;

    right = (f32) x1;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = right;
    *(f32 *)0xCC008000 = (f32) y1;

    left = (f32) x;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = left;
    *(f32 *)0xCC008000 = (f32) y1;

    *(f32 *)0xCC008000 = 0.0f;

    fn_80066D00(-1);
}

void fn_80059C2C(s32 x, s32 y, s32 w, s32 h, u8 *alpha) {
    extern u32 lbl_8036C418;
    void fn_80223E5C(s32,s32,s32,s32,s32);
    void fn_8022462C(s32);
    void fn_80224658(s32);
    u32 defaults = lbl_8036C418;
    s32 right, bottom;
    u8 a;
    if (!alpha) alpha = (u8 *)&defaults;
    GXClearVtxDesc();
    GXSetVtxDesc(9,1);
    GXSetVtxDesc(11,1);
    GXSetVtxAttrFmt(0,9,1,4,0);
    GXSetVtxAttrFmt(0,11,1,5,0);
    GXSetCullMode(1);
    GXSetBlendMode(4,0,1,1,0,0,2);
    GXSetNumChans(0);
    GXSetNumTevStages(1);
    GXSetNumTexGens(0,4);
    GXSetTevOrder(0,255,255,4);
    fn_802245D8(0,0,0,0);
    GXSetZMode(0,3,0);
    fn_80223E5C(0,0,1,7,0);
    fn_8022462C(0);
    fn_80224658(1);
    GXBegin(0x98,0,4);
    bottom = y+h;
    right = x+w;
    *(f32 *)0xCC008000 = (f32)x;
    *(f32 *)0xCC008000 = (f32)y;
    *(f32 *)0xCC008000 = 0.0f;
    a = alpha[0];
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = a;
    *(f32 *)0xCC008000 = (f32)right;
    *(f32 *)0xCC008000 = (f32)y;
    *(f32 *)0xCC008000 = 0.0f;
    a = alpha[1];
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = a;
    *(f32 *)0xCC008000 = (f32)x;
    *(f32 *)0xCC008000 = (f32)bottom;
    *(f32 *)0xCC008000 = 0.0f;
    a = alpha[2];
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = a;
    *(f32 *)0xCC008000 = (f32)right;
    *(f32 *)0xCC008000 = (f32)bottom;
    *(f32 *)0xCC008000 = 0.0f;
    a = alpha[3];
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = 0;
    *(u8 *)0xCC008000 = a;
    fn_80224658(0);
    fn_8022462C(1);
    fn_80066D00(-1);
}

f32 fn_80059EB8(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = arg0 >> 1;
    temp_r0 = arg1 % arg0;
    if (temp_r0 < temp_r5) {
        return farg0 + (((f32) temp_r0 * (farg1 - farg0)) / (f32) temp_r5);
    }
    return farg1 + (((f32) (temp_r0 - temp_r5) * (farg0 - farg1)) / (f32) temp_r5);
}

f32 Math_Lerp(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    return farg0 + ((farg3 * (farg1 - farg0)) / farg2);
}

f32 Math_EaseInPow(s32 n, f32 a, f32 b, f32 c, f32 d) {
f32 diff = b-a;
f32 x = d;
f32 y = c;
s32 i;
for(i=1;i<n;i++) { x *= d; y *= c; }
return a + diff*x/y;
}

f32 Math_EaseOutPow(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
f32 step=farg2-farg3;
f32 diff=farg1-farg0;
f32 x=step;
f32 y=farg2;
s32 i;
for(i=1;i<arg0;i++) {x*=step; y*=farg2;}
return farg0+(diff-diff*x/y);
}

void fn_8005A0E0(void *arg0, void *arg1, f32 *arg2) {
    void *Camera_Get(void);
    void fn_80202D1C(void *, void *);
    void fn_8020310C(void *, void *, void *);
    extern f32 lbl_80369144;
    f32 matrix[16];
    struct Vector { f32 x,y,z; } a,b;
    if(arg0==0) arg0=Camera_Get();
    fn_80202D1C((u8 *)arg0+0x64,matrix);
    a=*(struct Vector *)arg1;
    b=a;
    b.z+=lbl_80369144;
    fn_8020310C(matrix,&a,&a);
    fn_8020310C(matrix,&b,&b);
    arg2[0]=a.x+((arg2[2]-a.z)*(b.x-a.x))/(b.z-a.z);
    { f32 y=a.y; f32 z=a.z;
    arg2[1]=y+((arg2[2]-z)*(b.y-y))/(b.z-z); }
    arg2[2]=((f32 *)arg1)[2];
}

void fn_8005A1E8(void *arg0, f32 *arg1, f32 *arg2) {
void *Camera_Get(void);
void fn_80225034(f32 *);
void GXProject(void *, f32 *, f32 *, f32 *, f32 *, f32 *, f32, f32, f32);
extern f32 gF32_0;
f32 vals[7]; f32 sp8[6];
if(arg0==NULL) arg0=Camera_Get();
vals[0]=gF32_0;
vals[1]=*(f32 *)((u8 *)arg0+36);
vals[2]=*(f32 *)((u8 *)arg0+44);
vals[3]=*(f32 *)((u8 *)arg0+56);
vals[4]=*(f32 *)((u8 *)arg0+60);
vals[5]=*(f32 *)((u8 *)arg0+76);
vals[6]=*(f32 *)((u8 *)arg0+80);
fn_80225034(sp8);
GXProject((u8 *)arg0+0xA4,vals,sp8,arg2,arg2+1,arg2+2,arg1[0],arg1[1],arg1[2]);
}

#include "global.h"
#include "structs.h"

extern u16 lbl_80285BB0[16];
