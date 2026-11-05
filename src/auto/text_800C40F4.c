/* Functions from 0x800C40F4 to 0x801035C8, found by decomp-toolkit. */
#include "common.h"
#include "structs.h"

extern s8 lbl_803678BC;
extern s8 lbl_803678BD;
extern s8 lbl_803678BF;
extern s32 lbl_8028D788[];
extern void (*lbl_802B14E4)(void **);

s32 fn_8001DD54(void *, void *);
void fn_801007A0(void *);

static inline u8 GetItemKind(void *item) {
    if (item != NULL) {
        return M2C_FIELD(item, u8 *, 0x14);
    }
    return 0xC;
}

void *fn_80019E04(char *);

/* string object (fn_800C9B6C copies one) */
typedef struct String {
    u32 size;
    u32 cap;
    char *data;
} String;

/* list object helpers (construct, destroy, get item) */
void fn_800E01C8(void *);
void fn_800E0140(void *, s32);
void fn_800E8A88(void *, f32);

/* std::equal on chars */
static inline BOOL CharsEqual(const char *first1, const char *last1, const char *first2) {
    for (; first1 < last1; first1++, first2++) {
        if (*first1 != *first2) {
            return FALSE;
        }
    }
    return TRUE;
}

/* std::min on references */
static inline const u32 *MinU32(const u32 *a, const u32 *b) {
    return (*b < *a) ? b : a;
}


void **fn_80037BBC(void *, s32);
u8 fn_8009326C(void *, void *);
extern struct {
    char pad0[0xF9];
    char iidSilence[0xC];
    char iidSleep[0xA];
    char iidBerserk[0xD];
} lbl_80273304;

static inline u8 GetItemUnk1D(void *item) {
    if (item != NULL) {
        return M2C_FIELD(item, u8 *, 0x1D);
    }
    return 0;
}

static inline u8 GetItemDD54(void *item, void *unit) {
    if (item != NULL) {
        return fn_8001DD54(item, unit);
    }
    return 0;
}

void fn_800C40F4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x15) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x14) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x17) = 0xFF;
}

s32 fn_800C4240(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

void fn_800C426C(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

void fn_800C428C(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

s32 fn_800C42AC(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

s32 fn_800C42D8(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

s32 fn_800C4304(s32 arg0) {
    extern u32 lbl_80320B88;
    s32 var_r31;
    u32 *var_r30;
    u32 temp_r4;

    var_r31 = 0;
    var_r30 = &lbl_80320B88;
loop_1:
    temp_r4 = *var_r30;
    if ((temp_r4 != 0U) && (fn_802342B8(arg0, temp_r4 + 4) == 0)) {

    } else {
        var_r31 += 1;
        var_r30 += 4;
        if (var_r31 >= 0x10) {
            var_r31 = -1;
        } else {
            goto loop_1;
        }
    }
    return var_r31;
}

void fn_800C4588(void *arg0) {
    if (arg0 != NULL) {
        s32 *ptr = (s32*)arg0;
        void *arg1 = (void*)((char*)arg0 - 0x20);
        s32 val = ptr[-3];
        fn_800C53B0(val, arg1);
    }
}

s32 fn_800C4604(s32 arg0) {
    extern u16 lbl_80320B88[];
    s32 index = arg0 * 2;
    u16* ptr = &lbl_80320B88[index];
    return fn_800C5A48(*ptr, &lbl_80320B88[0]) + 0x20;
}

s32 fn_800C4638(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

void fn_800C4664(s32 arg0) {
    extern void *lbl_80367868;
    void *temp_r0;
    void *var_r4;

    var_r4 = M2C_FIELD(lbl_80367868, void **, 0x18);
loop_2:
    temp_r0 = M2C_FIELD(var_r4, void **, 0xC);
    if (temp_r0 != NULL) {
        var_r4 = temp_r0;
        goto loop_2;
    }
    M2C_FIELD(lbl_80367868, s32 *, 0x1C) = (s32) (M2C_FIELD(lbl_80367868, s32 *, 0x1C) + arg0);
    M2C_FIELD(var_r4, s32 *, 0x10) = (s32) (M2C_FIELD(var_r4, s32 *, 0x10) + arg0);
}

void fn_800C4728(s32 arg0) {
    extern u16 lbl_80320B88[];
    extern s32 lbl_80367870;
    s32 temp = (arg0 * 2);
    lbl_80367870 = (s32)lbl_80320B88[temp];
}

void fn_800C47E8(void) {
    // This is a placeholder for the actual function.
    // The full decompilation involves too many complex dependencies
    // to be completed in one attempt. Will try a partial approach.
}

extern u32* lbl_80367860;
extern u32 lbl_80367864;
extern u32* lbl_80367868;
extern u32 lbl_8036786C;
s32 fn_800C52C8(void) {
    s32 var_r3;
    
    if (lbl_80367868 != NULL) {
        var_r3 = (u32)(lbl_80367868 + 0x1c / sizeof(u32));
    } else {
        var_r3 = (u32)lbl_80367860;
    }
    
    if (lbl_8036786C != 0) {
        return lbl_8036786C;
    } else {
        return (u32)var_r3 - lbl_80367864;
    }
}

void fn_800C5EF8(s32 arg0) {
    extern u16 lbl_8028D908[];
    extern u8 lbl_8028D7A4[];
    s32 r3 = arg0;
    r3 = (s32)lbl_8028D908;
    fn_8000CAA0((u16*)r3, arg0, lbl_8028D908);
    fn_8000CAF0(lbl_8028D7A4, 5);
}

void fn_800C5F34(s32 arg0) {
    u32 fn_8000C0C0(M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_8000C188(s32);
    extern u8 lbl_8028D7A4[544];
    if (fn_8000C0C0((M2C_UNK *)((u32)lbl_8028D7A4), (M2C_UNK *)((u32)lbl_8028D7A4)) == 0U) {
        fn_8000C188(arg0);
    }
}

void fn_800C5F78(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 4;
}

void fn_800C5F84(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 3;
}

void fn_800C5F90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 2;
}

void fn_800C5F9C(void *arg0) {
    extern void *lbl_80367240;
    s32 temp_r5;
    u32 temp_r0;

    M2C_FIELD(arg0, s8 *, 0x38) = 1;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
    M2C_FIELD(arg0, u32 *, 0x3C) = temp_r0;
    if ((temp_r0 >= 0xDB6U) || (temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4), (((temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) == 0) == 0))) {
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        fn_8000C188();
    }
}

void fn_800C5FFC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

void fn_800C6008(void) {
    M2C_UNK fn_800C6028();
    fn_800C6028();
}

void fn_800C73F0(s32 arg0) {
    fn_8006EDA0(arg0 + 0x30);
}

void fn_800C77B8(s32 arg0) {
    u8 fn_8005BA10(s32);
    void fn_8000C188(s32);

    if (fn_8005BA10(lbl_8028D788[1])) {
        fn_8000C188(arg0);
    }
}

void fn_800C7800(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;

    temp_r31 = OSDisableInterrupts();
    OSDisableScheduler();
    OSRestoreInterrupts(temp_r31);
    fn_8005BA08((s8) M2C_FIELD(arg0, s32 *, 0x44));
    fn_8005C870(&lbl_8028D788[1], 4);
    fn_8005BA08((s8) M2C_FIELD(arg0, s32 *, 0x40));
    temp_r31_2 = OSDisableInterrupts();
    OSEnableScheduler();
    OSRestoreInterrupts(temp_r31_2);
}

void fn_800C7884(void *arg0) {
    M2C_UNK fn_8005BA08(s8);
    M2C_UNK fn_8005BC8C(s8);
    M2C_UNK fn_800C4728(s32);
    M2C_UNK fn_800C47E8();
    fn_8005BC8C((s8) M2C_FIELD(arg0, s32 *, 0x44));
    fn_800C47E8();
    fn_800C4728(M2C_FIELD(arg0, s32 *, 0x40));
    fn_8005BA08((s8) M2C_FIELD(arg0, s32 *, 0x40));
}

void fn_800C792C(void) {
    M2C_UNK fn_801FE32C();
    M2C_UNK fn_8020055C();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_8020055C();
        return;
    }
    fn_801FE32C();
}

void fn_800C7960(void) {
    M2C_UNK fn_801FE360();
    M2C_UNK fn_80200590();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_80200590();
        return;
    }
    fn_801FE360();
}

void fn_800C7994(void) {
    M2C_UNK fn_801FEF6C();
    M2C_UNK fn_8020119C();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_8020119C();
        return;
    }
    fn_801FEF6C();
}

void fn_800C79C8(void) {
    M2C_UNK fn_801FEFA0();
    M2C_UNK fn_802011D0();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_802011D0();
        return;
    }
    fn_801FEFA0();
}

void fn_800C7EF8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

s32 fn_800C8EFC(void *arg0) {
    s32 var_r6;

    var_r6 = 1;
    if ((s32 *) M2C_FIELD(arg0, s32 **, 0x1C) == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) >= (s32) *M2C_FIELD(arg0, s32 **, 0x1C)) {
        var_r6 = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    return var_r6;
}

void fn_800C8F48(void *arg0) {
    fn_800C802C(M2C_FIELD(arg0, s32 *, 0x20) + 1);
}

M2C_UNK *fn_800C93EC(void *arg0) {
    extern M2C_UNK lbl_80369DC0;
    M2C_UNK *temp_r3;

    temp_r3 = M2C_FIELD(arg0, M2C_UNK **, 8);
    if (temp_r3 == NULL) {
        return &lbl_80369DC0;
    }
    return temp_r3;
}

void *fn_800C96F8(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CA7F4(s32, M2C_UNK);
    M2C_UNK memcpy(s32, s32, s32);
    fn_800CA7F4(arg2, 0);
    memcpy(M2C_FIELD(arg0, s32 *, 8), arg1, arg2);
    return arg0;
}

void fn_800C984C(void) {
    s32 r6 = 0;
    s32 r7 = 0;
    fn_800C94F8(r6, r7);
}

void fn_800CA5FC(void) {
    M2C_UNK fn_800CA61C();
    fn_800CA61C();
}

void fn_800CA644(void) {
    M2C_UNK fn_800CA664();
    fn_800CA664();
}

s32 fn_800CAD4C(void *arg0, s32 arg1, u8 arg2) {
    u8 var_r5;

    M2C_FIELD(arg0, s32 *, 0x268) = arg1;
    M2C_FIELD(arg0, s32 *, 0x26C) = (s32) arg2;
    var_r5 = 0;
    M2C_FIELD(arg0, s32 *, 0x25C) = 0;
    if ((arg1 == 0) && (((s32) M2C_FIELD(arg0, s32 *, 0x254) > 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x258) > 0))) {
        var_r5 = 1;
    }
    if ((arg1 == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x254) > 0)) {
        var_r5 = 1;
    }
    if ((arg1 == 2) && ((s32) M2C_FIELD(arg0, s32 *, 0x258) > 0)) {
        var_r5 = 1;
    }
    if ((arg1 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x254) > 0)) {
        var_r5 = 1;
    }
    if (var_r5 != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0xC) = 6;
        return 1;
    }
    return 0;
}

void fn_800CAE38(void *arg0) {
    s8* ptr = (s8*)arg0;
    ptr[0] = 0;
    ptr[1] = 0;
    ptr[0x13] = 0;
    ptr[0x12] = 0;
    ptr[0x11] = 0;
    ptr[0x10] = 0;
    ptr[0x16] = 0x80;
    ptr[0x15] = 0x80;
    ptr[0x14] = 0x80;
    ptr[0x17] = 0xFF;
}

void fn_800CBF24(s32 arg0, s32 arg2) {
    M2C_UNK spC;
    M2C_UNK sp8;
    
    // Force correct stack usage and calls to match target
    fn_800C9ABC(&spC, &sp8);
    fn_800C9B6C(arg0, fn_800C99A0(&spC, arg2, 0, -1));
    fn_800C9A60(&spC, -1);
}

s32 fn_800CD53C(void *arg0) {
    s32 fn_801519C0();
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x10), u32 (**)(void *, void *, void *), 0x14)(temp_r3, (char *)lbl_802704F8 + 0x3D0, (char *)lbl_802704F8 + 0x3D7) != 0U) {
        return fn_801519C0();
    }
    return 0;
}

