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
    extern u8 lbl_802841F4[];
    extern u8 lbl_8028420C[];
    extern u8 lbl_80284224[];
    extern u8 lbl_8028423C[];
    extern struct {
        u8 obj0[0x78];
        u8 obj1[0x78];
        u8 obj2[0x7C];
        u8 obj3[0x78];
    } lbl_802CA2C8;

    fn_80019558_ctor(&lbl_802CA2C8.obj0, lbl_8028423C);
    fn_80019558_ctor(&lbl_802CA2C8.obj1, lbl_80284224);
    fn_80019558_ctor(&lbl_802CA2C8.obj2, lbl_8028420C);
    fn_80019558_ctor(&lbl_802CA2C8.obj3, lbl_802841F4);
}
