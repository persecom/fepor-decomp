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

void fn_80006608(void *arg0) {
    s16 temp_r0;
    s16 temp_r4;
    s16 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0);
    temp_r0 = -temp_r4;
    temp_r5 = -M2C_FIELD(arg0, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 0) = (s16) (temp_r4 + temp_r0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + temp_r5);
    M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) + temp_r0);
    M2C_FIELD(arg0, s16 *, 6) = (s16) (M2C_FIELD(arg0, s16 *, 6) + temp_r5);
}

s32 fn_80006650(void *arg0, void *arg1) {
    return *(s16*)((char*)arg0 + 4) < *(s16*)((char*)arg1 + 0) ? 0 : (
        *(s16*)((char*)arg1 + 4) < *(s16*)((char*)arg0 + 0) ? 0 : (
            *(s16*)((char*)arg0 + 6) < *(s16*)((char*)arg1 + 2) ? 0 : (
                *(s16*)((char*)arg0 + 2) <= *(s16*)((char*)arg1 + 6)
            )
        )
    );
}

void fn_800066B4(s32 arg0,s32 *arg1,s32 *arg2,s32 *arg3,s32 *arg4,s32 *arg5,s32 *arg6){u32 __div2i(u32,u32,u32);u32 n;u32 t;n=__div2i(0,*(u32*)0x800000f8>>2,0);t=n/60;*arg4=n-t*60;n=t/60;*arg3=t-n*60;*arg2=n;}

s32 fn_80006798(void) {
    extern s32 lbl_80367120;
    extern s32 lbl_80367128;
    return (lbl_80367128 - lbl_80367120) - !M2C_CARRY;
}

