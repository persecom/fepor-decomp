/* Functions from 0x80006264 to 0x80011968, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    void *unk0;
    void *unk4;
    s32 unk8;
} Struct_8000B090;

extern s32 lbl_802AEE20[5]; // array of 5 pointers
extern f64 lbl_80368C28;    // global float constant
extern u16 jumptable_80283AE8[];

s32 fn_80006264(s32 arg0, s32 arg1, u32 arg2) {
    u32 *var_r3;
    u32 *var_r4;
    u32 var_ctr;

    var_r3 = (u32 *)(arg0 - 4);
    var_r4 = (u32 *)(arg1 - 4);
    var_ctr = arg2 >> 2U;

    do {
        if (*(var_r3++) != *(var_r4++)) {
            return 1;
        }
    } while (--var_ctr != 0);

    return 0;
}

void fn_80006298(s32 arg0, s32 arg1, u32 arg2) {
    s32 *var_r3;
    u32 var_ctr;

    var_r3 = (s32*)((char*)arg0 - 4);
    var_ctr = arg2 >> 2U;
    do {
        var_r3++;
        *var_r3 = arg1;
        var_ctr--;
    } while (var_ctr != 0);
}

void fn_800062CC(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_r11;
    u32 var_ctr;
    char *var_r3;
    char *var_r4;

    var_r3 = (char*)(arg0 - 4);
    var_r4 = (char*)(arg1 - 4);
    var_ctr = arg2 >> 2U;
    do {
        temp_r11 = *(s32*)var_r4;
        var_r4 += 4;
        var_r3 += 4;
        *(s32*)var_r3 = temp_r11;
        var_ctr -= 1;
    } while (var_ctr != 0);
}

void fn_800062EC(s32 arg0, s32 arg1, u32 arg2) {
    s32 *dst = (s32*)(arg0 - 4);
    s32 *src = (s32*)(arg1 - 4);
    u32 count = arg2 >> 3U;
    
    if (count != 0) {
        do {
            *dst++ = *src++;
            *dst++ = *src++;
            count--;
        } while (count != 0);
    }
}

void fn_80006314(void) {
    M2C_UNK OSInitThreadQueue(M2C_UNK *);
    s32 fn_80209FD4();
    M2C_UNK fn_8020A558(M2C_UNK *, M2C_UNK *, M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8020A9E0(M2C_UNK *);
    extern M2C_UNK fn_80006388;
    extern M2C_UNK lbl_802A53C0;
    extern M2C_UNK lbl_802A56D8;
    extern s8 lbl_80367130;
    extern s8 lbl_80367131;
    extern s32 lbl_80367134;
    extern M2C_UNK lbl_80367138;
    lbl_80367131 = 0;
    lbl_80367130 = 0;
    OSInitThreadQueue(&lbl_80367138);
    lbl_80367134 = fn_80209FD4();
    fn_8020A558(&lbl_802A53C0, &fn_80006388, 0, &lbl_802A56D8 + 0x1000, 0x1000, 0x10, 1);
    fn_8020A9E0(&lbl_802A53C0);
}

void fn_800065B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 lbl_80367131;
    extern u8 lbl_802A51C0[];
    extern u8 lbl_80367138[];
    
    void *temp_r7;
    s32 temp_r8;
    s32 temp_r9;

    // Exactly follow target's register usage and instructions
    temp_r9 = lbl_80367131;
    temp_r8 = (s8) temp_r9 * 0x10;
    
    temp_r7 = &lbl_802A51C0[0];
    temp_r7 = (u8*)temp_r7 + temp_r8;
    
    *(s32*)temp_r7 = arg0;
    *(s32*)((char*)temp_r7 + 4) = arg1;
    *(s32*)((char*)temp_r7 + 8) = arg2;
    *(s32*)((char*)temp_r7 + 0xC) = arg3;
    
    lbl_80367131 = (temp_r9 + 1) & 0x1F;
    fn_8020AEC4(lbl_80367138, temp_r7, temp_r8, temp_r9);
}

void fn_80006608(s16 *arg0) {
    s16 x;
    s16 y;
    s16 dx;

    x = arg0[0];
    y = arg0[1];
    dx = -x;
    y = -y;
    arg0[0] = x + dx;
    arg0[1] = arg0[1] + y;
    arg0[2] = arg0[2] + dx;
    arg0[3] = arg0[3] + y;
}

s32 fn_80006650(s16 *arg0, s16 *arg1) {
    if (arg0[2] < arg1[0]) {
        return 0;
    }
    if (arg1[2] < arg0[0]) {
        return 0;
    }
    if (arg0[3] < arg1[1]) {
        return 0;
    }
    return arg1[3] >= arg0[1];
}

void fn_800066B4(s32 arg0,s32 *arg1,s32 *arg2,s32 *arg3,s32 *arg4,s32 *arg5,s32 *arg6){u32 fn_8022C7E0(u32,u32,u32);u32 n;u32 t;n=fn_8022C7E0(0,*(u32*)0x800000f8>>2,0x80000000);t=n/60;*arg4=n-t*60;n=t/60;*arg3=t-n*60;*arg2=n;}

s32 fn_80006798(void) {
    extern s32 lbl_80367120;
    extern s32 lbl_80367128;
    return (lbl_80367128 - lbl_80367120) - !M2C_CARRY;
}

s32 fn_800067B4(void) {
    extern s32 lbl_80367118;
    return lbl_80367118;
}

void fn_800067BC(s32 arg0, void *arg1) {
    s32 temp_r3;
    s32 i;
    s32 r4;

    if (arg0 < 2) {
        for (i = 0; i < 0x40; i++) {
            *(u8 *)((char *)arg1 + i) = 0;
        }
        
        temp_r3 = *(s32 *)arg1;
        if (temp_r3 == 0) {
            *(u32 *)((char *)arg1 + 0x8) = 0;
        }
        else {
            r4 = *(s32 *)((char *)arg1 + 0x4);
            *(u32 *)arg1 = temp_r3 + 1;
            *(u32 *)((char *)arg1 + 0x8) = r4;
            *(u32*)((char*)arg1 + 0xC) = *(u32*)((char*)arg1 + 0x10);
        }
    }
}

s32 fn_80006AC0(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0) != 0x10) {
        return 0;
    }
    return M2C_FIELD(arg0, u8 *, 1) + ((M2C_FIELD(arg0, u8 *, 2) << 8) & 0xFF00) + ((M2C_FIELD(arg0, u8 *, 3) << 0x10) & 0xFF0000);
}

s32 fn_80006AF4(s32 arg0) {
    s32 var_r11;
    s32 *var_r3;
    s32 var_ctr;

    var_r3 = (s32 *)arg0 - 1;
    var_r11 = 0;
    var_ctr = 0x1c;
    do {
        var_r11 += *var_r3++;
    } while (--var_ctr != 0);
    return var_r11;
}

void fn_80006E8C(void *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    f32 var_f24;
    f32 var_f25;
    f32 var_f26;
    f32 var_f27;
    f32 var_f28;
    f32 var_f29;
    f32 var_f30;
    f32 var_f31;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f0_2;
    f32 temp_f1_2;
    f32 temp_f0_3;
    f32 temp_f1_3;
    f32 temp_f0_4;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    
    var_f27 = *(f32 *)((u8 *)arg0 + 0x2C);
    temp_f2 = *(f32 *)((u8 *)arg0 + 0x1C);
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x34);
    var_f31 = *(f32 *)((u8 *)arg0 + 0x14);
    var_f29 = temp_f2 + temp_f1;
    var_f30 = (var_f31 + (var_f27 - temp_f2)) - temp_f1;
    
    if (var_f30 <= *(f32 *)((u8 *)arg0 + 0x24)) {
        goto loop_4;
    }
    
loop_1:
    temp_f0_2 = var_f30 - *(f32 *)((u8 *)arg0 + 0x24);
    var_f30 = *(f32 *)((u8 *)arg0 + 0x24);
    var_f27 -= temp_f0_2;
    
loop_4:
    temp_f0_3 = *(f32 *)((u8 *)arg0 + 0x28);
    temp_f2 = *(f32 *)((u8 *)arg0 + 0x18);
    temp_f1_3 = *(f32 *)((u8 *)arg0 + 0x30);
    var_f28 = temp_f0_3;
    var_f26 = *(f32 *)((u8 *)arg0 + 0x10);
    var_f24 = temp_f2 + temp_f1_3;
    var_f25 = (var_f26 + (temp_f0_3 - temp_f2)) - temp_f1_3;
    
    if (var_f25 <= *(f32 *)((u8 *)arg0 + 0x20)) {
        goto end;
    }
    
loop_5:
    temp_f0_4 = var_f25 - *(f32 *)((u8 *)arg0 + 0x20);
    var_f25 = *(f32 *)((u8 *)arg0 + 0x20);
    var_f28 -= temp_f0_4;
    
    fn_80220DEC(0x98, 0, 4);

    *(f32 *)0xCC008000 = var_f26;
    *(f32 *)0xCC008000 = var_f31;
    *(f32 *)0xCC008000 = *(f32 *)((u8 *)arg0 + 8);
    *(u8 *)0xCC008000 = arg1;
    *(u8 *)0xCC008000 = arg2;
    *(u8 *)0xCC008000 = arg3;
    *(u8 *)0xCC008000 = arg4;
    *(f32 *)0xCC008000 = var_f24;
    *(f32 *)0xCC008000 = var_f29;
    
    *(f32 *)0xCC008000 = var_f25;
    *(f32 *)0xCC008000 = var_f31;
    *(f32 *)0xCC008000 = *(f32 *)((u8 *)arg0 + 8);
    *(u8 *)0xCC008000 = arg1;
    *(u8 *)0xCC008000 = arg2;
    *(u8 *)0xCC008000 = arg3;
    *(u8 *)0xCC008000 = arg4;
    *(f32 *)0xCC008000 = var_f28;
    *(f32 *)0xCC008000 = var_f29;

    *(f32 *)0xCC008000 = var_f26;
    *(f32 *)0xCC008000 = var_f30;
    *(f32 *)0xCC008000 = *(f32 *)((u8 *)arg0 + 8);
    *(u8 *)0xCC008000 = arg1;
    *(u8 *)0xCC008000 = arg2;
    *(u8 *)0xCC008000 = arg3;
    *(u8 *)0xCC008000 = arg4;
    *(f32 *)0xCC008000 = var_f24;
    *(f32 *)0xCC008000 = var_f27;

    *(f32 *)0xCC008000 = var_f25;
    *(f32 *)0xCC008000 = var_f30;
    *(f32 *)0xCC008000 = *(f32 *)((u8 *)arg0 + 8);
    *(u8 *)0xCC008000 = arg1;
    *(u8 *)0xCC008000 = arg2;
    *(u8 *)0xCC008000 = arg3;
    *(u8 *)0xCC008000 = arg4;
    *(f32 *)0xCC008000 = var_f28;
    *(f32 *)0xCC008000 = var_f27;

end:
    if (var_f25 != *(f32 *)((u8 *)arg0 + 0x20)) {
        temp_f1_4 = *(f32 *)((u8 *)arg0 + 0x18);
        var_f26 = var_f25;
        var_f24 = temp_f1_4;
        var_f25 += *(f32 *)((u8 *)arg0 + 0x28) - temp_f1_4;
        goto loop_5;
    }
    
    if (var_f30 != *(f32 *)((u8 *)arg0 + 0x24)) {
        temp_f1_5 = *(f32 *)((u8 *)arg0 + 0x1C);
        var_f31 = var_f30;
        var_f29 = temp_f1_5;
        var_f30 += *(f32 *)((u8 *)arg0 + 0x2C) - temp_f1_5;
        goto loop_1;
    }
}

extern f64 lbl_80368C28;
s32 fn_800070C8(s32 arg0) {
    return (arg0 * 0x22) & 0xFFFF;
}

void fn_80007124(u8 *arg0,u8*a,u8*b,u8*c){u32*g=(u32*)0x80367140;u32*ctx=*(u32**)((u8*)g+0xc);u8*dst=(u8*)ctx[1];u8*s=arg0;u32 n=1,len;u8*out,*src;if(!s)s=(u8*)0x80366da4;while((s8)*s++){n++;}len=(n+3)&0xfc;if(len>0xd4)len=0xd4;out=(u8*)*(u32*)((u8*)g+8);*(u32*)((u8*)g+8)=(u32)(out+len);src=arg0;while((s8)*src){*out++=*src++;}*out=0;dst[5]+=len;dst[0x18]=dst[0xc];dst[0x19]=dst[0xd];dst[0x1a]=dst[0xe];dst[0x1b]=dst[0xf];}

void fn_80007290(s32 arg0, s32 arg1, s32 arg2) {
    u8* temp = (u8*)arg0;
    temp[0x14] = (u8)arg1;
    temp[0x15] = (u8)arg2;
}

void fn_800072B0(u8* a, u8* b, u8* c, u8* d)
{
    extern u32 *lbl_80367140;
    
    u32 r7 = *(u32*)(lbl_80367140 + 0xC);
    u8 *p = *(u8**)(r7 + 0x4);
    
    p[0xc] = a[0];
    p[0xd] = a[1];
    p[0xe] = a[2];
    p[0xf] = a[3];
    p[0x50] = b[0];
    p[0x51] = b[1];
    p[0x52] = b[2];
    p[0x53] = b[3];
    p[0x54] = c[0];
    p[0x55] = c[1];
    p[0x56] = c[2];
    p[0x57] = c[3];
    p[0x58] = d[0];
    p[0x59] = d[1];
    p[0x5a] = d[2];
    p[0x5b] = d[3];
}

void fn_800075D8(void) {
    void *temp_r3;

    temp_r3 = *(void **)(*(u32 **)((u32 *)0x80367140 + 0xC) + 0x1);
    ((f32*)temp_r3)[0x30 / 4] = ((f32*)temp_r3)[0x20 / 4];
    ((f32*)temp_r3)[0x34 / 4] = ((f32*)temp_r3)[0x14 / 4];
    ((f32*)temp_r3)[0x40 / 4] = ((f32*)temp_r3)[0x10 / 4];
    ((f32*)temp_r3)[0x44 / 4] = ((f32*)temp_r3)[0x24 / 4];
    ((f32*)temp_r3)[0x38 / 4] = ((f32*)temp_r3)[0x28 / 4];
    ((f32*)temp_r3)[0x3C / 4] = ((f32*)temp_r3)[0x1C / 4];
    ((f32*)temp_r3)[0x48 / 4] = ((f32*)temp_r3)[0x18 / 4];
    ((f32*)temp_r3)[0x4C / 4] = ((f32*)temp_r3)[0x2C / 4];
}

void fn_80007628(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3 = *(s32*)(arg0 + 0x10);
    *(u32*)(temp_r3 + 0x14) = (u32)arg1;
    *(u32*)(temp_r3 + 0x18) = (u32)arg2;
}

void fn_80007668(s32 arg0, s32 arg1) {
    u16 *ptr = (u16*)0x80367140;
    ptr[arg0] = arg1;
}

f32 fn_800076CC(void* arg0) {
    f32 val = *(f32*)((char*)arg0 + 0x1C);
    *(f32*)((char*)arg0 + 0x2C) = val;
    return val;
}

void fn_80007884(void *arg0, u32 arg1) {
    *(void**)0x80367140 = arg0;
    *(u16*)(0x80367140 + 0x28) = (u16)arg1;
}

void fn_80008B94(void){extern void fn_80201FC4(void*,void*);u8 *p=*(u8**)0x80367140;*(u32*)(p+8)=*(u32*)p+0xac;*(u32*)(p+0xc)=0;*(u16*)(p+0x92)=0;*(u16*)(p+0x90)=0;fn_80201FC4(p+0x60,p);*(u32*)(p+0x2c)=0;*(u32*)(p+0x30)=0;p[0x23]=255;p[0x24]=128;*(u16*)(p+0x20)=0;p[0xa8]=0;}

void fn_80008C24(void *arg0, void *arg1, u8 *arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    s32 fn_80011010(s32);
    void *fn_80005C40();
    void *fn_801047DC(u8 *);
    u8 *fn_801049E0(u8 *, s32 *, s32 *, s32 *, s32 *, s32 *, u8, u8, f32);
    void fn_802025C0(void *, u16, f32, f32, f32);
    void fn_80220DEC(u32, u32, u32);
    void fn_80222644(void *, s32, u16, u16, u16, u32, u32, u32);
    void fn_80222C50(void *, u32);
    void fn_80224E50(void *, u16, u32);
    extern f32 lbl_80368B94;
    extern f32 lbl_80368BB8;
    s32 sp7C;
    s32 sp78;
    u32 sp3C;
    u32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f19;
    s32 temp_r28;
    u16 temp_r5;
    u8 *var_r27;
    u8 temp_r0;
    u8 temp_r10;
    u8 temp_r3_3;
    u8 temp_r4;
    u8 temp_r5_2;
    u8 temp_r6;
    u8 temp_r7;
    u8 temp_r8;
    u8 temp_r9;
    u8 temp_r9_2;
    void *temp_r3;
    void *temp_r3_2;

    var_f19 = farg0;
    var_r27 = arg2;
    temp_r28 = fn_80011010(-1);
    temp_r3 = fn_80005C40();
    temp_r5 = *(u16 *)((char *)temp_r3 + 0x1E);
    fn_802025C0(&sp3C, temp_r5, lbl_80368B94 / (f32) temp_r5, lbl_80368B94 / (f32) *(u16 *)((char *)temp_r3 + 0x20), lbl_80368B94);
    fn_80224E50(&sp3C, 0x1E, 1);
    temp_f18 = lbl_80368BB8;
loop_2:
    if ((s8) *var_r27 != 0) {
        temp_r3_2 = fn_801047DC(var_r27);
        temp_r10 = *(u8 *)((char *)temp_r3_2 + 8);
        temp_r9 = *(u8 *)((char *)temp_r3_2 + 9);
        temp_f24 = ((f32) (s8) *(u8 *)((char *)temp_r3_2 + 0xA) * farg3) + var_f19;
        sp7C = (s32) temp_r10;
        temp_f1 = (f32) (s8) *(u8 *)((char *)temp_r3_2 + 0xB);
        sp78 = 0x43300000;
        temp_f23 = -((temp_f1 * farg3) - (((f32) *(u16 *)((char *)temp_r3 + 8) * farg3) + farg1));
        temp_f26 = (f32) temp_r10;
        temp_f25 = (f32) temp_r9;
        var_r27 = fn_801049E0(var_r27, &sp18, &sp14, &sp10, &spC, &sp8, temp_r9, temp_r10, temp_f1);
        temp_f29 = (f32) sp14;
        temp_f28 = (f32) sp10;
        temp_f27 = (f32) sp8;
        fn_80222644(&sp1C, sp18, *(u16 *)((char *)temp_r3 + 0x1E), *(u16 *)((char *)temp_r3 + 0x20), *(u16 *)((char *)temp_r3 + 0x18), 0, 0, 0);
        fn_80222C50(&sp1C, 0);
        temp_f24_2 = (farg3 * (temp_f18 * (temp_f27 - (f32) spC))) + temp_f24;
        fn_80220DEC(0x80, 0, 4);
        *(f32 *)0xCC008000 = temp_f24_2;
        temp_r6 = *(u8 *)((char *)arg0 + 0);
        *(f32 *)0xCC008000 = temp_f23;
        temp_f2 = temp_f29 + temp_f26;
        temp_r7 = *(u8 *)((char *)arg0 + 1);
        *(f32 *)0xCC008000 = farg2;
        temp_r8 = *(u8 *)((char *)arg0 + 2);
        temp_f1_2 = temp_f24_2 + (temp_f26 * farg3);
        *(f32 *)0xCC008000 = temp_r6;
        temp_f0 = temp_f23 + (temp_f25 * farg3);
        temp_r9_2 = *(u8 *)((char *)arg0 + 3);
        temp_f3 = temp_f28 + temp_f25;
        *(f32 *)0xCC008000 = temp_r7;
        temp_r0 = *(u8 *)((char *)arg1 + 0);
        var_f19 += temp_f27 * farg3;
        *(f32 *)0xCC008000 = temp_r8;
        temp_r3_3 = *(u8 *)((char *)arg1 + 1);
        *(f32 *)0xCC008000 = temp_r9_2;
        temp_r4 = *(u8 *)((char *)arg1 + 2);
        *(f32 *)0xCC008000 = temp_f29;
        temp_r5_2 = *(u8 *)((char *)arg1 + 3);
        *(f32 *)0xCC008000 = temp_f28;
        *(f32 *)0xCC008000 = temp_f1_2;
        *(f32 *)0xCC008000 = temp_f23;
        *(f32 *)0xCC008000 = farg2;
        *(f32 *)0xCC008000 = temp_r6;
        *(f32 *)0xCC008000 = temp_r7;
        *(f32 *)0xCC008000 = temp_r8;
        *(f32 *)0xCC008000 = temp_r9_2;
        *(f32 *)0xCC008000 = temp_f2;
        *(f32 *)0xCC008000 = temp_f28;
        *(f32 *)0xCC008000 = temp_f1_2;
        *(f32 *)0xCC008000 = temp_f0;
        *(f32 *)0xCC008000 = farg2;
        *(f32 *)0xCC008000 = temp_r0;
        *(f32 *)0xCC008000 = temp_r3_3;
        *(f32 *)0xCC008000 = temp_r4;
        *(f32 *)0xCC008000 = temp_r5_2;
        *(f32 *)0xCC008000 = temp_f2;
        *(f32 *)0xCC008000 = temp_f3;
        *(f32 *)0xCC008000 = temp_f24_2;
        *(f32 *)0xCC008000 = temp_f0;
        *(f32 *)0xCC008000 = farg2;
        *(f32 *)0xCC008000 = temp_r0;
        *(f32 *)0xCC008000 = temp_r3_3;
        *(f32 *)0xCC008000 = temp_r4;
        *(f32 *)0xCC008000 = temp_r5_2;
        *(f32 *)0xCC008000 = temp_f29;
        *(f32 *)0xCC008000 = temp_f3;
        goto loop_2;
    }
    fn_80011010(temp_r28);
}

#pragma use_lmw_stmw on
void fn_80009008(void *list, s32 a, s32 b) {
    void fn_80220DEC(s32, s32, s32);
    void fn_80008C24(void *, void *, void *, f32, f32, f32, f32);
    void fn_8014B388(void *, void *, f32, f32, f32);
    void fn_8000E684(s16, s16, s32, void *, void *, void *, f32, f32, f32, f32, f32);
    void fn_8000E50C(s16, s16, s32, void *, void *, void *, f32, f32, f32, f32, f32);
    void fn_8000E394(s16, s16, s32, void *, void *, void *, f32, f32, f32, f32, f32);
    void fn_80006E8C(void *, u8, u8, u8, u8);

    u8 *node;
    s32 bsave;
    u8 scale;
    u8 scale1;
    u8 cr, cg, cb, ca;
    u8 type;
    u8 c0[4], c1[4];
    u32 col;
    f32 fx, fy, fz;
    void (*vfn)(s32);

    bsave = b;
    node = list;
    scale = (u8)b;
    scale1 = (u8)a + 1;

    while (node != NULL) {
        cr = (u8)((node[0xC] * scale) >> 7);
        cg = (u8)((node[0xD] * scale) >> 7);
        cb = (u8)((node[0xE] * scale) >> 7);
        ca = (u8)((node[0xF] * scale1) >> 8);
        type = node[4];
        if (type <= 11) {
            switch (type) {
            case 1:
                fn_80220DEC(0x98, 0, 4);
                fz = *(f32 *)(node + 0x8); fy = *(f32 *)(node + 0x14); fx = *(f32 *)(node + 0x10);
                *(volatile f32 *)0xCC008000 = fx; *(volatile f32 *)0xCC008000 = fy; *(volatile f32 *)0xCC008000 = fz;
                *(volatile u8 *)0xCC008000 = cr; *(volatile u8 *)0xCC008000 = cg; *(volatile u8 *)0xCC008000 = cb; *(volatile u8 *)0xCC008000 = ca;
                *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x18); *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x1C);
                fz = *(f32 *)(node + 0x8); fy = *(f32 *)(node + 0x14); fx = *(f32 *)(node + 0x20);
                *(volatile f32 *)0xCC008000 = fx; *(volatile f32 *)0xCC008000 = fy; *(volatile f32 *)0xCC008000 = fz;
                *(volatile u8 *)0xCC008000 = cr; *(volatile u8 *)0xCC008000 = cg; *(volatile u8 *)0xCC008000 = cb; *(volatile u8 *)0xCC008000 = ca;
                *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x28); *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x1C);
                fz = *(f32 *)(node + 0x8); fy = *(f32 *)(node + 0x24); fx = *(f32 *)(node + 0x10);
                *(volatile f32 *)0xCC008000 = fx; *(volatile f32 *)0xCC008000 = fy; *(volatile f32 *)0xCC008000 = fz;
                *(volatile u8 *)0xCC008000 = cr; *(volatile u8 *)0xCC008000 = cg; *(volatile u8 *)0xCC008000 = cb; *(volatile u8 *)0xCC008000 = ca;
                *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x18); *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x2C);
                fz = *(f32 *)(node + 0x8); fy = *(f32 *)(node + 0x24); fx = *(f32 *)(node + 0x20);
                *(volatile f32 *)0xCC008000 = fx; *(volatile f32 *)0xCC008000 = fy; *(volatile f32 *)0xCC008000 = fz;
                *(volatile u8 *)0xCC008000 = cr; *(volatile u8 *)0xCC008000 = cg; *(volatile u8 *)0xCC008000 = cb; *(volatile u8 *)0xCC008000 = ca;
                *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x28); *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x2C);
                break;
            case 4:
                fn_80220DEC(0xA8, 0, 2);
                fz = *(f32 *)(node + 0x8); fy = *(f32 *)(node + 0x14); fx = *(f32 *)(node + 0x10);
                *(volatile f32 *)0xCC008000 = fx; *(volatile f32 *)0xCC008000 = fy; *(volatile f32 *)0xCC008000 = fz;
                *(volatile u8 *)0xCC008000 = cr; *(volatile u8 *)0xCC008000 = cg; *(volatile u8 *)0xCC008000 = cb; *(volatile u8 *)0xCC008000 = ca;
                *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x18); *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x1C);
                fz = *(f32 *)(node + 0x8); fy = *(f32 *)(node + 0x24); fx = *(f32 *)(node + 0x20);
                *(volatile f32 *)0xCC008000 = fx; *(volatile f32 *)0xCC008000 = fy; *(volatile f32 *)0xCC008000 = fz;
                *(volatile u8 *)0xCC008000 = cr; *(volatile u8 *)0xCC008000 = cg; *(volatile u8 *)0xCC008000 = cb; *(volatile u8 *)0xCC008000 = ca;
                *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x28); *(volatile f32 *)0xCC008000 = *(f32 *)(node + 0x2C);
                break;
            case 5:
                col = (cr << 24) | (cg << 16) | (cb << 8) | ca;
                *(u32 *)c1 = col;
                c0[0] = (u8)((node[0x18] * scale) >> 7);
                c0[1] = (u8)((node[0x19] * scale) >> 7);
                c0[2] = (u8)((node[0x1A] * scale) >> 7);
                c0[3] = (u8)((node[0x1B] * scale1) >> 8);
                *(u32 *)c1 = col;
                fn_80008C24(c0, c1, node + 0x28, *(f32 *)(node + 0x10), *(f32 *)(node + 0x14), *(f32 *)(node + 0x8), *(f32 *)(node + 0x1C));
                break;
            case 6:
                col = (cr << 24) | (cg << 16) | (cb << 8) | ca;
                *(u32 *)c1 = col;
                c0[0] = node[0x18]; c0[1] = node[0x19]; c0[2] = node[0x1A];
                c0[3] = (u8)((node[0x1B] * scale1) >> 8);
                fn_8000E684(*(s16 *)(node + 0x24), *(s16 *)(node + 0x26), bsave, c0, c1, node + 0x28,
                    *(f32 *)(node + 0x10), *(f32 *)(node + 0x14), *(f32 *)(node + 0x8), *(f32 *)(node + 0x1C), *(f32 *)(node + 0x20));
                break;
            case 7:
                col = (cr << 24) | (cg << 16) | (cb << 8) | ca;
                *(u32 *)c1 = col;
                c0[0] = node[0x18]; c0[1] = node[0x19]; c0[2] = node[0x1A];
                c0[3] = (u8)((node[0x1B] * scale1) >> 8);
                fn_8000E50C(*(s16 *)(node + 0x24), *(s16 *)(node + 0x26), bsave, c0, c1, node + 0x28,
                    *(f32 *)(node + 0x10), *(f32 *)(node + 0x14), *(f32 *)(node + 0x8), *(f32 *)(node + 0x1C), *(f32 *)(node + 0x20));
                break;
            case 8:
                col = (cr << 24) | (cg << 16) | (cb << 8) | ca;
                *(u32 *)c1 = col;
                c0[0] = node[0x18]; c0[1] = node[0x19]; c0[2] = node[0x1A];
                c0[3] = (u8)((node[0x1B] * scale1) >> 8);
                fn_8000E394(*(s16 *)(node + 0x24), *(s16 *)(node + 0x26), bsave, c0, c1, node + 0x28,
                    *(f32 *)(node + 0x10), *(f32 *)(node + 0x14), *(f32 *)(node + 0x8), *(f32 *)(node + 0x1C), *(f32 *)(node + 0x20));
                break;
            case 9:
                fn_80006E8C(node, cr, cg, cb, ca);
                break;
            case 10:
                col = (cr << 24) | (cg << 16) | (cb << 8) | ca;
                *(u32 *)c1 = col; *(u32 *)c0 = col;
                fn_8014B388(c0, node + 0x28, *(f32 *)(node + 0x10), *(f32 *)(node + 0x14), *(f32 *)(node + 0x8));
                break;
            case 11:
                vfn = *(void (**)(s32))(node + 0x10);
                vfn(*(s32 *)(node + 0x14));
                break;
            default:
                break;
            }
        }
        node = *(u8 **)node;
    }
}

void fn_80009728(u32 arg0, void *arg1, s32 arg2, s32 arg3) {
    void fn_802025C0(void *, f32, f32, f32);
    void fn_80220428(s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_80222CF0(s32, s32);
    void fn_80222C50(void *, s32);
    u32 fn_80222A80(void *);
    u32 fn_80222A90(void *);
    s32 fn_80222AA0(void *);
    void fn_80224E50(void *, s32, s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_802239D0(s32, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    extern f32 lbl_80368B94;
    u8 sp8[0x30];
    u16 temp_r31;
    u8 var_r30;
    f32 temp_f31;
    f32 temp_f1;
    s32 temp_r3;
    s32 a;
    s32 b;

    temp_r31 = (u16)arg0;
    var_r30 = 1;
    switch (arg0 & 3) {
    case 2:
        var_r30 = 0;
        fn_80220428(0);
        fn_80223F2C(0, 0xFF, 0xFF, 4);
        break;
    case 0:
        if (temp_r31 & 0x8000) {
            fn_80222CF0(arg2, arg3);
        }
        fn_80222C50(arg1, 0);
        fn_80220428(1);
        fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
        fn_80223F2C(0, 0, 0, 4);
        break;
    case 1:
        if (temp_r31 & 0x8000) {
            fn_80222CF0(arg2, arg3);
        }
        fn_80222C50(arg1, 0);
        temp_f31 = lbl_80368B94 / (f32)(u16)fn_80222A90(arg1);
        temp_f1 = lbl_80368B94 / (f32)(u16)fn_80222A80(arg1);
        fn_802025C0(sp8, temp_f1, temp_f31, lbl_80368B94);
        fn_80224E50(sp8, 0x1E, 1);
        fn_80220428(1);
        fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
        fn_80223F2C(0, 0, 0, 4);
        break;
    case 3:
        fn_80220428(1);
        fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
        fn_80223F2C(0, 0, 0, 4);
        break;
    }

#pragma scheduling off
    switch (temp_r31 & 0xF0) {
    case 0x0:
        fn_802245D8(0, 0, 0, 0);
        a = 0;
        b = 4;
        if (var_r30 != 0) {
            b = 0;
        }
        fn_802239D0(a, b);
        break;
    case 0x10:
        fn_802245D8(1, 4, 5, 0);
        if (var_r30 != 0) {
            temp_r3 = fn_80222AA0(arg1);
            switch (temp_r3) {
            case 0:
            case 1:
                fn_80223A5C(0, 0xF, 0xF, 0xF, 0xA);
                fn_80223AE4(0, 0, 0, 0, 1, 0);
                fn_80223AA0(0, 7, 4, 5, 7);
                fn_80223B4C(0, 0, 0, 0, 1, 0);
                break;
            default:
                fn_802239D0(0, 0);
                break;
            }
        } else {
            fn_802239D0(0, 4);
        }
        break;
    case 0x20:
        fn_802245D8(1, 4, 1, 0);
        a = 0;
        b = 4;
        if (var_r30 != 0) {
            b = 0;
        }
        fn_802239D0(a, b);
        break;
    case 0x30:
        fn_802245D8(3, 4, 1, 0);
        a = 0;
        b = 4;
        if (var_r30 != 0) {
            b = 0;
        }
        fn_802239D0(a, b);
        break;
    case 0x40:
        fn_80223A5C(0, 0xF, 0xF, 0xF, 0xA);
        fn_80223AE4(0, 0, 0, 0, 1, 0);
        fn_80223AA0(0, 7, 4, 5, 7);
        fn_80223B4C(0, 0, 0, 0, 1, 0);
        break;
    }
#pragma scheduling reset
}

void fn_80009B28(void) {
    extern u16 lbl_80367140;

    *(u8 *)(*(u8 **)&lbl_80367140 + 0xa8) = 1;
    *(u8 *)(*(u8 **)&lbl_80367140 + 0x23) = 0xff;
    *(u8 *)(*(u8 **)&lbl_80367140 + 0x24) = 0x80;
    *(u32 *)(*(u8 **)&lbl_80367140 + 0x2c) = 0;
    *(u32 *)(*(u8 **)&lbl_80367140 + 0x30) = 0;
    *(u16 *)(*(u8 **)&lbl_80367140 + 0x20) &= ~0x7000;
    *(u8 *)(*(u8 **)&lbl_80367140 + 0xa8) = 2;
}

void fn_80009B80(s8 arg0) {
    extern void *lbl_80367140;
    M2C_FIELD(lbl_80367140, s8 *, 0x24) = arg0;
}

extern u16 lbl_80367140;
void fn_80009B8C(s8 arg0) {
    *(u8 *)(*(u8 **)&lbl_80367140 + 0x23) = (u8)arg0;
}

void fn_80009B98(void) {
    u16* ptr = (u16*)0x80367140;
    ptr[0x2C/2] = 0;
    ptr[0x30/2] = 0;
    ptr[0x20/2] = (u16)(ptr[0x20/2] & 0x7FF);
}

void fn_80009BC0(s32 arg0, s32 arg1) {
    u16* ptr = (u16*)lbl_80367140;
    ptr[0x16] = arg0;
    ptr[0x18] = arg1;
    ptr[0x10] = (ptr[0x10] & 0x8FFF) | 0x2000;
}

void fn_80009BF4(f32 farg0) {
    *(f32 *)(*(u8 **)&lbl_80367140 + 0x28) = farg0;
}

f32 fn_80009C00(void) {
    return *(f32 *)(*(u8 **)&lbl_80367140 + 0x28);
}

void fn_80009C0C(f32 farg0) {
    f32 *ptr = (f32 *)lbl_80367140;
    *ptr = *ptr + farg0;
}

void fn_80009D74(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (arg0 <= arg1) {
        arg0 = arg1;
    }
    
    if (arg2 <= arg3) {
        arg2 = arg3;
    }
}

f32 fn_80009E44(void* arg0) {
    if (arg0 == NULL) {
        return 0.0f;
    } else {
        return *(f32*)((char*)arg0 + 0x28);
    }
}

s32 fn_80009E64(s32 arg0, s32 arg1, u32 arg2) {
    u32* r3_ptr = (u32*)(arg0 - 4);
    u32* r4_ptr = (u32*)(arg1 - 4);
    
    while (arg2 != 0) {
        if (*r3_ptr != *r4_ptr) {
            return 0;
        }
        r3_ptr++;
        r4_ptr++;
        arg2 -= 4;
    }

    return 1;
}

void fn_80009EB0(s8 arg0) {
    *(u8*)((u8*)lbl_80367140 + 0x22) = arg0;
}

void fn_80009F90(s32 arg0, s32 arg1) {
 extern void fn_8006ECCC(s32 *, s32);
 s32 sp[8]; u32 *p=(u32*)0x80367140;
 fn_8006ECCC(&sp[0],arg0);
 p[13]=sp[0];p[14]=sp[1];p[15]=sp[2];p[16]=sp[3];p[17]=sp[4];p[18]=sp[5];p[19]=sp[6];p[20]=sp[7];
 *((u8*)p+0x22)=255;
 *(u16*)((u8*)p+0x20)=(*(u16*)((u8*)p+0x20)&0xFFFF7B0C);
 *(u16*)((u8*)p+0x20)=(*(u16*)((u8*)p+0x20)|arg1);
}

void fn_8000A174(void *arg0,u16 arg1){void fn_80006298(void*,s32,u32);u16 var_r31;var_r31=arg1;if(arg0){M2C_FIELD(lbl_80367140,s32*,52)=M2C_FIELD(arg0,s32*,0);M2C_FIELD(lbl_80367140,s32*,56)=M2C_FIELD(arg0,s32*,4);M2C_FIELD(lbl_80367140,s32*,60)=M2C_FIELD(arg0,s32*,8);M2C_FIELD(lbl_80367140,s32*,64)=M2C_FIELD(arg0,s32*,12);M2C_FIELD(lbl_80367140,s32*,68)=M2C_FIELD(arg0,s32*,16);M2C_FIELD(lbl_80367140,s32*,72)=M2C_FIELD(arg0,s32*,20);M2C_FIELD(lbl_80367140,s32*,76)=M2C_FIELD(arg0,s32*,24);M2C_FIELD(lbl_80367140,s32*,80)=M2C_FIELD(arg0,s32*,28);}else{fn_80006298((u8*)lbl_80367140+52,0,44);if((var_r31&3)==0)var_r31=(var_r31&0xFFFC)|2;}M2C_FIELD(lbl_80367140,s8*,34)=0xFF;M2C_FIELD(lbl_80367140,u16*,32)=M2C_FIELD(lbl_80367140,u16*,32)&0xFFFF7B0C;M2C_FIELD(lbl_80367140,u16*,32)=M2C_FIELD(lbl_80367140,u16*,32)|var_r31;}

void fn_8000A248(void) {
    lbl_80367140 = 2;
}

u16 fn_8000A258(u16 arg0, u16 arg1) {
    u16 *var_r3;
    var_r3 = &lbl_80367140;
    *var_r3 = arg0;
    return arg1;
}

u8 fn_8000A268(void) {
    return *(u8 *)(*(u8 **)&lbl_80367140 + 0xA9);
}

void fn_8000A274(u8 arg0) {
    *(u8 *)(*(u8 **)&lbl_80367140 + 0xa9) = arg0;
}

void fn_8000A280(void) {

}

void fn_8000A284(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    *(f32*)((u8*)lbl_80367140 + 0x98) = arg0;
    *(f32*)((u8*)lbl_80367140 + 0x94) = arg1;
    *(f32*)((u8*)lbl_80367140 + 0xa0) = arg2;
    *(f32*)((u8*)lbl_80367140 + 0x9c) = arg3;
}

void *fn_8000A2A8(u32 arg0) {
    extern u32 *(*lbl_80366DA0)(u32);
    extern f32 lbl_80368B94, lbl_80368B98, lbl_80368BB8;
    u32 *p;
    u32 n;
    u32 *ptr;

    n = arg0;
    if (!n)
        n = 0xffe0;

    n &= 0xfffffff8;
    p = lbl_80366DA0(n);
    ptr = (u32*)0x80367140;
    *ptr = (u32)p;
    
    *(u32*)p = (u32)p;
    *(u32*)((u8*)p + 4) = n;
    *(f32*)((u8*)p + 0x98) = lbl_80368B94;
    *(f32*)((u8*)p + 0x94) = lbl_80368BB8;
    *(f32*)((u8*)p + 0xa0) = lbl_80368BB8;
    *(f32*)((u8*)p + 0x9c) = lbl_80368B98;
    
    *(u32*)((u8*)p + 0x10) = 0;
    *(u32*)((u8*)p + 0x14) = 0;
    *(u16*)((u8*)p + 0x20) = 0;
    *((u8*)p + 0xa9) = 255;

    return (void*)*ptr;
}

void *fn_800C4638(s32, void *, s32);
void fn_8000A358(s32 arg0) {
    extern u8 lbl_80267C70[];
    fn_800C4638(arg0, lbl_80267C70 + 0x3A, 0);
}

void fn_8000A3F8(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) (M2C_FIELD(arg0, u8 *, 0x2E) - 1);
}

void fn_8000A408(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) (M2C_FIELD(arg0, u8 *, 0x2E) + 1);
}

u8 fn_8000A418(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2E);
}

void fn_8000A420(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2D) = (u8) (M2C_FIELD(arg0, u8 *, 0x2D) - 1);
}

void fn_8000A430(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2D) = (u8) (M2C_FIELD(arg0, u8 *, 0x2D) + 1);
}

void fn_8000A440(s32 arg0, s32 arg1) {
    extern u16 lbl_802ADAFC[9]; // 36 bytes / 2 bytes per element
    lbl_802ADAFC[arg0 * 2] = (u16)arg1;
}

s32 fn_8000A930(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 0x10);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8000ACA0(void *arg0) {
    u8 temp_r4;
    void *temp_r5;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r4 & 2) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (temp_r4 & 0xFFFFFFFD);
        temp_r5 = M2C_FIELD(arg0, void **, 0x18);
        M2C_FIELD(temp_r5, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_r5, u8 *, 0x2D) - 1);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8000ACD8(void) {
    return 0;
}

s32 fn_8000ADA0(void *arg0) {
    s32 fn_8000BF00(s32);
    fn_8000BF00(((s32 **) arg0)[1][1]);
    ((s32 **) arg0)[1] = ((s32 **) arg0)[1] + 2;
    return 1;
}

s32 fn_8000AEB4(void *arg0) {
    s32 fn_8000CAF0(s32, s16);
    s32 temp_r3 = ((s32 *) arg0)[1];
    fn_8000CAF0(((s32 *) temp_r3)[1], (s16) (((u32) ((s32 *) temp_r3)[0]) >> 16));
    ((s32 **) arg0)[1] = (s32 *) ((s32 *) arg0)[1] + 2;
    return 1;
}

s32 fn_8000AF04(void *arg0) {
    s32 fn_8000CAA0(s32, void *);
    void **temp_r3 = (void **)((s32 *)arg0)[1];
    fn_8000CAA0(((s32 *) temp_r3)[1], arg0);
    ((s32 **) arg0)[1] = (s32 *) ((s32 *) arg0)[1] + 2;
    return 0;
}

s32 fn_8000AF94(void *arg0) {
    u32 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 **, 4);
    M2C_FIELD(arg0, u32 **, 4) = (u32 *) ((unsigned)temp_r4 + 4);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) ((u32) *temp_r4 >> 0x10U);
    return 1;
}

s32 fn_8000AFB4(void **arg0) {
    void *temp = arg0[1];  // Load pointer from arg0[1] (field4)
    arg0[4] = temp;       // Store it in arg0[4] (field16)
    arg0[1] = (void *)((u8 *)temp + 8);  // Add 8 and store back in arg0[1]
    return 0;
}

void fn_8000B018(void *arg0) {
    s32 *node = ((s32 **)arg0)[1];
    void (*func)(void *, s32) = (void (*)(void *, s32))node[1];
    s32 arg1 = node[2];
    ((s32 **)arg0)[1] = node + 3;
    func(arg0, arg1);
}

void fn_8000B050(void *arg0) {
    void **vtable = (void**)((char*)arg0 + 4);
    void *obj = *vtable;
    *vtable = (void*)((char*)obj + 0xC);
    ((void (*)(s16, s16))((char*)obj + 8))((s16) 0, (s16) 0);
}

void fn_8000B1C0(void *arg0) {
    void **vtable = (void**)((char*)arg0 + 4);
    void *obj = *vtable;
    *vtable = (void*)((char*)obj + 8);
    (*(void(**)(void))((char*)obj + 4))();
}

s32 fn_8000B1F4(void *arg0) { u32 *temp_r4; u32 *var_r4; u32 temp_r5; temp_r4=M2C_FIELD(arg0,u32 **,4); if(M2C_FIELD(temp_r4,u8 (**)(u32 *),4)(temp_r4)==0){ var_r4=M2C_FIELD(arg0,u32 **,0); loop_6: temp_r5=*var_r4; if(temp_r5==0)goto done; if((temp_r5&0xFFF)==1&&(s16)(temp_r5>>16)==(s32)(u8)((u32)*M2C_FIELD(arg0,u32 **,4)>>16)){ M2C_FIELD(arg0,u32 **,4)=var_r4;M2C_FIELD(arg0,s32 *,0x10)=0;goto done;} var_r4=(u32*)((u8*)var_r4+((temp_r5>>10)&0x3C));temp_r5=*var_r4;if(temp_r5!=0)goto loop_6;done:;}else M2C_FIELD(arg0,u32 **,4)=(u32*)((u8*)M2C_FIELD(arg0,u32 **,4)+8);return 1;}

s32 fn_8000B29C(void *arg0) { u32 *temp_r4; u32 *var_r4; u32 temp_r5; temp_r4=M2C_FIELD(arg0,u32 **,4); if(M2C_FIELD(temp_r4,u8 (**)(u32 *),4)(temp_r4)!=0){ var_r4=M2C_FIELD(arg0,u32 **,0); loop_6: temp_r5=*var_r4; if(temp_r5==0)goto done; if((temp_r5&0xFFF)==1&&(s16)(temp_r5>>16)==(s32)(u8)((u32)*M2C_FIELD(arg0,u32 **,4)>>16)){ M2C_FIELD(arg0,u32 **,4)=var_r4;M2C_FIELD(arg0,s32 *,0x10)=0;goto done;} var_r4=(u32*)((u8*)var_r4+((temp_r5>>10)&0x3C));temp_r5=*var_r4;if(temp_r5!=0)goto loop_6;done:;}else M2C_FIELD(arg0,u32 **,4)=(u32*)((u8*)M2C_FIELD(arg0,u32 **,4)+8);return 1;}

s32 fn_8000B344(void *arg0) {
    s32 *node = ((s32 **)arg0)[1];
    void (*func)(void *) = (void (*)(void *))node[1];
    ((s32 **)arg0)[1] = node + 2;
    func(arg0);
    return 1;
}

s32 fn_8000B37C(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4);
    M2C_FIELD(arg0, void **, 0) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return 1;
}

s32 fn_8000B39C(void *arg0) {
    s16 *temp_r4;
    u32 *var_r4;
    u32 temp_r6;

    temp_r4 = (s16 *)((char *)arg0 + 0x28);
    if (*temp_r4 >= 0) {
        *(temp_r4) = (*(temp_r4) - 1);
        if (*(temp_r4) == 0) {
            var_r4 = *(u32 **)((char *)arg0 + 0x0);
loop_7:
            temp_r6 = *var_r4;
            if (temp_r6 != 0) {
                if (((temp_r6 & 0xFFF) == 1) && ((s16) (temp_r6 >> 0x10U) == *(u8 *)((char *)arg0 + 0x4) >> 0x10U)) {
                    *(u32 **)((char *)arg0 + 0x4) = var_r4;
                    *(s32 *)((char *)arg0 + 0x10) = 0;
                } else {
                    var_r4 += (temp_r6 >> 0xAU) & 0x3C;
                    goto loop_7;
                }
            }
        }
    }
    return 1;
}

s32 fn_8000B418(void *arg0) {
    u32 *var_r5;
    u32 temp_r6;

    var_r5 = *(u32 **)arg0;
loop_5:
    temp_r6 = *var_r5;
    if (temp_r6 != 0) {
        if (((u32) (temp_r6 & 0xFFF) == 1) && ((s16) (temp_r6 >> 0x10U) == (s32) (u8) ((u32) *(u32 **)((char *)arg0 + 4) >> 0x10U))) {
            *(u32 **)arg0 = var_r5;
            *(s32 *)((char *)arg0 + 0x10) = 0;
        } else {
            var_r5 += (temp_r6 >> 0xAU) & 0x3C;
            goto loop_5;
        }
    }
    return 1;
}

s32 fn_8000B474(void *arg0) {
    void **ptr = (void **)arg0;
    ptr[1] = (void *)((u32)ptr[1] + 4);
    ptr[4] = (void *)0x8000B4D0;
    return 0;
}

s32 fn_8000B494(s32 arg0)
{
    s32* array = (s32*)lbl_802AEE20;
    return array[arg0];
}

void fn_8000B4D0(void) {

}

s32 fn_8000B4D4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8000B76C(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8000B78C(void *arg0) {
    void **temp_r4;

    temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 0xc) = (void *)temp_r4[1];
    temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 4) = (void *)((u32)temp_r4 + 8);
    return 1;
}

s32 fn_8000B7AC(void *arg0) {
    void **temp_r4;
    
    temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 8) = (void *)temp_r4[1];
    temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 4) = (void *)((u32)temp_r4 + 8);
    return 1;
}

s32 fn_8000B7CC(void *arg0) {
    void **temp_r4;
    
    temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 0x14) = (void *)temp_r4[1];
    temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 4) = (void *)((u32)temp_r4 + 8);
    return 1;
}

s32 fn_8000B7EC(void *arg0) {
    u32 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 **, 4);
    M2C_FIELD(arg0, u32 **, 4) = (u32 *) ((s32)temp_r4 + 4);
    M2C_FIELD(arg0, s8 *, 0x2B) = (s8) ((u32) *temp_r4 >> 0x10U);
    return 1;
}

s32 fn_8000B80C(void *arg0) {
    u32 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 **, 4);
    M2C_FIELD(arg0, u32 **, 4) = (u32 *) ((u32)temp_r4 + 4);
    M2C_FIELD(arg0, s8 *, 0x2A) = (s8) ((u32) *temp_r4 >> 0x10U);
    return 1;
}

s32 fn_8000B82C(void) {
    M2C_UNK fn_8000C60C();
    fn_8000C60C();
    return 0;
}

extern void *(*lbl_80366DA0)(s32);
extern f32 lbl_80368B94, lbl_80368BB8, lbl_80368B98;
extern u32 lbl_802ADAFC[9];
void fn_8000B850(void *arg0) {
 u32 *obj=arg0; register u32 *table; u32 x; u32 y;
 if(obj[0] && *((u8*)obj+0x2d)==0 && *((u8*)obj+0x2e)==0 && obj[4]==0) {
 table=(u32*)lbl_802ADAFC; x=*(u32*)obj[1]; y=table[(x>>6)&7];
 if(((u8(*)(void*))(*(u32*)(y+((x&0xff)<<2))))(obj)) {
 if(obj[0] && *((u8*)obj+0x2d)==0 && *((u8*)obj+0x2e)!=0)return;
 }}
}

void *fn_8000B908(u8 arg0) {
    extern u16 lbl_802A66D8[];
    return (u8 *)lbl_802A66D8 + arg0 * 0x70;
}

void fn_8000B950(void *arg0, void (*arg1)(void *)) {
    void fn_8000B9A4(void *, void (*)(void *));
    void *tmp;

    arg1(arg0);
    tmp = *(void **)((u8 *)arg0 + 0x1C);
    if (tmp != NULL) {
        fn_8000B9A4(tmp, arg1);
    }
}

void fn_8000BD98(u8 *arg0) {
    extern u8 lbl_802A66D8[];
    u32 *p = (u32 *)lbl_802A66D8;
    int i = 0;
    while (i < 256) {
        if (*p) {
            s8 *a = (s8 *)(p + 5); // p+20/4
            s8 *b = (s8 *)arg0;
            s32 d;
            while (1) {
                s8 x = *a++;
                s8 y = *b++;
                if (x != y) {
                    d = x - y;
                    break;
                }
                if (!x) {
                    d = 0;
                    break;
                }
            }
            if (!d)
                fn_8000C60C((u8 *)p);
        }
        i++;
        p += 28; // 112/4
    }
}

void fn_8000BE54(u32 arg0) {
 extern u8 lbl_802A66D8[]; u8 *p=lbl_802A66D8; s32 i,j;
 for(i=0;i<32;i++){for(j=0;j<8;j++){if(*(u32*)p==arg0)*(u32*)(p+0x10)=0;p+=0x70;}}
}

void fn_8000BF00(u32 arg0) {
    extern u16 lbl_802A66D8[];
    s32 var_r30;
    u16 *var_r31;

    var_r31 = (u16*)((u32)lbl_802A66D8);
    var_r30 = 0;
    do {
        if ((u32)*var_r31 == arg0) {
            fn_8000C60C(var_r31);
        }
        var_r30 += 1;
        var_r31 += 0x70;
    } while (var_r30 < 0x100);
}

void fn_8000BFEC(void (*arg0)(void *)) {
    extern u8 lbl_802A66D8[];
    u8 *var_r31;
    s32 var_r30;

    var_r31 = lbl_802A66D8;
    var_r30 = 0;
    do {
        if (*(u32 *)var_r31 != 0) {
            arg0(var_r31);
        }
        var_r30 += 1;
        var_r31 += 0x70;
    } while (var_r30 < 0x100);
}

void fn_8000C060(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

void fn_8000C068(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void fn_8000C070(void *arg0, u8 arg1) {
    u32 *var_r6;
    u32 temp_r5;

    var_r6 = *(u32 **)arg0;
loop_1:
    temp_r5 = *var_r6;
    if (temp_r5 == 0) {
        return;
    }
    if (((u32)(temp_r5 & 0xFFF) == 1) && ((s16)(temp_r5 >> 0x10U) == (s32)arg1)) {
        *(u32 **)((char *)arg0 + 4) = var_r6;
        *(s32 *)((char *)arg0 + 0x10) = 0;
        return;
    }
    var_r6 += (temp_r5 >> 0xAU) & 0x3C;
    goto loop_1;
}

u32 *fn_8000C0C0(u32 arg0) {
    extern u8 lbl_802A66D8[];
    u32 *p = (u32 *)lbl_802A66D8;
    s32 i;

    for (i = 0; i < 256; i++, p += 0x1C) {
        if (*p == arg0) {
            return p;
        }
    }
    return NULL;
}

void fn_8000C188(void *arg0) {
    *(u32*)((char*)arg0 + 0x10) = 0;
}

void fn_8000C194(s32 arg0) {
    void fn_8000C1CC(u32);
    extern u32 lbl_802ADADC[];
    u32 v = lbl_802ADADC[arg0];
    if (v != 0) {
        fn_8000C1CC(v);
    }
}

void fn_8000C52C(s32 arg0) {
    extern s32 *lbl_80367148;
    s32 *temp_r4;

    temp_r4 = lbl_80367148 - 1;
    lbl_80367148 = temp_r4;
    *temp_r4 = arg0;
}

void* fn_8000C540(void) {
    return (void*)0x80267CB0;
}

void fn_8000C5B8(void *arg0) {
    u8 temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r4 & 2) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (temp_r4 & 0xFFFFFFFD);
        temp_r4_2 = M2C_FIELD(arg0, void **, 0x18);
        M2C_FIELD(temp_r4_2, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_r4_2, u8 *, 0x2D) - 1);
    }
}

void fn_8000C5E0(void *arg0) {
    void *temp_r4;

    if ((void *) M2C_FIELD(arg0, void **, 0x18) != NULL) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
        temp_r4 = M2C_FIELD(arg0, void **, 0x18);
        M2C_FIELD(temp_r4, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_r4, u8 *, 0x2D) + 1);
    }
}

int fn_8000C60C(void *arg0) {
    extern u32 lbl_802ADADC[8];
    int fn_8000C6AC(void);
    u32 *p=(u32*)arg0,*q,idx;
    if(arg0){
        q=(u32*)p[8]; if(q)q[9]=p[9];
        q=(u32*)p[9]; if(q)q[8]=p[8];
        idx=p[6];
        if(idx>8){q=(u32*)idx;if(q[7]==(u32)arg0)q[7]=p[9];}
        else if((u32)arg0==lbl_802ADADC[idx])lbl_802ADADC[idx]=p[9];
        p[8]=0;p[9]=0;fn_8000C6AC();
    }
    return 0;
}

void fn_8000CA64(u32 arg1) {
    M2C_UNK fn_8000CAA0();
    M2C_UNK fn_8000CAF0();
    u32 var_r4;

    var_r4 = arg1;
    if (var_r4 == 0U) {
        var_r4 = 3U;
    }
    if ((s32) var_r4 < 0) {
        fn_8000CAA0();
        return;
    }
    fn_8000CAF0();
}

void *fn_8000CAA0(void *arg0, s32 arg1, void *arg2) {
    void *fn_8000CAF0();
    void *temp_r3;
    void *temp_r5;

    temp_r3 = fn_8000CAF0();
    if ((u32) M2C_FIELD(temp_r3, u32 *, 0) == 0U) {
        return NULL;
    }
    M2C_FIELD(temp_r3, u8 *, 0x2C) = (u8) (M2C_FIELD(temp_r3, u8 *, 0x2C) | 2);
    temp_r5 = M2C_FIELD(temp_r3, void **, 0x18);
    M2C_FIELD(temp_r5, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_r5, u8 *, 0x2D) + 1);
    return temp_r3;
}

void* fn_8000CAF0(u32* arg0, s32 arg1) {
    return (void*)0x80267CB0;
}

extern void *fn_8000A738(void *, s32);
extern void fn_8000B5F0(void *);
extern void fn_8000B70C(void *);
void fn_8000CC88(void *arg0) {
    *(u32*)((char*)arg0 + 0x44) = 1;
    fn_8000A738(arg0, 4);
    fn_8000B5F0(arg0);
    fn_8000B70C(arg0);
}

void fn_8000CD80(s32 arg0) {
    extern s32 lbl_80367158;
    lbl_80367158 = arg0;
}

s32 fn_8000CD88(s32 arg0) {
    extern u16 lbl_80367150[4];
    u16 temp_r0;
    u16 temp_r5;
    u16 temp_r7;
    u16 temp_r9;
    u16 temp_r8;
    s32 temp_r6;
    u32 temp_r8_2;
    u16 temp_r5_2;
    
    temp_r5 = lbl_80367150[2] >> 5;
    temp_r0 = (lbl_80367150[0]) & 0x7FFF;
    temp_r7 = (lbl_80367150[1]) << 0xB;
    lbl_80367150[2] = temp_r5 + temp_r7;
    temp_r9 = ((u16) (temp_r7 + (temp_r0 >> 5))) ^ lbl_80367150[2];
    lbl_80367150[2] = temp_r9;
    if ((lbl_80367150[0]) & 0x8000) {
        lbl_80367150[2] = (u16)(temp_r9 + 1);
    }
    temp_r8 = (lbl_80367150[2]);
    temp_r5_2 = (lbl_80367150[1]) * 2;
    lbl_80367150[1] = temp_r8;
    temp_r0 = lbl_80367150[0] & 0x7FFF;
    temp_r6 = (s32)(temp_r0 << 0xB);
    lbl_80367150[0] = temp_r9;
    lbl_80367150[2] = temp_r5_2;
    if ((lbl_80367150[0]) & 0x8000) {
        lbl_80367150[2] = (u16)(temp_r5_2 + 1);
    }
    temp_r7 = ((u16) (temp_r6 + (temp_r0 >> 5))) ^ lbl_80367150[2];
    lbl_80367150[2] = temp_r7;
    lbl_80367150[1] = lbl_80367150[0];
    lbl_80367150[0] = temp_r7;
    temp_r8_2 = (temp_r8 * 0x64U) / (u32)0x10000;
    temp_r8_2 += (temp_r0 * 0x64U) / (u32)0x10000;
    return ((s32)((temp_r8_2 >> 0x1F) + temp_r8_2) >> 1) < arg0;
}

s32 fn_8000CE68(s32 arg0) {
    extern u16 lbl_80367150[4];
    u16 temp_r0;
    u16 temp_r4;
    u16 temp_r6;

    temp_r4 = (lbl_80367150[2] * 2) & 0xFFFE;
    lbl_80367150[2] = temp_r4;
    if (lbl_80367150[1] & 0x8000) {
        lbl_80367150[2] = (u16) (temp_r4 + 1);
    }
    temp_r6 = (u16) ((lbl_80367150[1] << 0xB) + ((s32) lbl_80367150[0] >> 5)) ^ lbl_80367150[2];
    temp_r0 = temp_r6;
    lbl_80367150[2] = lbl_80367150[1];
    lbl_80367150[1] = lbl_80367150[0];
    lbl_80367150[0] = temp_r6;
    return ((s32) (temp_r0 * 0x64) / 65536) < arg0;
}

void fn_8000CF4C(s32 arg0) {
    extern s32 lbl_80267D30[];
    extern u16 lbl_80367150[];
    
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r7;
    s32 var_ctr;
    u16 temp_r3;
    u16 temp_r6;

    temp_r5 = arg0 / 7;
    sp10 = lbl_80267D30[2];
    sp8 = lbl_80267D30[0];
    spC = lbl_80267D30[1];
    sp14 = lbl_80267D30[3];
    temp_r7 = arg0 - (((u32) (((u32) (arg0 - temp_r5) >> 1U) + temp_r5) >> 2U) * 7);
    temp_r0 = arg0 % 23;
    
    lbl_80367150[0] = *(u16*)(&sp8 + ((temp_r7 * 2) & 0xE));
    lbl_80367150[1] = *(u16*)(&sp8 + (((temp_r7 + 1) * 2) & 0xE));
    lbl_80367150[2] = *(u16*)(&sp8 + (((temp_r7 + 2) * 2) & 0xE));
    
    var_ctr = temp_r0;
    if (temp_r0 > 0) {
        do {
            temp_r3 = (lbl_80367150[2] * 2) & 0xFFFE;
            lbl_80367150[2] = temp_r3;
            if (lbl_80367150[1] & 0x8000) {
                lbl_80367150[2] = (u16) (temp_r3 + 1);
            }
            temp_r6 = (u16) ((lbl_80367150[1] << 0xB) + ((s32) lbl_80367150[0] >> 5)) ^ lbl_80367150[2];
            lbl_80367150[2] = (u16) lbl_80367150[1];
            lbl_80367150[1] = (u16) lbl_80367150[0];
            lbl_80367150[0] = temp_r6;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

typedef struct HashKey {
    u32 h1;
    u32 h2;
} HashKey;

s32 fn_8000D1D0(u8 *arg0) {
    extern u8 lbl_802ADB20[];
    struct Node { struct Node *next; u32 hash; s32 unk8; };
    s32 h = 0;
    u32 h2 = 0;
    u8 *p = arg0;
    struct Node *node;
    struct Node *prev;
    u32 index;
    while ((s8)*p != 0) {
        s32 c = (s8)*p++;
        h = c + h * 0x25;
        h2 = c + h2 * 0x1f;
    }
    index = h % 509;
    node = *(struct Node **)(lbl_802ADB20 + index * 4 + 8);
    while (node != 0) {
        if (h2 == node->hash) {
            s32 *count = (s32 *)(lbl_802ADB20 + index * 4 + 0x7fc);
            *count -= 1;
            if (*(struct Node **)(lbl_802ADB20 + index * 4 + 8) == node) {
                *(struct Node **)(lbl_802ADB20 + index * 4 + 8) = node->next;
                node->unk8 = 0;
                return 1;
            }
            prev = *(struct Node **)(lbl_802ADB20 + index * 4 + 8);
            while (prev->next != node) prev = prev->next;
            prev->next = node->next;
            node->unk8 = 0;
            return 1;
        }
        node = node->next;
    }
    return 0;
}

s32 fn_8000D2BC(s8 *str) {
    extern u8 lbl_802ADB20[];
    HashKey key;
    u32 *node;

    if (str == NULL) {
        return 0;
    }
    key.h2 = 0;
    key.h1 = key.h2;
    while (*str != 0) {
        key.h1 = *str + key.h1 * 37;
        key.h2 = *str + key.h2 * 31;
        str++;
    }
    for (node = ((u32 **)(lbl_802ADB20 + 8))[key.h1 % 509]; node != NULL; node = (u32 *)node[0]) {
        if (key.h2 == node[1]) {
            return node[3];
        }
    }
    return 0;
}

extern struct UnkStruct_802AEE80 gUnk_802AEE80;

extern s32 gUnknown_0x80369C84;
extern s32 gUnknown_0x80369C88;