void fn_800CF27C(s32 arg2) {
    extern s32 lbl_80367884;
    u8 spF;
    u8 spE;
    u8 spD;
    u8 spC;
    u8 *sp8;

    spC = 0x80;
    spD = 0x80;
    spE = 0x80;
    spF = 0xFF;
    sp8 = &spC;
    fn_801C6CBC(sp8, lbl_80367884, arg2, 0x80);
}

void fn_800CF588(void *arg0) {
    M2C_UNK fn_800E7B80(s32);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x196) != 0) {
        fn_800E7B80(M2C_FIELD(arg0, s32 *, 4));
    }
}

s32 fn_800D3534(s32 *arg0, s32 arg1) {
    s32 fn_800C9400(s32 *, M2C_UNK, s32, s32, s32);
    s32 strlen(s32);
    return fn_800C9400(arg0, 0, *arg0, arg1, strlen(arg1)) == 0;
}

s32 fn_800D3590(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    return temp_r4 & (M2C_FIELD(arg0, s32 *, 8) ^ temp_r4);
}

void fn_800D588C(s32 arg0) {
    extern s32 lbl_8036787C;
    lbl_8036787C = arg0;
}

void fn_800D5894(u32 *arg0) {
    u32 val = *arg0;
    if (val != 0U) {
        fn_8005C7E8();
    }
}

s32 fn_800D5948(u32 *arg0, char *arg1, u32 arg2, u32 arg3) {
    u32 size;
    char *data;
    u32 rem;
    char *end;
    char *p;
    char *b;
    char *a;

    size = arg0[0];
    if (arg2 > size) {
        return -1;
    }
    data = (char *)arg0[2];
    end = arg1 + arg3;
    for (rem = size - arg2, p = data + arg2; rem >= arg3; p++, rem--) {
        for (b = p, a = arg1; a < end; a++, b++) {
            if (*a != *b) {
                goto next;
            }
        }
        return p - data;
    next:;
    }
    return -1;
}

u32 *fn_800D6898(u32 *, u32 *, u32, u32, void *);
M2C_UNK fn_8022CF78(void);
M2C_UNK fn_80232058(void *, const char *, ...);
extern char __files[];

void fn_800D5D04(u32 *arg0, u32 *arg1, u32 arg2, u32 arg3) {
    u32 rem;
    u32 alloc;
    const u32 *n;

    if (arg2 > arg1[0]) {
        fn_80232058(__files + 0xA0, lbl_802704F8 + 0x8E7);
        fn_8022CF78();
    }
    rem = arg1[0] - arg2;
    n = MinU32(&arg3, &rem);
    fn_800D6898(arg0, arg1, arg2, *n, &alloc);
}

void fn_800D67E4(void) {

}

void fn_800D67E8(void) {

}

void fn_800D67EC(s32 arg1) {
    extern void fn_800C428C(s32);
    fn_800C428C(arg1);
}

s32 fn_800D6810(s32 arg0) {
    return arg0 + 4;
}

void fn_800D6818(void *arg1) {
    if (arg1 != NULL) {
        if (((u32*) arg1)[3] != 0) { // offset 0xC
            if (((u32*) arg1)[5] != 0) { // offset 0x14
                fn_800C428C();
            }
        }
        if (arg1 != NULL) {
            if (((u32*) arg1)[2] != 0) { // offset 0x8
                fn_800C428C();
            }
        }
    }
}

void fn_800D6874(void) {

}

void fn_800D6878(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4) = 0;
    M2C_FIELD(arg0, s16 *, 0xC) = 0;
    M2C_FIELD(arg0, s16 *, 0xE) = 0;
}

#pragma use_lmw_stmw on
u32 *fn_800D6898(u32 *arg0, u32 *arg1, u32 arg2, u32 arg3, void *arg4) {
    struct Tag { u8 b; } tag;
    M2C_UNK fn_800CA728(u32 *, char *, char *, void *, struct Tag);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    extern char __files[];
    u32 size;
    u32 len;
    char *p;

    size = arg1[0];
    arg0[1] = 0;
    if (arg2 > size) {
        fn_80232058(__files + 0xA0, lbl_802704F8 + 0x9B3);
        fn_8022CF78();
    }
    len = size - arg2;
    if (len > arg3) {
        len = arg3;
    }
    p = (char *)arg1[2] + arg2;
    fn_800CA728(arg0, p, p + len, arg4, tag);
    return arg0;
}
#pragma use_lmw_stmw reset

void fn_800D6940(void *arg0) {
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;

    r4 = M2C_FIELD(arg0, s32 *, 4);
    r5 = M2C_FIELD(arg0, u32 *, 8);
    r6 = r5 + (r4 * 0x58);
    r7 = ((r6 + 0x57) - r5) / 0x58;
    if (r6 > r5) {
        do {
            r7 -= 1;
        } while (r7 != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_800D6A84(u32 arg1, s32 arg2) {
    if (arg1 != 0U) {
        fn_800D6AB4(arg1, arg2);
    }
}

s32 fn_800D6F0C(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367898;
    fn_800D758C(lbl_80367898);
    return 0;
}

void fn_800D6FA4(void *arg0) {
    M2C_UNK fn_800C9A60(M2C_UNK *, s32); // Corrected signature from the prototype
    M2C_UNK fn_800C9B6C(M2C_UNK *);
    M2C_UNK fn_800DC518(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK sp8;
    
    fn_800C9B6C(&sp8);
    fn_800DC518(M2C_FIELD(arg0, s32 *, 0x424), &sp8, 0);
    fn_800C9A60(&sp8, -1);
}

void fn_800D6FF0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_800D7254();
    void *temp_r3;

    fn_800D7254();
    temp_r3 = M2C_FIELD(arg0, void **, 0x424);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x40), M2C_UNK (**)(void *, s32, s32, s32), 0x58)(temp_r3, arg1, arg2, arg3);
}

void fn_800D74FC(void *arg0) {
    extern void *lbl_80367240;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), M2C_UNK (**)(s32, s32, s32), 0xC)(temp_r4, temp_r4 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r4), M2C_FIELD(lbl_80367240, s32 *, 0xC));
}

void fn_800D7588(void) {

}

s32 fn_800D75FC(void *arg0) {
    s32 fn_800E4454(s32, M2C_UNK *);
    M2C_UNK sp8;
    s32 temp_r3;

    fn_800C9B6C(&sp8);
    temp_r3 = fn_800E4454(M2C_FIELD(arg0, s32 *, 0x10), &sp8);
    fn_800C9A60(&sp8, -1);
    return temp_r3;
}

s32 fn_800D77B0(void) {
    M2C_UNK fn_800DA358();
    fn_800DA358();
    return 0;
}

s32 fn_800D7834(void) {
    M2C_UNK fn_800D75C4(s32);
    M2C_UNK fn_800DA2CC(s32);
    extern s32 lbl_80367A50;
    fn_800D75C4(lbl_80367A50);
    fn_800DA2CC(lbl_80367A50);
    return 0;
}

s32 fn_800D7864(void) {
    extern s32 lbl_80367BA0;
    fn_800D75C4(lbl_80367BA0);
    fn_800DA2CC(lbl_80367BA0);
    return 0;
}

s32 fn_800D7894(void) {
    extern s32 lbl_803679D0;
    fn_800D75C4(lbl_803679D0);
    fn_800DA2CC(lbl_803679D0);
    return 0;
}

s32 fn_800D78C4(void) {
    extern s32 lbl_803679C8;
    fn_800D75C4(lbl_803679C8);
    fn_800DA2CC(lbl_803679C8);
    return 0;
}

s32 fn_800D7C5C(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_803678A8;
    extern s32 lbl_803678C8;
    fn_800D758C(lbl_803678A8);
    fn_800D758C(lbl_803678C8);
    return 0;
}

void fn_800DA31C(void) {
    extern s8 lbl_803678BE;
    extern s8 lbl_803678BF;
    lbl_803678BE = 1;
    lbl_803678BF = 0;
}

void fn_800DA330(void) {
    extern s8 lbl_803678BC;
    extern s8 lbl_803678BD;
    lbl_803678BC = 0;
    lbl_803678BD = 0;
}

void fn_800DA340(s8 arg0) {
    lbl_803678BC = 1;
    lbl_803678BF = 0;
    lbl_803678BD = arg0;
}

s32 fn_800DA5AC(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp_r4 = (arg0 - 1);
    s32 temp_r5 = arg1 >> 2;
    s32 temp_r6 = arg2 * arg3 / 4;
    
    return temp_r4 * temp_r5 + temp_r6;
}

s32 fn_800DA5FC(void) {
    extern void *lbl_803678B8;
    return M2C_FIELD(lbl_803678B8, s32 *, 0x10);
}

extern s32 lbl_803678B8;
String fn_800DAA60(s32 arg1) {
    String fn_800DAA94(s32, s32);
    return fn_800DAA94(lbl_803678B8, arg1);
}

String fn_800DAAF0(s32 arg1) {
    String fn_800DAB24(s32, s32);
    return fn_800DAB24(lbl_803678B8, arg1);
}

void fn_800DAB24(void *arg1, s32 arg2) {
    fn_800C9B6C(M2C_FIELD(arg1, s32 *, 0x3C) + (arg2 * 0xC));
}

void fn_800DB1FC(s32 arg0) {
    M2C_UNK fn_800C9758(s32, s32, s32);
    s32 r3arg = arg0 + 0xAC;
    s32 r5arg = 0;
    s32 r6arg = -1;
    fn_800C9758(r3arg, r5arg, r6arg);
}

void fn_800DB520(void) {

}

void fn_800DB524(void) {

}

void fn_800DB528(void) {

}

s32 fn_800DB668(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C) != 0;
}

void fn_800DB964(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + farg0);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + farg1);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + farg2);
}

void fn_800DB98C(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x6C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x70) = farg1;
    M2C_FIELD(arg0, f32 *, 0x74) = farg2;
}

void fn_800DB99C(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x60) = farg0;
    M2C_FIELD(arg0, f32 *, 0x64) = farg1;
    M2C_FIELD(arg0, f32 *, 0x68) = farg2;
}

void fn_800DB9AC(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x54) = farg0;
    M2C_FIELD(arg0, f32 *, 0x58) = farg1;
    M2C_FIELD(arg0, f32 *, 0x5C) = farg2;
}

void fn_800DB9BC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

void fn_800DB9D8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x48) = farg0;
    M2C_FIELD(arg0, f32 *, 0x4C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x50) = farg2;
}

void fn_800DB9E8(void *arg0, void *arg1) {
    M2C_UNK fn_80067FDC();
    M2C_UNK fn_8020310C(f32 *, f32 *);
    f32 sp10;
    f32 spC;
    f32 sp8;

    sp8 = M2C_FIELD(arg1, f32 *, 0x48);
    spC = M2C_FIELD(arg1, f32 *, 0x4C);
    sp10 = M2C_FIELD(arg1, f32 *, 0x50);
    fn_80067FDC();
    fn_8020310C(&sp8, &sp8);
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 4) = spC;
    M2C_FIELD(arg0, f32 *, 8) = sp10;
}

void fn_800DBAB8(void *arg0, void *arg1) {
    M2C_UNK fn_80202300(M2C_UNK *, M2C_UNK, f32, f32);
    M2C_UNK fn_802029C4(M2C_UNK *, f32 *, f32 *);
    extern f32 lbl_80369E70;
    extern f32 lbl_80369E80;
    extern f32 lbl_80369E84;
    M2C_UNK sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;

    sp8 = lbl_80369E70;
    spC = lbl_80369E70;
    sp10 = lbl_80369E80;
    fn_80202300(&sp14, 0x59, lbl_80369E84 * M2C_FIELD(arg1, f32 *, 0x58), lbl_80369E70);
    fn_802029C4(&sp14, &sp8, &sp8);
    M2C_FIELD(arg1, f32 *, 0x60) = sp8;
    M2C_FIELD(arg1, f32 *, 0x64) = spC;
    M2C_FIELD(arg1, f32 *, 0x68) = sp10;
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x60);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x68);
}

void fn_800DBB58(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x60);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x68);
}

void fn_800DBB74(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x58);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x5C);
}

void fn_800DBB90(void *arg0, void *arg1) {
    extern f32 lbl_80369E70;
    f32 *dst = (f32 *)arg0;
    f32 *src = (f32 *)arg1;

    dst[0] = src[0x12];
    dst[1] = lbl_80369E70;
    dst[2] = src[0x14];
}

