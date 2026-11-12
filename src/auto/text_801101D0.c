/* Functions from 0x801101D0 to 0x80120CC0, found by decomp-toolkit. */
#include "common.h"
extern u16 lbl_80273DF8[];
extern u16 lbl_80296128[];

typedef struct String {
    u32 size;
    u32 cap;
    char *data;
} String;

extern f32 lbl_8036A1DC;
extern f32 lbl_8036A1A4;
extern f32 lbl_8036A1C8;
extern u16 lbl_8028F6C8[];
void fn_800C9ABC(void *, char *, void *);
void fn_800C9A60(void *, s32);
void fn_800E6418(void *, s32, void *, s32, s32, void *);
void fn_800D6878(void *, void *, void *);
void fn_800C96F8(void *, char *, u32);
s32 fn_800C9400(void *, s32, void *, char *, s32);
s32 fn_800D5948(void *, char *, s32, s32);
u8 fn_800E56C4(void *);
void fn_80113298(void *, void *, s32, s32, s32);
void fn_801134EC(void *, void *, void *);
void fn_800C9758(void *, void *, s32, s32);
void *fn_800C93EC(void *);
extern u16 lbl_80367A58;

extern s32 lbl_80367110;

extern s32 lbl_80330708[];
extern f32 lbl_8036A184;
extern f32 lbl_8036A1BC;
extern f32 lbl_8036A1B0;
extern f64 lbl_8036A198;
extern f32 lbl_8036A1D8;
void fn_8005FEE8(void *, f32);
void fn_800608AC(void *);
void fn_80202300(void *, s32, void *, f32, f32);
void fn_802029C4(void *, void *, void *);
#define VCALL(ptr, offset) (((void(**)(void *, void *))((u8*)(ptr) + (offset)))[0])

typedef struct {
    void *unk0;
    void *unk4;
    void *unk8;
    void *unkC;
    void *unk10;
    void *unk14;
    void *unk18;
    void *unk1C;
    void *unk20;
    void *unk24;
    void *unk28;
    void *unk2C;
    void *unk30;
    void *unk34;
    void *unk38;
    void *unk3C;
    void *unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    // ... (more fields if needed)
} UnitStruct;

// Global data for this function
u8 lbl_8028FDB0[0x10] = { 0 };
u8 lbl_80292230[0x28] = { 0 };
u8 lbl_802921E0[0x28] = { 0 };

extern f32 lbl_8036A1E8;
extern f32 lbl_8036A1F8;

extern u8 lbl_80367A48;

void fn_801101D0(void *arg0, s32 arg1) {
    void fn_800E5A4C(void *, s32);
    void fn_801C6978(void *);
    void *tmp = *(void **)((u8 *)arg0 + 0xE0);
    if (tmp != NULL) {
        fn_801C6978(tmp);
    }
    fn_800E5A4C(arg0, arg1);
}

u8 fn_80110220(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A7);
}

#pragma cplusplus on
extern "C" void fn_80110228(void *arg0) {
    s32 strlen(char *);
    void *fn_800C42D8(s32);
    s32 fn_800C9400(void *, s32, void *, char *, s32);
    void fn_800C96F8(void *, char *, u32);
    void fn_800C9758(void *, void *, s32, s32);
    void fn_800C9A60(void *, s32);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800CB90C(void *, void *, char *);
    void fn_800CBF24(void *, void *, void *);
    void fn_800DBB74(void *, void *);
    void fn_800DB67C(void *, void *, s32);
    s32 fn_800DDAA4(void *, void *);
    void fn_800DF670(void *);
    void fn_800E4E7C(void *, void *, char *);
    void fn_800E4FE8(void *, void *, char *);
    s32 fn_800E5200(void *, s32, s32, f32);
    u8 fn_800E5248(void *, s32);
    void fn_800E76E0(void *, f32);
    void fn_800E77A0(void *, s32, s32, f32);
    void fn_80111740(void *);
    void fn_80151894(void *);
    void *fn_80151D50(void *, void *, void *, void *, void *, void *, s32);
    void *fn_801992F8(void *);
    s32 fn_80199310(void);
    void fn_80203184(void *, void *, void *);
    void fn_802031CC(void *, void *, f32);
    void fn_802031E8(void *, void *);
    extern void *lbl_80368278;
    extern f32 lbl_8036A188;
    extern f32 lbl_8036A18C;

    struct V3 {
        f32 x, y, z;
        V3() {}
        V3(f32 _x, f32 _y, f32 _z) { x = _x; y = _y; z = _z; }
    };

    struct Actor {
        u8 pad[0x40];
        virtual void v1() = 0;
        virtual void v0() = 0;
        virtual void v3() = 0;
        virtual void v2() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v10() = 0;
        virtual void v9() = 0;
        virtual void Color(f32, f32, f32) = 0;
        virtual V3 GetPos(s32) = 0;
    };

    struct Manager {
        u8 pad[0x10];
        virtual void v2() = 0;
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void Add(void *) = 0;
    };

    typedef struct {
        s32 x, y, z;
    } Word3;

    typedef void (*GetPosFn)(V3 *, void *, s32);

    V3 sp378;
    V3 sp384;
    String str294;
    String str288;
    String str27C;
    String str270;
    String str264;
    String str258;
    String str24C;
    String str240;
    String str1F8;
    String str1B0;
    String str168;
    String str2E8;
    String str2A0;
    Word3 copyB;
    Word3 tmpVec;
    Word3 copyA;
    V3 got;
    Word3 pos;
    V3 sp114;
    V3 sp120;
    V3 spFC;
    V3 sp108;
    V3 spE4;
    V3 spF0;
    V3 spCC;
    V3 spD8;
    V3 spB4;
    V3 spC0;
    V3 sp90;
    V3 spA8;
    V3 sp9C;
    V3 sp78;
    V3 sp84;
    V3 sp54;
    V3 sp6C;
    V3 sp60;
    V3 sp3C;
    V3 sp48;
    V3 sp24;
    V3 sp30;
    V3 sp360;
    V3 sp348;
    V3 sp324;
    V3 sp318;
    V3 sp2DC;
    V3 sp2D0;
    Word3 w300;
    Word3 w2B8;
    void *scratch;
    void *scratch2;
    void *scratch3;
    void *scratch4;
    void *scratch5;
    void *scratch6;
    void *self;
    s32 n;
    s8 flag;
    void *obj;
    void *other;
    f32 a0, a1, a2;
    f32 z;
    f32 temp_f;
    s32 t;
    void *tmp;

    self = arg0;
    sp384.z = lbl_8036A184;
    sp384.y = lbl_8036A184;
    sp384.x = lbl_8036A184;
    sp378.z = lbl_8036A184;
    sp378.y = lbl_8036A184;
    sp378.x = lbl_8036A184;

    if ((u8)fn_800E5248(self, 9) != 0) {
        fn_800E77A0(*(void **)((u8 *)self + 0xAC), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x98));
    }
    if ((u8)fn_800E5248(self, 0xA) != 0) {
        fn_800E77A0(*(void **)((u8 *)self + 0xAC), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x9C));
    }
    if ((u8)fn_800E5248(self, 0xB) != 0) {
        fn_800E77A0(*(void **)((u8 *)self + 0xAC), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0xA0));
    }
    if ((u8)fn_800E5248(self, 0x1E) != 0) {
        fn_800E77A0(*(void **)((u8 *)self + 0xAC), 0, -1, *(f32 *)((u8 *)lbl_80368278 + 0x98));
    }
    if ((u8)fn_800E5248(self, 0x1F) != 0) {
        fn_800E77A0(*(void **)((u8 *)self + 0xAC), 0, -1, *(f32 *)((u8 *)lbl_80368278 + 0x9C));
    }
    if ((u8)fn_800E5248(self, 0x20) != 0) {
        fn_800E77A0(*(void **)((u8 *)self + 0xAC), 0, -1, *(f32 *)((u8 *)lbl_80368278 + 0xA0));
    }
    if ((u8)fn_800E5248(self, 0x21) != 0) {
        fn_800E76E0(*(void **)((u8 *)self + 0xAC), *(f32 *)((u8 *)lbl_80368278 + 0x98));
    }

    if ((u8)fn_800E5248(self, 0x2B) != 0) {
        str294.size = 0;
        str294.cap = 0;
        str294.data = 0;
        str294.cap = 0;
        switch (*(s32 *)((u8 *)self + 0x1CC)) {
        case 1:
            n = strlen((char *)lbl_80273DF8 + 0x1D);
            fn_800C96F8(&str294, (char *)lbl_80273DF8 + 0x1D, n);
            break;
        case 2:
            n = strlen((char *)lbl_80273DF8 + 0x2D);
            fn_800C96F8(&str294, (char *)lbl_80273DF8 + 0x2D, n);
            break;
        case 3:
            n = strlen((char *)lbl_80273DF8 + 0x3E);
            fn_800C96F8(&str294, (char *)lbl_80273DF8 + 0x3E, n);
            break;
        default:
            fn_800C9A60(&str294, -1);
            goto after_2b;
        }
        *(f32 *)&pos.z = lbl_8036A184;
        *(f32 *)&pos.y = lbl_8036A184;
        *(f32 *)&pos.x = lbl_8036A184;
        n = strlen((char *)lbl_80273DF8 + 0x4E);
        if (fn_800C9400(&str294, 0, (void *)str294.size, (char *)lbl_80273DF8 + 0x4E, n) != 0) {
            got = ((Actor *)self)->GetPos(0);
            flag = 0;
            *(f32 *)&pos.y = got.y;
            *(f32 *)&pos.x = got.x;
            *(f32 *)&pos.z = got.z;
            *(f32 *)&pos.y = lbl_8036A184;
            obj = fn_800C42D8(0xC8);
            if (obj != NULL) {
                fn_800DBB74(&tmpVec, self);
                copyA = tmpVec;
                copyB = pos;
                fn_800C9ABC(&str240, (char *)lbl_80273DF8 + 0x51, &scratch);
                flag = 1;
                obj = fn_80151D50(obj, *(void **)((u8 *)self + 0xAC), &str240, &str294, &copyB, &copyA, 0);
            }
            if (flag) {
                fn_800C9A60(&str240, -1);
            }
            ((Actor *)obj)->Color(
                *(f32 *)((u8 *)lbl_80368278 + 0x104),
                *(f32 *)((u8 *)lbl_80368278 + 0x108),
                *(f32 *)((u8 *)lbl_80368278 + 0x10C));
            fn_80151894(obj);
            (*(Manager **)((u8 *)self + 0xAC))->Add(obj);
        }
        fn_800C9A60(&str294, -1);
    }
after_2b:

    if ((u8)fn_800E5248(self, 0x2C) != 0) {
        str288.size = 0;
        str288.cap = 0;
        str288.data = 0;
        str288.cap = 0;
        switch (*(s32 *)((u8 *)self + 0x1CC)) {
        case 1:
            n = strlen((char *)lbl_80273DF8 + 0x55);
            fn_800C96F8(&str288, (char *)lbl_80273DF8 + 0x55, n);
            break;
        case 2:
            n = strlen((char *)lbl_80273DF8 + 0x66);
            fn_800C96F8(&str288, (char *)lbl_80273DF8 + 0x66, n);
            break;
        case 3:
            n = strlen((char *)lbl_80273DF8 + 0x77);
            fn_800C96F8(&str288, (char *)lbl_80273DF8 + 0x77, n);
            break;
        default:
            fn_800C9A60(&str288, -1);
            goto after_2c;
        }
        *(f32 *)&pos.z = lbl_8036A184;
        *(f32 *)&pos.y = lbl_8036A184;
        *(f32 *)&pos.x = lbl_8036A184;
        n = strlen((char *)lbl_80273DF8 + 0x4E);
        if (fn_800C9400(&str288, 0, (void *)str288.size, (char *)lbl_80273DF8 + 0x4E, n) != 0) {
            got = ((Actor *)self)->GetPos(0);
            flag = 0;
            *(f32 *)&pos.y = got.y;
            *(f32 *)&pos.x = got.x;
            *(f32 *)&pos.z = got.z;
            *(f32 *)&pos.y = lbl_8036A184;
            obj = fn_800C42D8(0xC8);
            if (obj != NULL) {
                fn_800DBB74(&tmpVec, self);
                copyA = tmpVec;
                copyB = pos;
                fn_800C9ABC(&str1F8, (char *)lbl_80273DF8 + 0x51, &scratch2);
                flag = 1;
                obj = fn_80151D50(obj, *(void **)((u8 *)self + 0xAC), &str1F8, &str288, &copyB, &copyA, 0);
            }
            if (flag) {
                fn_800C9A60(&str1F8, -1);
            }
            ((Actor *)obj)->Color(
                *(f32 *)((u8 *)lbl_80368278 + 0x104),
                *(f32 *)((u8 *)lbl_80368278 + 0x108),
                *(f32 *)((u8 *)lbl_80368278 + 0x10C));
            fn_80151894(obj);
            (*(Manager **)((u8 *)self + 0xAC))->Add(obj);
        }
        fn_800C9A60(&str288, -1);
    }
after_2c:

    if ((u8)fn_800E5248(self, 0x2D) != 0) {
        fn_80111740(self);
    }

    if ((u8)fn_800E5248(self, 0x2E) != 0) {
        str27C.size = 0;
        str27C.cap = 0;
        str27C.data = 0;
        str27C.cap = 0;
        switch (*(s32 *)((u8 *)self + 0x1CC)) {
        case 1:
            n = strlen((char *)lbl_80273DF8 + 0x88);
            fn_800C96F8(&str27C, (char *)lbl_80273DF8 + 0x88, n);
            break;
        case 2:
            n = strlen((char *)lbl_80273DF8 + 0x99);
            fn_800C96F8(&str27C, (char *)lbl_80273DF8 + 0x99, n);
            break;
        case 3:
            n = strlen((char *)lbl_80273DF8 + 0xAA);
            fn_800C96F8(&str27C, (char *)lbl_80273DF8 + 0xAA, n);
            break;
        default:
            fn_800C9A60(&str27C, -1);
            goto after_2e;
        }
        *(f32 *)&pos.z = lbl_8036A184;
        *(f32 *)&pos.y = lbl_8036A184;
        *(f32 *)&pos.x = lbl_8036A184;
        n = strlen((char *)lbl_80273DF8 + 0x4E);
        if (fn_800C9400(&str27C, 0, (void *)str27C.size, (char *)lbl_80273DF8 + 0x4E, n) != 0) {
            got = ((Actor *)self)->GetPos(0);
            flag = 0;
            *(f32 *)&pos.y = got.y;
            *(f32 *)&pos.x = got.x;
            *(f32 *)&pos.z = got.z;
            *(f32 *)&pos.y = lbl_8036A184;
            obj = fn_800C42D8(0xC8);
            if (obj != NULL) {
                fn_800DBB74(&tmpVec, self);
                copyA = tmpVec;
                copyB = pos;
                fn_800C9ABC(&str1B0, (char *)lbl_80273DF8 + 0x51, &scratch3);
                flag = 1;
                obj = fn_80151D50(obj, *(void **)((u8 *)self + 0xAC), &str1B0, &str27C, &copyB, &copyA, 0);
            }
            if (flag) {
                fn_800C9A60(&str1B0, -1);
            }
            ((Actor *)obj)->Color(
                *(f32 *)((u8 *)lbl_80368278 + 0x104),
                *(f32 *)((u8 *)lbl_80368278 + 0x108),
                *(f32 *)((u8 *)lbl_80368278 + 0x10C));
            fn_80151894(obj);
            (*(Manager **)((u8 *)self + 0xAC))->Add(obj);
        }
        fn_800C9A60(&str27C, -1);
    }
after_2e:

    if ((u8)fn_800E5248(self, 0x3C) != 0) {
        str270.size = 0;
        str270.cap = 0;
        str270.data = 0;
        str270.cap = 0;
        switch (*(s32 *)((u8 *)self + 0x1CC)) {
        case 1:
            n = strlen((char *)lbl_80273DF8 + 0xBB);
            fn_800C96F8(&str270, (char *)lbl_80273DF8 + 0xBB, n);
            break;
        case 2:
            n = strlen((char *)lbl_80273DF8 + 0xCC);
            fn_800C96F8(&str270, (char *)lbl_80273DF8 + 0xCC, n);
            break;
        case 3:
            n = strlen((char *)lbl_80273DF8 + 0xDD);
            fn_800C96F8(&str270, (char *)lbl_80273DF8 + 0xDD, n);
            break;
        default:
            fn_800C9A60(&str270, -1);
            goto after_3c;
        }
        *(f32 *)&pos.z = lbl_8036A184;
        *(f32 *)&pos.y = lbl_8036A184;
        *(f32 *)&pos.x = lbl_8036A184;
        n = strlen((char *)lbl_80273DF8 + 0x4E);
        if (fn_800C9400(&str270, 0, (void *)str270.size, (char *)lbl_80273DF8 + 0x4E, n) != 0) {
            got = ((Actor *)self)->GetPos(0);
            flag = 0;
            *(f32 *)&pos.y = got.y;
            *(f32 *)&pos.x = got.x;
            *(f32 *)&pos.z = got.z;
            *(f32 *)&pos.y = lbl_8036A184;
            obj = fn_800C42D8(0xC8);
            if (obj != NULL) {
                fn_800DBB74(&tmpVec, self);
                copyA = tmpVec;
                copyB = pos;
                fn_800C9ABC(&str168, (char *)lbl_80273DF8 + 0x51, &scratch4);
                flag = 1;
                obj = fn_80151D50(obj, *(void **)((u8 *)self + 0xAC), &str168, &str270, &copyB, &copyA, 0);
            }
            if (flag) {
                fn_800C9A60(&str168, -1);
            }
            ((Actor *)obj)->Color(
                *(f32 *)((u8 *)lbl_80368278 + 0x104),
                *(f32 *)((u8 *)lbl_80368278 + 0x108),
                *(f32 *)((u8 *)lbl_80368278 + 0x10C));
            fn_80151894(obj);
            (*(Manager **)((u8 *)self + 0xAC))->Add(obj);
        }
        fn_800C9A60(&str270, -1);
    }
after_3c:

    if ((u8)fn_800E5248(self, 0xC) != 0 && *(s32 *)((u8 *)self + 0x1B8) == 1) {
        if (*(s32 *)((u8 *)self + 0x19C) != 0) {
            if (*(void **)((u8 *)self + 0x118) == NULL) {
                a0 = *(f32 *)((u8 *)self + 0x48);
                a2 = *(f32 *)((u8 *)self + 0x50);
            } else {
                ((GetPosFn)((void **)*(void **)((u8 *)self + 0x40))[0xE])(&sp114, self, 0);
                other = *(void **)((u8 *)self + 0x118);
                ((GetPosFn)((void **)*(void **)((u8 *)other + 0x40))[0xE])(&sp120, other, 0);
                z = lbl_8036A184;
                spFC.y = z;
                spFC.x = sp120.x - (sp114.x - *(f32 *)((u8 *)self + 0x48));
                spFC.z = z;
                sp108.y = z;
                sp108.z = z;
                sp108.x = -*(f32 *)((u8 *)self + 0x60);
                fn_802031CC(&sp108, &sp108, *(f32 *)((u8 *)self + 0x128) * lbl_8036A188);
                fn_80203184(&spFC, &sp108, &spFC);
                a0 = spFC.x;
                a2 = lbl_8036A184;
            }
            sp384.x = a0;
            sp384.y = lbl_8036A184;
            sp384.z = a2;
        } else {
            if (*(void **)((u8 *)self + 0x118) == NULL) {
                a0 = *(f32 *)((u8 *)self + 0x48);
                a2 = *(f32 *)((u8 *)self + 0x50);
            } else {
                ((GetPosFn)((void **)*(void **)((u8 *)self + 0x40))[0xE])(&spE4, self, 0);
                other = *(void **)((u8 *)self + 0x118);
                ((GetPosFn)((void **)*(void **)((u8 *)other + 0x40))[0xE])(&spF0, other, 0);
                z = lbl_8036A184;
                spCC.y = z;
                spCC.x = spF0.x - (spE4.x - *(f32 *)((u8 *)self + 0x48));
                spCC.z = z;
                spD8.y = z;
                spD8.z = z;
                spD8.x = -*(f32 *)((u8 *)self + 0x60);
                fn_802031CC(&spD8, &spD8, *(f32 *)((u8 *)self + 0x128) * lbl_8036A18C);
                fn_80203184(&spCC, &spD8, &spCC);
                a0 = spCC.x;
                a2 = lbl_8036A184;
            }
            sp384.x = a0;
            sp384.y = lbl_8036A184;
            sp384.z = a2;
        }
        *(u8 *)((u8 *)self + 0x195) = 0;
        *(u8 *)((u8 *)self + 0x194) = 1;
        got = sp384;
        fn_800DB67C(self, &got, fn_800E5200(self, 0xD, *(s32 *)((u8 *)self + 0xCC), sp384.x) - *(s32 *)((u8 *)self + 0xCC));
        *(s32 *)((u8 *)self + 0x1A8) = 0;
    }

    if ((u8)fn_800E5248(self, 5) != 0 && *(s32 *)((u8 *)self + 0x1B8) == 1) {
        other = *(void **)((u8 *)self + 0x118);
        if (other != NULL) {
            temp_f = *(f32 *)((u8 *)lbl_80368278 + 0x100);
            ((GetPosFn)((void **)*(void **)((u8 *)other + 0x40))[0xE])(&spB4, other, 0);
            tmp = *(void **)((u8 *)other + 0x118);
            ((GetPosFn)((void **)*(void **)((u8 *)tmp + 0x40))[0xE])(&spC0, tmp, 0);
            sp90.x = spB4.x;
            sp90.y = lbl_8036A184;
            sp90.z = lbl_8036A184;
            spA8.y = lbl_8036A184;
            spA8.z = lbl_8036A184;
            spA8.x = -*(f32 *)((u8 *)other + 0x60);
            fn_802031E8(&spA8, &spA8);
            fn_802031CC(&spA8, &spA8, temp_f);
            fn_80203184(&sp90, &spA8, &sp9C);
            sp384.y = lbl_8036A184;
            sp384.x = sp9C.x;
            sp384.z = lbl_8036A184;
        } else {
            got = ((Actor *)self)->GetPos(0);
            sp384 = got;
        }
        *(u8 *)((u8 *)self + 0x195) = 0;
        got = sp384;
        fn_800DB67C(self, &got, fn_800E5200(self, 0xD, *(s32 *)((u8 *)self + 0xCC), sp384.x) - *(s32 *)((u8 *)self + 0xCC));
        fn_80111740(self);
        *(s32 *)((u8 *)self + 0x1A8) = 0;
    }

    if ((u8)fn_800E5248(self, *(s32 *)((u8 *)lbl_80368278 + 0x16C)) != 0) {
        other = *(void **)((u8 *)self + 0x118);
        if (other != NULL) {
            temp_f = *(f32 *)((u8 *)lbl_80368278 + 0x17C);
            ((GetPosFn)((void **)*(void **)((u8 *)other + 0x40))[0xE])(&sp78, other, 0);
            tmp = *(void **)((u8 *)other + 0x118);
            ((GetPosFn)((void **)*(void **)((u8 *)tmp + 0x40))[0xE])(&sp84, tmp, 0);
            sp54.x = sp78.x;
            sp54.y = lbl_8036A184;
            sp54.z = lbl_8036A184;
            sp6C.y = lbl_8036A184;
            sp6C.z = lbl_8036A184;
            sp6C.x = -*(f32 *)((u8 *)other + 0x60);
            fn_802031E8(&sp6C, &sp6C);
            fn_802031CC(&sp6C, &sp6C, temp_f);
            fn_80203184(&sp54, &sp6C, &sp60);
            sp384.y = lbl_8036A184;
            sp384.x = sp60.x;
            sp384.z = lbl_8036A184;
        } else {
            got = ((Actor *)self)->GetPos(0);
            sp384 = got;
        }
        *(u8 *)((u8 *)self + 0x195) = 0;
        got = sp384;
        fn_800DB67C(self, &got, fn_800E5200(self, *(s32 *)((u8 *)lbl_80368278 + 0x170), *(s32 *)((u8 *)self + 0xCC), sp384.x) - *(s32 *)((u8 *)self + 0xCC));
        fn_80111740(self);
        *(s32 *)((u8 *)self + 0x1A8) = 0;
    }

    if ((u8)fn_800E5248(self, *(s32 *)((u8 *)lbl_80368278 + 0x174)) != 0) {
        if (*(void **)((u8 *)self + 0x118) == NULL) {
            a0 = *(f32 *)((u8 *)self + 0x48);
            a2 = *(f32 *)((u8 *)self + 0x50);
        } else {
            ((GetPosFn)((void **)*(void **)((u8 *)self + 0x40))[0xE])(&sp3C, self, 0);
            other = *(void **)((u8 *)self + 0x118);
            ((GetPosFn)((void **)*(void **)((u8 *)other + 0x40))[0xE])(&sp48, other, 0);
            z = lbl_8036A184;
            sp24.y = z;
            sp24.x = sp48.x - (sp3C.x - *(f32 *)((u8 *)self + 0x48));
            sp24.z = z;
            sp30.y = z;
            sp30.z = z;
            sp30.x = -*(f32 *)((u8 *)self + 0x60);
            fn_802031CC(&sp30, &sp30, *(f32 *)((u8 *)self + 0x128) * lbl_8036A18C);
            fn_80203184(&sp24, &sp30, &sp24);
            a0 = sp24.x;
            a2 = lbl_8036A184;
        }
        sp384.x = a0;
        sp384.y = lbl_8036A184;
        *(u8 *)((u8 *)self + 0x195) = 0;
        sp384.z = a2;
        got = sp384;
        fn_800DB67C(self, &got, fn_800E5200(self, *(s32 *)((u8 *)lbl_80368278 + 0x178), *(s32 *)((u8 *)self + 0xCC), sp384.x) - *(s32 *)((u8 *)self + 0xCC));
        fn_80111740(self);
        *(s32 *)((u8 *)self + 0x1A8) = 0;
    }

    if ((u8)fn_800E5248(self, 0xE) != 0) {
        if (*(void **)((u8 *)self + 0x11C) != NULL) {
            t = fn_80199310();
            fn_800DF670(*(void **)((u8 *)self + 0x11C));
            if (t == 3) {
                fn_800E4FE8(*(void **)((u8 *)self + 0x11C), self, (char *)lbl_80273DF8 + 0xEE);
            } else {
                fn_800E4FE8(*(void **)((u8 *)self + 0x11C), self, (char *)lbl_80273DF8 + 0xF5);
            }
            fn_800C9ABC(&str24C, (char *)lbl_80273DF8 + 0xFC, &scratch5);
            fn_800CBF24(&str258, fn_801992F8(*(void **)((u8 *)self + 0x11C)), &str24C);
            fn_800C9758((u8 *)self + 0x154, &str258, 0, -1);
            fn_800C9A60(&str258, -1);
            fn_800C9A60(&str24C, -1);
        }
        fn_800CB90C(&str264, (u8 *)self + 0x154, (char *)lbl_80273DF8 + 0xFE);
        t = fn_800DDAA4(*(void **)((u8 *)self + 0xDC), &str264) == 0 ? 1 : 0;
        fn_800C9A60(&str264, -1);
        if ((u8)t != 0) {
            *(u8 *)((u8 *)self + 0x1A4) = 1;
        }
    }

    if ((u8)fn_800E5248(self, 3) != 0) {
        *(s32 *)((u8 *)self + 0x1B4) = 1;
    }

    if (*(s32 *)((u8 *)lbl_80368278 + 0x194) != 0 && (u8)fn_800E5248(self, 3) != 0) {
        tmp = *(void **)((u8 *)self + 0x11C);
        if (tmp != NULL) {
            if (*(u32 *)((u8 *)self + 0x120) != 0) {
                fn_800E4E7C(&sp324, self, (char *)lbl_80273DF8 + 0x103);
                sp378 = sp324;
            } else {
                fn_800E4E7C(&sp318, tmp, (char *)lbl_80273DF8 + 0x103);
                sp378 = sp318;
            }
            flag = 0;
            obj = fn_800C42D8(0xC8);
            if (obj != NULL) {
                fn_800DBB74(&w300, self);
                copyA = w300;
                *(f32 *)&copyB.x = sp378.x;
                *(f32 *)&copyB.y = sp378.y;
                *(f32 *)&copyB.z = sp378.z;
                fn_800C9ABC(&str2E8, (char *)lbl_80273DF8 + 0x51, &scratch6);
                flag = 1;
                obj = fn_80151D50(obj, *(void **)((u8 *)self + 0xAC), &str2E8, (u8 *)lbl_80368278 + 0x19C, &copyB, &copyA, 0);
            }
            (*(Manager **)((u8 *)self + 0xAC))->Add(obj);
            if (flag) {
                fn_800C9A60(&str2E8, -1);
            }
        }
    }

    if (*(s32 *)((u8 *)lbl_80368278 + 0x198) != 0 && (u8)fn_800E5248(self, 3) != 0) {
        tmp = *(void **)((u8 *)self + 0x11C);
        if (tmp != NULL) {
            if (*(u32 *)((u8 *)self + 0x120) != 0) {
                fn_800E4E7C(&sp2DC, self, (char *)lbl_80273DF8 + 0x103);
                sp378 = sp2DC;
            } else {
                fn_800E4E7C(&sp2D0, tmp, (char *)lbl_80273DF8 + 0x103);
                sp378 = sp2D0;
            }
            flag = 0;
            obj = fn_800C42D8(0xC8);
            if (obj != NULL) {
                fn_800DBB74(&w2B8, self);
                copyA = w2B8;
                *(f32 *)&copyB.x = sp378.x;
                *(f32 *)&copyB.y = sp378.y;
                *(f32 *)&copyB.z = sp378.z;
                fn_800C9ABC(&str2A0, (char *)lbl_80273DF8 + 0x51, &scratch);
                flag = 1;
                obj = fn_80151D50(obj, *(void **)((u8 *)self + 0xAC), &str2A0, (u8 *)lbl_80368278 + 0x1A8, &copyB, &copyA, 0);
            }
            (*(Manager **)((u8 *)self + 0xAC))->Add(obj);
            if (flag) {
                fn_800C9A60(&str2A0, -1);
            }
        }
    }
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_80111740(void *arg0) {
    s32 strlen(char *);
    void *fn_800C42D8(s32);
    void fn_800DBB74(void *, void *);
    void *fn_80151D50(void *, void *, void *, void *, void *, void *, s32);
    void fn_80151894(void *);
    extern void *lbl_80368278;

    struct V3 {
        f32 x, y, z;
        V3() {}
        V3(f32 _x, f32 _y, f32 _z) { x = _x; y = _y; z = _z; }
    };

    struct Actor {
        u8 pad[0x40];
        virtual void v1() = 0;
        virtual void v0() = 0;
        virtual void v3() = 0;
        virtual void v2() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v10() = 0;
        virtual void v9() = 0;
        virtual void Color(f32, f32, f32) = 0;
        virtual V3 GetPos(s32) = 0;
    };

    struct Manager {
        u8 pad[0x10];
        virtual void v2() = 0;
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void Add(void *) = 0;
    };

    typedef struct {
        s32 x, y, z;
    } Word3;

    struct Self {
        u8 pad0[0xAC];
        void *mgr;
        String name;
        u8 pad1[0x1CC - 0xBC];
        s32 state;
    };

    String sp54;
    String sp48;
    Word3 copyB;
    Word3 tmpVec;
    Word3 copyA;
    V3 got;
    Word3 pos;
    void *scratch;
    Self *self;
    s32 n;
    s8 flag;
    void *obj;

    self = (Self *)arg0;
    sp54.size = 0;
    sp54.cap = 0;
    sp54.data = 0;
    sp54.cap = 0;

    n = strlen((char *)((u8 *)lbl_80273DF8 + 0x109));
    if (fn_800C9400(&self->name, 0, (void *)self->name.size,
                    (char *)((u32)lbl_80273DF8 + 0x109), n) == 0)
        goto fail;
    n = strlen((char *)((u8 *)lbl_80273DF8 + 0x10E));
    if (fn_800C9400(&self->name, 0, (void *)self->name.size,
                    (char *)((u32)lbl_80273DF8 + 0x10E), n) == 0)
        goto fail;
    n = strlen((char *)((u8 *)lbl_80273DF8 + 0x113));
    if (fn_800C9400(&self->name, 0, (void *)self->name.size,
                    (char *)((u32)lbl_80273DF8 + 0x113), n) == 0)
        goto fail;
    n = strlen((char *)((u8 *)lbl_80273DF8 + 0x118));
    if (fn_800C9400(&self->name, 0, (void *)self->name.size,
                    (char *)((u32)lbl_80273DF8 + 0x118), n) == 0)
        goto fail;
    n = strlen((char *)((u8 *)lbl_80273DF8 + 0x11D));
    if (fn_800C9400(&self->name, 0, (void *)self->name.size,
                    (char *)((u32)lbl_80273DF8 + 0x11D), n) == 0)
        goto fail;

    switch (self->state) {
    case 1:
        n = strlen((char *)((u8 *)lbl_80273DF8 + 0x122));
        fn_800C96F8(&sp54, (char *)((u32)lbl_80273DF8 + 0x122), n);
        break;
    case 2:
        n = strlen((char *)((u8 *)lbl_80273DF8 + 0x133));
        fn_800C96F8(&sp54, (char *)((u32)lbl_80273DF8 + 0x133), n);
        break;
    case 3:
        n = strlen((char *)((u8 *)lbl_80273DF8 + 0x144));
        fn_800C96F8(&sp54, (char *)((u32)lbl_80273DF8 + 0x144), n);
        break;
    default:
        goto fail;
    }

    *(f32 *)&pos.z = lbl_8036A184;
    *(f32 *)&pos.y = lbl_8036A184;
    *(f32 *)&pos.x = lbl_8036A184;
    n = strlen((char *)((u8 *)lbl_80273DF8 + 0x4E));
    if (fn_800C9400(&sp54, 0, (void *)sp54.size,
                    (char *)((u32)lbl_80273DF8 + 0x4E), n) != 0) {
        got = ((Actor *)self)->GetPos(0);
        flag = 0;
        *(f32 *)&pos.y = got.y;
        *(f32 *)&pos.x = got.x;
        *(f32 *)&pos.z = got.z;
        *(f32 *)&pos.y = lbl_8036A184;
        obj = fn_800C42D8(0xC8);
        if (obj != NULL) {
            fn_800DBB74(&tmpVec, self);
            copyA = tmpVec;
            copyB = pos;
            fn_800C9ABC(&sp48, (char *)lbl_80273DF8 + 0x51, &scratch);
            flag = 1;
            obj = fn_80151D50(obj, self->mgr, &sp48, &sp54, &copyB, &copyA, 0);
        }
        if (flag) {
            fn_800C9A60(&sp48, -1);
        }
        ((Actor *)obj)->Color(
            *(f32 *)((u8 *)lbl_80368278 + 0x104),
            *(f32 *)((u8 *)lbl_80368278 + 0x108),
            *(f32 *)((u8 *)lbl_80368278 + 0x10C));
        fn_80151894(obj);
        (*(Manager **)(&self->mgr))->Add(obj);
    }
    fn_800C9A60(&sp54, -1);
    return;
fail:
    fn_800C9A60(&sp54, -1);
}

