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

s32 fn_80095614(s32 arg0) {
    u32 *fn_80037BBC(s32, s32);
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if ((u32) *fn_80037BBC(arg0, var_r31) == 0U) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return -1;
    }
    goto loop_1;
}

void fn_80095678(void) {
    fn_8000BF00(&lbl_80289B00);
}

void fn_800956A0(s32 arg0) {
    extern u8 lbl_8036728B;
    if (!(lbl_8036728B & 2)) {
        fn_8000CAF0(&lbl_80289B00, arg0);
    }
}

void fn_80095850(void *arg0) {
    void *fn_80018ADC();
    M2C_UNK fn_80018AE4();
    M2C_UNK fn_80019384(s32);
    extern f32 lbl_803697C0;
    void *temp_r3;

    temp_r3 = fn_80018ADC();
    M2C_FIELD(temp_r3, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    fn_80019384(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(temp_r3, f32 *, 0x70) = (f32) lbl_803697C0;
    fn_80018AE4();
}

s32 fn_800958A4(s32 arg0) {
    extern u16 lbl_80330EAC[];
    return *(s32*)(lbl_80330EAC + (((u32) (-arg0 | arg0) >> 0x1DU) & 4) + 0xCBC);
}

s32 fn_800958C4(s32 arg0) {
    s32 fn_80095FF8(M2C_UNK);
    if (arg0 & 0x80) {
        return fn_80095FF8(0x80);
    }
    if (arg0 & 0x20) {
        return fn_80095FF8(0x20);
    }
    if (arg0 & 8) {
        return fn_80095FF8(8);
    }
    if (arg0 & 0x10) {
        return fn_80095FF8(0x10);
    }
    return 0;
}

s32 fn_80095BB0(s32 arg0) {
    if (arg0 == 0x10000) { return 0; }
    
    /* Default case */
    return 0;
}

s32 fn_80096264(u8 arg0) {
    u32 r31;
    s32 r0;

    if (arg0 >= 0xFB) {
        r31 = 0xFB;
    } else if (arg0 >= 0xB5) {
        r31 = 0xB5;
    } else if (arg0 >= 0x79) {
        r31 = 0x79;
    } else if (arg0 >= 0x47) {
        r31 = 0x47;
    } else if (arg0 >= 0x1F) {
        r31 = 0x1F;
    } else if (arg0 >= 1) {
        r31 = 1;
    } else {
        return 0;
    }
    
    switch (r31) {                         /* irregular */
    case 0x0:
        return 0;
    case 0xFB:
        return 0xFB;
    case 0x1:
        return 0x1F;
    case 0x1F:
        return 0x47;
    case 0x47:
        return 0x79;
    case 0x79:
        return 0xB5;
    case 0xB5:
        return 0xFB;
    default:
        return 0;
    }
}

s32 fn_80096B80(void){extern u8 lbl_80330EAC[];void fn_800340E4(void*);s16 *idx=(s16*)(lbl_80330EAC+0x8a0);s16 saved=*idx;s32 result=0;fn_800340E4(idx);for(;;){u8 c=((u8*)idx)[4+*idx*4];if(c==0)break;if(c==0x52){result=1;break;}if(c>0x52)break;*idx=*idx+1;}*idx=saved;return result;}

u8 fn_800970C8(s16 arg0){extern u8 lbl_80330EAC[];s16 saved;u8 result=0xff,c;s16 *idx=(s16*)(lbl_80330EAC+0x8a0);saved=*idx;*idx=arg0;*idx=arg0+1;for(;;){s16 n=*idx;c=lbl_80330EAC[0x8a4+n*4];if(c==0x23)break;if(c<0x23){if(c==0)break;if(c<0x20)break;}else if(c<0x50){if(c>=0x25)break;}else if(c<0x53){result=c;break;}else break;*idx=n+1;}*idx=saved;return result;}

s32 fn_80097168(s16 arg0){extern u8 lbl_80330EAC[];s16 saved; s32 count=0; u8 c; s16 *idx=(s16*)(lbl_80330EAC+0x8a0);saved=*idx;*idx=arg0;*idx=arg0+1;for(;;){s16 n=*idx;c=lbl_80330EAC[0x8a4+n*4];if(c==0x23)break;if(c<0x23){if(c==0)break;if(c<0x20)break;}else if(c<0x50){if(c>=0x25)break;}else if(c<0x53)count++;else break;*idx=n+1;}*idx=saved;return count;}

void fn_800973F0(void *arg0, s32 arg1)
{
    u16* ptr = (u16*)arg0;
    
    if (arg1 < 0 || arg1 > 0x45) {
        return;
    }
    
    switch (arg1) {
        case 0:  ptr[0] |= 0x800; break;
        case 1:  ptr[0] |= 0x1000; break;
        case 2:  ptr[0] |= 0x2000; break;
        case 3:  ptr[0] |= 0x200; break;
        case 4:  ptr[0] |= 0x400; break;
        case 5:  ptr[0] |= 0x100; break;
        case 6:  ptr[0] |= 0x8000; break;
        case 7:  ptr[0] |= 0x4000; break;
        case 8:  ptr[0] |= 0x40; break;
        case 9:  ptr[0] |= 0x80; break;
        case 10: ptr[0] |= 0x80; break;
        case 11: ptr[0] |= 0x8; break;
        case 12: ptr[0] |= 0x10; break;
        case 13: ptr[0] |= 0x20; break;
        case 14: ptr[0] |= 0x2; break;
        case 15: ptr[0] |= 0x4; break;
        case 16: ptr[0] |= 0x40; break;
        case 17: ptr[0] |= 0x100; break;
        case 18: ptr[0] |= 0x200; break;
        case 19: ptr[0] |= 0x400; break;
        case 20: ptr[0] |= 0x4000; break;
        case 21: ptr[0] |= 0x2000; break;
        case 22: ptr[0] |= 0x8000; break;
        case 23: ptr[0] |= 0x1; break;
        case 24: ptr[0] |= 0x800; break;
        case 25: ptr[0] |= 0x1000; break;
        case 26: ptr[0] |= 0x4; break;
    }
}

void fn_800975C4(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    
    *(u16*)((char*)arg0 + 0x30) = 0;
}

s16 fn_80097740(void) {
    extern u8 lbl_80330EAC[];
    extern u8 lbl_803120C0[];
    extern void *lbl_80367500;
    extern void *lbl_80367504;
    s16 *idx;
    s16 n;
    s16 result;
    s32 c;
    void *p;
    void *t;
    u32 v;
    s32 init;

    idx = (s16 *)(lbl_80330EAC + 0x8a0);
    init = *idx;
    if (init != 0) {
        *idx = init + 1;
    }
    for (;;) {
        n = *idx;
        c = ((u8 *)idx)[(n << 2) + 4];
        switch (c) {
        case 0x20:
            p = (void *)lbl_803120C0;
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367500 = p;
                    goto h1;
                }
            }
            lbl_80367500 = NULL;
        h1:
            p = (void *)(lbl_803120C0 + 0x14);
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367504 = p;
                    goto h2;
                }
            }
            lbl_80367504 = NULL;
        h2:
            result = *idx;
            break;
        case 0x21:
            p = (void *)(lbl_803120C0 + 0x14);
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367500 = p;
                    goto h3;
                }
            }
            lbl_80367500 = NULL;
        h3:
            p = (void *)lbl_803120C0;
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367504 = p;
                    goto h4;
                }
            }
            lbl_80367504 = NULL;
        h4:
            result = *idx;
            break;
        case 0x22:
            p = (void *)(lbl_803120C0 + 0x28);
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367500 = p;
                    goto h5;
                }
            }
            lbl_80367500 = NULL;
        h5:
            p = (void *)(lbl_803120C0 + 0x14);
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367504 = p;
                    goto h6;
                }
            }
            lbl_80367504 = NULL;
        h6:
            result = *idx;
            break;
        case 0x24:
            result = n;
            break;
        case 0x00:
            return result;
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x54:
            return result;
        }
        *idx = *idx + 1;
    }
}