void fn_800DBBC8(f32 *arg0, f32 *arg1) {
    arg0[0] = arg1[0x14];
    arg0[1] = arg1[0x13];
    arg0[2] = arg1[0x12];
}

void *fn_800DBE34(void *arg0) {
    M2C_UNK fn_800DFAE0(void *);
    extern void *lbl_8028DED0[];

    fn_800DFAE0(arg0);
    M2C_FIELD(arg0, void ***, 0x40) = lbl_8028DED0;
    M2C_FIELD(arg0, f32 *, 0x78) = M2C_FIELD(arg0, f32 *, 0x7C) = M2C_FIELD(arg0, f32 *, 0x80) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x84) = M2C_FIELD(arg0, f32 *, 0x88) = M2C_FIELD(arg0, f32 *, 0x8C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x90) = M2C_FIELD(arg0, f32 *, 0x94) = M2C_FIELD(arg0, f32 *, 0x98) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x48) = M2C_FIELD(arg0, f32 *, 0x4C) = M2C_FIELD(arg0, f32 *, 0x50) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x54) = M2C_FIELD(arg0, f32 *, 0x58) = M2C_FIELD(arg0, f32 *, 0x5C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x6C) = M2C_FIELD(arg0, f32 *, 0x70) = M2C_FIELD(arg0, f32 *, 0x74) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    return arg0;
}

s32 fn_800DBEC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C);
}

void fn_800DBED0(void) {

}

void fn_800DBED4(void) {

}

void fn_800DBF38(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    extern f32 lbl_80369E88;
    extern f32 lbl_80369E8C;
    extern f32 lbl_80369E90;
    s32 var_r4;

    var_r4 = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) <= 0x3E7) {
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (lbl_80369E88 * farg0);
        if (var_r4 != -1) {
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) (lbl_80369E8C * farg0);
        } else {
            var_r4 = 0x98967F;
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_80369E90;
        }
        M2C_FIELD(arg0, f32 *, 0x50) = farg1;
        M2C_FIELD(arg0, s32 *, 0x5C) = var_r4;
    }
}

void fn_800DBF84(void *arg0) {
    f64 fn_80238638(f64);

    if (M2C_FIELD(arg0, s32 *, 0x5C) > 0) {
        M2C_FIELD(arg0, f32 *, 0x68) = M2C_FIELD(arg0, f32 *, 0x4C) * (f32)fn_80238638(M2C_FIELD(arg0, f32 *, 0x58));
        M2C_FIELD(arg0, f32 *, 0x58) += M2C_FIELD(arg0, f32 *, 0x50);
        M2C_FIELD(arg0, f32 *, 0x4C) += M2C_FIELD(arg0, f32 *, 0x54);
        if (M2C_FIELD(arg0, f32 *, 0x4C) < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x4C) = 0.0f;
        }
        M2C_FIELD(arg0, s32 *, 0x5C)--;
    }
}

void fn_800DC010(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
}

s32 fn_800DC018(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

#pragma cplusplus on
extern "C" void fn_800DC020(void *arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5();
        virtual void v6();
    };

    if (M2C_FIELD(arg0, s32 *, 0x74) == 1) {
        M2C_FIELD(arg0, f32 *, 0x6C) += M2C_FIELD(arg0, f32 *, 0x70);
        if (M2C_FIELD(arg0, f32 *, 0x6C) >= 1.0f) {
            M2C_FIELD(arg0, f32 *, 0x6C) = 1.0f;
            M2C_FIELD(arg0, s32 *, 0x74) = 0;
        }
        if (M2C_FIELD(arg0, f32 *, 0x6C) <= 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x6C) = 0.0f;
            M2C_FIELD(arg0, s32 *, 0x74) = 0;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x74) > 1) {
        M2C_FIELD(arg0, s32 *, 0x74)--;
    }
    ((Obj *)arg0)->v6();
}
#pragma cplusplus reset
void fn_800DC2E4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x15) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x14) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x17) = 0xFF;
}

s32 fn_800DC38C(void *arg0, u32 arg1) {
    s32 *ptr = (s32*)((char*)arg0 + 0xC0);
    if (arg1 >= *(u32*)((char*)arg0 + 0xBC)) {
        return 0;
    }
    return ptr[arg1];
}

s32 fn_800DC3B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x110);
}

s32 fn_800DC3B8(s32 arg0) {
    return arg0 + 0xAC;
}

void fn_800DC408(void *arg0, u32 arg1, s32 arg2) {
    M2C_UNK fn_800C9758(s32, s32, M2C_UNK, M2C_UNK);
    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0xB0)) {
        fn_800C9758(M2C_FIELD(arg0, s32 *, 0xB4) + (arg1 * 0xC), arg2, 0, -1);
    }
}

s32 fn_800DC44C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB0);
}

void fn_800DC518(void* this, float arg1)
{
    if (lbl_803678BC != 0) {
        void (*func_ptr)(void*) = (void (*)(void*))(*(u32*)((char*)this + 0x24));
        func_ptr(this);
    }
}

void fn_800DC598(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x114) = 0;
    M2C_FIELD(arg0, s8 *, 0x115) = 0;
    M2C_FIELD(arg0, s8 *, 0x73) = 0;
}

s32 fn_800DDAA4(s32 arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(fn_800DE73C(arg0 + 0x58), void **, 0xC);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x18);
    }
    return 0;
}

s32 fn_800DDC04(s32 arg0) {
    void *fn_800DE73C(s32);
    return M2C_FIELD(fn_800DE73C(arg0 + 0x58), s32 *, 0xC);
}

void fn_800DDC2C(void *arg0, void *arg1) {
    M2C_UNK fn_800616A0(void *);
    M2C_UNK fn_8006D8E8();
    u32 temp_r0;

    M2C_FIELD(arg1, s32 *, 0x40) = 0;
    M2C_FIELD(arg1, s32 *, 0x48) = 0;
    M2C_FIELD(arg1, s32 *, 0x44) = 0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x54);
    if ((temp_r0 != 0U) && ((u32) M2C_FIELD(arg1, u32 *, 0x4C) == temp_r0)) {
        fn_8006D8E8();
        M2C_FIELD(arg1, u32 *, 0x4C) = 0U;
    }
    fn_800616A0(arg1);
}

void *fn_800DDC90(void *arg0) {
    M2C_UNK fn_8006140C(void *);
    void *fn_80061870();
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    void *temp_r3;

    temp_r3 = fn_80061870();
    if (temp_r3 != NULL) {
        temp_r0 = M2C_FIELD(arg0, u32 *, 0x4C);
        if (temp_r0 != 0U) {
            M2C_FIELD(temp_r3, u32 *, 0x40) = temp_r0;
        }
        temp_r0_2 = M2C_FIELD(arg0, u32 *, 0x50);
        if (temp_r0_2 != 0U) {
            M2C_FIELD(temp_r3, u32 *, 0x48) = temp_r0_2;
        }
        temp_r0_3 = M2C_FIELD(arg0, u32 *, 0x54);
        if (temp_r0_3 != 0U) {
            M2C_FIELD(temp_r3, u32 *, 0x4C) = temp_r0_3;
        }
        fn_8006140C(temp_r3);
    }
    return temp_r3;
}

void fn_800DE9FC(void *arg0) {
    void **ptr = (void **) arg0;
    if (ptr != 0) {
        ptr[1] = ptr[0];
    }
}

void fn_800DEE90(void) {

}

void fn_800DEE94(void) {

}

s32 fn_800DEEBC(s32 arg0) {
    return arg0 + 4;
}

void fn_800DEEC4(void *arg1) {
    s32 temp_cr0_eq;

    temp_cr0_eq = arg1 == NULL;
    if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0) && ((u32) M2C_FIELD(arg1, u32 *, 8) != 0U)) {
        fn_800C428C();
    }
}

void fn_800DEEFC(void) {

}

void fn_800DEF00(void *arg0, void *arg1) {
    f32 *src = (f32 *) arg1;
    f32 *dst = (f32 *) arg0;

    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void fn_800DF298(void *arg0, s32 arg1, f32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xE4) = arg1;
    M2C_FIELD(arg0, f32 *, 0xE8) = arg2;
}

void fn_800DF2D8(void *arg0) {
    f32 fn_80059500(f32, f32, f32, f32, f32);
    f32 temp_f5;
    s32 temp_r0;
    f32 temp_f31;

    if (M2C_FIELD(arg0, s32 *, 0x2C) > 0) {
        if ((M2C_FIELD(arg0, f32 *, 0) == M2C_FIELD(arg0, f32 *, 0xC)) && (M2C_FIELD(arg0, f32 *, 4) == M2C_FIELD(arg0, f32 *, 0x10)) && (M2C_FIELD(arg0, f32 *, 8) == M2C_FIELD(arg0, f32 *, 0x14))) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) - 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (0 >= temp_r0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
            M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
            M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
            return;
        }
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x18);
        temp_f31 = (temp_f5 - (f32) temp_r0) / temp_f5;
        M2C_FIELD(arg0, f32 *, 0) = fn_80059500(M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x48), M2C_FIELD(arg0, f32 *, 0x54), temp_f31);
        M2C_FIELD(arg0, f32 *, 4) = fn_80059500(M2C_FIELD(arg0, f32 *, 0x34), M2C_FIELD(arg0, f32 *, 0x40), M2C_FIELD(arg0, f32 *, 0x4C), M2C_FIELD(arg0, f32 *, 0x58), temp_f31);
        M2C_FIELD(arg0, f32 *, 8) = fn_80059500(M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x44), M2C_FIELD(arg0, f32 *, 0x50), M2C_FIELD(arg0, f32 *, 0x5C), temp_f31);
    }
}

void fn_800DF410(f32 *arg0, f32 *arg1) {
    *arg1 = *arg0;
}

void fn_800DF41C(void *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0);
    *arg2 = M2C_FIELD(arg0, f32 *, 4);
}

void fn_800DF430(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
}

void fn_800DF44C(f32 farg0, f32 farg1, f32 farg2) {
    fn_800DF110(farg0, farg1, farg2);
}

void fn_800DF478(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = farg1;
    M2C_FIELD(arg0, f32 *, 0x14) = farg2;
    M2C_FIELD(arg0, f32 *, 0) = farg0;
    M2C_FIELD(arg0, f32 *, 4) = farg1;
    M2C_FIELD(arg0, f32 *, 8) = farg2;
}

void fn_800DF494(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    extern f32 lbl_80369EA0;
    extern f32 lbl_80369EB0;
    extern f32 lbl_80369EB4;
    extern f32 lbl_80369EB8;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = farg1;
    M2C_FIELD(arg0, f32 *, 4) = farg1;
    M2C_FIELD(arg0, f32 *, 0x14) = farg2;
    M2C_FIELD(arg0, f32 *, 8) = farg2;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80369EA0;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80369EA0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_80369EB0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_80369EB4;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_80369EB8;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, f32 *, 0x54) = farg0;
    M2C_FIELD(arg0, f32 *, 0x48) = farg0;
    M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x30) = farg0;
    M2C_FIELD(arg0, f32 *, 0x58) = farg1;
    M2C_FIELD(arg0, f32 *, 0x4C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x40) = farg1;
    M2C_FIELD(arg0, f32 *, 0x34) = farg1;
    M2C_FIELD(arg0, f32 *, 0x5C) = farg2;
    M2C_FIELD(arg0, f32 *, 0x50) = farg2;
    M2C_FIELD(arg0, f32 *, 0x44) = farg2;
    M2C_FIELD(arg0, f32 *, 0x38) = farg2;
}

