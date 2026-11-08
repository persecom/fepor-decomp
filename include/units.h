#ifndef INCLUDE_UNITS_H
#define INCLUDE_UNITS_H

#include "global.h"

struct Unit {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ u8 unkB0[0x40];
    /* 0xF0 */ u8 unkF0[0x10];
    /* 0x100 */ u8 unk100[0x40];
    /* 0x140 */ u8 unk140[0x50];
    /* 0x190 */ void* unk190;
    /* 0x194 */ u8 unk194[0x14];
    /* 0x1A8 */ s8 unk1A8;
    /* 0x1A9 */ u8 unk1A9;
    /* 0x1AA */ u8 unk1AA;
    /* 0x1AB */ u8 unk1AB;
    /* 0x1AC */ u8 unk1AC[0x68];
    /* 0x174 */ void* unk174;
};

#endif // INCLUDE_UNITS_H
