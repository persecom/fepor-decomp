// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#pragma use_lmw_stmw on
void fn_801035C8(void) {
    struct Entry {
        void *ptr;
        s32 id;
    };
    struct ObjB4 {
        void *f0;
        void *f4;
    };

    extern u8 lbl_8028459C[76];
    extern u8 lbl_802845E8[128];
    extern u8 lbl_8028EB7C[76];
    extern u8 lbl_8028EB9C[76];
    extern u8 lbl_8028EBF0[76];
    extern u8 lbl_8028EC6C[76];
    extern u8 lbl_8028ECB8[76];
    extern u8 lbl_8028EE7C[76];
    extern u8 lbl_8028EEC8[76];
    extern u8 lbl_8028EF14[76];
    extern u8 lbl_8028EF60[76];
    extern u8 lbl_8028EFAC[76];
    extern u8 lbl_8028EFF8[76];
    extern u8 lbl_8028F044[76];
    extern u8 lbl_8028F090[76];
    extern u8 lbl_8028F0DC[76];
    extern u8 lbl_8028F128[76];
    extern u8 lbl_8028F174[76];
    extern u8 lbl_8028F1C0[80];

    extern void *lbl_80367920;
    extern void *lbl_80367924;
    extern void *lbl_80367928;
    extern void *lbl_80367988;
    extern void *lbl_8036798C;
    extern void *lbl_80367990;
    extern void *lbl_80367994;
    extern void *lbl_80367998;
    extern void *lbl_8036799C;
    extern void *lbl_803679A0;
    extern void *lbl_803679A4;
    extern void *lbl_803679A8;
    extern void *lbl_803679AC;
    extern void *lbl_803679BC;

    extern struct Entry lbl_8036792C;
    extern struct Entry lbl_80367934;
    extern struct Entry lbl_8036793C;
    extern struct Entry lbl_80367944;
    extern struct Entry lbl_8036794C;
    extern struct Entry lbl_80367954;
    extern struct Entry lbl_8036795C;
    extern struct ObjB4 lbl_803679B4;

    struct Entry *e[4];
    void *p1;
    void *p2;

    e[0] = &lbl_8036792C;
    e[1] = &lbl_80367934;
    e[2] = &lbl_8036793C;
    e[3] = &lbl_80367944;

    p1 = lbl_8028459C;
    p2 = lbl_8028F0DC;

    e[0]->ptr = p1;
    e[1]->ptr = p1;
    e[2]->ptr = p1;
    e[3]->ptr = p1;
    lbl_8036794C.ptr = p1;
    lbl_80367954.ptr = p1;
    lbl_8036795C.ptr = p1;

    lbl_803679B4.f4 = lbl_802845E8;
    lbl_80367920 = lbl_8028F1C0;

    lbl_8036794C.id = 4;
    lbl_80367954.id = 5;

    e[0]->ptr = p2;
    e[1]->ptr = p2;
    e[2]->ptr = p2;
    e[3]->ptr = p2;
    lbl_8036794C.ptr = p2;
    lbl_80367954.ptr = p2;
    lbl_8036795C.ptr = p2;

    lbl_80367924 = lbl_8028F174;
    lbl_80367928 = lbl_8028F128;

    e[0]->id = 0;
    e[1]->id = 1;
    e[2]->id = 2;
    e[3]->id = 3;
    lbl_8036795C.id = 6;

    lbl_80367988 = lbl_8028F090;
    lbl_8036798C = lbl_8028F044;
    lbl_80367990 = lbl_8028EFF8;
    lbl_80367994 = lbl_8028EFAC;
    lbl_80367998 = lbl_8028EF60;
    lbl_8036799C = lbl_8028EF14;
    lbl_803679A0 = lbl_8028EEC8;
    lbl_803679A4 = lbl_8028EE7C;
    lbl_803679A8 = lbl_8028ECB8;
    lbl_803679AC = lbl_8028EC6C;
    lbl_803679B4.f0 = lbl_8028EB7C;
    lbl_803679B4.f4 = lbl_8028EBF0;
    lbl_803679BC = lbl_8028EB9C;
}
#pragma use_lmw_stmw reset
