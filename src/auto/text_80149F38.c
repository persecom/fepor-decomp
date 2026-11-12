// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80149F38(void) {
    extern u8 lbl_8032FF08[];
    void fn_8014A008(void);
    void fn_80149FE0(void);
    void fn_80149FB8(void);
    void fn_8022C260(void *, void *, s32, s32, s32);
    typedef struct {
        u8 a[0xC0];
        u8 b[0x1E0];
        u8 c[0x540];
    } T;
    T *t;

    t = (T *)lbl_8032FF08;
    fn_8022C260(t->a, (void *)fn_8014A008, 0, 0x30, 4);
    fn_8022C260(t->b, (void *)fn_80149FE0, 0, 0x30, 0xA);
    fn_8022C260(t->c, (void *)fn_80149FB8, 0, 0x30, 0x1C);
}
