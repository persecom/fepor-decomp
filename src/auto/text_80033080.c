// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
#include "common.h"
extern u8 lbl_80285050[];
extern u8 lbl_802EFCB8[];
extern u8 lbl_80285424[];
extern u8 lbl_80285458[];
extern u8 lbl_80367278;
void fn_8001C5F8(void);

void fn_80033080(void) {
    void *fn_8001C76C(void *);
    void __register_global_object(void *, void (*)(void), void *);
    u8 *base;
    u8 *obj;
    void *vt50;
    void *vt58;
    void *vt24;

    base = lbl_802EFCB8;
    obj = base + 0xc;
    vt50 = lbl_80285050;
    vt24 = lbl_80285424;
    vt58 = lbl_80285458;
    *(void **)(obj + 4) = vt50;
    *(void **)(base + 4) = vt50;
    *(void **)(obj + 4) = vt58;
    *(void **)(base + 4) = vt58;
    *(void **)(obj + 4) = vt24;
    __register_global_object(fn_8001C76C(&lbl_80367278), fn_8001C5F8, base + 0xdc);
}