void fn_80097970(void) {
    extern u16 lbl_80330EAC[];
    fn_800340E4(&lbl_80330EAC[0x8A0 / sizeof(u16)]);
}

void fn_8009799C(void) {
    extern u16 lbl_803120C0[32]; // 64 bytes, 16-element array of u16

    void* r4;
    u16* r3 = lbl_803120C0;

    // First check
    r4 = (void*)M2C_FIELD(r3, void**, 0);
    if (r4 != NULL) {
        void* temp_r4 = M2C_FIELD(r4, void**, 0x280);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s8*, 0x16C) = -1;
        }
    }

    // Second check
    r4 = (void*)M2C_FIELD(r3, void**, 0x5); // offset 0x14 in words
    if (r4 != NULL) {
        void* temp_r4_2 = M2C_FIELD(r4, void**, 0x280);
        if (temp_r4_2 != NULL) {
            M2C_FIELD(temp_r4_2, s8*, 0x16C) = -1;
        }
    }

    // Third check
    r4 = (void*)M2C_FIELD(r3, void**, 0x5); // offset 0x14 in words
    if (r4 != NULL) {
        void* temp_r4_3 = M2C_FIELD(r4, void**, 0x280);
        if (temp_r4_3 != NULL) {
            M2C_FIELD(temp_r4_3, s8*, 0x16C) = -1;
        }
    }
}

