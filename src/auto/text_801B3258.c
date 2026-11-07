/* Functions from 0x801B3258 to 0x801E4380, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8032FF08;
extern u16 lbl_80331D00[];

struct Unit {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u16 unk26;
    u16 unk28;
    u16 unk2A;
    u16 unk2C;
    u16 unk2E;
};

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    u32 unk28;
    u32 unk2C;
    u32 unk30;
    u32 unk34;
    u32 unk38;
    u32 unk3C;
    u32 unk40;
    u32 unk44;
    u32 unk48;
    u32 unk4C;
    u32 unk50;
    u32 unk54;
    u32 unk58;
    u32 unk5C;
    u32 unk60;
    u32 unk62;
} struct0;


/* Message box: up to 7 text lines, opened/closed through state (0x64/0x6E open, 0xC8/0xD2 close). */
typedef struct MsgBox {
    /* 0x000 */ s16 flags;
    /* 0x002 */ s16 state;
    /* 0x004 */ s16 type;
    /* 0x006 */ u8 unk6[4];
    /* 0x00A */ s16 width;
    /* 0x00C */ s16 height;
    /* 0x00E */ u8 unkE[0x10];
    /* 0x01E */ s16 timer;
    /* 0x020 */ char lines[7][0x41];
    /* 0x1E7 */ s8 numLines;
    /* 0x1E8 */ u8 unk1E8[2];
} MsgBox;

void fn_801B3338(void *arg0) {
    void *temp_r31;
    u32 temp_r3;

    temp_r31 = M2C_FIELD(arg0, void **, 0x30);
    temp_r3 = (u32) M2C_FIELD(temp_r31, u32 *, 0x18);
    if (temp_r3 != 0U) {
        fn_8005C7E8();
    }
    fn_800C4588(temp_r31);
}

void fn_801B3D30(void *arg0) {
    void fn_801B5E2C(void *);
    void *temp_r31;
    
    temp_r31 = *(void **)((char *)arg0 + 0x30);
    fn_801B5E2C(temp_r31);
    *(s32 *)((char *)temp_r31 + 0x18) = 0;
}

void fn_801B4810(void) {
    extern u16 lbl_8027C128[];
    u16 *ptr1 = &lbl_8027C128[0xB1];
    u16 *ptr2 = &lbl_8027C128[0x95];
    fn_800558D8(ptr1);
    fn_800558D8(ptr2);
}

#pragma opt_common_subs off
void fn_801B5DB0(void *arg0) {
    s32 fn_8005C6A0(void *);
    void fn_8006EEFC(void *, void *);
    s32 fn_8007C3BC(s32);
    u8 fn_8007C484(s32);
    extern u8 lbl_8027C128[];
    u8 *temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 **, 0x30);
    if (fn_8005C6A0(lbl_8027C128 + 0xE1) & 0x2000) {
        if (fn_8007C484(fn_8007C3BC(M2C_FIELD(temp_r31, s32 *, 0x110)))) {
            fn_8006EEFC(temp_r31 + 0x18, lbl_8027C128 + 0xE1);
            fn_8000C188(arg0);
        }
    }
}
#pragma opt_common_subs reset

s32 fn_801B6098(s32 arg0) {
    void fn_801B32C8(void *);
    extern u16 lbl_80330EAC[];
    
    s32 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    void *temp_r3;
    void *var_r3;

    temp_r0 = *(s32 *)((char *)&lbl_80330EAC + 0xCAC);
    if ((temp_r0 >> 4) & 1) {
        temp_r0 = 0;
    } else if (temp_r0 & 0x800) {
        temp_r0 = 1;
    } else {
        temp_r0 = 0;
    }

    if (temp_r0 == 0) {
        return 0;
    }

    var_r3 = *(void **)((char *)&lbl_80330EAC + 0x280);
    if (var_r3 != NULL) {
        temp_r3 = *(void **)((char *)var_r3 + 0x190);
        temp_r0_2 = *(u8 *)((char *)temp_r3 + 8);
        if (temp_r0_2 != 0 && temp_r0_2 != 5) {
            goto block_11;
        }
    } else {
block_11:
        var_r3 = *(void **)((char *)&lbl_80330EAC + 0x560);
        if (var_r3 != NULL) {
            temp_r3 = *(void **)((char *)var_r3 + 0x190);
            temp_r0_3 = *(u8 *)((char *)temp_r3 + 8);
            if (temp_r0_3 != 0 && temp_r0_3 != 5) {
                goto block_15;
            }
        } else {
block_15:
            var_r3 = NULL;
        }
    }

    fn_801B32C8(var_r3);
    return 1;
}

s32 fn_801B6164(u32 arg0) {
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80297AC8[];
    extern u8 lbl_80330EAC[];

    if (!(M2C_FIELD(lbl_80330EAC, s32 *, 0xCAC) & 0x400)) {
        return 0;
    }
    if (arg0 == 0) {
        fn_8000CAF0(lbl_80297AC8, 3);
    } else {
        fn_8000CAA0(lbl_80297AC8, arg0);
    }
    return 1;
}

s32 fn_801B6414(u32 arg0) {
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80297AC8[];
    extern u8 lbl_80330EAC[];

    if (!(M2C_FIELD(lbl_80330EAC, s32 *, 0xCAC) & 0x400)) {
        return 0;
    }
    if (arg0 == 0) {
        fn_8000CAF0(lbl_80297AC8, 3);
    } else {
        fn_8000CAA0(lbl_80297AC8, arg0);
    }
    return 1;
}

void fn_801B657C(void *arg0) {
    f32 fn_80059F64(u16, f32, f32, f32, f32);
    extern f32 lbl_8036B1B8;
    extern f32 lbl_8036B1BC;
    extern f32 lbl_8036B1C0;
    extern f32 lbl_8036B1C8;
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0x3C);
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) (temp_r3 + 1);
    M2C_FIELD(arg0, s8 *, 0x39) = (s8) fn_80059F64(temp_r3, lbl_8036B1BC, lbl_8036B1B8, lbl_8036B1C0, (f32) M2C_FIELD(arg0, u16 *, 0x3C));
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3C) == 8) {
        fn_8000C188(arg0);
    }
}

void fn_801B6600(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
}

void fn_801B66F4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
}

void fn_801B6784(void *arg0) {
    s32 fn_8006D948(void *);
    void fn_80059208(void *, void *);
    void fn_801B69FC(void);
    extern u8 lbl_8027C248[];

    M2C_FIELD(arg0, s32 *, 0x40) = fn_8006D948(lbl_8027C248 + 0x114);
    fn_80059208(fn_801B69FC, arg0);
}

s32 fn_801B7094(void) {
    extern u16 lbl_802CA264[50];
    s32 count;
    s32 flags;
    void *p;

    count = 0;
    p = M2C_FIELD(lbl_802CA264, void **, 0x48);
    while (p != NULL) {
        flags = M2C_FIELD(p, s32 *, 0x1A0);
        p = M2C_FIELD(p, void **, 0x184);
        if (flags & 0x8000) {
            count++;
        }
    }
    return count;
}

void fn_801B77E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x228) = arg1;
}

void fn_801B77F0(s32 arg0, s32 arg1) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(arg0 + (arg1 << 6));
}

void fn_801B79A0(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    void *fn_8000CAA0(void *, s32);
    void *fn_800C4638(s32, void *, s32);
    void fn_80234450(void *, s32);
    extern u8 lbl_80297B78[];
    extern u8 lbl_8027C5A8[];
    void *temp_r31;
    u8 *work;

    temp_r31 = fn_8000CAA0(lbl_80297B78, arg2);
    M2C_FIELD(temp_r31, void **, 0x30) = fn_800C4638(0x19C, lbl_8027C5A8 + 9, 0);
    work = M2C_FIELD(temp_r31, u8 **, 0x30);
    fn_80234450(work + 0x10, arg0);
    M2C_FIELD(work, s32 *, 0x90) = arg1;
    M2C_FIELD(work, s8 *, 0x198) = arg3;
}

void fn_801B7A34(void *arg0) {
    void fn_8005C7C8(void *);
    void fn_800C4588(void *);
    extern u8 lbl_8027C5A8[];
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x30);
    fn_8005C7C8(lbl_8027C5A8 + 0xA);
    fn_800C4588(temp_r31);
}

#pragma opt_common_subs off
void fn_801B8334(void *arg0) {
    s32 fn_8005C6A0(void *);
    void fn_8006EEFC(void *, void *);
    extern u8 lbl_8027C5A8[];
    u8 *temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 **, 0x30);
    if (fn_8005C6A0(lbl_8027C5A8 + 0xA) & 0x2000) {
        fn_8006EEFC(temp_r31 + 8, lbl_8027C5A8 + 0xA);
        fn_8000C188(arg0);
    }
}
#pragma opt_common_subs reset
#pragma opt_loop_invariants off
void fn_801B84C0(void) {
    char *fn_8000E0E4(u32);
    u32 fn_800A8A88(u32);
    void fn_800056CC(const char *, ...);
    extern char lbl_8027C5C8[];
    extern struct {
        u32 unk0;
        u32 unk4;
        u8 unk8;
        s8 unk9;
    } *lbl_80367214;
    struct {
        u32 unk0;
        u32 unk4;
        u8 unk8;
        s8 unk9;
    } *p;

    for (p = (void *)lbl_80367214; p->unk0 != 0; p++) {
        fn_800056CC(lbl_8027C5C8 + 8, fn_8000E0E4(fn_800A8A88(p->unk0)), fn_8000E0E4(fn_800A8A88(p->unk4)), p->unk8, p->unk9);
    }
}
#pragma opt_loop_invariants reset
void fn_801B8798(void) {
    u32 fn_80019E8C(u32);
    extern struct {
        u32 unk0;
        u32 unk4;
        u8 unk8;
        s8 unk9;
    } *lbl_80367214;
    u32 *p;

    for (p = (u32 *)lbl_80367214; p[0] != 0; p += 3) {
        p[0] = fn_80019E8C(p[0]);
        p[1] = fn_80019E8C(p[1]);
    }
}

void fn_801B88D4(void *arg0) {
    void fn_800C428C(s32);
    void fn_8000C60C(void *);
    void fn_8006EDA0(void *);
    void fn_800C4588(void *);
    struct {
        u8 pad[8];
        void *unk8;
        s32 unkC;
    } *work = M2C_FIELD(arg0, void **, 0x30);

    fn_800C428C(work->unkC);
    if (M2C_FIELD(arg0, void **, 0x34) != NULL) {
        fn_8000C60C(M2C_FIELD(arg0, void **, 0x34));
    }
    if (work->unk8 != NULL) {
        fn_8006EDA0(&work->unk8);
    }
    fn_800C4588(work);
}

