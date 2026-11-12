// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80072408(void)
{
    void fn_8022C260(void *, void (*)(M2C_UNK **), void *, s32, u32);
    void fn_800725C8(M2C_UNK **);

    extern u8 lbl_8026BB84[];
    extern u8 lbl_8028459C[];
    extern u8 lbl_802845E8[];
    extern u8 lbl_80285FE8[];
    extern u8 lbl_802866E4[];
    extern u8 lbl_80286764[];
    extern u8 lbl_802867B8[];
    extern u8 lbl_8028680C[];
    extern u8 lbl_80311CA8[];
    extern M2C_UNK lbl_80367350;
    extern M2C_UNK lbl_80367358;

    u8 *base;
    u8 *data;
    u8 *p38;
    u8 *p10;
    u8 *p24;
    u8 *p6C;
    u8 *p80;
    u8 *p94;

    u8 *p67C;
    u8 *p628;
    u8 *p3D4;
    u8 *p2FC;
    u8 *p1FC;
    u8 *p27C;
    u8 *p17C;
    u8 *pFC;
    u8 *p7C;

    base = lbl_80311CA8;
    data = lbl_80285FE8;

    p38 = base + 0x38;
    p10 = base + 0x10;
    p24 = base + 0x24;

    p67C = data + 0x67C;
    p628 = data + 0x628;
    p3D4 = data + 0x3D4;
    p2FC = data + 0x2FC;
    p1FC = data + 0x1FC;
    p27C = data + 0x27C;
    p17C = data + 0x17C;

    M2C_FIELD(p38, void **, 4) = lbl_802845E8;
    M2C_FIELD(p10, void **, 4) = lbl_802845E8;

    M2C_FIELD(&lbl_80367350, void **, 0) = lbl_8028459C;
    M2C_FIELD(&lbl_80367358, void **, 0) = lbl_8028459C;

    M2C_FIELD(p24, void **, 4) = lbl_802845E8;
    M2C_FIELD(base, void **, 4) = lbl_802845E8;

    M2C_FIELD(p38, void **, 4) = p67C;
    M2C_FIELD(&lbl_80367350, void **, 0) = p628;
    M2C_FIELD(&lbl_80367358, void **, 0) = p628;

    M2C_FIELD(p10, void **, 4) = p67C;
    M2C_FIELD(p24, void **, 4) = p67C;

    M2C_FIELD(p38, void **, 4) = p3D4;
    M2C_FIELD(&lbl_80367350, void **, 0) = p2FC;
    M2C_FIELD(&lbl_80367358, void **, 0) = p2FC;

    M2C_FIELD(base, void **, 4) = p67C;
    M2C_FIELD(p10, void **, 4) = p3D4;
    M2C_FIELD(p24, void **, 4) = p3D4;

    M2C_FIELD(p38, void **, 4) = lbl_802866E4;
    M2C_FIELD(&lbl_80367350, void **, 0) = lbl_8028680C;
    M2C_FIELD(&lbl_80367358, void **, 0) = lbl_8028680C;

    M2C_FIELD(base, void **, 4) = p3D4;
    M2C_FIELD(p10, void **, 4) = lbl_802866E4;
    M2C_FIELD(p24, void **, 4) = lbl_802866E4;

    M2C_FIELD(p38, void **, 4) = p1FC;

    M2C_FIELD(&lbl_80367350, void **, 4) = lbl_8026BB84 + 0xED;
    M2C_FIELD(&lbl_80367350, void **, 0) = lbl_802867B8;

    M2C_FIELD(&lbl_80367358, void **, 4) = lbl_8026BB84 + 0xF5;
    M2C_FIELD(&lbl_80367358, void **, 0) = lbl_80286764;

    M2C_FIELD(base, void **, 0) = data;
    M2C_FIELD(base, void **, 4) = lbl_802866E4;
    M2C_FIELD(base, void **, 0x10) = data;

    M2C_FIELD(p10, void **, 4) = p27C;

    M2C_FIELD(base, void **, 0x24) = data;
    M2C_FIELD(p24, void **, 4) = p1FC;

    M2C_FIELD(base, void **, 0x38) = data;
    M2C_FIELD(p38, void **, 4) = p17C;

    fn_8022C260(
        base + 0x4C,
        fn_800725C8,
        0,
        8,
        4
    );

    p6C = base + 0x6C;
    p80 = base + 0x80;
    p94 = base + 0x94;

    M2C_FIELD(p94, void **, 4) = lbl_802845E8;
    M2C_FIELD(p80, void **, 4) = lbl_802845E8;

    pFC = data + 0xFC;
    p7C = data + 0x7C;

    M2C_FIELD(p94, void **, 4) = p67C;
    M2C_FIELD(p80, void **, 4) = p67C;

    M2C_FIELD(p94, void **, 4) = p3D4;
    M2C_FIELD(p80, void **, 4) = p3D4;

    M2C_FIELD(p94, void **, 4) = pFC;
    M2C_FIELD(base, void **, 0x80) = p6C;
    M2C_FIELD(p80, void **, 4) = pFC;

    M2C_FIELD(p80, s16 *, 0xE) = 0;
    M2C_FIELD(p80, s16 *, 0x10) = 0x46;

    M2C_FIELD(base, void **, 0x94) = p6C;

    M2C_FIELD(p94, s16 *, 0xE) = 0;
    M2C_FIELD(p94, s16 *, 0x10) = 0x46;

    M2C_FIELD(p94, void **, 4) = p7C;
}
