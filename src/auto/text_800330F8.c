/* Functions from 0x800330F8 to 0x80055C70, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u8 unk28;
    u8 unk29;
    u8 unk2A;
    u8 unk2B;
    u8 unk2C;
    u8 unk2D;
    u8 unk2E;
    u8 unk2F;
    s32 unk30;
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 unk37;
    f32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk41;
    s32 unk42;
    s32 unk43;
} UnitStruct;


extern void* lbl_803672A8;
extern f64 lbl_80368EF8;
extern f32 lbl_80368FC0;
extern f32 lbl_80368FC4;
extern f32 lbl_8036901C;
extern f64 lbl_80368FE0;
extern f64 lbl_80368E80;
extern f32 lbl_80368E24;
extern f32 lbl_80368E28;

void *fn_800330F8(void) {
    extern u16 lbl_802695F0[];
    return (u8 *)lbl_802695F0 + 0x14F;
}

void fn_800331D4(void *arg0, s32 arg1) {
    u8 *ptr = (u8*)arg0 + 0x60;
    s32 count = arg1 * 2;
    s32 i;

    if (count <= 0) {
        return;
    }

    for (i = 0; i < count; i++) {
        s32 offset = (*ptr + i) * 2 + 0x20;
        *(u16*)((u32)arg0 + offset) |= 0x8;
    }
}

void fn_8003333C(void *arg0,s32 arg1) {
 s32 count=M2C_FIELD(arg0,u8*,0x60);
 s32 first=arg1+count, second, third, fourth, fifth;
 second=arg1+1; third=arg1+2; fourth=arg1+3; fifth=arg1+4;
 *(u16*)((u8*)arg0+((first<<1)+0x20)) |= 1;
 *(u16*)((u8*)arg0+(((count+second)<<1)+0x20)) |= 1;
 *(u16*)((u8*)arg0+(((count+third)<<1)+0x20)) |= 1;
 *(u16*)((u8*)arg0+(((count+fourth)<<1)+0x20)) |= 1;
 *(u16*)((u8*)arg0+(((count+fifth)<<1)+0x20)) |= 1;
}

void fn_800333DC(void* arg0, s32 arg1) {
    u16* r5;
    u16* r4;

    r5 = (u16*)((u8*)arg0 + 0x60);
    r5 = (u16*)((u8*)r5 + ((*(u8*)r5 + arg1) * 2));
    *r5 |= 0x4002;

    r4 = (u16*)((u8*)arg0 + 0x60);
    r4 = (u16*)((u8*)r4 + ((*(u8*)r4 + arg1) * 2));
    *r4 |= 4;
}

void fn_80033E70(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x400), s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 0) - M2C_FIELD(arg0, s16 *, 2));
    M2C_FIELD(arg0, void **, 0x400) = NULL;
}

void fn_80033E90(void *arg0) {
    s8 fn_80033F18(void);
    s32 temp;
    void *entry;
    temp = (s32)M2C_FIELD(arg0,s16*,0) * 4;
    entry = (u8*)arg0 + temp + 4;
    M2C_FIELD(arg0,void**,0x400)=entry;
    M2C_FIELD(entry,s8*,0)=fn_80033F18();
    M2C_FIELD(entry,s16*,2)=0;
    M2C_FIELD(arg0,s16*,0)=M2C_FIELD(arg0,s16*,0)+1;
    entry=(u8*)arg0+(M2C_FIELD(arg0,s16*,0)*4)+4;
    M2C_FIELD(entry,s8*,0)=0;
    M2C_FIELD(entry,s16*,2)=0;
    M2C_FIELD(arg0,s16*,2)=M2C_FIELD(arg0,s16*,0);
}

void fn_80034068(s16 *arg0, s8 arg2) {
    s8 fn_80033F18();
    void *temp_r3;
    void *temp_r5;

    temp_r5 = arg0 + ((*arg0 * 4) + 4);
    M2C_FIELD(temp_r5, s8 *, 0) = fn_80033F18();
    M2C_FIELD(temp_r5, s16 *, 2) = (s16) arg2;
    *arg0 += 1;
    temp_r3 = arg0 + ((*arg0 * 4) + 4);
    M2C_FIELD(temp_r3, s8 *, 0) = 0;
    M2C_FIELD(temp_r3, s16 *, 2) = 0;
}

void fn_800340E4(s16 *arg0) {
    *arg0 = 0;
}

void fn_800340F0(void* arg0) {
    s32 temp_r0;
    u32 zero = 0;
    
    *(u8*)((char*)arg0 + 0x404) = zero;
    *(u16*)((char*)arg0 + 0x0) = zero;
    *(u16*)((char*)arg0 + 0x2) = zero;
    *(u32*)((char*)arg0 + 0x400) = zero;
    temp_r0 = *(s16*)((char*)arg0 + 0x0);
    *(u8*)((char*)arg0 + (temp_r0 * 4) + 0x4) = zero;
    *(u16*)((char*)arg0 + (temp_r0 * 4) + 0x6) = zero;
}

void fn_80034120(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) + 1);
}

u8 fn_80034A8C(s32 arg0, u8 arg1) {
    s32 temp_r3;
    s32 temp_r30;
    s32 temp_r31;

    if (arg1 == 0) {
        return 0U;
    }
    temp_r31 = arg1;
    if (fn_80105BC0(arg0 + 0x1BC, 0xB) != 0) {
        temp_r31 *= 2;
    }
    if (fn_80105BC0(arg0 + 0x1BC, 0x4B) != 0) {
        temp_r3 = (temp_r31 * 7) / 10;
        temp_r31 = temp_r3;
        if (temp_r31 < 1) {
            temp_r31 = 1;
        }
    }
    if (temp_r31 > 0x64) {
        temp_r31 = 0x64;
    }
    return temp_r31;
}

void fn_80034F40(void *arg0) {
 void *obj=M2C_FIELD(arg0,void**,0x280);
 void fn_8003868C(void*,u8); u8 fn_800386B0(void*); void fn_8003708C(void*,void*);
 u8 status=M2C_FIELD(M2C_FIELD(obj,void**,0x190),u8*,8);
 if (status==0) goto copy;
 if (status==5) {
   M2C_FIELD((short)obj,u8*,0x19A)=M2C_FIELD(arg0,u8*,0x19A);
   fn_8003868C(M2C_FIELD(arg0,void**,0x280),(u8)fn_800386B0(arg0));
 }
 copy:
 fn_8003708C(M2C_FIELD(arg0,void**,0x280),(u8*)arg0+0x2D7);
 obj=M2C_FIELD(arg0,void**,0x280);
 M2C_FIELD(obj,u8*,0x1B4)=M2C_FIELD(arg0,u8*,0x1B4);
 M2C_FIELD(obj,u8*,0x1B5)=M2C_FIELD(arg0,u8*,0x1B5);
 M2C_FIELD(obj,u8*,0x1B6)=M2C_FIELD((u32)arg0,u8*,0x1B6);
 M2C_FIELD(obj,u8*,0x1B7)=M2C_FIELD(arg0,u8*,0x1B7);
 M2C_FIELD(obj,u8*,0x1B8)=M2C_FIELD(arg0,u8*,0x1B8);
 M2C_FIELD(obj,u8*,0x1B9)=M2C_FIELD(arg0,u8*,0x1B9);
 M2C_FIELD((s32)obj,u8*,0x1BA)=M2C_FIELD(arg0,u8*,0x1BA);
 M2C_FIELD(obj,u8*,0x1BB)=M2C_FIELD(arg0,u8*,0x1BB);
}

void fn_80034FF0(void *arg0, void *arg1) {
    extern f32 lbl_80368E88;
    s16 var_r4;
    s16 var_r5;
    s16 var_r5_2;
    s16 var_r5_3;
    s16 var_r5_4;
    s16 var_r5_5;
    s16 var_r5_6;
    s16 var_r5_7;

    var_r5 = M2C_FIELD(arg0, u8 *, 0x1B4) + (s32) (lbl_80368E88 + M2C_FIELD(arg1, f32 *, 0));
    if (var_r5 < 0) {
        var_r5 = 0;
    }
    if (var_r5 > 0xFF) {
        var_r5 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 0x1B4) = (u8) var_r5;
    var_r5_2 = M2C_FIELD(arg0, u8 *, 0x1B5) + (s32) (lbl_80368E88 + M2C_FIELD(arg1, f32 *, 4));
    if (var_r5_2 < 0) {
        var_r5_2 = 0;
    }
    if (var_r5_2 > 0xFF) {
        var_r5_2 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 0x1B5) = (u8) var_r5_2;
    var_r5_3 = M2C_FIELD(arg0, u8 *, 0x1B6) + (s32) (lbl_80368E88 + M2C_FIELD(arg1, f32 *, 8));
    if (var_r5_3 < 0) {
        var_r5_3 = 0;
    }
    if (var_r5_3 > 0xFF) {
        var_r5_3 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 0x1B6) = (u8) var_r5_3;
    var_r5_4 = M2C_FIELD(arg0, u8 *, 0x1B7) + (s32) (lbl_80368E88 + M2C_FIELD(arg1, f32 *, 0xC));
    if (var_r5_4 < 0) {
        var_r5_4 = 0;
    }
    if (var_r5_4 > 0xFF) {
        var_r5_4 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 0x1B7) = (u8) var_r5_4;
    var_r5_5 = M2C_FIELD(arg0, u8 *, 0x1B8) + (s32) (lbl_80368E88 + M2C_FIELD(arg1, f32 *, 0x10));
    if (var_r5_5 < 0) {
        var_r5_5 = 0;
    }
    if (var_r5_5 > 0xFF) {
        var_r5_5 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 0x1B8) = (u8) var_r5_5;
    var_r5_6 = M2C_FIELD(arg0, u8 *, 0x1B9) + (s32) (lbl_80368E88 + M2C_FIELD(arg1, f32 *, 0x14));
    if (var_r5_6 < 0) {
        var_r5_6 = 0;
    }
    if (var_r5_6 > 0xFF) {
        var_r5_6 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 0x1B9) = (u8) var_r5_6;
    var_r5_7 = M2C_FIELD(arg0, u8 *, 0x1BA) + (s32) (lbl_80368E88 + M2C_FIELD(arg1, f32 *, 0x18));
    if (var_r5_7 < 0) {
        var_r5_7 = 0;
    }
    if (var_r5_7 > 0xFF) {
        var_r5_7 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 0x1BA) = (u8) var_r5_7;
    var_r4 = M2C_FIELD(arg0, u8 *, 0x1BB) + (s32) (lbl_80368E88 + M2C_FIELD(arg1, f32 *, 0x1C));
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    if (var_r4 > 0xFF) {
        var_r4 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 0x1BB) = (u8) var_r4;
}

void fn_80036834(void *arg0) {
    s32 i=0;
    u32 zero=0;
    M2C_FIELD(arg0,u8*,0x214)=zero;
    M2C_FIELD(arg0,u8*,0x21E)=zero;
    M2C_FIELD(arg0,u8*,0x215)=zero;
    M2C_FIELD(arg0,u8*,0x21F)=zero;
    M2C_FIELD(arg0,u8*,0x216)=zero;
    M2C_FIELD(arg0,u8*,0x220)=zero;
    M2C_FIELD(arg0,u8*,0x217)=zero;
    M2C_FIELD(arg0,u8*,0x221)=zero;
    M2C_FIELD(arg0,u8*,0x218)=zero;
    M2C_FIELD(arg0,u8*,0x222)=zero;
    M2C_FIELD(arg0,u8*,0x219)=zero;
    M2C_FIELD(arg0,u8*,0x223)=zero;
    M2C_FIELD(arg0,u8*,0x21A)=zero;
    M2C_FIELD(arg0,u8*,0x224)=zero;
    M2C_FIELD(arg0,u8*,0x21B)=zero;
    M2C_FIELD(arg0,u8*,0x225)=zero;
    M2C_FIELD(arg0,u8*,0x21C)=zero;
    M2C_FIELD(arg0,u8*,0x226)=zero;
    M2C_FIELD(arg0,u8*,0x21D)=zero;
    M2C_FIELD(arg0,u8*,0x227)=zero;
    if (M2C_FIELD(M2C_FIELD(arg0,void**,0x188),void**,0x50) == NULL) return;
    do {
       M2C_FIELD((u8*)arg0+i,u8*,0x21E)=5;
       i++;
    } while (i < (u8)M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0,void**,0x188),void**,0x50),u8*,4));
}

void fn_800368C8(void *arg0, u8 arg1, void *arg2) {
    void *fn_80019DA8(u8);
    void *temp_r3;

    temp_r3 = fn_80019DA8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x54));
    M2C_FIELD(arg2, u8 *, 4) = (u8) (M2C_FIELD(arg2, u8 *, 4) + (arg1 * M2C_FIELD(temp_r3, u8 *, 4)));
    M2C_FIELD(arg2, u8 *, 5) = (u8) (M2C_FIELD(arg2, u8 *, 5) + (arg1 * M2C_FIELD(temp_r3, u8 *, 5)));
    M2C_FIELD(arg2, u8 *, 6) = (u8) (M2C_FIELD(arg2, u8 *, 6) + (arg1 * M2C_FIELD(temp_r3, u8 *, 6)));
    M2C_FIELD(arg2, u8 *, 7) = (u8) (M2C_FIELD(arg2, u8 *, 7) + (arg1 * M2C_FIELD(temp_r3, u8 *, 7)));
    M2C_FIELD(arg2, u8 *, 8) = (u8) (M2C_FIELD(arg2, u8 *, 8) + (arg1 * M2C_FIELD(temp_r3, u8 *, 8)));
    M2C_FIELD(arg2, u8 *, 9) = (u8) (M2C_FIELD(arg2, u8 *, 9) + (arg1 * M2C_FIELD(temp_r3, u8 *, 9)));
}

void fn_80036984(s32 arg0, s32 arg1) {
    u8 *ptr = (u8 *)(arg0 + 0x214);
    ptr[arg1] += 1;
}

void fn_80036998(void *arg0,s32 arg1) {
 u8 fn_80036B20(void);
 u8 *target;
 s32 offset;
 u8 value;
 void *table;
 if (fn_80036B20()) return;
 target=(u8*)arg0+arg1;
 offset=arg1<<3;
 target[0x214]++;
 table=M2C_FIELD(M2C_FIELD(arg0,void**,0x188),void**,0x50);
 value=((u8*)table)[offset+6]+1;
 if (target[0x214] > value) target[0x214]=((u8*)table)[offset+0xE]+1;
}

s32 fn_80036A24(void *arg0) {
    void *temp_r7;
    s32 var_r8;
    s32 var_r9;
    s32 var_r6;
    u8 temp_r4_3;
    u8 var_r0;
    u8 var_r0_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r5;

    temp_r7 = (char *)arg0 + 0x188;
    if (*(void **)temp_r7 == NULL) {
        return 0;
    }
    var_r8 = 0;
    var_r9 = 0;
    var_r6 = 0;
loop_22:
    temp_r4 = *(void **)((char *)temp_r7 + 0x50);
    if (temp_r4 == NULL) {
        var_r0 = 0;
    } else {
        var_r0 = *(u8 *)((char *)temp_r4 + var_r6);
    }
    if (var_r9 < (s32) var_r0) {
        temp_r4_2 = (char *)temp_r4 + var_r6;
        if (*(u32 *)((char *)temp_r4_2 + 0x8) != 0U) {
            temp_r5 = (char *)temp_r4_2 + 0x8;
            if (temp_r5 == NULL) {
                var_r0_2 = 0;
            } else {
                temp_r4_3 = *(u8 *)((char *)arg0 + (var_r9 + 0x214));
                if (temp_r4_3 <= *(u8 *)((char *)temp_r5 + 0x4)) {
                    var_r0_2 = 0;
                } else if (temp_r4_3 <= *(u8 *)((char *)temp_r5 + 0x5)) {
                    var_r0_2 = 1;
                } else if (temp_r4_3 <= *(u8 *)((char *)temp_r5 + 0x6)) {
                    var_r0_2 = 2;
                } else {
                    var_r0_2 = 3;
                }
            }
            switch ((s32) var_r0_2) {               /* irregular */
            case 3:
                var_r8 += 1;
                /* fallthrough */
            case 2:
                var_r8 += 1;
                /* fallthrough */
            case 1:
                var_r8 += 1;
                break;
            }
        }
        var_r6 += 8;
        var_r9 += 1;
        goto loop_22;
    }
    return var_r8;
}

s32 fn_80036EAC(void *arg0, s32 arg1) {
    s32 result;
    u8 value;
    void *unit;
    void *table;
    result = 3;
    table = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), void **, 0x50);
    table = (u8 *)table + arg1 * 8 + 8;
    if (table == NULL) {
        value = 0;
    } else {
        unit = (u8 *)arg0 + arg1;
        value = M2C_FIELD(unit, u8 *, 0x214);
        if (value <= M2C_FIELD(table, u8 *, 4)) value = 0;
        else if (value <= M2C_FIELD(table, u8 *, 5)) value = 1;
        else if (value <= M2C_FIELD(table, u8 *, 6)) value = 2;
        else value = 3;
    }
    switch (value) {
    case 0: result = 1; break;
    case 1: result = 2; break;
    case 2: result = 3; break;
    }
    return result;
}

s32 fn_80036F5C(void *arg0, s32 arg1) {
    void *temp_r5;
    u8 temp_r4;

    temp_r5 = *(void **)((char *)arg0 + 0x188);
    if (temp_r5 == NULL) {
        return 0;
    }
    temp_r5 = (char *)temp_r5 + (arg1 * 8) + 0x8;
    temp_r4 = *(u8 *)((char *)temp_r5 + 0x4);
    if (temp_r4 <= *(u8 *)((char *)temp_r5 + 0x5)) {
        return 0;
    }
    if (temp_r4 <= *(u8 *)((char *)temp_r5 + 0x6)) {
        return 1;
    }
    return temp_r4 - *(u8 *)((char *)temp_r5 + 0x6) + 3;
}

u8 fn_80036FC4(s32 arg0, s32 arg1) {
    u32 addr = (arg0 + arg1 + 0x214);
    return *(u8 *)addr;
}

void fn_80036FD0(void *arg0, s32 arg1) {
    void **temp_r3;
    void *temp_r3_2;

    temp_r3 = (void **)M2C_FIELD(arg0, void **, 0x188);
    temp_r3_2 = M2C_FIELD(temp_r3, void **, 0x50);
    temp_r3_2 = (void*)((s32)temp_r3_2 + (arg1 * 8));
    fn_80016B7C((s32)M2C_FIELD(temp_r3_2, void **, 8));
}

s32 fn_80037004(void *arg0, s32 arg1) {
    return M2C_FIELD((M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), s32 *, 0x50) + (arg1 * 8)), s32 *, 8);
}

u8 fn_8003701C(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), void **, 0x50);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return (u8) M2C_FIELD(temp_r3, s32 *, 4);
}

void fn_80037040(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, u8 *, 0x1A9) = (u8) (M2C_FIELD(arg0, u8 *, 0x1A9) + arg1);
    M2C_FIELD(arg0, u8 *, 0x1AA) = (u8) (M2C_FIELD(arg0, u8 *, 0x1AA) + arg2);
    if ((s8) M2C_FIELD(arg0, u8 *, 0x1A9) > 0x63) {
        M2C_FIELD(arg0, u8 *, 0x1A9) = 0x63U;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x1AA) > 0x14) {
        M2C_FIELD(arg0, u8 *, 0x1AA) = 0x14U;
    }
}

void fn_8003708C(void *arg0, void *arg1) {
    void fn_8003712C(void);
    M2C_FIELD(arg0,u8*,0x1AB)=(u8)(M2C_FIELD(arg0,u8*,0x1AB)+M2C_FIELD(arg1,u8*,0));
    M2C_FIELD(arg0,u8*,0x1AC)=(u8)(M2C_FIELD(arg0,u8*,0x1AC)+M2C_FIELD(arg1,u8*,1));
    M2C_FIELD(arg0,u8*,0x1AD)=(u8)(M2C_FIELD(arg0,u8*,0x1AD)+M2C_FIELD(arg1,u8*,2));
    M2C_FIELD(arg0,u8*,0x1AE)=(u8)(M2C_FIELD(arg0,u8*,0x1AE)+M2C_FIELD(arg1,u8*,3));
    M2C_FIELD(arg0,u8*,0x1AF)=(u8)(M2C_FIELD(arg0,u8*,0x1AF)+M2C_FIELD(arg1,u8*,4));
    M2C_FIELD(arg0,u8*,0x1B0)=(u8)(M2C_FIELD(arg0,u8*,0x1B0)+M2C_FIELD(arg1,u8*,5));
    M2C_FIELD(arg0,u8*,0x1B1)=(u8)(M2C_FIELD(arg0,u8*,0x1B1)+M2C_FIELD(arg1,u8*,6));
    M2C_FIELD(arg0,u8*,0x1B2)=(u8)(M2C_FIELD(arg0,u8*,0x1B2)+M2C_FIELD(arg1,u8*,7));
    fn_8003712C();
}

