/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

#pragma fp_contract off

extern u16 lbl_80368784;
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

typedef struct GXRenderModeObj {
    u32 viTVmode;
    u16 fbWidth;
    u16 efbHeight;
    u16 xfbHeight;
    u16 viXOrigin;
    u16 viYOrigin;
    u16 viWidth;
    u16 viHeight;
    s32 xFBmode;
    u8 field_rendering;
    u8 aa;
    u8 sample_pattern[12][2];
    u8 vfilter[7];
} GXRenderModeObj;

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

extern u16 *__peReg;

extern u16* __peReg;

extern u32 lbl_80368738;
extern u32 lbl_80368770;

extern s32 jumptable_8029E0B8[];

extern u16* __GXData;

extern u16 *__GXData;

extern f32 lbl_8036BDC0;

static inline u32 __GXReadPECounterU32(u32 lo, u32 hi) {
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    ctrH0 = *((volatile u16 *)__peReg + hi);
    do {
        ctrH1 = ctrH0;
        ctrL = *((volatile u16 *)__peReg + lo);
        ctrH0 = *((volatile u16 *)__peReg + hi);
    } while (ctrH0 != ctrH1);
    return (ctrH0 << 16) | ctrL;
}

extern u16* __cpReg;

static inline u32 __GXReadCPCounterU32(u32 lo, u32 hi) {
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    ctrH0 = __cpReg[hi];
    do {
        ctrH1 = ctrH0;
        ctrL = __cpReg[lo];
        ctrH0 = __cpReg[hi];
    } while (ctrH0 != ctrH1);
    return (ctrH0 << 16) | ctrL;
}

extern u16 *__GXData;
extern u16 *__GXData;
extern u16 *__GXData;
extern u16 *__GXData;
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern u16 *__GXData;
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern u16 *__GXData;
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern u16* lbl_80368790;
extern u16* __peReg;
extern u16 *__GXData;

s32 fn_80222420(u16 arg0, u16 arg1, u16 arg2, u16 arg3)
{
    u16 var_r3;
    u16 var_r4;
    u16 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    s32 var_r9;
    u32 var_r10;
    s32 var_r11;
    s32 var_r12;
    s32 var_r31;

    if (arg0 >= 0x3C)
        return 0x3;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r5 = arg2;
    var_r6 = arg3;
    var_r7 = 0;
    var_r8 = 0;
    var_r9 = 0;
    var_r10 = 0;
    var_r11 = 0;
    var_r12 = 0;
    var_r31 = 0;

    switch (arg0)
    {
    case 0:
        return 0x3;
    case 1:
        return 0x2;
    case 2:
        return 0x2;
    case 0x6:
        arg0 = 0x40;
        goto case_0x16;
    case 0x16:
    case_0x16:
        arg0 = 0x20;
        var_r31 = 0;
        break;
    default:
        return 0x1;
    }

    if ((var_r6 & 0xFF) == 0x1)
    {
        var_r9 = (var_r4 & 0xFF);
        var_r8 = 0x1;
        if (var_r8 != 0)
        {
            var_r7 = var_r8 * arg2;
            var_r6 = var_r8 * arg3;
            var_r10 = var_r6 - 1;
            var_r7 = var_r7 - 1;
            var_r31 = 0;

            if (var_r9 > 0)
            {
                do
                {
                    var_r11 = var_r3 & 0xFFFF;
                    var_r12 = var_r4 & 0xFFFF;

                    var_r11 = (var_r11 + var_r10) & 0xFFFF;
                    var_r12 = (var_r12 + var_r7) & 0xFFFF;

                    var_r6 = (var_r12 >> arg3) & 0xFFFF;
                    var_r7 = (var_r11 >> arg2) & 0xFFFF;

                    var_r6 = var_r7 * var_r6;
                    var_r6 = arg0 * var_r6;

                    var_r31 += var_r6;
                } while (--var_r9 != 0);
            }

            if ((var_r4 & 0xFF) == 0x1)
                goto end;

            var_r3 = (var_r3 & 0xFFFF) >> 0x10;
            var_r5 = (var_r4 & 0xFFFF) >> 0x10;

            if (var_r3 > 0)
            {
                var_r6 = var_r3 >> 0x1;
            }
            else
            {
                var_r6 = 0x1;
            }

            var_r3 = (var_r4 & 0xFFFF) >> 0x10;

            if ((var_r3 & 0xFFFF) > 0)
            {
                var_r4 = var_r4 >> 0x1;
            }
            else
            {
                var_r4 = 0x1;
            }

            var_r3 = (var_r3 << arg2) - 1;
            var_r7 = (var_r4 << arg3) - 1;

            var_r6 = (var_r3 + (var_r4 & 0xFFFF)) >> arg3;
            var_r6 = (var_r4 >> arg2) * var_r6;
            var_r6 = arg0 * var_r6;

            var_r31 = var_r6;
        }
    }

end:
    return var_r31;
}

void fn_8022257C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16* arg5, u16* arg6, u16* arg7)
{
    if (arg0 >= 0x3c) {
        func_800F9E00();
    }
    
    switch (arg0) {
        case 0:
            arg1 = 0x3;
            arg2 = 0x3;
            break;
        case 1:
            arg1 = 0x3;
            arg2 = 0x2;
            break;
        case 2:
            arg1 = 0x2;
            arg2 = 0x2;
            break;
        case 3:
            arg2 = 0x0;
            arg1 = 0x0;
            break;
    }
    
    if (arg3 != 0) {
        arg3 = 1;
    }
    
    if (arg4 != 0) {
        arg4 = 1;
    }
    
    if (arg5 != NULL) {
        s32 temp_r9 = 1 << arg1;
        *arg5 = ((arg3 - 1) + arg3) >> arg1;
    }
    
    if (arg6 != NULL) {
        s32 temp_r9 = 1 << arg2;
        *arg6 = ((arg4 - 1) + arg4) >> arg2;
    }
    
    if (arg7 != NULL) {
        switch (arg0) {
            case 0x6:
            case 0x16:
                *arg7 = 0x1;
                break;
            default:
                *arg7 = 0x2;
        }
    }
}

