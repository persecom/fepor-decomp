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

s32 fn_8007C5E4(void) {
    return 0;
}

void *fn_8007C64C(void) {
    extern u16 lbl_8026C640[];
    return &lbl_8026C640[0x144];
}

s32 fn_8007C65C(void) {
    extern void *lbl_80367488;
    void *temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367488, void **, 0x54);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x36) = 7;
    }
    return 0;
}

s32 fn_8007C68C(void) {
    return 0;
}

void *fn_8007C6AC(void) {
    extern u16 lbl_8026C640[];
    return &lbl_8026C640[0x2B4];
}

void *fn_8007C6DC(void) {
    extern u16 lbl_8026C640[];
    return &lbl_8026C640[0x2d2];
}

void *fn_8007C70C(void) {
    extern u16 lbl_8026C640[];
    return &lbl_8026C640[0x5e8];
}

s32 fn_8007C71C(void) {
    return 0;
}

void *fn_8007C73C(void) {
    extern u16 lbl_8026C640[];
    return &lbl_8026C640[0x312];
}

s32 fn_8007C74C(void) {
    return 0;
}

s32 fn_8007CB08(void) {
    extern u16 lbl_80289894[];
    s32 v = fn_8000C0C0(lbl_80289894);
    return v != 0;
}

void fn_8007CCE8(void) {
    M2C_UNK fn_80087F50();
    fn_80087F50();
}

void fn_8007CF98(void) {
    M2C_UNK fn_8007F844();
    fn_8007F844();
}

void fn_8007CFB8(void) {
    M2C_UNK fn_80082298();
    fn_80082298();
}

void fn_8007CFD8(s32 *arg0) {
    M2C_UNK fn_8008563C(s32 *);
    s32 sp8;

    sp8 = *arg0;
    fn_8008563C(&sp8);
}

void fn_8007D004(void) {
    M2C_UNK fn_80086020();
    fn_80086020();
}

void fn_8007D024(void) {
    M2C_UNK fn_80086C14();
    fn_80086C14();
}

void fn_8007D044(void) {
    M2C_UNK fn_800875B4();
    fn_800875B4();
}

void fn_8007D064(s32 arg0, s32 arg2) {
    void *fn_8000CAA0(void *, void *);
    void fn_801475FC(void *, s32, void *);

    extern u16 lbl_80289894[];
    extern u8 lbl_8026C86C[];

    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80289894, lbl_80289894);
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x38) = arg2;
    fn_801475FC(lbl_8026C86C + 0x140, 0x64, lbl_8026C86C);
}

void fn_8007D0C0(void *arg0) {
    extern f32 lbl_80369418;
    extern f32 lbl_80369448;
    extern f32 lbl_8036944C;
    extern f32 lbl_80369450;
    extern f32 lbl_80369454;
    extern f32 lbl_80369458;
    extern f32 lbl_8036945C;
    extern f32 lbl_80369460;
    extern f32 lbl_80369464;
    extern f32 lbl_80369468;
    extern f32 lbl_8036946C;
    s16 temp_r4;
    s16 temp_r4_2;
    s16 temp_r4_3;
    s16 temp_r4_4;
    s16 temp_r4_5;
    s8 temp_r0;
    void *temp_r31;

    temp_r31 = *(void **)((u8 *)arg0 + 0x30);
    *(s16 *)((u8 *)temp_r31 + 6) = *(s16 *)((u8 *)temp_r31 + 6) - 1;
    if (*(s32 *)((u8 *)temp_r31 + 0x20) == 1) {
        temp_r4 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x10) = fn_800067BC(4, temp_r4, lbl_80369448, lbl_8036944C, (f32)(7 - temp_r4), lbl_80369450);
        temp_r4_2 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x18) = fn_800067BC(4, temp_r4_2, lbl_80369454, lbl_80369458, (f32)(7 - temp_r4_2), lbl_80369450);
    } else {
        temp_r4_3 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x10) = fn_800067BC(4, temp_r4_3, lbl_8036945C, lbl_8036944C, (f32)(7 - temp_r4_3), lbl_80369450);
        temp_r4_4 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x18) = fn_800067BC(4, temp_r4_4, lbl_80369460, lbl_80369458, (f32)(7 - temp_r4_4), lbl_80369450);
    }
    *(f32 *)((u8 *)temp_r31 + 0xC) = lbl_80369464;
    *(f32 *)((u8 *)temp_r31 + 0x14) = lbl_80369468;
    temp_r4_5 = *(s16 *)((u8 *)temp_r31 + 6);
    temp_r0 = (s8) fn_800067BC(4, temp_r4_5, lbl_80369418, lbl_8036946C, (f32)(7 - temp_r4_5), lbl_80369450);
    *(s8 *)((u8 *)temp_r31 + 0xA) = temp_r0;
    *(s8 *)((u8 *)temp_r31 + 8) = temp_r0;
    if (*(s16 *)((u8 *)temp_r31 + 6) <= 0) {
        fn_8000C188(arg0);
    }
}

void fn_8007D7E8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

void fn_8007D924(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x20) == 1) {
        M2C_FIELD(temp_r4, u8 *, 9) = (u8) (M2C_FIELD(temp_r4, u8 *, 9) + 1);
        if ((s8) M2C_FIELD(temp_r4, u8 *, 9) > 2) {
            M2C_FIELD(temp_r4, u8 *, 9) = 0U;
        }
    } else {
        M2C_FIELD(temp_r4, u8 *, 9) = (u8) (M2C_FIELD(temp_r4, u8 *, 9) - 1);
        if ((s8) M2C_FIELD(temp_r4, u8 *, 9) < 0) {
            M2C_FIELD(temp_r4, u8 *, 9) = 2U;
        }
    }
    M2C_FIELD(temp_r4, s16 *, 6) = 7;
}