void fn_801B9748(void*a){void*fn_8013FF94(void*,s32,s32);s32 fn_80019DF0(u8,void*);void fn_8017A9F0(void*,s32,void*,void*);extern u8 lbl_802EF4C8[];extern f32 lbl_8036B2DC;void*p;void*q;s32 x;p=fn_8013FF94(a,0x82,0);*(f32*)((char*)p+0x30)=lbl_8036B2DC;p=fn_8013FF94(a,0x108,0);*(f32*)((char*)p+0x30)=lbl_8036B2DC;q=((void**)a)[0x60/4];x=fn_80019DF0(*(u8*)(lbl_802EF4C8+0x14),lbl_802EF4C8);*(u8*)((char*)q+0x3c)=0;fn_8017A9F0(q,x,a,q);}

#pragma cplusplus on
extern "C" void fn_801BE1EC(void *arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void m08(s32) = 0;
    };
    ((Obj *) arg0)->m08(-1);
}
#pragma cplusplus reset
void *fn_801BE6A8(s32 arg0) {
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_801403F0();
    extern M2C_UNK lbl_80297C14;
    extern M2C_UNK lbl_80297E78;
    extern M2C_UNK lbl_802EF4C8;
    extern s8 lbl_80368274;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80297C14, arg0, &lbl_80297C14, &lbl_802EF4C8);
    if (temp_r3 != NULL) {
        fn_801403F0();
        M2C_FIELD(temp_r3, M2C_UNK **, 0x40) = &lbl_80297E78;
        M2C_FIELD(temp_r3, s32 *, 0x48) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x50) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x54) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x58) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x5C) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x60) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x64) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x68) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x6C) = 0;
        lbl_80368274 = 0x80;
    }
    fn_8000C070(temp_r3, 0xB);
    return temp_r3;
}

void *fn_801BE748(s32 arg0) {
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_801403F0();
    extern M2C_UNK lbl_80297C14;
    extern M2C_UNK lbl_80297E78;
    extern s8 lbl_80368274;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80297C14, arg0, &lbl_80297C14);
    if (temp_r3 != NULL) {
        fn_801403F0();
        M2C_FIELD(temp_r3, M2C_UNK **, 0x40) = &lbl_80297E78;
        M2C_FIELD(temp_r3, s32 *, 0x48) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x50) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x54) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x58) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x5C) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x60) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x64) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x68) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x6C) = 0;
        lbl_80368274 = 0x80;
    }
    return temp_r3;
}

void fn_801BE7CC(void) {
    extern M2C_UNK lbl_8027C698;
    fn_8000E0E4(&lbl_8027C698 + 0xDF);
}

void *fn_801BE7F8(void){extern u8 lbl_8027C698[];return lbl_8027C698+0x29b;}

void *fn_801BE91C(void) { extern u8 lbl_8027C698[]; return lbl_8027C698+0x2D4; }

void fn_801C0A28(void *arg0) {
    s32 temp_r31;
    
    temp_r31 = fn_8013FF94(arg0, 0x81, 0);
    fn_8016A5AC(*(s32*)((char*)arg0 + 0x18));
    fn_8013FEF0();
    fn_8014876C(&lbl_8032FF08, 0x46, 0x2EE);
    fn_801D2AAC(temp_r31);
    fn_800BE658(arg0);
}

void fn_801C0A9C(void)
{
    extern u8 lbl_802EF4C8[0x18];
    
    if (lbl_802EF4C8[8] >= 0x81) {
        if (lbl_802EF4C8[8] == 0x81) {
            fn_8000C070(4);
        }
    }
}

void fn_801C0F54(s32 arg0) { void *fn_8013FF94(s32,s32,s32);void fn_801658DC(void*);void *fn_8000E0E4(void*);extern u8 lbl_8027CF10[];void *p,*q;p=fn_8013FF94(arg0,0x80,0);*(s32*)((char*)p+0x48)=1;fn_801658DC(lbl_8027CF10+0x86);q=fn_8000E0E4(lbl_8027CF10+0x99);if(fn_8013FF94(arg0,-0x1000,0))fn_801658DC(q);}

void fn_801C0FDC(s32 arg0) {
    void *fn_800C42D8(s32);
    s32 fn_801400F4(s32);
    void *fn_801C14B4(s32, s32, s32);
    void *var_r4;
    s32 var_r3;

    var_r4 = fn_800C42D8(0xC8);
    if (var_r4 != NULL) {
        var_r3 = 0x1F4;
        var_r4 = fn_801C14B4(0x80, 0x70, var_r3);
    }
    *(s16 *)((char *)var_r4 + 8) = 0x81;
    *(s32 *)((char *)var_r4 + 0x34) |= 0x10;
    fn_801400F4(arg0);
}

s32 fn_801C13F0(void) {
    u8 fn_800BE800(s32);
    u8 fn_800BE890(s32);
    s32 fn_800BE914();
    
    s32 temp_r31 = fn_800BE914();
    s32 var_r30 = 0;
    
loop_5:
    if (var_r30 >= temp_r31) {
        return 0;
    }
    if ((fn_800BE800(var_r30) != 0) && (fn_800BE890(var_r30) == 0)) {
        return 1;
    }
    var_r30 += 1;
    goto loop_5;
}

void fn_801C18FC(s32 arg0) {
    M2C_UNK fn_8000A388(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32);
    extern M2C_UNK fn_801C19E4;
    extern M2C_UNK lbl_80297FF8;
    extern M2C_UNK lbl_80368280;
    extern f32 lbl_8036B328;
    f32 temp_f1;

    M2C_FIELD(&lbl_80368280, s8 *, 0) = -1;
    temp_f1 = (f32) arg0;
    M2C_FIELD(&lbl_80368280, s32 *, 4) = (s32) (temp_f1 / lbl_8036B328);
    fn_8000A388(&lbl_80297FF8, &fn_801C19E4, &lbl_80368280, &lbl_80368280, temp_f1);
}

void fn_801C1970(s8 arg0, s32 arg1) {
    M2C_UNK fn_8000A388(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32);
    extern M2C_UNK fn_801C19E4;
    extern M2C_UNK lbl_80297FF8;
    extern M2C_UNK lbl_80368280;
    extern f32 lbl_8036B328;
    f32 temp_f1;

    M2C_FIELD(&lbl_80368280, s8 *, 0) = arg0;
    temp_f1 = (f32) arg1;
    M2C_FIELD(&lbl_80368280, s32 *, 4) = (s32) (temp_f1 / lbl_8036B328);
    fn_8000A388(&lbl_80297FF8, &fn_801C19E4, &lbl_80368280, &lbl_80368280, temp_f1);
}

void fn_801C19E4(void *arg0, void *arg1) {
    u8 temp_r6;

    temp_r6 = M2C_FIELD(arg1, u8 *, 0);
    if (((s8) M2C_FIELD(arg0, u8 *, 0x30) == (s8) temp_r6) || ((s8) temp_r6 == -1)) {
        M2C_FIELD(arg0, s8 *, 0x31) = 0xA;
        M2C_FIELD(arg0, s16 *, 0x3A) = (s16) M2C_FIELD(arg1, s32 *, 4);
    }
}

void fn_801C2250(void *arg0) {
    if (arg0 != NULL) {
        *(u8 *)((u32)arg0 + 0x31) = 0;
        *(u16 *)((u32)arg0 + 0x34) = 0;
        fn_8000C188();
    }
}

void fn_801C29E8(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    s32 fn_800C4638(s32, void *, s32);
    extern u16 lbl_80298140[];
    extern u8 lbl_8027D030[];

    void *temp_r31;
    temp_r31 = fn_8000CAA0(lbl_80298140, arg0, lbl_80298140);
    *(s32 *)((u8 *)temp_r31 + 0x30) = fn_800C4638(0x160, (void *)(lbl_8027D030 + 0x3F1), 0);
}

void fn_801C2A3C(void *arg0) {
 u32 fn_801090C0(u32); void fn_8000C60C(void); void fn_8006EDA0(void *); void fn_80161F7C(void); void fn_8003F670(u32); void fn_800C4588(void *);
 u8 *obj=(u8 *)*(u32 *)((u8 *)arg0+0x30); u32 p;
 p=*(u32 *)(obj+0x30);
 if(p && fn_801090C0(p)){fn_801090C0(p);fn_8000C60C();}
 fn_801090C0(*(u32 *)(obj+0x2c));fn_8000C60C();
 p=*(u32 *)(obj+0x38);
 if(p){ void (*method)(void *,s32)=(void (*)(void *,s32))(*(u32 *)(*(u32 *)(p+0x2c)+0x20)); method((void *)p,1); }
 fn_8006EDA0(obj);fn_80161F7C();fn_8003F670(*(u32 *)(obj+4));fn_800C4588(obj);
}

void fn_801C32D4(s32 arg0) {
    s32 fn_8005C6A0(void *, M2C_UNK *);
    s32 fn_80161FB8();
    extern M2C_UNK lbl_8027D030;
    if ((fn_8005C6A0(&lbl_8027D030 + 0x402, &lbl_8027D030) & 0x2000) && (fn_80161FB8() != 0)) {
        fn_80162054();
        fn_8000C188(arg0);
    }
}

void *fn_801C43C8(void *arg0, s16 arg1) {
    extern u16 lbl_802981AC;
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 0x2C) = &lbl_802981AC;
        fn_800578F0(0, &lbl_802981AC);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_801C4428(void) {
    return 3;
}

s32 fn_801C4430(void) {
    return 4;
}

s32 fn_801C4438(void) {
    return 5;
}

extern u8 lbl_8029824C[];
void fn_801C4440(void){extern u8 lbl_8029824C[];void fn_8000BF00(void*);fn_8000BF00(lbl_8029824C);}

void fn_801C4468(s32 arg0) {
    M2C_FIELD(fn_8000CAF0(&lbl_8029824C, 4), s32 *, 0x3C) = arg0;
}

void fn_801C44A4(void *arg0) {
 void fn_800616A0(void *, void *); void fn_800C426C(void *); void fn_800C428C(void *);
 u32 i=0, offset=0; u8 *obj=(u8 *)arg0; u8 *work; u8 *data;
 do { work=*(u8 **)(obj+0x44); data=*(u8 **)work; fn_800616A0(data+offset+8,work); i++; offset+=0xa8; } while(i<0x10);
 fn_800616A0(*(void **)(obj+0x40),0); work=*(u8 **)(obj+0x44);
 if(work) { u32 a=*(u32 *)(work+0); if(a){fn_800C426C((void *)(a-0x10));*(u32 *)work=0;} a=*(u32 *)(work+4);if(a){fn_800C426C((void *)a);*(u32 *)(work+4)=0;}fn_800C428C(work);}
 *(u32 *)(obj+0x44)=0; return;
}

