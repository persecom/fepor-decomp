// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8001EE58(void)
{
    void fn_800C3220(void *, s32);
    void fn_8001C5F8(void);
    extern u8 lbl_80367218;
    extern u8 lbl_803206EC[];
    extern u8 lbl_802CA4B0[];

    typedef struct {
        u8 pad : 1;
        u8 flag : 1;
        u8 rest : 6;
    } Bit6;
    Bit6 *bf;
    s32 mask;

    bf = (Bit6 *)((u8 *)&lbl_80367218 + 5);
    bf->rest = 0;
    *(s32 *)&lbl_80367218 = 0;
    *((u8 *)&lbl_80367218 + 4) = 0;
    bf->pad = 0;
    bf->flag = 0;
    mask = *((u8 *)&lbl_80367218 + 5) & 0x3F;
    if (mask != 0) {
        fn_800C3220(lbl_803206EC, mask);
        bf->rest = 0;
    }
    __register_global_object(&lbl_80367218, fn_8001C5F8, lbl_802CA4B0);
}
