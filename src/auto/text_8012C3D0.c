/* Functions from 0x8012C3D0 to 0x8013275C, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

f32 lbl_8036A500 = 300.0f;
f32 lbl_8036A50C = 1.0f;
f32 lbl_8036A510 = 0.0f;
f32 lbl_8036A514 = 288.0f;
f32 lbl_8036A518 = 24.0f;

s32 fn_8012C3D0(void) {
    return 0x168;
}

s32 fn_8012C3D8(void) {
    return 0x128;
}

s32 fn_8012C3E0(void) {
    return 0x16;
}

void fn_8012C3E8(void *arg0) {
    void (**func_ptr)(void) = (void (**)(void))((void**)arg0)[1] + 0x1F;
    func_ptr[0]();
}

M2C_UNK *fn_8012C414(void) {
    u8 fn_80109B0C(s32);
    M2C_UNK fn_80231D94(M2C_UNK *, void *, u8, M2C_UNK *);
    extern M2C_UNK lbl_802758F8;
    extern M2C_UNK lbl_8032FE60;
    extern s32 lbl_80367A88;

    u8 temp_r5 = fn_80109B0C(lbl_80367A88);
    void *temp_r4 = &lbl_802758F8 + 0x10A;
    M2C_UNK *temp_r3 = &lbl_8032FE60;

    fn_80231D94(temp_r3, temp_r4, temp_r5, temp_r3);
    return temp_r3;
}

void *fn_8012C460(void) {
    extern void *lbl_802758F8;
    return (u8 *)&lbl_802758F8 + 0x11B;
}

s32 fn_8012C470(void) {
    extern void *lbl_80367240;
    extern s32 lbl_80367A88;

    u8 temp_r6 = fn_80109B0C(lbl_80367A88);
    s32 temp_r4 = *(s32 *)((u8 *)lbl_80367240 + 0x10);

    if (temp_r4 & 0x01000001) {
        temp_r6 -= 1;
    }
    if (temp_r4 & 0x02000002) {
        temp_r6 += 1;
    }
    if ((s32) temp_r6 > 0xFF) {
        temp_r6 = 0xFF;
    }
    if ((s32) temp_r6 < 0) {
        temp_r6 = 0;
    }

    fn_80109B00(lbl_80367A88, temp_r6);
    return 0;
}

M2C_UNK *fn_8012C4F0(void) {
    u8 fn_80109B24(s32);
    M2C_UNK fn_80231D94(M2C_UNK *, void *, u8, M2C_UNK *);
    extern M2C_UNK lbl_802758F8;
    extern M2C_UNK lbl_8032FE60;
    extern s32 lbl_80367A88;
    
    s32 r3 = lbl_80367A88;
    u8 r5 = fn_80109B24(r3);
    void *r4 = &lbl_802758F8 + 0x13C;
    M2C_UNK *r3_ptr = &lbl_8032FE60;
    
    fn_80231D94(r3_ptr, r4, r5, r3_ptr);
    return r3_ptr;
}

void *fn_8012C53C(void) {
    extern u16 lbl_802758F8[];
    return &(lbl_802758F8[0x14D]);
}

void *fn_8012C618(void) {
    extern u16 lbl_802758F8[];
    return &lbl_802758F8[0x2ED];
}

void *fn_8012C6F0(void) {
    extern char lbl_802758F8[];
    return &lbl_802758F8[0x19B];
}

s32 fn_8012C700(void) {
    M2C_UNK fn_80109B54(s32, f32);
    f32 fn_80109BA8(s32);
    extern void *lbl_80367240;
    extern s32 lbl_80367A88;
    extern f32 lbl_8036A4AC;
    extern f32 lbl_8036A4D8;
    f32 var_f1;
    s32 temp_r4;

    var_f1 = fn_80109BA8(lbl_80367A88);
    temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 0x10);
    if (temp_r4 & 0x01000001) {
        var_f1 -= lbl_8036A4D8;
    }
    if (temp_r4 & 0x02000002) {
        var_f1 += lbl_8036A4D8;
    }
    if (var_f1 > lbl_8036A4AC) {
        var_f1 = lbl_8036A4AC;
    }
    if (var_f1 < lbl_8036A4D8) {
        var_f1 = lbl_8036A4D8;
    }
    fn_80109B54(lbl_80367A88, var_f1);
    return 0;
}

void fn_8012C788(s32 arg0) {
    extern u16 lbl_80291084[108];
    void *fn_8000CAA0(u16 *, u16 *);

    u16 *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80291084[0], &lbl_80291084[0]);
    
    *(u32 *)((u8 *)temp_r3 + 0x54) = arg0;
    *(u8 *)((u8 *)temp_r3 + 0x6C) = 2;
}

void fn_8012C7C8(s32 arg0) {
    extern u16 lbl_80291084[108];
    void *temp_r3;

    temp_r3 = (void *)fn_8000CAA0(lbl_80291084, lbl_80291084);
    *(s32 *)((u8 *)temp_r3 + 0x54) = arg0;
    *(u8 *)((u8 *)temp_r3 + 0x6C) = 1;
}

void fn_8012C964(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);  // Updated to reflect 3 arguments
    extern u16 lbl_80290FA0[114];  // 228 bytes -> 114 u16

    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80290FA0, arg0, lbl_80290FA0);
    *(u32 *)((u8 *)temp_r3 + 0x54) = 0;
    *(u8 *)((u8 *)temp_r3 + 0x6C) = 3;
}

s32 fn_8012C9E8(void *arg1) {
    s32 *field = (s32*)((u8*)arg1 + 0x1A0);
    *field ^= 0x80000000;
    return 1;
}

void fn_8012C9FC(s8 arg0) {
    extern u16 lbl_80290EB0[120];
    void *fn_8000CAA0(void *, void *);

    void *temp_r3;
    temp_r3 = fn_8000CAA0(lbl_80290EB0, lbl_80290EB0);
    *(u8*)((uintptr_t)temp_r3 + 0x60) = arg0;
    *(u32*)((uintptr_t)temp_r3 + 0x54) = 0;
    *(u8*)((uintptr_t)temp_r3 + 0x6C) = 0;
}

s32 fn_8012D554(void) {
    return 0;
}

void fn_8012DED8(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    M2C_UNK fn_80057860(s32, s16);
    s16 temp_r3;
    u32 temp_r0;
    u32 temp_r3_2;

    M2C_FIELD(arg0, s16 *, 0x6A) = (s16) (M2C_FIELD(arg0, s16 *, 0x6A) - M2C_FIELD(arg0, u8 *, 0x6F));
    fn_80057860(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s16 *, 0x6A));
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x6A);
    temp_r3_2 = (u32) temp_r3 >> 0x1FU;
    temp_r0 = (temp_r3 << 0x1B) - temp_r3_2;
    if ((((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r3_2) == 0) {
        fn_8000C188(arg0);
    }
}

void fn_8012DF40(void *arg0) {
    u8 temp_r3;
    s16 temp_r4;
    u32 temp_r5;

    M2C_FIELD(arg0, s16 *, 0x6A) = (s16) (M2C_FIELD(arg0, s16 *, 0x6A) + M2C_FIELD(arg0, u8 *, 0x6F));
    fn_80057860(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s16 *, 0x6A));
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x6A);
    temp_r5 = (u32) temp_r4 >> 0x1FU;
    temp_r3 = (u8) ((temp_r4 << 0x1B) - temp_r5);
    if ((((temp_r3 << 5) | (temp_r3 >> 0x1BU)) + temp_r5) == 0) {
        fn_8000C188(arg0);
    }
}

void fn_8012EF04(s32 arg0) {
    extern u16 lbl_80275AC0[];
    u16* ptr = &lbl_80275AC0[0x67];
    fn_8005C8B4(ptr, &lbl_80275AC0);
    if (fn_8005BA10(ptr) != 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_8012F26C(void) {
    return 0;
}

void fn_8012F5A8(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg0 = 0;
    *arg1 = 0x14;
    *arg2 = 0x30;
    *arg3 = 0x28;
}

void fn_801302C0(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1E0, 0);
}

s32 fn_80130858(void) {
    return 0;
}

void fn_80130860(void) {
    M2C_UNK fn_80225058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80225058(0, 0, 0x80, 0x1E0);
}

void fn_80130890(void) {
    fn_80225058(0, 0, 0x78, 0x1E0);
}

void fn_801308C0(void) {
    fn_80225058(0xF8, 0, 0x120, 0x1E0);
}

void fn_801308F0(void) {
    fn_80225058(0, 0x60, 0x260, 0x120);
}

void fn_80130920(void) {
    fn_80225058(0xF8, 0x60, 0x120, 0x120);
}

void fn_80130B10(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    switch (arg1) {                                 /* irregular */
    case 0:
        *arg2 = 0;
        *arg3 = 0;
        *arg4 = 0x30;
        *arg5 = 0x14;
        return;
    case 1:
        *arg2 = 0;
        *arg3 = 0x2A8;
        *arg4 = 0x30;
        *arg5 = 0x2BC;
        return;
    }
}

