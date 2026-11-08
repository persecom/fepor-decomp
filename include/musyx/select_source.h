#ifndef MUSYX_SELECT_SOURCE_H
#define MUSYX_SELECT_SOURCE_H

void fn_8025FFC8(void *arg0, u8 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5);

/* MusyX macro helper, inlined into the source-selection macro commands. */
static void SelectSource(void *svoice, void *dest, u32 *cstep, u64 tstflag, u32 dirtyflag) {
    u8 comb;
    s32 scale;
    u32 inv;

    if ((*(u64 *)((u8 *)svoice + 0x114) & tstflag) == 0) {
        *(u64 *)((u8 *)svoice + 0x114) |= tstflag;
        comb = 0;
    } else {
        comb = cstep[1];
    }
    scale = (s32)(cstep[0] & 0xFFFF0000) / 100;
    if (scale < 0) {
        scale -= ((s8)(cstep[1] >> 16) << 8) / 100;
    } else {
        scale += ((s8)(cstep[1] >> 16) << 8) / 100;
    }
    inv = (cstep[1] >> 8) & 0xFF;
    fn_8025FFC8(dest, cstep[0] >> 8, scale, comb, inv != 0, inv);
    *(u32 *)((u8 *)svoice + 0x220) |= dirtyflag;
}

#endif
