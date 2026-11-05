/* Functions from 0x80073394 to 0x80073E70, found by decomp-toolkit. */
#include "common.h"

void *fn_80073394(void) {
    extern u16 lbl_8026BE40[];
    return &lbl_8026BE40[0x1A7];
}

void *fn_800733E4(void) {
    extern u16 lbl_8026BE40[];
    return &lbl_8026BE40[0x34E];
}

s32 fn_800733F4(void) {
    return 1;
}

void *fn_800733FC(void) {
    extern u16 lbl_8026BE40[];
    return &lbl_8026BE40[0x3C0];
}

void *fn_80073464(void) {
    extern u8 lbl_8026BE40[];
    return lbl_8026BE40 + 0x203;
}

s32 fn_80073474(s32 arg1) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32);
    void *fn_800241C8(s32);
    extern M2C_UNK lbl_80286EF0;
    
    fn_8000CAA0(&lbl_80286EF0, M2C_FIELD(fn_800241C8(arg1), s32 *, 0x18));
    return 5;
}

u8 fn_800734B0(void) {
    u8 fn_801E3620(M2C_UNK *);
    extern M2C_UNK lbl_80331FB8;
    u8 var_r3;

    var_r3 = 2;
    if (fn_801E3620(&lbl_80331FB8) != 0) {
        var_r3 = 0;
    }
    return var_r3;
}

s32 fn_80073544(void) {
    extern u16 lbl_802EF4C8;
    lbl_802EF4C8 = 0x35;
    return 5;
}

void fn_8007355C(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026BE40;
    fn_8000E0E4(&lbl_8026BE40 + 0x21E);
}

void fn_80073588(void) {
    extern u16 lbl_8026BE40[];
    u16* ptr = &lbl_8026BE40[0x226];
    fn_8000E0E4(ptr);
}

void fn_80073808(void) {
    extern s32 lbl_8026BE40;
    s8 *temp_r3 = (s8 *) &lbl_8026BE40 + 0x267;
    fn_8000E0E4(temp_r3);
}

void fn_800739A8(void) {
    M2C_UNK fn_8003BE50(void *);
    u8 fn_80091D74();
    extern void *lbl_80367468;
    if ((M2C_FIELD(lbl_80367468, s32 *, 0x1A0) & 0x800000) && (fn_80091D74() == 0)) {
        fn_8003BE50(lbl_80367468);
    }
}

void fn_80073A3C(void) {
    M2C_UNK fn_8001D580(M2C_UNK *);
    extern M2C_UNK lbl_8036746C;
    fn_8001D580(&lbl_8036746C);
}

extern s32 lbl_80311FD8;
extern s32 lbl_80367468;
extern s32 lbl_8036746C;
extern s32 lbl_80312000;
extern s32 lbl_802EF4C8;
void fn_80073BE4(s32 arg0) {
    fn_80024398(&lbl_80311FD8, arg0, 0);
}

void fn_80073CA4(void) {
    fn_8003BE50((void *) lbl_802EF4C8);
    fn_8003A398(lbl_802EF4C8);
    fn_800F0A3C();
}