void fn_80222890(void *arg0, s32 arg_sp8) {
    fn_80222644(arg0);
    *(u8*)((char*)arg0 + 0x1F) = (*(u8*)((char*)arg0 + 0x1F) & 0xFFFFFFFD);
    *(s32*)((char*)arg0 + 0x18) = arg_sp8;
}

void fn_802228D8(u32 *t, s32 min_filt, s32 mag_filt, f32 min_lod, f32 max_lod, f32 lod_bias, u8 bias_clamp, u8 do_edge_lod, s32 max_aniso) {
    extern u8 lbl_80367048[8];
    u8 lbias;
    u8 lmin;
    u8 lmax;

    if (lod_bias < -4.0f) {
        lod_bias = -4.0f;
    } else if (lod_bias >= 4.0f) {
        lod_bias = 3.99f;
    }
    lbias = (u8)(32.0f * lod_bias);
    t[0] = __rlwimi(t[0], lbias, 9, 15, 22);
    t[0] = __rlwimi(t[0], (mag_filt == 1) ? 1 : 0, 4, 27, 27);
    t[0] = __rlwimi(t[0], lbl_80367048[min_filt], 5, 24, 26);
    t[0] = __rlwimi(t[0], do_edge_lod ? 0 : 1, 8, 23, 23);
    t[0] = __rlwimi(t[0], 0, 17, 14, 14);
    t[0] = __rlwimi(t[0], 0, 18, 13, 13);
    t[0] = __rlwimi(t[0], max_aniso, 19, 11, 12);
    t[0] = __rlwimi(t[0], bias_clamp, 21, 10, 10);

    if (min_lod < 0.0f) {
        min_lod = 0.0f;
    } else if (min_lod > 10.0f) {
        min_lod = 10.0f;
    }
    lmin = (u8)(16.0f * min_lod);
    if (max_lod < 0.0f) {
        max_lod = 0.0f;
    } else if (max_lod > 10.0f) {
        max_lod = 10.0f;
    }
    lmax = (u8)(16.0f * max_lod);
    t[1] = __rlwimi(t[1], lmin, 0, 24, 31);
    t[1] = __rlwimi(t[1], lmax, 8, 16, 23);
}

void fn_80222A3C(u32 *t, s32 min_filt, s32 mag_filt) {
    extern u8 lbl_80367048[8];

    t[0] = __rlwimi(t[0], (mag_filt == 1) ? 1 : 0, 4, 27, 27);
    t[0] = __rlwimi(t[0], lbl_80367048[min_filt], 5, 24, 26);
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
    return (M2C_FIELD(arg0, u8 *, 0x1F) & 1) == 1;
}

u8 fn_80222AC0(u32 *arg0) {
    extern M2C_UNK lbl_80367050;
    return *(&lbl_80367050 + (((u32) *arg0 >> 5U) & 7));
}

void fn_80222AD4(void* obj, void* obj2, s32 arg2)
{
    *(u32*)((char*)obj + 0x0) = (*(u32*)((char*)obj + 0x0) & ~0xFF000000) | ((*(u8*)((char*)obj2 + arg2 * 1) << 24));
    *(u32*)((char*)obj + 0x4) = (*(u32*)((char*)obj + 0x4) & ~0xFF000000) | ((*(u8*)((char*)obj2 + 0x8 + arg2 * 1) << 24));
    *(u32*)((char*)obj + 0x8) = (*(u32*)((char*)obj + 0x8) & ~0xFF000000) | ((*(u8*)((char*)obj2 + 0x10 + arg2 * 1) << 24));
    *(u32*)((char*)obj2 + 0x0) = (*(u32*)((char*)obj2 + 0x0) & ~0xFF000000) | ((*(u8*)((char*)obj2 + 0x18 + arg2 * 1) << 24));
    *(u32*)((char*)obj2 + 0x4) = (*(u32*)((char*)obj2 + 0x4) & ~0xFF000000) | ((*(u8*)((char*)obj2 + 0x20 + arg2 * 1) << 24));
    *(u32*)((char*)obj + 0xC) = (*(u32*)((char*)obj + 0xC) & ~0xFF000000) | ((*(u8*)((char*)obj2 + 0x28 + arg2 * 1) << 24));
}

void fn_80222C50(s32 arg0, s32 arg1) {
    s32 fn_80222AD4(s32, s32, s32);                       /* extern */
    void *__GXData;
    
    __GXData = *(void**)((char*)__GXData + 0x4C8);
    fn_80222AD4(arg0, (s32)__GXData, arg1);
}

s32 fn_80222CDC(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) << 5) & 0x03FFFFE0;
}

u16 fn_80222CE8(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 8);
}

void GXInitTexCacheRegion(void *arg0, s8 arg1, u32 arg2, s32 arg3, u32 arg4, s32 arg5, s32 arg6) {
    s32 var_r9;

    var_r9 = arg6;
    switch (arg3) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_r9 = 3;
        break;
    case 1:                                         /* switch 1 */
        var_r9 = 4;
        break;
    case 2:                                         /* switch 1 */
        var_r9 = 5;
        break;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x7FFF) | ((arg2 >> 5U) & 0x7FFF));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x38000) | ((var_r9 << 0xF) & 0x38000));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x1C0000) | ((var_r9 << 0x12) & 0x1C0000));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x200000);
    switch (arg5) {                                 /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_r9 = 3;
        break;
    case 1:                                         /* switch 2 */
        var_r9 = 4;
        break;
    case 2:                                         /* switch 2 */
        var_r9 = 5;
        break;
    case 3:                                         /* switch 2 */
        var_r9 = 0;
        break;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & ~0x7FFF) | ((arg4 >> 5U) & 0x7FFF));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & ~0x38000) | ((var_r9 << 0xF) & 0x38000));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & ~0x1C0000) | ((var_r9 << 0x12) & 0x1C0000));
    M2C_FIELD(arg0, s8 *, 0xC) = arg1;
    M2C_FIELD(arg0, s8 *, 0xD) = 1;
}

void GXInitTlutRegion(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;
    *arg0 = 0;
    temp_r4 = (arg1 + 0xFFF80000);
    temp_r5 = temp_r4 >> 9;
    *arg0 = (*arg0 & ~0x3FF) | (temp_r5 & 0x3FF);
    *arg0 = (*arg0 & ~0x1FFC00) | ((arg2 << 0xA) & 0x1FFC00);
    *arg0 = (*arg0 & ~0xFF000000) | 0x65000000;
}