void *fn_800377D8(void *arg0) {
    extern u16 lbl_8026A3A8[];
    if (*(u8 *)((u8 *)arg0 + 0x199) == 0) {
        return (void *)&lbl_8026A3A8[0x1D];
    }
    return (void *)fn_80014EDC();
}

void fn_80037814(void) {

}

extern f32 lbl_80368EA8;
extern f32 lbl_80368EAC;
extern f32 lbl_80368EB0;
extern f32 lbl_80368EB4;
extern f64 lbl_80368EB8;
f32 fn_80037818(void *arg0,u8 arg1) {
    u8 value;
    u8 fn_80105BC0(s32,s32);
    f32 result;
    if (arg1 == 0) return lbl_80368EA8;
    if ((u8)fn_80105BC0((s32)arg0+0x1BC,2)) value=M2C_FIELD(arg0,u8*,0x19A)+0x14;
    else value=M2C_FIELD(arg0,u8*,0x19A);
    result = (f32)arg1 / (lbl_80368EAC - lbl_80368EB0 * (f32)value);
    return result + lbl_80368EB4;
}

s32 fn_800378CC(s32 arg0) {
    M2C_UNK fn_80165E90(s32 *, s32);
    s32 sp8;

    fn_80165E90(&sp8, arg0 + 0x1BC);
    return sp8;
}

void fn_80037AB8(void *arg0) {
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r6_3;
    void *temp_r6_4;
    void *temp_r6_5;
    void *temp_r6_6;
    void *temp_r6_7;

    temp_r6 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AB) = (s8) ((M2C_FIELD(temp_r6, u8 *, 0x4C) - M2C_FIELD(temp_r6, u8 *, 0x44)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1D));
    temp_r6_2 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AC) = (s8) ((M2C_FIELD(temp_r6_2, u8 *, 0x4D) - M2C_FIELD(temp_r6_2, u8 *, 0x45)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1E));
    temp_r6_3 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AD) = (s8) ((M2C_FIELD(temp_r6_3, u8 *, 0x4E) - M2C_FIELD(temp_r6_3, u8 *, 0x46)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1F));
    temp_r6_4 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AE) = (s8) ((M2C_FIELD(temp_r6_4, u8 *, 0x4F) - M2C_FIELD(temp_r6_4, u8 *, 0x47)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x20));
    temp_r6_5 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AF) = (s8) ((M2C_FIELD(temp_r6_5, u8 *, 0x50) - M2C_FIELD(temp_r6_5, u8 *, 0x48)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x21));
    M2C_FIELD(arg0, s8 *, 0x1B0) = (s8) (0x28 - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x22));
    temp_r6_6 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1B1) = (s8) ((M2C_FIELD(temp_r6_6, u8 *, 0x52) - M2C_FIELD(temp_r6_6, u8 *, 0x4A)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x23));
    temp_r6_7 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1B2) = (s8) ((M2C_FIELD(temp_r6_7, u8 *, 0x53) - M2C_FIELD(temp_r6_7, u8 *, 0x4B)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x24));
    M2C_FIELD(arg0, s8 *, 0x1AA) = (s8) (0x14 - M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x3E));
}

s32 fn_80037BBC(s32 arg0, s32 arg1) {
    return (arg1 * 8) + arg0 + 0x1CC;
}

s32 fn_80037BD0(s32 arg0, s32 arg1) {
    s32 base = arg0;
    if (arg1 >= 0 && arg1 < 4) return base + (arg1 << 3) + 0x1CC;
    if (arg1 >= 4 && arg1 < 8) return base + ((arg1 - 4) << 3) + 0x1EC;
    return 0;
}

void *fn_80037C20(void *arg0) {
    s8 index;
    if ((((u8)M2C_FIELD(arg0, u8 *, 0x1F1) >> 7) & 1) && M2C_FIELD(arg0, u32 *, 0x1EC) != 0) index = 0;
    else if ((((u8)M2C_FIELD(arg0, u8 *, 0x1F9) >> 7) & 1) && M2C_FIELD(arg0, u32 *, 0x1F4) != 0) index = 1;
    else if ((((u8)M2C_FIELD(arg0, u8 *, 0x201) >> 7) & 1) && M2C_FIELD(arg0, u32 *, 0x1FC) != 0) index = 2;
    else if ((((u8)M2C_FIELD(arg0, u8 *, 0x209) >> 7) & 1) && M2C_FIELD(arg0, u32 *, 0x204) != 0) index = 3;
    else index = -1;
    if (index < 0) return NULL;
    return (u8 *)arg0 + (index * 8) + 0x1EC;
}

s32 fn_80037CCC(void *arg0) {
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1F1) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1EC) != 0U)) {
        return 0;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1F9) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1F4) != 0U)) {
        return 1;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x201) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1FC) != 0U)) {
        return 2;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x209) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x204) != 0U)) {
        return 3;
    }
    return -1;
}

void *fn_80037D54(void *arg0) {
    s8 index;
    if ((((u8)M2C_FIELD(arg0, u8 *, 0x1D1) >> 7) & 1) && M2C_FIELD(arg0, u32 *, 0x1CC) != 0) index = 0;
    else if ((((u8)M2C_FIELD(arg0, u8 *, 0x1D9) >> 7) & 1) && M2C_FIELD(arg0, u32 *, 0x1D4) != 0) index = 1;
    else if ((((u8)M2C_FIELD(arg0, u8 *, 0x1E1) >> 7) & 1) && M2C_FIELD(arg0, u32 *, 0x1DC) != 0) index = 2;
    else if ((((u8)M2C_FIELD(arg0, u8 *, 0x1E9) >> 7) & 1) && M2C_FIELD(arg0, u32 *, 0x1E4) != 0) index = 3;
    else index = -1;
    if (index < 0) return NULL;
    return (u8 *)arg0 + (index * 8) + 0x1CC;
}

s32 fn_80037E00(void *arg0) {
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1D1) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1CC) != 0U)) {
        return 0;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1D9) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1D4) != 0U)) {
        return 1;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1E1) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1DC) != 0U)) {
        return 2;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1E9) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1E4) != 0U)) {
        return 3;
    }
    return -1;
}

u8 fn_80038128(void *arg0, void *arg1) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = (s8) *(u8 *)((uintptr_t)arg0 + 0x19F) - (s8) *(u8 *)((uintptr_t)arg1 + 0x19F);
    if (var_r5 < 0) {
        var_r5 = -var_r5;
    }
    var_r0 = (s8) *(u8 *)((uintptr_t)arg0 + 0x19E) - (s8) *(u8 *)((uintptr_t)arg1 + 0x19E);
    if (var_r0 < 0) {
        var_r0 = -var_r0;
    }
    return (u8) (var_r0 + var_r5);
}

u8 fn_80038570(s32 arg0) {
    u8 fn_80105BC0(s32, s32);
    u8 fn_801F1B44(void);
    u8 fn_801F1AB8(void);

    u8 var_r31;

    var_r31 = 0;
    if (fn_80105BC0(arg0 + 0x1BC, 6) != 0) {
        var_r31 = fn_801F1B44();
    }
    if (fn_80105BC0(arg0 + 0x1BC, 0x3C) != 0) {
        var_r31 += fn_801F1AB8();
    }
    return var_r31;
}

u8 fn_800385E4(void *arg0) {
    s32 r3;
    u8 r4;
    s32 r31;
    
    r31 = (s32)arg0;
    r3 = r31 + 0x1BC;
    if (fn_80105BC0(r3, 2)) {
        r4 = *(u8*)(r31 + 0x19A);
        return (u8)(r4 + fn_801F1BD0() + 0x14);
    }
    return *(u8*)(r31 + 0x19A);
}

u8 fn_8003863C(void *arg0) {
    s32 r31 = (s32)arg0;
    s32 r3 = fn_80105BC0(r31 + 0x1BC, 2);
    if (r3 != 0) {
        return ((u8*)r31)[0x19A] + 0x14;
    }
    return ((u8*)r31)[0x19A];
}

void fn_8003868C(void *arg0, s8 arg1) {
    if (arg1 != -1) {
        if (arg1 >= 0) {
            if (arg1 > 0x64) {
                return;
            }
            /* Duplicate return node #4. Try simplifying control flow for better match */
            M2C_FIELD(arg0, s8 *, 0x19B) = arg1;
            return;
        }
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x19B) = arg1;
}

u8 fn_800386B0(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x190), u8 *, 8);
    if ((temp_r0 == 1) || (temp_r0 == 2) || (temp_r0 == 3)) {
        return 0xFFU;
    }
    return M2C_FIELD(arg0, u8 *, 0x19B);
}

s32 fn_800386E0(s32 arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (fn_80105BC0(arg0 + 0x1BC, 0x3D) != 0) {
        var_r31 = 0x32;
    }
    if (fn_80105BC0(arg0 + 0x1BC, 0x3E) != 0) {
        var_r31 = -0x32;
    }
    return var_r31;
}

s8 fn_80038748(void *arg0) {
    s8 var_r5;
    s8 var_r4;
    void **var_r4_2;

    var_r5 = 0;
    // First branch check
    if ((*(u8*)((char*)arg0 + 0x1d1) & 0x08) && (*(u32*)((char*)arg0 + 0x1cc) != 0)) {
        var_r4 = 0;
    } else if ((*(u8*)((char*)arg0 + 0x1d9) & 0x08) && (*(u32*)((char*)arg0 + 0x1d4) != 0)) {
        var_r4 = 1;
    } else if ((*(u8*)((char*)arg0 + 0x1e1) & 0x08) && (*(u32*)((char*)arg0 + 0x1dc) != 0)) {
        var_r4 = 2;
    } else if ((*(u8*)((char*)arg0 + 0x1e9) & 0x08) && (*(u32*)((char*)arg0 + 0x1e4) != 0)) {
        var_r4 = 3;
    } else {
        var_r4 = -1;
    }
    
    // Check for valid offset and load value
    if (var_r4 < 0) {
        var_r4_2 = NULL;
    } else {
        var_r4_2 = (void**)((char*)arg0 + ((var_r4 * 8) + 0x1cc));
    }
    
    if (var_r4_2 != NULL) {
        var_r5 = *(s8*)(((s32*)*var_r4_2)[0x27/4]);
    }
    
    // Second branch check
    if ((*(u8*)((char*)arg0 + 0x1f1) & 0x08) && (*(u32*)((char*)arg0 + 0x1ec) != 0)) {
        var_r4 = 0;
    } else if ((*(u8*)((char*)arg0 + 0x1f9) & 0x08) && (*(u32*)((char*)arg0 + 0x1f4) != 0)) {
        var_r4 = 1;
    } else if ((*(u8*)((char*)arg0 + 0x201) & 0x08) && (*(u32*)((char*)arg0 + 0x1fc) != 0)) {
        var_r4 = 2;
    } else if ((*(u8*)((char*)arg0 + 0x209) & 0x08) && (*(u32*)((char*)arg0 + 0x204) != 0)) {
        var_r4 = 3;
    } else {
        var_r4 = -1;
    }
    
    // Check for valid offset and load value
    if (var_r4 < 0) {
        var_r4_2 = NULL;
    } else {
        var_r4_2 = (void**)((char*)arg0 + ((var_r4 * 8) + 0x1ec));
    }
    
    if (var_r4_2 != NULL) {
        var_r5 += *(s8*)(((s32*)*var_r4_2)[0x27/4]);
    }
    
    return var_r5;
}

s8 fn_800388C8(void *arg0) {
    s8 var_r4;
    s8 var_r5;
    void **ptr1;
    void **ptr2;
    
    var_r5 = 0;
    // First check block
    if ((*(u8*)((u8*)arg0 + 0x1D1) & 0x80) != 0 && (*(u32*)((u8*)arg0 + 0x1CC) != 0)) {
        var_r4 = 0;
    } else if ((*(u8*)((u8*)arg0 + 0x1D9) & 0x80) != 0 && (*(u32*)((u8*)arg0 + 0x1D4) != 0)) {
        var_r4 = 1;
    } else if ((*(u8*)((u8*)arg0 + 0x1E1) & 0x80) != 0 && (*(u32*)((u8*)arg0 + 0x1DC) != 0)) {
        var_r4 = 2;
    } else if ((*(u8*)((u8*)arg0 + 0x1E9) & 0x80) != 0 && (*(u32*)((u8*)arg0 + 0x1E4) != 0)) {
        var_r4 = 3;
    } else {
        var_r4 = -1;
    }
    
    if (var_r4 >= 0) {
        ptr1 = (void**)((u8*)arg0 + ((var_r4 * 8) + 0x1CC));
        if (*ptr1 != NULL) {
            var_r5 = *(s8*)((u8*)(*ptr1) + 0x28);
        }
    }
    
    // Second check block
    if ((*(u8*)((u8*)arg0 + 0x1F1) & 0x80) != 0 && (*(u32*)((u8*)arg0 + 0x1EC) != 0)) {
        var_r4 = 0;
    } else if ((*(u8*)((u8*)arg0 + 0x1F9) & 0x80) != 0 && (*(u32*)((u8*)arg0 + 0x1F4) != 0)) {
        var_r4 = 1;
    } else if ((*(u8*)((u8*)arg0 + 0x201) & 0x80) != 0 && (*(u32*)((u8*)arg0 + 0x1FC) != 0)) {
        var_r4 = 2;
    } else if ((*(u8*)((u8*)arg0 + 0x209) & 0x80) != 0 && (*(u32*)((u8*)arg0 + 0x204) != 0)) {
        var_r4 = 3;
    } else {
        var_r4 = -1;
    }
    
    if (var_r4 >= 0) {
        ptr2 = (void**)((u8*)arg0 + ((var_r4 * 8) + 0x1EC));
        if (*ptr2 != NULL) {
            var_r5 += *(s8*)((u8*)(*ptr2) + 0x28);
        }
    }
    
    return var_r5;
}

s32 fn_800398B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if (arg0 < 0 || arg0 > 9)
        return -1;
    
    // Simple case handling to start
    switch (arg0) {
        case 0:
            return 0; // Placeholder for complex logic
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 0;
        case 5:
            return 1;
        case 6:
            return 2;
        case 7:
            return 3;
        case 8:
            return 0;
        case 9:
            return -1;
    }
    
    return -1;
}

extern u8 lbl_8026A3A8[176];
void *fn_800A88E0(u32);
void *fn_8003A064(void *arg0) {
 void *value;
 if ((u8)fn_80105BC0((u8*)arg0+0x1BC,2)==0) return fn_800A88E0(M2C_FIELD(arg0,u32*,0x188));
 value=(void*)M2C_FIELD(arg0,void**,0x188);
 if (value==(void*)fn_80019E8C(lbl_8026A3A8+0x75)) return lbl_8026A3A8+0x7D;
 value=(void*)M2C_FIELD(arg0,void**,0x188);
 if (value==(void*)fn_80019E8C(lbl_8026A3A8+0x94)) return lbl_8026A3A8+0x88;
 return fn_800A88E0(M2C_FIELD(arg0,u32*,0x188));
}

void *fn_8003A114(void *arg0) {
 void *value;
 if ((u8)fn_80105BC0((u8*)arg0+0x1BC,2)==0) return M2C_FIELD(M2C_FIELD(arg0,void**,0x188),void**,0xC);
 value=M2C_FIELD(arg0,void**,0x188);
 if (value==(void*)fn_80019E8C(lbl_8026A3A8+0x75)) return lbl_8026A3A8+0x9D;
 value=M2C_FIELD(arg0,void**,0x188);
 if (value==(void*)fn_80019E8C(lbl_8026A3A8+0x94)) return lbl_8026A3A8+0xA6;
 return M2C_FIELD(M2C_FIELD(arg0,void**,0x188),void**,0xC);
}

s8 fn_8003A1C4(void *arg0) {
    return (s8) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x41) + (((u8) M2C_FIELD(arg0, u8 *, 0x1A6) >> 2U) & 7));
}

s8 fn_8003A5B4(void *arg0) {
    s8 var_r4;
    s8 var_r6;
    s8 var_r7;
    void **var_r4_2;
    
    var_r6 = 0;
    
    // First conditional block
    if ((((u8*)arg0)[0x1D1] & 0x80) && (*(int*)((char*)arg0 + 0x1CC) != 0)) {
        var_r4 = 0;
    } else if ((((u8*)arg0)[0x1D9] & 0x80) && (*(int*)((char*)arg0 + 0x1D4) != 0)) {
        var_r4 = 1;
    } else if ((((u8*)arg0)[0x1E1] & 0x80) && (*(int*)((char*)arg0 + 0x1DC) != 0)) {
        var_r4 = 2;
    } else if ((((u8*)arg0)[0x1E9] & 0x80) && (*(int*)((char*)arg0 + 0x1E4) != 0)) {
        var_r4 = 3;
    } else {
        var_r4 = -1;
    }
    
    // Handle the pointer calculation
    if (var_r4 < 0) {
        var_r4_2 = NULL;
    } else {
        var_r4_2 = (void**)((char*)arg0 + (var_r4 * 8) + 0x1CC);
    }
    
    // Second conditional block - similar logic
    if (var_r4_2 != NULL) {
        var_r6 = *(u8*)((char*)(*var_r4_2) + 0x28);
    }
    
    // Calculate final value using known struct offsets
    var_r7 = ((u8*)arg0)[0x188] + 
             ((u8*)arg0)[0x18C] + 
             ((u8*)arg0)[0x1A9] + 
             var_r6;
    
    // Bounds checking
    if (var_r7 > 99) {
        var_r7 = 99;
    }
    if (var_r7 < 0) {
        var_r7 = 0;
    }
    
    return var_r7;
}

s8 fn_8003AEB0(void *arg0) {
    s32 fn_80038A48();
    s8 var_r31;
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x18C);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x50);
    var_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x21) + (M2C_FIELD(temp_r6, u8 *, 0x48) + M2C_FIELD(arg0, u8 *, 0x1AF));
    if (var_r31 > (s8) temp_r6_2) {
        var_r31 = (s8) temp_r6_2;
    }
    if (var_r31 < 0) {
        var_r31 = 0;
    }
    var_r3 = var_r31 + fn_80038A48();
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

s8 fn_8003AF28(void *arg0) {
    s32 fn_80038F28();
    s8 var_r31;
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x18C);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x4F);
    var_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x20) + (M2C_FIELD(temp_r6, u8 *, 0x47) + M2C_FIELD(arg0, u8 *, 0x1AE));
    if (var_r31 > (s8) temp_r6_2) {
        var_r31 = (s8) temp_r6_2;
    }
    if (var_r31 < 0) {
        var_r31 = 0;
    }
    var_r3 = var_r31 + fn_80038F28();
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

s8 fn_8003B258(void *arg0) {
    s32 fn_80039408();
    s8 var_r31;
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x18C);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x4D);
    var_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1E) + (M2C_FIELD(temp_r6, u8 *, 0x45) + M2C_FIELD(arg0, u8 *, 0x1AC));
    if (var_r31 > (s8) temp_r6_2) {
        var_r31 = (s8) temp_r6_2;
    }
    if (var_r31 < 0) {
        var_r31 = 0;
    }
    var_r3 = var_r31 + fn_80039408();
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