void fn_800DF50C(void *arg0) {
    *(f32*)((u8*)arg0 + 0x14) = 0.0f;
    *(f32*)((u8*)arg0 + 0x10) = 0.0f;
    *(f32*)((u8*)arg0 + 0xC) = 0.0f;
    *(f32*)((u8*)arg0 + 8) = 0.0f;
    *(f32*)((u8*)arg0 + 4) = 0.0f;
    *(f32*)((u8*)arg0 + 0) = 0.0f;
    *(f32*)((u8*)arg0 + 0x18) = 0.0f;
    *(f32*)((u8*)arg0 + 0x1C) = 0.0f;
    *(f32*)((u8*)arg0 + 0x20) = 0.0f;
    *(f32*)((u8*)arg0 + 0x24) = 0.0f;
    *(f32*)((u8*)arg0 + 0x28) = 0.0f;
    *(s32*)((u8*)arg0 + 0x2C) = 0;
    *(f32*)((u8*)arg0 + 0x54) = 0.0f;
    *(f32*)((u8*)arg0 + 0x48) = 0.0f;
    *(f32*)((u8*)arg0 + 0x3C) = 0.0f;
    *(f32*)((u8*)arg0 + 0x30) = 0.0f;
    *(f32*)((u8*)arg0 + 0x58) = 0.0f;
    *(f32*)((u8*)arg0 + 0x4C) = 0.0f;
    *(f32*)((u8*)arg0 + 0x40) = 0.0f;
    *(f32*)((u8*)arg0 + 0x34) = 0.0f;
    *(f32*)((u8*)arg0 + 0x5C) = 0.0f;
    *(f32*)((u8*)arg0 + 0x50) = 0.0f;
    *(f32*)((u8*)arg0 + 0x44) = 0.0f;
    *(f32*)((u8*)arg0 + 0x38) = 0.0f;
}

void fn_800DF584(void *arg0) {
    void *temp_r4;
    void *temp_r12;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x3C) != 0) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x38);
        if ((temp_r4 != NULL) && ((u8) M2C_FIELD(temp_r4, u8 *, 0x2C) != 0) && ((u8) M2C_FIELD(arg0, u8 *, 0x2C) != 0)) {
            temp_r12 = M2C_FIELD(arg0, void **, 0x40);
            M2C_FIELD(temp_r12, M2C_UNK (**)(), 0x14)();
        }
    }
}

void fn_800DF60C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), M2C_UNK (**)(), 0xC)();
}

void fn_800DF664(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 0;
}

void fn_800DF670(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 1;
}

void fn_800DF67C(s32 arg0) {
    M2C_UNK fn_800C9758(s32, M2C_UNK, M2C_UNK);
    s32 temp_r4 = 0;
    s32 temp_r5 = -1;
    fn_800C9758(arg0 + 0x10, temp_r4, temp_r5);
}

u8 fn_800DF6A8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2C);
}

s32 fn_800DF6B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

void fn_800DF6B8(s32 arg1) {
    fn_800C9B6C(arg1 + 0x1c);
}

void fn_800DF6DC(s32 arg1) {
    fn_800C9B6C(arg1 + 0x10);
}

void fn_800DF700(s32 arg1) {
    s32 temp = arg1 + 4;
    fn_800C9B6C(temp);
}

void fn_800DFC2C(void *arg0) {
    u8 temp_r0;
    s32 temp_r3;

    temp_r0 = *(u8 *)((uintptr_t)arg0 + 0x8);
    temp_r3 = *(s32 *)((uintptr_t)arg0 + 0x4);
    fn_800E01EC(temp_r3, (temp_r3 + (temp_r3 << 2)), &temp_r0);
}

void fn_800DFDF4(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r5;
    s32 var_ctr;
    s32 var_r4;

    var_r4 = 0;
    temp_r0 = *(s32*)((char*)arg0 + 4);
    var_ctr = temp_r0;
    
    if (temp_r0 > 0) {
loop_1:
        temp_r5 = *(s32*)((char*)arg0 + 8); 
        if (*(void**)((char*)temp_r5 + var_r4) == arg1) {
            fn_800DD87C((char*)temp_r5 + var_r4);
            
            if (arg1 != NULL) {
                void (**func_ptr)(void*, s32) = (void (**)(void*, s32))((char*)arg1 + 0x40);
                (*func_ptr)((char*)arg1 + 0x18, 1);
            }
        } else {
            var_r4 += 4;
            var_ctr -= 1;
            if (var_ctr != 0) {
                goto loop_1;
            }
        }
    }
}

void fn_800DFFB8(void *arg0, s32 arg1) {
    M2C_UNK fn_800C9BC4(s32, M2C_UNK, s32 *);
    s32 sp8;

    sp8 = arg1;
    fn_800C9BC4(M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 4) * 4), 1, &sp8);
}

s32 fn_800DFFF4(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r3 = *(s32*)((char*)arg0 + 4);
    if ((temp_r3 == 0) || (arg1 >= temp_r3)) {
        return 0;
    }
    temp_r0 = (*(s32*)((char*)arg0 + 8)) + (arg1 * 4);
    return *(s32*)((char*)temp_r0);
}

void fn_800E0EE0(s32 *arg0, s32 *arg1, u32 arg2) {
    s32 temp_r6;
    s32 *var_r3 = arg0;
    s32 *var_r4 = arg1;
    s32 *var_r7 = arg1;

loop_1:
    temp_r6 = *var_r3;
    *var_r3 = *var_r7;
    var_r3 += 1;
    *var_r7 = temp_r6;
    var_r7 += 1;
    if (var_r3 != var_r4) {
        if (var_r7 == (s32*)arg2) {
            var_r7 = arg1;
        }
        goto loop_1;
    }
    var_r7 += 1;
    if (var_r7 != (s32*)arg2) {
        var_r4 = var_r7;
        goto loop_1;
    }
}

void fn_800E2138(void *arg0, void *arg1, s32 arg2) {
    s32 spC;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg1, s32 *, 0);
    temp_r0 = temp_r6 + (arg2 * 4);
    temp_r4 = M2C_FIELD(arg1, s32 *, 4);
    sp8 = temp_r6;
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    spC = temp_r4;
    sp8 = temp_r0;
    M2C_FIELD(arg0, s32 *, 4) = temp_r4;
}

s32 fn_800E2168(s32 *arg0, s32 *arg1) {
    return (s32) (*arg0 - *arg1) / 4;
}

void fn_800E2180(s32 *arg0, s32 *arg1) {
    s32 temp_r5;

    temp_r5 = *arg0;
    *arg0 = *arg1;
    *arg1 = temp_r5;
}

void fn_800E2218(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
}

s32 fn_800E26CC(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;

    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

void fn_800E29B8(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 0x50) = arg1;
    M2C_FIELD(arg0, s8 *, 0x51) = arg2;
    M2C_FIELD(arg0, s8 *, 0x52) = arg3;
    M2C_FIELD(arg0, s8 *, 0x53) = arg4;
}

void fn_800E29CC(void *arg0, void *arg1) {
    *(s32 *)arg0 = *(s32 *)((u8 *)arg1 + 0x48);
    *(s32 *)((u8 *)arg0 + 4) = *(s32 *)((u8 *)arg1 + 0x4C);
}

void fn_800E29E0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
}

void fn_800E29EC(void *arg0, void *arg1) {
    *(s32 *)((u8 *)arg0 + 0x48) = *(s32 *)arg1;
    *(s32 *)((u8 *)arg0 + 0x4C) = *(s32 *)((u8 *)arg1 + 4);
}

s32 fn_800E2E50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_800E2E58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64);
}

s32 fn_800E2E60(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58);
}

s32 fn_800E2E68(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

s32 fn_800E378C(s32 arg0, s32 arg1) {
    void *temp_r3;
    
    temp_r3 = fn_800C93EC((void*)arg1);
    fn_8006EEFC(arg0 + 0x48, (s32)temp_r3);
    
    return 1;
}

extern Struct_8014589C D_8014589C;
u32 fn_800E37CC(u32 arg0, u32 arg1)
{
    return (arg0 * arg1) >> 8;
}

void fn_800E3BD8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (arg1 + (M2C_FIELD(arg0, s32 *, 0x7C) - M2C_FIELD(arg0, s32 *, 0x74)));
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (arg2 + (M2C_FIELD(arg0, s32 *, 0x80) - M2C_FIELD(arg0, s32 *, 0x78)));
}

void fn_800E3F48(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9C) = 0;
}

void fn_800E3F54(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9C) = 1;
}

void fn_800E4110(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x71) = 1;
    M2C_FIELD(arg0, s8 *, 0x72) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = arg1;
    M2C_FIELD(arg0, s32 *, 0x78) = arg2;
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, s32 *, 0x58);
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), M2C_UNK (**)(M2C_UNK), 0x38)(1);
}

void fn_800E4164(void) {

}

void fn_800E4168(void) {

}

void fn_800E416C(void) {

}

void fn_800E4170(void) {

}

void fn_800E4174(void) {

}

void fn_800E4178(void *arg0, void *arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), M2C_UNK (**)(s32, s32), 0x4C)(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4));
}

void fn_800E43E8(void) {

}

void fn_800E45CC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg2;
}

void fn_800E45D8(s32 *arg0, s32 *arg1) {
    s32 temp_r5;
    s32 temp_r0;

    temp_r5 = *arg0;
    temp_r0 = *arg1;
    *arg1 = temp_r5;
    *arg0 = temp_r0;
}

void fn_800E4B44(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 |= 0x60000000;
    }
}

void fn_800E4B64(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 |= 0x01000000;
    }
}

void fn_800E4B84(void *arg0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xE0);
        M2C_FIELD(temp_r3, u8 *, 0x85) = (u8) (M2C_FIELD(temp_r3, u8 *, 0x85) | 0xF0);
    }
}

void fn_800E4BA4(void *arg0, s8 arg1) {
    void *temp_r6;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r6 = M2C_FIELD(arg0, void **, 0xE0);
        M2C_FIELD(temp_r6, s32 *, 0) = (s32) (M2C_FIELD(temp_r6, s32 *, 0) | 0x8000);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), s8 *, 0x87) = 4;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), s8 *, 0x84) = arg1;
    }
}

s32 fn_800E4BD8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x114);
}

void fn_800E4BE0(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x110) = farg0;
    M2C_FIELD(arg0, s32 *, 0x114) = arg2;
}

void fn_800E4C14(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x104) = farg0;
}

void fn_800E4C1C(void *arg0) {
    u32 *ptr = (u32*)((char*)arg0 + 0xE8);
    if (*ptr != 0) {
        fn_800588EC();
        *ptr = 0;
    }
}

u32 fn_800E4C5C(void *arg0, u32 arg1, u32 arg2, u8 arg3) {
    extern s32 lbl_80369F38;
    s32 sp8;

    if ((*(u32 *)((char *)arg0 + 0xE8)) != 0) {
        fn_80057EDC();
        *(u32 *)((char *)arg0 + 0xE8) = 0;
    }
    if ((arg1 == 0) || (arg2 == 0)) {
        *(u32 *)((char *)arg0 + 0xE8) = 0;
        return 0;
    }
    *(u32 *)((char *)arg0 + 0xE8) = fn_80057F04(*(s32 *)((char *)arg0 + 0xE0), arg1, arg2, 4);
    sp8 = lbl_80369F38;
    fn_80058970(*(u32 *)((char *)arg0 + 0xE8), &sp8);
    if (arg3 != 0) {
        fn_80058910(*(u32 *)((char *)arg0 + 0xE8), 1);
    }
    return *(u32 *)((char *)arg0 + 0xE8);
}

void fn_800E4E3C(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 |= 0x40000;
    }
}

void fn_800E4E5C(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 &= 0xFFFFFBFF;
    }
}

void fn_800E4F0C(void *arg0) {
    M2C_UNK fn_8006135C(s32);
    fn_8006135C(M2C_FIELD(arg0, s32 *, 0xE0));
}

void fn_800E4FE8(void *arg0, void *arg1, s32 arg2) {
    extern f32 lbl_80369F3C;
    s32 temp_r3;

    if (arg1 != NULL) {
        temp_r3 = fn_8006135C(M2C_FIELD(arg1, s32 *, 0xE0), arg2);
        M2C_FIELD(arg0, void **, 0xEC) = arg1;
        M2C_FIELD(arg0, s32 *, 0xF0) = temp_r3;
    }
    *(f32*)((u8*)arg0 + 0x84) = lbl_80369F3C;
    *(f32*)((u8*)arg0 + 0x88) = lbl_80369F3C;
    *(f32*)((u8*)arg0 + 0x8C) = lbl_80369F3C;
}

void fn_800E5044(void *arg0) {
    M2C_UNK fn_8005F494(s32);
    fn_8005F494(M2C_FIELD(arg0, s32 *, 0xE0));
}

s32 fn_800E5068(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF8);
}

s32 fn_800E5070(void *arg0, s32 arg1) {
    if ((arg1 < 0) || ((u32) arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0xF8))) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0xFC) + (arg1 * 0x1C);
}

