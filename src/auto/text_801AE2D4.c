// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801AE2D4(void) {
    extern u8 lbl_80331C38[40];
    
    // Based on the target assembly, this function sets up registers with specific values,
    // then performs a series of store operations to initialize a 40-byte array
    
    // Set register values as per the target assembly
    u8 r3 = 0xd2;
    u8 r4 = 0x8c;
    u8 r5 = 0xb4;
    u8 r6 = 0x6e;
    u8 r7 = 0xa0;
    u8 r8 = 0x6e;
    u8 r9 = 0x96;
    u8 r10 = 0x5a;
    u8 r11 = 0x60;
    u8 r12 = 0x80;
    u8 r27 = 0xff;
    u8 r31 = 0xaa;
    
    // Direct memory initialization without using stack frame
    lbl_80331C38[0x28] = r12;
    lbl_80331C38[0x29] = r12;
    lbl_80331C38[0x2A] = r12;
    lbl_80331C38[0x2B] = r27;
    
    lbl_80331C38[0x24] = r11;
    lbl_80331C38[0x25] = r11;
    lbl_80331C38[0x26] = r11;
    lbl_80331C38[0x27] = r27;
    
    lbl_80331C38[0x20] = r31;
    lbl_80331C38[0x21] = r31;
    lbl_80331C38[0x22] = r31;
    lbl_80331C38[0x23] = r27;
    
    lbl_80331C38[0x1C] = r5;
    lbl_80331C38[0x1D] = r9;
    lbl_80331C38[0x1E] = r10;
    lbl_80331C38[0x1F] = r27;
    
    lbl_80331C38[0x18] = r6;
    lbl_80331C38[0x19] = r7;
    lbl_80331C38[0x1A] = r10;
    lbl_80331C38[0x1B] = r27;
    
    lbl_80331C38[0x14] = r6;
    lbl_80331C38[0x15] = r4;
    lbl_80331C38[0x16] = r5;
    lbl_80331C38[0x17] = r27;
    
    lbl_80331C38[0x10] = r9;
    lbl_80331C38[0x11] = r10;
    lbl_80331C38[0x12] = r7;
    lbl_80331C38[0x13] = r27;
    
    lbl_80331C38[0xC] = r31;
    lbl_80331C38[0xD] = r10;
    lbl_80331C38[0xE] = 0x50;
    lbl_80331C38[0xF] = r27;
    
    lbl_80331C38[0x8] = r3;
    lbl_80331C38[0x9] = r6;
    lbl_80331C38[0xA] = r9;
    lbl_80331C38[0xB] = r27;
}