s8 fn_8003B2D0(void *arg0) {
    s8 var_r5;
    s8 var_r6;
    s8 var_r4;
    u8 temp_r6_2;
    void **var_r4_2;
    
    void *temp_r6 = ((void**)arg0)[0x18C/4];
    temp_r6_2 = ((u8*)temp_r6)[0x4C];
    var_r5 = ((u8*)(((void**)arg0)[0x188/4]))[0x1D] + ((u8*)temp_r6)[0x44] + ((u8*)arg0)[0x1AB];
    
    if (var_r5 > (s8) temp_r6_2) {
        var_r5 = (s8) temp_r6_2;
    }
    if (var_r5 < 0) {
        var_r5 = 0;
    }
    
    var_r6 = 0;
    
    // Check bit 7 of field 0x1D1
    if ((((u8*)arg0)[0x1D1] >> 7) & 1) {
        if (((u32*)arg0)[0x1CC/4] != 0) {
            var_r4 = 0;
            goto skip_checks;
        }
    }
    
    // Check bit 7 of field 0x1D9  
    if ((((u8*)arg0)[0x1D9] >> 7) & 1) {
        if (((u32*)arg0)[0x1D4/4] != 0) {
            var_r4 = 1;
            goto skip_checks;
        }
    }
    
    // Check bit 7 of field 0x1E1
    if ((((u8*)arg0)[0x1E1] >> 7) & 1) {
        if (((u32*)arg0)[0x1DC/4] != 0) {
            var_r4 = 2;
            goto skip_checks;
        }
    }
    
    // Check bit 7 of field 0x1E9
    if ((((u8*)arg0)[0x1E9] >> 7) & 1) {
        if (((u32*)arg0)[0x1E4/4] != 0) {
            var_r4 = 3;
            goto skip_checks;
        }
    }
    
    var_r4 = -1;
    
skip_checks:
    if (var_r4 < 0) {
        var_r4_2 = NULL;
    } else {
        var_r4_2 = (void**)((u8*)arg0 + (var_r4 * 8) + 0x1CC);
    }
    
    if (var_r4_2 != NULL) {
        var_r6 = *(s8*)((u8*)var_r4_2 + 0x7C);
    }
    
    // Check bit 7 of field 0x1F1
    if ((((u8*)arg0)[0x1F1] >> 7) & 1) {
        if (((u32*)arg0)[0x1EC/4] != 0) {
            var_r4 = 0;
            goto skip_checks_2;
        }
    }
    
    // Check bit 7 of field 0x1F9  
    if ((((u8*)arg0)[0x1F9] >> 7) & 1) {
        if (((u32*)arg0)[0x1F4/4] != 0) {
            var_r4 = 1;
            goto skip_checks_2;
        }
    }
    
    // Check bit 7 of field 0x201
    if ((((u8*)arg0)[0x201] >> 7) & 1) {
        if (((u32*)arg0)[0x1FC/4] != 0) {
            var_r4 = 2;
            goto skip_checks_2;
        }
    }
    
    // Check bit 7 of field 0x209
    if ((((u8*)arg0)[0x209] >> 7) & 1) {
        if (((u32*)arg0)[0x204/4] != 0) {
            var_r4 = 3;
            goto skip_checks_2;
        }
    }
    
    var_r4 = -1;
    
skip_checks_2:
    if (var_r4 < 0) {
        var_r4_2 = NULL;
    } else {
        var_r4_2 = (void**)((u8*)arg0 + (var_r4 * 8) + 0x1EC);
    }
    
    if (var_r4_2 != NULL) {
        var_r6 = (s8)(var_r6 + *(s8*)((u8*)var_r4_2 + 0x7C));
    }
    
    return (s8) (var_r5 + var_r6);
}

s8 fn_8003B490(void *arg0) {
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x188);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x53);
    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x24) + (M2C_FIELD(temp_r6, u8 *, 0x4B) + M2C_FIELD(arg0, u8 *, 0x1B2));
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B4D4(void *arg0) {
    u8 *temp_r4;
    s8 var_r3;
    u8 temp_r6;

    temp_r4 = M2C_FIELD(arg0, void **, 0x188);
    temp_r6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x52);
    var_r3 = M2C_FIELD(temp_r4, u8 *, 0x23) + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x4A) + M2C_FIELD(arg0, u8 *, 0x1B1));
    if (var_r3 > (s8) temp_r6) {
        var_r3 = (s8) temp_r6;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B518(void *arg0) {
    s8 var_r3;

    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x22) + M2C_FIELD(arg0, u8 *, 0x1B0);
    if (var_r3 > 0x28) {
        var_r3 = 0x28;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B548(void *arg0) {
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = *(void **)((u8 *)arg0 + 0x18C);
    temp_r6_2 = *((u8 *)temp_r6 + 0x50);
    var_r3 = *((u8 *)*(void **)((u8 *)arg0 + 0x188) + 0x21) + (*((u8 *)temp_r6 + 0x48) + *((u8 *)arg0 + 0x1AF));
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B58C(void *arg0) {
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x188);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x4F);
    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x20) + (M2C_FIELD(temp_r6, u8 *, 0x47) + M2C_FIELD(arg0, u8 *, 0x1AE));
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B5D0(void *arg0) {
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x18C);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x4E);
    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1F) + (M2C_FIELD(temp_r6, u8 *, 0x46) + M2C_FIELD(arg0, u8 *, 0x1AD));
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B614(void *arg0) {
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x18C);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x4D);
    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1E) + (M2C_FIELD(temp_r6, u8 *, 0x45) + M2C_FIELD(arg0, u8 *, 0x1AC));
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B658(void *arg0) {
    void *temp_r4;
    u8 temp_r6_2;
    u8 temp_r5;
    s8 var_r3;

    temp_r4 = M2C_FIELD(arg0, void **, 0x18C);
    temp_r5 = M2C_FIELD(arg0, u8 *, 0x1AB);
    temp_r6_2 = M2C_FIELD(temp_r4, u8 *, 0x4C);
    var_r3 = (M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1D) + M2C_FIELD(temp_r4, u8 *, 0x44)) + temp_r5;
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

void fn_8003B69C(s32 arg0) {
    M2C_UNK fn_800173B4(s32, s32);
    fn_800173B4(arg0 + 0x236, arg0);
}

void fn_8003B6C4(void* arg0, s32 arg1) {
    *(s32*)((char*)arg0 + 0x190) = arg1;
    fn_800173B4((char*)arg0 + 0x236, arg0);
}

void fn_8003B6F0(void *arg0, s8 arg1) {
    s32 i;
    void *ptr;
    s8 temp_arg1 = arg1;

    // Initialize various fields to 0
    ((u32*)arg0)[0x180/4] = 0;
    ((u32*)arg0)[0x184/4] = 0;
    ((u32*)arg0)[0x188/4] = 0;
    ((u32*)arg0)[0x18C/4] = 0;
    ((u32*)arg0)[0x190/4] = 0;
    ((u32*)arg0)[0x194/4] = 0;
    ((u8*)arg0)[0x19A] = 0;
    ((u8*)arg0)[0x19B] = 0;
    ((u8*)arg0)[0x19C] = 0;
    ((u8*)arg0)[0x19D] = 0;
    ((u8*)arg0)[0x19E] = 0;
    ((u8*)arg0)[0x19F] = 0;
    ((u32*)arg0)[0x1A0/4] = 0;

    // Call fn_80104410 with offset
    fn_80104410((char*)arg0 + 0x1A4);

    // Set up loop variables
    ptr = arg0;
    ((u8*)arg0)[0x1A8] = 0;
    i = 0;
    
    ((u8*)arg0)[0x1B2] = 0;
    ((u8*)arg0)[0x1B1] = 0;
    ((u8*)arg0)[0x1B0] = 0;
    ((u8*)arg0)[0x1AF] = 0;
    ((u8*)arg0)[0x1AE] = 0;
    ((u8*)arg0)[0x1AD] = 0;
    ((u8*)arg0)[0x1AC] = 0;
    ((u8*)arg0)[0x1AB] = 0;
    ((u8*)arg0)[0x1BB] = 0;
    ((u8*)arg0)[0x1BA] = 0;
    ((u8*)arg0)[0x1B9] = 0;
    ((u8*)arg0)[0x1B8] = 0;
    ((u8*)arg0)[0x1B7] = 0;
    ((u8*)arg0)[0x1B6] = 0;
    ((u8*)arg0)[0x1B5] = 0;
    ((u8*)arg0)[0x1B4] = 0;
    ((u32*)arg0)[0x1C8/4] = 0;
    ((u32*)arg0)[0x1C4/4] = 0;
    ((u32*)arg0)[0x1C0/4] = 0;
    ((u32*)arg0)[0x1BC/4] = 0;

    // Loop with 4 iterations
    do {
        fn_8001D580((char*)ptr + 0x1CC);
        fn_8001D580((char*)ptr + 0x1EC);
        i += 1;
        ptr = (char*)ptr + 8;
    } while (i < 4);

    // More field initializations
    ((u8*)arg0)[0x20C] = 0;
    ((u8*)arg0)[0x20D] = 0;
    ((u8*)arg0)[0x20E] = 0;
    ((u8*)arg0)[0x20F] = 0;
    ((u8*)arg0)[0x210] = 0;
    ((u8*)arg0)[0x211] = 0;
    ((u8*)arg0)[0x212] = 0;
    ((u8*)arg0)[0x213] = 0;
    ((u16*)arg0)[0x228/2] = 0;
    ((u16*)arg0)[0x22A/2] = 0;
    ((u16*)arg0)[0x22C/2] = 0;
    ((u16*)arg0)[0x22E/2] = 0;
    ((u16*)arg0)[0x230/2] = 0;
    ((u16*)arg0)[0x232/2] = 0;
    ((u8*)arg0)[0x234] = 0;
    ((u8*)arg0)[0x235] = 0;

    // Set arg1 to field at offset 0x198 if it's non-negative
    if (temp_arg1 >= 0) {
        ((u8*)arg0)[0x198] = temp_arg1;
    }
}

void fn_8003B844(void *arg0,s32 arg1) {
 void *outer=arg0;
 s32 i=0;
 void *entry;
 s32 j;
 while(i<arg1) {
  entry=outer; j=0;
  while(j<M2C_FIELD(outer,s32*,4)) {
   if (M2C_FIELD(entry,void**,8)!=0) M2C_FIELD(entry,void**,8)=(void*)fn_80019E8C(M2C_FIELD(entry,void**,8));
   entry=(u8*)entry+8; j++;
  }
  M2C_FIELD(fn_80019E8C(M2C_FIELD(outer,void**,0)),void**,0x50)=outer;
  i++;
  outer=(u8*)outer+(M2C_FIELD(outer,s32*,4)*8)+8;
 }
}

void fn_8003B8D4(void *arg0) {
    M2C_FIELD(arg0, u8 *, 4) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 4) >> 1);
    M2C_FIELD(arg0, u8 *, 5) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 5) >> 1);
    M2C_FIELD(arg0, u8 *, 6) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 6) >> 1);
    M2C_FIELD(arg0, u8 *, 7) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 7) >> 1);
    M2C_FIELD(arg0, u8 *, 8) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 8) >> 1);
    M2C_FIELD(arg0, u8 *, 9) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 9) >> 1);
}

s32 fn_8003B938(u8 arg0) {
    switch (arg0) {
    case 0:
        return 0;
    case 1:
        return 0x7;
    case 2:
        return 0x9;
    case 3:
        return 0x8;
    case 4:
        return 0x4;
    case 5:
        return 0x6;
    case 6:
        return 0x5;
    case 7:
        return 0x2;
    case 8:
        return 0x3;
    default:
        return 0;
    }
}

extern s32 gGameState;
void fn_8003B9AC(void) {
    if (gGameState != 0) {
        gGameState = 0;
    }

    switch(gGameState) {
    case 0:
        return;
    case 1:
        gGameState = 2;
        return;
    case 2:
        gGameState = 3;
        return;
    }
}

extern u16 lbl_8026A458[];
s32 fn_8003BA80(void *arg0) {
    s32 fn_802342B8(void *, void *);
    extern u16 lbl_8026A458[];
    s32 temp_r3;

    if (arg0 == NULL) {
        return 0;
    }
    if (fn_802342B8(arg0, (u8 *)lbl_8026A458 + 0x44) == 0) {
        return 1;
    }
    if (fn_802342B8(arg0, (u8 *)lbl_8026A458 + 0x49) == 0) {
        return 2;
    }
    if (fn_802342B8(arg0, (u8 *)lbl_8026A458 + 0x51) == 0) {
        return 3;
    }
    if (fn_802342B8(arg0, (u8 *)lbl_8026A458 + 0x56) == 0) {
        return 4;
    }
    if (fn_802342B8(arg0, (u8 *)lbl_8026A458 + 0x5C) == 0) {
        return 5;
    }
    if (fn_802342B8(arg0, (u8 *)lbl_8026A458 + 0x61) == 0) {
        return 6;
    }
    if (fn_802342B8(arg0, (u8 *)lbl_8026A458 + 0x67) == 0) {
        return 7;
    }
    temp_r3 = fn_802342B8(arg0, (u8 *)lbl_8026A458 + 0x6E);
    if (temp_r3 != 0) {
        return 0;
    }
    return 8;
}

s32 fn_8003BE50(s32 arg0)
{
    if (arg0 < 0)
    {
        return 0;
    }
    else
    {
        return arg0;
    }
}

u8 fn_8003C114(void *arg0) {
    if (fn_80105BC0((char*)arg0 + 0x1BC, 0xA) != 0) {
        return 0x14U;
    }
    return *(u8*)((char*)arg0 + 0x19C);
}

void fn_8003C15C(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80105BC0((s32)((char*)arg0 + 0x1BC), 9);
    if (temp_r3 != 0) {
        *(u8*)((char*)arg0 + 0x19C) = 0x14;
    } else {
        *(u8*)((char*)arg0 + 0x19C) = 0;
    }
    fn_80091CD8(arg0);
}

void fn_8003C1B4(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80105BC0((s32)((char*)arg0 + 0x1BC), 8);
    if (temp_r3 != 0) {
        temp_r3 = fn_80105BC0((s32)((char*)arg0 + 0x1BC), 9);
        if (temp_r3 != 0) {
            *(u8*)((char*)arg0 + 0x19C) = 0x14;
        } else {
            *(u8*)((char*)arg0 + 0x19C) = *(u8*)((char*)*(void**)((char*)arg0 + 0x188) + 0x56);
        }
    }
}

void fn_8003C3CC(void *arg0, s32 arg1) {
    void *fn_8000D2BC(s32);
    void fn_8017A5EC(s32, u8);
    void fn_8017A574(s32, s32);
    void fn_8017A5C4(s32, u16);

    s32 temp = M2C_FIELD(arg0, s32 *, 0x238);
    fn_8017A5EC(arg1, (u8) M2C_FIELD(fn_8000D2BC(temp), s32 *, 0x20));
    temp = M2C_FIELD(arg0, s32 *, 0x23C);
    fn_8017A5EC(arg1, (u8) M2C_FIELD(fn_8000D2BC(temp), s32 *, 0x20));
    temp = M2C_FIELD(arg0, s32 *, 0x240);
    fn_8017A5EC(arg1, M2C_FIELD(fn_8000D2BC(temp), u8 *, 4));
    temp = M2C_FIELD(arg0, s32 *, 0x244);
    fn_8017A5EC(arg1, M2C_FIELD(fn_8000D2BC(temp), u8 *, 4));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0x250));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0x251));
    fn_8017A574(arg1, M2C_FIELD(arg0, s32 *, 0x254));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 0x258));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 0x25A));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0x248));
}

void fn_8003C56C(void *arg0, s32 arg1) {
    s32 *fn_8000D354(s32);
    s32 *temp_r3;

    temp_r3 = fn_8000D354(arg1);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x244) = (s32) *temp_r3;
    }
}

void *fn_8000D354(s32);
void fn_8003C5EC(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = fn_8000D354(arg1);
    if (temp_r3 != NULL) {
        *(s32*)((char*)arg0 + 0x23C) = *(s32*)((char*)temp_r3 + 0x14);
        *(u8*)((char*)arg0 + 0x251) = 0;
    }
}

void fn_8003C634(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = fn_8000D354(arg1);
    if (temp_r3 != NULL) {
        *(s32*)((char*)arg0 + 0x238) = *(s32*)((char*)temp_r3 + 0x14);
        *(u8*)((char*)arg0 + 0x250) = 0;
    }
}

void fn_8003C67C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x238) = 0;
    M2C_FIELD(arg0, s32 *, 0x23C) = 0;
    M2C_FIELD(arg0, s32 *, 0x240) = 0;
    M2C_FIELD(arg0, s32 *, 0x244) = 0;
    M2C_FIELD(arg0, s8 *, 0x248) = 0;
    M2C_FIELD(arg0, s32 *, 0x24C) = 0;
    M2C_FIELD(arg0, s8 *, 0x250) = 0;
    M2C_FIELD(arg0, s8 *, 0x251) = 0;
    M2C_FIELD(arg0, s32 *, 0x254) = 0;
    M2C_FIELD(arg0, s16 *, 0x258) = 0;
    M2C_FIELD(arg0, s16 *, 0x25A) = 0;
    M2C_FIELD(arg0, s32 *, 0x25C) = 0;
    M2C_FIELD(arg0, s8 *, 0x260) = 0x10;
}

s32 fn_8003C7D0(s32 arg0) {
    u8 fn_80105BC0(s32, M2C_UNK);
    if (fn_80105BC0(arg0 + 0x1BC, 6) != 0) {
        return 1;
    }
    return fn_80105BC0(arg0 + 0x1BC, 7) != 0;
}

void fn_8003CCB0(struct unit* arg0)
{
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32*, 0x1C) = 0;
        M2C_FIELD(arg0, s32*, 0x18) = 0;
        
        if (M2C_FIELD(arg0, s32*, 0x14) > 0) {
            M2C_FIELD(arg0, s32*, 0x14) = 0;
        }
        
        M2C_FIELD(arg0, s32*, 0xA8) = 0;
        
        lbl_803672A8 = arg0;
    }
}

void* fn_8003CE88(void* arg0, s32 arg1, void* arg2) {
    // Simple version that might work better - the exact implementation needs to match structure of target
    if (arg0 == 0) {
        return arg2;
    }
    
    // Let's look at this simpler approach based on what we know from other functions
    *(s32*)((char*)arg2 + 0x0) = (s32)arg0;
    *(u8*)((char*)arg2 + 0x4) = (u8)arg1;
    *(u8*)((char*)arg2 + 0x5) = (u8)arg1;
    
    return arg2;
}

u8 fn_8003CFF0(s32 arg0, s32 arg1) {
    s32 fn_80038128(s32, s32);
    s8 fn_8003A778(s32);
    s8 fn_8003AF28(s32);
    s8 fn_8003AFA0();
    s32 temp_r31_2;
    s32 var_r0;
    s8 temp_r30;
    s8 temp_r31;

    temp_r31 = fn_8003AFA0();
    temp_r31_2 = (temp_r31 - fn_8003A778(arg1)) * 5;
    temp_r30 = fn_8003AF28(arg0);
    var_r0 = (temp_r31_2 + temp_r30 + 0x1E) - ((fn_80038128(arg0, arg1) * 2) & 0x1FE);
    if (var_r0 > 0x64) {
        var_r0 = 0x64;
    }
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    return (u8) var_r0;
}

u8 fn_8003D094(s32 arg0, u8 arg1) {
    u8 var_r31;

    if (arg1 == 0) {
        return 0U;
    }
    var_r31 = arg1;
    if (fn_80105BC0(arg0 + 0x1BC, 0xB) != 0) {
        var_r31 *= 2;
    }
    if (fn_80105BC0(arg0 + 0x1BC, 0x4B) != 0) {
        var_r31 = (var_r31 * 7) / 10;
        if ((s32) var_r31 < 1) {
            var_r31 = 1;
        }
    }
    if ((s32) var_r31 > 0x64) {
        var_r31 = 0x64;
    }
    return var_r31;
}

void fn_8003D5FC(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, u8 *, 0x199) = arg1;
    }
}

void fn_8003D60C(void *arg0, s32 arg1) {
    M2C_UNK fn_800156A0(s32, void *);
    M2C_UNK fn_80015718(void *, void *, s32);
    M2C_UNK fn_800946F0(void *);
    extern M2C_UNK lbl_802CA264;
    s32 temp_r5;

    if (arg1 != 1) {
        if (arg1 < 1) {
            if (arg1 < 0) {

            } else {
                goto block_5;
            }
        } else if (arg1 < 4) {
block_5:
            fn_800946F0(arg0);
        }
    }
    fn_800156A0(M2C_FIELD(arg0, s32 *, 0x190), arg0);
    temp_r5 = arg1 * 0xC;
    fn_80015718(&lbl_802CA264 + temp_r5, arg0, temp_r5);
}

s32 fn_8003DC80(s32 arg0, s32 arg1) {
    s8 fn_8003AEB0(s32);
    s8 temp_r31;

    temp_r31 = fn_8003AEB0(arg1);
    return temp_r31 < fn_8003AEB0(arg0);
}