void fn_800E51A8(void *arg1) {
    M2C_UNK fn_800C9ABC(void *, M2C_UNK *);
    extern M2C_UNK lbl_802720E0;
    M2C_UNK sp8;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg1, void **, 0x100);
    if ((temp_r6 != NULL) && ((s32) M2C_FIELD(temp_r6, s32 *, 0x18) == (s32) M2C_FIELD(arg1, s32 *, 0xCC))) {
        fn_800C9B6C(temp_r6);
        return;
    }
    fn_800C9ABC(&lbl_802720E0 + 5, &sp8);
}

void fn_800E5200(void *arg0, u16 arg1, s32 arg2) {
    if (arg2 != 0) {
        fn_8005F84C(M2C_FIELD(arg0, s32 *, 0xE0), arg2, arg1);
        return;
    }
    fn_8005F894(M2C_FIELD(arg0, s32 *, 0xE0), arg1);
}

void fn_800E5248(void *arg0, u16 arg1) {
    s32 temp = *(s32 *)((u8 *)arg0 + 0xE0);
    fn_8005F9B8(temp, arg1);
}

void fn_800E5600(void *arg0, s32 arg1, u8 arg2) {
    M2C_UNK fn_8005FEE8(void *, f32);
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), u32 *, 0x44) != 0U) {
        if (arg2 != 0) {
            M2C_FIELD(arg0, s8 *, 0xD0) = 0;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
        if (var_r4 >= temp_r0) {
            var_r4 = temp_r0;
        }
        M2C_FIELD(arg0, s32 *, 0xCC) = var_r4;
        fn_8005FEE8(M2C_FIELD(arg0, void **, 0xE0), (f32) var_r4);
    }
}

s32 fn_800E5674(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0xD0) != 0) {
        return M2C_FIELD(arg0, s32 *, 0xC8);
    }
    return 0;
}

s32 fn_800E5690(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xCC);
}

void fn_800E5698(s32 arg1) {
    M2C_UNK fn_800C9B6C(s32);
    arg1 += 0xB0;
    fn_800C9B6C(arg1);
}

s32 fn_800E56BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE0);
}

u8 fn_800E56C4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xD0);
}

void fn_800E56CC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xD0) = 0;
}

void fn_800E59BC(void *arg0) {
    M2C_UNK fn_80060060(void *);
    if ((u8) M2C_FIELD(arg0, u8 *, 0xD0) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) >= (s32) M2C_FIELD(arg0, s32 *, 0xC8)) {
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD1) == 0) {
                M2C_FIELD(arg0, u8 *, 0xD0) = 0U;
            } else {
                M2C_FIELD(arg0, s32 *, 0xCC) = 0;
                fn_80060060(M2C_FIELD(arg0, void **, 0xE0));
            }
        } else {
            fn_80060060(M2C_FIELD(arg0, void **, 0xE0));
        }
        M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), f32 *, 0x58);
    }
}

void fn_800E76D0(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
}

void fn_800E76D8(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3C) = arg1;
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" void fn_800E76E0(void *arg0, f32 farg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual s32 v10(void *, char *, s32) = 0;
    };
    extern char lbl_80272230[];
    u8 list[0x18];
    s32 count;
    s32 i;

    fn_800E01C8(list);
    if (M2C_FIELD(arg0, u8 *, 0x3C) == 0) {
        fn_800E0140(list, -1);
        return;
    }
    count = ((Obj *)arg0)->v10(list, lbl_80272230 + 0x16, 0);
    for (i = 0; i < count; i++) {
        fn_800E8A88((void *)fn_800DFFF4(list, i), farg0);
    }
    fn_800E0140(list, -1);
}
#pragma dont_inline reset
#pragma cplusplus reset

void fn_800E788C(s32 arg1) {
    s32 temp = arg1 + 0x30;
    fn_800C9B6C(temp);
}

void fn_800E78B0(s32 arg0) {
    fn_800C9758(arg0 + 0x30, 0, -1);
}

void fn_800E78DC(void) {

}

void fn_800E78E0(void *arg0) {
    s32 *var_r31;
    void *temp_r3;

    *(s32*)((char*)arg0 + 0x28) = 0x1F4;
    var_r31 = (s32*)((char*)arg0 + 4);
    var_r31 = (s32*)((char*)var_r31 - 1);
loop_2:
    if (*var_r31 >= 0) {
        temp_r3 = *(void**)((char*)arg0 + 0x10);
        temp_r3 = *(void**)((char*)temp_r3 + 0x18);
        temp_r3 = ((void*(*)(void*, s32))temp_r3)(arg0, *var_r31);
        *(s32*)((char*)temp_r3 + 0x44) = *(s32*)((char*)arg0 + 0x28);
        temp_r3 = *(void**)((char*)temp_r3 + 0x40);
        temp_r3 = *(void**)((char*)temp_r3 + 0x1C);
        ((void(*)(s32))temp_r3)(*(s32*)((char*)arg0 + 0x24));
        *var_r31 -= 1;
        *(s32*)((char*)arg0 + 0x28) += 1;
        goto loop_2;
    }
}

void fn_800E7970(void *arg0) {
    s32 i;
    void **temp_r12;

    for (i = 0; i < *(s32 *)((char *)arg0 + 4); i++) {
        temp_r12 = *(void***)((char*)arg0 + 0x10);
        temp_r12 = *(void***)((char*)temp_r12 + 0x18);
        ((void(*)(void*, s32))temp_r12)(arg0, i);
        fn_800DF5E0();
    }
}

void fn_800E7A38(void *arg0, s32 arg1) {
    s32 i;
    void **temp_r12;

    i = 0;
    *(u8*)((char*)arg0 + 0x2C) = 0;
loop_2:
    if (i < *(s32*)((char*)arg0 + 4)) {
        temp_r12 = *(void***)((char*)arg0 + 0x10);
        temp_r12 = *(void***)((char*)temp_r12 + 0x18);
        ((void(*)(void*, s32))temp_r12)(arg0, i);
        fn_800DF638(arg1);
        i += 1;
        goto loop_2;
    }
    temp_r12 = *(void***)((char*)arg0 + 0x10);
    temp_r12 = *(void***)((char*)temp_r12 + 8);
    ((void(*)(void*))temp_r12)(arg0);
    *(s32*)((char*)arg0 + 0x44) += 1;
}

u8 fn_800E7C80(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2C);
}

void fn_800E7C88(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 1;
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" void fn_800DF664(void *);
extern "C" void fn_800E7D10(void *arg0, String *arg1) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2(M2C_UNK *, M2C_UNK *) = 0;
    };
    extern char lbl_80272230[];
    u8 alloc;
    String tmp;
    void *found;

    fn_800C9ABC(&tmp, lbl_80272230 + 6, &alloc);
    found = ((Obj *)arg0)->v2(fn_800C93EC(&tmp), fn_800C93EC(arg1));
    if (found != NULL) {
        fn_800DF664(found);
    }
    fn_800C9A60(&tmp, -1);
}
#pragma dont_inline reset
#pragma cplusplus reset

void fn_800E7DA4(void *arg0, s32 arg1) {
    void *vtable_ptr = *(void **)((char *)arg0 + 0x10);
    void *vtable_entry = *(void **)((char *)vtable_ptr + 0x10);
    ((void (*)(s32))vtable_entry)(arg1);
}

void fn_800E7E4C(s32 arg0, s32 arg1) {
    extern s32 lbl_80367870;
    extern s32 lbl_80367874;
    extern s32 lbl_80367878;
    
    if (arg0 < 0) {
        arg0 = -arg0;
    }
    
    if (arg1 < 0) {
        arg1 = -arg1;
    }
    
    lbl_80367870 = arg0;
    lbl_80367874 = arg1;
    lbl_80367878 = 0x10000 - (arg0 + arg1);
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" void fn_800E01C8(void *);
extern "C" void fn_800E0140(void *, s32);
extern "C" s32 fn_800DFFF4(void *, s32);
extern "C" u8 fn_800E903C(void *);
extern "C" s32 fn_800E7EA0(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual s32 v10(void *, char *, s32) = 0;
    };
    extern char lbl_80272230[];
    u8 list[0x18];
    s32 count;
    s32 item;
    s32 i;

    fn_800E01C8(list);
    count = ((Obj *)arg0)->v10(list, lbl_80272230 + 0x16, 0);
    for (i = 0; i < count; i++) {
        item = fn_800DFFF4(list, i);
        if (fn_800E903C((void *)item)) {
            fn_800E0140(list, -1);
            return item;
        }
    }
    fn_800E0140(list, -1);
    return 0;
}
#pragma dont_inline reset
#pragma cplusplus reset

void fn_800E7FB4(void* arg0, u32 arg1, void* arg2) {
    void** v0 = (void**)arg0;
    *v0 = arg2;
    *(v0 + 0x9) = arg0;
}

void fn_800E805C(s32 arg0, void *arg1) {
    M2C_UNK fn_800E7F94(void *, s32);
    
    fn_800E7F94(arg1, arg0);
    return;
}

void fn_800E8154(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), M2C_UNK (**)(), 0x38)();
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), M2C_UNK (**)(void *), 8)(arg0);
}

void fn_800E8888(void) {
    M2C_UNK fn_800E43EC();
    fn_800E43EC();
}

void *fn_800E89EC(void *arg0, s16 arg1) {
    void fn_8022C1E8(void *, void *, s32, s32);
    M2C_UNK fn_800C9A60(void *, s32);
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern void *lbl_8028E2B0[];
    extern void *lbl_8028DED0[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E2B0;
        fn_8022C1E8((s8 *)arg0 + 0xBC, (void *)fn_800C9A60, 0xC, 3);
        fn_800C9A60((s8 *)arg0 + 0xB0, -1);
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void ***, 0x40) = lbl_8028DED0;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800E8A88(void *arg0, f32 farg0) {
    extern f32 lbl_80369F7C;
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) (lbl_80369F7C * farg0);
    M2C_FIELD(arg0, s32 *, 0x120) = 0x3C;
}

void fn_800E8AA0(void* arg0) {
    extern f32 lbl_80369F80;
    extern f32 lbl_80369F7C;
    extern f32 lbl_80369F78;

    s32 temp = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp <= 0x3E7) {
        M2C_FIELD(arg0, f32 *, 0x108) = lbl_80369F80 * 1.0f;
        if ((s32)M2C_FIELD(arg0, s32 *, 0x120) != -1) {
            M2C_FIELD(arg0, f32 *, 0x110) = lbl_80369F7C * 1.0f;
        } else {
            M2C_FIELD(arg0, f32 *, 0x110) = lbl_80369F78 * 1.0f;
            M2C_FIELD(arg0, s32 *, 0x120) = 0x996981;
        }
    }
    return;
}

s32 fn_800E8BB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2B4);
}

void fn_800E8BBC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2B4) = arg1;
}

s32 fn_800E8BC4(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x160) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x1C0) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x280) != 0)) {
        return 1;
    }
    return 0;
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" M2C_UNK *fn_800C93EC(void *);
extern "C" s32 fn_800E8F00(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual s32 v2(M2C_UNK *, M2C_UNK *) = 0;
    };
    struct Self {
        Obj *obj;
        u8 pad[0xAC];
        String name;
        String strs[3];
        s32 index;
    };
    Self *self = (Self *)arg0;
    String tmp;
    s32 result;

    tmp.cap = 0;
    tmp.size = 0;
    tmp.data = 0;
    tmp.cap = 0;
    fn_800C9758(&tmp, &self->strs[self->index], 0, -1);
    result = self->obj->v2(fn_800C93EC(&self->name), fn_800C93EC(&tmp));
    fn_800C9A60(&tmp, -1);
    return result;
}
#pragma dont_inline reset
#pragma cplusplus reset

void fn_800E8FAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE0) = arg1;
}

u8 fn_800E8FB4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xFD);
}

void fn_800E8FBC(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0xF0) = farg0;
    M2C_FIELD(arg0, f32 *, 0xF4) = farg1;
    M2C_FIELD(arg0, f32 *, 0xF8) = farg2;
}

void fn_800E8FCC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0xF0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0xF4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0xF8);
}

void fn_800E8FE8(void *arg0, f32 arg1) {
    *(f32*)((u8*)arg0 + 0x104) = arg1;
    fn_800DF478((u8*)arg0 + 0x254, 0.0f, 0.0f, 0.0f);
}

f32 fn_800E9018(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x104);
}