void fn_80222EB4(void) {
    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = 0x66001000;
    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = 0x66001100;
}

s32 fn_80222EFC(s32 arg0) {
    s32 temp_r0;
    
    // Load word from __GXData + 0x4c8, with auto-increment (lwzu)
    temp_r0 = __GXData[0x132]; // 0x4c8 / 2 = 0x132
    __GXData[0x132] = (u16)arg0; // Store halfword back
    
    return temp_r0;
}

s32 fn_80222F10(s32 arg0) {
    s32 temp_r0;
    
    temp_r0 = *(u16*)__GXData;
    *(u16*)__GXData = (u16)arg0;
    return temp_r0;
}

void fn_80222FC4(void) {
    u32* gxData;
    u32 temp_r0;
    s32 var_r27;
    s32 var_r28;
    s32 var_r29;
    s32 var_r30;
    s32 var_r31;
    u32 temp_r4;
    u32* temp_r5;

    gxData = (u32*)__GXData;
    
    if (gxData[0x594/4] != 0xFF) {
        temp_r0 = gxData[0x204/4];
        var_r31 = 0;
        var_r30 = ((temp_r0 >> 0xA) & 0xF) + 1;
        var_r27 = (temp_r0 >> 0x10) & 7;
        
    loop_16:
        if (var_r31 < var_r27) {
            switch (var_r31) {
                case 0:
                    temp_r0 = gxData[0x120/4];
                    var_r29 = temp_r0 & 7;
                    var_r28 = (temp_r0 >> 3) & 7;
                    break;
                case 1:
                    temp_r0 = gxData[0x120/4];
                    var_r29 = (temp_r0 >> 6) & 7;
                    var_r28 = (temp_r0 >> 9) & 7;
                    break;
                case 2:
                    temp_r0 = gxData[0x120/4];
                    var_r29 = (temp_r0 >> 0xC) & 7;
                    var_r28 = (temp_r0 >> 0xF) & 7;
                    break;
                case 3:
                    temp_r0 = gxData[0x120/4];
                    var_r29 = (temp_r0 >> 0x12) & 7;
                    var_r28 = (temp_r0 >> 0x15) & 7;
                    break;
            }
            if (!(gxData[0x594/4] & (1 << var_r28))) {
                fn_80222F24(var_r29, var_r28);
            }
            var_r31 += 1;
            goto loop_16;
        }
        
        var_r31 = 0;
        var_r27 = 0;
        
    loop_26:
        if (var_r31 < var_r30) {
            temp_r5 = &gxData[(0x100/4) + (var_r31 * 2)];
            temp_r4 = gxData[0x554/4 + var_r27/4];
            var_r29 = temp_r4 & 0xFFFFFEFF;
            
            if (var_r31 & 1) {
                var_r28 = (temp_r5[0] >> 0xF) & 7;
            } else {
                var_r28 = (temp_r5[0] >> 3) & 7;
            }
            if ((var_r29 != 0xFF) && !(gxData[0x594/4] & (1 << var_r28)) && (gxData[0x598/4] & (1 << var_r31))) {
                fn_80222F24(var_r29, var_r28);
            }
            var_r27 += 4;
            var_r31 += 1;
            goto loop_26;
        }
    }
}

void fn_80223494(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg_sp8, s32 arg_spC) {
    *(u8 *)0xCC008000 = 0x61;
    *((u32 *)0xCC008000 + 1) = arg0 | ((arg1 & 3) << 24) | ((arg2 & 3) << 26) | ((arg3 & 7) << 29) |
                         ((arg_spC & 1) << 22) | ((arg4 & 0x1F) << 19) | ((arg5 & 0xF) << 16) |
                         ((arg6 & 7) << 13) | ((arg7 & 3) << 11) | ((arg_sp8 & 1) << 10);
    *(u16 *)__GXData = 0;
}

void fn_80223678(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x10) = farg0;
        M2C_FIELD(arg0, f32 *, 0x14) = farg1;
        M2C_FIELD(arg0, f32 *, 0x18) = farg2;
        M2C_FIELD(arg0, f32 *, 0x1c) = farg3;
        M2C_FIELD(arg0, f32 *, 0x20) = farg4;
        M2C_FIELD(arg0, f32 *, 0x24) = farg5;
    }
}

void fn_802237BC(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r4;
    s32 var_r5;

    var_r4 = arg1;
    var_r5 = arg2;
    if (var_r5 == 0xFF) {
        var_r5 = 0;
    }
    if (var_r4 == 0xFF) {
        var_r4 = 0;
    }
    switch (arg0) {                                 /* irregular */
    case 0:
        __GXData[0x120/sizeof(u16)] = (u16) ((__GXData[0x120/sizeof(u16)] & ~7) | (var_r5 & 7));
        __GXData[0x120/sizeof(u16)] = (u16) ((__GXData[0x120/sizeof(u16)] & ~0x38) | ((var_r4 << 3) & 0x38));
        break;
    case 1:
        __GXData[0x120/sizeof(u16)] = (u16) ((__GXData[0x120/sizeof(u16)] & ~0x1C0) | ((var_r5 << 6) & 0x1C0));
        __GXData[0x120/sizeof(u16)] = (u16) ((__GXData[0x120/sizeof(u16)] & ~0xE00) | ((var_r4 << 9) & 0xE00));
        break;
    case 2:
        __GXData[0x120/sizeof(u16)] = (u16) ((__GXData[0x120/sizeof(u16)] & ~0x7000) | ((var_r5 << 0xC) & 0x7000));
        __GXData[0x120/sizeof(u16)] = (u16) ((__GXData[0x120/sizeof(u16)] & ~0x38000) | ((var_r4 << 0xF) & 0x38000));
        break;
    case 3:
        __GXData[0x120/sizeof(u16)] = (u16) ((__GXData[0x120/sizeof(u16)] & ~0x1C0000) | ((var_r5 << 0x12) & 0x1C0000));
        __GXData[0x120/sizeof(u16)] = (u16) ((__GXData[0x120/sizeof(u16)] & ~0xE00000) | ((var_r4 << 0x15) & 0xE00000));
        break;
    }
    *(u8 *)0xCC008000 = 0x61;
    *(u8 *)0xCC008000 = (u16) __GXData[0x120/sizeof(u16)];
    __GXData[0x5AC/sizeof(u16)] = (u16) (__GXData[0x5AC/sizeof(u16)] | 3);
    __GXData[0x2/sizeof(u16)] = 0;
}