#pragma cplusplus reset
#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_80112824(void *arg0, void *arg1) {
    void *fn_800C42D8(s32);
    void fn_800C8CB4(String *, void *);
    void fn_800C8D58(char *, void *);
    void fn_800C8DCC(void *, void *, String *);
    void fn_800C8EFC(void *);
    void fn_800C9120(void *, s32);
    void *fn_800C91EC(void *, void *, String *);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C9758(String *, String *, s32, s32);
    void fn_800C9A60(String *, s32);
    void fn_800C9ABC(String *, char *, void *);
    void *fn_800D59CC(void *, String *);
    u32 strlen(char *);
    extern void *lbl_80368278;
    extern f32 lbl_8036A1A0;

    char sp33C[0x20];
    char sp31C[0x20];
    char sp2FC[0x20];
    char sp2DC[0x20];
    char sp2BC[0x20];
    char sp29C[0x20];
    char sp27C[0x20];
    char sp25C[0x20];
    char sp23C[0x20];
    char sp21C[0x20];
    char sp1FC[0x20];
    char sp1DC[0x20];
    char sp1BC[0x20];
    char sp19C[0x20];
    char sp17C[0x20];
    char sp15C[0x20];
    char sp13C[0x20];
    String str130;
    String str124;
    String sp118;
    String sp10C;
    String sp100;
    String spF4;
    String spE8;
    String spDC;
    String spD0;
    String spC4;
    String spB8;
    String spAC;
    String spA0;
    String sp94;
    String sp88;
    String sp7C;
    String sp70;
    String sp64;
    String sp58;
    String sp4C;
    void *sc48;
    void *sc44;
    void *sc40;
    void *sc3C;
    void *sc38;
    void *sc34;
    void *sc30;
    void *sc2C;
    void *sc28;
    void *sc24;
    void *sc20;
    void *sc1C;
    void *sc18;
    void *sc14;
    void *sc10;
    void *scC;
    void *sc8;
    void *self;
    void *xml;
    char *nameBuf;
    s32 count;
    s32 i;
    void *path;
    s8 made;
    s32 tmp;
    String *node;

    self = arg0;
    path = arg1;
    made = 0;
    str130.cap = 0;
    str124.cap = 0;
    str130.size = 0;
    str130.data = 0;
    str130.cap = 0;
    str124.size = 0;
    str124.data = 0;
    str124.cap = 0;

    xml = fn_800C42D8(0x60);
    if (xml != 0) {
        fn_800C9ABC(&sp118, (char *)lbl_80273DF8 + 0x38E, &sc48);
        made = 1;
        xml = fn_800C91EC(xml, path, &sp118);
    }
    if (made != 0) {
        fn_800C9A60(&sp118, -1);
    }

    fn_800C9ABC(&sp10C, (char *)lbl_80273DF8 + 0x393, &sc44);
    fn_800C8DCC(sp33C, xml, &sp10C);
    count = *(s32 *)sp33C;
    fn_800C9A60(&sp10C, -1);

    nameBuf = sp31C;
    for (i = 0; i < count; i++) {
        fn_800C8EFC(xml);
        fn_800C8CB4(&sp100, xml);
        fn_800C9758(&str130, &sp100, 0, -1);
        fn_800C9A60(&sp100, -1);
        fn_800C8D58(sp31C, xml);
        fn_800C96F8(&str124, nameBuf, strlen(nameBuf));
        node = (String *)((u8 *)fn_800D59CC((u8 *)self + 0x1BC, &str130) + 0xC);
        fn_800C9758(node, &str124, 0, -1);
    }

    fn_800C9ABC(&spF4, (char *)lbl_80273DF8 + 0x39A, &sc40);
    fn_800C8DCC(sp2FC, xml, &spF4);
    *(f32 *)((u8 *)self + 0x124) = *(f32 *)sp2FC;
    fn_800C9A60(&spF4, -1);

    fn_800C9ABC(&spE8, (char *)lbl_80273DF8 + 0x3A3, &sc3C);
    fn_800C8DCC(sp2DC, xml, &spE8);
    *(f32 *)((u8 *)self + 0x128) = *(f32 *)sp2DC;
    fn_800C9A60(&spE8, -1);

    fn_800C9ABC(&spDC, (char *)lbl_80273DF8 + 0x3AA, &sc38);
    fn_800C8DCC(sp2BC, xml, &spDC);
    *(s32 *)((u8 *)self + 0x12C) = *(s32 *)sp2BC;
    fn_800C9A60(&spDC, -1);

    fn_800C9ABC(&spD0, (char *)lbl_80273DF8 + 0x3B7, &sc34);
    fn_800C8DCC(sp29C, xml, &spD0);
    *(s32 *)((u8 *)self + 0x130) = *(s32 *)sp29C;
    fn_800C9A60(&spD0, -1);

    fn_800C9ABC(&spC4, (char *)lbl_80273DF8 + 0x3C6, &sc30);
    fn_800C8DCC(sp27C, xml, &spC4);
    *(s32 *)((u8 *)self + 0x134) = *(s32 *)sp27C;
    fn_800C9A60(&spC4, -1);

    fn_800C9ABC(&spB8, (char *)lbl_80273DF8 + 0x3D3, &sc2C);
    fn_800C8DCC(sp25C, xml, &spB8);
    *(s32 *)((u8 *)self + 0x138) = *(s32 *)sp25C;
    fn_800C9A60(&spB8, -1);

    fn_800C9ABC(&spAC, (char *)lbl_80273DF8 + 0x3E0, &sc28);
    fn_800C8DCC(sp23C, xml, &spAC);
    *(s32 *)((u8 *)self + 0x13C) = *(s32 *)sp23C;
    fn_800C9A60(&spAC, -1);

    fn_800C9ABC(&spA0, (char *)lbl_80273DF8 + 0x3ED, &sc24);
    fn_800C8DCC(sp21C, xml, &spA0);
    *(s32 *)((u8 *)self + 0x19C) = *(s32 *)sp21C;
    fn_800C9A60(&spA0, -1);

    fn_800C9ABC(&sp94, (char *)lbl_80273DF8 + 0x3F4, &sc20);
    fn_800C8DCC(sp1FC, xml, &sp94);
    tmp = *(s32 *)sp1FC;
    *((u8 *)self + 0x1A1) = (u8)(tmp != 0);
    fn_800C9A60(&sp94, -1);

    fn_800C9ABC(&sp88, (char *)lbl_80273DF8 + 0x401, &sc1C);
    fn_800C8DCC(sp1DC, xml, &sp88);
    *(s32 *)((u8 *)self + 0x198) = *(s32 *)sp1DC;
    fn_800C9A60(&sp88, -1);

    fn_800C9ABC(&sp7C, (char *)lbl_80273DF8 + 0x40A, &sc18);
    fn_800C8DCC(sp1BC, xml, &sp7C);
    *(f32 *)((u8 *)self + 0x150) = *(f32 *)sp1BC;
    fn_800C9A60(&sp7C, -1);

    fn_800C9ABC(&sp70, (char *)lbl_80273DF8 + 0x417, &sc14);
    fn_800C8DCC(sp19C, xml, &sp70);
    *(s32 *)((u8 *)self + 0x188) = *(s32 *)sp19C;
    fn_800C9A60(&sp70, -1);

    fn_800C9ABC(&sp64, (char *)lbl_80273DF8 + 0x420, &sc10);
    fn_800C8DCC(sp17C, xml, &sp64);
    *(s32 *)((u8 *)self + 0x18C) = *(s32 *)sp17C;
    fn_800C9A60(&sp64, -1);

    fn_800C9ABC(&sp58, (char *)lbl_80273DF8 + 0x42D, &scC);
    fn_800C8DCC(sp15C, xml, &sp58);
    *(s32 *)((u8 *)self + 0x190) = *(s32 *)sp15C;
    fn_800C9A60(&sp58, -1);

    fn_800C9ABC(&sp4C, (char *)lbl_80273DF8 + 0x43A, &sc8);
    fn_800C8DCC(sp13C, xml, &sp4C);
    tmp = *(s32 *)sp13C;
    *((u8 *)self + 0x1B6) = (u8)(tmp != 0);
    fn_800C9A60(&sp4C, -1);

    if (lbl_8036A184 == *(f32 *)((u8 *)self + 0x124)) {
        *(f32 *)((u8 *)self + 0x124) = lbl_8036A1A0;
    }
    if (lbl_8036A184 == *(f32 *)((u8 *)self + 0x128)) {
        *(f32 *)((u8 *)self + 0x128) = lbl_8036A1A4;
    }
    if (*(s32 *)((u8 *)self + 0x198) == 0) {
        *(s32 *)((u8 *)self + 0x198) = 1;
    }
    if (lbl_8036A184 == *(f32 *)((u8 *)self + 0x150)) {
        *(f32 *)((u8 *)self + 0x150) = *(f32 *)((u8 *)lbl_80368278 + 0xEC);
    }
    if (*(s32 *)((u8 *)self + 0x188) == 0) {
        *(s32 *)((u8 *)self + 0x188) = *(s32 *)((u8 *)lbl_80368278 + 0x180);
    }
    if (*(s32 *)((u8 *)self + 0x18C) == 0) {
        *(s32 *)((u8 *)self + 0x18C) = *(s32 *)((u8 *)lbl_80368278 + 0x188);
    }
    if (*(s32 *)((u8 *)self + 0x190) == 0) {
        *(s32 *)((u8 *)self + 0x190) = *(s32 *)((u8 *)lbl_80368278 + 0x184);
    }

    fn_800C9120(xml, 1);
    fn_800C9A60(&str124, -1);
    fn_800C9A60(&str130, -1);
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset

#pragma cplusplus reset

void fn_80112DFC(void *arg0, u8 arg1) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
    if (temp_r3 != NULL) {
        if (arg1 != 0) {
            *temp_r3 |= 0x80;
            return;
        }
        *temp_r3 &= 0xFFFFFF7F;
    }
}

#pragma cplusplus on
typedef struct Vec3f {
    f32 x, y, z;
    Vec3f() {}
    Vec3f(f32 _x, f32 _y, f32 _z) {
        x = _x;
        y = _y;
        z = _z;
    }
} Vec3f;
extern "C" f32 fn_802032CC(const Vec3f &, const Vec3f &);
extern "C" void fn_80112E30(void *arg0) {
    extern f32 lbl_8036A1A8;
    struct Actor {
        u8 pad0[0x40];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual Vec3f GetPos(s32) = 0;
    };
    Actor *target;
    Actor *self;
    f32 dist;

    self = (Actor *)arg0;
    target = M2C_FIELD(arg0, Actor **, 0x118);
    if (target == NULL) {
        dist = lbl_8036A184;
    } else {
        Vec3f pb;
        Vec3f pa;
        Vec3f b(lbl_8036A184, lbl_8036A184, lbl_8036A184);
        Vec3f a(lbl_8036A184, lbl_8036A184, lbl_8036A184);
        pa = a = self->GetPos(0);
        pb = b = target->GetPos(0);
        dist = fn_802032CC(pa, pb);
    }
    if (dist >= lbl_8036A1A8 + M2C_FIELD(arg0, f32 *, 0x128)) {
        M2C_FIELD(arg0, u8 *, 0x1A4) = 0;
    }
}
#pragma cplusplus reset

u8 fn_80112F3C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A4);
}

s32 fn_80112F44(void *arg0) {
    char *str1;
    char *str2;
    char *str3;
    s32 len1;
    s32 len2;
    s32 len3;
    s32 result;

    str1 = (char*)((u8*)arg0 + 0x178);
    len1 = strlen((char*)&lbl_80273DF8 + 0x43f);
    result = fn_800C9400(str1, 0, NULL, (char*)&lbl_80273DF8 + 0x43f, len1);

    if (result == 0) {
        return 1;
    }

    str2 = (char*)&lbl_80273DF8 + 0x43f;
    len2 = strlen(str2);
    result = fn_800D5948(str1, str2, 0, len2);

    if ((u32)(result + 0x10000) != (u32)-1) {
        return 1;
    }

    str3 = (char*)&lbl_80273DF8 + 0x444;
    len3 = strlen(str3);
    result = fn_800D5948(str1, str3, 0, len3);

    if ((u32)(result + 0x10000) != (u32)-1) {
        return 1;
    }

    if (fn_800E56C4(arg0) == 0) {
        return 1;
    }

    return 0;
}

void fn_80113030(void *arg0, s32 arg1, void *arg2, void *arg3) {
    void *fn_800D59CC(void *, void *);
    void fn_800C9758(void *, void *, s32, s32);
    s32 fn_800C9400(void *, s32, void *, char *, s32);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800C9A60(void *, s32);
    void fn_800CBF24(void *, char *, void *);
    void fn_800CB90C(void *, void *, char *);
    void fn_800C99A0(void *, void *, s32, s32);
    void *fn_800C93EC(void *);
    void fn_800E5044(void *, void *);
    extern char *lbl_8028F6B8[];
    String sp48;
    String sp3C;
    String sp30;
    String sp24;
    String sp18;
    String spC;
    void *sp8;
    void *a2;
    void *self;
    s32 idx;
    s32 n;

    idx = arg1;
    self = arg0;
    a2 = arg2;
    sp48.cap = 0;
    sp3C.cap = 0;
    sp48.size = 0;
    sp48.data = 0;
    sp48.cap = 0;
    sp3C.size = 0;
    sp3C.data = 0;
    sp3C.cap = 0;

    fn_800C9758(&sp3C, (u8 *)fn_800D59CC((u8 *)self + 0x1BC, arg3) + 0xC, 0, -1);
    n = strlen((char *)((u8 *)lbl_80273DF8 + 0x1C));
    if (fn_800C9400(&sp3C, 0, (void *)sp3C.size, (char *)((u32)lbl_80273DF8 + 0x1C), n) == 0) {
        fn_800C9758(&sp3C, (u8 *)fn_800D59CC((u8 *)self + 0x1BC, a2) + 0xC, 0, -1);
    }
    n = strlen((char *)((u8 *)lbl_80273DF8 + 0x1C));
    if (fn_800C9400(&sp3C, 0, (void *)sp3C.size, (char *)((u32)lbl_80273DF8 + 0x1C), n) == 0) {
        fn_800C9ABC(&sp30, lbl_8028F6B8[idx & 3], &sp8);
        fn_800C9758(&sp3C, (u8 *)fn_800D59CC((u8 *)self + 0x1BC, &sp30) + 0xC, 0, -1);
        fn_800C9A60(&sp30, -1);
    }
    n = strlen((char *)((u8 *)lbl_80273DF8 + 0x449));
    if (fn_800C9400(&sp3C, 0, (void *)sp3C.size, (char *)((u32)lbl_80273DF8 + 0x449), n) == 0) {
        fn_800C9758(&sp3C, (u8 *)self + 0xB0, 0, -1);
    }
    fn_800CBF24(&sp24, (char *)((u8 *)lbl_80273DF8 + 0x450), (u8 *)self + 0xB0);
    fn_800CB90C(&sp18, &sp24, (char *)((u8 *)lbl_80273DF8 + 0x454));
    fn_800C9758(&sp48, &sp18, 0, -1);
    fn_800C9A60(&sp18, -1);
    fn_800C9A60(&sp24, -1);
    fn_800CB90C(&spC, &sp3C, (char *)((u8 *)lbl_80273DF8 + 0x456));
    fn_800C99A0(&sp48, &spC, 0, -1);
    fn_800C9A60(&spC, -1);
    fn_800E5044(self, fn_800C93EC(&sp48));
    fn_800C9A60(&sp3C, -1);
    fn_800C9A60(&sp48, -1);
}

#pragma use_lmw_stmw on
void fn_80113298(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_800CB8A4(void *, void *, void *);
    void fn_800D5D04(void *, void *, s32, s32);
    void fn_800E574C(void *, void *, f32, s32, s32, s32, s32);
    char *fn_800DDB94(void *, void *);
    u8 fn_800E7AD4(void *, void *, void *, u8, u8);
    extern f32 lbl_8036A18C;
    String sp54;
    String sp48;
    String sp3C;
    String sp30;
    String sp24;
    String sp18;
    String spC;
    void *sp8;
    void *path;
    s32 a2;
    s32 a3;
    s32 a4;
    void *self;
    void *unk_dc;
    void *cstr;

    path = arg1;
    self = arg0;
    a2 = arg2;
    a3 = arg3;
    a4 = arg4;
    sp54.size = 0;
    sp54.cap = 0;
    sp54.data = 0;
    sp54.cap = 0;
    fn_800C96F8((u8 *)self + 0x178, path, strlen(path));
    fn_800C9ABC(&sp48, path, &sp8);
    fn_800CB8A4(&sp3C, (u8 *)self + 0x154, &sp48);
    fn_800C9758(&sp54, &sp3C, 0, -1);
    fn_800C9A60(&sp3C, -1);
    fn_800C9A60(&sp48, -1);
    cstr = fn_800C93EC(&sp54);
    fn_800E574C(self, cstr, lbl_8036A18C, a3, a4, *(u8 *)((u8 *)self + 0x184), a2);
    spC.cap = 0;
    sp18.cap = 0;
    sp24.cap = 0;
    spC.size = 0;
    spC.data = 0;
    spC.cap = 0;
    sp18.size = 0;
    sp18.data = 0;
    sp18.cap = 0;
    sp24.size = 0;
    sp24.data = 0;
    sp24.cap = 0;
    unk_dc = *(void **)((u8 *)self + 0xDC);
    if (unk_dc == NULL) {
        fn_800C9A60(&sp24, -1);
        fn_800C9A60(&sp18, -1);
        fn_800C9A60(&spC, -1);
    } else {
        char *temp_r30;
        s32 n;
        temp_r30 = fn_800DDB94(unk_dc, (u8 *)self + 0xBC);
        fn_800C96F8(&spC, temp_r30, strlen(temp_r30));
        n = strlen((char *)((u8 *)lbl_80273DF8 + 0x1C));
        if (fn_800C9400(&spC, 0, (void *)spC.size, (char *)((u32)lbl_80273DF8 + 0x1C), n) == 0) {
            fn_800C9A60(&sp24, -1);
            fn_800C9A60(&sp18, -1);
            fn_800C9A60(&spC, -1);
        } else {
            fn_800D5D04(&sp30, &spC, 0, 0xB);
            fn_800C9758(&sp18, &sp30, 0, -1);
            fn_800C9A60(&sp30, -1);
            fn_800C9758(&sp24, &sp18, 0, -1);
            *(u8 *)((u8 *)self + 0x1A7) = fn_800E7AD4(*(void **)((u8 *)self + 0xAC), &sp24, *(void **)((u8 *)self + 0x1AC), *(u8 *)((u8 *)self + 0x1A2), *(u8 *)((u8 *)self + 0x1A3));
            fn_800C9A60(&sp24, -1);
            fn_800C9A60(&sp18, -1);
            fn_800C9A60(&spC, -1);
        }
    }
    fn_800C9A60(&sp54, -1);
}
#pragma use_lmw_stmw reset

void fn_80113648(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x128) = farg0;
}

f32 fn_80113650(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x128);
}

#pragma cplusplus on
extern "C" void fn_80113658(void *arg0, void *arg1) {
    struct Actor {
        u8 pad0[0x40];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual Vec3f GetPos() = 0;
    };
    Vec3f a;
    Vec3f b;

    a = ((Actor *)arg0)->GetPos();
    b = ((Actor *)arg1)->GetPos();
    fn_802032CC(a, b);
}
#pragma cplusplus reset
void fn_801136EC(void) {
    lbl_80273DF8[0] = 0x2D004300;
    lbl_80273DF8[1] = 0x42004100;
}

void fn_8011386C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14C) = -1;
}

s32 fn_80113878(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x19C) != 0;
}

u8 fn_8011388C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1B4);
}

s32 fn_80113894(void *arg0) {
    u8 fn_8019906C(s32);
    s32 fn_80199114(s32);
    if ((fn_8019906C(M2C_FIELD(arg0, s32 *, 0x11C)) != 0) && (fn_80199114(M2C_FIELD(arg0, s32 *, 0x11C)) != -1)) {
        return 1;
    }
    return 0;
}

void fn_801138E8(void *arg0) {
    M2C_UNK fn_801990A4(s32);
    fn_801990A4(M2C_FIELD(arg0, s32 *, 0x11C));
}

void fn_8011390C(void *arg0) {
    M2C_UNK fn_801990DC(s32);
    fn_801990DC(M2C_FIELD(arg0, s32 *, 0x11C));
}

void fn_80113930(void* arg0, void* arg1) {
    if (arg0 != NULL && arg1 != NULL) {
        f32 f0 = *(f32*)((char*)arg0 + 4);
        f32 f1 = *(f32*)((char*)arg0 + 8);
        f32 f2 = *(f32*)((char*)arg1 + 0x44);
        f32 f3 = *(f32*)((char*)arg1 + 0x4C);
        f32 f4 = *(f32*)((char*)arg1 + 0x54);
        
        if (f0 > f2) {
            *(f32*)((char*)arg0 + 4) = f2;
        }
        if (f1 < f3) {
            *(f32*)((char*)arg0 + 8) = f3;
        }
        if ((*(f32*)((char*)arg1 + 0x50)) < f4) {
            *(f32*)((char*)arg1 + 0x50) = f4;
        }
    }
}

