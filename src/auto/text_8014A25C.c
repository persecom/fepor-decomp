// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct Pair { u8 *lo; u8 *hi; } Pair;
typedef struct InitTable { u8 first[0x20]; u8 second[0x68]; u8 third[0x18]; } InitTable;

#pragma use_lmw_stmw on
void fn_8014A25C(void) {
    typedef struct Pair { u8 *lo; u8 *hi; } Pair;
    extern u8 lbl_802845E8[];
    extern u8 lbl_80292808[];
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
    Pair *r44;
    Pair *r60;
    Pair *r34;

    r44 = &lbl_80367B44;
    r60 = &lbl_80367B60;
    r44->hi = lbl_802845E8;
    r60->hi = lbl_802845E8;
    lbl_80367B18 = lbl_80292F0C;
    lbl_80367B1C = lbl_80292E4C;
    lbl_80367B20 = lbl_80292DEC;
    lbl_80367B24 = lbl_80292D8C;
    lbl_80367B28 = lbl_80292D2C;
    lbl_80367B2C = lbl_80292CCC;
    lbl_80367B30 = lbl_80292C6C;
    r34 = &lbl_80367B34;
    r34->hi = lbl_802845E8;
    lbl_80367B34.lo = lbl_80292808;
    lbl_80367B3C = lbl_80292BD4;
    lbl_80367B40 = lbl_80292B88;
    lbl_80367B44.lo = lbl_80292808 + 0x20;
    r44->hi = lbl_80292B0C;
    lbl_80367B4C = lbl_80292AC0;
    lbl_80367B50 = lbl_80292A74;
    lbl_80367B54 = lbl_80292A28;
    lbl_80367B58 = lbl_802929DC;
    lbl_80367B5C = lbl_80292990;
    lbl_80367B60.lo = lbl_80292808 + 0x88;
    r60->hi = lbl_80292914;
}
