// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80149F38(void) {
    extern u16 lbl_8032FF08[96]; // 192 bytes = 96 u16
    extern void fn_8014A008(void);
    extern void fn_80149FE0(void);
    extern void fn_80149FB8(void);
    void fn_8022C260(void *, void *, s32, s32, s32);
    
    // First call
    u32 addr1 = (u32)lbl_8032FF08;
    fn_8022C260((void *)addr1, &fn_8014A008, 0, 0x30, 4);
    
    // Second call
    addr1 += 0xC0;
    fn_8022C260((void *)addr1, &fn_80149FE0, 0, 0x30, 0xA);
    
    // Third call  
    addr1 += 0x1E0; // 0x2A0 - 0xC0
    fn_8022C260((void *)addr1, &fn_80149FB8, 0, 0x30, 0x1C);
}