void fn_801C4564(void) { M2C_UNK fn_801C45A4(); fn_801C45A4(); }

void fn_801C4584(void){ fn_801C5B80(); /*try*/ }

void fn_801C6008(s32 arg0) {
    extern u16 lbl_80298224[20];
    void *temp_r3;
    s32 temp_r4;

    temp_r4 = (s32)&lbl_80298224;
    temp_r3 = (void *)fn_8000CAF0(&temp_r4, 4);
    *(s32 *)((char *)temp_r3 + 0x30) = arg0;
}

void fn_801C6044(void *arg0) {
 void fn_800C426C(void *); void fn_800C428C(void *);
 u8 *obj=(u8 *)arg0; u8 *work=*(u8 **)(obj+0x44);
 if(work){u32 a=*(u32 *)work;if(a){fn_800C426C((void *)(a-0x10));*(u32 *)work=0;}a=*(u32 *)(work+4);if(a){fn_800C426C((void *)a);*(u32 *)(work+4)=0;}fn_800C428C(work);}
 *(u32 *)(obj+0x44)=0; return;
}

void fn_801C60C8(void) { int pad; void fn_801C6234(void); fn_801C6234(); }

void fn_801C68D0(u32 arg0) {
 extern u8 lbl_802981D0[]; void *fn_8000C0C0(void *); void fn_8005FA14(s32);
 void *manager=fn_8000C0C0(lbl_802981D0); u8 *table=manager?*(u8 **)((u8 *)manager+0x30):0;
 if(table){u8 *ptr=table; s32 i=0; do {if(*(u32 *)(ptr+4)==arg0){s32 off=i*0x14+4;if(*(u32 *)(table+off)){fn_8005FA14(0);*(u32 *)(table+off)=0;}break;}ptr+=0x14;i++;}while(i!=32);}
}

void fn_801C6DB8(u32 arg0) {
 extern u8 lbl_802981D0[]; void *fn_8000C0C0(void *,void *); void fn_8005F788(u32,s32,s32);
 void *p=fn_8000C0C0(lbl_802981D0,lbl_802981D0); u8 *list; s32 i;
 if(p) list=*(u8 **)((u8 *)p+0x30); else list=0;
 if(list && arg0) for(i=0;i<64;i++,list+=4) if(*(u32 *)(list+0x290)==arg0){*(u32 *)(list+0x290)=0;fn_8005F788(arg0,0,1);}
}

void fn_801C6F7C(void){void fn_801C7210(void);fn_801C7210();}

void fn_801C6F9C(void) {
    extern u8 lbl_802981D0[];
    void *fn_8000C0C0(void *);
    s32 fn_80067440(s32);
    void fn_800673E4(s32, s32);
    u8 *fn_800675E0(void);
    void fn_8005F788(u32, s32, s32);
    void *p = fn_8000C0C0(lbl_802981D0);
    u8 *work;
    if (p == NULL) {
        work = 0;
    } else {
        work = *(u8 **)((u8 *)p + 0x30);
    }
    if (work) {
        u8 *data = work + 0x284;
        u8 *out;
        s32 i;
        u32 *ptr;

        fn_800673E4(fn_80067440(1), fn_80067440(0));
        fn_800673E4(fn_80067440(3), fn_80067440(2));
        for (i = 0, ptr = (u32 *)data; i < 64; i++, ptr++) {
            if (ptr[3]) {
                fn_8005F788(ptr[3], 0, 1);
            }
        }
        out = fn_800675E0();
        out[1] = data[8];
        out[2] = data[9];
        out[3] = data[10];
    }
}

extern u32 lbl_8036C510;
void fn_801C7598(void* arg0) {
    void* temp_r3;
    
    temp_r3 = (void*)fn_800675E0();
    if (temp_r3 != NULL && *(u8*)temp_r3 != 0) {
        u8 r6 = ((u8*)temp_r3)[1];
        u8 r5 = ((u8*)temp_r3)[2];
        u8 r0 = ((u8*)temp_r3)[3];
        
        u32 temp_r4 = lbl_8036C510;
        u32 arg_ptr;
        
        *(u8*)((char*)&temp_r4 + 0xC) = r6;
        *(u8*)((char*)&temp_r4 + 0xD) = r5;
        *(u8*)((char*)&temp_r4 + 0xE) = r0;
        
        arg_ptr = (u32)temp_r4;
        fn_802217AC(&arg_ptr, 0xFFFFFF, r5, r6);
    }
}

void fn_801C7604(void) {
    M2C_UNK fn_80059A4C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80067984(M2C_UNK);
    M2C_UNK fn_80067EDC(M2C_UNK);
    fn_80067EDC(0);
    fn_80059A4C(0, 0, 0x260, 0x1C0);
    fn_80067984(0);
}

void fn_801C7644(s32 arg0) {
    extern f32 lbl_8036B3E8;
    extern f32 lbl_8036B424;
    u32 fn_80055D94(s32);
    void fn_80067EDC(s32);
    void fn_800599D0(s32,s32,s32,s32,s32);
    void fn_8005956C(s32,s32,s32,s32,s32,s32*,s32,f32);
    void fn_80059C2C(s32,s32,s32,s32,s32);
    void fn_80067984(s32);
    s32 tmp = *(s32 *)&lbl_8036B3E8;
    fn_80067EDC(0);
    if (fn_80055D94(0x80) == 0) {
       fn_800599D0(0,0,0x260,0x1c0,arg0);
       fn_8005956C(0,0,0x260,0x1c0,1,&tmp,arg0,lbl_8036B424);
    }
    fn_80059C2C(0,0,0x260,0x1c0,0);
    fn_80067984(0);
}

void fn_801C76E8(void) { extern u8 lbl_802981D0[]; void *fn_8000C0C0(void *); void fn_80067708(s32,s32,void (*)(void),s32); void fn_801C7598(void),fn_801C7604(void),fn_801C7644(void); void *x=fn_8000C0C0(lbl_802981D0); s32 *p=x?*(s32 **)((u8*)x+0x30):0; if(p){fn_80067708(3,0,fn_801C7598,0);fn_80067708(1,4,fn_801C7644,*p);fn_80067708(2,0,fn_801C7604,0);} }

extern u8 lbl_802981D0[];
void fn_801C777C(void){extern u8 lbl_802981D0[];void fn_8000BF00(void*);fn_8000BF00(lbl_802981D0);}

void fn_801C77A4(void) {
    fn_8000CAF0((void*)&lbl_802981D0, 4);
}

void fn_801C7BF8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801C7C08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801C7F60(void){void fn_801C7F80(void);fn_801C7F80();}

void fn_801C7FC0(u32 arg0) {
    M2C_UNK fn_801C7FE8();
    if (arg0 != 0U) {
        fn_801C7FE8();
    }
    return;
}

void fn_801C8490(void) {
    extern void *lbl_802983A4;
    fn_8005C8B4(*(s32*)((char*)&lbl_802983A4 + 4));
}

void fn_801C84BC(s32 arg0) {
    u8 fn_8005BA10(s32);
    extern s32 lbl_802983A4[];
    if (fn_8005BA10(lbl_802983A4[1])) {
        fn_8000C188(arg0);
    }
}

s32 fn_801C9704(void) {
    extern s32 lbl_803682AC;
    return lbl_803682AC;
}

s32 fn_801C970C(void) {
    extern s32 lbl_803682A8;
    return lbl_803682A8;
}

void fn_801C9714(void) {
    extern s32 lbl_803682A4;
    lbl_803682A4 &= 0xFFFFFFFE;
}

void fn_801C9724(void) {
    extern s32 lbl_803682A4;
    lbl_803682A4 |= 1;
}

s32 fn_801C98EC(void) {
    M2C_UNK fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    M2C_UNK fn_801CAF94(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern void *lbl_803682B8;
    void *temp_r31;

    temp_r31 = lbl_803682B8;
    fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430)));
    fn_801CAF94(0, 0, 0, 1);
    return 0;
}

s32 fn_801C9A88(void) {
    return 0;
}

s32 fn_801C9A90(void) {
    s32 fn_800DC3B0(s32);
    M2C_UNK fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    M2C_UNK fn_801C9EE0(void *, s32);
    M2C_UNK fn_801CACE4(s32);
    extern void *lbl_803682B8;
    s32 temp_r30;
    void *temp_r31;

    temp_r31 = lbl_803682B8;
    temp_r30 = fn_800DC3B0(M2C_FIELD(lbl_803682B8, s32 *, 0x438));
    fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430)));
    fn_801CACE4(temp_r30);
    fn_801C9EE0(lbl_803682B8, fn_8011C9E4(M2C_FIELD(lbl_803682B8, s32 *, 0x430)));
    return 0;
}

s32 fn_801C9C5C(void) {
    s32 fn_800DC3B0(s32, void *);
    s32 fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    M2C_UNK fn_801CADBC(s32, s32);
    extern void *lbl_803682B8;
    s32 temp_r31_2;
    void *temp_r31;

    temp_r31 = lbl_803682B8;
    temp_r31_2 = fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430)));
    fn_801CADBC(temp_r31_2, fn_800DC3B0(M2C_FIELD(lbl_803682B8, s32 *, 0x438), lbl_803682B8));
    return 0;
}

s32 fn_801C9CBC(void) {
 extern u8 lbl_803682B8[];
 void fn_800C9758(void *,void *,s32,s32),fn_800C9A60(void *,s32),fn_801C9D94(void *,void *),fn_801CAF58(s32,void *);
 s32 fn_8011C984(s32,s32),fn_8011C9E4(s32);
 s32 a[2]={0,0}, b[2]={0,0}, *obj=(s32 *)lbl_803682B8, t;
 t=fn_8011C984(obj[0x430/4],fn_8011C9E4(obj[0x430/4]));
 fn_801C9D94(a,lbl_803682B8); fn_800C9758(b,a,0,-1); fn_800C9A60(a,-1); fn_801CAF58(t,b); fn_800C9A60(b,-1); return 0;
}

void fn_801C9D58(void) {
    s32 fn_8011C9E4(s32);
    void fn_801C9EE0(void *, s32);
    extern void *lbl_803682B8;

    s32 temp_r3 = fn_8011C9E4(*(s32 *)((char *)lbl_803682B8 + 0x430));
    fn_801C9EE0(lbl_803682B8, temp_r3);
}

void fn_801CA1DC(void *arg0, s32 arg1) {
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_8011CAAC(s32, M2C_UNK *, s32);
    M2C_UNK fn_801CB280(M2C_UNK *);
    M2C_UNK sp8;

    fn_801CB280(&sp8);
    fn_8011CAAC(M2C_FIELD(arg0, s32 *, 0x430), &sp8, arg1);
    fn_800C9A60(&sp8, -1);
}