void fn_8003DCDC(void *arg0, void *arg1, s32 arg2, s8 *arg3, s8 *arg4) {
    u8 r9;
    u8 r0;
    u8 r8;
    u8 r3;

    r9 = *(u8 *) ((u8 *) arg1 + 0x19E);
    r0 = *(u8 *) ((u8 *) arg0 + 0x19E);
    r8 = *(u8 *) ((u8 *) arg0 + 0x19F);
    r3 = *(u8 *) ((u8 *) arg1 + 0x19F);

    *arg3 = (arg2 * (r0 - r9)) + r9;
    *arg4 = ((r3 - r8) * arg2) + r3;
}

s32 fn_8003DD20(s32 arg0, s32 arg1) {
    s8 fn_8003A1E0(s32);
    s8 temp_r31;

    temp_r31 = fn_8003A1E0(arg1);
    return temp_r31 <= (fn_8003A1E0(arg0) + 2);
}

s32 fn_8003DD7C(s32 arg0, s32 arg1) {
    s8 fn_8003A1E0(s32);
    s32 temp_r31;
    s32 temp_r4;

    if (fn_80105BC0(arg1 + 0x1BC, 3) != 0) {
        return 0;
    }
    temp_r31 = fn_8003A1E0(arg1);
    temp_r4 = fn_8003A1E0(arg0);
    if (temp_r31 <= (temp_r4 - 2)) {
        return 1;
    }
    return 0;
}

void fn_8003E8DC(void *arg0, void *arg1) {
    u8 temp_r0;
    u8 temp_r4;
    u8 temp_r5;
    u8 temp_r6;
    u8 temp_r7;
    void *temp_r3;
    void *temp_r6_2;
    void *temp_r6_3;
    void *temp_r6_4;
    void *temp_r6_5;
    void *temp_r6_6;
    void *temp_r6_7;
    
    temp_r3 = M2C_FIELD(arg0, void **, 0x188);
    if (M2C_FIELD(temp_r3, u32 *, 0x1C) != 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x19D);
    if ((temp_r0 == 1) || (temp_r0 == 2)) {
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x1A4);
        M2C_FIELD(arg0, u8 *, 0x1A4) = temp_r4 + 1;
        if ((temp_r4 + 1) == M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x30)) {
            temp_r5 = M2C_FIELD(arg0, u8 *, 0x1A5);
            M2C_FIELD(arg0, u8 *, 0x1A5) = temp_r5 + 1;
        }
        return;
    }
    if ((temp_r0 != 3) && (temp_r0 != 4)) {
        return;
    }
    temp_r6 = M2C_FIELD(arg0, u8 *, 0x1A4);
    if (temp_r6 != 0) {
        M2C_FIELD(arg0, u8 *, 0x1A4) = temp_r6 - 1;
        if ((temp_r6 - 1) == 0) {
            temp_r7 = M2C_FIELD(arg0, u8 *, 0x1A5);
            M2C_FIELD(arg0, u8 *, 0x1A5) = temp_r7 - 1;
        }
    }
    if (M2C_FIELD(arg1, s32 *, 0x4) == 0) {
        return;
    }
    temp_r6_2 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AC) = (s8) ((M2C_FIELD(temp_r6_2, u8 *, 0x4D) - M2C_FIELD(temp_r6_2, u8 *, 0x45)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1E));
    temp_r6_3 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AD) = (s8) ((M2C_FIELD(temp_r6_3, u8 *, 0x4E) - M2C_FIELD(temp_r6_3, u8 *, 0x46)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1F));
    temp_r6_4 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AE) = (s8) ((M2C_FIELD(temp_r6_4, u8 *, 0x4F) - M2C_FIELD(temp_r6_4, u8 *, 0x47)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x20));
    temp_r6_5 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AF) = (s8) ((M2C_FIELD(temp_r6_5, u8 *, 0x50) - M2C_FIELD(temp_r6_5, u8 *, 0x48)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x21));
    M2C_FIELD(arg0, s8 *, 0x1B0) = (s8) (0x28 - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x22));
    temp_r6_6 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1B1) = (s8) ((M2C_FIELD(temp_r6_6, u8 *, 0x52) - M2C_FIELD(temp_r6_6, u8 *, 0x4A)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x23));
    temp_r6_7 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1B2) = (s8) ((M2C_FIELD(temp_r6_7, u8 *, 0x53) - M2C_FIELD(temp_r6_7, u8 *, 0x4B)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x24));
    M2C_FIELD(arg0, s8 *, 0x1AA) = (s8) (0x14 - M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x3E));
}

void fn_8003EA24(void *arg0) {
    void *temp_r31;
    s32 temp_r6;

    temp_r31 = M2C_FIELD(arg0, void **, 0x194);
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) & 0xFFFFFFFD);
    temp_r6 = M2C_FIELD(temp_r31, s32 *, 0x1A0) & 0xFFFFFFFB;
    M2C_FIELD(temp_r31, s32 *, 0x1A0) = temp_r6;
    M2C_FIELD(arg0, void **, 0x194) = NULL;
    M2C_FIELD(temp_r31, s32 *, 0x194) = 0;
    fn_8003816C(temp_r31, temp_r6);
    M2C_FIELD(temp_r31, s32 *, 0x1A0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x1A0) | 1);
}

void fn_8003EA84(void *arg0, void *arg1) {
    fn_8003816C(arg1, *(u8*)((u8*)arg0 + 0x19F), *(u8*)((u8*)arg0 + 0x19E));
    *(s32*)((u8*)arg0 + 0x1A0) |= 2;
    *(s32*)((u8*)arg1 + 0x1A0) |= 4;
    *(void**)((u8*)arg0 + 0x194) = arg1;
    *(void**)((u8*)arg1 + 0x194) = arg0;
}

void *fn_8003F1AC(s32 arg0) {
    extern u16 lbl_802CA264;
    return (void*)((char*)&lbl_802CA264 + (arg0 * 0x18));
}

u8 fn_8003F1C0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 8);
}

s32 fn_8003F1C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x190);
}

s32 fn_8003F1D0(s32 *arg0, s32 arg1) {
    return *arg0 & arg1;
}

void fn_8003F1DC(s32 *arg0, s32 arg1) {
    *arg0 |= arg1;
}

void fn_8003F1EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x194) = arg1;
}

void fn_8003F1F4(s32 *arg0, s32 arg1) {
    *arg0 &= ~arg1;
}

s32 fn_8003F204(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x194);
}

u8 fn_8003F20C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x19E);
}

u8 fn_8003F214(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x19F);
}

s32 fn_8003F21C(s32 arg0) {
    return arg0 + 0x1A0;
}

void fn_8003FCCC(s32 arg0) {
    void fn_8003F87C(s32, s32);
    fn_8003F87C(arg0, 0);
}

extern u8 lbl_80366DC0[7];
int fn_8003FCF0(void *arg0) {
    int i;
    char* ptr;
    
    ptr = (char*)arg0 + 0x18;
    for (i = 0; i < 7; i++) {
        if (((u8*)ptr)[i] != lbl_80366DC0[i]) {
            goto label_1;
        }
    }

    return 1;

label_1:
    ptr = (char*)arg0 - 0x20 + 0x18;
    for (i = 0; i < 7; i++) {
        if (((u8*)ptr)[i] != lbl_80366DC0[i]) {
            return 0;
        }
    }

    return 1;
}

void fn_8003FF90(s32 arg0, u32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 == 0) {
        var_r4 = 3;
    }
    fn_8000CAF0((u16*)0x802857A0, var_r4);
    fn_80040028(arg0);
}

void fn_8003FFD8(void) {
    M2C_UNK fn_8003FFF8();
    fn_8003FFF8();
}

s32 fn_80040824(void) {
    return 0;
}

s32 fn_80040844(void) {
    extern u16 *lbl_803672AC;
    return (s32)lbl_803672AC;
}

void fn_8004084C(s32 arg0) {
    extern u16 *lbl_803672AC;
    lbl_803672AC = (u16 *)arg0;
}

void fn_800408A8(void* arg0, void* arg1, s32 arg2) {
    if (arg2 == 0) {
        return;
    }
    
    // Initialize to zero first
    M2C_FIELD(arg0, u8*, 0x196) = 0;
    M2C_FIELD(arg0, u8*, 0x197) = 0;
    M2C_FIELD(arg0, u8*, 0x1A0) = 0;
    M2C_FIELD(arg0, u8*, 0x1A4) = 0;
    M2C_FIELD(arg0, u8*, 0x1A8) = 0;
    M2C_FIELD(arg0, u8*, 0x1A9) = 0;
    M2C_FIELD(arg0, u8*, 0x1B0) = 0;
    M2C_FIELD(arg0, u8*, 0x1B7) = 0;
    M2C_FIELD(arg0, u8*, 0x1B8) = 0;
    M2C_FIELD(arg0, u8*, 0x1B9) = 0;
    M2C_FIELD(arg0, u8*, 0x1BA) = 0;

    if (arg2 & 1) {
        M2C_FIELD(arg0, u8*, 0x196) = 1;
    }
    
    if (arg2 & 2) {
        M2C_FIELD(arg0, u8*, 0x197) = 2;
    }

    if (arg2 & 4) {
        M2C_FIELD(arg0, u8*, 0x1A0) = *(u8*)arg1;
        arg1 = (u8*)arg1 + 1;
    }
    
    if (arg2 & 8) {
        M2C_FIELD(arg0, u8*, 0x1A4) = *(u8*)arg1;
        arg1 = (u8*)arg1 + 1;
    }

    if (arg2 & 0x10) {
        *(u8*)arg1; // Read into temp value, then advance
        arg1 = (u8*)arg1 + 1; 
        M2C_FIELD(arg0, u8*, 0x1A8) = *(u8*)arg1;
        arg1 = (u8*)arg1 + 1;
        M2C_FIELD(arg0, u8*, 0x1A9) = *(u8*)arg1;
        arg1 = (u8*)arg1 + 1;
    }

    if (arg2 & 0x20) {
        M2C_FIELD(arg0, u8*, 0x1B0) = *(u8*)arg1;
        arg1 = (u8*)arg1 + 1;
    }

    if (arg2 & 0x40) {
        M2C_FIELD(arg0, u8*, 0x1B7) = *(u8*)arg1;
        arg1 = (u8*)arg1 + 1;
        M2C_FIELD(arg0, u8*, 0x1B8) = *(u8*)arg1;
        arg1 = (u8*)arg1 + 1;
    }
   
    if (arg2 & 0x80) {
        *(u8*)arg1; // Read first byte
        arg1 = (u8*)arg1 + 1; 
        M2C_FIELD(arg0, u8*, 0x1B9) = *(u8*)arg1;
        arg1 = (u8*)arg1 + 1;
        M2C_FIELD(arg0, u8*, 0x1BA) = *(u8*)arg1;
        arg1 = (u8*)arg1 + 1;
    }
}

u8 fn_80040B1C(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_r6;

    temp_r6 = M2C_FIELD(arg0, u8 *, 0x61);
    if (arg1 < (s32) temp_r6) {
        return 1U;
    }
    if (arg2 < (s32) temp_r6) {
        return 1U;
    }
    if (arg1 >= (s32) (M2C_FIELD(arg0, s16 *, 0) - temp_r6)) {
        return 1U;
    }
    return (u8) ((M2C_FIELD(arg0, s16 *, 2) - temp_r6) <= arg2);
}

void fn_80040F90(void *arg0) {
    extern u8 lbl_80330708[];
    extern s8 lbl_80367289;
    extern s8 lbl_8036728A;

    s32 temp_r4;
    s32 temp_r3;
    s8 var_r5;
    s8 var_r5_2;
    s8 var_r5_3;

    temp_r4 = *(s32*)((char*)arg0 + 0x64) & 0xC0000;
    switch (temp_r4) {                              /* switch 1; irregular */
    case 0x80000:                                   /* switch 1 */
        var_r5 = 1;
        if (*(u8*)((char*)lbl_80330708 + 0xA6) != 1) {
            var_r5 = 0;
        }
        lbl_80367289 = var_r5;
        break;
    case 0xC0000:                                   /* switch 1 */
        var_r5_2 = 2;
        if (*(u8*)((char*)lbl_80330708 + 0xA6) != 1) {
            var_r5_2 = 0;
        }
        lbl_80367289 = var_r5_2;
        break;
    case 0x40000:                                   /* switch 1 */
        var_r5_3 = 3;
        if (*(u8*)((char*)lbl_80330708 + 0xA6) != 1) {
            var_r5_3 = 0;
        }
        lbl_80367289 = var_r5_3;
        break;
    default:                                        /* switch 1 */
        lbl_80367289 = 0;
        break;
    }
    temp_r3 = *(s32*)((char*)arg0 + 0x64) & 0x01F00000;
    switch (temp_r3) {                              /* switch 2; irregular */
    case 0x0:                                       /* switch 2 */
        lbl_8036728A = 0;
        return;
    case 0x100000:                                  /* switch 2 */
        lbl_8036728A = 1;
        return;
    case 0x200000:                                  /* switch 2 */
        lbl_8036728A = 2;
        return;
    case 0x300000:                                  /* switch 2 */
        lbl_8036728A = 3;
        return;
    case 0x400000:                                  /* switch 2 */
        lbl_8036728A = 4;
        return;
    case 0x500000:                                  /* switch 2 */
        lbl_8036728A = 5;
        return;
    case 0x600000:                                  /* switch 2 */
        lbl_8036728A = 6;
        return;
    case 0x700000:                                  /* switch 2 */
        lbl_8036728A = 7;
        return;
    case 0x800000:                                  /* switch 2 */
        lbl_8036728A = 8;
        return;
    case 0x900000:                                  /* switch 2 */
        lbl_8036728A = 9;
        return;
    case 0xA00000:                                  /* switch 2 */
        lbl_8036728A = 0xA;
        return;
    case 0xB00000:                                  /* switch 2 */
        lbl_8036728A = 0xB;
        return;
    case 0xC00000:                                  /* switch 2 */
        lbl_8036728A = 0xC;
        return;
    case 0xD00000:                                  /* switch 2 */
        lbl_8036728A = 0xD;
        return;
    case 0xE00000:                                  /* switch 2 */
        lbl_8036728A = 0xE;
        return;
    case 0xF00000:                                  /* switch 2 */
        lbl_8036728A = 0xF;
        return;
    case 0x1000000:                                 /* switch 2 */
        lbl_8036728A = 0x10;
        return;
    case 0x1100000:                                 /* switch 2 */
        lbl_8036728A = 0x11;
        return;
    default:                                        /* switch 2 */
        lbl_8036728A = 0;
        return;
    }
}

#pragma use_lmw_stmw on
void fn_80042558(void *arg0) {
    void fn_8005FEE8(void *, f32);
    void fn_80049B78(void *, s32);
    s32 fn_80046400(void *, void *);
    void fn_80049C30(void *, s32);
    extern u8 lbl_8032BB58[];
    extern f32 lbl_80368F2C;
    u32 list[19];
    u8 *start = lbl_8032BB58;
    u8 *rec;
    s32 foundCount = 0;
    s8 x;
    s8 y;
    s32 i;
    s32 k;
    u8 *ent;
    u8 *found;
    u32 flags;
    s32 count;

    rec = start;
    while (rec[2] != 0) {
        x = (s8) rec[0];
        y = (s8) rec[1];
        switch (rec[2] - 0x21) {
            case 0:
                found = NULL;
                count = M2C_FIELD(arg0, s16 *, 6);
                for (i = count - 1; i >= 0; i--) {
                    ent = M2C_FIELD(arg0, u8 **, 0x14) + i * 0xB4;
                    flags = M2C_FIELD(M2C_FIELD(ent, u8 **, 0x10), u32 *, 0xBC);
                    if (flags & 0x410) {
                        continue;
                    }
                    if ((flags & 0xA00) != 0xA00) {
                        continue;
                    }
                    if (x < (s8) M2C_FIELD(ent, u8 *, 4)) {
                        continue;
                    }
                    if (x > (s8) M2C_FIELD(ent, u8 *, 6)) {
                        continue;
                    }
                    if (y < (s8) M2C_FIELD(ent, u8 *, 5)) {
                        continue;
                    }
                    if (y > (s8) M2C_FIELD(ent, u8 *, 7)) {
                        continue;
                    }
                    found = ent;
                    break;
                }
                if (found == NULL) {
                    break;
                }
                fn_8005FEE8(found + 0x14, lbl_80368F2C);
                break;
            case 1:
                found = NULL;
                count = M2C_FIELD(arg0, s16 *, 6);
                for (i = count - 1; i >= 0; i--) {
                    ent = M2C_FIELD(arg0, u8 **, 0x14) + i * 0xB4;
                    flags = M2C_FIELD(M2C_FIELD(ent, u8 **, 0x10), u32 *, 0xBC);
                    if ((flags & 0x1000) == 0) {
                        continue;
                    }
                    if (x < (s8) M2C_FIELD(ent, u8 *, 4)) {
                        continue;
                    }
                    if (x > (s8) M2C_FIELD(ent, u8 *, 6)) {
                        continue;
                    }
                    if (y < (s8) M2C_FIELD(ent, u8 *, 5)) {
                        continue;
                    }
                    if (y > (s8) M2C_FIELD(ent, u8 *, 7)) {
                        continue;
                    }
                    found = ent;
                    break;
                }
                if (found == NULL) {
                    break;
                }
                fn_80049B78(found, 0);
                break;
            case 2:
                found = NULL;
                count = M2C_FIELD(arg0, s16 *, 6);
                for (i = count - 1; i >= 0; i--) {
                    ent = M2C_FIELD(arg0, u8 **, 0x14) + i * 0xB4;
                    flags = M2C_FIELD(M2C_FIELD(ent, u8 **, 0x10), u32 *, 0xBC);
                    if ((flags & 0x800) == 0) {
                        continue;
                    }
                    if (x < (s8) M2C_FIELD(ent, u8 *, 4)) {
                        continue;
                    }
                    if (x > (s8) M2C_FIELD(ent, u8 *, 6)) {
                        continue;
                    }
                    if (y < (s8) M2C_FIELD(ent, u8 *, 5)) {
                        continue;
                    }
                    if (y > (s8) M2C_FIELD(ent, u8 *, 7)) {
                        continue;
                    }
                    found = ent;
                    break;
                }
                if (found == NULL) {
                    break;
                }
                fn_80046400(arg0, list);
                break;
            case 3:
                found = NULL;
                count = M2C_FIELD(arg0, s16 *, 6);
                for (i = count - 1; i >= 0; i--) {
                    ent = M2C_FIELD(arg0, u8 **, 0x14) + i * 0xB4;
                    flags = M2C_FIELD(M2C_FIELD(ent, u8 **, 0x10), u32 *, 0xBC);
                    if (flags & 0x410) {
                        continue;
                    }
                    if ((flags & 0x800) == 0) {
                        continue;
                    }
                    if (x < (s8) M2C_FIELD(ent, u8 *, 4)) {
                        continue;
                    }
                    if (x > (s8) M2C_FIELD(ent, u8 *, 6)) {
                        continue;
                    }
                    if (y < (s8) M2C_FIELD(ent, u8 *, 5)) {
                        continue;
                    }
                    if (y > (s8) M2C_FIELD(ent, u8 *, 7)) {
                        continue;
                    }
                    found = ent;
                    break;
                }
                if (found == NULL) {
                    break;
                }
                count = fn_80046400(arg0, list);
                for (k = 0; k < count; k++) {
                    fn_80049C30((void *) list[k], 0);
                }
                break;
            case 4:
                break;
            case 5:
                found = NULL;
                count = M2C_FIELD(arg0, s16 *, 6);
                for (i = count - 1; i >= 0; i--) {
                    ent = M2C_FIELD(arg0, u8 **, 0x14) + i * 0xB4;
                    flags = M2C_FIELD(M2C_FIELD(ent, u8 **, 0x10), u32 *, 0xBC);
                    if (flags & 0x410) {
                        continue;
                    }
                    if ((flags & 0x200) == 0) {
                        continue;
                    }
                    if (x < (s8) M2C_FIELD(ent, u8 *, 4)) {
                        continue;
                    }
                    if (x > (s8) M2C_FIELD(ent, u8 *, 6)) {
                        continue;
                    }
                    if (y < (s8) M2C_FIELD(ent, u8 *, 5)) {
                        continue;
                    }
                    if (y > (s8) M2C_FIELD(ent, u8 *, 7)) {
                        continue;
                    }
                    found = ent;
                    break;
                }
                if (found == NULL) {
                    break;
                }
                fn_8005FEE8(found + 0x14, lbl_80368F2C);
                break;
            case 6:
                found = NULL;
                count = M2C_FIELD(arg0, s16 *, 6);
                for (i = count - 1; i >= 0; i--) {
                    ent = M2C_FIELD(arg0, u8 **, 0x14) + i * 0xB4;
                    flags = M2C_FIELD(M2C_FIELD(ent, u8 **, 0x10), u32 *, 0xBC);
                    if (flags & 0x410) {
                        continue;
                    }
                    if ((flags & 0xA00) != 0xA00) {
                        continue;
                    }
                    if (x < (s8) M2C_FIELD(ent, u8 *, 4)) {
                        continue;
                    }
                    if (x > (s8) M2C_FIELD(ent, u8 *, 6)) {
                        continue;
                    }
                    if (y < (s8) M2C_FIELD(ent, u8 *, 5)) {
                        continue;
                    }
                    if (y > (s8) M2C_FIELD(ent, u8 *, 7)) {
                        continue;
                    }
                    found = ent;
                    break;
                }
                if (found == NULL) {
                    break;
                }
                M2C_FIELD(found, u8 *, 2) |= 1;
                break;
            case 7:
                break;
            case 8:
                break;
            default:
                break;
        }
        rec += 3;
    }
}
#pragma use_lmw_stmw reset

