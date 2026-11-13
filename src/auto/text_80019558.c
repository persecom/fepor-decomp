// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802841DC[];
extern u8 lbl_802841F4[];
extern u8 lbl_8028420C[];
extern u8 lbl_80284224[];
extern u8 lbl_8028423C[];

typedef struct {
    u8 pad[0x74];
    void *vtbl;
    u8 rest[0x78 - 0x78];
} Obj78;

typedef struct {
    u8 pad[0x74];
    void *vtbl;
    u8 rest[0x7C - 0x78];
} Obj7C;

static Obj78 lbl_802CA2C8_obj0;
static Obj78 lbl_802CA2C8_obj1;
static Obj7C lbl_802CA2C8_obj2;
static Obj78 lbl_802CA2C8_obj3;

void fn_80019558(void);

__declspec(section ".ctors") static void (*const lbl_80267A90)(void) = fn_80019558;

void fn_80019558(void) {
    Obj78 *p0 = &lbl_802CA2C8_obj0;
    Obj78 *p1 = &lbl_802CA2C8_obj1;
    Obj7C *p2 = &lbl_802CA2C8_obj2;
    Obj78 *p3 = &lbl_802CA2C8_obj3;

    p0->vtbl = lbl_802841DC;
    p1->vtbl = lbl_802841DC;
    p2->vtbl = lbl_802841DC;
    p3->vtbl = lbl_802841DC;
    p0->vtbl = lbl_8028423C;
    p1->vtbl = lbl_80284224;
    p2->vtbl = lbl_8028420C;
    p3->vtbl = lbl_802841F4;
}