void *fn_801CA77C(void *p,s16 n){extern u8 lbl_80298428[];void fn_800C9A60(void*,s32),fn_801CBFD0(void*,s32),fn_800DF724(void*,s32),fn_800C428C(void*); if(p){*(u8**)((u8*)p+0x40)=lbl_80298428;fn_800C9A60((u8*)p+0x60,-1);fn_800C9A60((u8*)p+0x54,-1);if((u8*)p+0x48 && (u8*)p+0x48)fn_801CBFD0((u8*)p+0x48,0);fn_800DF724(p,0);if(n>0)fn_800C428C(p);}return p;}

void fn_801CACE4(void *arg0, s32 arg1) {
    if (arg1 < *(s32*)((char*)arg0 + 0x70)) {
        s32 temp_r5 = *(s32*)((char*)arg0 + 0x50);
        fn_801CB7F0((char*)arg0 + 0x48, temp_r5 + (arg1 << 5), temp_r5);
        *(s32*)((char*)arg0 + 0x70) = *(s32*)((char*)arg0 + 0x70) - 1;
    }
}

void fn_801CAD38(void *p,s32 n,s32 v){void fn_801CB934(void*,void*,s32,s32);s32 x=n+1; if(x<*(s32*)((u8*)p+0x70))fn_801CB934((u8*)p+0x48,(u8*)(*(u32*)((u8*)p+0x50)+(x<<5)),1,v);else fn_801CB934((u8*)p+0x48,(u8*)(*(u32*)((u8*)p+0x50)+(*(s32*)((u8*)p+0x4c)<<5)),1,v);(*(s32*)((u8*)p+0x70))++;}

s32 fn_801CAF2C(void *arg0, s32 arg1) {
    if (arg1 < (s32) M2C_FIELD(arg0, s32 *, 0x70)) {
        return M2C_FIELD(arg0, s32 *, 0x50) + (arg1 << 5);
    }
    return 0;
}

s32 fn_801CAF50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

void fn_801CAF58(void *arg0) {
    s32 fn_800E7F60(s32);
    M2C_FIELD(arg0, s32 *, 0x6C) = fn_800E7F60(M2C_FIELD(arg0, s32 *, 0));
}

s32 fn_801CAF8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

void fn_801CB25C(s32 arg0) {
    fn_800C9B6C(arg0 + 0x60);
}

void fn_801CB280(s32 arg1) {
    arg1 += 0x54;
    fn_800C9B6C(arg1);
}

void fn_801CC030(void *arg0) {
    u32 temp_r4;
    u32 temp_r5;
    u32 var_ctr;

    temp_r4 = M2C_FIELD(arg0, u32 *, 8);
    temp_r5 = temp_r4 + (M2C_FIELD(arg0, s32 *, 4) << 5);
    var_ctr = (u32) ((temp_r5 + 0x1F) - temp_r4) >> 5U;
    if (temp_r5 > temp_r4) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801CCEA8(void* arg0, int arg1) {
    short val1 = *(short*)((char*)arg0 + 0x48);
    short val2 = *(short*)((char*)arg0 + 0x4a);
    void* vtable_ptr = *(void**)((char*)arg0 + 0x3c);
    fn_801CD480((int)vtable_ptr, val1, val2);
}

void *fn_801CCF78(void) {
    extern u16 lbl_8027DD30[];
    return &lbl_8027DD30[0x11];
}

void *fn_801CD318(void *arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    void fn_801403F0(void);
    extern void lbl_80297C14;
    extern void lbl_80297E78;
    extern void lbl_802EF4C8;
    extern s8 lbl_80368274;

    void *temp_r3;
    
    temp_r3 = fn_8000CAA0(&lbl_80297C14, (s32)arg0, &lbl_80297C14);
    if (temp_r3 != NULL) {
        *(void **)((char *)temp_r3 + 0x40) = &lbl_80297E78;
        *(s32 *)((char *)temp_r3 + 0x48) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
        *(s32 *)((char *)temp_r3 + 0x50) = 0;
        *(s32 *)((char *)temp_r3 + 0x54) = 0;
        *(s32 *)((char *)temp_r3 + 0x58) = 0;
        *(s32 *)((char *)temp_r3 + 0x5C) = 0;
        *(s32 *)((char *)temp_r3 + 0x60) = 0;
        *(s32 *)((char *)temp_r3 + 0x64) = 0;
        *(s32 *)((char *)temp_r3 + 0x68) = 0;
        *(s32 *)((char *)temp_r3 + 0x6C) = 0;
        lbl_80368274 = 0x80;
    }
    fn_8000C070(temp_r3, 0xB);
    return temp_r3;
}

s32 fn_801CD3E4(void) {
    return 0x24;
}

s32 fn_801CD3EC(void) {
    return 0x24;
}

s16 fn_801CD3F4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x46);
}

s16 fn_801CD3FC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x42);
}

s16 fn_801CD404(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x44);
}

s16 fn_801CD40C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x40);
}

void fn_801CD508(s32 arg0) {
    extern u8 *lbl_802984C0;
    u8 **var_r0;
    u8 **var_r5;

    var_r0 = NULL;
    if (arg0 != 0) {

    } else {
        var_r0 = &lbl_802984C0;
    }
    var_r5 = var_r0;
loop_5:
    if ((s32) **var_r5 != 0xA) {
        var_r5 += 4;
        goto loop_5;
    }
}

void *fn_801CDACC(void *a,void *b){u8 *x=b;u8 c=*x,d=x[1];s32 n=*(s16*)((u8*)a+0x70);u8 *p=(u8*)a+0x3c+n*4;p[0]=0;if(c>=0x81&&c<=0x9f || c>=0xe0&&c<=0xfc){if(d>=0x40&&d<=0x7e || d>=0x80&&d<=0xfc){p[0]=c;p[1]=d;}else p[0]=c;}else p[0]=c;return (u8*)a+0x3c+*(s16*)((u8*)a+0x70)*4;}

void *fn_801CDB74(void *arg0) {
    s32 var_r3;
    void *var_r4;
    s16 temp_r5;

    var_r3 = 0;
    var_r4 = (char *)arg0 + 0x3C;
loop_1:
    if (*(u32 *)var_r4 != 0) {
        var_r3 += 1;
        var_r4 = (char *)var_r4 + 4;
        goto loop_1;
    }
    temp_r5 = *(s16 *)((char *)arg0 + 0x70);
    if (var_r3 == temp_r5) {
        return (char *)arg0 + ((temp_r5 * 4) + 0x3C);
    }
    if (temp_r5 < var_r3) {
        s32 temp_r0 = var_r3 - temp_r5;
        s32 var_ctr = temp_r0 >> 3;
        if (var_ctr != 0) {
            do {
                *(u32 *)((char *)var_r4 + 0x0) = *(u32 *)((char *)var_r4 + 0x4);
                *(u32 *)((char *)var_r4 + 0x4) = *(u32 *)((char *)var_r4 + 0x8);
                *(u32 *)((char *)var_r4 + 0x8) = *(u32 *)((char *)var_r4 + 0xC);
                *(u32 *)((char *)var_r4 + 0xC) = *(u32 *)((char *)var_r4 + 0x10);
                *(u32 *)((char *)var_r4 + 0x10) = *(u32 *)((char *)var_r4 + 0x14);
                *(u32 *)((char *)var_r4 + 0x14) = *(u32 *)((char *)var_r4 + 0x18);
                *(u32 *)((char *)var_r4 + 0x18) = *(u32 *)((char *)var_r4 + 0x1C);
                *(u32 *)((char *)var_r4 + 0x1C) = *(u32 *)((char *)var_r4 + 0x20);
                var_r4 = (char *)var_r4 + 0x20;
                var_ctr--;
            } while (var_ctr != 0);
        }
        temp_r0 &= 7;
        if (temp_r0 != 0) {
            s32 var_ctr_2 = temp_r0;
            do {
                *(u32 *)((char *)var_r4 + 0x0) = *(u32 *)((char *)var_r4 + 0x4);
                var_r4 = (char *)var_r4 + 0x4;
                var_ctr_2--;
            } while (var_ctr_2 != 0);
        }
    }
    return (char *)arg0 + ((temp_r5 * 4) + 0x3C);
}

s16 fn_801CDC54(void *p,u8 flag){extern s16 lbl_80366EAA;extern u8 lbl_8027DE18[];s16 sp=0;u32 *q=(u32*)((u8*)p+0x3c);s16 *cap=&sp; s16 old=*(s16*)((u8*)p+0x70),v;void fn_801475FC(void*,s32);for(;;){if(*q==0)break;sp++;q+=4;}if(lbl_80366EAA<sp)cap=&lbl_80366EAA;v=old+1;*(s16*)((u8*)p+0x70)=v;if((u32)v>(u32)*cap)*(s16*)((u8*)p+0x70)=*cap & ~((-(s32)flag|flag)>>31);if(old!=*(s16*)((u8*)p+0x70))fn_801475FC(lbl_8027DE18+8,100);return *(s16*)((u8*)p+0x70);}

s16 fn_801CDD10(void *p,u8 flag){extern s16 lbl_80366EA8;extern u8 lbl_8027DE18[];s16 sp=0;u32*q=(u32*)((u8*)p+0x3c);s16*cap=&sp; s16 old=*(s16*)((u8*)p+0x70),v;void fn_801475FC(void*,s32);for(;;){if(*q==0)break;sp++;q+=4;}if(lbl_80366EA8<sp)cap=&lbl_80366EA8;v=old-1;*(s16*)((u8*)p+0x70)=v;if(v<0)*(s16*)((u8*)p+0x70)=*cap & ((-(s32)flag|flag)>>31);if(old!=*(s16*)((u8*)p+0x70))fn_801475FC(lbl_8027DE18+8,100);return *(s16*)((u8*)p+0x70);}

void fn_801CDDC8(s32 arg0, s8 *arg1) {
    u32 *var_r31;

    var_r31 = (u32 *) (arg0 + 0x3C);
    *arg1 = 0;
    if ((u32) *var_r31 != 0U) {
        goto loop_2;
    }
    return;
loop_2:
    fn_802343E0(arg1, var_r31);
    var_r31 += 4;
    if ((u32) *var_r31 != 0U) {
        goto loop_2;
    }
}

void *fn_801CE070(s32 a,char*b,s32 c){void *fn_8000CAA0(void*,s32);void fn_801403F0(void);void fn_800C96F8(void*,char*,s32);extern u8 lbl_802986A8[];void*p=fn_8000CAA0(lbl_802986A8,c);if(p){fn_801403F0();*(s32*)((char*)p+0x40)=0;*(s32*)((char*)p+0x44)=0;*(s32*)((char*)p+0x4c)=0;*(s32*)((char*)p+0x50)=0;*(s32*)((char*)p+0x54)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x5c)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x48)=0;}*(s32*)((char*)p+0x4c)=0;*(s32*)((char*)p+0x50)=a;fn_800C96F8((char*)p+0x54,b,strlen(b));return p;}

