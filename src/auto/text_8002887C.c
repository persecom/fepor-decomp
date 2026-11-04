/* Functions from 0x8002887C to 0x80033080, found by decomp-toolkit. */
#include "common.h"

void fn_80029784(void) {
    u8 fn_800AA188();
    M2C_UNK fn_800F214C();
    extern s32 lbl_80367110;
    if ((fn_800AA188() != 0) && !(lbl_80367110 & 0x80)) {
        fn_800F214C();
        fn_800F20E0();
    }
}

s32 fn_80029848(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0);
}

void fn_8002D398(void) {

}

void fn_8002D39C(void) {

}

void fn_8002D44C(void) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
}

void fn_8002D82C(void) {
    M2C_UNK fn_80146AF0();
    extern s32 lbl_80367254;
    fn_80146AF0();
    lbl_80367254 = 0;
}

void fn_8002DF54(void) {
    M2C_UNK fn_80147188(M2C_UNK);
    extern s8 lbl_80367AEC;
    extern s8 lbl_80367AEE;
    extern s8 lbl_80367AF6;
    fn_80147188(0);
    lbl_80367AEC = 0x64;
    lbl_80367AEE = 0x64;
    lbl_80367AF6 = 0;
}

s32 fn_8002EA74(void) {
    return 0;
}

void fn_8002F0B0(void) {
    M2C_UNK fn_800F20E0();
    fn_800F20E0();
}

void fn_8002F61C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}

void fn_8002F728(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = -1;
}

void fn_8002F76C(void) {

}

void fn_8002F770(void) {

}

void fn_8002F774(void) {

}

void *fn_8002F778(void) {
    extern M2C_UNK lbl_802694B8;
    return &lbl_802694B8 + 0xDE;
}

s32 *fn_8002FA54(void) {
    M2C_UNK fn_8002BD44(s32, M2C_UNK);
    M2C_UNK fn_8002F658(M2C_UNK);
    s32 fn_8002F740();
    s32 *fn_8014CB14(M2C_UNK *, s32, M2C_UNK *);
    extern s32 lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    extern M2C_UNK lbl_80330708;
    s32 *var_r3;

    fn_8002BD44(lbl_802EF4C8, 0);
    var_r3 = &lbl_802EF4E0;
    if ((s32) lbl_802EF4E0 != 0) {
        fn_8002F658(0);
        var_r3 = fn_8014CB14(&lbl_80330708, fn_8002F740(), &lbl_80330708);
    }
    return var_r3;
}

void fn_80031508(s32 arg0) {
    M2C_UNK fn_80029C08(s32, s32 *);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern s32 lbl_802EF4C8;
    extern M2C_UNK lbl_802EFCB8;
    
    s32 var_r3 = *(s32*)((char*)&lbl_802EF4C8 + 0x0);
    fn_80029C08(var_r3, &lbl_802EF4C8);
    fn_8002EB54(&lbl_802EFCB8, arg0);
}

void *fn_80032B4C(void) {
    extern M2C_UNK lbl_802695F0;
    return &lbl_802695F0 + 0x14F;
}

void fn_80033024(void) {
    M2C_UNK fn_8004A224();
    fn_8004A224();
}

