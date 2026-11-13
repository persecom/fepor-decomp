/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
extern void* lbl_803674E8;
extern f32 lbl_803696C8;

extern s32 lbl_803682F0;
extern void *lbl_8026CC58;
extern void *lbl_80289998;
extern f32 lbl_80369690;
extern f32 lbl_803696A8;
extern f32 lbl_803696AC;

extern void* lbl_80367488;
extern s32 lbl_803693C0;
extern s32 lbl_803693C4;
extern f64 lbl_803693C8;
extern f32 lbl_803693D4;
extern f32 lbl_803693D8;
extern f32 lbl_803693E4;

extern u8 lbl_80330708[1400];

extern u16 *lbl_803674E0;

#pragma inline

extern f32 lbl_8036A118;
extern f32 lbl_8036A120;
extern f32 lbl_8036A130;
extern f32 lbl_8036A154;

extern f32 lbl_80369768;
extern u16 lbl_80289A60[];

extern u8 lbl_80289B00[16];

extern void* fn_800980D4(s32 arg0);
extern void fn_8017E394(void* arg0, void* arg1, void* arg2, s32 arg3);

extern u8 lbl_80289EB8[16];

extern f32 lbl_803697E0;
extern f32 lbl_803697E4;

#pragma scheduling reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw off
#pragma global_optimizer off
#pragma opt_strength_reduction off

void fn_80090480(s32 arg0, s32 arg1, void* arg2, s32 arg3) {
    s32 sp14;
    s32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    
    s32 var_r3 = arg0;
    s32 var_r4 = arg1;
    void* var_r5 = arg2;
    s32 var_r6 = arg3;

    if (arg0 < 0) {
        var_r3 = -var_r3;
    }
    
    if (arg1 < 0) {
        var_r4 = -var_r4;
    }
    
    sp14 = arg1;
    sp18 = arg0; 
    
    sp1C = lbl_8036A118 * var_r3;
    sp20 = lbl_8036A120 * var_r4;
    sp24 = lbl_8036A130 * var_r3;
    sp28 = lbl_8036A154 * var_r4;
    
    if (arg3 == 0) {
        sp30 = sp1C + sp20 + sp24 + sp28;
        sp34 = sp1C - sp20 - sp24 - sp28;
    } else {
        sp30 = sp1C + sp20 + sp24 - sp28;
        sp34 = sp1C - sp20 - sp24 + sp28;
    }
    
    *(f32*)var_r5 = sp30;
    *((f32*)var_r5 + 1) = sp34;
}

void fn_800907B8(void *arg0) {
    void fn_8008BA80(void *, s32, s32, u8);
    void fn_8008BBF8(s32, s32, s32, s32, u8, s32);
    void fn_8008CD64(f32);
    void fn_8008D510(s32, s32, s32, s32);
    s32 fn_80037BBC(void *, s32);
    s32 fn_8001C0C8(void);
    extern f32 lbl_80369768;

    s32 offset;
    s32 temp;
    s32 i;
    s32 id;

    fn_8008BA80(arg0, 0, 0, 1);
    fn_8008BBF8(0, 0x20, 0x108, 0x88, *(u8 *)(*(u8 **)((u8 *)arg0 + 0x190) + 8), 0x9A);
    offset = 0x2C;
    fn_8008CD64(lbl_80369768);
    i = 0;
    do {
        temp = fn_80037BBC(arg0, i);
        id = fn_8001C0C8();
        fn_8008D510(temp, id, 0x1C, offset);
        i += 1;
        offset += 0x1C;
    } while (i < 4);
}

void fn_80090874(void *arg0, s32 arg1) {
    s32 var_r29;
    u8 *var_r28;
    void *var_r27;
    u8 *var_r30;
    s32 var_r31;
    
    fn_8008BA80(0, 0, 1);
    fn_8008BBF8(0, 0x20, 0x108, 0x110, *(u8*)((u8*)arg0 + 0x190 + 0x8), 0x9A);
    
    var_r28 = (u8*)arg0 + 0x194;
    var_r29 = 0;
    var_r30 = (u8*)arg0 + 0x1F0;
    do {
        if (*(u32*)fn_80037BD0(arg0, var_r29) != 0) {
            *(u8*)var_r30 = fn_8003DAC4(arg1);
        }
        var_r29 += 1;
        var_r30 += 1;
    } while (var_r29 < 8);
    
    fn_8008CD64(lbl_80369768);
    
    var_r27 = arg0;
    var_r31 = 0;
    do {
        fn_80037BBC(var_r27, var_r31);
        fn_8008D510(*(u8*)var_r28, 0x1C, 0x2C, var_r31);
        var_r31 += 1;
        var_r28 += 1;
    } while (var_r31 < 4);
    
    var_r27 = arg0;
    var_r31 = 0;
    do {
        fn_8008D510(*(u8*)((u8*)var_r27 + 0x1EC), *(u8*)((u8*)var_r27 + 0x4), 0x1C, var_r31);
        var_r31 += 1;
        var_r27 = (void*)((u8*)var_r27 + 0x8);
    } while (var_r31 < 4);
}

