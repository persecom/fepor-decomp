// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8005ADE4(void) {
    extern u8 lbl_80285C18[];
    extern u8 lbl_802F0308[];
    extern u8 lbl_80285CCC[];
    extern u8 lbl_802F0350[];
    extern u8 lbl_80285C84[];
    void *a = lbl_80285C18;
    void *b = lbl_802F0308;
    void *c = lbl_80285CCC;
    void *d = lbl_802F0350;
    void *e = lbl_80285C84;

    *(void **)((u8 *)b + 0x44) = a;
    *(void **)((u8 *)d + 0x44) = a;
    *(void **)((u8 *)b + 0x44) = c;
    *(void **)((u8 *)d + 0x44) = e;
}
