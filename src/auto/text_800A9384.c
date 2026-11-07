// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
#include "common.h"

extern u16 lbl_8028CD0C[38];
extern u16 lbl_802845E8[64];
extern u16 lbl_80312AB0[8];
extern u16 lbl_8028459C[38];
extern u16 lbl_80286664[64];
extern u16 lbl_8028CDA4[38];
extern u16 lbl_8028CCC0[38];
extern u16 lbl_8028CC74[38];
extern u16 lbl_8028CC28[38];
extern u16 lbl_8028CBDC[38];
extern u16 lbl_8028CB90[38];
extern u16 lbl_8028CB44[38];
extern u16 lbl_8028C850[38];
extern u16 lbl_8028CA74[38];
extern u16 lbl_8028CA20[38];
extern u16 lbl_8028CAC8[38];
extern u16 lbl_8028C9A0[38];
extern u16 lbl_8028CD58[38];
extern u16 lbl_802863BC[];
extern struct {
    void *unk0;
    void *unk4;
    u8 unk8[8];
} lbl_80312AB0_obj;
extern u16 *lbl_803677C8;
extern u16 *lbl_803677D0;
extern u16 *lbl_803677D4;
extern u16 *lbl_803677D8;
extern u16 *lbl_803677DC;
extern u16 *lbl_803677E0;
extern u16 *lbl_803677E4;
extern u16 *lbl_803677E8;
extern u16 lbl_803677EC[2];
extern u16 *lbl_803677F4;
extern u16 *lbl_803677F8;
extern u16 lbl_80366E30;

extern u16 lbl_802863BC[];
#pragma use_lmw_stmw on
void fn_800A9384(void) {
    M2C_FIELD(lbl_80312AB0, u16 **, 4) = lbl_802845E8;
    lbl_803677C8 = lbl_8028459C;
    M2C_FIELD(lbl_80312AB0, u16 **, 4) = lbl_80286664;
    lbl_803677C8 = lbl_8028CDA4;
    M2C_FIELD(lbl_803677EC, u16 **, 4) = lbl_802845E8;
    M2C_FIELD(lbl_80312AB0, u16 **, 4) = lbl_802863BC;
    lbl_803677C8 = lbl_8028CD58;
    lbl_803677D0 = lbl_8028CD0C;
    lbl_803677D4 = lbl_8028CCC0;
    lbl_803677D8 = lbl_8028CC74;
    lbl_803677DC = lbl_8028CC28;
    lbl_803677E0 = lbl_8028CBDC;
    lbl_803677E4 = lbl_8028CB90;
    lbl_803677E8 = lbl_8028CB44;
    M2C_FIELD(lbl_803677EC, u16 **, 0) = lbl_8028C850;
    M2C_FIELD(lbl_803677EC, u16 **, 4) = lbl_8028CAC8;
    lbl_803677F4 = lbl_8028CA74;
    lbl_803677F8 = lbl_8028CA20;
    M2C_FIELD(lbl_80312AB0, u16 **, 0) = &lbl_80366E30;
    M2C_FIELD(lbl_80312AB0, u16 **, 4) = lbl_8028C9A0;
}
#pragma use_lmw_stmw reset
