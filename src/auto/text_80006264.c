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

s32 fn_80006264(u32 *a, u32 *b, u32 n) {
    a--;
    n >>= 2;
    b--;
    do {
        if (*++a == *++b) {
            continue;
        }
        return 1;
    } while (--n);
    return 0;
}

void fn_80006298(u32 *dst, u32 val, u32 n) {
    n >>= 2;
    dst--;
    do {
        *++dst = val;
    } while (--n);
}

void fn_800062B0(u32 *arg0, u32 arg1, u32 arg2) {
    u32 count;

    count = arg2 >> 3;
    arg0--;

    do {
        *++arg0 = arg1;
        *++arg0 = arg1;
    } while (--count != 0);
}

void fn_800062CC(u32 *dst, u32 *src, u32 n) {
    dst--;
    n >>= 2;
    src--;
    do {
        *++dst = *++src;
    } while (--n);
}

void fn_800062EC(u32 *dst, u32 *src, u32 n) {
    dst--;
    n >>= 3;
    src--;
    do {
        *++dst = *++src;
        *++dst = *++src;
    } while (--n);
}

void fn_80006314(void) {
    void OSInitThreadQueue(void *);
    s32 fn_80209FD4(void);
    void fn_8020A558(void *, void (*)(void), s32, void *, s32, s32, s32);
    void fn_8020A9E0(void *);
    void fn_80006388(void);
    extern u8 lbl_802A53C0[];
    extern u8 lbl_802A56D8[];
    extern s8 lbl_80367130;
    extern s8 lbl_80367131;
    extern s32 lbl_80367134;
    extern u8 lbl_80367138;

    lbl_80367131 = 0;
    lbl_80367130 = 0;
    OSInitThreadQueue(&lbl_80367138);
    lbl_80367134 = fn_80209FD4();
    fn_8020A558(lbl_802A53C0, fn_80006388, 0, lbl_802A56D8 + 0x1000, 0x1000, 0x10, 1);
    fn_8020A9E0(lbl_802A53C0);
}

void fn_80006388(void) {
    s32 OSDisableInterrupts(void);
    void OSDisableScheduler(void);
    void OSEnableScheduler(void);
    void OSRestoreInterrupts(s32);
    void fn_8020ADD8(void *);
    void fn_8020AEC4(void *);
    extern u8 lbl_802A51C0[];
    extern u8 lbl_80367130;
    extern u8 lbl_80367131;
    extern s32 lbl_80367138;

    s32 temp_r30;
    s32 bitCount;
    s8 bitFlags;
    s32 copyLen;
    s32 copied;
    s32 left;
    u8 *src;
    u8 *dst;
    u8 *dstStart;
    u8 *back;
    u8 *slot;
    s32 t7;
    s32 t6;
    s32 t8;
    s32 uncompSize;
    u8 idxByte;
    void (*cb)(s32, void *, void *);
    u32 var_ctr;
    s32 var_ctr_2;

    goto loop_cond;
loop_body:
    bitCount = 0;
    slot = lbl_802A51C0 + ((s8)idxByte * 0x10);
    src = *(u8 **)slot;
    dst = *(u8 **)(slot + 4);
    dstStart = dst;
    if ((u8)*src == 0x10) {
        t7 = src[2];
        t6 = src[3];
        t8 = src[1];
        src += 4;
        uncompSize = t8 + ((t7 << 8) & 0xFF00) + ((t6 << 16) & 0xFF0000);
    loop_inner:
        if (uncompSize != (s32)(dst - dstStart)) {
            if ((s8)bitCount == 0) {
                bitFlags = (s8)*src;
                bitCount = 8;
                src += 1;
            }
            if (bitFlags >= 0) {
                *dst = *src;
                src += 1;
                dst += 1;
            } else {
                t8 = src[0];
                t6 = src[1];
                src += 2;
                copyLen = ((t8 >> 4) & 0xF) + 3;
                back = (dst - (((t8 << 8) & 0xF00) + t6)) - 1;
                copied = 0;
                if (copyLen > 0) {
                    left = copyLen - 8;
                    if (copyLen > 8) {
                        var_ctr = (u32)(left + 7) >> 3U;
                        if (left > 0) {
                            do {
                                copied += 8;
                                dst[0] = back[0];
                                dst[1] = back[1];
                                dst[2] = back[2];
                                dst[3] = back[3];
                                dst[4] = back[4];
                                dst[5] = back[5];
                                dst[6] = back[6];
                                dst[7] = back[7];
                                back += 8;
                                dst += 8;
                                var_ctr -= 1;
                            } while (var_ctr != 0);
                        }
                    }
                    var_ctr_2 = copyLen - copied;
                    if (copied < copyLen) {
                        do {
                            t6 = *back;
                            copied += 1;
                            back += 1;
                            *dst = t6;
                            dst += 1;
                            var_ctr_2 -= 1;
                        } while (var_ctr_2 != 0);
                    }
                }
            }
            bitCount -= 1;
            bitFlags = (s8)(bitFlags * 2);
            goto loop_inner;
        }
    }
    slot = lbl_802A51C0 + ((s8)lbl_80367130 * 0x10);
    if (*(u32 *)(slot + 8) != 0U) {
        temp_r30 = OSDisableInterrupts();
        OSDisableScheduler();
        slot = lbl_802A51C0 + ((s8)lbl_80367130 * 0x10);
        cb = *(void (**)(s32, void *, void *))(slot + 8);
        cb(*(s32 *)(slot + 0xC), *(void **)slot, *(void **)(slot + 4));
        OSEnableScheduler();
        OSRestoreInterrupts(temp_r30);
    }
    lbl_80367130 = (lbl_80367130 + 1) & 0x1F;
loop_cond:
    idxByte = lbl_80367130;
    if ((s8)idxByte != (s8)lbl_80367131) {
        goto loop_body;
    }
    fn_8020AEC4(&lbl_80367138);
    fn_8020ADD8(&lbl_80367138);
    goto loop_cond;
}

void fn_800065B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void fn_8020AEC4(u8 *);
    extern u8 lbl_80367131;
    extern u8 lbl_802A51C0[];
    extern u8 lbl_80367138[8];
    u8 *entry;
    u8 idx;

    idx = lbl_80367131;
    *(s32 *)(lbl_802A51C0 + (s8)idx * 0x10) = arg0;
    entry = lbl_802A51C0 + (s8)idx * 0x10;
    *(s32 *)(entry + 4) = arg1;
    *(s32 *)(entry + 8) = arg2;
    *(s32 *)(entry + 0xC) = arg3;
    lbl_80367131 = (idx + 1) & 0x1F;
    fn_8020AEC4(lbl_80367138);
}

