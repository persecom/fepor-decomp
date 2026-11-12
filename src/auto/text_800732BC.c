// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#pragma no_register_save_helpers on
#pragma use_lmw_stmw on
void fn_800732BC(void) {
#pragma no_register_save_helpers on
#pragma use_lmw_stmw on

    extern M2C_UNK lbl_802845E8[16];
    extern M2C_UNK lbl_80286590[16];
    extern M2C_UNK lbl_80286664[16];
    extern M2C_UNK lbl_80286F40[16];
    extern M2C_UNK lbl_80286F58[16];
    extern M2C_UNK lbl_80286F70[16];
    extern M2C_UNK lbl_80286FC4[16];
    extern M2C_UNK lbl_80287018[16];
    extern M2C_UNK lbl_8028706C[16];
    extern M2C_UNK lbl_802870C0[16];
    extern M2C_UNK lbl_80287114[16];
    extern M2C_UNK lbl_80287168[16];
    extern M2C_UNK lbl_802871BC[16];

    extern M2C_UNK lbl_80366DF0;
    extern M2C_UNK *lbl_80367360;
    extern M2C_UNK *lbl_80367364;
    extern M2C_UNK *lbl_80367368;
    extern M2C_UNK *lbl_8036736C;
    extern M2C_UNK *lbl_80367370;
    extern M2C_UNK *lbl_80367374;
    extern M2C_UNK *lbl_80367378;
    extern M2C_UNK lbl_8036737C;
    extern M2C_UNK *lbl_80367384;
    extern M2C_UNK lbl_80367388;
    extern M2C_UNK lbl_80367390;

    M2C_FIELD(&lbl_8036737C, M2C_UNK **, 4) = lbl_802845E8;
    M2C_FIELD(&lbl_80367388, M2C_UNK **, 4) = lbl_802845E8;
    M2C_FIELD(&lbl_80367390, M2C_UNK **, 4) = lbl_802845E8;

    M2C_FIELD(&lbl_8036737C, M2C_UNK **, 4) = lbl_80286664;
    M2C_FIELD(&lbl_80367388, M2C_UNK **, 4) = lbl_80286664;

    lbl_80367360 = lbl_802871BC;
    lbl_80367364 = lbl_80287168;
    lbl_80367368 = lbl_80287114;
    lbl_8036736C = lbl_802870C0;
    lbl_80367370 = lbl_8028706C;
    lbl_80367374 = lbl_80287018;
    lbl_80367378 = lbl_80286FC4;

    M2C_FIELD(&lbl_8036737C, M2C_UNK **, 0) = lbl_80286F40;
    M2C_FIELD(&lbl_8036737C, M2C_UNK **, 4) = lbl_80286590;

    lbl_80367384 = lbl_80286F70;

    M2C_FIELD(&lbl_80367388, M2C_UNK **, 0) = &lbl_80366DF0;
    M2C_FIELD(&lbl_80367388, M2C_UNK **, 4) = lbl_80286590;

    M2C_FIELD(&lbl_80367390, M2C_UNK **, 0) = lbl_80286F58;
    M2C_FIELD(&lbl_80367390, M2C_UNK **, 4) = lbl_80286664;
}