void *fn_801CE11C(s32 arg0,char *arg1,s32 arg2,s32 arg3) {
void *fn_8000CAA0(void*,s32); void fn_801403F0(void); void fn_800C96F8(void*,char*,s32); extern u8 lbl_802986A8[];
void *p=fn_8000CAA0(lbl_802986A8,arg3);
if(p){fn_801403F0();*(s32*)((char*)p+0x40)=0;*(s32*)((char*)p+0x44)=0;*(s32*)((char*)p+0x4c)=0;*(s32*)((char*)p+0x50)=0;*(s32*)((char*)p+0x54)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x5c)=0;*(s32*)((char*)p+0x58)=0;*(s32*)((char*)p+0x48)=0;}
*(s32*)((char*)p+0x4c)=arg2;*(s32*)((char*)p+0x50)=arg0;fn_800C96F8((char*)p+0x54,arg1,strlen(arg1));return p;
}

void fn_801CE744(s32 arg0) {
    void *fn_8013FF94(s32, s32, s32);
    void *fn_8013F6B8(void *, s32 *);
    void fn_8013F748(void *, s32 *, s32 *);
    void fn_8013FF00(s32, void *);
    s32 tmp;
    void *base;
    void *obj;
    base = fn_8013FF94(arg0, 0, 0);
    obj = fn_8013FF94(arg0, 2, 0);
    tmp = *(s32 *)((u8 *)base + 0x3E);
    fn_8013F748(base, &tmp, &tmp);
    base = obj;
    obj = fn_8013F6B8(base, &tmp);
    *(s16 *)((u8 *)base + 0x4C) = *(s16 *)obj;
    *(s16 *)((u8 *)base + 0x4E) = *(s16 *)((u8 *)obj + 2);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 2, 0));
}

void fn_801CEC28(s32 arg0) {
    M2C_UNK fn_8013FF00(s32, s32);
    s32 fn_8013FF94(M2C_UNK, M2C_UNK);
    fn_8013FF00(arg0, fn_8013FF94(0, 0));
}

void fn_801CF5A4(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *, s32);
    M2C_UNK spC;
    s16 temp_r8;
    s16 spA;
    s32 temp_r6;

    temp_r6 = *(s16 *)((u8 *)arg1 + 0x3C) * 0x22;
    temp_r8 = 5;
    spA = temp_r6 + 0xD;
    *arg0 = fn_8013F748(arg1, &spC, &temp_r8, temp_r6)[0];
}

s32 fn_801CF5FC(void *arg0) {
    extern u16 lbl_80298720[];
    s16 val = *(s16*)((u8*)arg0 + 0x3C);
    return lbl_80298720[val * 2];
}

s32 fn_801CF614(void *arg0) {
    s16 temp = *(s16 *)((u8 *)arg0 + 0x3C);
    if (temp == 0) {
        return 0;
    }
    return -1;
}

void fn_801CF92C(void *arg0) {
    void *temp_r4;
    u8 temp_r4_2;

    temp_r4 = (u16 *)&lbl_80331D00 + (M2C_FIELD(arg0, u8 *, 0x30) * 0x2B8);
    if (!(M2C_FIELD(temp_r4, s32 *, 8) & 1)) {
        fn_8000C188();
        return;
    }
    fn_801D15D4(temp_r4);
    temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x30);
    fn_801D107C((u16 *)&lbl_80331D00 + (temp_r4_2 * 0x2B8), temp_r4_2);
}

void fn_801CFC4C(void *arg0, s16 arg1) {
    if (arg1 <= 0) {
        arg1 = 1;
    }
    *(u8 *)((u8 *)arg0 + 0x158) = 0xFF;
    *(u8 *)((u8 *)arg0 + 0x159) = 0;
    *(u16 *)((u8 *)arg0 + 0x154) = 0;
    *(u16 *)((u8 *)arg0 + 0x156) = arg1;
    *(u32 *)((u8 *)arg0 + 8) |= 2;
}

void fn_801CFC80(void *arg0, s16 arg1) {
    s16 var_r4;

    var_r4 = arg1;
    if (var_r4 <= 0) {
        var_r4 = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x158) = 0;
    M2C_FIELD(arg0, s8 *, 0x159) = 0xFF;
    M2C_FIELD(arg0, s16 *, 0x154) = 0;
    M2C_FIELD(arg0, s16 *, 0x156) = var_r4;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
}

void fn_801CFCB4(void*a){u8*p=(u8*)a; s8 x; x=(s8)p[0xec];if(x)p[0xec]=3;x=(s8)p[0xf4];if(x)p[0xf4]=3;p+=16;x=(s8)p[0xec];if(x)p[0xec]=3;x=(s8)p[0xf4];if(x)p[0xf4]=3;x=(s8)p[0xfc];if(x)p[0xfc]=3;x=(s8)p[0x104];if(x)p[0x104]=3;x=(s8)p[0x10c];if(x)p[0x10c]=3;x=(s8)p[0x114];if(x)p[0x114]=3;}

void fn_801CFD60(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s8 arg4) {
    s32 temp_r8;

    temp_r8 = arg1 * 8;
    temp_r8 += 0xEC;
    temp_r8 += arg0;
    *(u8 *)(temp_r8 + 0x0) = 1;
    *(u16 *)(temp_r8 + 0x2) = arg2;
    *(u16 *)(temp_r8 + 0x4) = arg3;
    *(u8 *)(temp_r8 + 0x6) = arg4;
    *(u8 *)(temp_r8 + 0x7) = 0;
}

void fn_801CFD8C(s32 arg0, s32 arg1, u8 arg2) {
    u32 temp_r4;

    temp_r4 = (arg1 * 0xE) + 0x60;
    if (arg2 != 0) {
        *(u8*)(arg0 + temp_r4) |= 2;
        return;
    }
    *(u8*)(arg0 + temp_r4) &= 0xFFFFFFFD;
}

void fn_801CFDBC(s32 arg0, s32 arg1) {
    s32 temp_r4;
    
    temp_r4 = (arg1 * 0xE) + 0x60;
    *(u8*)(arg0 + temp_r4) |= 1;
}

void fn_801CFDD4(void*a){u8*p=(u8*)a;s8 x;x=(s8)p[0x61];if(x)p[0x61]=0x63;x=(s8)p[0x6f];if(x)p[0x6f]=0x63;p+=0x1c;x=(s8)p[0x61];if(x)p[0x61]=0x63;x=(s8)p[0x6f];if(x)p[0x6f]=0x63;x=(s8)p[0x7d];if(x)p[0x7d]=0x63;x=(s8)p[0x8b];if(x)p[0x8b]=0x63;x=(s8)p[0x99];if(x)p[0x99]=0x63;x=(s8)p[0xa7];if(x)p[0xa7]=0x63;x=(s8)p[0xb5];if(x)p[0xb5]=0x63;x=(s8)p[0xc3];if(x)p[0xc3]=0x63;}

void fn_801CFE80(s32 arg0, s32 arg1) {
    u8 *temp_r4;

    temp_r4 = (u8 *)(arg0 + ((arg1 * 0xE) + 0x60));
    if ((s8)(*temp_r4) != 0) {
        *(temp_r4 + 1) = 0x63;
    }
}

void fn_801CFEA4(s32 arg0, s32 arg1) {
    u8 *ptr;
    s32 temp_r3;
    s32 temp_r4;

    fn_801CFEF4();
    temp_r3 = arg1 * 0xE;
    ptr = (u8 *)arg0 + temp_r3;
    temp_r4 = 3;
    ptr[0x61] = temp_r4;
    ptr[0x63] = 0x96;
}

void fn_801D0200(s8 *arg0) {
    s8 temp;
    
    temp = arg0[0x28];
    if (temp != 0) {
        arg0[0x28] = 5;
    }
    temp = arg0[0x30];
    if (temp != 0) {
        arg0[0x30] = 5;
    }
    arg0 += 0x10;
    temp = arg0[0x28];
    if (temp != 0) {
        arg0[0x28] = 5;
    }
    temp = arg0[0x30];
    if (temp != 0) {
        arg0[0x30] = 5;
    }
    temp = arg0[0x38];
    if (temp != 0) {
        arg0[0x38] = 5;
    }
    temp = arg0[0x40];
    if (temp != 0) {
        arg0[0x40] = 5;
    }
    temp = arg0[0x48];
    if (temp != 0) {
        arg0[0x48] = 5;
    }
}

void fn_801D027C(s32 arg0, s32 arg1) {
    s32 temp_r4;
    
    temp_r4 = (arg1 << 3);
    if ((s8)*(u8*)(arg0 + temp_r4 + 0x28) != 0) {
        *(u8*)(arg0 + temp_r4 + 0x28) = 5;
    }
}

void fn_801D03E4(void *arg0, s32 arg1, u8 arg2) {
    if (arg2 != 0) {
        *(s32*)((char*)arg0 + 8) |= (0x800 << arg1);
        return;
    }
    *(s32*)((char*)arg0 + 8) &= ~(0x800 << arg1);
}

void fn_801D041C(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFB);
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 4);
}

void fn_801D0444(s32 arg0, s32 arg1) {
    if (arg1 >= 3) {
        return;
    }
    *(s16*)(arg0 + (arg1 * 2)) = 0;
    *(s16*)(arg0 + 0xE) = 0;
}

void fn_801D0460(void *arg0, s32 arg1) {
    if (arg1 < 3) {
        u32* field_ptr = (u32*)((char*)arg0 + 8);
        *field_ptr |= (0x100 << arg1);
    }
}

s32 fn_801D2A38(void *arg0) {
    s32 *var_r4;
    s16 var_r3;

    if ((u32) *(u32 *) ((char *) arg0 + 0x6C) == 0U) {
        return 0;
    }
    var_r4 = (s32 *) ((char *) arg0 + 0x74);
    var_r3 = *(s16 *) ((char *) arg0 + 0x4E);
    if (var_r3 >= 0) {
loop_2:
        while (var_r3 > 0) {
            var_r4 = (s32 *) *var_r4;
            var_r3 -= 1;
        }
    } else {
loop_3:
        while (var_r3 < 0) {
            var_r4 = (s32 *) *var_r4;
            var_r3 += 1;
        }
    }
    return fn_800BE890(*(s32 *) ((char *) var_r4 + 0x8));
}

