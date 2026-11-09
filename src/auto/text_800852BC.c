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

void fn_800852BC(s32 arg0) {
    M2C_UNK fn_80069F04(s32);
    M2C_UNK fn_80223E5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802246B8(M2C_UNK);
    fn_802246B8(0);
    fn_80223E5C(6, 0x80, 1, 0, 0);
    fn_80069F04(arg0);
    fn_802246B8(1);
    fn_80223E5C(7, 0, 1, 7, 0);
}

void fn_8008532C(void *arg0) {
    s16 r3, r4, r5, r6;
    
    r3 = *(s16 *)((u32)arg0 + 0);
    r4 = *(s16 *)((u32)arg0 + 2);
    r5 = *(s16 *)((u32)arg0 + 4);
    r6 = *(s16 *)((u32)arg0 + 6);
    
    fn_80225058(r3, r4, r5, r6);
}

void fn_80088CC4(void *arg0) {
    M2C_UNK fn_80088300();
    M2C_UNK fn_800888A4();
    s16 temp_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 4);
    switch (temp_r0) {                              /* irregular */
    case 0:
        fn_800888A4();
        return;
    case 1:
        fn_80088300();
        return;
    }
}

void fn_80088F34(void) {
    extern u16 lbl_802899CC;
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    
    void* ptr = fn_8000C0C0(&lbl_802899CC);
    if (ptr != NULL) {
        ((u8*)ptr)[0x30] = 0x7B;
        return;
    }
    fn_8000CAF0(&lbl_802899CC, 5);
}

void fn_80088F8C(void *arg0) {
    f32 fn_800067BC(M2C_UNK, s16, f32, f32, f32, f32);
    extern f32 lbl_80369680;
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x34) = (s16) fn_800067BC(0, temp_r4, M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C), (f32) (6 - temp_r4), lbl_80369680);
}

void fn_80089424(s32 arg0) {
    M2C_UNK fn_8000A3F8(s32);
    s32 fn_8000A418();
    if (fn_8000A418() != 0) {
        fn_8000A3F8(arg0);
    }
}

void fn_80089460(void *arg0) {
    M2C_UNK fn_8000BFEC(M2C_UNK *, M2C_UNK *);
    extern M2C_UNK fn_80089490;
    M2C_FIELD(arg0, s16 *, 0x36) = 0;
    fn_8000BFEC(&fn_80089490, &fn_80089490);
}

u16 fn_80089490(void) {
    extern u16 *lbl_803674E4;
    return lbl_803674E4[0x2A/2];
}

s32 fn_800894F8(void) {
    M2C_UNK fn_8000BF00(M2C_UNK *);
    extern M2C_UNK lbl_802899C0;
    fn_8000BF00(&lbl_802899C0);
    return 1;
}

s32 fn_80089524(void) {
    M2C_UNK fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_802899C0;
    fn_8000CAF0(&lbl_802899C0, 4);
    return 1;
}

void fn_80089554(void) {
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    extern f32 lbl_80369690;
    extern f32 lbl_803696B0;
    extern f32 lbl_803696B4;
    extern f32 lbl_803696B8;
    fn_8000A258();
    fn_80009D74(lbl_80369690, lbl_80369690, lbl_80369690, lbl_803696B0);
    fn_8000A174(0, 0x800);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369690, lbl_80369690, lbl_803696B4, lbl_803696B8);
    fn_80007884();
}

s32 fn_800895B8(void) {
    extern void *lbl_8036C310;
    return M2C_FIELD(lbl_8036C310, s32 *, 0x70);
}

u16 fn_80089634(void) {
    extern void *lbl_803674E4;
    return M2C_FIELD(lbl_803674E4, u16 *, 0x32);
}

u16 fn_80089640(void) {
    extern u16 *lbl_803674E4;
    return lbl_803674E4[0x19];
}

void fn_80089650(s32 arg0, s32 arg1) {
    void fn_8008A32C(void *, s32, s32);
    extern void *lbl_803674E4;

    fn_8008A32C(lbl_803674E4, arg0, arg1);
}

void fn_800898E4(void *arg0) {
    M2C_UNK fn_802209FC();
    M2C_UNK fn_8022124C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802212FC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80221BA8(s32, M2C_UNK);
    M2C_UNK fn_80222EB4();
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x54);
    fn_8022124C(0, 0, 0x260, 0x1C0);
    fn_802212FC(0x260, 0x1C0, 4, 0);
    fn_80221BA8(M2C_FIELD(temp_r31, s32 *, 0x48), 0);
    fn_802209FC();
    fn_80222EB4();
}

void fn_80089970(void) {
    extern void *lbl_803674EC;
    M2C_FIELD(lbl_803674EC, s16 *, 0x32) = 0;
}

s32 fn_80089ED8(void) {
    extern void *lbl_803674E8;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(lbl_803674E8, u16 *, 0x32);
    if ((temp_r0 == 1) || (temp_r0 == 2)) {
        return 1;
    }
    return 0;
}

u16 fn_8008A56C(void) {
    return lbl_803674E0[0x19];
}

