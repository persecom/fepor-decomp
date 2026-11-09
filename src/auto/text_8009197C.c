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

void fn_8009197C(void) {
    extern u32 lbl_803120A0[];
    extern s32 lbl_803674F8;
    
    while (lbl_803674F8 != 0) {
        lbl_803674F8--;
        fn_8000C188(lbl_803120A0[lbl_803674F8]);
    }
}

void fn_800919D8(void) {
    M2C_UNK fn_8000C188(s32, s32);
    extern u32 lbl_803120A0[];
    extern s32 lbl_803674F8;
    s32 temp_r4;

    if ((s32) lbl_803674F8 != 0) {
        temp_r4 = lbl_803674F8 - 1;
        lbl_803674F8 = temp_r4;
        fn_8000C188(lbl_803120A0[temp_r4], temp_r4);
    }
}

void fn_80091A1C(void *arg0) {
    u32 **temp_r30 = (u32**)((u8*)arg0 + 0x8);
    u16 temp_r0 = *(u16*)((u8*)*temp_r30 + 0x2C);
    *(void**)arg0 = *temp_r30;
    *(u8*)((u8*)arg0 + 0x9) = (u8)(temp_r0 & 0xFF);
}

void fn_80091B38(void *arg0) {
    extern f32 lbl_80369764;
    extern f32 lbl_803697A4;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_803697A4;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_80369764;
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    M2C_FIELD(arg0, s8 *, 0x55) = 8;
    M2C_FIELD(arg0, s8 *, 0x56) = 3;
}

void fn_80091B84(void *arg0) {
    u8 r3, r4;
    
    r3 = ((u8*)arg0)[0x54];
    r4 = ((u8*)arg0)[0x55];
    
    if (r3 <= r4) {
        f32 f0, f1, f2, f3, f4;
        
        // First call
        f0 = *(f32*)((u8*)arg0 + 0x3C);
        f1 = *(f32*)((u8*)arg0 + 0x48);
        f2 = (f32)r3;
        f3 = (f32)r4;
        f4 = *(f32*)0x803697B0; // lbl_803697B0
        arg0 = (void*)fn_800067BC(0U, f0, f1, f2, f3, f4);
        
        *(f32*)((u8*)arg0 + 0x30) = *(f32*)((u8*)arg0 + 0x30);
        
        // Second call
        f0 = *(f32*)((u8*)arg0 + 0x40);
        f1 = *(f32*)((u8*)arg0 + 0x4C);
        f2 = (f32)r3;
        f3 = (f32)r4;
        f4 = *(f32*)0x803697B0; // lbl_803697B0
        arg0 = (void*)fn_800067BC(0U, f0, f1, f2, f3, f4);
        
        *(f32*)((u8*)arg0 + 0x34) = *(f32*)((u8*)arg0 + 0x34);
        
        // Third call
        r4 = ((u8*)arg0)[0x54];
        f1 = *(f32*)((u8*)arg0 + 0x44);
        f2 = (f32)r4;
        f3 = *(f32*)((u8*)arg0 + 0x50);
        f4 = *(f32*)0x803697B0; // lbl_803697B0
        arg0 = (void*)fn_800067BC(0U, f1, f2, f3, f4, 0);
        
        *(f32*)((u8*)arg0 + 0x38) = *(f32*)((u8*)arg0 + 0x38);
        
        ((u8*)arg0)[0x54] = r4 + 1;
    }
    
    if (fn_800AA188() != 0) {
        f32 f0, f1, f2;
        f0 = *(f32*)((u8*)arg0 + 0x30);
        f1 = *(f32*)((u8*)arg0 + 0x34);
        f2 = *(f32*)((u8*)arg0 + 0x38);
        
        arg0 = (void*)fn_8008B2B0((s32)f0, (s32)f1, (s32)f2, ((u8*)arg0)[0x6F], (u8*)arg0 + 0x58);
        fn_80009B28();
    }
}

s8 fn_80091DE0(void* arg0, void* arg1) {
    s8 var_r31;
    u32 temp_r0;

    if ((((u32)arg1 & 5) ^ 0) != 0) {
        var_r31 = 3;
loop_2:
        temp_r0 = *(u32*)((u32)arg0 + (var_r31 * 8) + 0x1CC);
        if ((temp_r0 != 0U) && (temp_r0 == (u32)arg1)) {
            return var_r31;
        }
        var_r31 -= 1;
        if (var_r31 < 0) {
            goto block_19;
        }
        goto loop_2;
    }
    
    temp_r0 = *(u32*)((u32)arg0 + 0x204);
    if ((temp_r0 != 0U) && (temp_r0 == (u32)arg1)) {
        return 7;
    }
    
    temp_r0 = *(u32*)((u32)arg0 + 0x200);
    if ((temp_r0 != 0U) && (temp_r0 == (u32)arg1)) {
        return 6;
    }
    
    temp_r0 = *(u32*)((u32)arg0 + 0x1FC);
    if ((temp_r0 != 0U) && (temp_r0 == (u32)arg1)) {
        return 5;
    }
    
    temp_r0 = *(u32*)((u32)arg0 + 0x1F8);
    if ((temp_r0 != 0U) && (temp_r0 == (u32)arg1)) {
        return 4;
    }
    
block_19:
    return -1;
}

