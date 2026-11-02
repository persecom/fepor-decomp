/* Functions from 0x80163200 to 0x80183374, found by decomp-toolkit. */
#include "common.h"

void fn_80163200(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
    M2C_FIELD(arg0, s8 *, 2) = arg3;
    M2C_FIELD(arg0, s8 *, 3) = arg4;
}

void fn_80163214(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    M2C_FIELD(arg0, s16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = arg2;
    M2C_FIELD(arg0, s16 *, 4) = arg3;
    M2C_FIELD(arg0, s16 *, 6) = arg4;
}

s32 fn_801651D0(void) {
    return 0x18;
}

s32 fn_801651D8(void) {
    return 0x10;
}

s32 fn_80165250(void) {
    return 0;
}

s32 fn_80165B04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50);
}

s32 fn_80165B0C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 fn_80165B14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

void fn_80169640(void) {

}

void fn_80169AF0(void) {

}

void fn_8016EC70(void) {

}

void fn_8016FE5C(void) {

}

void fn_80170E08(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s8 *, 0x4C) = 1;
}

void fn_80174204(void) {

}

s32 fn_80178664(void) {
    return 0;
}

s32 fn_80178A64(void) {
    return 0;
}

s32 fn_80178A6C(void) {
    return 0;
}

s32 fn_80178A74(void) {
    return 0x1C;
}

void fn_8017A5EC(void *arg0, s8 arg1) {
    s8 *temp_r5;

    temp_r5 = M2C_FIELD(arg0, s8 **, 4);
    M2C_FIELD(arg0, s8 **, 4) = (s8 *) (temp_r5 + 1);
    *temp_r5 = arg1;
}

u8 fn_8017A9DC(void *arg0) {
    u8 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r4 + 1);
    return *temp_r4;
}

s32 fn_8017DF4C(void) {
    return 0;
}

void fn_8017E2AC(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x44);
}

void fn_80180620(void) {

}

s32 fn_8018256C(void) {
    return 1;
}