s32 fn_8008A578(void) {
    u16 temp_r4;

    temp_r4 = lbl_803674E0[0x19]; // 0x32 / 2 = 0x19
    if ((temp_r4 & 0x2)) {
        return 0;
    }
    if ((temp_r4 & 0x4)) {
        return 0;
    }
    return 1;
}

u16 fn_8008AF9C(s32 arg0, s32 arg1) {
    extern s32 lbl_803674F4;
    extern f32 lbl_80369704;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    extern f32 lbl_80369708;
    s32 sp8;
    u16 sp2A;
    u16 sp28;

    fn_8006ECCC(lbl_803674F4, &sp8, 0x38);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_80009C0C(lbl_80369704);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(sp28, (f32)arg0, (f32)arg1, (f32)sp28, (f32)sp2A);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();
    
    return sp28;
}

u16 fn_8008B09C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_8006ECCC(s32, M2C_UNK *, M2C_UNK);
    u16 fn_80222A80(M2C_UNK *);
    s16 fn_80222A90(M2C_UNK *);
    extern s32 lbl_803674F4;
    extern f32 lbl_80369704;
    extern f32 lbl_80369708;
    s16 sp2A;
    u16 sp28;
    M2C_UNK sp8;

    fn_8006ECCC(lbl_803674F4, &sp8, 0x37);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_80009C0C(lbl_80369704);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32) arg0, (f32) arg1, (f32) arg2, (f32) arg3);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();
    return sp28;
}

u16 fn_8008B1B0(s32 arg0, s32 arg1) {
    extern s32 lbl_803674F4;
    extern f32 lbl_80369704;
    extern f32 lbl_80369708;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;

    M2C_UNK fn_8006ECCC(s32, M2C_UNK *, M2C_UNK);
    u16 fn_80222A80(M2C_UNK *);
    u16 fn_80222A90(M2C_UNK *);

    M2C_UNK sp8;
    u16 sp28;
    u16 sp2A;

    fn_8006ECCC(lbl_803674F4, &sp8, 0x37);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn80222A90(&sp8);

    fn_8000A258();
    fn_80009C0C(lbl_80369704);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(sp28, (f32)arg0, (f32)arg1, (f32)sp28, (f32)sp2A);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();

    return sp28;
}

void fn_8008BA50(s32 arg1) {
    s32 tmp = arg1 - 0x40;
    fn_80225058(tmp, 0, 0x87, 0x1E0);
}

void fn_8008BC94(s32 arg0, s32 arg1, u8 arg2) {
    extern s32 lbl_803674F0;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    s32 sp8;
    u16 sp28;
    u16 sp2A;

    fn_8006ECCC(lbl_803674F0, &sp8, 0x14);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(2);
    fn_800077D8(sp2A, (f32) arg0, (f32) arg1, (f32) sp2A, (f32) sp28);
    if (arg2 != 0) {
        fn_800076CC();
    }
    fn_800075D8();
    fn_80007538();
    fn_80007884();
}

void fn_8008BD90(s32 arg0, s32 arg1, u8 arg2) {
    M2C_UNK fn_800076CC();
    M2C_UNK fn_8006ECCC(s32, M2C_UNK *, M2C_UNK);
    u16 fn_80222A80(M2C_UNK *);
    u16 fn_80222A90(M2C_UNK *);
    extern s32 lbl_803674F0;
    u16 sp2A;
    u16 sp28;
    M2C_UNK sp8;

    fn_8006ECCC(lbl_803674F0, &sp8, 0x14);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(sp28, (f32) arg0, (f32) arg1, (f32) sp28, (f32) sp2A);
    if (arg2 == 0) {
        fn_800076CC();
    }
    fn_80007884();
}

void fn_8008BE84(s32 arg0,s32 arg1) {
 s32 fn_8006ECCC(s32,void *,s32); u16 fn_80222A80(void *); u16 fn_80222A90(void *);
 void fn_8000A258(void); void fn_8000A174(void *,s32); void fn_8000A248(void); void fn_80007898(s32);
 void fn_800077D8(s32,f32,f32,f32,f32); void fn_80007884(void);
 extern s32 lbl_803674F0; extern f64 lbl_803696E8; extern f64 lbl_803696F0;
 struct { u8 buf[0x20]; volatile u16 x,y; } sp;
 fn_8006ECCC(lbl_803674F0,sp.buf,0x13); sp.x=fn_80222A80(sp.buf); sp.y=fn_80222A90(sp.buf);
 fn_8000A258(); fn_8000A174(sp.buf,16); fn_8000A248(); fn_80007898(1);
 fn_800077D8(sp.x,(f32)(arg0-0x20),(f32)(arg1+12),(f32)sp.x,(f32)sp.y); fn_80007884();
}

void fn_8008CD34(void) {
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
}

void fn_8008CD64(f32 farg0) {
    M2C_UNK fn_80009C0C(f32);
    fn_8000A258();
    fn_80009C0C(farg0);
    fn_8000A248();
}

#pragma scheduling reset