u8 fn_80091EF0(void *arg1) {
    u8 fn_800940B0();
    s32 temp_r6;
    s32 temp_r8;

    temp_r8 = M2C_FIELD(arg1, s32 *, 0x3C);
    temp_r6 = M2C_FIELD(arg1, s32 *, 0x38) & 0;
    if ((((temp_r8 & 5) ^ 0) | (temp_r6 ^ 0)) != 0) {
        return fn_800940B0() != 0;
    }
    if ((((temp_r8 & 0x18) ^ 0) | (temp_r6 ^ 0)) != 0) {
        return fn_800940B0();
    }
    return 0U;
}

s32 fn_80091F70(s32 arg0, s32 arg1) {
    s32 fn_800061F4();
    s32 fn_8001C914(s32, s32);
    void *fn_8001C9BC(s32);
    u8 var_r0;
    u8 var_r0_2;
    void *temp_r3;
    void *temp_r3_2;

    if (fn_800061F4() == 0x10) {
        temp_r3 = fn_8001C9BC(arg1);
        if (temp_r3 == NULL) {
            var_r0 = 0;
        } else if ((u32) M2C_FIELD(temp_r3, u32 *, 0) == 0U) {
            var_r0 = 0;
        } else {
            var_r0 = M2C_FIELD(temp_r3, u8 *, 4);
        }
        if (var_r0 == 0) {
            return 0;
        }
        return fn_8001C914(arg0, arg1);
    }
    temp_r3_2 = fn_8001C9BC(arg1);
    if (temp_r3_2 == NULL) {
        var_r0_2 = 0;
    } else if ((u32) M2C_FIELD(temp_r3_2, u32 *, 0) == 0U) {
        var_r0_2 = 0;
    } else {
        var_r0_2 = M2C_FIELD(temp_r3_2, u8 *, 5);
    }
    if (var_r0_2 == 0) {
        return 0;
    }
    return fn_8001C914(arg0, arg1);
}

void fn_8009204C(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r0;
    s32 temp_r3_3;
    s32 temp_r0_2;
    s32 temp_r3_4;
    s32 temp_r0_3;
    s32 temp_r5_4;
    s32 temp_r3_5;
    s32 temp_r0_4;
    u8 *temp_r31;
    void *temp_r30;
    void *temp_r29;
    void *temp_r28;
    
    if (arg0 == NULL) {
        return;
    }
    arg0 = *(void**)((u8*)arg0 + 0x8);
    if (arg0 == NULL) {
        return;
    }
    temp_r31 = (u8*)arg0;
    temp_r30 = arg1;
    if ((*(u16 *)((u8*)arg1 + 0x10) & 0x4000) != 0) {
        *(u32*)((u8*)temp_r31 + 0x5C) = 1;
        *(u8*)((u8*)temp_r31 + 0x9) = 1;
        if (*(u32*)((u8*)arg1 + 0x30)) {
            fn_8004B984(arg1);
        }
    }
    *(s32*)((u8*)temp_r31 + 0x58) = *(s32*)((u8*)arg1 + 0x30);
    *(f32*)((u8*)temp_r31 + 0x50) = *(f32*)((u8*)arg1 + 0x24);
    *(f32*)((u8*)temp_r31 + 0x54) = *(f32*)((u8*)arg1 + 0x28);
    temp_r3 = *(s32*)((u8*)arg1 + 0x30);
    if (temp_r3 == 0) {
        return;
    }
    temp_r5 = *(s32*)((u8*)temp_r31 + 0x5C);
    if (temp_r5 != 0) {
        fn_8004BE88(temp_r3, 1);
        *(u8*)((u8*)temp_r31 + 0x9) = *(u8*)((u8*)arg1 + 0x3C);
        *(s32*)((u8*)temp_r31 + 0xAC) = temp_r3;
        if (*(u32*)((u8*)arg1 + 0x40)) {
            fn_8007B990();
        }
        if (*(u32*)((u8*)arg1 + 0x44)) {
            fn_800616A0();
        }
    }
    fn_800C4588(temp_r31);
}

void fn_8009233C(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u32 temp_r4;
    s32 r31;
    
    r31 = arg1;
    temp_r3 = (arg0 & 0xFFFF);
    temp_r4 = ((r31 << 16) | temp_r3);
    *(u32*)(lbl_80330708 + 0x90) = temp_r4;
}