void fn_80006608(s16 *arg0) {
    s16 y;
    s16 x;
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

void fn_80006754(void)
{
    extern u32 lbl_80367118;
    extern u32 lbl_80367120;
    extern u32 lbl_80367124;
    extern u32 lbl_80367128;
    extern u32 lbl_8036712C;

    extern u64 OSGetTime(void);

    u32 count;
    u32 stack_hi;
    u32 stack_lo;
    u64 time;

    count = lbl_80367118;
    stack_hi = lbl_80367128;
    stack_lo = lbl_8036712C;
    count += 1;
    lbl_80367118 = count;
    lbl_80367124 = stack_lo;
    lbl_80367120 = stack_hi;

    time = OSGetTime();
    stack_lo = (u32)time;
    stack_hi = (u32)(time >> 32);
    lbl_8036712C = stack_lo;
    lbl_80367128 = stack_hi;
}

s64 fn_80006798(void) {
    extern u32 lbl_80367120;
    extern u32 lbl_80367124;
    extern u32 lbl_80367128;
    extern u32 lbl_8036712C;
    s64 prev;
    s64 cur;

    cur = lbl_8036712C;
    prev = lbl_80367124;
    cur |= (s64)lbl_80367128 << 32;
    prev |= (s64)lbl_80367120 << 32;
    return cur - prev;
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

s32 fn_80006AC0(u8 *arg0) {
    s32 t;

    if (arg0[0] != 0x10) {
        return 0;
    }
    t = (arg0[2] << 8) & 0xFF00;
    t = arg0[1] + t;
    t = t + ((arg0[3] << 16) & 0xFF0000);
    return t;
}

s32 fn_80006AF4(s32 *arg0) {
    s32 sum;
    s32 n;

    arg0--;
    sum = 0;
    n = 0x1c;
    do {
        sum += *++arg0;
    } while (--n);
    return sum;
}

void fn_80006B18(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4)
{
    extern void *lbl_80367140;
    extern char lbl_80366DA4[];
    extern double lbl_80368B88;

    char buffer[32];
    char *destination;
    char *source;
    void *text;
    void *textBuffer;
    s32 value;
    s32 length;
    s32 width;
    s32 x;
    s32 i;
    s32 j;
    s32 allocationSize;
    float yPosition;

    value = arg4;
    i = 0;

    if (arg3 != 0) {
        if (value < 0) {
            buffer[i++] = '-';
            value = -value;
        } else {
            buffer[i++] = '+';
        }
    } else if (value < 0) {
        buffer[0] = '-';
        buffer[1] = '-';
        buffer[2] = '\0';
        goto format_done;
    }

    length = 0;

    do {
        buffer[i++] = (value % 10) + '0';
        value /= 10;
        length++;
    } while (value != 0);

    buffer[i] = '\0';

    for (j = 0; j < length / 2; j++) {
        char temp;

        temp = buffer[(arg3 != 0 && arg4 < 0 ? 1 : 0) + j];
        buffer[(arg3 != 0 && arg4 < 0 ? 1 : 0) + j] =
            buffer[i - 2 - j];
        buffer[i - 2 - j] = temp;
    }

format_done:
    text = *(void **)((u8 *)lbl_80367140 + 0xC);
    textBuffer = *(void **)((u8 *)text + 4);

    width = fn_80010B78(buffer, -1, *(float *)((u8 *)textBuffer + 0x1C));

    x = arg0;

    if (arg2 == 0) {
        x -= width;
    } else if (arg2 == 2) {
        x -= (width + (width < 0)) / 2;
    }

    *(float *)((u8 *)textBuffer + 0x10) = (float)x;
    *(float *)((u8 *)textBuffer + 0x14) = (float)arg1;

    source = buffer;
    length = 1;

    while (*source++ != '\0') {
        length++;
    }

    allocationSize = (length + 3) & 0xFC;

    if (allocationSize > 0xD4) {
        allocationSize = 0xD4;
    }

    textBuffer = *(void **)((u8 *)lbl_80367140 + 8);
    destination = (char *)textBuffer;
    destination += allocationSize;

    *(void **)((u8 *)lbl_80367140 + 8) = destination;

    source = buffer;

    while (*source != '\0') {
        *destination++ = *source++;
    }

    *destination = '\0';

    *(u8 *)((u8 *)text + 5) += allocationSize;

    for (i = 0; i < 4; i++) {
        *((u8 *)text + 0x18 + i) = *((u8 *)text + 0x0C + i);
    }
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
void fn_800070C8(s32 *arg0, s16 *arg1, s16 *arg2, s32 *arg3) {
    extern u8 *lbl_80367140;

    if (arg0 != NULL) {
        *arg0 = *(s32 *)(lbl_80367140 + 0xA4);
    }
    if (arg1 != NULL) {
        *arg1 = *(s16 *)(lbl_80367140 + 0x92);
    }
    if (arg2 != NULL) {
        *arg2 = *(s16 *)(lbl_80367140 + 0x90);
    }
    if (arg3 != NULL) {
        *arg3 = *(s32 *)(lbl_80367140 + 8) - *(s32 *)lbl_80367140;
    }
}

void fn_80007124(u8 *arg0,u8*a,u8*b,u8*c){u32*g=(u32*)0x80367140;u32*ctx=*(u32**)((u8*)g+0xc);u8*dst=(u8*)ctx[1];u8*s=arg0;u32 n=1,len;u8*out,*src;if(!s)s=(u8*)0x80366da4;while((s8)*s++){n++;}len=(n+3)&0xfc;if(len>0xd4)len=0xd4;out=(u8*)*(u32*)((u8*)g+8);*(u32*)((u8*)g+8)=(u32)(out+len);src=arg0;while((s8)*src){*out++=*src++;}*out=0;dst[5]+=len;dst[0x18]=dst[0xc];dst[0x19]=dst[0xd];dst[0x1a]=dst[0xe];dst[0x1b]=dst[0xf];}

void fn_800071D8(u32 arg0, f32 arg1)
{
    extern f32 lbl_80368B90;
    extern void *lbl_80367140;

    u32 flag;
    int value;
    void *object;

    flag = (arg0 & 0xFF) != 0;
    value = (int)(lbl_80368B90 * arg1);
    object = *(void **)((u8 *)*(void **)lbl_80367140 + 0xC);
    object = *(void **)((u8 *)object + 4);

    value = (s16)value;
    value &= -(int)flag;

    *(s16 *)((u8 *)object + 0x26) = value;
}

void fn_80007220(u32 arg0, f32 arg1)
{
    extern f32 lbl_80368B90;
    extern void *lbl_80367140;

    u32 flag;
    int value;
    void *object;

    flag = (arg0 & 0xFF) != 0;
    value = (int)(lbl_80368B90 * arg1);
    object = *(void **)((u8 *)*(void **)lbl_80367140 + 0xC);
    object = *(void **)((u8 *)object + 4);

    value = (s16)value;
    value &= -(int)flag;

    *(s16 *)((u8 *)object + 0x24) = value;
}

void fn_80007268(f32 arg0) {
    extern void *lbl_80367140;

    u8 *ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);
    *(f32 *)(ptr + 0x20) = arg0;
}

void fn_8000727C(f32 arg0) {
    extern void *lbl_80367140;
    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);
    *(f32 *)(ptr + 0x1C) = arg0;
}

void fn_80007290(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
 extern void *lbl_80367140;
 u8 *ptr = (u8 *)lbl_80367140;
 ptr = *(u8 **)(ptr + 0xC);
 ptr = *(u8 **)(ptr + 4);
 ptr[0x18] = arg0;
 ptr[0x19] = arg1;
 ptr[0x1A] = arg2;
 ptr[0x1B] = arg3;
}

void fn_800072B0(u8 *a, u8 *b, u8 *c, u8 *d) {
    extern void *lbl_80367140;
    u8 *dst;
    u8 *mid;
    u8 t0, t1, t2, t3;

    t0 = a[0];
    mid = *(u8 **)((u8 *)lbl_80367140 + 0xC);
    t1 = a[1];
    dst = *(u8 **)(mid + 4);
    t2 = a[2];
    dst[0xC] = t0;
    t3 = a[3];
    dst[0xD] = t1;
    t0 = b[0];
    dst[0xE] = t2;
    t1 = b[1];
    dst[0xF] = t3;
    t2 = b[2];
    dst[0x50] = t0;
    t3 = b[3];
    dst[0x51] = t1;
    t0 = c[0];
    dst[0x52] = t2;
    t1 = c[1];
    dst[0x53] = t3;
    t2 = c[2];
    dst[0x54] = t0;
    t3 = c[3];
    dst[0x55] = t1;
    t0 = d[0];
    dst[0x56] = t2;
    t1 = d[1];
    dst[0x57] = t3;
    t2 = d[2];
    dst[0x58] = t0;
    t3 = d[3];
    dst[0x59] = t1;
    dst[0x5A] = t2;
    dst[0x5B] = t3;
}

void fn_80007340(s32 arg0, s32 arg1) {
    extern void *lbl_80367140;

    u8 *ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    *(s32 *)(ptr + 0x10) = arg0;
    *(s32 *)(ptr + 0x14) = arg1;
}

void fn_80007358(f32 arg0, f32 arg1) {
    extern void *lbl_80367140;
    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    *(f32 *)(ptr + 0x30) = arg0;
    *(f32 *)(ptr + 0x34) = arg1;
}

void fn_80007370(float arg0, float arg1, float arg2)
{
    extern void *lbl_80367140;
    extern float lbl_80368B98;
    extern float lbl_80368B9C;

    float matrix1[12];
    float matrix2[12];
    float sine;
    float cosine;
    float scale;
    void *object;

    object = *(void **)((u8 *)lbl_80367140 + 0xC);
    object = *(void **)((u8 *)object + 4);

    fn_80202540(matrix1, -arg0, -arg1, lbl_80368B98);

    scale = lbl_80368B9C * arg2;
    fn_80202300(matrix2, 0x5A, scale);

    fn_80202024(matrix2, matrix1, matrix2);

    fn_80202540(matrix1, arg0, arg1, lbl_80368B98);

    fn_80202024(matrix1, matrix2, matrix1);

    sine = matrix2[0];
    cosine = matrix2[1];

    *(float *)((u8 *)object + 0x10) =
        matrix2[2] +
        sine * *(float *)((u8 *)object + 0x30) +
        cosine * *(float *)((u8 *)object + 0x34);

    *(float *)((u8 *)object + 0x14) =
        matrix2[5] +
        matrix2[4] * *(float *)((u8 *)object + 0x30) +
        matrix2[3] * *(float *)((u8 *)object + 0x34);

    *(float *)((u8 *)object + 0x30) =
        matrix2[2] +
        sine * *(float *)((u8 *)object + 0x30) +
        cosine * *(float *)((u8 *)object + 0x34);

    *(float *)((u8 *)object + 0x34) =
        matrix2[5] +
        matrix2[4] * *(float *)((u8 *)object + 0x30) +
        matrix2[3] * *(float *)((u8 *)object + 0x34);

    *(float *)((u8 *)object + 0x40) =
        matrix2[2] +
        sine * *(float *)((u8 *)object + 0x40) +
        cosine * *(float *)((u8 *)object + 0x44);

    *(float *)((u8 *)object + 0x44) =
        matrix2[5] +
        matrix2[4] * *(float *)((u8 *)object + 0x40) +
        matrix2[3] * *(float *)((u8 *)object + 0x44);

    *(float *)((u8 *)object + 0x20) =
        matrix2[2] +
        sine * *(float *)((u8 *)object + 0x20) +
        cosine * *(float *)((u8 *)object + 0x24);

    *(float *)((u8 *)object + 0x24) =
        matrix2[5] +
        matrix2[4] * *(float *)((u8 *)object + 0x20) +
        matrix2[3] * *(float *)((u8 *)object + 0x24);
}

void fn_80007538(void)
{
    extern void *lbl_80367140;

    void *object;
    f32 x;
    f32 y;

    object = *(void **)((u8 *)lbl_80367140 + 0xC);
    object = *(void **)((u8 *)object + 4);

    x = *(f32 *)((u8 *)object + 0x18);
    y = *(f32 *)((u8 *)object + 0x1C);

    *(f32 *)((u8 *)object + 0x18) = *(f32 *)((u8 *)object + 0x48);
    *(f32 *)((u8 *)object + 0x1C) = *(f32 *)((u8 *)object + 0x4C);

    *(f32 *)((u8 *)object + 0x48) = *(f32 *)((u8 *)object + 0x28);
    *(f32 *)((u8 *)object + 0x4C) = *(f32 *)((u8 *)object + 0x2C);

    *(f32 *)((u8 *)object + 0x28) = *(f32 *)((u8 *)object + 0x38);
    *(f32 *)((u8 *)object + 0x2C) = *(f32 *)((u8 *)object + 0x3C);

    *(f32 *)((u8 *)object + 0x38) = x;
    *(f32 *)((u8 *)object + 0x3C) = y;
}

void fn_80007588(void)
{
    extern void *lbl_80367140;

    void *object;
    f32 x;
    f32 y;

    object = *(void **)((u8 *)lbl_80367140 + 0xC);
    object = *(void **)((u8 *)object + 4);

    x = *(f32 *)((u8 *)object + 0x18);
    y = *(f32 *)((u8 *)object + 0x1C);

    *(f32 *)((u8 *)object + 0x18) = *(f32 *)((u8 *)object + 0x38);
    *(f32 *)((u8 *)object + 0x1C) = *(f32 *)((u8 *)object + 0x3C);

    *(f32 *)((u8 *)object + 0x38) = *(f32 *)((u8 *)object + 0x28);
    *(f32 *)((u8 *)object + 0x3C) = *(f32 *)((u8 *)object + 0x2C);

    *(f32 *)((u8 *)object + 0x28) = *(f32 *)((u8 *)object + 0x48);
    *(f32 *)((u8 *)object + 0x2C) = *(f32 *)((u8 *)object + 0x4C);

    *(f32 *)((u8 *)object + 0x48) = x;
    *(f32 *)((u8 *)object + 0x4C) = y;
}

void fn_800075D8(void) {
    extern void *lbl_80367140;
    void *object;

    object = *(void **)((u8 *)lbl_80367140 + 0xC);
    object = *(void **)((u8 *)object + 4);

    *(f32 *)((u8 *)object + 0x30) = *(f32 *)((u8 *)object + 0x20);
    *(f32 *)((u8 *)object + 0x34) = *(f32 *)((u8 *)object + 0x14);
    *(f32 *)((u8 *)object + 0x40) = *(f32 *)((u8 *)object + 0x10);
    *(f32 *)((u8 *)object + 0x44) = *(f32 *)((u8 *)object + 0x24);
    *(f32 *)((u8 *)object + 0x38) = *(f32 *)((u8 *)object + 0x28);
    *(f32 *)((u8 *)object + 0x3C) = *(f32 *)((u8 *)object + 0x1C);
    *(f32 *)((u8 *)object + 0x48) = *(f32 *)((u8 *)object + 0x18);
    *(f32 *)((u8 *)object + 0x4C) = *(f32 *)((u8 *)object + 0x2C);
}

void fn_80007628(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
 extern void *lbl_80367140;
 u8 *ptr = (u8 *)lbl_80367140;
 ptr = *(u8 **)(ptr + 0xC);
 ptr = *(u8 **)(ptr + 4);
 *(f32 *)(ptr + 0x40) = arg0;
 *(f32 *)(ptr + 0x44) = arg1;
 *(f32 *)(ptr + 0x48) = arg2;
 *(f32 *)(ptr + 0x4C) = arg3;
}

void fn_80007648(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    extern void *lbl_80367140;
    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    *(f32 *)(ptr + 0x30) = arg0;
    *(f32 *)(ptr + 0x34) = arg1;
    *(f32 *)(ptr + 0x38) = arg2;
    *(f32 *)(ptr + 0x3C) = arg3;
}

void fn_80007668(u8 *src)
{
  extern void *lbl_80367140;
  u8 *base;
  u8 a;
  u8 b;
  u8 *new_var;
  u8 c;
  u8 *new_var2;
  u8 *ptr;
  u8 d;
  base = (u8 *) lbl_80367140;
  new_var = src;
  a = new_var[0];
  base = *((u8 **) (base + 0xC));
  new_var2 = new_var;
  b = new_var2[1];
  ptr = *((u8 **) (base + 0x4));
  if ((c && c) && c)
  {
  }
  c = new_var[2];
  ptr[0xC] = a;
  d = src[3];
  ptr[0xD] = b;
  ptr[0xE] = c;
  ptr[0xF] = d;
}

void fn_80007698(u8 arg0) {
    extern void *lbl_80367140;

    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    *(u8 *)(ptr + 0xF) = arg0;
}

void fn_800076AC(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    extern void *lbl_80367140;
    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    ptr[0xC] = arg0;
    ptr[0xD] = arg1;
    ptr[0xE] = arg2;
    ptr[0xF] = arg3;
}

void fn_800076CC(void) {
 extern void *lbl_80367140;
 u8 *ptr;
 f32 temp;
 ptr = (u8 *)lbl_80367140;
 ptr = *(u8 **)(ptr + 0xC);
 ptr = *(u8 **)(ptr + 4);
 temp = *(f32 *)(ptr + 0x1C);
 *(f32 *)(ptr + 0x1C) = *(f32 *)(ptr + 0x2C);
 *(f32 *)(ptr + 0x2C) = temp;
}

void fn_800076EC(void) {
    extern void *lbl_80367140;

    u8 *ptr;
    f32 temp;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    temp = *(f32 *)(ptr + 0x18);
    *(f32 *)(ptr + 0x18) = *(f32 *)(ptr + 0x28);
    *(f32 *)(ptr + 0x28) = temp;
}

void fn_8000770C(f32 a, f32 b, f32 c, f32 d, f32 e, f32 f)
{
    extern u8 *lbl_80367140;
    extern f32 lbl_80368B98;
    extern f32 lbl_80368B94;
    void *p;
    f32 t0, t1, t2, t3;
    f32 c98, c94;

    p = lbl_80367140;
    t0 = a + e;
    t1 = b + f;
    c98 = lbl_80368B98;
    p = *(void **)((u8 *)p + 0xC);
    t2 = c + e;
    c94 = lbl_80368B94;
    p = *(void **)((u8 *)p + 4);
    t3 = d + f;

    *(f32 *)((u8 *)p + 0x10) = a;
    *(f32 *)((u8 *)p + 0x20) = t0;
    *(f32 *)((u8 *)p + 0x14) = b;
    *(f32 *)((u8 *)p + 0x24) = t1;
    *(f32 *)((u8 *)p + 0x1C) = c98;
    *(f32 *)((u8 *)p + 0x18) = c98;
    *(f32 *)((u8 *)p + 0x2C) = c94;
    *(f32 *)((u8 *)p + 0x28) = c94;

    p = *(void **)(lbl_80367140 + 0xC);
    p = *(void **)((u8 *)p + 4);

    *(f32 *)((u8 *)p + 0x18) = c;
    *(f32 *)((u8 *)p + 0x1C) = d;
    *(f32 *)((u8 *)p + 0x28) = t2;
    *(f32 *)((u8 *)p + 0x2C) = t3;
}

void fn_80007770(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    extern void *lbl_80367140;
    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    *(f32 *)(ptr + 0x18) = arg0;
    *(f32 *)(ptr + 0x1C) = arg1;
    *(f32 *)(ptr + 0x28) = arg2;
    *(f32 *)(ptr + 0x2C) = arg3;
}

void fn_80007790(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    extern void *lbl_80367140;
    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    *(f32 *)(ptr + 0x10) = arg0;
    *(f32 *)(ptr + 0x14) = arg1;
    *(f32 *)(ptr + 0x20) = arg2;
    *(f32 *)(ptr + 0x24) = arg3;
}

void fn_800077B0(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    extern void *lbl_80367140;
    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    *(f32 *)(ptr + 0x18) = arg0;
    *(f32 *)(ptr + 0x1C) = arg1;
    *(f32 *)(ptr + 0x28) = arg0 + arg2;
    *(f32 *)(ptr + 0x2C) = arg1 + arg3;
}

void fn_800077D8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    extern void *lbl_80367140;
    extern f32 lbl_80368B98;
    extern f32 lbl_80368B94;
    u8 *ptr;
    f32 sum_x;
    f32 sum_y;
    f32 constant1;
    f32 constant2;

    ptr = (u8 *)lbl_80367140;
    sum_x = arg0 + arg2;
    sum_y = arg1 + arg3;
    constant1 = lbl_80368B98;
    ptr = *(u8 **)(ptr + 0xC);
    constant2 = lbl_80368B94;
    ptr = *(u8 **)(ptr + 0x4);

    *(f32 *)(ptr + 0x10) = arg0;
    *(f32 *)(ptr + 0x20) = sum_x;
    *(f32 *)(ptr + 0x14) = arg1;
    *(f32 *)(ptr + 0x24) = sum_y;
    *(f32 *)(ptr + 0x1C) = constant1;
    *(f32 *)(ptr + 0x18) = constant1;
    *(f32 *)(ptr + 0x2C) = constant2;
    *(f32 *)(ptr + 0x28) = constant2;
}