s32 fn_800067B4(void) {
    extern s32 lbl_80367118;
    return lbl_80367118;
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

void fn_800072B0(u8*a,u8*b,u8*c,u8*d){u8 *p=*(u8**)(*(u32**)(*(u32**)0x8036714c)+4);p[0xc]=a[0];p[0xd]=a[1];p[0xe]=a[2];p[0xf]=a[3];p[0x50]=b[0];p[0x51]=b[1];p[0x52]=b[2];p[0x53]=b[3];p[0x54]=c[0];p[0x55]=c[1];p[0x56]=c[2];p[0x57]=c[3];p[0x58]=d[0];p[0x59]=d[1];p[0x5a]=d[2];p[0x5b]=d[3];}

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

void fn_80009B28(void) {
    extern u8 *lbl_80367140;
    
    *(lbl_80367140 + 0x0) = 1;
    *(lbl_80367140 + 0x23) = 0xFF;
    *(lbl_80367140 + 0x24) = 0x80;
    *(lbl_80367140 + 0x2C) = 0;
    *(lbl_80367140 + 0x30) = 0;
    
    *(u16*)(lbl_80367140 + 0x20) = *(u16*)(lbl_80367140 + 0x20) & 0xFFFF8FFF;
    
    *(lbl_80367140 + 0x0) = 2;
}

void fn_80009B80(s8 arg0) {
    extern void *lbl_80367140;
    M2C_FIELD(lbl_80367140, s8 *, 0x24) = arg0;
}

extern u16 lbl_80367140;
void fn_80009B8C(s8 arg0) {
    s8 temp = arg0;
    lbl_80367140 = (u16)temp;
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
    *(f32*)((char*)lbl_80367140 + 0x28) = farg0;
}

f32 fn_80009C00(void) {
    return *(f32*)((char*)&lbl_80367140 + 0x28);
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

void fn_80009F90(s32 arg0, s32 arg1) {
 extern void fn_8006ECCC(s32 *, s32);
 s32 sp[8]; u32 *p=(u32*)0x80367140;
 fn_8006ECCC(&sp[0],arg0);
 p[13]=sp[0];p[14]=sp[1];p[15]=sp[2];p[16]=sp[3];p[17]=sp[4];p[18]=sp[5];p[19]=sp[6];p[20]=sp[7];
 *((u8*)p+0x22)=255;
 *(u16*)((u8*)p+0x20)=(*(u16*)((u8*)p+0x20)&0xFFFF7B0C);
 *(u16*)((u8*)p+0x20)=(*(u16*)((u8*)p+0x20)|arg1);
}

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
    return *(u8*)((u8*)lbl_80367140 + 0xA9);
}

void fn_8000A274(s8 arg0) {
    *(u16*)(&lbl_80367140) = (u16)arg0;
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
 extern u32 *(*lbl_80366DA0)(u32); extern f32 lbl_80368B94,lbl_80368B98,lbl_80368BB8;
 u32 *p;u32 n;n=arg0;if(!n)n=0xffe0;n&=0xfffffff8;p=lbl_80366DA0(n);*(void**)0x80367140=p;
 *(u32*)p=(u32)p;*(u32*)((u8*)p+4)=n;*(f32*)((u8*)p+0x98)=lbl_80368B94;*(f32*)((u8*)p+0x94)=lbl_80368BB8;*(f32*)((u8*)p+0xa0)=lbl_80368BB8;*(f32*)((u8*)p+0x9c)=lbl_80368B98;
 *(u32*)((u8*)p+0x10)=0;*(u32*)((u8*)p+0x14)=0;*(u16*)((u8*)p+0x20)=0;*((u8*)p+0xa9)=255;
 return *(void**)0x80367140;
}

void fn_8000A358(void) {
    extern u16 lbl_80267C70[];
    fn_800C4638(&lbl_80267C70[0x3A * 2], 0);
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
    s32 *ptr = (s32 *) *(s32 **)((s32 *)arg0 + 1) + 1;
    fn_8000BF00(*ptr);
    *(s32 **)((s32 *)arg0 + 1) = ptr + 2;
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

s32 fn_8000B018(void *arg0) {
    void **obj = (void **)((char *)arg0 + 4);
    void **vtable_ptr = *obj;
    s32 (*func)(void *obj) = (s32 (*)(void *))vtable_ptr[1]; // offset 0x4 is vtable[1] (second entry)
    
    void *new_val = (char *)*obj + 0xc;
    *obj = new_val;
    
    return func(arg0);
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
    void **vtable_entry;
    void *temp_r4;

    vtable_entry = (void **) arg0;
    temp_r4 = *(vtable_entry + 1);
    *(vtable_entry + 1) = (void *) ((u8 *) temp_r4 + 8);
    ((void (*)(void)) temp_r4)();
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
    void **temp = (void **) *((void **)((char *)arg0 + 4));
    *(u32 *)((char *)arg0 + 0xC) = (u32)*temp;
    temp = (void **) *((void **)((char *)arg0 + 4));
    *(void **)((char *)arg0 + 4) = (void *)(((char *)temp) + 8);
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
void fn_8000B850(void *arg0){u32 *table;u32 v;u32 *entry;register u8 *obj=(u8*)arg0;if(*(u32*)obj!=0&&obj[0x2d]==0&&obj[0x2e]==0&&*(u32*)(obj+0x10)==0){table=(u32*)lbl_802ADAFC;v=*(u32*)*(u32**)(obj+4);entry=(u32*)table[(v>>6)&7];if(((u8(*)(void*))(*(u32*)((u8*)entry+((v&0xff)<<2))))(obj)){if(*(u32*)obj!=0&&obj[0x2d]==0&&obj[0x2e]!=0)return;}}}

void *fn_8000B908(u8 arg0) {
    extern u16 lbl_802A66D8[0x7000];
    return &lbl_802A66D8[arg0 * 0xE0];
}

void fn_8000B950(void *arg0, M2C_UNK (*arg1)()) {
    void fn_8000B9A4(M2C_UNK (*)());
    arg1();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        fn_8000B9A4(arg1);
    }
}

void fn_8000BD98(u8 *arg0) {extern u8 lbl_802A66D8[];u8*p=lbl_802A66D8;int i=0;while(i<256){if(*(u32*)p){s8*a=(s8*)(p+20),*b=(s8*)arg0;s32 d;while(1){s8 x=*a++,y=*b++;if(x!=y){d=x-y;break;}if(!x){d=0;break;}}if(!d)fn_8000C60C(p);}i++;p+=112;}}

void fn_8000BE54(u32 arg0) { extern u8 lbl_802A66D8[]; u32 *p=(u32*)lbl_802A66D8; s32 i; for(i=0;i<32;i++){s32 j;for(j=0;j<8;j++,p+=0x1c)if(*p==arg0)p[4]=0;} }

void fn_8000BF00(u32 arg0) {
    extern u16 lbl_802A66D8[];
    s32 var_r30;
    u16 *var_r31;

    var_r31 = &lbl_802A66D8[0];
    var_r30 = 0;
    do {
        if ((u32) *var_r31 == arg0) {
            fn_8000C60C(var_r31);
        }
        var_r30 += 1;
        var_r31 += 0x70;
    } while (var_r30 < 0x100);
}

void fn_8000BFEC(M2C_UNK (*arg0)(u32 *)) {
    u32 *var_r31;
    s32 var_r30;

    var_r31 = (u32 *)0x802A66D8;
    var_r30 = 0;
    do {
        if ((u32) *var_r31 != 0U) {
            arg0(var_r31);
        }
        var_r30 += 1;
        var_r31 += 0x70 / sizeof(u32);
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

void fn_8000C188(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void fn_8000C194(s32 arg0) {
    M2C_UNK fn_8000C1CC();
    extern u16 lbl_802ADADC[];
    if (lbl_802ADADC[arg0] != 0) {
        fn_8000C1CC();
    }
}

void fn_8000C52C(s32 arg0) {
    extern s32 *lbl_80367148;
    s32 *temp_r4;

    temp_r4 = lbl_80367148 - 1;
    lbl_80367148 = temp_r4;
    *temp_r4 = arg0;
}

u32 fn_8000C540(void) {
    extern u32 *lbl_80367148;
    extern u16 lbl_802A66D8[];
    u32 *var_r3;
    s32 var_ctr;

    if (*lbl_80367148 != 0) {
        var_r3 = lbl_80367148 + 1;
        *lbl_80367148 = (u32) var_r3;
        return (u32) var_r3;
    }

    var_r3 = (u32 *) &lbl_802A66D8[0];
    var_ctr = 0x100;

loop_3:
    if ((var_r3[0] != 0) && (var_r3[0x2C / sizeof(u32)] & 0x10)) {
        fn_8000C60C();
        return fn_8000C540();
    }
    var_r3 += 0x70 / sizeof(u32);
    var_ctr -= 1;
    if (var_ctr == 0) {
        return 0;
    }
    goto loop_3;
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

s32 fn_8000D2BC(u8 *arg0) {
    extern u16 lbl_802ADB20[];
    s32 temp_r6;
    u32 temp_r5;
    u8 temp_r7;
    void *temp_r3;
    s32 var_r4;

    if (arg0 == NULL) {
        return 0;
    }
    
    temp_r6 = 0;
    temp_r5 = 0;
    
loop_4:
    temp_r7 = *arg0;
    if ((s8) temp_r7 != 0) {
        arg0 += 1;
        temp_r6 = (s8) temp_r7 + (temp_r6 * 0x25);
        temp_r5 = (s8) temp_r7 + (temp_r5 * 0x1F);
        goto loop_4; 
    }
    
    temp_r3 = (void *) ((s32 *) lbl_802ADB20 + ((temp_r6 % 509) * 4));
loop_9:
    if (temp_r3 == NULL) {
        return 0;
    }
    if (temp_r5 == (u32) M2C_FIELD(temp_r3, u32 *, 4)) {
        return M2C_FIELD(temp_r3, s32 *, 0xC);
    }
    temp_r3 = M2C_FIELD(temp_r3, void **, 0);
    goto loop_9;
}

s32 fn_8000D354(u8 *arg0) { extern u8 lbl_802ADB20[]; s32 h=0;u32 h2=0;u8*p=arg0;u8 c;u32*n;if(!p)return 0;while((s8)(c=*p++)){h=(s8)c+h*37;h2=(s8)c+h2*31;}n=(u32*)(lbl_802ADB20+((h%509)*4)+8);while(*n){u32*q=(u32*)*n;if(h2==q[1])return q[3];n=q;}return 0;}

s32 fn_8000D598(u8 *arg0) {
    s32 var_r5;
    u8 *var_r3;

    var_r3 = arg0;
    var_r5 = 0;
loop_2:
    if ((s8)*var_r3 != 0) {
        u8 temp = *(var_r3++);
        var_r5 = (temp + (var_r5 * 0x25));
        goto loop_2;
    }
    return var_r5;
}

void fn_8000D864(s32 arg0, s32 arg1) {
    extern u16 lbl_802AED10[];
    void fn_80234450(void *, s32);
    s32 strlen(s32);

    s32 temp_r5 = arg0 * 0x44;
    u16* temp_r31 = &lbl_802AED10[temp_r5];
    *temp_r31 = strlen(arg1);
    fn_80234450(temp_r31 + 1, arg1);
}

void *fn_8000D8BC(s32 arg0, s32 arg1) {
    s32 strlen(void *);
    extern M2C_UNK lbl_802AED10;
    void *fn_80238ABC(s32, void *, s32);

    M2C_UNK *temp_r31 = &lbl_802AED10 + (arg0 * 0x44);
    fn_80238ABC(arg1, temp_r31 + 4, 0xA);
    *(s32 *)temp_r31 = strlen(temp_r31 + 4);
    return temp_r31 + 4;
}

void fn_80010FF0(void) {
    M2C_UNK fn_801047D0();
    fn_801047D0();
}

s32 fn_80011010(s32 arg0){u32 x;u32 *p;if(arg0==-1){x=fn_8010494C(lbl_802AEE20[0],(u32)lbl_802AEE20);p=(u32*)lbl_802AEE20;if(p[0]==x)return 0;if(p[1]==x)return 1;if(p[2]==x)return 2;if(p[3]==x)return 3;if(p[4]==x)return 4;}return -1;}

void fn_800111FC(void) {
    extern s32 lbl_802AEE20[5];
    extern s32 lbl_8036716C;
    extern u8 lbl_80367170;

    if ((s8) lbl_80367170 == 0) {
        lbl_8036716C = 0;
        lbl_80367170 = 1;
    }
    if (lbl_8036716C == 0) {
        fn_80104D90(0);
        fn_8010494C(0);
        fn_80104944();
        lbl_8036716C = 1;
        lbl_802AEE20[0] = 0; // TODO, fix the value, this is a guess
    }
}

s32 fn_80011264(void **arg0) {
    s32 var_r31;
    
    var_r31 = M2C_FIELD(*arg0, s32 (**)(), 0x40)();
    return M2C_FIELD(*arg0, s32 (**)(void **), 0x30)(arg0) / var_r31;
}

s32 fn_800112C0(void **arg0) {
    s32 temp_r31;
    void **temp_r30;

    temp_r30 = arg0;
    temp_r31 = M2C_FIELD(*arg0, s32 (**)(), 0x3C)();
    return M2C_FIELD(*temp_r30, s32 (**)(void **), 0x2C)(arg0) / temp_r31;
}

u16 fn_8001131C(void *arg0) {
    u16 **fn_8006EDD8(s32, s32);
    return **fn_8006EDD8(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(), 0x24)());
}

u16 fn_80011368(void *arg0) {
    void **fn_8006EDD8(s32, s32);
    return M2C_FIELD(*fn_8006EDD8(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(), 0x24)()), u16 *, 2);
}

s32 fn_800113B4(void) {
    return 0;
}

s32 fn_800113BC(void) {
    return 0;
}

void fn_800116F0(void **arg0){M2C_UNK fn_802025C0(M2C_UNK*,f32,f32,f32);M2C_UNK fn_80224E50(M2C_UNK*,M2C_UNK,M2C_UNK);extern f32 lbl_80368BDC;u8 sp8[0x30];f32 temp_f1;f32 temp_f31;temp_f1=(f32)M2C_FIELD(*arg0,s32 (**)(),0x30)();temp_f31=lbl_80368BDC/temp_f1;fn_802025C0((M2C_UNK*)sp8,lbl_80368BDC/(f32)M2C_FIELD(*arg0,s32 (**)(void**,f32),0x2C)(arg0,temp_f1),temp_f31,lbl_80368BDC);fn_80224E50((M2C_UNK*)sp8,0x21,1);}

void fn_800117B0(void *arg0){M2C_UNK fn_8006EBC4(s32,M2C_UNK*,M2C_UNK*,s32,s32);M2C_UNK fn_80222A3C(M2C_UNK*,M2C_UNK,M2C_UNK);M2C_UNK fn_80222C50(M2C_UNK*,M2C_UNK);M2C_UNK fn_80222CF0(M2C_UNK*,s32);M2C_UNK sp14;M2C_UNK sp8;s32 temp_r31;temp_r31=M2C_FIELD(M2C_FIELD(arg0,void**,0),s32 (**)(),0x24)();fn_8006EBC4(M2C_FIELD(arg0,s32*,4),&sp14,&sp8,M2C_FIELD(M2C_FIELD(arg0,void**,0),s32 (**)(void*),0x28)(arg0),temp_r31);fn_80222A3C(&sp14,0,0);fn_80222C50(&sp14,1);fn_80222CF0(&sp8,M2C_FIELD(M2C_FIELD(arg0,void**,0),s32 (**)(void*),0x28)(arg0));}

void fn_8001185C(void) {
    M2C_UNK fn_80223A5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AA0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AE4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223B4C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
    fn_80223A5C(0, 0xF, 0xF, 0xF, 0xA);
    fn_80223AE4(0, 0, 0, 0, 1, 0);
    fn_80223AA0(0, 7, 4, 5, 7);
    fn_80223B4C(0, 0, 0, 0, 1, 0);
    fn_80223F2C(0, 0, 0, 4);
}

void fn_80011910(void) {
    M2C_UNK fn_802201A8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802239D0(M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223F2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802201A8(0, 1, 4, 0x21, 0, 0x7D);
    fn_802239D0(0, 0);
    fn_80223F2C(0, 0, 1, 4);
}
#include "common.h"
extern u16 lbl_80367140;
extern u16 lbl_80367140;
extern u16 lbl_80367140;
extern u16 lbl_80367120;
extern u16 lbl_80367128;
extern u16 lbl_80367124;
extern u16 lbl_8036712C;
extern u16 lbl_80367150[4];
extern u16 lbl_802A66D8[];
extern u16 lbl_802A66D8[];
extern u16 lbl_802A66D8[0x7000];
#include "global.h"
extern u16 lbl_802A66D8[0x7000];
