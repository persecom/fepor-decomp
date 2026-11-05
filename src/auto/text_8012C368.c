// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8012C368(void) {
    extern M2C_UNK lbl_802845E8;
    extern M2C_UNK lbl_80286664;
    extern M2C_UNK lbl_80290C30;
    extern M2C_UNK lbl_80290CB4;
    extern M2C_UNK lbl_80290D34;
    extern M2C_UNK lbl_80290D88;
    extern M2C_UNK lbl_80290DDC;
    extern M2C_UNK lbl_80290E30;
    extern M2C_UNK *lbl_80367A8C;
    extern M2C_UNK *lbl_80367A90;
    extern M2C_UNK *lbl_80367A94;
    extern M2C_UNK *lbl_80367A98;
    extern M2C_UNK lbl_80367A9C;
    M2C_FIELD(&lbl_80367A9C, M2C_UNK **, 4) = &lbl_802845E8;
    M2C_FIELD(&lbl_80367A9C, M2C_UNK **, 4) = &lbl_80286664;
    lbl_80367A8C = &lbl_80290E30;
    lbl_80367A90 = &lbl_80290DDC;
    lbl_80367A94 = &lbl_80290D88;
    lbl_80367A98 = &lbl_80290D34;
    M2C_FIELD(&lbl_80367A9C, M2C_UNK **, 0) = &lbl_80290C30;
    M2C_FIELD(&lbl_80367A9C, M2C_UNK **, 4) = &lbl_80290CB4;
}