void fn_802238A8(u8 arg0) {
    u16* gxData = (u16*)__GXData;
    u16 temp = gxData[0x102];
    temp = (temp & ~0x7000) | ((arg0 << 16) & 0x7000);
    gxData[0x102] = temp;
    
    temp = gxData[0x2D6];
    temp = temp | 0x6;
    gxData[0x2D6] = temp;
}

void fn_802238CC(void) {
    M2C_UNK fn_80223494(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 spC;
    s32 sp8;

    sp8 = 0;
    spC = 0;
    fn_80223494(0, 0, 0, 0, 0, 0, 0);
}

void fn_80223914(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        return;
    }
    if (arg1 <= 0) {
        return;
    }
    OSReport("Error: Invalid texture ID %d\n", arg1);
}

void fn_80223978(void) {

}

void __GXSetIndirectMask(s32 arg0) {
    u32 temp = __GXData[0x124/2];
    temp = (temp & ~0xFF) | (arg0 & 0xFF);
    __GXData[0x124/2] = temp;
    *(u8*)0xCC008000 = 0x61;
    *(u8*)0xCC008000 = (u8)(__GXData[0x124/2] & 0xFF);
    __GXData[0x2/2] = 0;
}

void __GXFlushTextureState(void) {
    u8 *addr = (u8 *)0xCC008000;
    u32 *gx_data = (u32 *)__GXData;
    
    *addr = 0x61;
    *(u32 *)(*(u32 *)__GXData + 0x124) = *(u32 *)(*(u32 *)__GXData + 0x124);
    *(u16 *)__GXData = 0;
}

void fn_80223A5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 *temp_r8;
    u32 temp_r10;
    u32 temp_r9;
    u32 temp_r4;
    
    temp_r8 = (u32 *)((u8 *)__GXData + (arg0 << 2));
    *(u8 *)0xCC008000 = 0x61;
    temp_r10 = *temp_r8;
    temp_r9 = temp_r10 & 0xFFFF0000;
    temp_r4 = ((arg1 & 0xF) << 12) | ((arg2 & 0xF) << 8) | ((arg3 & 0xF) << 4) | (arg4 & 0xF);
    // This order seems to match the target more closely - might need to be careful with bit positions
    temp_r10 = temp_r9 | temp_r4;
    *(u8 *)0xCC008000 = temp_r10;
    *temp_r8 = temp_r10; 
    *(u16 *)__GXData = 0;
}

u16 fn_80223AA0(u16 arg0) {
    return __GXData[0x388 + arg0 * 0x10];
}

u16* fn_80223B4C(s32 arg0) {
    return __GXData + 0x388 + (arg0 * 0x10);
}

void fn_80223BB4(s32 arg0, u32 *arg1) {
    s32 r6;
    u32 r8;
    
    // The target uses slwi instruction directly; we need to make sure the
    // shift and multiplication is handled correctly in register usage.
    r6 = arg0 << 1; // equivalent to arg0 * 2, but using the proper instruction
    
    r8 = *arg1;
    
    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = (r6 + 0xE0) << 0x18 | (r8 >> 0x18U) & 0xFF | (r8 << 0xC) & 0xFF000;
    
    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = (r6 + 0xE1) << 0x18 | (r8 >> 0x8U) & 0xFF | (r8 >> 0x4U) & 0xFF000;
    
    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = (r6 + 0xE1) << 0x18 | (r8 >> 0x8U) & 0xFF | (r8 >> 0x4U) & 0xFF000;
    
    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = (r6 + 0xE1) << 0x18 | (r8 >> 0x8U) & 0xFF | (r8 >> 0x4U) & 0xFF000;
    
    __GXData[1] = 0;
}

void fn_80223C14(void* arg0) {
    u32* sp = (u32*)arg0;
    s32 v1 = sp[7];
    s32 v2 = v1 & 0x7F;
    
    if (v2 == 0x3F) {
        if (sp[1] < 0x65) {
            v2 = 0;
        } else {
            v2 = 0x3E;
        }
    } else if (v2 > 0x50) {
        v2 = 0x7F;
    } else if (sp[1] < 0x68) {
        v2 = 0x50;
    } else {
        v2 = 0x51;
    }
    
    sp[7] = (sp[7] & ~0x7F) | v2;
}

void fn_80223C78(s32 arg0, u32 *arg1) {
    s32 r5_val = arg0 << 1;
    u32 r9_val = *arg1;
    
    // Store the first value as an address calculation
    *(u8*)((r5_val + 0xE0) | (((u32)__GXData) & ~0xFF)) = 0x61;
    
    // Store second value
    *(u32*)0xCC008000 = r9_val;
    
    // Store with index (0xE1)
    *(u32*)0xCC008000 = ((r5_val + 0xE1) << 24) | (r9_val >> 8);
    
    // Clear __GXData
    *(u16*)__GXData = 0;
    
    // Store final value with 0x61
    *(u8*)0xCC008000 = 0x61;
    
    // Final store with 0x0 
    *(u32*)0xCC008000 = 0;
    
    return;
}

void fn_80223CDC(s32 arg0, s32 arg1) {
    s32 r5;
    s32 *r7;
    
    r5 = arg0 >> 1;
    r7 = (s32*)((char*)__GXData + (r5 * 4) + 0x1B0);
    
    if (arg0 & 1) {
        *r7 = (*r7 & ~0x7C000) | ((arg1 << 0xE) & 0x7C000);
    } else {
        *r7 = (*r7 & ~0x1F0) | ((arg1 << 4) & 0x1F0);
    }
    
    *(u8*)0xCC008000 = 0x61;
    *(u32*)0xCC008000 = *r7;
    *(u16*)__GXData = 0;
}

void* fn_80223D38(u32 arg0) {
    extern u16 *__GXData;
    void *ret;

    if (arg0 >= 0x14) {
        ret = 0;
    } else {
        ret = __GXData + 0x388 + arg0 * 0x10;
    }
    return ret;
}

