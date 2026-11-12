// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
extern u8 lbl_80283948[68];
extern u8 lbl_80283EFC[68];
extern u8 lbl_802AEE34[12];
extern u8 lbl_80367160[8];

void fn_80011968(void) {
    void fn_800119E0(void);
    void __register_global_object(void *, void (*)(void), void *);

    *(void **)lbl_80367160 = lbl_80283948;
    *(s32 *)(lbl_80367160 + 4) = 0;
    *(void **)lbl_80367160 = lbl_80283EFC;
    __register_global_object(lbl_80367160, fn_800119E0, lbl_802AEE34);
}