void fn_80007818(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    extern void *lbl_80367140;
    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    *(f32 *)(ptr + 0x20) = arg0;
    *(f32 *)(ptr + 0x24) = arg1;
    *(f32 *)(ptr + 0x28) = arg2;
    *(f32 *)(ptr + 0x2C) = arg3;
}

void fn_80007838(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    extern void *lbl_80367140;
    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    *(f32 *)(ptr + 0x10) = arg0;
    *(f32 *)(ptr + 0x14) = arg1;
    *(f32 *)(ptr + 0x18) = arg2;
    *(f32 *)(ptr + 0x1C) = arg3;
}

void fn_80007858(f32 arg0, f32 arg1) {
    extern void *lbl_80367140;

    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);

    *(f32 *)(ptr + 0x10) = arg0;
    *(f32 *)(ptr + 0x14) = arg1;
}

void fn_80007870(f32 arg0) {
    extern void *lbl_80367140;
    u8 *ptr;

    ptr = (u8 *)lbl_80367140;
    ptr = *(u8 **)(ptr + 0xC);
    ptr = *(u8 **)(ptr + 0x4);
    *(f32 *)(ptr + 0x8) = arg0;
}

void fn_80007884(void) {
    extern u8 *lbl_80367140;
    *(s16 *)(lbl_80367140 + 0x92) += 1;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_80007898(u8 arg0) {
    extern void *lbl_80367140;
    extern f32 lbl_80368B98;
    extern f32 lbl_80368B94;
    extern char lbl_80267C70[];
    s32 fn_80006AF4(void *);
    s32 fn_80006264(void *, void *, s32);
    void fn_800062CC(void *, void *, s32);
    void fn_8020602C(char *, ...);
    u8 *fn_8018D900(s32);

    void *prev;
    void *node;
    void *self;
    s32 size;

    if (*(u8 *)((u8 *)lbl_80367140 + 0xA8) == 2) {
        s32 tmp;
        tmp = fn_80006AF4((u8 *)lbl_80367140 + 0x20);
        prev = 0;
        *(s32 *)((u8 *)lbl_80367140 + 0x18) = tmp;
        self = lbl_80367140;
        node = *(void **)((u8 *)self + 0xC);
        while (node) {
            if (*(u32 *)((u8 *)node + 8) == *(u32 *)((u8 *)self + 0x18)) {
                if (fn_80006264((u8 *)node + 0x10, (u8 *)self + 0x20, 0x70) == 0) {
                    if (*(void **)((u8 *)lbl_80367140 + 0xC) != node)
                        goto unlink;
                    goto after_loop;
                unlink:
                    if (prev != 0) {
                        *(void **)prev = *(void **)node;
                    }
                    *(void **)node = *(void **)((u8 *)lbl_80367140 + 0xC);
                    *(void **)((u8 *)lbl_80367140 + 0xC) = node;
                    goto after_loop;
                }
            }
            prev = node;
            node = *(void **)node;
        }
        node = 0;
    after_loop:
        if (node == 0) {
            void *ctx;
            void *entry;
            ctx = lbl_80367140;
            entry = *(void **)((u8 *)ctx + 8);
            *(void **)((u8 *)ctx + 8) = (u8 *)entry + 0x80;
            *(void **)entry = *(void **)((u8 *)lbl_80367140 + 0xC);
            *(void **)((u8 *)lbl_80367140 + 0xC) = entry;
            *(s32 *)((u8 *)entry + 4) = 0;
            *(s16 *)((u8 *)entry + 0xC) = -1;
            *(s32 *)((u8 *)entry + 8) = *(s32 *)((u8 *)lbl_80367140 + 0x18);
            fn_800062CC((u8 *)entry + 0x10, (u8 *)lbl_80367140 + 0x20, 0x70);
            ctx = lbl_80367140;
            *(s16 *)((u8 *)ctx + 0x90) = (s16)(*(s16 *)((u8 *)ctx + 0x90) + 1);
        }
        *(u8 *)((u8 *)lbl_80367140 + 0xA8) = 3;
    }
    {
        u32 type;
        register void *entry;
        void *ctx;
        s32 neg1;
        f32 ftmp;
        type = arg0;
        switch (type) {
        case 1:
        case 4:
            size = 0x30;
            break;
        case 2:
            size = 0x50;
            break;
        case 3:
            size = 0x5C;
            break;
        case 5:
        case 6:
        case 7:
        case 10:
            size = 0x28;
            break;
        case 9:
            size = 0x38;
            break;
        case 11:
            size = 0x18;
            break;
        default:
            fn_8020602C(lbl_80267C70 + 0x1A, 0x54B, lbl_80267C70 + 0x23);
        }
        ctx = lbl_80367140;
        neg1 = -1;
        ftmp = lbl_80368B98;
        entry = *(void **)((u8 *)ctx + 8);
        *(void **)((u8 *)ctx + 8) = (u8 *)entry + size;
        *(u8 *)((u8 *)entry + 4) = arg0;
        *(u8 *)((u8 *)entry + 5) = (u8)size;
        *(f32 *)((u8 *)entry + 8) = ftmp;
        *(s32 *)((u8 *)entry + 0xC) = (unsigned)neg1;
        {
            void *head;
            head = *(void **)((u8 *)lbl_80367140 + 0xC);
            *(void **)entry = *(void **)((u8 *)head + 4);
            head = *(void **)((u8 *)lbl_80367140 + 0xC);
            *(void **)((u8 *)head + 4) = entry;
        }
        if ((s32)type == 10) {
            goto init_extra;
        }
        if ((s32)type >= 10) {
            goto skip_extra;
        }
        if ((s32)type >= 8) {
            goto skip_extra;
        }
        if ((s32)type >= 5) {
            goto init_extra;
        }
        goto skip_extra;
    init_extra:
        {
            f32 f1;
            f32 f0;
            s16 z;
            void *e;
            u8 *p;
            z = 0;
            f1 = lbl_80368B94;
            ctx = lbl_80367140;
            f0 = lbl_80368B98;
            e = *(void **)((u8 *)*(void **)((u8 *)ctx + 0xC) + 4);
            *(f32 *)((u8 *)e + 0x20) = f0;
            *(f32 *)((u8 *)e + 0x1C) = f1;
            *(s16 *)((u8 *)e + 0x24) = z;
            *(s16 *)((u8 *)e + 0x26) = z;
            p = fn_8018D900(1);
            *(u8 *)((u8 *)e + 0x18) = p[0];
            *(u8 *)((u8 *)e + 0x19) = p[1];
            *(u8 *)((u8 *)e + 0x1A) = p[2];
            *(u8 *)((u8 *)e + 0x1B) = p[3];
        }
    skip_extra:
        ;
    }
}

void fn_80007B04(void)
{
    s32 OSGetTick(void);
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_80224C4C(void *, s32);
    void fn_8021FBB8(void);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802250D0(u32 *, u32 *, u32 *, u32 *);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    void fn_80224684(s32, s32, s32);
    void fn_802246B8(s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void fn_80225058(u32, u32, u32);
    void fn_80009728(void *, void *, u8);
    void fn_80224D7C(void *, s16);
    void fn_80224E1C(s16);
    void fn_80009008(s32, u8, u8);
    extern void *lbl_80367140;
    extern f32 lbl_80368B98;
    extern f32 lbl_80368BA0;
    extern f32 lbl_80368BA4;
    extern f32 lbl_80368BA8;
    extern f32 lbl_80368BAC;
    extern f32 lbl_80368BB0;
    extern f32 lbl_80368BB4;
    extern s16 lbl_802837B0[];

    u8 sp128[0x40];
    u32 sp24, sp20, sp1C, sp18;
    u32 sp14, sp10, spC, sp8;
    void **buf;
    void **slot;
    void *node;
    void **walk;
    u8 swapped;
    s32 i;
    u16 flags;
    f32 f3, f2, f1;
    void *mgr;

    mgr = lbl_80367140;
    M2C_FIELD(mgr, s32 *, 0xA4) = OSGetTick();
    f1 = lbl_80368B98;
    fn_80202B3C(sp128, f1, lbl_80368BAC, f1, lbl_80368BB0, f1, lbl_80368BB4);
    fn_80224C4C(sp128, 1);
    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021F4E4(0xB, 1);
    fn_8021F4E4(0xD, 1);
    fn_8021FBF0(0, 9, 1, 4, 0);
    fn_8021FBF0(0, 0xB, 1, 5, 0);
    fn_8021FBF0(0, 0xD, 1, 4, 0);
    fn_80222334(1);
    fn_80222370(4, 0, 0, 1, 0, 0, 2);
    fn_802240C8(1);

    mgr = lbl_80367140;
    f3 = lbl_80368BA0;
    f2 = lbl_80368BA4;
    f1 = lbl_80368BA8;
    buf = M2C_FIELD(mgr, void ***, 8);
    M2C_FIELD(mgr, void ***, 8) = (void **)((u8 *)buf + ((M2C_FIELD(mgr, s16 *, 0x90) + 1) << 2));
    slot = buf;
    node = M2C_FIELD(lbl_80367140, void **, 0xC);
    while (node != NULL) {
        *slot = node;
        slot++;
        flags = M2C_FIELD(node, u16 *, 0x10);
        if (!(flags & 0xF0)) {
            if (flags & 0x800) {
                M2C_FIELD(node, f32 *, 0x18) = f3;
            } else {
                M2C_FIELD(node, f32 *, 0x18) = f2;
            }
        } else if (flags & 0x800) {
            M2C_FIELD(node, f32 *, 0x18) += f1;
        }
        node = M2C_FIELD(node, void **, 0);
    }

    do {
        swapped = 0;
        walk = buf;
        for (i = 0; i < M2C_FIELD(lbl_80367140, s16 *, 0x90) - 1; i++, walk++) {
            void *a = walk[0];
            void *b = walk[1];
            if (M2C_FIELD(a, f32 *, 0x18) < M2C_FIELD(b, f32 *, 0x18)) {
                walk[0] = b;
                swapped = 1;
                walk[1] = a;
            }
        }
    } while (swapped);

    buf[M2C_FIELD(lbl_80367140, s16 *, 0x90)] = NULL;
    fn_802250D0(&sp24, &sp20, &sp1C, &sp18);
    mgr = lbl_80367140;
    fn_80224FEC(lbl_80368B98, lbl_80368B98, lbl_80368BB0, lbl_80368BAC,
                M2C_FIELD(mgr, f32 *, 0x9C), M2C_FIELD(mgr, f32 *, 0xA0));
    fn_80224684(1, 3, 1);
    fn_802246B8(0);
    fn_80223E5C(6, 0x80, 1, 0, 0);

    walk = buf;
    while (*walk != NULL) {
        node = *walk;
        flags = M2C_FIELD(node, u16 *, 0x10);
        if (!(flags & 0xF0) && !(flags & 0x800)) {
            fn_802250D0(&sp14, &sp10, &spC, &sp8);
            if (sp24 != sp14 || sp20 != sp10 || sp1C != spC || sp18 != sp8) {
                fn_80225058(sp20, sp1C, sp18);
            }
            node = *walk;
            if (M2C_FIELD(node, u16 *, 0x10) & 0x1000) {
                void (*cb)(void *, void *, void *, u8) =
                    (void (*)(void *, void *, void *, u8))M2C_FIELD(node, void **, 0x1C);
                cb(M2C_FIELD(node, void **, 0x20), (u8 *)node + 0x24, (u8 *)node + 0x44,
                   M2C_FIELD(node, u8 *, 0x12));
            } else {
                fn_80009728((u8 *)node + 0x24, (u8 *)node + 0x44, M2C_FIELD(node, u8 *, 0x12));
            }
            if (M2C_FIELD(*walk, s16 *, 0xC) < 0) {
                void **p = walk;
                s16 *tbl = lbl_802837B0;
                s32 n = 0;
                while (*p != NULL && n < 0xA) {
                    void *e = *p;
                    if (M2C_FIELD(e, u16 *, 0x10) & 0x400) {
                        M2C_FIELD(e, s16 *, 0xC) = lbl_802837B0[n];
                        fn_80224D7C((u8 *)*p + 0x50, lbl_802837B0[n]);
                        break;
                    }
                    M2C_FIELD(e, s16 *, 0xC) = *tbl;
                    fn_80224D7C((u8 *)*p + 0x50, *tbl);
                    p++;
                    tbl++;
                    n++;
                }
            }
            fn_80224E1C(M2C_FIELD(*walk, s16 *, 0xC));
            node = *walk;
            if (M2C_FIELD(node, u16 *, 0x10) & 0x2000) {
                void (*cb)(void *, void *, void *, u8) =
                    (void (*)(void *, void *, void *, u8))M2C_FIELD(node, void **, 0x1C);
                cb(M2C_FIELD(node, void **, 0x20), (u8 *)node + 0x24, (u8 *)node + 0x44,
                   M2C_FIELD(node, u8 *, 0x12));
            }
            {
                u8 a9 = M2C_FIELD(lbl_80367140, u8 *, 0xA9);
                node = *walk;
                if (a9 == 0xFF || (M2C_FIELD(node, u16 *, 0x10) & 0x400)) {
                    node = *walk;
                    fn_80009008(M2C_FIELD(node, s32 *, 4), M2C_FIELD(node, u8 *, 0x13),
                                M2C_FIELD(node, u8 *, 0x14));
                } else if (a9 != 0) {
                    fn_80009008(M2C_FIELD(node, s32 *, 4),
                                (u8)((s32)(a9 * M2C_FIELD(node, u8 *, 0x13)) >> 8),
                                M2C_FIELD(node, u8 *, 0x14));
                }
            }
            node = *walk;
            if (M2C_FIELD(node, u16 *, 0x10) & 0x4000) {
                void (*cb)(void *, void *, void *, u8) =
                    (void (*)(void *, void *, void *, u8))M2C_FIELD(node, void **, 0x1C);
                cb(M2C_FIELD(node, void **, 0x20), (u8 *)node + 0x24, (u8 *)node + 0x44,
                   M2C_FIELD(node, u8 *, 0x12));
            }
            flags = M2C_FIELD(*walk, u16 *, 0x10);
            if (flags & 0x400) {
                if (!(flags & 0xF0)) {
                    fn_80224684(1, 3, 1);
                    fn_802246B8(0);
                    fn_80223E5C(6, 0x80, 1, 0, 0);
                } else {
                    fn_80224684(1, 3, 0);
                    fn_802246B8(1);
                    fn_80223E5C(7, 0, 1, 7, 0);
                }
                {
                    u8 mat[0x40];
                    f32 z = lbl_80368B98;
                    fn_80202B3C(mat, z, lbl_80368BAC, z, lbl_80368BB0, z, lbl_80368BB4);
                    fn_80224C4C(mat, 1);
                }
                fn_8021FBB8();
                fn_8021F4E4(9, 1);
                fn_8021F4E4(0xB, 1);
                fn_8021F4E4(0xD, 1);
                fn_8021FBF0(0, 9, 1, 4, 0);
                fn_8021FBF0(0, 0xB, 1, 5, 0);
                fn_8021FBF0(0, 0xD, 1, 4, 0);
                fn_80222334(1);
                fn_80222370(4, 0, 0, 1, 0, 0, 2);
                fn_802240C8(1);
            }
        }
        walk++;
    }

    mgr = lbl_80367140;
    fn_80224FEC(lbl_80368B98, lbl_80368B98, lbl_80368BB0, lbl_80368BAC,
                M2C_FIELD(mgr, f32 *, 0x94), M2C_FIELD(mgr, f32 *, 0x98));
    mgr = lbl_80367140;
    M2C_FIELD(mgr, s32 *, 0xA4) = OSGetTick() - M2C_FIELD(mgr, s32 *, 0xA4);
    M2C_FIELD(lbl_80367140, u8 *, 0xA9) = 0xFF;
}

#pragma global_optimizer on
void fn_80008B94(void)
{
    extern u8 *lbl_80367140;
    extern void fn_80201FC4(void *);

    *(s32 *)(lbl_80367140 + 8) = *(s32 *)lbl_80367140 + 0xAC;
    *(s32 *)(lbl_80367140 + 0xC) = 0;
    *(s16 *)(lbl_80367140 + 0x92) = 0;
    *(s16 *)(lbl_80367140 + 0x90) = 0;
    fn_80201FC4(lbl_80367140 + 0x60);
    *(s32 *)(lbl_80367140 + 0x2C) = 0;
    *(s32 *)(lbl_80367140 + 0x30) = 0;
    lbl_80367140[0x23] = 0xFF;
    lbl_80367140[0x24] = 0x80;
    *(s16 *)(lbl_80367140 + 0x20) = 0;
    lbl_80367140[0xA8] = 0;
}

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
    extern u16 lbl_80367140;

    *(u32 *)(*(u8 **)&lbl_80367140 + 0x2c) = 0;
    *(u32 *)(*(u8 **)&lbl_80367140 + 0x30) = 0;
    *(u16 *)(*(u8 **)&lbl_80367140 + 0x20) &= ~0x7000;
}

void fn_80009BC0(s32 arg0, s32 arg1) {
    extern u16 lbl_80367140;

    *(u32 *)(*(u8 **)&lbl_80367140 + 0x2c) = arg0;
    *(u32 *)(*(u8 **)&lbl_80367140 + 0x30) = arg1;
    *(u16 *)(*(u8 **)&lbl_80367140 + 0x20) &= ~0x7000;
    *(u16 *)(*(u8 **)&lbl_80367140 + 0x20) |= 0x2000;
}

void fn_80009BF4(f32 farg0) {
    *(f32 *)(*(u8 **)&lbl_80367140 + 0x28) = farg0;
}

f32 fn_80009C00(void) {
    return *(f32 *)(*(u8 **)&lbl_80367140 + 0x28);
}

void fn_80009C0C(f32 farg0) {
    extern u16 lbl_80367140;
    *(f32 *)(*(u8 **)&lbl_80367140 + 0x28) += farg0;
}

void fn_80009C20(
    float arg0,
    float arg1,
    float arg2,
    float arg3,
    float arg4,
    float arg5,
    float arg6,
    float arg7
)
{
    extern float lbl_80368B94;
    extern float lbl_80368B98;
    extern float lbl_80368B9C;

    float matrix0[12];
    float matrix1[12];
    float matrix2[12];
    float matrix3[12];
    float matrix4[12];
    float result[12];
    float scalar;

    scalar = arg2;

    fn_80202540(matrix0, arg0, arg1);

    fn_802025C0(matrix1, arg5, arg6, lbl_80368B94);

    fn_80202300(matrix2, 0x5A, lbl_80368B9C * arg7);

    fn_80202540(matrix3, -arg3, -arg4, lbl_80368B98);
    fn_80202540(matrix4, arg3, arg4, lbl_80368B98);

    fn_80202024(matrix1, matrix3, result);
    fn_80202024(matrix2, result, result);
    fn_80202024(matrix4, result, result);
    fn_80202024(matrix0, result, result);

    fn_80201FF0(result, (u8 *)lbl_80367140 + 0x60);

    *(float *)((u8 *)lbl_80367140 + 0x28) = scalar;
    *(u16 *)((u8 *)lbl_80367140 + 0x20) &= ~(1 << 10);
}

void fn_80009D74(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (arg0 <= arg1) {
        arg0 = arg1;
    }
    
    if (arg2 <= arg3) {
        arg2 = arg3;
    }
}

#pragma peephole off
void *fn_80009E44(f32 *arg0) {
    extern u16 lbl_80367140;
    if (arg0 == NULL) {
        return arg0;
    }
    *arg0 = *(f32 *)(*(u8 **)&lbl_80367140 + 0x28);
    return *(u8 **)&lbl_80367140 + 0x60;
}
#pragma peephole on
void fn_80009E64(void *src, f32 farg0) {
    void fn_80201FF0(void *, void *);
    extern u16 lbl_80367140;

    fn_80201FF0(src, *(u8 **)&lbl_80367140 + 0x60);
    *(f32 *)(*(u8 **)&lbl_80367140 + 0x28) = farg0;
    *(u16 *)(*(u8 **)&lbl_80367140 + 0x20) = (u16)(*(u16 *)(*(u8 **)&lbl_80367140 + 0x20) & ~0x800);
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
    extern u16 lbl_80367140;
    *(u8 *)(*(u8 **)&lbl_80367140 + 0xa8) = 2;
}

void fn_8000A258(void) {
*(u8 *)(*(u8 **)&lbl_80367140+0xA8)=1;
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
    *(f32 *)(*(u8 **)&lbl_80367140 + 0x98) = arg0;
    *(f32 *)(*(u8 **)&lbl_80367140 + 0x94) = arg1;
    *(f32 *)(*(u8 **)&lbl_80367140 + 0xa0) = arg2;
    *(f32 *)(*(u8 **)&lbl_80367140 + 0x9c) = arg3;
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

void fn_8000A388(u32 arg0, void (*arg1)(void *, s32), s32 arg2) {
    extern u8 lbl_802A66D8[];
    u8 *var_r31;
    s32 var_r30;

    var_r31 = lbl_802A66D8;
    var_r30 = 0;
    do {
        if (*(u32 *)var_r31 == arg0) {
            arg1(var_r31, arg2);
        }
        var_r30 += 1;
        var_r31 += 0x70;
    } while (var_r30 < 0x100);
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
    extern s32 lbl_802ADAFC[];
    lbl_802ADAFC[arg0] = arg1;
}

void fn_8000A454(void *arg0, s32 *arg1, s32 *arg2)
{
    extern u8 lbl_80267CB0[];

    u8 *node;
    u8 *current;
    u8 *text;
    s32 length;
    u32 color;
    s32 depth;

    current = (u8 *)arg0;
    node = *(u8 **)(current + 0x24);

    if (node != 0) {
        if (*(u8 **)(node + 0x24) != 0) {
            fn_8000A454(*(void **)(node + 0x24), arg1, arg2);
        }

        color = 0xFFFFFFFF;
        depth = *arg1;
        *arg1 = depth + 1;

        if ((node[0x2C] & 2) != 0) {
            color = 0xFFC0C0FF;
        }

        if (node[0x2D] != 0) {
            color = 0xA0A0A0FF;
        }

        if ((node[0x2C] & 4) != 0) {
            if ((*(u8 **)(node + 0x18))[0x2D] != 0) {
                color = 0xA0A0A0FF;
            }
        }

        if (node[0x2E] != 0) {
            color = 0x4040FFFF;
        }

        fn_8014BB58(
            depth * 8,
            *arg2 * 8,
            &color,
            *(void **)(node + 0x14)
        );

        if (*(u32 *)(node + 0x0C) != 0) {
            text = *(u8 **)(node + 0x14);
            length = 0;

            while (text[length] != 0) {
                length++;
            }

            fn_8014BB58(
                (depth + length + 1) * 8,
                *arg2 * 8,
                &color,
                lbl_80267CB0 + 0x76
            );

            (*arg2)++;
        }

        if (*(u8 **)(node + 0x1C) != 0) {
            fn_8000A454(*(void **)(node + 0x1C), arg1, arg2);
        }

        (*arg1)--;
    }

    color = 0xFFFFFFFF;
    depth = *arg1;
    *arg1 = depth + 1;

    if ((current[0x2C] & 2) != 0) {
        color = 0xFFC0C0FF;
    }

    if (current[0x2D] != 0) {
        color = 0xA0A0A0FF;
    }

    if ((current[0x2C] & 4) != 0) {
        if ((*(u8 **)(current + 0x18))[0x2D] != 0) {
            color = 0xA0A0A0FF;
        }
    }

    if (current[0x2E] != 0) {
        color = 0x4040FFFF;
    }

    fn_8014BB58(
        depth * 8,
        *arg2 * 8,
        &color,
        *(void **)(current + 0x14)
    );

    if (*(u32 *)(current + 0x0C) != 0) {
        text = *(u8 **)(current + 0x14);
        length = 0;

        while (text[length] != 0) {
            length++;
        }

        fn_8014BB58(
            (depth + length + 1) * 8,
            *arg2 * 8,
            &color,
            lbl_80267CB0 + 0x76
        );

        (*arg2)++;
    }

    if (*(u8 **)(current + 0x1C) != 0) {
        fn_8000A454(*(void **)(current + 0x1C), arg1, arg2);
    }

    (*arg1)--;
    (*arg1)--;
}

void fn_8000A860(void) {
    void fn_8000A258(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A248(void);
    void fn_8014BB58(s32, s32, s32 *, s32);
    void fn_8000A454(u32, s32 *, s32 *, s32);
    extern f32 lbl_80368BCC;
    extern f32 lbl_80368BD0;
    extern f32 lbl_80368BD4;
    extern s32 lbl_80368BC8;
    extern u32 lbl_802ADADC[];
    extern s32 lbl_802838C8[];

    s32 sp10 = 1;
    s32 spC = 0;
    s32 sp8;
    u32 *var_r31;
    s32 *var_r30;
    s32 var_r29;

    fn_8000A258(1);
    fn_80009D74(lbl_80368BCC, lbl_80368BCC, lbl_80368BD0, lbl_80368BD4);
    fn_8000A248();
    var_r31 = lbl_802ADADC;
    var_r29 = 0;
    var_r30 = lbl_802838C8;
    while (*var_r31 != 0) {
        sp8 = lbl_80368BC8;
        fn_8014BB58(0, spC * 8, &sp8, *var_r30);
        {
            s32 old = spC;
            spC = old + 1;
            fn_8000A454(*var_r31, &sp10, &spC, old);
        }
        var_r29++;
        var_r30++;
        if (var_r29 >= 8) {
            var_r31++;
            break;
        }
        var_r31++;
    }
}

s32 fn_8000A930(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 0x10);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8000A950(void *arg0)
{
    extern u8 lbl_802A66D8[];

    u8 *table;
    u8 *entry;
    char *search;
    char *candidate;
    s32 i;
    s32 j;
    s32 equal;

    table = lbl_802A66D8;
    search = *(char **)(*(u8 **)((u8 *)arg0 + 4) + 4);

    for (i = 0; i < 0x80; i++) {
        entry = table + i * 0x70;

        if (*(u32 *)entry != 0) {
            candidate = *(char **)(entry + 0x14);
            equal = 1;

            if (candidate != 0) {
                for (j = 0; ; j++) {
                    if ((signed char)candidate[j] !=
                        (signed char)search[j]) {
                        equal = 0;
                        break;
                    }

                    if (candidate[j] == 0) {
                        break;
                    }
                }

                if (equal != 0) {
                    *(u32 *)(entry + 0x10) = 0;
                    *(u32 *)((u8 *)arg0 + 4) += 8;
                    return 1;
                }
            }
        }

        entry += 0x70;

        if (*(u32 *)entry != 0) {
            candidate = *(char **)(entry + 0x14);
            equal = 1;

            if (candidate != 0) {
                for (j = 0; ; j++) {
                    if ((signed char)candidate[j] !=
                        (signed char)search[j]) {
                        equal = 0;
                        break;
                    }

                    if (candidate[j] == 0) {
                        break;
                    }
                }

                if (equal != 0) {
                    *(u32 *)(entry + 0x10) = 0;
                    *(u32 *)((u8 *)arg0 + 4) += 8;
                    return 1;
                }
            }
        }
    }

    return 0;
}

s32 fn_8000AA60(void *arg0)
{
    extern u8 lbl_802A66D8[];
    void fn_8000C60C(void *);

    u8 *entry;
    u8 *source;
    u8 *a;
    u8 *b;
    s32 i;
    s32 result;

    entry = lbl_802A66D8;
    source = *(u8 **)(*(u8 **)((u8 *)arg0 + 4) + 4);

    for (i = 0; i < 0x80; i++) {
        if (*(u32 *)entry != 0) {
            a = *(u8 **)(entry + 0x14);
            b = source;

            do {
                s32 c1 = (s8)*a;
                s32 c2 = (s8)*b;

                if (c1 != c2) {
                    result = c1 - c2;
                    break;
                }

                a++;
                b++;

                if ((c1 | c2) == 0) {
                    result = 0;
                    break;
                }
            } while (1);

            if (result == 0) {
                goto found;
            }
        }

        entry += 0x70;

        if (*(u32 *)entry != 0) {
            a = *(u8 **)(entry + 0x14);
            b = source;

            do {
                s32 c1 = (s8)*a;
                s32 c2 = (s8)*b;

                if (c1 != c2) {
                    result = c1 - c2;
                    break;
                }

                a++;
                b++;

                if ((c1 | c2) == 0) {
                    result = 0;
                    break;
                }
            } while (1);

            if (result == 0) {
                goto found;
            }
        }

        entry += 0x70;
    }

    entry = 0;

found:
    if (entry != 0) {
        fn_8000C60C(entry);
    }

    *(u32 *)((u8 *)arg0 + 4) += 8;

    return 1;
}

#pragma global_optimizer off
s32 fn_8000AB90(void *arg0) {
    extern u8 lbl_802A66D8[];
    u8 *entry;
    u8 *source;
    u8 *a;
    u8 *b;
    u32 n;
    u32 diff;
    u32 raw1;
    u32 raw2;
    s32 c1;
    s32 c2;
    u8 *p;
    u32 ctr;

    p = *(u8 **)((u8 *)arg0 + 4);
    ctr = 0x80;
    source = *(u8 **)(p + 4);
    entry = lbl_802A66D8;
    n = 0;
    for (; ctr != 0; ctr--) {
        if (*(u32 *)entry != 0) {
            a = *(u8 **)(entry + 0x14);
            b = source;
            goto cmp1_ld;
        cmp1:
            if ((s8)raw1 != (s8)raw2) {
                diff = (u32)(c1 - c2);
                goto cmp1_done;
            }
            a += 1;
            b += 1;
        cmp1_ld:
            raw1 = *a;
            raw2 = *b;
            c1 = (s8)raw1;
            c2 = (s8)raw2;
            if ((c1 | c2) != 0) {
                goto cmp1;
            }
            diff = 0;
        cmp1_done:
            if (diff != 0) {
                goto next1;
            }
            goto found;
        }
    next1:
        entry += 0x70;
        if (*(u32 *)entry != 0) {
            b = source;
            a = *(u8 **)(entry + 0x14);
            goto cmp2_ld;
        cmp2:
            if ((s8)raw1 != (s8)raw2) {
                diff = (u32)(c1 - c2);
                goto cmp2_done;
            }
            a += 1;
            b += 1;
        cmp2_ld:
            raw1 = *a;
            raw2 = *b;
            c1 = (s8)raw1;
            c2 = (s8)raw2;
            if ((c1 | c2) != 0) {
                goto cmp2;
            }
            diff = 0;
        cmp2_done:
            if (diff != 0) {
                goto next2;
            }
            goto found;
        }
    next2:
        n += 1;
        entry += 0x70;
    }
    entry = 0;
found:
    if (entry == 0) {
        *(u8 **)((u8 *)arg0 + 4) = *(u8 **)((u8 *)arg0 + 4) + 8;
        return 1;
    }
    return 0;
}
#pragma global_optimizer on
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

s32 fn_8000ACE0(void *arg0)
{
    extern u8 lbl_802A66D8[];

    u8 *entry;
    u32 value;
    s32 i;

    entry = lbl_802A66D8;
    value = *(u32 *)(*(u8 **)((u8 *)arg0 + 4) + 4);

    for (i = 0; i < 0x100; i++) {
        if (*(u32 *)entry == value) {
            *(u32 *)(entry + 0x10) = 0;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            *(u32 *)(entry + 0x10) = 0;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            *(u32 *)(entry + 0x10) = 0;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            *(u32 *)(entry + 0x10) = 0;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            *(u32 *)(entry + 0x10) = 0;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            *(u32 *)(entry + 0x10) = 0;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            *(u32 *)(entry + 0x10) = 0;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            *(u32 *)(entry + 0x10) = 0;
        }

        entry += 0x70;
        i += 7;
    }

    *(u32 *)((u8 *)arg0 + 4) += 8;

    return 1;
}

s32 fn_8000ADA0(void *arg0) {
    s32 fn_8000BF00(s32);
    fn_8000BF00(((s32 **) arg0)[1][1]);
    ((s32 **) arg0)[1] = ((s32 **) arg0)[1] + 2;
    return 1;
}

s32 fn_8000ADE4(void *arg0)
{
    extern u8 lbl_802A66D8[];

    u8 *entry;
    u32 value;
    s32 i;

    entry = lbl_802A66D8;
    value = *(u32 *)(*(u8 **)((u8 *)arg0 + 4) + 4);

    for (i = 0; i < 0x20; i++) {
        if (*(u32 *)entry == value) {
            goto found;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            goto found;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            goto found;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            goto found;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            goto found;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            goto found;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            goto found;
        }

        entry += 0x70;

        if (*(u32 *)entry == value) {
            goto found;
        }

        entry += 0x70;
    }

    entry = 0;

found:
    if (entry != 0) {
        return 0;
    }

    *(u32 *)((u8 *)arg0 + 4) += 8;

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

s32 fn_8000AF4C(void *arg0)
{
    extern void fn_8000CAF0(void *, void *);

    void *value;

    value = *(void **)(*(u8 **)((u8 *)arg0 + 4) + 4);

    fn_8000CAF0(value, arg0);

    *(u8 **)((u8 *)arg0 + 4) += 8;

    return 1;
}

s32 fn_8000AF94(void *arg0) {
    u32 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 **, 4);
    M2C_FIELD(arg0, u32 **, 4) = (u32 *) ((unsigned)temp_r4 + 4);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) ((u32) *temp_r4 >> 0x10U);
    return 1;
}

s32 fn_8000AFB4(void *arg0) {
    void **temp_r4;

    temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 0x10) = (void *)temp_r4[1];
    temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 4) = (void *)((u32)temp_r4 + 8);
    return 0;
}