void fn_800979FC(void){s8 fn_8004ABD4(void*,s32,s32);extern u8 lbl_80330EAC[];extern u8 lbl_803120C0[];s32 i;for(i=0;i<3;i++){void *p=*(void**)(lbl_803120C0+i*0x14);if(p&&*(u32*)((u8*)p+0x280)){void *q=(u8*)p+0x28c;if(*(u32*)q==0)q=0;*(u8*)((u8*)*(u32*)((u8*)p+0x280)+0x16c)=fn_8004ABD4(q,*(u32*)(lbl_80330EAC+0xca8)<=1,*(u32*)(lbl_80330EAC+0xca8));}}}

s32 fn_80098094(void) {
    extern s32 lbl_80367500;
    return lbl_80367500;
}

void *fn_8009809C(void) {
    extern void *lbl_80367500;
    extern void *lbl_80367504;
    extern char lbl_803120C0[0x40];

    u32* temp = (u32*)0x80330EAC;
    if ((*temp & 0x100) != 0) {
        return &lbl_803120C0 + 0x14;
    }
    if (lbl_80367504 == NULL) {
        return lbl_80367500;
    }
    return lbl_80367504;
}

void *fn_800980D4(s32 arg0) {
    extern u16 lbl_803120C0[];
    return &lbl_803120C0[arg0 * 0x28];
}

s32 fn_800980E8(s32 arg0)
{
    extern u16 lbl_803120C0[0x10];
    u16* ptr = &lbl_803120C0[arg0 * 0x14 / sizeof(u16)];
    if (ptr == NULL)
        return 0;
    return ptr[0x280 / sizeof(u16)];
}

s32 fn_80098110(void) {
    extern void **lbl_80367504;
    void *temp_r3;

    if ((void **) lbl_80367504 == NULL) {
        return 0;
    }
    temp_r3 = *lbl_80367504;
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x280);
    }
    return 0;
}

s32 fn_80098140(void) {
    extern void **lbl_80367500;
    void *temp_r3;

    if ((void **) lbl_80367500 == NULL) {
        return 0;
    }
    temp_r3 = *lbl_80367500;
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x280);
    }
    return 0;
}