void fn_80113C84(void *self, s32 mode) {
    s32 strlen(char *);
    s32 fn_800DDC04(void *, void *);
    void fn_800CB8A4(void *, void *, void *);
    String sp3C;
    String sp30;
    String sp24;
    String sp18;
    String spC;
    s32 sp8;
    u32 ok;

    sp3C.cap = 0;
    sp30.cap = 0;
    sp3C.size = 0;
    sp3C.data = 0;
    sp3C.cap = 0;
    sp30.size = 0;
    sp30.data = 0;
    sp30.cap = 0;

    fn_800C96F8((u8 *)self + 0x16C, (char *)&lbl_80273DF8 + 0x1C, strlen((char *)&lbl_80273DF8 + 0x1C));
    *(s32 *)((u8 *)self + 0x144) = mode;

    switch (mode) {
    case 0:
        fn_800C96F8(&sp3C, (char *)&lbl_80273DF8 + 0x46A, strlen((char *)&lbl_80273DF8 + 0x46A));
        break;
    case 1:
        fn_800C96F8(&sp3C, (char *)&lbl_80273DF8 + 0x46F, strlen((char *)&lbl_80273DF8 + 0x46F));
        break;
    case 2:
        fn_800C96F8(&sp3C, (char *)&lbl_80273DF8 + 0x46F, strlen((char *)&lbl_80273DF8 + 0x46F));
        break;
    case 3:
        fn_800C96F8(&sp3C, (char *)&lbl_80273DF8 + 0x478, strlen((char *)&lbl_80273DF8 + 0x478));
        break;
    }

    if (fn_800C9400(&sp3C, 0, (void *)sp3C.size, (char *)&lbl_80273DF8 + 0x478, strlen((char *)&lbl_80273DF8 + 0x478)) == 0) {
        fn_800C9ABC(&spC, fn_800C93EC(&sp3C), &sp8);
        fn_800CB8A4(&sp18, (u8 *)self + 0x154, &spC);
        ok = fn_800DDC04(*(void **)((u8 *)self + 0xDC), &sp18) != 0;
        fn_800C9A60(&sp18, -1);
        fn_800C9A60(&spC, -1);
        if (ok == 0) {
            fn_800C96F8(&sp3C, (char *)&lbl_80273DF8 + 0x46A, strlen((char *)&lbl_80273DF8 + 0x46A));
        }
    }

    fn_800C9758(&sp30, &sp3C, 0, -1);
    fn_801134EC(&sp24, self, &sp3C);
    fn_800C9758(&sp3C, &sp24, 0, -1);
    fn_800C9A60(&sp24, -1);
    fn_800C96F8((u8 *)self + 0x16C, (char *)&lbl_80273DF8 + 0x43F, strlen((char *)&lbl_80273DF8 + 0x43F));
    fn_80113298(self, fn_800C93EC(&sp3C), *(s32 *)((u8 *)self + 0x188), 0, 1);
    fn_800C9758((u8 *)self + 0x160, &sp30, 0, -1);
    *(u8 *)(*(u8 **)((u8 *)self + 0x11C) + 0x14D) = 0;
    *(u8 *)((u8 *)self + 0x1A4) = 1;
    fn_800C9A60(&sp30, -1);
    fn_800C9A60(&sp3C, -1);
}

u8 fn_80113F68(void *arg0) {
    extern f32 lbl_8036A184;
    return (u8) (lbl_8036A184 != M2C_FIELD(arg0, f32 *, 0x104));
}

void fn_80113F88(void *arg0) {
    M2C_UNK fn_8003816C(s32, u8, u8);
    M2C_UNK fn_80050C90(s32);
    fn_8003816C(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, u8 *, 0x58), M2C_FIELD(arg0, u8 *, 0x59));
    fn_80050C90(M2C_FIELD(arg0, s32 *, 0x30));
}

#pragma cplusplus on
#pragma global_optimizer off
extern "C" void fn_80114124(void *arg0, s32 arg1) {
    s32 strlen(char *);
    void fn_800C96F8(void *, char *, u32);
    void fn_800C9758(void *, void *, s32, s32);
    void fn_800C9A60(void *, s32);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800CB8A4(void *, void *, void *);
    void fn_800CB90C(void *, void *, char *);
    void fn_800CBF24(void *, void *, void *);
    void *fn_800C93EC(void *);
    s32 fn_800C9400(void *, s32, void *, char *, s32);
    s32 fn_800DDAA4(void *, void *);
    s32 fn_800DDC04(void *, void *);
    void fn_800DF670(void *);
    void fn_800E4FE8(void *, void *, char *);
    void fn_80113298(void *, void *, s32, s32, s32);
    void fn_801134EC(void *, void *, void *);
    void fn_80147578(char *, s32, f32, f32, f32);
    void *fn_801992F8(void *);
    s32 fn_80199310(void);
    void fn_80203184(void *, void *, void *);
    void fn_802031CC(void *, void *, f32);
    extern f32 fn_802032CC(const Vec3f &, const Vec3f &);
    extern void *lbl_80368278;

    struct Actor {
        u8 pad0[0x40];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual Vec3f GetPos(s32) = 0;
        virtual void v13() = 0;
        virtual void Adjust(Vec3f *, f32, f32) = 0;
    };

    typedef void (*GetPosFn)(Vec3f *, void *, s32);

    s32 t;
    f32 fx;
    f32 fy;
    f32 fz;
    f32 adj_x;
    f32 scale;
    String sp104;
    Vec3f spF8;
    Vec3f spEC;
    String spE0;
    String spD4;
    Vec3f spC8;
    String spBC;
    String spB0;
    String spA4;
    String sp98;
    String sp8C;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f sp38;
    Vec3f sp2C;
    Vec3f sp20;
    Vec3f sp14;
    void *scratch1;
    void *scratch0;
    void *scratch2;

    sp104.size = 0;
    sp104.cap = 0;
    sp104.data = 0;
    sp104.cap = 0;

    ((GetPosFn)((void **)*(void **)((u8 *)arg0 + 0x40))[0xE])(&spEC, arg0, 0);
    fx = spEC.x;
    fy = spEC.y;
    fz = spEC.z;

    fn_800C96F8((u8 *)arg0 + 0x16C, (char *)&lbl_80273DF8 + 0x1C,
                strlen((char *)&lbl_80273DF8 + 0x1C));

    if (*(void **)((u8 *)arg0 + 0x11C) != 0) {
        t = fn_80199310();
        fn_800DF670(*(void **)((u8 *)arg0 + 0x11C));
        if (t == 3) {
            fn_800E4FE8(*(void **)((u8 *)arg0 + 0x11C), arg0, (char *)&lbl_80273DF8 + 0xEE);
        } else {
            fn_800E4FE8(*(void **)((u8 *)arg0 + 0x11C), arg0, (char *)&lbl_80273DF8 + 0xF5);
        }
        fn_800C9ABC(&spA4, (char *)&lbl_80273DF8 + 0xFC, &scratch0);
        fn_800CBF24(&spB0, fn_801992F8(*(void **)((u8 *)arg0 + 0x11C)), &spA4);
        fn_800C9758((u8 *)arg0 + 0x154, &spB0, 0, -1);
        fn_800C9A60(&spB0, -1);
        fn_800C9A60(&spA4, -1);
    }

    fn_800CB90C(&spBC, (u8 *)arg0 + 0x154, (char *)&lbl_80273DF8 + 0xFE);
    t = fn_800DDAA4(*(void **)((u8 *)arg0 + 0xDC), &spBC) == 0 ? 1 : 0;
    fn_800C9A60(&spBC, -1);
    if ((u8)t != 0) {
        *(u8 *)((u8 *)arg0 + 0x1A4) = 1;
    }

    fn_800C9ABC(&spE0, (char *)&lbl_80273DF8 + 0x444, &scratch1);
    fn_801134EC(&spD4, arg0, &spE0);
    fn_800C9758(&sp104, &spD4, 0, -1);
    fn_800C9A60(&spD4, -1);
    fn_800C9A60(&spE0, -1);

    if (arg1 != 0) {
        fn_800C9ABC(&sp8C, (char *)&lbl_80273DF8 + 0x49D, &scratch2);
        fn_800CB8A4(&sp98, (u8 *)arg0 + 0x154, &sp8C);
        t = fn_800DDC04(*(void **)((u8 *)arg0 + 0xDC), &sp98) != 0 ? 1 : 0;
        fn_800C9A60(&sp98, -1);
        fn_800C9A60(&sp8C, -1);
        if ((u32)t == 0) {
            goto do_43f;
        }
        goto skip_43f;
    }
do_43f:
    fn_800C96F8((u8 *)arg0 + 0x16C, (char *)&lbl_80273DF8 + 0x43F,
                strlen((char *)&lbl_80273DF8 + 0x43F));
skip_43f:

    fn_80113298(arg0, fn_800C93EC(&sp104), *(s32 *)((u8 *)arg0 + 0x188), 0, 1);

    {
        s32 n;
        n = strlen((char *)((u32)&lbl_80273DF8 + 0x49D));
        if (fn_800C9400(&sp104, 0, (void *)sp104.size, (char *)((u32)&lbl_80273DF8 + 0x49D), n) == 0) {
            fn_800C96F8((u8 *)arg0 + 0x160, (char *)&lbl_80273DF8 + 0x1C,
                        strlen((char *)&lbl_80273DF8 + 0x1C));
        } else {
            fn_800C96F8((u8 *)arg0 + 0x160, (char *)&lbl_80273DF8 + 0x444,
                        strlen((char *)&lbl_80273DF8 + 0x444));
        }
    }

    {
        f32 d;
        void *other;
        f32 z;
        f32 dx;
        other = *(void **)((u8 *)arg0 + 0x118);
        d = lbl_8036A184;
        spF8.z = d;
        spF8.y = d;
        spF8.x = d;
#pragma scheduling off
        if (other != 0) {
            goto do_dist;
        }
        goto after_dist;
#pragma scheduling reset
do_dist:
        sp44.z = d;
        sp44.y = d;
        sp44.x = d;
        sp50.z = d;
        sp50.y = d;
        sp50.x = d;
        ((GetPosFn)((void **)*(void **)((u8 *)arg0 + 0x40))[0xE])(&sp74, arg0, 0);
        sp5C = sp74;
        sp44 = sp74;
        ((GetPosFn)((void **)*(void **)((u8 *)other + 0x40))[0xE])(&sp80, other, 0);
        sp50 = sp80;
        sp68 = sp80;
        d = fn_802032CC(sp5C, sp68);
after_dist:

        scale = *(f32 *)((u8 *)lbl_80368278 + 0xE0);
        if (d < *(f32 *)((u8 *)arg0 + 0x128) * scale) {
            f32 a0, a1, a2;
            if (*(u32 *)((u8 *)arg0 + 0x118) == 0) {
                a0 = *(f32 *)((u8 *)arg0 + 0x48);
                a1 = lbl_8036A184;
                a2 = *(f32 *)((u8 *)arg0 + 0x50);
            } else {
                ((GetPosFn)((void **)*(void **)((u8 *)arg0 + 0x40))[0xE])(&sp2C, arg0, 0);
                adj_x = sp2C.x;
                ((GetPosFn)((void **)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x118) + 0x40))[0xE])(
                    &sp38, *(void **)((u8 *)arg0 + 0x118), 0);
                z = lbl_8036A184;
                dx = adj_x - *(f32 *)((u8 *)arg0 + 0x48);
                sp14.y = z;
                sp14.x = sp38.x - dx;
                sp14.z = z;
                sp20.y = z;
                sp20.z = z;
                sp20.x = -*(f32 *)((u8 *)arg0 + 0x60);
                fn_802031CC(&sp20, &sp20, *(f32 *)((u8 *)arg0 + 0x128) * scale);
                fn_80203184(&sp14, &sp20, &sp14);
                a0 = sp14.x;
                a1 = lbl_8036A184;
                a2 = lbl_8036A184;
            }
            spF8.x = a0;
            spF8.y = a1;
            spF8.z = a2;
            *(u32 *)&spC8.x = *(u32 *)&spF8.x;
            *(u32 *)&spC8.y = *(u32 *)&spF8.y;
            *(u32 *)&spC8.z = *(u32 *)&spF8.z;
            ((Actor *)arg0)->Adjust(&spC8, *(f32 *)((u8 *)lbl_80368278 + 0xE4), lbl_8036A184);
        }
    }

    *(s32 *)((u8 *)arg0 + 0x140) = 0;
    fn_80147578((char *)&lbl_80273DF8 + 0x4A7, 0x64, fx, fy, fz);
    *(u8 *)((u8 *)arg0 + 0x1A4) = 1;
    fn_800C9A60(&sp104, -1);
}
#pragma global_optimizer reset
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_80114840(void *arg0) {
    void *fn_800C42D8(s32);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800DBB74(void *, void *);
    void fn_800C9A60(void *, s32);
    void *fn_80151D50(void *, void *, void *, void *, void *, void *, s32);
    void fn_80147578(void *, s32, f32, f32, f32);
    extern void *lbl_80367240;
    void fn_80025624(void *, s32);

    struct Actor {
        u8 pad[0x40];
        virtual void v1() = 0;
        virtual void v0() = 0;
        virtual void v3() = 0;
        virtual void v2() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v10() = 0;
        virtual void v9() = 0;
        virtual void v11() = 0;
        virtual Vec3f GetPos(s32) = 0;
    };

    struct Manager {
        u8 pad[0x10];
        virtual void v2() = 0;
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5(void *) = 0;
    };

    typedef struct {
        s32 x, y, z;
    } Word3;

    void *self;
    Word3 pos;
    s8 flagA;
    register s8 flagB;
    register String strC;
    Vec3f got;
    Word3 copyA;
    register Word3 tmpVec;
    Word3 copyB2;
    register String strB;
    register String strA;
    Word3 copyB;
    void *obj;
    Word3 tmpVec2;
    Word3 copyA2;
    String strD;
    void *scratch;
    void *scratch2;
    void *scratch3;
    void *scratch4;

    self = arg0;
    *(f32 *)&pos.z = lbl_8036A184;
    *(f32 *)&pos.y = lbl_8036A184;
    *(f32 *)&pos.x = lbl_8036A184;
    got = ((Actor *)self)->GetPos(0);
    flagB = 0;
    flagA = 0;
    *(f32 *)&pos.y = got.y;
    *(f32 *)&pos.x = got.x;
    *(f32 *)&pos.z = got.z;
    *(f32 *)&pos.y = lbl_8036A1C8 + *(f32 *)((u8 *)self + 0x4C);
    *(s32 *)((u8 *)self + 0x140) = 0;
    obj = fn_800C42D8(0xC8);
    if (obj != NULL) {
        fn_800DBB74(&tmpVec, self);
        copyA = tmpVec;
        copyB = pos;
        fn_800C9ABC(&strB, (char *)lbl_80273DF8 + 0x4BE, &scratch);
        flagB = 1;
        fn_800C9ABC(&strA, (char *)lbl_80273DF8 + 0x51, &scratch2);
        flagA = 1;
        obj = fn_80151D50(obj, *(void **)((u8 *)self + 0xAC), &strA, &strB, &copyB, &copyA, 0);
    }
    (*(Manager **)((u8 *)self + 0xAC))->v5(obj);
    if (flagA) {
        fn_800C9A60(&strA, -1);
    }
    if (flagB) {
        fn_800C9A60(&strB, -1);
    }
    flagA = 0;
    flagB = 0;
    obj = fn_800C42D8(0xC8);
    if (obj != NULL) {
        fn_800DBB74(&tmpVec2, self);
        copyA2 = tmpVec2;
        copyB2 = pos;
        fn_800C9ABC(&strD, (char *)lbl_80273DF8 + 0x4CB, &scratch3);
        flagA = 1;
        fn_800C9ABC(&strC, (char *)lbl_80273DF8 + 0x51, &scratch4);
        flagB = 1;
        obj = fn_80151D50(obj, *(void **)((u8 *)self + 0xAC), &strC, &strD, &copyB2, &copyA2, 0);
    }
    (*(Manager **)((u8 *)self + 0xAC))->v5(obj);
    if (flagB) {
        fn_800C9A60(&strC, -1);
    }
    if (flagA) {
        fn_800C9A60(&strD, -1);
    }
    fn_80147578((char *)lbl_80273DF8 + 0x4DA, 0x64, *(f32 *)&pos.x, *(f32 *)&pos.y, *(f32 *)&pos.z);
    fn_80025624(lbl_80367240, 4);
    *(u8 *)((u8 *)self + 0x1A4) = 1;
}
#pragma cplusplus reset

s32 fn_80114AF0(void *arg0) {
    s32 *temp_r3;
    
    temp_r3 = M2C_FIELD(arg0, s32 **, 0x1B0);
    if (temp_r3 != NULL) {
        if ((u32)*temp_r3 >= 0x28U) {
            return 0;
        }
        return 1;
    }
    return 0;
}

#pragma global_optimizer off
#pragma cplusplus on
extern "C" s32 fn_80115C0C(void *arg0, s32 arg1) {
    s32 strlen(char *);
    void fn_800C96F8(void *, char *, s32);
    s32 fn_800C9400(void *, s32, s32, char *, s32);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800CB8A4(void *, void *, void *);
    s32 fn_800DDC04(void *, void *);
    void fn_800C9A60(void *, s32);
    void fn_800E56CC(void *);
    void fn_80111740(void *);
    void fn_80113298(void *, char *, s32, s32, s32);
    void fn_80203184(f32 *, f32 *, f32 *);
    void fn_802031CC(f32 *, f32 *, f32);
    f32 fn_802032CC(f32 *, f32 *);
    extern u16 lbl_80273DF8[];
    extern void *lbl_80368278;
    extern f32 lbl_8036A184;
    extern f32 lbl_8036A1D0;
    extern f32 lbl_8036A1D4;

    typedef struct { f32 x, y, z; } Vec3f;
    typedef void (*GetPosFn)(Vec3f *, void *, s32);
    typedef u8 (*BoolFn)(void *);
    typedef void (*AdjustFn)(void *, Vec3f *, f32, f32);

    f32 spB0, spAC, spA8;
    Vec3f sp9C;
    u8 sp90[0xC];
    u8 sp84[0xC];
    Vec3f sp78, sp6C, sp60, sp54;
    Vec3f sp48, sp3C;
    Vec3f sp30, sp24;
    f32 sp18[3];
    f32 spC[3];
    u8 sp8[4];
    f32 dist;
    f32 pad;
    void *other;
    s32 ret;
    u8 doMove;
    u32 ok;
    void *self;

    self = arg0;
    spB0 = lbl_8036A184;
    doMove = 0;
    spAC = lbl_8036A184;
    ret = 0;
    spA8 = lbl_8036A184;
    fn_800C96F8((u8 *)self + 0x16C, (char *)&lbl_80273DF8 + 0x1C, strlen((char *)&lbl_80273DF8 + 0x1C));
    other = *(void **)((u8 *)self + 0x118);
    if (other == 0) return 1;
    if (*(u8 *)((u8 *)self + 0x195) != 0) return 1;
    if (*(s32 *)((u8 *)self + 0x12C) != 0 && arg1 == 0 && *(s32 *)((u8 *)self + 0x140) == 0) {
        fn_800E56CC(self); return 1;
    }
    if (*(s32 *)((u8 *)self + 0x130) != 0 && arg1 == 0 && *(s32 *)((u8 *)self + 0x140) != 0) {
        fn_800E56CC(self); return 1;
    }
    if (*(s32 *)((u8 *)self + 0x134) != 0 && arg1 == 1) {
        fn_800E56CC(self); return 1;
    }
    if (*(s32 *)((u8 *)self + 0x138) != 0 && arg1 == 2) {
        fn_800E56CC(self); return 1;
    }
    if (*(s32 *)((u8 *)self + 0x13C) != 0 && arg1 == 3) {
        fn_800E56CC(self); return 1;
    }
    if (other == 0) {
        dist = lbl_8036A184;
    } else {
        sp3C.x = sp3C.y = sp3C.z = lbl_8036A184;
        sp48.x = sp48.y = sp48.z = lbl_8036A184;
        ((GetPosFn)((void **)*(void **)((u8 *)self + 0x40))[0xE])(&sp6C, self, 0);
        sp54 = sp6C;
        sp3C = sp6C;
        ((GetPosFn)((void **)*(void **)((u8 *)other + 0x40))[0xE])(&sp78, other, 0);
        sp48 = sp78;
        sp60 = sp78;
        dist = fn_802032CC((f32 *)&sp54, (f32 *)&sp60);
    }
    pad = lbl_8036A1D4;
    if (fn_800C9400((u8 *)self + 0xB0, 0, *(s32 *)((u8 *)self + 0xB0), (char *)&lbl_80273DF8 + 0x15F, strlen((char *)&lbl_80273DF8 + 0x15F)) == 0) {
        pad = lbl_8036A1D0;
    }
    if (dist <= pad + (*(f32 *)((u8 *)self + 0x128) + *(f32 *)((u8 *)self + 0x1B0))) {
        fn_800E56CC(self); return 1;
    }
    if (((BoolFn)((void **)*(void **)((u8 *)self + 0x40))[0x12])(self) == 0
        && dist > (*(f32 *)((u8 *)self + 0x128) + *(f32 *)((u8 *)self + 0x1B0))
        && *(u8 *)((u8 *)self + 0x1A4) != 0
        && *(u8 *)((u8 *)self + 0x1A5) == 0) {
        *(u8 *)((u8 *)self + 0x184) = 1;
        fn_80113298(self, (char *)&lbl_80273DF8 + 0x535, *(s32 *)((u8 *)self + 0x188), 0, 1);
        *(s32 *)((u8 *)self + 0x140) = 0;
        fn_800C96F8((u8 *)self + 0x160, (char *)&lbl_80273DF8 + 0x535, strlen((char *)&lbl_80273DF8 + 0x535));
        return 1;
    }
    if (*(u8 *)((u8 *)self + 0x1A4) != 0) {
        fn_800E56CC(self); return 1;
    }
    if (fn_800C9400((u8 *)self + 0x178, 0, *(s32 *)((u8 *)self + 0x178), (char *)&lbl_80273DF8 + 0x53A, strlen((char *)&lbl_80273DF8 + 0x53A)) == 0
        || fn_800C9400((u8 *)self + 0x178, 0, *(s32 *)((u8 *)self + 0x178), (char *)&lbl_80273DF8 + 0x43F, strlen((char *)&lbl_80273DF8 + 0x43F)) == 0) {
        fn_800C9ABC(sp84, (char *)&lbl_80273DF8 + 0x53F, sp8);
        fn_800CB8A4(sp90, (u8 *)self + 0x154, sp84);
        ok = fn_800DDC04(*(void **)((u8 *)self + 0xDC), sp90) != 0;
        fn_800C9A60(sp90, -1);
        fn_800C9A60(sp84, -1);
        if (ok) {
            *(u8 *)((u8 *)self + 0x184) = 1;
            fn_80113298(self, (char *)&lbl_80273DF8 + 0x53F, *(s32 *)((u8 *)self + 0x18C), 0, 1);
            fn_80111740(self);
        }
    } else if (fn_800C9400((u8 *)self + 0x178, 0, *(s32 *)((u8 *)self + 0x178), (char *)&lbl_80273DF8 + 0x53F, strlen((char *)&lbl_80273DF8 + 0x53F)) == 0) {
        if (*(u8 *)((u8 *)self + 0xD0) == 0) {
            *(u8 *)((u8 *)self + 0x184) = 1;
            fn_80113298(self, (char *)&lbl_80273DF8 + 0xFE, *(s32 *)((u8 *)self + 0x18C), 1, 1);
            fn_800C96F8((u8 *)self + 0x160, (char *)&lbl_80273DF8 + 0xFE, strlen((char *)&lbl_80273DF8 + 0xFE));
            doMove = 1;
            ret = 1;
        }
    } else {
        *(u8 *)((u8 *)self + 0x184) = 1;
        if (*(s32 *)((u8 *)self + 0x19C) == 0) {
            fn_80113298(self, (char *)&lbl_80273DF8 + 0xFE, *(s32 *)((u8 *)self + 0x18C), 0, 1);
            fn_800C96F8((u8 *)self + 0x160, (char *)&lbl_80273DF8 + 0xFE, strlen((char *)&lbl_80273DF8 + 0xFE));
            fn_80111740(self);
            doMove = 1;
            ret = 0;
        } else {
            fn_80113298(self, (char *)&lbl_80273DF8 + 0xFE, *(s32 *)((u8 *)self + 0x18C), 0, 1);
            fn_800C96F8((u8 *)self + 0x160, (char *)&lbl_80273DF8 + 0x1C, strlen((char *)&lbl_80273DF8 + 0x1C));
            fn_80111740(self);
            doMove = 0;
            *(u8 *)((u8 *)self + 0x1A0) = 1;
            ret = 1;
            *(u8 *)((u8 *)self + 0x1A4) = 1;
        }
    }
    if (doMove != 0) {
        f32 scale = *(f32 *)((u8 *)lbl_80368278 + 0xDC);
        *(u8 *)((u8 *)self + 0x195) = 1;
        if (*(void **)((u8 *)self + 0x118) == 0) {
            spAC = lbl_8036A184;
            spA8 = *(f32 *)((u8 *)self + 0x48);
            spB0 = *(f32 *)((u8 *)self + 0x50);
        } else {
            void *oth = *(void **)((u8 *)self + 0x118);
            f32 px;
            ((GetPosFn)((void **)*(void **)((u8 *)self + 0x40))[0xE])(&sp24, self, 0);
            px = sp24.x;
            ((GetPosFn)((void **)*(void **)((u8 *)oth + 0x40))[0xE])(&sp30, oth, 0);
            spC[1] = lbl_8036A184;
            spC[2] = lbl_8036A184;
            spC[0] = sp30.x - (px - *(f32 *)((u8 *)self + 0x48));
            sp18[1] = lbl_8036A184;
            sp18[2] = lbl_8036A184;
            sp18[0] = -*(f32 *)((u8 *)self + 0x60);
            fn_802031CC(sp18, sp18, *(f32 *)((u8 *)self + 0x128) * scale);
            fn_80203184(spC, sp18, spC);
            spAC = lbl_8036A184;
            spA8 = spC[0];
            spB0 = lbl_8036A184;
        }
        sp9C.x = spA8;
        sp9C.y = spAC;
        sp9C.z = spB0;
        ((AdjustFn)((void **)*(void **)((u8 *)self + 0x40))[0x10])(self, &sp9C, *(f32 *)((u8 *)self + 0x124), lbl_8036A184);
        *(s32 *)((u8 *)self + 0x140) = 0;
        *(u8 *)((u8 *)self + 0x1A4) = 1;
    }
    return ret;
}
#pragma cplusplus reset
#pragma global_optimizer reset

void fn_8011631C(void *arg0, s8 arg1)
{
    String sp24;
    String sp18;
    String spC;
    s32 sp8;
    u8 flag;

    sp24.size = 0;
    sp24.cap = 0;
    sp24.data = 0;
    sp24.cap = 0;

    if (fn_800C9400((u8 *)arg0 + 0x178, 0, (void *)*(s32 *)((u8 *)arg0 + 0x178),
                    (char *)&lbl_80273DF8 + 0x43f,
                    strlen((char *)&lbl_80273DF8 + 0x43f)) == 0
        || (u32)(fn_800D5948((u8 *)arg0 + 0x178, (char *)&lbl_80273DF8 + 0x43f, 0,
                             strlen((char *)&lbl_80273DF8 + 0x43f)) + 0x10000) != (u32)-1
        || ((u32)(fn_800D5948((u8 *)arg0 + 0x178, (char *)&lbl_80273DF8 + 0x444, 0,
                              strlen((char *)&lbl_80273DF8 + 0x444)) + 0x10000) != (u32)-1
            && fn_800E56C4(arg0) == 0)) {
        flag = 1;
    } else {
        flag = 0;
    }

    if (flag == 0 && *(u8 *)((u8 *)arg0 + 0x1A6) == 0) {
        fn_800C9ABC(&sp18, (char *)&lbl_80273DF8 + 0x43f, &sp8);
        fn_801134EC(&spC, arg0, &sp18);
        fn_800C9758(&sp24, &spC, 0, -1);
        fn_800C9A60(&spC, -1);
        fn_800C9A60(&sp18, -1);
        *(u8 *)((u8 *)arg0 + 0x184) = arg1;

        if (fn_800C9400(&sp24, 0, (void *)sp24.size, (char *)&lbl_80273DF8 + 0x43f,
                        strlen((char *)&lbl_80273DF8 + 0x43f)) == 0) {
            fn_80113298(arg0, fn_800C93EC(&sp24), *(s32 *)((u8 *)arg0 + 0x190), 1, 1);
        } else {
            fn_80113298(arg0, fn_800C93EC(&sp24), *(s32 *)((u8 *)arg0 + 0x188), 0, 1);
            fn_800C96F8((u8 *)arg0 + 0x16C, (char *)&lbl_80273DF8 + 0x43f,
                        strlen((char *)&lbl_80273DF8 + 0x43f));
        }
    }

    *(u8 *)((u8 *)arg0 + 0x1A8) = 0;
    fn_800C9A60(&sp24, -1);
}