void fn_8000AFD4(void *arg0) {
    u32 *entry;
    u32 value;
    s16 argument;
    u32 arg1;
    void (*callback)(void *, u32, s16);

    entry = *(u32 **)((u8 *)arg0 + 4);
    value = entry[0];
    callback = (void (*)(void *, u32, s16))entry[1];
    arg1 = entry[2];
    argument = (s16)(value >> 16);
    *(u32 **)((u8 *)arg0 + 4) = entry + 3;
    callback(arg0, arg1, argument);
}

void fn_8000B018(void *arg0) {
    s32 *node = ((s32 **)arg0)[1];
    void (*func)(void *, s32) = (void (*)(void *, s32))node[1];
    s32 arg1 = node[2];
    ((s32 **)arg0)[1] = node + 3;
    func(arg0, arg1);
}

void fn_8000B050(void *arg0)
{
  u32 new_var;
  s32 *node = ((s32 **) arg0)[1];
  u32 word = (u32) node[2];
  void (*func)(void *, s16, s16) = (void (*)(void *, s16, s16)) word;
  new_var = word;
  ((s32 **) arg0)[1] = node + 3;
  word = (s16) new_var;
  func(arg0, word, (s16) (new_var >> 16));
}

void fn_8000B090(void *arg0) {
    u32 *entry;
    u32 value;
    s16 argument;
    void (*callback)(void *, s16);

    entry = *(u32 **)((u8 *)arg0 + 4);
    value = entry[0];
    callback = (void (*)(void *, s16))entry[1];
    argument = (s16)(value >> 16);
    *(u32 **)((u8 *)arg0 + 4) = entry + 2;
    callback(arg0, argument);
}

