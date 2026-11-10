// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802841DC[];

/* inlined constructor: base vtable first, then the object's own */
static inline void fn_80019558_ctor(void *obj, void *vtbl) {
    M2C_FIELD(obj, void **, 0x74) = lbl_802841DC;
    M2C_FIELD(obj, void **, 0x74) = vtbl;
}

void fn_80019558(void) {
    extern u8 lbl_802841DC[];
    extern u8 lbl_802841F4[];
    extern u8 lbl_8028420C[];
    extern u8 lbl_80284224[];
    extern u8 lbl_8028423C[];
    extern u8 lbl_802CA2C8[];
    u8 *p0 = lbl_802CA2C8 + 0x0;
    u8 *p1 = lbl_802CA2C8 + 0x78;
    u8 *p2 = lbl_802CA2C8 + 0xF0;
    u8 *p3 = lbl_802CA2C8 + 0x16C;

    M2C_FIELD(p0, void **, 0x74) = lbl_802841DC;
    M2C_FIELD(p1, void **, 0x74) = lbl_802841DC;
    M2C_FIELD(p2, void **, 0x74) = lbl_802841DC;
    M2C_FIELD(p3, void **, 0x74) = lbl_802841DC;
    M2C_FIELD(p0, void **, 0x74) = lbl_8028423C;
    M2C_FIELD(p1, void **, 0x74) = lbl_80284224;
    M2C_FIELD(p2, void **, 0x74) = lbl_8028420C;
    M2C_FIELD(p3, void **, 0x74) = lbl_802841F4;
}