s32 fn_80130C54(void *arg1, s32 arg2) {
    s32 var_r3;

    var_r3 = 0;
    switch (arg2) {                                 /* irregular */
    case 0:
        return -(s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0), void **, 0x188), u16 *, 0x5A);
    case 1:
        if ((u32) M2C_FIELD(arg1, u32 *, 0xC) != 0U) {
            var_r3 = 1;
        }
        if ((u32) M2C_FIELD(arg1, u32 *, 0x10) != 0U) {
            return var_r3 + 1;
        }
        return var_r3;
    default:
        return 0;
    }
}

void fn_80130CDC(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    switch (arg1) {                                 /* irregular */
    case 0:
        *arg2 = 0;
        *arg3 = 0;
        *arg4 = 0x30;
        *arg5 = 0x14;
        return;
    case 1:
        *arg2 = 0;
        *arg3 = 0x294;
        *arg4 = 0x30;
        *arg5 = 0x2A8;
        return;
    }
}

extern u16 jumptable_802911EC[];
s32 fn_80131020(s32 arg0, s32 arg1)
{
    if (arg1 >= 8) {
        return 0;
    }
    
    switch (arg1) {
        case 0:
            return fn_80092ADC(0x0);
        case 1:
            return fn_80092ADC(0x1);
        case 2:
            return fn_80092ADC(0x2);
        case 3:
            return fn_80092ADC(0x3);
        case 4:
            return fn_80092ADC(0x4);
        case 5:
            return fn_80092ADC(0x5);
        case 6:
            return fn_80092ADC(0x6);
        case 7:
            return fn_80092ADC(0x7);
    }
    
    return 0;
}