s32 fn_801D2B04(void*a){s32 fn_8000E0E4(void);s32 fn_800A8A88(s32);void fn_800BE728(s32);void*p;s16 n;if(M2C_FIELD(a,u32*,0x6c)==0)return 0;n=M2C_FIELD(a,s16*,0x4e);p=M2C_FIELD(a,void**,0x74);if(n>=0)goto pos;while(n<0){p=M2C_FIELD(p,void**,0);n++;}goto found;pos:while(n>0){p=M2C_FIELD(p,void**,4);n--;}found:if(M2C_FIELD(p,void**,0x10))return fn_800A8A88(M2C_FIELD(M2C_FIELD(p,void**,0x10),s32*,0x188));fn_800BE728(M2C_FIELD(p,s32*,8));return fn_8000E0E4();}

void *fn_801D2C20(void) {
    extern u16 lbl_8027E0F8[];
    return &lbl_8027E0F8[0x12];
}

void *fn_801D2E40(void *arg0, s16 arg1) {
    void **ptr;
    if (arg0 != NULL) {
        ptr = (void **)((u8 *)arg0 + 4);
        if ((u32)*ptr != 0U) {
            fn_800616A0();
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801D2E9C(void) {
    void fn_80059C2C(int, int, int, int, int);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

s16 fn_801D2FC0(void *arg0) {
    s16 a = M2C_FIELD(arg0, s16 *, 0x16);
    s16 b = M2C_FIELD(arg0, s16 *, 0x12);
    return (s16) (a - b);
}

void fn_801D2FD4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x58) = arg1;
}

s16 fn_801D2FDC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x58);
}

void *fn_801D322C(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    void fn_801403F0(void);
    extern u16 lbl_802999D0[105];

    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_802999D0, arg0, lbl_802999D0);
    if (temp_r3 != NULL) {
        fn_801403F0();
        *(s32 *)((char *)temp_r3 + 0x40) = 0;
        *(s32 *)((char *)temp_r3 + 0x48) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
        *(s32 *)((char *)temp_r3 + 0x50) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
    }
    return temp_r3;
}

void fn_801D3488(s32 arg0) {
    extern u8 lbl_803682D4;
    extern void *lbl_803682D0;
    extern u8 lbl_8027E148[];
    extern u8 lbl_80330708[];
    
    if ((s8) lbl_803682D4 == 0) {
        lbl_803682D4 = 1;
        lbl_803682D0 = &lbl_8027E148[0x65];
    }
    
    fn_80231D94(lbl_803682D0, &lbl_8027E148[0x76], lbl_80330708[0x10], &lbl_8027E148);
    fn_8011D79C(lbl_803682D0);
    fn_8000C188(arg0);
}

void fn_801D3508(s32 arg0) {
    extern u8 lbl_803682CC;
    extern void *lbl_803682C8;
    extern char lbl_8027E148[];
    extern u8 lbl_80330708[];
    
    if ((s8) lbl_803682CC == 0) {
        lbl_803682CC = 1;
        lbl_803682C8 = &lbl_8027E148[0x89];
    }
    
    fn_80231D94(lbl_803682C8, &lbl_8027E148[0x98], lbl_80330708[0x10]);
    fn_8011D79C(lbl_803682C8);
    fn_8000C188(arg0);
}

void fn_801D3588(void) {
    extern u16 lbl_802CA264[50];
    
    u16 *var_r4;
    s32 temp_r0;
    
    var_r4 = &lbl_802CA264[0x48 / sizeof(u16)];
    
loop_3:
    if (var_r4 == NULL) {
        fn_8000C070(3);
        return;
    }
    temp_r0 = var_r4[0x1A0 / sizeof(u16)];
    var_r4 = &var_r4[0x184 / sizeof(u16)];
    if (temp_r0 & 0x8000) {
        fn_8000C070(2);
        return;
    }
    goto loop_3;
}

void fn_801D36B8(void *arg0) { void *fn_800C42D8(s32); void *fn_801D3860(s32,s32,s32); void fn_801400F4(void*,void*); void fn_80140234(void*,void*,s32); extern s32 lbl_80367110; void *obj; if((lbl_80367110&3)==0){ obj=fn_800C42D8(0xa0); if(obj){ obj=fn_801D3860(0x40,0x10,0xa); *(s16*)((u8*)obj+8)=0x10; *(u32*)((u8*)obj+0x34)|=0x10; *(s16*)((u8*)obj+0x24)=8; fn_801400F4(arg0,obj); fn_80140234(arg0,obj,1); } } }

void fn_801D3750(s32 arg0) {
    extern u8 lbl_803682C4;
    extern void *lbl_803682C0;
    extern u8 lbl_8027E148[];
    extern u8 lbl_80330708[];
    
    if ((s8)lbl_803682C4 == 0) {
        lbl_803682C4 = 1;
        lbl_803682C0 = &lbl_8027E148[0xB9];
    }
    
    fn_80231D94(lbl_803682C0, &lbl_8027E148[0xCA], lbl_80330708[0x10], &lbl_8027E148);
    fn_8011D908(lbl_803682C0, arg0);
}

void fn_801D37CC(void *arg0) {
    s32 fn_8003FCCC();
    M2C_UNK fn_80162054();
    M2C_UNK fn_801620AC();
    extern s32 lbl_80367110;
    fn_801620AC();
    M2C_FIELD(arg0, s32 *, 0x44) = fn_8003FCCC();
    fn_80162054();
    lbl_80367110 &= 0xFFFFFFFC;
}

void fn_801D3810(s32 arg0) {
    M2C_UNK fn_800C0BAC(s32);
    M2C_UNK fn_8013FE0C();
    extern u16 lbl_80367240[];
    s32 temp_r4;

    fn_8013FE0C();
    temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r4 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r4) & 0x1000) {
        fn_800C0BAC(arg0);
    }
}

void fn_801D3A4C(void *arg0) { s16 x=M2C_FIELD(arg0,s16*,0xc), y=M2C_FIELD(arg0,s16*,0x10), a=M2C_FIELD(arg0,s16*,0xa), b=M2C_FIELD(arg0,s16*,0xe); s16 width=(s16)(y-x), height=(s16)(b-a); M2C_FIELD(arg0,s16*,0x12)=4; M2C_FIELD(arg0,s16*,0x14)=8; M2C_FIELD(arg0,s16*,0x16)=height-4; M2C_FIELD(arg0,s16*,0x18)=width-8; M2C_FIELD(arg0,s16*,0x5e)=(M2C_FIELD(arg0,s16*,0x16)-M2C_FIELD(arg0,s16*,0x12))>>1; M2C_FIELD(arg0,s16*,0x60)=0; M2C_FIELD(arg0,s16*,0x62)=0; M2C_FIELD(arg0,s16*,0x86)=(M2C_FIELD(arg0,s16*,0x16)-M2C_FIELD(arg0,s16*,0x12))>>1; M2C_FIELD(arg0,s16*,0x88)=M2C_FIELD(arg0,s16*,0x18)-M2C_FIELD(arg0,s16*,0x14); M2C_FIELD(arg0,s16*,0x8a)=0; }

s32 fn_801D3AE0(s32 arg0) {
    extern u16 lbl_80299CC4[];
    void *fn_8000CAA0(void *, s32, void *);
    
    fn_8000CAA0(lbl_80299CC4, arg0, lbl_80299CC4);
    *(u16 *)((char *)lbl_80299CC4 + 0x34) = 2;
    
    return 0;
}

void fn_801D3B7C(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *, void *, s32);
    extern u8 lbl_80299CC4[];
    extern u8 lbl_80331FB8[];
    extern s32 lbl_803682E0;
    
    *(s32*)(lbl_80331FB8 + 0x0) = -1;
    *(s32*)(lbl_80331FB8 + 0x4) = -1;
    *(u8*)(lbl_80331FB8 + 0x44) = 1;
    
    fn_8000CAA0(lbl_80299CC4, arg0, lbl_80299CC4, lbl_80331FB8, -1);
    
    *(s32*)(lbl_80331FB8 + 0x34) = 0;
    *(s32*)(&lbl_803682E0) = 0;
}

void fn_801D3BD0(void *arg0) { void fn_8000BF00(void*); void fn_8000C60C(void); void fn_8006EDA0(void*); void fn_800C4588(void*); void fn_801457B4(void); void fn_80161F7C(void); extern u8 lbl_80299C58[]; extern u8 lbl_80299A78[]; void *obj; s32 i; obj=*(void**)((u8*)arg0+0x30); fn_8000BF00(lbl_80299C58); i=0; do { if(*(u32*)(lbl_80299A78+i*0xc+8)) fn_8006EDA0(lbl_80299A78+i*0xc+8); *(u32*)(lbl_80299A78+i*0xc+8)=0; i++; }while(i<0x28); if(*(u8*)((u8*)obj+0x5a)) fn_80161F7C(); if(*(u32*)((u8*)obj+0xc)) fn_8000C60C(); if(*(u32*)((u8*)obj+8)) fn_8006EDA0((u8*)obj+8); fn_800C4588(obj); *(void**)((u8*)arg0+0x30)=0; fn_801457B4(); }

void fn_801D3C88(void *arg0) {
 void *fn_800C4638(s32,void*,s32); void fn_8006EEFC(void*,void*); void fn_80162054(void); void fn_80145828(void); s32 fn_80059208(void*,void*); void fn_8008A290(s32,s32); extern u8 lbl_8027E258[]; extern s32 lbl_803682E4; extern void fn_801D8E80(void);
 void *obj; obj=fn_800C4638(0x544,lbl_8027E258+0x27b,0); *(void**)((u8*)arg0+0x30)=obj; *(s32*)((u8*)obj+0xc)=0; *(s32*)((u8*)obj+8)=0; *(u8*)((u8*)obj+0x5a)=0; *(u8*)((u8*)obj+0x10)=*(u8*)((u8*)arg0+0x34); fn_8006EEFC((u8*)obj+8,lbl_8027E258+0x27c); lbl_803682E4=*(s32*)((u8*)obj+8); fn_80162054(); *(u8*)((u8*)obj+0x5a)=1; fn_80145828(); *(s32*)((u8*)obj+0xc)=fn_80059208(fn_801D8E80,arg0); fn_8008A290(2,0xfa);
}

u8 fn_801D8840(void *arg0) {
    return (u8) (M2C_FIELD(arg0, u8 *, 0x16) == 0x20);
}

void fn_801D8854(void *arg0, u32 arg1) {
    *(u16*)((char*)arg0 + 2) = 0x12C;
    if (arg1 != 0) {
        fn_801475FC(arg1, 0x64);
    }
}

void fn_801D888C(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = arg1;
}

void fn_801D8894(void *arg0) {
    s16 *ptr = (s16 *)arg0;
    ptr[1] = 0x12C;
    ptr[2] = 0;
    ptr[3] = 0x18;
}