s32 fn_8011654C(void *arg0) {
    s32 fn_801992F0(void *);
    void *v;

    v = *(void **)((u8 *)arg0 + 0x11C);
    if (v != NULL) {
        return fn_801992F0(v);
    }
    return 0;
}

s32 fn_80116580(void *arg0) {
    s32 fn_80199310(void *);
    void *v;

    v = *(void **)((u8 *)arg0 + 0x11C);
    if (v != NULL) {
        return fn_80199310(v);
    }
    return -1;
}

#pragma optimization_level 2
void fn_801165B4(void *arg0, void *arg1) {
    void fn_80199318(void *, void *);
    void fn_800C9ABC(void *, char *, void *);
    u8 sp8[0x14];
    void *temp_r4;

    temp_r4 = *(void **)((u8 *)arg1 + 0x11C);
    if (temp_r4 != NULL) {
        fn_80199318(arg0, temp_r4);
        return;
    }
    fn_800C9ABC(arg0, (char *)lbl_80273DF8 + 0x1C, sp8);
}
#pragma optimization_level reset
s32 fn_80116604(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x11C);
}

void fn_8011660C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1B8) = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1B8) > 1) {
        M2C_FIELD(arg0, s8 *, 0x1A4) = 1;
        M2C_FIELD(arg0, s8 *, 0x1A5) = 1;
    }
}

void fn_8011662C(void *arg0, s32 arg1) {
    s32 fn_80165B04(s32);
    s32 fn_80165B0C(s32);
    M2C_UNK fn_801C4468(s32);
    M2C_UNK fn_801C6008(s32);
    s32 temp_r3;

    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1CC) = fn_80165B0C(arg1);
        M2C_FIELD(arg0, s32 *, 0x1D0) = fn_80165B04(arg1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1CC) == 2) {
            fn_801C4468(M2C_FIELD(arg0, s32 *, 0xE0));
        }
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1CC);
        if (((temp_r3 == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) == 1)) || ((temp_r3 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) == 3))) {
            fn_801C6008(M2C_FIELD(arg0, s32 *, 0xE0));
        }
    }
}

void fn_801166C4(void *arg0, void *arg1) {
    extern f32 lbl_8036A184;
    extern u16 lbl_80273DF8[];

    void fn_800DF670(void *);
    void fn_800E4FE8(void *, void *, const char *);

    u8 *obj;
    u8 *ptr;
    void **vtable;
    f32 value;

    obj = (u8 *)arg0;

    if (arg1 != NULL) {
        *(void **)(obj + 0x120) = arg1;

        ptr = *(u8 **)(obj + 0x120);

        if (ptr != NULL) {
            vtable = *(void ***)(ptr + 0x40);

            value = lbl_8036A184;

            ((void (*)(void *, f32, f32, f32))vtable[0x24 / 4])(
                ptr, value, value, value
            );

            ptr = *(u8 **)(obj + 0x120);
            vtable = *(void ***)(ptr + 0x40);

            value = lbl_8036A184;

            ((void (*)(void *, f32, f32, f32))vtable[0x2C / 4])(
                ptr, value, value, value
            );

            fn_800DF670(*(void **)(obj + 0x120));

            fn_800E4FE8(
                *(void **)(obj + 0x120),
                obj,
                (char *)(lbl_80273DF8 + 0xF5)
            );
        }
    }
}

void fn_80116760(s32 arg0, s32 arg1) {
    extern u16 lbl_80273DF8[];
    s32 sp8;

    fn_800CB90C(&sp8, arg1, (u8 *)lbl_80273DF8 + 0xfc);
    fn_800C9758((void *)(arg0 + 0x154), &sp8, 0, -1);
    fn_800C9A60(&sp8, -1);
}

void fn_801168F4(void *arg0, char *arg1) {
    void fn_800C9A60(void *, s32);
    void fn_800C9ABC(void *, char *, void *);
    s32 fn_800E7DA4(s32, void *);
    M2C_UNK spC;
    M2C_UNK sp8;

    fn_800C9ABC(&spC, arg1, &sp8);
    *(s32 *)((u8 *)arg0 + 0x118) = fn_800E7DA4(*(s32 *)((u8 *)arg0 + 0xAC), &spC);
    fn_800C9A60(&spC, -1);
}

#pragma cplusplus on
extern "C" void fn_80116944(void *arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0();
        virtual void v1();
    };
    void fn_800608AC(s32);
    fn_800608AC(M2C_FIELD(arg0, s32 *, 0xE0));
    ((Obj *)arg0)->v1();
}

#pragma global_optimizer off
#pragma cplusplus on
extern "C" void fn_80116988(void *arg0, s32 arg1, f32 farg0) {
    s32 strlen(char *);
    void fn_800C96F8(void *, char *, u32);
    void fn_800C9758(void *, void *, s32, s32);
    void fn_800C9A60(void *, s32);
    void fn_800CB90C(void *, void *, char *);
    s32 fn_800DDAA4(void *, void *);
    u32 fn_800DDC04(void *, void *);
    extern void *lbl_80368278;

    struct Actor {
        u8 pad0[0x40];
        virtual void v0() = 0;
        virtual void Unk() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual Vec3f GetPos(s32) = 0;
        virtual void v13() = 0;
        virtual void Adjust(Vec3f *, f32, f32) = 0;
    };

    typedef void (*GetPosFn)(Vec3f *, void *, s32);

    f32 f31;
    f32 f30;
    f32 f29;
    f32 f28;
    f32 f27;
    f32 f26;
    u8 sp98[0x30];
    String sp8C;
    Vec3f sp80;
    Vec3f sp74;
    String sp68;
    String sp5C;
    String sp50;
    String sp44;
    String sp38;
    Vec3f sp2C;
    Vec3f sp20;
    Vec3f sp14;
    Vec3f sp8;

    sp8C.size = 0;
    sp8C.cap = 0;
    sp8C.data = 0;
    sp8C.cap = 0;

    f31 = farg0;
    {
        void *oth = *(void **)((u8 *)arg0 + 0x118);
        ((GetPosFn)((void **)*(void **)((u8 *)oth + 0x40))[0xE])(&sp74, oth, 0);
    }
    f30 = *(f32 *)((u8 *)arg0 + 0x128) * f31 + sp74.x;

    if (*(s32 *)((u8 *)arg0 + 0x19C) == 0) {
        fn_800CB90C(&sp68, (u8 *)arg0 + 0x154, (char *)&lbl_80273DF8 + 0x53F);
        fn_800C9758(&sp8C, &sp68, 0, -1);
        fn_800C9A60(&sp68, -1);
        if (fn_800DDC04(*(void **)((u8 *)arg0 + 0xDC), &sp8C) != 0) {
            u32 res;
            f27 = *(f32 *)((u8 *)arg0 + 0x48);
            f28 = *(f32 *)((u8 *)arg0 + 0x4C);
            f29 = *(f32 *)((u8 *)arg0 + 0x50);
            res = fn_800DDC04(*(void **)((u8 *)arg0 + 0xDC), &sp8C);
            if (res != 0) {
                f32 z = lbl_8036A184;
                void *e0;
                *(f32 *)((u8 *)arg0 + 0x50) = z;
                *(f32 *)((u8 *)arg0 + 0x4C) = z;
                *(f32 *)((u8 *)arg0 + 0x48) = z;
                e0 = *(void **)((u8 *)arg0 + 0xE0);
                *(u32 *)((u8 *)e0 + 0x44) = res;
                e0 = *(void **)((u8 *)arg0 + 0xE0);
                *(u32 *)((u8 *)e0 + 0x74) = 0;
                ((Actor *)arg0)->Unk();
                fn_8005FEE8(*(void **)((u8 *)arg0 + 0xE0), lbl_8036A1B0);
                fn_800608AC(*(void **)((u8 *)arg0 + 0xE0));
                ((GetPosFn)((void **)*(void **)((u8 *)arg0 + 0x40))[0xE])(&sp20, arg0, 0);
                f26 = sp20.x;
            } else {
                f26 = lbl_8036A184;
            }
            *(f32 *)((u8 *)arg0 + 0x48) = f27;
            *(f32 *)((u8 *)arg0 + 0x4C) = f28;
            *(f32 *)((u8 *)arg0 + 0x50) = f29;
        } else {
            f26 = lbl_8036A184;
        }
        fn_800CB90C(&sp5C, (u8 *)arg0 + 0x154, (char *)&lbl_80273DF8 + 0xFE);
        fn_800C9758(&sp8C, &sp5C, 0, -1);
        fn_800C9A60(&sp5C, -1);
        {
            s32 daa = fn_800DDAA4(*(void **)((u8 *)arg0 + 0xDC), &sp8C);
            if (daa != 0) {
                *(f32 *)((u8 *)arg0 + 0x48) =
                    f31 * (*(f32 *)((u8 *)arg0 + 0x124) * ((f32)daa * (f32)*(s32 *)((u8 *)arg0 + 0x198))) + f30;
                *(f32 *)((u8 *)arg0 + 0x48) = *(f32 *)((u8 *)arg0 + 0x48) + f26;
            } else {
                *(f32 *)((u8 *)arg0 + 0x48) = lbl_8036A1BC * f31;
            }
        }
    } else {
        f32 tmp;
        fn_800CB90C(&sp50, (u8 *)arg0 + 0x154, (char *)&lbl_80273DF8 + 0xFE);
        fn_800C9758(&sp8C, &sp50, 0, -1);
        fn_800C9A60(&sp50, -1);
        f28 = *(f32 *)((u8 *)arg0 + 0x48);
        f27 = *(f32 *)((u8 *)arg0 + 0x4C);
        f26 = *(f32 *)((u8 *)arg0 + 0x50);
        {
            u32 res = fn_800DDC04(*(void **)((u8 *)arg0 + 0xDC), &sp8C);
            if (res != 0) {
                f32 z = lbl_8036A184;
                void *e0;
                *(f32 *)((u8 *)arg0 + 0x50) = z;
                *(f32 *)((u8 *)arg0 + 0x4C) = z;
                *(f32 *)((u8 *)arg0 + 0x48) = z;
                e0 = *(void **)((u8 *)arg0 + 0xE0);
                *(u32 *)((u8 *)e0 + 0x44) = res;
                e0 = *(void **)((u8 *)arg0 + 0xE0);
                *(u32 *)((u8 *)e0 + 0x74) = 0;
                ((Actor *)arg0)->Unk();
                fn_8005FEE8(*(void **)((u8 *)arg0 + 0xE0), lbl_8036A1B0);
                fn_800608AC(*(void **)((u8 *)arg0 + 0xE0));
                ((GetPosFn)((void **)*(void **)((u8 *)arg0 + 0x40))[0xE])(&sp14, arg0, 0);
                tmp = sp14.x;
            } else {
                tmp = lbl_8036A184;
            }
        }
        *(f32 *)((u8 *)arg0 + 0x48) = f28;
        *(f32 *)((u8 *)arg0 + 0x4C) = f27;
        *(f32 *)((u8 *)arg0 + 0x50) = f26;
        *(f32 *)((u8 *)arg0 + 0x48) = f30 - tmp;
    }

    if ((u8)arg1 != 0) {
        void *oth;
        f32 dx;
        f32 z;
        oth = *(void **)((u8 *)arg0 + 0x118);
        dx = *(f32 *)((u8 *)arg0 + 0x48);
        z = lbl_8036A184;
        dx = dx - *(f32 *)((u8 *)oth + 0x48);
        sp80.y = z;
        sp80.x = dx;
        sp80.z = z;
        fn_80202300(sp98, 0x59, lbl_80368278,
                    lbl_8036A1D8 * (*(f32 *)((u8 *)lbl_80368278 + 0x164) * f31),
                    dx);
        fn_802029C4(sp98, &sp80, &sp80);
        *(f32 *)((u8 *)arg0 + 0x48) =
            *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x118) + 0x48) + sp80.x;
        *(f32 *)((u8 *)arg0 + 0x4C) =
            *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x118) + 0x4C) + sp80.y;
        *(f32 *)((u8 *)arg0 + 0x50) =
            *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x118) + 0x50) + sp80.z;
        *(f32 *)((u8 *)arg0 + 0x58) =
            *(f32 *)((u8 *)lbl_80368278 + 0x164) * f31 + *(f32 *)((u8 *)arg0 + 0x58);
    }

    {
        f32 tmp;
        fn_800CB90C(&sp44, (u8 *)arg0 + 0x154, (char *)&lbl_80273DF8 + 0x535);
        fn_800C9758(&sp8C, &sp44, 0, -1);
        fn_800C9A60(&sp44, -1);
        f28 = *(f32 *)((u8 *)arg0 + 0x48);
        f27 = *(f32 *)((u8 *)arg0 + 0x4C);
        f26 = *(f32 *)((u8 *)arg0 + 0x50);
        {
            u32 res = fn_800DDC04(*(void **)((u8 *)arg0 + 0xDC), &sp8C);
            if (res != 0) {
                f32 z = lbl_8036A184;
                void *e0;
                *(f32 *)((u8 *)arg0 + 0x50) = z;
                *(f32 *)((u8 *)arg0 + 0x4C) = z;
                *(f32 *)((u8 *)arg0 + 0x48) = z;
                e0 = *(void **)((u8 *)arg0 + 0xE0);
                *(u32 *)((u8 *)e0 + 0x44) = res;
                e0 = *(void **)((u8 *)arg0 + 0xE0);
                *(u32 *)((u8 *)e0 + 0x74) = 0;
                ((Actor *)arg0)->Unk();
                fn_8005FEE8(*(void **)((u8 *)arg0 + 0xE0), lbl_8036A1B0);
                fn_800608AC(*(void **)((u8 *)arg0 + 0xE0));
                ((GetPosFn)((void **)*(void **)((u8 *)arg0 + 0x40))[0xE])(&sp8, arg0, 0);
                tmp = sp8.x;
            } else {
                tmp = lbl_8036A184;
            }
        }
        *(f32 *)((u8 *)arg0 + 0x48) = f28;
        tmp = (f32)__fabs((f64)tmp);
        *(f32 *)((u8 *)arg0 + 0x4C) = f27;
        *(f32 *)((u8 *)arg0 + 0x50) = f26;
        *(f32 *)((u8 *)arg0 + 0x1B0) = tmp;
        *(u8 *)((u8 *)arg0 + 0x1A4) = 0;
    }

    fn_800CB90C(&sp38, (u8 *)arg0 + 0x154, (char *)&lbl_80273DF8 + 0x53A);
    fn_800C9758(&sp8C, &sp38, 0, -1);
    fn_800C9A60(&sp38, -1);
    f28 = *(f32 *)((u8 *)arg0 + 0x48);
    f27 = *(f32 *)((u8 *)arg0 + 0x4C);
    f26 = *(f32 *)((u8 *)arg0 + 0x50);
    {
        u32 res = fn_800DDC04(*(void **)((u8 *)arg0 + 0xDC), &sp8C);
        if (res != 0) {
            f32 z = lbl_8036A184;
            void *e0;
            *(f32 *)((u8 *)arg0 + 0x50) = z;
            *(f32 *)((u8 *)arg0 + 0x4C) = z;
            *(f32 *)((u8 *)arg0 + 0x48) = z;
            e0 = *(void **)((u8 *)arg0 + 0xE0);
            *(u32 *)((u8 *)e0 + 0x44) = res;
            e0 = *(void **)((u8 *)arg0 + 0xE0);
            *(u32 *)((u8 *)e0 + 0x74) = 0;
            ((Actor *)arg0)->Unk();
            fn_8005FEE8(*(void **)((u8 *)arg0 + 0xE0), lbl_8036A1B0);
            fn_800608AC(*(void **)((u8 *)arg0 + 0xE0));
            ((GetPosFn)((void **)*(void **)((u8 *)arg0 + 0x40))[0xE])(&sp2C, arg0, 0);
        }
    }
    *(f32 *)((u8 *)arg0 + 0x48) = f28;
    *(f32 *)((u8 *)arg0 + 0x4C) = f27;
    *(f32 *)((u8 *)arg0 + 0x50) = f26;

    fn_800C96F8((u8 *)arg0 + 0x160, (char *)&lbl_80273DF8 + 0x1C,
                strlen((char *)&lbl_80273DF8 + 0x1C));
    fn_800C9A60(&sp8C, -1);
}
#pragma cplusplus reset
#pragma global_optimizer reset

#pragma cplusplus reset
void fn_80116F84(void *arg0, void *arg1) {
    void fn_800DB7A4(void *, void *);
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg1, s32 *, 0);
    temp_r5 = M2C_FIELD(arg1, s32 *, 4);
    sp8 = temp_r6;
    spC = temp_r5;
    sp10 = M2C_FIELD(arg1, s32 *, 8);
    fn_800DB7A4(arg0, &sp8);
    if (M2C_FIELD(arg0, u8 *, 0x195) != 0) {
        M2C_FIELD(arg0, s32 *, 0x9C) = M2C_FIELD(arg0, s32 *, 0xC8) * M2C_FIELD(arg0, s32 *, 0x198);
    }
}

void fn_80116FE8(void)
{
    // Start with a minimal stub that matches the prologue and epilogue structure.
    // This will be expanded as I get more confident about how this code actually works.
}

#pragma use_lmw_stmw on
void *fn_80117A94(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s8 arg5)
{
    String sp24;
    String sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 a3;
    s32 a4;
    s8 a5;

    fn_800C9ABC(&sp24, (char *)lbl_80273DF8 + 0x573, &sp14);
    fn_800C9ABC(&sp18, (char *)lbl_80273DF8 + 0x579, &sp10);
    a3 = arg3;
    a4 = arg4;
    a5 = arg5;
    fn_800E6418(arg0, arg1, &sp24, arg2, a3, &sp18);
    fn_800C9A60(&sp18, -1);
    fn_800C9A60(&sp24, -1);

    {
        u8 *self = (u8 *)arg0;

        *(void **)(self + 0x40) = lbl_8028F6C8;

        *(u32 *)(self + 0x154) = 0;
        *(u32 *)(self + 0x158) = 0;
        *(u32 *)(self + 0x15C) = 0;
        *(u32 *)(self + 0x158) = 0;
        *(u32 *)(self + 0x160) = 0;
        *(u32 *)(self + 0x164) = 0;
        *(u32 *)(self + 0x168) = 0;
        *(u32 *)(self + 0x164) = 0;
        *(u32 *)(self + 0x16C) = 0;
        *(u32 *)(self + 0x170) = 0;
        *(u32 *)(self + 0x174) = 0;
        *(u32 *)(self + 0x170) = 0;
        *(u32 *)(self + 0x178) = 0;
        *(u32 *)(self + 0x17C) = 0;
        *(u32 *)(self + 0x180) = 0;
        *(u32 *)(self + 0x17C) = 0;

        fn_800D6878(self + 0x1BC, &sp8, &spC);

        *(s32 *)(self + 0x118) = 0;
        *(s32 *)(self + 0x11C) = 0;
        *(s32 *)(self + 0x120) = 0;
        *(f32 *)(self + 0x124) = lbl_8036A1DC;
        *(f32 *)(self + 0x128) = lbl_8036A1A4;
        *(s32 *)(self + 0x12C) = 0;
        *(s32 *)(self + 0x130) = 0;
        *(s32 *)(self + 0x134) = 0;
        *(s32 *)(self + 0x138) = 0;
        *(s32 *)(self + 0x13C) = 0;
        *(s32 *)(self + 0x140) = 0;
        *(s32 *)(self + 0x14C) = -1;
        *(s32 *)(self + 0x148) = 0;
        self[0x184] = 0;
        self[0x194] = 0;
        self[0x195] = 0;
        *(s32 *)(self + 0x198) = 1;
        *(s32 *)(self + 0x19C) = 0;
        self[0x1A0] = 0;
        self[0x1A1] = 0;
        self[0x1A2] = a5;
        self[0x1A3] = a5;
        self[0x1A4] = 0;
        self[0x1A5] = 0;
        self[0x1A6] = 0;
        self[0x1A7] = 0;
        self[0x1A8] = 0;
        *(s32 *)(self + 0x1AC) = a4;
        *(f32 *)(self + 0x1B0) = lbl_8036A1C8;
        self[0x1B4] = 0;
        self[0x1B5] = 0;
        self[0x1B6] = 0;
        *(s32 *)(self + 0x1B8) = 1;

        fn_800C96F8(self + 0x154, (char *)lbl_80273DF8 + 0x581, strlen((char *)lbl_80273DF8 + 0x581));
        fn_800C96F8(self + 0x160, (char *)lbl_80273DF8 + 0x1C, strlen((char *)lbl_80273DF8 + 0x1C));
        fn_800C96F8(self + 0x16C, (char *)lbl_80273DF8 + 0x1C, strlen((char *)lbl_80273DF8 + 0x1C));

        self[0x1D7] = 1;
        self[0x1D6] = 1;
        self[0x1D5] = 1;
        self[0x1D4] = 1;
        return self;
    }
}
#pragma use_lmw_stmw reset

s32 fn_80117CC0(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 8) + arg1;
}

void fn_80117CCC(void) {
    void fn_8014C798(void *);
    void fn_800163F8(void);
    void fn_80016180(void);
    void *fn_80016BDC(void *);
    void fn_8004BE88(void *, s32);
    void fn_800187F0(void);
    extern s32 lbl_80330708[];
    extern u8 lbl_80274508[];
    void *temp_r3;

    fn_8014C798(lbl_80330708);
    fn_800163F8();
    fn_80016180();
    temp_r3 = fn_80016BDC(lbl_80274508 + 0x130);
    if (temp_r3 != 0) {
        fn_8004BE88(temp_r3, 0);
        fn_800187F0();
    }
}

void fn_80117D20(s32 arg0) {
    void fn_8014C7C0(void *, s32);
    void fn_80013A90(void *);
    void fn_800138F4(void);
    void fn_800C08AC(void *, s32);
    extern s32 lbl_80330708[];
    extern u8 lbl_80274508[];

    fn_8014C7C0(lbl_80330708, 0);
    fn_80013A90(lbl_80274508 + 0x138);
    fn_800138F4();
    fn_800C08AC(lbl_80274508 + 0x150, arg0);
}

BOOL fn_80117D80(s32 arg0, s32 arg1)
{
    s32 temp_r3;
    s32 r4_temp;
    u8 *r31;

    temp_r3 = (s32)(u8)arg1;
    if (temp_r3 >= 0) {
        r4_temp = arg0;
        if (r4_temp >= 0) {
            r31 = (u8 *)lbl_80273DF8 + (arg0 >> 2);
            if (r31 != NULL) {
                if (temp_r3 < 8) {
                    return (*(u8 *)r31 & (1 << temp_r3)) != 0;
                }
                return 0;
            }
        }
    }
    return 0;
}

void fn_80117F1C(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    M2C_UNK fn_8013FEC0();
    fn_8013FEC0();
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x48));
}

void fn_80117F54(s32 arg0) {
    extern s32 lbl_802EF4C8[];
    
    void fn_8013FED0(void);
    void fn_8007D064(s32, s32, s32);

    fn_8013FED0();
    fn_8007D064(lbl_802EF4C8[0], arg0, 0);
}

s32 fn_80117F98(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x18) != 0) {
        return 0;
    }
    
    // Call fn_8000A420
    fn_8000A420(arg0);
    
    // If we've reached here, the check is passed and we return M2C_FIELD(arg0, u32 *, 0x18)
    return M2C_FIELD(arg0, u32 *, 0x18);
}

void fn_80118170(void *arg0) {
    void fn_8012C7C8(void *, void *);
    void fn_8000A430(s32);
    s32 fn_8013FF94(void *, s32, s32);
    void fn_8014004C(void *, s32);
    void fn_80117D80(void);
    s32 tmp;

    fn_8012C7C8((void *)fn_80117D80, arg0);
    fn_8000A430(*(s32 *)((u8 *)arg0 + 0x44));
    tmp = fn_8013FF94(arg0, -0x1000, 0);
    if (tmp != 0) {
        fn_8014004C(arg0, tmp);
    }
}

void fn_801181D0(void) {
    M2C_UNK fn_80006198();
    M2C_UNK fn_80006220(M2C_UNK);
    fn_80006220(0xE);
    fn_80006198();
}

void fn_801181F8(s32 arg0) {
    extern u8 lbl_802EF4C8[];
    switch ((s32)lbl_802EF4C8[8]) {
    case 0x81:
        fn_8000C070(arg0, 0x12);
        return;
    case 0x80:
        fn_8000C070(arg0, 1);
        return;
    }
}

void fn_8011824C(s32 arg0) {
    void fn_8000E0E4(void *);
    void fn_80024398(void *, s32, s32);
    void *fn_8013BFFC(void);
    extern char lbl_80274508[];
    void *tmp;

    fn_8000E0E4(lbl_80274508 + 0x162);
    tmp = fn_8013BFFC();
    *((u8 *)tmp + 0x24) = 1;
    fn_80024398(tmp, arg0, 0);
}

void fn_8011829C(void *arg0) {
    void fn_80018AE4(void);
    void fn_8000C070(void *, s32);
    extern u8 lbl_802EF4C8[];

    fn_80018AE4();
    switch ((s32)lbl_802EF4C8[8]) {
    case 0x81:
        fn_8000C070(arg0, 0x13);
        return;
    case 0x80:
        fn_8000C070(arg0, *(u8 *)((u8 *)arg0 + 0x48));
        return;
    }
}

void fn_80118308(s32 arg0) {
    void fn_8000E0E4(void *);
    void fn_80018AF4(void);
    void fn_80024398(void *, s32, s32);
    void fn_8011A2FC(void);
    void *fn_8013BFFC(void);
    u32 fn_8013FF94(s32, s32, s32);
    void fn_801658DC(u32, void *);
    extern char lbl_80274508[];
    void *tmp;
    u32 result;

    fn_8011A2FC();
    fn_80018AF4();
    fn_8000E0E4(lbl_80274508 + 0x17C);
    tmp = fn_8013BFFC();
    *((u8 *)tmp + 0x24) = 1;
    fn_80024398(tmp, arg0, 0);
    result = fn_8013FF94(arg0, -0x1000, 0);
    if (result != 0) {
        fn_801658DC(result, lbl_80274508 + 0x194);
    }
}

