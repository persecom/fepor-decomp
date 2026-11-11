// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct Pair { u8 *lo; u8 *hi; } Pair;
typedef struct InitTable { u8 first[0x20]; u8 second[0x68]; u8 third[0x18]; } InitTable;

#pragma use_lmw_stmw on
#pragma optimization_level 2
#pragma global_optimizer off
void fn_8014A25C(void) {
    extern u8 lbl_802845E8[];
    extern u8 lbl_80292914[];
    extern u8 lbl_80292990[];
    extern u8 lbl_802929DC[];
    extern u8 lbl_80292A28[];
    extern u8 lbl_80292A74[];
    extern u8 lbl_80292AC0[];
    extern u8 lbl_80292B0C[];
    extern u8 lbl_80292B88[];
    extern u8 lbl_80292BD4[];
    extern u8 lbl_80292C6C[];
    extern u8 lbl_80292CCC[];
    extern u8 lbl_80292D2C[];
    extern u8 lbl_80292D8C[];
    extern u8 lbl_80292DEC[];
    extern u8 lbl_80292E4C[];
    extern u8 lbl_80292F0C[];
    extern InitTable lbl_80292808;
    extern u8 *lbl_80367B18;
    extern u8 *lbl_80367B1C;
    extern u8 *lbl_80367B20;
    extern u8 *lbl_80367B24;
    extern u8 *lbl_80367B28;
    extern u8 *lbl_80367B2C;
    extern u8 *lbl_80367B30;
    extern Pair lbl_80367B34;
    extern u8 *lbl_80367B3C;
    extern u8 *lbl_80367B40;
    extern Pair lbl_80367B44;
    extern u8 *lbl_80367B4C;
    extern u8 *lbl_80367B50;
    extern u8 *lbl_80367B54;
    extern u8 *lbl_80367B58;
    extern u8 *lbl_80367B5C;
    extern Pair lbl_80367B60;
    u8 *common;
    InitTable *base;
    Pair *r44;
    Pair *r60;
    u8 *pF0C;
    u8 *pBD4;
    u8 *pB88;
    u8 *pB0C;
    u8 *pAC0;
    u8 *pA74;
    u8 *pA28;
    u8 *p9DC;
    u8 *p990;
    u8 *pE4C;
    u8 *pDEC;
    u8 *pD8C;
    u8 *pD2C;
    u8 *pCCC;
    u8 *pC6C;
    u8 *base0;
    u8 *base20;
    u8 *base88;
    u8 *p914;
    Pair *r34;

    common = lbl_802845E8;
    base = &lbl_80292808;
    r44 = &lbl_80367B44;
    r60 = &lbl_80367B60;
    pF0C = lbl_80292F0C;
    pBD4 = lbl_80292BD4;
    pB88 = lbl_80292B88;
    pB0C = lbl_80292B0C;
    pAC0 = lbl_80292AC0;
    pA74 = lbl_80292A74;
    pA28 = lbl_80292A28;
    p9DC = lbl_802929DC;
    p990 = lbl_80292990;
    pE4C = lbl_80292E4C;
    pDEC = lbl_80292DEC;
    pD8C = lbl_80292D8C;
    pD2C = lbl_80292D2C;
    pCCC = lbl_80292CCC;
    pC6C = lbl_80292C6C;
    base0 = base->first;
    base20 = base->second;
    base88 = base->third;
    p914 = lbl_80292914;
    r34 = &lbl_80367B34;
    r44->hi = common;
    r60->hi = common;
    lbl_80367B18 = pF0C;
    lbl_80367B1C = pE4C;
    lbl_80367B20 = pDEC;
    lbl_80367B24 = pD8C;
    lbl_80367B28 = pD2C;
    lbl_80367B2C = pCCC;
    lbl_80367B30 = pC6C;
    r34->hi = common;
    lbl_80367B34.lo = base0;
    lbl_80367B3C = pBD4;
    lbl_80367B40 = pB88;
    lbl_80367B44.lo = base20;
    r44->hi = pB0C;
    lbl_80367B4C = pAC0;
    lbl_80367B50 = pA74;
    lbl_80367B54 = pA28;
    lbl_80367B58 = p9DC;
    lbl_80367B5C = p990;
    lbl_80367B60.lo = base88;
    r60->hi = p914;
}