void fn_801D88B0(s8 *arg0, s8 arg1) {
    *arg0 = arg1;
}

void fn_801D8C0C(void *arg0, s16 arg1)
{
  memset(arg0, 0, 0x4C);
  *((s16 *) (((char *) arg0) + 2)) = 0;
  *((s16 *) (((char *) arg0) + 0)) = 0;
  *((s16 *) (((char *) arg0) + 8)) = arg1 ^ 0;
  *((s16 *) (((char *) arg0) + 2)) = 0x64;
}

void fn_801D8C64(s32 arg0, s32 arg1)
{
    s32 temp_r3;
    s32 *temp_r4;
    
    temp_r3 = fn_800C4638(0);
    temp_r4 = (s32 *)temp_r3;
    *temp_r4 = 0;
    *(temp_r4 + 1) = 0;
    *(temp_r4 + 2) = 0;
    
    *(u16 *)((char *)arg0 + 0x0) = 0;
    *(u16 *)((char *)arg0 + 0x2) = (u16)arg1;
    *(u16 *)((char *)arg0 + 0x8) = 0;
    *(u16 *)((char *)arg0 + 0xa) = (u16)arg0;
    *(u16 *)((char *)arg0 + 0x18) = 0;
}

void fn_801D8D58(void *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
}

void fn_801D8D68(void *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
}

void fn_801D8D78(void *arg0,s16 arg1,s16 arg2,u8 arg3,u8 arg4) { s16 a=M2C_FIELD(arg0,s16*,0xa); s16 b=M2C_FIELD(arg0,s16*,8); M2C_FIELD(arg0,s16*,0)=(s16)(M2C_FIELD(arg0,s16*,0)|1); if(arg3){M2C_FIELD(arg0,s16*,0)=(s16)(M2C_FIELD(arg0,s16*,0)|2);}else{M2C_FIELD(arg0,s16*,0)=(s16)(M2C_FIELD(arg0,s16*,0)&0xfffffffd);} if(arg4){M2C_FIELD(arg0,s16*,0)=(s16)(M2C_FIELD(arg0,s16*,0)|4);}else{M2C_FIELD(arg0,s16*,0)=(s16)(M2C_FIELD(arg0,s16*,0)&0xfffffffb);} M2C_FIELD(arg0,s16*,2)=0xc8; M2C_FIELD(arg0,s16*,0xc)=b; M2C_FIELD(arg0,s16*,8)=b; M2C_FIELD(arg0,s16*,0xe)=a; M2C_FIELD(arg0,s16*,0xa)=a; M2C_FIELD(arg0,s16*,0x10)=arg1; M2C_FIELD(arg0,s16*,0x12)=arg2; M2C_FIELD(arg0,s16*,4)=0; M2C_FIELD(arg0,s16*,6)=4; }

void fn_801D8E08(s16 *arg0) {
    *arg0 &= 0xFFFFFFFE;
}

void fn_801D8E18(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 1);
    if (arg3 != 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 2);
    } else {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) & 0xFFFFFFFD);
    }
    if (arg4 != 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 4);
    } else {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) & 0xFFFFFFFB);
    }
    M2C_FIELD(arg0, s16 *, 2) = 0x64;
    M2C_FIELD(arg0, s16 *, 8) = arg1;
    M2C_FIELD(arg0, s16 *, 0xA) = arg2;
}

s32 fn_801DBFF8(void) {
    return 0;
}

void *fn_801DC0CC(void) {
    void *fn_801E09B4(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    void *temp_r3;

    temp_r3 = fn_801E09B4(&lbl_803682F0);
    if ((temp_r3 != NULL) && ((u8) M2C_FIELD(temp_r3, u8 *, 0x60) == 3)) {
        return temp_r3;
    }
    return NULL;
}

void fn_801DC150(s32 arg0, s8 arg1, s8 arg2, s32 arg3, s32 arg4, s8 arg5, void *arg6) {
    void *fn_8000CAA0(M2C_UNK *, void *, M2C_UNK *);
    extern M2C_UNK lbl_80299C88;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80299C88, arg6, &lbl_80299C88);
    M2C_FIELD(temp_r3, void **, 0x30) = (void *) M2C_FIELD(arg6, void **, 0x30);
    M2C_FIELD(temp_r3, s32 *, 0x34) = arg0;
    M2C_FIELD(temp_r3, s8 *, 0x3C) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x40) = arg3;
    M2C_FIELD(temp_r3, s32 *, 0x38) = arg4;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x30), s8 *, 0x14) = arg2;
    M2C_FIELD(temp_r3, s8 *, 0x44) = arg5;
}

void fn_801DC1C8(void *arg0) {
    void *temp_r4;
    s32 temp_r0;

    temp_r4 = *(void**)((char*)arg0 + 0x30);
    *(u8*)((char*)temp_r4 + 0x332) = 0xC8;
    temp_r0 = (*(s32*)((char*)arg0 + 0x40) * 0x14) + 0x51A;
    *(s16*)((char*)temp_r4 + temp_r0) = (*(s16*)((char*)temp_r4 + temp_r0)) & 0xFFFFFFFE;
}

void fn_801DDAC8(void *arg0) {
    M2C_UNK fn_801DC588();
    s16 temp_r3;
    s16 *temp_r4;

    temp_r3 = *(s16 *)((u8 *)arg0 + 2);
    switch (temp_r3) {                              /* irregular */
    case 0x0:
        *(s16 *)arg0 = 0;
        break;
    case 0x64:
        *(s16 *)arg0 = *(s16 *)arg0 | 1;
        *(s16 *)((u8 *)arg0 + 2) = 0x6E;
        /* fallthrough */
    case 0x6E:
        temp_r4 = (s16 *)((u8 *)arg0 + 0x1E);
        *temp_r4 = *temp_r4 + 1;
        if (*temp_r4 >= 5) {
            *temp_r4 = 5;
        }
        break;
    case 0xC8:
        *(s16 *)arg0 = *(s16 *)arg0 | 1;
        *(s16 *)((u8 *)arg0 + 2) = 0xD2;
        /* fallthrough */
    case 0xD2:
        temp_r4 = (s16 *)((u8 *)arg0 + 0x1E);
        *temp_r4 = *temp_r4 - 1;
        if (*temp_r4 < 1) {
            *temp_r4 = 0;
            *(s16 *)((u8 *)arg0 + 2) = 0;
            *(s16 *)arg0 = 0;
        }
        break;
    }
    fn_801DC588();
}

extern void *lbl_801D3B14;
#pragma use_lmw_stmw on
void fn_801DDBA8(MsgBox *w, s32 arg1, u8 arg2, u8 arg3, s16 arg4) {
    void *memset(void *, s32, u32);
    void *memcpy(void *, const void *, u32);
    char *fn_8000E0E4(s32);
    s32 fn_80010B78(char *, s32, f32);
    M2C_UNK fn_801DC588();
    s32 n;
    char *s;
    char *start;
    s32 len;
    f32 width;
    s32 h;

    memset(w, 0, sizeof(MsgBox));
    w->state = 0;
    w->flags = 0;
    w->timer = 0;
    w->state = 100;
    w->type = arg4;
    if (arg3) {
        w->flags |= 4;
    } else {
        w->flags &= ~4;
    }
    w->width = 200;
    if (w->type == 1 || w->type == 2 || w->type == 3) {
        w->width = 400;
    }
    s = fn_8000E0E4(arg1);
    n = len = 0;
    start = s;
    for (;;) {
        if (*s == 0 || *s == '\n') {
            if (len > 0) {
                memcpy(w->lines[n], start, len);
            }
            w->lines[n][len] = 0;
            width = fn_80010B78(w->lines[n], -1, 1.0f);
            if (width > w->width) {
                w->width = width;
            }
            n++;
            if (*s == 0) {
                break;
            }
            s++;
            len = 0;
            start = s;
        } else {
            s++;
            len++;
        }
    }
    w->numLines = n;
    w->width += 0x18;
    h = (arg2 ? 20 : 0) + w->numLines * 20;
    h += (w->flags & 4) ? 40 : 0;
    w->height = 32 + h;
    if (w->type == 1 || w->type == 2) {
        w->height += 0x88;
    }
    if (w->type == 3) {
        w->height += 10;
    }
    if (arg2) {
        w->flags |= 2;
    }
    fn_801DC588(w);
}

void fn_801DDDE8(s32 arg0) {
    void *fn_8000CAA0(M2C_UNK *, M2C_UNK *);
    extern M2C_UNK lbl_80299C74;
    extern f32 lbl_8036B634;
    extern f64 lbl_8036B670;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80299C74, &lbl_80299C74);
    M2C_FIELD(temp_r3, f32 *, 0x30) = lbl_8036B634;
    *(f32*)((char*) temp_r3 + 0x34) = (f32) arg0;
}

void fn_801DDE44(void *arg0) {
    extern f32 lbl_8036B630;
    *(f32*)((char*)arg0 + 0x30) += lbl_8036B630;
    
    if (*(f32*)((char*)arg0 + 0x30) == *(f32*)((char*)arg0 + 0x34)) {
        fn_8000C188();
    }
}

void fn_801DE074(void) {
    M2C_UNK fn_8000BF00(M2C_UNK *);
    M2C_UNK fn_8006EDA0(void *);
    extern M2C_UNK lbl_80299A78;
    extern M2C_UNK lbl_80299C58;
    M2C_UNK *var_r30;
    s32 var_r29;

    fn_8000BF00(&lbl_80299C58);
    var_r29 = 0;
    var_r30 = &lbl_80299A78;
    do {
        if ((u32) M2C_FIELD(var_r30, u32 *, 8) != 0U) {
            fn_8006EDA0(var_r30 + 8);
        }
        var_r29 += 1;
        M2C_FIELD(var_r30, u32 *, 8) = 0U;
        var_r30 += 0xC;
    } while (var_r29 < 0x28);
}

#pragma use_lmw_stmw reset
void fn_801DE2FC(s32 arg0) {
    u8 fn_8005BB2C();
    if (fn_8005BB2C() != 0) {
        fn_8000C188(arg0);
    }
}

void fn_801DE338(void *arg0) {
    *(s32*)((char*)arg0 + 0x0) = -1;
    *(s32*)((char*)arg0 + 0x4) = -1;
    *(s8*)((char*)arg0 + 0x44) = 1;
}

u8 fn_801DE350(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x63);
}

u8 fn_801DE358(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x47);
}

s32 fn_801DE360(void) {
    return 1;
}

u8 fn_801DE368(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x64);
}