void fn_80118388(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    M2C_UNK fn_800A8400();
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_801183C0(s32 arg0) {
    void fn_8013FED0(s32);
    void fn_801D3B14(s32);
    extern s32 lbl_80330708[];

    fn_8013FED0(arg0);
    *((u8 *)lbl_80330708 + 0x54) = 2;
    fn_801D3B14(arg0);
}

void fn_80118404(s32 arg0) {
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_8011843C(s32 arg0) {
    M2C_UNK fn_8013FED0();
    M2C_UNK fn_801AA120(s32);
    fn_8013FED0();
    fn_801AA120(arg0);
}

void fn_80118470(s32 arg0) {
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_801184A8(s32 arg0) {
    M2C_UNK fn_8016B730(s32);
    fn_8013FED0();
    fn_8016B730(arg0);
}

void fn_801184DC(void *arg0) {
    void fn_800E43EC(void *);
    extern void *lbl_80367240;
    u32 buttons;

    fn_800E43EC(arg0);
    if (*(u8*)((u8*)arg0 + 0xF0) != 0) {
        buttons = *(u32*)((u8*)lbl_80367240 + 0xC);
        if (buttons & 8) {
            *(s32*)((u8*)arg0 + 0xEC) -= 1;
        } else if (buttons & 4) {
            *(s32*)((u8*)arg0 + 0xEC) += 1;
        } else if (buttons & 1) {
            *(s32*)((u8*)arg0 + 0xEC) -= 10;
        } else if (buttons & 2) {
            *(s32*)((u8*)arg0 + 0xEC) += 10;
        }
        if (*(s32*)((u8*)arg0 + 0xEC) < 0) {
            *(s32*)((u8*)arg0 + 0xEC) = 0;
        }
        if (*(s32*)((u8*)arg0 + 0xEC) >= *(s32*)((u8*)arg0 + 0xB0)) {
            *(s32*)((u8*)arg0 + 0xEC) = *(s32*)((u8*)arg0 + 0xB0) - 1;
        }
        if (*(s32*)((u8*)arg0 + 0xEC) >= *(s32*)((u8*)arg0 + 0xF4) + *(s32*)((u8*)arg0 + 0xF8)) {
            *(s32*)((u8*)arg0 + 0xF4) = *(s32*)((u8*)arg0 + 0xEC) - *(s32*)((u8*)arg0 + 0xF8) + 1;
        } else if (*(s32*)((u8*)arg0 + 0xEC) < *(s32*)((u8*)arg0 + 0xF4)) {
            *(s32*)((u8*)arg0 + 0xF4) = *(s32*)((u8*)arg0 + 0xEC);
        }
    }
}

void fn_8011868C(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8014004C(void *, s32);
    M2C_UNK fn_8016E9DC(void *);
    s32 tmp;

    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x44));
    tmp = fn_8013FF94(arg0, -0x1000, 0);
    if (tmp != 0) {
        fn_8014004C(arg0, tmp);
    }
    fn_8016E9DC(arg0);
}

void fn_801186E4(void *arg0)
{
    void fn_8000C070(void *, s32);
    u8 fn_80015648(s32, u8);
    void fn_8002297C(u8 *);
    void fn_8002833C(u8 *, void *);
    void fn_8004A1F0(void);
    void fn_8004A224(void);
    void fn_800A8400(void);
    void *fn_800AA794(void);
    void fn_800AACDC(void *);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801475FC(u8 *, s32);
    void fn_801658DC(u32, u8 *);
    extern u8 lbl_80274508[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802EF4C8[];
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    extern void *lbl_803679F0;
    extern s8 lbl_803679F4;
    void *unit;
    void *unit2;
    u8 flag;
    u8 skip;
    u32 buttons;
    void *iter;
    u32 flags;
    u32 ret;
    void *self;

    self = arg0;
    unit = fn_800AA794();
    if (unit != NULL) {
        if (fn_80015648(0, *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) == 1) {
            if (!(*(u32 *)((u8 *)unit + 0x1A0) & 0x800)) {
                ret = fn_8013FF94(self, -0x1000, 0);
                if (ret != 0) {
                    fn_801658DC(ret, lbl_80274508 + 0x1A7);
                }
            } else {
                ret = fn_8013FF94(self, -0x1000, 0);
                if (ret != 0) {
                    fn_801658DC(ret, lbl_80274508 + 0x1B9);
                }
            }
        } else {
            ret = fn_8013FF94(self, -0x1000, 0);
            if (ret != 0) {
                fn_801658DC(ret, lbl_80274508 + 0x1CB);
            }
        }
    } else {
        flag = 0;
        iter = *(void **)(lbl_802CA264 + 0xC);
        while (iter != NULL) {
            flags = *(u32 *)((u8 *)iter + 0x1A0);
            iter = *(void **)((u8 *)iter + 0x184);
            if (flags & 0x800) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            ret = fn_8013FF94(self, -0x1000, 0);
            if (ret != 0) {
                fn_801658DC(ret, lbl_80274508 + 0x1DD);
            }
        } else {
            ret = fn_8013FF94(self, -0x1000, 0);
            if (ret != 0) {
                fn_801658DC(ret, lbl_80274508 + 0x1EF);
            }
        }
    }
    if (lbl_803679F4 == 0) {
        lbl_803679F0 = NULL;
        lbl_803679F4 = 1;
    }
    unit2 = fn_800AA794();
    if (unit2 == NULL && (lbl_80367110 & 0x400)) {
        fn_8004A1F0();
    }
    skip = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        skip = 1;
    }
    if ((skip != 0) ||
        ((!( *(u32 *)((u8 *)lbl_80367240 + 4) & 0xF)) &&
         ((s8)(*(u8 **)lbl_80367240)[2] == 0) &&
         ((s8)(*(u8 **)lbl_80367240)[3] == 0))) {
        if ((lbl_803679F0 != unit2) || !(lbl_80367110 & 0x400)) {
            lbl_803679F0 = unit2;
            if ((unit2 == NULL) || (*(u8 *)(*(u8 **)((u8 *)unit2 + 0x190) + 8) == 0)) {
                if (lbl_80367110 & 0x400) {
                    fn_8004A1F0();
                }
            } else {
                fn_800AACDC(unit2);
                fn_8004A224();
            }
        }
    }
    skip = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        skip = 1;
    }
    if (skip == 0) {
        buttons = *(u32 *)((u8 *)lbl_80367240 + 4);
        buttons = buttons & (*(u32 *)((u8 *)lbl_80367240 + 8) ^ buttons);
        if ((unit != NULL) && (buttons & 0x800)) {
            fn_800A8400();
            if (lbl_80367110 & 0x400) {
                fn_8004A1F0();
            }
            fn_8002833C(lbl_802EF4C8, unit);
            fn_801475FC(lbl_80274508 + 0x201, 0x64);
            *((u8 *)self + 0x48) = 4;
            fn_8000C070(self, 0x11);
            return;
        }
        if (buttons & 0x100) {
            if ((unit != NULL) && (fn_80015648(0, *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) == 1)) {
                flags = *(u32 *)((u8 *)unit + 0x1A0);
                if (!(flags & 0x800)) {
                    *(u32 *)((u8 *)unit + 0x1A0) = flags | 0x800;
                    fn_8002297C(lbl_802CA518);
                    fn_800AACDC(unit);
                    fn_801475FC(lbl_80274508 + 0x211, 0x64);
                }
            } else {
                goto block_65;
            }
        } else if (buttons & 0x200) {
            if ((unit != NULL) && (fn_80015648(0, *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) == 1)) {
                flags = *(u32 *)((u8 *)unit + 0x1A0);
                if (flags & 0x800) {
                    *(u32 *)((u8 *)unit + 0x1A0) = flags & ~0x800;
                    fn_8002297C(lbl_802CA518);
                    fn_800AACDC(unit);
                    fn_801475FC(lbl_80274508 + 0x22C, 0x64);
                }
            } else if (unit == NULL) {
                flag = 0;
                iter = *(void **)(lbl_802CA264 + 0xC);
                while (iter != NULL) {
                    flags = *(u32 *)((u8 *)iter + 0x1A0);
                    if (flags & 0x800) {
                        flag = 1;
                        *(u32 *)((u8 *)iter + 0x1A0) = flags & ~0x800;
                    }
                    iter = *(void **)((u8 *)iter + 0x184);
                }
                if (flag != 0) {
                    fn_801475FC(lbl_80274508 + 0x22C, 0x64);
                    fn_8002297C(lbl_802CA518);
                }
            }
        } else {
            if (buttons & 0x10) {
            block_65:
                if (lbl_80367110 & 0x400) {
                    fn_8004A1F0();
                }
                fn_801475FC(lbl_80274508 + 0x247, 0x64);
                fn_8000C070(self, 1);
                return;
            }
            if (buttons & 0x1000) {
                if (lbl_80367110 & 0x400) {
                    fn_8004A1F0();
                }
                *((u8 *)self + 0x48) = 4;
                fn_8000C070(self, 9);
            }
        }
    }
}

void fn_80118B7C(void *arg0) {
    void fn_80018AE4(void);
    void fn_800A8478(void);
    void fn_8018DB4C(void);
    void fn_8000C060(void *, void *);
    void fn_8000C070(void *, s32);
    void *fn_8013FF94(void *, s32, s32);
    void fn_80140210(void *, void *, s32);
    extern u8 lbl_803671C0;
    void *temp_r31;

    while (lbl_803671C0 != 0) {
        fn_80018AE4();
    }
    fn_800A8478();
    fn_8018DB4C();
    temp_r31 = *(void **)((u8 *)arg0 + 0x44);
    fn_8000C060(temp_r31, 0);
    fn_8000C070(temp_r31, 0);
    if (fn_8013FF94(arg0, 0x40, 0) != NULL) {
        fn_80140210(arg0, fn_8013FF94(arg0, 0x40, 0), 1);
    }
}

void fn_80118C1C(void) {
    void fn_800A6AE4(void);
    void fn_8002297C(void *);
    void fn_800C1060(s32);
    extern u8 lbl_802CA518[];
    extern u8 lbl_80367289;
    u8 flag;
    u8 temp;

    fn_800A6AE4();
    fn_8002297C(lbl_802CA518);
    flag = 1;
    temp = (u8)(lbl_80367289 - 1);
    if (((u32)((flag | ~temp) - ((u32)(flag - temp) >> 1)) >> 31) == 0) {
        flag = 0;
    }
    if (flag) {
        fn_800C1060(0);
    }
}

#pragma use_lmw_stmw on
void fn_80118C84(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void *fn_8000CAA0(void *, void *);
    void *fn_8000CAF0(void *, s32);
    u8 fn_80015648(s32, u8);
    void fn_8002297C(u8 *);
    void fn_8002833C(u8 *, void *);
    void *fn_8002F658(void *, s32);
    void fn_8004A1F0(void);
    void fn_8004A224(void);
    void fn_800A6AAC(void);
    void fn_800A8400(void);
    void *fn_800AA794(void);
    void fn_800AACDC(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801475FC(u8 *, s32);
    void fn_8014CBD8(void *, f32, f32);
    void fn_801658DC(void *, u8 *);
    extern u8 lbl_80274508[];
    extern u8 lbl_8028F7B8[];
    extern u8 lbl_802B14E4[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802EF4E0[];
    extern s32 lbl_80330708[];
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    extern void *lbl_803679F0;
    extern s8 lbl_803679F4;
    void *self;
    void *unit;
    void *other;
    void *unit2;
    void *iter;
    void *p;
    void *node;
    void *ret;
    u8 *map;
    u8 *ef;
    s8 cur_y;
    s8 cur_x;
    s32 sel_x;
    s32 sel_y;
    s32 idx;
    u8 id;
    u8 found;
    u8 flag;
    u8 skip;
    u32 buttons;
    u32 flags;
    s32 i;

    self = arg0;
    unit = fn_800AA794();
    ef = lbl_802EF4C8;
    cur_y = (s8)ef[0xE];
    sel_x = (s32)*(f32 *)((u8 *)lbl_80330708 + 0x524);
    sel_y = (s32)*(f32 *)((u8 *)lbl_80330708 + 0x528);
    cur_x = (s8)ef[0xD];
    map = lbl_802CA518 + 0xD;
    idx = cur_x + (cur_y << 6);
    id = map[idx];
    if (id != 0) {
        other = &lbl_802B14E4[(id - 1) * 0x280];
    } else {
        other = NULL;
    }
    if (unit != NULL) {
        if (fn_80015648(0, *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) == 1) {
            if (!(*(u32 *)((u8 *)unit + 0x1A0) & 0x800)) {
                ret = fn_8013FF94(self, -0x1000, 0);
                if (ret != NULL)
                    fn_801658DC(ret, lbl_80274508 + 0x1A7);
            } else {
                ret = fn_8013FF94(self, -0x1000, 0);
                if (ret != NULL)
                    fn_801658DC(ret, lbl_80274508 + 0x1B9);
            }
        } else if (other != unit) {
            found = 0;
            id = map[(s8)sel_x + ((s8)sel_y << 6)];
            if (id != 0) {
                p = &lbl_802B14E4[(id - 1) * 0x280];
                if (*(u32 *)((u8 *)p + 0x1A0) & 0x20000) {
                    found = 0;
                } else {
                    goto search1;
                }
            } else {
            search1:
                for (i = 0; i < *(s32 *)lbl_802EF4E0; i++) {
                    p = fn_8002F658(lbl_802EF4E0, i);
                    if ((s8)sel_x == (s8)*(u8 *)p && (s8)sel_y == (s8)*((u8 *)p + 1)) {
                        found = 1;
                        break;
                    }
                }
            }
            if (found != 0) {
                ret = fn_8013FF94(self, -0x1000, 0);
                if (ret != NULL)
                    fn_801658DC(ret, lbl_80274508 + 0x257);
            } else {
                ret = fn_8013FF94(self, -0x1000, 0);
                if (ret != NULL)
                    fn_801658DC(ret, lbl_80274508 + 0x269);
            }
        } else {
            ret = fn_8013FF94(self, -0x1000, 0);
            if (ret != NULL)
                fn_801658DC(ret, lbl_80274508 + 0x27B);
        }
    } else {
        flag = 0;
        iter = *(void **)(lbl_802CA264 + 0xC);
        while (iter != NULL) {
            flags = *(u32 *)((u8 *)iter + 0x1A0);
            iter = *(void **)((u8 *)iter + 0x184);
            if (flags & 0x800) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            ret = fn_8013FF94(self, -0x1000, 0);
            if (ret != NULL)
                fn_801658DC(ret, lbl_80274508 + 0x28D);
        } else {
            ret = fn_8013FF94(self, -0x1000, 0);
            if (ret != NULL)
                fn_801658DC(ret, lbl_80274508 + 0x1EF);
        }
    }
    if (lbl_803679F4 == 0) {
        lbl_803679F0 = NULL;
        lbl_803679F4 = 1;
    }
    unit2 = fn_800AA794();
    if (unit2 == NULL && (lbl_80367110 & 0x400))
        fn_8004A1F0();
    skip = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20))
        skip = 1;
    if ((skip != 0) ||
        ((!(*(u32 *)((u8 *)lbl_80367240 + 4) & 0xF)) &&
         ((s8)(*(u8 **)lbl_80367240)[2] == 0) &&
         ((s8)(*(u8 **)lbl_80367240)[3] == 0))) {
        if ((lbl_803679F0 != unit2) || !(lbl_80367110 & 0x400)) {
            lbl_803679F0 = unit2;
            if ((unit2 == NULL) || (*(u8 *)(*(u8 **)((u8 *)unit2 + 0x190) + 8) == 0)) {
                if (lbl_80367110 & 0x400)
                    fn_8004A1F0();
            } else {
                fn_800AACDC(unit2);
                fn_8004A224();
            }
        }
    }
    skip = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20))
        skip = 1;
    if (skip != 0)
        return;
    buttons = *(u32 *)((u8 *)lbl_80367240 + 4);
    buttons = buttons & (*(u32 *)((u8 *)lbl_80367240 + 8) ^ buttons);
    if ((unit != NULL) && (buttons & 0x800)) {
        fn_800A8400();
        if (lbl_80367110 & 0x400)
            fn_8004A1F0();
        fn_8002833C(lbl_802EF4C8, unit);
        ef[0xD] = (u8)cur_x;
        ef[0xE] = (u8)cur_y;
        fn_801475FC(lbl_80274508 + 0x201, 0x64);
        *((u8 *)self + 0x48) = 6;
        fn_8000C070(self, 0x11);
        return;
    }
    if (buttons & 0x100) {
        if (unit != NULL) {
            found = 0;
            id = map[(s8)sel_x + ((s8)sel_y << 6)];
            if (id != 0) {
                p = &lbl_802B14E4[(id - 1) * 0x280];
                if (*(u32 *)((u8 *)p + 0x1A0) & 0x20000) {
                    found = 0;
                } else {
                    goto search2;
                }
            } else {
            search2:
                for (i = 0; i < *(s32 *)lbl_802EF4E0; i++) {
                    p = fn_8002F658(lbl_802EF4E0, i);
                    if ((s8)sel_x == (s8)*(u8 *)p && (s8)sel_y == (s8)*((u8 *)p + 1)) {
                        found = 1;
                        break;
                    }
                }
            }
            if (found == 0) {
                if (fn_80015648(0, *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) == 1) {
                    flags = *(u32 *)((u8 *)unit + 0x1A0);
                    if (!(flags & 0x800)) {
                        *(u32 *)((u8 *)unit + 0x1A0) = flags | 0x800;
                        fn_8002297C(lbl_802CA518);
                        fn_800AACDC(unit);
                        fn_801475FC(lbl_80274508 + 0x211, 0x64);
                    }
                } else {
                    fn_801475FC(lbl_80274508 + 0x29F, 0x64);
                }
                return;
            }
        }
        if ((s8)sel_x != cur_x || (s8)sel_y != cur_y) {
            found = 0;
            id = map[(s8)sel_x + ((s8)sel_y << 6)];
            if (id != 0) {
                p = &lbl_802B14E4[(id - 1) * 0x280];
                if (*(u32 *)((u8 *)p + 0x1A0) & 0x20000) {
                    found = 0;
                } else {
                    goto search3;
                }
            } else {
            search3:
                for (i = 0; i < *(s32 *)lbl_802EF4E0; i++) {
                    p = fn_8002F658(lbl_802EF4E0, i);
                    if ((s8)sel_x == (s8)*(u8 *)p && (s8)sel_y == (s8)*((u8 *)p + 1)) {
                        found = 1;
                        break;
                    }
                }
            }
            if (found != 0) {
                fn_800A6AAC();
                if (lbl_80367110 & 0x400)
                    fn_8004A1F0();
                id = map[idx];
                if (id != 0)
                    other = &lbl_802B14E4[(id - 1) * 0x280];
                else
                    other = NULL;
                if (other != NULL) {
                    if (self != NULL)
                        node = fn_8000CAA0(lbl_8028F7B8, self);
                    else
                        node = fn_8000CAF0(lbl_8028F7B8, 4);
                    *(void **)((u8 *)node + 0x30) = other;
                    *((u8 *)node + 0x58) = (u8)sel_x;
                    *((u8 *)node + 0x59) = (u8)sel_y;
                }
                if (unit != NULL) {
                    if (self != NULL)
                        node = fn_8000CAA0(lbl_8028F7B8, self);
                    else
                        node = fn_8000CAF0(lbl_8028F7B8, 4);
                    *(void **)((u8 *)node + 0x30) = unit;
                    *((u8 *)node + 0x58) = (u8)cur_x;
                    *((u8 *)node + 0x59) = (u8)cur_y;
                }
                fn_801475FC(lbl_80274508 + 0x2AD, 0x64);
                fn_8000C188(self);
                return;
            }
        }
        goto cancel;
    } else if (buttons & 0x200) {
        if (unit != NULL) {
            found = 0;
            id = map[(s8)sel_x + ((s8)sel_y << 6)];
            if (id != 0) {
                p = &lbl_802B14E4[(id - 1) * 0x280];
                if (*(u32 *)((u8 *)p + 0x1A0) & 0x20000) {
                    found = 0;
                } else {
                    goto search4;
                }
            } else {
            search4:
                for (i = 0; i < *(s32 *)lbl_802EF4E0; i++) {
                    p = fn_8002F658(lbl_802EF4E0, i);
                    if ((s8)sel_x == (s8)*(u8 *)p && (s8)sel_y == (s8)*((u8 *)p + 1)) {
                        found = 1;
                        break;
                    }
                }
            }
            if (found == 0 && fn_80015648(0, *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) == 1) {
                flags = *(u32 *)((u8 *)unit + 0x1A0);
                if (flags & 0x800) {
                    *(u32 *)((u8 *)unit + 0x1A0) = flags & ~0x800;
                    fn_8002297C(lbl_802CA518);
                    fn_800AACDC(unit);
                    fn_801475FC(lbl_80274508 + 0x22C, 0x64);
                }
                return;
            }
        }
        if (unit == NULL) {
            flag = 0;
            iter = *(void **)(lbl_802CA264 + 0xC);
            while (iter != NULL) {
                flags = *(u32 *)((u8 *)iter + 0x1A0);
                if (flags & 0x800) {
                    flag = 1;
                    *(u32 *)((u8 *)iter + 0x1A0) = flags & ~0x800;
                }
                iter = *(void **)((u8 *)iter + 0x184);
            }
            if (flag != 0) {
                fn_801475FC(lbl_80274508 + 0x22C, 0x64);
                fn_8002297C(lbl_802CA518);
                return;
            }
        }
        if (lbl_80367110 & 0x400)
            fn_8004A1F0();
        fn_801475FC(lbl_80274508 + 0x247, 0x64);
        fn_8014CBD8(lbl_80330708, (f32)(s8)ef[0xD], (f32)(s8)ef[0xE]);
        fn_8000C070(self, 2);
        return;
    } else {
        if (buttons & 0x10) {
        cancel:
            if (lbl_80367110 & 0x400)
                fn_8004A1F0();
            fn_801475FC(lbl_80274508 + 0x247, 0x64);
            fn_8014CBD8(lbl_80330708, (f32)(s8)ef[0xD], (f32)(s8)ef[0xE]);
            fn_8000C070(self, 1);
            return;
        }
        if (buttons & 0x1000) {
            if (lbl_80367110 & 0x400)
                fn_8004A1F0();
            *((u8 *)self + 0x48) = 6;
            fn_8000C070(self, 9);
        }
    }
}
#pragma use_lmw_stmw reset

void fn_801196A8(void *arg0) {
    void fn_800A8478(void);
    void fn_8018DB4C(void);
    void fn_8000C060(void *, void *);
    void fn_8000C070(void *, s32);
    void *fn_8013FF94(void *, s32, s32);
    void fn_80140210(void *, void *, s32);
    void fn_80119738(void);
    void *temp_r31;

    fn_800A8478();
    fn_8018DB4C();
    temp_r31 = *(void **)((u8 *)arg0 + 0x44);
    fn_8000C060(temp_r31, fn_80119738);
    fn_8000C070(temp_r31, 1);
    if (fn_8013FF94(arg0, 0x40, 0) != NULL) {
        fn_80140210(arg0, fn_8013FF94(arg0, 0x40, 0), 1);
    }
}

void fn_80119738(void *arg0) {
    void fn_8006785C(s32, void (*)(void *), void *);
    void fn_80119768(void *);
    fn_8006785C(2, fn_80119768, arg0);
}

#pragma use_lmw_stmw on
void fn_80119768(void) {
    void *fn_8002F658(s32 *, s32);
    M2C_UNK fn_8004A864(s32 *);
    M2C_UNK fn_8004AAA4();
    M2C_UNK fn_802245D8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    extern s32 lbl_8036A1E0;
    extern s32 lbl_8036A1E4;
    s32 spC;
    s32 sp8;
    s8 t29;
    s8 t28;
    s32 i;
    u8 b0;
    u8 b1;
    u8 id;
    void *unit;

    fn_8004AAA4();
    i = 0;
    t28 = (s8) lbl_802EF4C8[0xD];
    t29 = (s8) lbl_802EF4C8[0xE];
    for (i = 0; i < *(s32 *) lbl_802EF4E0; i++) {
        b0 = *(u8 *) fn_8002F658((s32 *) lbl_802EF4E0, i);
        b1 = *((u8 *) fn_8002F658((s32 *) lbl_802EF4E0, i) + 1);
        id = lbl_802CA518[0xD + (s8) b0 + ((s8) b1 << 6)];
        if (id == 0) {
            goto sound;
        }
        if (id != 0) {
            unit = &lbl_802B14E4[(id - 1) * 0x280];
        } else {
            unit = NULL;
        }
        if (M2C_FIELD(unit, s32 *, 0x1A0) & 0x20000) {
            continue;
        }
sound:
        if (((s8) b0 != t28) || ((s8) b1 != t29)) {
            spC = lbl_8036A1E0;
            fn_8004A864(&spC);
        } else {
            sp8 = lbl_8036A1E4;
            fn_8004A864(&sp8);
        }
    }
    fn_802245D8(1, 4, 5, 0);
}

void fn_80119884(void *arg0) {
    void *fn_800AA794(void);
    u8 fn_80015648(s32, u8);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801658DC(void *);
    extern s32 lbl_80330708[];
    extern u8 lbl_80274508[];
    extern u8 lbl_803679F4;
    extern void *lbl_803679F0;
    void *unit;
    s32 cx, cy;
    u8 *base;

    unit = fn_800AA794();
    base = (u8 *)lbl_80330708;
    cx = (s32)*(f32 *)(base + 0x524);
    cy = (s32)*(f32 *)(base + 0x528);
    (void)cx; (void)cy;
    if (unit != 0) {
        if (fn_80015648(0, *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) == 1) {
            if (!(*(u32 *)((u8 *)unit + 0x1A0) & 0x800)) {
                if (fn_8013FF94(arg0, -0x1000, 0) != 0)
                    fn_801658DC(lbl_80274508 + 0x1A7);
            } else if (fn_8013FF94(arg0, -0x1000, 0) != 0) {
                fn_801658DC(lbl_80274508 + 0x1B9);
            }
        }
    }
    if ((s8)lbl_803679F4 == 0) {
        lbl_803679F0 = 0;
        lbl_803679F4 = 1;
    }
}

void fn_8011A0CC(void *arg0) {
    void fn_80018AE4(void);
    void fn_800A8478(void);
    void fn_8018DB4C(void);
    void fn_8000C060(void *, void *);
    void fn_8000C070(void *, s32);
    void *fn_8013FF94(void *, s32, s32);
    void fn_80140210(void *, void *, s32);
    void fn_80119738(void);
    extern u8 lbl_803671C0;
    extern s8 lbl_802EF4C8[];
    void *temp_r31;

    while (lbl_803671C0 != 0) {
        fn_80018AE4();
    }
    fn_800A8478();
    fn_8018DB4C();
    temp_r31 = *(void **)((u8 *)arg0 + 0x44);
    fn_8000C060(temp_r31, fn_80119738);
    fn_8000C070(temp_r31, 1);
    if (fn_8013FF94(arg0, 0x40, 0) != NULL) {
        fn_80140210(arg0, fn_8013FF94(arg0, 0x40, 0), 1);
    }
    lbl_802EF4C8[0xD] = -1;
    lbl_802EF4C8[0xE] = -1;
}

#pragma use_lmw_stmw reset
void fn_8011A2FC(s32 arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;
    s32 temp_r31;
    
    // Call fn_8013FF94 with parameters 0x40 and 0
    temp_r3 = fn_8013FF94(0x40, 0);
    
    // Check if return value is zero
    if (temp_r3 == 0) {
        // Call fn_800C42D8 with parameter 0x3C
        temp_r31 = fn_800C42D8(0x3C);
        
        // Check if the return value is not null
        if (temp_r31 != 0) {
            // Setup for structure initialization - load the addresses of our globals
            temp_r4 = (s32)&lbl_8028FDB0;
            temp_r5 = (s32)&lbl_80292230;
            temp_r6 = (s32)&lbl_802921E0;
            
            // Initialize structure fields
            *(u32*)temp_r31 = temp_r4;
            *(u32*)(temp_r31 + 4) = 0;
            *(u32*)(temp_r31 + 0x0) = temp_r5;
            
            *(s16*)(temp_r31 + 8) = -1;
            *(s16*)(temp_r31 + 0xa) = 0;
            *(s16*)(temp_r31 + 0xc) = 0;
            *(s16*)(temp_r31 + 0xe) = 0x260;
            *(s16*)(temp_r31 + 0x10) = 0x1C0;
            *(s16*)(temp_r31 + 0x12) = 0;
            *(s16*)(temp_r31 + 0x14) = 0;
            *(s16*)(temp_r31 + 0x16) = 0x260;
            *(s16*)(temp_r31 + 0x18) = 0x1C0;
            *(s16*)(temp_r31 + 0x1a) = 0;
            *(s16*)(temp_r31 + 0x1c) = 0;
            
            *(u8*)(temp_r31 + 0x1e) = 0xFF;
            *(u8*)(temp_r31 + 0x1f) = 0xFF;
            *(u8*)(temp_r31 + 0x20) = 0xFF;
            *(u8*)(temp_r31 + 0x21) = 0xFF;
            *(s16*)(temp_r31 + 0x22) = 0x316;
            *(s16*)(temp_r31 + 0x24) = 0;
            
            *(f32*)(temp_r31 + 0x28) = 1.0f;
            *(f32*)(temp_r31 + 0x2c) = 1.0f;
            *(f32*)(temp_r31 + 0x30) = 1.0f;
            
            *(u32*)(temp_r31 + 0x34) = 0;
            *(u32*)(temp_r31 + 0x38) = 0;
            
            // Update the base address
            *(u32*)temp_r31 = temp_r6;
            
            // Continue initialization
            *(s16*)(temp_r31 + 8) = 0x40;
            *(u8*)(temp_r31 + 0x24) = 8;
            *(f32*)(temp_r31 + 0x2c) = 0.0f;
            
            // Call fn_801400F4 with parameters
            temp_r5 = *(u32*)(temp_r31 + 0x34);
            temp_r5 = temp_r5 | 0x10;
            *(u32*)(temp_r31 + 0x34) = temp_r5;
            
            fn_801400F4(arg0, (void*)temp_r31, temp_r5);
            fn_80140234(arg0, (void*)temp_r31, 1);
        }
    }
}

