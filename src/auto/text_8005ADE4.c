// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8005ADE4(void)
{
  extern u8 lbl_80285C18[];
  extern u8 lbl_802F0308[];
  extern u8 lbl_802F0350[];
  extern u8 lbl_80285CCC[];
  extern u8 lbl_80285C84[];
  *((void **) (lbl_802F0308 + 0x44)) = lbl_80285C18;
  *((void **) (lbl_802F0308 + 0x44)) = lbl_80285CCC;
  *((void **) (lbl_802F0350 + 0x44)) = lbl_80285C18;
  *((void **) (lbl_802F0350 + 0x44)) = lbl_80285C84;
}