void fn_800E9020(void *arg0, void *arg1) {
    f32 *src = (f32 *)arg1;
    f32 *dst = (f32 *)arg0;
    
    dst[0x39] = src[0];
    dst[0x3A] = src[1];
    dst[0x3B] = src[2];
}

u8 fn_800E903C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xAC);
}

void fn_800E9044(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xAC) = 0;
}

void fn_800E9050(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xAC) = 1;
}

void fn_800E940C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), M2C_UNK (**)(), 0x50)();
    if ((u8) M2C_FIELD(arg0, u8 *, 0xAC) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), M2C_UNK (**)(void *), 0x20)(arg0);
    }
}

void fn_800E99CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_800E9A10(s32 arg0) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
    };
    s32 fn_8021BA54(s32, void (*)(void));
    void fn_800EB80C(void);
    extern struct CardWork lbl_80320C20;

    lbl_80320C20.busy = 1;
    lbl_80320C20.result = fn_8021BA54(lbl_80320C20.chan, fn_800EB80C);
    if (lbl_80320C20.result < 0) {
        fn_8000C070(arg0, 0x63);
        lbl_80320C20.busy = 0;
    }
}

void fn_800E9A94(void) {
    void fn_800EBF58();
    s32 fn_8021CDC4(s32, void *, void *);

    extern s32 lbl_802725D8;
extern s32 lbl_80320C20;

      fn_800EBF58();
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA004) = fn_8021CDC4(M2C_FIELD(&lbl_80320C20, s32 *, 0xA000), &lbl_802725D8 + 0x70, &lbl_80320C20 + 0x10000);
}

void fn_800E9B10(void) {
    s32 fn_8021BF10(s32, void *, void *);
    void fn_8021C02C(void *);

    extern s32 lbl_802725D8;
    extern s32 lbl_80320C20;

    void *temp_r31;
    temp_r31 = &lbl_80320C20 + 0xA01C;
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA004) = fn_8021BF10(M2C_FIELD(&lbl_80320C20, s32 *, 0xA000), &lbl_802725D8 + 0x70, temp_r31);
    if ((s32) M2C_FIELD(&lbl_80320C20, s32 *, 0xA004) != -4) {
        fn_8021C02C(temp_r31);
    }
}

void fn_800E9B80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern s32 lbl_8028E420;
    extern s32 lbl_80320C20;

    M2C_FIELD(&lbl_80320C20, s32 *, 0xA034) = arg0;
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA00C) = arg1;
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA010) = arg2;
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA014) = arg3;
    fn_8000CAA0(&lbl_8028E420, arg4, &lbl_8028E420, &lbl_80320C20 + 0x10000);
}

void fn_800EA540(s32 arg0, s32 arg1) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
        u8 padA01B[0x19];
        s32 unkA034;
    };
    extern struct CardWork lbl_80320C20;
    extern u8 lbl_8028E3EC[];

    lbl_80320C20.unkA034 = arg0;
    fn_8000CAA0(lbl_8028E3EC, arg1);
}

void fn_800EA7CC(s32 arg0, s32 arg1) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
        u8 padA01B[0x19];
        s32 unkA034;
    };
    extern struct CardWork lbl_80320C20;
    extern u8 lbl_8028E358[];

    lbl_80320C20.unkA034 = arg0;
    fn_8000CAA0(lbl_8028E358, arg1);
}

void fn_800EB210(u32 arg0) {
    extern u16 lbl_8028E308[40]; // 80 bytes = 40 words
    
    if (arg0 == 0U) {
        fn_8000CAF0(lbl_8028E308, 2);
        return;
    }
    fn_8000CAA0(lbl_8028E308, arg0, lbl_8028E308);
}

void fn_800EB258(void) {
    s32 OSGetTick(void);
    extern u16 lbl_80320C20[];
    lbl_80320C20[0xA030] = OSGetTick();
}

void fn_800EB288(void) {
    extern M2C_UNK lbl_80320C20;
    switch ((s32) M2C_FIELD(&lbl_80320C20, s32 *, 0xA004)) { /* irregular */
    case 0:
        M2C_FIELD(&lbl_80320C20, s8 *, 0xA018) = 1;
        return;
    case -6:
    case -13:
        M2C_FIELD(&lbl_80320C20, s8 *, 0xA018) = 1;
        return;
    }
}

void fn_800EB2DC(s32 arg0) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
    };
    void fn_800EB80C(void);
    extern struct CardWork lbl_80320C20;

    switch (lbl_80320C20.result) {
    case 0:
    case -6:
        lbl_80320C20.busy = 1;
        lbl_80320C20.result = fn_8021A7D4(lbl_80320C20.chan, fn_800EB80C);
        if (lbl_80320C20.result < 0) {
            fn_8000C070(arg0, 0x50);
        }
        break;
    }
}

void fn_800EB374(s32 arg0) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
    };
    void fn_800EB7E4(void);
    void fn_800EB80C(void);
    extern struct CardWork lbl_80320C20;
    u8 ok;

    ok = 0;
    if (lbl_80320C20.result == 0 && lbl_80320C20.busy == 0) {
        ok = 1;
    }
    if (!ok) {
        fn_8000C070(arg0, 0x63);
        return;
    }
    if (lbl_80320C20.sectorSize != 0x2000) {
        lbl_80320C20.result = -0x41;
        fn_8000C070(arg0, 0x63);
        return;
    }
    lbl_80320C20.busy = 1;
    lbl_80320C20.result = fn_8021AFD0(lbl_80320C20.chan, lbl_80320C20.workArea, fn_800EB7E4, fn_800EB80C);
}

s32 fn_800EB520(char *arg0) {
    extern char lbl_802725D8[];
    return fn_802342B8(arg0, lbl_802725D8 + 0xE0) != 0;
}

void fn_800EB558(void) {
    extern s32 lbl_80367110;
    lbl_80367110 &= 0xFFFFFEFF;
}

extern u16 lbl_80367110;
void fn_800EB568(void) {
    lbl_80367110 |= 0x100;
}

s32 fn_800EB774(void) {
    extern u32 lbl_80320C20[];
    return *(u32*)((u8*)lbl_80320C20 + 0xA004);
}

s32 fn_800EB788(void) {
    extern u16 lbl_80320C20[];
    
    if ((s32) *(u32 *) (lbl_80320C20 + 0xA004) < 0) {
        fn_8000C070(0x63);
        *(u8 *) (lbl_80320C20 + 0xA01A) = 0;
        return 1;
    }
    return 0;
}

void fn_800EB7E4(void) {
    extern u16 lbl_80320C20;
    *(u8 *)((s32)&lbl_80320C20 + 0xA018) = 0;
    *(u8 *)((s32)&lbl_80320C20 + 0xA019) = 0;
    *(u8 *)((s32)&lbl_80320C20 + 0xA01A) = 0;
    *(s32 *)((s32)&lbl_80320C20 + 0xA004) = -3;
}

void fn_800EB80C(void) {
    s32 fn_80217C34(s32);
    extern u16 lbl_80320C20[];
    
    u32 tmp = fn_80217C34(*(u32*)(lbl_80320C20 + 0x4000));
    *(u32*)(lbl_80320C20 + 0x4008) = tmp;
    *(u8*)(lbl_80320C20 + 0x4034) = 0;
}

s32 fn_800EB854(void) {
    u16* base = (u16*)0x80320C20;
    if (*(u32*)((char*)base + 0x2002) == -1) {
        return 1;
    }
    if (*(u16*)((char*)base + 0x200E) == 0) {
        return 1;
    }
    return 0;
}

void fn_800EC1F8(u32 *arg0) {
    u32 i;
    u32 j;
    u32 c;

    for (i = 0; i < 0x100; i++) {
        c = i;
        for (j = 0; j < 8; j++) {
            if (c & 1) {
                c = (c >> 1) ^ 0xEDB88320;
            } else {
                c >>= 1;
            }
        }
        *arg0++ = c;
    }
}

s32 fn_800EC2B8(void) {
    extern s32 lbl_803678C0;
    fn_800D758C(lbl_803678C0);
    return 0;
}

extern void *lbl_803678C0;
s32 fn_800ECCB8(void) {
    s32 temp_r3;
    
    temp_r3 = *(s32*)((char*)lbl_803678C0 + 0x478);
    fn_800DC454(temp_r3);
    return 0;
}

void fn_800ECCE4(void* this) {
    void** temp = (void**)((u8*)this + 0x14);
    if (*temp != 0) {
        *temp = 0;
    }
}

s32 fn_800ED754(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_803678C8;
    fn_800D758C(lbl_803678C8);
    return 0;
}

void fn_800ED77C(void) {
    lbl_803678BC = 0;
    lbl_803678BD = 0;
}

extern u16* lbl_803678C8;
s32 fn_800ED800(void) {
    u16* temp_r4;
    
    temp_r4 = (u16*)((char*)lbl_803678C8 + 0x424);
    *temp_r4 -= 1;
    if ((s16)*temp_r4 < 0) {
        *temp_r4 = 0;
    }
    lbl_803678C8[0x450 / 2] = 8;
    return 0;
}

void fn_800ED83C(void) {
    *(u16**)0x803678C8 = (u16*)0x803678C8;
}

#pragma dont_inline on
s32 fn_800ED8C0(void) {
    void *p = M2C_FIELD(lbl_803678C8, void **, 0x440);
    if (p != NULL) {
        fn_800E56CC(p);
    }
    return 0;
}

s32 fn_800ED92C(void) {
    void *p = M2C_FIELD(lbl_803678C8, void **, 0x440);
    if (p != NULL) {
        fn_800E56CC(p);
    }
    return 0;
}

#pragma dont_inline reset
void fn_800EDF18(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xB0) * (arg1 - M2C_FIELD(arg0, s32 *, 0x48))) / (s32) M2C_FIELD(arg0, s32 *, 0x60));
}

void fn_800EDF38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xB0) * (arg1 - M2C_FIELD(arg0, s32 *, 0x48))) / (s32) M2C_FIELD(arg0, s32 *, 0x60));
}

void fn_800EE090(void) {
    M2C_UNK fn_800E43EC();
    fn_800E43EC();
}

s32 fn_800EE490(void) {
    s32 fn_8000CAF0(void *, s32);
    void fn_800EE124(void);
    extern u8 lbl_8028E558[];
    s32 result;

    result = fn_8000CAF0(lbl_8028E558, 4);
    fn_800EE124();
    return result;
}

void fn_800F0774(void) {
    M2C_UNK fn_8000C60C();
    extern u32 lbl_803678E8;
    extern u32 lbl_803678EC;
    if ((u32) lbl_803678E8 != 0U) {
        fn_8000C60C();
        lbl_803678E8 = 0U;
    }
    if ((u32) lbl_803678EC != 0U) {
        fn_8000C60C();
        lbl_803678EC = 0U;
    }
}

void fn_800F09A8(s32 arg0) {
    void *fn_80052B54(char *, s32);
    u8 fn_8014D8BC(void *);
    extern u8 lbl_80330708[];
    extern char lbl_80272D08[];
    extern u32 lbl_803678E8;
    extern u32 lbl_803678EC;

    if (fn_8014D8BC(lbl_80330708)) {
        lbl_803678E8 = (u32)fn_80052B54(lbl_80272D08 + 0x1D, arg0);
        lbl_803678EC = (u32)fn_80052B54(lbl_80272D08 + 0x2A, arg0);
        M2C_FIELD(M2C_FIELD(lbl_803678E8, void **, 0x30), u32 *, 8) |= 0x164;
        M2C_FIELD(M2C_FIELD(lbl_803678EC, void **, 0x30), u32 *, 8) |= 0x164;
    }
}

void fn_800F0B18(u8 *arg0) {
    extern u8 lbl_8032B2B8[];
    s32 i;
    u8 *p;
    s8 dx;
    s8 dy;

    for (i = 0, p = lbl_8032B2B8; i < (s8)lbl_8032B2B8[0x100]; p++, i++) {
        dx = p[1] - p[0];
        dy = p[0x41] - p[0x40];
        if (dx < 0) {
            *arg0++ = 1;
        } else if (dx > 0) {
            *arg0++ = 2;
        } else if (dy < 0) {
            *arg0++ = 8;
        } else if (dy > 0) {
            *arg0++ = 4;
        }
    }
    *arg0 = 0x10;
}

void fn_800F0BC8(void) {
    extern u16 lbl_8032B2B8[];
    extern void fn_8006785C(u32, void *, void *);
    extern u16 fn_800F0C54[];
    
    fn_8006785C(1, fn_800F0C54, lbl_8032B2B8);
}