void fn_8011A470(s32 arg0) {
    void fn_80018AF4(void);
    void fn_800A8450(void);
    void fn_8011A2FC(s32);
    void fn_8011A4E4(s32);
    u32 fn_8013FF94(s32, s32, s32);
    void fn_801658DC(u32, u8 *);
    extern u8 lbl_803671C0;
    extern u8 lbl_80274508[];
    u32 temp;

    if (lbl_803671C0 == 0) {
        fn_80018AF4();
    }
    fn_800A8450();
    fn_8011A4E4(arg0);
    fn_8011A2FC(arg0);
    temp = fn_8013FF94(arg0, -0x1000, 0);
    if (temp != 0) {
        fn_801658DC(temp, lbl_80274508 + 0x2F5);
    }
}

void fn_8011A4E4(s32 arg0) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_802845E8;
    extern M2C_UNK lbl_80286590;
    extern M2C_UNK lbl_80286664;
    extern M2C_UNK lbl_8028F7EC;
    extern M2C_UNK lbl_8028FA3C;
    extern M2C_UNK lbl_8028FABC;
    extern M2C_UNK lbl_8028FB10;
    extern M2C_UNK lbl_8028FB64;
    extern M2C_UNK lbl_8028FBB8;
    extern M2C_UNK lbl_8028FC0C;
    extern M2C_UNK lbl_8028FC60;
    extern M2C_UNK lbl_8028FCB4;
    extern M2C_UNK lbl_8028FD08;
    extern M2C_UNK lbl_8028FD5C;
    extern M2C_UNK lbl_802EF4C8;
    extern u8 lbl_803679F5;
    extern M2C_UNK *lbl_803679F8;
    extern u8 lbl_803679FC;
    extern M2C_UNK *lbl_80367A00;
    extern u8 lbl_80367A04;
    extern M2C_UNK *lbl_80367A08;
    extern u8 lbl_80367A0C;
    extern M2C_UNK *lbl_80367A10;
    extern u8 lbl_80367A14;
    extern M2C_UNK *lbl_80367A18;
    extern u8 lbl_80367A1C;
    extern M2C_UNK *lbl_80367A20;
    extern u8 lbl_80367A24;
    extern M2C_UNK *lbl_80367A28;
    extern u8 lbl_80367A2C;
    extern M2C_UNK *lbl_80367A30;
    extern u8 lbl_80367A34;
    extern M2C_UNK *lbl_80367A38;
    extern u8 lbl_80367A3C;
    extern M2C_UNK lbl_80367A40;
    if ((s8) lbl_803679F5 == 0) {
        lbl_803679F5 = 1;
        lbl_803679F8 = &lbl_8028FD5C;
    }
    if ((s8) lbl_803679FC == 0) {
        lbl_803679FC = 1;
        lbl_80367A00 = &lbl_8028FD08;
    }
    if ((s8) lbl_80367A04 == 0) {
        lbl_80367A04 = 1;
        lbl_80367A08 = &lbl_8028FCB4;
    }
    if ((s8) lbl_80367A0C == 0) {
        lbl_80367A0C = 1;
        lbl_80367A10 = &lbl_8028FC60;
    }
    if ((s8) lbl_80367A14 == 0) {
        lbl_80367A14 = 1;
        lbl_80367A18 = &lbl_8028FC0C;
    }
    if ((s8) lbl_80367A1C == 0) {
        lbl_80367A1C = 1;
        lbl_80367A20 = &lbl_8028FBB8;
    }
    if ((s8) lbl_80367A24 == 0) {
        lbl_80367A24 = 1;
        lbl_80367A28 = &lbl_8028FB64;
    }
    if ((s8) lbl_80367A2C == 0) {
        lbl_80367A2C = 1;
        lbl_80367A30 = &lbl_8028FB10;
    }
    if ((s8) lbl_80367A34 == 0) {
        lbl_80367A34 = 1;
        lbl_80367A38 = &lbl_8028FABC;
    }
    if ((s8) lbl_80367A3C == 0) {
        M2C_FIELD(&lbl_80367A40, M2C_UNK **, 4) = &lbl_802845E8;
        M2C_FIELD(&lbl_80367A40, M2C_UNK **, 4) = &lbl_80286664;
        M2C_FIELD(&lbl_80367A40, M2C_UNK **, 4) = &lbl_80286590;
        M2C_FIELD(&lbl_80367A40, M2C_UNK **, 0) = &lbl_8028F7EC;
        M2C_FIELD(&lbl_80367A40, M2C_UNK **, 4) = &lbl_8028FA3C;
        lbl_80367A3C = 1;
    }
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0;
    fn_80024398(&lbl_80367A40, arg0, 0);
}

void fn_8011AB38(void *arg0) {
    s32 fn_8003FCCC();
    u8 fn_8005BA10();
    s32 fn_80161FB8();
    M2C_UNK fn_80162054();
    fn_801620AC();
    if (fn_8005BA10() != 0) {
        if (fn_80161FB8() == 0) {
            return;
        }
        fn_80162054();
        fn_801620AC();
        M2C_FIELD((short)arg0, s32 *, 0x40) = fn_8003FCCC();
        fn_8000C188(arg0);
    }
}

void fn_8011AB98(void) {
    M2C_UNK fn_801620AC();
    M2C_UNK fn_8005C8B4();
    M2C_UNK fn_80162018();
    fn_801620AC();
    fn_8005C8B4();
    fn_80162018();
}

void fn_8011ABC0(s32 arg0) {
    void fn_8000E0E4(void *);
    void fn_80024398(void *, s32, s32);
    void *fn_8013BFFC(void);
    extern char lbl_80274508[];
    void *tmp;

    fn_8000E0E4(lbl_80274508 + 0x17c);
    tmp = fn_8013BFFC();
    *((u8 *)tmp + 0x24) = 1;
    fn_80024398(tmp, arg0, 0);
}

s32 fn_8011AC10(void) {
    extern u16 lbl_8028F814[];
    s32 v = fn_8000C0C0(lbl_8028F814);
    return v != 0;
}

void fn_8011AC44(void) {
    u32 fn_8000C0C0(void *);
    void fn_8000C60C(void);
    extern u8 lbl_8028F814[];
    if (fn_8000C0C0(lbl_8028F814) != 0U) {
        fn_8000C60C();
    }
}

void *fn_8011AC78(void *arg0)
{
    extern u8 lbl_8028F814[];
    extern u8 lbl_8028F7D8[];

    extern void *fn_8000CAA0(void *, void *);
    extern void *fn_8000CAF0(void *, void *);
    extern void fn_801403F0(void *);

    u8 *result;

    if (arg0 != 0) {
        result = (u8 *)fn_8000CAA0(lbl_8028F814, arg0);
    } else {
        result = (u8 *)fn_8000CAF0(lbl_8028F814, arg0);
    }

    if (result != 0) {
        fn_801403F0(result);
        *(u32 *)(result + 0x40) = 0;
    }

    fn_8000CAF0(lbl_8028F7D8, result);

    return result;
}

void fn_8011AE2C(void *arg0) {
    M2C_UNK fn_8003816C(s32, u8, u8);
    M2C_UNK fn_80050C90(s32);
    fn_8003816C(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, u8 *, 0x58), M2C_FIELD(arg0, u8 *, 0x59));
    fn_80050C90(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_8011AE6C(void *arg0) {
    f32 fn_80023430(void *, f32, f32);
    extern u8 lbl_802CA518[];
    extern f32 lbl_8036A200;
    extern f32 lbl_8036A1F8;
    extern f64 lbl_8036A208;
    extern f64 lbl_8036A210;
    extern f64 lbl_8036A218;
    extern f32 lbl_80367068[];
    extern f32 lbl_8036A224;
    extern f32 lbl_8036A228;
    extern f32 lbl_8036A220;
    extern f32 lbl_8036A22C;
    extern f32 lbl_8036A230;
    f32 spC;
    f32 sp8;
    f32 c;
    f32 x, y, z;
    f32 x2, y2, z2;
    f32 mx, my, mz;
    f32 dx, dy, dz;
    f32 len;
    f32 len2;
    f32 clamped;
    f32 ratio;
    f32 nx, ny;
    f32 zoff;
    f32 eps;
    f64 g, g2, g3;
    s32 cls;
    s32 word;
    void *p;

    p = *(void **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)arg0 + 0x34) = *(f32 *)((u8 *)p + 4);
    p = *(void **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)arg0 + 0x38) = *(f32 *)((u8 *)p + 8);
    *(f32 *)((u8 *)arg0 + 0x3C) = fn_80023430(lbl_802CA518,
        *(f32 *)((u8 *)arg0 + 0x34), *(f32 *)((u8 *)arg0 + 0x38));
    c = lbl_8036A200;
    *(f32 *)((u8 *)arg0 + 0x4C) = c + (f32)(s8)((u8 *)arg0)[0x58];
    *(f32 *)((u8 *)arg0 + 0x50) = c + (f32)(s8)((u8 *)arg0)[0x59];
    *(f32 *)((u8 *)arg0 + 0x54) = fn_80023430(lbl_802CA518,
        (f32)(s8)((u8 *)arg0)[0x58], (f32)(s8)((u8 *)arg0)[0x59]);
    c = lbl_8036A200;
    y = *(f32 *)((u8 *)arg0 + 0x38);
    y2 = *(f32 *)((u8 *)arg0 + 0x50);
    x = *(f32 *)((u8 *)arg0 + 0x34);
    x2 = *(f32 *)((u8 *)arg0 + 0x4C);
    dy = y2 - y;
    my = y + y2;
    z = *(f32 *)((u8 *)arg0 + 0x3C);
    dx = x2 - x;
    z2 = *(f32 *)((u8 *)arg0 + 0x54);
    dy = dy * dy;
    mx = x + x2;
    dz = z2 - z;
    dx = (dx * dx) + dy;
    mz = z + z2;
    mx = c * mx;
    len = (dz * dz) + dx;
    my = c * my;
    mz = c * mz;
    if (len > lbl_8036A1F8) {
        g = __frsqrte(len);
        g2 = lbl_8036A208 * g * -(((f64)len * (g * g)) - lbl_8036A210);
        g3 = lbl_8036A208 * g2 * -(((f64)len * (g2 * g2)) - lbl_8036A210);
        len = (f32)((f64)len * (lbl_8036A208 * g3 * -(((f64)len * (g3 * g3)) - lbl_8036A210)));
    } else if ((f64)len < lbl_8036A218) {
        len = lbl_80367068[0];
    } else {
        spC = len;
        word = *(s32 *)&spC;
        switch (word & 0x7F800000) {
        case 0x7F800000:
            if (word & 0x7FFFFF) {
                cls = 1;
            } else {
                cls = 2;
            }
            break;
        case 0x0:
            if (word & 0x7FFFFF) {
                cls = 5;
            } else {
                cls = 3;
            }
            break;
        default:
            cls = 4;
            break;
        }
        if (cls == 1) {
            len = lbl_80367068[0];
        }
    }
    eps = lbl_8036A1F8;
    *(s16 *)((u8 *)arg0 + 0x5C) = (s16)(((lbl_8036A220 * (lbl_8036A224 - len)) + (lbl_8036A228 * len)) * lbl_8036A22C);
    *(s16 *)((u8 *)arg0 + 0x5A) = 0;
    dy = *(f32 *)((u8 *)arg0 + 0x50) - my;
    ny = *(f32 *)((u8 *)arg0 + 0x4C) - mx;
    nx = -dy;
    len2 = (nx * nx) + (ny * ny);
    if (len2 > eps) {
        g = __frsqrte(len2);
        g2 = lbl_8036A208 * g * -(((f64)len2 * (g * g)) - lbl_8036A210);
        g3 = lbl_8036A208 * g2 * -(((f64)len2 * (g2 * g2)) - lbl_8036A210);
        len2 = (f32)((f64)len2 * (lbl_8036A208 * g3 * -(((f64)len2 * (g3 * g3)) - lbl_8036A210)));
    } else if ((f64)len2 < lbl_8036A218) {
        len2 = lbl_80367068[0];
    } else {
        sp8 = len2;
        word = *(s32 *)&sp8;
        switch (word & 0x7F800000) {
        case 0x7F800000:
            if (word & 0x7FFFFF) {
                cls = 1;
            } else {
                cls = 2;
            }
            break;
        case 0x0:
            if (word & 0x7FFFFF) {
                cls = 5;
            } else {
                cls = 3;
            }
            break;
        default:
            cls = 4;
            break;
        }
        if (cls == 1) {
            len2 = lbl_80367068[0];
        }
    }
    clamped = len2;
    if (len2 > lbl_8036A230) {
        clamped = lbl_8036A230;
    }
    ratio = clamped / len2;
    nx = nx * ratio;
    ny = ny * ratio;
    zoff = lbl_8036A230;
    zoff = zoff * clamped;
    *(f32 *)((u8 *)arg0 + 0x40) = mx + nx;
    *(f32 *)((u8 *)arg0 + 0x44) = my + ny;
    *(f32 *)((u8 *)arg0 + 0x48) = mz - zoff;
    if (*(s16 *)((u8 *)arg0 + 0x5C) > 0x30) {
        *(s16 *)((u8 *)arg0 + 0x5C) = 0x30;
    }
}

void fn_8011B204(void *arg0) {
    extern f32 lbl_8036A1E8;
    extern f32 lbl_8036A230;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    s16 temp_r4_2;
    void *temp_r4;

    temp_f13 = (f32) M2C_FIELD(arg0, s16 *, 0x5A) / (f32) M2C_FIELD(arg0, s16 *, 0x5C);
    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    temp_f10 = lbl_8036A1E8 - temp_f13;
    temp_f12 = temp_f13 * temp_f13;
    temp_f11 = temp_f10 * temp_f10;
    temp_f10_2 = lbl_8036A230 * temp_f10 * temp_f13;
    M2C_FIELD(temp_r4, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x4C) * temp_f12) + ((M2C_FIELD(arg0, f32 *, 0x34) * temp_f11) + (M2C_FIELD(arg0, f32 *, 0x40) * temp_f10_2)));
    M2C_FIELD(temp_r4, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x50) * temp_f12) + ((M2C_FIELD(arg0, f32 *, 0x38) * temp_f11) + (M2C_FIELD(arg0, f32 *, 0x44) * temp_f10_2)));
    M2C_FIELD(temp_r4, f32 *, 0xC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x54) * temp_f12) + ((M2C_FIELD(arg0, f32 *, 0x3C) * temp_f11) + (M2C_FIELD(arg0, f32 *, 0x48) * temp_f10_2)));
    temp_r4_2 = M2C_FIELD(arg0, s16 *, 0x5A);
    M2C_FIELD(arg0, s16 *, 0x5A) = (s16) (temp_r4_2 + 1);
    if (temp_r4_2 == (s16) M2C_FIELD(arg0, s16 *, 0x5C)) {
        fn_8000C188();
    }
}

void fn_8011B2EC(void) {
    M2C_UNK fn_800F20E0();
    M2C_UNK fn_800F214C();
    fn_800F214C();
    fn_800F20E0();
}

#pragma use_lmw_stmw on
void fn_8011B310(void *arg0) {
    void fn_800F20E0(void);
    void fn_800F214C(void);
    void fn_801475FC(void *, s32);
    void fn_8014CBD8(void *, f32, f32);
    extern s32 lbl_80367110;
    extern s32 *lbl_80367240;
    extern u8 lbl_80274508[];
    register s32 flags;
    register u8 saved_x;
    register u8 saved_y;
    register u8 skip;
    register u8 *node;
    register u8 *base;

    skip = 0;
    base = (u8 *)lbl_80330708;
    saved_x = (u8)(s32)*(f32 *)(base + 0x524);
    saved_y = (u8)(s32)*(f32 *)(base + 0x528);
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        skip = 1;
    }
    if (skip == 0) {
        flags = lbl_80367240[3];
        if (flags & 1) {
            node = *(u8 **)(*(u8 **)((u8 *)arg0 + 0x30) + 4);
            *(void **)((u8 *)arg0 + 0x30) = node;
            fn_8014CBD8(lbl_80330708, (f32)(s8)node[0], (f32)(s8)node[1]);
        }
        if (flags & 8) {
            node = *(u8 **)(*(u8 **)((u8 *)arg0 + 0x30) + 0xC);
            *(void **)((u8 *)arg0 + 0x30) = node;
            fn_8014CBD8(lbl_80330708, (f32)(s8)node[0], (f32)(s8)node[1]);
        }
        if (flags & 2) {
            node = *(u8 **)(*(u8 **)((u8 *)arg0 + 0x30) + 8);
            *(void **)((u8 *)arg0 + 0x30) = node;
            fn_8014CBD8(lbl_80330708, (f32)(s8)node[0], (f32)(s8)node[1]);
        }
        if (flags & 4) {
            node = *(u8 **)(*(u8 **)((u8 *)arg0 + 0x30) + 0x10);
            *(void **)((u8 *)arg0 + 0x30) = node;
            fn_8014CBD8(lbl_80330708, (f32)(s8)node[0], (f32)(s8)node[1]);
        }
        if ((flags & 0xF) == 0) {
            fn_800F214C();
        }
        if ((s32)saved_x != (s8)(s32)*(f32 *)(base + 0x524) ||
            (s32)saved_y != (s8)(s32)*(f32 *)(base + 0x528)) {
            fn_801475FC(lbl_80274508 + 0x307, 0x64);
        }
    }
    fn_800F20E0();
}
#pragma use_lmw_stmw reset

void fn_8011B570(void) {

}

void fn_8011B574(void) {

}

s32 fn_8011B578(void) {
    return 0xB0;
}

#pragma cplusplus on
extern "C" void fn_8011B580(void *arg0, void *arg1) {
    void fn_8008C1D8(s32, s32, s32, s32, s32);
    struct Obj {
        u8 pad[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual s16 v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
    };
    s8 temp_r31;
    void *r30;

    r30 = arg1;
    temp_r31 = *(u8 *)((u8 *)arg1 + 0x60);
    ((Obj *)arg0)->v29();
    fn_8008C1D8(0, 0, 0, temp_r31 * ((Obj *)*(void **)((u8 *)r30 + 0x3C))->v20() + 0x20, 2);
}
#pragma cplusplus reset
void fn_8011B5FC(void *arg0, void *arg1) {
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 fn_800102BC(M2C_UNK, f32, f32);
    M2C_UNK fn_80071D28();
    M2C_UNK fn_8008AB7C(s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern f32 lbl_8036A1E8;
    extern f32 lbl_8036A234;
    extern f32 lbl_8036A238;
    extern f32 lbl_8036A23C;
    f32 temp_f2;
    s16 temp_r31;
    s32 temp_r29;
    s32 temp_r30;

    fn_80071D28();
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(void *, void *), 0x7C)(arg0, arg1);
    fn_8000A258();
    fn_80009C0C(lbl_8036A234);
    fn_8000A248();
    temp_f2 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x50)(arg0);
    temp_r29 = (s32) (lbl_8036A238 * temp_f2);
    temp_r30 = fn_800102BC(-1, lbl_8036A1E8, temp_f2) >> 1;
    temp_r31 = M2C_FIELD(arg1, s16 *, 0x3A);
    fn_8008AB7C(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x50)(arg0) >> 1, temp_r31 + temp_r30, temp_r29, 0x17, 0xA, 0x28, 1);
    fn_8000A258();
    fn_80009C0C(lbl_8036A23C);
    fn_8000A248();
}

#pragma cplusplus on
extern "C" s16 fn_8011B710(void *arg0) {
    struct Obj {
        u8 pad[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual s16 v18() = 0;
    };
    s16 temp = ((Obj *)arg0)->v18();
    return (s16)((0x260 - temp) >> 1);
}
#pragma cplusplus reset
s32 fn_8011B74C(void) {
    return 0x40;
}

extern u8 lbl_80330D68[];
s32 fn_8011B754(void) {
    u8 fn_80166D8C(void *);

    return fn_80166D8C(lbl_80330D68) ? 0x40 : 0x10;
}

#pragma cplusplus on
extern "C" void *fn_8000B908(u8);
extern "C" u8 fn_80166D8C(void *);
extern "C" s32 fn_8011B78C(void *arg0, void *arg1) {
    extern void *lbl_80367240;
    extern u8 lbl_802EF4C8[];
    struct Handler {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual s32 OnA(void *, void *) = 0;
        virtual s32 OnL(void *, void *) = 0;
        virtual s32 OnZ(void *, void *) = 0;
        virtual void v12() = 0;
        virtual s32 OnDefault(void *, void *) = 0;
    };
    struct Menu {
        u8 pad0[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual s32 OnB(void *, void *) = 0;
        virtual s32 OnR(void *, void *) = 0;
    };
    u32 buttons;
    void *unit;
    u8 flag;

    unit = fn_8000B908(M2C_FIELD(arg1, u8 *, (s8) M2C_FIELD(arg1, u8 *, 0x62) + 0x40));
    flag = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        flag = 1;
    }
    if (flag) {
        return M2C_FIELD(unit, Handler **, 0x34)->OnDefault(arg1, unit);
    }
    buttons = M2C_FIELD(lbl_80367240, u32 *, 4) & (M2C_FIELD(lbl_80367240, u32 *, 8) ^ M2C_FIELD(lbl_80367240, u32 *, 4));
    lbl_80367A48 = M2C_FIELD(unit, u8 *, 0x3A) + 0x80;
    if ((buttons & 0x100) && !fn_80166D8C(lbl_80330D68)) {
        return M2C_FIELD(unit, Handler **, 0x34)->OnA(arg1, unit);
    }
    if (buttons & 0x200) {
        return M2C_FIELD(arg1, Menu **, 0x3C)->OnB(arg1, unit);
    }
    if (buttons & 0x400) {
        return M2C_FIELD(unit, Handler **, 0x34)->OnL(arg1, unit);
    }
    if (buttons & 0x800) {
        return M2C_FIELD(arg1, Menu **, 0x3C)->OnR(arg1, unit);
    }
    if (buttons & 0x10) {
        return M2C_FIELD(unit, Handler **, 0x34)->OnZ(arg1, unit);
    }
    if ((buttons & 0x1000) && !fn_80166D8C(lbl_80330D68)) {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x18), u8 *, 0x48) = 1;
        lbl_802EF4C8[8] = 0x88;
        return 5;
    }
    return M2C_FIELD(unit, Handler **, 0x34)->OnDefault(arg1, unit);
}
#pragma cplusplus reset
void fn_8011B978(void) {
    extern u16 lbl_80274508[];
    fn_8000E0E4((u8 *)lbl_80274508 + 0x357);
}

void *fn_8011B9A4(void) {
    extern u16 lbl_80274508[];
    return &lbl_80274508[0x364 / sizeof(u16)];
}

u8 fn_8011B9B4(void) {
    extern u8 lbl_80367A48;
    return (u8) (lbl_80367A48 == 0x88);
}

s32 fn_8011B9C8(s32 unused, u8 *arg1) {
    extern u8 lbl_802EF4C8[24];
    u8 *p;
    u8 *obj;
    obj = *(u8 **)(arg1 + 0x18);
    obj[0x48] = 1;
    p = lbl_802EF4C8;
    p[8] = 0x88;
    return 5;
}

void fn_8011BAF8(void) {
    extern u16 lbl_80274508[];
    fn_8000E0E4((u8 *)lbl_80274508 + 0x385);
}

void *fn_8011BB24(void) {
    extern u16 lbl_80274508[];
    return (u8 *) &lbl_80274508 + 0x38F;
}

u8 fn_8011BB34(void) {
    u8 fn_801E3620(void *);
    extern u8 lbl_80331FB8[];

    if (((u8 *)lbl_80330708)[0x10] > 0x1FU) {
        return 2;
    }
    if (!(lbl_80367110 & 0x10) && fn_801E3620(lbl_80331FB8) == 0) {
        return 2;
    }
    return (u8)(lbl_80367A48 == 0x87);
}

void fn_8011BBA4(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_r3;
    f32 temp_f1;
    s32 *temp_r30;
    s32 *temp_r31;
    
    temp_r3 = arg2;
    if (arg1 < 0) {
        temp_r3 = 0;
    }
    if (temp_r3 >= 0x59) {
        temp_r3 = 0x58;
    }
    
    if ((arg1 == 0) || (arg1 > 8)) {
        arg1 = 1;
    }
    
    if (arg1 <= 0) {
        arg1 = 1;
    }
    
    if (arg1 >= 0x32) {
        arg1 = 0x31;
    }
    
    temp_r31 = (s32*)arg3 + arg1;
    temp_r30 = (s32*)arg3 + arg1;
    
    if (arg0 < 1) {
        return;
    }
    
    while (arg0 != 0) {
        temp_f1 = *(f32*)temp_r31;
        temp_f1 += *(f32*)temp_r30;
        *(f32*)temp_r31 = temp_f1;
        
        if ((*(s32*)temp_r31 < 0x40) && (arg2 == 1)) {
            *(s32*)temp_r31 = 0x40;
        }
        
        arg1--;
        arg0--;
        temp_r31--;
        temp_r30--;
    }
}

void fn_8011BD08(void) {
    extern u8 lbl_80274508[];
    extern void fn_8000E0E4(void *);

    fn_8000E0E4(lbl_80274508 + 0x3BE);
}

void *fn_8011BD34(void) {
    extern u16 lbl_80274508[];
    return (u8 *)lbl_80274508 + 0x3C6;
}

u8 fn_8011BD44(void) {
    extern u8 lbl_80367A48;
    return (u8) (lbl_80367A48 == 0x86);
}

s32 fn_8011BD58(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x86;
    return 5;
}

void fn_8011BD70(void) {
    extern u8 lbl_80274508[];
    fn_8000E0E4(&lbl_80274508[0x3CF]);
}

void *fn_8011BD9C(void) {
    extern u16 lbl_80274508[];
    return (u8 *)lbl_80274508 + 0x3D8;
}

u8 fn_8011BDAC(void) {
    extern u8 lbl_80367A48;
    u32 temp;

    temp = __cntlzw(0x85 - lbl_80367A48);
    return (u8)((temp >> 5) & 0xFF);
}

extern u8 lbl_802EF4C8[24];
s32 fn_8011BDC0(void) {
    lbl_802EF4C8[8] = 0x85;
    return 5;
}

void fn_8011BDD8(void) {
    extern u16 lbl_80274508[];
    fn_8000E0E4((u8 *)lbl_80274508 + 0x3E1);
}

void *fn_8011BE04(void) {
    extern u16 lbl_80274508[];
    return (u8 *)lbl_80274508 + 0x3ED;
}

s32 fn_8011BE14(void) {
    u32 fn_8000D354(void *);
    extern u8 lbl_80274508[];
    extern u8 lbl_80367A48;

    if (fn_8000D354(lbl_80274508 + 0x3f9) == 0) {
        return 3;
    }
    return (u8)(lbl_80367A48 == 0x84);
}

s32 fn_8011BE60(void) {
    lbl_802EF4C8[8] = 0x84;
    return 5;
}

void fn_8011BE78(void) {
    extern u16 lbl_80274508[];
    fn_8000E0E4((u8 *)lbl_80274508 + 0x402);
}

void *fn_8011BEA4(void) {
    extern u16 lbl_80274508[];
    return (u8 *)lbl_80274508 + 0x412;
}

u8 fn_8011BEB4(void) {
    extern u8 lbl_80367A48;
    u32 temp;

    temp = __cntlzw(0x83 - lbl_80367A48);
    return (u8)((temp >> 5) & 0xFF);
}

s32 fn_8011BEC8(void) {
    lbl_802EF4C8[8] = 0x83;
    return 5;
}

void fn_8011BEE0(void) {
    extern u16 lbl_80274508[];
    fn_8000E0E4((u8 *)lbl_80274508 + 0x41D);
}

void *fn_8011BF0C(void) {
    extern u16 lbl_80274508[];
    return (u8 *)lbl_80274508 + 0x429;
}

u8 fn_8011BF1C(void) {
    extern u8 lbl_80367A48;
    u32 temp;

    temp = __cntlzw(0x82 - lbl_80367A48);
    return (u8)((temp >> 5) & 0xFF);
}