s32 fn_800431E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

extern f32 lbl_80368EE4;
void fn_800431EC(s32 arg1) {
    f32 temp_f2;
    f32 temp_f1;
    
    temp_f2 = ((f32*)lbl_803672A8)[2];
    temp_f1 = ((f32*)lbl_803672A8)[3];
    
    fn_80222644(arg1, (s32)temp_f2, (s32)temp_f1, 0, 4, 0, 0, 0);
    fn_802228D8(arg1, 0, 0, 0, 0, 0, lbl_80368EE4, lbl_80368EE4, lbl_80368EE4);
}

void fn_80043A00(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_80043838(s32, f32, f32, f32, f32, f32, f32);
    extern f32 lbl_80368F00;
    s16 temp_r11;
    s16 temp_r12;
    s32 temp_r8;

    temp_r12 = M2C_FIELD(arg0, s16 *, 0);
    temp_r11 = M2C_FIELD(arg0, s16 *, 2);
    temp_r8 = M2C_FIELD(arg0, u8 *, 0x61) * 2;
    fn_80043838(arg3, (f32) temp_r12 * lbl_80368F00, (f32) temp_r11 * lbl_80368F00, (f32) (temp_r12 - temp_r8), (f32) (temp_r11 - temp_r8), (f32) arg1, (f32) arg2);
}

void fn_80043AC8(void *arg0) {
    M2C_UNK fn_80068550(s32);
    M2C_UNK fn_800C4588(void *);
    extern s32 lbl_803682A4;
    void *temp_r31;

    fn_80068550(M2C_FIELD(arg0, s32 *, 0x54));
    temp_r31 = M2C_FIELD(arg0, void **, 0x58);
    fn_800C4588(M2C_FIELD(temp_r31, void **, 0x114));
    M2C_FIELD(temp_r31, void **, 0x114) = NULL;
    fn_800C4588(temp_r31);
    lbl_803682A4 &= 0xFFFFFFF7;
}

void fn_80043B44(void* arg0, s32 arg1) {
    if (arg0 == NULL) {
        return;
    }
    
    // Just a basic skeleton to test compilation
}

f32 fn_80043DD8(void) {
    extern void *lbl_803672A8;
    return M2C_FIELD(lbl_803672A8, f32 *, 0x10) / M2C_FIELD(lbl_803672A8, f32 *, 8);
}

void fn_80043DEC(void) {
    u32 temp_r3;
    s16 temp_r30;
    s16 temp_r31;
    
    // Load values from the global pointer array
    temp_r31 = *(u16*)((u8*)lbl_803672A8 + 0xC);
    temp_r30 = *(u16*)((u8*)lbl_803672A8 + 0x14);  // This looks like the same address but it's different
    
    // Call functions with these values
    fn_8022124C(0, 0, temp_r31, temp_r30);
    fn_802212FC(temp_r31, temp_r30, 4, 0);
    
    temp_r3 = *(u32*)((u8*)lbl_803672A8 + 0x1C);
    fn_80221BA8(temp_r3, 1);
    
    fn_802209FC();
    fn_80222EB4();
    fn_80067984(0);
    fn_80067058();
}

void fn_80043E88(void) {
    f32 *temp_r3;
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    
    temp_r3 = (f32*)lbl_803672A8;
    temp_f31 = temp_r3[0];
    temp_f30 = temp_r3[1];
    temp_f29 = temp_r3[4];
    temp_f28 = temp_r3[5];
    temp_f27 = temp_r3[2];
    temp_f26 = temp_r3[3];
    
    fn_80068548(temp_r3);
    
    temp_r3[0x38] = temp_f31;
    temp_r3[0x39] = temp_f30;
    
    temp_r3[0x3A] = 0.0f;   // lbl_80368EE4
    temp_r3[0x3B] = 0.0f;   // lbl_80368EE4
    temp_r3[0x3C] = -1.0f;  // lbl_80368F2C 
    temp_r3[0x3D] = 0.0f;   // lbl_80368EE4
    
    temp_r3[0x35] = temp_f31;
    temp_r3[0x36] = temp_f30;
    temp_r3[0x37] = -30.0f; // lbl_80368F4C
    
    fn_80068070(0.0f, 0.0f, temp_f29, temp_f28, -1.0f);
    
    temp_f29 = (f32)((s32)temp_f29); // fctiwz equivalent
    temp_f28 = (f32)((s32)temp_f28); // fctiwz equivalent
    
    fn_800680AC(0, 0, (s32)temp_f29, (s32)temp_f28);
    
    fn_80067C48(0, temp_f27, temp_f26);
    fn_80067058();
}

void fn_8004496C(s32 arg0, u8 arg1) {
    M2C_UNK fn_80023A4C(M2C_UNK *);
    M2C_UNK fn_80023B80(M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_80045604(s32);
    extern M2C_UNK lbl_802CA518;
    fn_80023B80(&lbl_802CA518, &lbl_802CA518);
    fn_80045604(arg0);
    if (arg1 != 0) {
        fn_80023A4C(&lbl_802CA518);
    }
}

void fn_80045B9C(void *arg0) {
    void **temp_r31;
    extern u8 lbl_8036728C;
    extern u8 lbl_8036728D;
    extern u8 lbl_8036728E;
    extern u8 lbl_80367290;
    extern f64 lbl_80368EF8;
    extern f32 lbl_80368EF4;

    fn_800675C8(0);
    temp_r31 = (void **)fn_800675E0();
    fn_80067480();
    M2C_FIELD(temp_r31, u8 *, 0) = lbl_8036728C;
    M2C_FIELD(temp_r31, f32 *, 4) = lbl_80368EF4 * ((f32) (s8) lbl_8036728D * M2C_FIELD(arg0, f32 *, 0x6C));
    M2C_FIELD(temp_r31, f32 *, 8) = lbl_80368EF4 * ((f32) (s8) lbl_8036728E * M2C_FIELD(arg0, f32 *, 0x6C));
    M2C_FIELD(temp_r31, u8 *, 1) = lbl_80367290;
    M2C_FIELD(temp_r31, u8 *, 2) = M2C_FIELD(&lbl_80367290, u8 *, 1);
    M2C_FIELD(temp_r31, u8 *, 3) = M2C_FIELD(&lbl_80367290, u8 *, 2);
}

void fn_80045C68(void *arg0, s32 arg1) {
    s32 i, j;
    s32 var_r31 = 0;
    u32 temp_val;
    s32 var_r24;
    
    // First loop
    if (arg1 < 3) {
        for (i = 0; i < 3; i++) {
            if ((*(u32*)((u8*)arg0 + 0x104) & (1 << i)) != 0) {
                for (j = 0; j < 5; j++) {
                    temp_val = *(s32*)((u8*)arg0 + 0x14 + (j * 4));
                    if ((temp_val != 0) && (temp_val < 0x1000)) {
                        var_r31++;
                    }
                }
            }
        }
    }

    *(u32*)((u8*)arg0 + 0x100) = var_r31;

    // Second part - only if we have a valid entry at offset 0x6C
    var_r24 = *(s32*)((u8*)arg0 + 0x6C);
    if (var_r24 != -1) {
        void *ptr1 = *(void**)((u8*)arg0 + 0x104);  // pointer to some data
        void *ptr2 = *(void**)((u8*)arg0 + 0x108);  // another data pointer
        void *ptr3 = *(void**)((u8*)arg0 + 0x10C);  // another data pointer
        void *ptr4 = *(void**)((u8*)arg0 + 0x110);  // another data pointer

        for (i = 0; i < var_r24; i++) {
            if (*(s32*)((u8*)ptr1 + 0x14) != -1) {
                temp_val = *(s32*)((u8*)ptr1 + 0x14);
                if (temp_val < 0x1000) {
                    var_r31++;
                }
            }
            ptr1 = (u8*)ptr1 + 0x18;
        }

        *(u32*)((u8*)arg0 + 0x100) = var_r31;
    }


    // Third part - early return if offset 0xB4 is zero
    if (*(s32*)((u8*)arg0 + 0xB4) == 0) {
        return;
    }

    // Fourth part
    temp_val = *(s32*)((u8*)arg0 + 0x100);
    i = *(s32*)((u8*)arg0 + 0x104);
    
    if (temp_val <= 5) {
        var_r31 = 0;
        for (j = 0; j < i; j++) {
            temp_val = *(s32*)((u8*)arg0 + 0x14 + (j * 4));
            if ((temp_val != 0) && (temp_val <= 0xFFFF)) {
                var_r31++;
            }
        }
    }

    *(u32*)((u8*)arg0 + 0x100) = var_r31;
    return;
}

void fn_800462FC(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80060638(s32);
    M2C_UNK fn_80068558(s32, s32);
    s32 var_r30;
    s32 var_r31;

    var_r30 = 0;
    var_r31 = M2C_FIELD(arg0, s32 *, 0x10);
loop_2:
    if (var_r30 < (s16) M2C_FIELD(arg0, s16 *, 4)) {
        fn_80060638(var_r31 + 4);
        fn_80068558(arg1, arg2);
        var_r30 += 1;
        var_r31 += 0xC0;
        goto loop_2;
    }
}

void fn_80046400(void *arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80046424(void *, void *, void *, M2C_UNK);
    fn_80046424(arg0, arg1, arg2, 0);
}

s32 fn_80046F14(void *arg0, s32 arg1) {
    void **temp_r7;
    s32 var_r9;
    void *temp_r5;
    s32 *temp_r3;

    temp_r7 = (void **)((char *)arg0 + 0x188);
    if (*(void **)temp_r7 == NULL) {
        return 0;
    }
    temp_r5 = (char *)temp_r7 + 0x50;
    if (*(void **)temp_r5 == NULL) {
        return 0;
    }

    temp_r3 = (s32 *)((char *)arg0 + 0x210);
    var_r9 = *(s32 *)((char *)temp_r5 + arg1 * 8);
    if (var_r9 >= 0) {
        if ((u32)(var_r9 - *(s32 *)temp_r3) > 0U) {
            return 0;
        }
    } else {
        s32 temp = *(s32 *)((char *)arg0 + arg1 * 8 + 0x24C);
        if (temp >= 0) {
            if ((u32)(temp - *(s32 *)temp_r3) > 0U) {
                return 0;
            }
        } else {
            return 0;
        }
    }
    return 1;
}

s32 fn_8004721C(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    s32 temp_r11;
    s32 temp_r8;
    s32 var_ctr;
    s32 var_r12;
    s32 var_r9;
    u8 var_r0;
    void *temp_r10;

    var_r12 = *(s16 *)((char *)arg0 + 0x6) - 1;
    var_r9 = var_r12 * 0xB4;
    var_ctr = var_r12 + 1;
    if (var_r12 >= 0) {
loop_1:
        temp_r11 = *(s32 *)((char *)arg0 + 0x14);
        temp_r10 = (void *)(temp_r11 + var_r9);
        temp_r8 = *(s32 *)((char *)*(s32 *)((char *)temp_r10 + 0x10) + 0xBC);
        if (!(temp_r8 & arg4)) {
            if ((arg3 == 0) || (arg3 == (u32)(arg3 & temp_r8))) {
                if ((arg1 >= *(s8 *)((char *)temp_r10 + 0x4)) && 
                    (arg1 <= *(s8 *)((char *)temp_r10 + 0x6)) &&
                    (arg2 >= *(s8 *)((char *)temp_r10 + 0x5)) && 
                    (arg2 <= *(s8 *)((char *)temp_r10 + 0x7))) {
                    var_r0 = 1;
                } else {
                    var_r0 = 0;
                }
                if (var_r0 != 0) {
                    return temp_r11 + (var_r12 * 0xB4);
                }
            }
        }
        var_r9 -= 0xB4;
        var_r12 -= 1;
        var_ctr -= 1;
        if (var_ctr != 0) {
            goto loop_1;
        }
        return 0;
    }
    return 0;
}

u8 fn_80047AF8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x61);
}

#pragma use_lmw_stmw on
#pragma opt_loop_invariants off
#pragma opt_peephole off
void fn_80047B00(void *arg0, s32 arg1, s32 arg2) {
    void fn_80060638(void *);
    void fn_8006049C(void *);
    void fn_80202300(void *, s32, f32);
    void fn_802025C0(void *, f32, f32, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_802033AC(void *, void *);
    void fn_80202024(void *, void *, void *);
    void fn_80201FF0(void *, void *);
    void fn_8006DA64(void *, s32, void *);
    void *fn_80067FD0(void);
    void fn_80202C18(void *, void *, void *);
    void fn_8020310C(void *, void *, void *);
    extern u8 lbl_8026A660[];
    extern f32 lbl_80368EE4;
    extern f32 lbl_80368EEC;
    extern f32 lbl_80368F10;
    extern f32 lbl_80368F2C;
    extern f32 lbl_80368F5C;
    extern f32 lbl_80368F60;
    extern f32 lbl_80368F64;
    extern f32 lbl_80368F68;
    struct Work {
        f32 quat[4];
        f32 corners[8][3];
    } wk;
    u8 bufF8[0x30];
    u8 bufC8[0x30];
    u8 buf98[0x30];
    u8 buf68[0x30];
    u8 buf38[0x30];
    u8 buf8[0x30];
    s32 i;
    u8 *entry = M2C_FIELD(arg0, u8 **, 0x14) + arg1 * 0xB4;
    u8 *sub;
    f32 *c7 = &wk.corners[7][0];
    f32 *c6 = &wk.corners[6][0];
    f32 *c5 = &wk.corners[5][0];
    f32 *c4 = &wk.corners[4][0];
    f32 *c3 = &wk.corners[3][0];
    f32 *c2 = &wk.corners[2][0];
    f32 *c1 = &wk.corners[1][0];
    u8 *e;
    u32 mask = 0x1040;
    f32 minX;
    f32 minY;
    f32 maxX;
    f32 maxY;
    f32 x;
    f32 y;
    f32 *p;
    s32 j;
    u8 hit;

    for (i = arg1; i < arg2; i++, entry += 0xB4) {
        e = entry + 0x14;
        fn_80060638(e);
        sub = M2C_FIELD(entry, u8 **, 0x10);
        M2C_FIELD(entry, u8 *, 2) &= 0x7F;
        if (M2C_FIELD(sub, u32 *, 0xBC) & mask) {
            continue;
        }
        fn_8006049C(e);
        switch (M2C_FIELD(e, u32 *, 0xC)) {
            case 0:
                break;
            case 1:
                fn_80202300(buf68, 0x58, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x1C));
                fn_80202300(buf98, 0x59, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x20));
                fn_80202300(bufC8, 0x5A, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x24));
                break;
            case 2:
                fn_80202300(buf68, 0x59, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x20));
                fn_80202300(buf98, 0x5A, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x24));
                fn_80202300(bufC8, 0x58, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x1C));
                break;
            case 3:
                fn_80202300(buf68, 0x5A, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x24));
                fn_80202300(buf98, 0x58, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x1C));
                fn_80202300(bufC8, 0x59, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x20));
                break;
            case 4:
                fn_80202300(buf68, 0x58, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x1C));
                fn_80202300(buf98, 0x5A, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x24));
                fn_80202300(bufC8, 0x59, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x20));
                break;
            case 5:
                fn_80202300(buf68, 0x59, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x20));
                fn_80202300(buf98, 0x58, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x1C));
                fn_80202300(bufC8, 0x5A, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x24));
                break;
            case 6:
                fn_80202300(buf68, 0x5A, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x24));
                fn_80202300(buf98, 0x59, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x20));
                fn_80202300(bufC8, 0x58, lbl_80368EEC * M2C_FIELD(e, f32 *, 0x1C));
                break;
            case 7:
                fn_80201FF0(e + 0x10, bufF8);
                goto checks;
            case 8:
                fn_802025C0(buf8, M2C_FIELD(e, f32 *, 0x28), M2C_FIELD(e, f32 *, 0x2C), M2C_FIELD(e, f32 *, 0x30));
                fn_80202540(buf38, M2C_FIELD(e, f32 *, 0x10), M2C_FIELD(e, f32 *, 0x14), M2C_FIELD(e, f32 *, 0x18));
                fn_802033AC(e + 0x10, buf68);
                fn_80202024(buf68, buf8, bufF8);
                fn_80202024(buf68, bufF8, bufF8);
                fn_80202024(buf38, bufF8, bufF8);
                goto checks;
            default:
                goto checks;
        }
        fn_8006DA64(lbl_8026A660 + 0x2F7, 0xB8, lbl_8026A660 + 0x2FF);
        fn_802025C0(buf8, M2C_FIELD(e, f32 *, 0x28), M2C_FIELD(e, f32 *, 0x2C), M2C_FIELD(e, f32 *, 0x30));
        fn_80202540(buf38, M2C_FIELD(e, f32 *, 0x10), M2C_FIELD(e, f32 *, 0x14), M2C_FIELD(e, f32 *, 0x18));
        fn_80202024(buf68, buf8, bufF8);
        fn_80202024(buf98, bufF8, bufF8);
        fn_80202024(bufC8, bufF8, bufF8);
        fn_80202024(buf38, bufF8, bufF8);
        wk.quat[0] = lbl_80368EE4;
        wk.quat[1] = lbl_80368EE4;
        wk.quat[2] = lbl_80368EE4;
        wk.quat[3] = lbl_80368F10;
        fn_80202C18(fn_80067FD0(), bufF8, bufF8);
