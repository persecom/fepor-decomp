/* Functions from 0x801F196C to 0x801FC620, found by decomp-toolkit. */
#include "common.h"
extern void* fn_800C08AC(void *, s32, void *);
extern void* lbl_8029A8C8[];

extern void* lbl_80367240;
extern u16 lbl_80280B58[18];

void fn_801F196C(M2C_UNK **arg0) {
    extern u16 lbl_8028459C[];
    extern u16 lbl_80286610[];
    extern u16 lbl_802862E4[];
    extern u16 lbl_8029A874[];
    *arg0 = (M2C_UNK *)&lbl_8028459C;
    *arg0 = (M2C_UNK *)&lbl_80286610;
    *arg0 = (M2C_UNK *)&lbl_802862E4;
    *arg0 = (M2C_UNK *)&lbl_8029A874;
}

void fn_801F1DC4(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0x30);
    *temp_r3 &= 0xFFFFFFFE;
}

void fn_801F1DD8(s32 arg0) {
    u8 fn_800A5C88(s32, void *);
    extern void *lbl_80367240;
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    temp_r31 = temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3);
    if ((fn_800A5C88(temp_r3, lbl_80367240) == 0) || (temp_r31 & 0x1000)) {
        fn_8000C188(arg0);
    }
}

void fn_801F1E78(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0x30);
    *temp_r3 |= 1;
}

void fn_801F1E8C(void *arg0) {
    M2C_UNK fn_8006EDA0(s32);
    M2C_UNK fn_800C4588(s32);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    fn_8006EDA0(temp_r31 + 0x4C);
    fn_800C4588(temp_r31);
}

void fn_801F31D0(void *arg0) {
    s32 fn_8005C6A0(s32);
    if (fn_8005C6A0(M2C_FIELD(arg0, s32 *, 0x30) + 0xB4) & 0x2000) {
        fn_8000C188(arg0);
    }
}

void fn_801F5308(void* arg0) {
    s32 temp_r3;
    void* temp_r4;

    temp_r3 = *(s32*)((u8*)lbl_80367240 + 4);
    if (temp_r3 & (*(s32*)((u8*)lbl_80367240 + 8) ^ temp_r3) & 0x100) {
        u16* ptr = (u16*)((u8*)&lbl_80280B58 + 0x5A);
        fn_801475FC(ptr, 0x64);
        temp_r4 = *(void**)((u8*)arg0 + 0x50);
        *(u16*)((u8*)temp_r4 + 0x2) = 0xC8;
        fn_8000C188(arg0, temp_r4);
    }
}

void fn_801F5374(void* arg0) {
    s32 temp_r3;
    void* temp_r4;

    temp_r3 = *(s32*)((u8*)lbl_80367240 + 4);
    if (temp_r3 & (*(s32*)((u8*)lbl_80367240 + 8) ^ temp_r3) & 0x100) {
        u16* ptr = (u16*)((u8*)&lbl_80280B58 + 0x5A);
        fn_801475FC(ptr, 0x64);
        temp_r4 = *(void**)((u8*)arg0 + 0x50);
        *(u16*)((u8*)temp_r4 + 0x2) = 0xC8;
        fn_8000C188(arg0, temp_r4);
    }
}

void fn_801F5518(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 1);
}

void fn_801F5BAC(void) {

}

void fn_801F5C88(void *arg0) {
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    M2C_UNK fn_801DCD3C(s32);
    M2C_UNK fn_801DDAC8(s32);
    extern f32 lbl_8036B8E8;
    extern f32 lbl_8036B8EC;
    extern f32 lbl_8036B908;
    fn_8000A258();
    fn_80009D74(lbl_8036B8E8, lbl_8036B8E8, lbl_8036B908, lbl_8036B8EC);
    fn_8000A248();
    fn_801DDAC8(M2C_FIELD(arg0, s32 *, 0x50));
    fn_801DCD3C(M2C_FIELD(arg0, s32 *, 0x50));
}

void fn_801F5D08(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x4C) = 4;
}

void fn_801F5F58(void *arg0) {
    M2C_UNK fn_8000C070(M2C_UNK);
    extern void *lbl_803683F0;
    u32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, u32 *, 0x40);
    if (((u32) (temp_r6 >> 0x18U) == (u32) (s8) M2C_FIELD(lbl_803683F0, u8 *, 0)) && ((u8) (temp_r6 >> 0x10U) == (u32) (s8) M2C_FIELD(lbl_803683F0, u8 *, 1)) && ((u8) (temp_r6 >> 8U) == (u32) (s8) M2C_FIELD(lbl_803683F0, u8 *, 2)) && ((u8) temp_r6 == (u32) (s8) M2C_FIELD(lbl_803683F0, u8 *, 3))) {
        M2C_FIELD(arg0, u32 *, 0x40) = -1U;
        return;
    }
    fn_8000C070(2);
}