void fn_80223D94(s32 arg0, s32 arg1, s32 arg2) {
    u32 *temp_r8;
    u32 temp_r6;
    
    temp_r8 = (u32 *)((char *)__GXData + ((arg0 << 2) + 0x170));
    *temp_r8 = (*temp_r8 & ~3) | (arg1 & 3);
    temp_r6 = *temp_r8;
    temp_r6 = (temp_r6 & ~0xC) | ((arg2 << 2) & 0xC);
    *(u32 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = *temp_r8;
    *(u16 *)__GXData = 0;
}

void fn_80223DDC(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg3;
    M2C_FIELD(arg0, f32 *, 0x20) = farg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg5;
}

void fn_80223E5C(s32 arg0, u8 arg1, s32 arg2, s32 arg3, u8 arg4) {
    u32 temp;
    u32 r7_val;

    *(u8 *)0xCC008000 = 0x61;
    temp = (arg1 & 0xFF);
    r7_val = 0xF3000000 | temp;
    temp = ((arg4 << 8) & 0xFF00);
    r7_val |= temp;
    temp = ((arg0 << 0x10) & 0x70000);
    r7_val |= temp;
    temp = ((arg3 << 0x13) & 0x380000);
    r7_val |= temp;
    temp = ((arg2 << 0x16) & 0xC00000);
    r7_val |= temp;
    // The following lines are not necessary as they overwrite previous assignments with the same value
    temp = ((arg4 << 0x14) & 0x30000);
    r7_val |= temp;
    temp = ((arg4 << 0x16) & 0xC0000);
    r7_val |= temp;
    temp = ((arg4 << 0x18) & 0x300000);
    r7_val |= temp;
    temp = ((arg4 << 0x19) & 0x3FC000);
    r7_val |= temp;
    temp = ((arg4 << 0x1A) & 0xC00000);
    r7_val |= temp;
    
    *(u32 *)0xCC008000 = r7_val;
    *(u16 *)__GXData = 0;
}

void fn_80223EA0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r8;
    s32 r7;
    s32 r6;
    
    switch (arg1) {                                 /* irregular */
    case 17:
        temp_r8 = 0;
        break;
    case 19:
        temp_r8 = 1;
        break;
    case 22:
        temp_r8 = 2;
        break;
    default:
        temp_r8 = 2;
        break;
    }

    *(u8 *)0xCC008000 = 0x61;
    r7 = (arg2 & 0xFFFFFF) | 0xF4000000;
    *(u32 *)0xCC008000 = r7;

    *(u8 *)0xCC008000 = 0x61;
    r6 = ((temp_r8 & 3) | ((arg0 << 2) & 0xC));
    r7 = (r6 & ~0xFF000000) | 0xF5000000;
    *(u32 *)0xCC008000 = r7;

    *(u16 *)__GXData = 0x0;
}

void fn_80223F2C(u32 *t, s32 min_filt, s32 mag_filt, f32 min_lod, f32 max_lod, f32 lod_bias, u8 bias_clamp, u8 do_edge_lod, s32 max_aniso) {
    extern f32 lbl_8036BD38;
    extern f32 lbl_8036BD3C;
    extern f32 lbl_8036BD40;
    extern f32 lbl_8036BD44;
    extern u8 lbl_80367048[8];
    extern f32 lbl_8036BD48;
    extern f32 lbl_8036BD4C;
    extern f32 lbl_8036BD28;

    u16 lbias_s, lmin_s, lmax_s;

    // lod_bias processing with clamping
    if (lod_bias < lbl_8036BD38) {
        lod_bias = lbl_8036BD38;
    } else if (lod_bias > lbl_8036BD40) {
        lod_bias = lbl_8036BD44;
    }
    lbias_s = (u16)(lbl_8036BD40 * lod_bias);
    
    // Set bias value in the low bits of t[0]
    t[0] = __rlwimi(t[0], lbias_s >> 3, 9, 15, 22);
    
    // Set mag filter
    t[0] = __rlwimi(t[0], (mag_filt == 1) ? 1 : 0, 4, 27, 27);
    
    // Set min filter  
    t[0] = __rlwimi(t[0], lbl_80367048[min_filt], 5, 24, 26);
    
    // Set edge LOD bit
    t[0] = __rlwimi(t[0], do_edge_lod ? 0 : 1, 8, 23, 23);
    
    // Clear some bits (set to 0)
    t[0] = __rlwimi(t[0], 0, 17, 14, 14);
    t[0] = __rlwimi(t[0], 0, 18, 13, 13);
    
    // Set max aniso
    t[0] = __rlwimi(t[0], max_aniso, 19, 11, 12);
    
    // Set bias clamp bit
    t[0] = __rlwimi(t[0], bias_clamp, 21, 10, 10);

    // Process min LOD - clamping and conversion
    if (min_lod < lbl_8036BD48) {
        min_lod = lbl_8036BD48;
    } else if (min_lod > lbl_8036BD4C) {
        min_lod = lbl_8036BD4C;
    }
    lmin_s = (u16)(lbl_8036BD28 * min_lod);
    
    // Process max LOD - clamping and conversion
    if (max_lod < lbl_8036BD48) {
        max_lod = lbl_8036BD48;
    } else if (max_lod > lbl_8036BD4C) {
        max_lod = lbl_8036BD4C;
    }
    lmax_s = (u16)(lbl_8036BD28 * max_lod);
    
    // Set min and max LODs in t[1]
    t[1] = __rlwimi(t[1], lmin_s >> 3, 0, 24, 31);
    t[1] = __rlwimi(t[1], lmax_s >> 3, 8, 16, 23);
}

void fn_802240C8(u8 arg0) {
    u32 temp = (u32)arg0;
    __GXData[0x81] = (__GXData[0x81] & ~0x3C00) | (((temp - 1) << 0xA) & 0x3C00);
    __GXData[0x16B] = __GXData[0x16B] | 4;
}