s32 fn_801DE370(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

void fn_801DE378(void *arg0)
{
  memset(arg0, 0, 0x1EA);
  *((s16 *) arg0) = (*(((s16 *) arg0) + 1) = 0);
  *(((s16 *) arg0) + 0xF) = 0;
}

void fn_801DE3BC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x1E8) = arg1;
}

void fn_801DE3C4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0xC8;
}

u8 fn_801DE3D0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x10);
}

void fn_801DE3D8(void *arg0) {
 extern s32 lbl_80367110; extern u32 lbl_80367240[]; extern f32 lbl_8036B6B8,lbl_8036B6BC;
 u8 gate=0; s32 flags;
 if(lbl_80367110&0x10) { if(!(lbl_80367110&0x20)) gate=1; }
 if(gate) return;
 flags=lbl_80367240[3];
 if((s16)*(f32*)((char*)arg0+0x44)!=0) return;
 if((flags&0x04000004) && *(u8*)((char*)arg0+0x84)) { *(f32*)((char*)arg0+0x44)=lbl_8036B6B8; return; }
 if((flags&0x08000008) && *(u8*)((char*)arg0+0x5C)) *(f32*)((char*)arg0+0x44)=lbl_8036B6BC;
}

void fn_801DF4A4(void *arg0, s32 arg1) {
    struct Color {
        u8 r, g, b, a;
    };
    void fn_80161AA8(s32, s32, s16, s32, s32, struct Color *);
    s16 h;
    struct Color col;

    h = M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12);
    col.r = 0x80;
    col.g = 0x78;
    col.b = 0x50;
    col.a = 0xE6;
    fn_80161AA8(0x10, arg1, h - 0x10, arg1, 0x10, &col);
}

extern u8 lbl_80299F4C[];
void fn_801DF5D8(void) {
    extern u8 lbl_80299F4C[];
    void fn_8000CAA0(void *);
    fn_8000CAA0(lbl_80299F4C);
}

extern u8 lbl_80299F1C[];
void fn_801E00EC(void) { void fn_8000CAA0(void *); extern u8 lbl_80299F1C[]; fn_8000CAA0(lbl_80299F1C); }

void fn_801E0114(s32 arg0) {
    u8 fn_800EB788(void);
    void fn_801E0154(void *, s32);
    extern u32 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E0154(&lbl_803682F0, arg0);
}

void *fn_801E09B4(M2C_UNK *arg0) {
    u32 r3 = (u32) arg0;
    u32 r4 = *(u32 *) (r3 + 0x70);
    
    if (r4 != 0) {
        return *(void **) r4;
    }
    return NULL;
}

void fn_801E0B48(s32 arg1, s32 arg2, s32 arg3) {
    void *fn_8000CAA0(M2C_UNK *, s32);
    extern M2C_UNK lbl_80299ED8;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80299ED8, arg3);
    *(s32 *) ((u8 *) temp_r3 + 0x60) = arg1;
    *(s32 *) ((u8 *) temp_r3 + 0x64) = arg2;
}

void fn_801E0D30(void *arg0) {
    u8 fn_800EB788(void);
    void fn_801E0D78(void *, void *, s32, s32);
    extern u16 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E0D78(&lbl_803682F0, arg0, *(s32 *) ((u8 *) arg0 + 0x60), *(s32 *) ((u8 *) arg0 + 0x64));
}

void fn_801E1168(void *arg0) {
    u8 fn_800EB788(void);
    void fn_801E11AC(void *, void *, s32);
    extern u16 lbl_803682F0[4];

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E11AC(lbl_803682F0, arg0, *(s32 *) ((u8 *) arg0 + 0x60));
}

void fn_801E1440(s32 arg0, s32 arg1, s32 arg2) {
    void fn_8014D698(void *, s32, u8, u8, s32);
    extern u8 lbl_80330708[];
    extern s32 lbl_80331FB8[];

    s32 temp_r2 = arg2;
    u8 temp_r3 = arg1;
    
    fn_8014D698(lbl_80330708, 0, temp_r3, temp_r2, 1);
    lbl_80331FB8[0] = -1;
    lbl_80331FB8[1] = -1;
    ((u8 *) lbl_80331FB8)[0x44] = 1;
}

void fn_801E204C(void *arg0) {
    extern M2C_UNK lbl_80330708;
    void *temp_r5;

    if (((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x54) == 4) && ((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x10) != 0x20)) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x54);
        M2C_FIELD(temp_r5, u8 *, 0x64) = (u8) M2C_FIELD(&lbl_80330708, u8 *, 0x51E);
        M2C_FIELD(temp_r5, s8 *, 0x65) = 9;
    }
}

void fn_801E2084(s32 arg0) {
    u8 fn_800EB788(void);
    void fn_801E1CB4(void *, s32);
    extern u16 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E1CB4(&lbl_803682F0, arg0);
}

void fn_801E218C(void) {
    fn_800EB788();
    if (0) {
        // Dummy to add the clrlwi. r0, r3, 24 instruction
    }
}

void fn_801E21B0(void *arg0) {
    void *temp_r6;
    s32 temp_r5;

    temp_r6 = *(void **)((char *)arg0 + 0x54);
    temp_r5 = *(s32 *)((char *)arg0 + 0x4C);
    fn_800E9B80(temp_r6, temp_r6, temp_r5, temp_r5, arg0);
}

s32 fn_801E2568(s32 *arg0, s32 arg1) {
    return ((arg1 * 0x6000) + 0x20000 + *arg0) - 0x6000;
}

s32 fn_801E2580(s32 *arg0, s32 arg1) {
    s32 temp_r3 = (arg1 << 0xE) + *arg0;
    return temp_r3 + 0x2000;
}

void fn_801E2594(u32 *arg0) {
    extern u16 lbl_8027E980[];
    if ((u32) *arg0 != 0U) {
        u16 *temp = &lbl_8027E980[0x122];
        fn_800056CC(temp);
        fn_800C4588(*arg0);
        *arg0 = 0U;
    }
}

void fn_801E25EC(void) {
    extern u16 lbl_8027E980[];
    u16* addr = &lbl_8027E980[0x181];
    fn_800056CC(addr);
    fn_800E9A94();
}

void fn_801E2F9C(s32 *arg0, s32 arg1) {
    extern u16 lbl_8027E980[];
    s32 fn_800056CC(void *, void *);
    s32 fn_800C4604(s32, s32, void *, s32);
    s32 fn_800EA540(s32, s32);

    s32 r30 = (s32)lbl_8027E980;
    fn_800056CC(&lbl_8027E980[0x137], &lbl_8027E980);
    *arg0 = fn_800C4604(0, 0xFFFDA000, &lbl_8027E980[0x14E], 0);
    fn_800EA540(*arg0, arg1);
}

void fn_801E3118(s32 *arg0,s32 arg1,u8 arg2) { void fn_800056CC(const char*,const char*); s32 fn_800C4604(s32,s32,const char*,s32); void fn_801E3014(s32*); void *fn_8000CAA0(void*,s32); extern u8 lbl_8027E980[]; extern u8 lbl_80299DE8[]; extern s32 lbl_80367110; s32 value; fn_800056CC((char*)lbl_8027E980+0x16d,(char*)lbl_8027E980); value=fn_800C4604(0,0xfffda000,(char*)lbl_8027E980+0x14e,0); *arg0=value; if(lbl_80367110&0x10) fn_801E3014(arg0); else { void *p=fn_8000CAA0(lbl_80299DE8,arg1); *(s32*)((u8*)p+0x54)=*arg0; *(u32*)((u8*)p+0x60)=arg2; } }

void fn_801E3214(void *arg0) {
    M2C_UNK fn_800EA540(s32, void *);
    fn_800EA540(M2C_FIELD(arg0, s32 *, 0x54), arg0);
}

void fn_801E323C(s32 *arg0, s32 arg1) {
    M2C_UNK fn_800056CC(void *, M2C_UNK *);
    void *fn_8000CAA0(M2C_UNK *, s32);
    extern M2C_UNK lbl_8027E980;
    extern M2C_UNK lbl_80299DC8;
    fn_800056CC(&lbl_8027E980 + 0x197, &lbl_8027E980);
    M2C_FIELD(fn_8000CAA0(&lbl_80299DC8, arg1), s32 *, 0x54) = (s32) *arg0;
}

void fn_801E329C(void *arg0) {
    M2C_UNK fn_800EA7CC(s32, void *);
    fn_800EA7CC(M2C_FIELD(arg0, s32 *, 0x54), arg0);
}

void fn_801E32C4(s32 arg1) {
    extern u16 lbl_8027E980[];
    u16* temp = &lbl_8027E980[0x1AD];
    fn_800056CC(temp);
    fn_800E9AE4(arg1);
}

u8 fn_801E3308(s32 arg0) {
    u8 *ptr = (u8*) arg0;
    s32 count = 0;
    s32 i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 10; j++) {
            if (ptr[0x12 + j] != 0) {
                count++;
            } else {
                break;
            }
        }
        ptr += 0xA;
    }
    
    return (u8) (count + 1);
}

s32 fn_801E33F4(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x10) & 1;
}

void fn_801E3560(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0x40) = arg1;
    M2C_FIELD(arg0, s8 *, 0x41) = arg2;
    M2C_FIELD(arg0, s8 *, 0x42) = arg3;
}

s32 fn_801E3570(s32 arg0, void *arg1) {
    u8 fn_80105BC0(s32, u8);
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg1, u16 *, 0x18);
    if (temp_r0 >= 0x80U) {
        return 0;
    }
    return fn_80105BC0(arg0 + 0x30, (u8) temp_r0) != 0;
}

void fn_801E35BC(s32 arg0, s32 arg1) {
    M2C_UNK fn_80105D4C(s32, u8);
    if (arg1 < 0x80) {
        fn_80105D4C(arg0 + 0x30, (u8) arg1);
    }
}

void fn_801E35EC(s32 arg0, void *arg1) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg1, u16 *, 0x18);
    if (temp_r0 < 0x80U) {
        fn_80105D4C(arg0 + 0x30, (u8) temp_r0);
    }
}

s32 fn_801E3620(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0) + 0xACA70000) != 0x5346U) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 4) == 0x20050201;
}

s32 fn_801E417C(void *arg0) {
    s32 temp_r3;
    s32 temp_r0;

    temp_r3 = *(s32 *)((u8 *)arg0 + 0x48);
    temp_r0 = 0x100000 - temp_r3;
    return temp_r3 & ~(temp_r0 | (temp_r0 - 1));
}

s32 fn_801E434C(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x40) + 0xB9BB0000) != 0x384AU) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x44) == 0x20050201;
}
extern u16 lbl_80299E10;
extern u8 lbl_80331FB8[];
#include "global.h"

extern void *lbl_803682B8;
extern u8 lbl_802986A8[];
extern u16 lbl_8027C370[];
extern u16 lbl_802CA264[];
