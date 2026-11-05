/* Functions from 0x801E4540 to 0x801EA8C0, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

struct UnkStruct {
    u32 field_0[0x10];
    u32 field_8;
};

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

s32 fn_801E8734(void *arg0) {
    s8 fn_801E4A60();
    s16 temp_r5;
    s32 temp_r7;
    s8 var_r3;
    s8 var_r8;
    u32 temp_r0;
    u32 temp_r3;
    u8 var_r3_2;

    var_r8 = fn_801E4A60();
    if (var_r8 > 0) {
        var_r8 -= 1;
    }
    temp_r5 = M2C_FIELD(arg0, s16 *, 0x36);
    temp_r3 = (u32) temp_r5 >> 0x1FU;
    temp_r0 = (temp_r5 << 0x1B) - temp_r3;
    temp_r7 = temp_r5 / 32;
    var_r3 = (s8) temp_r7 + 8;
    if ((((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r3) != 0) {
        var_r3 = (s8) temp_r7 + 9;
    }
    var_r3_2 = 0;
    if (((s8) temp_r7 <= var_r8) && (var_r8 <= var_r3)) {
        var_r3_2 = 1;
    }
    if (var_r3_2 == 0) {
        M2C_FIELD(arg0, s16 *, 0x38) = (s16) (temp_r5 - ((s8) ((s8) temp_r7 - var_r8) << 5));
        return 1;
    }
    return 0;
}

s32 fn_801E960C(s32 arg0, s32 arg1)
{
    s32 temp = arg0 + 1;
    return temp * arg1;
}

void fn_801E97D4(void *arg0) {
    s16 r31;
    s16 r30;

    r31 = *(s16*)((char*)arg0 + 0x36);
    r30 = *(s16*)((char*)arg0 + 0x38);
    if (r31 == r30) {
        fn_8000C188(arg0);
        return;
    }
    if (r31 < r30) {
        *(s16*)((char*)arg0 + 0x36) = (s16)(*(s16*)((char*)arg0 + 0x3A) + r31);
    } else {
        *(s16*)((char*)arg0 + 0x36) = (s16)(r31 - *(s16*)((char*)arg0 + 0x3A));
    }
    fn_80057860(*(s32*)((char*)arg0 + 0x5C), r31);
    if (r31 == r30) {
        fn_8000C188(arg0);
    }
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

void fn_801E9C70(void *arg0) {
    s32 r31;
    s32 temp_r3;
    
    if (arg0 == NULL) {
        return;
    }
    
    r31 = *(s32*)((char*)arg0 + 0x14);
    temp_r3 = *(s32*)((char*)arg0 + 0x28);
    
    if (r31 < temp_r3) {
        *(s32*)((char*)arg0 + 0x14) = temp_r3;
    }
}

void fn_801E9D0C(void) {
    extern u16 lbl_8027EB78[40];
    fn_80013A90(&lbl_8027EB78[0x244 / 2]);
    fn_800138F4();
}

extern u32 lbl_8027EB78;
extern u32 lbl_80330708;
extern u32 lbl_802CA518;
void fn_801E9D68(void) {
    u32 temp_r27;
    u32 temp_r28;
    u32 temp_r29;
    u32 temp_r30;
    u32 *temp_r31;

    temp_r31 = &lbl_80330708;

    temp_r27 = *(temp_r31 + 0x21);
    temp_r28 = *(temp_r31 + 0x22);
    temp_r29 = *(temp_r31 + 0x23);
    temp_r30 = *(temp_r31 + 0x24);

    fn_80013A90(&lbl_8027EB78 + 0x24C, temp_r31);
    fn_800138F4();
    fn_80013A90(&lbl_8027EB78 + 0x253);
    fn_800138F4();
    fn_80013A90(&lbl_8027EB78 + 0x25D);
    fn_800138F4();
    fn_80013A90(&lbl_8027EB78 + 0x26C);
    fn_800138F4();
    fn_8002297C(&lbl_802CA518);

    *(temp_r31 + 0x21) = (*(temp_r31 + 0x21) | (temp_r27 & 0xFFFF));
    *(temp_r31 + 0x22) = (*(temp_r31 + 0x22) | (temp_r28 & 0xFFFF));
    *(temp_r31 + 0x23) = (*(temp_r31 + 0x23) | (temp_r29 & 0xFFFF));
    *(temp_r31 + 0x24) = (*(temp_r31 + 0x24) | (temp_r30 & 0xFFFF));
}

void fn_801EA430(void) {
    // This is an empty placeholder function for the purpose of this example.
    // The actual implementation would need to be filled in with the correct logic,
    // based on the assembly code shown by claim_function and objdiff output.
}
/* Functions from 0x801E4540 to 0x801EA8C0, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

extern f32 lbl_8036B6E8;