checks:
        wk.corners[0][0] = M2C_FIELD(sub, f32 *, 0xA4);
        wk.corners[0][1] = M2C_FIELD(sub, f32 *, 0xA8);
        wk.corners[0][2] = M2C_FIELD(sub, f32 *, 0xAC);
        fn_8020310C(bufF8, &wk.corners[0][0], &wk.corners[0][0]);
        hit = !(wk.corners[0][0] * wk.corners[0][0] < lbl_80368F5C && wk.corners[0][1] * wk.corners[0][1] < lbl_80368F60 &&
                wk.corners[0][2] > lbl_80368F2C && wk.corners[0][2] < lbl_80368EE4);
        if (hit == 0) {
            continue;
        }
        c1[0] = M2C_FIELD(sub, f32 *, 0xB0);
        c1[1] = M2C_FIELD(sub, f32 *, 0xA8);
        c1[2] = M2C_FIELD(sub, f32 *, 0xAC);
        fn_8020310C(bufF8, c1, c1);
        hit = !(c1[0] * c1[0] < lbl_80368F5C && c1[1] * c1[1] < lbl_80368F60 &&
                c1[2] > lbl_80368F2C && c1[2] < lbl_80368EE4);
        if (hit == 0) {
            continue;
        }
        c2[0] = M2C_FIELD(sub, f32 *, 0xB0);
        c2[1] = M2C_FIELD(sub, f32 *, 0xB4);
        c2[2] = M2C_FIELD(sub, f32 *, 0xAC);
        fn_8020310C(bufF8, c2, c2);
        hit = !(c2[0] * c2[0] < lbl_80368F5C && c2[1] * c2[1] < lbl_80368F60 &&
                c2[2] > lbl_80368F2C && c2[2] < lbl_80368EE4);
        if (hit == 0) {
            continue;
        }
        c3[0] = M2C_FIELD(sub, f32 *, 0xA4);
        c3[1] = M2C_FIELD(sub, f32 *, 0xB4);
        c3[2] = M2C_FIELD(sub, f32 *, 0xAC);
        fn_8020310C(bufF8, c3, c3);
        hit = !(c3[0] * c3[0] < lbl_80368F5C && c3[1] * c3[1] < lbl_80368F60 &&
                c3[2] > lbl_80368F2C && c3[2] < lbl_80368EE4);
        if (hit == 0) {
            continue;
        }
        c4[0] = M2C_FIELD(sub, f32 *, 0xA4);
        c4[1] = M2C_FIELD(sub, f32 *, 0xA8);
        c4[2] = M2C_FIELD(sub, f32 *, 0xB8);
        fn_8020310C(bufF8, c4, c4);
        hit = !(c4[0] * c4[0] < lbl_80368F5C && c4[1] * c4[1] < lbl_80368F60 &&
                c4[2] > lbl_80368F2C && c4[2] < lbl_80368EE4);
        if (hit == 0) {
            continue;
        }
        c5[0] = M2C_FIELD(sub, f32 *, 0xB0);
        c5[1] = M2C_FIELD(sub, f32 *, 0xA8);
        c5[2] = M2C_FIELD(sub, f32 *, 0xB8);
        fn_8020310C(bufF8, c5, c5);
        hit = !(c5[0] * c5[0] < lbl_80368F5C && c5[1] * c5[1] < lbl_80368F60 &&
                c5[2] > lbl_80368F2C && c5[2] < lbl_80368EE4);
        if (hit == 0) {
            continue;
        }
        c6[0] = M2C_FIELD(sub, f32 *, 0xB0);
        c6[1] = M2C_FIELD(sub, f32 *, 0xB4);
        c6[2] = M2C_FIELD(sub, f32 *, 0xB8);
        fn_8020310C(bufF8, c6, c6);
        hit = !(c6[0] * c6[0] < lbl_80368F5C && c6[1] * c6[1] < lbl_80368F60 &&
                c6[2] > lbl_80368F2C && c6[2] < lbl_80368EE4);
        if (hit == 0) {
            continue;
        }
        c7[0] = M2C_FIELD(sub, f32 *, 0xA4);
        c7[1] = M2C_FIELD(sub, f32 *, 0xB4);
        c7[2] = M2C_FIELD(sub, f32 *, 0xB8);
        fn_8020310C(bufF8, c7, c7);
        hit = !(c7[0] * c7[0] < lbl_80368F5C && c7[1] * c7[1] < lbl_80368F60 &&
                c7[2] > lbl_80368F2C && c7[2] < lbl_80368EE4);
        if (hit == 0) {
            continue;
        }
        if (!(M2C_FIELD(sub, u32 *, 0xBC) & 8)) {
            continue;
        }
        minX = lbl_80368F64;
        minY = minX;
        maxX = lbl_80368F68;
        maxY = maxX;
        p = &wk.corners[0][0];
        for (j = 0; j < 4; j++, p += 2) {
            x = p[0];
            y = p[1];
            if (p[2] > lbl_80368EE4) {
                x *= lbl_80368F2C;
                y *= lbl_80368F2C;
            }
            if (minX > x) {
                minX = x;
            }
            if (minY > y) {
                minY = y;
            }
            if (maxX < x) {
                maxX = x;
            }
            if (maxY < y) {
                maxY = y;
            }
            x = p[3];
            y = p[4];
            if (p[5] > lbl_80368EE4) {
                x *= lbl_80368F2C;
                y *= lbl_80368F2C;
            }
            if (minX > x) {
                minX = x;
            }
            if (minY > y) {
                minY = y;
            }
            if (maxX < x) {
                maxX = x;
            }
            if (maxY < y) {
                maxY = y;
            }
        }
        if (minX >= lbl_80368F2C) {
            goto res2;
        }
        if (maxX <= lbl_80368F10) {
            goto res2;
        }
        if (minY >= lbl_80368F2C) {
            goto res2;
        }
        if (maxY > lbl_80368F10) {
            continue;
        }
        if (minX * minX < lbl_80368F10 && minY * minY < lbl_80368F10) {
            continue;
        }
        if (maxX * maxX < lbl_80368F10 && minY * minY < lbl_80368F10) {
            continue;
        }
        if (maxX * maxX < lbl_80368F10 && maxY * maxY < lbl_80368F10) {
            continue;
        }
        if (minX * minX < lbl_80368F10 && maxY * maxY < lbl_80368F10) {
            continue;
        }
res2:
        if (minX < lbl_80368F2C && maxX > lbl_80368F10 && minY * minY < lbl_80368F10 && maxY * maxY < lbl_80368F10) {
            continue;
        }
        if (minY >= lbl_80368F2C) {
            continue;
        }
        if (maxY <= lbl_80368F10) {
            continue;
        }
        if (minX * minX < lbl_80368F10) {
            continue;
        }
        if (maxX * maxX < lbl_80368F10) {
            continue;
        }
        M2C_FIELD(entry, u8 *, 2) |= 0x80;
    }
}
#pragma opt_peephole reset
#pragma opt_loop_invariants reset
#pragma use_lmw_stmw reset
void fn_80048A3C(s8 arg0, s8 arg1, s8 arg2, void *arg3) {
    extern s8 lbl_8036728C;
    extern s8 lbl_8036728D;
    extern s8 lbl_8036728E;
    extern M2C_UNK lbl_80367290;
    lbl_8036728C = arg0;
    lbl_8036728D = arg1;
    lbl_8036728E = arg2;
    M2C_FIELD(&lbl_80367290, u8 *, 0) = (u8) M2C_FIELD(arg3, u8 *, 0);
    M2C_FIELD(&lbl_80367290, u8 *, 1) = (u8) M2C_FIELD(arg3, u8 *, 1);
    M2C_FIELD(&lbl_80367290, u8 *, 2) = (u8) M2C_FIELD(arg3, u8 *, 2);
    M2C_FIELD(&lbl_80367290, u8 *, 3) = (u8) M2C_FIELD(arg3, u8 *, 3);
}

void fn_80048A70(s8 arg0) {
    extern u8 lbl_80330708[];
    extern s8 lbl_80367289;
    s8 var_r3;

    var_r3 = arg0;
    if ((u8) lbl_80330708[0xA6] != 1) {
        var_r3 = 0;
    }
    lbl_80367289 = var_r3;
}

void fn_80048C5C(void *arg0, s32 arg1, s32 arg2) {
    u8 *temp_r4;
    s32 *temp_r5;
    
    if ((u32)(arg2 - 8) <= (u32)0x7) {
        temp_r5 = (s32 *)arg0;
        arg2 = arg2 << 1;
        arg2 = (arg1 & 0xFFFF) | (arg2 << 0x10);
        *temp_r5 = arg2;
        *(temp_r5 + 4) = arg2 >> 0x10;
    } else {
        temp_r5 = (s32 *)arg0;
        temp_r4 = (u8 *)arg0 + 8;
        *temp_r5 = arg1;
        *(u32 *)temp_r4 = arg2;
        *((s32 *)temp_r4 + 1) = arg2 >> 0x10;
    }
}

void fn_800490F0(void *arg0) {
    s32 temp_r31;
    u8 sp8;

    sp8 = *(u8*)((u32)arg0 + 0x3C);
    temp_r31 = *(u32*)((u32)arg0 + 0x30) + 0x14;
    fn_8005F7E0(temp_r31, sp8, *(u8*)((u32)arg0 + 0x31), *(u8*)((u32)arg0 + 0x32));
    fn_8005F7B0(temp_r31, *(u8*)((u32)arg0 + 0x33));
}

void fn_80049144(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(arg0, u8 *, 0x3C) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1C);
    M2C_FIELD(arg0, u8 *, 0x3D) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1D);
    M2C_FIELD(arg0, u8 *, 0x3E) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1E);
    M2C_FIELD(arg0, u8 *, 0x3F) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1F);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

void fn_8004949C(void *arg0) {
    s32 temp_r31;
    u8 temp_r30;

    temp_r31 = *(s32 *)((u8 *)arg0 + 0x30) + 0x14;
    temp_r30 = *(u8 *)((u8 *)arg0 + 0x8);
    fn_8005F7E0(temp_r31, temp_r30, *(u8 *)((u8 *)arg0 + 0x9), *(u8 *)((u8 *)arg0 + 0xA));
    fn_8005F7B0(temp_r31, *(u8 *)((u8 *)arg0 + 0xB));
}

void fn_800494F0(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(arg0, u8 *, 0x3C) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1C);
    M2C_FIELD(arg0, u8 *, 0x3D) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1D);
    M2C_FIELD(arg0, u8 *, 0x3E) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1E);
    M2C_FIELD(arg0, u8 *, 0x3F) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1F);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

void fn_80049520(s32 arg0, u32 arg1, s32 arg2, f32 farg0) {
    void *fn_8000CAA0(M2C_UNK *);
    void *fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_802856E8;
    void *var_r3;

    if (arg1 != 0U) {
        var_r3 = fn_8000CAA0(&lbl_802856E8);
    } else {
        var_r3 = fn_8000CAF0(&lbl_802856E8, 3);
    }
    *(f32*)((u32)var_r3 + 0x38) = farg0;
    *(s32*)((u32)var_r3 + 0x3C) = arg2;
    *(s32*)((u32)var_r3 + 0x30) = arg0;
}

s32 fn_80049594(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg0 < 0 || arg1 < 0 || arg2 < 0) {
        return -1;
    }

    if ((u32)(arg0 + 0x40) > 0xFFFF || (u32)(arg1 + 0x40) > 0xFFFF || (u32)(arg2 + 0x40) > 0xFFFF) {
        return -1;
    }

    return 0;
}

void fn_8004982C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x48);
}

void fn_8004983C(void *arg0) {
    extern f32 lbl_80368F74;
    extern f32 lbl_80368F78;
    f32 temp_f2;
    f32 temp_f3;

    *(s32 *)((char *)arg0 + 0x40) = 0;
    *(f32 *)((char *)arg0 + 0x44) = *(f32 *)((char *)*(void **)((char *)arg0 + 0x30) + 8);
    *(f32 *)((char *)arg0 + 0x48) = *(f32 *)((char *)arg0 + 0x38);
    temp_f3 = *(f32 *)((char *)arg0 + 0x44);
    temp_f2 = *(f32 *)((char *)arg0 + 0x48);
    if ((f32) fabsf(temp_f3 - temp_f2) > lbl_80368F74) {
        if (temp_f3 < temp_f2) {
            *(f32 *)((char *)arg0 + 0x44) = temp_f3 + lbl_80368F78;
            return;
        }
        if (temp_f3 > temp_f2) {
            *(f32 *)((char *)arg0 + 0x48) = temp_f2 + lbl_80368F78;
        }
    }
}

void fn_80049A3C(int arg0, int arg1) {
    if (arg0 >= 0 && arg1 >= 0) {
        void** vtable_ptr = (void**)&lbl_803672A8;
        void* ptr3 = vtable_ptr[arg0];
        void* ptr4 = vtable_ptr[arg1];
        
        if (ptr3 != NULL && ptr4 != NULL) {
            int val3_0x19C = *(int*)((char*)ptr3 + 0x19C);
            int val4_0x19C = *(int*)((char*)ptr4 + 0x19C);
            
            if (val3_0x19C >= 0 && val4_0x19C >= 0) {
                int temp1 = *(int*)((char*)ptr3 + 0x194);
                int temp2 = *(int*)((char*)ptr4 + 0x194);
                int diff = temp2 - temp1;  
                
                if (diff >= 0) {
                    int val3_0x198 = *(int*)((char*)ptr3 + 0x198);
                    int val4_0x198 = *(int*)((char*)ptr4 + 0x198);
                    int diff2 = val3_0x198 - val4_0x198;
                    
                    if (diff2 >= 0) {
                        int val3_0x190 = *(int*)((char*)ptr3 + 0x190);
                        *(int*)((char*)ptr4 + 0x190) = val3_0x190;
                    }
                }
            }
        }
    }
}

void fn_80049A98(void *arg0) {
    M2C_UNK fn_8004AE28(s32 *, f32, f32, f32);
    u8 fn_8005F9B8(M2C_UNK);
    M2C_UNK fn_80060060(s32 *);
    fn_80060060(M2C_FIELD(arg0, s32 **, 0x34));
    if (*M2C_FIELD(arg0, s32 **, 0x34) & 0x10) {
        fn_8000C188(arg0);
        return;
    }
    if (fn_8005F9B8(8) != 0) {
        M2C_FIELD(arg0, s8 *, 0x48) = 1;
        fn_8000C188(arg0);
        return;
    }
    fn_8004AE28(M2C_FIELD(arg0, s32 **, 0x34), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x40));
}

extern u16* lbl_803672AC;
void fn_80049BD4(void* arg0, u8 arg1) {
    u8 temp;
    
    temp = *(u8*)((uintptr_t)arg0 + 2);
    temp &= 0xFC;
    *(u8*)((uintptr_t)arg0 + 2) = temp;
    
    fn_8005F7B0((void*)((uintptr_t)arg0 + 0x14), 0xFF, arg0);
    
    if (arg1 != 0) {
        fn_80044450(*lbl_803672AC, 1);
        fn_80016180();
    }
}

void fn_80049C30(void) {
}

void fn_80049C8C(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & 0xFE);
        return;
    }
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 1);
}

void fn_80049CB4(s32 arg0, void *arg1) {
    M2C_UNK fn_8005F7B0(s32, u8);
    M2C_UNK fn_8005F7E0(s32, u8, u8, u8);
    s32 temp_r31;

    temp_r31 = arg0 + 0x14;
    fn_8005F7E0(temp_r31, M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1), M2C_FIELD(arg1, u8 *, 2));
    fn_8005F7B0(temp_r31, M2C_FIELD(arg1, u8 *, 3));
}

void fn_80049D08(s32 arg0) {
    extern f32 lbl_80368F2C;
    M2C_UNK fn_8005FEE8(s32, f32);
    
    s32 temp_r3 = arg0 + 0x14;
    fn_8005FEE8(temp_r3, lbl_80368F2C);
}

void fn_80049D30(s32 arg0) {
    extern f32 lbl_80368EE4;
    s32 temp_r3 = arg0 + 0x14;
    void *temp_r0 = (void *)arg0;
    fn_8005FEE8(temp_r3, lbl_80368EE4);
}

s32 fn_80049D58(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 2) & 3) == 0;
}

s32 fn_80049D6C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 2) & 3) != 0;
}

s32 fn_80049D84(void *arg0) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u32 *, 0xBC);
    if (temp_r3 & 0x400) {
        return 0;
    }
    return (temp_r3 >> 9U) & 1;
}

M2C_UNK *fn_80049DA4(s32 arg0, u32 arg1, u32 arg2) {
    M2C_UNK fn_802343E0(M2C_UNK *, u32);
    M2C_UNK fn_80234450(M2C_UNK *, s32, M2C_UNK *);
    extern M2C_UNK lbl_802EFE20;
    fn_80234450(&lbl_802EFE20, arg0, &lbl_802EFE20);
    fn_802343E0(&lbl_802EFE20, arg1);
    if (arg2 != 0U) {
        fn_802343E0(&lbl_802EFE20, arg2);
    }
    return &lbl_802EFE20;
}

s32 fn_80049E1C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_8004A1F0(void) {
    extern u32* lbl_80285858;
    extern u16 lbl_80367110;
    
    fn_8000BF00(lbl_80285858);
    lbl_80367110 &= 0xFBFF;
}

void fn_8004A224(void) {
    void *fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80285858;
    extern s32 lbl_80367110;
    M2C_FIELD(fn_8000CAF0(&lbl_80285858, 4), s32 *, 0x30) = 0;
    lbl_80367110 |= 0x400;
}

void fn_8004A264(void *arg0) {
    f32 fn_800067BC(M2C_UNK, f32, f32, f32, f32);
    M2C_UNK fn_8006785C(M2C_UNK, M2C_UNK *, void *);
    extern M2C_UNK fn_8004A2EC;
    extern f32 lbl_80368F84;
    extern f32 lbl_80368F8C;
    extern f32 lbl_80368F98;
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r0 <= 8) {
        M2C_FIELD(arg0, f32 *, 0x34) = fn_800067BC(6, lbl_80368F84, lbl_80368F8C, (f32) temp_r0, lbl_80368F98);
    }
    fn_8006785C(2, &fn_8004A2EC, arg0);
}

void fn_8004A864(void* arg0, s32 arg1) {
    u8* ptr = (u8*)arg0 + 0x60;
    s32 temp_r3 = *ptr;
    s32 count = temp_r3 + arg1;

    if (count < 0) {
        return;
    }

    *ptr = (u8)count;
}