void fn_80090990(void *arg0) {
    u8 sp8;
    s32 var_r29;
    u8 *var_r28;
    void *var_r27;
    u8 *var_r30;
    s32 var_r31;

    fn_8008BA80(0, 0, 1);
    fn_8008BBF8(0, 0x20, 0x108, 0x110, ((u8*)arg0 + 0x190)[8], 0x9A);
    
    var_r28 = &sp8;
    var_r29 = 0;
    var_r30 = var_r28;
    
    do {
        if (*(u32*)fn_80037BD0(arg0, var_r29) != 0) {
            *var_r30 = fn_80093DA8(arg0);
        }
        var_r29 += 1;
        var_r30 += 1;
    } while (var_r29 < 8);
    
    fn_8008CD64(lbl_80369768);
    
    var_r27 = arg0;
    var_r31 = 0;
    
    do {
        fn_80037BBC(var_r27, var_r31);
        fn_8008D510(*var_r28, 0x1C, 0x2C + (var_r31 * 0x1C));
        var_r31 += 1;
        var_r28 += 1;
    } while (var_r31 < 4);
    
    var_r27 = arg0;
    var_r31 = 0;
    
    do {
        fn_8008D510(((u8*)var_r27 + 0x1EC)[0], ((u8*)arg0 + 4)[0], 0x1C, 0x94 + (var_r31 * 0x1C));
        var_r31 += 1;
        var_r27 = (u8*)var_r27 + 8;
        var_r28 += 1;
    } while (var_r31 < 4);
}

void fn_80090E0C(s32 arg0, s32 arg1, s32 arg2)
{
    void fn_80007668(s32 *);
    void fn_800076AC(u8, u8, u8, u8);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    extern s32 lbl_80369748;
    extern s32 lbl_8036974C;
    extern s32 lbl_80369750;
    extern f32 lbl_80369764;
    extern f32 lbl_80369794;
    extern f32 lbl_80369798;
    extern f32 lbl_8036979C;
    extern f32 lbl_803697A0;
    u8 sp18[4];
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    switch (arg2) {
    case 0:
        sp14 = lbl_80369748;
        sp18[0] = *(u8 *)&sp14;
        sp18[1] = *(u8 *)((u8 *)&sp14 + 1);
        sp18[2] = *(u8 *)((u8 *)&sp14 + 2);
        sp18[3] = *(u8 *)((u8 *)&sp14 + 3);
        break;
    case 2:
        sp10 = lbl_8036974C;
        sp18[0] = *(u8 *)&sp10;
        sp18[1] = *(u8 *)((u8 *)&sp10 + 1);
        sp18[2] = *(u8 *)((u8 *)&sp10 + 2);
        sp18[3] = *(u8 *)((u8 *)&sp10 + 3);
        break;
    case 3:
        spC = lbl_80369750;
        sp18[0] = *(u8 *)&spC;
        sp18[1] = *(u8 *)((u8 *)&spC + 1);
        sp18[2] = *(u8 *)((u8 *)&spC + 2);
        sp18[3] = *(u8 *)((u8 *)&spC + 3);
        break;
    }
    fn_8000A258();
    fn_8000A174(0, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)arg0, (f32)arg1, lbl_80369794, lbl_80369798);
    sp8 = *(s32 *)sp18;
    fn_80007668(&sp8);
    fn_80007884();
    fn_80007898(4);
    fn_800077D8((f32)(arg0 - 3), (f32)arg1, lbl_8036979C, lbl_80369764);
    fn_800076AC(0xFF, 0xFF, 0xFF, 0x4D);
    fn_80007884();
    fn_80007898(4);
    fn_800077D8((f32)(arg0 - 3), (f32)(arg1 + 0x62), lbl_8036979C, lbl_80369764);
    fn_800076AC(0xFF, 0xFF, 0xFF, 0x4D);
    fn_80007884();
    fn_80007898(4);
    fn_800077D8((f32)arg0, (f32)(arg1 - 3), lbl_80369764, lbl_803697A0);
    fn_800076AC(0xFF, 0xFF, 0xFF, 0x4D);
    fn_80007884();
    fn_80007898(4);
    fn_800077D8((f32)(arg0 + 0xD0), (f32)(arg1 - 3), lbl_80369764, lbl_803697A0);
    fn_800076AC(0xFF, 0xFF, 0xFF, 0x4D);
    fn_80007884();
}

