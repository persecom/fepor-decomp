// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8014E350(void) {
    extern M2C_UNK lbl_802845E8;
    extern M2C_UNK lbl_80293780;
    extern M2C_UNK lbl_80293890;
    extern M2C_UNK lbl_8029390C;
    extern M2C_UNK lbl_80293958;
    extern M2C_UNK lbl_802939A4;
    extern M2C_UNK *lbl_80367B88;
    extern M2C_UNK *lbl_80367B8C;
    extern M2C_UNK *lbl_80367B90;
    extern M2C_UNK lbl_80367B94;
    M2C_FIELD(&lbl_80367B94, M2C_UNK **, 4) = &lbl_802845E8;
    lbl_80367B88 = &lbl_802939A4;
    lbl_80367B8C = &lbl_80293958;
    lbl_80367B90 = &lbl_8029390C;
    M2C_FIELD(&lbl_80367B94, M2C_UNK **, 0) = &lbl_80293780;
    M2C_FIELD(&lbl_80367B94, M2C_UNK **, 4) = &lbl_80293890;
}
