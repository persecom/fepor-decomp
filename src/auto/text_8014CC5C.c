/* Functions from 0x8014A370 to 0x8014E350, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80367B00;
extern s32 lbl_80367B04;
extern u8 lbl_80367B0E;
extern u8 lbl_80367B44;

typedef struct { u8 a; u8 b; } Entry;
typedef struct { u8 pad[0x544]; s8 count; Entry entries[256]; } Obj;
extern u8 lbl_80367B08;
extern u8 lbl_80367B09;
extern u8 lbl_80367B0A;
extern u8 lbl_80367B0B;
extern u16 lbl_80292F60[];
extern f32 lbl_8036A7D0;
extern f32 lbl_8036A7D4;
extern f32 lbl_8036A7D8;
extern f32 lbl_8036A7DC;
extern f32 lbl_8036A7E0;
extern f64 lbl_8036A7E8;
extern u8 lbl_80367B0C;
extern u8 lbl_80367B0D;

void fn_800C426C(s32);
s32 fn_800C42AC(s32);
void *fn_8003FCCC(void *);
void fn_80024398(void *, s32, s32);

extern s32 lbl_80367B00;
extern u8 lbl_80367B0D;

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

#pragma cplusplus on

#pragma cplusplus off

extern u16 *g_AccessoryArray;

void fn_8017A430(void *, s32, void *);
void fn_8017A5EC(void *, u8);
void fn_8017A574(void *, s32);
void fn_8017A5C4(void *, u16);
void fn_8017A4CC(void *, s32, s32);
void fn_80105A30(void *, void *);
void fn_80014F94(void *, void *);
void fn_80199B88(void *, void *);
void fn_800BDAF8(void *, void *);
void fn_8017A480(void *, s32, void *);
void fn_8017A3E0(void *, s32, u8);
#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset
extern u16 lbl_80367B68;

void fn_80234450(s32, u32);

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern u16 lbl_80367B14;
extern u16 lbl_80367B14;
#include "common.h"
extern f32 lbl_8036A7F0;
extern u8 lbl_802CA518[];
extern s32 lbl_80367B00;
extern s32 lbl_80367B04;
extern u8 lbl_80367B0D;

void fn_801475FC(s32, s32); /* extern */
#include "global.h"

extern void* fn_80019F04();
#include "common.h"
extern u16 lbl_802CA264[50];
extern u16 lbl_802B14E4[];
#include "common.h"
#include "ef.h"
#include "global.h"

extern u8 lbl_80330708[];
extern u8 lbl_80277060[];
extern u8 lbl_8032BB58[];
#include "global.h"
extern u8 lbl_80330708[];

s8 fn_8014CC5C(Obj *arg0, s32 arg1) {
    s32 fn_80106DC8(s32, void *);
    u8 sp8[0x80];
    u8 *var_r4;
    u8 *var_r6;
    s32 temp_r6;
    s32 var_r5;
    s32 temp_r3;
    s32 ctr;
    u8 b;
    u8 a;

    temp_r3 = fn_80106DC8(arg1, sp8);
    var_r5 = 0;
    if (temp_r3 > 0) {
        temp_r6 = temp_r3 - 8;
        if (temp_r3 > 8) {
            ctr = (u32)(temp_r6 + 7) >> 3;
            var_r4 = sp8;
            if (temp_r6 > 0) {
                do {
                    b = var_r4[1];
                    a = var_r4[0];
                    arg0->entries[(s8)arg0->count].a = a;
                    arg0->entries[(s8)arg0->count].b = b;
                    ((u8 *)arg0)[0x544] = ((u8 *)arg0)[0x544] + 1;
                    b = var_r4[3];
                    a = var_r4[2];
                    arg0->entries[(s8)arg0->count].a = a;
                    arg0->entries[(s8)arg0->count].b = b;
                    ((u8 *)arg0)[0x544] = ((u8 *)arg0)[0x544] + 1;
                    b = var_r4[5];
                    a = var_r4[4];
                    arg0->entries[(s8)arg0->count].a = a;
                    arg0->entries[(s8)arg0->count].b = b;
                    ((u8 *)arg0)[0x544] = ((u8 *)arg0)[0x544] + 1;
                    b = var_r4[7];
                    a = var_r4[6];
                    arg0->entries[(s8)arg0->count].a = a;
                    arg0->entries[(s8)arg0->count].b = b;
                    ((u8 *)arg0)[0x544] = ((u8 *)arg0)[0x544] + 1;
                    b = var_r4[9];
                    a = var_r4[8];
                    arg0->entries[(s8)arg0->count].a = a;
                    arg0->entries[(s8)arg0->count].b = b;
                    ((u8 *)arg0)[0x544] = ((u8 *)arg0)[0x544] + 1;
                    b = var_r4[11];
                    a = var_r4[10];
                    arg0->entries[(s8)arg0->count].a = a;
                    arg0->entries[(s8)arg0->count].b = b;
                    ((u8 *)arg0)[0x544] = ((u8 *)arg0)[0x544] + 1;
                    b = var_r4[13];
                    a = var_r4[12];
                    arg0->entries[(s8)arg0->count].a = a;
                    arg0->entries[(s8)arg0->count].b = b;
                    var_r5 += 8;
                    ((u8 *)arg0)[0x544] = ((u8 *)arg0)[0x544] + 1;
                    b = var_r4[15];
                    a = var_r4[14];
                    var_r4 += 0x10;
                    arg0->entries[(s8)arg0->count].a = a;
                    arg0->entries[(s8)arg0->count].b = b;
                    ((u8 *)arg0)[0x544] = ((u8 *)arg0)[0x544] + 1;
                } while (--ctr);
            }
        }
        var_r6 = sp8 + var_r5 * 2;
        ctr = temp_r3 - var_r5;
        if (var_r5 < temp_r3) {
            do {
                b = var_r6[1];
                a = var_r6[0];
                var_r6 += 2;
                arg0->entries[(s8)arg0->count].a = a;
                arg0->entries[(s8)arg0->count].b = b;
                ((u8 *)arg0)[0x544] = ((u8 *)arg0)[0x544] + 1;
            } while (--ctr);
        }
    }
    return temp_r3;
}