s32 fn_8000B0D0(void *arg0)
{
    void *object;
    s32 (*callback)(void *);

    object = *(void **)((u8 *)arg0 + 4);
    callback = *(s32 (**)(void *))((u8 *)object + 4);

    if ((u8)callback(arg0) == 0) {
        return 0;
    }

    object = *(void **)((u8 *)arg0 + 4);
    *(void **)((u8 *)arg0 + 4) = (u8 *)object + 8;
    return 1;
}

s32 fn_8000B128(void *arg0)
{
    void *object;
    u8 (*callback)(void *);

    object = *(void **)((u8 *)arg0 + 4);
    callback = *(u8 (**)(void *))((u8 *)object + 4);

    if (callback(arg0) != 0) {
        return 0;
    }

    object = *(void **)((u8 *)arg0 + 4);
    *(void **)((u8 *)arg0 + 4) = (u8 *)object + 8;
    return 1;
}

int fn_8000B180(void *arg0) {
    void **p = (void **)((char *)arg0 + 4);
    void *obj = *p;
    int (*fn)(void *) = *(int (**)(void *))((char *)obj + 4);
    *p = (void *)((char *)obj + 8);
    return (u8)fn(arg0) == 0;
}

void fn_8000B1C0(void *arg0) {
    void **p = (void **)((char *)arg0 + 4);
    void *obj = *p;
    void (*fn)(void) = *(void (**)(void))((char *)obj + 4);
    *p = (void *)((char *)obj + 8);
    fn();
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

s32 fn_8000B39C(void *arg0)
{
    u32 *base;
    s32 counter;
    s32 key;
    u32 *ptr;
    u32 node;

    base = *(u32 **)((u8 *)arg0 + 4);
    key = (u8)(*base >> 16);
    counter = *(s16 *)((u8 *)arg0 + 0x28);
    if (counter >= 0) {
        *(s16 *)((u8 *)arg0 + 0x28) = (s16)(counter - 1);
        if (*(s16 *)((u8 *)arg0 + 0x28) == 0) {
            ptr = *(u32 **)arg0;
            goto load;
        loop:
            if ((node & 0xFFF) == 1 && (s16)(node >> 16) == key) {
                *(u32 **)((u8 *)arg0 + 4) = ptr;
                *(s32 *)((u8 *)arg0 + 0x10) = 0;
                goto done;
            }
            ptr = (u32 *)((u8 *)ptr + ((node >> 10) & 0x3C));
        load:
            node = *ptr;
            if (node != 0) {
                goto loop;
            }
        }
    }
done:
    return 1;
}

s32 fn_8000B418(void *arg0)
{
    u32 *ptr;
    u32 node;
    s32 key;
    u32 *base;

    base = *(u32 **)((u8 *)arg0 + 4);
    ptr = *(u32 **)arg0;
    key = (u8)(*base >> 16);
    goto load;
loop:
    if ((node & 0xFFF) == 1 && (s16)(node >> 16) == key) {
        *(u32 **)((u8 *)arg0 + 4) = ptr;
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        goto done;
    }
    ptr = (u32 *)((u8 *)ptr + ((node >> 10) & 0x3C));
load:
    node = *ptr;
    if (node != 0) {
        goto loop;
    }
done:
    return 1;
}

s32 fn_8000B474(void *arg0) {
    void fn_8000B4D0(void);
    void **temp_r4;

    M2C_FIELD(arg0, void **, 0x10) = (void *)fn_8000B4D0;
    temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 4) = (void *)((u32)temp_r4 + 4);
    return 0;
}