void fn_8009127C(void *arg0, s32 arg1) {
    s32 fn_8000E0E4(void *);
    void fn_801B79A0(s32, void *, s32, s8);
    extern u8 lbl_8026CD60[];
    void *msg;

    if ((s8)*(u8 *)((u8 *)arg0 + 0x1F) != 0) {
        msg = lbl_8026CD60 + 0x1BD;
    } else if ((s8)*(u8 *)((u8 *)arg0 + 0x20) != 0) {
        msg = lbl_8026CD60 + 0x1C4;
    } else if ((s8)*(u8 *)((u8 *)arg0 + 0x21) != 0) {
        msg = lbl_8026CD60 + 0x1CC;
    } else if ((s8)*(u8 *)((u8 *)arg0 + 0x22) != 0) {
        msg = lbl_8026CD60 + 0x1D5;
    } else if ((s8)*(u8 *)((u8 *)arg0 + 0x23) != 0) {
        msg = lbl_8026CD60 + 0x1DE;
    } else if ((s8)*(u8 *)((u8 *)arg0 + 0x24) != 0) {
        msg = lbl_8026CD60 + 0x1E8;
    } else if ((s8)*(u8 *)((u8 *)arg0 + 0x25) != 0) {
        msg = lbl_8026CD60 + 0x1F1;
    } else if ((s8)*(u8 *)((u8 *)arg0 + 0x26) != 0) {
        msg = lbl_8026CD60 + 0x1F9;
    } else if ((s8)*(u8 *)((u8 *)arg0 + 0x28) != 0) {
        msg = lbl_8026CD60 + 0x202;
    } else if ((s8)*(u8 *)((u8 *)arg0 + 0x27) != 0) {
        msg = lbl_8026CD60 + 0x20C;
    } else {
        msg = arg0;
    }
    fn_801B79A0(fn_8000E0E4(msg), lbl_8026CD60 + 0x1AC, arg1, 1);
}

void fn_800913D4(void **arg0,s32 arg1,s32 arg2) {
void fn_8000D864(s32,void*); s32 fn_8000D910(void*,s32); s32 fn_8001D070(void**,s32); s32 fn_8001D2C8(void**); s32 fn_80105BC0(s32,s32); void fn_801B79A0(s32,s32,s32,s32); s32 fn_80231E74(void*,s32,void*,...);
extern u8 lbl_8026CD60[];
u8 buf[0x80]; void **unit; s32 value; u8 ch; void *p;
unit=arg0; p=*unit;
if(p!=0) ch=*((u8*)p+0x15); else ch=0;
value=fn_8001D2C8(unit);
fn_80231E74(buf,0x80,lbl_8026CD60+0x214,fn_8001D070(unit,0),value,ch+0x60);
fn_8000D864(0,buf);
fn_801B79A0(fn_8000D910(lbl_8026CD60+0x21F,fn_80105BC0(arg2+0x1BC,1)),0,arg1,0);
}

void fn_8009149C(s32 arg0, s32 arg1) {
    extern u8 lbl_8026CD60[];
    s32 fn_80231E74(char *, s32, char *, ...);
    void fn_8000D864(s32, char *);
    s32 fn_8000E0E4(void *);
    void fn_801B79A0(s32, void *, s32, s32);
    char sp8[0x80];

    fn_80231E74(sp8, 0x80, (char *)lbl_8026CD60 + 0x228, arg0);
    fn_8000D864(0, sp8);
    fn_801B79A0(fn_8000E0E4((char *)lbl_8026CD60 + 0x22B), lbl_8026CD60 + 0x1AC, arg1, 0);
}