void fn_8004AAA4(void) {
    M2C_UNK fn_80067FDC();
    M2C_UNK fn_80202024(M2C_UNK, M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_80202540(M2C_UNK *, f32, f32, f32);
    M2C_UNK fn_8021F4E4(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8021FBB8();
    M2C_UNK fn_8021FBF0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802201A8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80220428(M2C_UNK);
    M2C_UNK fn_8022100C(M2C_UNK);
    M2C_UNK fn_80222334(M2C_UNK);
    M2C_UNK fn_80222370(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802239D0(M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223F2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802240C8(M2C_UNK);
    M2C_UNK fn_802245D8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80224D7C(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_80224E1C(M2C_UNK);
    extern f32 lbl_80368F84;
    extern f32 lbl_80368F88;
    M2C_UNK sp8[14];

    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021F4E4(0xB, 1);
    fn_8021FBF0(0, 9, 1, 4, 0);
    fn_8021FBF0(0, 0xB, 1, 5, 0);
    fn_80222334(1);
    fn_80222370(4, 0, 0, 1, 0, 0, 2);
    fn_802240C8(1);
    fn_802239D0(0, 4);
    fn_80223F2C(0, 0xFF, 0xFF, 4);
    fn_80220428(0);
    fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
    fn_8022100C(0);
    fn_80202540(sp8, lbl_80368F84, lbl_80368F84, lbl_80368F88);
    fn_80202024(fn_80067FDC(), sp8, sp8);
    fn_80224D7C(sp8, 0);
    fn_80224E1C(0);
    fn_802245D8(1, 4, 1, 0);
}

s32 fn_8004ABD4(void **arg0, u8 arg1) {
    void *fn_8001CB64(void **);
    u8 fn_8001DDBC();
    u8 var_r0;
    u8 var_r0_2;
    u8 var_r0_3;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    if (arg0 != NULL) {
        if (arg1 == 0) {
            if ((void *) *arg0 != NULL) {
                var_r0 = fn_8001DDBC();
            } else {
                var_r0 = 0;
            }
            if ((var_r0 > 1U) && (temp_r3 = fn_8001CB64(arg0), (((((M2C_FIELD(temp_r3, s32 *, 4) & 0x40) ^ 0) | ((M2C_FIELD(temp_r3, s32 *, 0) & 0) ^ 0)) == 0) != 0))) {
                temp_r3_2 = *arg0;
                if (temp_r3_2 != NULL) {
                    var_r0_2 = M2C_FIELD(temp_r3_2, u8 *, 0x12);
                } else {
                    var_r0_2 = 0xC;
                }
                switch ((s32) var_r0_2) {           /* switch 1; irregular */
                case 2:                             /* switch 1 */
                    return 3;
                case 1:                             /* switch 1 */
                    return 5;
                }
            } else {
                goto block_16;
            }
        } else {
block_16:
            temp_r3_3 = *arg0;
            if (temp_r3_3 != NULL) {
                var_r0_3 = M2C_FIELD(temp_r3_3, u8 *, 0x12);
            } else {
                var_r0_3 = 0xC;
            }
            switch ((s32) var_r0_3) {               /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                return 4;
            case 3:                                 /* switch 2 */
                return 6;
            case 8:                                 /* switch 2 */
                return 0;
            case 2:                                 /* switch 2 */
                return 2;
            case 0:                                 /* switch 2 */
                return 1;
            }
        }
    } else {
        return 0;
    }
}

s32 fn_8004AE28(s32 arg0, s32 arg1, s32 arg2)
{
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    u8 *ptr;
    
    ptr = (u8*)arg0;
    if (ptr == NULL)
        return 0;
    
    var_r3 = *(ptr + 0x10);
    if ((var_r3 >= 0) && (var_r3 < 0x40)) {
        return (s32)*(ptr + 0x8 * var_r3 + 0x14);
    }
    
    var_r4 = *(ptr + arg1 + 0x14);
    if ((var_r4 >= 0) && (var_r4 < 0x10)) {
        return (s32)*(ptr + var_r4 * 0x8 + 0x14);
    }
    
    return 0;
}

s32 fn_8004AF30(u16 arg0) {
    u16 temp_r3 = arg0;
    if (temp_r3 == 0xFFFF) {
        return 0;
    }
    if (temp_r3 < 0x3E8) {
        return 0;
    }
    return fn_80146B10();
}

s32 fn_8004AF74(s32 arg0, s32 arg1) {
    u8 temp_r3;

    temp_r3 = *(u8 *)(arg0 + arg1 + 0xC);
    if ((temp_r3 >> 6) == 0) {
        s32 var_r0 = (temp_r3 << 0x1A);
        s32 var_r3_2 = temp_r3 >> 0x1F;
        if ((((var_r0 - var_r3_2) + var_r3_2) & 0xFFFFFFFC) < 0x20) {
            return 1;
        }
    }
    return 0;
}

s32 fn_8004AFB4(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 0x10) & (1 << arg1)) != 0;
}

M2C_UNK *fn_8004AFD4(void *arg0, s32 arg1) {
    M2C_UNK fn_800056A0(M2C_UNK);
    M2C_UNK fn_80231D94(M2C_UNK *, void *, void *, s32, s32, s32, M2C_UNK *);
    extern M2C_UNK lbl_8026A9B0;
    extern M2C_UNK lbl_80285880;
    extern M2C_UNK lbl_802858C4;
    extern M2C_UNK lbl_802EFFC8;
    s32 var_r31;

    var_r31 = arg1;
    if (!(M2C_FIELD(arg0, s32 *, 0x10) & (1 << var_r31))) {
        var_r31 = 6;
        fn_800056A0(0);
    }
    fn_80231D94(&lbl_802EFFC8, &lbl_8026A9B0 + 0x9C, &lbl_8026A9B0 + 0xA8, M2C_FIELD(arg0, s32 *, 4), *(&lbl_80285880 + (var_r31 * 4)), *(&lbl_802858C4 + (M2C_FIELD(arg0, u8 *, 8) * 4)), &lbl_8026A9B0);
    return &lbl_802EFFC8;
}

void *fn_8004B0C8(void *arg0) {
    void fn_80231D94(void *, void *, void *, s32, void *);
    extern void *lbl_8026A9B0;
    extern void *lbl_802EFFC8;
    
    char *ptr1 = (char *)&lbl_8026A9B0 + 0xBC;
    char *ptr2 = (char *)&lbl_8026A9B0 + 0xA8;
    fn_80231D94(&lbl_802EFFC8, ptr1, ptr2, *(s32 *)((char *)arg0 + 4), &lbl_802EFFC8);
    
    return &lbl_802EFFC8;
}

extern u16 lbl_8026A9B0[40];
extern u16 lbl_802EFFC8[16];
u16 *fn_8004B110(void *arg0) {
    void fn_80231D94(u16 *, u16 *, u16 *, s32, u16 *);
    
    u16 *r3 = lbl_802EFFC8;
    u16 *r4 = lbl_8026A9B0 + 0xCB;
    u16 *r5 = lbl_8026A9B0 + 0xA8;
    s32 r6 = *(s32 *)((char *)arg0 + 4);
    
    fn_80231D94(r3, r4, r5, r6, r3);
    
    return r3;
}

s32 fn_8004B1A0(s32 arg0) {
    extern M2C_UNK lbl_802858C4;
    s32* ptr = &lbl_802858C4;
    return ptr[arg0];
}

void fn_8004B1B4(s32 arg0, s32 arg1) {
    u8 *ptr = (u8 *)arg0;
    
    if (*(s32*)ptr == 0) {
        return;
    }
    
    if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0)) {
        // Set bit 4 of byte at offset 3 from pointer
        *ptr |= 0x10;
    } else {
        // Call fn_8004FE98 with arg0 and 0xB
        fn_8004FE98(arg0, 0xB);
        // Set bit 5 of byte at offset 3 from pointer  
        *ptr |= 0x20;
    }
}

extern s32 lbl_80367308;
void fn_8004B3DC(void) {
    lbl_80367308 = 0;
}

s32 fn_8004BAC4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r3_2;

    if (arg0 < 0x0) {
        temp_r3 = arg0 + 0x1F;
    } else {
        temp_r3 = arg0;
    }
    temp_r3 = temp_r3 >> 5;
    
    if (arg1 < 0x0) {
        temp_r6 = arg1 + 0x1F;
    } else {
        temp_r6 = arg1;
    }
    temp_r6 = temp_r6 >> 5;
    
    if (arg2 < 0x0) {
        temp_r5 = arg2 + 0x1F;
    } else {
        temp_r5 = arg2;
    }
    temp_r5 = temp_r5 >> 5;
    
    if (arg3 < 0x0) {
        temp_r3_2 = arg3 + 0x1F;
    } else {
        temp_r3_2 = arg3;
    }
    temp_r3_2 = temp_r3_2 >> 5;
    
    return ((temp_r6 * 0x7D8600) + (temp_r3 * 0x32E100)) + ((temp_r5 * 0x7D8600) + (temp_r3_2 * 0x32E100));
}

void fn_8004BC48(void *arg0, s32 arg1) {
    s16 fn_8017A9B0(s32, M2C_UNK);
    M2C_UNK fn_8017A9DC(s32);
    extern f32 lbl_80368FCC;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s16 *, 0x15C) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 0x16E) = -1;
    M2C_FIELD(arg0, s8 *, 0x16D) = -1;
    M2C_FIELD(arg0, s8 *, 0x16C) = -1;
    M2C_FIELD(arg0, f32 *, 0x170) = (f32) lbl_80368FCC;
    M2C_FIELD(arg0, f32 *, 0x174) = (f32) lbl_80368FCC;
    M2C_FIELD(arg0, f32 *, 0x178) = (f32) lbl_80368FCC;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0;
    M2C_FIELD(arg0, s16 *, 0x15C) = fn_8017A9B0(arg1, 0);
    fn_8017A9DC(arg1);
    fn_8017A9DC(arg1);
}

void fn_8004BCCC(void *arg0, s32 arg1) {
    M2C_UNK fn_8017A5C4(s32, u16);
    M2C_UNK fn_8017A5EC(s32, M2C_UNK);
    fn_8017A5C4(arg1, (u16) M2C_FIELD(arg0, s16 *, 0x15C));
    fn_8017A5EC(arg1, 0);
    fn_8017A5EC(arg1, 0);
}

f32 fn_8004BDA8(void *arg0, f32 farg0, f32 farg1) {
    f32 fn_80059440(f32);
    extern f32 lbl_80368FF8;
    if ((farg0 == M2C_FIELD(arg0, f32 *, 4)) && (farg1 == M2C_FIELD(arg0, f32 *, 8))) {
        return (f32) M2C_FIELD(arg0, s16 *, 0x15C) / lbl_80368FF8;
    }
    return fn_80059440(M2C_FIELD(arg0, f32 *, 8));
}

f32 fn_8004BE18(void *arg0, void *arg1) {
    f32 fn_80059440(f32);
    extern f32 lbl_80368FF8;
    if ((M2C_FIELD(arg1, f32 *, 4) == M2C_FIELD(arg0, f32 *, 4)) && (M2C_FIELD(arg1, f32 *, 8) == M2C_FIELD(arg0, f32 *, 8))) {
        return (f32) M2C_FIELD(arg0, s16 *, 0x15C) / lbl_80368FF8;
    }
    return fn_80059440(M2C_FIELD(arg0, f32 *, 8));
}

s32 fn_8004BF80(s32 arg0, s32 arg1) {
    if (arg0 < 0) {
        arg0 = -arg0;
    }
    if (arg1 < 0) {
        arg1 = -arg1;
    }
    return (arg0 >= arg1) ? (arg0 - arg1) : (arg1 - arg0);
}

u8 fn_8004C00C(void *arg0) {
    extern f32 lbl_80368FC4;
    if ((lbl_80368FC4 + (f32) (s8) M2C_FIELD(arg0, u8 *, 0x19E)) != (M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg0, f32 *, 0x10))) {
        return 1U;
    }
    return (u8) ((lbl_80368FC4 + (f32) (s8) M2C_FIELD(arg0, u8 *, 0x19F)) != (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg0, f32 *, 0x14)));
}

void fn_8004C0A0(void *arg0) {
    M2C_UNK fn_80040B1C(s32, s32);
    fn_80040844();
    fn_80040B1C((s32) M2C_FIELD(arg0, f32 *, 4), (s32) M2C_FIELD(arg0, f32 *, 8));
}

s32 fn_8004C0F0(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 3) & 2) != 0;
}

void fn_8004C148(void) {
}

void fn_8004D370(void) {
    M2C_UNK fn_80067708(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
    extern M2C_UNK fn_8004C80C;
    fn_80067708(2, 1, &fn_8004C80C, 0);
}

void fn_8004D5D4(s32 arg0) {
    extern s32 lbl_803672B8;
    extern f32 lbl_80368FCC;
    
    fn_80222644(lbl_803672B8, 0xA0, 0x78, 0, 0, 0, 0);
    fn_802228D8(arg0, 1, 1, 0, 0, 0, lbl_80368FCC, lbl_80368FCC, lbl_80368FCC);
}

void fn_8004DAFC(void *arg0, f32 farg0) {
    extern f32 lbl_80368FCC;
    extern f32 lbl_8036902C;
    extern f32 lbl_80369030;
    extern f32 lbl_80368FC0;

    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    u8 temp_r31;
    f32 var_f30;
    f32 var_f29;
    f32 var_f28;

    sp8 = *(f32 *)((u8 *)arg0 + 0x170);
    spC = *(f32 *)((u8 *)arg0 + 0x174);
    sp10 = *(s32 *)((u8 *)arg0 + 0x178);

    fn_80068070(spC, sp8, lbl_80368FCC, lbl_80368FCC, lbl_8036902C, lbl_80369030);
    fn_800680AC(0, 0, 0xA0, 0x78);
    fn_80067EDC(0);
    temp_r31 = *(u8 *)((u8 *)arg0 + 0x27);
    fn_80220DEC(0x98, 0, 4);

    var_f28 = *(f32 *)((u8 *)arg0 + 0x170);
    var_f29 = *(f32 *)((u8 *)arg0 + 0x174);
    temp_f5 = *(s32 *)((u8 *)arg0 + 0x178);

    var_f30 = farg0;

    temp_f4 = var_f28 - var_f30;
    temp_f3 = var_f29 - var_f30;
    temp_f2 = var_f28 + var_f30;

    *(f32 *)0xCC008000 = temp_f4;
    *(f32 *)0xCC008000 = temp_f3;
    *(f32 *)0xCC008000 = lbl_80368FCC;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = 0xFF;
    *(f32 *)0xCC008000 = lbl_80368FCC;
    *(f32 *)0xCC008000 = lbl_80368FCC;
    *(f32 *)0xCC008000 = temp_f2;
    *(f32 *)0xCC008000 = temp_f3;
    *(f32 *)0xCC008000 = lbl_80368FCC;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = 0xFF;
    *(f32 *)0xCC008000 = lbl_80368FC0;
    *(f32 *)0xCC008000 = lbl_80368FCC;
    *(f32 *)0xCC008000 = temp_f4;
    *(f32 *)0xCC008000 = temp_f5;
    *(f32 *)0xCC008000 = lbl_80368FCC;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = 0xFF;
    *(f32 *)0xCC008000 = lbl_80368FCC;
    *(f32 *)0xCC008000 = lbl_80368FC0;
    *(f32 *)0xCC008000 = temp_f2;
    *(f32 *)0xCC008000 = temp_f5;
    *(f32 *)0xCC008000 = lbl_80368FCC;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = temp_r31;
    *(u8 *)0xCC008000 = 0xFF;
    *(f32 *)0xCC008000 = lbl_80368FC0;
    *(f32 *)0xCC008000 = lbl_80368FC0;

    fn_80067984(0, 0xCC010000, lbl_80368FCC, temp_f2, temp_f3, temp_f4, temp_f5);
}

void fn_8004DC54(s8 arg0) {
    extern u8 lbl_803672BC;
    lbl_803672BC = arg0;
}

void fn_8004DC5C(void) {
    extern void fn_80067708(s32, void *, s32);
    extern char fn_8004DC8C[];
    fn_80067708(1, &fn_8004DC8C[0], 0);
}

void fn_8004DDB8(s32 arg0) {
    M2C_UNK fn_80007340(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009B28();
    M2C_UNK fn_80009B8C(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258(M2C_UNK *, M2C_UNK);
    u32 fn_80055D94(M2C_UNK);
    extern M2C_UNK fn_8004DEAC;
    extern s8 lbl_803672BD;
    extern M2C_UNK lbl_803672C0;
    extern f32 lbl_80368FC0;
    extern f32 lbl_80368FCC;
    if (fn_80055D94(0x80) == 0U) {
        M2C_FIELD(&lbl_803672C0, s8 *, 0) = 0x60;
        M2C_FIELD(&lbl_803672C0, s8 *, 1) = 0x60;
        M2C_FIELD(&lbl_803672C0, s8 *, 2) = 0x60;
        M2C_FIELD(&lbl_803672C0, s8 *, 3) = 0x60;
        lbl_803672BD = 1;
        fn_8000A258(&lbl_803672C0, 0x60);
        fn_80009D74(lbl_80368FCC, lbl_80368FCC, (f32) arg0, lbl_80368FC0);
        fn_8000A174(0, 0x410);
        fn_80009B8C(0xFF);
        fn_8000A248();
        fn_80007898(0xB);
        fn_80007340(&fn_8004DEAC, 0);
        fn_80007884();
        fn_80009B28();
    }
}

void fn_8004DE78(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

void fn_8004DEAC(void) {
    extern s32 lbl_803672B4;
    extern u8 lbl_803672BD;
    extern u8 lbl_803672C0;
    extern f32 lbl_80368FCC;

    fn_800599D0(0, 0, 0x260, 0x1C0, lbl_803672B4);
    fn_8005956C(0, 0, 0x260, 0x1C0, lbl_803672BD, &lbl_803672C0, lbl_803672B4, lbl_80368FCC);
}

void fn_8004DF04(void) {
    extern s16 lbl_803672C4;
    extern s16 lbl_803672C6;
    extern s16 lbl_803672C8;
    extern s16 lbl_803672CA;
    lbl_803672C4 = 0x3E8;
    lbl_803672C6 = 0x3E8;
    lbl_803672C8 = -0x3E8;
    lbl_803672CA = -0x3E8;
}

void fn_8004DF20(void *arg0) {
    u8 temp_r4;

    temp_r4 = ((u8*)arg0)[3];
    if ((temp_r4 & 2) && !(temp_r4 & 8)) {
        fn_80060060((char*)arg0 + 0x1C);
    }
}

extern double lbl_80368FE0;
extern float lbl_80368FF8;
extern float lbl_80368FD8;
void fn_8004E040(void) {
    float val = *(float*)lbl_803672A8;
    *(float*)lbl_803672A8 = (val - lbl_80368FE0) / lbl_80368FF8 * lbl_80368FD8;
    lbl_80368EF8 = *(float*)lbl_803672A8;
}

void fn_8004E9D8(void *arg0, s32 arg1) {
    u8 *ptr = (u8 *)arg0;
    u8 temp = ptr[0x3];
    if ((temp & 2) != 0) {
        temp &= 0xFD;
        ptr[0x3] = temp;
        fn_80184F20(arg0);
        fn_800616A0(ptr + 0x1C);
        if (*(u32 *)(ptr + 0x164) != 0) {
            fn_8005C7E8();
            *(u32 *)(ptr + 0x164) = 0;
            *(u32 *)(ptr + 0x17C) = 0;
        }
    }
    fn_8004EB14(arg0, arg1);
}

s32 fn_8004FA88(void *arg0) {
    s32 *temp_r3 = (s32 *) arg0;
    if (temp_r3[0] == 0x1000) {
        return 0x5C;
    }
    if (temp_r3[0] == 0x4B03) {
        if (*((u8 *) temp_r3 + 0x4) != 0) {
            return 0x60;
        }
    } else {
        if (temp_r3[0] == 0x4B07) {
            return 0x5E;
        }
    }

    return 0x5A;
}

void fn_8004FE58(void *arg0) {
    extern f32 lbl_80368FCC;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s16 *, 0x15C) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 0x16E) = -1;
    M2C_FIELD(arg0, s8 *, 0x16D) = -1;
    M2C_FIELD(arg0, s8 *, 0x16C) = -1;
    M2C_FIELD(arg0, f32 *, 0x170) = (f32) lbl_80368FCC;
    M2C_FIELD(arg0, f32 *, 0x174) = (f32) lbl_80368FCC;
    M2C_FIELD(arg0, f32 *, 0x178) = (f32) lbl_80368FCC;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0;
}

void fn_8004FE90(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 2) = arg1;
}

void fn_800504FC(void *arg0) {
    s32 fn_8004B1A0(s32);
    
    s32 temp_r3 = fn_8004B1A0(0);
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x280) = temp_r3;
        M2C_FIELD(arg0, s32 *, 0x284) = fn_8004B1A0(1);
        M2C_FIELD(arg0, s32 *, 0x288) = fn_8004B1A0(2);
        M2C_FIELD(arg0, s32 *, 0x28C) = fn_8004B1A0(3);
    }
}

void fn_800508C4(void* arg0, s32 arg1, s32 arg2) {
    u8 zero = 0;
    
    if (arg2 == 0) {
        M2C_FIELD(arg0, u8 *, 0xA) = zero;
        M2C_FIELD(arg0, u8 *, 0x9) = zero;
        M2C_FIELD(arg0, u8 *, 0xB) = zero;
    } else {
        s32 temp = *(u8*)((char*)arg0 + 0xA);
        if (temp < arg1) {
            M2C_FIELD(arg0, u8 *, 0xA) = arg1;
        }
        if (*(u8*)((char*)arg0 + 0x9) == 0) {
            if (arg2 >= 3) {
                M2C_FIELD(arg0, u8 *, 0x9) = 1;
            } else if (arg2 <= -3) {
                M2C_FIELD(arg0, u8 *, 0x9) = 2;
            }
        } else if (*(u8*)((char*)arg0 + 0x9) == 1) {
            if (arg2 >= 5) {
                M2C_FIELD(arg0, u8 *, 0x9) = 3;
            } else if (arg2 <= -5) {
                M2C_FIELD(arg0, u8 *, 0x9) = 4;
            }
        } else if (*(u8*)((char*)arg0 + 0x9) == 2) {
            if (arg2 >= 5) {
                M2C_FIELD(arg0, u8 *, 0x9) = 3;
            } else if (arg2 <= -5) {
                M2C_FIELD(arg0, u8 *, 0x9) = 4;
            }
        } else if (*(u8*)((char*)arg0 + 0x9) == 3) {
            if (arg2 >= 7) {
                M2C_FIELD(arg0, u8 *, 0x9) = 5;
            } else if (arg2 <= -7) {
                M2C_FIELD(arg0, u8 *, 0x9) = 6;
            }
        } else if (*(u8*)((char*)arg0 + 0x9) == 4) {
            if (arg2 >= 7) {
                M2C_FIELD(arg0, u8 *, 0x9) = 5;
            } else if (arg2 <= -7) {
                M2C_FIELD(arg0, u8 *, 0x9) = 6;
            }
        } else if (*(u8*)((char*)arg0 + 0x9) == 5) {
            if (arg2 >= 9) {
                M2C_FIELD(arg0, u8 *, 0x9) = 7;
            } else if (arg2 <= -9) {
                M2C_FIELD(arg0, u8 *, 0x9) = 8;
            }
        } else if (*(u8*)((char*)arg0 + 0x9) == 6) {
            if (arg2 >= 9) {
                M2C_FIELD(arg0, u8 *, 0x9) = 7;
            } else if (arg2 <= -9) {
                M2C_FIELD(arg0, u8 *, 0x9) = 8;
            }
        }
    }
}

void fn_80050AB8(s8 arg0) {
    extern void *lbl_80367100;
    *(u16*)((char*)lbl_80367100 + 0x18) = (u16)arg0;
}

void fn_80050BA8(s32 arg0) {
    M2C_UNK fn_8005F788(s32);
    fn_8005F788(arg0 + 0x1C);
}

void fn_80050BCC(s32 arg0, u8 arg1) {
    fn_8005F7B0(arg0 + 0x1C, arg1);
}

void fn_80050BF4(void* arg0, s32 arg1) {
    u16* r4 = (u16*)((u8*)arg0 + 0x60);
    u8 val = *r4;
    u16* r3 = (u16*)((u8*)r4 + ((val + arg1) * 2));
    *r3 |= 0x4002;

    r4 = (u16*)((u8*)arg0 + 0x60);
    val = *r4;
    r3 = (u16*)((u8*)r4 + ((val + arg1) * 2));
    *r3 |= 4;
}