void *fn_801310F4(s32 arg1) {
    extern u32 jumptable_80291210[];
    extern u8 lbl_80275AC0[];
    
    if (arg1 >= 8) {
        // Return default case (offset 0x247 from lbl_80275AC0)
        return &lbl_80275AC0[0x247];
    }
    
    // Jump table access
    return (void *) jumptable_80291210[arg1];
}

extern s32 fn_8010424C(void*);
s32 fn_80131464(void** arg1, s32 arg2) {
    void* temp_r3;
    s32 result; 
    
    temp_r3 = *arg1;
    
    switch (arg2) {                                 /* irregular */
    case 0:
        result = -(s32)(*(u16*)((u8*)temp_r3 + 0x188 + 0x5a));
        break;
    case 1:
        result = (*(u16*)((u8*)temp_r3 + 0x194) < 0) ? 1 : 0;
        break;
    case 2:
        result = fn_8010424C((u8*)temp_r3 + 0x1A4);
        break;
    default:
        result = 0;
        break;
    }
    
    return result;
}

void *fn_801314DC(s32 arg1) {
    extern u16 lbl_80275AC0[];
    switch (arg1) {
    case 0:
        return &lbl_80275AC0[0x314 / sizeof(u16)];
    case 1:
        return &lbl_80275AC0[0x328 / sizeof(u16)];
    default:
        return &lbl_80275AC0[0x247 / sizeof(u16)];
    }
}