void fn_80091518(void **arg0, s32 arg1, s32 arg2) {
    void fn_8000D864(s32, char *);
    s32 fn_8000D910(char *, s32, void *);
    s32 fn_8001D070(void **, s32);
    s32 fn_8001D2C8(void **);
    s32 fn_80105BC0(s32, s32);
    void fn_801B79A0(s32, void *, s32, s32);
    s32 fn_80231E74(char *, s32, char *, ...);
    extern u8 lbl_8026CD60[];

    char sp8[0x80];
    s32 temp;
    u8 kind;
    void *p;

    p = *arg0;
    if (p != 0) {
        kind = *(u8 *)((char *)p + 0x15);
    } else {
        kind = 0;
    }
    temp = fn_8001D2C8(arg0);
    fn_80231E74(sp8, 0x80, (char *)lbl_8026CD60 + 0x214, fn_8001D070(arg0, 0), temp, kind + 0x60);
    fn_8000D864(0, sp8);
    fn_801B79A0(fn_8000D910((char *)lbl_8026CD60 + 0x25A, fn_80105BC0(arg2 + 0x1BC, 1), lbl_8026CD60), lbl_8026CD60 + 0x23E, arg1, 0);
}

void fn_800915E8(void **arg0, s32 arg1, s32 arg2) {
    void fn_8000D864(s32, char *);
    s32 fn_8000D910(char *, s32, void *);
    s32 fn_8001D070(void **, s32);
    s32 fn_8001D2C8(void **);
    s32 fn_80105BC0(s32, s32);
    void fn_801B79A0(s32, void *, s32, s32);
    s32 fn_80231E74(char *, s32, char *, ...);
    extern u8 lbl_8026CD60[];

    char sp8[0x80];
    s32 temp;
    u8 kind;
    void *p;

    p = *arg0;
    if (p != 0) {
        kind = *(u8 *)((char *)p + 0x15);
    } else {
        kind = 0;
    }
    fn_80231E74(sp8, 0x80, (char *)lbl_8026CD60 + 0x214, (temp = fn_8001D2C8(arg0), fn_8001D070(arg0, 0)), temp, kind + 0x60);
    fn_8000D864(0, sp8);
    fn_801B79A0(fn_8000D910((char *)lbl_8026CD60 + 0x265, fn_80105BC0(arg2 + 0x1BC, 1), lbl_8026CD60), lbl_8026CD60 + 0x1AC, arg1, 0);
}

void fn_800916B8(void **arg0, s32 arg1, s32 arg2) {
    extern u8 lbl_8026CD60[];
    s32 fn_80231E74(char *, s32, char *, ...);
    void fn_8000D864(s32, char *);
    s32 fn_8000D910(u8 *, s32);
    s32 fn_8001D070(void **, s32);
    s32 fn_8001D2C8(void **);
    s32 fn_80105BC0(s32, s32);
    void fn_801B79A0(s32, void *, s32, s32);
    char sp8[0x80];
    void *entry;
    s32 result;
    u8 type;
    void **unit = arg0;

    entry = *unit;
    if (entry != 0) {
        type = *((u8 *)entry + 0x15);
    } else {
        type = 0;
    }
    result = fn_8001D2C8(unit);
    fn_80231E74(sp8, 0x80, (char *)lbl_8026CD60 + 0x214, fn_8001D070(unit, 0), result, type + 0x60);
    fn_8000D864(0, sp8);
    fn_801B79A0(fn_8000D910(lbl_8026CD60 + 0x270, fn_80105BC0(arg2 + 0x1BC, 1)), lbl_8026CD60 + 0x23E, arg1, 0);
}

void fn_80091788(void **arg0, s32 arg1, s32 arg2) {
    extern u8 lbl_8026CD60[];
    s32 fn_80231E74(char *, s32, char *, ...);
    void fn_8000D864(s32, char *);
    s32 fn_8000D910(u8 *, s32);
    s32 fn_8001D070(void **, s32);
    s32 fn_8001D2C8(void **);
    s32 fn_80105BC0(s32, s32);
    void fn_801B79A0(s32, void *, s32, s32);
    char sp8[0x80];
    void *entry;
    s32 result;
    u8 type;

    entry = *arg0;
    if (entry != 0) {
        type = *((u8 *)entry + 0x15);
    } else {
        type = 0;
    }
    result = fn_8001D2C8(arg0);
    fn_80231E74(sp8, 0x80, (char *)lbl_8026CD60 + 0x214, fn_8001D070(arg0, 0), result, type + 0x60);
    fn_8000D864(0, sp8);
    fn_801B79A0(fn_8000D910(lbl_8026CD60 + 0x27B, fn_80105BC0(arg2 + 0x1BC, 1)), lbl_8026CD60 + 0x1AC, arg1, 0);
}