void fn_80050C50(void *arg0, f32 farg0, f32 farg1) {
    f32 fn_80023430(M2C_UNK *);
    extern M2C_UNK lbl_802CA518;
    M2C_FIELD(arg0, f32 *, 4) = farg0;
    M2C_FIELD(arg0, f32 *, 8) = farg1;
    M2C_FIELD(arg0, f32 *, 0xC) = fn_80023430(&lbl_802CA518);
}

void fn_80051328(u8 arg0, M2C_UNK *arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4) {
    M2C_UNK fn_80202024(M2C_UNK *, M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_80202300(M2C_UNK *, M2C_UNK, f32);
    M2C_UNK fn_80202540(M2C_UNK *, f32, f32, f32);
    M2C_UNK fn_802026E4(M2C_UNK *, f32 *, s32 *, f32 *);
    M2C_UNK fn_8020293C(M2C_UNK *, f32, f32, f32, f32, f32, f32, f32, f32);
    M2C_UNK fn_802029C4(M2C_UNK *, s32 *, s32 *);
    extern M2C_UNK lbl_8026AA98;
    extern f32 lbl_80368FC4;
    extern f32 lbl_80368FCC;
    extern f32 lbl_80368FD8;
    extern f32 lbl_80368FDC;
    M2C_UNK spD4;
    M2C_UNK spA4;
    M2C_UNK sp74;
    M2C_UNK sp44;
    s32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    f32 sp30;
    f32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    f32 sp18;
    f32 sp14;
    s32 sp10;
    f32 spC;
    f32 sp8;

    sp2C = M2C_FIELD(&lbl_8026AA98, f32 *, 0x1C);
    sp30 = M2C_FIELD(&lbl_8026AA98, f32 *, 0x20);
    sp38 = M2C_FIELD(&lbl_8026AA98, f32 *, 0x28);
    sp3C = M2C_FIELD(&lbl_8026AA98, f32 *, 0x2C);
    sp2C = farg0;
    sp30 = farg1;
    sp38 = farg0;
    sp3C = farg1;
    sp34 = M2C_FIELD(&lbl_8026AA98, s32 *, 0x24);
    sp8 = sp2C;
    spC = sp30;
    sp10 = M2C_FIELD(&lbl_8026AA98, s32 *, 0x24);
    sp40 = M2C_FIELD(&lbl_8026AA98, s32 *, 0x30);
    sp14 = sp38;
    sp18 = sp3C;
    sp1C = M2C_FIELD(&lbl_8026AA98, s32 *, 0x30);
    sp20 = M2C_FIELD(&lbl_8026AA98, s32 *, 0x34);
    sp24 = M2C_FIELD(&lbl_8026AA98, s32 *, 0x38);
    sp28 = M2C_FIELD(&lbl_8026AA98, s32 *, 0x3C);
    if (lbl_80368FCC != farg4) {
        fn_80202300(&spA4, 0x5A, lbl_80368FD8 * farg4);
        if (arg0 == 0) {
            fn_802029C4(&spA4, &sp20, &sp20);
        }
        fn_802026E4(&sp74, &sp14, &sp20, &sp8);
        fn_8020293C(&sp44, -farg2, farg2, -farg3, farg3, lbl_80368FC4, lbl_80368FC4, lbl_80368FC4, lbl_80368FC4);
        fn_80202024(&sp44, &sp74, arg1);
        fn_80202540(&spD4, lbl_80368FDC, lbl_80368FDC, lbl_80368FCC);
        fn_80202024(&spA4, &spD4, &spA4);
        fn_80202540(&spD4, lbl_80368FC4, lbl_80368FC4, lbl_80368FCC);
        fn_80202024(&spD4, &spA4, &spA4);
        fn_80202024(&spA4, arg1, arg1);
        return;
    }
    fn_802026E4(&sp74, &sp14, &sp20, &sp8);
    fn_8020293C(&sp44, -farg2, farg2, -farg3, farg3, lbl_80368FC4, lbl_80368FC4, lbl_80368FC4, lbl_80368FC4);
    fn_80202024(&sp44, &sp74, arg1);
}

void fn_80051538(s32 *arg0) {
    M2C_UNK fn_80051564(s32 *);
    s32 sp8;

    sp8 = *arg0;
    fn_80051564(&sp8);
}

s32 fn_80052B30(s32 arg0) {
    extern u16 lbl_802858E8[];
    s32 temp = arg0 << 2;
    return *(u16*)((u8*)lbl_802858E8 + temp);
}

void fn_80052B44(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_80052B54(void *arg0) {
    void **temp_r31;
    void *temp_r30;
    
    if (arg0 == 0) {
        return;
    }
    temp_r31 = (void **)((char *)arg0 + 0x30);
    if (*temp_r31 == 0) {
        return;
    }
    temp_r30 = *(void **)((char *)arg0 + 0x34);
    *(s32 *)((char *)temp_r30 + 0x30) = 0x0;
    
    *(f32 *)((char *)*temp_r31 + 0xc) = *(f32 *)0x80369084;
    *(f32 *)((char *)*temp_r31 + 0x10) = *(f32 *)0x80369084;
    *(f32 *)((char *)*temp_r31 + 0x14) = *(f32 *)0x80369084;
    *(s16 *)((char *)*temp_r31 + 0x0) = 0x0;
    *(s8 *)((char *)*temp_r31 + 0x3) = -0x1;
    *(s8 *)((char *)*temp_r31 + 0x4) = -0x1;
    *(s32 *)((char *)*temp_r31 + 0x30) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x34) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x3c) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x40) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x44) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x8) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x5c) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x48) = 0x0;
    
    *(s32 *)((char *)arg0 + 0x8) = *(s32 *)0x80369080;
    *(s8 *)((char *)arg0 + 0x8) = *(s8 *)((char *)arg0 + 0x8);
    *(s8 *)((char *)arg0 + 0x9) = *(s8 *)((char *)arg0 + 0x9);
    *(s8 *)((char *)arg0 + 0x38) = *(s8 *)((char *)arg0 + 0x8);
    *(s8 *)((char *)arg0 + 0xa) = *(s8 *)((char *)arg0 + 0xa);
    *(s8 *)((char *)arg0 + 0x39) = *(s8 *)((char *)arg0 + 0x9);
    *(s8 *)((char *)arg0 + 0xb) = *(s8 *)((char *)arg0 + 0xb);
    *(s8 *)((char *)arg0 + 0x3a) = *(s8 *)((char *)arg0 + 0xa);
    *(s8 *)((char *)arg0 + 0x3b) = *(s8 *)((char *)arg0 + 0xb);
    
    *(s32 *)((char *)*temp_r31 + 0x2c) = 0x0;
    *(f32 *)((char *)*temp_r31 + 0x20) = *(f32 *)0x80369084;
    *(f32 *)((char *)*temp_r31 + 0x24) = *(f32 *)0x80369084;
    *(f32 *)((char *)*temp_r31 + 0x28) = *(f32 *)0x80369084;
    *(f32 *)((char *)*temp_r31 + 0x1c) = *(f32 *)0x80369088;
    *(f32 *)((char *)*temp_r31 + 0x18) = *(f32 *)0x8036908C;
    *(s8 *)((char *)*temp_r31 + 0x5) = 0x3;
    *(s32 *)((char *)*temp_r31 + 0x4c) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x50) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x54) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x58) = 0x0;
    
    *(s32 *)((char *)*temp_r31 + 0x8) |= 0x800;
    *(s32 *)((char *)*temp_r31 + 0x8) |= 0x2000;
}

void fn_80052F90(void *arg0) {
    extern f32 lbl_80369084;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_80369084;
}

s32 fn_80052F9C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x2C), u8 *, 4) & 3;
}

void fn_80052FB0(void *arg0, void *arg1, void *arg2) {
    f32 fn_80059440(f32, f32, f32, f32);
    extern f32 lbl_8036909C;

    void *temp_r3;
    void *var_r4;

    if ((arg1 != NULL) && (arg2 != NULL)) {
        *(f32*)((char*)*(void**)((char*)arg0 + 0x30) + 0x24) = fn_80059440(*(f32*)((char*)arg1 + 0), *(f32*)((char*)arg1 + 4), *(f32*)((char*)arg2 + 0), *(f32*)((char*)arg2 + 4));
    }
    
    temp_r3 = *(void**)((char*)arg0 + 0x30);
    if ((*(u32*)((char*)temp_r3 + 8) & 0x20000000) && (arg1 != NULL)) {
        var_r4 = arg1;
    } else {
        var_r4 = arg2;
    }
    
    if (var_r4 != NULL) {
        *(f32*)((char*)temp_r3 + 0xC) = *(f32*)((char*)var_r4 + 0);
        *(f32*)((char*)temp_r3 + 0x10) = *(f32*)((char*)var_r4 + 4);
        *(f32*)((char*)temp_r3 + 0x14) = lbl_8036909C + *(f32*)((char*)var_r4 + 8);
    }
}

void fn_800535B0(void *arg0) {
    M2C_UNK fn_800056CC(void *, s32);
    s32 fn_8004AF30(u16);
    s32 fn_8005F8E4(u16 *);
    s8 fn_80146BE4();
    M2C_UNK fn_8014746C(s8, M2C_UNK);
    extern M2C_UNK lbl_8026AC0C;
    u16 sp8;
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r28;
    s8 temp_r3_2;
    u16 *var_r29;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r4, s8 *, 3) = 0x1E;
    if ((u32) M2C_FIELD(temp_r4, u32 *, 0x5C) != 0U) {
        temp_r30 = fn_8005F8E4(&sp8);
        var_r29 = &sp8;
        var_r28 = 0;
loop_6:
        if (var_r28 < temp_r30) {
            temp_r3 = fn_8004AF30(*var_r29);
            if (temp_r3 != 0) {
                temp_r3_2 = fn_80146BE4();
                if (temp_r3_2 >= 0) {
                    fn_800056CC(&lbl_8026AC0C + 0x106, temp_r3);
                    fn_8014746C(temp_r3_2, 0xFA);
                }
            }
            var_r29 += 2;
            var_r28 += 1;
            goto loop_6;
        }
    }
}

void fn_80053658(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 0x30 + (arg1 << 2)) = arg2;
}

void fn_8005366C(void *arg0, s32 arg1, s32 arg2) {
    u32 addr = (u32)arg0 + 0x30;
    u32 ptr = addr + (arg1 << 2);
    *(s32 *)ptr = arg2;
}

void fn_80053680(void *arg0, void *arg1) {
    extern f32 lbl_8036909C;
    f32 *ptr0 = (f32*)M2C_FIELD(arg0, void **, 0x30);
    ptr0[3] = M2C_FIELD(arg1, f32 *, 4);
    ptr0[4] = M2C_FIELD(arg1, f32 *, 8);
    ptr0[5] = lbl_8036909C + M2C_FIELD(arg1, f32 *, 12);
}

void fn_800536B0(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0xC) = farg0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x10) = farg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x14) = farg2;
}

void fn_800536CC(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x34) = arg1;
}

void fn_800536D8(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x30) = arg1;
}

void fn_800536E4(void *arg0, void *arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) == (u32) M2C_FIELD(arg1, u32 *, 0)) {
        M2C_FIELD(arg1, void **, 4) = arg0;
    }
}

void fn_80053750(void *arg0, void *arg1) {
    if ((u16) M2C_FIELD(arg1, u16 *, 0) == (u16) *M2C_FIELD(arg0, u16 **, 0x30)) {
        M2C_FIELD(arg1, void **, 4) = arg0;
    }
}

void fn_8005376C(void) {
    u32 fn_8000C0C0(u32 *);
    void *fn_8000BF00(u32 *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_801451BC(void);
    s32 fn_80145308(void);
    void fn_800056CC(void *);

    extern u32 lbl_80285990[];
    extern u8 lbl_8026AC0C[];
    extern u8 lbl_80285968[];

    fn_8000BF00(lbl_80285990);
    if ((fn_8000C0C0(lbl_80285990) == 0U) && (fn_80145308() == 0)) {
        fn_801451BC();
        fn_800056CC((u8 *)&lbl_8026AC0C + 0x12E);
        return;
    }
    *(s32 *)((u8 *)fn_8000CAF0(lbl_80285968, 4) + 0x60) = 0;
}

s32 fn_800537E8(void) {
    extern u16 lbl_80285990[];
    s32 v = fn_8000C0C0(lbl_80285990);
    return v != 0;
}

void fn_80053D84(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) | 0x80000000);
}

void fn_80053D98(void* arg0, s32 arg1) {
    u16* r3;
    void* temp_r3;
    s32 var_r7;
    
    r3 = (u16*)((u8*)arg0 + 0x60);
    var_r7 = *(u8*)r3;
    *r3 += 1;
    
    temp_r3 = (u8*)arg0 + 0x20;
    r3 = (u16*)((u8*)temp_r3 + (var_r7 * 2));
    *r3 |= 0x8000;
    
    temp_r3 = (u8*)arg0 + 0x20;
    r3 = (u16*)((u8*)temp_r3 + ((var_r7 + arg1) * 2));
    *r3 |= 0x4000;
}

void fn_80053F08(void* arg0, s32 arg1) {
    u16* r5;
    u16 temp_r0;

    r5 = (u16*)((u8*)arg0 + 0x60);
    temp_r0 = *(u8*)r5 + arg1;
    *r5 |= 0x4002;

    r5 = (u16*)((u8*)arg0 + 0x60);
    temp_r0 = *(u8*)r5 + arg1;
    *r5 |= 4;
}

void fn_80054314(void *arg0) {
    u8 fn_8000A268();
    M2C_UNK fn_80069F04(void *);
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 0xB);
    if ((u8) ((temp_r31 * fn_8000A268()) / 255) != 0) {
        fn_8005F7B0(arg0);
        fn_80069F04(arg0);
        fn_8005F7B0(arg0, temp_r31);
    }
}

void fn_80054808(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    u8 fn_80055248(s32);
    if (fn_80055248(*M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 **, 0x2C)) != 0) {
        fn_8000C188(arg0);
    }
}

extern void* jumptable_80285A50;
void fn_80054C14(void* arg0)
{
    void* r27;
    int r3, r28;
    int r0;
    
    r27 = (void*)arg0;
    r3 = *(u32*)((char*)arg0 + 0x30);
    r28 = *(u32*)((char*)r3 + 0x5c);
    r3 = r28;
    fn_8005F7F0(r3);
    r0 = (r3 & 0xFFFFFF00) >> 24;
    if (r0 == 0)
        return;

    /* Loading data from lbl_8026ABF0 */
    r3 = *(u32*)((char*)r28 + 0x5c);
    
    // Direct copy of the memory
    *(u32*)((char*)r27 + 0x50) = *(u32*)((char*)r3 + 0x0);
    *(u32*)((char*)r27 + 0x54) = *(u32*)((char*)r3 + 0x4);
    *(u32*)((char*)r27 + 0x58) = *(u32*)((char*)r3 + 0x8);
    *(u32*)((char*)r27 + 0x5C) = *(u32*)((char*)r3 + 0xC);
    *(u32*)((char*)r27 + 0x60) = *(u32*)((char*)r3 + 0x10);
    *(u32*)((char*)r27 + 0x64) = *(u32*)((char*)r3 + 0x14);
    *(u32*)((char*)r27 + 0x68) = *(u32*)((char*)r3 + 0x18);

    fn_8005F92C(r3);

    r0 = (r3 & 0xFFFF0000) >> 16;
    r0 -= 0x9;
    if ((r0 > 0x1E))
        return;

    // Jump table handling
    r3 = *(u32*)((char*)jumptable_80285A50 + (r0 << 2));
    
    __builtin_unreachable();
}

void fn_800558D8(s32 arg0) {
    void fn_800555EC(s32, s32);
    fn_800555EC(arg0, 0);
}

extern u32 lbl_80369058;
extern u32 lbl_8036905C;
extern u32 lbl_80369060;
extern u32 lbl_80369064;
extern u32 lbl_80369068;
extern u32 lbl_8036906C;
extern u32 lbl_80369070;
extern u32 lbl_80369074;
extern u32 lbl_80369078;
extern u32 lbl_8036907C;
extern u32 jumptable_80285ACC[];
void fn_800558FC(void* arg0)
{
    // Load byte and compare with 0x8
    u8 val = *(u8*)((char*)arg0 + 0x6);
    
    if (val >= 0x8) {
        // Use jump table for cases >= 8
        void (*func)(void) = (void (*)(void))jumptable_80285ACC[val];
        
        // Make the call
        func();
    } else {
        // Switch to handle cases 0-7
        
        switch(val) {
            case 0:
                *(u32*)(((char*)arg0) + 0x28) = lbl_8036905C;
                break;
            case 1:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369060;
                break;
            case 2:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369064;
                break;
            case 3:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369068;
                break;
            case 4:
                *(u32*)(((char*)arg0) + 0x28) = lbl_8036906C;
                break;
            case 5:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369070;
                break;
            case 6:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369074;
                break;
            case 7:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369078;
                break;
        }

        // After switch, just do one final assignment
        *(u32*)(((char*)arg0) + 0x28) = lbl_8036907C;
    }
}

s32 fn_80055AC0(s32 *arg0, s32 arg1) {
    M2C_UNK fn_80231D94(s32, void *, void *, s32);
    extern u16 lbl_8026AC0C[];
    fn_80231D94(arg1, &lbl_8026AC0C[0x120/2], &lbl_8026AC0C[0x128/2], *arg0);
    return arg1;
}

void fn_80055B0C(u8 arg0) {
    M2C_UNK fn_800056A0(M2C_UNK);
    M2C_UNK fn_801451BC();
    M2C_UNK fn_801452A8(u8);
    u8 fn_801452C8(u8);
    s32 fn_801452E8();
    if (fn_801452C8(arg0) == 0) {
        if (fn_801452E8() >= 0x10) {
            fn_800056A0(0);
            fn_801451BC();
        }
        fn_801452A8(arg0);
    }
}

void fn_80055B64(s32 arg0) {
    M2C_UNK fn_800056CC(void *);
    u32 fn_8000C0C0(M2C_UNK *);
    void *fn_8000CAF0(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_801451BC();
    u8 fn_80145308();
    extern M2C_UNK lbl_8026AC0C;
    extern M2C_UNK lbl_80285968;
    extern M2C_UNK lbl_80285990;
    if ((arg0 == 0) && (fn_8000C0C0(&lbl_80285990) == 0U) && (fn_80145308() == 0)) {
        fn_801451BC();
        fn_800056CC(&lbl_8026AC0C + 0x12E);
        return;
    }
    M2C_FIELD(fn_8000CAF0(&lbl_80285968, 4), s32 *, 0x60) = arg0;
}

void fn_80055BE0(s32 arg0) {
    u32 fn_8000C0C0(M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_801451BC();
    u8 fn_80145308();
    extern M2C_UNK lbl_80285990;
    if ((fn_8000C0C0(&lbl_80285990, &lbl_80285990) == 0U) && (fn_80145308() == 0)) {
        fn_801451BC();
        fn_8000C188(arg0);
    }
}

void fn_80055C34(void *arg0) {
    void fn_8000C070(void *, s32);

    *(s32 *)((u8 *)arg0 + 0x60) = *(s32 *)((u8 *)arg0 + 0x60) - 1;
    if (*(s32 *)((u8 *)arg0 + 0x60) >= 0) {
        fn_8000C070(arg0, 0);
    }
}

extern u16 *lbl_803672AC;
#include "common.h"
#include "global.h"

extern u16 lbl_8026A660;
extern void* lbl_803672A8;
extern u8 lbl_802CA518[0x24F60];
extern u32* lbl_803672CC;
#include "global.h"
#include "common.h"

extern u32 jumptable_8028561C[];
extern u32 jumptable_802855E4[];
#include "global.h"
extern s32* lbl_803672B0;
extern f32 lbl_80368FCC;
extern f32 lbl_80368FF0;
extern u16* lbl_802B14E4;
#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    char pad[0x30 - 0x18];
    s32 unk30;
    s32 unk34;
    s32 unk38;
} Struct_800330F8;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    char pad[0x20 - 0x18];
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
} Struct_800330F8_A;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    char pad[0xBC - 0x18];
    s32 unkBC;
} Struct_800330F8_B;

void fn_8004781C(void *arg0) {
    // body of function will go here
}
#include "common.h"
extern f32 lbl_80368FD8;
extern u16 lbl_8026AB18;
extern f32 lbl_80368FC4;