void fn_8007DAB4(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

extern u8 lbl_80330708[0x578];
void fn_8007DF6C(void *arg0) {
    void *temp_r31;
    
    temp_r31 = *(void**)((u8*)arg0 + 0x30);
    fn_8004BE88(*(s32*)((u8*)temp_r31 + 0x58), 1);
    lbl_80330708[0xA8] = *(u8*)((u8*)temp_r31 + 0x9);
    *(s32*)(lbl_80330708 + 0xAC) = *(s32*)((u8*)temp_r31 + 0x58);
    
    if (*(u32*)((u8*)temp_r31 + 0x5C)) {
        fn_8007B990();
    }
    if (*(u32*)((u8*)temp_r31 + 0x60)) {
        fn_800616A0();
    }
    fn_800C4588(temp_r31);
}

void fn_8007F7F8(s32 arg0) {
    M2C_UNK fn_8007DFE0(s32);
    M2C_UNK fn_8007E2C4(s32);
    M2C_UNK fn_8007E764(s32);
    M2C_UNK fn_8007EAD8(s32);
    M2C_UNK fn_8007F410();
    fn_8007F410();
    fn_8007EAD8(arg0);
    fn_8007E764(arg0);
    fn_8007E2C4(arg0);
    fn_8007DFE0(arg0);
}

void fn_80081CB0(s32 arg0) {
    M2C_UNK fn_8007FF58(s32);
    M2C_UNK fn_80080698(s32);
    M2C_UNK fn_800810BC(s32);
    M2C_UNK fn_80081830();
    fn_80081830();
    fn_800810BC(arg0);
    fn_80080698(arg0);
    fn_8007FF58(arg0);
}

void fn_80083278(void *arg0) {
    extern M2C_UNK lbl_80330EAC;
    extern f32 lbl_80369430;
    extern f32 lbl_803695C8;
    fn_80082298(&lbl_80330EAC, 1, lbl_80369430 + M2C_FIELD(arg0, f32 *, 0x14), lbl_803695C8 + M2C_FIELD(arg0, f32 *, 0x18), lbl_80369430);
}

void fn_80083DC0(void *arg0) {
    M2C_UNK fn_800832C0(s32, f32, f32);
    fn_800832C0(M2C_FIELD(arg0, s32 *, 0x58), (f32) (s32) M2C_FIELD(arg0, f32 *, 0x14), (f32) (s32) M2C_FIELD(arg0, f32 *, 0x18));
}

void fn_80083E34(s32 arg0) {
    M2C_UNK fn_80081CF4(s32);
    M2C_UNK fn_80083278(s32);
    M2C_UNK fn_80083DC0();
    fn_80083DC0();
    fn_80083278(arg0);
    fn_80081CF4(arg0);
}

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
    extern void *lbl_803674E0;
    return M2C_FIELD(lbl_803674E0, u16 *, 0x32);
}

extern u16* lbl_803674E0;
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

#pragma inline
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

void fn_8008CD9C(void) {
    extern u16 lbl_803674F0;
    extern u16 lbl_803674F4;
    extern u8 lbl_8026CC88[];

    fn_8006EEFC(&lbl_803674F0, &lbl_8026CC88[0x5B]);
    fn_8006EEFC(&lbl_803674F4, &lbl_8026CC88[0x6C]);
}

void fn_8008CDE0(void *arg0, s32 arg1) {
    extern u16 lbl_8026CD08[];
    extern void *fn_8008CE28;
    
    if (arg0 != NULL) {
        *(s32*)((u8*)arg0 + 0x90) = arg1;
        fn_80060638();
        fn_800688D4(&lbl_8026CD08[0x1D], fn_8008CE28, 0x4000, lbl_8026CD08);
    }
}

void fn_8008CFB4(void **arg0) {
    M2C_UNK fn_8005AC24(M2C_UNK *, s32);
    extern M2C_UNK lbl_802F0308;
    s32 temp_cr0_eq;
    u8 var_r0;
    void *temp_r6;

    temp_r6 = *arg0;
    temp_cr0_eq = temp_r6 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            var_r0 = M2C_FIELD(temp_r6, u8 *, 0x15);
        } else {
            var_r0 = 0;
        }
        fn_8005AC24(&lbl_802F0308, var_r0 + 0x61);
    }
}

void fn_8008D7EC(void *arg0) {
    M2C_UNK fn_8000C188();
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) + M2C_FIELD(arg0, u8 *, 0x3C));
    if ((s8) M2C_FIELD(arg0, u8 *, 0x3A) == (s8) M2C_FIELD(arg0, u8 *, 0x3B)) {
        fn_8000C188();
    }
}

void fn_8008D834(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x3A) = 0x10;
    M2C_FIELD(arg0, s8 *, 0x3B) = 0;
    M2C_FIELD(arg0, s8 *, 0x3C) = -1;
}

void fn_8008D850(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x3A) = 0;
    M2C_FIELD(arg0, s8 *, 0x3B) = 0x10;
    M2C_FIELD(arg0, s8 *, 0x3C) = 1;
}

