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

void fn_80163708(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x12) = 2;
    M2C_FIELD(arg0, s16 *, 0x14) = 2;
    M2C_FIELD(arg0, s16 *, 0x16) = 0x106;
    M2C_FIELD(arg0, s16 *, 0x18) = 0x10E;
}

void fn_80163E50(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x12) = 2;
    M2C_FIELD(arg0, s16 *, 0x14) = 2;
    M2C_FIELD(arg0, s16 *, 0x16) = 0x106;
    M2C_FIELD(arg0, s16 *, 0x18) = 0x86;
}

void fn_80164A24(void *arg0) {
    M2C_UNK fn_80037BD0(s32);
    fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58));
}

void fn_801650DC(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x12) = 2;
    M2C_FIELD(arg0, s16 *, 0x14) = 0x1A;
    M2C_FIELD(arg0, s16 *, 0x16) = 0x106;
    M2C_FIELD(arg0, s16 *, 0x18) = 0x12A;
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

void fn_80165B1C(void) {
    M2C_UNK fn_800472D4();
    M2C_UNK fn_80040844();
    fn_80040844();
    fn_800472D4();
}

void fn_80168F1C(void *arg0) {
    s32 fn_8003FCCC();
    M2C_UNK fn_80162018();
    M2C_UNK fn_801620AC();
    fn_80162018();
    fn_801620AC();
    M2C_FIELD(arg0, s32 *, 0x44) = fn_8003FCCC();
}

void fn_80168F54(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    s32 fn_80161FB8();
    if (fn_80161FB8() != 0) {
        fn_8000C188(arg0);
    }
}

void fn_80169640(void) {

}

void fn_80169AF0(void) {

}

void fn_80169AF4(void *arg0) {
    M2C_UNK fn_8000A408(s32);
    M2C_UNK fn_8013FED0(void *);
    M2C_UNK fn_801BE748(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_801BE748(arg0);
}

void fn_80169B34(void *arg0) {
    M2C_UNK fn_8000A3F8(s32);
    M2C_UNK fn_8013FEC0(void *);
    fn_8000A3F8(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FEC0(arg0);
    fn_8000C188(arg0);
}

void fn_80169B74(void *arg0) {
    M2C_UNK fn_801BE6A8(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_801BE6A8(arg0);
}

void fn_80169E2C(void *arg0) {
    M2C_UNK fn_8000A420(s32);
    fn_8000A420(M2C_FIELD(arg0, s32 *, 0x50));
}

void fn_80169E50(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x50));
}

void *fn_8016A6A4(void *arg0) {
    M2C_UNK fn_801403F0();
    fn_801403F0();
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    return arg0;
}

void fn_8016B5E8(void) {
    M2C_UNK fn_8004327C();
    M2C_UNK fn_80040844();
    fn_80040844();
    fn_8004327C();
}

void fn_8016EC70(void) {

}

void fn_8016FE5C(void) {

}

void fn_80170034(void *arg0) {
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x5C));
}

void fn_80170E08(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s8 *, 0x4C) = 1;
}

void fn_80172C44(void *arg0) {
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x5C));
}

void fn_801731FC(void *arg0) {
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x5C));
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

void fn_801793B4(void) {
    M2C_UNK fn_80009B80(M2C_UNK);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_80009B80(0x80);
    fn_8000A248();
}

s32 fn_80179D40(s32 arg0) {
    M2C_UNK fn_8014510C();
    fn_8014510C();
    return arg0;
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

void fn_8017C028(void *arg0) {
    M2C_UNK fn_80105D4C(s32, u8, s32);
    s32 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
    fn_80105D4C(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
}

void fn_8017C304(void *arg0) {
    M2C_UNK fn_80105CEC(s32, u8, s32);
    s32 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
    fn_80105CEC(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
}

s32 fn_8017DF4C(void) {
    return 0;
}

void fn_8017E1B8(void *arg0, u32 arg1) {
    M2C_UNK fn_8000C60C();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == arg1) {
        fn_8000C60C();
    }
}

void fn_8017E2AC(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x44);
}

void fn_8017E8A0(void) {
    M2C_UNK fn_8017E8C0();
    fn_8017E8C0();
}

void fn_8017F1D4(void *arg0) {
    M2C_UNK fn_8006D8E8(s32);
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_8017F5C8(void *arg0) {
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_8017F86C(void *arg0) {
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_80180620(void) {

}

s32 fn_80181DD8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), s32 *, 0x50) != 0;
}

s32 fn_8018256C(void) {
    return 1;
}