s32 fn_8011BF30(void) {
    lbl_802EF4C8[8] = 0x82;
    return 5;
}

void fn_8011BF48(void) {
    extern u16 lbl_80274508[];
    fn_8000E0E4((u8 *)lbl_80274508 + 0x435);
}

void *fn_8011BF74(void) {
    extern u8 lbl_80274508[];
    return &lbl_80274508[0x442];
}

u8 fn_8011BF84(void) {
    extern u8 lbl_80367A48;
    u32 temp;

    temp = __cntlzw(0x81 - lbl_80367A48);
    return (u8)((temp >> 5) & 0xFF);
}

s32 fn_8011BF98(void) {
    *(u8*)((u32)&lbl_802EF4C8 + 8) = 0x81;
    return 5;
}

void fn_8011BFB0(void) {
    extern u16 lbl_80274508[];
    fn_8000E0E4((u8 *)lbl_80274508 + 0x44F);
}

void *fn_8011BFDC(void) {
    extern u16 lbl_80274508[];
    return (u8 *)lbl_80274508 + 0x45C;
}

u8 fn_8011BFEC(void) {
    extern u8 lbl_80367A48;
    u32 temp;

    temp = __cntlzw(0x80 - lbl_80367A48);
    return (u8)((temp >> 5) & 0xFF);
}

s32 fn_8011C000(void) {
    lbl_802EF4C8[8] = 0x80;
    return 5;
}

s32 fn_8011C2B8(void *arg0) {
    void *fn_8002F658(s32 *, s32);
    extern s32 lbl_802EF4E0;
    s16 temp_r4_2;
    s16 var_r30;
    s32 var_r0;
    s32 var_r28;
    s32 var_r8;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r4;
    u8 temp_r6;
    u8 temp_r7;
    u8 var_r0_2;
    void *temp_r3;
    void *var_r29;
    void *var_r3;

    var_r30 = 0x7FFF;
    var_r29 = NULL;
    var_r28 = 0;
loop_16:
    if (var_r28 < (s32) lbl_802EF4E0) {
        temp_r3 = fn_8002F658(&lbl_802EF4E0, var_r28);
        if (arg0 != temp_r3) {
            temp_r6 = M2C_FIELD(temp_r3, u8 *, 1);
            temp_r4 = M2C_FIELD(arg0, u8 *, 1);
            if ((s8) temp_r4 > (s8) temp_r6) {
                var_r8 = (s8) temp_r4 - (s8) temp_r6;
                if (var_r8 < 0) {
                    var_r8 = -var_r8;
                }
                temp_r7 = M2C_FIELD(temp_r3, u8 *, 0);
                temp_r0 = M2C_FIELD(arg0, u8 *, 0);
                var_r0 = (s8) temp_r0 - (s8) temp_r7;
                if (((s8) temp_r0 - (s8) temp_r7) < 0) {
                    var_r0 = -var_r0;
                }
                temp_r4_2 = var_r0 + var_r8;
                if (var_r30 >= temp_r4_2) {
                    if ((var_r29 != NULL) && (var_r30 == temp_r4_2)) {
                        temp_r0_2 = M2C_FIELD(var_r29, u8 *, 1);
                        if ((s8) temp_r0_2 == (s8) temp_r6) {
                            var_r0_2 = (s8) M2C_FIELD(var_r29, u8 *, 0) < (s8) temp_r7;
                        } else {
                            var_r0_2 = (s8) temp_r0_2 < (s8) temp_r6;
                        }
                        if (var_r0_2 != 0) {
                            goto block_14;
                        }
                    } else {
block_14:
                        var_r30 = temp_r4_2;
                        var_r29 = temp_r3;
                    }
                }
            }
        }
        var_r28 += 1;
        goto loop_16;
    }
    if (var_r29 != NULL) {
        var_r3 = var_r29;
    } else {
        var_r3 = arg0;
    }
    M2C_FIELD(arg0, void **, 0xC) = var_r3;
    return var_r29 != NULL;
}

s32 fn_8011C404(void *arg0) {
    void *fn_8002F658(s32 *, s32);
    extern u16 lbl_802EF4E0[1004];
    s16 temp_r4;
    s16 var_r30;
    s32 var_r0;
    s32 var_r28;
    s32 var_r5;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r6;
    u8 temp_r7;
    u8 temp_r8;
    u8 var_r0_2;
    void *temp_r3;
    void *var_r29;
    void *var_r3;

    var_r30 = 0x7FFF;
    var_r29 = NULL;
    var_r28 = 0;
loop_16:
    if (var_r28 < (s32) lbl_802EF4E0[0]) {
        temp_r3 = fn_8002F658((s32 *)lbl_802EF4E0, var_r28);
        if (arg0 != temp_r3) {
            temp_r7 = M2C_FIELD(temp_r3, u8 *, 0);
            temp_r8 = M2C_FIELD(arg0, u8 *, 0);
            if ((s8) temp_r8 > (s8) temp_r7) {
                temp_r6 = M2C_FIELD(temp_r3, u8 *, 1);
                temp_r0 = M2C_FIELD(arg0, u8 *, 1);
                var_r5 = (s8) temp_r0 - (s8) temp_r6;
                if (((s8) temp_r0 - (s8) temp_r6) < 0) {
                    var_r5 = -var_r5;
                }
                var_r0 = (s8) temp_r8 - (s8) temp_r7;
                if (var_r0 < 0) {
                    var_r0 = -var_r0;
                }
                temp_r4 = var_r0 + var_r5;
                if (var_r30 >= temp_r4) {
                    if ((var_r29 != NULL) && (var_r30 == temp_r4)) {
                        temp_r0_2 = M2C_FIELD(var_r29, u8 *, 0);
                        if ((s8) temp_r0_2 == (s8) temp_r7) {
                            var_r0_2 = (s8) temp_r6 < (s8) M2C_FIELD(var_r29, u8 *, 1);
                        } else {
                            var_r0_2 = (s8) temp_r0_2 < (s8) temp_r7;
                        }
                        if (var_r0_2 != 0) {
                            goto block_14;
                        }
                    } else {
block_14:
                        var_r30 = temp_r4;
                        var_r29 = temp_r3;
                    }
                }
            }
        }
        var_r28 += 1;
        goto loop_16;
    }
    if (var_r29 != NULL) {
        var_r3 = var_r29;
    } else {
        var_r3 = arg0;
    }
    M2C_FIELD(arg0, void **, 4) = var_r3;
    return var_r29 != NULL;
}

void *fn_8011C558(void *arg0, s16 arg1) {
    void fn_800C428C(void *);

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80292230;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_8028FDB0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_8011C5B4(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367A50;
    fn_800D758C(lbl_80367A50);
    return 0;
}

s32 fn_8011C5DC(void)
{
    extern u8 *lbl_80367A50;

    extern void fn_800D758C(void *);
    extern s32 fn_8011C9E4(void *);
    extern void fn_800DA894(s32, s32, s32);

    u8 *obj;
    s32 value1;
    s32 value2;
    s32 value3;

    fn_800D758C(lbl_80367A50);

    obj = lbl_80367A50;
    value3 = fn_8011C9E4(*(void **)(obj + 0x42C));

    obj = lbl_80367A50;
    value2 = fn_8011C9E4(*(void **)(obj + 0x428));

    obj = lbl_80367A50;
    value1 = fn_8011C9E4(*(void **)(obj + 0x424));

    fn_800DA894(value1, value2, value3);

    return 0;
}

void fn_8011C64C(void *arg0, s32 arg1) {
    void fn_8011CAAC(s32, s32, s32);
    fn_8011CAAC(*(s32 *)((u8 *)arg0 + 0x428), arg1, 0);
}

void fn_8011C674(void *arg0, s32 arg1) {
    void fn_8011CAAC(s32, s32, s32);
    fn_8011CAAC(*(s32 *)((u8 *)arg0 + 0x424), arg1, 0);
}

void *fn_8011C69C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void fn_800CB90C(void *, void *, char *);
    void *fn_800D75FC(void *, void *);
    void fn_800D764C(void *, s32, s32, s32, void *, void *);
    void fn_800E3F54(void *);
    extern char lbl_802749D8[];
    extern u8 lbl_8028FDC0[];
    extern void fn_8011C5DC(void);
    String sp78;
    String sp6C;
    String sp60;
    String sp54;
    String sp48;
    String sp3C;
    String sp30;
    String sp24;
    void *sp20;
    void *sp1C;
    void *sp18;
    void *sp14;
    void *sp10;
    void *spC;
    void *sp8;
    void *temp;
    void *self;

    self = arg0;
    fn_800C9ABC(&sp78, lbl_802749D8, &sp20);
    fn_800CB90C(&sp6C, &sp78, lbl_802749D8 + 7);
    fn_800C9ABC(&sp60, lbl_802749D8 + 0x11, &sp1C);
    fn_800D764C(self, arg1, arg2, arg3, &sp6C, &sp60);
    fn_800C9A60(&sp60, -1);
    fn_800C9A60(&sp6C, -1);
    fn_800C9A60(&sp78, -1);
    *(void **)((u8 *)self + 0xC) = lbl_8028FDC0;
    fn_800C9ABC(&sp54, lbl_802749D8 + 0x17, &sp18);
    *(void **)((u8 *)self + 0x424) = fn_800D75FC(self, &sp54);
    fn_800C9A60(&sp54, -1);
    fn_800C9ABC(&sp48, lbl_802749D8 + 0x22, &sp14);
    *(void **)((u8 *)self + 0x428) = fn_800D75FC(self, &sp48);
    fn_800C9A60(&sp48, -1);
    fn_800C9ABC(&sp3C, lbl_802749D8 + 0x29, &sp10);
    *(void **)((u8 *)self + 0x42C) = fn_800D75FC(self, &sp3C);
    fn_800C9A60(&sp3C, -1);
    fn_800C9ABC(&sp30, lbl_802749D8 + 0x30, &spC);
    temp = fn_800D75FC(self, &sp30);
    *(void **)((u8 *)self + 0x430) = temp;
    *(void **)((u8 *)self + 0x418) = temp;
    fn_800C9A60(&sp30, -1);
    fn_800C9ABC(&sp24, lbl_802749D8 + 0x36, &sp8);
    temp = fn_800D75FC(self, &sp24);
    *(void **)((u8 *)self + 0x434) = temp;
    *(void **)((u8 *)self + 0x41C) = temp;
    fn_800C9A60(&sp24, -1);
    temp = *(void **)((u8 *)self + 0x430);
    *(void **)((u8 *)temp + 0xA4) = (void *)fn_8011C5DC;
    temp = *(void **)((u8 *)self + 0x434);
    *(void **)((u8 *)temp + 0xA4) = (void *)fn_8011C5B4;
    *(void **)((u8 *)self + 0x14) = *(void **)((u8 *)self + 0x424);
    *(void **)((u8 *)self + 0x54) = *(void **)((u8 *)self + 0x428);
    *(void **)((u8 *)self + 0x94) = *(void **)((u8 *)self + 0x42C);
    *(void **)((u8 *)self + 0xD4) = *(void **)((u8 *)self + 0x430);
    *(void **)((u8 *)self + 0x414) = *(void **)((u8 *)self + 0x424);
    fn_800E3F54(*(void **)((u8 *)self + 0x424));
    return self;
}

void *fn_8011C984(void *arg0, u32 arg1) {
    u32 count;
    void **array;

    count = *(u32 *)((u8 *)arg0 + 0xBC);

    if (arg1 < count) {
        array = *(void ***)((u8 *)arg0 + 0xC0);
        return array[arg1];
    }

    return NULL;
}

void fn_8011C9A8(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    M2C_FIELD(arg0, s32 *, 0xEC) = arg1;
    temp_r6 = M2C_FIELD(arg0, s32 *, 0xF4);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF8);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xEC);
    if (temp_r5 >= (s32) (temp_r6 + temp_r4)) {
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) ((temp_r5 - temp_r4) + 1);
        return;
    }
    if (temp_r5 < temp_r6) {
        M2C_FIELD(arg0, s32 *, 0xF4) = temp_r5;
    }
}

s32 fn_8011C9E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xEC);
}

s32 fn_8011C9EC(s32 arg0) {
    return arg0 + 0xAC;
}

M2C_UNK *fn_8011C9F4(void *arg0) {
    extern u8 lbl_80274A88[];
    u32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 *, 0xEC);
    if (temp_r4 < (u32) M2C_FIELD(arg0, u32 *, 0xB0)) {
        return (M2C_UNK *)fn_800C93EC((void *)(M2C_FIELD(arg0, s32 *, 0xB4) + (temp_r4 * 0xC)));
    }
    return (M2C_UNK *)lbl_80274A88;
}

extern void fn_800CA91C(void *arg0);
extern void fn_800DD598(s32 arg0, s32 arg1, u8 *arg2);
#pragma global_optimizer off
void fn_8011CA3C(void *arg0, void *arg1) {
    void fn_800CA91C(void *);
    void fn_800DD598(void *, void *, void *, u8 *);
    u8 sp8;

    fn_800CA91C((char *)arg0 + 0xAC);
    *(s32 *)((char *)arg0 + 0xBC) = 0;
    if ((void *)((char *)arg0 + 0xAC) != arg1) {
        sp8 = *(u8 *)((char *)&sp8 + 4);
        fn_800DD598((char *)arg0 + 0xAC,
                    *(void **)((char *)arg1 + 8),
                    (char *)*(void **)((char *)arg1 + 8) + *(s32 *)((char *)arg1 + 4) * 0xC,
                    &sp8);
    }
}
#pragma global_optimizer on
void fn_8011CAAC(void *arg0, void *arg1, void *arg2)
{
    extern void fn_800CA18C(void *, void *, s32, void *);
    extern void fn_800C9BC4(void *, void *, s32, void *);

    u8 *obj;
    u8 *source;
    u8 *destination;
    void *value;

    obj = (u8 *)arg0;
    value = arg2;

    source = *(u8 **)(obj + 0xB4);
    source += *(s32 *)(obj + 0xB0) * 0xC;

    fn_800CA18C(
        obj + 0xAC,
        source,
        1,
        arg1
    );

    destination = *(u8 **)(obj + 0xC0);
    destination += *(s32 *)(obj + 0xBC) * 4;

    fn_800C9BC4(
        obj + 0xB8,
        destination,
        1,
        &value
    );
}

void fn_8011CB18(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0xC8);
}

void fn_8011CB2C(void *arg0) {
    M2C_UNK (*temp_r12)();

    M2C_FIELD(arg0, s8 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0xC8);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0xFC);
    if (temp_r12 != NULL) {
        temp_r12();
    }
}

void fn_8011CB6C(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r7;
    s32 temp_r5;
    u32 temp_r4;
    u8 var_r6 = 0;

    temp_r7 = *(s32 *)((u8 *)arg0 + 0x48);
    temp_r7 = arg1 - temp_r7;
    temp_r5 = *(s32 *)((u8 *)arg0 + 0x4C);
    temp_r5 = arg2 - temp_r5;
    *(s32 *)((u8 *)arg0 + 0xCC) = 0;
    *(s32 *)((u8 *)arg0 + 0xD0) = *(s32 *)((u8 *)arg0 + 0xC8);
    *(s32 *)((u8 *)arg0 + 0xD4) = *(s32 *)((u8 *)arg0 + 0x60);
    *(s32 *)((u8 *)arg0 + 0xD8) = *(s32 *)((u8 *)arg0 + 0x64);
    if (temp_r7 >= *(s32 *)((u8 *)arg0 + 0xCC) && temp_r7 <= *(s32 *)((u8 *)arg0 + 0xD4) &&
        temp_r5 >= *(s32 *)((u8 *)arg0 + 0xD0) && temp_r5 <= *(s32 *)((u8 *)arg0 + 0xD8)) {
        var_r6 = 1;
    }
    if (var_r6 != 0) {
        *(s32 *)((u8 *)arg0 + 0xEC) = (temp_r5 / 16) - 1;
        temp_r4 = *(u32 *)((u8 *)arg0 + 0xB0);
        if (*(u32 *)((u8 *)arg0 + 0xEC) >= temp_r4) {
            *(s32 *)((u8 *)arg0 + 0xEC) = (s32)(temp_r4 - 1);
        }
    }
}

void fn_8011CC04(u8 *arg0) {
    s32 a;
    s32 b;
    s32 t1;
    s32 t2;
    s32 t3;

    arg0[0xF0] = 1;
    a = *(s32 *)(arg0 + 0xB0);
    b = *(s32 *)(arg0 + 0xF8);
    if (a > b) {
        a = b;
    }
    t1 = a * 0x10;
    t2 = *(s32 *)(arg0 + 0xC8);
    t3 = t1 + 2;
    *(s32 *)(arg0 + 0x64) = t2 + t3;
}

void fn_8011D014(void *arg0) {
    void fn_800E43EC(void *);
    void fn_800E7C88(void *);
    extern void *lbl_80367240;
    void *obj;
    u32 buttons;

    fn_800E43EC(arg0);
    obj = M2C_FIELD(arg0, void **, 0x0);
    buttons = M2C_FIELD(lbl_80367240, u32 *, 0xC);
    if (M2C_FIELD(arg0, u8 *, 0xF0) != 0) {
        if (buttons & 8) {
            M2C_FIELD(arg0, s32 *, 0xEC) -= 1;
        } else if (buttons & 4) {
            M2C_FIELD(arg0, s32 *, 0xEC) += 1;
        } else if (buttons & 1) {
            M2C_FIELD(arg0, s32 *, 0xEC) -= 10;
        } else if (buttons & 2) {
            M2C_FIELD(arg0, s32 *, 0xEC) += 10;
        }
        if (M2C_FIELD(arg0, s32 *, 0xEC) < 0) {
            M2C_FIELD(arg0, s32 *, 0xEC) = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0xEC) >= M2C_FIELD(arg0, s32 *, 0xB0)) {
            M2C_FIELD(arg0, s32 *, 0xEC) = M2C_FIELD(arg0, s32 *, 0xB0) - 1;
        }
        if (M2C_FIELD(arg0, s32 *, 0xEC) >= M2C_FIELD(arg0, s32 *, 0xF4) + M2C_FIELD(arg0, s32 *, 0xF8)) {
            M2C_FIELD(arg0, s32 *, 0xF4) = M2C_FIELD(arg0, s32 *, 0xEC) - M2C_FIELD(arg0, s32 *, 0xF8) + 1;
        } else if (M2C_FIELD(arg0, s32 *, 0xEC) < M2C_FIELD(arg0, s32 *, 0xF4)) {
            M2C_FIELD(arg0, s32 *, 0xF4) = M2C_FIELD(arg0, s32 *, 0xEC);
        }
        fn_800E7C88(obj);
    }
}

void fn_8011D2AC(void *arg0, void *arg1) {
    s32 r30;
    u8 *ptr;
    
    if (arg0 == NULL || arg1 == NULL) {
        return;
    }

    ptr = (u8 *)arg0 + 0x1A4;
    if (*ptr != 0) {
        *ptr = 0;
        r30 = *(s32 *)((u8 *)arg1 + 0x28);
        *(s32 *)((u8 *)arg0 + 0x28) = r30;
    }
}

void fn_8011D428(void *arg0) {
    void *fn_8007C3BC(void *);
    char *fn_802343E0(char *, s32);
    char *fn_80234450(char *, char *);
    void fn_8005C8B4(char *);
    extern u8 lbl_80274BB0[];
    char sp8[0x40];

    fn_80234450(sp8, (char *)lbl_80274BB0 + 0x2F);
    fn_802343E0(sp8, *(s32 *)((char *)fn_8007C3BC((u8 *)arg0 + 0x30) + 8));
    fn_8005C8B4(sp8);
}

u32 fn_8011D484(void) {
    void *fn_8000C0C0(void *);
    extern u8 lbl_8028FE50[];
    void *p;
    u32 v;

    p = fn_8000C0C0(lbl_8028FE50);
    if (p != NULL) {
        v = *(u32 *)((u8 *)p + 0x58);
        if (v != 0U) {
            return v;
        }
    }
    return 0U;
}

void fn_8011D5EC(void) {
    extern u8 lbl_8028FE50[];
    extern u16 lbl_80367A58;
    void *fn_8000C0C0(void *);
    void fn_80120CCC(u16 *);
    void fn_8000C070(void *, s32);
    u8 *obj;

    obj = fn_8000C0C0(lbl_8028FE50);
    fn_80120CCC(&lbl_80367A58);
    *(u32 *)(obj + 0x30) = *(u32 *)(obj + 0x30) + 2;
    lbl_80367A58 &= ~0x10;
    fn_8000C070(obj, 1);
}

extern u16 lbl_80274BB0[];
extern u16 lbl_8032FE04[];
extern u16 lbl_8028FE50[];
void fn_8011D79C(s32 arg0) {
    if (arg0 != 0) {
        u16 *temp_r5 = &lbl_80274BB0[arg0];
        s32 temp_r6 = *temp_r5;
        s32 temp_r7 = *(temp_r5 + 1);
        u16 *temp_r8 = &lbl_80296128[temp_r6];
        s32 temp_r9 = *(temp_r8 + 1);
        
        if (temp_r9 != 0) {
            if (temp_r7 == temp_r9) {
                *(temp_r5 + 2) = *(temp_r8 + 2);
            }
        }
    }
}

void fn_8011D87C(void *arg0)
{
    s32 fn_800056CC(const char *, ...);
    void *fn_8000E0E4(void *);
    void fn_8023440C(void *, const void *, s32);
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, u8);

    void *result;
    u8 *obj;
    u16 flags;

    fn_800056CC((char *)lbl_80274BB0 + 0x35, arg0);

    result = fn_8000E0E4(arg0);

    fn_8023440C(lbl_8032FE04, arg0, 0x1E);

    obj = (u8 *)fn_8000C0C0(lbl_8028FE50);
    *(void **)(obj + 0x30) = result;

    flags = lbl_80367A58;
    flags &= ~0x10;
    lbl_80367A58 = flags;

    fn_8000C070(obj, 1);
}

s32 fn_8011DB48(void* arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r3;
    s32* var_r4;
    s32* var_r5;
    s32* var_r6;
    s32* var_r7;
    s32* var_r8;
    
    // Load and setup
    temp_r3 = (s32)arg0;
    temp_r4 = *(s32*)(temp_r3 + 0x4);
    temp_r5 = *(s32*)(temp_r3 + 0x8);
    
    if (temp_r4 > 0) {
        var_r4 = (s32*)(temp_r3 + 0x10);
        temp_r6 = 0;
        
        do {
            // Check for null pointer
            if (*var_r4 == 0) {
                return 0;
            }
            
            var_r5 = (s32*)*var_r4;
            var_r6 = (s32*)*(var_r5 + 0x4);
            var_r7 = *(s32**)(var_r5 + 0x8);
            var_r8 = *(s32**)(var_r5 + 0xC);
            
            // Process unit or exit if not found
            if (var_r6 == 0) {
                return 0;
            }
            
            temp_r3 = *var_r7;
            var_r3 = *(s32*)(temp_r3 + 0xC);
            
            if (var_r3 != 0) {
                temp_r3 = *(s32*)var_r8;
                if (temp_r3 == 19) { // Assuming ID for 'item'
                    *(u8*)(var_r5 + 0x10) = 1;
                }
            }
            
            var_r4 = (s32*)*var_r4;
            temp_r6 += 1;
        } while (temp_r6 < temp_r4);
    }
    
    // Return success
    return 1;
}

void fn_8011DCB4(void) {
    M2C_UNK fn_8008A290(M2C_UNK, M2C_UNK);
    fn_8008A290(2, 0x10B);
}

void fn_8011DCDC(void *arg0) {
    fn_8008A290(3, M2C_FIELD(arg0, s16 *, 0x68));
}

void fn_8011DD08(void *arg0) {
    s32 fn_8008A56C();
    if (fn_8008A56C() & 2) {
        if (fn_8008A56C() & 4) {
            M2C_FIELD(arg0, s8 *, 0x64) = 2;
            return;
        }
        if (fn_8008A56C() & 8) {
            M2C_FIELD(arg0, s8 *, 0x64) = 5;
            return;
        }
        goto block_5;
    }
block_5:
    fn_8008A290(3, M2C_FIELD(arg0, s16 *, 0x68));
    M2C_FIELD(arg0, s8 *, 0x64) = 2;
}

void fn_8011DD80(void *arg0)
{
    void fn_800AA1CC(void *);
    void fn_80109180(void *, void *);

    extern u16 lbl_80367A58;
    extern void *lbl_80367A5C;

    void *ptr;

    fn_800AA1CC(arg0);

    lbl_80367A58 |= 0x80;

    ptr = lbl_80367A5C;

    if (ptr != 0) {
        fn_80109180(ptr, arg0);
    }
}

extern u32 lbl_80367A5C;
void fn_8011DDCC(void* arg0) {
    int i;
    
    // First loop: iterate through 4 units, check and process
    for (i = 0; i < 4; i++) {
        if (*(void**)((char*)arg0 + i * 4) != NULL) {
            fn_80122C84();
            *(void**)((char*)arg0 + i * 4) = NULL;
        }
    }
    
    // Second loop: iterate through 4 units, check and process
    for (i = 0; i < 4; i++) {
        if (*(void**)((char*)arg0 + 0x10 + i * 4) != NULL) {
            fn_8007AD6C();
            *(void**)((char*)arg0 + 0x10 + i * 4) = NULL;
        }
    }
    
    // Clear unk30 - this is likely at offset 0x20
    *(s32*)((char*)arg0 + 0x20) = 0;
    
    // Check and process lbl_80367A5C
    if (lbl_80367A5C != 0) {
        fn_80109020();
        lbl_80367A5C = 0;
    }
    
    // Check and process unk58 - at offset 0x58 
    if (*(s32*)((char*)arg0 + 0x58) != 0) {
        fn_8000C60C();
        *(s32*)((char*)arg0 + 0x58) = 0;
    }
    
    // Call fn_80120F0C
    fn_80120F0C();
    
    // Check bit 7 of lbl_80367A58 and process if set
    if (lbl_80367A58 & 0x80) {
        fn_800AA208();
        lbl_80367A58 &= 0xFFFFFF7F;
    }
    
    // Clear lbl_80367A58 and update lbl_80367110
    lbl_80367A58 = 0;
    lbl_80367110 &= 0xFFFFFFFD;
}

void fn_8011DED8(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C60C(void *);
    void fn_800790D4(void *, void *);
    void fn_8007AD6C(void *);
    void fn_80089650(s32, s32);
    void fn_800AA208(void);
    void fn_80109020(void *);
    void *fn_801090C0(void *);
    void fn_80109BB4(void *, u8);
    void fn_8011E12C(void *);
    void fn_80120F0C(void);
    void fn_80120F94(void);
    void fn_80122000(void *);
    void fn_80122238(void *, void *);
    void fn_80122C84(void *);
    extern u8 lbl_8032BDE8[];
    void *self;
    void *p;
    s32 i;
    s32 zero;

    self = arg0;
    while (!(lbl_80367A58 & 0x20)) {
        fn_8011E12C(self);
    }
    if (lbl_80367A58 & 0x10) {
        fn_8000C070(self, 2);
        return;
    }
    fn_80122000(lbl_8032BDE8);
    if ((lbl_80367110 & 2) && (*(u8 *)((u8 *)self + 0x63) != 0) && !(lbl_80367110 & 1)) {
        fn_80089650(2, 0x85);
    }
    if (lbl_80367110 & 3) {
        i = 0;
        p = self;
        zero = i ^ i;
        do {
            void *obj = *(void **)((u8 *)p + 0x34);
            if (obj != NULL) {
                fn_80122C84(obj);
                *(s32 *)((u8 *)p + 0x34) = zero;
            }
            i += 1;
            p = (u8 *)p + 4;
        } while (i < 4);
        i = 0;
        p = self;
        zero = i ^ i;
        do {
            void *obj = *(void **)((u8 *)p + 0x48);
            if (obj != NULL) {
                fn_8007AD6C(obj);
                *(s32 *)((u8 *)p + 0x48) = zero;
            }
            i += 1;
            p = (u8 *)p + 4;
        } while (i < 4);
        *(s32 *)((u8 *)self + 0x30) = 0;
        if (lbl_80367A5C != 0) {
            fn_80109020((void *)lbl_80367A5C);
            lbl_80367A5C = 0;
        }
        if (*(void **)((u8 *)self + 0x58) != NULL) {
            fn_8000C60C(*(void **)((u8 *)self + 0x58));
            *(s32 *)((u8 *)self + 0x58) = 0;
        }
        fn_80120F0C();
        if (lbl_80367A58 & 0x80) {
            fn_800AA208();
            *(volatile u16 *)&lbl_80367A58 &= ~0x80;
        }
        {
            s32 t = lbl_80367110;
            *(volatile u16 *)&lbl_80367A58 = 0;
            lbl_80367110 = t & ~2;
            fn_8000C070(self, 4);
        }
        return;
    }
    if (*(u8 *)((u8 *)self + 0x63) != 0) {
        fn_8000C070(self, 3);
        return;
    }
    fn_80120F94();
    {
        void *p2;
        s32 i2;
        i2 = 0;
        p2 = self;
        do {
            void *obj = *(void **)((u8 *)p2 + 0x34);
            if (obj != NULL) {
                fn_80122238(obj, self);
            }
            i2 += 1;
            p2 = (u8 *)p2 + 4;
        } while (i2 < 4);
    }
    {
        void *p2;
        s32 i2;
        i2 = 0;
        p2 = self;
        do {
            void *obj = *(void **)((u8 *)p2 + 0x48);
            if (obj != NULL) {
                if (lbl_80367110 & 3) {
                    fn_8007AD6C(obj);
                } else {
                    fn_800790D4(obj, self);
                }
            }
            i2 += 1;
            p2 = (u8 *)p2 + 4;
        } while (i2 < 4);
    }
    if (lbl_80367A5C != 0) {
        fn_80109BB4(fn_801090C0((void *)lbl_80367A5C), (u8)((*(s16 *)((u8 *)self + 0x68) * 0x3C) / 1000));
    }
}

