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

void fn_8000D3EC(char *arg0, void *arg1)
{
    extern u8 lbl_802ADB20[];

    u8 *table;
    u8 *bucket;
    u8 *entry;
    u8 *next;
    char *str;
    u32 hash37;
    s32 hash31;
    u32 index;
    u32 slot;
    s32 character;

    table = lbl_802ADB20;

    hash37 = 0;
    hash31 = 0;
    str = arg0;

    while (*str != 0) {
        character = (s8)*str++;
        hash37 = character + hash37 * 37;
        hash31 = character + hash31 * 31;
    }

    index = hash37 % 0x1FD;
    bucket = table + 0x800 + index * 4;

    *(u32 *)(bucket - 4) += 1;

    entry = *(u8 **)bucket;

    if (entry == 0) {
        slot = *(u32 *)table;
        entry = table + 4 + slot * 0x10;

        *(u32 *)table = (slot + 1) % 0x2800;

        while (*(u32 *)(entry + 8) != 0) {
            slot = *(u32 *)table;
            entry = table + 4 + slot * 0x10;
            *(u32 *)table = (slot + 1) % 0x2800;
        }

        *(u32 *)entry = 0;

        hash31 = 0;
        str = arg0;

        while (*str != 0) {
            hash31 = (s8)*str++ + hash31 * 31;
        }

        *(s32 *)(entry + 4) = hash31;
        *(char **)(entry + 8) = arg0;
        *(void **)(entry + 0xC) = arg1;
        *(u8 **)bucket = entry;
    } else {
        do {
            next = *(u8 **)entry;

            if (next == 0) {
                break;
            }

            entry = next;
        } while (1);

        slot = *(u32 *)table;
        next = table + 4 + slot * 0x10;

        *(u32 *)table = (slot + 1) % 0x2800;

        while (*(u32 *)(next + 8) != 0) {
            slot = *(u32 *)table;
            next = table + 4 + slot * 0x10;
            *(u32 *)table = (slot + 1) % 0x2800;
        }

        *(u32 *)next = 0;

        hash31 = 0;
        str = arg0;

        while (*str != 0) {
            hash31 = (s8)*str++ + hash31 * 31;
        }

        *(s32 *)(next + 4) = hash31;
        *(char **)(next + 8) = arg0;
        *(void **)(next + 0xC) = arg1;
        *(u8 **)entry = next;
    }
}