void fn_8008D86C(void *arg0) {
    extern M2C_UNK lbl_803674FC;
    *(&lbl_803674FC + (s8) M2C_FIELD(arg0, u8 *, 0x3D)) = 0;
}

s32 fn_8008D988(void) {
    extern u16 lbl_8026CD60[];
    s32 arg = 0x1C6;
    fn_8000BD98(&lbl_8026CD60[arg]);
    return 0;
}

void fn_8008DA60(void) {
    M2C_UNK fn_8008DA80();
    fn_8008DA80();
}

void fn_8008F49C(void) {
    M2C_UNK fn_8008F4BC();
    fn_8008F4BC();
}

void fn_8008FE24(void *arg0) {
    M2C_UNK fn_800C4588(s32);
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

extern f32 lbl_80369768;
extern u16 lbl_80289A60[];
void fn_800907B8(void *arg0) {
    s32 temp_r30;
    s32 var_r29;
    s32 var_r31;

    fn_8008BA80(0, 0, 1);
    fn_8008BBF8(0, 0x20, 0x108, 0x88, M2C_FIELD(M2C_FIELD(arg0, void **, 0x190), u8 *, 8), 0x9A);
    var_r31 = 0x2C;
    fn_8008CD64(lbl_80369768);
    var_r29 = 0;
    do {
        temp_r30 = fn_80037BBC(arg0, var_r29);
        fn_8008D510(temp_r30, fn_8001C0C8(), 0x1C, var_r31);
        var_r29 += 1;
        var_r31 += 0x1C;
    } while (var_r29 < 4);
}

void fn_800913D4(void **arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8000D864(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8000D910(void *, s32, M2C_UNK *);
    s32 fn_8001D070(void **, M2C_UNK);
    s32 fn_8001D2C8(void **);
    s32 fn_80105BC0(s32, M2C_UNK);
    M2C_UNK fn_801B79A0(M2C_UNK, s32, M2C_UNK);
    M2C_UNK fn_80231E74(M2C_UNK *, M2C_UNK, void *, s32, s32, s32);
    extern M2C_UNK lbl_8026CD60;
    M2C_UNK sp8;
    s32 temp_r31;
    u8 var_r30;
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r30 = *(u8 *)((uintptr_t)temp_r3 + 0x15);
    } else {
        var_r30 = 0;
    }
    temp_r31 = fn_8001D2C8(arg0);
    fn_80231E74(&sp8, 0x80, (void *)(((uintptr_t)&lbl_8026CD60) + 0x214), fn_8001D070(arg0, 0), temp_r31, var_r30 + 0x60);
    fn_8000D864(0, &sp8);
    fn_8000D910((void *)(((uintptr_t)&lbl_8026CD60) + 0x21F), fn_80105BC0(arg2 + 0x1BC, 1), &lbl_8026CD60);
    fn_801B79A0(0, arg1, 0);
}

void fn_8009149C(s32 arg0, s32 arg1) {
    extern u8 lbl_8026CD60[];
    
    u8 *ptr;
    s32 temp_r31 = arg1;
    
    ptr = (u8 *)&lbl_8026CD60 + 0x228;
    fn_80231E74(&ptr, 0x80, ptr, arg0);
    fn_8000D864(0, &ptr);
    fn_8000E0E4((u8 *)&lbl_8026CD60 + 0x22B);
    fn_801B79A0((u8 *)&lbl_8026CD60 + 0x1AC, temp_r31, 0);
}

void fn_80091518(void **arg0, s32 arg1, s32 arg2) {
    void fn_8000D864(s32, void *);
    void fn_8000D910(void *, s32, void *);
    s32 fn_8001D070(void **, s32);
    s32 fn_8001D2C8(void **);
    s32 fn_80105BC0(s32, s32);
    void fn_801B79A0(void *, s32, s32);
    void fn_80231E74(void *, s32, void *, s32, s32, s32);
    extern u8 lbl_8026CD60[];
    
    void *temp_r3;
    s32 temp_r31;
    u8 var_r30;
    
    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r30 = *(u8 *)((uintptr_t)temp_r3 + 0x15);
    } else {
        var_r30 = 0;
    }
    
    temp_r31 = fn_8001D2C8(arg0);
    fn_80231E74(&temp_r31, 0x80, lbl_8026CD60 + 0x214, fn_8001D070(arg0, 0), temp_r31, var_r30 + 0x60);
    fn_8000D864(0, &temp_r31);
    fn_8000D910(lbl_8026CD60 + 0x25A, fn_80105BC0(arg2 + 0x1BC, 1), lbl_8026CD60);
    fn_801B79A0(lbl_8026CD60 + 0x23E, arg1, 0);
}

void fn_800916B8(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r3;
    u8 var_r30;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r30 = *(u8 *)((char *)temp_r3 + 0x15);
    } else {
        var_r30 = 0;
    }
    
    fn_80231E74((void *)0x80, (void *)0, (u8 *)0x214, 
                fn_8001D070(arg0, 0), fn_8001D2C8(arg0), var_r30 + 0x60);
    
    fn_8000D864(0, (void *)0);
    
    fn_8000D910((void *)0x270, fn_80105BC0(arg2 + 0x1BC, 1), (void *)0);
    fn_801B79A0((void *)0x23E, arg1, 0);
}

