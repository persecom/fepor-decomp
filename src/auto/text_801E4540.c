/* Functions from 0x801E4540 to 0x801EA8C0, found by decomp-toolkit. */
#include "common.h"

s32 fn_801E45FC(void) {
    extern char lbl_80299FA8[];
    return *(s32*)((u8*)lbl_80299FA8 + 4);
}

void fn_801E4CF8(void *arg0) {
    M2C_UNK fn_801E4D54();
    M2C_UNK fn_801E4E8C();
    M2C_UNK fn_801E4FB8();
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x30);
    switch ((s8) temp_r0) {                         /* irregular */
    case 0:
        fn_801E4FB8();
        return;
    case 1:
        fn_801E4E8C();
        return;
    case 2:
        fn_801E4D54();
        return;
    }
}

void fn_801E551C(void) {
    M2C_UNK fn_80225058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80225058(0x20, 0x5A, 0x220, 0x136);
}

void fn_801E9958(void) {
    M2C_UNK fn_801E9978();
    fn_801E9978();
}

void fn_801E9C24(void) {
    extern u16 lbl_80299FA8[14];
    extern u16 lbl_80299FC4[14];
    extern u8 lbl_8027EB78[80];
    
    fn_8005C8B4((void*)&lbl_80299FA8[2]);
    fn_8005C8B4((void*)&lbl_80299FC4[2]);
    fn_8005C8B4((void*)&lbl_8027EB78[0x22F]);
}

void fn_801E9D0C(void) {
    extern u16 lbl_8027EB78[40];
    fn_80013A90(&lbl_8027EB78[0x244 / 2]);
    fn_800138F4();
}