#pragma use_lmw_stmw on
s32 fn_8011E12C(void *arg0) {
    u8 fn_8011E4B8(void *, void *, u16);
    void fn_8000C188(void *);
    u8 fn_801229C4(void *);
    void fn_801226D0(void *, void *);
    void fn_801222A4(void *, void *);
    void fn_80121D60(void *, void *);
    void fn_80120FE8(void *, s32, s32, void *);
    u8 fn_80109B24(void *);
    void fn_80120DD4(void *, u8);
    void fn_80122114(void *, u8);
    void fn_80122A2C(void *, u8);
    extern u16 lbl_80367A58;
    extern u8 lbl_8032BDE8[];
    struct Item {
        u8 pad[0x34];
        void **unk34;
        f32 unk38;
        f32 unk3C;
        u8 pad40[3];
        u8 unk43;
    };
    struct Obj {
        u8 pad0[0x30];
        u8 *text;
        void *pad34[4];
        void *unk44;
        struct Item *items[4];
        void *unk58;
        u8 pad5C[2];
        u8 unk5E;
        u8 pad5F;
        u8 unk60;
        u8 pad61;
        u8 unk62;
        u8 pad63[2];
        u8 unk65;
        u8 pad66;
        u8 unk67;
    };
    struct Sda {
        u16 unk0;
        u16 unk2;
    };
    struct Obj *self;
    struct Sda *sda;
    struct Item *slot;
    u16 old;
    s32 code;
    s8 idx;
    struct Item *it;
    s32 i;
    u8 ch;
    u8 v;
    u8 *text;
    struct Obj *cur;

    self = (struct Obj *)arg0;
    sda = (struct Sda *)&lbl_80367A58;
    old = sda->unk2;
    sda->unk2 = (u16)(old + 1);
    code = (u8)fn_8011E4B8(self, &self->text, old);
    if (code == 2) {
        goto ret2;
    }
    if (code >= 3) {
        goto def;
    }
    if (code == 0) {
        fn_8000C188(self);
        return 0;
    }
    goto def;
ret2:
    return 2;
def:
    if (fn_801229C4(self->unk44) != 0) {
        fn_801226D0(self->unk44, self);
        return 2;
    }
    if (*(u8 *)((u8 *)self->unk44 + 0x68) == 0) {
        fn_801222A4(self->unk44, self);
        return 2;
    }
    ch = self->unk5E;
    if ((s8)ch < 0) {
        idx = -1;
    } else if (self->items[0] != 0 && (s8)self->items[0]->unk43 == (s8)ch) {
        idx = 0;
    } else if (self->items[1] != 0 && (s8)self->items[1]->unk43 == (s8)ch) {
        idx = 1;
    } else if (self->items[2] != 0 && (s8)self->items[2]->unk43 == (s8)ch) {
        idx = 2;
    } else if (self->items[3] != 0 && (s8)self->items[3]->unk43 == (s8)ch) {
        idx = 3;
    } else {
        idx = -1;
    }
    if ((s8)idx < 0) {
        slot = 0;
    } else {
        slot = self->items[idx];
    }
    if (slot != 0) {
        fn_80121D60(lbl_8032BDE8, *slot->unk34);
        if (self->unk67 == 0) {
            self->unk67 = 1;
            fn_80120FE8(*slot->unk34, (s32)slot->unk38, (s32)slot->unk3C, self);
            ch = self->unk5E;
            if ((s8)self->unk65 != (s8)ch) {
                self->unk65 = ch;
                cur = self;
                i = 0;
                do {
                    it = *(struct Item **)((u8 *)cur + 0x48);
                    if (it != 0) {
                        if ((s8)it->unk43 == (s8)self->unk5E) {
                            if (self->unk58 != 0 && fn_80109B24(self->unk58) != 0
                                && (u8)fn_80109B24(self->unk58) != 0xFF) {
                                v = fn_80109B24(self->unk58);
                            } else {
                                v = 0xFF;
                            }
                            fn_80120DD4(*(void **)((u8 *)cur + 0x48), v);
                        } else {
                            if (self->unk58 != 0 && fn_80109B24(self->unk58) != 0
                                && (u8)fn_80109B24(self->unk58) != 0xFF) {
                                v = fn_80109B24(self->unk58);
                            } else {
                                v = 0xFF;
                            }
                            fn_80120DD4(*(void **)((u8 *)cur + 0x48), (u8)(v - 0x4D));
                        }
                    }
                    i += 1;
                    cur = (struct Obj *)((u8 *)cur + 4);
                } while (i < 4);
            }
        }
    }
    text = self->text;
    ch = *text;
    if ((s8)ch >= 0x20 && (s8)ch < 0x7F) {
        fn_80122114(lbl_8032BDE8, ch);
        text = self->text;
        self->text = text + 1;
        fn_80122A2C(self->unk44, *text);
    } else {
        fn_80122114(lbl_8032BDE8, ch);
        text = self->text;
        self->text = text + 1;
        fn_80122A2C(self->unk44, *text);
        fn_80122114(lbl_8032BDE8, *self->text);
        text = self->text;
        self->text = text + 1;
        fn_80122A2C(self->unk44, *text);
    }
    self->unk60 = self->unk62;
    return 3;
}
#pragma use_lmw_stmw reset

void fn_8011E4B8(void) {
    // Placeholder for now. This is a complex function with many branches and data accesses.
    // Will need to decompile it properly step by step.
}

void fn_8011FB58(void *arg0, s32 arg1) {
    s32 fn_802342B8(s32, void *);
    void *fn_8003A114(void *);
    void *fn_8003A064(void *);
    void *fn_80016BDC(void *);
    void **fn_8007C3BC(void *);
    void *fn_8007BC3C(void *, s32, s32, u16, void *);
    u8 fn_80109B24(void *);
    void fn_80079300(void *, u8);
    void fn_800791F0(void *, void *);
    void fn_80120F94(void);
    void fn_80234450(void *, void *);
    void fn_802343E0(void *, void *);
    s32 fn_8005C144(void *);
    void *fn_8000CAA0(void *, void *);
    void fn_8023440C(void *, void *, s32);
    extern u16 lbl_80274BB0[];
    extern u8 lbl_802EF4C8[24];
    extern s32 lbl_80367110;
    extern u8 lbl_8028FED0[];
    void *unit;
    s32 i;
    void *p;
    u8 flag;
    void **infop;
    u8 *info;
    u8 v;
    u8 sp[0x40];
    s32 flags;
    void *tmp;
    void *self;
    s32 arg;

    self = arg0;
    arg = arg1;
    unit = (void *)arg;
    if (fn_802342B8(arg, (u8 *)lbl_80274BB0 + 0x90) == 0) {
        unit = fn_8003A114(*(void **)lbl_802EF4C8);
        goto got_unit;
    }
    if (fn_802342B8(arg, (u8 *)lbl_80274BB0 + 0x97) == 0) {
        unit = fn_8003A064(*(void **)lbl_802EF4C8);
        goto got_unit;
    }
    if (fn_802342B8(arg, (u8 *)lbl_80274BB0 + 0x9F) == 0) {
        tmp = fn_80016BDC((u8 *)lbl_80274BB0 + 0xA7);
        if (tmp != NULL) {
            unit = fn_8003A114(tmp);
            goto got_unit;
        }
    } else if (fn_802342B8(arg, (u8 *)lbl_80274BB0 + 0xAF) == 0) {
        tmp = fn_80016BDC((u8 *)lbl_80274BB0 + 0xA7);
        if (tmp != NULL) {
            unit = fn_8003A064(tmp);
            goto got_unit;
        }
    } else if (fn_802342B8(arg, (u8 *)lbl_80274BB0 + 0xB9) == 0) {
        tmp = fn_80016BDC((u8 *)lbl_80274BB0 + 0xC2);
        if (tmp != NULL) {
            unit = fn_8003A114(tmp);
            goto got_unit;
        }
    } else if (fn_802342B8(arg, (u8 *)lbl_80274BB0 + 0xCB) == 0) {
        tmp = fn_80016BDC((u8 *)lbl_80274BB0 + 0xC2);
        if (tmp != NULL) {
            unit = fn_8003A064(tmp);
            goto got_unit;
        }
    }
got_unit:
    flags = lbl_80367110 & 3;
    if (flags != 0) {
        p = self;
        i = 0;
        do {
            if (*(void **)((u8 *)p + 0x48) == NULL) {
                if (flags != 0) {
                    *(u16 *)((u8 *)self + 0x5C) = 0x180;
                }
                infop = fn_8007C3BC(unit);
                info = (u8 *)*infop;
                flag = 0;
                if ((s8)info[3] == (s8)info[5] && (s32)info[4] == 0x4C) {
                    flag = 1;
                }
                if (flag == 0) {
                    *(u16 *)((u8 *)self + 0x5C) |= 0x4000;
                }
                *(void **)((u8 *)self + 0x48 + i * 4) = fn_8007BC3C(unit, 0, 0, *(u16 *)((u8 *)self + 0x5C), self);
                *(u16 *)((u8 *)self + 0x5C) = 0x82;
                if (*(void **)((u8 *)self + 0x58) != NULL && fn_80109B24(*(void **)((u8 *)self + 0x58)) != 0
                    && fn_80109B24(*(void **)((u8 *)self + 0x58)) != 0xFF) {
                    v = fn_80109B24(*(void **)((u8 *)self + 0x58));
                } else {
                    v = 0xFF;
                }
                *(u8 *)((u8 *)*(void **)((u8 *)self + 0x48 + i * 4) + 0x41) = (u8)(v - 0x4D);
                fn_80079300(*(void **)((u8 *)self + 0x48 + i * 4), *(u8 *)((u8 *)self + 0x5E));
                if ((lbl_80367110 & 3) == 0) {
                    fn_800791F0(*(void **)((u8 *)self + 0x48 + i * 4), self);
                }
                {
                    u8 t = *(u8 *)((u8 *)self + 0x5E);
                    s8 s = (s8)t;
                    if (s != s) {
                        *(u8 *)((u8 *)self + 0x65) = t;
                        *(u8 *)((u8 *)self + 0x5E) = (u8)s;
                        fn_80120F94();
                    }
                }
                return;
            }
            p = (u8 *)p + 4;
            i += 1;
        } while (i < 4);
    } else {
        fn_80234450(sp, (u8 *)lbl_80274BB0 + 0x2F);
        fn_802343E0(sp, *(void **)((u8 *)fn_8007C3BC(unit) + 8));
        if (fn_8005C144(sp) & 0x2000) {
            p = self;
            i = 0;
            do {
                if (*(void **)((u8 *)p + 0x48) == NULL) {
                    if (lbl_80367110 & 3) {
                        *(u16 *)((u8 *)self + 0x5C) = 0x180;
                    }
                    infop = fn_8007C3BC(unit);
                    info = (u8 *)*infop;
                    flag = 0;
                    if ((s8)info[3] == (s8)info[5] && (s32)info[4] == 0x4C) {
                        flag = 1;
                    }
                    if (flag == 0) {
                        *(u16 *)((u8 *)self + 0x5C) |= 0x4000;
                    }
                    *(void **)((u8 *)self + 0x48 + i * 4) = fn_8007BC3C(unit, 0, 0, *(u16 *)((u8 *)self + 0x5C), self);
                    *(u16 *)((u8 *)self + 0x5C) = 0x82;
                    if (*(void **)((u8 *)self + 0x58) != NULL && fn_80109B24(*(void **)((u8 *)self + 0x58)) != 0
                        && fn_80109B24(*(void **)((u8 *)self + 0x58)) != 0xFF) {
                        v = fn_80109B24(*(void **)((u8 *)self + 0x58));
                    } else {
                        v = 0xFF;
                    }
                    *(u8 *)((u8 *)*(void **)((u8 *)self + 0x48 + i * 4) + 0x41) = (u8)(v - 0x4D);
                    fn_80079300(*(void **)((u8 *)self + 0x48 + i * 4), *(u8 *)((u8 *)self + 0x5E));
                    if ((lbl_80367110 & 3) == 0) {
                        fn_800791F0(*(void **)((u8 *)self + 0x48 + i * 4), self);
                    }
                    {
                        u8 t = *(u8 *)((u8 *)self + 0x5E);
                        s8 s = (s8)t;
                        if (s != s) {
                            *(u8 *)((u8 *)self + 0x65) = t;
                            *(u8 *)((u8 *)self + 0x5E) = (u8)s;
                            fn_80120F94();
                        }
                    }
                    return;
                }
                p = (u8 *)p + 4;
                i += 1;
            } while (i < 4);
        } else {
            fn_8023440C((u8 *)fn_8000CAA0(lbl_8028FED0, self) + 0x30, unit, 0x3A);
        }
    }
}

#pragma global_optimizer off
s32 fn_8011FFE0(void *arg0, u32 arg1) {
    s32 fn_801208BC(void *, u32);
    void fn_80108BD0(void *, s32, s32, s32);
    void fn_80122DD0(void *, s16, s16);
    void fn_80122E28(void *, s16, s16);
    void fn_801222A4(void *, void *);
    extern u16 lbl_80274BB0[];
    extern s16 lbl_80312060[];
    void *self;
    s32 var30;
    u32 idx;
    s32 var29;
    void *obj;
    s32 pos;
    u8 *tmp;

    self = arg0;
    tmp = (u8 *)self + ((arg1 << 2) & 0x3FC);
    *(void **)((u8 *)self + 0x44) = *(void **)(tmp + 0x34);
    idx = arg1 & 0xFF;
    obj = *(void **)((u8 *)self + 0x44);
    if ((u32)obj != 0 && *(u8 *)((u8 *)obj + 0x68) == 0) {
        pos = fn_801208BC(*(void **)((u8 *)self + 0x30), idx) + 0xE0;
        switch (idx) {
        case 0:
            obj = *(void **)((u8 *)self + 0x34);
            var30 = pos;
            if ((u32)obj != 0 && *(u8 *)((u8 *)obj + 0x6B) != 0) {
                if (pos < 0x170) {
                    var30 = 0x170;
                }
                if (var30 > 0x230) {
                    var30 = 0x230;
                }
                fn_80108BD0((char *)lbl_80274BB0 + 0xD6, 0x18, 0x14, var30);
                obj = *(void **)((u8 *)self + 0x34);
                if ((u32)obj != 0) {
                    fn_80122DD0(obj, (s16)(var30 - 0x40), 0x7C);
                }
            }
            break;
        case 1:
            obj = *(void **)((u8 *)self + 0x38);
            var30 = pos;
            if ((u32)obj != 0 && *(u8 *)((u8 *)obj + 0x6B) != 0) {
                if (pos < 0x170) {
                    var30 = 0x170;
                }
                if (var30 > 0x230) {
                    var30 = 0x230;
                }
                fn_80108BD0((char *)lbl_80274BB0 + 0xDF, 0x248 - var30, 0x13C, var30);
                fn_80122E28(*(void **)((u8 *)self + 0x38), (s16)(0x278 - var30), 0x14C);
                obj = *(void **)((u8 *)self + 0x38);
                if ((u32)obj != 0) {
                    fn_80122DD0(obj, (s16)(0x288 - var30), 0x1A4);
                }
            }
            break;
        case 2:
            obj = *(void **)((u8 *)self + 0x3C);
            var29 = pos;
            if ((u32)obj != 0 && *(u8 *)((u8 *)obj + 0x6B) != 0) {
                var30 = 0x60;
                if (pos < 0x170) {
                    var29 = 0x170;
                }
                if (var29 > 0x230) {
                    var29 = 0x230;
                }
                if (var29 + 0x60 > 0x230) {
                    var30 = 0x230 - var29;
                }
                fn_80108BD0((char *)lbl_80274BB0 + 0xE8, var30 + 0x18, 0xA0, var29);
                fn_80122E28(*(void **)((u8 *)self + 0x3C), (s16)(var30 + 0xC0), 0xB0);
                lbl_80312060[6] = (s16)(var30 + 0x70);
                lbl_80312060[7] = 0x10F;
                lbl_80312060[8] = 1;
                obj = *(void **)((u8 *)self + 0x3C);
                if ((u32)obj != 0) {
                    s32 t = var29 - 0x40;
                    fn_80122DD0(obj, (s16)(var30 + t), 0x108);
                }
            }
            break;
        case 3:
            obj = *(void **)((u8 *)self + 0x40);
            var30 = pos;
            if ((u32)obj != 0 && *(u8 *)((u8 *)obj + 0x6B) != 0) {
                var29 = 0x60;
                if (pos < 0x170) {
                    var30 = 0x170;
                }
                if (var30 > 0x230) {
                    var30 = 0x230;
                }
                if (var30 + 0x60 > 0x230) {
                    var29 = 0x230 - var30;
                }
                fn_80108BD0((char *)lbl_80274BB0 + 0xF1, (0x248 - var30) - var29, 0xB4, var30);
                fn_80122E28(*(void **)((u8 *)self + 0x40), (s16)((0x278 - var30) - var29), 0xC4);
                lbl_80312060[9] = (s16)(0x1F0 - var29);
                lbl_80312060[10] = 0x123;
                lbl_80312060[11] = 0;
                obj = *(void **)((u8 *)self + 0x40);
                if ((u32)obj != 0) {
                    fn_80122DD0(obj, (s16)((0x288 - var30) - var29), 0x11C);
                }
            }
            break;
        }
        fn_801222A4(*(void **)((u8 *)self + 0x44), self);
        return 1;
    }
    return 0;
}
#pragma global_optimizer reset
void fn_80120354(void *);

void fn_80120304(void *arg0)
{
    void fn_80120CFC(u16 *);
    u8 fn_8008A59C(void);
    void fn_80120354(void *);
    extern u16 lbl_80367A58;

    fn_80120CFC(&lbl_80367A58);

    if (*((u8 *)arg0 + 0x63) == 0 || (u8)fn_8008A59C() == 0) {
        fn_80120354(arg0);
    }
}

void fn_80120354(void *arg0) {
    void fn_8000C188(void *);
    void *fn_8000CAA0(void *, void *);
    void fn_8007ACE4(void *);
    void fn_8007AD30(void *, s32);
    s32 fn_8011E12C(void *);
    void fn_801475FC(void *, s32);
    u32 fn_80211690(void);
    extern u16 lbl_80274BB0[];
    extern u8 lbl_8028FE30[];
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    extern u16 lbl_80367A58;
    extern u32 lbl_80367A60;
    extern s8 lbl_80367A64;

    s32 i;
    void *self;
    s32 limit;
    s32 flags;
    s32 t;
    u16 raw;
    u16 cleared;
    void *pad;
    s32 pad4;
    s32 btn;
    s32 trigger;
    s8 delay;
    s32 slot;
    s32 want;
    void *tmp;
    void *child;
    s32 *p;

    self = arg0;
    *((u8 *)self + 0x5f) = *((u8 *)self + 0x5f) - 1;
    flags = lbl_80367110;
    if (flags & 0x2000) {
        t = 1;
    } else if ((u32)((((u8 *)lbl_80330708)[0x9c] >> 3) & 3) == 3) {
        t = 0xffff;
    } else {
        t = 1;
    }
    limit = t;
    if ((lbl_80367A58 & 4) && !(flags & 3)) {
        tmp = fn_8000CAA0(lbl_8028FE30, self);
        *(void **)((u8 *)tmp + 0x30) = self;
        *(s32 *)((u8 *)tmp + 0x34) = 0;
        return;
    }
    raw = *(volatile u16 *)&lbl_80367A58;
    pad = lbl_80367240;
    cleared = raw & 0xfffffbff;
    *(volatile u16 *)&lbl_80367A58 = cleared;
    pad4 = *(s32 *)((u8 *)pad + 4);
    btn = pad4 & (*(s32 *)((u8 *)pad + 8) ^ pad4);
    if (!(btn & 0x100)) {
        if (!(pad4 & 0x04000004) || !(pad4 & 0x100)) {
            if (*(volatile u16 *)&lbl_80367A58 & 8) {
                if (!(btn & 0x200)) {
                    trigger = 0;
                    goto after_trig;
                }
            } else if (flags & 3) {
                trigger = 1;
                goto after_trig;
            } else {
                trigger = 0;
                goto after_trig;
            }
        } else {
            *(volatile u16 *)&lbl_80367A58 = cleared | 0x400;
        }
    }
    trigger = 1;
    *(volatile u16 *)&lbl_80367A58 |= 0x200;
after_trig:
    if ((u8)trigger) {
        *((u8 *)self + 0x5f) = 0;
        limit = 0xffff;
    }
    flags = lbl_80367110;
    if (flags & 3) {
        fn_8000C188(self);
        return;
    }
    if ((s8)*((u8 *)self + 0x5f) != 0) {
        return;
    }
    if (flags & 0x2000) {
        delay = 5;
    } else {
        switch ((s32)((((u8 *)lbl_80330708)[0x9c] >> 3) & 3)) {
        case 0:
            delay = 0xa;
            break;
        case 1:
            delay = 4;
            break;
        case 2:
            delay = 1;
            break;
        case 3:
            delay = 1;
            break;
        default:
            delay = -1;
            break;
        }
    }
    *((u8 *)self + 0x5f) = delay;
    i = 0;
    *((u8 *)self + 0x67) = 0;
    while (i < limit) {
        if ((u8)fn_8011E12C(self) != 3) {
            break;
        }
        i += 1;
    }
    if (*((u8 *)self + 0x60) != 0) {
        if (lbl_80367A64 == 0) {
            lbl_80367A60 = -1;
            lbl_80367A64 = 1;
        }
        if (lbl_80367A60 != fn_80211690() - 1) {
            lbl_80367A60 = fn_80211690();
            if (!((((u8 *)lbl_80330708)[0x9f] >> 5) & 1)) {
                switch ((s32)*((u8 *)self + 0x66)) {
                case 0:
                    break;
                case 1:
                    fn_801475FC((char *)lbl_80274BB0 + 0xfa, 0x64);
                    break;
                case 2:
                    fn_801475FC((char *)lbl_80274BB0 + 0x107, 0x64);
                    break;
                case 3:
                    fn_801475FC((char *)lbl_80274BB0 + 0x114, 0x64);
                    break;
                case 4:
                    fn_801475FC((char *)lbl_80274BB0 + 0x121, 0x64);
                    break;
                }
            }
        }
    }
    want = (s8)*((u8 *)self + 0x5e);
    if (want < 0) {
        slot = -1;
    } else {
        child = *(void **)((u8 *)self + 0x48);
        if (child != NULL && (s8)*((u8 *)child + 0x43) == want) {
            slot = 0;
        } else {
            child = *(void **)((u8 *)self + 0x4c);
            if (child != NULL && (s8)*((u8 *)child + 0x43) == want) {
                slot = 1;
            } else {
                child = *(void **)((u8 *)self + 0x50);
                if (child != NULL && (s8)*((u8 *)child + 0x43) == want) {
                    slot = 2;
                } else {
                    child = *(void **)((u8 *)self + 0x54);
                    if (child != NULL && (s8)*((u8 *)child + 0x43) == want) {
                        slot = 3;
                    } else {
                        slot = -1;
                    }
                }
            }
        }
    }
    if ((s8)slot < 0) {
        child = 0;
    } else {
        p = (s32 *)self + (s8)slot;
        child = *(void **)((u8 *)p + 0x48);
    }
    if (child != NULL) {
        if (*((u8 *)self + 0x60) != *((u8 *)self + 0x61)) {
            if (*((u8 *)self + 0x60) != 0) {
                fn_8007ACE4(child);
            } else {
                fn_8007AD30(child, 0x80);
            }
        }
    }
    *((u8 *)self + 0x61) = *((u8 *)self + 0x60);
}

void fn_8012075C(void *arg0) {
    void fn_80122AA8(void *);
    extern s32 lbl_80367110;
    s32 i;
    void *p;
    void *obj;

    if ((lbl_80367110 & 3) == 0) {
        i = 0;
        p = arg0;
        do {
            obj = *(void **)((u8 *)p + 0x34);
            if (obj != NULL) {
                fn_80122AA8(obj);
            }
            i += 1;
            p = (u8 *)p + 4;
        } while (i < 4);
    }
}

void fn_801207BC(void) {
    extern s32 lbl_80367110;
    extern u16 lbl_80367A58;
    lbl_80367A58 &= 0xFFFFFFFB;
    lbl_80367110 |= 2;
}

extern s32 fn_80010710(u8* arg0);
extern s32 lbl_803671C4;
s32 fn_801208BC(struct Unit* unit) {
    s32 result;
    u8* temp_r5;
    u8* r6_ptr = (u8*)unit;
    
    // Check if we have a valid unit pointer  
    if (r6_ptr == NULL)
        return 0;
        
    // Check if this is an invalid unit
    if (M2C_FIELD(unit, u16*, 0x0) == 0)
        return 0;

    temp_r5 = r6_ptr + 0x64;
    
    // This part is complex - looks like a jump table or conditional logic
    result = *(s32*)(r6_ptr + 0x1A4);  // Direct access to what seems like an enum/flag field
    if (result < 0 || result > 9) {
        // Invalid state, return default value 
        return 0;
    }
    
    // Call function that likely depends on unit state
    result = fn_80010710(&temp_r5[0]);  
    
    // More processing based on the state and unit properties
    if (result != 0) {
        // Continue with some processing logic  
        s32 temp = *(s32*)(r6_ptr + 0xB0);
        if (temp > 0) {
            return temp;
        }
    }
    
    // Return the result from this processing
    return result;
}

#include "common.h"
extern struct SomeStruct* lbl_80320C20; // example struct
#include "common.h"
#include "unit.h"
#include "global.h"

extern u16 lbl_8028F6C8[];
extern u16 lbl_80296128[];
extern void *lbl_802CA264;
extern u16 lbl_802EF4E0[];

s32 fn_80120C2C(void) {
    extern u16 lbl_80367A58;
    extern void *lbl_80367240;
    extern s32 lbl_80367110;
    u32 raw;
    u16 cleared;
    void *pad;
    s32 buttons;
    s32 pressed;

    raw = lbl_80367A58;
    pad = lbl_80367240;
    raw &= ~0x400;
    cleared = (u16)raw;
    lbl_80367A58 = cleared;
    buttons = *(s32 *)((u8 *)pad + 4);
    pressed = buttons & (*(s32 *)((u8 *)pad + 8) ^ buttons);
    if (!(pressed & 0x100)) {
        if (!(buttons & 0x04000004) || !(buttons & 0x100)) {
            if (*(volatile u16 *)&lbl_80367A58 & 8) {
                if (!(pressed & 0x200)) {
                    return 0;
                }
            } else {
                return (lbl_80367110 & 3) != 0;
            }
        } else {
            lbl_80367A58 = (u16)(cleared | 0x400);
        }
    }
    lbl_80367A58 |= 0x200;
    return 1;
}