void fn_80091788(void **arg0,s32 arg1,s32 arg2) {
 extern u8 lbl_8026CD60[];
 s32 fn_8001D2C8(void **); s32 fn_8001D070(void **,s32); void fn_80231E74(char *,s32,char *,s32,...);
 void fn_8000D864(s32,char *); s32 fn_80105BC0(s32,s32); void fn_8000D910(char *,s32,char *); void fn_801B79A0(char *,s32,s32);
 char sp8[0x80]; s32 result; u8 type; void *entry=*arg0;
 if(entry) type=*(u8 *)((u8 *)entry+0x15); else type=0;
 result=fn_8001D2C8(arg0);
 fn_80231E74(sp8,0x80,(char *)(lbl_8026CD60+0x214),fn_8001D070(arg0,0),result,type+0x60);
 fn_8000D864(0,sp8);
 fn_8000D910((char *)(lbl_8026CD60+0x27b),fn_80105BC0(arg2+0x1bc,1),(char *)lbl_8026CD60);
 fn_801B79A0((char *)(lbl_8026CD60+0x1ac),arg1,0);
}

void fn_80091858(void) {
    extern u32 lbl_803120A0[8];
    extern u32 lbl_80289A38[10];
    extern s32 lbl_803674F8;
    
    lbl_803674F8 = 0;
    lbl_803120A0[0] = 0;
    lbl_803120A0[1] = 0;
    lbl_803120A0[2] = 0;
    lbl_803120A0[3] = 0;
    lbl_803120A0[4] = 0;
    lbl_803120A0[5] = 0;
    lbl_803120A0[6] = 0;
    lbl_803120A0[7] = 0;
    
    fn_8000BF00(lbl_80289A38, lbl_803120A0);
}

void fn_8009197C(void) {
    extern u16 lbl_803120A0[];
    extern s32 lbl_803674F8;
    
    while (lbl_803674F8 != 0) {
        lbl_803674F8--;
        fn_8000C188(lbl_803120A0[lbl_803674F8]);
    }
}

void fn_800919D8(void) {
    M2C_UNK fn_8000C188(s32, s32);
    extern M2C_UNK lbl_803120A0;
    extern s32 lbl_803674F8;
    s32 temp_r4;

    if ((s32) lbl_803674F8 != 0) {
        temp_r4 = lbl_803674F8 - 1;
        lbl_803674F8 = temp_r4;
        fn_8000C188(*(&lbl_803120A0 + (temp_r4 * 4)), temp_r4);
    }
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

void fn_8009233C(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u32 temp_r4;
    s32 r31;
    
    r31 = arg1;
    temp_r3 = (arg0 & 0xFFFF);
    temp_r4 = ((r31 << 16) | temp_r3);
    *(u32*)(lbl_80330708 + 0x90) = temp_r4;
}

void fn_80092414(s32 arg0) {
    M2C_UNK fn_8001CBA0(s32);
    fn_8001CBA0(arg0 + 0x20C);
}

void fn_80092438(void *arg0) {
    if (*(u8*)((u8*)arg0 + 0x20C) == 0 && fn_80105BC0((u8*)arg0 + 0x1BC, 0x24) != 0) {
        *(u8*)((u8*)arg0 + 0x20C) = 1;
    }
    if (*(u8*)((u8*)arg0 + 0x20D) == 0 && fn_80105BC0((u8*)arg0 + 0x1BC, 0x25) != 0) {
        *(u8*)((u8*)arg0 + 0x20D) = 1;
    }
    if (*(u8*)((u8*)arg0 + 0x20E) == 0 && fn_80105BC0((u8*)arg0 + 0x1BC, 0x26) != 0) {
        *(u8*)((u8*)arg0 + 0x20E) = 1;
    }
    if (*(u8*)((u8*)arg0 + 0x20F) == 0 && fn_80105BC0((u8*)arg0 + 0x1BC, 0x27) != 0) {
        *(u8*)((u8*)arg0 + 0x20F) = 1;
    }
    if (*(u8*)((u8*)arg0 + 0x213) == 0 && fn_80105BC0((u8*)arg0 + 0x1BC, 0x28) != 0) {
        *(u8*)((u8*)arg0 + 0x213) = 1;
    }
}

u8 fn_80092F38(void *arg0) {
    u8 var_r4;

    var_r4 = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1EC) != 0U) {
        var_r4 = 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1F4) != 0U) {
        var_r4 = var_r4 + 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1FC) != 0U) {
        var_r4 = var_r4 + 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x204) != 0U) {
        var_r4 = var_r4 + 1;
    }

    return var_r4;
}

s32 fn_80093088(void *arg0) {
    s32 i = 0;
    for (;;) {
        if (*(u32 *)fn_80037BBC(arg0, i) != 0)
            break;
        i++;
        if (i == 4) {
            i = -1;
            break;
        }
    }
    if (i == 0) {
        if (*(u32 *)((u8 *)arg0 + 0x1ec) != 0)
            return 0;
        if (*(u32 *)((u8 *)arg0 + 0x1f4) != 0)
            return 1;
        if (*(u32 *)((u8 *)arg0 + 0x1fc) != 0)
            return 2;
        if (*(u32 *)((u8 *)arg0 + 0x204) != 0)
            return 3;
        return -1;
    }
    return -1;
}

void fn_80093154(s32 arg0, u8 arg1, s32 arg2) {
    M2C_UNK fn_8001C4FC(s32, s32);
    s32 r6;
    u32 r0;

    r6 = arg0;
    r0 = arg1;
    if (r0 < 4U) {
        r0 <<= 24;
        r0 >>= 29;
        r0 += 0x1CC;
        r0 += r6;
        fn_8001C4FC(r0, arg2);
        return;
    }
    r0 -= 4;
    r0 <<= 24;
    r0 >>= 29;
    r0 += 0x1EC;
    r0 += r6;
    fn_8001C4FC(r0, arg2);
}