void fn_80131524(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5)
{
  s32 *new_var;
  s32 *new_var2;
  switch (arg1)
  {
    case 0:
      *arg2 = 0;
      *arg3 = 0;
      *arg4 = 0x30;
      *arg5 = 0x14;
      return;

    new_var2 = arg2;
    case 1:
      new_var = new_var2;
      *new_var = 0;
      arg2 += 0;
      *arg3 = 0x1CC;
      *arg4 = (float) 0x30;
      *arg5 = 0x1E0;
      return;

    case 2:
      *arg2 = 0;
      *arg3 = 0x1E0;
      *arg4 = 0x30;
      *arg5 = 0x1F4;
      return;

  }

}

s32 fn_80131714(s32 arg0, s32 arg1)
{
    s32 r3;
    s32 r4;
    
    if (arg1 >= 6) {
        return 0;
    }
    
    switch (arg1) {
    case 0:
        r4 = *(u32*)(arg0 + 0x0);
        r3 = *(u16*)(r4 + 0x188);
        return -r3;
    case 1:
        return *(u8*)(arg0 + 0x1F);
    case 2:
        return *(u8*)(arg0 + 0x20);
    case 3:
        {
            s32 var = *(u8*)(arg0 + 0x22);
            r3 = *(u8*)(arg0 + 0x21) + (var * 100);
            return r3;
        }
    case 4:
        r3 = fn_8003A398(arg0);
        return r3;
    case 5:
        r3 = fn_8003A5B4(arg0);
        return r3;
    case 6:
        r3 = fn_8003A1E0(arg0);
        return r3;
    default:
        return 0;
    }
}

void *fn_801317B0(s32 arg1) {
    extern u8 lbl_80275AC0[];
    switch (arg1) {                                 /* irregular */
    case 1:
        return &lbl_80275AC0[0x34B];
    case 2:
        return &lbl_80275AC0[0x35F];
    case 3:
        return &lbl_80275AC0[0x376];
    case 4:
        return &lbl_80275AC0[0x38B];
    case 5:
        return &lbl_80275AC0[0x39F];
    case 6:
        return &lbl_80275AC0[0x3B4];
    default:
        return &lbl_80275AC0[0x247];
    }
}

u16 fn_80131AA8(void *arg1, s32 arg2) {
    void *temp_r3;
    u16 temp_r0;

    switch (arg2) {                                 /* irregular */
    case 0:
        temp_r3 = M2C_FIELD(M2C_FIELD(arg1, void **, 0), void **, 0x188);
        temp_r0 = M2C_FIELD(temp_r3, u16 *, 0x5A);
        return (u16) -(s32) temp_r0;
    case 1:
        temp_r3 = M2C_FIELD(arg1, void **, 8);
        if (temp_r3 == NULL) {
            return 0U;
        }
        return M2C_FIELD(temp_r3, u16 *, 0xE);
    case 2:
        return (u16) M2C_FIELD(arg1, u8 *, 0x1C);
    case 3:
        return (u16) M2C_FIELD(arg1, u8 *, 0x1D);
    case 4:
        return (u16) M2C_FIELD(arg1, u8 *, 0x1E);
    default:
        return 0U;
    }
}

void fn_80131B9C(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    switch (arg1) {                                 /* irregular */
    case 0:
        *arg2 = 0;
        *arg3 = 0;
        *arg4 = 0x30;
        *arg5 = 0x14;
        return;
    case 1:
        *arg2 = 0;
        *arg3 = 0x104;
        *arg4 = 0x30;
        *arg5 = 0x118;
        return;
    case 2:
        *arg2 = 0;
        *arg3 = 0x118;
        *arg4 = 0x30;
        *arg5 = 0x12C;
        return;
    case 3:
        *arg2 = 0;
        *arg3 = 0x12C;
        *arg4 = 0x30;
        *arg5 = 0x140;
        return;
    case 4:
        *arg2 = 0;
        *arg3 = 0x140;
        *arg4 = 0x30;
        *arg5 = 0x154;
        return;
    }
}