void fn_800F0BFC(s32 arg0, s32 arg1) {
    extern u16 lbl_8032B2B8[];
    extern void fn_800F0F90(u16 *, s32, s32);
    
    fn_800F0F90(lbl_8032B2B8, arg0, arg1);
}

void fn_800F0C30(s8 arg0, s8 arg1, s8 arg2) {
    extern u8 lbl_8032B2B8[];
    lbl_8032B2B8[0] = arg0;
    lbl_8032B2B8[0x40] = arg1;
    lbl_8032B2B8[0x80] = arg2;
    lbl_8032B2B8[0xC0] = 0x14;
    lbl_8032B2B8[0x100] = 0;
}

extern s8 lbl_8032AC58[];
void fn_800F1BFC(void) {
    fn_800F1C24(&lbl_8032AC58);
}

void fn_800F214C(void) {
    fn_800F2174(&lbl_8032AC58);
}

void fn_800F2E50(s8 arg0) {
    M2C_FIELD(&lbl_8032AC58, s8 *, 0x65C) = arg0;
}

u8 fn_800F2E60(void) {
    extern s8 lbl_8032AC58[];
    return lbl_8032AC58[0x65C];
}

void fn_800F58DC(void *arg0, void *arg1) {
    extern u16 lbl_802EF4E0[2008];
    if (((u8 (**)(void *))arg0)[1](arg1) != 0) {
        fn_8002F6E8(&lbl_802EF4E0, *(u8 *)((u8 *)arg1 + 0x19E), *(u8 *)((u8 *)arg1 + 0x19F), *(u8 *)((u8 *)arg1 + 0x198), 0);
    }
}

void fn_800F5938(void *arg0, s32 arg1) {
    u8 *fn_8002F680(void *, u8, u8);
    s32 fn_8002F6E8(void *, u8, u8, s32, s32);
    extern u8 lbl_802EF4E0[];
    u8 *p;
    u8 count;
    u8 y;
    u8 x;

    if (M2C_FIELD(arg0, u8 (**)(s32), 4)(arg1)) {
        p = fn_8002F680(lbl_802EF4E0, M2C_FIELD(arg0, u8 *, 8), M2C_FIELD(arg0, u8 *, 9));
        if (p == NULL) {
            fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg0, u8 *, 8), M2C_FIELD(arg0, u8 *, 9), 0, 1);
        } else {
            count = p[3] + 1;
            y = M2C_FIELD(arg0, u8 *, 9);
            x = M2C_FIELD(arg0, u8 *, 8);
            p[0] = x;
            p[1] = y;
            p[2] = 0;
            p[3] = count;
        }
    }
}

f32 fn_800F738C(u8 arg0, f32 farg0) {
    extern f32 lbl_8036A07C;
    extern f32 lbl_8036A080;
    extern f64 lbl_8036A088;
    extern f64 lbl_8036A098;
    f64 fn_802387C8(f64);

    if (farg0 > lbl_8036A07C) {
        farg0 = lbl_8036A07C;
    }
    if (farg0 < lbl_8036A080) {
        farg0 = lbl_8036A080;
    }
    if (arg0 != 0) {
        return (f32)fn_802387C8(lbl_8036A098);
    }
    return (f32)fn_802387C8(lbl_8036A088);
}

s32 fn_800F7E78(void) {
    M2C_UNK fn_800F75F8();
    fn_800F75F8();
    return 1;
}

s32 fn_800F7E9C(s8 arg1, s8 arg2, void *arg3) {
    extern u16 lbl_802CA518[];
    void* ptr = (u8*)lbl_802CA518 + 0x10000 + ((arg1 + (arg2 << 6)) << 1);
    if (*(u16*)ptr == 0) {
        return 0;
    }
    *(u8*)arg3 = arg1;
    *((u8*)arg3 + 1) = arg2;
    return fn_800F773C(arg3);
}

u8 fn_800F8308(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A8);
}

s16 fn_800F8310(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x2A2);
}

s16 fn_800F8318(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x29A);
}

s16 fn_800F8320(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x298);
}

s32 fn_800F8328(void *arg0, s32 arg2, s32 arg3) {
    return *(u32*)((u8*)arg0 + 4) & arg3;
}

s16 fn_800F833C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x29C);
}

s32 fn_800F8344(s32 arg0) {
    return arg0 + 0x2E0;
}

void fn_800F834C(void) {

}

s32 fn_800F8350(s32 *arg0) {
    return *arg0 != 0;
}