void fn_800931B0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8001C4FC(s32, s32);
    fn_8001C4FC(arg0 + ((arg1 << 3) & 0x7F8) + 0x1EC, arg2);
}

void fn_800931E4(s32 arg0, s32 arg1, s32 arg2) {
    fn_8001C4FC(arg0 + ((arg1 << 3) & 0x7F8) + 0x1CC, arg2);
}

s32 fn_80093218(void *arg1) {
    s32 r4;
    s32 r6;

    r6 = *(s32 *)((u8 *)arg1 + 0x38);
    r4 = *(s32 *)((u8 *)arg1 + 0x3c);
    if ((r4 & 8) == 0) {
        return 0;
    }
    if ((r6 & 0x100) == 0) {
        return 0;
    }
    return 1;
}

s32 fn_80094614(void* arg0, void* arg1) {
    s32 r5;
    s32 r7;

    r7 = *(s32*)((char*)arg1 + 0x3C);
    r5 = *(s32*)((char*)arg1 + 0x38); 
    
    if ((r7 & 0x200) || (r5 & 0)) {
        return fn_80105BC0((s32)arg0 + 0x1BC, 9) != 0;
    }
    
    if (!(((u8)((char*)arg0)[0x1A5] >> 4U) & 7)) {
        return 1;
    }
    
    if ((r7 & 2) || (r5 & 0)) {
        return 0;
    }
    
    if ((r7 & 4) || (r5 & 0)) {
        return 0;
    }
    
    if ((r7 & 0x40) || (r5 & 0)) {
        return 1;
    }
    
    return 1;
}

void fn_800946F0(s32 arg0) {
    s32 r30;
    void *temp_r3;

    r30 = 0;
    do {
        temp_r3 = (void *)fn_80037BD0(arg0, r30);
        if ((temp_r3 != NULL) && (*(u32*)temp_r3 != 0U)) {
            *(u8*)((u8*)temp_r3 + 4) = *(u8*)((u8*)temp_r3 + 4) & ~0x40;
        }
        r30 += 1;
    } while (r30 < 8);
}

void fn_800949A4(s32 arg0, s8 arg1) {
    if (arg1 < 4) {
        fn_80037BBC();
        fn_8001D580(arg0);
        fn_800947E0(arg0);
        return;
    }
    fn_8001D580(arg0 + (((arg1 - 4) * 8) + 0x1EC));
    fn_800947E0(arg0);
}

s32 fn_80094A08(s32 arg0) {
    u8 fn_8001D684();
    M2C_UNK fn_80037BD0();
    M2C_UNK fn_800947E0(s32);
    fn_80037BD0();
    if (fn_8001D684() != 0) {
        fn_800947E0(arg0);
        return 1;
    }
    return 0;
}

s32 fn_80094A54(s32 arg0, s32 arg1)
{
  M2C_UNK fn_8001C5F8(M2C_UNK *, M2C_UNK);
  M2C_UNK fn_8001C76C(M2C_UNK *);
  M2C_UNK *new_var;
  M2C_UNK fn_8001D780(M2C_UNK *, s32);
  s32 fn_80094ABC(s32, M2C_UNK *);
  M2C_UNK sp8;
  short temp_r31;
  fn_8001C76C(&sp8);
  fn_8001D780(&sp8, arg1);
  new_var = &sp8;
  temp_r31 = fn_80094ABC(arg0, new_var);
  fn_8001C5F8(&sp8, -1);
  return temp_r31;
}

s32 fn_800955BC(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1EC) == 0U) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1F4) == 0U) {
        return 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1FC) == 0U) {
        return 2;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x204) == 0U) {
        return 3;
    }
    return -1;
}

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

extern u8 lbl_80289B00[16];
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

s32 fn_80096B80(void){extern u8 lbl_80330EAC[];void fn_800340E4(void*);s16 *idx=(s16*)(lbl_80330EAC+0x8a0);s16 saved=*idx;s32 result=0;fn_800340E4(idx);for(;;){u8 c=((u8*)idx)[4+*idx*4];if(c==0)break;if(c==0x52){result=1;break;}if(c>0x52)break;*idx=*idx+1;}*idx=saved;return result;}

u8 fn_800970C8(s16 arg0){extern u8 lbl_80330EAC[];s16 saved;u8 result=0xff,c;s16 *idx=(s16*)(lbl_80330EAC+0x8a0);saved=*idx;*idx=arg0;*idx=arg0+1;for(;;){s16 n=*idx;c=lbl_80330EAC[0x8a4+n*4];if(c==0x23)break;if(c<0x23){if(c==0)break;if(c<0x20)break;}else if(c<0x50){if(c>=0x25)break;}else if(c<0x53){result=c;break;}else break;*idx=n+1;}*idx=saved;return result;}

s32 fn_80097168(s16 arg0){extern u8 lbl_80330EAC[];s16 saved; s32 count=0; u8 c; s16 *idx=(s16*)(lbl_80330EAC+0x8a0);saved=*idx;*idx=arg0;*idx=arg0+1;for(;;){s16 n=*idx;c=lbl_80330EAC[0x8a4+n*4];if(c==0x23)break;if(c<0x23){if(c==0)break;if(c<0x20)break;}else if(c<0x50){if(c>=0x25)break;}else if(c<0x53)count++;else break;*idx=n+1;}*idx=saved;return count;}

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