void fn_801F6164(s32 arg1) {
    extern void *lbl_803683F4;
    M2C_FIELD(lbl_803683F4, s32 *, 0x3C) = arg1;
}

void fn_801F64C8(void) {
    extern s32 lbl_80280CF0;
    fn_80109020(&lbl_80280CF0 + 0x20);
}

void fn_801F6594(void) {
    M2C_UNK fn_80108FA8(void *);
    M2C_UNK fn_801480D8(M2C_UNK);
    extern M2C_UNK lbl_80280CF0;
    fn_80108FA8(&lbl_80280CF0 + 0x20);
    fn_801480D8(0x1388);
}

void fn_801F726C(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    fn_8006EDA0(temp_r31);
    fn_800C4588(temp_r31);
}

s32 fn_801F87C4(void) {
    extern u8 lbl_80330708[];
    u8 val = lbl_80330708[0x10];
    return (0x20 - val) & 0x1F;
}

void fn_801F8850(s32 arg0) {
    extern u16 lbl_80281028[];

    fn_800C08AC((u8 *)lbl_80281028 + 0x20E, arg0, lbl_80281028);
}

void fn_801F892C(void) {
    M2C_UNK fn_8002D4B8();
    fn_8002D4B8();
}

void fn_801F894C(s32 arg0) {
    extern u16 lbl_80281028[];

    fn_800C08AC((u8 *)lbl_80281028 + 0x24D, arg0, lbl_80281028);
}

void fn_801F897C(void) {
    extern u16 lbl_80330708[];
    u8* ptr = (u8 *)lbl_80330708;
    
    fn_8014D2B0(ptr + 0x24D, 0x1F);
    fn_8002D548();
}

void fn_801F9464(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

void fn_801F9498(void *arg0) {
    M2C_UNK fn_8000C188();
    s32 temp_r0;

    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x44));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48) - 1;
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r0;
    if (temp_r0 < 0) {
        fn_8000C188();
    }
}

void fn_801F9CE0(s32 arg0) {
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) {
        fn_8000C188(arg0);
    }
}

void fn_801F9D1C(s32 arg0, s32 arg1) {
    void *fn_801F9D50(s32);
    M2C_FIELD(fn_801F9D50(arg1), s32 *, 0x48) = arg0;
}

void fn_801F9DC0(u32 arg0) {
    M2C_UNK fn_801FB1C0(s32, M2C_UNK);
    if ((arg0 != 0U) && ((arg0 + 0x30) != 0) && ((arg0 + 0x30) != 0)) {
        fn_801FB1C0(arg0 + 0x30, 0);
    }
}

void fn_801FA478(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x44));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48) - 1;
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r0;
    if (temp_r0 < 0) {
        fn_8000C188();
    }
}

void fn_801FA508(void *arg0) {
    u32 *ptr = (u32 *) ((char *) arg0 + 0x30);
    if (*ptr != 0U) {
        fn_8003F670();
    }
}

void fn_801FA874(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x40));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) - 1;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (temp_r0 < 0) {
        fn_8000C188();
    }
}

void fn_801FB548(void *arg0) {
    u32 temp_r4;
    u32 temp_r5;
    u32 var_ctr;

    temp_r4 = M2C_FIELD(arg0, u32 *, 8);
    temp_r5 = temp_r4 + (M2C_FIELD(arg0, s32 *, 4) * 8);
    var_ctr = (u32) ((temp_r5 + 7) - temp_r4) >> 3U;
    if (temp_r5 > temp_r4) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

u32 fn_801FB9CC(void *arg0, u16 arg1) {
    return (u32) (M2C_FIELD(arg0, u16 *, 0x120) - arg1) >> 0x1FU;
}

extern u16 lbl_8029B520[];
s32 fn_801FBC30(s32 arg0) {
    s32 temp = arg0 * 2;
    return lbl_8029B520[temp];
}

void fn_801FBC48(void) {
    extern u16 lbl_80368410;
    u16* ptr = (u16*)&lbl_80368410;
    if (*ptr == 0) {
        *ptr = 0;
        *(ptr + 2) = 0;
        fn_801FBC84();
    }
}

void fn_801FC400(void) {

}

void fn_801FC404(void) {

}

s32 fn_801FC42C(s32 arg0) {
    return arg0 + 4;
}

void fn_801FC434(void) {

}

void fn_801FC438(void) {

}

void fn_801FC4F8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_arg2 = (arg2 < 0 ? 0 : arg2);
    
    *(s32*)(arg0 + 0x4) = arg1;
    *(u32*)(arg0 + 0x8) = (u32)temp_arg2;
}

extern u16 lbl_80280B58[18];