void fn_80131F70(void)
{
    // Implementation for fn_80131F70
    return;
}

void fn_80132018(s32 arg0)
{
    if (arg0 > 7) {
        return;
    }
}

s8 fn_8013236C(void **arg1, s32 arg2) {
    u8 fn_800386B0();
    s8 fn_8003B2D0();
    void *temp_r3;

    temp_r3 = *arg1;
    switch (arg2) {                                 /* irregular */
    case 1:
        return -(s8) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x18C), u16 *, 0x38);
    case 3:
        return (s8) fn_800386B0();
    case 5:
        return fn_8003B2D0();
    case 4:
        return (s8) M2C_FIELD(temp_r3, u8 *, 0x1A8);
    case 2:
        return (s8) M2C_FIELD(temp_r3, u8 *, 0x19A);
    case 0:
        return -(s8) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x188), u16 *, 0x5A);
    default:
        return 0;
    }
}

void *fn_80132414(s32 arg1) {
    extern u8 lbl_80275AC0[];
    s32 temp = arg1;
    switch (temp) {                                 /* irregular */
    case 1:
        return &lbl_80275AC0[0x4C4];
    case 2:
        return &lbl_80275AC0[0x4D9];
    case 3:
        return &lbl_80275AC0[0x4EB];
    case 4:
        return &lbl_80275AC0[0x4FE];
    case 5:
        return &lbl_80275AC0[0x510];
    default:
        return &lbl_80275AC0[0x247];
    }
}

void *fn_801325A8(void **arg1, s32 arg2) {
    void *fn_800A8978(s32);
    extern u16 lbl_80275AC0[29];
    void *temp_r3;
    
    temp_r3 = *arg1;
    
    switch (arg2) {
    case 0:
        return NULL;
    case 1:
        return fn_800A8978(M2C_FIELD(temp_r3, s32 *, 0x18C));
    case 2:
        if (M2C_FIELD(temp_r3, s32 *, 0x1A0) & 0x80000000) {
            return &lbl_80275AC0 + 0x523;
        }
        return &lbl_80275AC0 + 0x527;
    default:
        return NULL;
    case 3:
        return NULL;
    }
}

s32 fn_80132624(void **arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = *arg1;
    switch (arg2) {                                 /* irregular */
    case 0:
        return -(s32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x188), u16 *, 0x5A);
    case 1:
        return -(s32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x18C), u16 *, 0x38);
    case 2:
        return (M2C_FIELD(temp_r3, s32 *, 0x1A0) & 0x80000000) == 0;
    default:
        return 0;
    }
}

void *fn_80132688(s32 arg1) {
    extern u16 lbl_80275AC0[];
    switch (arg1) {
    case 1:
        return &lbl_80275AC0[0x4C4 / 2];
    case 2:
        return &lbl_80275AC0[0x52E / 2];
    default:
        return &lbl_80275AC0[0x247 / 2];
    }
}

void fn_801326D0(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5)
{
  s32 *new_var;
  switch (arg1)
  {
    case 0:
      new_var = arg2;
      *new_var = 0;
      *arg3 = 0;
      *arg4 = 0x30;
      *arg5 = 0x14;
      return;

    case 1:
      *new_var = 0;
      *arg3 = 0x14;
      *arg4 = 0x30;
      *arg5 = 0x28;
      return;

    case 2:
      *new_var = 0;
      *arg3 = 0x2BC;
      if (1)
    {
    }
      *arg4 = 0x30;
      *arg5 = 0x2D0;
      return;

  }

}

extern f32 lbl_8036A500;
extern f32 lbl_8036A50C;
extern f32 lbl_8036A510;
extern f32 lbl_8036A4F0;
extern u8 lbl_80275AC0[];
extern u32 jumptable_8029137C[];
extern u8 lbl_80275AC0[];