s32 fn_80098170(void **arg0) {
    s32 fn_800A8A88(s32);
    void *temp_r3;
    void *var_r0;
    void *var_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, void **, 0x280);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r3 != NULL) {
            var_r3 = M2C_FIELD(temp_r3, void **, 0x280);
        } else {
            var_r3 = NULL;
        }
        return fn_800A8A88(M2C_FIELD(var_r3, s32 *, 0x188));
    }
    return 0;
}

u8 fn_800981D0(void **arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *var_r0;
    void *var_r3;

    temp_r3_2 = *arg0;
    if (temp_r3_2 != NULL) {
        var_r0 = M2C_FIELD(temp_r3_2, void **, 0x280);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r3_2 != NULL) {
            var_r3 = M2C_FIELD(temp_r3_2, void **, 0x280);
        } else {
            var_r3 = NULL;
        }
        return M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8);
    }
    temp_r3 = M2C_FIELD(temp_r3_2, void **, 0x190);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u8 *, 8);
}

void *fn_800984FC(void **arg0) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 == NULL) {
        return NULL;
    }
    if (*(int *)((char *)temp_r3 + 0x28C) == 0) {
        return NULL;
    }
    return (char *)temp_r3 + 0x28C;
}

void fn_80098524(void **arg0) {
    void *temp_r3;
    u32 var_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r3 = *(u32 *)((char *)temp_r3 + 0x280);
    } else {
        var_r3 = 0U;
    }
    if (var_r3 != 0U) {
        fn_8004BE88(0);
    }
}

void fn_80098A9C(s32 arg0) {
    extern u16 lbl_80330EAC[];
    extern u8 lbl_80289C54[];

    if (lbl_80330EAC[0x6D6] & 0x200)
    {
        fn_8019A7E8();
        return;
    }

    fn_8000CAA0(lbl_80289C54, arg0, lbl_80289C54);
}

void fn_80098AE4(void *arg0) {
    M2C_UNK fn_8004B1B4(s32);
    M2C_UNK fn_8009799C();
    M2C_UNK fn_8004FE98(s32, M2C_UNK);
    M2C_UNK fn_8005376C();
    M2C_UNK fn_800980D4(s32);
    s32 fn_800980E8(s32);
    u8 fn_80098568();
    register s32 var_r31;
    unsigned int temp_r3;

    fn_8005376C();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x40) == 0) {
        fn_8009799C();
        var_r31 = 0;
        do {
            temp_r3 = fn_800980E8(var_r31);
            if (temp_r3 != 0) {
                fn_800980D4(var_r31);
                if (fn_80098568() != 0) {
                    fn_8004B1B4(temp_r3);
                } else {
                    fn_8004FE98(temp_r3, 0);
                }
            }
            var_r31 += 1;
        } while (var_r31 < 3);
    }
}

void fn_80098B74(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
}

void fn_80098B80(void *arg0) {
    M2C_UNK fn_80095678();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_80095678();
    }
}

void fn_80098BAC(void *arg0) {
    M2C_UNK fn_800956A0();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_800956A0();
    }
}

void fn_80098BD8(void *arg0) {
    M2C_UNK fn_801B61CC();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_801B61CC();
    }
}

void fn_80098D04(s32 arg0) {
    M2C_UNK fn_8018CAD8(M2C_UNK, M2C_UNK, s32);
    fn_8018CAD8(0x64, 0x1E, arg0);
}

void fn_80098D30(void *arg0) {
    s32 temp_r31;
    s32 temp_r30;

    fn_80055204(*((s32**)arg0 + 0xE), 0);
    fn_8000D354();
    temp_r31 = fn_80098140();
    temp_r30 = fn_80098110();
    fn_8018CAD8(0x32, 0x1E, arg0);
    fn_8018CA68(temp_r31);
    fn_8018CA68(temp_r30);
}

void fn_80098E1C(s32 arg0) {
    s32 fn_800980E8(s32);
    void fn_80050BF4(s32);
    void fn_800980D4(s32);
    u8 fn_80098568(void);
    void fn_80183B24(s32, s32);
    
    register s32 var_r31;
    register s32 temp_r3;
    
    var_r31 = 0;
    do {
        temp_r3 = fn_800980E8(var_r31);
        if (temp_r3 != 0) {
            fn_80050BF4(0);
            fn_800980D4(var_r31);
            if (fn_80098568() != 0) {
                fn_80183B24(temp_r3, arg0);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 3);
}

void fn_80099BF8(void *arg0) {
    s32 temp_r26;
    s32 temp_r29;
    s32 var_r27;
    s32 arg0_0;

    temp_r29 = fn_800971F8(M2C_FIELD(arg0, s16 *, 0x46));
    arg0_0 = fn_80096EEC((s32 (*)[]) &arg0, temp_r29);
    var_r27 = 0;
loop_4:
    if (var_r27 < arg0_0) {
        temp_r26 = ((s32*)(&arg0))[arg0_0 - (var_r27 + 1)];
        if ((u32) (temp_r26 + 0xFFFC0000) != 0U) {
            *(s32*)((char*)arg0 + 0x60) = temp_r26;
        }
        var_r27 += 1;
        goto loop_4;
    }
    if (temp_r29 & 2) {
        fn_8000C070(arg0, 6);
    }
}

void fn_80099D2C(void *arg0) {
    M2C_UNK fn_800056A0(M2C_UNK);
    M2C_FIELD(arg0, u8 *, 0x42) = (u8) (M2C_FIELD(arg0, u8 *, 0x42) + 1);
    if ((s8) M2C_FIELD(arg0, u8 *, 0x42) >= 0xA) {
        fn_800056A0(0);
        fn_8000C070(arg0, 7);
        return;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x43) != 0) {
        fn_800056A0(0);
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x41) > 0) {
        fn_8000C070(arg0, 1);
        return;
    }
    fn_8000C070(arg0, 0);
}