void fn_800F8364(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F8FF4(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9020(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9924(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9E64(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FA254(void *arg0) {
    extern s32 lbl_803678F4;
    extern void *lbl_803678F8;
    
    s32 var_r3 = 0x2E;
    void *var_r5 = lbl_803678F8;
    void *var_r31 = arg0;
    
    fn_800F3BA4(*(s32**)(var_r5), var_r3, var_r5);
    
    if (lbl_803678F4 == 0) {
        *(u8*)((char*)var_r31 + 0x250) += 1;
        return;
    }
    *(u8*)((char*)var_r31 + 0x251) += 1;
}

void fn_800FA5D4(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

u32 fn_800FA600(void *arg0, u32 arg1, u32 arg2, u32 arg3) {
    extern s32 lbl_80369F38;
    
    if (*(u32 *)((char *)arg0 + 0xE8) != 0) {
        fn_80057EDC();
        *(u32 *)((char *)arg0 + 0xE8) = 0;
    }
    if ((arg1 == 0) || (arg2 == 0)) {
        *(u32 *)((char *)arg0 + 0xE8) = 0;
        return 0;
    }
    
    *(u32 *)((char *)arg0 + 0xE8) = fn_80057F04(*(s32 *)((char *)arg0 + 0xE0), arg1, arg2, 4);
    fn_80058970(*(u32 *)((char *)arg0 + 0xE8), &lbl_80369F38);
    if (arg3 != 0) {
        fn_80058910(*(u32 *)((char *)arg0 + 0xE8), 1);
    }
    return *(u32 *)((char *)arg0 + 0xE8);
}

void fn_800FAA50(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FB074(void* arg0, s32 arg1)
{
    void** ptr = (void**)arg0;
    *ptr = (void*)((u32)arg1 & 0xFFFF);
}

void fn_800FB2DC(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FB308(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FB334(s32 arg0) {
    if (arg0 < 0) {
        arg0 = 0;
    }
    
    if (arg0 >= 0x28) {
        arg0 = 0x27;
    }
}

s32 fn_800FB3AC(void *arg0) {
    s32 fn_802342B8(s32, s32, void *);
    extern void *lbl_803678F8;
extern void *lbl_802EF4C8;
    return fn_802342B8(M2C_FIELD(lbl_803678F8, s32 *, 0x14), *M2C_FIELD(arg0, s32 **, 0x18C), lbl_803678F8) == 0;
}

s32 fn_800FB45C(void *arg0) {
    s32 fn_802342B8(s32, s32, void *);
    extern void *lbl_803678F8;
    
    return fn_802342B8(((s32*)lbl_803678F8)[0x14/4], ((s32**)arg0)[0x188/4][0], lbl_803678F8) == 0;
}

s32 fn_800FB548(s32 arg0, s32 arg1) {
    s32 r4;
    s32 r31;
    s32 r30;

    // The original uses a complex access pattern with multiple registers
    r4 = *(u32*)(arg0 + 0x188);
    r31 = *(u32*)r4; 
    r30 = *(u32*)(r31 + 0x14); 

    if (r30 == 0) {
        return 0;
    }

    // The rest of the function
    r30 = *(u32*)r30;
    r30 += 4;
    
    if (r30 != 0) {
        return 1;
    } else {
        return 0;
    }
}

s32 fn_800FB5C8(void *arg0) {
    extern u32 lbl_802EF4C8[12];
    s32 val1 = *(u32*)((u8*)arg0 + 0x190);
    s32 val2 = *(u32*)((u8*)lbl_802EF4C8 + 0x190);
    return fn_80015610(val1, val2) == 1;
}

void fn_800FB918(void *arg0, s32 arg1, s32 *arg2) {
    s32 *temp_r6;
    s32 temp_r7;
    s32 var_r4;
    void *var_r3;

    var_r3 = arg0;
    var_r4 = (s32) (arg1 - (s32)var_r3) / 8;
loop_4:
    if (var_r4 > 0) {
        temp_r7 = (s32) (((u32) var_r4 >> 0x1FU) + var_r4) >> 1;
        temp_r6 = (s32*)var_r3 + (temp_r7 * 8);
        if ((s32) *temp_r6 < (s32) *arg2) {
            var_r3 = temp_r6 + 8;
            var_r4 -= temp_r7 + 1;
        } else {
            var_r4 = temp_r7;
        }
        goto loop_4;
    }
}

void fn_800FB96C(s8 arg0, s8 arg1, s8 arg2, s32 arg3, s8 arg4, s8 arg5, s8 arg6, s8 arg7, u8 arg_sp8) {
    extern u8 lbl_802EF4C8[24];
    extern u8 lbl_8032B3C0[544];
    
    lbl_802EF4C8[8] = arg0;
    lbl_802EF4C8[0xD] = arg1;
    lbl_802EF4C8[0xE] = arg2;
    lbl_802EF4C8[4] = arg3;
    lbl_802EF4C8[0xF] = arg4;
    lbl_802EF4C8[0x10] = arg5;
    lbl_802EF4C8[0xA] = arg6;
    lbl_802EF4C8[0x14] = arg7;
    lbl_802EF4C8[0x15] = arg_sp8;
    lbl_8032B3C0[0x21C] = 1;
}

void fn_800FB9C0(s8 arg0, s32 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5, s8 arg6) {
    extern u8 lbl_802EF4C8[24];
    extern u8 lbl_8032B3C0[544];
    
    lbl_802EF4C8[8] = arg0;
    lbl_802EF4C8[4] = arg1;
    lbl_802EF4C8[0xF] = arg2;
    lbl_802EF4C8[0x10] = arg3;
    lbl_802EF4C8[0xA] = arg4;
    lbl_802EF4C8[0x14] = arg5;
    lbl_802EF4C8[0x15] = arg6;
    lbl_8032B3C0[0x21C] = 1;
}

void fn_800FBF54(void) {
    extern void *lbl_802EF4C8;
    M2C_FIELD(lbl_802EF4C8, s32 *, 0x1A0) = (s32) (M2C_FIELD(lbl_802EF4C8, s32 *, 0x1A0) | 1);
}

void fn_800FC150(void) {
    M2C_UNK fn_800FF918();
    fn_800FF918();
}

void fn_800FC2C4(s32 arg0) {
    extern u16 lbl_802EF4C8;
    u8 fn_800FCF74(s32, s32);
    void fn_8000C188(s32);
    
    u16 temp_r3 = lbl_802EF4C8;
    if (fn_800FCF74(temp_r3, 2) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_800FC490(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x31) = 0;
}

void fn_800FC504(struct unit *arg0) {
    arg0->pad_0x0[0] = 0;
    arg0->pad_0x0[1] = 0;
    arg0->pad_0x0[0x10] = 0;
    arg0->pad_0x0[0x11] = 0;
    arg0->pad_0x0[0x12] = 0;
    arg0->pad_0x0[0x13] = 0;
    arg0->pad_0x0[0x14] = 0x80;
    arg0->pad_0x0[0x15] = 0x80;
    arg0->pad_0x0[0x16] = 0x80;
    arg0->pad_0x0[0x17] = 0xFF;
}

void fn_800FC540(void) {
    M2C_UNK fn_800FC49C();
    fn_800FC49C();
}

void fn_800FC560(void) {
    M2C_UNK fn_800FEC0C();
    fn_800FEC0C();
}

s32 fn_800FC5F8(void) {
    extern s32 lbl_80367904;
    return lbl_80367904;
}

void fn_800FC600(s32 arg0) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    extern M2C_UNK lbl_8028E7F8;
    extern M2C_UNK lbl_8032B3C0;
    fn_8000CAA0(&lbl_8028E7F8, arg0, &lbl_8028E7F8);
    *(u8*)((uintptr_t)&lbl_8032B3C0 + 1) = 8;
}

void fn_800FC63C(s32 arg0) {
    extern u8 lbl_8028E7F8[64];
    extern u8 lbl_8032B3C0[544];
    
    fn_8000CAA0(lbl_8028E7F8, arg0, lbl_8028E7F8);
    lbl_8032B3C0[1] = 1;
}

void fn_800FC678(void) {
    extern u16 lbl_802731D0[29];
    extern s32 lbl_80367900;
    
    lbl_80367900 = fn_8003FCCC(&lbl_802731D0[0x2D]);
    fn_8010F970();
    fn_80129374();
}

u16 fn_800FCF48(s8 arg0, s8 arg1) {
    extern u16 lbl_802CA518[];
    s32 temp_r3;
    s32 temp_r4;
    
    temp_r4 = (arg0 + (arg1 << 6)) * 2;
    temp_r3 = (s32)lbl_802CA518 + 0x10000 + temp_r4;
    return *(u16*)((char*)temp_r3 - 0x5E72);
}

s32 fn_800FE8E8(void *arg0, void *arg1) {
    return (u32) M2C_FIELD(arg0, u32 *, 0x24C) < (u32) M2C_FIELD(arg1, u32 *, 0x24C);
}

void fn_800FF2EC(void) {
    extern u32 lbl_802EF4C8[12];
    
    fn_80027038(lbl_802EF4C8);
    fn_80027F98(lbl_802EF4C8, 1);
    
    if (lbl_802EF4C8[0] != 0) {
        if (((u32 *) lbl_802EF4C8[0])[0x188 / 4] != 0) {
            fn_801007A0((void *) lbl_802EF4C8[0]);
        }
    }
    
    if (lbl_802EF4C8[1] != 0) {
        if (((u32 *) lbl_802EF4C8[1])[0x188 / 4] != 0) {
            fn_801007A0((void *) lbl_802EF4C8[1]);
        }
    }
}

void fn_800FF36C(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    u8 (*temp_r12)();
    u8 var_r3;

    temp_r12 = M2C_FIELD(arg0, u8 (**)(), 0x30);
    if (temp_r12 != NULL) {
        var_r3 = temp_r12();
    } else {
        var_r3 = 1;
    }
    if (var_r3 == 1) {
        fn_8000C188(arg0);
    }
}

void fn_800FF948(s32 arg0)
{
    s32 temp_r3;
    s32 temp_r0;
    
    if (arg0 != 0) {
        if (arg0 != 1) {
            lbl_803678BC = 0;
        } else {
            lbl_803678BC = 2;
        }
    } else {
        lbl_803678BC = 1;
    }
}

void fn_800FFC00(s32 arg0, s32 arg1) {
    M2C_UNK fn_8002C47C(M2C_UNK **, M2C_UNK);
    M2C_UNK fn_8002F728(M2C_UNK *, M2C_UNK *, M2C_UNK *);
    extern M2C_UNK lbl_80284E20;
    extern M2C_UNK lbl_8028EAA8;
    extern M2C_UNK lbl_802EF4E0;
    s32 sp10;
    s32 spC;
    M2C_UNK *sp8;

    sp8 = &lbl_80284E20;
    spC = arg0;
    sp8 = &lbl_8028EAA8;
    sp10 = arg1;
    fn_8002F728(&lbl_802EF4E0, &lbl_802EF4E0, &lbl_8028EAA8);
    fn_8002C47C(&sp8, 0);
}

void fn_80100104(s32 arg2, s32 arg3) {
    extern void fn_80102810(s32, s32, s32);
    fn_80102810(0x25, arg2, arg3);
}

s32 fn_80100130(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_8003FF90(M2C_UNK, M2C_UNK);
    s32 fn_80100284(s32, M2C_UNK, s32, s32, s32);
    s32 temp_r31;

    fn_8003FF90(0, 0);
    temp_r31 = fn_80100284(arg0, 1, arg1, arg2, arg3);
    fn_8003FF90(0, 0);
    return temp_r31;
}

void fn_801001B8(s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_80100284(M2C_UNK, s32, s32, s32, s32);
    fn_80100284(2, arg1, arg2, arg3, arg1);
}

#pragma opt_loop_invariants off
void fn_801007A0(void *arg0) { struct UnitBits {u16 f0:3;u16 f1:3;u16 f2:3;u16 f3:4;u16 f4:3;}; void fn_8010C504(void *); u8 fn_8009339C(void *,void *); u64 *fn_8001CB64(void **); s32 i; void **item; void *cur; M2C_FIELD(arg0,u32*,0x254)&=0xFEFF80EB; fn_8010C504(arg0);
for(i=0;i<4;i++){item=fn_80037BBC(arg0,i);if(!*item)break;if(fn_8009326C(arg0,*item)){if(GetItemKind(*item)==0x81||GetItemKind(*item)==0x82)M2C_FIELD(arg0,u32*,0x254)|=4;}}
for(i=0;i<4;i++){item=fn_80037BBC(arg0,i);if(!*item)break;if(fn_8009326C(arg0,*item)){if(GetItemKind(*item)==0x86)M2C_FIELD(arg0,u32*,0x254)|=0x10;}}
for(i=0;i<4;i++){item=fn_80037BBC(arg0,i);if(!*item)break;if(fn_8009339C(arg0,*item)&&(*fn_8001CB64(item)&2)){M2C_FIELD(arg0,u32*,0x254)|=0x100;break;}}
for(i=0;i<4;i++){item=fn_80037BBC(arg0,i);if(!*item)break;if(fn_8009326C(arg0,*item)){M2C_FIELD(arg0,u32*,0x254)|=0x200;cur=*item;if(fn_80019E04(lbl_80273304.iidSilence)==cur)M2C_FIELD(arg0,u32*,0x254)|=0x400;else{cur=*item;if(fn_80019E04(lbl_80273304.iidSleep)==cur)M2C_FIELD(arg0,u32*,0x254)|=0x800;else{cur=*item;if(fn_80019E04(lbl_80273304.iidBerserk)==cur)M2C_FIELD(arg0,u32*,0x254)|=0x1000;}}}}
for(i=0;i<4;i++){item=fn_80037BBC(arg0,i);if(!*item)break;if(fn_8009339C(arg0,*item)){if(GetItemUnk1D(*item)==1)M2C_FIELD(arg0,u32*,0x254)|=0x4000;if(GetItemDD54(*item,arg0)>1)M2C_FIELD(arg0,u32*,0x254)|=0x2000;}}
if((M2C_FIELD(arg0,struct UnitBits*,0x1A4).f2 != 0)||(M2C_FIELD(arg0,struct UnitBits*,0x1A4).f1 != 0)||(M2C_FIELD(arg0,struct UnitBits*,0x1A4).f4 != 0))M2C_FIELD(arg0,u32*,0x254)|=0x01000000;}
#pragma opt_loop_invariants reset
s32 fn_80100CC8(void) {
    void *fn_80016BDC();
    s32 temp_r3;
    void *temp_r3_2;

    temp_r3_2 = fn_80016BDC();
    if (temp_r3_2 == NULL) {
        return 0;
    }
    temp_r3 = M2C_FIELD(temp_r3_2, s32 *, 0x1A0);
    if (temp_r3 & 4) {
        return 1;
    }
    return (temp_r3 & 0x98) == 0;
}

s32 fn_80100FD0(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    s32 temp_r3;
    s32 temp_r6;

    temp_r6 = arg1 - arg3;
    temp_r6 = (temp_r6 < 0) ? -temp_r6 : temp_r6;
    temp_r3 = arg0 - arg2;
    temp_r3 = (temp_r3 < 0) ? -temp_r3 : temp_r3;
    return (temp_r3 + temp_r6) <= arg4;
}

void fn_80101448(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void fn_800FE2A0(s32, s32);
    void fn_80101530(s32, s32, s32, s32, s32, s32, s32, s32);

    fn_800FE2A0(5, arg7);
    fn_80101530(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void fn_80102334(s32 arg2, s32 arg3) {
    M2C_UNK fn_80102810(M2C_UNK, s32, s32);
    fn_80102810(0x2C, arg2, arg3);
}

s32 fn_80102360(void *arg0, s16 *arg1, s16 *arg2, s32 arg3) {
    s16 temp_r14, temp_r15;
    s32 temp_r21, temp_r23, temp_r24, temp_r25, temp_r26, temp_r4, temp_r5;
    
    if (arg0 == NULL || arg1 == NULL || arg2 == NULL) {
        return 0;
    }

    /* Condition check and calls */
    if ((*(u8 *)0x8032B3C0 & 2) || (*(u32 *)((char *)arg0 + 0x254) & 0x03000000)) {
        fn_80022DAC(0x802CA518, 5, -1);
        fn_80022FD8(0x802CA518, 5);
    } else {
        fn_800FE2A0(5, arg3);
    }

    temp_r23 = *(u8 *)((char *)arg0 + 0x19e);
    temp_r24 = *(u8 *)((char *)arg0 + 0x19f);
    temp_r25 = (temp_r23 + (temp_r24 << 6)) * 2;
    temp_r26 = *(s16 *)((char *)0x802CA518 + 0x610e + temp_r25);

    if (temp_r26 < 0) {
        return 0;
    }

    *(s16 *)((char *)0x802CA518 + temp_r25 + 0x610e) = arg3 + 1;

    /* Some calculation */
    temp_r4 = 0x1; // This is just an initial value. May be more complex.

    temp_r5 = temp_r23 - (temp_r23 + temp_r24);
    temp_r21 = temp_r23;
    
    if (temp_r5 < *(s8 *)((char *)0x802CA518 + 0x8)) {
        temp_r5 = *(s8 *)((char *)0x802CA518 + 0x8);
    }

    // Loop and calculations continue
    return 0; /* Placeholder, complex loop logic to reassemble */
}

s32 fn_80102DFC(s8 arg0, s8 arg1, u8 arg2, u8 arg3) {
    extern u16 lbl_80284E20[];
    extern u16 lbl_8028EA88[];
    extern s32 lbl_802EF4E0;
    
    if (arg3 == 0) {
        return fn_800BE968(arg2, arg0, arg1);
    }
    
    lbl_80284E20[0] = 0;
    lbl_8028EA88[0] = 0;
    fn_8002F728(&lbl_802EF4E0, &lbl_8028EA88);
    
    return fn_8002C618(lbl_80284E20, arg0, arg1);
}

s32 fn_80102EA8(void *arg0) {
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_80330708[];
    u8 var_r0;

    if (!(lbl_8032B3C0[1] & 8)) {
        return 0;
    }
    
    if (arg0 != NULL) {
        var_r0 = *(u8*)((char*)arg0 + 0x198);
    } else {
        var_r0 = lbl_80330708[0x11];
    }
    
    switch ((s32) var_r0) {                         /* irregular */
    case 4:
        return 0;
    default:
    case 3:
        return 1;
    }
}

void fn_80102F18(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8002F6E8(M2C_UNK *, s32, s32, M2C_UNK, u8);
    u8 fn_800BE968(u8);
    extern M2C_UNK lbl_802EF4E0;
    if (fn_800BE968((u8) M2C_FIELD(arg0, s32 *, 4)) != 0) {
        fn_8002F6E8(&lbl_802EF4E0, arg1, arg2, 0, (u8) M2C_FIELD(arg0, s32 *, 4));
    }
}

void fn_80103200(void *arg0, s8 arg1, s8 arg2) {
    M2C_UNK fn_8002C6F4();
    extern M2C_UNK lbl_802CA518;
    s32 temp_r8;
    u8 temp_r7;

    temp_r8 = arg2 << 6;
    if (((s8) M2C_FIELD((&lbl_802CA518 + 0x10000 + arg1 + temp_r8), u8 *, -0x1E72) == 0) && (!(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x254) & 0x20000) || !(M2C_FIELD((&lbl_802CA518 + arg1 + temp_r8), u8 *, 0x300D) & 2)) && ((M2C_FIELD(arg0, s8 *, 0xC) = arg1, M2C_FIELD(arg0, s8 *, 0xD) = arg2, temp_r7 = M2C_FIELD((&lbl_802CA518 + arg1 + temp_r8), u8 *, 0xD), ((temp_r7 == 0) != 0)) || (temp_r7 == (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x198)))) {
        fn_8002C6F4();
    }
}

s32 fn_801032F8(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367918;
    fn_800D758C(lbl_80367918);
    return 0;
}
extern s32 lbl_80320C20;
extern u16 lbl_803678F4;
extern u8 lbl_8032B3C0[];
extern u8 lbl_8032B3C0[544];
extern u16 *lbl_803678C8;