s32 fn_8000B494(void *arg0) {
    void fn_8000B4D0(void);
    u32 *temp_r4;
    s16 val;

    temp_r4 = M2C_FIELD(arg0, u32 **, 4);
    M2C_FIELD(arg0, u32 **, 4) = (u32 *) ((unsigned)temp_r4 + 4);
    val = (s16) ((u32) *temp_r4 >> 0x10U);
    if (val == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s16 *, 0x28) = val;
    M2C_FIELD(arg0, void **, 0x10) = (void *)fn_8000B4D0;
    return 0;
}

void fn_8000B4D0(void) {

}

s32 fn_8000B4D4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8000B4E8(void *arg0)
{
    extern u8 lbl_802A66D8[];
    s32 fn_8000C60C(void *);

    u8 *ptr;
    s32 i;
    s32 count;

    ptr = lbl_802A66D8;
    count = 0;

    for (i = 0; i < 0x20; i++) {
        if (ptr != (u8 *)arg0 && *(u32 *)ptr == *(u32 *)arg0) {
            return fn_8000C60C(ptr);
        }
        ptr += 0x70;

        if (ptr != (u8 *)arg0 && *(u32 *)ptr == *(u32 *)arg0) {
            return fn_8000C60C(ptr);
        }
        ptr += 0x70;

        if (ptr != (u8 *)arg0 && *(u32 *)ptr == *(u32 *)arg0) {
            return fn_8000C60C(ptr);
        }
        ptr += 0x70;

        if (ptr != (u8 *)arg0 && *(u32 *)ptr == *(u32 *)arg0) {
            return fn_8000C60C(ptr);
        }
        ptr += 0x70;

        if (ptr != (u8 *)arg0 && *(u32 *)ptr == *(u32 *)arg0) {
            return fn_8000C60C(ptr);
        }
        ptr += 0x70;

        if (ptr != (u8 *)arg0 && *(u32 *)ptr == *(u32 *)arg0) {
            return fn_8000C60C(ptr);
        }
        ptr += 0x70;

        if (ptr != (u8 *)arg0 && *(u32 *)ptr == *(u32 *)arg0) {
            return fn_8000C60C(ptr);
        }
        ptr += 0x70;

        if (ptr != (u8 *)arg0 && *(u32 *)ptr == *(u32 *)arg0) {
            return fn_8000C60C(ptr);
        }

        count += 7;
        ptr += 0x70;
    }

    *(u32 *)((u8 *)arg0 + 4) += 4;

    return 1;
}