void fn_80099DC4(s32 arg0) {
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    s32 fn_80096D64();
    s32 temp_r3;

    temp_r3 = fn_80096D64();
    switch (temp_r3) {                              /* irregular */
    case 0:
        fn_8000C070(arg0, 3);
        return;
    case 1:
        fn_8000C070(arg0, 2);
        return;
    case 2:
        fn_8000C070(arg0, 4);
        return;
    case 3:
        fn_8000C070(arg0, 5);
        return;
    }
}

void fn_80099E54(void *arg0) {
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    s32 fn_800970C8(s16);
    s8 fn_80097168(s16);
    s16 fn_80097740();
    s32 fn_8009809C();
    M2C_FIELD(arg0, s16 *, 0x46) = fn_80097740();
    M2C_FIELD(arg0, s32 *, 0x38) = fn_80098094();
    M2C_FIELD(arg0, s32 *, 0x3C) = fn_8009809C();
    M2C_FIELD(arg0, s8 *, 0x43) = 0;
    if (fn_800970C8(M2C_FIELD(arg0, s16 *, 0x46)) == 0) {
        fn_8000C070(arg0, 7);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x41) = fn_80097168(M2C_FIELD(arg0, s16 *, 0x46));
    M2C_FIELD(arg0, s8 *, 0x42) = 0;
}

void fn_80099ED0(void *arg0) {
    M2C_UNK fn_80096418(s16);
    fn_80096418(M2C_FIELD(arg0, s16 *, 0x46));
}

void fn_80099EF4(void *arg0) {
    M2C_UNK fn_8017E35C();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_8017E35C();
    }
}

extern void* fn_800980D4(s32 arg0);
extern void fn_8017E394(void* arg0, void* arg1, void* arg2, s32 arg3);
void fn_80099F20(void* arg0) {
    void* temp_r31;
    void* temp_r4;

    if ((u8)((char*)arg0 + 0x34) != 2) {
        temp_r31 = fn_800980D4(0);
        temp_r4 = fn_800980D4(1);
        if ((u8)((char*)arg0 + 0x34) != 1) {
            fn_8017E394(temp_r31, temp_r4, arg0, 0);
        } else {
            fn_8017E394(NULL, arg0, NULL, 0);
        }
    }
}

void fn_80099FAC(s32 arg0) {
    u32 fn_800980E8(M2C_UNK);
    M2C_UNK fn_80184A00(u32, u32, M2C_UNK, s32);
    M2C_UNK fn_80184C7C(u32, M2C_UNK, M2C_UNK, s32);
    u32 temp_r29;
    u32 temp_r30;
    u32 temp_r31;

    temp_r31 = fn_800980E8(0);
    temp_r30 = fn_800980E8(1);
    temp_r29 = fn_800980E8(2);
    fn_80184C7C(temp_r31, 8, 0x10, arg0);
    if (temp_r30 != 0U) {
        fn_80184A00(temp_r31, temp_r30, 0x18, arg0);
        fn_80184A00(temp_r30, temp_r31, 0x18, arg0);
        fn_80184C7C(temp_r30, 8, 0x10, arg0);
        if (temp_r29 != 0U) {
            fn_80184A00(temp_r29, temp_r30, 0x18, arg0);
            fn_80184C7C(temp_r29, 8, 0x10, arg0);
        }
    }
}

extern u8 lbl_80289EB8[16];
void fn_8009A514(void) {
    u32 temp_r3 = fn_8000C0C0(lbl_80289EB8);
    if (temp_r3 != 0) {
        fn_8000C070(temp_r3, 4);
    }
}

void fn_8009A5BC(void) {
    if (fn_8000C0C0(&lbl_80289EB8) != 0U) {
        fn_8000C070(1);
    }
}

void fn_8009A5F4(void) {
    fn_8000BF00(&lbl_80289EB8);
}

extern f32 lbl_803697E0;
extern f32 lbl_803697E4;
void fn_8009A648(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x3E) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_803697E0;
    M2C_FIELD(arg0, s8 *, 0x3D) = 0;
}

void fn_8009A660(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x3E) = (u8) M2C_FIELD(arg0, u8 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_803697E4;
    M2C_FIELD(arg0, u8 *, 0x3D) = (u8) M2C_FIELD(arg0, u8 *, 0x3F);
}

void fn_8009A864(void *arg0) {
    M2C_UNK fn_8006D8E8(u32);
    if (M2C_FIELD(arg0, u32 *, 0x38) != 0) {
        fn_8006D8E8(M2C_FIELD(arg0, u32 *, 0x38));
    }
}