void fn_80224304(s16 *arg0, u16 arg1, void *arg2) {
    extern f32 lbl_8036BD58;
    extern f32 lbl_8036BD5C;
    extern f32 lbl_8036BD70;
    extern f64 lbl_8036BD78;
    extern f64 lbl_8036BD90;
    extern f32 lbl_8036BD98;
    extern f64 lbl_8036BDA0;
    extern f32 lbl_8036BDA8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f23;
    f32 temp_f25;
    f32 temp_f28;
    f32 temp_f29;
    f32 var_f0;
    f32 var_f24;
    f32 var_f2;
    f64 temp_f30;
    f64 temp_f31;
    s16 *var_r30;
    u32 var_r29;

    if (lbl_8036BD90 == *(f32*) ((u8*)arg2 + 0x3C)) {
        temp_f1 = *(f32*) ((u8*)arg2 + 0x2C) / (*(f32*) ((u8*)arg2 + 0x28) - lbl_8036BD5C);
        var_f24 = temp_f1 / *(f32*) ((u8*)arg2 + 0x0);
        var_f0 = temp_f1;
    } else {
        temp_f1 = lbl_8036BD5C / *(f32*) ((u8*)arg2 + 0x0);
        var_f24 = temp_f1;
        var_f0 = lbl_8036BD98 * temp_f1;
    }
    temp_f28 = lbl_8036BD5C;
    var_r30 = arg0;
    temp_f29 = lbl_8036BD58;
    var_r29 = 0U;
    temp_f30 = lbl_8036BD78;
    temp_f31 = lbl_8036BDA0;
    temp_f23 = lbl_8036BDA8;
    temp_f25 = lbl_8036BD70 / (f32) arg1;
    do {
        temp_f0 = (f32) ((var_r29 + 1) << 5) * temp_f25 * var_f24;
        var_f2 = temp_f28 + ((temp_f0 * temp_f0) / (var_f0 * var_f0));
        if (var_f2 > temp_f29) {
            f32 sp14;
            f64 temp_f1_3;
            f64 temp_f1_4;
            f64 temp_f1_5;
            
            temp_f1_3 = __frsqrte(var_f2);
            temp_f1_4 = temp_f30 * temp_f1_3 * (temp_f31 - ((f64) var_f2 * (temp_f1_3 * temp_f1_3)));
            temp_f1_5 = temp_f30 * temp_f1_4 * (temp_f31 - ((f64) var_f2 * (temp_f1_4 * temp_f1_4)));
            sp14 = (f32) ((f64) var_f2 * (temp_f30 * temp_f1_5 * (temp_f31 - ((f64) var_f2 * (temp_f1_5 * temp_f1_5)))));
            var_f2 = sp14;
        }
        var_r29 += 1;
        *var_r30 = (s16) fn_8022C568(temp_f23 * var_f2);
        var_r30 += 2;
    } while (var_r29 < 0xAU);
}

void fn_802245D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(u8 *)0xCC008000 = 0x61;
    *(u16*)((char*)__GXData + 0x1d0) = *(u16*)((char*)__GXData + 0x1d0) & ~0x800 | ((0x1F - CLZ(3 - arg0)) & 1) << 6 | (arg0 & 1) & 1 | ((0x1F - CLZ(2 - arg0)) << 4) & 2 | (arg3 << 0xC) & 0xF000 | (arg1 << 8) & 0x700 | (arg2 << 5) & 0xE0;
    *(u16*)((char*)__GXData + 0x2) = 0;
}

void fn_8022462C(s32 arg0) {
    u16 *reg_ptr;
    
    reg_ptr = (u16*)((char*)__GXData + 0x1D0);
    *reg_ptr = (*reg_ptr & ~0x8) | ((arg0 << 3) & 0x8);
    *(u8*)0xCC008000 = 0x61;
    *(u8*)0xCC008000 = *reg_ptr & 0xFF;
    *(u16*)((char*)__GXData + 0x2) = 0;
}

void fn_80224658(s32 arg0) {
    u16 temp_r6;
    
    temp_r6 = (__GXData[0x1D0/2] & ~0x10) | ((arg0 << 4) & 0x10);
    *(u8 *)0xCC008000 = 0x61;
    *(u8 *)0xCC008000 = (u8)temp_r6;
    __GXData[0x1D0/2] = temp_r6;
    __GXData[1] = 0;
}

void fn_80224684(s32 arg0, s32 arg1, s32 arg2) {
    u16 *temp_r6;
    u16 temp_r7;

    temp_r6 = (u16*)__GXData;
    *(u8*)0xCC008000 = 0x61;
    temp_r7 = ((((*temp_r6 & ~1) | (arg0 & 1)) & ~0xE) | ((arg1 << 1) & 0xE)) | ((arg2 << 4) & 0x10);
    *(u8*)0xCC008000 = temp_r7;
    *temp_r6 = temp_r7;
    *(u16*)(temp_r6 + 1) = 0;
}

void fn_802246B8(u8 arg0) {
    u16 *temp_r6;
    u16 temp_r5;
    u16 temp_r4;

    temp_r6 = (u16*)__GXData;
    temp_r5 = *(temp_r6 + 0x1DC/sizeof(u16));
    temp_r4 = arg0;
    temp_r5 = (temp_r5 & ~0x40) | ((temp_r4 << 6) & 0x40);
    *(temp_r6 + 0x1DC/sizeof(u16)) = temp_r5;
    *(u8*)0xCC008000 = 0x61;
    *(u16*)0xCC008000 = temp_r5;
    *(u16*)(temp_r6 + 1) = 0;
}

void fn_802247C0(s32 arg0) {
    u16 temp_r6;
    
    temp_r6 = (__GXData[0x1D0/2] & ~0x4) | ((arg0 << 2) & 0x4);
    *(u8*)0xCC008000 = 0x61;
    *(u16*)0xCC008000 = temp_r6;
    __GXData[0x1D0/2] = temp_r6;
    __GXData[0x2/2] = 0;
}

void fn_80224828(s32 arg0, u8 arg1) {
    u32 temp_r5;
    
    temp_r5 = (u32)arg1 & 0x1;
    temp_r5 |= ((u32)arg0 << 1) & 0x2;
    temp_r5 |= 0x44000000;
    *(u8*)0xCC008000 = 0x61;
    *(u32*)(0xCC008000) = temp_r5;
    *(u16*)(__GXData + 1) = 0;
}