s32 fn_8000B660(void *arg0)
{
    extern u8 lbl_802A66D8[];
    s32 fn_8000C60C(void *);

    u8 *ptr;
    s32 i;
    s32 count;

    ptr = lbl_802A66D8;
    count = 0;

    for (i = 0; i < 0x20; i++) {
        if (*(u32 *)ptr == *(u32 *)arg0) {
            count++;
        }

        ptr += 0x70;

        if (*(u32 *)ptr == *(u32 *)arg0) {
            count++;
        }

        ptr += 0x70;

        if (*(u32 *)ptr == *(u32 *)arg0) {
            count++;
        }

        ptr += 0x70;

        if (*(u32 *)ptr == *(u32 *)arg0) {
            count++;
        }

        ptr += 0x70;

        if (*(u32 *)ptr == *(u32 *)arg0) {
            count++;
        }

        ptr += 0x70;

        if (*(u32 *)ptr == *(u32 *)arg0) {
            count++;
        }

        ptr += 0x70;

        if (*(u32 *)ptr == *(u32 *)arg0) {
            count++;
        }

        ptr += 0x70;

        if (*(u32 *)ptr == *(u32 *)arg0) {
            count++;
        }

        ptr += 0x70;
    }

    if (count > 1) {
        fn_8000C60C(arg0);
        return 0;
    }

    *(u32 *)((u8 *)arg0 + 4) += 4;

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

u8 fn_8000B920(void *arg0) {
    extern u8 lbl_802A66D8[];

    s32 offset;

    offset = (s32)arg0 - (s32)lbl_802A66D8;
    return (u8)(offset / 0x70);
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

#pragma use_lmw_stmw on
#pragma inline_depth(0)
#pragma optimization_level 3
void fn_8000B9A4(void *arg0, void (*arg1)(void *)) {
    void *v28;
    void *v29;
    void *v30;

    v30 = *(void **)((u8 *)arg0 + 0x24);
    if (v30 != NULL) {
        v29 = *(void **)((u8 *)v30 + 0x24);
        if (v29 != NULL) {
            v28 = *(void **)((u8 *)v29 + 0x24);
            if (v28 != NULL) {
                if (*(void **)((u8 *)v28 + 0x24) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v28 + 0x24), arg1);
                }
                arg1(v28);
                if (*(void **)((u8 *)v28 + 0x1C) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v28 + 0x1C), arg1);
                }
            }
            arg1(v29);
            v28 = *(void **)((u8 *)v29 + 0x1C);
            if (v28 != NULL) {
                if (*(void **)((u8 *)v28 + 0x24) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v28 + 0x24), arg1);
                }
                arg1(v28);
                if (*(void **)((u8 *)v28 + 0x1C) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v28 + 0x1C), arg1);
                }
            }
        }
        arg1(v30);
        v28 = *(void **)((u8 *)v30 + 0x1C);
        if (v28 != NULL) {
            v29 = *(void **)((u8 *)v28 + 0x24);
            if (v29 != NULL) {
                if (*(void **)((u8 *)v29 + 0x24) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v29 + 0x24), arg1);
                }
                arg1(v29);
                if (*(void **)((u8 *)v29 + 0x1C) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v29 + 0x1C), arg1);
                }
            }
            arg1(v28);
            v28 = *(void **)((u8 *)v28 + 0x1C);
            if (v28 != NULL) {
                if (*(void **)((u8 *)v28 + 0x24) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v28 + 0x24), arg1);
                }
                arg1(v28);
                if (*(void **)((u8 *)v28 + 0x1C) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v28 + 0x1C), arg1);
                }
            }
        }
    }
    arg1(arg0);
    v28 = *(void **)((u8 *)arg0 + 0x1C);
    if (v28 != NULL) {
        v29 = *(void **)((u8 *)v28 + 0x24);
        if (v29 != NULL) {
            v30 = *(void **)((u8 *)v29 + 0x24);
            if (v30 != NULL) {
                if (*(void **)((u8 *)v30 + 0x24) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v30 + 0x24), arg1);
                }
                arg1(v30);
                if (*(void **)((u8 *)v30 + 0x1C) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v30 + 0x1C), arg1);
                }
            }
            arg1(v29);
            if ((v29 = *(void **)((u8 *)v29 + 0x1C)) != NULL) {
                if (*(void **)((u8 *)v29 + 0x24) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v29 + 0x24), arg1);
                }
                arg1(v29);
                if (*(void **)((u8 *)v29 + 0x1C) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v29 + 0x1C), arg1);
                }
            }
        }
        arg1(v28);
        if ((v28 = *(void **)((u8 *)v28 + 0x1C)) != NULL) {
            v29 = *(void **)((u8 *)v28 + 0x24);
            if (v29 != NULL) {
                if (*(void **)((u8 *)v29 + 0x24) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v29 + 0x24), arg1);
                }
                arg1(v29);
                if (*(void **)((u8 *)v29 + 0x1C) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v29 + 0x1C), arg1);
                }
            }
            arg1(v28);
            v28 = *(void **)((u8 *)v28 + 0x1C);
            if (v28 != NULL) {
                if (*(void **)((u8 *)v28 + 0x24) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v28 + 0x24), arg1);
                }
                arg1(v28);
                if (*(void **)((u8 *)v28 + 0x1C) != NULL) {
                    fn_8000B9A4(*(void **)((u8 *)v28 + 0x1C), arg1);
                }
            }
        }
    }
}
#pragma optimization_level 4
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
    extern u8 lbl_802A66D8[];
    void fn_8000C60C(void *);
    u8 *var_r31;
    s32 var_r30;

    var_r31 = lbl_802A66D8;
    var_r30 = 0;
    do {
        if (*(u32 *)var_r31 == arg0) {
            fn_8000C60C(var_r31);
        }
        var_r30 += 1;
        var_r31 += 0x70;
    } while (var_r30 < 0x100);
}