void fn_8009A890(void *arg0) {
    M2C_UNK fn_80055C8C(void *, void *, void *);
    M2C_UNK fn_80059208(void *, void *);
    void fn_8009A934(void *);
    void fn_8009A970(void *);
    extern u8 lbl_8026D404[];

    M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x34) = 0.0f;
    M2C_FIELD(arg0, u8 *, 0x3D) = 0;
    M2C_FIELD(arg0, u8 *, 0x3F) = 0xC0;
    M2C_FIELD(arg0, u8 *, 0x40) = 0xA;
    M2C_FIELD(arg0, u8 *, 0x3E) = 0;
    M2C_FIELD(arg0, u8 *, 0x3C) = 0;
    M2C_FIELD(arg0, s16 *, 0x42) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s16 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    fn_80055C8C(lbl_8026D404 + 0xD8, fn_8009A934, arg0);
    fn_80059208(fn_8009A970, arg0);
}

void fn_8009A934(void *arg0) {
    s32 fn_8006D948(void *);
    extern u8 lbl_8026D404[];
    M2C_FIELD(arg0, s32 *, 0x38) = fn_8006D948(lbl_8026D404 + 0xD8);
}

void fn_8009E574(void) {
    extern u16 lbl_80312100[];
    lbl_80312100[0x62] = 0x1;
}

void fn_8009E588(void) {
    M2C_UNK fn_8006EB9C();
    M2C_UNK fn_8021F1B8(M2C_UNK *, M2C_UNK *);
    M2C_UNK spC;
    M2C_UNK sp8;

    fn_8006EB9C();
    fn_8021F1B8(&sp8, &spC);
}

void fn_8009E5B4(void) {
    extern u16 lbl_80312100[];
    
    lbl_80312100[0x62] = 0;
    fn_8006EB9C(lbl_80312100);
    fn_8021F1B8(&lbl_80312100[0x2D], &lbl_80312100[0x6E]);
}

void fn_8009E5F8(void) {
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0x24) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x28) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x2C) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x30) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x34) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x38) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x3C) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x40) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x64) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x68) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x6C) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x70) = 0;
}

void fn_8009E638(void) {
    extern u16 lbl_80312100[100];
    *(u16*)((u8*)lbl_80312100 + 0xe) = 0;
}

void fn_8009E64C(void) {
    s32 OSGetTick(M2C_UNK *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0x1C) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 0x1C));
}

void fn_8009E688(void) {
    extern u16 lbl_80312100;
    u32* ptr = (u32*)((char*)&lbl_80312100 + 0x1C);
    *ptr = OSGetTick();
}

void fn_8009E6B4(void) {
    s32 OSGetTick(M2C_UNK *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0x10) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 0x10));
}

void fn_8009E6F0(void) {
    extern u16 lbl_80312100;
    *(u32*)((char*)&lbl_80312100 + 0x10) = OSGetTick();
}

void fn_8009E71C(void) {
    s32 OSGetTick(M2C_UNK *);
    M2C_UNK fn_800070C8(void *, void *, void *, void *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0xC) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 0xC));
    fn_800070C8(&lbl_80312100 + 0xB8, &lbl_80312100 + 0xBC, &lbl_80312100 + 0xBE, &lbl_80312100 + 0xC0);
}

void fn_8009E774(void) {
    extern u16 lbl_80312100[];
    *(u32*)((char*)&lbl_80312100 + 0x1C) = OSGetTick();
}

void fn_8009E7A0(void) {
    s32 OSGetTick(M2C_UNK *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 8) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 8));
}

void fn_8009E7DC(void) {
    extern u16 lbl_80312100[100];
    s32 tick = OSGetTick();
    lbl_80312100[0] = (u16)tick;
}

void fn_8009E808(void) {
    s32 OSGetTick(M2C_UNK *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 4) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 4));
}

void fn_8009E844(void) {
    s32 OSGetTick();
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 4) = OSGetTick();
}

void fn_8009E9A0(void) {
    s32 OSGetTick();
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0x14) = (s32) (OSGetTick() - M2C_FIELD(&lbl_80312100, s32 *, 0));
}

void fn_8009EA14(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern s32 lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EA90(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern s32 lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EB7C(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EC38(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009ECF4(s32 arg0) {
    fn_801E32C4(&lbl_803682F0, arg0);
}

void fn_8009F000(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 0);
}

void fn_8009F02C(s32 arg0) {
    fn_801E323C(&lbl_803682F0, arg0);
}

void fn_8009F054(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_800A5C88();
    M2C_UNK fn_800A5CBC();
    extern void *lbl_80367240;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3) & 0x1000) {
        fn_800A5CBC();
        fn_8000C188(arg0);
        return;
    }
    if (fn_800A5C88() == 0) {
        fn_8000C188(arg0);
    }
}
extern f32 lbl_80369418;
extern f32 lbl_80369450;
extern f32 lbl_80369458;
extern f32 lbl_80369468;
extern f32 lbl_8036946C;
extern f32 lbl_80369470;
extern f32 lbl_80369478;
extern f32 lbl_8036947C;
extern void *lbl_80367488;
extern void *lbl_80367488;
extern u32 lbl_80312040[8];
extern u16 lbl_803674EC[0x32/2 + 1];
extern u16 lbl_803120C0[0x10];
extern u16 lbl_80312100[100];
#include "global.h"
#include "structs.h"

typedef struct {
    u32 unk0;
    u8 unk4;
    u8 unk5;
} SomeStruct;
extern u16 lbl_803120A0[8];
extern s32 lbl_803674F8;
extern u8 lbl_8026CD60[];
extern u16 lbl_80330EAC[0x8A4]; // 0x8A0 bytes plus space for some offset
#include "common.h"
#include "global.h"
extern u16 lbl_80289894[];