void fn_80224860(u8 arg0, u8 arg1) {
    u32 temp_r4;
    u16* gxData = __GXData;
    
    temp_r4 = (gxData[0x1F] & ~0x400000) | ((arg1 << 0x16) & 0x400000);
    gxData[0x1F] = temp_r4;
    *(volatile u8*)0xCC008000 = 0x61;
    *(volatile u8*)0xCC008000 = (u8)temp_r4;
    __GXFlushTextureState();
    *(volatile u8*)0xCC008000 = 0x61;
    *(volatile u8*)0xCC008000 = ((arg0 | 0x6800) & 0xFF); // Only low byte matters in final operation
    __GXFlushTextureState();
}

void fn_80224A68(s32 arg0, s32 arg1) {
    void *temp_r5;
    u32 temp_r0;

    temp_r5 = __GXData;
    temp_r0 = *(u32*)((char*)temp_r5 + 0x5ac);
    if (temp_r0 != 0) {
        fn_80220D6C();
    }
    
    temp_r5 = __GXData;
    temp_r0 = *(u32*)((char*)temp_r5 + 0x0);
    if (temp_r0 == 0) {
        fn_80220EBC();
    }
    
    *(u8*)0xCC008000 = 0x40;
    *(s32*)0xCC008010 = arg0;
    *(s32*)0xCC008014 = arg1;
}

void fn_80224AD8(f32 x, f32 y, f32 z, f32 mtx[3][4], f32 *pm, f32 *vp, f32 *sx, f32 *sy, f32 *sz) {
    f32 peye_x;
    f32 peye_y;
    f32 peye_z;
    f32 xc;
    f32 yc;
    f32 zc;
    f32 wc;

    peye_x = mtx[0][3] + ((mtx[0][2] * z) + ((mtx[0][0] * x) + (mtx[0][1] * y)));
    peye_y = mtx[1][3] + ((mtx[1][2] * z) + ((mtx[1][0] * x) + (mtx[1][1] * y)));
    peye_z = mtx[2][3] + ((mtx[2][2] * z) + ((mtx[2][0] * x) + (mtx[2][1] * y)));
    if (pm[0] == 0.0f) {
        xc = (peye_x * pm[1]) + (peye_z * pm[2]);
        yc = (peye_y * pm[3]) + (peye_z * pm[4]);
        zc = pm[6] + (peye_z * pm[5]);
        wc = 1.0f / -peye_z;
    } else {
        xc = pm[2] + (peye_x * pm[1]);
        yc = pm[4] + (peye_y * pm[3]);
        zc = pm[6] + (peye_z * pm[5]);
        wc = 1.0f;
    }
    *sx = (vp[2] / 2.0f) + (vp[0] + (wc * (xc * vp[2] / 2.0f)));
    *sy = (vp[3] / 2.0f) + (vp[1] + (wc * (-yc * vp[3] / 2.0f)));
    *sz = vp[5] + (wc * (zc * (vp[5] - vp[4])));
}

void fn_80224C4C(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg2 != 0) {
        arg0 = arg0 + arg1 - arg2;
    }
}

void fn_80224DCC(void *arg0, s32 arg1) {
    u32 temp_r5 = (arg1 * 3) + 0x400;
    
    *(u8 *)0xCC008000 = 0x10;
    *(u32 *)0xCC008000 = (temp_r5 | 0x80000);
}

void fn_80224E1C(void *arg0, s32 arg1) {
    *(s32*)((u8*)arg0 + 0x50) = arg1;
    *(s32*)((u8*)arg0 + 0x54) = arg1;
}

f32 fn_80224E50(u32 arg1, s32 arg2) {
    s32 var_r4;
    s32 var_r7;

    if (arg1 >= 0x40U) {
        var_r7 = ((arg1 - 0x40) * 4) + 0x500;
    } else {
        var_r7 = arg1 * 4;
    }
    if (arg2 == 1) {
        var_r4 = 8;
    } else {
        var_r4 = 0xC;
    }
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = (s32) (var_r7 | ((var_r4 - 1) << 0x10));
    if (arg2 == 0) {
        return M2C_ERROR(/* psq_l unimplemented */);
    }
    return M2C_ERROR(/* psq_l unimplemented */);
}

void fn_80224F94(u32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    f32 var_f2;

    var_f2 = farg1;
    if (arg0 == 0U) {
        var_f2 -= lbl_8036BDC0;
    }
    *(f32*)((char*)__GXData + 0x4F4) = farg0;
    *(f32*)((char*)__GXData + 0x4F8) = var_f2;
    *(f32*)((char*)__GXData + 0x4FC) = farg2;
    *(f32*)((char*)__GXData + 0x500) = farg3;
    *(f32*)((char*)__GXData + 0x504) = farg4;
    *(f32*)((char*)__GXData + 0x508) = farg5;
    fn_80224F04(__GXData);
    *(u16*)((char*)__GXData + 0x2) = 1;
}

void fn_80224FEC(f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    *(f32*)((char*)__GXData + 0x4F4) = farg0;
    *(f32*)((char*)__GXData + 0x4F8) = farg1;
    *(f32*)((char*)__GXData + 0x4FC) = farg2;
    *(f32*)((char*)__GXData + 0x500) = farg3;
    *(f32*)((char*)__GXData + 0x504) = farg4;
    *(f32*)((char*)__GXData + 0x508) = farg5;
    fn_80224F04(__GXData);
    *(u16*)((char*)__GXData + 0x2) = 1;
}

void fn_80225034(u32 arg0, u32 *dst) {
    u32 *src = (u32*)((u8*)__GXData + 0x4f4); // offset from the assembly

    dst[0] = src[arg0 + 0];
    dst[1] = src[arg0 + 1];
    dst[2] = src[arg0 + 2];
}

void fn_80225058(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r4;
    u32 temp_r6;
    u32 temp_r7;
    
    temp_r6 = (s32)(arg1 + 0x156);
    temp_r4 = (s32)(arg0 + 0x156);
    *(u32*)((char*)__GXData + 0xF8) = (s32)((*(u32*)((char*)__GXData + 0xF8) & ~0x7FF) | (temp_r6 & 0x7FF));
    *(u32*)((char*)__GXData + 0xF8) = (s32)((*(u32*)((char*)__GXData + 0xF8) & ~0x7FF000) | ((temp_r4 << 0xC) & 0x7FF000));
    *(u32*)((char*)__GXData + 0xFC) = (s32)((*(u32*)((char*)__GXData + 0xFC) & ~0x7FF) | ((temp_r6 + (arg3 - 1)) & 0x7FF));
    *(u32*)((char*)__GXData + 0xFC) = (s32)((*(u32*)((char*)__GXData + 0xFC) & ~0x7FF000) | (((temp_r4 + (arg2 - 1)) << 0xC) & 0x7FF000));
    *(char*)0xCC008000 = 0x61;
    *(char*)0xCC008000 = *(u32*)((char*)__GXData + 0xF8);
    *(char*)0xCC008000 = 0x61;
    *(char*)0xCC008000 = *(u32*)((char*)__GXData + 0xFC);
    *(u16*)((char*)__GXData + 0x2) = 0;
}

