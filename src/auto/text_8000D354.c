/* Functions from 0x80006264 to 0x80011968, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    void *unk0;
    void *unk4;
    s32 unk8;
} Struct_8000B090;

extern s32 lbl_802AEE20[5]; // array of 5 pointers
extern f64 lbl_80368C28;    // global float constant
extern u16 jumptable_80283AE8[];

extern f64 lbl_80368C28;

extern u16 lbl_80367140;

extern void *(*lbl_80366DA0)(s32);
extern f32 lbl_80368B94, lbl_80368BB8, lbl_80368B98;
extern u32 lbl_802ADAFC[9];

extern void *fn_8000A738(void *, s32);
extern void fn_8000B5F0(void *);
extern void fn_8000B70C(void *);

typedef struct HashKey {
    u32 h1;
    u32 h2;
} HashKey;

extern struct UnkStruct_802AEE80 gUnk_802AEE80;

extern s32 gUnknown_0x80369C84;
extern s32 gUnknown_0x80369C88;

s32 fn_8000D354(s8 *str) {
    extern u8 lbl_802ADB20[];
    struct {
        u32 h1;
        u32 h2;
    } h;
    u32 *node;

    if (str == NULL) {
        return 0;
    }
    h.h2 = 0;
    h.h1 = h.h2;
    while (*str != 0) {
        h.h1 = *str + h.h1 * 37;
        h.h2 = *str + h.h2 * 31;
        str++;
    }
    for (node = ((u32 **)(lbl_802ADB20 + 8))[h.h1 % 509]; node != NULL; node = (u32 *)node[0]) {
        if (h.h2 == node[1]) {
            return node[3];
        }
    }
    return 0;
}