void fn_8000BF6C(u32 arg0, void (*arg1)(void *)) {
    extern u8 lbl_802A66D8[];
    u8 *var_r31;
    s32 var_r30;

    var_r31 = lbl_802A66D8;
    var_r30 = 0;
    do {
        if (*(u32 *)var_r31 == arg0) {
            arg1(var_r31);
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

void fn_8000C070(void *arg0, u32 arg1)
{
    u32 node;
    u32 *ptr;

    ptr = *(u32 **)arg0;
    goto load;
loop:
    if ((node & 0xFFF) == 1 && (s16)(node >> 16) == (s32)(u8)arg1) {
        *(u32 **)((u8 *)arg0 + 4) = ptr;
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        return;
    }
    ptr = (u32 *)((u8 *)ptr + ((node & 0x0F000000) >> 22));
load:
    node = *ptr;
    if (node != 0) {
        goto loop;
    }
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

void fn_8000B850(void *);
void fn_8000C188(void *);
void fn_8000C1CC(void *arg0) {
    extern u32 lbl_802ADAFC[9];
    u8 *self;
    u8 *node;
    u8 *child;
    void (*cb)(void *);
    s32 t;
    u32 x;
    u32 y;

    self = (u8 *)arg0;
    node = *(u8 **)(self + 0x24);
    if (node != NULL) {
        child = *(u8 **)(node + 0x24);
        if (child != NULL) {
            fn_8000C1CC(child);
        }
        if (*(u32 *)node != 0 && node[0x2E] == 0) {
            if (node[0x2D] == 0 && ((node[0x2C] & 4) == 0 || (*(u8 **)(node + 0x18))[0x2D] == 0)) {
                for (;;) {
                    if (*(void **)(node + 0x10) == NULL) {
                        fn_8000B850(node);
                    }
                    if (*(void **)(node + 0x10) != NULL) {
                        t = *(s16 *)(node + 0x28);
                        if (t >= 0) {
                            *(s16 *)(node + 0x28) = (s16)(t - 1);
                            if (*(s16 *)(node + 0x28) < 0) {
                                fn_8000C188(node);
                                continue;
                            }
                        }
                        (*(void (**)(void *))(node + 0x10))(node);
                    }
                    if (node[0x2C] & 1) {
                        goto done1;
                    }
                    break;
                }
            }
            cb = *(void (**)(void *))(node + 0xC);
            if (cb != NULL) {
                cb(node);
            }
            child = *(u8 **)(node + 0x1C);
            if (child != NULL) {
                fn_8000C1CC(child);
            }
        }
    }
done1:

    if (*(u32 *)self != 0 && self[0x2E] == 0) {
        if (self[0x2D] == 0 && ((self[0x2C] & 4) == 0 || (*(u8 **)(self + 0x18))[0x2D] == 0)) {
            for (;;) {
                if (*(void **)(self + 0x10) == NULL) {
                    if (*(u32 *)self != 0 && self[0x2D] == 0 && self[0x2E] == 0 && *(void **)(self + 0x10) == NULL) {
                        for (;;) {
                            x = **(u32 **)(self + 4);
                            y = lbl_802ADAFC[(x >> 8) & 7];
                            if (((u8 (*)(void *))(*(u32 *)(y + ((x & 0xFF) << 2))))(self)
                                && *(u32 *)self != 0 && self[0x2D] == 0) {
                                if (self[0x2E] == 0) {
                                    continue;
                                }
                            }
                            break;
                        }
                    }
                }
                if (*(void **)(self + 0x10) != NULL) {
                    t = *(s16 *)(self + 0x28);
                    if (t >= 0) {
                        *(s16 *)(self + 0x28) = (s16)(t - 1);
                        if (*(s16 *)(self + 0x28) < 0) {
                            *(void **)(self + 0x10) = NULL;
                            continue;
                        }
                    }
                    (*(void (**)(void *))(self + 0x10))(self);
                }
                if (self[0x2C] & 1) {
                    goto done2;
                }
                break;
            }
        }
        cb = *(void (**)(void *))(self + 0xC);
        if (cb != NULL) {
            cb(self);
        }
        node = *(u8 **)(self + 0x1C);
        if (node != NULL) {
            child = *(u8 **)(node + 0x24);
            if (child != NULL) {
                fn_8000C1CC(child);
            }
            if (*(u32 *)node != 0 && node[0x2E] == 0) {
                if (node[0x2D] == 0 && ((node[0x2C] & 4) == 0 || (*(u8 **)(node + 0x18))[0x2D] == 0)) {
                    for (;;) {
                        if (*(void **)(node + 0x10) == NULL) {
                            fn_8000B850(node);
                        }
                        if (*(void **)(node + 0x10) != NULL) {
                            t = *(s16 *)(node + 0x28);
                            if (t >= 0) {
                                *(s16 *)(node + 0x28) = (s16)(t - 1);
                                if (*(s16 *)(node + 0x28) < 0) {
                                    fn_8000C188(node);
                                    continue;
                                }
                            }
                            (*(void (**)(void *))(node + 0x10))(node);
                        }
                        if (node[0x2C] & 1) {
                            goto done2;
                        }
                        break;
                    }
                }
                cb = *(void (**)(void *))(node + 0xC);
                if (cb != NULL) {
                    cb(node);
                }
                child = *(u8 **)(node + 0x1C);
                if (child != NULL) {
                    fn_8000C1CC(child);
                }
            }
        }
    }
done2:
    ;
}

s32 fn_8000C510(void) {
    extern void *lbl_80367148;
    extern u8 lbl_802AD6D8[];

    return ((s32)lbl_80367148 - (s32)lbl_802AD6D8) / 4;
}

void fn_8000C52C(s32 arg0) {
    extern s32 *lbl_80367148;
    s32 *temp_r4;

    temp_r4 = lbl_80367148 - 1;
    lbl_80367148 = temp_r4;
    *temp_r4 = arg0;
}

void *fn_8000C540(void) {
    void fn_8000C60C(void *);
    extern void **lbl_80367148;
    extern u8 lbl_802A66D8[];
    void **p;
    void *result;
    u8 *entry;
    s32 i;

    p = lbl_80367148;
    result = *p;
    if (result != NULL) {
        lbl_80367148 = p + 1;
        return result;
    }
    entry = lbl_802A66D8;
    for (i = 0x100; i != 0; i--) {
        if (*(void **)entry != NULL) {
            if ((entry[0x2C] & 0x10) != 0) {
                fn_8000C60C(entry);
                return fn_8000C540();
            }
        }
        entry += 0x70;
    }
    return NULL;
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

void fn_8000C6AC(void *arg0) {
    void fn_8000C52C(void *);
    extern void **lbl_80367148;
    typedef struct Node {
        void *unk0;
        u8 pad04[4];
        void (*cb)(struct Node *);
        u8 pad0C[4];
        void *unk10;
        u8 pad14[4];
        struct Node *unk18;
        struct Node *unk1C;
        u8 pad20[4];
        struct Node *unk24;
        u8 pad28[4];
        u8 flags;
        u8 pad2D;
    } Node;
    Node *self = (Node *)arg0;
    Node *n;
    Node *c;
    void **p;

    n = self->unk24;
    if (n != NULL) {
        c = n->unk24;
        if (c != NULL) {
            if (c->unk24 != NULL) {
                fn_8000C6AC(c->unk24);
            }
            if (c->unk1C != NULL) {
                fn_8000C6AC(c->unk1C);
            }
            if ((c->flags & 1) == 0) {
                if (c->cb != NULL) {
                    c->cb(c);
                }
                fn_8000C52C(c);
                c->unk0 = NULL;
                c->unk10 = NULL;
                c->flags |= 1;
                if (c->flags & 2) {
                    c->unk18->pad2D -= 1;
                }
            }
        }
        c = n->unk1C;
        if (c != NULL) {
            if (c->unk24 != NULL) {
                fn_8000C6AC(c->unk24);
            }
            if (c->unk1C != NULL) {
                fn_8000C6AC(c->unk1C);
            }
            if ((c->flags & 1) == 0) {
                if (c->cb != NULL) {
                    c->cb(c);
                }
                fn_8000C52C(c);
                c->unk0 = NULL;
                c->unk10 = NULL;
                c->flags |= 1;
                if (c->flags & 2) {
                    c->unk18->pad2D -= 1;
                }
            }
        }
        if ((n->flags & 1) == 0) {
            if (n->cb != NULL) {
                n->cb(n);
            }
            p = (void **)((u8 *)lbl_80367148 - 4);
            lbl_80367148 = p;
            *p = n;
            n->unk0 = NULL;
            n->unk10 = NULL;
            n->flags |= 1;
            if (n->flags & 2) {
                n->unk18->pad2D -= 1;
            }
        }
    }
    n = self->unk1C;
    if (n != NULL) {
        c = n->unk24;
        if (c != NULL) {
            if (c->unk24 != NULL) {
                fn_8000C6AC(c->unk24);
            }
            if (c->unk1C != NULL) {
                fn_8000C6AC(c->unk1C);
            }
            if ((c->flags & 1) == 0) {
                if (c->cb != NULL) {
                    c->cb(c);
                }
                fn_8000C52C(c);
                c->unk0 = NULL;
                c->unk10 = NULL;
                c->flags |= 1;
                if (c->flags & 2) {
                    c->unk18->pad2D -= 1;
                }
            }
        }
        c = n->unk1C;
        if (c != NULL) {
            if (c->unk24 != NULL) {
                fn_8000C6AC(c->unk24);
            }
            if (c->unk1C != NULL) {
                fn_8000C6AC(c->unk1C);
            }
            if ((c->flags & 1) == 0) {
                if (c->cb != NULL) {
                    c->cb(c);
                }
                fn_8000C52C(c);
                c->unk0 = NULL;
                c->unk10 = NULL;
                c->flags |= 1;
                if (c->flags & 2) {
                    c->unk18->pad2D -= 1;
                }
            }
        }
        if ((n->flags & 1) == 0) {
            if (n->cb != NULL) {
                n->cb(n);
            }
            p = (void **)((u8 *)lbl_80367148 - 4);
            lbl_80367148 = p;
            *p = n;
            n->unk0 = NULL;
            n->unk10 = NULL;
            n->flags |= 1;
            if (n->flags & 2) {
                n->unk18->pad2D -= 1;
            }
        }
    }
    if ((self->flags & 1) == 0) {
        if (self->cb != NULL) {
            self->cb(self);
        }
        p = (void **)((u8 *)lbl_80367148 - 4);
        lbl_80367148 = p;
        *p = self;
        self->unk0 = NULL;
        self->unk10 = NULL;
        self->flags |= 1;
        if (self->flags & 2) {
            self->unk18->pad2D -= 1;
        }
    }
}

void fn_8000CA64(u32 unused, u32 arg1) {
    void fn_8000CAA0(void);
    void fn_8000CAF0(void);
    u32 var_r4;

    var_r4 = arg1;
    if (var_r4 == 0U) {
        var_r4 = 3U;
    }
    if ((s32)var_r4 < 0) {
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

u32 fn_8000CD60(void) {
    extern u32 lbl_80367158;
    u32 temp;
    u32 other;

    temp = (lbl_80367158 << 2) + 2;
    other = temp + 1;
    temp = temp * other;
    temp >>= 2;
    lbl_80367158 = temp;
    return temp;
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
    extern u16 lbl_80367150;
    u16 *st;
    s32 s0;
    s32 s1;
    s32 s2;
    s32 t4;
    u16 t6;
    s32 scaled;

    st = &lbl_80367150;
    s0 = lbl_80367150;
    s2 = *(st + 2);
    s1 = *(st + 1);
    t4 = (s2 * 2) & 0xFFFE;
    t6 = (u16)((s1 << 11) + (s0 >> 5));
    *(st + 2) = t4;
    if (s1 & 0x8000) {
        *(st + 2) = t4 + 1;
    }
    t6 ^= *(st + 2);
    *(st + 2) = *(st + 1);
    scaled = (u16)t6 * 100;
    *(st + 1) = lbl_80367150;
    lbl_80367150 = t6;
    return (scaled / 65536) < arg0;
}

s32 fn_8000CEE4(s32 arg0) {
    extern u16 lbl_80367150;
    u16 *st;
    s32 s0;
    s32 s1;
    s32 s2;
    s32 t4;
    s32 combined;
    u16 t6;

    st = &lbl_80367150;
    s0 = st[0];
    s2 = st[2];
    s1 = st[1];
    t4 = (s2 * 2) & 0xFFFE;
    combined = (s1 << 11) + (s0 >> 5);
    st[2] = t4;
    t6 = (u16)combined;
    if (s1 & 0x8000) {
        st[2] = t4 + 1;
    }
    t6 ^= st[2];
    s1 = st[1];
    s0 = st[0];
    st[2] = s1;
    st[1] = s0;
    st[0] = t6;
    return (arg0 * t6) / 65536;
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

void fn_8000D048(void)
{
    s32 fn_800056CC(const char *, ...);

    extern u8 lbl_802ADB20[];
    extern u8 lbl_80267D40[];

    u8 *entry;
    u8 *table;
    u8 *text;
    s32 index;
    s32 total;
    s32 i;

    entry = *(u8 **)(lbl_802ADB20 + 4);
    total = 0;

    for (index = 0; index < 0x2800; index++) {
        text = *(u8 **)(entry + 8);

        if (text != 0) {
            fn_800056CC(
                (const char *)lbl_80267D40,
                index,
                *(u32 *)(entry + 0xC),
                *(u32 *)(entry + 4),
                text
            );

            do {
                total++;
            } while (*text++ != 0);
        }

        entry += 0x10;
    }

    table = lbl_802ADB20;

    for (i = 0; i < 0x1FD; i++) {
        if ((i % 18) == 0) {
            fn_800056CC(
                (const char *)(lbl_80267D40 + 0x13)
            );
        }

        fn_800056CC(
            (const char *)(lbl_80267D40 + 0x15),
            *(u32 *)(table + 0x7FC)
        );

        table += 4;
    }

    fn_800056CC((const char *)(lbl_80267D40 + 0x1A));

    fn_800056CC(
        (const char *)(lbl_80267D40 + 0x1D),
        *(u32 *)lbl_802ADB20
    );

    fn_800056CC(
        (const char *)(lbl_80267D40 + 0x3D),
        total
    );

    fn_800056CC(
        (const char *)(lbl_80267D40 + 0x59),
        0x28FF0
    );

    fn_800056CC((const char *)(lbl_80267D40 + 0x13));
}

s32 fn_8000D1B4(s32 arg0) {
    extern u8 lbl_802ADB20[];
    return ((struct { u8 pad[8]; s32 val; u8 pad2[4]; } *)*(void **)(lbl_802ADB20 + 4))[arg0].val;
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