void fn_802250D0(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    u32 temp_r7;
    u32 temp_r8;
    u32 temp_r9;

    temp_r7 = *(u32*)((char*)__GXData + 0xF8);
    temp_r8 = *(u32*)((char*)__GXData + 0xFC);
    temp_r9 = (temp_r7 >> 0xC) & 0x7FF;
    *arg0 = temp_r9 - 0x156;
    *arg1 = temp_r7 & 0x7FF;
    *arg2 = (((temp_r8 >> 0xC) & 0x7FF) - temp_r9) + 1;
    *arg3 = (temp_r8 & 0x7FF) - (temp_r7 & 0x7FF) + 1;
}

void fn_80225118(void)
{
    u16* ptr = &__GXData[0x4E];
    *ptr = 0;
    ptr++;
    *ptr = 0;
}

void fn_80225158(void)
{
    u16 *temp_r4 = __GXData;
    temp_r4[0x40] = 0x1005;
    temp_r4[0x41] = 1;
}

void fn_80225180(s32 arg0) {
    s32 temp_r4;
    s32 temp_r4_2;

    if (arg0 < 5) {
        *(u8*)0xCC008000 = 8;
        *(u8*)0xCC008000 = 0x30;
        temp_r4 = *(u32*)((char*)__GXData + 0x80);
        *(u8*)0xCC008000 = temp_r4;
        *(u8*)0xCC008000 = 0x10;
        *(u8*)0xCC008000 = 0x1018;
        *(u8*)0xCC008000 = temp_r4;
    } else {
        *(u8*)0xCC008000 = 8;
        *(u8*)0xCC008000 = 0x40;
        temp_r4_2 = *(u32*)((char*)__GXData + 0x84);
        *(u8*)0xCC008000 = temp_r4_2;
        *(u8*)0xCC008000 = 0x10;
        *(u8*)0xCC008000 = 0x1019;
        *(u8*)0xCC008000 = temp_r4_2;
    }
    *(u16*)((char*)__GXData + 0x2) = 1;
}

void fn_80225A4C(u32 *cnt0, u32 *cnt1) {
    u32 ctr0;
    u32 ctr1;
    u32 ctr2;
    u32 ctr3;

    ctr0 = __GXReadCPCounterU32(0x20, 0x21);
    ctr1 = __GXReadCPCounterU32(0x22, 0x23);
    ctr2 = __GXReadCPCounterU32(0x24, 0x25);
    ctr3 = __GXReadCPCounterU32(0x26, 0x27);

    switch (M2C_FIELD(__GXData, s32 *, 0x59C)) {
    case 10:
        *cnt0 = ctr1 * 1000 / ctr0;
        break;
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
    case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
    case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30:
    case 31: case 32: case 33: case 34:
        *cnt0 = ctr0;
        break;
    case 35:
        *cnt0 = 0;
        break;
    default:
        *cnt0 = 0;
        break;
    }

    switch (M2C_FIELD(__GXData, s32 *, 0x5A0)) {
    case 0:
        *cnt1 = ctr3 * 4;
        break;
    case 4:
        *cnt1 = ctr2 + ctr3 * 2;
        break;
    case 5:
        *cnt1 = ctr2 * 3 + ctr3 * 4;
        break;
    case 6:
        *cnt1 = ctr2 * 5 + ctr3 * 6;
        break;
    case 7:
        *cnt1 = ctr2 * 7 + ctr3 * 8;
        break;
    case 1: case 2: case 3:
    case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16:
    case 21:
        *cnt1 = ctr3;
        break;
    case 17: case 18: case 19: case 20:
        *cnt1 = ctr2;
        break;
    case 22:
        *cnt1 = 0;
        break;
    default:
        *cnt1 = 0;
        break;
    }
}

void fn_80225BF4(void) {
    extern u16 *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

void fn_80225C04(u32 *top_pixels_in, u32 *top_pixels_out, u32 *bot_pixels_in, u32 *bot_pixels_out, u32 *clear_pixels_in, u32 *copy_clks) {
    *top_pixels_in = __GXReadPECounterU32(0xC, 0xD) * 4;
    *top_pixels_out = __GXReadPECounterU32(0xE, 0xF) * 4;
    *bot_pixels_in = __GXReadPECounterU32(0x10, 0x11) * 4;
    *bot_pixels_out = __GXReadPECounterU32(0x12, 0x13) * 4;
    *clear_pixels_in = __GXReadPECounterU32(0x14, 0x15) * 4;
    *copy_clks = __GXReadPECounterU32(0x16, 0x17);
}

void fn_80225D3C(void) {
    extern u16 *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 2) = 0x4;
}

void fn_80225D6C(u16 *arg0, u16 *arg1, u16 *arg2, u16 *arg3) {
    u16 temp_r5;
    u16 temp_r6;
    u16 temp_r7;
    u16 temp_r8;

    do {
        temp_r8 = __cpReg[0x21];
    } while (temp_r8 != __cpReg[0x21]);
    *arg2 = (temp_r8 << 0x10) | __cpReg[0x20];

    do {
        temp_r7 = __cpReg[0x23];
    } while (temp_r7 != __cpReg[0x23]);
    *arg3 = (temp_r7 << 0x10) | __cpReg[0x22];

    do {
        temp_r6 = __cpReg[0x25];
    } while (temp_r6 != __cpReg[0x25]);
    *arg0 = (temp_r6 << 0x10) | __cpReg[0x24];

    do {
        temp_r5 = __cpReg[0x27];
    } while (temp_r5 != __cpReg[0x27]);
    *arg1 = (temp_r5 << 0x10) | __cpReg[0x26];
}
