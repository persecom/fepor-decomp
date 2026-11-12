#include "common.h"
#pragma opt_common_subs off
static inline void init_761F8_base(void *p,s16 x,s16 y,s16 w,s16 h,s16 style) {
 extern u16 lbl_8028FDB0[],lbl_80292230[];
 extern f32 lbl_8036AB6C;
 f32 zero;
 M2C_FIELD(p,void * *,0)=lbl_8028FDB0; M2C_FIELD(p,s32 *,4)=0; M2C_FIELD(p,void * *,0)=lbl_80292230; M2C_FIELD(p,s16 *,8)=-1;M2C_FIELD(p,s16 *,10)=x;
M2C_FIELD(p,s16 *,12)=y;
M2C_FIELD(p,s16 *,14)=x+w;
M2C_FIELD(p,s16 *,16)=y+h;
M2C_FIELD(p,s16 *,18)=0;
M2C_FIELD(p,s16 *,20)=0;
M2C_FIELD(p,s16 *,22)=w;
M2C_FIELD(p,s16 *,24)=h;
M2C_FIELD(p,s16 *,26)=0;
M2C_FIELD(p,s16 *,28)=0;M2C_FIELD(p,u8 *,30)=0xFF;
M2C_FIELD(p,u8 *,31)=0xFF;
M2C_FIELD(p,u8 *,32)=0xFF;
M2C_FIELD(p,u8 *,33)=0xFF;M2C_FIELD(p,s16 *,0x22)=style; M2C_FIELD(p,s16 *,0x24)=0;
 zero=lbl_8036AB6C; M2C_FIELD(p,f32 *,0x28)=zero; M2C_FIELD(p,f32 *,0x2C)=zero; M2C_FIELD(p,f32 *,0x30)=zero;
 M2C_FIELD(p,s32 *,0x34)=0; M2C_FIELD(p,s32 *,0x38)=0;
 
}
#pragma opt_common_subs on
extern u32 lbl_802EF4C8[];
extern u16 lbl_80278080[];
extern u16 lbl_80294604[];

typedef struct Unk8016F694_Inner {
    u8 pad0[0x4C];
    s16 field4C;
} Unk8016F694_Inner;

typedef struct Unk8016F694_Outer {
    u8 pad0[0x44];
    void *ptr44;
    u8 pad1[0x4C - 0x44 - 4];
    Unk8016F694_Inner *inner;
} Unk8016F694_Outer;
extern u8 lbl_80330708[];
extern u16 lbl_803680E8;
extern f32 lbl_8036AC2C;
extern f32 lbl_8036AC30;
extern f32 lbl_8036AC34;
extern f32 lbl_8036AC40;
extern f32 lbl_8036AC48;
extern f32 lbl_8036AC5C;
extern f32 lbl_8036AC60;
extern f32 lbl_8036AC64;
extern f32 lbl_8036AC68;
extern f32 lbl_8036AC6C;
extern f32 lbl_8036AC70;
extern f32 lbl_8036AC74;
extern f32 lbl_8036AC78;
extern f32 lbl_8036AB94;
extern u16 lbl_80294604[];
extern u16 lbl_80295580[10];
extern f32 lbl_8036ABB0;
extern f32 lbl_8036ABBC;
extern f32 lbl_8036ABA0;
extern f32 lbl_8036A9C0;

extern u8 lbl_802B14E4[];

static inline u8 IsSlotFilled(void *obj, s16 slot) {
    u32 *fn_80037BD0(s32, s32);
    s32 idx = slot;
    u32 *item = fn_80037BD0(M2C_FIELD(obj, s32 *, 0x58), idx);

    if (M2C_FIELD(obj, s32 *, 0x5C) == 1 && *item == 0) {
        if (slot == 0 || slot == 4 || *fn_80037BD0(M2C_FIELD(obj, s32 *, 0x58), idx - 1) != 0) {
            return 1;
        }
    }
    return *item != 0;
}

static inline u8 IsSlotAvailable(void *obj, s16 slot) {
    if (slot >= 0 && slot <= 3 && !(M2C_FIELD(obj, s32 *, 0x60) & 1)) {
        return 0;
    }
    if (slot >= 4 && slot <= 7 && !(M2C_FIELD(obj, s32 *, 0x60) & 2)) {
        return 0;
    }
    return IsSlotFilled(obj, slot);
}

void fn_80163200(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    *(s8*)((u8*)arg0 + 0) = arg1;
    *(s8*)((u8*)arg0 + 1) = arg2;
    *(s8*)((u8*)arg0 + 2) = arg3;
    *(s8*)((u8*)arg0 + 3) = arg4;
}

void fn_80163214(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    *(s16*)((u8*)arg0 + 0) = arg1;
    *(s16*)((u8*)arg0 + 2) = arg2;
    *(s16*)((u8*)arg0 + 4) = arg3;
    *(s16*)((u8*)arg0 + 6) = arg4;
}

void fn_801635CC(void *arg0, s32 arg1) {
    u32 *fn_80037BD0(s32, s16);
    s16 var_r31;
    s16 var_r3;
    u32 *temp_r29;
    u8 var_r0;

    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    var_r31 = 0;
loop_18:
    if (var_r31 < 8) {
        if ((var_r31 >= 0) && (var_r31 <= 3) && !(M2C_FIELD(arg0, s32 *, 0x60) & 1)) {
            var_r0 = 0;
        } else if ((var_r31 >= 4) && (var_r31 <= 7) && !(M2C_FIELD(arg0, s32 *, 0x60) & 2)) {
            var_r0 = 0;
        } else {
            temp_r29 = fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), var_r31);
            if (((s32) M2C_FIELD(arg0, s32 *, 0x5C) == 1) && ((u32) *temp_r29 == 0U) && ((var_r31 == 0) || (var_r31 == 4) || ((u32) *fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), var_r31 - 1) != 0U))) {
                var_r0 = 1;
            } else {
                var_r0 = *temp_r29 != 0U;
            }
        }
        if (var_r0 == 0) {
            var_r31 += 1;
            goto loop_18;
        }
    }
    var_r3 = -1;
    if (var_r31 < 8) {
        var_r3 = var_r31;
    }
    M2C_FIELD(arg0, s16 *, 0x4C) = var_r3;
}

void fn_80163708(void *arg0) {
    *(s16 *)((char *)arg0 + 0x12) = 2;
    *(s16 *)((char *)arg0 + 0x14) = 2;
    *(s16 *)((char *)arg0 + 0x16) = 0x106;
    *(s16 *)((char *)arg0 + 0x18) = 0x10E;
}

void fn_80163728(void *arg0, void *arg1) {
    extern f32 lbl_8036A89C;
    extern f32 lbl_8036A8A0;
    extern f32 lbl_8036A890;
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, f32);
    void fn_8008BF68(s16, s32, u8);
    void fn_80009B80(s32);
    void **vt0 = (void **)M2C_FIELD(arg0, u32 *, 0x00);
    s16 temp_r31;
    s16 var_r29;
    s16 var_r3;
    s16 temp_r5;
    s16 var_r28;
    s16 temp_r0;
    u8 var_r30;
    u8 var_r3_2;
    u32 var_r0;
    s16 temp_r24;
    s32 temp_r25_2;
    s32 var_r3_3;
    s32 temp_r4;
    s16 temp_r25;
    s32 temp_r24_2;
    s32 temp_r25_2_val;
    s16 temp_r25_2_final;

    ((void (*)(void *))vt0[5])(arg0);

    if (M2C_FIELD(arg0, s16 *, 0x4C) >= 0) {
        temp_r31 = M2C_FIELD(arg0, s16 *, 0x54);
        var_r29 = temp_r31;
        var_r3 = M2C_FIELD(arg0, s16 *, 0x4C);

        if (M2C_FIELD(arg0, s32 *, 0x60) == 2) {
            var_r3 -= 4;
        }

        temp_r5 = M2C_FIELD(arg0, s16 *, 0x64);
        var_r28 = temp_r5;
        temp_r0 = (s16)((s32)var_r3 * temp_r31 + M2C_FIELD(arg0, s16 *, 0x66));

        if (M2C_FIELD(arg0, s16 *, 0x52) < 0) {
            M2C_FIELD(arg0, s16 *, 0x50) = temp_r5;
            M2C_FIELD(arg0, s16 *, 0x52) = temp_r0;
        } else {
            M2C_FIELD(arg0, s16 *, 0x50) = (s16)((s32)(M2C_FIELD(arg0, s16 *, 0x50) + (temp_r5 + 1)) >> 1);
            M2C_FIELD(arg0, s16 *, 0x52) = (s16)((s32)(M2C_FIELD(arg0, s16 *, 0x52) + (temp_r0 + 1)) >> 1);
        }

        if (M2C_FIELD(arg0, u8 *, 0x48) != 0) {
            var_r30 = 0;
            var_r3_2 = 0;

            if (M2C_FIELD(arg1, u8 *, 0x2D) == 0 && M2C_FIELD(arg1, u8 *, 0x2E) == 0) {
                var_r3_2 = 1;
            }

            if (var_r3_2 != 0) {
                if (M2C_FIELD(arg1, u32 *, 0x34) != 0) {
                    var_r0 = (u32)M2C_FIELD((void *)M2C_FIELD(arg1, u32 *, 0x38), u32 *, 0x08);
                } else {
                    var_r0 = 0;
                }
                if (var_r0 == (u32)arg0) {
                    var_r30 = 1;
                }
            }

            fn_8000A258();
            fn_80009C0C(lbl_8036A89C);
            fn_8000A248();

            temp_r24 = M2C_FIELD(arg0, s16 *, 0x54);
            temp_r25_2 = fn_800102BC(-1, lbl_8036A8A0);
            fn_8008BF68(M2C_FIELD(arg0, s16 *, 0x50),
                       (s16)((s32)(M2C_FIELD(arg0, s16 *, 0x52) + ((temp_r24 - temp_r25_2) >> 1))),
                       var_r30);

            fn_8000A258();
            fn_80009C0C(lbl_8036A8A0);
            fn_8000A248();

            ((void (*)(void *, s32, s16, s16, s16, u8))vt0[0x40/4])(arg0, 0, temp_r0,
                      (s16)(M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)),
                      temp_r31, var_r30);
        }
    }

    if (M2C_FIELD(arg0, u8 *, 0x49) != 0) {
        ((void (*)(void *, void *))vt0[5])(arg0, arg1);

        fn_8000A258();
        fn_80009C0C(lbl_8036A890);
        fn_8000A248();

        var_r3_3 = M2C_FIELD(arg0, s32 *, 0x4E);
        if (M2C_FIELD(arg0, s32 *, 0x60) == 2) {
            var_r3_3 -= 4;
        }

        temp_r4 = var_r3_3 * var_r29;
        temp_r25 = M2C_FIELD(arg0, s16 *, 0x54);
        temp_r24_2 = temp_r4 + M2C_FIELD(arg0, s16 *, 0x66);
        temp_r25_2 = fn_800102BC(-1, lbl_8036A8A0);
        temp_r25_2_final = (s16)((s32)(temp_r25 - temp_r25_2) >> 1);

        fn_8000A258();
        fn_80009B80(0x40);
        fn_8000A248();
        fn_8008BF68(var_r28, temp_r24_2 + temp_r25_2_final, 0);
        fn_8000A258();
        fn_80009B80(0x80);
        fn_8000A248();
    }
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80163974(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(s32) = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual s32 v12(u32 *) = 0;
        virtual void v13(s16, s16, s32, u32 *, s32) = 0;
        u8 pad4[6];
        s16 unkA;
        s16 unkC;
        s16 unkE;
        s16 unk10;
        s16 unk12;
        s16 unk14;
        s16 unk16;
        s16 unk18;
        u8 pad1A[0x4A - 0x1A];
        u8 unk4A;
        u8 pad4B[0x54 - 0x4B];
        s16 unk54;
        u8 pad56[2];
        s32 unk58;
        s32 unk5C;
        u32 unk60;
        s16 unk64;
        s16 unk66;
        s16 unk68;
        s16 unk6A;
        s16 unk6C;
        s16 unk6E;
    };
    void fn_8008BBF8(s32, s32, s32, s32, s32, s32);
    void fn_8013F748(void *, s16 *, s16 *);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_80009BC0(void (*)(void *), s16 *);
    void fn_8000A248(void);
    void fn_8013F920(void *);
    u32 *fn_80037BD0(s32, s32);
    void *fn_8003A114(void *);
    void *fn_8007BA4C(void *, s32);
    void fn_8007B4D8(s16, s16, s32, void *, s16, s16);
    void fn_8007B990(void *);
    void fn_80009B98(void);
    extern f32 lbl_8036A890;
    extern f32 lbl_8036A894;
    s16 row_h;
    s16 x;
    s16 y;
    s16 slot;
    Obj *self;
    u32 *item;
    s32 idx;
    s16 *rect;
    s16 w;
    s16 h;
    u8 ok;
    void *obj;
    s16 mid;
    s16 dw;
    s16 dh;
    void *info;
    register s32 lim;

    self = (Obj *)arg0;
    idx = arg1;
    self->v2();
    fn_8008BBF8(0, 0, (s16)(self->unkE - self->unkA), (s16)(self->unk10 - self->unkC), 0, 0xFF);
    self->v3(idx);

    h = (s16)(self->unk18 - self->unk14);
    rect = &self->unk68;
    w = (s16)(self->unk16 - self->unk12);
    self->unk68 = 0;
    self->unk6A = 0;
    self->unk6C = w;
    self->unk6E = h;
    fn_8013F748(self, rect, rect);
    rect = &self->unk6C;
    fn_8013F748(self, rect, rect);

    fn_8000A258();
    fn_80009C0C(lbl_8036A890);
    fn_80009BC0(fn_8013F920, &self->unk68);
    fn_8000A248();

    row_h = self->unk54;
    slot = 0;
    x = self->unk64;
    y = (s16)(((s32)(row_h - 0x18) >> 1) + self->unk66);
    goto loop_test;
loop_body:
    if ((slot >= 0) && (slot <= 3) && !(self->unk60 & 1)) {
        ok = 0;
    } else if ((slot >= 4) && (slot <= 7) && !(self->unk60 & 2)) {
        ok = 0;
    } else {
        idx = slot;
        item = fn_80037BD0(self->unk58, idx);
        if ((self->unk5C == 1) && (*item == 0U) &&
            ((slot == 0) || (idx == 4) ||
             (*fn_80037BD0(self->unk58, idx - 1) != 0U))) {
            ok = 1;
        } else {
            ok = *item != 0U;
        }
    }
    if (ok != 0) {
        item = fn_80037BD0(self->unk58, slot);
        if (*item != 0U) {
            self->v13(x, y, 0, item, self->v12(item));
            y += row_h;
        }
    }
    slot += 1;
loop_test:
    if (slot < 8) {
        goto loop_body;
    }

    if (self->unk4A != 0) {
        s16 x0, x1, y0, y1, t;
        fn_8000A258();
        fn_80009C0C(lbl_8036A894);
        fn_8000A248();
        obj = fn_8007BA4C(fn_8003A114(*(void **)&self->unk58), 0x100);
        lim = 0x130;
        mid = (s16)(self->unkA + ((s16)(self->unkE - self->unkA) >> 1));
        *(u16 *)((u8 *)obj + 0x46) &= (u16)~1;
        *(u16 *)((u8 *)obj + 0x46) |= (u16)(mid < lim);
        x0 = self->unk12;
        x1 = self->unk16;
        info = *(void **)((u8 *)obj + 0x34);
        dw = (s16)(x1 - x0);
        y0 = self->unk14;
        y1 = self->unk18;
        t = *(s16 *)((u8 *)info + 0x1E);
        dh = (s16)(y1 - y0);
        fn_8007B4D8((s16)(dw >> 1), (s16)(dh + t), 0x7F, obj, y0, dw);
        fn_8007B990(obj);
    }

    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

void fn_80163C98(s32 *arg0, void *arg1) {
    s16 temp_r0;
    s16 var_r0;
    s16 var_r5;

    temp_r0 = *(s16 *)((u8 *)arg1 + 0x4C);
    if (temp_r0 < 0) {
        var_r0 = 0;
        var_r5 = 0;
    } else {
        var_r5 = *(s16 *)((u8 *)arg1 + 0x64);
        var_r0 = (*(s16 *)((u8 *)arg1 + 0x54) * (temp_r0 & 3)) + *(s16 *)((u8 *)arg1 + 0x66);
    }
    *(s16 *)((u8 *)arg1 + 0x8) = var_r5;
    *(s16 *)((u8 *)arg1 + 0xA) = var_r0;
    *arg0 = *(s32 *)fn_8013F748(arg1, (void *)((u8 *)arg1 + 0x4C));
}

void fn_80163E50(void *arg0) {
    *(s16 *)((char *)arg0 + 0x12) = 2;
    *(s16 *)((char *)arg0 + 0x14) = 2;
    *(s16 *)((char *)arg0 + 0x16) = 0x106;
    *(s16 *)((char *)arg0 + 0x18) = 0x86;
}

#pragma cplusplus on
extern "C" void fn_80163E70(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v6();
}
#pragma cplusplus reset

void fn_80163E9C(void *arg0) {
    u32 *fn_80037BD0(s32, s16);
    void fn_801475FC(void *, s32);
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    extern u8 lbl_802776F8[];
    s32 temp_r26;
    u32 *temp_r27;
    s32 temp_r30;
    s16 temp_r29;
    s16 var_r31;
    s16 var_r5;
    s32 temp_r4;
    s32 temp_r6;
    void *pad_base;
    u8 var_r0;
    u8 var_r3;

    var_r3 = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        pad_base = lbl_80367240;
        temp_r29 = M2C_FIELD(arg0, s16 *, 0x4C);
        temp_r4 = *(s32 *)((u8 *)pad_base + 0xC);
        temp_r6 = *(s32 *)((u8 *)pad_base + 4);
        temp_r30 = temp_r6 & (*(s32 *)((u8 *)pad_base + 8) ^ temp_r6);
        var_r5 = temp_r29;
        if (temp_r4 & 0x08000008) {
            var_r31 = temp_r29 - 1;
            goto loop_23_check;
        loop_23:
            if ((var_r31 >= 0) && (var_r31 <= 3) && !(M2C_FIELD(arg0, s32 *, 0x60) & 1)) {
                var_r0 = 0;
            } else if ((var_r31 >= 4) && (var_r31 <= 7) && !(M2C_FIELD(arg0, s32 *, 0x60) & 2)) {
                var_r0 = 0;
            } else {
                temp_r26 = var_r31;
                temp_r27 = fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), (s16)temp_r26);
                if (((s32) M2C_FIELD(arg0, s32 *, 0x5C) == 1) && (*temp_r27 == 0) && ((var_r31 == 0) || ((s16)temp_r26 == 4) || (*fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), (s16)(temp_r26 - 1)) != 0))) {
                    var_r0 = 1;
                } else {
                    var_r0 = *temp_r27 != 0;
                }
            }
            if (var_r0 != 0) {
                goto loop_23_found;
            }
            var_r31 -= 1;
        loop_23_check:
            if (var_r31 >= 0) {
                goto loop_23;
            }
        loop_23_found:
            var_r5 = var_r31;
            if (var_r31 < 0) {
                if (temp_r30 & 0x08000008) {
                    var_r31 = 7;
                    goto loop_44_check;
                loop_44:
                    if ((var_r31 >= 0) && (var_r31 <= 3) && !(M2C_FIELD(arg0, s32 *, 0x60) & 1)) {
                        var_r0 = 0;
                    } else if ((var_r31 >= 4) && (var_r31 <= 7) && !(M2C_FIELD(arg0, s32 *, 0x60) & 2)) {
                        var_r0 = 0;
                    } else {
                        temp_r26 = var_r31;
                        temp_r27 = fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), (s16)temp_r26);
                        if (((s32) M2C_FIELD(arg0, s32 *, 0x5C) == 1) && (*temp_r27 == 0) && ((var_r31 == 0) || ((s16)temp_r26 == 4) || (*fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), (s16)(temp_r26 - 1)) != 0))) {
                            var_r0 = 1;
                        } else {
                            var_r0 = *temp_r27 != 0;
                        }
                    }
                    if (var_r0 != 0) {
                        goto loop_44_found;
                    }
                    var_r31 -= 1;
                loop_44_check:
                    if (var_r31 >= 0) {
                        goto loop_44;
                    }
                loop_44_found:
                    var_r5 = var_r31;
                } else {
                    var_r5 = temp_r29;
                }
            }
        } else if (temp_r4 & 0x04000004) {
            var_r31 = temp_r29 + 1;
            if (var_r31 < 0) {
                var_r31 = 0;
            }
            goto loop_67_check;
        loop_67:
            if ((var_r31 >= 0) && (var_r31 <= 3) && !(M2C_FIELD(arg0, s32 *, 0x60) & 1)) {
                var_r0 = 0;
            } else if ((var_r31 >= 4) && (var_r31 <= 7) && !(M2C_FIELD(arg0, s32 *, 0x60) & 2)) {
                var_r0 = 0;
            } else {
                temp_r26 = var_r31;
                temp_r27 = fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), (s16)temp_r26);
                if (((s32) M2C_FIELD(arg0, s32 *, 0x5C) == 1) && (*temp_r27 == 0) && ((var_r31 == 0) || ((s16)temp_r26 == 4) || (*fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), (s16)(temp_r26 - 1)) != 0))) {
                    var_r0 = 1;
                } else {
                    var_r0 = *temp_r27 != 0;
                }
            }
            if (var_r0 != 0) {
                goto loop_67_found;
            }
            var_r31 += 1;
        loop_67_check:
            if (var_r31 < 8) {
                goto loop_67;
            }
        loop_67_found:
            {
                s16 tmp = -1;
                if (var_r31 < 8) {
                    tmp = var_r31;
                }
                var_r5 = tmp;
            }
            if (var_r5 < 0) {
                if (temp_r30 & 0x04000004) {
                    var_r31 = 0;
                    goto loop_90_check;
                loop_90:
                    if ((var_r31 >= 0) && (var_r31 <= 3) && !(M2C_FIELD(arg0, s32 *, 0x60) & 1)) {
                        var_r0 = 0;
                    } else if ((var_r31 >= 4) && (var_r31 <= 7) && !(M2C_FIELD(arg0, s32 *, 0x60) & 2)) {
                        var_r0 = 0;
                    } else {
                        temp_r26 = var_r31;
                        temp_r27 = fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), (s16)temp_r26);
                        if (((s32) M2C_FIELD(arg0, s32 *, 0x5C) == 1) && (*temp_r27 == 0) && ((var_r31 == 0) || ((s16)temp_r26 == 4) || (*fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), (s16)(temp_r26 - 1)) != 0))) {
                            var_r0 = 1;
                        } else {
                            var_r0 = *temp_r27 != 0;
                        }
                    }
                    if (var_r0 != 0) {
                        goto loop_90_found;
                    }
                    var_r31 += 1;
                loop_90_check:
                    if (var_r31 < 8) {
                        goto loop_90;
                    }
                loop_90_found:
                    {
                        s16 tmp = -1;
                        if (var_r31 < 8) {
                            tmp = var_r31;
                        }
                        var_r5 = tmp;
                    }
                } else {
                    var_r5 = temp_r29;
                }
            }
        }
        if (temp_r29 != var_r5) {
            M2C_FIELD(arg0, s16 *, 0x4C) = var_r5;
            fn_801475FC(lbl_802776F8 + 8, 0x64);
        }
    }
}

#pragma use_lmw_stmw on
void fn_80164350(void *arg0, void *arg1) {
    extern f32 lbl_8036A89C;
    extern f32 lbl_8036A8A0;
    extern f32 lbl_8036A890;
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, f32);
    void fn_8008BF68(s16, s32, u8);
    void fn_80009B80(s32);
    s16 temp_r24;
    s16 temp_r27;
    s16 var_r28;
    s16 var_r29;
    u8 var_r30;
    s32 var_r0;
    s16 temp_r0;
    s16 temp_r31;
    s16 var_r24;
    s16 temp_r26_2;
    s32 var_r3;

    ((void (*)(void *))((void **)M2C_FIELD(arg0, void **, 0x00))[5])(arg0);

    if (M2C_FIELD(arg0, s16 *, 0x4C) >= 0) {
        temp_r31 = M2C_FIELD(arg0, s16 *, 0x54);
        var_r29 = temp_r31;
        temp_r24 = M2C_FIELD(arg0, s16 *, 0x64);
        var_r28 = temp_r24;
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x4C);
        temp_r27 = (s16)((s32)((s32)temp_r0 * (s32)temp_r31) + (s32)M2C_FIELD(arg0, s16 *, 0x66));
        if (temp_r0 >= 4 && temp_r0 <= 7) {
            temp_r27 = (s16)((s32)temp_r27 + (s32)(s16)((s16 (*)(void *))((void **)M2C_FIELD(arg0, void **, 0x00))[11])(arg0));
        }
        if (M2C_FIELD(arg0, s16 *, 0x52) < 0) {
            M2C_FIELD(arg0, s16 *, 0x50) = temp_r24;
            M2C_FIELD(arg0, s16 *, 0x52) = temp_r27;
        } else {
            M2C_FIELD(arg0, s16 *, 0x50) = (s16)((s32)(M2C_FIELD(arg0, s16 *, 0x50) + temp_r24 + 1) >> 1);
            M2C_FIELD(arg0, s16 *, 0x52) = (s16)((s32)(M2C_FIELD(arg0, s16 *, 0x52) + temp_r27 + 1) >> 1);
        }
        if (M2C_FIELD(arg0, u8 *, 0x48) != 0) {
            var_r30 = 0;
            var_r3 = 0;
            if (M2C_FIELD(arg1, u8 *, 0x2D) == 0 && M2C_FIELD(arg1, u8 *, 0x2E) == 0) {
                var_r3 = 1;
                if (M2C_FIELD(arg1, u32 *, 0x34) != 0) {
                    var_r0 = (u32)M2C_FIELD((void *)M2C_FIELD(arg1, u32 *, 0x38), u32 *, 0x08);
                } else {
                    var_r0 = 0;
                }
                if (var_r0 == (u32)arg0) {
                    var_r30 = 1;
                }
            }
            fn_8000A258();
            fn_80009C0C(lbl_8036A89C);
            fn_8000A248();
            fn_8008BF68(M2C_FIELD(arg0, s16 *, 0x50),
                        (s32)(s16)M2C_FIELD(arg0, s16 *, 0x52) + ((s32)(s16)M2C_FIELD(arg0, s16 *, 0x64) - (s32)var_r3) >> 1,
                        var_r30);
            fn_8000A258();
            fn_80009C0C(lbl_8036A8A0);
            fn_8000A248();
            ((void (*)(void *, s16, s16, s16, s16, u8))((void **)M2C_FIELD(arg0, void **, 0x00))[16])(arg0, 0, temp_r27,
                             (s16)(M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)),
                             temp_r31, var_r30);
        }
    }

    if (M2C_FIELD(arg0, u8 *, 0x49) != 0) {
        ((void (*)(void *, void *))((void **)M2C_FIELD(arg0, void **, 0x00))[5])(arg0, arg1);
        fn_8000A258();
        fn_80009C0C(lbl_8036A890);
        fn_8000A248();
        temp_r27 = M2C_FIELD(arg0, s16 *, 0x4E);
        var_r24 = (s16)((s32)((s32)temp_r27 * (s32)var_r29) + (s32)M2C_FIELD(arg0, s16 *, 0x66));
        var_r3 = fn_800102BC(-1, lbl_8036A8A0);
        temp_r26_2 = (s16)(((s32)M2C_FIELD(arg0, s16 *, 0x54) - var_r3) >> 1);
        if (temp_r27 >= 4 && temp_r27 <= 7) {
            var_r24 = (s16)((s32)var_r24 + (s32)(s16)((s16 (*)(void *))((void **)M2C_FIELD(arg0, void **, 0x00))[11])(arg0));
        }
        fn_8000A258();
        fn_80009B80(0x40);
        fn_8000A248();
        fn_8008BF68(var_r28, (s32)(s16)var_r24 + (s32)(s16)temp_r26_2, 0);
        fn_8000A258();
        fn_80009B80(0x80);
        fn_8000A248();
    }
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
#pragma cplusplus on
extern "C" void fn_801645D8(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(s32) = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual s16 v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual s32 v12(u32 *) = 0;
        virtual void v13(s16, s16, s32, u32 *, s32) = 0;
        u8 pad4[6];
        s16 unkA;
        s16 unkC;
        s16 unkE;
        s16 unk10;
        s16 unk12;
        s16 unk14;
        s16 unk16;
        s16 unk18;
        u8 pad1A[0x34 - 0x1A];
        u32 unk34;
        u8 pad38[0x4A - 0x38];
        u8 unk4A;
        u8 pad4B[0x54 - 0x4B];
        s16 unk54;
        u8 pad56[2];
        s32 unk58;
        s32 unk5C;
        u32 unk60;
        s16 unk64;
        s16 unk66;
        s16 unk68;
        s16 unk6A;
        s16 unk6C;
        s16 unk6E;
    };
    void fn_8016070C(s32, s32, s32, s32, s32, s32);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A174(s32, u16);
    void fn_8000A248(void);
    void *fn_800A8A88(s32);
    s32 fn_80010B78(void *, s32, f32);
    s32 fn_800102BC(s32, f32);
    void fn_80007898(s32);
    void fn_80007858(f32, f32);
    s32 *fn_8018D900(s32);
    void fn_80007668(s32 *);
    void fn_80007124(void *);
    void fn_80007884(void);
    void fn_8013F748(void *, s16 *, s16 *);
    void fn_80009BC0(void (*)(void *), s16 *);
    void fn_8013F920(void *);
    u32 *fn_80037BD0(s32, s32);
    void *fn_8003A064(void *);
    void *fn_8007BA4C(void *, s32);
    void fn_8007B4D8(s32, s32, s32, void *, s32, s32);
    void fn_8007B990(void *);
    void fn_80009B98(void);
    extern f32 lbl_8036A890;
    extern f32 lbl_8036A8A0;
    extern f32 lbl_8036A8A4;
    s16 y;
    s16 half;
    s16 slot;
    void *text;
    s16 t;
    s16 ox;
    s16 x;
    s32 accum;
    s16 row_h;
    u32 *item;
    s16 *rect;
    s16 w;
    s16 h;
    void *obj;
    s16 mid;
    s16 dw;
    s16 dh;
    void *info;
    long thresh;
    s32 sp8;
    Obj *self;
    s32 idx;

    self = (Obj *)arg0;
    idx = arg1;
    self->v2();
    fn_8016070C(0, 0, (s16)(self->unkE - self->unkA), (s16)(self->unk10 - self->unkC), 0xb3, 0x10);

    fn_8000A258();
    fn_80009C0C(lbl_8036A890);
    fn_8000A174(0, (u16)(self->unk34 | 0x13));
    fn_8000A248();
    text = fn_800A8A88(*(s32 *)((u8 *)self->unk58 + 0x188));
    t = (s16)(self->unkE - self->unkA);
    ox = (s16)((t - fn_80010B78(text, -1, lbl_8036A8A0)) >> 1);
    t = (s16)((0x1a - fn_800102BC(-1, lbl_8036A8A0)) >> 1);
    fn_80007898(6);
    fn_80007858((f32)ox, (f32)t);
    sp8 = *fn_8018D900(2);
    fn_80007668(&sp8);
    fn_80007124(text);
    fn_80007884();

    self->v3(idx);

    h = (s16)(self->unk18 - self->unk14);
    rect = &self->unk68;
    w = (s16)(self->unk16 - self->unk12);
    self->unk68 = 0;
    self->unk6A = 0;
    self->unk6C = w;
    self->unk6E = h;
    fn_8013F748(self, rect, rect);
    rect = &self->unk6C;
    fn_8013F748(self, rect, rect);

    fn_8000A258();
    fn_80009C0C(lbl_8036A890);
    fn_80009BC0(fn_8013F920, &self->unk68);
    fn_8000A248();

    row_h = self->unk54;
    slot = 0;
    x = self->unk64;
    accum = 0;
    half = (s16)((row_h - 0x18) >> 1);
    goto loop_test;
loop_body:
    y = (s16)(accum + self->unk66 + half);
    if ((slot >= 4) && (slot <= 7)) {
        y += self->v9();
    }
    item = fn_80037BD0(self->unk58, slot);
    if (*item != 0U) {
        self->v13(x, y, 0, item, self->v12(item));
    }
    accum += row_h;
    slot += 1;
loop_test:
    if (slot < 8) {
        goto loop_body;
    }

    if (self->unk4A != 0) {
        fn_8000A258();
        fn_80009C0C(lbl_8036A8A4);
        fn_8000A248();
        obj = fn_8007BA4C(fn_8003A064(*(void **)&self->unk58), 0x100);
        thresh = 0x130;
        mid = (s16)(self->unkA + ((s16)(self->unkE - self->unkA) >> 1));
        *(u16 *)((u8 *)obj + 0x46) = (u16)(*(u16 *)((u8 *)obj + 0x46) & ~1);
        *(u16 *)((u8 *)obj + 0x46) =
            (u16)(*(u16 *)((u8 *)obj + 0x46) | (thresh > mid));
        dw = (s16)(self->unk16 - self->unk12);
        dh = (s16)(self->unk18 - self->unk14);
        info = *(void **)((u8 *)obj + 0x34);
        fn_8007B4D8((s16)(dw >> 1),
                    (s16)(dh + *(s16 *)((u8 *)info + 0x1E)),
                    0xFF, obj, self->unk14, dw);
        fn_8007B990(obj);
    }

    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
}
#pragma cplusplus reset
#pragma global_optimizer reset
#pragma use_lmw_stmw reset
void fn_80164940(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    fn_8008AB7C(arg1 + (arg3 >> 1), arg2 + (arg4 >> 1), arg3, 0x18, 0x19, 0x4C, arg5);
}

void fn_80164994(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5) {
    void fn_8008D510(void *, s32, s16, s16);
    s16 t1;
    s16 t2;
    void *p = arg4;
    t2 = (s16)arg2;
    t1 = (s16)arg1;
    fn_8008D510(p, arg5, t1, t2);
}

s32 fn_801649C8(void *arg0, s32 *arg1) {
    u8 (*temp_r12)(s32 *, s32);

    temp_r12 = M2C_FIELD(arg0, u8 (**)(s32 *, s32), 0x70);
    if (temp_r12 != NULL) {
        return temp_r12(arg1, M2C_FIELD(arg0, s32 *, 0x74)) != 0;
    }
    return fn_80093DA8(M2C_FIELD(arg0, s32 *, 0x58), *arg1);
}

void fn_80164A24(void *arg0) {
    fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58));
}

void fn_80164A48(void *arg0) {
    void fn_800947E0(void *);
    void *x = *(void **)((u8 *)arg0 + 0x58);
    if (x != NULL) {
        fn_800947E0(x);
    }
}

#pragma global_optimizer off
s32 fn_80164BB0(void *arg0) {
    u32 *fn_80037BD0(s32, s32);
    s16 slot = *(s16 *)((u8 *)arg0 + 0x4C);
    s32 idx = slot;

    if ((idx < 0) || (idx > 7)) {
        return 0;
    }
    return (s32)fn_80037BD0(*(s32 *)((u8 *)arg0 + 0x58), idx);
}
#pragma global_optimizer on
void fn_80164BF0(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *);
    M2C_UNK spC;
    s16 spA;
    s16 sp8;
    s16 temp_r0;
    s16 var_r30;
    s16 var_r31;

    temp_r0 = M2C_FIELD(arg1, s16 *, 0x4C);
    if (temp_r0 < 0) {
        var_r30 = 0;
        var_r31 = 0;
    } else {
        var_r31 = M2C_FIELD(arg1, s16 *, 0x64);
        var_r30 = (temp_r0 * M2C_FIELD(arg1, s16 *, 0x54)) + M2C_FIELD(arg1, s16 *, 0x66);
        if ((temp_r0 >= 4) && (temp_r0 <= 7)) {
            var_r30 += M2C_FIELD(M2C_FIELD(arg1, void **, 0), s32 (**)(void *), 0x2C)(arg1);
        }
    }
    sp8 = var_r31;
    spA = var_r30;
    *arg0 = *fn_8013F748(arg1, &spC, &sp8);
}

s16 fn_80164CAC(void *arg0) {
    u32 *fn_80037BD0(s32, s32);
    s8 i;
    s32 ret;

    i = 4;
    while (i < 8) {
        if (*fn_80037BD0(*(s32 *)((u8 *)arg0 + 0x58), i) == 0) {
            break;
        }
        i++;
    }
    ret = -1;
    if (i < 8) {
        ret = i;
    }
    return ret;
}

s16 fn_80164D24(void *arg0) {
    u32 *fn_80037BD0(s32, s32);
    s8 i;
    s32 ret;

    i = 0;
    while (i < 4) {
        if (*fn_80037BD0(*(s32 *)((u8 *)arg0 + 0x58), i) == 0) {
            break;
        }
        i++;
    }
    ret = -1;
    if (i < 4) {
        ret = i;
    }
    return ret;
}

#pragma scheduling reset
s16 fn_80164FBC(void *arg0, s16 arg1) {
    for (; arg1 >= 0; arg1--) {
        if (IsSlotAvailable(arg0, arg1)) {
            break;
        }
    }
    return arg1;
}

void fn_801650DC(void *arg0) {
    *(s16 *)((char *)arg0 + 0x12) = 2;
    *(s16 *)((char *)arg0 + 0x14) = 0x1A;
    *(s16 *)((char *)arg0 + 0x16) = 0x106;
    *(s16 *)((char *)arg0 + 0x18) = 0x12A;
}

void *fn_80165100(void *arg0, s16 arg1) {
    void fn_8013F2A4(void *, s32);
    void fn_800C428C(void *);
    extern u8 lbl_80293BB8[];
    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80293BB8;
        fn_8013F2A4(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80165160(void *arg0, s16 arg1) {
    M2C_UNK fn_8013F2A4(void *, s32);
    M2C_UNK fn_800C428C(void *);
    extern u8 lbl_80293B30[];
    extern u8 lbl_80293BB8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80293B30;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293BB8;
            fn_8013F2A4(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_801651D0(void) {
    return 0x18;
}

s32 fn_801651D8(void) {
    return 0x10;
}

void *fn_801651E0(void *arg0, s16 arg1) {
    M2C_UNK fn_8013F2A4(void *, s32);
    M2C_UNK fn_800C428C(void *);
    extern u8 lbl_80293B74[];
    extern u8 lbl_80293BB8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80293B74;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293BB8;
            fn_8013F2A4(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_80165250(void) {
    return 0;
}

#pragma cplusplus on
extern "C" void fn_80165300(void *arg0) {
    void fn_80154138(s32, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80154138(0, 0, 0x10);
}

#pragma cplusplus on
extern "C" void fn_8016533C(void *arg0, s32 arg1) {
    void fn_80007124(void);
    void fn_80007668(s32 *);
    void fn_80007858(f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_8000A174(s32, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    s32 fn_800102BC(s32, f32);
    s32 fn_80010B78(void *, s32, f32);
    void *fn_800C93EC(void *);
    void fn_800C96F8(void *, void *, s32);
    void fn_800C9A60(void *, s32);
    void fn_800C9ABC(void *, void *, void *);
    u8 fn_80166D8C(void *);
    s32 *fn_8018D900(u8);
    void *fn_80234198(void *, void *);
    void fn_802343E0(void *, void *);
    char *fn_80234450(char *, char *);
    s32 strlen(char *);
    extern u8 lbl_80277720[];
    extern u8 lbl_80330D68[];
    extern f32 lbl_8036A8B4;
    extern f32 lbl_8036A8B8;

    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(s32) = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8(s32) = 0;
    };

    char sp1C[0x104];
    char sp10[0xC];
    s32 spC;
    char sp8[8];
    s16 x;
    s16 y;
    s16 avail;
    s16 t;
    s16 w;
    s16 r;
    s16 h;
    s16 top;
    void *p;
    char *s;
    void *str;

    fn_800C9ABC(sp10, fn_800C93EC((u8 *)arg0 + 0x3c), sp8);
    if (fn_80166D8C(lbl_80330D68) != 0) {
        if (*(s16 *)(lbl_80330D68 + 0xd8) == 0) {
            fn_80234450(sp1C, (char *)fn_800C93EC(sp10));
            p = fn_80234198(sp1C, (u8 *)lbl_80277720 + 0x1d);
            if (p != NULL) {
                *(u8 *)((u8 *)p + 5) = 0;
                fn_802343E0(sp1C, fn_8000E0E4((u8 *)lbl_80277720 + 0x22));
                goto do_set;
            }
        } else {
            fn_80234450(sp1C, (char *)((u8 *)lbl_80277720 + 0x36));
        do_set:
            fn_800C96F8((u8 *)arg0 + 0x3c, sp1C, strlen(sp1C));
        }
    }
    ((Obj *)arg0)->v8(arg1);
    ((Obj *)arg0)->v3(arg1);
    fn_8000A258();
    fn_80009C0C(lbl_8036A8B4);
    fn_8000A174(0, (u16)(*(u32 *)((u8 *)arg0 + 0x34) | 0x13));
    fn_8000A248();
    avail = (s16)((*(s16 *)((u8 *)arg0 + 0xe) - *(s16 *)((u8 *)arg0 + 0xa))
                  - (*(s16 *)((u8 *)arg0 + 0x4e) + *(s16 *)((u8 *)arg0 + 0x52)));
    if (fn_800C93EC((u8 *)arg0 + 0x3c) != NULL) {
        switch (*(s32 *)((u8 *)arg0 + 0x48)) {
        case 0:
            x = *(s16 *)((u8 *)arg0 + 0x4e);
            break;
        case 1:
            str = fn_800C93EC((u8 *)arg0 + 0x3c);
            t = *(s16 *)((u8 *)arg0 + 0x4e);
            x = (s16)(t + ((avail - fn_80010B78(str, -1, lbl_8036A8B8)) >> 1));
            break;
        case 2:
            str = fn_800C93EC((u8 *)arg0 + 0x3c);
            w = *(s16 *)((u8 *)arg0 + 0xe) - *(s16 *)((u8 *)arg0 + 0xa);
            r = *(s16 *)((u8 *)arg0 + 0x52);
            x = (s16)(w - (r + fn_80010B78(str, -1, lbl_8036A8B8)));
            break;
        }
        h = *(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0xc);
        top = *(s16 *)((u8 *)arg0 + 0x50);
        y = (s16)((s32)(top + (h - fn_800102BC(-1, lbl_8036A8B8))) >> 1);
        fn_80007898(6);
        fn_80007858((f32)x, (f32)y);
        spC = *fn_8018D900(*(u8 *)((u8 *)arg0 + 0x4c));
        fn_80007668(&spC);
        fn_800C93EC((u8 *)arg0 + 0x3c);
        fn_80007124();
        fn_80007884();
    }
    s = (char *)fn_800C93EC(sp10);
    fn_800C96F8((u8 *)arg0 + 0x3c, s, strlen(s));
    fn_800C9A60(sp10, -1);
}
#pragma cplusplus reset

#pragma cplusplus reset
void fn_801658DC(s32 arg0, s32 arg1) {
    s32 fn_8000E0E4(s32);
    s32 strlen(void);
    void fn_800C96F8(s32, s32, s32);

    s32 temp_r31 = fn_8000E0E4(arg1);
    fn_800C96F8(arg0 + 0x3C, temp_r31, strlen());
}

void *fn_8016592C(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    M2C_UNK fn_800C9A60(void *, s32);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_80293C00[];
    extern u8 lbl_80293C2C[];
    extern u8 lbl_80293C84[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80293C00;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293C2C;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80293C84;
                fn_800C9A60((u8 *)arg0 + 0x3C, -1);
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                    if (arg0 != NULL) {
                        M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                    }
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_801659D4(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    M2C_UNK fn_800C9A60(void *, s32);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_80293C2C[];
    extern u8 lbl_80293C84[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80293C2C;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293C84;
            fn_800C9A60((u8 *)arg0 + 0x3C, -1);
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80165A6C(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    M2C_UNK fn_800C9A60(void *, s32);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_80293C58[];
    extern u8 lbl_80293C84[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80293C58;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293C84;
            fn_800C9A60((u8 *)arg0 + 0x3C, -1);
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80165B04(void *arg0) {
    return *(void **)((char *)arg0 + 0x50);
}

s32 fn_80165B0C(void *arg0) {
    return *(s32 *)((char *)arg0 + 0x4C);
}

s32 fn_80165B14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

void fn_80165B1C(void) {
    M2C_UNK fn_80040844();
    M2C_UNK fn_800472D4();
    fn_80040844();
    fn_800472D4();
}

void *fn_80165B40(void *arg0, s16 arg1) {
    void *fn_80040844(void);
    void fn_80041254(void *);
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern void *lbl_80293CB0[];

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x40) = lbl_80293CB0;
        fn_80041254(fn_80040844());
        fn_800DF724(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80165BAC(void *arg0, s32 arg2) {
    M2C_UNK fn_80041514(s32);
    M2C_UNK fn_800C8DCC(M2C_UNK *, s32, s32 *);
    s32 fn_800C93EC(s32 *);
    M2C_UNK fn_800C9A60(s32 *, M2C_UNK);
    M2C_UNK fn_800C9ABC(s32 *, void *, M2C_UNK *);
    M2C_UNK fn_800DF7A0();
    extern M2C_UNK lbl_802777C8;
    extern M2C_UNK lbl_80293CB0;
    extern s8 lbl_803680E0;
    M2C_UNK sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r31;

    fn_800DF7A0();
    M2C_FIELD(arg0, M2C_UNK **, 0x40) = &lbl_80293CB0;
    sp1C = 0;
    sp18 = 0;
    sp20 = 0;
    sp1C = 0;
    fn_800C9ABC(&spC, &lbl_802777C8 + 0x2D, &sp8);
    fn_800C8DCC(&sp24, arg2, &spC);
    fn_800C96F8(&sp18, &sp24, strlen(&sp24));
    fn_800C9A60(&spC, -1);
    temp_r31 = fn_800C93EC(&sp18);
    fn_80040844();
    fn_80041514(temp_r31);
    lbl_803680E0 = 1;
    fn_800C9A60(&sp18, -1);
    return arg0;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void *fn_80165C84(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 fn_80040844(void);
    void fn_80041514(s32, void *);
    void *fn_800C42D8(s32);
    void fn_800C8DCC(void *, void *, void *);
    void fn_800C9120(void *, s32);
    void *fn_800C91EC(void *, void *, void *);
    void *fn_800C93EC(void *);
    void fn_800C9A60(void *, s16);
    void fn_800C9ABC(void *, void *, void *);
    void fn_800CB90C(void *, void *, void *);
    void fn_800DFAE0(void *, void *, void *, void *, void *);
    extern u8 lbl_802777C8[];
    extern void *lbl_80293CB0[];
    extern s8 lbl_803680E0;

    typedef struct {
        u32 size;
        u32 cap;
        char *data;
    } String;

    u8 spB4[0x20];
    u8 sp94[0x20];
    u8 sp74[0x20];
    String sp68;
    String sp5C;
    String sp50;
    String sp44;
    String sp38;
    String sp2C;
    String sp20;
    u8 sp1C[4];
    u8 sp18[4];
    u8 sp14[4];
    u8 sp10[4];
    u8 spC[4];
    u8 sp8[4];
    void *a3;
    void *a1;
    s8 flag2;
    void *self;
    void *a2;

    self = arg0;
    a1 = arg1;
    a2 = arg2;
    a3 = arg3;
    fn_800C9ABC(&sp68, lbl_802777C8 + 0x35, &sp1C);
    fn_800C9ABC(&sp5C, lbl_802777C8 + 0x43, &sp18);
    fn_800DFAE0(self, a1, &sp68, a2, &sp5C);
    fn_800C9A60(&sp5C, -1);
    fn_800C9A60(&sp68, -1);
    *(void **)((u8 *)self + 0x40) = lbl_80293CB0;
    a2 = fn_800C93EC(a3);
    fn_80041514(fn_80040844(), a2);
    a1 = (void *)0;
    lbl_803680E0 = 1;
    flag2 = 0;
    a2 = fn_800C42D8(0x60);
    if ((s32)a2 != 0) {
        fn_800C9ABC(&sp20, lbl_802777C8, &sp8);
        a1 = (void *)1;
        fn_800CB90C(&sp2C, a3, lbl_802777C8 + 5);
        flag2 = 1;
        a2 = fn_800C91EC(a2, &sp2C, &sp20);
    }
    if (flag2 != 0) {
        fn_800C9A60(&sp2C, -1);
    }
    if ((s8)(s32)a1 != 0) {
        fn_800C9A60(&sp20, -1);
    }
    fn_800C9ABC(&sp38, lbl_802777C8 + 0xF, &spC);
    fn_800C8DCC(&sp74, a2, &sp38);
    *(void **)((u8 *)self + 0x48) = *(void **)sp74;
    fn_800C9A60(&sp38, -1);
    fn_800C9ABC(&sp44, lbl_802777C8 + 0x18, &sp10);
    fn_800C8DCC(&sp94, a2, &sp44);
    *(void **)((u8 *)self + 0x4C) = *(void **)sp94;
    fn_800C9A60(&sp44, -1);
    fn_800C9ABC(&sp50, lbl_802777C8 + 0x23, &sp14);
    fn_800C8DCC(&spB4, a2, &sp50);
    *(void **)((u8 *)self + 0x50) = *(void **)spB4;
    fn_800C9A60(&sp50, -1);
    fn_800C9120(a2, 1);
    return self;
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset
void fn_80165E90(void *arg0, s32 arg1, f32 arg2) {
    (void)arg0;
    (void)arg1;
    (void)arg2;
}

#pragma use_lmw_stmw reset

s32 fn_801660A8(void) {
    return (M2C_FIELD(&lbl_80330708, u8 *, 0x10) * 7) + 0x39A81;
}

u32 fn_8016614C(s32 arg0) {
    extern u8 lbl_80330708[];
    s32 temp_r0;
    u32 temp_r3;
    u32 var_r6;

    temp_r0 = arg0 * 4;
    var_r6 = *(u32*)(temp_r0 + 0x14);
    if (arg0 == 2) {
        return var_r6;
    }
    if (arg0 == 3) {
        arg0 = 2;
    }
    if (*(u8*)(0xA6 + lbl_80330708) == 1) {
        temp_r3 = *(u32*)(arg0 * 4 + 0x24);
        if (temp_r3 != 0U) {
            var_r6 = temp_r3;
        }
    } else if (*(u8*)(0xA6 + lbl_80330708) == 2) {
        temp_r3 = *(u32*)(arg0 * 4 + 0x30);
        if (temp_r3 != 0U) {
            var_r6 = temp_r3;
        }
    }
    return var_r6;
}

u8 fn_801661CC(void *arg0) {
    extern u8 lbl_80330708[];
    switch ((s32) lbl_80330708[0xA6]) { /* irregular */
    case 0:
        return M2C_FIELD(arg0, u8 *, 0x3D);
    case 1:
        return M2C_FIELD(arg0, u8 *, 0x3E);
    case 2:
        return M2C_FIELD(arg0, u8 *, 0x3F);
    case 3:
        return M2C_FIELD(arg0, u8 *, 0x40);
    default:
        return 0U;
    }
}

void fn_80166228(void) {
    void fn_8003F670(void *);
    void fn_80013D4C(void);
    void *p = *(void **)&lbl_803680E8;
    if (p != NULL) {
        fn_8003F670(p);
    }
    fn_80013D4C();
}

void fn_80166258(void) {
    extern u8 lbl_802778A8[];
    extern u16 lbl_803680E8;

    void *fn_80019F04(void);
    void fn_80231D94(void *, const char *, ...);
    void fn_80013E24(void *);
    s32 fn_8003FCCC(void *);
    void fn_8005C4C4(void *, s32);

    u8 buffer[0x20];
    u8 *obj;

    obj = (u8 *)fn_80019F04();

    fn_80231D94(
        buffer,
        (char *)(lbl_802778A8 + 0xCE),
        *(u32 *)(obj + 8)
    );

    fn_80013E24(buffer);

    if (*(u32 *)(obj + 0x0C) == 0) {
        lbl_803680E8 = 0;
    } else {
        fn_80231D94(
            buffer,
            (char *)(lbl_802778A8 + 0xDD),
            *(u32 *)(obj + 0x0C)
        );

        lbl_803680E8 = fn_8003FCCC(buffer);
    }

    fn_8005C4C4(buffer, 4);
}

void *fn_801662F0(void **arg0) {
    extern u16 lbl_802778A8[];
    void *fn_8000E0E4(void *);
    void *v;

    v = *arg0;
    if (v == NULL) {
        return (u8 *)lbl_802778A8 + 0xE7;
    }
    return fn_8000E0E4(v);
}

extern u16 lbl_8028DED0[];
void *fn_80166940(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern u8 lbl_80293CD0[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x40) = lbl_80293CD0;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0x40) = lbl_8028DED0;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801669B0(void* arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    
    // Load various data from globals
    temp_r3 = lbl_802EF4C8[arg1];
    temp_r4 = *(u32*)&lbl_80278080[temp_r3 * 2 + 0x10];
    temp_r5 = *(u32*)&lbl_80294604[temp_r3 * 2 + 0x10];
    temp_r6 = *(u16*)&lbl_80330708[arg1 * 2];
    temp_r7 = *((u16 *)&lbl_803680E8 + arg1 * 2);
    temp_r8 = *(u16*)&lbl_80278080[temp_r3 * 2 + 0x12];
    
    // Store values to arg0
    *(u32*)arg0 = temp_r4;
    *(u32*)((char*)arg0 + 4) = temp_r5;
    *(u16*)((char*)arg0 + 8) = (u16)temp_r6;
    *(u16*)((char*)arg0 + 0xA) = (u16)temp_r7;
    *(u16*)((char*)arg0 + 0xC) = (u16)temp_r8;
}

void fn_80166CB0(s32 arg0) {
    void fn_801475FC(void *, s32);
    void fn_8000C188(s32);
    extern void *lbl_80367240;
    extern u8 lbl_80330D68[];
    extern f32 lbl_8036A92C;
    extern s32 lbl_8036A938;
    extern f32 lbl_8036A93C;
    extern f32 lbl_8036A940;
    extern u8 lbl_80277A20[];
    s32 buttons;
    s32 flags;
    f32 f5;
    f32 f3;
    f32 f7;
    f32 f6;
    f32 f2;
    f32 f1;
    u8 *p;

    buttons = *(s32 *)((u8 *)lbl_80367240 + 4);
    if (buttons & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ buttons) & 0x0F001F7F) {
        p = lbl_80330D68;
        flags = *(s32 *)p;
        if (!(flags & 1)) {
            f5 = lbl_8036A93C + *(f32 *)(p + 0xDC);
            f7 = *(f32 *)(p + 0xF4);
            f6 = *(f32 *)(p + 0xF8);
            f2 = *(f32 *)(p + 0x10C);
            f1 = *(f32 *)(p + 0x110);
            f3 = lbl_8036A940 + *(f32 *)(p + 0xE0);
            *(s32 *)p = flags | lbl_8036A938;
            *(f32 *)(p + 0xFC) = f7;
            *(f32 *)(p + 0x100) = f6;
            *(f32 *)(p + 0x104) = f5;
            *(f32 *)(p + 0x108) = f3;
            *(f32 *)(p + 0x114) = f2;
            *(f32 *)(p + 0x118) = f1;
            *(f32 *)(p + 0x11C) = lbl_8036A92C;
            *(f32 *)(p + 0x120) = lbl_8036A92C;
            *(s32 *)(p + 0xCC) = 8;
            fn_801475FC(lbl_80277A20 + 0x6C, 0x64);
        }
        fn_8000C188(arg0);
    }
}

s32 fn_80166D8C(void) {
    void *fn_8000C0C0(void *);
    extern u8 lbl_80293D20[];
    void *p;

    p = fn_8000C0C0(lbl_80293D20);
    if (p == NULL) {
        return 0;
    }
    return *(u8 *)((u8 *)p + 0x2E) == 0;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_80166DD0(void *arg0, void **arg1, f32 farg0, f32 farg1) {
    u8 *fn_8000E0E4(void *);
    void *fn_8001ED1C(void *);
    s32 fn_80010B78(void *, s32, f32);
    void *fn_8001CB64(void **);
    void *memcpy(void *, void *, u32);
    extern f32 lbl_8036A93C;
    extern f32 lbl_8036A940;
    extern f32 lbl_8036A944;
    extern f32 lbl_8036A948;
    extern f32 lbl_8036A94C;
    extern f32 lbl_8036A950;
    extern f32 lbl_8036A954;
    extern f32 lbl_8036A958;
    extern f32 lbl_8036A95C;
    extern f32 lbl_8036A960;
    extern f32 lbl_8036A964;
    extern f32 lbl_8036A968;
    extern f32 lbl_8036A96C;

    u8 *var_r29;
    s32 var_r28;
    s32 var_r27;
    s32 var_r26;
    u8 *var_r25;
    u8 *var_r4;
    f32 var_f7;
    f32 var_f6;
    f32 var_f5;
    f32 var_f2;
    u8 temp_r3;
    s32 temp_r3_2;
    u8 var_r0;
    u8 var_r0_2;
    u8 var_r0_3;
    u8 var_r0_4;
    s32 var_idx;
    u8 var_z;
    s32 lim;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    u64 flags;

    lim = -1;
    if (!(*(u32 *)arg0 & 1)) {
        *(f32 *)((u8 *)arg0 + 0xe4) = *(f32 *)((u8 *)arg0 + 0xdc);
        *(f32 *)((u8 *)arg0 + 0xe8) = *(f32 *)((u8 *)arg0 + 0xe0);
        *(f32 *)((u8 *)arg0 + 0xec) = farg0;
        *(f32 *)((u8 *)arg0 + 0xf0) = farg1;
        *(void **)((u8 *)arg0 + 0xc8) = arg1;
        var_r29 = fn_8000E0E4(fn_8001ED1C(*arg1));
        var_r28 = 0;
        ((u8 *)arg0)[4] = var_r28;
        var_r27 = 0;
        var_r4 = var_r29;
        ((u8 *)arg0)[0x44] = var_r28;
        var_r26 = var_r27;
        var_r25 = (u8 *)arg0 + (var_r28 << 6);
        ((u8 *)arg0)[0x84] = var_r28;
loop_3:
        temp_r3 = *var_r29;
        if ((s8)temp_r3 != 0) {
            if ((s8)temp_r3 != 0xa) {
                goto advance_char;
            }
        }
        if (var_r27 > 0) {
            memcpy(var_r25 + 4, var_r4, (u32)var_r27);
        }
        var_idx = var_r27 + 4;
        var_z = 0;
        var_r25[var_idx] = var_z;
        temp_r3_2 = fn_80010B78(var_r25 + 4, lim, lbl_8036A944);
        var_r25 += 0x40;
        var_r26 += 1;
        if (temp_r3_2 > var_r28) {
            var_r28 = temp_r3_2;
        }
        if ((s8)var_r29[0] == 0) {
            goto loop_done;
        }
        var_r29 += 1;
        var_r27 = 0;
        var_r4 = var_r29;
        goto loop_3;
advance_char:
        var_r29 += 1;
        var_r27 += 1;
        goto loop_3;
loop_done:
        *(s32 *)((u8 *)arg0 + 0xd0) = var_r26;
        *(s32 *)((u8 *)arg0 + 0xd4) = var_r28;
        temp_r3_3 = *arg1;
        if (temp_r3_3 != 0) {
            var_r0 = *(u8 *)((u8 *)temp_r3_3 + 0x12);
        } else {
            var_r0 = 0xc;
        }
        if (var_r0 == 7) {
            temp_r3_4 = fn_8001CB64(arg1);
            flags = *(u64 *)temp_r3_4;
            if (flags & 4ULL) {
                if ((f32)*(s32 *)((u8 *)arg0 + 0xd4) < lbl_8036A948) {
                    *(s32 *)((u8 *)arg0 + 0xd4) = (s32)lbl_8036A948;
                }
                *(s32 *)((u8 *)arg0 + 0xd0) += 1;
                goto after_type;
            }
        }
        temp_r3_5 = *arg1;
        if (temp_r3_5 != 0) {
            var_r0_2 = *(u8 *)((u8 *)temp_r3_5 + 0x12);
        } else {
            var_r0_2 = 0xc;
        }
        if (var_r0_2 != 0xb) {
            if (temp_r3_5 != 0) {
                var_r0_3 = *(u8 *)((u8 *)temp_r3_5 + 0x12);
            } else {
                var_r0_3 = 0xc;
            }
            if (var_r0_3 != 0xa) {
                if (temp_r3_5 != 0) {
                    var_r0_4 = *(u8 *)((u8 *)temp_r3_5 + 0x12);
                } else {
                    var_r0_4 = 0xc;
                }
                if (var_r0_4 == 9) {
                    if ((f32)*(s32 *)((u8 *)arg0 + 0xd4) < lbl_8036A94C) {
                        *(s32 *)((u8 *)arg0 + 0xd4) = (s32)lbl_8036A94C;
                    }
                } else {
                    if ((f32)*(s32 *)((u8 *)arg0 + 0xd4) < lbl_8036A950) {
                        *(s32 *)((u8 *)arg0 + 0xd4) = (s32)lbl_8036A950;
                    }
                }
                *(s32 *)((u8 *)arg0 + 0xd0) += 1;
            }
        }
after_type:
        var_f6 = (f32)(*(s32 *)((u8 *)arg0 + 0xd4) + 0x1e);
        var_f7 = (lbl_8036A93C * (f32)*(s32 *)((u8 *)arg0 + 0xd0)) + lbl_8036A954;
        if (var_f6 < lbl_8036A958) {
            var_f6 = lbl_8036A958;
        }
        if (var_f7 < lbl_8036A954) {
            var_f7 = lbl_8036A954;
        }
        var_f5 = lbl_8036A940 + farg1;
        var_f2 = -((lbl_8036A960 * var_f6) - (lbl_8036A95C + farg0));
        if (var_f2 < lbl_8036A964) {
            var_f2 = lbl_8036A95C;
        }
        if ((var_f2 + var_f6) > lbl_8036A968) {
            var_f2 = lbl_8036A968 - var_f6;
        }
        if ((var_f5 + var_f7) > lbl_8036A96C) {
            var_f5 = (var_f5 - lbl_8036A940) - var_f7;
        }
        *(f32 *)((u8 *)arg0 + 0xfc) = *(f32 *)((u8 *)arg0 + 0xf4);
        *(f32 *)((u8 *)arg0 + 0x100) = *(f32 *)((u8 *)arg0 + 0xf8);
        *(f32 *)((u8 *)arg0 + 0x104) = var_f2;
        *(f32 *)((u8 *)arg0 + 0x108) = var_f5;
        *(f32 *)((u8 *)arg0 + 0x114) = *(f32 *)((u8 *)arg0 + 0x10c);
        *(f32 *)((u8 *)arg0 + 0x118) = *(f32 *)((u8 *)arg0 + 0x110);
        *(f32 *)((u8 *)arg0 + 0x11c) = var_f6;
        *(f32 *)((u8 *)arg0 + 0x120) = var_f7;
        *(s32 *)((u8 *)arg0 + 0xcc) = 8;
    }
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
void fn_80167190(void *arg0, void *arg1, f32 farg0, f32 farg1) {
    u8 *fn_8000E0E4(void *);
    s32 fn_80010B78(void *, s32, f32);
    void *memcpy(void *, void *, u32);
    extern f32 lbl_8036A93C;
    extern f32 lbl_8036A940;
    extern f32 lbl_8036A944;
    extern f32 lbl_8036A954;
    extern f32 lbl_8036A958;
    extern f32 lbl_8036A95C;
    extern f32 lbl_8036A960;
    extern f32 lbl_8036A964;
    extern f32 lbl_8036A968;
    extern f32 lbl_8036A96C;

    void *r31;
    u8 *var_r30;
    s32 var_r29;
    s32 var_r28;
    s32 var_r27;
    u8 *var_r26;
    u8 *var_r4;
    f32 var_f2;
    f32 var_f5;
    f32 var_f6;
    f32 var_f7;
    s8 temp_r3;
    s32 temp_r3_2;

    r31 = arg0;
    if (!(*(u32 *)r31 & 1)) {
        *(f32 *)((u8 *)r31 + 0xe4) = *(f32 *)((u8 *)r31 + 0xdc);
        *(f32 *)((u8 *)r31 + 0xe8) = *(f32 *)((u8 *)r31 + 0xe0);
        *(f32 *)((u8 *)r31 + 0xec) = farg0;
        *(f32 *)((u8 *)r31 + 0xf0) = farg1;
        *(s32 *)((u8 *)r31 + 0xc8) = 0;
        if (arg1 != 0) {
            var_r30 = fn_8000E0E4(arg1);
            var_r29 = 0;
            var_r26 = (u8 *)r31 + (var_r29 << 6);
            ((u8 *)r31)[4] = var_r29;
            var_r28 = 0;
            var_r4 = var_r30;
            ((u8 *)r31)[0x44] = var_r29;
            var_r27 = var_r28;
            ((u8 *)r31)[0x84] = var_r29;
            goto loop_3;
advance_char:
            var_r30 += 1;
            var_r28 += 1;
loop_3:
            temp_r3 = (s8)var_r30[0];
            if (temp_r3 != 0) {
                if (temp_r3 != 0xa) {
                    goto advance_char;
                }
            }
            if (var_r28 > 0) {
                memcpy(var_r26 + 4, var_r4, (u32)var_r28);
            }
            var_r26[var_r28 + 4] = 0;
            temp_r3_2 = fn_80010B78(var_r26 + 4, -1, lbl_8036A944);
            var_r26 += 0x40;
            var_r27 += 1;
            if (temp_r3_2 > var_r29) {
                var_r29 = temp_r3_2;
            }
            if ((s8)var_r30[0] != 0) {
                var_r30 += 1;
                var_r28 = 0;
                var_r4 = var_r30;
                goto loop_3;
            }
            *(s32 *)((u8 *)r31 + 0xd0) = var_r27;
            *(s32 *)((u8 *)r31 + 0xd4) = var_r29;
        } else {
            ((u8 *)r31)[4] = 0;
        }
        var_f6 = (f32)(*(s32 *)((u8 *)r31 + 0xd4) + 0x1e);
        var_f7 = (lbl_8036A93C * (f32)*(s32 *)((u8 *)r31 + 0xd0)) + lbl_8036A954;
        if (var_f6 < lbl_8036A958) {
            var_f6 = lbl_8036A958;
        }
        if (var_f7 < lbl_8036A954) {
            var_f7 = lbl_8036A954;
        }
        var_f5 = lbl_8036A940 + farg1;
        var_f2 = -((lbl_8036A960 * var_f6) - (lbl_8036A95C + farg0));
        if (var_f2 < lbl_8036A964) {
            var_f2 = lbl_8036A95C;
        }
        if ((var_f2 + var_f6) > lbl_8036A968) {
            var_f2 = lbl_8036A968 - var_f6;
        }
        if ((var_f5 + var_f7) > lbl_8036A96C) {
            var_f5 = (var_f5 - lbl_8036A940) - var_f7;
        }
        *(f32 *)((u8 *)r31 + 0xfc) = *(f32 *)((u8 *)r31 + 0xf4);
        *(f32 *)((u8 *)r31 + 0x100) = *(f32 *)((u8 *)r31 + 0xf8);
        *(f32 *)((u8 *)r31 + 0x104) = var_f2;
        *(f32 *)((u8 *)r31 + 0x108) = var_f5;
        *(f32 *)((u8 *)r31 + 0x114) = *(f32 *)((u8 *)r31 + 0x10c);
        *(f32 *)((u8 *)r31 + 0x118) = *(f32 *)((u8 *)r31 + 0x110);
        *(f32 *)((u8 *)r31 + 0x11c) = var_f6;
        *(f32 *)((u8 *)r31 + 0x120) = var_f7;
        *(s32 *)((u8 *)r31 + 0xcc) = 8;
    }
}
#pragma use_lmw_stmw reset

void fn_8016746C(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *fn_8000C0C0(void *, void *);
    void fn_8000CAF0(void *, s32);
    void fn_8005C8B4(void *);
    void fn_801475FC(void *, s32);
    void fn_80166DD0(void *, s32, f32, f32);
    void *memset(void *, s32, s32);
    extern u8 lbl_80293D20[];
    extern u8 lbl_80330D68[];
    extern u8 lbl_80277A20[];
    extern f32 lbl_8036A92C;
    
    void *temp_r3 = fn_8000C0C0(lbl_80293D20, lbl_80293D20);
    
    if (temp_r3 == NULL) {
        return;
    }
    
    if (*(u8*)((u8*)temp_r3 + 0x2E) != 0) {
        return;
    }
    
    fn_8000CAF0(lbl_80293D20, arg1);
    memset(lbl_80330D68, 0, 0x124);
    
    *(f32*)((u8*)arg0 + 0xDC) = farg0;
    *(f32*)((u8*)arg0 + 0xE0) = farg1;
    *(f32*)((u8*)arg0 + 0xF4) = farg0;
    *(f32*)((u8*)arg0 + 0xF8) = farg1;
    *(f32*)((u8*)arg0 + 0x10C) = lbl_8036A92C;
    *(f32*)((u8*)arg0 + 0x110) = lbl_8036A92C;
    
    fn_8005C8B4(lbl_80277A20 + 0x42);
    fn_801475FC(lbl_80277A20 + 0x52, 0x64);
    fn_80166DD0(arg0, arg2, farg0, farg1);
}

void fn_8016758C(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *fn_8000C0C0(void *);
    void fn_8000CAF0(void *, s32);
    void fn_8005C8B4(void *);
    void fn_801475FC(void *, s32);
    void fn_80167190(void *, s32, f32, f32);
    void *memset(void *, int, s32);

    extern u8 lbl_80293D20[];
    extern u8 lbl_80330D68[];
    extern u8 lbl_80277A20[];
    extern f32 lbl_8036A92C;

    void *temp_r3;
    u8 var_r0;
    f32 f0;
    u8 *base;

    temp_r3 = fn_8000C0C0(lbl_80293D20);
    if (temp_r3 == NULL) {
        var_r0 = 0;
    } else if (*(u8 *)((u8 *)temp_r3 + 0x2E) != 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        fn_8000CAF0(lbl_80293D20, arg1);
        memset(lbl_80330D68, 0, 0x124);
        *(f32 *)((u8 *)arg0 + 0xDC) = farg0;
        base = lbl_80277A20;
        f0 = lbl_8036A92C;
        *(f32 *)((u8 *)arg0 + 0xE0) = farg1;
        *(f32 *)((u8 *)arg0 + 0xF4) = farg0;
        *(f32 *)((u8 *)arg0 + 0xF8) = farg1;
        *(f32 *)((u8 *)arg0 + 0x10C) = f0;
        *(f32 *)((u8 *)arg0 + 0x110) = f0;
        fn_8005C8B4(base + 0x42);
        fn_801475FC(base + 0x52, 0x64);
        fn_80167190(arg0, arg2, farg0, farg1);
    }
}

void fn_801676AC(void *arg0, s32 arg1) {
    void *memset(void *, s32, s32);
    void fn_8000C188(s32);
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000A258(void);
    void fn_80009B8C(s32);
    void fn_8000A248(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8008BF68(s32, s32, s32);
    u8 *fn_8018D900(s32);
    void **fn_8006EDD8(void *, s32);
    void fn_80009F90(void *, s32, s32);
    void fn_80007898(s32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_800075D8(void);
    void fn_80007884(void);
    extern u8 lbl_80330D68[];
    extern f64 lbl_8036A930;
    extern f32 lbl_8036A970;
    extern f32 lbl_8036A92C;
    extern f32 lbl_8036A974;
    extern f32 lbl_8036A944;
    extern f32 lbl_8036A978;
    extern u32 lbl_8036A928;
    extern f32 lbl_8036A97C;
    extern f32 lbl_8036A958;
    extern f32 lbl_8036A980;
    extern f32 lbl_8036A954;
    extern f32 lbl_8036A984;
    extern f32 lbl_8036A964;
    extern f32 lbl_8036A988;
    extern f64 lbl_8036A998;

    void *self;
    s32 t;
    s32 flags;
    f32 f27, f26, f25, f24;
    f32 f31, f30, f29, f28, f23, f22;
    u8 color[4];
    u32 color_u32;
    u8 *cp;
    void **pp;
    u16 *dim;
    u16 h, w;
    s32 i;
    f32 x, y;

    self = arg0;
    if ((*(u32 *)self & 1) && (*(s32 *)((u8 *)self + 0xCC) <= 0)) {
        memset(lbl_80330D68, 0, 0x124);
        fn_8000C188(arg1);
        return;
    }

    if (*(s32 *)((u8 *)self + 0xCC) > 0) {
        *(s32 *)((u8 *)self + 0xCC) = *(s32 *)((u8 *)self + 0xCC) - 1;
        t = 8 - *(s32 *)((u8 *)self + 0xCC);
        *(f32 *)((u8 *)self + 0xDC) = fn_800067BC(4, *(f32 *)((u8 *)self + 0xE4), *(f32 *)((u8 *)self + 0xEC), (f32)t, lbl_8036A970);
        *(f32 *)((u8 *)self + 0xE0) = fn_800067BC(4, *(f32 *)((u8 *)self + 0xE8), *(f32 *)((u8 *)self + 0xF0), (f32)t, lbl_8036A970);
        *(f32 *)((u8 *)self + 0xF4) = fn_800067BC(4, *(f32 *)((u8 *)self + 0xFC), *(f32 *)((u8 *)self + 0x104), (f32)t, lbl_8036A970);
        *(f32 *)((u8 *)self + 0xF8) = fn_800067BC(4, *(f32 *)((u8 *)self + 0x100), *(f32 *)((u8 *)self + 0x108), (f32)t, lbl_8036A970);
        *(f32 *)((u8 *)self + 0x10C) = fn_800067BC(4, *(f32 *)((u8 *)self + 0x114), *(f32 *)((u8 *)self + 0x11C), (f32)t, lbl_8036A970);
        *(f32 *)((u8 *)self + 0x110) = fn_800067BC(4, *(f32 *)((u8 *)self + 0x118), *(f32 *)((u8 *)self + 0x120), (f32)t, lbl_8036A970);
    }

    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();

    flags = *(s32 *)self;
    if (!(flags & 1) && !(flags & 2)) {
        fn_8000A258();
        fn_80009D74(lbl_8036A92C, lbl_8036A92C, lbl_8036A974, lbl_8036A944);
        fn_8000A248();
        fn_8008BF68((s32)(lbl_8036A978 + *(f32 *)((u8 *)self + 0xDC) - lbl_8036A970), (s32)(lbl_8036A974 + *(f32 *)((u8 *)self + 0xE0)), 1);
    }

    f27 = lbl_8036A944;
    f26 = f27;
    f25 = *(f32 *)((u8 *)self + 0x10C);
    f24 = *(f32 *)((u8 *)self + 0x110);

    if (*(s16 *)((u8 *)self + 0xD8) == 1) {
        color_u32 = lbl_8036A928;
        color[0] = ((u8 *)&color_u32)[0];
        color[1] = ((u8 *)&color_u32)[1];
        color[2] = ((u8 *)&color_u32)[2];
        color[3] = ((u8 *)&color_u32)[3];
    } else {
        cp = fn_8018D900(1);
        color[0] = cp[0];
        color[1] = cp[1];
        color[2] = cp[2];
        color[3] = cp[3];
    }

    fn_8000A258();
    fn_80009D74(lbl_8036A92C, lbl_8036A92C, lbl_8036A97C, lbl_8036A944);
    fn_8000A248();

    if (*(f32 *)((u8 *)self + 0x10C) < lbl_8036A958) {
        f25 = lbl_8036A958;
        f27 = *(f32 *)((u8 *)self + 0x10C) * lbl_8036A980;
    }
    if (*(f32 *)((u8 *)self + 0x110) < lbl_8036A954) {
        f24 = lbl_8036A954;
        f26 = *(f32 *)((u8 *)self + 0x110) * lbl_8036A984;
    }

    if (*(s16 *)((u8 *)self + 0xD8) == 1) {
        i = 9;
    } else {
        i = 0;
    }
    y = *(f32 *)((u8 *)self + 0xF8);
    x = *(f32 *)((u8 *)self + 0xF4);
    color_u32 = *(u32 *)color;
    pp = fn_8006EDD8(*(void **)((u8 *)self + 0xC4), i);
    dim = (u16 *)*pp;
    h = dim[1];
    w = dim[0];
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0xC4), i, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(x, y, lbl_8036A92C, lbl_8036A92C);
    fn_80007818(lbl_8036A954 * f27 + x, lbl_8036A964 * f26 + y, (f32)h, (f32)w);
    fn_800076AC(((u8 *)&color_u32)[0], ((u8 *)&color_u32)[1], ((u8 *)&color_u32)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    for (i = 1; i <= 8; i++) {
        color_u32 = *(u32 *)color;
        pp = fn_8006EDD8(*(void **)((u8 *)self + 0xC4), i);
        dim = (u16 *)*pp;
        h = dim[1];
        w = dim[0];
        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 0xC4), i, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(*(f32 *)((u8 *)self + 0xF4), *(f32 *)((u8 *)self + 0xF8), lbl_8036A92C, lbl_8036A92C);
        fn_80007818(*(f32 *)((u8 *)self + 0xF4), *(f32 *)((u8 *)self + 0xF8), (f32)h, (f32)w);
        fn_800076AC(((u8 *)&color_u32)[0], ((u8 *)&color_u32)[1], ((u8 *)&color_u32)[2], 0xFF);
        fn_800075D8();
        fn_80007884();
    }
}

void fn_80168D3C(s32 arg0) {
    void fn_801676AC(void *, s32);
    extern u8 lbl_80330D68[16];
    fn_801676AC(lbl_80330D68, arg0);
}

#pragma opt_common_subs off
void fn_80168D68(s32 arg0) {
    u32 fn_8005C6A0(void *);
    void fn_8006EEFC(void *, void *);
    M2C_UNK fn_8000C188(s32);
    extern u8 lbl_80277A20[];
    extern u8 lbl_80330D68[];
    u8 ok;

    if (!(fn_8005C6A0(lbl_80277A20 + 0x42) & 0x2000)) {
        ok = 0;
    } else {
        fn_8006EEFC(lbl_80330D68 + 0xC4, lbl_80277A20 + 0x42);
        ok = 1;
    }
    if (ok) {
        fn_8000C188(arg0);
    }
}

void fn_80168DE0(void) {
    extern f32 lbl_80330D68[];
    extern f32 lbl_8036A95C;
    extern f32 lbl_8036A964;
    extern f32 lbl_8036A970;
    
    f32 *unitData = (f32 *)&lbl_80330D68;
    f32 temp_f1, temp_f0;
    
    // Call 1
    temp_f1 = unitData[0x110 / 4];
    temp_f0 = lbl_8036A964;
    fn_8022C568(unitData, temp_f1 - temp_f0);
    
    // Call 2
    temp_f1 = unitData[0x10C / 4];
    temp_f0 = lbl_8036A95C;
    fn_8022C568(unitData, temp_f1 - temp_f0);
    
    // Call 3
    temp_f1 = unitData[0xF8 / 4];
    temp_f0 = lbl_8036A970;
    fn_8022C568(unitData, temp_f1 + temp_f0);
    
    // Call 4
    temp_f1 = unitData[0xF4 / 4];
    temp_f0 = lbl_8036A970;
    fn_8022C568(unitData, temp_f1 + temp_f0);
    
    // Final call - adjusting order to match the assembly exactly
    fn_80225058(unitData, unitData, unitData);
}

s32 fn_80168E90(s32 arg0) {
    s32 fn_8000CAA0(void *, s32);
    void fn_8016A6A4(void);
    extern u8 lbl_80277B10[];
    s32 result;

    result = fn_8000CAA0(lbl_80277B10, arg0);
    if (result != 0) {
        fn_8016A6A4();
    }
    return result;
}

#pragma opt_common_subs reset
void fn_80168ED4(void *arg0) {
    M2C_UNK fn_8003F670(s32);
    M2C_UNK fn_80161F7C(void *);
    M2C_UNK fn_8016A650(void *, M2C_UNK);
    fn_80161F7C(arg0);
    fn_8003F670(M2C_FIELD(arg0, s32 *, 0x44));
    if (arg0 != NULL) {
        fn_8016A650(arg0, 0);
    }
}

void fn_80168F1C(void *arg0) {
    s32 fn_8003FCCC();
    M2C_UNK fn_80162018(void *);
    M2C_UNK fn_801620AC();
    fn_80162018(arg0);
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

void fn_801690B0(s32 arg0) {
    void fn_8000C070(s32, s32);
    void fn_8013FDA0(s32);
    extern void *lbl_80367240;
    s32 *p;
    s32 temp;

    p = lbl_80367240;
    temp = p[2];
    if (temp & (temp ^ p[1]) & 0x200) {
        fn_8000C070(arg0, 1);
    }
    fn_8013FDA0(arg0);
}

#pragma cplusplus on
  extern "C" void *fn_8016915C(void *, s16, s16, s16, s16);
  extern "C" u8 lbl_80291AC8[];
  extern "C" void *fn_80169104(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
      struct Obj {
          virtual void m08() = 0;
          virtual void m0C() = 0;
          virtual void m10() = 0;
          virtual void m14() = 0;
          virtual void m18() = 0;
          virtual void m1C() = 0;
          virtual void m20() = 0;
          virtual void m24() = 0;
          virtual void m28() = 0;
      };
      fn_8016915C(arg0, arg1, arg2, arg3, arg4);
      M2C_FIELD(arg0, void **, 0) = lbl_80291AC8;
      M2C_FIELD(arg0, s16 *, 0xD4) = 1;
      ((Obj *) arg0)->m28();
      return arg0;
  }

#pragma cplusplus on
extern "C" void *fn_8016915C(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    void fn_80142060(void *);
    void fn_8013BBF8(void *);
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80292230[];
    extern u8 lbl_80292208[];
    extern u8 lbl_80291B70[];
    extern u8 lbl_80295478[];
    extern f32 lbl_8036A9AC;
    extern f32 lbl_8036A9B0;
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
    };
    struct Sub {
        virtual void v0() = 0;
        virtual void v1() = 0;
    };
    void *r31;
    void *r30;
    s32 z;
    s16 n1;
    s16 c108;
    f32 one;
    s32 e1;
    s32 e2;
    s32 e3;

    z = 0;
    n1 = -1;
    c108 = 0x108;
    one = lbl_8036A9AC;
    r31 = arg0;
    r30 = r31;
    *(void **)r31 = lbl_8028FDB0;
    e1 = arg1;
    *(s32 *)((u8 *)r31 + 4) = z;
    *(void **)r31 = lbl_80292230;
    e2 = arg2;
    e3 = arg3;
    *(s16 *)((u8 *)r31 + 8) = n1;
    *(s16 *)((u8 *)r31 + 0xA) = arg1;
    *(s16 *)((u8 *)r31 + 0xC) = arg2;
    *(s16 *)((u8 *)r31 + 0xE) = (s16)(e1 + 0x108);
    *(s16 *)((u8 *)r31 + 0x10) = (s16)(e2 + e3);
    *(s16 *)((u8 *)r31 + 0x12) = z;
    *(s16 *)((u8 *)r31 + 0x14) = z;
    *(s16 *)((u8 *)r31 + 0x16) = c108;
    *(s16 *)((u8 *)r31 + 0x18) = arg3;
    *(s16 *)((u8 *)r31 + 0x1A) = z;
    *(s16 *)((u8 *)r31 + 0x1C) = z;
    *(u8 *)((u8 *)r31 + 0x1E) = 0xFF;
    *(u8 *)((u8 *)r31 + 0x1F) = 0xFF;
    *(u8 *)((u8 *)r31 + 0x20) = 0xFF;
    *(u8 *)((u8 *)r31 + 0x21) = 0xFF;
    *(s16 *)((u8 *)r31 + 0x22) = arg4;
    *(s16 *)((u8 *)r31 + 0x24) = z;
    *(f32 *)((u8 *)r31 + 0x28) = one;
    *(f32 *)((u8 *)r31 + 0x2C) = one;
    *(f32 *)((u8 *)r31 + 0x30) = one;
    *(s32 *)((u8 *)r31 + 0x34) = z;
    *(s32 *)((u8 *)r31 + 0x38) = z;
    *(void **)r31 = lbl_80292208;
    fn_80142060((u8 *)r30 + 0x3C);
    *(void **)r31 = lbl_80291B70;
    *(s32 *)((u8 *)r31 + 0x48) = 0;
    *(u8 *)((u8 *)r31 + 0x4C) = 1;
    *(u8 *)((u8 *)r31 + 0x4D) = 0;
    *(s16 *)((u8 *)r31 + 0x4E) = 0;
    *(s16 *)((u8 *)r31 + 0x52) = -1;
    *(s16 *)((u8 *)r31 + 0x54) = -1;
    *(s16 *)((u8 *)r31 + 0x56) = 0;
    *(s16 *)((u8 *)r31 + 0x58) = 1;
    *(s16 *)((u8 *)r31 + 0x5A) = 0x20;
    *(f32 *)((u8 *)r31 + 0x5C) = lbl_8036A9B0;
    *(s16 *)((u8 *)r31 + 0x60) = 0;
    *(s16 *)((u8 *)r31 + 0x62) = 0x10;
    *(s16 *)((u8 *)r31 + 0x64) = 0;
    fn_8013BBF8((u8 *)r31 + 0x70);
    *(s32 *)((u8 *)r31 + 0x7C) = 0;
    *(void **)((u8 *)r31 + 0x84) = lbl_80295478;
    {
        f32 f1 = lbl_8036A9AC;
        f32 f0 = lbl_8036A9B0;
        *(s32 *)((u8 *)r31 + 0x88) = 0;
        *(s32 *)((u8 *)r31 + 0x8C) = 2;
        *(u8 *)((u8 *)r31 + 0x90) = 1;
        *(u8 *)((u8 *)r31 + 0x91) = 1;
        *(s16 *)((u8 *)r31 + 0x98) = 0;
        *(s16 *)((u8 *)r31 + 0x9A) = 0;
        *(f32 *)((u8 *)r31 + 0x9C) = f1;
        *(f32 *)((u8 *)r31 + 0xA0) = f1;
        *(u8 *)((u8 *)r31 + 0xA4) = 0xFF;
        *(u8 *)((u8 *)r31 + 0xA5) = 0xFF;
        *(u8 *)((u8 *)r31 + 0xA6) = 0xFF;
        *(u8 *)((u8 *)r31 + 0xA7) = 0xFF;
        *(f32 *)((u8 *)r31 + 0xA8) = f0;
        ((Sub *)((u8 *)r31 + 0x84))->v1();
    }
    *(void **)((u8 *)r31 + 0xAC) = lbl_80295478;
    {
        f32 f1 = lbl_8036A9AC;
        f32 f0 = lbl_8036A9B0;
        *(s32 *)((u8 *)r31 + 0xB0) = 0;
        *(s32 *)((u8 *)r31 + 0xB4) = 3;
        *(u8 *)((u8 *)r31 + 0xB8) = 1;
        *(u8 *)((u8 *)r31 + 0xB9) = 1;
        *(s16 *)((u8 *)r31 + 0xC0) = 0;
        *(s16 *)((u8 *)r31 + 0xC2) = 0;
        *(f32 *)((u8 *)r31 + 0xC4) = f1;
        *(f32 *)((u8 *)r31 + 0xC8) = f1;
        *(u8 *)((u8 *)r31 + 0xCC) = 0xFF;
        *(u8 *)((u8 *)r31 + 0xCD) = 0xFF;
        *(u8 *)((u8 *)r31 + 0xCE) = 0xFF;
        *(u8 *)((u8 *)r31 + 0xCF) = 0xFF;
        *(f32 *)((u8 *)r31 + 0xD0) = f0;
        ((Sub *)((u8 *)r31 + 0xAC))->v1();
    }
    ((Obj *)r31)->v8();
    return r31;
}

extern "C" void fn_80169414(s32 arg0) {
    void fn_8014C7C0(void *, s32);
    void fn_801455B8(s32);
    void fn_80013A90(void *);
    void fn_800138F4(void);
    void fn_800C08AC(void *, s32);
    extern u8 lbl_80330708[];
    extern u8 lbl_80277BC0[];

    fn_8014C7C0(lbl_80330708, 0);
    fn_801455B8(0);
    fn_80013A90(lbl_80277BC0 + 0x85);
    fn_800138F4();
    fn_800C08AC(lbl_80277BC0 + 0x9d, arg0);
}

#pragma cplusplus reset

extern "C" u32 fn_8016947C(void) {
    return lbl_80330708[0x55] != 0;
}

#pragma cplusplus reset
void fn_80169498(void) {
    M2C_FIELD(&lbl_80330708, s8 *, 0x55) = 1;
}

void fn_801694AC(s32 arg0, s32 arg1) {
    extern u8 lbl_80294060[];
    void *fn_8000CAA0(u8 *, s32);
    s32 *obj;
    obj = (s32 *)fn_8000CAA0(lbl_80294060, arg1);
    obj[0x30 / 4] = arg0;
}

void fn_801694E4(void) {
    extern u16 lbl_80277BC0[];
    fn_801475FC((u8 *)&lbl_80277BC0 + 0xAE, 0x64);
}

void fn_80169514(void) {
    extern u8 lbl_80277BC0[];
    u32 fn_8000BCA4(void *);
    void fn_8000A408(void);
    void fn_8013FEF0(void);
    fn_8013FEF0();
    if (fn_8000BCA4(lbl_80277BC0 + 0xBE) != 0) {
        fn_8000A408();
    }
}

void fn_80169550(void *arg0) {
    void fn_8012C964(void *);
    extern u8 lbl_80330708[];
    *(s32 *)(lbl_80330708 + 0xB0) = *(s32 *)((u8 *)arg0 + 0x30);
    fn_8012C964(arg0);
}

void fn_80169580(void) {
    extern u8 lbl_80277BC0[];
    u32 fn_8000BCA4(void *);
    void fn_8000A3F8(void);
    void fn_8013FEE0(void);
    fn_8013FEE0();
    if (fn_8000BCA4(lbl_80277BC0 + 0xBE) != 0) {
        fn_8000A3F8();
    }
}

void fn_801695BC(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80294030[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80294030, arg1);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg2;
}

void fn_80169604(void) {
    extern u8 lbl_80277BC0[];
    u32 fn_8000BCA4(void *);
    void fn_8000A3F8(void);
    void fn_8013FEE0(void);
    fn_8013FEE0();
    if (fn_8000BCA4(lbl_80277BC0 + 0xBE) != 0) {
        fn_8000A3F8();
    }
}

void fn_80169640(void) {
    return;
}

void fn_80169644(void *arg0) {
    u32 fn_8000BCA4(void *);
    void fn_8000A408(void);
    void fn_8007D064(s32, void *, s32);
    void fn_8013FEF0(void);
    extern u8 lbl_80277BC0[];

    fn_8013FEF0();
    if (fn_8000BCA4(lbl_80277BC0 + 0xBE) != 0) {
        fn_8000A408();
    }
    fn_8007D064(*(s32 *)((u8 *)arg0 + 0x30), arg0, *(s32 *)((u8 *)arg0 + 0x34));
}

void fn_8016969C(void) {
    void *fn_8000C0C0(void *);
    void fn_800AA208(void);
    void fn_8000C60C(void *);
    extern u8 lbl_80293D8C[];
    void *temp_r31;

    temp_r31 = fn_8000C0C0(lbl_80293D8C);
    if (temp_r31 != NULL) {
        fn_800AA208();
        fn_8000C60C(temp_r31);
    }
}

s32 fn_801696E0(void) {
    extern u16 lbl_80293D8C[];
    s32 v = fn_8000C0C0(lbl_80293D8C);
    return v != 0;
}

void *fn_80169714(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    void fn_8000CAF0(void *, void *);
    void fn_8000C070(void *, s32);
    void fn_801403F0(void);
    extern u16 lbl_80293D50[];
    extern u16 lbl_80293D8C[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80293D8C, arg0);
    if (temp_r3 != NULL) {
        fn_801403F0();
        *(s32 *)((char *)temp_r3 + 0x40) = 0;
        *(s32 *)((char *)temp_r3 + 0x44) = 0;
        *(s32 *)((char *)temp_r3 + 0x48) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
        *(s32 *)((char *)temp_r3 + 0x50) = 0;
    }
    fn_8000CAF0(lbl_80293D50, temp_r3);
    fn_8000C070(temp_r3, 0x8);
    return temp_r3;
}

void *fn_8016978C(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    void fn_8000CAF0(void *, void *);
    void fn_8000C070(void *, s32);
    void fn_801403F0(void);
    extern u16 lbl_80293D50[];
    extern u16 lbl_80293D8C[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80293D8C, arg0);
    if (temp_r3 != NULL) {
        fn_801403F0();
        *(s32 *)((char *)temp_r3 + 0x40) = 0;
        *(s32 *)((char *)temp_r3 + 0x44) = 0;
        *(s32 *)((char *)temp_r3 + 0x48) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
        *(s32 *)((char *)temp_r3 + 0x50) = 0;
    }
    fn_8000CAF0(lbl_80293D50, temp_r3);
    fn_8000C070(temp_r3, 0x10);
    return temp_r3;
}

void *fn_80169804(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    void fn_8000CAF0(void *, void *);
    void fn_801403F0(void);
    extern u16 lbl_80293D8C[];
    extern u16 lbl_80293D50[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80293D8C, arg0);
    if (temp_r3 != NULL) {
        fn_801403F0();
        *(s32 *)((char *)temp_r3 + 0x40) = 0;
        *(s32 *)((char *)temp_r3 + 0x44) = 0;
        *(s32 *)((char *)temp_r3 + 0x48) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
        *(s32 *)((char *)temp_r3 + 0x50) = 0;
    }
    fn_8000CAF0(lbl_80293D50, temp_r3);
    return temp_r3;
}

void fn_80169870(void *arg0) {
    void fn_80140304(void *, s32);
    void fn_80145520(void);
    void fn_80148980(void *, s32);
    extern u8 lbl_8032FF08[];
    extern s32 lbl_80367110;
    extern s32 lbl_80367AE0;
    s32 flags;

    fn_80161F7C();
    fn_8003F670(*(s32 *)((u8 *)arg0 + 0x44));
    fn_8003F670(*(s32 *)((u8 *)arg0 + 0x48));
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            fn_80140304(arg0, 0);
        }
    }
    flags = lbl_80367110;
    lbl_80367AE0 = 0;
    if (!(flags & 0x10)) {
        fn_80145520();
        fn_80148980(lbl_8032FF08, 0x1F4);
    }
}

void fn_801698EC(void *arg0) {
    M2C_UNK fn_8000C5B8();
    s32 fn_80024398(void *, void *, s32);
    void *fn_80169948();
    extern f32 lbl_8036A9C0;
    s32 temp_r31;
    void *temp_r3;

    temp_r3 = fn_80169948();
    M2C_FIELD(temp_r3, f32 *, 0x18) = lbl_8036A9C0;
    M2C_FIELD(temp_r3, s16 *, 0x1E) = 0;
    temp_r31 = fn_80024398(temp_r3, arg0, 0);
    fn_8000C5B8();
    M2C_FIELD(arg0, s32 *, 0x4C) = temp_r31;
}

void fn_80169AF0(void) {
    return;
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
    M2C_UNK fn_8000C188(void *);
    fn_8000A3F8(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FEC0(arg0);
    fn_8000C188(arg0);
}

void fn_80169B74(void *arg0) {
    M2C_UNK fn_8000A408(s32);
    M2C_UNK fn_8013FED0(void *);
    M2C_UNK fn_801BE6A8(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_801BE6A8(arg0);
}

void fn_80169BB4(void *arg0) {
    M2C_UNK fn_8000A408(s32);
    M2C_UNK fn_8013FED0(void *);
    M2C_UNK fn_8017FB80(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_8017FB80(arg0);
}

void fn_80169BF4(void *arg0) {
    M2C_UNK fn_8000A3F8(s32);
    M2C_UNK fn_8013FEC0(void *);
    M2C_UNK fn_80023FF4(void *);
    M2C_UNK fn_8000C188(void *);
    s32 temp_r31;
    void *temp_r3;

    fn_8000A3F8(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FEC0(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x50);
    temp_r31 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s8 *, 0x62) = temp_r31;
    fn_8000C188(arg0);
}

void fn_80169C54(void *arg0) {
    M2C_UNK fn_801C1464(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_801C1464(arg0);
}

void fn_80169C94(void *arg0) {
    M2C_UNK fn_8000A3F8(s32);
    M2C_UNK fn_8013FEC0(void *);
    M2C_UNK fn_80023FF4(void *);
    M2C_UNK fn_8000C188(void *);
    s32 temp_r31;
    void *temp_r3;

    fn_8000A3F8(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FEC0(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x50);
    temp_r31 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s8 *, 0x62) = temp_r31;
    fn_8000C188(arg0);
}

void fn_80169CF4(void *arg0) {
    void *fn_801090C0(void *);
    void fn_8000A430(void *);
    void fn_8013FED0(void *);
    void fn_801D3B14(void *);
    void fn_8000A408(void *);
    extern u8 lbl_80330708[];
    void *temp;

    fn_8000A408(M2C_FIELD(arg0, void **, 0x4C));
    temp = M2C_FIELD(arg0, void **, 0x40);
    if (temp != NULL) {
        fn_8000A430(fn_801090C0(temp));
    }
    fn_8013FED0(arg0);
    lbl_80330708[0x54] = 1;
    fn_801D3B14(arg0);
}

void fn_80169D58(void *arg0) {
    void *fn_801090C0(void *);
    void fn_8000A420(void *);
    void *temp;

    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x4C));
    temp = M2C_FIELD(arg0, void **, 0x40);
    if (temp != NULL) {
        fn_8000A420(fn_801090C0(temp));
    }
    fn_8013FEC0(arg0);
    fn_8000C188(arg0);
}

void fn_80169DAC(void *arg0) {
    M2C_UNK fn_8016E9DC(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_8016E9DC(arg0);
}

void fn_80169DEC(void *arg0) {
    M2C_UNK fn_8000A3F8(s32);
    M2C_UNK fn_8013FEC0(void *);
    fn_8000A3F8(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FEC0(arg0);
    fn_8000C188(arg0);
}

void fn_80169E2C(void *arg0) {
    fn_8000A420(M2C_FIELD(arg0, s32 *, 0x50));
}

void fn_80169E50(void *arg0) {
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x50));
}

void fn_80169E74(void *arg0) {
    M2C_UNK fn_8016E92C(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_8016E92C(arg0);
}

void fn_80169F30(void *arg0) {
    M2C_UNK fn_8000C070(void *, s32);
    M2C_UNK fn_8000A420(void *);
    M2C_UNK fn_8013FF94(void *, s32, s32);
    M2C_UNK fn_801658DC(u32, void *);
    M2C_UNK fn_8000C188(void *);
    extern u8 lbl_80277BC0[];
    u32 temp;
    switch ((s32)((u8 *)lbl_802EF4C8)[8]) {
    case 0x81:
        fn_8000C070(arg0, 0x11);
        return;
    case 0x80:
        fn_8000A420((void *)M2C_FIELD(arg0, s32 *, 0x4C));
        temp = fn_8013FF94(arg0, -0x1000, 0);
        if (temp != 0) {
            fn_801658DC(temp, lbl_80277BC0 + 0xF0);
        }
        fn_8000C188(arg0);
        return;
    }
}

void fn_80169FC0(void *arg0) {
    void fn_8000C5B8(void);
    void *fn_80024398(void *, void *, s32);
    void *fn_80169948(void);
    extern f32 lbl_8036A9C0;
    void *temp_r31;
    void *temp_r3;

    temp_r3 = fn_80169948();
    M2C_FIELD(temp_r3, f32 *, 0x18) = lbl_8036A9C0;
    M2C_FIELD(temp_r3, s16 *, 0x1E) = 0;
    temp_r31 = fn_80024398(temp_r3, arg0, 0);
    fn_8000C5B8();
    M2C_FIELD(temp_r31, u8 *, 0x61) = 0;
    M2C_FIELD(arg0, void **, 0x4C) = temp_r31;
    M2C_FIELD(arg0, void **, 0x50) = temp_r31;
}

void fn_8016A028(void) {
    char *fn_80234450(char *, char *);
    void fn_8005C8B4(s32);
    s32 fn_801620AC(void);
    void fn_80162018(void);
    extern u8 lbl_80277BC0[];
    extern u8 lbl_80330708[];
    char sp8[0x48];

    fn_80162018();
    fn_8005C8B4(fn_801620AC());
    switch ((s32)lbl_80330708[0xA6]) {
    case 3:
        fn_80234450(sp8, (char *)lbl_80277BC0 + 0x103);
        break;
    case 0:
        fn_80234450(sp8, (char *)lbl_80277BC0 + 0x117);
        break;
    case 1:
        fn_80234450(sp8, (char *)lbl_80277BC0 + 0x12B);
        /* fallthrough */
    case 2:
        fn_8005C8B4((s32)sp8);
        break;
    }
}

void fn_8016A1BC(void *arg0) {
    extern f32 lbl_8036A9C8;
    extern char lbl_80277BC0[];
    extern s32 lbl_80367110;
    extern s32 lbl_80367AE0;
    extern u8 lbl_80330708[];
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u16 lbl_80293C84[];
    extern u16 lbl_80293C58[];
    extern f32 lbl_8036A9CC;
    void *fn_8014D8FC(void *, void *);
    void fn_80109020(u32);
    void fn_80109180(void *, void *);
    void fn_80109A54(s32, f32);
    void *fn_800C42D8(s32);
    void fn_800C96F8(void *, void *, s32);
    void fn_801400F4(void *, void *, s32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(void *);
    void fn_8000BD98(void *);
    void fn_801455B8(s32);
    void fn_8014832C(s32, void *, s32, s32);
    s32 strlen(void *);
    void *p = arg0;
    void *temp_r31 = (void *)M2C_FIELD(fn_8014D8FC(&lbl_80330708, &lbl_80330708), s32 *, 0x44);
    void *temp_r3;
    s32 temp_r5;

    if (M2C_FIELD(p, s32 *, 0x40) != 0) {
        fn_80109020(M2C_FIELD(p, s32 *, 0x40));
    }
    if (temp_r31 != 0) {
        M2C_FIELD(p, s32 *, 0x40) = (s32)(u32)temp_r31;
        fn_80109180(temp_r31, p);
        fn_80109A54(2, lbl_8036A9C8);
    }
    temp_r3 = fn_800C42D8(0x5C);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, u32 *, 0x00) = (u32)lbl_8028FDB0;
        M2C_FIELD(temp_r3, s32 *, 0x04) = 0;
        M2C_FIELD(temp_r3, u32 *, 0x00) = (u32)lbl_80292230;
        M2C_FIELD(temp_r3, s16 *, 0x08) = -1;
        M2C_FIELD(temp_r3, s16 *, 0x0A) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x0C) = 0x190;
        M2C_FIELD(temp_r3, s16 *, 0x0E) = 0x260;
        M2C_FIELD(temp_r3, s16 *, 0x10) = 0x1C0;
        M2C_FIELD(temp_r3, s16 *, 0x12) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x14) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x16) = 0x260;
        M2C_FIELD(temp_r3, s16 *, 0x18) = 0x30;
        M2C_FIELD(temp_r3, s16 *, 0x1A) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x1C) = 0;
        M2C_FIELD(temp_r3, u8 *, 0x1E) = 0xFF;
        M2C_FIELD(temp_r3, u8 *, 0x1F) = 0xFF;
        M2C_FIELD(temp_r3, u8 *, 0x20) = 0xFF;
        M2C_FIELD(temp_r3, u8 *, 0x21) = 0xFF;
        M2C_FIELD(temp_r3, s16 *, 0x22) = 0x64;
        M2C_FIELD(temp_r3, s16 *, 0x24) = 0;
        M2C_FIELD(temp_r3, f32 *, 0x28) = lbl_8036A9CC;
        M2C_FIELD(temp_r3, f32 *, 0x2C) = lbl_8036A9CC;
        M2C_FIELD(temp_r3, f32 *, 0x30) = lbl_8036A9CC;
        M2C_FIELD(temp_r3, s32 *, 0x34) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x38) = 0;
        M2C_FIELD(temp_r3, u32 *, 0x00) = (u32)lbl_80293C84;
        M2C_FIELD(temp_r3, s32 *, 0x3C) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x40) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x40) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x44) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x48) = 0;
        M2C_FIELD(temp_r3, u8 *, 0x4C) = 1;
        M2C_FIELD(temp_r3, s16 *, 0x4E) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x50) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x52) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x54) = 0;
        M2C_FIELD(temp_r3, u32 *, 0x00) = (u32)lbl_80293C58;
        M2C_FIELD(temp_r3, u8 *, 0x58) = 1;
        M2C_FIELD(temp_r3, s16 *, 0x4E) = 0x30;
        M2C_FIELD(temp_r3, s16 *, 0x52) = 0x30;
    }
    M2C_FIELD(temp_r3, s16 *, 0x08) = -0x1000;
    M2C_FIELD(temp_r3, s32 *, 0x48) = 1;
    fn_800C96F8((char *)temp_r3 + 0x3C, lbl_80277BC0 + 0x13F, strlen(lbl_80277BC0 + 0x13F));
    temp_r5 = M2C_FIELD(temp_r3, s32 *, 0x34) | 0x10;
    M2C_FIELD(temp_r3, s32 *, 0x34) = temp_r5;
    M2C_FIELD(temp_r3, u8 *, 0x58) = 1;
    fn_801400F4(p, temp_r3, temp_r5);
    if (fn_8013FF94(p, -0x1000, 0) != 0U) {
        fn_801658DC(lbl_80277BC0 + 0xF0);
    }
    lbl_80367110 &= 0xFFFFFFFE;
    fn_8000BD98(lbl_80277BC0 + 0x50);
    lbl_80367AE0 = 0;
    if (!(lbl_80367110 & 0x10)) {
        fn_801455B8(0);
        fn_8014832C(0, lbl_80277BC0 + 0x140, 0x64, 1);
    }
}

void fn_8016A57C(void *arg0) {
    s32 fn_801090C0(void *);
    void *p;

    p = M2C_FIELD(arg0, void **, 0x40);
    if (p != NULL) {
        fn_8000A420(fn_801090C0(p));
    }
}

void fn_8016A5AC(void *arg0) {
    s32 fn_801090C0(void *);
    void *p;

    p = M2C_FIELD(arg0, void **, 0x40);
    if (p != NULL) {
        fn_8000A430(fn_801090C0(p));
    }
}

void fn_8016A5DC(void *arg0, void *arg1, f32 arg2) {
    M2C_UNK fn_80109020(void *);
    s32 fn_80109180(void *, void *);
    M2C_UNK fn_80109A54(s32, s32, f32);
    void *p;

    p = M2C_FIELD(arg0, void **, 0x40);
    if (p != NULL) {
        fn_80109020(p);
    }
    if (arg1 != NULL) {
        M2C_FIELD(arg0, void **, 0x40) = arg1;
        fn_80109A54(fn_80109180(arg1, arg0), 2, arg2);
    }
}

s32 fn_8016A650(s32 arg0, s16 arg1) {
    M2C_UNK fn_80140304(s32, s32);
    if (arg0 != 0) {
        fn_80140304(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_8016A6A4(void *arg0) {
    M2C_UNK fn_801403F0(void *);
    fn_801403F0(arg0);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    return arg0;
}

void *fn_8016A6DC(void *arg0, s16 arg1) {
    extern u16 lbl_802940AC[76];
    extern u16 lbl_802920E0[76];
    
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 4) = lbl_802940AC;
        if (arg0 != NULL) {
            *(u16**)((char*)arg0 + 4) = lbl_802920E0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_8016A738(void) {
    void fn_8013E300(void);
    void *fn_8000C0C0(u8 *);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(u32, u8 *);

    extern u8 lbl_80293D8C[];
    extern u8 lbl_80277BC0[];

    fn_8013E300();
    {
        u32 r = fn_8013FF94(fn_8000C0C0(lbl_80293D8C), -0x1000, 0);
        if (r != 0) {
            fn_801658DC(r, lbl_80277BC0 + 0x14C);
        }
    }
}

void fn_8016A788(s32 arg0, s32 arg1) {
    void *fn_8000C0C0(void *);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(u32, void *);
    void fn_8013E2C8(s32, s32);
    extern u8 lbl_80293D8C[];
    extern u8 lbl_80277BC0[];
    u32 ret;

    ret = fn_8013FF94(fn_8000C0C0(lbl_80293D8C), -0x1000, 0);
    if (ret != 0) {
        fn_801658DC(ret, (u8 *)lbl_80277BC0 + 0xf0);
    }
    fn_8013E2C8(arg0, arg1);
}

void fn_8016A7F8(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x16b);
}

void *fn_8016A824(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x178;
}

s32 fn_8016A834(s32 unused, s32 arg1) {
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80293D8C[];
    extern u32 lbl_802EF4C8[];
    void *temp;

    ((u8 *)lbl_802EF4C8)[8] = 0x81;
    temp = fn_8000C0C0(lbl_80293D8C);
    *(s32 *)((u8 *)temp + 0x50) = arg1;
    fn_8000C070(temp, 5);
    return 4;
}

void fn_8016A888(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x196);
}

void *fn_8016A8B4(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x1a5;
}

s32 fn_8016A8C4(s32 unused, s32 arg1) {
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80293D8C[];
    extern u32 lbl_802EF4C8[];
    void *temp;

    ((u8 *)lbl_802EF4C8)[8] = 0x80;
    temp = fn_8000C0C0(lbl_80293D8C);
    *(s32 *)((u8 *)temp + 0x50) = arg1;
    fn_8000C070(temp, 5);
    return 4;
}

void *fn_8016A918(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_802941E4[];
    extern void *lbl_80291F60[];
    extern void *lbl_802920E0[];

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 4) = lbl_802941E4;
        if (arg0 != NULL) {
            *(void **)((u8 *)arg0 + 4) = lbl_80291F60;
            if (arg0 != NULL) {
                *(void **)((u8 *)arg0 + 4) = lbl_802920E0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_8016A984(void) {
    u8 fn_80166D8C(void *);
    s32 fn_8000C0C0(void *);
    void fn_8000C070(s32, s32);
    extern u8 lbl_80330D68[];
    extern u8 lbl_80293D8C[];
    if (fn_80166D8C(lbl_80330D68) != 0) {
        return 0x40;
    }
    fn_8000C070(fn_8000C0C0(lbl_80293D8C), 0xC);
    return 8;
}

void fn_8016ABB0(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x1ad);
}

void *fn_8016ABDC(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x1b7;
}

s32 fn_8016ABEC(s32 unused, s32 arg1) {
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80293D8C[];
    void *temp;

    temp = fn_8000C0C0(lbl_80293D8C);
    *(s32 *)((u8 *)temp + 0x50) = arg1;
    fn_8000C070(temp, 0xC);
    return 4;
}

void fn_8016AC30(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x1bf);
}

void *fn_8016AC5C(void) {
    extern u16 lbl_80277BC0[80];
    return &lbl_80277BC0[0x1C8 / sizeof(u16)];
}

u8 fn_8016AC6C(void) {
    u8 fn_801E3620(M2C_UNK *);
    extern M2C_UNK lbl_80331FB8;
    u8 var_r3;

    var_r3 = 2;
    if (fn_801E3620(&lbl_80331FB8) != 0) {
        var_r3 = 0;
    }
    return var_r3;
}

s32 fn_8016ACA8(void *arg1, void *arg2) {
    M2C_UNK fn_8000C070(M2C_UNK);
    void *fn_8000C0C0(M2C_UNK *);
    M2C_UNK fn_80176888(void *, void *, s16, f32, f32);
    extern u16 lbl_80277BC0[];
    extern u8 lbl_80293D8C[];

    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        void *temp_r3 = M2C_FIELD(arg1, void **, 0x3C);
        s16 temp_r3_2 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s16 (**)(void *), 0x5C)(temp_r3);
        void *temp_r3_3 = M2C_FIELD(arg1, void **, 0x3C);
        s32 temp_r4 = temp_r3_2 + M2C_FIELD(arg2, s16 *, 0x30);
        s16 temp_r3_4 = M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), s16 (**)(void *, s32, s16), 0x60)(temp_r3_3, temp_r4, temp_r3_2);
        fn_80176888((void *) (lbl_80277BC0 + 0x1D1), arg1, temp_r3_4, (f32) temp_r4, (f32) (temp_r3_4 + M2C_FIELD(arg2, s16 *, 0x32)));
        return 0;
    }
    M2C_FIELD(fn_8000C0C0((void *) lbl_80293D8C), void **, 0x50) = arg1;
    fn_8000C070(0xB);
    return 4;
}

void fn_8016ADAC(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x1E2);
}

void *fn_8016ADD8(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x1ed;
}

s32 fn_8016ADE8(s32 arg0, s32 arg1, void *arg2) {
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80293D8C[];
    void *temp;

    if (*(u8 *)((u8 *)arg2 + 0x39) == 2) {
        return 0;
    }
    temp = fn_8000C0C0(lbl_80293D8C);
    *(s32 *)((u8 *)temp + 0x50) = arg1;
    fn_8000C070(temp, 0xD);
    return 4;
}

void fn_8016AE40(void) {
    extern u8 lbl_80277BC0[];
    extern void fn_8000E0E4(void *);

    fn_8000E0E4(lbl_80277BC0 + 0x1F6);
}

void *fn_8016AE6C(void) {
    extern u16 lbl_80277BC0[];
    return &lbl_80277BC0[0x101];
}

s32 fn_8016AE7C(s32 arg0, s32 arg1, void *arg2) {
    M2C_UNK fn_80024398(void *, s32, s32);
    void *fn_800C42D8(u32);
    extern u8 lbl_802845E8[];
    extern u8 lbl_802920E0[];
    extern u8 lbl_80293D64[];
    extern u8 lbl_802940AC[];
    extern u8 lbl_80294144[];
    extern u8 lbl_80294194[];
    extern s8 lbl_803680F0;
    extern void *lbl_803680F4;
    extern s8 lbl_803680F8;
    extern void *lbl_803680FC;
    void *p;

    if (M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        return 0;
    }
    if (lbl_803680F0 == 0) {
        lbl_803680F4 = lbl_80294194;
        lbl_803680F0 = 1;
    }
    if (lbl_803680F8 == 0) {
        lbl_803680FC = lbl_80294144;
        lbl_803680F8 = 1;
    }
    p = fn_800C42D8(0x20);
    if (p != NULL) {
        M2C_FIELD(p, void **, 4) = lbl_802845E8;
        M2C_FIELD(p, void **, 0) = lbl_80293D64;
        M2C_FIELD(p, void **, 4) = lbl_802920E0;
        M2C_FIELD(p, s16 *, 8) = 0;
        M2C_FIELD(p, s16 *, 0xA) = 0;
        M2C_FIELD(p, s16 *, 0xC) = 0x80;
        M2C_FIELD(p, s16 *, 0xE) = 0;
        M2C_FIELD(p, s16 *, 0x10) = 2;
        M2C_FIELD(p, s16 *, 0x12) = 0xC;
        M2C_FIELD(p, s16 *, 0x14) = 0x10;
        M2C_FIELD(p, s16 *, 0x16) = 0;
        M2C_FIELD(p, f32 *, 0x18) = 0.0f;
        M2C_FIELD(p, s16 *, 0x1C) = 0x20;
        M2C_FIELD(p, s16 *, 0x1E) = 4;
        M2C_FIELD(p, void **, 4) = lbl_802940AC;
    }
    M2C_FIELD(p, s16 *, 8) = 0x9E;
    M2C_FIELD(p, s16 *, 0xA) = 0xB5;
    M2C_FIELD(p, s16 *, 0xC) = 0x8A;
    M2C_FIELD(p, s16 *, 0x14) = 0;
    M2C_FIELD(p, f32 *, 0x18) = 880.0f;
    M2C_FIELD(p, s16 *, 0x1E) = 4;
    fn_80024398(p, arg1, 0);
    return 4;
}

void fn_8016AFC4(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x20b);
}

void *fn_8016AFF0(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x21c;
}

u8 fn_8016B000(void *arg0) {
    extern u8 lbl_80330708[];
    u8 temp_r3;
    s32 ret;

    if (lbl_80330708[0x55] != 0) {
        return 3U;
    }
    temp_r3 = fn_801C13F0();
    *((u8 *)arg0 + 4) = temp_r3;
    ret = 2;
    if (temp_r3 != 0) {
        ret = 0;
    }
    return ret;
}

#pragma cplusplus on
extern "C" void fn_8016B060(void *arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80007124(s32);
    M2C_UNK fn_80007220(M2C_UNK, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 fn_800102BC(M2C_UNK, f32);
    s32 fn_80010B78(s32, M2C_UNK, f32);
    M2C_UNK fn_801533F8(s32, s32, u8, M2C_UNK);
    s32 *fn_8018D900(M2C_UNK);
    extern f32 lbl_8036A9CC;
    extern f32 lbl_8036A9D8;
    extern f32 lbl_8036A9DC;
    extern f32 lbl_8036A9E0;
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual s32 v4(void *) = 0;
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
    };
    s32 temp_r31;
    s32 temp_r30;
    void *var_r29;
    s32 spC;
    s32 sp8;
    f32 temp_f31;
    f32 temp_f30;
    void *temp_r3;
    s32 temp_virt;
    void *temp_r3_2;
    s32 temp_virt2;

    var_r29 = arg2;
    ((Obj *)arg0)->v17();
    fn_8000A258();
    fn_80009C0C(lbl_8036A9D8);
    fn_8000A248();
    temp_r3 = M2C_FIELD(var_r29, void **, 0x34);
    temp_virt = ((Obj *)temp_r3)->v4(var_r29);
    temp_r31 = (0x9A - fn_80010B78(temp_virt, -1, lbl_8036A9CC)) >> 1;
    temp_r30 = (0x24 - fn_800102BC(-1, lbl_8036A9CC)) >> 1;
    temp_f31 = (f32)M2C_FIELD(var_r29, s16 *, 0x30);
    temp_f30 = (f32)M2C_FIELD(var_r29, s16 *, 0x32);
    fn_80007898(6);
    fn_80007858(temp_f31 + (f32)temp_r31, temp_f30 + (f32)temp_r30);
    if ((u8)M2C_FIELD(var_r29, u8 *, 0x39) == 2) {
        spC = *fn_8018D900(0);
        fn_80007668(&spC);
    } else if ((u8)M2C_FIELD(arg0, u8 *, 0x4) != 0) {
        sp8 = *fn_8018D900(0x13);
        fn_80007668(&sp8);
        fn_80007220(1, lbl_8036A9DC);
    } else {
        fn_80007220(1, lbl_8036A9DC);
    }
    temp_r3_2 = M2C_FIELD(var_r29, void **, 0x34);
    temp_virt2 = ((Obj *)temp_r3_2)->v4(var_r29);
    fn_80007124(temp_virt2);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036A9E0);
    fn_8000A248();
    fn_801533F8((s32)temp_f31, (s32)temp_f30, M2C_FIELD(var_r29, u8 *, 0x38), 0x10);
}
#pragma cplusplus reset
s32 fn_8016B25C(void *unused1, void *arg2, void *arg3) {
    void fn_80176888(s32, s32, f32, f32);
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80277BC0[];
    extern u8 lbl_80293D8C[];
    void *temp;
    (void) unused1;

    if ((u8) M2C_FIELD(arg3, u8 *, 0x39) == 2) {
        fn_80176888((s32)((u8 *)&lbl_80277BC0 + 0x225), (s32) arg2,
                    (f32) (M2C_FIELD(arg2, s16 *, 0x30) + M2C_FIELD(arg3, s16 *, 0x30)),
                    (f32) (M2C_FIELD(arg2, s16 *, 0x32) + M2C_FIELD(arg3, s16 *, 0x32)));
        return 0;
    }
    temp = fn_8000C0C0(&lbl_80293D8C);
    M2C_FIELD(temp, void **, 0x50) = arg2;
    fn_8000C070(temp, 0xA);
    return 4;
}

void fn_8016B30C(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4(&lbl_80277BC0[0x230 / sizeof(u16)]);
}

void *fn_8016B338(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x23a;
}

#pragma cplusplus on
extern "C" void fn_8016B348(void **arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80007124(s32);
    M2C_UNK fn_80007220(M2C_UNK, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 fn_800102BC(M2C_UNK, f32);
    s32 fn_80010B78(s32, M2C_UNK, f32);
    M2C_UNK fn_801533F8(s32, s32, u8, M2C_UNK);
    u32 fn_8017F9D4();
    s32 *fn_8018D900(M2C_UNK);
    extern f32 lbl_8036A9CC;
    extern f32 lbl_8036A9D8;
    extern f32 lbl_8036A9DC;
    extern f32 lbl_8036A9E0;
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual s32 v4(void *) = 0;
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
    };
    s32 temp_r31;
    s32 temp_r30;
    void *var_r29;
    s32 spC;
    s32 sp8;
    f32 temp_f31;
    f32 temp_f30;
    void *temp_r3;
    s32 temp_virt;
    void *temp_r3_2;
    s32 temp_virt2;

    var_r29 = arg2;
    ((Obj *)arg0)->v17();
    fn_8000A258();
    fn_80009C0C(lbl_8036A9D8);
    fn_8000A248();
    temp_r3 = M2C_FIELD(var_r29, void **, 0x34);
    temp_virt = ((Obj *)temp_r3)->v4(var_r29);
    temp_r31 = (0x9A - fn_80010B78(temp_virt, -1, lbl_8036A9CC)) >> 1;
    temp_r30 = (0x24 - fn_800102BC(-1, lbl_8036A9CC)) >> 1;
    temp_f31 = (f32)M2C_FIELD(var_r29, s16 *, 0x30);
    temp_f30 = (f32)M2C_FIELD(var_r29, s16 *, 0x32);
    fn_80007898(6);
    fn_80007858(temp_f31 + (f32)temp_r31, temp_f30 + (f32)temp_r30);
    if ((u8)M2C_FIELD(var_r29, u8 *, 0x39) == 2) {
        spC = *fn_8018D900(0);
        fn_80007668(&spC);
    } else if ((u8)fn_8017F9D4() != 0) {
        sp8 = *fn_8018D900(0x13);
        fn_80007668(&sp8);
        fn_80007220(1, lbl_8036A9DC);
    } else {
        fn_80007220(1, lbl_8036A9DC);
    }
    temp_r3_2 = M2C_FIELD(var_r29, void **, 0x34);
    temp_virt2 = ((Obj *)temp_r3_2)->v4(var_r29);
    fn_80007124(temp_virt2);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036A9E0);
    fn_8000A248();
    fn_801533F8((s32)temp_f31, (s32)temp_f30, M2C_FIELD(var_r29, u8 *, 0x38), 0x10);
}

#pragma cplusplus reset
s32 fn_8016B538(void *arg0, void *arg1, void *arg2) {
    void fn_8000C070(void *, u8);
    void *fn_8000C0C0(void *);
    void fn_80176888(s32, s32, f32, f32);
    extern u8 lbl_80277BC0[];
    extern u8 lbl_80293D8C[];
    extern f64 lbl_8036A9B8;
    s32 h;

    if (*(u8 *)((u8 *)arg2 + 0x39) == 2) {
        h = *(s16 *)((u8 *)arg1 + 0x30);
        h += *(s16 *)((u8 *)arg2 + 0x30);
        fn_80176888((s32)(lbl_80277BC0 + 0x242), (s32)arg1, (f32)h, (f32)(*(s16 *)((u8 *)arg1 + 0x32) + *(s16 *)((u8 *)arg2 + 0x32)));
        return 0;
    }
    {
        void *temp = fn_8000C0C0(lbl_80293D8C);
        *(void **)((u8 *)temp + 0x50) = arg1;
        fn_8000C070(temp, 9);
    }
    return 4;
}

#pragma cplusplus reset
void fn_8016B5E8(void) {
    M2C_UNK fn_8004327C();
    fn_80040844();
    fn_8004327C();
}

void fn_8016B60C(void) {
    void *fn_8000BCA4(void *);
    extern u16 lbl_80277EA0[40];
    void *temp_r3;

    temp_r3 = fn_8000BCA4((u8 *)lbl_80277EA0 + 0x59);
    if (temp_r3 != NULL) {
        *(u32 *)((u8 *)temp_r3 + 0x30) = *(u32 *)((u8 *)temp_r3 + 0x30) | 4;
    }
}

void fn_8016B64C(void) {
    void *fn_8000BCA4(void *);
    extern u16 lbl_80277EA0[40];
    void *temp_r3;

    temp_r3 = fn_8000BCA4((u8 *)lbl_80277EA0 + 0x59);
    if (temp_r3 != NULL) {
        *(u32 *)((u8 *)temp_r3 + 0x30) = *(u32 *)((u8 *)temp_r3 + 0x30) | 1;
    }
}

void fn_8016B68C(void) {
    void *fn_8000BCA4(void *);
    extern u16 lbl_80277EA0[40]; // 80 bytes / 2 bytes per u16 = 40

    void *temp_r3;

    temp_r3 = fn_8000BCA4((u8 *)lbl_80277EA0 + 0x59); // Direct offset calculation
    if (temp_r3 != NULL) {
        *(u8 *)((u8 *)temp_r3 + 0x35) = 0xA;
        *(u32 *)((u8 *)temp_r3 + 0x30) &= 0xFFFFFFEF;
    }
}

extern u8 lbl_80294514[16];
void fn_8016B6D4(s32 arg0) {
    void fn_8000CAF0(void *, s32);
    extern u8 lbl_80294514[16];
    fn_8000CAF0(lbl_80294514, arg0);
}

void fn_8016B700(void) {
    void fn_8000CAA0(u8 *, s32);
    s32 fn_800C0658(void);
    extern u8 lbl_80294550[];
    fn_8000CAA0(lbl_80294550, fn_800C0658());
}

extern u8 lbl_80294460[16];
void fn_8016B730(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_80294460[16];
    fn_8000CAA0(lbl_80294460, arg0);
}

void fn_8016B75C(void) {
    s32 fn_800C0658(void);
    s32 fn_80040844(void);
    void fn_80043A00(s32, s32, s32, s32);
    s32 temp_r31;

    temp_r31 = fn_800C0658();
    fn_80043A00(fn_80040844(), 0x168, 0x10E, temp_r31);
}

extern void fn_8005376C(void);
extern void fn_8006EDA0(void *);
extern void fn_800C4588(void);
void fn_8016B79C(void *arg0) {
    void fn_800C4588(void *);
    void fn_8006EDA0(void *);
    void fn_8005376C(void);
    struct {
        u8 pad[0x38];
        void *unk38;
        void *unk3C;
    } *r30;
    void *temp_r31;
    void *var_r3;

    r30 = arg0;
    var_r3 = r30->unk3C;
    while (var_r3 != NULL) {
        temp_r31 = ((struct { u8 pad[0x38]; void *unk38; } *)var_r3)->unk38;
        fn_800C4588(var_r3);
        var_r3 = temp_r31;
    }
    if (r30->unk38 != NULL) {
        fn_8006EDA0(&r30->unk38);
    }
    fn_8005376C();
}

void fn_8016B800(void *arg0) {
    char *ptr = (char *)arg0;
    ptr[0x74] = 0;
    ptr[0x78] = 0;
    ptr[0x7C] = 0;
    ptr[0x80] = 0;
    *(u16 *)(ptr + 0x84) = 0;
    *(u16 *)(ptr + 0x86) = 0;
    *(u16 *)(ptr + 0x88) = 0;
    *(u16 *)(ptr + 0x8A) = 0;
}

void fn_8016B9EC(void *arg0) {
    s32 fn_80059208(void *, void *);
    u16 fn_8005C6A0(void *);
    void fn_8006EEFC(void *, void *);
    void fn_8000C188(void *);
    void fn_8016E0E4(void *);
    extern u8 lbl_80277EA0[];

    if (fn_8005C6A0(&lbl_80277EA0[0x78]) & 0x2000) {
        fn_8006EEFC((char *)arg0 + 0x38, (void *)((s32)lbl_80277EA0 + 0x78));
        *(s32 *)((char *)arg0 + 0x60) = fn_80059208(fn_8016E0E4, arg0);
        fn_8000C188(arg0);
    }
}

void fn_8016BA5C(void *arg0) {
    void fn_8016C3C8(void *);
    void fn_8005C8B4(void *);
    extern u8 lbl_80277EA0[];

    M2C_FIELD(arg0, s32 *, 0x30) = 0x10;
    M2C_FIELD(arg0, s8 *, 0x35) = 0;
    M2C_FIELD(arg0, s16 *, 0x36) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s8 *, 0x58) = 0;
    M2C_FIELD(arg0, s8 *, 0x59) = 0;
    M2C_FIELD(arg0, s8 *, 0x5A) = 0;
    M2C_FIELD(arg0, s8 *, 0x5B) = 0xA;
    fn_8016C3C8(arg0);
    fn_8005C8B4(lbl_80277EA0 + 0x78);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}

void fn_8016BADC(void *arg0) {
    void fn_80040844(void);
    void fn_8004327C(void);
    void fn_8007B990(void *);
    void *fn_8003A114(void *);
    void *fn_8007BA4C(void *, s32);
    void fn_800C4588(void *);
    void fn_8000C60C(void *);
    void fn_8006EDA0(void *);
    void fn_801DE074(void);
    void fn_801457B4(void);
    void fn_8005376C(void);
    typedef struct {
        u8 pad[0x34];
        u8 flag;
        u8 pad35[3];
        void *unk38;
        void *unk3C;
        void *unk40;
        u8 pad44[0x10];
        void *unk54;
        u8 pad58[8];
        void *unk60;
    } Obj;
    Obj *obj;
    void *node;
    void *next;
    void *obj40;
    void *tmp;

    obj = (Obj *)arg0;
    if (obj->flag == 0) {
        fn_80040844();
        fn_8004327C();
        obj40 = obj->unk40;
        if (obj40 != NULL) {
            *(u32 *)((char *)obj40 + 0x2C) = 0;
            tmp = obj->unk54;
            if (tmp != NULL) {
                fn_8007B990(tmp);
                obj->unk54 = NULL;
            }
            tmp = *(void **)((char *)obj->unk40 + 0x2C);
            if (tmp != NULL) {
                obj->unk54 = fn_8007BA4C(fn_8003A114(tmp), 0);
            }
        }
        for (node = obj->unk3C; node != NULL; node = next) {
            next = *(void **)((char *)node + 0x38);
            fn_800C4588(node);
        }
        fn_8000C60C(obj->unk60);
        if (obj->unk38 != NULL) {
            fn_8006EDA0(&obj->unk38);
        }
        fn_801DE074();
        fn_801457B4();
        fn_8005376C();
        obj->flag = 1;
    }
}

#pragma global_optimizer off
#pragma opt_strength_reduction off
#pragma opt_common_subs off
void fn_8016BBB8(void *self) {
    void fn_8000C070(void *, s32);
    void *fn_8003A114(void *);
    void fn_8007B990(void *);
    void *fn_8007BA4C(void *, s32);
    void fn_801475FC(void *, s32);
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    extern void *lbl_80367240;
    extern u16 lbl_80277EA0[];
    extern f32 lbl_8036AA34, lbl_8036AA38, lbl_8036AA48, lbl_8036AA4C, lbl_8036AA50;
    void *pad;
    s32 held;
    s32 trig;
    s32 stick;
    s32 mask;
    u8 delta;
    u8 cur;
    s32 z;
    void *n;
    void *prev;
    void *p;
    void *tex;
    s16 t;
    f32 f;
    s8 ty;

    pad = lbl_80367240;
    delta = *(u8 *)((u8 *)self + 0x5B);
    held = *(s32 *)((u8 *)pad + 4);
    trig = *(s32 *)((u8 *)pad + 8);
    stick = *(s32 *)((u8 *)pad + 0xC);
    mask = held & (trig ^ held);

    if ((s8)delta > 0) {
        cur = *(u8 *)((u8 *)self + 0x5A);
        if ((s32)(cur + (s8)delta) >= 0xFF) {
            *(u8 *)((u8 *)self + 0x5A) = 0xFF;
            cur = *(u8 *)((u8 *)self + 0x5B);
            cur = cur * -1;
            *(u8 *)((u8 *)self + 0x5B) = cur;
        } else {
            *(u8 *)((u8 *)self + 0x5A) = cur + delta;
        }
    } else if ((s8)delta < 0) {
        cur = *(u8 *)((u8 *)self + 0x5A);
        if ((s32)(cur + (s8)delta) <= 0) {
            *(u8 *)((u8 *)self + 0x5A) = 0;
            cur = *(u8 *)((u8 *)self + 0x5B);
            cur = cur * -1;
            *(u8 *)((u8 *)self + 0x5B) = cur;
        } else {
            *(u8 *)((u8 *)self + 0x5A) = cur + delta;
        }
    }

    switch (*(s8 *)((u8 *)self + 0x35)) {
    case 0:
        if (mask & 0x100) {
            *(u8 *)((u8 *)self + 0x35) = 1;
            *(s16 *)((u8 *)self + 0x36) = 6;
            *(void **)((u8 *)self + 0x40) = *(void **)((u8 *)self + 0x3C);
            goto case0_check;
        case0_body:
            ty = *(s8 *)n;
            if (ty >= 1 && ty <= 4) {
                z = 0;
                *(s32 *)((u8 *)self + 0x44) = z;
                *(s16 *)((u8 *)self + 0x48) = (s16)(*(f32 *)((u8 *)*(void **)((u8 *)self + 0x40) + 4) - lbl_8036AA48);
                *(s16 *)((u8 *)self + 0x4A) = (s16)*(f32 *)((u8 *)*(void **)((u8 *)self + 0x40) + 8);
                *(s16 *)((u8 *)self + 0x4E) = z;
                *(s16 *)((u8 *)self + 0x4C) = z;
                *(s16 *)((u8 *)self + 0x52) = z;
                *(s16 *)((u8 *)self + 0x50) = z;
                goto case0_after;
            }
            *(void **)((u8 *)self + 0x40) = *(void **)((u8 *)n + 0x38);
        case0_check:
            n = *(void **)((u8 *)self + 0x40);
            if (n != 0) {
                goto case0_body;
            }
        case0_after:
            if (*(void **)((u8 *)self + 0x54) != 0) {
                fn_8007B990(*(void **)((u8 *)self + 0x54));
                *(void **)((u8 *)self + 0x54) = 0;
            }
            tex = *(void **)((u8 *)*(void **)((u8 *)self + 0x40) + 0x2C);
            if (tex != 0) {
                *(void **)((u8 *)self + 0x54) = fn_8007BA4C(fn_8003A114(tex), 0);
            }
            fn_801475FC((u8 *)lbl_80277EA0 + 0x8A, 0x64);
            *(u32 *)((u8 *)self + 0x30) &= ~0x10u;
        } else if (mask & 0x200) {
            fn_8000C070(self, 1);
            fn_801475FC((u8 *)lbl_80277EA0 + 0xA7, 0x64);
        }
        break;
    case 2:
        if (mask & 0x200) {
            *(u8 *)((u8 *)self + 0x35) = 3;
            *(s16 *)((u8 *)self + 0x36) = 6;
            fn_801475FC((u8 *)lbl_80277EA0 + 0xA7, 0x64);
            *(u32 *)((u8 *)self + 0x30) |= 0x10u;
        } else if (stick & 0x08000008) {
            prev = *(void **)((u8 *)self + 0x40);
        case2_a_outer:
            p = *(void **)((u8 *)*(void **)((u8 *)self + 0x40) + 0x34);
            if (p == 0) {
                while ((p = *(void **)((u8 *)*(void **)((u8 *)self + 0x40) + 0x38)) != 0) {
                    *(void **)((u8 *)self + 0x40) = p;
                }
            } else {
                *(void **)((u8 *)self + 0x40) = p;
            }
            n = *(void **)((u8 *)self + 0x40);
            ty = *(s8 *)n;
            if (ty < 1 || ty > 4) {
                goto case2_a_outer;
            }
            if (prev == n) {
                break;
            }
            *(s32 *)((u8 *)self + 0x44) = 6;
            *(s16 *)((u8 *)self + 0x4C) = *(s16 *)((u8 *)self + 0x48);
            *(s16 *)((u8 *)self + 0x4E) = *(s16 *)((u8 *)self + 0x4A);
            *(s16 *)((u8 *)self + 0x50) = (s16)(*(f32 *)((u8 *)*(void **)((u8 *)self + 0x40) + 4) - lbl_8036AA48);
            *(s16 *)((u8 *)self + 0x52) = (s16)*(f32 *)((u8 *)*(void **)((u8 *)self + 0x40) + 8);
            if (*(void **)((u8 *)self + 0x54) != 0) {
                fn_8007B990(*(void **)((u8 *)self + 0x54));
                *(void **)((u8 *)self + 0x54) = 0;
            }
            tex = *(void **)((u8 *)*(void **)((u8 *)self + 0x40) + 0x2C);
            if (tex != 0) {
                *(void **)((u8 *)self + 0x54) = fn_8007BA4C(fn_8003A114(tex), 0);
            }
            fn_801475FC((u8 *)lbl_80277EA0 + 0xB7, 0x64);
        } else if (stick & 0x04000004) {
            prev = *(void **)((u8 *)self + 0x40);
        case2_b_outer:
            p = *(void **)((u8 *)*(void **)((u8 *)self + 0x40) + 0x38);
            if (p == 0) {
                while ((p = *(void **)((u8 *)*(void **)((u8 *)self + 0x40) + 0x34)) != 0) {
                    *(void **)((u8 *)self + 0x40) = p;
                }
            } else {
                *(void **)((u8 *)self + 0x40) = p;
            }
            n = *(void **)((u8 *)self + 0x40);
            ty = *(s8 *)n;
            if (ty < 1 || ty > 4) {
                goto case2_b_outer;
            }
            if (prev == n) {
                break;
            }
            *(s32 *)((u8 *)self + 0x44) = 6;
            *(s16 *)((u8 *)self + 0x4C) = *(s16 *)((u8 *)self + 0x48);
            *(s16 *)((u8 *)self + 0x4E) = *(s16 *)((u8 *)self + 0x4A);
            *(s16 *)((u8 *)self + 0x50) = (s16)(*(f32 *)((u8 *)*(void **)((u8 *)self + 0x40) + 4) - lbl_8036AA48);
            *(s16 *)((u8 *)self + 0x52) = (s16)*(f32 *)((u8 *)*(void **)((u8 *)self + 0x40) + 8);
            if (*(void **)((u8 *)self + 0x54) != 0) {
                fn_8007B990(*(void **)((u8 *)self + 0x54));
                *(void **)((u8 *)self + 0x54) = 0;
            }
            tex = *(void **)((u8 *)*(void **)((u8 *)self + 0x40) + 0x2C);
            if (tex != 0) {
                *(void **)((u8 *)self + 0x54) = fn_8007BA4C(fn_8003A114(tex), 0);
            }
            fn_801475FC((u8 *)lbl_80277EA0 + 0xB7, 0x64);
        }
        break;
    case 1:
        t = *(s16 *)((u8 *)self + 0x36);
        *(s16 *)((u8 *)self + 0x36) = t - 1;
        f = fn_800067BC(0, lbl_8036AA34, lbl_8036AA38, (f32)(6 - *(s16 *)((u8 *)self + 0x36)), lbl_8036AA4C);
        *(u8 *)((u8 *)self + 0x59) = (u8)(s32)f;
        *(f32 *)((u8 *)self + 0x5C) = fn_800067BC(4, lbl_8036AA50, lbl_8036AA34, (f32)(6 - *(s16 *)((u8 *)self + 0x36)), lbl_8036AA4C);
        if (*(s16 *)((u8 *)self + 0x36) <= 0) {
            *(u8 *)((u8 *)self + 0x35) = 2;
        }
        break;
    case 3:
        t = *(s16 *)((u8 *)self + 0x36);
        *(s16 *)((u8 *)self + 0x36) = t - 1;
        f = fn_800067BC(0, lbl_8036AA38, lbl_8036AA34, (f32)(6 - *(s16 *)((u8 *)self + 0x36)), lbl_8036AA4C);
        *(u8 *)((u8 *)self + 0x59) = (u8)(s32)f;
        *(f32 *)((u8 *)self + 0x5C) = fn_800067BC(4, lbl_8036AA34, lbl_8036AA50, (f32)(6 - *(s16 *)((u8 *)self + 0x36)), lbl_8036AA4C);
        if (*(s16 *)((u8 *)self + 0x36) <= 0) {
            *(u8 *)((u8 *)self + 0x35) = 0;
        }
        break;
    }
}

void fn_8016C168(void *arg0)
{
    extern u8 lbl_80277EA0[];
    extern u32 fn_8005C6A0(void *);
    extern void fn_8006EEFC(void *, void *);
    extern void *fn_80059208(void *, void *);
    extern void fn_8016E1B4(void);
    extern void fn_801475FC(void *, s32);
    extern void fn_8000C188(void *);

    u8 *obj;

    obj = (u8 *)arg0;

    if (fn_8005C6A0(lbl_80277EA0 + 0x78) & 0x2000) {
        fn_8006EEFC(obj + 0x38, lbl_80277EA0 + 0x78);

        *(void **)(obj + 0x60) = fn_80059208(
            (void *)fn_8016E1B4,
            obj
        );

        fn_801475FC(lbl_80277EA0 + 0xD2, 0x64);

        fn_8000C188(obj);
    }
}

#pragma opt_common_subs reset
#pragma opt_strength_reduction reset
#pragma global_optimizer reset
void fn_8016C1EC(void *arg0) {
    s32 fn_80040844(void);
    void fn_80043838(s32, void *, f32, f32, f32, f32, f32, f32);
    void fn_80043A00(s32, s32, s32, void *);
    void fn_8005C8B4(void *);
    void fn_80145828(void);
    void fn_8014D8FC(void *);
    void fn_8016C3C8(void *);
    void fn_801DE0EC(s32 *, void *);
    u32 fn_8000BCA4(void *);
    extern u8 lbl_80330708[];
    extern u8 lbl_80277EA0[];
    extern s32 lbl_8036AA2C;
    extern s32 lbl_8036AA30;
    extern f32 lbl_8036AA54;
    extern f32 lbl_8036AA58;
    extern f32 lbl_8036AA5C;
    extern f32 lbl_8036AA60;
    extern f32 lbl_8036AA64;
    extern f32 lbl_8036AA68;
    extern f32 lbl_8036AA6C;
    extern f32 lbl_8036AA70;
    extern f32 lbl_8036AA74;
    extern f32 lbl_8036AA78;
    extern f32 lbl_8036AA7C;
    extern f32 lbl_8036AA80;
    extern f32 lbl_8036AA84;
    extern f32 lbl_8036AA88;
    extern f32 lbl_8036AA8C;
    extern f32 lbl_8036AA90;
    s32 sp[2];
    u8 temp;

    fn_8014D8FC(lbl_80330708);
    sp[0] = lbl_8036AA2C;
    sp[1] = lbl_8036AA30;
    temp = lbl_80330708[0x10];
    sp[0] = temp;
    if (temp == 0x12) {
        switch (lbl_80330708[0x54]) {
        case 1:
        case 2:
        case 4:
            fn_80043838(fn_80040844(), arg0, lbl_8036AA54, lbl_8036AA58, lbl_8036AA5C, lbl_8036AA60, lbl_8036AA64, lbl_8036AA68);
            break;
        case 5:
            fn_80043838(fn_80040844(), arg0, lbl_8036AA6C, lbl_8036AA70, lbl_8036AA74, lbl_8036AA78, lbl_8036AA64, lbl_8036AA68);
            break;
        case 6:
            fn_80043838(fn_80040844(), arg0, lbl_8036AA7C, lbl_8036AA80, lbl_8036AA84, lbl_8036AA88, lbl_8036AA64, lbl_8036AA68);
            break;
        case 7:
            fn_80043838(fn_80040844(), arg0, lbl_8036AA8C, lbl_8036AA90, lbl_8036AA60, lbl_8036AA78, lbl_8036AA64, lbl_8036AA68);
            break;
        }
    } else {
        fn_80043A00(fn_80040844(), 0x168, 0x10E, arg0);
    }
    *(s32 *)((u8 *)arg0 + 0x30) = 0x1F;
    *((u8 *)arg0 + 0x35) = 0;
    *(s16 *)((u8 *)arg0 + 0x36) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = 0;
    *((u8 *)arg0 + 0x58) = 0xFF;
    *((u8 *)arg0 + 0x59) = 0;
    *((u8 *)arg0 + 0x5A) = 0;
    *((u8 *)arg0 + 0x5B) = 0xA;
    fn_8016C3C8(arg0);
    fn_8005C8B4(lbl_80277EA0 + 0x78);
    if (fn_8000BCA4(lbl_80277EA0 + 0xED) != 0) {
        fn_801DE0EC((sp[0] = 0x3E7, sp), arg0);
        fn_80145828();
    }
    *((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
}

void fn_8016C3C8(void *arg0) {
    void fn_80015320(s32, u8 *);
    u8 fn_8001F4CC(void *, u8, u8);
    void *fn_80037710(void *);
    void *fn_800377D8(void *);
    void fn_800C4588(void *);
    void *fn_800C4638(s32, void *, s32);
    s32 fn_802342B8(void *, void *);
    void fn_80234450(void *, void *);
    void *memset(void *, s32, s32);
    extern u8 lbl_80277EA0[];
    extern u8 lbl_802B14E4[];
    extern u8 lbl_802CA518[];
    extern f32 lbl_8036AA48;
    extern f32 lbl_8036AA94;
    extern f32 lbl_8036AA98;
    extern u32 lbl_8036C4F0;

    u8 counts[4];
    u8 flags[4];
    void *self;
    void *node;
    void *tail;
    void *next;
    void *unit;
    void *name;
    void *cur;
    void *ins;
    s32 i;
    f32 y;
    u8 kind;
    u8 t;

    self = arg0;
    *(void **)((u8 *)self + 0x3C) = fn_800C4638(0x3C, lbl_80277EA0 + 0xF8, 0);
    memset(*(void **)((u8 *)self + 0x3C), 0, 0x3C);
    *(s8 *)*(void **)((u8 *)self + 0x3C) = -1;
    fn_80234450((u8 *)*(void **)((u8 *)self + 0x3C) + 0x14, lbl_80277EA0 + 0xF9);

    for (tail = *(void **)((u8 *)self + 0x3C); *(void **)((u8 *)tail + 0x38) != NULL; tail = *(void **)((u8 *)tail + 0x38)) {}
    node = fn_800C4638(0x3C, lbl_80277EA0 + 0xF8, 0);
    memset(node, 0, 0x3C);
    *(u8 *)node = 0;
    if (lbl_80277EA0 + 0xFE) {
        fn_80234450((u8 *)node + 0x14, lbl_80277EA0 + 0xFE);
    }
    *(s32 *)((u8 *)node + 0x2C) = 0;
    *(s32 *)((u8 *)node + 0x10) = 7;
    *(s32 *)((u8 *)node + 0xC) = 1;
    *(void **)((u8 *)node + 0x34) = tail;
    *(void **)((u8 *)node + 0x38) = NULL;
    *(void **)((u8 *)tail + 0x38) = node;
    *(void **)((u8 *)node + 0x30) = NULL;

    for (tail = *(void **)((u8 *)self + 0x3C); *(void **)((u8 *)tail + 0x38) != NULL; tail = *(void **)((u8 *)tail + 0x38)) {}
    node = fn_800C4638(0x3C, lbl_80277EA0 + 0xF8, 0);
    memset(node, 0, 0x3C);
    *(u8 *)node = 0;
    if (lbl_80277EA0 + 0x108) {
        fn_80234450((u8 *)node + 0x14, lbl_80277EA0 + 0x108);
    }
    *(s32 *)((u8 *)node + 0x2C) = 0;
    *(s32 *)((u8 *)node + 0x10) = 6;
    *(s32 *)((u8 *)node + 0xC) = 1;
    *(void **)((u8 *)node + 0x34) = tail;
    *(void **)((u8 *)node + 0x38) = NULL;
    *(void **)((u8 *)tail + 0x38) = node;
    *(void **)((u8 *)node + 0x30) = NULL;

    for (tail = *(void **)((u8 *)self + 0x3C); *(void **)((u8 *)tail + 0x38) != NULL; tail = *(void **)((u8 *)tail + 0x38)) {}
    node = fn_800C4638(0x3C, lbl_80277EA0 + 0xF8, 0);
    memset(node, 0, 0x3C);
    *(u8 *)node = 0;
    if (lbl_80277EA0 + 0x113) {
        fn_80234450((u8 *)node + 0x14, lbl_80277EA0 + 0x113);
    }
    *(s32 *)((u8 *)node + 0x2C) = 0;
    *(s32 *)((u8 *)node + 0x10) = 3;
    *(s32 *)((u8 *)node + 0xC) = 1;
    *(void **)((u8 *)node + 0x34) = tail;
    *(void **)((u8 *)node + 0x38) = NULL;
    *(void **)((u8 *)tail + 0x38) = node;
    *(void **)((u8 *)node + 0x30) = NULL;

    for (tail = *(void **)((u8 *)self + 0x3C); *(void **)((u8 *)tail + 0x38) != NULL; tail = *(void **)((u8 *)tail + 0x38)) {}
    node = fn_800C4638(0x3C, lbl_80277EA0 + 0xF8, 0);
    memset(node, 0, 0x3C);
    *(u8 *)node = 0;
    if (lbl_80277EA0 + 0x11C) {
        fn_80234450((u8 *)node + 0x14, lbl_80277EA0 + 0x11C);
    }
    *(s32 *)((u8 *)node + 0x2C) = 0;
    *(s32 *)((u8 *)node + 0x10) = 4;
    *(s32 *)((u8 *)node + 0xC) = 1;
    *(void **)((u8 *)node + 0x34) = tail;
    *(void **)((u8 *)node + 0x38) = NULL;
    *(void **)((u8 *)tail + 0x38) = node;
    *(void **)((u8 *)node + 0x30) = NULL;

    *(u32 *)counts = lbl_8036C4F0;
    fn_80015320(3, flags);

    i = 1;
    do {
        if ((u8)i != 0) {
            unit = lbl_802B14E4 + ((i - 1) * 0x280);
        } else {
            unit = NULL;
        }
        if (*(u32 *)((u8 *)unit + 0x188) != 0) {
            kind = *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8);
            if (flags[kind] != 0) {
                name = fn_800377D8(unit);
                if ((*(u32 *)((u8 *)unit + 0x1A0) & 0xD8) == 0 &&
                    fn_8001F4CC(lbl_802CA518, *(u8 *)((u8 *)unit + 0x19E), *(u8 *)((u8 *)unit + 0x19F)) != 0) {
                    cur = *(void **)((u8 *)self + 0x3C);
                    while (cur != NULL) {
                        t = *(u8 *)cur;
                        if ((s8)t == -1 || (s8)t == 0) {
                            cur = *(void **)((u8 *)cur + 0x38);
                            continue;
                        }
                        if (fn_802342B8((u8 *)cur + 0x14, name) == 0) {
                            kind = *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8);
                            if ((kind == 0 && *(u8 *)cur == 1) ||
                                (kind == 3 && *(u8 *)cur == 2) ||
                                (kind == 1 && *(u8 *)cur == 3) ||
                                (kind == 2 && *(u8 *)cur == 4)) {
                                if (unit == fn_80037710(unit)) {
                                    *(void **)((u8 *)cur + 0x2C) = unit;
                                }
                                *(s32 *)((u8 *)cur + 0xC) = *(s32 *)((u8 *)cur + 0xC) + 1;
                                break;
                            }
                        }
                        cur = *(void **)((u8 *)cur + 0x38);
                    }
                    if (cur == NULL) {
                        kind = *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8);
                        switch ((s32)kind) {
                        case 0:
                            cur = *(void **)((u8 *)self + 0x3C);
                            while (cur != NULL) {
                                if (fn_802342B8((u8 *)cur + 0x14, lbl_80277EA0 + 0xFE) == 0) {
                                    break;
                                }
                                cur = *(void **)((u8 *)cur + 0x38);
                            }
                            next = *(void **)((u8 *)cur + 0x38);
                            ins = fn_800C4638(0x3C, lbl_80277EA0 + 0xF8, 0);
                            memset(ins, 0, 0x3C);
                            *(u8 *)ins = 1;
                            if (name != NULL) {
                                fn_80234450((u8 *)ins + 0x14, name);
                            }
                            *(s32 *)((u8 *)ins + 0x10) = 1;
                            *(s32 *)((u8 *)ins + 0xC) = 1;
                            *(void **)((u8 *)ins + 0x34) = cur;
                            *(void **)((u8 *)ins + 0x38) = next;
                            *(void **)((u8 *)cur + 0x38) = ins;
                            *(void **)((u8 *)ins + 0x30) = NULL;
                            if (next != NULL) {
                                *(void **)((u8 *)next + 0x34) = ins;
                            }
                            if (unit == fn_80037710(unit)) {
                                *(void **)((u8 *)ins + 0x2C) = unit;
                            }
                            counts[0]++;
                            break;
                        case 3:
                            cur = *(void **)((u8 *)self + 0x3C);
                            while (cur != NULL) {
                                if (fn_802342B8((u8 *)cur + 0x14, lbl_80277EA0 + 0x108) == 0) {
                                    break;
                                }
                                cur = *(void **)((u8 *)cur + 0x38);
                            }
                            next = *(void **)((u8 *)cur + 0x38);
                            ins = fn_800C4638(0x3C, lbl_80277EA0 + 0xF8, 0);
                            memset(ins, 0, 0x3C);
                            *(u8 *)ins = 2;
                            if (name != NULL) {
                                fn_80234450((u8 *)ins + 0x14, name);
                            }
                            *(s32 *)((u8 *)ins + 0x10) = 1;
                            *(s32 *)((u8 *)ins + 0xC) = 1;
                            *(void **)((u8 *)ins + 0x34) = cur;
                            *(void **)((u8 *)ins + 0x38) = next;
                            *(void **)((u8 *)cur + 0x38) = ins;
                            *(void **)((u8 *)ins + 0x30) = NULL;
                            if (next != NULL) {
                                *(void **)((u8 *)next + 0x34) = ins;
                            }
                            if (unit == fn_80037710(unit)) {
                                *(void **)((u8 *)ins + 0x2C) = unit;
                            }
                            counts[1]++;
                            break;
                        case 1:
                            cur = *(void **)((u8 *)self + 0x3C);
                            while (cur != NULL) {
                                if (fn_802342B8((u8 *)cur + 0x14, lbl_80277EA0 + 0x113) == 0) {
                                    break;
                                }
                                cur = *(void **)((u8 *)cur + 0x38);
                            }
                            next = *(void **)((u8 *)cur + 0x38);
                            ins = fn_800C4638(0x3C, lbl_80277EA0 + 0xF8, 0);
                            memset(ins, 0, 0x3C);
                            *(u8 *)ins = 3;
                            if (name != NULL) {
                                fn_80234450((u8 *)ins + 0x14, name);
                            }
                            *(s32 *)((u8 *)ins + 0x10) = 1;
                            *(s32 *)((u8 *)ins + 0xC) = 1;
                            *(void **)((u8 *)ins + 0x34) = cur;
                            *(void **)((u8 *)ins + 0x38) = next;
                            *(void **)((u8 *)cur + 0x38) = ins;
                            *(void **)((u8 *)ins + 0x30) = NULL;
                            if (next != NULL) {
                                *(void **)((u8 *)next + 0x34) = ins;
                            }
                            if (unit == fn_80037710(unit)) {
                                *(void **)((u8 *)ins + 0x2C) = unit;
                            }
                            counts[2]++;
                            break;
                        case 2:
                            cur = *(void **)((u8 *)self + 0x3C);
                            while (cur != NULL) {
                                if (fn_802342B8((u8 *)cur + 0x14, lbl_80277EA0 + 0x11C) == 0) {
                                    break;
                                }
                                cur = *(void **)((u8 *)cur + 0x38);
                            }
                            next = *(void **)((u8 *)cur + 0x38);
                            ins = fn_800C4638(0x3C, lbl_80277EA0 + 0xF8, 0);
                            memset(ins, 0, 0x3C);
                            *(u8 *)ins = 4;
                            if (name != NULL) {
                                fn_80234450((u8 *)ins + 0x14, name);
                            }
                            *(s32 *)((u8 *)ins + 0x10) = 1;
                            *(s32 *)((u8 *)ins + 0xC) = 1;
                            *(void **)((u8 *)ins + 0x34) = cur;
                            *(void **)((u8 *)ins + 0x38) = next;
                            *(void **)((u8 *)cur + 0x38) = ins;
                            *(void **)((u8 *)ins + 0x30) = NULL;
                            if (next != NULL) {
                                *(void **)((u8 *)next + 0x34) = ins;
                            }
                            if (unit == fn_80037710(unit)) {
                                *(void **)((u8 *)ins + 0x2C) = unit;
                            }
                            counts[3]++;
                            break;
                        }
                    }
                }
            }
        }
        i++;
    } while (i <= 0x9F);

    if (counts[0] == 0) {
        cur = *(void **)((u8 *)self + 0x3C);
        while (cur != NULL) {
            next = *(void **)((u8 *)cur + 0x38);
            if (next != NULL && fn_802342B8((u8 *)next + 0x14, lbl_80277EA0 + 0xFE) == 0) {
                *(void **)((u8 *)cur + 0x38) = *(void **)((u8 *)next + 0x38);
                if (*(void **)((u8 *)next + 0x38) != NULL) {
                    *(void **)((u8 *)*(void **)((u8 *)next + 0x38) + 0x34) = cur;
                }
                fn_800C4588(next);
                break;
            }
            cur = next;
        }
    }
    if (counts[1] == 0) {
        cur = *(void **)((u8 *)self + 0x3C);
        while (cur != NULL) {
            next = *(void **)((u8 *)cur + 0x38);
            if (next != NULL && fn_802342B8((u8 *)next + 0x14, lbl_80277EA0 + 0x108) == 0) {
                *(void **)((u8 *)cur + 0x38) = *(void **)((u8 *)next + 0x38);
                if (*(void **)((u8 *)next + 0x38) != NULL) {
                    *(void **)((u8 *)*(void **)((u8 *)next + 0x38) + 0x34) = cur;
                }
                fn_800C4588(next);
                break;
            }
            cur = next;
        }
    }
    if (counts[2] == 0) {
        cur = *(void **)((u8 *)self + 0x3C);
        while (cur != NULL) {
            next = *(void **)((u8 *)cur + 0x38);
            if (next != NULL && fn_802342B8((u8 *)next + 0x14, lbl_80277EA0 + 0x113) == 0) {
                *(void **)((u8 *)cur + 0x38) = *(void **)((u8 *)next + 0x38);
                if (*(void **)((u8 *)next + 0x38) != NULL) {
                    *(void **)((u8 *)*(void **)((u8 *)next + 0x38) + 0x34) = cur;
                }
                fn_800C4588(next);
                break;
            }
            cur = next;
        }
    }
    if (counts[3] == 0) {
        cur = *(void **)((u8 *)self + 0x3C);
        while (cur != NULL) {
            next = *(void **)((u8 *)cur + 0x38);
            if (next != NULL && fn_802342B8((u8 *)next + 0x14, lbl_80277EA0 + 0x11C) == 0) {
                *(void **)((u8 *)cur + 0x38) = *(void **)((u8 *)next + 0x38);
                if (*(void **)((u8 *)next + 0x38) != NULL) {
                    *(void **)((u8 *)*(void **)((u8 *)next + 0x38) + 0x34) = cur;
                }
                fn_800C4588(next);
                break;
            }
            cur = next;
        }
    }

    y = lbl_8036AA94;
    cur = *(void **)((u8 *)*(void **)((u8 *)self + 0x3C) + 0x38);
    while (cur != NULL) {
        if ((s8)*(u8 *)cur != -1) {
            *(f32 *)((u8 *)cur + 4) = lbl_8036AA98;
            *(f32 *)((u8 *)cur + 8) = y;
        }
        y += lbl_8036AA48;
        cur = *(void **)((u8 *)cur + 0x38);
    }
}

void fn_8016CD1C(void *arg0, f32 farg0, f32 farg1) {
    void fn_800072B0(s32 *, s32 *, s32 *, s32 *);
    void fn_800075D8(void);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    s32 fn_8001D2C8(void);
    void **fn_80037D54(void *);
    s8 fn_8003A1E0(void *);
    s8 fn_8003A398(void *);
    s8 fn_8003B2D0(void *);
    void **fn_8006EDD8(void *, s32);
    void fn_8007B4D8(s32, s32, s32, void *);
    void fn_8007D044(s32, s32, f32, f32, f32, f32);
    void *fn_800A8978(void *);
    void *fn_800A8A88(void *);
    u32 *fn_8018D900(s32);
    void fn_80231D94(void *, void *, ...);
    extern s32 lbl_80277E60[];
    extern u8 lbl_80277EA0[];
    extern s32 lbl_8036A9EC, lbl_8036A9F0, lbl_8036A9F4, lbl_8036A9F8;
    extern s32 lbl_8036A9FC, lbl_8036AA00, lbl_8036AA04, lbl_8036AA08;
    extern s32 lbl_8036AA0C, lbl_8036AA10, lbl_8036AA14, lbl_8036AA18;
    extern s32 lbl_8036AA1C, lbl_8036AA20, lbl_8036AA24, lbl_8036AA28;
    extern f32 lbl_8036AA34, lbl_8036AA5C, lbl_8036AA78, lbl_8036AA98;
    extern f32 lbl_8036AA9C, lbl_8036AAA0, lbl_8036AAA4, lbl_8036AAA8;
    extern f32 lbl_8036AAAC, lbl_8036AAB0, lbl_8036AAB4, lbl_8036AAB8;
    extern f32 lbl_8036AABC, lbl_8036AAC0, lbl_8036AAC4, lbl_8036AAC8;
    extern f32 lbl_8036AACC, lbl_8036AAD0, lbl_8036AAD4, lbl_8036AAD8;
    extern f32 lbl_8036AADC, lbl_8036AAE0, lbl_8036AAE4, lbl_8036AAE8;
    extern f32 lbl_8036AAEC, lbl_8036AAF0;

    s32 colors[16];
    u8 buf[0x20];
    s32 c0, c1, c2, c3;
    u32 color;
    s32 *src;
    void *unit;
    void *name;
    s32 pal;
    u16 tw, th;
    u8 rank;
    u8 *cls;
    f32 f30, f31;
    f32 w;
    void **tex;
    void *o;
    void *node;
    void *self;
    f32 fx;
    f32 fy;

    self = arg0;
    fx = farg0;
    fy = farg1;
    src = lbl_80277E60;
    colors[0] = src[0];
    colors[1] = src[1];
    colors[2] = src[2];
    colors[3] = src[3];
    colors[4] = src[4];
    colors[5] = src[5];
    colors[6] = src[6];
    colors[7] = src[7];
    colors[8] = src[8];
    colors[9] = src[9];
    colors[10] = src[10];
    colors[11] = src[11];
    colors[12] = src[12];
    colors[13] = src[13];
    colors[14] = src[14];
    colors[15] = src[15];
    colors[0] = lbl_8036A9EC;
    colors[1] = lbl_8036A9F0;
    colors[2] = lbl_8036A9F4;
    colors[3] = lbl_8036A9F8;
    colors[4] = lbl_8036A9FC;
    colors[5] = lbl_8036AA00;
    colors[6] = lbl_8036AA04;
    colors[7] = lbl_8036AA08;
    colors[8] = lbl_8036AA0C;
    colors[9] = lbl_8036AA10;
    colors[10] = lbl_8036AA14;
    colors[11] = lbl_8036AA18;
    colors[12] = lbl_8036AA1C;
    colors[13] = lbl_8036AA20;
    colors[14] = lbl_8036AA24;
    colors[15] = lbl_8036AA28;

    node = *(void **)((u8 *)self + 0x40);
    if (node != NULL) {
        unit = *(void **)((u8 *)node + 0x2C);
        if (unit != NULL) {
            cls = *(u8 **)((u8 *)unit + 0x190);
            switch ((s32)cls[8]) {
            case 0:
                pal = 0;
                break;
            case 3:
                pal = 1;
                break;
            case 1:
                pal = 2;
                break;
            case 2:
                pal = 3;
                break;
            }
            fn_8000A258();
            fn_8000A174(0, 0x12);
            fn_8000A248();
            fn_80007898(3);
            fn_80007838(lbl_8036AA9C + fx, lbl_8036AA9C + fy, lbl_8036AA34, lbl_8036AA34);
            fn_80007818((fx + lbl_8036AAA0) - lbl_8036AAA4, (fy + lbl_8036AAA8) - lbl_8036AAA4, lbl_8036AA34, lbl_8036AA34);
            c3 = colors[pal * 4 + 3];
            c2 = colors[pal * 4 + 2];
            c1 = colors[pal * 4 + 1];
            c0 = colors[pal * 4 + 0];
            fn_800072B0(&c0, &c1, &c2, &c3);
            fn_800075D8();
            fn_80007884();
            fn_8007D044(0, 0, fx, fy, lbl_8036AAA0, lbl_8036AAA8);
            fn_8000A258();
            fn_80009C0C(lbl_8036AAAC);
            fn_8000A248();
            color = *fn_8018D900(1);
            tex = fn_8006EDD8(*(void **)((u8 *)self + 0x38), 3);
            tw = *(u16 *)((u8 *)*tex + 2);
            th = *(u16 *)*tex;
            fn_8000A258();
            fn_80009F90(*(void **)((u8 *)self + 0x38), 3, 0x11);
            fn_8000A248();
            fn_80007898(1);
            f30 = lbl_8036AAB0 + fy;
            fn_80007838(fx, f30, lbl_8036AA34, lbl_8036AA34);
            fn_80007818(((f32)(u32)tw * lbl_8036AAB4) + fx, ((f32)(u32)th * lbl_8036AAB4) + f30, (f32)(u32)tw, (f32)(u32)th);
            fn_800076AC(((u8 *)&color)[0], ((u8 *)&color)[1], ((u8 *)&color)[2], 0xFF);
            fn_800075D8();
            fn_80007884();
            fn_8000A258();
            fn_80009C0C(lbl_8036AAB8);
            fn_8000A248();
            unit = *(void **)((u8 *)*(void **)((u8 *)self + 0x40) + 0x2C);
            name = *(void **)((u8 *)unit + 0x188);
            fn_8000A258();
            fn_8000A174(0, 0x13);
            fn_8000A248();
            if (name != NULL) {
                w = (f32)fn_80010B78(fn_800A8A88(name), -1, lbl_8036AAB4);
                fn_8001003C((s32)((lbl_8036AABC + fx) - lbl_8036AAC0 * w), (s32)(lbl_8036AAC4 + fy), 1, 0, 0, fn_800A8A88(name), lbl_8036AAB4, lbl_8036AA34);
            }
            if (*(void **)((u8 *)unit + 0x18C) != NULL) {
                fn_8001003C((s32)(lbl_8036AAC8 + fx), (s32)(lbl_8036AACC + fy), 1, 1, 0, fn_800A8978(*(void **)((u8 *)unit + 0x18C)), lbl_8036AAB4, lbl_8036AA34);
            }
            if (fn_80037D54(unit) != NULL) {
                o = *fn_80037D54(unit);
                if (o != NULL) {
                    rank = *((u8 *)o + 0x15);
                } else {
                    rank = 0;
                }
                fn_80231D94(buf, lbl_80277EA0 + 0x125, rank + 0x60, fn_8001D2C8());
                fn_8001003C((s32)(lbl_8036AA5C + fx), (s32)(lbl_8036AA78 + fy), 1, 1, 0, buf, lbl_8036AAB4, lbl_8036AA34);
            }
            f30 = lbl_8036AAC8 + fx;
            f31 = lbl_8036AAD0 + fy;
            fn_8001003C((s32)f30, (s32)f31, 6, 1, 0, fn_8000E0E4(lbl_80277EA0 + 0x12E), lbl_8036AAB4, lbl_8036AA34);
            fn_8001003C((s32)(lbl_8036AA98 + fx), (s32)f31, 1, 1, 0, lbl_80277EA0 + 0x134, (s8)*((u8 *)unit + 0x19A), lbl_8036AAB4, lbl_8036AA34);
            fn_8001003C((s32)(lbl_8036AAD4 + fx), (s32)f31, 6, 1, 0, fn_8000E0E4(lbl_80277EA0 + 0x138), lbl_8036AAB4, lbl_8036AA34);
            fn_8001003C((s32)(lbl_8036AAD8 + fx), (s32)f31, 1, 1, 0, lbl_80277EA0 + 0x134, (s8)*((u8 *)unit + 0x1A8), lbl_8036AAB4, lbl_8036AA34);
            f31 = lbl_8036AADC + fx;
            fn_8001003C((s32)f31, (s32)(lbl_8036AAD0 + fy), 4, 1, 0, lbl_80277EA0 + 0x13E, (s8)fn_8003B2D0(unit), lbl_8036AAB4, lbl_8036AA34);
            f30 = lbl_8036AAE0 + fy;
            fn_8001003C((s32)(lbl_8036AAC8 + fx), (s32)f30, 6, 1, 0, fn_8000E0E4(lbl_80277EA0 + 0x143), lbl_8036AAB4, lbl_8036AA34);
            fn_8001003C((s32)(lbl_8036AAE4 + fx), (s32)f30, 1, 1, 0, lbl_80277EA0 + 0x134, (s8)fn_8003A398(unit), lbl_8036AAB4, lbl_8036AA34);
            fn_8001003C((s32)(lbl_8036AAE8 + fx), (s32)f30, 6, 1, 0, fn_8000E0E4(lbl_80277EA0 + 0x14A), lbl_8036AAB4, lbl_8036AA34);
            fn_8001003C((s32)f31, (s32)f30, 1, 1, 0, lbl_80277EA0 + 0x134, (s8)fn_8003A1E0(unit), lbl_8036AAB4, lbl_8036AA34);
            fn_8000A258();
            fn_80009C0C(lbl_8036AA9C);
            fn_8000A248();
            if (*(void **)((u8 *)self + 0x54) != NULL) {
                fn_8007B4D8((s32)(lbl_8036AAEC + fx), (s32)(lbl_8036AADC + fy), 0xFF, *(void **)((u8 *)self + 0x54));
            }
            fn_8000A258();
            fn_80009C0C(lbl_8036AAAC);
            fn_8000A248();
        }
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036AAF0);
    fn_8000A248();
}

#pragma use_lmw_stmw off
void fn_8016D5A8(void *arg0, f32 farg0, f32 farg1) {
    void fn_800075D8(void);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    void **fn_8006EDD8(void *, s32);
    char *fn_8014CA20(void *, s32);
    char *fn_8014CA68(void *, s32);
    u32 *fn_8018D900(s32);
    void fn_80234450(void *, void *);
    void *memcpy(void *, void *, s32);
    extern u8 lbl_80330708[];
    extern f32 lbl_8036AA34;
    extern f32 lbl_8036AA48;
    extern f32 lbl_8036AAB4;
    extern f32 lbl_8036AAB8;
    extern f32 lbl_8036AADC;
    extern f64 lbl_8036AAF8;
    extern f32 lbl_8036AB00;
    extern f32 lbl_8036AB04;
    extern f32 lbl_8036AB08;

    u8 sp2CC[0x40];
    u8 sp28C[0x40];
    u8 sp24C[0x40];
    u8 sp20C[0x40];
    u8 sp1CC[0x40];
    u8 sp18C[0x40];
    u8 sp14C[0x40];
    u8 sp10C[0x40];
    u8 spCC[0x40];
    u8 sp8C[0x40];
    u8 sp4C[0x40];
    u8 spC[0x40];
    u32 sp8;
    void *self;
    s32 i;
    s32 split;
    void **tex;
    f32 f29;

    self = arg0;
    sp8 = *fn_8018D900(1);
    tex = fn_8006EDD8(*(void **)((u8 *)self + 0x38), 1);
    split = *(u16 *)((u8 *)*tex + 2);
    i = *(u16 *)*tex;
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0x38), 1, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(farg0, farg1, lbl_8036AA34, lbl_8036AA34);
    fn_80007818(((f32)(u32)split * lbl_8036AAB4) + farg0, ((f32)(u32)i * lbl_8036AAB4) + farg1, (f32)(u32)split, (f32)(u32)i);
    fn_800076AC(((u8 *)&sp8)[0], ((u8 *)&sp8)[1], ((u8 *)&sp8)[2], 0xFF);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036AAB8);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();

    {
        u8 *p;
        s32 ch;
        char *src;
        src = fn_8014CA68(lbl_80330708, 0);
        i = 0;
        fn_80234450(sp24C, src);
        self = sp28C;
        fn_80234450(self, sp24C);
        p = sp24C;
        split = 0;
        goto blk1_test;
    blk1_body:
        if ((s8)ch == 0xA) {
            memcpy(self, sp24C, split);
            ((u8 *)self)[split] = 0;
            fn_80234450(sp2CC, p + 1);
            i = 1;
            goto blk1_done;
        }
        p += 1;
        split += 1;
    blk1_test:
        ch = *p;
        if ((s8)ch != 0) {
            goto blk1_body;
        }
    blk1_done:
        fn_8001003C((s32)(farg0 + lbl_8036AADC), (s32)(f29 = lbl_8036AB00 + farg1), 2, 0, 0, self, lbl_8036AAB4, lbl_8036AA34);
        if (i == 1) {
            fn_8001003C((s32)(farg0 + lbl_8036AADC), (s32)(lbl_8036AA48 + f29), 2, 0, 0, sp2CC, lbl_8036AAB4, lbl_8036AA34);
        }
    }

    {
        u8 *p;
        s32 ch;
        s32 idx;
        s32 flag;
        char *src;
        src = fn_8014CA68(lbl_80330708, 1);
        flag = 0;
        fn_80234450(sp18C, src);
        self = sp1CC;
        fn_80234450(self, sp18C);
        p = sp18C;
        idx = 0;
        goto blk2_test;
    blk2_body:
        if ((s8)ch == 0xA) {
            memcpy(self, sp18C, idx);
            ((u8 *)self)[idx] = 0;
            fn_80234450(sp20C, p + 1);
            flag = 1;
            goto blk2_done;
        }
        p += 1;
        idx += 1;
    blk2_test:
        ch = *p;
        if ((s8)ch != 0) {
            goto blk2_body;
        }
    blk2_done:
        fn_8001003C((s32)(farg0 + lbl_8036AADC), (s32)(f29 = lbl_8036AB04 + f29), 2, 0, 0, self, lbl_8036AAB4, lbl_8036AA34);
        if (flag == 1) {
            fn_8001003C((s32)(farg0 + lbl_8036AADC), (s32)(lbl_8036AA48 + f29), 2, 0, 0, sp20C, lbl_8036AAB4, lbl_8036AA34);
        }
    }

    {
        u8 *p;
        s32 ch;
        s32 idx;
        s32 flag;
        char *src;
        src = fn_8014CA20(lbl_80330708, 0);
        flag = 0;
        fn_80234450(spCC, src);
        self = sp10C;
        fn_80234450(self, spCC);
        p = spCC;
        idx = 0;
        goto blk3_test;
    blk3_body:
        if ((s8)ch == 0xA) {
            memcpy(self, spCC, idx);
            ((u8 *)self)[idx] = 0;
            fn_80234450(sp14C, p + 1);
            flag = 1;
            goto blk3_done;
        }
        p += 1;
        idx += 1;
    blk3_test:
        ch = *p;
        if ((s8)ch != 0) {
            goto blk3_body;
        }
    blk3_done:
        fn_8001003C((s32)(farg0 + lbl_8036AADC), (s32)(f29 = lbl_8036AB08 + farg1), 2, 0, 0, self, lbl_8036AAB4, lbl_8036AA34);
        if (flag == 1) {
            fn_8001003C((s32)(farg0 + lbl_8036AADC), (s32)(lbl_8036AA48 + f29), 2, 0, 0, sp14C, lbl_8036AAB4, lbl_8036AA34);
        }
    }

    {
        u8 *p;
        s32 ch;
        s32 idx;
        s32 flag;
        char *src;
        src = fn_8014CA20(lbl_80330708, 1);
        flag = 0;
        fn_80234450(spC, src);
        self = sp4C;
        fn_80234450(self, spC);
        p = spC;
        idx = 0;
        goto blk4_test;
    blk4_body:
        if ((s8)ch == 0xA) {
            memcpy(self, spC, idx);
            ((u8 *)self)[idx] = 0;
            fn_80234450(sp8C, p + 1);
            flag = 1;
            goto blk4_done;
        }
        p += 1;
        idx += 1;
    blk4_test:
        ch = *p;
        if ((s8)ch != 0) {
            goto blk4_body;
        }
    blk4_done:
        fn_8001003C((s32)(farg0 + lbl_8036AADC), (s32)(f29 = lbl_8036AB04 + f29), 2, 0, 0, self, lbl_8036AAB4, lbl_8036AA34);
        if (flag == 1) {
            fn_8001003C((s32)(farg0 + lbl_8036AADC), (s32)(lbl_8036AA48 + f29), 2, 0, 0, sp8C, lbl_8036AAB4, lbl_8036AA34);
        }
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036AAB4);
    fn_8000A248();
}
#pragma use_lmw_stmw reset
void fn_8016DBA4(void *arg0, f32 farg0, f32 farg1) {
    void fn_800075D8(void);
    void fn_800076AC(u8, u8, u8, u8);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007870(f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8000C60C(void *);
    void *fn_8000E0E4(void *);
    void fn_80015320(s32, void *);
    s32 fn_800377D8(void *);
    void *fn_80040844(void);
    void fn_800431EC(void *, void *);
    void fn_80043D18(void *, s8, s8, f32 *);
    f32 fn_80043DD8(void);
    u8 fn_8004C0A0(void *);
    void fn_800536B0(void *, f32, f32, f32);
    void *fn_8005397C(void *, void *);
    void **fn_8006EDD8(void *, s32);
    s32 *fn_8018D900(u8);
    s32 fn_802342B8(void *, s32);
    extern u8 lbl_80277EA0[];
    extern u32 lbl_8036A9E8;
    extern f32 lbl_8036AA34;
    extern f32 lbl_8036AA64;
    extern f32 lbl_8036AA68;
    extern f32 lbl_8036AAB4;
    extern f32 lbl_8036AAB8;
    extern f32 lbl_8036AAC0;
    extern f64 lbl_8036AAF8;
    extern f32 lbl_8036AB1C;
    extern f32 lbl_8036AB20;

    f32 sp2C[3][4];
    f32 sp20[2];
    s32 pad;
    u8 sp18[8];
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    f32 f24;
    f32 f25;
    f32 f26;
    f32 scale;
    f32 f30;
    f32 f31;
    void **tex;
    void *unit;
    void *node;
    u8 mode;
    s32 i;

    pad = 0;
    fn_800431EC(fn_80040844(), sp2C);
    mode = 1;
    fn_8000A258();
    fn_8000A174(sp2C, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_8036AA34);
    fn_80007838(farg0, farg1, lbl_8036AA34, lbl_8036AA34);
    {
        f32 a = lbl_8036AA64;
        f32 b = lbl_8036AA68;
        fn_80007818(a + farg0, b + farg1, a, b);
    }
    fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036AAB8);
    fn_8000A248();
    tex = fn_8006EDD8(*(void **)((u8 *)arg0 + 0x38), 4);
    fn_80040844();
    scale = fn_80043DD8();
    fn_80015320(3, sp18);
    i = 1;
    f31 = scale * lbl_8036AB1C;
    f30 = scale * lbl_8036AAB4;
    scale = scale * lbl_8036AAC0;
    do {
        if ((u8)i != 0) {
            unit = lbl_802B14E4 + ((i - 1) * 0x280);
        } else {
            unit = NULL;
        }
        if (*(u32 *)((u8 *)unit + 0x188) != 0) {
            u8 kind = *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8);
            if (sp18[kind] != 0) {
                s32 fl = *(s32 *)((u8 *)arg0 + 0x30);
                if ((((fl & 1) != 0 && kind == 0) || ((fl & 2) != 0 && kind == 3) ||
                     ((fl & 4) != 0 && kind == 1) || ((fl & 8) != 0 && kind == 2)) &&
                    (*(u32 *)((u8 *)unit + 0x1A0) & 0x010000DC) == 0 &&
                    fn_8004C0A0(unit) == 0) {
                    switch ((s32)kind) {
                    case 0: mode = 7; break;
                    case 3: mode = 6; break;
                    case 1: mode = 3; break;
                    case 2: mode = 4; break;
                    }
                    fn_80043D18(fn_80040844(), (s8)*(u8 *)((u8 *)unit + 0x19E),
                                (s8)*(u8 *)((u8 *)unit + 0x19F), sp20);
                    node = *(void **)((u8 *)arg0 + 0x3C);
                    while (node != NULL) {
                        u8 k = *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8);
                        if (!((k == 0 && *(u8 *)node == 1) ||
                              (k == 3 && *(u8 *)node == 2) ||
                              (k == 1 && *(u8 *)node == 3) ||
                              (k == 2 && *(u8 *)node == 4))) {
                            node = *(void **)((u8 *)node + 0x38);
                            continue;
                        }
                        {
                            s32 name = fn_800377D8(unit);
                            if (fn_802342B8(fn_8000E0E4((u8 *)node + 0x14), name) != 0) {
                                node = *(void **)((u8 *)node + 0x38);
                                continue;
                            }
                        }
                        break;
                    }
                    if (unit == *(void **)((u8 *)node + 0x2C)) {
                        sp14 = *fn_8018D900(mode);
                        if (*(u32 *)((u8 *)arg0 + 0x30) & 0x10) {
                            if (*(void **)((u8 *)node + 0x30) == NULL) {
                                void *obj = fn_8005397C(lbl_80277EA0 + 0x1CB, arg0);
                                void *gfx;
                                *(void **)((u8 *)node + 0x30) = obj;
                                fn_800536B0(obj, farg0 + sp20[0], farg1 + sp20[1], lbl_8036AB20);
                                *(f32 *)(*(u8 **)((u8 *)obj + 0x30) + 0x18) = f31;
                                spC = lbl_8036A9E8;
                                gfx = *(void **)((u8 *)obj + 0x30);
                                ((u8 *)&spC)[0] = (u8)((u8)sp14 >> 1);
                                ((u8 *)&spC)[1] = (u8)(((u8 *)&sp14)[1] >> 1);
                                ((u8 *)&spC)[2] = (u8)(((u8 *)&sp14)[2] >> 1);
                                sp10 = spC;
                                ((u8 *)gfx)[0x38] = ((u8 *)&sp10)[0];
                                ((u8 *)gfx)[0x39] = ((u8 *)&sp10)[1];
                                ((u8 *)gfx)[0x3A] = ((u8 *)&sp10)[2];
                                ((u8 *)gfx)[0x3B] = ((u8 *)&sp10)[3];
                                gfx = *(void **)((u8 *)obj + 0x30);
                                *(u32 *)((u8 *)gfx + 8) |= 4;
                            }
                        } else if (*(void **)((u8 *)node + 0x30) != NULL) {
                            fn_8000C60C(*(void **)((u8 *)node + 0x30));
                            *(void **)((u8 *)node + 0x30) = NULL;
                        }
                    } else {
                        u16 w = *(u16 *)(*(u8 **)tex + 2);
                        u8 alpha = *(u8 *)((u8 *)arg0 + 0x5A);
                        void *tmp;
                        u16 th, tw;
                        f25 = (farg1 + sp20[1]) - scale;
                        f26 = (farg0 + sp20[0]) - scale;
                        f24 = f30 / (f32)w;
                        sp8 = *fn_8018D900(mode);
                        tmp = *fn_8006EDD8(*(void **)((u8 *)arg0 + 0x38), 4);
                        th = *(u16 *)((u8 *)tmp + 2);
                        tw = *(u16 *)((u8 *)tmp + 0);
                        fn_8000A258();
                        fn_80009F90(*(void **)((u8 *)arg0 + 0x38), 4, 0x11);
                        fn_8000A248();
                        fn_80007898(1);
                        fn_80007838(f26, f25, lbl_8036AA34, lbl_8036AA34);
                        fn_80007818((f32)th * f24 + f26, (f32)tw * f24 + f25, (f32)th, (f32)tw);
                        fn_800076AC(((u8 *)&sp8)[0], ((u8 *)&sp8)[1], ((u8 *)&sp8)[2], alpha);
                        fn_800075D8();
                        fn_80007884();
                    }
                }
            }
        }
        i += 1;
    } while (i <= 0x9F);
    fn_8000A258();
    fn_80009C0C(lbl_8036AAB4);
    fn_8000A248();
}
#pragma use_lmw_stmw reset
#pragma global_optimizer on
void fn_8016E0E4(void *arg0) {
    M2C_UNK fn_800076AC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009B8C(u8);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8016DBA4(void *, f32, f32);
    extern f32 lbl_8036AA34;
    extern f32 lbl_8036AAB4;
    extern f32 lbl_8036AB24;
    extern f32 lbl_8036AB28;
    extern f32 lbl_8036AB2C;
    extern f32 lbl_8036AB30;
    extern f32 lbl_8036AB34;
    extern f32 lbl_8036AB38;
    fn_8000A258();
    fn_80009B8C(M2C_FIELD(arg0, u8 *, 0x58));
    fn_80009D74(lbl_8036AA34, lbl_8036AA34, lbl_8036AB2C, lbl_8036AAB4);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_8036AA34, lbl_8036AA34, lbl_8036AB24, lbl_8036AB28);
    fn_800076AC(0, 0, 0, 0x80);
    fn_80007884();
    fn_8000A258();
    fn_80009D74(lbl_8036AA34, lbl_8036AA34, lbl_8036AB30, lbl_8036AAB4);
    fn_8000A248();
    fn_8016DBA4(arg0, lbl_8036AB34, lbl_8036AB38);
    fn_8000A258();
    fn_80009B8C(0xFFU);
    fn_8000A248();
}

#pragma use_lmw_stmw off
#pragma global_optimizer off
void fn_8016E1B4(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_800075D8(void);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(u8);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    u32 fn_8000BCA4(void *);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    void **fn_8006EDD8(void *, s32);
    void fn_8007CB3C(void *, s32);
    void fn_8007CD08(void *, s32, f32, f32, f32);
    void fn_8007D024(s32, s32, f32, f32, f32, f32);
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    void fn_8008BF68(s32, s32, s32);
    void *fn_8014D8FC(void *);
    void fn_8016CD1C(void *, f32, f32);
    void fn_8016D5A8(void *, f32, f32);
    void fn_8016DBA4(void *, f32, f32);
    u32 *fn_8018D900(s32);
    void fn_801DDE88(s32, s32, s32);
    void fn_802343E0(void *, void *);
    void fn_80234450(void *, void *);
    extern u8 lbl_80277EA0[];
    extern u8 lbl_80330708[];
    extern f32 lbl_8036AA34;
    extern f64 lbl_8036AA40;
    extern f32 lbl_8036AA4C;
    extern f32 lbl_8036AA50;
    extern f32 lbl_8036AAA4;
    extern f32 lbl_8036AAB4;
    extern f32 lbl_8036AAB8;
    extern f32 lbl_8036AAE8;
    extern f32 lbl_8036AAF0;
    extern f64 lbl_8036AAF8;
    extern f32 lbl_8036AB0C;
    extern f32 lbl_8036AB10;
    extern f32 lbl_8036AB14;
    extern f32 lbl_8036AB18;
    extern f32 lbl_8036AB30;
    extern f32 lbl_8036AB3C;
    extern f32 lbl_8036AB40;
    extern f32 lbl_8036AB44;
    extern f32 lbl_8036AB48;
    extern f32 lbl_8036AB4C;
    extern f32 lbl_8036AB50;
    extern f32 lbl_8036AB54;
    extern f32 lbl_8036AB58;
    extern f32 lbl_8036AB5C;

    u8 spC[0x84];
    u32 sp8;
    void *self;
    void *info;
    void *node;
    void **tex;
    void *tmp;
    s32 i;
    s32 split;
    s32 t;
    s32 mode;
    s32 x;
    s32 y;
    f32 f1;
    f32 f2;
    f32 f3;

    self = arg0;
    fn_8000A258();
    fn_80009B8C(*(u8 *)((u8 *)self + 0x58));
    fn_80009D74(lbl_8036AA34, lbl_8036AA34, lbl_8036AB30, lbl_8036AAB4);
    fn_8000A248();
    fn_8000A258();
    fn_80009B8C((u8)(0xFF - *(u8 *)((u8 *)self + 0x59)));
    fn_8000A248();
    fn_8016DBA4(self, lbl_8036AB3C, lbl_8036AB40);
    fn_8000A258();
    fn_80009B8C(*(u8 *)((u8 *)self + 0x58));
    fn_8000A248();
    info = fn_8014D8FC(lbl_80330708);
    sp8 = *fn_8018D900(1);
    tex = fn_8006EDD8(*(void **)((u8 *)self + 0x38), 0);
    tmp = *tex;
    split = *(u16 *)((u8 *)tmp + 2);
    i = *(u16 *)tmp;
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0x38), 0, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036AA34, lbl_8036AB44, lbl_8036AA34, lbl_8036AA34);
    fn_80007818(((f32)(u32)split * lbl_8036AAB4) + lbl_8036AA34,
                ((f32)(u32)i * lbl_8036AAB4) + lbl_8036AB44,
                (f32)(u32)split, (f32)(u32)i);
    fn_800076AC(((u8 *)&sp8)[0], ((u8 *)&sp8)[1], ((u8 *)&sp8)[2], 0xFF);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036AAB8);
    fn_8000A248();
    if (fn_8000BCA4(lbl_80277EA0 + 0xED) != 0) {
        fn_801DDE88(0x38, 0x29, 0x3E7);
    } else {
        fn_801DDE88(0x38, 0x29, *(u8 *)((u8 *)info + 0x3C));
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036AAB4);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036AAB8);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_8001003C(0x19C, 0x1D, 6, 1, 0, fn_8000E0E4(lbl_80277EA0 + 0x1AC), lbl_8036AAB4, lbl_8036AA34);
    fn_8001003C(0x19C, 0x35, 6, 1, 0, fn_8000E0E4(lbl_80277EA0 + 0x1B4), lbl_8036AAB4, lbl_8036AA34);
    fn_8001003C(0x1E0, 0x1D, 1, 1, 0, lbl_80277EA0 + 0x1BD, (s32)*(s16 *)(lbl_80330708 + 0x12), lbl_8036AAB4, lbl_8036AA34);
    fn_8001003C(0x1E0, 0x35, 1, 1, 0, lbl_80277EA0 + 0x1C1, *(s32 *)(lbl_80330708 + 0x18), lbl_8036AAB4, lbl_8036AA34);
    fn_8000A258();
    fn_80009C0C(lbl_8036AAB4);
    fn_8000A248();
    node = *(void **)((u8 *)self + 0x3C);
    fn_8000A258();
    fn_80009C0C(lbl_8036AAB8);
    fn_8000A248();
    fn_8007D024(0xB3, 0, lbl_8036AB48, lbl_8036AAE8, lbl_8036AB0C, lbl_8036AB10);
    fn_8000A258();
    fn_80009C0C(lbl_8036AAB8);
    fn_8000A248();
    mode = *(u8 *)((u8 *)self + 0x35);
    if (*(void **)((u8 *)self + 0x40) != NULL && mode == 2) {
        fn_8008AB7C(*(s16 *)((u8 *)self + 0x48) + 0x6F,
                    *(s16 *)((u8 *)self + 0x4A) + 0xD,
                    0xBA, 0x18, 0x19, 0x4B, 1);
        fn_8000A258();
        fn_80009C0C(lbl_8036AAB8);
        fn_8000A248();
    } else {
        do {
            if ((s8)*(u8 *)node != -1) {
                fn_8000A258();
                fn_8000A174(0, 0x13);
                fn_8000A248();
                if ((s8)*(u8 *)node == 0) {
                    tmp = fn_8000E0E4((u8 *)node + 0x14);
                    f1 = *(f32 *)((u8 *)node + 4);
                    f2 = lbl_8036AAA4;
                    f3 = lbl_8036AB14;
                    fn_8007CD08(tmp, *(s32 *)((u8 *)node + 0x10),
                                f1 - f2, f2 + *(f32 *)((u8 *)node + 8), f3);
                } else {
                    tmp = fn_8000E0E4((u8 *)node + 0x14);
                    fn_8001003C((s32)*(f32 *)((u8 *)node + 4),
                                (s32)*(f32 *)((u8 *)node + 8),
                                (u8)*(s32 *)((u8 *)node + 0x10),
                                1, 0, tmp, lbl_8036AAB4, lbl_8036AA34);
                }
                if ((s8)*(u8 *)node != 0) {
                    fn_8001003C((s32)(lbl_8036AB18 + *(f32 *)((u8 *)node + 4)),
                                (s32)*(f32 *)((u8 *)node + 8),
                                (u8)*(s32 *)((u8 *)node + 0x10),
                                0, 0, (u8 *)lbl_80277EA0 + 0x134,
                                *(s32 *)((u8 *)node + 0xC),
                                lbl_8036AAB4, lbl_8036AA34);
                }
            }
            node = *(void **)((u8 *)node + 0x38);
        } while (node != NULL);
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036AAF0);
    fn_8000A248();
    mode = (s8)*(u8 *)((u8 *)self + 0x35);
    if (mode < 2) {
        if (mode >= 0) {
            fn_80234450(spC, (u8 *)lbl_80277EA0 + 0x177);
            fn_802343E0(spC, fn_8000E0E4((u8 *)lbl_80277EA0 + 0x17D));
            fn_802343E0(spC, (u8 *)lbl_80277EA0 + 0x187);
            fn_802343E0(spC, fn_8000E0E4((u8 *)lbl_80277EA0 + 0x18F));
        }
    } else if (mode < 4) {
        fn_80234450(spC, (u8 *)lbl_80277EA0 + 0x198);
        fn_802343E0(spC, fn_8000E0E4((u8 *)lbl_80277EA0 + 0x19E));
        fn_802343E0(spC, (u8 *)lbl_80277EA0 + 0x187);
        fn_802343E0(spC, fn_8000E0E4((u8 *)lbl_80277EA0 + 0x1A5));
    }
    fn_8007CB3C(spC, 0);
    mode = *(u8 *)((u8 *)self + 0x35);
    if (mode == 2) {
        fn_8000A258();
        fn_80009C0C(lbl_8036AB4C);
        fn_8000A248();
        if (*(void **)((u8 *)self + 0x40) != NULL) {
            t = *(s32 *)((u8 *)self + 0x44);
            if (t > 0) {
                *(s32 *)((u8 *)self + 0x44) = t - 1;
                t = 6 - *(s32 *)((u8 *)self + 0x44);
                *(s16 *)((u8 *)self + 0x48) = (s16)fn_800067BC(
                    4,
                    (f32)*(s16 *)((u8 *)self + 0x4C),
                    (f32)*(s16 *)((u8 *)self + 0x50),
                    (f32)t,
                    lbl_8036AA4C);
                *(s16 *)((u8 *)self + 0x4A) = (s16)fn_800067BC(
                    4,
                    (f32)*(s16 *)((u8 *)self + 0x4E),
                    (f32)*(s16 *)((u8 *)self + 0x52),
                    (f32)t,
                    lbl_8036AA4C);
            }
            x = *(s16 *)((u8 *)self + 0x48) + 0x14;
            y = *(s16 *)((u8 *)self + 0x4A) + 3;
            fn_8008BF68(x, y, 1);
        }
        fn_8000A258();
        fn_80009C0C(lbl_8036AA50);
        fn_8000A248();
    }
    if ((s8)*(u8 *)((u8 *)self + 0x35) != 0) {
        fn_8000A258();
        fn_80009C0C(lbl_8036AB50);
        fn_8000A248();
        fn_8000A258();
        fn_80009B8C(*(u8 *)((u8 *)self + 0x59));
        fn_8000A248();
        fn_8016D5A8(self, lbl_8036AB3C + *(f32 *)((u8 *)self + 0x5C), lbl_8036AB54);
        fn_8016CD1C(self, lbl_8036AB3C + *(f32 *)((u8 *)self + 0x5C), lbl_8036AB58);
        fn_8000A258();
        fn_80009B8C(*(u8 *)((u8 *)self + 0x58));
        fn_8000A248();
        fn_8000A258();
        fn_80009C0C(lbl_8036AB5C);
        fn_8000A248();
    }
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
}
#pragma global_optimizer on
void *fn_8016E9DC(u32 arg0) {
    void *fn_8000CAA0(void *, u32, void *);
    void *fn_8000CAF0(void *, u32, void *);
    extern u16 lbl_80294604[];
    void *var_r31;

    if (arg0 != 0U) {
        var_r31 = fn_8000CAA0(lbl_80294604, arg0, lbl_80294604);
    } else {
        var_r31 = fn_8000CAF0(lbl_80294604, arg0, lbl_80294604);
    }
    if (var_r31 != NULL) {
        fn_801403F0(var_r31);
        *(u32 *)((u8 *)var_r31 + 0x40) = 0;
        *(u32 *)((u8 *)var_r31 + 0x44) = 0;
        *(u32 *)((u8 *)var_r31 + 0x48) = 0;
        *(u32 *)((u8 *)var_r31 + 0x4C) = 0;
        *(u32 *)((u8 *)var_r31 + 0x50) = 0;
        *(u32 *)((u8 *)var_r31 + 0x54) = 0;
        *(u32 *)((u8 *)var_r31 + 0x58) = 0;
        *(u32 *)((u8 *)var_r31 + 0x5C) = 0;
        *(u32 *)((u8 *)var_r31 + 0x60) = 0;
        *(u8 *)((u8 *)var_r31 + 0x64) = -1;
    }
    return var_r31;
}

#pragma cplusplus on
extern "C" void fn_8016EA78(void *arg0) {
    extern void fn_80140304(void *, s32);

    struct RefObj {
        virtual void destroy(s32);
        s32 refCount;
    };

    struct Holder {
        u8 pad[0x40];
        RefObj *p40;
        RefObj *p44;
        RefObj *p48;
        RefObj *p4c;
        RefObj *p50;
        RefObj *p54;
        RefObj *p58;
    };

    Holder *h;
    RefObj *p;

    h = (Holder *)arg0;
    if (h != NULL) {
        p = h->p40;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p40 = (RefObj *)0;
        }
        p = h->p44;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p44 = (RefObj *)0;
        }
        p = h->p48;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p48 = (RefObj *)0;
        }
        p = h->p4c;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p4c = (RefObj *)0;
        }
        p = h->p50;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p50 = (RefObj *)0;
        }
        p = h->p54;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p54 = (RefObj *)0;
        }
        p = h->p58;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p58 = (RefObj *)0;
        }
        fn_80140304(h, 0);
    }
}
#pragma cplusplus reset

void fn_8016EC70(void) {
    return;
}

void fn_8016EC74(void *arg0) {
    M2C_UNK fn_80184C7C(void *, s32, s32, s32);
    M2C_UNK fn_80138808(void *, void *);
    void *temp_r31;
    void *temp_r3;
    void *temp_r4;

    temp_r31 = M2C_FIELD(arg0, void **, 0x18);
    temp_r3 = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (temp_r3 != NULL) {
        fn_80184C7C(temp_r3, 0, 4, 0);
    }
    temp_r3 = M2C_FIELD(temp_r31, void **, 0x44);
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, void **, 0x3C);
        if (temp_r4 != NULL) {
            fn_80138808(temp_r3, temp_r4);
        }
    }
}

void fn_8016ECDC(void) {
    M2C_UNK fn_8003BE50(void *);
    register void *temp_r31;
    void *temp_r30;
    u8 fn_80091D74(void *);

    temp_r30 = M2C_FIELD(&lbl_802EF4C8, void **, 0);
    temp_r31 = M2C_FIELD(&lbl_802EF4C8, void **, 4);
    if ((temp_r30 != NULL) && (M2C_FIELD((unsigned)temp_r30, s32 *, 0x1A0) & 0x800000) && (fn_80091D74(temp_r30) == 0)) {
        fn_8003BE50(temp_r30);
    }
    if ((temp_r31 != NULL) && (M2C_FIELD(temp_r31, s32 *, 0x1A0) & 0x800000) && (fn_80091D74(temp_r31) == 0)) {
        fn_8003BE50(temp_r31);
    }
}

void fn_8016ED6C(s32 arg0) {
    M2C_UNK fn_80183BE4(void *, s32);
    void *temp_r31;
    void *temp_r30;

    temp_r30 = M2C_FIELD(&lbl_802EF4C8, void **, 0);
    temp_r31 = M2C_FIELD(&lbl_802EF4C8, void **, 4);
    if ((temp_r30 != NULL) && (M2C_FIELD(temp_r30, s32 *, 0x1A0) & 0x800000) && (fn_80091D74(temp_r30) == 0)) {
        fn_80183BE4(temp_r30, arg0);
    }
    if ((temp_r31 != NULL) && (M2C_FIELD(temp_r31, s32 *, 0x1A0) & 0x800000) && (fn_80091D74(temp_r31) == 0)) {
        fn_80183BE4(temp_r31, arg0);
    }
}

void fn_8016EE14(void *arg0) {
    M2C_UNK fn_80184C7C(void *, s32, s32, s32);
    M2C_UNK fn_80138808(void *, void *);
    void *temp_r31;
    void *temp_r3;
    void *temp_r4;

    temp_r31 = M2C_FIELD(arg0, void **, 0x18);
    temp_r3 = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (temp_r3 != NULL) {
        fn_80184C7C(temp_r3, 0, 4, 0);
    }
    temp_r3 = M2C_FIELD(temp_r31, void **, 0x44);
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, void **, 0x3C);
        if (temp_r4 != NULL) {
            fn_80138808(temp_r3, temp_r4);
        }
    }
}

void fn_8016EE7C(void) {
    void fn_8003BE50(void *);
    fn_8003BE50(*(void **)lbl_802EF4C8);
}

void fn_8016EEA8(s32 arg0) {
    s32 temp_r31;
    u8 var_r30;

    var_r30 = 0;
    temp_r31 = *(s32*)lbl_802EF4C8;
    if (fn_80105BC0(temp_r31 + 0x1BC, 9) != 0) {
        var_r30 |= 1;
    }
    if (fn_80091D74(temp_r31) != 0) {
        var_r30 |= 2;
    }
    if (var_r30 != 3) {
        if (var_r30 < 3) {
            fn_80183BE4(temp_r31, arg0);
            return;
        }
        fn_80183BE4(temp_r31, arg0);
        return;
    }
    fn_8003C15C(temp_r31);
    fn_8000C070(arg0, 0x35);
}

void fn_8016EF58(void *arg0) {
    M2C_UNK fn_80138808(s32, s32);
    s32 fn_8013AC54(s32);
    s32 temp_r31;
    void **temp_r3;
    void **temp_r3_2;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x40);
    fn_8013AD70(temp_r31, M2C_FIELD(&lbl_80330708, s32 *, 0xB0));
    if ((s32) M2C_FIELD(arg0, u8 *, 0x65) != 0xB) {
        temp_r3 = M2C_FIELD(arg0, void ***, 0x4C);
        M2C_FIELD(*temp_r3, M2C_UNK (**)(void **, s32), 0x34)(temp_r3, fn_8013AC54(temp_r31));
        fn_80138808(M2C_FIELD(arg0, s32 *, 0x44), fn_8013AC54(temp_r31));
    } else {
        temp_r3_2 = M2C_FIELD(arg0, void ***, 0x50);
        M2C_FIELD(*temp_r3_2, M2C_UNK (**)(void **, s32), 0x34)(temp_r3_2, fn_8013AC54(temp_r31));
    }
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x65));
}

void fn_8016F0C4(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    fn_8000C070(arg0, *(u8 *)((char *)arg0 + 0x65));
}

void fn_8016F0E8(void *arg0) {
    void fn_8000C5E0(void *);
    void fn_80023FF4(void *);
    register void *temp_r3;
    void *temp_r31;
    s32 temp_r30_2;
    s32 temp_r30;

    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x5C));
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    temp_r3 = M2C_FIELD(arg0, void **, 0x5C);
    temp_r30 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s8 *, 0x62) = temp_r30;
    temp_r31 = M2C_FIELD(arg0, void **, 0x60);
    fn_8000A420(temp_r31);
    temp_r30_2 = M2C_FIELD(temp_r31, s8 *, 0x62);
    fn_80023FF4(temp_r31);
    M2C_FIELD(temp_r31, s8 *, 0x62) = temp_r30_2;
    fn_8013FEC0(arg0);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 0x100, 0));
    fn_8000C188(arg0);
}

void fn_8016F194(void *arg0) {
    fn_8000A408(*(s32**)((u8*)arg0 + 0x5C));
    fn_8013FED0(arg0);
    fn_801AE3F8(arg0);
}

void fn_8016F1D4(void *arg0) {
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
}

void fn_8016F220(void *arg0)
{
    void *temp_r3;
    s32 temp_r31;
    
    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x5C));
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    temp_r3 = M2C_FIELD(arg0, void **, 0x5C);
    temp_r31 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s8 *, 0x62) = temp_r31;
    fn_8000A420(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FEC0(arg0);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 0x100, 0));

    temp_r3 = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (temp_r3 != NULL) {
        fn_80184C7C(temp_r3, 0, 4, 0);
    }

    temp_r3 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_r3 != NULL) {
        void *temp_r4 = M2C_FIELD(temp_r3, void **, 0x3C);
        if (temp_r4 != NULL) {
            fn_80138808(temp_r3, temp_r4);
        }
    }

    fn_8000C188(arg0);
}

void fn_8016F2EC(void *arg0) {
    fn_8000A408(*(s32**)((u8*)arg0 + 0x5C));
    fn_8013FED0(arg0);
    fn_80193DD8(arg0);
}

void fn_8016F32C(void *arg0) {
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
}

void fn_8016F378(void *arg0) {
    M2C_UNK fn_8000C5E0(void *);
    M2C_UNK fn_80023FF4(void *);
    s32 temp_r31;
    void *temp_r3;

    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x5C));
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    temp_r3 = M2C_FIELD(arg0, void **, 0x5C);
    temp_r31 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s8 *, 0x62) = temp_r31;
    fn_8000A420(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FEC0(arg0);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 0x100, 0));
    fn_8000C188(arg0);
}

void fn_8016F484(void *arg0) {
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
}

void fn_8016F4D0(void *arg0) {
    M2C_UNK fn_8000C5E0(void *);
    M2C_UNK fn_80023FF4(void *);
    s32 temp_r31;
    void *temp_r3;

    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x5C));
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    temp_r3 = M2C_FIELD(arg0, void **, 0x5C);
    temp_r31 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s8 *, 0x62) = temp_r31;
    fn_8000A420(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FEC0(arg0);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 0x100, 0));
    fn_8000C188(arg0);
}

void fn_8016F5DC(void *arg0) {
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
}

void fn_8016F628(void *arg0) {
    s16 fn_80164E78(void *, s32);
    void *temp_r31;
    s32 zero;

    zero = 0;
    temp_r31 = *(void **)((u8 *)arg0 + 0x4C);
    *(u8 *)((u8 *)temp_r31 + 0x48) = zero;
    *(s32 *)((u8 *)temp_r31 + 0x60) = 3;
    *(u8 *)((u8 *)temp_r31 + 0x4B) = zero;
    *(s32 *)((u8 *)temp_r31 + 0x70) = zero;
    *(s32 *)((u8 *)temp_r31 + 0x74) = zero;
    *(s16 *)((u8 *)temp_r31 + 0x4C) = fn_80164E78(temp_r31, 0);
    fn_8013FF00(arg0, temp_r31);
}

#pragma cplusplus on
void fn_8016F694(void *arg0) {
    void fn_8000C070(void *, s32);
    s8 fn_80037E00(void *);
    void fn_800951D0(void *, s32);
    void fn_80138808(void *, void *);
    void fn_80164A48(void *);
    s16 fn_80164E78(void *, s16);
    s16 fn_80164FBC(void *, s16);
    void fn_80184C7C(void *, s32, s32, s32);
    void *temp_r29;
    s16 temp_r30;
    s16 var_r3;
    void *temp_r3;
    void *temp_r4;

    temp_r29 = M2C_FIELD(arg0, void **, 0x4C);
    temp_r30 = M2C_FIELD(temp_r29, s16 *, 0x4C);
    fn_80164A48(temp_r29);
    var_r3 = fn_80164FBC(temp_r29, temp_r30);
    if (var_r3 < 0) {
        var_r3 = fn_80164E78(temp_r29, temp_r30);
    }
    if (var_r3 >= 0) {
        M2C_FIELD(temp_r29, s16 *, 0x4C) = var_r3;
        fn_8000C070(arg0, 0x2B);
        return;
    }
    if ((s8) fn_80037E00(M2C_FIELD(lbl_802EF4C8, void **, 0)) < 0) {
        fn_800951D0(M2C_FIELD(lbl_802EF4C8, void **, 0), -1);
    }
    if (M2C_FIELD(lbl_802EF4C8, void **, 0) != NULL) {
        fn_80184C7C(M2C_FIELD(lbl_802EF4C8, void **, 0), 0, 4, 0);
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, void **, 0x3C);
        if (temp_r4 != NULL) {
            fn_80138808(temp_r3, temp_r4);
        }
    }
    fn_8000C070(arg0, 0x2C);
}

#pragma cplusplus reset
void fn_8016F790(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000CAA0(void *, void *);
    void *fn_8001CB64(void *);
    void fn_8001D580(void *);
    s32 fn_80164BB0(void *);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(u32, s32);
    typedef struct { u8 hi : 1; u8 lo : 7; } Bit7;
    extern u16 lbl_80278080[];
    extern u32 lbl_802EF4C8[];
    extern u8 lbl_80294AE8[];
    void *temp_r28;
    void *temp_r31;
    void *temp_r3;
    u32 ret;
    s16 temp_r0;

    switch ((s32)((u8 *)lbl_802EF4C8)[8]) {
    case 0x81:
        temp_r28 = M2C_FIELD(arg0, void **, 0x4C);
        temp_r31 = (void *)fn_80164BB0(temp_r28);
        if (temp_r31 != NULL) {
            ((u8 *)lbl_802EF4C8)[8] = 5;
            lbl_802EF4C8[1] = lbl_802EF4C8[0];
            temp_r0 = M2C_FIELD(temp_r28, s16 *, 0x4C);
            ((u8 *)lbl_802EF4C8)[0xA] = (u8)temp_r0;
            if ((((u8 *)temp_r31)[5] >> 7) & 1) {
                temp_r3 = fn_8001CB64(temp_r31);
                if ((*(long long *)temp_r3 & 0x100000000LL) != 0
                    && (*(s32 *)((u8 *)*(void **)lbl_802EF4C8 + 0x1A0) & 0x800000)) {
                    ((Bit7 *)((u8 *)temp_r31 + 5))->hi = 0;
                    fn_8000CAA0(lbl_80294AE8, arg0);
                }
            }
            fn_8001D580(temp_r31);
        }
        break;
    case 0x80:
        fn_8000C070(arg0, 0x2B);
        break;
    }
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != 0) {
        fn_801658DC(ret, (s32)((u8 *)lbl_80278080 + 0x18E));
    }
}

#pragma cplusplus on
extern "C" void fn_8016F8CC(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void *fn_8000CAA0(void *, void *);
    u32 *fn_8001CB64(u32);
    void fn_8013FDA0(void *);
 void *fn_8013BE3C(void *);
 void fn_80024398(void *,void *,s32);
 void *fn_8013FF94(void *,s32,s32);
 void fn_801658DC(void *,void *);
 s8 fn_80037E00(u32);
 void fn_800951D0(u32,s32);
 void fn_80184C7C(u32,s32,s32,s32);
 void fn_80138808(void *,void *); 
 extern u32 lbl_802EF4C8[];
    void fn_801475FC(void *, s32);
    u32 fn_80164BB0(void *);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, u32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016746C(void *, void *, u32, f32, f32);
    extern u16 lbl_80278080[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;
    extern u8 lbl_80294580[];

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
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
        virtual Vec2s v10() = 0;
    };

    void *obj4c;
    u32 var_r30;
    void *self;
    register int btn;
    register u8 gate;
    register int flags;
    u32 *bits;
    void *obj;
    u32 sp1C;
    u32 sp18;
    u32 sp14;

    self = arg0;
    obj4c = *(void **)((u8 *)arg0 + 0x4C);
    var_r30 = fn_80164BB0(obj4c);
    fn_8013FDA0(arg0);
    if (var_r30 != fn_80164BB0(obj4c)) {
        var_r30 = fn_80164BB0(obj4c);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            if (var_r30 != 0) {
                *(Vec2s *)&sp1C = ((Obj *)obj4c)->v10();
                fn_80166DD0(lbl_80330D68, var_r30, (f32)*(s16 *)&sp1C, (f32)*((s16 *)&sp1C + 1));
            } else {
                fn_801673D0(lbl_80330D68);
            }
        }
    }
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && var_r30 != 0 && fn_80166D8C(lbl_80330D68) == 0) {
            bits = fn_8001CB64(var_r30);
            if ((*(u64 *)bits & 0x20000000000ULL) != 0 || (*(u64 *)fn_8001CB64(var_r30) & 0x200ULL) != 0) {
                *(Vec2s *)&sp18 = ((Obj *)obj4c)->v10();
                obj = fn_8000CAA0(lbl_80294580, self);
                *(f32 *)((u8 *)obj + 0x30) = (f32)*(s16 *)&sp18;
                *(f32 *)((u8 *)obj + 0x34) = (f32)*((s16 *)&sp18 + 1);
                *(void **)((u8 *)obj + 0x54) = (u8 *)lbl_80278080 + 0x1A7;
            } else {
                obj=fn_8013BE3C((u8 *)lbl_80278080+0x1B4);
 *(u8 *)((u8 *)obj+0x24)=1;
 fn_80024398(obj,self,0);
 obj=fn_8013FF94(self,-0x1000,0);
 if(obj)fn_801658DC(obj,(u8 *)lbl_80278080+0x1CA);
 fn_8000C188(self);
 fn_801475FC((u8 *)lbl_80278080+0x1DD,0x64);
            }
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0 && var_r30 != 0) {
            *(Vec2s *)&sp14 = ((Obj *)obj4c)->v10();
            fn_8016746C(lbl_80330D68, self, var_r30, (f32)*(s16 *)&sp14, (f32)*((s16 *)&sp14 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            if(fn_80037E00(lbl_802EF4C8[0])<0)fn_800951D0(lbl_802EF4C8[0],-1);
 if(lbl_802EF4C8[0])fn_80184C7C(lbl_802EF4C8[0],0,4,0);
 obj=*(void **)((u8 *)self+0x44);
 if(obj&&*(void **)((u8 *)obj+0x3C))fn_80138808(obj,*(void **)((u8 *)obj+0x3C));
 fn_8000C070(self,0x2C);
            fn_801475FC((u8 *)lbl_80278080 + 0x1ed, 0x64);
        }
    }
}
#pragma cplusplus reset

void fn_8016FE5C(void) {
    return;
}

void fn_8016FE60(void *arg0) {
    void fn_8000A420(void *);
    void fn_80023FF4(void *);
    void fn_8000C5E0(void *);
    void fn_8013FF00(void *, s32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(s32, s32);
    void fn_80184C7C(void *, s32, s32, s32);
    void fn_80138808(void *, void *);
    extern u16 lbl_80278080[];
    extern u32 lbl_802EF4C8[];
    void *obj;
    s32 saved;
    void *p;
    void *q;
    u32 ret;

    obj = M2C_FIELD(arg0, void **, 0x5C);
    fn_8000A420(obj);
    saved = M2C_FIELD(obj, s8 *, 0x62);
    fn_80023FF4(obj);
    M2C_FIELD(obj, s8 *, 0x62) = saved;
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    fn_8013FF00(arg0, M2C_FIELD(arg0, s32 *, 0x40));
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != 0) {
        fn_801658DC(ret, (s32)((u8 *)lbl_80278080 + 0x1FD));
    }
    p = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (p != NULL) {
        fn_80184C7C(p, 0, 4, 0);
    }
    p = M2C_FIELD(arg0, void **, 0x44);
    if (p != NULL) {
        q = M2C_FIELD(p, void **, 0x3C);
        if (q != NULL) {
            fn_80138808(p, q);
        }
    }
}

void fn_80170034(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x5C));
}

#pragma cplusplus on
extern "C" void fn_80170058(void *arg0) {
    void fn_801400F4(void *, void *);
    void fn_8014027C(void *, void *, s16 *, s32);
    void fn_80140258(void *, void *, s16 *, s32);
    void *fn_8013FF94(void *, s32, s32);
    void fn_8014004C(void *, void *);
    void fn_80109020(void *);
    extern u16 lbl_80278080[];

    struct RefObj {
        virtual void destroy(s32);
        s32 refCount;
    };

    void *obj4c;
    void *obj40;
    RefObj *p;
    void *ret;
    s16 spC[2];
    s16 sp8[2];
    s16 tmp;
    s32 refs;

    obj4c = *(void **)((u8 *)arg0 + 0x4C);
    *((u8 *)obj4c + 0x78) = 1;
    *((u8 *)obj4c + 0x4A) = 0;
    obj40 = *(void **)((u8 *)arg0 + 0x40);
    fn_801400F4(arg0, obj40);
    spC[0] = *(s16 *)((u8 *)obj40 + 0xA);
    spC[1] = 0x10;
    fn_8014027C(arg0, obj40, spC, 0);

    p = *(RefObj **)((u8 *)arg0 + 0x54);
    tmp = *(s16 *)((u8 *)p + 0xC);
    sp8[0] = 0x260;
    sp8[1] = tmp;
    fn_80140258(arg0, p, sp8, 1);

    p = *(RefObj **)((u8 *)arg0 + 0x54);
    if (p != NULL) {
        refs = p->refCount - 1;
        p->refCount = refs;
        if (refs == 0 && p != NULL) {
            p->destroy(1);
        }
        *(RefObj **)((u8 *)arg0 + 0x54) = (RefObj *)0;
    }
    ret = fn_8013FF94(arg0, 0x109, 0);
    fn_8014004C(arg0, ret);
    fn_80109020((u8 *)lbl_80278080 + 0x210);
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801703FC(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void *fn_8000CAA0(void *, void *);
    u32 *fn_8001CB64(u32);
    void fn_8013FDA0(void *);
    void fn_801475FC(void *, s32);
    u32 fn_80164BB0(void *);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, u32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016746C(void *, void *, u32, f32, f32);
    extern u16 lbl_80278080[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;
    extern u8 lbl_80294580[];

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
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
        virtual Vec2s v10() = 0;
    };

    void *obj4c;
    u32 var_r30;
    void *self;
    register int btn;
    register u8 gate;
    register int flags;
    u32 *bits;
    void *obj;
    u32 sp1C;
    u32 sp18;
    u32 sp14;

    self = arg0;
    obj4c = *(void **)((u8 *)arg0 + 0x4C);
    var_r30 = fn_80164BB0(obj4c);
    fn_8013FDA0(arg0);
    if (var_r30 != fn_80164BB0(obj4c)) {
        var_r30 = fn_80164BB0(obj4c);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            if (var_r30 != 0) {
                *(Vec2s *)&sp1C = ((Obj *)obj4c)->v10();
                fn_80166DD0(lbl_80330D68, var_r30, (f32)*(s16 *)&sp1C, (f32)*((s16 *)&sp1C + 1));
            } else {
                fn_801673D0(lbl_80330D68);
            }
        }
    }
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && var_r30 != 0 && fn_80166D8C(lbl_80330D68) == 0) {
            bits = fn_8001CB64(var_r30);
            if ((*(u64 *)bits & 0x200ULL) != 0) {
                *(Vec2s *)&sp18 = ((Obj *)obj4c)->v10();
                obj = fn_8000CAA0(lbl_80294580, self);
                *(f32 *)((u8 *)obj + 0x30) = (f32)*(s16 *)&sp18;
                *(f32 *)((u8 *)obj + 0x34) = (f32)*((s16 *)&sp18 + 1);
                *(void **)((u8 *)obj + 0x54) = (u8 *)lbl_80278080 + 0x236;
            } else {
                fn_8000C188(self);
            }
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0 && var_r30 != 0) {
            *(Vec2s *)&sp14 = ((Obj *)obj4c)->v10();
            fn_8016746C(lbl_80330D68, self, var_r30, (f32)*(s16 *)&sp14, (f32)*((s16 *)&sp14 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            fn_8000C070(self, 0x27);
            fn_801475FC((u8 *)lbl_80278080 + 0x1ed, 0x64);
        }
    }
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

#pragma cplusplus reset

void fn_8017073C(void *arg0) {
    M2C_UNK fn_8013FF00(void *, s32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(s32, s32);
    extern u16 lbl_80278080[];
    u32 ret;

    fn_8013FF00(arg0, M2C_FIELD(arg0, s32 *, 0x4C));
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != 0) {
        fn_801658DC(ret, (s32)((u8 *)lbl_80278080 + 0x248));
    }
}

void fn_80170794(void *arg0) {
    s16 fn_80164E78(void *, s32);
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x4C);
    M2C_FIELD(temp_r31, s8 *, 0x48) = 1;
    M2C_FIELD(temp_r31, s16 *, 0x4C) = fn_80164E78(temp_r31, 0);
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80170894(void *arg0) {
    s32 *fn_80143A84(void *);
    u32 *fn_8001CB64(s32);
    s32 fn_80164D24(void *);
    s32 fn_80164CAC(void *);
    void *fn_8000CAA0(void *, void *);
    void fn_801475FC(void *, s32);
    s32 fn_80164A24(void *, s16);
    void fn_8001C4FC(s32, s32);
    void fn_80164A48(void *);
    void fn_801436AC(void *, s32);
    void fn_80143C9C(void *);
    void fn_8001D580(s32);
    s16 fn_80164FBC(void *, s16);
    s16 fn_80164E78(void *, s16);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80294580[];
    extern u16 lbl_80278080[];

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
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
        virtual Vec2s v13() = 0;
    };

    void *var_r28;
    void *temp_r31;
    void *temp_r30;
    s32 temp_r29;
    s32 var_r27;
    u32 *bits;
    void *proc;
    u32 sp14;
    u32 sp10;
    s16 var_r3;

    var_r28 = arg0;
    temp_r31 = *(void **)((u8 *)arg0 + 0x54);
    temp_r30 = *(void **)((u8 *)arg0 + 0x4c);
    temp_r29 = *fn_80143A84(temp_r31);
    bits = fn_8001CB64(temp_r29);
    if ((*(u64 *)bits & 5ULL) != 0) {
        var_r27 = fn_80164D24(temp_r30);
        if (!(*(u32 *)((u8 *)temp_r30 + 0x60) & 1) || ((s16)var_r27 < 0)) {
            *(Vec2s *)&sp14 = ((Obj *)temp_r31)->v13();
            proc = fn_8000CAA0(lbl_80294580, var_r28);
            *(f32 *)((u8 *)proc + 0x30) = (f32)*(s16 *)&sp14;
            *(f32 *)((u8 *)proc + 0x34) = (f32)*((s16 *)&sp14 + 1);
            *(void **)((u8 *)proc + 0x54) = (u8 *)lbl_80278080 + 0x260;
            return;
        }
    } else {
        var_r27 = fn_80164CAC(temp_r30);
        if (!(*(u32 *)((u8 *)temp_r30 + 0x60) & 2) || ((s16)var_r27 < 0)) {
            *(Vec2s *)&sp10 = ((Obj *)temp_r31)->v13();
            proc = fn_8000CAA0(lbl_80294580, var_r28);
            *(f32 *)((u8 *)proc + 0x30) = (f32)*(s16 *)&sp10;
            *(f32 *)((u8 *)proc + 0x34) = (f32)*((s16 *)&sp10 + 1);
            *(void **)((u8 *)proc + 0x54) = (u8 *)lbl_80278080 + 0x260;
            return;
        }
    }
    fn_801475FC((u8 *)lbl_80278080 + 0x1dd, 0x64);
    fn_8001C4FC(fn_80164A24(temp_r30, (s16)var_r27), temp_r29);
    fn_80164A48(temp_r30);
    fn_801436AC(temp_r31, temp_r29);
    fn_80143C9C(temp_r31);
    fn_8001D580(temp_r29);
    var_r3 = fn_80164FBC(temp_r30, *(s16 *)((u8 *)temp_r30 + 0x4c));
    if (var_r3 < 0) {
        var_r3 = fn_80164E78(temp_r30, *(s16 *)((u8 *)temp_r30 + 0x4c));
    }
    if (var_r3 >= 0) {
        *(s16 *)((u8 *)temp_r30 + 0x4c) = var_r3;
    } else {
        fn_8000C070(var_r28, 0x24);
    }
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80170AD0(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void fn_8013FDA0(void *);
    u32 fn_8013FF94(void *, s32, s32);
    s32 *fn_80143A84(void *);
    void fn_801475FC(void *, s32);
    void fn_801658DC(u32, void *);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, s32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016746C(void *, void *, s32, f32, f32);
    extern u16 lbl_80278080[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
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
        virtual Vec2s v13() = 0;
    };

    void *obj54;
    s32 *var_r30;
    void *self;
    register int btn;
    register u8 gate;
    register int flags;
    u32 ret;
    u32 sp14;
    u32 sp10;

    self = arg0;
    obj54 = *(void **)((u8 *)arg0 + 0x54);
    var_r30 = fn_80143A84(obj54);
    if (var_r30 != NULL) {
        ret = fn_8013FF94(arg0, -0x1000, 0);
        if (ret != 0) {
            fn_801658DC(ret, (u8 *)lbl_80278080 + 0x272);
        }
    } else {
        ret = fn_8013FF94(arg0, -0x1000, 0);
        if (ret != 0) {
            fn_801658DC(ret, (u8 *)lbl_80278080 + 0x28a);
        }
    }
    fn_8013FDA0(arg0);
    if (var_r30 != fn_80143A84(obj54)) {
        var_r30 = fn_80143A84(obj54);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            if (var_r30 != NULL) {
                *(Vec2s *)&sp14 = ((Obj *)obj54)->v13();
                fn_80166DD0(lbl_80330D68, *var_r30, (f32)*(s16 *)&sp14, (f32)*((s16 *)&sp14 + 1));
            } else {
                fn_801673D0(lbl_80330D68);
            }
        }
    }
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && var_r30 != NULL && fn_80166D8C(lbl_80330D68) == 0) {
            fn_8000C188(self);
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0 && var_r30 != NULL) {
            *(Vec2s *)&sp10 = ((Obj *)obj54)->v13();
            fn_8016746C(lbl_80330D68, self, *var_r30, (f32)*(s16 *)&sp10, (f32)*((s16 *)&sp10 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            fn_8000C070(self, 0x24);
            fn_801475FC((u8 *)lbl_80278080 + 0x1ed, 0x64);
        }
    }
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus reset
#pragma use_lmw_stmw reset

void fn_80170DB0(void *arg0) {
    void fn_8013FF00(void *, s32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(s32, s32);
    extern u16 lbl_80278080[];
    u32 ret;

    fn_8013FF00(arg0, *(s32 *)((u8 *)arg0 + 0x54));
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != 0) {
        fn_801658DC(ret, (s32)((u8 *)lbl_80278080 + 0x272));
    }
}

void fn_80170E08(void *arg0) {
    u8 *p = *(u8 **)((u8 *)arg0 + 0x54);
    p[0x4c] = 1;
}

void fn_80170E18(void *arg0) {
    void fn_8000A420(void *);
    void fn_8000C5E0(void *);
    void fn_80023FF4(void *);
    void fn_801658DC(s32, s32);
    u32 fn_8013FF94(void *, s32, s32);
    extern u16 lbl_80278080[];
    void *obj;
    s32 saved;
    void *obj2;
    u32 ret;

    obj = *(void **)((u8 *)arg0 + 0x5C);
    saved = *(s8 *)((u8 *)obj + 0x62);
    fn_80023FF4(obj);
    *(s8 *)((u8 *)obj + 0x62) = saved;
    obj2 = *(void **)((u8 *)arg0 + 0x5C);
    if (!(*(u8 *)((u8 *)obj2 + 0x2C) & 2)) {
        fn_8000C5E0(obj2);
    }
    fn_8000A420(obj2);
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != 0) {
        fn_801658DC(ret, (s32)((u8 *)lbl_80278080 + 0x2A3));
    }
}

void fn_80171004(void *arg0) {
    (void)arg0;
}

void fn_80171218(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    extern u16 lbl_8028FDB0[4];
    extern u16 lbl_80292230[10];
    extern u16 lbl_8029518C[11];
    extern u16 lbl_802951B8[11];
    extern f32 lbl_8036AB6C;

    *(u16**)arg0 = lbl_8028FDB0;
    *((s32*)arg0 + 1) = 0;
    *((u16**)arg0 + 1) = lbl_80292230;
    *((s16*)arg0 + 4) = -1;
    *((s16*)arg0 + 5) = arg1;
    *((s16*)arg0 + 6) = arg2;
    *((s16*)arg0 + 7) = arg1 + arg3;
    *((s16*)arg0 + 8) = arg2 + 0x2C;
    *((s16*)arg0 + 9) = 0;
    *((s16*)arg0 + 10) = 0;
    *((s16*)arg0 + 11) = arg3;
    *((s16*)arg0 + 12) = 0x2C;
    *((s16*)arg0 + 13) = 0;
    *((s16*)arg0 + 14) = 0;
    *((s8*)arg0 + 30) = 0xFF;
    *((s8*)arg0 + 31) = 0xFF;
    *((s8*)arg0 + 32) = 0xFF;
    *((s8*)arg0 + 33) = 0xFF;
    *((s16*)arg0 + 17) = arg4;
    *((s16*)arg0 + 18) = 0;
    *((f32*)arg0 + 10) = lbl_8036AB6C;
    *((f32*)arg0 + 11) = lbl_8036AB6C;
    *((f32*)arg0 + 12) = lbl_8036AB6C;
    *((s32*)arg0 + 14) = 0;
    *((s32*)arg0 + 15) = 0;
    *(u16**)arg0 = lbl_802951B8;
    *((s16*)arg0 + 30) = 0;
    *((s16*)arg0 + 31) = 0;
    *((s16*)arg0 + 15) = 2;
    *((s16*)arg0 + 16) = 8;
    *((s16*)arg0 + 17) = (arg1 + arg3) - arg1 - 2;
    *((s16*)arg0 + 18) = (arg2 + 0x2C) - arg2 - 8;
    *(u16**)arg0 = lbl_8029518C;
    *((s16*)arg0 + 30) = 0;
    *((s16*)arg0 + 31) = 0;
    *((s16*)arg0 + 15) = 0;
    *((s16*)arg0 + 16) = 0;
    *((s16*)arg0 + 17) = (arg1 + arg3) - arg1;
    *((s16*)arg0 + 18) = (arg2 + 0x2C) - arg2;
    *((s32*)arg0 + 14) = (*((s32*)arg0 + 14) | 0x10);
}

#pragma cplusplus on
extern "C" void fn_80171374(void *arg0) {
#pragma opt_common_subs off
    void *fn_800C42D8(s32);
    void *fn_80179F8C(void *, s16, s16, s16, s16, s32);
    void *fn_80179DEC(void *, s16, s16, s32);
    u8 fn_801EAA88(void);
    void fn_8013B064(void *, void *);
    void fn_8013AD70(void *, s32);
    void fn_801400F4(void *, void *);
    void *fn_8013AC54(void *);
    void fn_80138808(void *, void *);
    void fn_8013FF00(void *, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801378E8(void *, s32);
    void fn_801658DC(void *, void *);
    u8 *fn_8018D900(s32);
    extern void fn_801723A0();
    extern u8 lbl_802CA264[], lbl_8028FDB0[], lbl_80292230[], lbl_80292178[], lbl_80291A3C[], lbl_802919DC[], lbl_80293C84[], lbl_80293C2C[];
    extern u16 lbl_80278080[];
    extern u32 lbl_802EF4C8[];
    extern f32 lbl_8036AB6C, lbl_8036AB70, lbl_8036AB78;
    struct Obj {
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
        virtual void v11(void *) = 0;
        virtual void v12(s32) = 0;
    };
    void *entry;
    void *p;
    void *hold;
    void *q;
    u8 col[4];
    u8 *color;
    u8 first;
    s32 ctx;

    ctx = lbl_802EF4C8[0];
    p = fn_800C42D8(0xD8);
    if (p) p = fn_80179F8C(p, 0x38, -0x7C, 0x1F0, 0x7C, 0x226);
    M2C_FIELD(arg0, void **, 0x40) = p;
    q = M2C_FIELD(arg0, void **, 0x40);
    if (q) M2C_FIELD(q, s32 *, 4)++;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s16 *, 0x24) = 8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s16 *, 8) = 0x100;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s16 *, 0x5A) = 0x1C;
    ((Obj *)M2C_FIELD(arg0, void **, 0x40))->v12(3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s16 *, 0x58) = 3;
    if (!fn_801EAA88()) {
        hold = M2C_FIELD(arg0, void **, 0x40);
        entry = M2C_FIELD(lbl_802CA264, void **, 0);
        while (entry) {
            fn_8013B064(hold, entry);
            entry = M2C_FIELD(entry, void **, 0x184);
        }
    }
    {
        void *entry2;
        void *hold2;
        hold2 = M2C_FIELD(arg0, void **, 0x40);
        entry2 = M2C_FIELD(lbl_802CA264, void **, 0x3C);
        while (entry2) {
            fn_8013B064(hold2, entry2);
            entry2 = M2C_FIELD(entry2, void **, 0x184);
        }
    }
    fn_8013AD70(M2C_FIELD(arg0, void **, 0x40), ctx);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x30) = lbl_8036AB78;

    p = fn_800C42D8(0x7C);
    if (p) p = fn_80179DEC(p, 0x20, 0x84, 0x1F4);
    M2C_FIELD(arg0, void **, 0x4C) = p;
    q = M2C_FIELD(arg0, void **, 0x4C);
    if (q) M2C_FIELD(q, s32 *, 4)++;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s16 *, 0x24) = 8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s16 *, 8) = 0x103;
    ((Obj *)M2C_FIELD(arg0, void **, 0x4C))->v11(fn_8013AC54(M2C_FIELD(arg0, void **, 0x40)));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), u8 *, 0x48) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), u8 *, 0x78) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), u8 *, 0x4A) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32 *, 0x60) = 2;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), u8 *, 0x4B) = 1;
    q = M2C_FIELD(arg0, void **, 0x4C);
    M2C_FIELD(q, void **, 0x70) = (void *)&fn_801723A0;
    M2C_FIELD(q, s32 *, 0x74) = ctx;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s16 *, 0x4C) = *(u8 *)((u8 *)lbl_802EF4C8 + 0x15);
    fn_801400F4(arg0, M2C_FIELD(arg0, void **, 0x4C));

    p = fn_800C42D8(0x50);
    if (p) {
        init_761F8_base(p, 0x130, 0x94, 0x118, 0x40, 0x1FE);
        M2C_FIELD(p, void **, 0) = lbl_80292178;
        M2C_FIELD(p, u8 *, 60) = 0xFF;
        M2C_FIELD(p, u8 *, 61) = 0xFF;
        M2C_FIELD(p, u8 *, 62) = 0xFF;
        M2C_FIELD(p, u8 *, 63) = 0xFF;
        M2C_FIELD(p, s32 *, 0x40) = 0;
        M2C_FIELD(p, s16 *, 0x44) = 0;
        M2C_FIELD(p, s16 *, 0x46) = 0;
        ((Obj *)p)->v8();
    }
    M2C_FIELD(arg0, void **, 0x48) = p;
    q = M2C_FIELD(arg0, void **, 0x48);
    if (q) M2C_FIELD(q, s32 *, 4)++;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s16 *, 0x24) = 8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s16 *, 8) = 0x102;
    q = M2C_FIELD(arg0, void **, 0x48);
    M2C_FIELD(q, u32 *, 0x34) |= 0x10;
    color = fn_8018D900(2);
    first = color[0];
    col[0] = first;
    col[1] = color[1];
    col[2] = color[2];
    col[3] = color[3];
    q = M2C_FIELD(arg0, void **, 0x48);
    if ((u8 *)q + 0x3C != col) {
        M2C_FIELD(q, u8 *, 0x3C) = first;
        M2C_FIELD(q, u8 *, 0x3D) = col[1];
        M2C_FIELD(q, u8 *, 0x3E) = col[2];
        M2C_FIELD(q, u8 *, 0x3F) = col[3];
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), f32 *, 0x2C) = lbl_8036AB70;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), void **, 0x40) = (u8 *)lbl_80278080 + 0x2BB;

    p = fn_800C42D8(0x54);
    if (p) {
        init_761F8_base(p, 0x260, 0x12C, 0x108, 0x55, 0x1F4);
        M2C_FIELD(p, void **, 0) = lbl_80291A3C;
        M2C_FIELD(p, s32 *, 0x3C) = 0;
        M2C_FIELD(p, s32 *, 0x40) = 0x1003C;
        M2C_FIELD(p, s32 *, 0x4C) = 0;
        M2C_FIELD(p, s32 *, 0x50) = 0;
        ((Obj *)p)->v8();
    }
    M2C_FIELD(arg0, void **, 0x44) = p;
    q = M2C_FIELD(arg0, void **, 0x44);
    if (q) M2C_FIELD(q, s32 *, 4)++;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s16 *, 8) = 0x101;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s16 *, 0x24) = 8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0x4C) = 1;
    q = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(q, u32 *, 0x34) |= 0x10;
    fn_80138808(M2C_FIELD(arg0, void **, 0x44), fn_8013AC54(M2C_FIELD(arg0, void **, 0x40)));

    p = fn_800C42D8(0x4C);
    if (p) {
        init_761F8_base(p, 0x138, 0x6C, 0x108, 0xD0, 0x1F4);
        M2C_FIELD(p, void **, 0) = lbl_802919DC;
        M2C_FIELD(p, s32 *, 0x44) = 0;
        M2C_FIELD(p, u8 *, 0x48) = 1;
        ((Obj *)p)->v8();
    }
    M2C_FIELD(p, s16 *, 8) = 0x107;
    M2C_FIELD(p, u32 *, 0x34) |= 0x10;
    fn_801378E8(p, ctx);
    M2C_FIELD(p, u8 *, 0x48) = 0;
    M2C_FIELD(p, s16 *, 0x24) = 4;
    fn_801400F4(arg0, p);

    p = fn_800C42D8(0x58);
    if (p) {
        init_761F8_base(p, 0, 0x28, 0x260, 0x3A, 0x226);
        M2C_FIELD(p, void **, 0) = lbl_80293C84;
        M2C_FIELD(p, s32 *, 0x3C) = 0;
        M2C_FIELD(p, s32 *, 0x40) = 0;
        M2C_FIELD(p, s32 *, 0x44) = 0;
        M2C_FIELD(p, s32 *, 0x40) = 0;
        M2C_FIELD(p, s32 *, 0x48) = 0;
        M2C_FIELD(p, u8 *, 0x4C) = 1;
        M2C_FIELD(p, s16 *, 0x4E) = 0;
        M2C_FIELD(p, s16 *, 0x50) = 0;
        M2C_FIELD(p, s16 *, 0x52) = 0;
        M2C_FIELD(p, s16 *, 0x54) = 0;
        M2C_FIELD(p, void **, 0) = lbl_80293C2C;
    }
    M2C_FIELD(p, s16 *, 8) = 0x106;
    M2C_FIELD(p, u32 *, 0x34) |= 0x10;
    M2C_FIELD(p, s16 *, 0x4E) = 0x140;
    M2C_FIELD(p, u8 *, 0x4C) = 2;
    M2C_FIELD(p, s32 *, 0x48) = 0;
    M2C_FIELD(p, s16 *, 0x24) = 4;
    fn_801400F4(arg0, p);
    fn_801658DC(p, (u8 *)lbl_80278080 + 0x2D2);
    fn_8013FF00(arg0, M2C_FIELD(arg0, void **, 0x4C));
    {
        void *r = fn_8013FF94(arg0, -0x1000, 0);
        if (r) fn_801658DC(r, (u8 *)lbl_80278080 + 0x2E7);
    }
}
#pragma cplusplus reset
#pragma opt_common_subs on

void fn_80171B18(s32 arg0, s32 arg1, s32 arg2)
{
    *(u32*)(*(u32*)(*(u32*)(arg0 + 0x10) + 0x4) + 0x50) = arg2;
}

void fn_80171D04(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_800271C8(void *, void *);
    u32 fn_80164BB0(void *);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(s32, s32);
    extern u16 lbl_80278080[];
    extern u32 lbl_802EF4C8[];
    void *temp_r30;
    s16 temp_r0;
    u32 ret;

    switch ((s32)((u8 *)lbl_802EF4C8)[8]) {
    case 0x81:
        temp_r30 = M2C_FIELD(arg0, void **, 0x4C);
        if (fn_80164BB0(temp_r30) != 0) {
            ((u8 *)lbl_802EF4C8)[8] = 4;
            lbl_802EF4C8[1] = lbl_802EF4C8[0];
            temp_r0 = M2C_FIELD(temp_r30, s16 *, 0x4C);
            ((u8 *)lbl_802EF4C8)[0xA] = (u8)temp_r0;
            ((u8 *)lbl_802EF4C8)[0x15] = (u8)temp_r0;
            fn_800271C8(lbl_802EF4C8, arg0);
        }
        break;
    case 0x80:
        fn_8000C070(arg0, 0x1A);
        break;
    }
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != 0) {
        fn_801658DC(ret, (s32)((u8 *)lbl_80278080 + 0x2E7));
    }
}

#pragma cplusplus on
extern "C" void fn_80171F00(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void *fn_8000CAA0(void *, void *);
    u32 *fn_8001CB64(u32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(u32, void *);
    u8 fn_80091F70(u32, u32);
    extern u32 lbl_802EF4C8[];
    void fn_8013FDA0(void *);
    void fn_801475FC(void *, s32);
    u32 fn_80164BB0(void *);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, u32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016746C(void *, void *, u32, f32, f32);
    extern u16 lbl_80278080[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;
    extern u8 lbl_80294580[];

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
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
        virtual Vec2s v10() = 0;
    };

    void *obj4c;
    u32 text;
    u32 var_r30;
    void *self;
    register int btn;
    register u8 gate;
    register int flags;
    u32 *bits;
    void *obj;
    u32 sp1C;
    u32 sp18;
    u32 sp14;

    self = arg0;
    obj4c = *(void **)((u8 *)arg0 + 0x4C);
    text = fn_8013FF94(arg0, 0x106, 0);
    var_r30 = fn_80164BB0(obj4c);
    fn_8013FDA0(arg0);
    if (var_r30 != fn_80164BB0(obj4c)) {
        var_r30 = fn_80164BB0(obj4c);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            if (var_r30 != 0) {
                *(Vec2s *)&sp1C = ((Obj *)obj4c)->v10();
                fn_80166DD0(lbl_80330D68, var_r30, (f32)*(s16 *)&sp1C, (f32)*((s16 *)&sp1C + 1));
            } else {
                fn_801673D0(lbl_80330D68);
            }
        }
    }
    fn_801658DC(text, (u8 *)lbl_80278080 + 0x2ff);
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && var_r30 != 0 && fn_80166D8C(lbl_80330D68) == 0) {
            if (fn_80091F70(lbl_802EF4C8[0], *(u32 *)var_r30) == 0) {
                *(Vec2s *)&sp18 = ((Obj *)obj4c)->v10();
                obj = fn_8000CAA0(lbl_80294580, self);
                *(f32 *)((u8 *)obj + 0x30) = (f32)*(s16 *)&sp18;
                *(f32 *)((u8 *)obj + 0x34) = (f32)*((s16 *)&sp18 + 1);
                *(void **)((u8 *)obj + 0x54) = (u8 *)lbl_80278080 + 0x316;
            } else {
                fn_801475FC((u8 *)lbl_80278080 + 0x1dd, 0x64);
                fn_8000C188(self);
            }
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0 && var_r30 != 0) {
            *(Vec2s *)&sp14 = ((Obj *)obj4c)->v10();
            fn_8016746C(lbl_80330D68, self, var_r30, (f32)*(s16 *)&sp14, (f32)*((s16 *)&sp14 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            fn_8000C070(self, 0x1c);
            fn_801475FC((u8 *)lbl_80278080 + 0x1ed, 0x64);
        }
    }
}
#pragma cplusplus off

u8 fn_801723A0(u32 *arg0, s32 arg1) {
    u32 temp_r0;

    if ((arg0 == NULL) || (temp_r0 = *arg0, ((temp_r0 == 0U) != 0))) {
        return 0U;
    }
    return fn_800939FC(arg1, temp_r0);
}

#pragma cplusplus on
extern "C" void fn_801723E8(void *arg0) {
    void *fn_800C42D8(s32);
    void fn_801378E8(void *, u32);
    void fn_801400F4(void *, void *);
    void fn_80140258(void *, void *, s16 *, s32);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u16 lbl_802919DC[];
    extern u16 lbl_80293C84[];
    extern u16 lbl_80293C2C[];
    extern f32 lbl_8036AB6C;
    extern f32 lbl_8036AB70;
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
    };
    void *self;
    void *temp_r31;
    void *temp_r4;
    s16 sp8[2];
    s16 temp_r7;
    s16 temp_r8;
    f32 f0;
    void *vt;

    self = arg0;
    temp_r4 = *(void **)((u8 *)arg0 + 0x40);
    temp_r8 = *(s16 *)((u8 *)temp_r4 + 0xC);
    temp_r7 = *(s16 *)((u8 *)temp_r4 + 0x10) - temp_r8;
    sp8[0] = *(s16 *)((u8 *)temp_r4 + 0xA);
    sp8[1] = -temp_r7;
    fn_80140258(arg0, temp_r4, sp8, 0);
    temp_r31 = fn_800C42D8(0x4C);
    if (temp_r31 != NULL) {
        vt = lbl_802919DC;
        *(void **)temp_r31 = lbl_8028FDB0;
        *(s32 *)((u8 *)temp_r31 + 4) = 0;
        *(void **)temp_r31 = lbl_80292230;
        *(s16 *)((u8 *)temp_r31 + 8) = -1;
        *(s16 *)((u8 *)temp_r31 + 0xA) = 0x260;
        *(s16 *)((u8 *)temp_r31 + 0xC) = 0x6C;
        *(s16 *)((u8 *)temp_r31 + 0xE) = 0x368;
        *(s16 *)((u8 *)temp_r31 + 0x10) = 0x13C;
        *(s16 *)((u8 *)temp_r31 + 0x12) = 0;
        *(s16 *)((u8 *)temp_r31 + 0x14) = 0;
        *(s16 *)((u8 *)temp_r31 + 0x16) = 0x108;
        *(s16 *)((u8 *)temp_r31 + 0x18) = 0xD0;
        *(s16 *)((u8 *)temp_r31 + 0x1A) = 0;
        *(s16 *)((u8 *)temp_r31 + 0x1C) = 0;
        *(u8 *)((u8 *)temp_r31 + 0x1E) = 0xFF;
        *(u8 *)((u8 *)temp_r31 + 0x1F) = 0xFF;
        *(u8 *)((u8 *)temp_r31 + 0x20) = 0xFF;
        *(u8 *)((u8 *)temp_r31 + 0x21) = 0xFF;
        *(s16 *)((u8 *)temp_r31 + 0x22) = 0x1F4;
        *(s16 *)((u8 *)temp_r31 + 0x24) = 0;
        f0 = lbl_8036AB6C;
        *(f32 *)((u8 *)temp_r31 + 0x28) = f0;
        *(f32 *)((u8 *)temp_r31 + 0x2C) = f0;
        *(f32 *)((u8 *)temp_r31 + 0x30) = f0;
        *(s32 *)((u8 *)temp_r31 + 0x34) = 0;
        *(s32 *)((u8 *)temp_r31 + 0x38) = 0;
        *(void **)temp_r31 = vt;
        *(s32 *)((u8 *)temp_r31 + 0x44) = 0;
        *(u8 *)((u8 *)temp_r31 + 0x48) = 1;
        ((Obj *)temp_r31)->v8();
    }
    *(s16 *)((u8 *)temp_r31 + 8) = 0x107;
    *(s32 *)((u8 *)temp_r31 + 0x34) |= 0x10;
    fn_801378E8(temp_r31, lbl_802EF4C8[0]);
    *(u8 *)((u8 *)temp_r31 + 0x48) = 0;
    *(s16 *)((u8 *)temp_r31 + 0x24) = 4;
    fn_801400F4(self, temp_r31);
    temp_r4 = fn_800C42D8(0x58);
    if (temp_r4 != NULL) {
        vt = lbl_80293C2C;
        *(void **)temp_r4 = lbl_8028FDB0;
        *(s32 *)((u8 *)temp_r4 + 4) = 0;
        *(void **)temp_r4 = lbl_80292230;
        *(s16 *)((u8 *)temp_r4 + 8) = -1;
        *(s16 *)((u8 *)temp_r4 + 0xA) = 0;
        *(s16 *)((u8 *)temp_r4 + 0xC) = 0x28;
        *(s16 *)((u8 *)temp_r4 + 0xE) = 0x260;
        *(s16 *)((u8 *)temp_r4 + 0x10) = 0x62;
        *(s16 *)((u8 *)temp_r4 + 0x12) = 0;
        *(s16 *)((u8 *)temp_r4 + 0x14) = 0;
        *(s16 *)((u8 *)temp_r4 + 0x16) = 0x260;
        *(s16 *)((u8 *)temp_r4 + 0x18) = 0x3A;
        *(s16 *)((u8 *)temp_r4 + 0x1A) = 0;
        *(s16 *)((u8 *)temp_r4 + 0x1C) = 0;
        *(u8 *)((u8 *)temp_r4 + 0x1E) = 0xFF;
        *(u8 *)((u8 *)temp_r4 + 0x1F) = 0xFF;
        *(u8 *)((u8 *)temp_r4 + 0x20) = 0xFF;
        *(u8 *)((u8 *)temp_r4 + 0x21) = 0xFF;
        *(s16 *)((u8 *)temp_r4 + 0x22) = 0x226;
        *(s16 *)((u8 *)temp_r4 + 0x24) = 0;
        f0 = lbl_8036AB6C;
        *(f32 *)((u8 *)temp_r4 + 0x28) = f0;
        *(f32 *)((u8 *)temp_r4 + 0x2C) = f0;
        *(f32 *)((u8 *)temp_r4 + 0x30) = f0;
        *(s32 *)((u8 *)temp_r4 + 0x34) = 0;
        *(s32 *)((u8 *)temp_r4 + 0x38) = 0;
        *(void **)temp_r4 = lbl_80293C84;
        *(s32 *)((u8 *)temp_r4 + 0x3C) = 0;
        *(s32 *)((u8 *)temp_r4 + 0x40) = 0;
        *(s32 *)((u8 *)temp_r4 + 0x44) = 0;
        *(s32 *)((u8 *)temp_r4 + 0x40) = 0;
        *(s32 *)((u8 *)temp_r4 + 0x48) = 0;
        *(u8 *)((u8 *)temp_r4 + 0x4C) = 1;
        *(s16 *)((u8 *)temp_r4 + 0x4E) = 0;
        *(s16 *)((u8 *)temp_r4 + 0x50) = 0;
        *(s16 *)((u8 *)temp_r4 + 0x52) = 0;
        *(s16 *)((u8 *)temp_r4 + 0x54) = 0;
        *(void **)temp_r4 = vt;
    }
    *(s16 *)((u8 *)temp_r4 + 8) = 0x106;
    f0 = lbl_8036AB70;
    *(s32 *)((u8 *)temp_r4 + 0x34) |= 0x10;
    *(s16 *)((u8 *)temp_r4 + 0x4E) = 0x140;
    *(u8 *)((u8 *)temp_r4 + 0x4C) = 2;
    *(s32 *)((u8 *)temp_r4 + 0x48) = 0;
    *(s16 *)((u8 *)temp_r4 + 0x24) = 4;
    *(f32 *)((u8 *)temp_r4 + 0x2C) = f0;
    fn_801400F4(self, temp_r4);
}
#pragma cplusplus reset

void fn_80172694(void *arg0) {
    void fn_8000A420(void *);
    void fn_80023FF4(void *);
    void fn_8000C5E0(void *);
    void fn_8013FF00(void *, s32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(s32, s32);
    void fn_80184C7C(void *, s32, s32, s32);
    void fn_80138808(void *, void *);
    s16 fn_80164E78(void *, s32);
    extern u16 lbl_80278080[];
    extern u32 lbl_802EF4C8[];
    s32 saved;
    void *obj;
    void *p;
    void *q;
    u32 ret;
    s32 zero;

    obj = M2C_FIELD(arg0, void **, 0x5C);
    fn_8000A420(obj);
    saved = M2C_FIELD(obj, s8 *, 0x62);
    fn_80023FF4(obj);
    M2C_FIELD(obj, s8 *, 0x62) = saved;
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    obj = M2C_FIELD(arg0, void **, 0x4C);
    zero = 0;
    saved = M2C_FIELD(arg0, s32 *, 0x40);
    M2C_FIELD(obj, s8 *, 0x48) = zero;
    M2C_FIELD(obj, s32 *, 0x60) = 3;
    M2C_FIELD(obj, s8 *, 0x4B) = zero;
    M2C_FIELD(obj, s32 *, 0x70) = zero;
    M2C_FIELD(obj, s32 *, 0x74) = zero;
    M2C_FIELD(obj, s16 *, 0x4C) = fn_80164E78(obj, 0);
    fn_8013FF00(arg0, saved);
    p = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (p != NULL) {
        fn_80184C7C(p, 0, 4, 0);
    }
    p = M2C_FIELD(arg0, void **, 0x44);
    if (p != NULL) {
        q = M2C_FIELD(p, void **, 0x3C);
        if (q != NULL) {
            fn_80138808(p, q);
        }
    }
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != 0) {
        fn_801658DC(ret, (s32)((u8 *)lbl_80278080 + 0x1FD));
    }
}

void fn_80172C44(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x5C));
}

s32 fn_80172C68(void *arg0) {
    if (arg0 == NULL || *(u32 *)arg0 == 0) {
        return 0;
    }
    return ((struct { u8 hi:1; u8 lo:7; } *)((u8 *)arg0 + 5))->hi != 0;
}

void fn_80172C9C(void *arg0) {
    void fn_8000A420(void *);
    void fn_80023FF4(void *);
    void fn_8000C5E0(void *);
    void fn_8013FF00(void *, s32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(s32, s32);
    void fn_80184C7C(void *, s32, s32, s32);
    void fn_80138808(void *, void *);
    s16 fn_80164E78(void *, s32);
    extern u16 lbl_80278080[];
    extern u32 lbl_802EF4C8[];
    s32 saved;
    void *obj;
    void *p;
    void *q;
    u32 ret;
    s32 zero;

    obj = M2C_FIELD(arg0, void **, 0x5C);
    fn_8000A420(obj);
    saved = M2C_FIELD(obj, s8 *, 0x62);
    fn_80023FF4(obj);
    M2C_FIELD(obj, s8 *, 0x62) = saved;
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    obj = M2C_FIELD(arg0, void **, 0x4C);
    zero = 0;
    saved = M2C_FIELD(arg0, s32 *, 0x40);
    M2C_FIELD(obj, s8 *, 0x48) = zero;
    M2C_FIELD(obj, s32 *, 0x60) = 3;
    M2C_FIELD(obj, s8 *, 0x4B) = zero;
    M2C_FIELD(obj, s32 *, 0x70) = zero;
    M2C_FIELD(obj, s32 *, 0x74) = zero;
    M2C_FIELD(obj, s16 *, 0x4C) = fn_80164E78(obj, 0);
    fn_8013FF00(arg0, saved);
    p = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (p != NULL) {
        fn_80184C7C(p, 0, 4, 0);
    }
    p = M2C_FIELD(arg0, void **, 0x44);
    if (p != NULL) {
        q = M2C_FIELD(p, void **, 0x3C);
        if (q != NULL) {
            fn_80138808(p, q);
        }
    }
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != 0) {
        fn_801658DC(ret, (s32)((u8 *)lbl_80278080 + 0x1FD));
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_80172DA4(void *arg0) {
    void fn_8000C070(void *, s32);
    void *fn_8000CAA0(void *, void *);
    u32 *fn_8001CB64(u32);
    void fn_80094CDC(void *, s16);
    void fn_8013FDA0(void *);
    void fn_801475FC(void *, s32);
    u32 fn_80164BB0(void *);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, u32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016746C(void *, void *, u32, f32, f32);
    extern u16 lbl_80278080[];
    extern u8 lbl_80294AE8[];
    extern u32 lbl_802EF4C8[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
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
        virtual Vec2s v10() = 0;
        virtual void v11(void *) = 0;
        virtual u8 v12(u32, void *) = 0;
    };

    void *item;
    void *obj4c;
    u32 var_r29;
    void *self;
    register int btn;
    register u8 gate;
    register int flags;
    u32 *bits;
    u32 sp14;
    u32 sp10;

    self = arg0;
    obj4c = *(void **)((u8 *)arg0 + 0x4C);
    var_r29 = fn_80164BB0(obj4c);
    fn_8013FDA0(arg0);
    if (var_r29 != fn_80164BB0(obj4c)) {
        var_r29 = fn_80164BB0(obj4c);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            if (var_r29 != 0) {
                *(Vec2s *)&sp14 = ((Obj *)obj4c)->v10();
                fn_80166DD0(lbl_80330D68, var_r29, (f32)*(s16 *)&sp14, (f32)*((s16 *)&sp14 + 1));
            } else {
                fn_801673D0(lbl_80330D68);
            }
        }
    }
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && var_r29 != 0 && fn_80166D8C(lbl_80330D68) == 0) {
            if (((Obj *)obj4c)->v12(var_r29, (item = *(void **)lbl_802EF4C8, (void *)lbl_802EF4C8)) == 0) {
                fn_801475FC((u8 *)lbl_80278080 + 0x322, 0x64);
            } else {
                fn_801475FC((u8 *)lbl_80278080 + 0x35e, 0x64);
                fn_80094CDC(item, *(s16 *)((u8 *)obj4c + 0x4C));
                bits = fn_8001CB64(var_r29);
                if ((*(u64 *)bits & 0x5ULL) != 0) {
                    ((Obj *)obj4c)->v11(item);
                } else {
                    btn = *(s16 *)((u8 *)obj4c + 0x4C);
                    ((Obj *)obj4c)->v11(item);
                    *(s16 *)((u8 *)obj4c + 0x4C) = (s16)btn;
                }
                bits = fn_8001CB64(var_r29);
                if ((*(u64 *)bits & 0x100000000ULL) != 0
                    || (*(s32 *)((u8 *)item + 0x1A0) & 0x800000) != 0) {
                    fn_8000CAA0(lbl_80294AE8, self);
                }
            }
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0 && var_r29 != 0) {
            *(Vec2s *)&sp10 = ((Obj *)obj4c)->v10();
            fn_8016746C(lbl_80330D68, self, var_r29, (f32)*(s16 *)&sp10, (f32)*((s16 *)&sp10 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            fn_8000C070(self, 0x15);
            fn_801475FC((u8 *)lbl_80278080 + 0x1ed, 0x64);
        }
    }
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

void fn_801731FC(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x5C));
}

void fn_80173440(void *arg0) {
    M2C_UNK fn_80184C7C(void *, s32, s32, s32);
    M2C_UNK fn_80138808(void *, void *);
    void fn_8000C070(void *, s32);
    void *temp_r31;
    void *temp_r3;
    void *temp_r4;

    temp_r31 = arg0;
    temp_r3 = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (temp_r3 != NULL) {
        fn_80184C7C(temp_r3, 0, 4, 0);
    }
    temp_r3 = M2C_FIELD(lbl_802EF4C8, void **, 4);
    if (temp_r3 != NULL) {
        fn_80184C7C(temp_r3, 0, 4, 0);
    }
    temp_r3 = M2C_FIELD(temp_r31, void **, 0x44);
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, void **, 0x3C);
        if (temp_r4 != NULL) {
            fn_80138808(temp_r3, temp_r4);
        }
    }
    fn_8000C070(temp_r31, 0xF);
}

void fn_801734D8(void *arg0) {
    s32 temp_r30;
    void **temp_r31;
    void **temp_r3;
    void *temp_r4;
    void fn_80143570(s32);
    void fn_801436AC(s32);
    void fn_80143784(s32, s32);
    void fn_80143C9C(s32);
    void fn_8000CAA0(void *, void *);
    void fn_8000C188(void *);
    void fn_8013FEC0(void *);

    extern u32 lbl_802EF4C8[];
    extern u8 lbl_80294B10[0xA0];

    temp_r3 = (void **)((u32 *)arg0 + 0x4C / sizeof(u32));
    temp_r31 = (void **)((u32 *)arg0 + 0x50 / sizeof(u32));
    ((void (*)(void **, s32))((u32 *)*temp_r3)[0x34 / sizeof(u32)])(temp_r3, lbl_802EF4C8[0]);
    ((void (*)(void **, s32))((u32 *)*temp_r31)[0x34 / sizeof(u32)])(temp_r31, lbl_802EF4C8[1]);
    temp_r30 = ((s32 *)arg0)[0x54 / sizeof(s32)];
    fn_80143784(temp_r30, lbl_802EF4C8[0]);
    fn_80143784(temp_r30, lbl_802EF4C8[1]);
    fn_80143570(temp_r30);
    // Simple loop without complex field access
    {
        s8 i;
        for (i = 0; i < 8; i++) {
            temp_r4 = *(void**)((u32*)arg0 + 0x68 / sizeof(u32));
            if ((u32)temp_r4 != 0U) {
                fn_801436AC(temp_r30);
            }
        }
    }
    fn_80143C9C(temp_r30);
    fn_8013FEC0(arg0);
    fn_8000CAA0(lbl_80294B10, arg0);
    fn_8000C188(arg0);
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_8017369C(void *arg0) {
void fn_8000C070(void *, s32);
void *fn_8000CAA0(void *, void *);
u32 *fn_8001CB64(u32);
void fn_8001C4FC(u32 *, s32);
void fn_8001C5F8(void *, s32);
void fn_8001C690(void *, u32 *, u32);
void fn_8001D580(s32);
s32 fn_800C3D48(void *);
void fn_800C3C1C(void *, void *);
void fn_8013FDA0(void *);
void fn_8013FF00(void *, void *);
void fn_80143570(void *);
s16 fn_801435E0(void *, void *);
void fn_801436AC(void *, s32);
void fn_801439F0(void *, void *, s32);
s32 *fn_80143A84(void *);
void fn_80143C9C(void *);
void fn_80143E0C(void *, s16);
void fn_801475FC(void *, s32);
u32 fn_80164BB0(void *);
u8 fn_80166D8C(void *);
void fn_80166DD0(void *, u32, f32, f32);
void fn_801673D0(void *);
void fn_8016746C(void *, void *, u32, f32, f32);
extern u16 lbl_80278080[];
extern u8 lbl_80330D68[];
extern u32 lbl_80367110;
extern void *lbl_80367240;
extern s32 lbl_80368DC4;
extern u8 lbl_80294580[];
extern u8 lbl_803200AC[];
extern u32 lbl_802EF4C8[];
extern u8 lbl_80294B10[];
class Vec2s {
public:
s16 x; s16 y;
Vec2s() {}
Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
};
struct Obj {
virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0;
virtual void v3() = 0; virtual void v4() = 0; virtual void v5() = 0;
virtual void v6() = 0; virtual void v7() = 0; virtual void v8() = 0;
virtual void v9() = 0; virtual Vec2s v10() = 0;
};
struct Obj2 {
virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0;
virtual void v3() = 0; virtual void v4() = 0; virtual void v5() = 0;
virtual void v6() = 0; virtual void v7() = 0; virtual void v8() = 0;
virtual void v11(s32) = 0; virtual void v12() = 0; virtual void v13() = 0;
virtual s32 v14(void *) = 0;
};
u32 sp28[2];
u32 sp24;
u32 sp1C, sp18, sp14, sp10;
void *obj4c;
void *obj54;
void *self;
u32 var_r27;
register int btn;
register u8 gate;
register int flags;
u32 *bits;
void *obj;
u8 ok;
self = arg0;
obj4c = *(void **)((u8 *)arg0 + 0x4C);
obj54 = *(void **)((u8 *)arg0 + 0x54);
var_r27 = fn_80164BB0(obj4c);
fn_8013FDA0(arg0);
if (var_r27 != fn_80164BB0(obj4c)) {
var_r27 = fn_80164BB0(obj4c);
if (fn_80166D8C(lbl_80330D68) != 0) {
if (var_r27 != 0 && *(u32 *)var_r27 != 0) {
*(Vec2s *)&sp10 = ((Obj *)obj4c)->v10();
fn_80166DD0(lbl_80330D68, var_r27, (f32)*(s16 *)&sp10, (f32)*((s16 *)&sp10 + 1));
} else {
fn_801673D0(lbl_80330D68);
}
}
}
flags = lbl_80367110;
gate = 0;
if ((flags & 0x10) && !(flags & 0x20)) gate = 1;
if (!gate) {
btn = *(s32 *)((u8 *)lbl_80367240 + 4);
btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
if ((btn & 0x100) && var_r27 != 0 && fn_80166D8C(lbl_80330D68) == 0) {
bits = fn_8001CB64(var_r27);
if ((*(u64 *)bits & 0x200ULL) != 0) {
*(Vec2s *)&sp18 = ((Obj *)obj4c)->v10();
obj = fn_8000CAA0(lbl_80294580, self);
*(f32 *)((u8 *)obj + 0x30) = (f32)*(s16 *)&sp18;
*(f32 *)((u8 *)obj + 0x34) = (f32)*((s16 *)&sp18 + 1);
*(void **)((u8 *)obj + 0x54) = (u8 *)lbl_80278080 + 0x236;
} else {
void *r28 = *(void **)((u8 *)self + 0x54);
void *r26a = *(void **)((u8 *)self + 0x4C);
s32 *r27b = fn_80143A84(r28);
u32 *r26b = (u32 *)fn_80164BB0(r26a);
if (r26b != 0 && r27b != 0) {
u32 r5 = *r26b;
register u32 r25;
r25 = (u32)(-(s32)r5 | r5) >> 31;
fn_8001C690(sp28, r26b, r5);
fn_8001C4FC(r26b, *r27b);
fn_801436AC(r28, *r27b);
fn_80143C9C(r28);
fn_8001D580(*r27b);
if (r25) {
s32 idx = fn_800C3D48(lbl_803200AC);
fn_800C3C1C(lbl_803200AC, sp28);
void *slot = lbl_803200AC + (idx << 3);
fn_801439F0(r28, slot, 0);
fn_80143570(r28);
((Obj2 *)r28)->v11(((Obj2 *)r28)->v14(slot));
fn_80143E0C(r28, fn_801435E0(r28, slot));
}
lbl_802EF4C8[1] = 0;
fn_8000CAA0(lbl_80294B10, self);
fn_8001C5F8(sp28, -1);
ok = 1;
} else {
ok = 0;
}
if (ok == 0) {
fn_801475FC((u8 *)lbl_80278080 + 0x322, 0x64);
} else {
*(u8 *)((u8 *)obj54 + 0x4D) = 0;
sp1C = *(u32 *)((u8 *)obj4c + 0x50);
{
s16 t6 = *(s16 *)&sp1C;
s16 t = t6 + (*(s16 *)((u8 *)obj4c + 0xA) - *(s16 *)((u8 *)obj54 + 0xA));
*(s16 *)((u8 *)obj54 + 0x7C) = t;
*(s16 *)&sp1C = t;
*(s16 *)((u8 *)obj54 + 0x7E) = *((s16 *)&sp1C + 1);
fn_8013FF00(self, obj54);
}
*(s32 *)((u8 *)obj4c + 0x5C) = 0;
*(s32 *)((u8 *)obj4c + 0x60) = 3;
*(u8 *)((u8 *)obj4c + 0x4B) = 0;
*(u8 *)((u8 *)obj4c + 0x48) = 0;
*(u8 *)((u8 *)obj54 + 0x4C) = 1;
fn_8000C070(self, 0xF);
fn_801475FC((u8 *)lbl_80278080 + 0x1DD, 0x64);
}
}
} else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0 && var_r27 != 0 && *(u32 *)var_r27 != 0) {
*(Vec2s *)&sp14 = ((Obj *)obj4c)->v10();
fn_8016746C(lbl_80330D68, self, var_r27, (f32)*(s16 *)&sp14, (f32)*((s16 *)&sp14 + 1));
*(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
} else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
fn_801673D0(lbl_80330D68);
} else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
*(u8 *)((u8 *)obj54 + 0x4D) = 0;
fn_80143E0C(obj54, *(s16 *)((u8 *)obj54 + 0x7A));
sp18 = *(u32 *)((u8 *)obj4c + 0x50);
{
s16 t6 = *(s16 *)&sp18;
s16 t = t6 + (*(s16 *)((u8 *)obj4c + 0xA) - *(s16 *)((u8 *)obj54 + 0xA));
*(s16 *)((u8 *)obj54 + 0x7C) = t;
*(s16 *)&sp18 = t;
*(s16 *)((u8 *)obj54 + 0x7E) = *((s16 *)&sp18 + 1);
fn_8013FF00(self, obj54);
}
*(s32 *)((u8 *)obj4c + 0x5C) = 0;
*(s32 *)((u8 *)obj4c + 0x60) = 3;
*(u8 *)((u8 *)obj4c + 0x4B) = 0;
*(u8 *)((u8 *)obj4c + 0x48) = 0;
*(u8 *)((u8 *)obj54 + 0x4C) = 1;
fn_8000C070(self, 0xF);
fn_801475FC((u8 *)lbl_80278080 + 0x1ED, 0x64);
}
}
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

s32 fn_80173C24(void *arg0) {
    s32 temp_r0;
    
    if (arg0 == NULL) {
        return 0;
    }
    
    temp_r0 = *(s32*)arg0;
    
    if ((temp_r0 & 1) == 0) {
        return 0;
    }
    
    temp_r0 = (temp_r0 >> 1) & 0x7FF;
    
    if (temp_r0 < 0 || temp_r0 > 255) {
        return 0;
    }
    
    return temp_r0;
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80173D1C(void *arg0) {
    void fn_8000C070(void *, s32);
    s8 fn_80037E00(u32);
    void fn_800951D0(u32, s32);
    void fn_80138808(void *, void *);
    void fn_8013FDA0(void *);
    u32 fn_8013FF94(void *, s32, s32);
    s32 *fn_80143A84(void *);
    s16 fn_80143C58(void *);
    void fn_801475FC(void *, s32);
    void fn_801658DC(u32, void *);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, s32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016746C(void *, void *, s32, f32, f32);
    void fn_80184C7C(u32, s32, s32, s32);
    extern u16 lbl_80278080[];
    extern u32 lbl_802EF4C8[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
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
        virtual Vec2s v13() = 0;
    };

    void *obj54;
    void *obj58;
    s32 *var_r28;
    void *self;
    register int btn;
    register u8 gate;
    register int flags;
    u32 ret;
    void *obj;
    u32 sp14;
    u32 sp10;

    self = arg0;
    obj54 = *(void **)((u8 *)arg0 + 0x54);
    obj58 = *(void **)((u8 *)arg0 + 0x58);
    var_r28 = fn_80143A84(obj54);
    if (var_r28 != NULL) {
        ret = fn_8013FF94(arg0, -0x1000, 0);
        if (ret != 0) {
            fn_801658DC(ret, (u8 *)lbl_80278080 + 0x38a);
        }
    } else {
        ret = fn_8013FF94(arg0, -0x1000, 0);
        if (ret != 0) {
            fn_801658DC(ret, (u8 *)lbl_80278080 + 0x3a4);
        }
    }
    fn_8013FDA0(arg0);
    if (var_r28 != fn_80143A84(obj54)) {
        var_r28 = fn_80143A84(obj54);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            if (var_r28 != NULL) {
                *(Vec2s *)&sp14 = ((Obj *)obj54)->v13();
                fn_80166DD0(lbl_80330D68, *var_r28, (f32)*(s16 *)&sp14, (f32)*((s16 *)&sp14 + 1));
            } else {
                fn_801673D0(lbl_80330D68);
            }
        }
    }
    *(s32 **)((u8 *)obj58 + 0x40) = var_r28;
    if (var_r28 != NULL) {
        *(u32 *)((u8 *)obj58 + 0x44) = *(u32 *)((u8 *)var_r28 + 4);
    } else {
        *(u32 *)((u8 *)obj58 + 0x44) = 0;
    }
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && var_r28 != NULL && fn_80166D8C(lbl_80330D68) == 0) {
            if (*(u32 *)((u8 *)var_r28 + 4) == 0) {
                *((u8 *)obj54 + 0x4d) = 1;
                *(s16 *)((u8 *)obj54 + 0x7a) = fn_80143C58(obj54);
                *((u8 *)obj54 + 0x4c) = 0;
                fn_8000C070(arg0, 0x10);
            } else {
                if (fn_80037E00(lbl_802EF4C8[0]) < 0) {
                    fn_800951D0(lbl_802EF4C8[0], -1);
                }
                if (lbl_802EF4C8[0]) {
                    fn_80184C7C(lbl_802EF4C8[0], 0, 4, 0);
                }
                obj = *(void **)((u8 *)self + 0x44);
                if (obj && *(void **)((u8 *)obj + 0x3C)) {
                    fn_80138808(obj, *(void **)((u8 *)obj + 0x3C));
                }
                lbl_802EF4C8[1] = *(u32 *)((u8 *)var_r28 + 4);
                fn_8000C070(arg0, 0x11);
            }
            fn_801475FC((u8 *)lbl_80278080 + 0x1dd, 0x64);
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0 && var_r28 != NULL) {
            *(Vec2s *)&sp10 = ((Obj *)obj54)->v13();
            fn_8016746C(lbl_80330D68, self, *var_r28, (f32)*(s16 *)&sp10, (f32)*((s16 *)&sp10 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0x400) && fn_80166D8C(lbl_80330D68) == 0) {
            if (fn_80037E00(lbl_802EF4C8[0]) < 0) {
                fn_800951D0(lbl_802EF4C8[0], -1);
            }
            if (lbl_802EF4C8[0]) {
                fn_80184C7C(lbl_802EF4C8[0], 0, 4, 0);
            }
            obj = *(void **)((u8 *)self + 0x44);
            if (obj && *(void **)((u8 *)obj + 0x3C)) {
                fn_80138808(obj, *(void **)((u8 *)obj + 0x3C));
            }
            fn_8000C070(arg0, 0xa);
            fn_801475FC((u8 *)lbl_80278080 + 0x3bf, 0x64);
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            if (fn_80037E00(lbl_802EF4C8[0]) < 0) {
                fn_800951D0(lbl_802EF4C8[0], -1);
            }
            if (lbl_802EF4C8[0]) {
                fn_80184C7C(lbl_802EF4C8[0], 0, 4, 0);
            }
            obj = *(void **)((u8 *)self + 0x44);
            if (obj && *(void **)((u8 *)obj + 0x3C)) {
                fn_80138808(obj, *(void **)((u8 *)obj + 0x3C));
            }
            fn_8000C070(arg0, 0x12);
            fn_801475FC((u8 *)lbl_80278080 + 0x1ed, 0x64);
        }
    }
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

void fn_80174204(void) {
    return;
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801743B4(void *arg0) {
    void *fn_800C42D8(s32);
    void *fn_80179DEC(void *, s16, s16, s32);
    void *fn_80179800(void *, s16, s16, s16, s16, s32);
    void *fn_80174998(void *, s16, s16, s32);
    void *fn_8013AC54(void *);
    void fn_8013AF08(void *, s16);
    void fn_801400F4(void *, void *);
    u8 fn_801EAA88(void);
    void **fn_80037BBC(void *, s32);
    void fn_801439F0(void *, void *, void *);
    u8 fn_80105BC0(void *, u8);
    u32 *fn_8001CB64(u32);
    u8 fn_8014D8DC(void *);
    void fn_80143570(void *);
    void *fn_80143A84(void *);
    s32 fn_801758C4(u32, u32);
    u8 fn_80175924(s32 **, s32);
    extern u32 lbl_802EF4C8[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_80330708[];
    extern u32 lbl_803200AC[];

    struct Obj {
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
        virtual void v11(void *) = 0;
    };
    struct ObjB {
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
    };

    u32 count;
    void *slot;
    void **entry;
    void *dst1;
    void *unit1;
    long i;
    void *unit2;
    void *dst2;
    void *p;
    void *q;
    void *tmp;
    void *inner;
    void *self;
    s16 next;
    s16 idx;
    void *dst3;
    u8 add;
    void *walk;
    u32 *bits;
    u32 player;

    self = arg0;
    inner = *(void **)((u8 *)self + 0x40);
    idx = *(s16 *)((u8 *)inner + 0x4E);
    *(void **)((u8 *)inner + 0x7C) = (void *)fn_801758C4;
    *(s16 *)((u8 *)inner + 0x50) = idx;
    *(u32 *)((u8 *)inner + 0x80) = lbl_802EF4C8[0];
    count = *(u32 *)((u8 *)inner + 0x70);
    idx = *(s16 *)((u8 *)inner + 0x4E);
    if ((u32)idx < count - 1) {
        next = (s16)(idx + 1);
        if ((u32)next < count) {
            fn_8013AF08(inner, next);
        }
    } else {
        next = (s16)(idx - 1);
        if (next >= 0) {
            fn_8013AF08(inner, next);
        }
    }

    p = fn_800C42D8(0x7C);
    if (p != NULL) {
        p = fn_80179DEC(p, 0x260, 0x84, 0x1F4);
    }
    *(void **)((u8 *)self + 0x50) = p;
    q = *(void **)((u8 *)self + 0x50);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0x24) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 8) = 0x104;
    ((Obj *)*(void **)((u8 *)self + 0x50))->v11(fn_8013AC54(inner));
    *(u8 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0x48) = 0;

    p = fn_800C42D8(0x12C);
    if (p != NULL) {
        p = fn_80179800(p, 0x260, 0x84, 0x108, 0x110, 0x1F4);
    }
    *(void **)((u8 *)self + 0x54) = p;
    q = *(void **)((u8 *)self + 0x54);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x54) + 8) = 0x105;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x54) + 0x24) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x54) + 0x8A) = 2;

    if (fn_801EAA88() == 0) {
        dst1 = *(void **)((u8 *)self + 0x54);
        unit1 = *(void **)lbl_802CA264;
        goto loop1_cond;
    loop1_body:
        for (i = 0; i < 4; i++) {
            entry = fn_80037BBC(unit1, i);
            if (*(u32 *)entry == 0) {
                break;
            }
            player = lbl_802EF4C8[0];
            if (unit1 == NULL) {
                add = 1;
            } else if (unit1 == (void *)player) {
                add = 0;
            } else if ((fn_80105BC0((u8 *)*(void **)((u8 *)unit1 + 0x18C) + 0x1C, 8) != 0) && (bits = fn_8001CB64((u32)entry), add = 0, ((*(u64 *)bits & 0x200ULL) != 0))) {
            } else {
                add = 1;
            }
            if (add != 0) {
                fn_801439F0(dst1, entry, unit1);
            }
        }
        i = 0;
        walk = unit1;
        while (i < 4) {
            slot = (u8 *)walk + 0x1EC;
            if (*(u32 *)((u8 *)walk + 0x1EC) == 0) {
                break;
            }
            player = lbl_802EF4C8[0];
            if (unit1 == NULL) {
                add = 1;
            } else if (unit1 == (void *)player) {
                add = 0;
            } else if ((fn_80105BC0((u8 *)*(void **)((u8 *)unit1 + 0x18C) + 0x1C, 8) != 0) && (bits = fn_8001CB64((u32)slot), add = 0, ((*(u64 *)bits & 0x200ULL) != 0))) {
            } else {
                add = 1;
            }
            if (add != 0) {
                fn_801439F0(dst1, slot, unit1);
            }
            i += 1;
            walk = (u8 *)walk + 8;
        }
        unit1 = *(void **)((u8 *)unit1 + 0x184);
    loop1_cond:
        if (unit1 != NULL) {
            goto loop1_body;
        }
    }

    dst2 = *(void **)((u8 *)self + 0x54);
    unit2 = *(void **)(lbl_802CA264 + 0x3C);
    goto loop2_cond;
loop2_body:
    for (i = 0; i < 4; i++) {
        entry = fn_80037BBC(unit2, i);
        if (*(u32 *)entry == 0) {
            break;
        }
        player = lbl_802EF4C8[0];
        if (unit2 == NULL) {
            add = 1;
        } else if (unit2 == (void *)player) {
            add = 0;
        } else if ((fn_80105BC0((u8 *)*(void **)((u8 *)unit2 + 0x18C) + 0x1C, 8) != 0) && (bits = fn_8001CB64((u32)entry), add = 0, ((*(u64 *)bits & 0x200ULL) != 0))) {
        } else {
            add = 1;
        }
        if (add != 0) {
            fn_801439F0(dst2, entry, unit2);
        }
    }
    i = 0;
    walk = unit2;
    while (i < 4) {
        slot = (u8 *)walk + 0x1EC;
        if (*(u32 *)((u8 *)walk + 0x1EC) == 0) {
            break;
        }
        player = lbl_802EF4C8[0];
        if (unit2 == NULL) {
            add = 1;
        } else if (unit2 == (void *)player) {
            add = 0;
        } else if ((fn_80105BC0((u8 *)*(void **)((u8 *)unit2 + 0x18C) + 0x1C, 8) != 0) && (bits = fn_8001CB64((u32)slot), add = 0, ((*(u64 *)bits & 0x200ULL) != 0))) {
        } else {
            add = 1;
        }
        if (add != 0) {
            fn_801439F0(dst2, slot, unit2);
        }
        i += 1;
        walk = (u8 *)walk + 8;
    }
    unit2 = *(void **)((u8 *)unit2 + 0x184);
loop2_cond:
    if (unit2 != NULL) {
        goto loop2_body;
    }

    if (fn_8014D8DC(lbl_80330708) != 0) {
        dst3 = *(void **)((u8 *)self + 0x54);
        walk = lbl_803200AC;
        i = 0;
        while (i < 0xC8) {
            if (*(u32 *)walk != 0) {
                fn_801439F0(dst3, walk, NULL);
            }
            i += 1;
            walk = (u8 *)walk + 8;
        }
    }

    fn_80143570(*(void **)((u8 *)self + 0x54));
    q = *(void **)((u8 *)self + 0x54);
    *(s32 *)((u8 *)q + 0x11C) = 2;
    {
        void *cb = (void *)fn_80175924;
        u32 ef0 = lbl_802EF4C8[0];
        *(void **)((u8 *)*(void **)((u8 *)self + 0x54) + 0x120) = cb;
        *(u32 *)((u8 *)*(void **)((u8 *)self + 0x54) + 0x124) = ef0;
    }
    ((ObjB *)*(void **)((u8 *)self + 0x54))->v11();
    fn_801400F4(self, *(void **)((u8 *)self + 0x54));

    p = fn_800C42D8(0x48);
    if (p != NULL) {
        p = fn_80174998(p, 0x260, 0x4C, 0x1F4);
    }
    *(void **)((u8 *)self + 0x58) = p;
    q = *(void **)((u8 *)self + 0x58);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 8) = 0x108;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 0x24) = 8;
    tmp = fn_80143A84(*(void **)((u8 *)self + 0x54));
    q = *(void **)((u8 *)self + 0x58);
    *(void **)((u8 *)q + 0x40) = tmp;
    if (tmp != NULL) {
        *(s32 *)((u8 *)q + 0x44) = *(s32 *)((u8 *)tmp + 4);
    } else {
        *(s32 *)((u8 *)q + 0x44) = 0;
    }
    fn_801400F4(self, *(void **)((u8 *)self + 0x54));
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_80174B10(void *arg0) {
    void fn_8013AF08(void *, s16);
    void fn_8014004C(void *, void *);
    void fn_80140258(void *, void *, s16 *, s32);

    struct RefObj {
        virtual void destroy(s32);
        s32 refCount;
    };

    struct Inner {
        u8 pad[0x4D];
        u8 f4d;
        u8 pad4e[2];
        s16 f50;
        u8 pad52[0x2A];
        s32 f7c;
        s32 f80;
    };

    struct Holder {
        u8 pad[0x40];
        Inner *p40;
        u8 pad44[0xC];
        RefObj *p50;
        RefObj *p54;
        RefObj *p58;
    };

    Holder *h;
    Inner *inner;
    RefObj *p;
    RefObj *p50;
    s16 sp8[2];
    s16 tmp;
    s32 refs;

    h = (Holder *)arg0;
    inner = h->p40;
    fn_8013AF08(inner, inner->f50);
    inner->f4d = 0;
    inner->f7c = 0;
    inner->f80 = 0;
    p50 = h->p50;
    tmp = *(s16 *)((u8 *)p50 + 0xC);
    sp8[0] = 0x260;
    sp8[1] = tmp;
    fn_80140258(h, p50, sp8, 1);

    p = h->p50;
    if (p != NULL) {
        refs = p->refCount - 1;
        p->refCount = refs;
        if (refs == 0 && p != NULL) {
            p->destroy(1);
        }
        h->p50 = (RefObj *)0;
    }
    fn_8014004C(h, h->p54);
    p = h->p54;
    if (p != NULL) {
        refs = p->refCount - 1;
        p->refCount = refs;
        if (refs == 0 && p != NULL) {
            p->destroy(1);
        }
        h->p54 = (RefObj *)0;
    }
    fn_8014004C(h, h->p58);
    p = h->p58;
    if (p != NULL) {
        refs = p->refCount - 1;
        p->refCount = refs;
        if (refs == 0 && p != NULL) {
            p->destroy(1);
        }
        h->p58 = (RefObj *)0;
    }
}

extern "C" void fn_80174C5C(void *arg0) {
    M2C_UNK fn_80184C7C(void *, s32, s32, s32);
    M2C_UNK fn_80138808(void *, void *);
    void fn_8000C070(void *, s32);
    void *temp_r31;
    void *temp_r3;
    void *temp_r4;

    temp_r31 = arg0;
    temp_r3 = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (temp_r3 != NULL) {
        fn_80184C7C(temp_r3, 0, 4, 0);
    }
    temp_r3 = M2C_FIELD(lbl_802EF4C8, void **, 4);
    if (temp_r3 != NULL) {
        fn_80184C7C(temp_r3, 0, 4, 0);
    }
    temp_r3 = M2C_FIELD(temp_r31, void **, 0x44);
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, void **, 0x3C);
        if (temp_r4 != NULL) {
            fn_80138808(temp_r3, temp_r4);
        }
    }
    fn_8000C070(temp_r31, 0xB);
}

#pragma cplusplus reset

void fn_80174E0C(s32 arg0) {
    void fn_800AAE78(s32, s32, s32, s32);
    void fn_8013FED0(s32);

    fn_800AAE78(arg0, 0xCC, -1, -1);
    fn_8013FED0(arg0);
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80174E4C(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *, void *);
    void *fn_8000CAA0(void *, void *);
    u8 fn_80093088(u32);
    u32 fn_8013AC54(void *);
    void fn_8013FDA0(void *);
    void fn_801475FC(void *, s32);
    void fn_801695BC(u32, void *, s32);
    extern u16 lbl_80278080[];
    extern u8 lbl_80294580[];
    extern u32 lbl_802EF4C8[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct VObj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual Vec2s v9() = 0;
        virtual void v10() = 0;
        virtual void v11(u32) = 0;
    };

    void *obj40;
    u32 var_r30;
    void *self;
    void *obj50;
    register u8 gate;
    register int flags;
    register int btn;
    void *proc;
    u32 sp14;
    u32 sp10;

    self = arg0;
    obj40 = *(void **)((u8 *)arg0 + 0x40);
    obj50 = *(void **)((u8 *)arg0 + 0x50);
    var_r30 = fn_8013AC54(obj40);
    fn_8013FDA0(arg0);
    if (var_r30 != fn_8013AC54(obj40)) {
        var_r30 = fn_8013AC54(obj40);
        ((VObj *)obj50)->v11(var_r30);
    }
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && var_r30) {
            if (lbl_802EF4C8[0] == var_r30) {
                *(Vec2s *)&sp14 = ((VObj *)obj40)->v9();
                proc = fn_8000CAA0(lbl_80294580, self);
                *(f32 *)((u8 *)proc + 0x30) = (f32)*(s16 *)&sp14;
                *(f32 *)((u8 *)proc + 0x34) = (f32)*((s16 *)&sp14 + 1);
                *(void **)((u8 *)proc + 0x54) = (u8 *)lbl_80278080 + 0x3db;
            } else if (fn_80093088(lbl_802EF4C8[0]) && fn_80093088(var_r30)) {
                *(Vec2s *)&sp10 = ((VObj *)obj40)->v9();
                proc = fn_8000CAA0(lbl_80294580, self);
                *(f32 *)((u8 *)proc + 0x30) = (f32)*(s16 *)&sp10;
                *(f32 *)((u8 *)proc + 0x34) = (f32)*((s16 *)&sp10 + 1);
                *(void **)((u8 *)proc + 0x54) = (u8 *)lbl_80278080 + 0x3e9;
            } else {
                lbl_802EF4C8[1] = var_r30;
                fn_8000C188(self, lbl_802EF4C8);
                fn_801475FC((u8 *)lbl_80278080 + 0x1dd, 0x64);
            }
        } else if ((btn & 0x800) && var_r30) {
            fn_801695BC(var_r30, self, 0x1000000);
            *(u8 *)((u8 *)self + 0x65) = 0xb;
            fn_8000C070(self, 0x31);
        } else if ((btn & 0x400) && var_r30) {
            fn_8000C070(self, 0xe);
            fn_801475FC((u8 *)lbl_80278080 + 0x3bf, 0x64);
        } else if (btn & 0x200) {
            fn_8000C070(self, 0xc);
            fn_801475FC((u8 *)lbl_80278080 + 0x1ed, 0x64);
        }
    }
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

void fn_80175124(void *arg0, s32 arg1) {
    s32 temp_r3;
    u8 var_r0;
    
    *(u32 *)arg0 = (arg1 & 0x3F) | ((*(u32 *)arg0) & 0xFFFFFFC0);
    temp_r3 = *(s32 *)((char *)arg0 + 0x4);
    if (temp_r3 == 0) {
        var_r0 = 0;
    } else {
        var_r0 = *(u8 *)(temp_r3 + 0x15) & 1;
    }
    if (var_r0 == 0) {
        var_r0 = *(u8 *)((char *)arg0 + 0x54) & 1;
    }
    if ((var_r0 !=0)) {
        *(s32 *)((char *)arg0 + 0x68) |= 0x80000000;
        *(u32 *)((char *)arg0 + 0x84) = 0;
        *(s32 *)((char *)arg0 + 0x7C) = 0x1000000;
    } else {
        *(u32 *)((char *)arg0 + 0x80) = (*(u32 *)((char *)arg0 + 0x80) & 0xF0FFFFFF) | 0x4000000;
        *(s32 *)((char *)arg0 + 0x7C) = 0x1000000;
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801752EC(void *arg0) {
    void *fn_800C42D8(s32);
    void *fn_80179DEC(void *, s16, s16, s32);
    void *fn_80179800(void *, s16, s16, s16, s16, s32);
    void *fn_80174998(void *, s16, s16, s32);
    void *fn_8013AC54(void *);
    void fn_8013AF08(void *, s16);
    void fn_801400F4(void *, void *);
    u8 fn_801EAA88(void);
    void **fn_80037BBC(void *, s32);
    void fn_801439F0(void *, void *, void *);
    u8 fn_80105BC0(void *, u8);
    u32 *fn_8001CB64(u32);
    u8 fn_8014D8DC(void *);
    void fn_80143570(void *);
    void *fn_80143A84(void *);
    s32 fn_801758C4(u32, u32);
    u8 fn_80175924(s32 **, s32);
    extern u32 lbl_802EF4C8[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_80330708[];
    extern u32 lbl_803200AC[];

    struct Obj {
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
        virtual void v11(void *) = 0;
    };
    struct ObjB {
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
    };

    u32 count;
    void *slot;
    void **entry;
    void *dst1;
    void *unit1;
    long i;
    void *dst2;
    void *unit2;
    void *p;
    void *q;
    void *tmp;
    void *inner;
    void *self;
    s16 next;
    s16 idx;
    void *dst3;
    s32 add;
    u32 *walk;
    u32 *bits;
    u32 player;

    self = arg0;
    inner = *(void **)((u8 *)self + 0x40);
    idx = *(s16 *)((u8 *)inner + 0x4E);
    *(s16 *)((u8 *)inner + 0x50) = idx;
    { void *cb = (void *)fn_801758C4; u32 owner = lbl_802EF4C8[0];
    *(void **)((u8 *)inner + 0x7C) = cb;
    *(u32 *)((u8 *)inner + 0x80) = owner; }
    count = *(u32 *)((u8 *)inner + 0x70);
    idx = *(s16 *)((u8 *)inner + 0x4E);
    if ((u32)idx < count - 1) {
        next = (s16)(idx + 1);
        if ((u32)next < count) {
            fn_8013AF08(inner, next);
        }
    } else {
        next = (s16)(idx - 1);
        if (next >= 0) {
            fn_8013AF08(inner, next);
        }
    }

    p = fn_800C42D8(0x7C);
    if (p != NULL) {
        p = fn_80179DEC(p, 0x260, 0x84, 0x1F4);
    }
    *(void **)((u8 *)self + 0x50) = p;
    q = *(void **)((u8 *)self + 0x50);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0x24) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 8) = 0x104;
    ((Obj *)*(void **)((u8 *)self + 0x50))->v11(fn_8013AC54(inner));
    *(u8 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0x48) = 0;
    fn_801400F4(self, *(void **)((u8 *)self + 0x50));

    p = fn_800C42D8(0x12C);
    if (p != NULL) {
        p = fn_80179800(p, 0x260, 0x84, 0x108, 0x110, 0x1F4);
    }
    *(void **)((u8 *)self + 0x54) = p;
    q = *(void **)((u8 *)self + 0x54);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x54) + 8) = 0x105;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x54) + 0x24) = 8;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x54) + 0x8A) = 2;

    if (fn_801EAA88() == 0) {
        dst1 = *(void **)((u8 *)self + 0x54);
        unit1 = *(void **)lbl_802CA264;
        goto loop1_cond;
    loop1_body:
        for (i = 0; i < 4; i++) {
            entry = fn_80037BBC(unit1, i);
            if (*(u32 *)entry == 0) {
                break;
            }
            player = lbl_802EF4C8[0];
            if (unit1 == NULL) {
                add = 1;
            } else if (unit1 == (void *)player) {
                add = 0;
            } else if (fn_80105BC0((u8 *)*(void **)((u8 *)unit1 + 0x18C) + 0x1C, 8) != 0) {
                bits = fn_8001CB64((u32)entry);
                add = 0;
                if ((*(u64 *)bits & 0x200ULL) == 0) {
                    add = 1;
                }
            } else {
                add = 1;
            }
            if ((u8)add != 0) {
                fn_801439F0(dst1, entry, unit1);
            }
        }
        i = 0;
        walk = (u32 *)unit1;
        while (i < 4) {
            slot = (u8 *)walk + 0x1EC;
            if (*(u32 *)((u8 *)walk + 0x1EC) == 0) {
                break;
            }
            player = lbl_802EF4C8[0];
            if (unit1 == NULL) {
                add = 1;
            } else if (unit1 == (void *)player) {
                add = 0;
            } else if (fn_80105BC0((u8 *)*(void **)((u8 *)unit1 + 0x18C) + 0x1C, 8) != 0) {
                bits = fn_8001CB64((u32)slot);
                add = 0;
                if ((*(u64 *)bits & 0x200ULL) == 0) {
                    add = 1;
                }
            } else {
                add = 1;
            }
            if ((u8)add != 0) {
                fn_801439F0(dst1, slot, unit1);
            }
            i += 1;
            walk += 2;
        }
        unit1 = *(void **)((u8 *)unit1 + 0x184);
    loop1_cond:
        if (unit1 != NULL) {
            goto loop1_body;
        }
    }

    dst2 = *(void **)((u8 *)self + 0x54);
    unit2 = *(void **)(lbl_802CA264 + 0x3C);
    goto loop2_cond;
loop2_body:
    for (i = 0; i < 4; i++) {
        entry = fn_80037BBC(unit2, i);
        if (*(u32 *)entry == 0) {
            break;
        }
        player = lbl_802EF4C8[0];
        if (unit2 == NULL) {
            add = 1;
        } else if (unit2 == (void *)player) {
            add = 0;
        } else if (fn_80105BC0((u8 *)*(void **)((u8 *)unit2 + 0x18C) + 0x1C, 8) != 0) {
            bits = fn_8001CB64((u32)entry);
            add = 0;
            if ((*(u64 *)bits & 0x200ULL) == 0) {
                add = 1;
            }
        } else {
            add = 1;
        }
        if ((u8)add != 0) {
            fn_801439F0(dst2, entry, unit2);
        }
    }
    i = 0;
    walk = (u32 *)unit2;
    while (i < 4) {
        slot = (u8 *)walk + 0x1EC;
        if (*(u32 *)((u8 *)walk + 0x1EC) == 0) {
            break;
        }
        player = lbl_802EF4C8[0];
        if (unit2 == NULL) {
            add = 1;
        } else if (unit2 == (void *)player) {
            add = 0;
        } else if (fn_80105BC0((u8 *)*(void **)((u8 *)unit2 + 0x18C) + 0x1C, 8) != 0) {
            bits = fn_8001CB64((u32)slot);
            add = 0;
            if ((*(u64 *)bits & 0x200ULL) == 0) {
                add = 1;
            }
        } else {
            add = 1;
        }
        if ((u8)add != 0) {
            fn_801439F0(dst2, slot, unit2);
        }
        i += 1;
        walk += 2;
    }
    unit2 = *(void **)((u8 *)unit2 + 0x184);
loop2_cond:
    if (unit2 != NULL) {
        goto loop2_body;
    }

    if (fn_8014D8DC(lbl_80330708) != 0) {
        dst3 = *(void **)((u8 *)self + 0x54);
        walk = lbl_803200AC;
        i = 0;
        while (i < 0xC8) {
            if (*(u32 *)walk != 0) {
                fn_801439F0(dst3, walk, NULL);
            }
            i += 1;
            walk += 2;
        }
    }

    fn_80143570(*(void **)((u8 *)self + 0x54));
    q = *(void **)((u8 *)self + 0x54);
    *(s32 *)((u8 *)q + 0x11C) = 2;
    {
        void *cb = (void *)fn_80175924;
        u32 ef0 = lbl_802EF4C8[0];
        *(void **)((u8 *)*(void **)((u8 *)self + 0x54) + 0x120) = cb;
        *(u32 *)((u8 *)*(void **)((u8 *)self + 0x54) + 0x124) = ef0;
    }
    ((ObjB *)*(void **)((u8 *)self + 0x54))->v11();

    p = fn_800C42D8(0x48);
    if (p != NULL) {
        p = fn_80174998(p, 0x260, 0x4C, 0x1F4);
    }
    *(void **)((u8 *)self + 0x58) = p;
    q = *(void **)((u8 *)self + 0x58);
    if (q != NULL) {
        *(s32 *)((u8 *)q + 4) = *(s32 *)((u8 *)q + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 8) = 0x108;
    *(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 0x24) = 8;
    tmp = fn_80143A84(*(void **)((u8 *)self + 0x54));
    q = *(void **)((u8 *)self + 0x58);
    *(void **)((u8 *)q + 0x40) = tmp;
    if (tmp != NULL) {
        *(s32 *)((u8 *)q + 0x44) = *(s32 *)((u8 *)tmp + 4);
    } else {
        *(s32 *)((u8 *)q + 0x44) = 0;
    }
}
#pragma cplusplus reset

s32 fn_801758C4(u32 arg0, u32 arg1) {
    u8 fn_80093088(u32);

    if (arg0 == arg1) {
        return 0;
    }
    if (fn_80093088(arg0) != 0 && fn_80093088(arg1) != 0) {
        return 0;
    }
    return 1;
}

u8 fn_80175924(s32 **arg0, s32 arg1) {
    s32 *temp_r5;

    temp_r5 = *arg0;
    return fn_80093DA8(arg1, *temp_r5, temp_r5);
}

void *fn_80175C34(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80294BD0[];
    extern void *lbl_80291FF8[];
    extern void *lbl_802920E0[];

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 4) = lbl_80294BD0;
        if (arg0 != NULL) {
            *(void **)((u8 *)arg0 + 4) = lbl_80291FF8;
            if (arg0 != NULL) {
                *(void **)((u8 *)arg0 + 4) = lbl_802920E0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80175CA0(void) {
    extern u8 lbl_8036816C;
    extern u32 lbl_80368170;
    extern u8 lbl_80368174;
    extern u32 lbl_80368178;
    extern u8 lbl_8036817C;
    extern u32 lbl_80368180;
    extern u8 lbl_80368184;
    extern u32 lbl_80368188;
    extern u8 lbl_80368190;
    extern u32 lbl_80368194;
    extern u8 lbl_80368198;
    extern u32 lbl_8036819C;
    extern f32 lbl_8036AB70;
    
    extern void* lbl_8028459C;
    extern void* lbl_80292090;
    extern void* lbl_80295110;
    extern void* lbl_80294FD0;
    extern void* lbl_802845E8;
    extern void* lbl_802945C0;
    extern void* lbl_802920E0;
    extern void* lbl_80291FF8;
    extern void* lbl_80294BD0;
    extern void* lbl_80294F30;
    extern void* lbl_80294F80;
    extern void* lbl_80295020;
    extern void* lbl_80295070;
    extern void* lbl_802950C0;
    
    void *fn_800C42D8(u32 arg);
    void *temp_r3;

    if ((s8) lbl_8036816C == 0) {
        lbl_8036816C = 1;
        lbl_80368170 = (u32)&lbl_802950C0;
    }
    if ((s8) lbl_80368174 == 0) {
        lbl_80368174 = 1;
        lbl_80368178 = (u32)&lbl_80295070;
    }
    if ((s8) lbl_8036817C == 0) {
        lbl_8036817C = 1;
        lbl_80368180 = (u32)&lbl_80295020;
    }
    if ((s8) lbl_80368184 == 0) {
        u32 addr1, addr2, addr3, addr4;
        addr1 = (u32)&lbl_8028459C;
        addr2 = (u32)&lbl_80292090;
        addr3 = (u32)&lbl_80295110;
        addr4 = (u32)&lbl_80294FD0;
        lbl_80368188 = addr1;
        lbl_80368188 = addr2;
        lbl_80368188 = addr3;
        lbl_80368188 = addr4;
        lbl_80368184 = 1;
    }
    if ((s8) lbl_80368190 == 0) {
        lbl_80368190 = 1;
        lbl_80368194 = (u32)&lbl_80294F80;
    }
    if ((s8) lbl_80368198 == 0) {
        lbl_80368198 = 1;
        lbl_8036819C = (u32)&lbl_80294F30;
    }
    
    temp_r3 = fn_800C42D8(0x24);
    if (temp_r3 != NULL) {
        *(void**)((char*)temp_r3 + 4) = &lbl_802845E8;
        *(void***)((char*)temp_r3 + 0) = &lbl_802945C0;
        *(void**)((char*)temp_r3 + 4) = &lbl_802920E0;
        *(s16*)((char*)temp_r3 + 8) = 0;
        *(s16*)((char*)temp_r3 + 0xA) = 0;
        *(s16*)((char*)temp_r3 + 0xC) = 0x80;
        *(s16*)((char*)temp_r3 + 0xE) = 0;
        *(s16*)((char*)temp_r3 + 0x10) = 2;
        *(s16*)((char*)temp_r3 + 0x12) = 0xC;
        *(s16*)((char*)temp_r3 + 0x14) = 0x10;
        *(s16*)((char*)temp_r3 + 0x16) = 0;
        *(f32*)((char*)temp_r3 + 0x18) = lbl_8036AB70;
        *(s16*)((char*)temp_r3 + 0x1C) = 0x20;
        *(s16*)((char*)temp_r3 + 0x1E) = 4;
        *(void**)((char*)temp_r3 + 4) = &lbl_80291FF8;
        *(s16*)((char*)temp_r3 + 0x20) = 2;
        *(void**)((char*)temp_r3 + 4) = &lbl_80294BD0;
    }
}

#pragma cplusplus on
extern "C" void fn_80175E3C(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8002833C(void *, u32);
    void fn_80138808(void *, u32);
    u32 fn_8013AC54(void *);
    void fn_8013FDA0(void *);
    void fn_80140210(void *, void *, s32);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_801475FC(void *, s32);
    void fn_801694AC(u32, void *);
    void fn_801695BC(u32, void *, s32);
    extern u16 lbl_80278080[];
    extern u32 lbl_802EF4C8[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;

    struct VObj {
        virtual void v0();
        virtual void v1();
        virtual void v3();
        virtual void v2();
        virtual void v4();
        virtual void v5();
        virtual void v6();
        virtual void v7();
        virtual void v8();
        virtual void v9();
        virtual void v10();
        virtual void v11(u32);
    };

    s16 sp8[2];
    s32 btn;
    register u8 gate;
    register int flags;
    s16 tmp;
    unsigned int var_r30;
    void *obj4c;
    void *obj44;

    var_r30 = fn_8013AC54(*(void **)((u8 *)arg0 + 0x40));
    fn_8013FDA0(arg0);
    if (var_r30 != fn_8013AC54(*(void **)((u8 *)arg0 + 0x40))) {
        var_r30 = fn_8013AC54(*(void **)((u8 *)arg0 + 0x40));
        obj4c = *(void **)((u8 *)arg0 + 0x4C);
        ((VObj *)obj4c)->v11(var_r30);
        fn_80138808(*(void **)((u8 *)arg0 + 0x44), var_r30);
    }
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        register btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && (var_r30)) {
            fn_8002833C(lbl_802EF4C8, var_r30);
            obj4c = *(void **)((u8 *)arg0 + 0x4C);
            *(u8 *)((u8 *)obj4c + (int)0x78) = 1;
            *(u8 *)((u8 *)*(void **)((u8 *)arg0 + (u32)0x4C) + 0x4A) = 0;
            obj44 = *(void **)((u8 *)arg0 + 0x44);
            tmp = *(s16 *)((u8 *)obj44 + 0xC);
            sp8[0] = 0x260;
            sp8[1] = tmp;
            fn_80140258(arg0, obj44, sp8, 1);
            fn_80140210(arg0, *(void **)((u8 *)arg0 + 0x48), 0);
            fn_8000C070(arg0, 6);
            fn_801475FC((u8 *)lbl_80278080 + 0x1DD, 0x64);
        } else if ((btn & 0x800) && (var_r30)) {
            fn_801695BC(var_r30, arg0, 0x1000000);
            *(u8 *)((u8 *)arg0 + 0x65) = 5;
            fn_8000C070(arg0, 0x31);
        } else if ((btn & 0x400) && (var_r30)) {
            fn_801694AC(var_r30, arg0);
            *(u8 *)((u8 *)arg0 + 0x65) = 5;
            fn_8000C070(arg0, 0x32);
        } else if (btn & 0x200) {
            fn_8000C070(arg0, 0x35);
            fn_801475FC((u8 *)lbl_80278080 + 0x1ED, 0x64);
        }
    }
}

#pragma cplusplus on
extern "C" void fn_801761F8(void *arg0) {
#pragma opt_common_subs off
 void *fn_800C42D8(s32);
 void *fn_80179F8C(void *,s16,s16,s16,s16,s32);
 void *fn_80179DEC(void *,s16,s16,s32);
 u8 fn_801EAA88(void);
 void fn_8013B064(void *,void *);
 void fn_801400F4(void *,void *);
 void *fn_8013AC54(void *);
 void fn_80138808(void *,void *);
 void fn_8013FF00(void *,void *);
 u8 *fn_8018D900(s32);
 extern u8 lbl_802CA264[],lbl_8028FDB0[],lbl_80292230[],lbl_80292178[],lbl_80291A3C[];
 extern u16 lbl_80278080[];
 extern f32 lbl_8036AB6C;
 struct Obj {
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
virtual void v11(void *) = 0;
virtual void v12(s32) = 0;
 };
 void *entry;
 void *p;
 void *hold;
 void *q;
 u8 col[4];
 u8 *color;
 u8 first;
 f32 zero;
 p=fn_800C42D8(0xD8);
 if(p)p=fn_80179F8C(p,0x38,0x10,0x1F0,0x7C,0x226);
 M2C_FIELD(arg0,void * *,0x40)=p;
 q=M2C_FIELD(arg0,void * *,0x40);
 if(q)M2C_FIELD(q,s32 *,4)++;
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x40),s16 *,0x24)=8;
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x40),s16 *,8)=0x100;
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x40),s16 *,0x5A)=0x1C;
 ((Obj *)M2C_FIELD(arg0,void * *,0x40))->v12(3);
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x40),s16 *,0x58)=3;
 if(!fn_801EAA88()) {
 hold=M2C_FIELD(arg0,void * *,0x40);
 entry=M2C_FIELD(lbl_802CA264,void * *,0);
 while(entry){fn_8013B064(hold,entry);entry=M2C_FIELD(entry,void * *,0x184);}
 }
 {void *entry2;void *hold2;
hold2=M2C_FIELD(arg0,void * *,0x40);
 entry2=M2C_FIELD(lbl_802CA264,void * *,0x3C);
 while(entry2){fn_8013B064(hold2,entry2);entry2=M2C_FIELD(entry2,void * *,0x184);}
 }
fn_801400F4(arg0,M2C_FIELD(arg0,void * *,0x40));
 p=fn_800C42D8(0x7C);
 if(p)p=fn_80179DEC(p,0x20,0x84,0x1F4);
 M2C_FIELD(arg0,void * *,0x4C)=p;
 q=M2C_FIELD(arg0,void * *,0x4C);
 if(q)M2C_FIELD(q,s32 *,4)++;
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x4C),s16 *,0x24)=8;
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x4C),s16 *,8)=0x103;
 ((Obj *)M2C_FIELD(arg0,void * *,0x4C))->v11(fn_8013AC54(M2C_FIELD(arg0,void * *,0x40)));
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x4C),u8 *,0x48)=0;
 fn_801400F4(arg0,M2C_FIELD(arg0,void * *,0x4C));
 p=fn_800C42D8(0x50);
 if(p) {
 init_761F8_base(p,0x130,0x94,0x118,0x40,0x1FE);
 M2C_FIELD(p,void * *,0)=lbl_80292178;M2C_FIELD(p,u8 *,60)=0xFF;
M2C_FIELD(p,u8 *,61)=0xFF;
M2C_FIELD(p,u8 *,62)=0xFF;
M2C_FIELD(p,u8 *,63)=0xFF;M2C_FIELD(p,s32 *,0x40)=0;M2C_FIELD(p,s16 *,0x44)=0;M2C_FIELD(p,s16 *,0x46)=0;((Obj *)p)->v8();
 }
 M2C_FIELD(arg0,void * *,0x48)=p;
 q=M2C_FIELD(arg0,void * *,0x48);
 if(q)M2C_FIELD(q,s32 *,4)++;
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x48),s16 *,0x24)=8;
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x48),s16 *,8)=0x102;
 q=M2C_FIELD(arg0,void * *,0x48);
 M2C_FIELD(q,u32 *,0x34)|=0x10;
 color=fn_8018D900(2);
 first=color[0]; col[0]=first;col[1]=color[1];col[2]=color[2];col[3]=color[3];
 q=M2C_FIELD(arg0,void * *,0x48);
 if((u8 *)q+0x3C!=col){M2C_FIELD(q,u8 *,0x3C)=first;M2C_FIELD(q,u8 *,0x3D)=col[1];M2C_FIELD(q,u8 *,0x3E)=col[2];M2C_FIELD(q,u8 *,0x3F)=col[3];}
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x48),void * *,0x40)=(u8 *)lbl_80278080+0x2BB;
 fn_801400F4(arg0,M2C_FIELD(arg0,void * *,0x48));
 p=fn_800C42D8(0x54);
 if(p) {
 init_761F8_base(p,0x138,0x12C,0x108,0x55,0x1F4);
 M2C_FIELD(p,void * *,0)=lbl_80291A3C;M2C_FIELD(p,s32 *,0x3C)=0;M2C_FIELD(p,s32 *,0x40)=0x1003C;M2C_FIELD(p,s32 *,0x4C)=0;M2C_FIELD(p,s32 *,0x50)=0;((Obj *)p)->v8();
 }
 M2C_FIELD(arg0,void * *,0x44)=p;
 q=M2C_FIELD(arg0,void * *,0x44);
 if(q)M2C_FIELD(q,s32 *,4)++;
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x44),s16 *,8)=0x101;
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x44),s16 *,0x24)=8;
 M2C_FIELD(M2C_FIELD(arg0,void * *,0x44),s32 *,0x4C)=1;
 q=M2C_FIELD(arg0,void * *,0x44);
 M2C_FIELD(q,u32 *,0x34)|=0x10;
 fn_80138808(M2C_FIELD(arg0,void * *,0x44),fn_8013AC54(M2C_FIELD(arg0,void * *,0x40)));
 fn_801400F4(arg0,M2C_FIELD(arg0,void * *,0x44));
 fn_8013FF00(arg0,M2C_FIELD(arg0,void * *,0x40));
}
#pragma cplusplus reset

#pragma cplusplus reset

#pragma opt_common_subs on
#pragma global_optimizer on
void fn_801766C0(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 *puVar1;
    s32 iVar2;
    s32 iVar3;
    
    puVar1 = lbl_802EF4C8;
    iVar2 = *puVar1;
    iVar3 = (iVar2 + 1) & 0xff;
    if (iVar3 < 0) {
        iVar3 += 0x100;
    }
    puVar1[0x4b] = param_3;
    puVar1[0x4c] = param_4;
}

void fn_80176888(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80294580[];
    void *temp_r3 = fn_8000CAA0(lbl_80294580, arg1);
    *(f32 *)((u8 *)temp_r3 + 0x30) = farg0;
    *(f32 *)((u8 *)temp_r3 + 0x34) = farg1;
    *(s32 *)((u8 *)temp_r3 + 0x54) = arg0;
}

void fn_801768E4(s32 arg0) {
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern u8 lbl_80330D68[];
    
    s32 temp_r5;
    u8 var_r3;

    var_r3 = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        temp_r5 = *(s32 *)((u8 *)lbl_80367240 + 4);
        if (temp_r5 & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ temp_r5) & 0x0F001F7F) {
            fn_801673D0(lbl_80330D68);
            fn_8000C188(arg0);
        }
    }
}

void fn_80176968(void *arg0) {
    extern u8 lbl_80330D68[];
    extern u32 lbl_80368DC4;
    void fn_8016758C(void *, void *, f32, f32, s32);
    u8 *p;
    u32 t;

    fn_8016758C(lbl_80330D68, arg0,
                *(f32 *)((u8 *)arg0 + 0x30), *(f32 *)((u8 *)arg0 + 0x34),
                *(s32 *)((u8 *)arg0 + 0x54));
    p = lbl_80330D68;
    t = *(u32 *)p;
    *(s16 *)(p + 0xD8) = 1;
    *(u32 *)p = t | lbl_80368DC4;
}

void *fn_801769C0(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    extern M2C_UNK lbl_80291FF8;
    extern M2C_UNK lbl_802920E0;
    extern M2C_UNK lbl_80294B38;
    extern M2C_UNK lbl_80294BD0;
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80294B38;
        if (temp_cr0_eq == 0) {
            M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80294BD0;
            if (temp_cr0_eq == 0) {
                M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80291FF8;
                if (temp_cr0_eq == 0) {
                    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_802920E0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma cplusplus on
extern "C" void fn_8015AD7C(s32, s32, s32, s16, s32, s32);
extern "C" void fn_80161AA8(s32, s32, s16, s32, s32, void *);
extern "C" s32 fn_80009B80(u8);
extern "C" void fn_80176A3C(void *arg0, s32 arg1) {
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
        virtual s16 v17() = 0;
        virtual s32 v18() = 0;
        virtual s16 v19() = 0;
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
        virtual void v30() = 0;
        virtual void v31() = 0;
        virtual void v32() = 0;
        virtual s16 v33(s32) = 0;
    };
    struct Color {
        u8 r, g, b, a;
    };
    s16 y;
    s16 h;
    struct Color col;

    ((Obj *)arg0)->v30();
    y = ((Obj *)arg0)->v19();
    if (y == 0) {
        y = ((Obj *)arg0)->v20() * ((Obj *)arg0)->v33(arg1) + ((Obj *)arg0)->v17() * 2;
    }
    fn_8015AD7C(0, 0, ((Obj *)arg0)->v18(), y, 0xE6, 0x10);
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
    y = y - ((Obj *)arg0)->v20() - 8;
    h = ((Obj *)arg0)->v18() - 0x10;
    col.r = 0xFF;
    col.g = 0xFF;
    col.b = 0xFF;
    col.a = 0x33;
    fn_80161AA8(8, y, h + 8, y, 0x10, &col);
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_80176BB4(s32 arg0, void *arg1) {
    void fn_80009B80(u8);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000B908(u8);
    void fn_8008AB7C(s32, s32, s16, s32, s32, s32, s32);
    void fn_8008BF68(s16, s16, s32);
    extern f32 lbl_8036AB80;
    extern f32 lbl_8036AB74;
    extern f32 lbl_8036AB84;
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
        virtual s32 v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
        virtual s32 v31() = 0;
        virtual void v32() = 0;
        virtual void v33() = 0;
        virtual void v34() = 0;
        virtual s32 v35() = 0;
    };
    s32 temp_r31;
    s32 temp_r30;
    s16 temp_r29;
    s16 var_r28;
    s32 var_r25;
    bool flag;
    void *tmp;
    u8 *p;

    ((Obj *)arg0)->v30();
    p = (u8 *)arg1;
    p += (s8)p[0x62];
    tmp = fn_8000B908(p[0x40]);
    temp_r29 = *(s16 *)((u8 *)tmp + 0x30);
    p = (u8 *)arg1;
    p += (s8)*((u8 *)arg1 + 0x62);
    tmp = fn_8000B908(p[0x40]);
    var_r28 = *(s16 *)((u8 *)tmp + 0x32);
    temp_r30 = ((Obj *)arg0)->v35();
    temp_r31 = ((Obj *)arg0)->v20();
    if ((s8)*((u8 *)arg1 + 0x62) == ((s8)*((u8 *)arg1 + 0x60) - 1)) {
        var_r28 = (s16)(var_r28 + 6);
    }
    if (*(s16 *)((u8 *)arg1 + 0x3A) < 0) {
        *(s16 *)((u8 *)arg1 + 0x38) = temp_r29;
        *(s16 *)((u8 *)arg1 + 0x3A) = var_r28;
    } else {
        s32 x;
        s32 t;
        s32 r;
        x = *(s16 *)((u8 *)arg1 + 0x38);
        t = temp_r29 + 1;
        r = (s16)var_r28;
        x = x + t;
        *(s16 *)((u8 *)arg1 + 0x38) = x / 2;
        t = r + 1;
        x = *(s16 *)((u8 *)arg1 + 0x3A);
        *(s16 *)((u8 *)arg1 + 0x3A) = (x + t) / 2;
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036AB80);
    flag = false;
    if (*((u8 *)arg1 + 0x2D) == 0 && *((u8 *)arg1 + 0x2E) == 0) {
        flag = true;
    }
    fn_80009B80(flag ? 0x80 : 0x40);
    fn_8000A248();
    {
        s32 flag2 = 0;
        if (*((u8 *)arg1 + 0x2D) == 0 && *((u8 *)arg1 + 0x2E) == 0) {
            flag2 = 1;
        }
        fn_8008BF68(*(s16 *)((u8 *)arg1 + 0x38), *(s16 *)((u8 *)arg1 + 0x3A), flag2);
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036AB74);
    fn_8000A248();
    var_r25 = 0;
    if (*((u8 *)arg1 + 0x2D) == 0 && *((u8 *)arg1 + 0x2E) == 0) {
        var_r25 = 1;
    }
    {
        Obj *self = (Obj *)arg0;
        s32 width = (s16)temp_r30;
        arg0 = width;
        fn_8008AB7C((width >> 1) + (temp_r29 - (s16)self->v31()), (s16)var_r28 + ((s16)temp_r31 >> 1), (s16)width, 0x17, 0x19, 0x4C, var_r25);
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036AB84);
    fn_8000A248();
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

extern "C" void fn_80176DDC(s32 arg0, void *arg1) {
    void fn_8013E300(void);
    void *fn_8000C0C0(void *);
    u8 temp_r0;

    fn_8013E300();
    temp_r0 = *(u8 *)((u8 *)fn_8000C0C0(lbl_80294604) + 0x64);
    if ((s8)temp_r0 < 0) {
        return;
    }
    *(s8 *)((u8 *)arg1 + 0x62) = (s8)temp_r0;
}

#pragma cplusplus reset

void fn_80176E24(s32 arg0, void *arg1) {
    extern u16 lbl_80294604[];
    void *fn_8000C0C0(u16 *, void *);
    void fn_8013E2C8(s32, void *);
    void *res;

    res = fn_8000C0C0(lbl_80294604, arg1);
    *(u8 *)((u8 *)res + 0x64) = *(u8 *)((u8 *)arg1 + 0x62);
    fn_8013E2C8(arg0, arg1);
}

void fn_80176E78(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x431);
}

void *fn_80176EA4(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x43a;
}

void fn_80177028(void **arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80007124(s32);
    M2C_UNK fn_80007220(M2C_UNK, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    s32 fn_800102BC(M2C_UNK, f32);
    s16 fn_80010B78(s32, M2C_UNK, f32);
    s32 *fn_8018D900(M2C_UNK);
    extern f32 lbl_8036AB6C;
    extern f32 lbl_8036AB8C;
    s32 spC;
    s32 sp8;
    f32 temp_f31;
    s16 temp_r28;
    s16 temp_r29;
    s16 temp_r29_2;
    s32 temp_r31;
    s32 temp_r5;
    void **temp_r3_2;
    void *temp_r3;
    void *temp_r3_3;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x4C)();
    temp_r3 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r29 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s16 (**)(void *), 0x58)(temp_r3);
    temp_r3_2 = M2C_FIELD(arg2, void ***, 0x34);
    temp_r28 = (s16) ((s32) (temp_r29 - fn_800102BC(-1, lbl_8036AB6C)) >> 1);
    temp_r3_3 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r31 = M2C_FIELD(*temp_r3_2, s32 (**)(void **, void *), 0x18)(temp_r3_2, arg2);
    temp_r29_2 = M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), s16 (**)(void *), 0x94)(temp_r3_3);
    temp_r5 = M2C_FIELD(arg2, s16 *, 0x32) + 6;
    temp_f31 = (f32) (M2C_FIELD(arg2, s16 *, 0x30) + ((s32) (temp_r29_2 - fn_80010B78(temp_r31, -1, lbl_8036AB6C)) >> 1));
    fn_80007898(6, temp_r5);
    fn_80007858(temp_f31, (f32) temp_r5 + (f32) temp_r28);
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        spC = *fn_8018D900(0);
        fn_80007668(&spC);
    } else {
        sp8 = *fn_8018D900(6);
        fn_80007668(&sp8);
        fn_80007220(1, lbl_8036AB8C);
    }
    fn_80007124(temp_r31);
    fn_80007884();
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}

void fn_801771FC(void) {
    void fn_8013E300(void);
    void *fn_8000C0C0(u16 *);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(u32, u8 *);

    extern u16 lbl_80294604[];
    extern u16 lbl_80278080[];

    fn_8013E300();
    {
        u32 r = fn_8013FF94(fn_8000C0C0(lbl_80294604), -0x1000, 0);
        if (r != 0) {
            fn_801658DC(r, (u8 *)lbl_80278080 + 0x457);
        }
    }
}

void fn_8017724C(void) {
    void fn_8013E2C8(void);
    void *fn_8000C0C0(u16 *);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(u32, u8 *);

    extern u16 lbl_80294604[];
    extern u16 lbl_80278080[];

    fn_8013E2C8();
    {
        u32 r = fn_8013FF94(fn_8000C0C0(lbl_80294604), -0x1000, 0);
        if (r != 0) {
            fn_801658DC(r, (u8 *)lbl_80278080 + 0x1FD);
        }
    }
}

void fn_8017729C(void) {
    fn_8000E0E4(&lbl_80278080[0x235]);
}

extern u16 lbl_80278080[257];
void *fn_801772C8(void) {
    return &lbl_80278080[0x23A];
}

u8 fn_801772D8(void) {
    extern u8 lbl_80330708[];
    s32 result = 0;

    if (lbl_80330708[0x51] != 0) {
        result = 2;
    }
    return (u8)result;
}

void fn_80177404(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x491);
}

void *fn_80177430(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x49b;
}

s32 fn_80177440(s32 arg0, s32 arg1) {
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, s32);
    void fn_8000C5B8(s32);
    extern u16 lbl_80294604[];
    extern u32 lbl_802EF4C8[];
    void *temp;

    temp = fn_8000C0C0(lbl_80294604);
    *(s32 *)((u8 *)temp + 0x60) = arg1;
    *((u8 *)lbl_802EF4C8 + 8) = 0x8A;
    fn_8000C070(temp, 0x2F);
    fn_8000C5B8(*(s32 *)((u8 *)temp + 0x5C));
    return 4;
}

void fn_801774A8(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x4a5);
}

void *fn_801774D4(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x4af;
}

s32 fn_801774E4(s32 arg0, s32 arg1) {
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, s32);
    void fn_8000C5B8(s32);
    extern u16 lbl_80294604[];
    extern u32 lbl_802EF4C8[];
    void *temp;

    temp = fn_8000C0C0(lbl_80294604);
    *(s32 *)((u8 *)temp + 0x60) = arg1;
    *((u8 *)lbl_802EF4C8 + 8) = 0x89;
    fn_8000C070(temp, 0x2E);
    fn_8000C5B8(*(s32 *)((u8 *)temp + 0x5C));
    return 4;
}

void fn_8017754C(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x4b9);
}

void *fn_80177578(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x4c3;
}

s32 fn_80177588(s32 arg0, s32 arg1) {
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, s32);
    void fn_8000C5B8(s32);
    extern u16 lbl_80294604[];
    extern u32 lbl_802EF4C8[];
    void *temp;

    temp = fn_8000C0C0(lbl_80294604);
    *(s32 *)((u8 *)temp + 0x60) = arg1;
    *((u8 *)lbl_802EF4C8 + 8) = 0x88;
    fn_8000C070(temp, 0x2D);
    fn_8000C5B8(*(s32 *)((u8 *)temp + 0x5C));
    return 4;
}

void fn_801775F0(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x4cd);
}

void *fn_8017761C(void) {
    return (u8 *)lbl_80278080 + 0x4d7;
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80177854(void *arg0, void *arg1, void *arg2) {
    void fn_80007124(s32);
    void fn_80007220(s32, f32);
    void fn_80007668(s32 *);
    void fn_80007858(f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B80(u8);
    void fn_8000A248(void);
    void fn_8000A258(void);
    s32 fn_800102BC(s32, f32);
    s16 fn_80010B78(s32, s32, f32);
    void fn_8005AC24(void *, s32, s32, s32);
    s32 *fn_8018D900(s32);
    extern u8 lbl_802F0308[];
    extern f32 lbl_8036AB6C;
    extern f32 lbl_8036AB8C;

    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual s32 v4(void *) = 0;
        virtual s32 v5() = 0;
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
    };
    struct ObjB {
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
        virtual void v30() = 0;
        virtual void v31() = 0;
        virtual void v32() = 0;
        virtual void v33() = 0;
        virtual void v34() = 0;
        virtual s16 v35() = 0;
    };

    s32 sp8;
    s32 t26;
    s16 t30;
    s16 t29;
    s32 t28;
    s16 t26b;
    f32 f31;
    f32 f30;
    s16 mask;
    s32 diff;

    ((Obj *)arg0)->v17();

    {
        s32 v = ((Obj *)*(void **)((u8 *)arg2 + 0x34))->v5();
        void *p3c = *(void **)((u8 *)arg1 + 0x3c);
        mask = v != 0 ? 0x18 : 0;
        t26 = ((ObjB *)p3c)->v20();
    }

    t30 = (s16)((t26 - fn_800102BC(-1, lbl_8036AB6C)) >> 1);

    t29 = (s16)((((ObjB *)*(void **)((u8 *)arg1 + 0x3c))->v20() - 0x18) >> 1);

    t28 = ((Obj *)*(void **)((u8 *)arg2 + 0x34))->v4(arg2);

    t26b = ((ObjB *)*(void **)((u8 *)arg1 + 0x3c))->v35();

    diff = t26b - fn_80010B78(t28, -1, lbl_8036AB6C);
    f31 = (f32)(*(s16 *)((u8 *)arg2 + 0x30) + (diff >> 1));
    f30 = (f32)*(s16 *)((u8 *)arg2 + 0x32);

    fn_80007898(6);
    fn_80007858(f31 + (f32)mask, f30 + (f32)t30);

    if (*(u8 *)((u8 *)arg2 + 0x39) == 2) {
        sp8 = *fn_8018D900(0);
        fn_80007668(&sp8);
    } else {
        fn_80007220(1, lbl_8036AB8C);
    }

    fn_80007124(t28);
    fn_80007884();

    if (((Obj *)*(void **)((u8 *)arg2 + 0x34))->v5() != 0) {
        fn_8005AC24(lbl_802F0308, (s32)f31, (s32)(f30 + (f32)t29), ((Obj *)*(void **)((u8 *)arg2 + 0x34))->v5());
    }

    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma cplusplus reset
void fn_80177AD4(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x4ed);
}

void *fn_80177B00(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x4f6;
}

u8 fn_80177B10(void) {
    return 0;
}

void fn_80177C78(void) {
    extern u16 lbl_80278080[];
    void fn_8000E0E4(u8 *);

    fn_8000E0E4((u8 *)lbl_80278080 + 0x50A);
}

void *fn_80177CA4(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x516;
}

u8 fn_80177CB4(void) {
    u32 fn_80037C20(s32);
    u32 fn_80037D54(s32);
    u8 fn_80105BC0(s32, s32);
    u32 var_r31;
    s32 temp_r30;
    s32 var_r3;
    u32 temp;

    temp_r30 = *(s32 *)lbl_802EF4C8;
    if (fn_80105BC0(temp_r30 + 0x1BC, 8) != 0) {
        temp = fn_80037C20(temp_r30);
        var_r31 = (u32)(-(s32)temp | temp) >> 31;
    } else {
        var_r31 = 0;
        if (fn_80037D54(temp_r30) != 0 || fn_80037C20(temp_r30) != 0) {
            var_r31 = 1;
        }
    }
    var_r3 = 2;
    if ((u8)var_r31 != 0) {
        var_r3 = 0;
    }
    return var_r3;
}

void fn_80177E48(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x52d);
}

void *fn_80177E74(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x538;
}

void fn_8017807C(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x54d);
}

void *fn_801780A8(void) {
    return (char *)&lbl_80278080 + 0x55B;
}

s32 fn_801781DC(void *arg0, void *arg1, void *arg2) {
    void fn_8000C070(void *, u8);
    void *fn_8000C0C0(void *);
    void fn_8000C5B8(void *);
    void *fn_8000CAA0(void *, void *);
    extern u8 lbl_80294580[];
    void *proc;
    f32 x;
    f32 y;

    if (M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        x = M2C_FIELD(arg1, s16 *, 0x30) + M2C_FIELD(arg2, s16 *, 0x30);
        y = M2C_FIELD(arg1, s16 *, 0x32) + M2C_FIELD(arg2, s16 *, 0x32);
        switch (M2C_FIELD(arg0, s8 *, 4)) {
        case 0:
            proc = fn_8000CAA0(lbl_80294580, arg1);
            M2C_FIELD(proc, f32 *, 0x30) = x;
            M2C_FIELD(proc, f32 *, 0x34) = y;
            M2C_FIELD(proc, void **, 0x54) = (u8 *)lbl_80278080 + 0x569;
            break;
        case 1:
            proc = fn_8000CAA0(lbl_80294580, arg1);
            M2C_FIELD(proc, f32 *, 0x30) = x;
            M2C_FIELD(proc, f32 *, 0x34) = y;
            M2C_FIELD(proc, void **, 0x54) = (u8 *)lbl_80278080 + 0x57B;
            break;
        case 2:
            proc = fn_8000CAA0(lbl_80294580, arg1);
            M2C_FIELD(proc, f32 *, 0x30) = x;
            M2C_FIELD(proc, f32 *, 0x34) = y;
            M2C_FIELD(proc, void **, 0x54) = (u8 *)lbl_80278080 + 0x224;
            break;
        }
        return 0;
    }
    proc = fn_8000C0C0(lbl_80294604);
    ((u8 *)lbl_802EF4C8)[8] = 0x83;
    fn_8000C070(proc, 0x28);
    fn_8000C5B8(M2C_FIELD(proc, void **, 0x5C));
    return 4;
}

void fn_80178350(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x58d);
}

void *fn_8017837C(void) {
    return (char *)&lbl_80278080 + 0x596;
}

#pragma opt_strength_reduction off
s32 fn_8017838C(void) {
    u8 fn_8014D8DC(void *);
    extern u8 lbl_80330708[];
    u8 temp_r4;

    temp_r4 = fn_8014D8DC(lbl_80330708);
    return temp_r4 ? 0 : 2;
}
#pragma opt_strength_reduction reset
void fn_8017849C(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x59e);
}

void *fn_801784C8(void) {
    return (char *)&lbl_80278080 + 0x5A7;
}

#pragma scheduling off
s32 fn_801784D8(void) {
    u8 fn_801EAA88(void);
    s32 fn_80015680(void *);
    u8 fn_8014D8DC(void *);
    extern u8 lbl_802CA264[];
    extern u8 lbl_80330708[];
    s32 r31;

    r31 = 0;
    if (fn_801EAA88() == 0) {
        r31 = fn_80015680(lbl_802CA264);
        #pragma scheduling off
        r31 += fn_80015680(lbl_802CA264 + 0x3C);
        #pragma scheduling reset
    }
    if (r31 <= 1) {
        if (fn_8014D8DC(lbl_80330708) == 0) {
            return 2;
        }
    }
    return 0;
}
#pragma scheduling reset
void fn_80178628(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x5C0 / sizeof(u16)]);
}

void *fn_80178654(void) {
    return (char *)&lbl_80278080 + 0x5CB;
}

s32 fn_80178664(void) {
    return 0;
}

#pragma cplusplus on
extern "C" void fn_8017873C(void *arg0) {
    void fn_80152414(s32, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80152414(0, 0, 0x10);
}

#pragma cplusplus on
extern "C" void fn_80178778(void *arg0, s32 arg1) {
    struct Obj {
        virtual void m08() = 0;
        virtual void m0C() = 0;
        virtual void m10() = 0;
        virtual void m14(s32) = 0;
        virtual void m18() = 0;
        virtual void m1C() = 0;
        virtual void m20() = 0;
        virtual void m24() = 0;
        virtual void m28() = 0;
    };
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A174(s32, u16);
    void fn_8000A248(void);
    void *fn_8000E0E4(void *);
    void *fn_800A8A88(s32);
    s32 fn_80010B78(void *, s32, s16, f32);
    s32 fn_800102BC(s32, f32);
    void fn_8001019C(s16, s16, s32, ...);
    extern u16 lbl_80278080[];
    extern f32 lbl_8036AB80;
    extern f32 lbl_8036AB6C;
    void *str;
    void *p;
    s16 w;
    s16 x;
    s16 y;

    ((Obj *)arg0)->m28();
    ((Obj *)arg0)->m14(arg1);
    fn_8000A258();
    fn_80009C0C(lbl_8036AB80);
    fn_8000A174(0, (u16)(*(s32 *)((u8 *)arg0 + 0x34) | 3));
    fn_8000A248();
    if (*(u32 *)((u8 *)arg0 + 0x40) == 0) {
        str = (u8 *)lbl_80278080 + 0x5F9;
    } else {
        p = *(void **)((u8 *)arg0 + 0x44);
        str = (p != NULL) ? fn_800A8A88(*(s32 *)((u8 *)p + 0x188)) : fn_8000E0E4((u8 *)lbl_80278080 + 0x58D);
    }
    w = *(s16 *)((u8 *)arg0 + 0x16) - *(s16 *)((u8 *)arg0 + 0x12);
    x = (s16)((w - fn_80010B78(str, -1, *(s16 *)((u8 *)arg0 + 0x12), lbl_8036AB6C)) >> 1);
    y = (s16)((0x16 - fn_800102BC(-1, lbl_8036AB6C)) >> 1);
    fn_8001019C(x, y, 1, str);
}
#pragma cplusplus reset

#pragma cplusplus reset

s32 fn_801788A0(struct unit* arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    
    if (arg0 == NULL) {
        return 0;
    }
    
    temp_r3 = M2C_FIELD(arg0, u32*, 0x34);
    temp_r5 = temp_r3 - 1;
    if (temp_r5 & 0xFFFF) {
        temp_r6 = lbl_802EF4C8[(temp_r3 & 0xFFFF)];
    } else {
        temp_r6 = temp_r5;
    }
    
    temp_r7 = M2C_FIELD(arg0, s32*, 0x10);
    if (temp_r7 < 0) {
        temp_r7 = arg2;
    }
    
    temp_r8 = M2C_FIELD(arg0, s32*, 0x14);
    if (temp_r8 < 0) {
        temp_r8 = arg1;
    }
    
    if (arg2 >= temp_r7 && arg2 <= temp_r8) {
        temp_r4 = lbl_80278080[(arg2 - temp_r7)];
        if (temp_r4 >= temp_r6) {
            return 1;
        }
    }
    
    return 0;
}

#pragma cplusplus on
extern "C" void fn_8017899C(void *arg0) {
    void fn_8015BA88(s32, s32, s16, s16, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_8015BA88(0, 0,
        (s16)(*(s16 *)((u8 *)arg0 + 0xE) - *(s16 *)((u8 *)arg0 + 0xA)),
        (s16)(*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0xC)),
        0xB3, 0x10);
}
#pragma cplusplus reset

void *fn_80178A08(void *arg0, s16 arg1) {
    extern u16 lbl_802951E4[76];
    extern u16 lbl_802920E0[76];
    
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 4) = lbl_802951E4;
        if (arg0 != NULL) {
            *(u16**)((char*)arg0 + 4) = lbl_802920E0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
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

#pragma cplusplus on
extern "C" s16 fn_80178A7C(void *arg0) {
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
        virtual s16 v16() = 0;
        virtual void v17() = 0;
        virtual s32 v18() = 0;
    };
    s16 t = ((Obj *)arg0)->v18() - ((Obj *)arg0)->v16() * 2;
    return t / 3;
}
#pragma cplusplus reset
void fn_80178B98(void *arg0, s16 arg1) {
    s32 temp_r3;
    s32 var_r29;

    temp_r3 = *(s32 *)((char *)arg0 + 0x78);
    if (temp_r3 != 0) {
        var_r29 = temp_r3 - 1;
        if ((var_r29 < 0) || (var_r29 > 0x1F)) {
            var_r29 = 0;
        }
        *(s16 *)((char *)arg0 + 0x7C) = var_r29;
    }
    *(s16 *)((char *)arg0 + 0x80) = arg1;
    *(s16 *)((char *)arg0 + 0x82) = arg1;
}

#pragma cplusplus on
extern "C" M2C_UNK fn_80009D74(f32, f32, f32, f32);
extern "C" M2C_UNK fn_80009B8C(u8);
extern "C" M2C_UNK fn_80009B80(u8);
extern "C" void fn_80178C5C(void *arg0, void *arg1) {
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
        virtual void v20() = 0;
        virtual s16 v21() = 0;
        virtual s16 v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual f32 v25() = 0;
    };
    extern f32 lbl_8036AB6C;
    bool flag;

    fn_8000A258();
    fn_80009D74(((Obj *)arg0)->v21(), ((Obj *)arg0)->v22(), ((Obj *)arg0)->v25(), lbl_8036AB6C);
    fn_80009B8C(0xFF);
    flag = false;
    if (M2C_FIELD(arg1, u8 *, 0x2D) == 0 && M2C_FIELD(arg1, u8 *, 0x2E) == 0) {
        flag = true;
    }
    fn_80009B80(flag ? 0x80 : 0x40);
    fn_8000A248();
}

#pragma cplusplus on
extern "C" void fn_80178D88(void *arg0) {
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
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
    };
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_80009B80(u8);
    void fn_8000A248(void);
    extern f32 lbl_8036AB80;

    ((Obj *)arg0)->v30();
    fn_8000A258();
    fn_80009C0C(lbl_8036AB80);
    fn_80009B80(0x80);
    fn_8000A248();
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_80178DCC(void *arg0, void *arg1) {
    void fn_80009B80(u8);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000B908(u8);
    s32 fn_80010770(void *, s32, f32);
    s32 fn_80010B78(void *, s32, f32);
    void fn_8008AB7C(s32, s32, s16, s32, s32, s32, s32);
    void fn_8008BF68(s16, s16, s32);
    extern f32 lbl_8036AB6C;
    extern f32 lbl_8036AB74;
    extern f32 lbl_8036AB80;
    extern f32 lbl_8036AB84;
    struct StrObj {
        virtual void *v0() = 0;
        virtual void *v1() = 0;
    };
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
        virtual s32 v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
        virtual void v31() = 0;
        virtual void v32() = 0;
        virtual void v33() = 0;
        virtual void v34() = 0;
        virtual s32 v35() = 0;
    };
    s16 y;
    s16 textW;
    s32 a1;
    s32 a0;
    void *obj;
    s16 x;
    s32 t;
    bool flag;
    s32 flag2;
    u8 *p;
    void *str;

    a0 = (s32)arg0;
    a1 = (s32)arg1;
    p = (u8 *)a1;
    p += (s8)p[0x62];
    obj = fn_8000B908(p[0x40]);
    x = *(s16 *)((u8 *)obj + 0x30);
    y = *(s16 *)((u8 *)obj + 0x32);
    str = ((StrObj *)*(void **)((u8 *)obj + 0x34))->v1();
    textW = (s16)fn_80010B78(str, -1, lbl_8036AB6C);
    x = (s16)(x - (textW / 2));
    str = ((StrObj *)*(void **)((u8 *)obj + 0x34))->v1();
    t = 0x1C - fn_80010770(str, -1, lbl_8036AB6C);
    y = (s16)(y + (t / 2));
    if (*(s16 *)((u8 *)a1 + 0x38) < 0 || *(s16 *)((u8 *)a1 + 0x3A) < 0) {
        *(s16 *)((u8 *)a1 + 0x38) = x;
        *(s16 *)((u8 *)a1 + 0x3A) = y;
    } else {
        t = *(s16 *)((u8 *)a1 + 0x38) + x;
        *(s16 *)((u8 *)a1 + 0x38) = (s16)(t / 2);
        t = *(s16 *)((u8 *)a1 + 0x3A) + y;
        *(s16 *)((u8 *)a1 + 0x3A) = (s16)(t / 2);
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036AB80);
    flag = false;
    if (*((u8 *)a1 + 0x2D) == 0 && *((u8 *)a1 + 0x2E) == 0) {
        flag = true;
    }
    fn_80009B80(flag ? 0x80 : 0x40);
    fn_8000A248();
    flag2 = 0;
    if (*((u8 *)a1 + 0x2D) == 0 && *((u8 *)a1 + 0x2E) == 0) {
        flag2 = 1;
    }
    fn_8008BF68(*(s16 *)((u8 *)a1 + 0x38), *(s16 *)((u8 *)a1 + 0x3A), flag2);
    {
        s32 w = ((Obj *)a0)->v35();
        s32 h = ((Obj *)a0)->v20();
        fn_8000A258();
        fn_80009C0C(lbl_8036AB74);
        fn_8000A248();
        flag2 = 0;
        if (*((u8 *)a1 + 0x2D) == 0 && *((u8 *)a1 + 0x2E) == 0) {
            flag2 = 1;
        }
        fn_8008AB7C(*(s16 *)((u8 *)a1 + 0x38) + (textW >> 1),
                    *(s16 *)((u8 *)a1 + 0x3A) + ((s16)h >> 1),
                    (s16)w, 0x18, 0x19, 0x4C, flag2);
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036AB84);
    fn_8000A248();
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset
extern "C" void fn_80178FFC(void *unused, void *arg1) {
    void *fn_8000B908(u8);
    s32 fn_80166D8C(void *);
    void fn_80167190(void *, void *, f32, f32);
    void fn_801475FC(void *, s32);
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern u8 lbl_80330D68[];
    extern u16 lbl_80278080[];
    struct Inner {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2() = 0;
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
        virtual void v14(void *, void *) = 0;
        virtual void v15(void *, void *) = 0;
    };
    s32 gate;
    s32 flags;
    s32 btn;
    s32 cur;
    void *pad;
    f32 f31;
    f32 f30;
    void *tmp;
    void *res;
    u8 *p;

    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if ((u8)gate == 0) {
        u8 t62;
        s32 prev;
        pad = lbl_80367240;
        t62 = *(u8 *)((u8 *)arg1 + 0x62);
        cur = *(s32 *)((u8 *)pad + 4);
        prev = *(s32 *)((u8 *)pad + 8);
        *(u8 *)((u8 *)arg1 + 0x63) = t62;
        btn = cur & (prev ^ cur);
        if ((s8)*(u8 *)((u8 *)arg1 + 0x62) != 0) {
            if ((btn & 0x01000001) != 0) {
                *(u8 *)((u8 *)arg1 + 0x62) = *(u8 *)((u8 *)arg1 + 0x62) - 1;
            }
        }
        if ((s8)*(u8 *)((u8 *)arg1 + 0x62) != ((s8)*(u8 *)((u8 *)arg1 + 0x60) - 1)) {
            if ((btn & 0x02000002) != 0) {
                *(u8 *)((u8 *)arg1 + 0x62) = *(u8 *)((u8 *)arg1 + 0x62) + 1;
            }
        }
        if ((s8)*(u8 *)((u8 *)arg1 + 0x62) != (s8)*(u8 *)((u8 *)arg1 + 0x63)) {
            if ((u8)fn_80166D8C(lbl_80330D68) != 0) {
                p = (u8 *)arg1;
                p += (s8)*(u8 *)((u8 *)arg1 + 0x62);
                tmp = fn_8000B908(p[0x40]);
                f31 = (f32)(*(s16 *)((u8 *)arg1 + 0x30) + *(s16 *)((u8 *)tmp + 0x30));
                p = (u8 *)arg1;
                p += (s8)*(u8 *)((u8 *)arg1 + 0x62);
                tmp = fn_8000B908(p[0x40]);
                f30 = (f32)(*(s16 *)((u8 *)arg1 + 0x32) + *(s16 *)((u8 *)tmp + 0x32));
                p = (u8 *)arg1;
                p += (s8)*(u8 *)((u8 *)arg1 + 0x62);
                tmp = fn_8000B908(p[0x40]);
                res = (*(Inner **)((u8 *)tmp + 0x34))->v2();
                if (res != NULL) {
                    fn_80167190(lbl_80330D68, res, f31, f30);
                }
            }
        }
        if (*(s8 *)((u8 *)arg1 + 0x62) != *(s8 *)((u8 *)arg1 + 0x63)) {
            p = (u8 *)arg1;
            p += *(s8 *)((u8 *)arg1 + 0x63);
            tmp = fn_8000B908(p[0x40]);
            (*(Inner **)((u8 *)tmp + 0x34))->v15(arg1, tmp);
            p = (u8 *)arg1;
            p += *(s8 *)((u8 *)arg1 + 0x62);
            tmp = fn_8000B908(p[0x40]);
            (*(Inner **)((u8 *)tmp + 0x34))->v14(arg1, tmp);
            fn_801475FC((u8 *)lbl_80278080 + 0x64e, 0x64);
        }
    }
}
#pragma cplusplus reset

#pragma use_lmw_stmw reset
#pragma cplusplus reset

#pragma cplusplus reset

#pragma cplusplus reset

void fn_80179248(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x66A / sizeof(u16)]);
}

void *fn_80179274(void) {
    return (char *)&lbl_80278080 + 0x674;
}

u8 fn_80179284(void) {
    s32 fn_800C3E54(void *);
    extern u8 lbl_803200AC[];
    s32 result;
    s32 ret;

    result = fn_800C3E54(lbl_803200AC);
    ret = 2;
    if (((u32)(-result | result) >> 0x1FU) != 0) {
        ret = 0;
    }
    return (u8)ret;
}

void fn_801793B4(void) {
    M2C_UNK fn_80009B80(M2C_UNK);
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_80009B80(0x80);
    fn_8000A248();
}

void fn_801793EC(void **arg0, void *arg2) {
    M2C_UNK fn_80007124();
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    s32 fn_80010770(M2C_UNK, f32);
    u32 fn_80010B78(M2C_UNK, f32);
    s32 *fn_8018D900(M2C_UNK);
    extern f32 lbl_8036AB6C;
    s32 spC;
    s32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f31_2;
    u32 temp_r3;
    u32 temp_r4;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x4C)();
    temp_f31 = (f32) M2C_FIELD(arg2, s16 *, 0x30);
    temp_f30 = (f32) M2C_FIELD(arg2, s16 *, 0x32);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xC)(arg0);
    temp_r3 = fn_80010B78(-1, lbl_8036AB6C);
    temp_f31_2 = temp_f31 - (f32) ((s32) ((temp_r3 >> 0x1FU) + temp_r3) >> 1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xC)(arg0);
    temp_r4 = 0x1C - fn_80010770(-1, lbl_8036AB6C);
    fn_80007898(6, temp_r4);
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        spC = *fn_8018D900(0);
        fn_80007668(&spC);
    } else {
        sp8 = *fn_8018D900(2);
        fn_80007668(&sp8);
    }
    fn_80007858(temp_f31_2, temp_f30 + (f32) ((s32) ((temp_r4 >> 0x1FU) + temp_r4) >> 1));
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xC)(arg0);
    fn_80007124();
    fn_80007884();
}

void fn_80179594(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x690 / sizeof(u16)]);
}

void *fn_801795C0(void) {
    return (char *)&lbl_80278080 + 0x69A;
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void *fn_8017992C(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80292230[];
    extern u8 lbl_802924DC[];
    extern u8 lbl_80285C18[];
    extern u8 lbl_80285CCC[];
    extern u8 lbl_80292504[];
    extern u8 lbl_80295478[];
    extern f32 lbl_8036AB6C;
    extern f32 lbl_8036AB70;
    struct Sub {
        virtual void v0() {}
        virtual void v1() {}
        virtual void v2() {}
        virtual void v3() {}
        virtual void v4() {}
        virtual void v5() {}
        virtual s16 v6() { return 0; }
        u8 data[0x24];
    };
    struct Mid {
        u8 pad[0x44];
        virtual void v0() {}
        virtual void v1() {}
        virtual void v2() {}
        virtual void v3() {}
        virtual void v4() {}
        virtual void v5() {}
        virtual void v6() {}
        virtual void v7() {}
        virtual void v8() {}
        virtual void v9() {}
        virtual void v10() {}
        virtual void v11() {}
        virtual void v12() {}
        virtual void v13() {}
        virtual void v14() {}
        virtual s16 v15() { return 0; }
    };
    struct Parent {
        u8 pad[0x40];
        Mid mid;
        Sub sub1;
        Sub sub2;
    };
    Parent *self;
    Parent *r29;
    void *mid1;
    void *mid2;
    void *mid3;
    void *vtdc;
    void *vt30;
    s32 z;
    s16 n1;
    s16 c108;
    f32 one;
    s32 e1;
    s16 t30;
    s16 t29;
    s32 tmp;

    z = 0;
    n1 = -1;
    c108 = 0x108;
    one = lbl_8036AB6C;
    self = (Parent *)arg0;
    vtdc = lbl_802924DC;
    vt30 = lbl_80292230;
    e1 = arg1;
    r29 = self;
    mid1 = lbl_80285C18;
    *(void **)self = lbl_8028FDB0;
    mid2 = lbl_80285CCC;
    mid3 = lbl_80292504;
    *(s32 *)((u8 *)r29 + 4) = z;
    *(void **)r29 = vt30;
    *(s16 *)((u8 *)r29 + 8) = n1;
    *(s16 *)((u8 *)r29 + 0xA) = arg1;
    *(s16 *)((u8 *)r29 + 0xC) = arg2;
    *(s16 *)((u8 *)r29 + 0xE) = (s16)(e1 + 0x108);
    *(s16 *)((u8 *)r29 + 0x10) = arg2;
    *(s16 *)((u8 *)r29 + 0x12) = z;
    *(s16 *)((u8 *)r29 + 0x14) = z;
    *(s16 *)((u8 *)r29 + 0x16) = c108;
    *(s16 *)((u8 *)r29 + 0x18) = z;
    *(s16 *)((u8 *)r29 + 0x1A) = z;
    *(s16 *)((u8 *)r29 + 0x1C) = z;
    *(u8 *)((u8 *)r29 + 0x1E) = 0xFF;
    *(u8 *)((u8 *)r29 + 0x1F) = 0xFF;
    *(u8 *)((u8 *)r29 + 0x20) = 0xFF;
    *(u8 *)((u8 *)r29 + 0x21) = 0xFF;
    *(s16 *)((u8 *)r29 + 0x22) = arg3;
    *(s16 *)((u8 *)r29 + 0x24) = z;
    *(f32 *)((u8 *)r29 + 0x28) = one;
    *(f32 *)((u8 *)r29 + 0x2C) = one;
    *(f32 *)((u8 *)r29 + 0x30) = one;
    *(s32 *)((u8 *)r29 + 0x34) = z;
    *(s32 *)((u8 *)r29 + 0x38) = z;
    *(void **)self = vtdc;
    *(s32 *)((u8 *)self + 0x3C) = z;
    *(void **)((u8 *)self + 0x84) = mid1;
    *(void **)((u8 *)self + 0x84) = mid2;
    *(void **)((u8 *)self + 0x84) = mid3;
    *(s32 *)((u8 *)self + 0x40) = z;
    self->mid.v1();
    {
        f32 f1;
        f32 f0;
        void *vt = lbl_80295478;
        *(void **)((u8 *)self + 0x88) = vt;
        f1 = lbl_8036AB6C;
        *(s32 *)((u8 *)self + 0x8C) = 0;
        f0 = lbl_8036AB70;
        *(s32 *)((u8 *)self + 0x90) = 0;
        *(u8 *)((u8 *)self + 0x94) = 1;
        *(u8 *)((u8 *)self + 0x95) = 1;
        *(s16 *)((u8 *)self + 0x9C) = 0;
        *(s16 *)((u8 *)self + 0x9E) = 0;
        *(f32 *)((u8 *)self + 0xA0) = f1;
        *(f32 *)((u8 *)self + 0xA4) = f1;
        *(u8 *)((u8 *)self + 0xA8) = 0xFF;
        *(u8 *)((u8 *)self + 0xA9) = 0xFF;
        *(u8 *)((u8 *)self + 0xAA) = 0xFF;
        *(u8 *)((u8 *)self + 0xAB) = 0xFF;
        *(f32 *)((u8 *)self + 0xAC) = f0;
        self->sub1.v1();
    }
    {
        f32 f1;
        f32 f0;
        void *vt = lbl_80295478;
        *(void **)((u8 *)self + 0xB0) = vt;
        f1 = lbl_8036AB6C;
        *(s32 *)((u8 *)self + 0xB4) = 0;
        f0 = lbl_8036AB70;
        *(s32 *)((u8 *)self + 0xB8) = 1;
        *(u8 *)((u8 *)self + 0xBC) = 1;
        *(u8 *)((u8 *)self + 0xBD) = 1;
        *(s16 *)((u8 *)self + 0xC4) = 0;
        *(s16 *)((u8 *)self + 0xC6) = 0;
        *(f32 *)((u8 *)self + 0xC8) = f1;
        *(f32 *)((u8 *)self + 0xCC) = f1;
        *(u8 *)((u8 *)self + 0xD0) = 0xFF;
        *(u8 *)((u8 *)self + 0xD1) = 0xFF;
        *(u8 *)((u8 *)self + 0xD2) = 0xFF;
        *(u8 *)((u8 *)self + 0xD3) = 0xFF;
        *(f32 *)((u8 *)self + 0xD4) = f0;
        self->sub2.v1();
    }
    tmp = self->mid.v15();
    {
        s32 t = tmp;
        *(s16 *)((u8 *)self + 0x10) = (s16)(*(s16 *)((u8 *)self + 0xC) + t);
    }
    t29 = (s16)((s16)(*(s16 *)((u8 *)self + 0x10) - *(s16 *)((u8 *)self + 0xC)) >> 1);
    tmp = self->sub1.v6();
    *(s16 *)((u8 *)self + 0x96) = (s16)(-(tmp >> 1));
    *(s16 *)((u8 *)self + 0x98) = t29;
    *(s16 *)((u8 *)self + 0x9A) = 0;
    t30 = (s16)(*(s16 *)((u8 *)self + 0xE) - *(s16 *)((u8 *)self + 0xA));
    tmp = self->sub1.v6();
    *(s16 *)((u8 *)self + 0xBE) = (s16)(t30 + (tmp >> 1));
    *(s16 *)((u8 *)self + 0xC0) = t29;
    *(s16 *)((u8 *)self + 0xC2) = 0;
    return self;
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

s32 fn_80179D40(s32 arg0) {
    fn_8014510C();
    return arg0;
}

void *fn_80179D70(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_8029518C[];
    extern u8 lbl_802951B8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_8029518C;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_802951B8;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma cplusplus on
extern "C" void *fn_80179F8C(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    void *fn_8017A000(void *, s16 *, s16 *, s32);
    extern u8 lbl_80291B1C[];
    struct Obj {
        virtual void m08() = 0;
        virtual void m0C() = 0;
        virtual void m10() = 0;
        virtual void m14() = 0;
        virtual void m18() = 0;
        virtual void m1C() = 0;
        virtual void m20() = 0;
        virtual void m24() = 0;
        virtual void m28() = 0;
    };
    s16 ab[2];
    s16 cd[2];

    cd[0] = arg3;
    ab[0] = arg1;
    ab[1] = arg2;
    cd[1] = arg4;
    fn_8017A000(arg0, ab, cd, arg5);
    *(void **)arg0 = lbl_80291B1C;
    *(s16 *)((u8 *)arg0 + 0xD4) = 1;
    ((Obj *)arg0)->m28();
    return arg0;
}
extern "C" void *fn_8017A000(void *arg0, s16 *arg1, s16 *arg2, s16 arg3) {
    void fn_80142060(void *);
    void fn_8013BBF8(void *);
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80292230[];
    extern u8 lbl_80292208[];
    extern u8 lbl_80291B70[];
    extern u8 lbl_80295478[];
    extern f32 lbl_8036AB6C;
    extern f32 lbl_8036AB70;
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
    };
    struct Sub {
        virtual void v0() = 0;
        virtual void v1() = 0;
    };
    s32 zero = 0;
    void *vt92230 = lbl_80292230;
    s16 neg1 = -1;
    s16 y0 = arg1[1];
    void *self = arg0;
    s16 x1 = arg2[0];
    s16 x0 = arg1[0];
    void *vt92208 = lbl_80292208;
    s16 *keep1 = arg1;
    s16 *keep2 = arg2;

    *(void **)self = lbl_8028FDB0;
    *(s32 *)((u8 *)self + 4) = zero;
    *(void **)self = vt92230;
    {
        void *tmp = self;
        f32 one = lbl_8036AB6C;
        s16 y1;
        *(s16 *)((u8 *)self + 8) = neg1;
        y1 = keep2[1];
        *(s16 *)((u8 *)self + 0xA) = x0;
        *(s16 *)((u8 *)self + 0xC) = y0;
        *(s16 *)((u8 *)self + 0xE) = (s16)(x0 + x1);
        *(s16 *)((u8 *)self + 0x10) = (s16)(y0 + y1);
        *(s16 *)((u8 *)self + 0x12) = zero;
        *(s16 *)((u8 *)self + 0x14) = zero;
        *(s16 *)((u8 *)self + 0x16) = x1;
        *(s16 *)((u8 *)self + 0x18) = y1;
        *(s16 *)((u8 *)self + 0x1A) = zero;
        *(s16 *)((u8 *)self + 0x1C) = zero;
        *(u8 *)((u8 *)self + 0x1E) = 0xFF;
        *(u8 *)((u8 *)self + 0x1F) = 0xFF;
        *(u8 *)((u8 *)self + 0x20) = 0xFF;
        *(u8 *)((u8 *)self + 0x21) = 0xFF;
        *(s16 *)((u8 *)self + 0x22) = arg3;
        *(s16 *)((u8 *)self + 0x24) = zero;
        *(f32 *)((u8 *)self + 0x28) = one;
        *(f32 *)((u8 *)self + 0x2C) = one;
        *(f32 *)((u8 *)self + 0x30) = one;
        *(s32 *)((u8 *)self + 0x34) = zero;
        *(s32 *)((u8 *)self + 0x38) = zero;
        *(void **)self = vt92208;
        fn_80142060((u8 *)tmp + 0x3C);
    }
    (void)keep1;
    *(void **)self = lbl_80291B70;
    *(s32 *)((u8 *)self + 0x48) = 0;
    *(u8 *)((u8 *)self + 0x4C) = 1;
    *(u8 *)((u8 *)self + 0x4D) = 0;
    *(s16 *)((u8 *)self + 0x4E) = 0;
    *(s16 *)((u8 *)self + 0x52) = -1;
    *(s16 *)((u8 *)self + 0x54) = -1;
    *(s16 *)((u8 *)self + 0x56) = 0;
    *(s16 *)((u8 *)self + 0x58) = 1;
    *(s16 *)((u8 *)self + 0x5A) = 0x20;
    *(f32 *)((u8 *)self + 0x5C) = lbl_8036AB70;
    *(s16 *)((u8 *)self + 0x60) = 0;
    *(s16 *)((u8 *)self + 0x62) = 0x10;
    *(s16 *)((u8 *)self + 0x64) = 0;
    fn_8013BBF8((u8 *)self + 0x70);
    *(s32 *)((u8 *)self + 0x7C) = 0;
    *(void **)((u8 *)self + 0x84) = lbl_80295478;
    {
        f32 f1 = lbl_8036AB6C;
        f32 f0 = lbl_8036AB70;
        *(s32 *)((u8 *)self + 0x88) = 0;
        *(s32 *)((u8 *)self + 0x8C) = 2;
        *(u8 *)((u8 *)self + 0x90) = 1;
        *(u8 *)((u8 *)self + 0x91) = 1;
        *(s16 *)((u8 *)self + 0x98) = 0;
        *(s16 *)((u8 *)self + 0x9A) = 0;
        *(f32 *)((u8 *)self + 0x9C) = f1;
        *(f32 *)((u8 *)self + 0xA0) = f1;
        *(u8 *)((u8 *)self + 0xA4) = 0xFF;
        *(u8 *)((u8 *)self + 0xA5) = 0xFF;
        *(u8 *)((u8 *)self + 0xA6) = 0xFF;
        *(u8 *)((u8 *)self + 0xA7) = 0xFF;
        *(f32 *)((u8 *)self + 0xA8) = f0;
        ((Sub *)((u8 *)self + 0x84))->v1();
    }
    *(void **)((u8 *)self + 0xAC) = lbl_80295478;
    {
        f32 f1 = lbl_8036AB6C;
        f32 f0 = lbl_8036AB70;
        *(s32 *)((u8 *)self + 0xB0) = 0;
        *(s32 *)((u8 *)self + 0xB4) = 3;
        *(u8 *)((u8 *)self + 0xB8) = 1;
        *(u8 *)((u8 *)self + 0xB9) = 1;
        *(s16 *)((u8 *)self + 0xC0) = 0;
        *(s16 *)((u8 *)self + 0xC2) = 0;
        *(f32 *)((u8 *)self + 0xC4) = f1;
        *(f32 *)((u8 *)self + 0xC8) = f1;
        *(u8 *)((u8 *)self + 0xCC) = 0xFF;
        *(u8 *)((u8 *)self + 0xCD) = 0xFF;
        *(u8 *)((u8 *)self + 0xCE) = 0xFF;
        *(u8 *)((u8 *)self + 0xCF) = 0xFF;
        *(f32 *)((u8 *)self + 0xD0) = f0;
        ((Sub *)((u8 *)self + 0xAC))->v1();
    }
    ((Obj *)self)->v8();
    return self;
}
#pragma cplusplus reset

void *fn_8017A238(void *arg0, s16 arg1) {
    extern u16 lbl_80294CB8[76];
    extern u16 lbl_802920E0[76];
    
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 4) = lbl_80294CB8;
        if (arg0 != NULL) {
            *(u16**)((char*)arg0 + 4) = lbl_802920E0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_8017A294(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_80295160[];
    extern u8 lbl_802951B8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80295160;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_802951B8;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_8017A38C(u8 **arg0, u8 *arg1) {
    u8 *p;
    u8 b;

    p = arg0[1];
    b = arg1[0];
    arg0[1] = p + 1;
    *p = b;

    p = arg0[1];
    b = arg1[1];
    arg0[1] = p + 1;
    *p = b;

    p = arg0[1];
    b = arg1[2];
    arg0[1] = p + 1;
    *p = b;

    p = arg0[1];
    b = arg1[3];
    arg0[1] = p + 1;
    *p = b;
}

void fn_8017A3E0(void *arg0, s32 arg1, u8 arg2) {
    memset(M2C_FIELD(arg0, s32 *, 4), arg2, arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}

void fn_8017A430(void *arg0, s32 arg1, s32 arg2) {
    memcpy(M2C_FIELD(arg0, s32 *, 4), arg2, arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}

void fn_8017A480(void *arg0, s32 arg1, s32 arg2) {
    fn_80234450(M2C_FIELD(arg0, s32 *, 4), arg2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}

void fn_8017A4CC(void *arg0, s32 arg1, u8 arg2, u8 arg3) {
    u8 *temp_r4;
    u8 *temp_r4_2;
    u8 *temp_r4_3;
    u8 *temp_r4_4;
    u8 *temp_r4_5;
    u8 *temp_r4_6;
    u8 *temp_r4_7;
    u8 *temp_r4_8;
    temp_r4 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *)(temp_r4 + 1);
    *temp_r4 = (u8)(arg2 >> 0x18U);
    temp_r4_2 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *)(temp_r4_2 + 1);
    *temp_r4_2 = (u8)(arg2 >> 0x10U);
    temp_r4_3 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *)(temp_r4_3 + 1);
    *temp_r4_3 = (u8)(arg2 >> 8U);
    temp_r4_4 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *)(temp_r4_4 + 1);
    *temp_r4_4 = arg2;
    temp_r4_5 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *)(temp_r4_5 + 1);
    *temp_r4_5 = (((arg3 << 8) | (arg3 >> 0x18U)) & ~0xFFFFFF00) | (arg2 << 8);
    temp_r4_6 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *)(temp_r4_6 + 1);
    *temp_r4_6 = (((arg3 << 0x10) | (arg3 >> 0x10U)) & ~0xFFFF0000) | (arg2 << 0x10);
    temp_r4_7 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *)(temp_r4_7 + 1);
    *temp_r4_7 = (((arg3 << 0x18) | (arg3 >> 8U)) & ~0xFF000000) | (arg2 << 0x18);
    temp_r4_8 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *)(temp_r4_8 + 1);
    *temp_r4_8 = arg3;
}

void fn_8017A574(void *arg0, u32 arg1) {
    u8** r5_ptr = (u8**)((char*)arg0 + 4);
    u8* r5_val = *r5_ptr;
    *r5_ptr = r5_val + 1;
    *r5_val = (u8)(arg1 >> 24);

    r5_ptr = (u8**)((char*)arg0 + 4);
    r5_val = *r5_ptr;
    *r5_ptr = r5_val + 1;
    *r5_val = (u8)(arg1 >> 16);

    r5_ptr = (u8**)((char*)arg0 + 4);
    r5_val = *r5_ptr;
    *r5_ptr = r5_val + 1;
    *r5_val = (u8)(arg1 >> 8);

    r5_ptr = (u8**)((char*)arg0 + 4);
    r5_val = *r5_ptr;
    *r5_ptr = r5_val + 1;
    *r5_val = (u8)arg1;
}

void fn_8017A5C4(u8 **arg0, u16 arg1) {
    u8 **pp = &arg0[1];
    *(*pp)++ = (u8)(arg1 >> 8);
    *(*pp)++ = (u8)arg1;
}

void fn_8017A5EC(void *arg0, s8 arg1) {
    s8 **pp = (s8 **)((u8 *)arg0 + 4);
    *(*pp)++ = arg1;
}

s32 fn_8017A6C4(void *arg0, void *arg1) {
    u8 *temp_r5;
    u8 *temp_r5_2;
    u8 *temp_r5_3;
    u8 *temp_r5_4;

    temp_r5 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r5 + 1);
    if ((s8) *temp_r5 == (s8) M2C_FIELD(arg1, u8 *, 0)) {
        temp_r5_2 = M2C_FIELD(arg0, u8 **, 4);
        M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r5_2 + 1);
        if ((s8) *temp_r5_2 == (s8) M2C_FIELD(arg1, u8 *, 1)) {
            temp_r5_3 = M2C_FIELD(arg0, u8 **, 4);
            M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r5_3 + 1);
            if ((s8) *temp_r5_3 == (s8) M2C_FIELD(arg1, u8 *, 2)) {
                temp_r5_4 = M2C_FIELD(arg0, u8 **, 4);
                M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r5_4 + 1);
                if ((s8) *temp_r5_4 == (s8) M2C_FIELD(arg1, u8 *, 3)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void *fn_8017A764(void *arg0, void *arg1) {
    void *fn_8000D2BC(void *);
    extern u8 lbl_802842A4[];
    extern u8 lbl_802842B8[];
    void *self;
    void *temp;
    s32 zero;

    self = arg0;
    *(void **)((u8 *)self + 0x10) = lbl_802842A4;
    zero = 0;
    *(s32 *)((u8 *)self + 4) = zero;
    *(s32 *)((u8 *)self + 0) = zero;
    *(s32 *)((u8 *)self + 8) = zero;
    *(u8 *)((u8 *)self + 0xc) = zero;
    *(void **)((u8 *)self + 0x10) = lbl_802842B8;
    temp = fn_8000D2BC(arg1);
    *(void **)((u8 *)self + 4) = temp;
    zero = 0;
    *(void **)((u8 *)self + 0) = temp;
    *(u8 *)((u8 *)self + 0xc) = zero;
    return self;
}

void fn_8017A7D4(void *arg0, s32 arg1) {
    extern u8 lbl_802842A4[];
    extern u8 lbl_802842B8[];
    void *vtA = lbl_802842A4;
    void *vtB = lbl_802842B8;
    s32 z = 0;

    *(void **)((u8 *)arg0 + 0x10) = vtA;
    *(s32 *)((u8 *)arg0 + 4) = z;
    *(s32 *)arg0 = z;
    *(s32 *)((u8 *)arg0 + 8) = z;
    *(u8 *)((u8 *)arg0 + 0xC) = (u8)z;
    *(void **)((u8 *)arg0 + 0x10) = vtB;
    *(s32 *)((u8 *)arg0 + 4) = arg1;
    *(s32 *)arg0 = arg1;
    *(u8 *)((u8 *)arg0 + 0xC) = (u8)z;
}

void fn_8017A810(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK memcpy(s32, s32, s32);
    memcpy(arg2, M2C_FIELD(arg0, s32 *, 4), arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}

u32 fn_8017A950(u8 **arg0) {
    u32 v;
    v  = (u32)*arg0[1]++ << 24;
    v += ((*arg0[1]++ << 16) & 0x00FF0000);
    v += ((*arg0[1]++ << 8) & 0x0000FF00);
    v += *arg0[1]++;
    return v;
}

s32 fn_8017A9B0(void *arg0) {
    u8 **pp = (u8 **)((u8 *)arg0 + 4);
    u8 hi = *(*pp)++;
    u8 lo = *(*pp)++;

    return (hi << 8) + lo;
}

u8 fn_8017A9DC(void *arg0) {
    u8 *temp_r4;

    temp_r4 = *(u8 **)((char *)arg0 + 4);
    *(u8 **)((char *)arg0 + 4) = temp_r4 + 1;
    return *temp_r4;
}

void fn_8017A9F0(s32 arg0, s32 arg1, void *arg2) {
    void *fn_8000CAA0(void *, void *);
    void fn_8000C070(void *, u8);
    extern u8 lbl_80295370[];
    void *proc;

    proc = fn_8000CAA0(lbl_80295370, arg2);
    M2C_FIELD(proc, s32 *, 0x30) = arg0;
    M2C_FIELD(proc, s32 *, 0x38) = arg1;
    fn_8000C070(proc, 3);
}

void fn_8017AA48(s32 arg0, s32 arg1, void *arg2) {
    void *fn_8000CAA0(void *, void *);
    void fn_8000C070(void *, u8);
    extern u8 lbl_80295370[];
    void *proc;

    proc = fn_8000CAA0(lbl_80295370, arg2);
    M2C_FIELD(proc, s32 *, 0x30) = arg0;
    M2C_FIELD(proc, s32 *, 0x38) = arg1;
    fn_8000C070(proc, 0);
}

#pragma cplusplus on
extern "C" void fn_8017AAA0(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v6();
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_8017AC8C(void *arg0, void *arg1) {
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    s32 fn_800102BC(s32, f32);
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, u8);
    void fn_8008BF68(s16, s32, u8);
    u8 fn_80105BC0(void *, u8);
    void *fn_80105C5C(void *, u8);
    extern f32 lbl_8036AB90;
    extern f32 lbl_8036AB94;
    extern f32 lbl_8036AB98;
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
    };
    s16 temp_r25;
    s32 var_r26;
    void *temp_r27;
    void *temp_r28;
    void *self;
    void *other;
    s32 var_r31;
    s16 temp_r4;
    u8 var_r3;
    u8 var_r3_2;
    u8 flag;
    u8 check;
    u32 var_r0;
    s32 avg_a;
    s32 avg_b;

    self = arg0;
    other = arg1;
    ((Obj *)arg0)->v3();
    temp_r25 = *(s16 *)((u8 *)self + 0x3E);
    if (temp_r25 >= 0) {
        var_r26 = 0;
        temp_r27 = *(void **)((u8 *)self + 0x4C);
        for (var_r31 = 0; var_r31 < 0x62; var_r31++) {
            temp_r28 = fn_80105C5C((u8 *)temp_r27 + 0x1BC, (u8)var_r31);
            if (temp_r28 != NULL) {
                if (*(u8 *)((u8 *)temp_r28 + 0x19) != 0) {
                    if (*(u8 *)((u8 *)temp_r28 + 0x19) != 0) {
                        var_r3 = fn_80105BC0((u8 *)*(void **)((u8 *)*(void **)((u8 *)self + 0x4C) + 0x18C) + 0x1C,
                                             *(u8 *)((u8 *)temp_r28 + 0x18));
                    } else {
                        var_r3 = 0;
                    }
                    if (var_r3 == 0) {
                        if (*(u8 *)((u8 *)temp_r28 + 0x19) != 0) {
                            var_r3_2 = 0;
                            if (*(u8 *)((u8 *)temp_r28 + 0x19) != 0 && *(u8 *)((u8 *)temp_r28 + 0x1A) == 0) {
                                var_r3_2 = 1;
                            }
                        } else {
                            var_r3_2 = 0;
                        }
                        if (var_r3_2 != 0) {
                            var_r26 += 1;
                        }
                    }
                }
            }
        }
        temp_r4 = *(s16 *)((u8 *)self + 0x40);
        var_r31 = (s16)(((temp_r25 + var_r26) << 5) + 0x46);
        if (temp_r4 < 0 || *(s16 *)((u8 *)self + 0x42) < 0) {
            *(s16 *)((u8 *)self + 0x40) = 0x8B;
            *(s16 *)((u8 *)self + 0x42) = (s16)var_r31;
        } else {
            avg_a = temp_r4 + 0x8C;
            avg_b = var_r31 + 1;
            *(s16 *)((u8 *)self + 0x40) = (s16)(avg_a >> 1);
            *(s16 *)((u8 *)self + 0x42) = (s16)((*(s16 *)((u8 *)self + 0x42) + avg_b) >> 1);
        }
        if (*(u8 *)((u8 *)self + 0x3C) != 0) {
            temp_r25 = 0;
            temp_r27 = *(void **)((u8 *)self + 0x4C);
            var_r26 = 0;
            for (var_r26 = 0; var_r26 < 0x62; var_r26++) {
                temp_r28 = fn_80105C5C((u8 *)temp_r27 + 0x1BC, (u8)var_r26);
                if (temp_r28 != NULL) {
                    if (*(u8 *)((u8 *)temp_r28 + 0x19) != 0) {
                        if (*(u8 *)((u8 *)temp_r28 + 0x19) != 0) {
                            var_r3 = fn_80105BC0((u8 *)*(void **)((u8 *)*(void **)((u8 *)self + 0x4C) + 0x18C) + 0x1C,
                                                 *(u8 *)((u8 *)temp_r28 + 0x18));
                        } else {
                            var_r3 = 0;
                        }
                        if (var_r3 == 0) {
                            if (*(u8 *)((u8 *)temp_r28 + 0x19) != 0) {
                                var_r3_2 = 0;
                                if (*(u8 *)((u8 *)temp_r28 + 0x19) != 0 && *(u8 *)((u8 *)temp_r28 + 0x1A) == 0) {
                                    var_r3_2 = 1;
                                }
                            } else {
                                var_r3_2 = 0;
                            }
                            if (var_r3_2 == 0) {
                                temp_r25 += 1;
                            }
                        }
                    }
                }
            }
            if (temp_r25 != 0) {
                flag = 0;
                check = flag;
                if (*(u8 *)((u8 *)other + 0x2D) == 0 && *(u8 *)((u8 *)other + 0x2E) == 0) {
                    check = 1;
                }
                if (check != 0) {
                    if (*(u32 *)((u8 *)other + 0x34) != 0) {
                        var_r0 = *(u32 *)((u8 *)*(void **)((u8 *)other + 0x38) + 8);
                    } else {
                        var_r0 = 0;
                    }
                    if ((void *)var_r0 == self) {
                        flag = 1;
                    }
                }
                fn_8000A258();
                fn_80009C0C(lbl_8036AB90);
                fn_8000A248();
                fn_8008BF68(*(s16 *)((u8 *)self + 0x40),
                            *(s16 *)((u8 *)self + 0x42) + (s16)((0x20 - fn_800102BC(-1, lbl_8036AB94)) >> 1),
                            flag);
                fn_8000A258();
                fn_80009C0C(lbl_8036AB98);
                fn_8000A248();
                fn_8008AB7C(0xD9, (s16)var_r31 + 0x10, 0x9C, 0x18, 0x19, 0x4C, flag);
            }
        }
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
#pragma global_optimizer off
extern "C" void fn_8017AF30(void *arg0, void *arg1) {
    void fn_80009B98(void);
    void fn_80009BC0(void (*)(void *), s16 *);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8008B464(void *, s32, s32);
    void fn_8008BA80(void *, s32, s32, s32);
    u8 fn_80105BC0(void *, u8);
    void *fn_80105C5C(void *, u8);
    void fn_8013F748(void *, s16 *, s16 *);
    void fn_8013F920(void *);
    extern f32 lbl_8036AB9C;
    extern f32 lbl_8036ABA0;
    extern f32 lbl_8036ABA4;
    struct Obj {
        virtual void v08() = 0;
        virtual void v0C() = 0;
        virtual void v10() = 0;
        virtual void v14(void *) = 0;
        virtual void v18() = 0;
        virtual void v1C() = 0;
        virtual void v20() = 0;
        virtual void v24() = 0;
        virtual void v28() = 0;
        virtual void v2C() = 0;
        virtual s32 v30(void *) = 0;
        virtual void v34(s32, s32, s32, void *, s32, s32) = 0;
        virtual void v38(s32, s16, s32, void *, s32, s32) = 0;
        virtual void v3C(s32, s16, s32, void *, s32, s32) = 0;
        virtual void v40() = 0;
        u8 pad4[6];
        s16 unkA;
        s16 unkC;
        s16 unkE;
        s16 unk10;
        s16 unk12;
        s16 unk14;
        s16 unk16;
        s16 unk18;
        u8 pad1A[0x44 - 0x1A];
        s16 unk44;
        s16 unk46;
        s16 unk48;
        s16 unk4A;
        void *unk4C;
        u8 pad50[4];
        u8 unk54;
        u8 pad55[3];
        s32 unk58;
        void *unk5C;
        f32 unk60;
    };
    s16 y_off;
    s16 w, h;
    s16 *rect;
    s16 j;
    void *panel;
    s32 y2;
    s32 flag;
    u8 check;
    u32 var_r0;
    void *item;
    s32 i;
    s32 y;
    s32 x_add;
    u8 var_r3;
    u8 var_r3_2;
    Obj *self;
    void *other;

    self = (Obj *)arg0;
    other = arg1;
    self->v40();
    y_off = (s16)(((s16)(self->unkE - self->unkA) - 0x108) >> 1);
    switch (self->unk54) {
    case 1:
        fn_8008B464(self->unk4C, y_off, -0x62);
        break;
    case 2:
        fn_8008BA80(self->unk4C, y_off, -0x26, 0);
        break;
    }
    self->v14(other);

    h = (s16)(self->unk18 - self->unk14);
    rect = &self->unk44;
    w = (s16)(self->unk16 - self->unk12);
    self->unk44 = 0;
    self->unk46 = 0;
    self->unk48 = w;
    self->unk4A = h;
    fn_8013F748(self, rect, rect);
    rect = &self->unk48;
    fn_8013F748(self, rect, rect);

    fn_8000A258();
    fn_80009C0C(lbl_8036AB9C);
    fn_80009BC0(fn_8013F920, &self->unk44);
    fn_8000A248();

    flag = 0;
    panel = self->unk4C;
    check = flag;
    if (*(u8 *)((u8 *)other + 0x2D) == 0 && *(u8 *)((u8 *)other + 0x2E) == 0) {
        check = 1;
    }
    if (check != 0) {
        if (*(u32 *)((u8 *)other + 0x34) != 0) {
            var_r0 = *(u32 *)((u8 *)*(void **)((u8 *)other + 0x38) + 8);
        } else {
            var_r0 = 0;
        }
        if ((void *)var_r0 == self) {
            flag = 1;
        }
    }

    i = 0;
    y = 0x48;
    for (; i < 0x62; i++) {
        item = fn_80105C5C((u8 *)*(void **)((u8 *)panel + 0x18C) + 0x1C, (u8)i);
        if (item) {
            if (*(u8 *)((u8 *)item + 0x19) != 0) {
                self->v34(y, 8, 0xFF, item, flag, self->v30(item));
                y += 0x6D;
            }
        }
    }

    j = 0x46;
    y2 = 0;
    for (; y2 < 0x62; y2++) {
        item = fn_80105C5C((u8 *)panel + 0x1BC, (u8)y2);
        if (item) {
            if (*(u8 *)((u8 *)item + 0x19) != 0) {
                if (*(u8 *)((u8 *)item + 0x19) != 0) {
                    var_r3 = fn_80105BC0((u8 *)*(void **)((u8 *)self->unk4C + 0x18C) + 0x1C,
                                         *(u8 *)((u8 *)item + 0x18));
                } else {
                    var_r3 = 0;
                }
                if (var_r3 == 0) {
                    if (*(u8 *)((u8 *)item + 0x19) != 0) {
                        var_r3_2 = 0;
                        if (*(u8 *)((u8 *)item + 0x19) != 0 && *(u8 *)((u8 *)item + 0x1A) == 0) {
                            var_r3_2 = 1;
                        }
                    } else {
                        var_r3_2 = 0;
                    }
                    if (var_r3_2 != 0) {
                        self->v38(0x8B, j, 0xFF, item, flag, self->v30(item));
                        j += 0x20;
                    }
                }
            }
        }
    }

    item = (void *)0xFF;
    x_add = 0;
    switch (self->unk58) {
    case 1:
        x_add = (s32)(lbl_8036ABA0 * self->unk60);
        break;
    case 2:
        x_add = 0x20;
        item = (void *)(s32)(lbl_8036ABA4 * self->unk60);
        break;
    }
    y2 = j + (u8)x_add;

    i = 0;
    for (; i < 0x62; i++) {
        y = (s32)fn_80105C5C((u8 *)panel + 0x1BC, (u8)i);
        if (y) {
            if (*(u8 *)((u8 *)y + 0x19) != 0) {
                if (*(u8 *)((u8 *)y + 0x19) != 0) {
                    var_r3 = fn_80105BC0((u8 *)*(void **)((u8 *)self->unk4C + 0x18C) + 0x1C,
                                         *(u8 *)((u8 *)y + 0x18));
                } else {
                    var_r3 = 0;
                }
                if (var_r3 == 0) {
                    if (*(u8 *)((u8 *)y + 0x19) != 0) {
                        var_r3_2 = 0;
                        if (*(u8 *)((u8 *)y + 0x19) != 0 && *(u8 *)((u8 *)y + 0x1A) == 0) {
                            var_r3_2 = 1;
                        }
                    } else {
                        var_r3_2 = 0;
                    }
                    if (var_r3_2 == 0) {
                        switch (self->unk58) {
                        case 1:
                            if (*(u8 *)((u8 *)self->unk5C + 0x18) < *(u8 *)((u8 *)y + 0x18)) {
                                self->v3C(0x8B, (s16)y2, 0xFF, (void *)y, flag, self->v30((void *)y));
                            } else {
                                self->v3C(0x8B, j, 0xFF, (void *)y, flag, self->v30((void *)y));
                            }
                            break;
                        case 2:
                            if (*(u8 *)((u8 *)self->unk5C + 0x18) == *(u8 *)((u8 *)y + 0x18)) {
                                self->v3C(0x8B, j, (s32)item, (void *)y, flag, self->v30((void *)y));
                            } else {
                                self->v3C(0x8B, j, 0xFF, (void *)y, flag, self->v30((void *)y));
                            }
                            break;
                        default:
                            self->v3C(0x8B, j, 0xFF, (void *)y, flag, self->v30((void *)y));
                            break;
                        }
                        y2 += 0x20;
                        j += 0x20;
                    }
                }
            }
        }
    }

    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
}
#pragma global_optimizer on
#pragma cplusplus reset

#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus reset

s32 fn_80105A5C();
#pragma cplusplus on
extern "C" void fn_801547E4(s16, s16, s16, s16, s32, s32, s32, f32);
extern "C" void fn_8017B4A8(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(s32) = 0;
    };
    extern u8 lbl_80278780[];
    extern f32 lbl_8036ABA8;
    u8 *unit;
    s32 num;
    f32 target;
    f32 cur;

    unit = M2C_FIELD(arg0, u8 **, 0x4C);
    num = fn_80105A5C(unit + 0x1BC);
    target = num - fn_80105A5C(M2C_FIELD(unit, u8 **, 0x18C) + 0x1C);
    cur = M2C_FIELD(arg0, f32 *, 0x50);
    if (target < cur) {
        M2C_FIELD(arg0, f32 *, 0x50) = cur - lbl_8036ABA8;
        if (M2C_FIELD(arg0, f32 *, 0x50) < target) {
            M2C_FIELD(arg0, f32 *, 0x50) = target;
        }
        fn_801475FC(lbl_80278780 + 0x87, 0x64);
    } else if (target > cur) {
        M2C_FIELD(arg0, f32 *, 0x50) = cur + lbl_8036ABA8;
        if (M2C_FIELD(arg0, f32 *, 0x50) > target) {
            M2C_FIELD(arg0, f32 *, 0x50) = target;
        }
        fn_801475FC(lbl_80278780 + 0x9E, 0x64);
    }
    ((Obj *)arg0)->v2(arg1);
    fn_801547E4(
        0,
        0,
        M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA),
        M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC),
        M2C_FIELD(M2C_FIELD(unit, u8 **, 0x18C), u8 *, 0x40),
        0xCC,
        0x10,
        M2C_FIELD(arg0, f32 *, 0x50)
    );
}
#pragma cplusplus reset

#pragma use_lmw_stmw on
void fn_8017B5F4(void *arg0, s16 arg1, s16 arg2, u8 arg3, void *arg4, s32 arg5, u8 arg6) {
    M2C_UNK fn_80006B18(s32, s32, M2C_UNK, M2C_UNK, u8);
    M2C_UNK fn_80007220(M2C_UNK, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_8001019C(s16, s16, s32, void *, ...);
    s32 fn_800102BC(M2C_UNK, f32);
    M2C_UNK fn_8005AC24(void *, s32, s32, u8);
    s32 fn_8010586C(void *);
    s32 *fn_8018D900(s32);
    extern u8 lbl_80278780[];
    extern u8 lbl_802F0350[];
    extern f32 lbl_8036AB94;
    extern f32 lbl_8036ABB8;
    
    s16 temp_arg1 = arg1;
    s16 temp_arg2 = arg2;
    u8 temp_arg6 = arg6;
    s32 flag = temp_arg6 != 0;
    s32 sp8;
    s16 off;

    fn_8000A258();
    fn_8000A174(0, (u16) (M2C_FIELD(arg0, s32 *, 0x34) | 3));
    fn_80009B8C(arg3);
    fn_8000A248();
    off = (0x20 - fn_800102BC(-1, lbl_8036AB94)) >> 1;
    fn_8001019C(temp_arg1 + 0x20, temp_arg2 + off, flag, lbl_80278780 + 0xB3, fn_8010586C(arg4));
    fn_80007898(6);
    sp8 = *fn_8018D900(flag);
    fn_80007668(&sp8);
    fn_80007220(1, lbl_8036ABB8);
    fn_80006B18(temp_arg1 + 0x8C, temp_arg2 + off, 0, 0, M2C_FIELD(arg4, u8 *, 0x1A));
    fn_80007884();
    fn_8005AC24(lbl_802F0350, temp_arg1, temp_arg2, M2C_FIELD(arg4, u8 *, 0x19));
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
}
void fn_8017B728(void *arg0, s16 arg1, s16 arg2, s32 arg3, void *arg4, s32 arg5, u8 arg6) {
    void fn_8000A258(void);
    void fn_8000A174(s32, u16);
    void fn_80009B8C(s32);
    void fn_8000A248(void);
    s32 fn_800102BC(s32, f32);
    M2C_UNK fn_8001019C(s16, s16, u8, void *, s32);
    M2C_UNK fn_8005AC24(void *, s16, s16, u8);
    s32 fn_8010586C(void *);
    extern u8 lbl_80278780[];
    extern u8 lbl_802F0350[];
    extern f32 lbl_8036AB94;
    u8 var_r31;
    s16 temp_r28;
    (void)arg5;

    var_r31 = 0;
    if (arg6 != 0) {
        var_r31 = 0x12;
    }
    fn_8000A258();
    fn_8000A174(0, (u16) (M2C_FIELD(arg0, s32 *, 0x34) | 3));
    fn_80009B8C(arg3);
    fn_8000A248();
    temp_r28 = (s16) ((s32) (0x20 - fn_800102BC(-1, lbl_8036AB94)) >> 1);
    fn_8001019C((s16) (arg1 + 0x20), (s16) (arg2 + temp_r28), var_r31, (u8 *)lbl_80278780 + 0xB3, fn_8010586C(arg4));
    fn_8005AC24((void *)lbl_802F0350, arg1, arg2, M2C_FIELD(arg4, u8 *, 0x19));
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
}

s32 fn_8017B8F8(s32 unused, s32 arg1) {
    return arg1 != 0;
}

void fn_8017BE00(void *arg0) {
    M2C_UNK fn_80105D4C(s32, u8, s32);
    s32 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
    fn_80105D4C(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s8 *, 0x3C) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x58) = 0;
}

void fn_8017BF6C(void *arg0) {
    f32 fn_800067BC(s32, s32, f32, f32, f32, f32);
    void fn_80105D4C(s32, u8, s32);
    void fn_8000C188(void *);
    extern f32 lbl_8036AB94;
    extern f32 lbl_8036ABA0;
    extern f32 lbl_8036ABBC;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    f32 temp_f0;

    temp_r0 = *(s32 *)((u8 *)arg0 + 0x34) + 1;
    *(s32 *)((u8 *)arg0 + 0x34) = temp_r0;
    if (temp_r0 >= 0x20) {
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
        temp_f0 = lbl_8036ABBC;
        *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x58) = 2;
        *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x60) = temp_f0;
        temp_r5 = *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x4C);
        fn_80105D4C(temp_r5 + 0x1BC, *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 0x18), temp_r5);
        fn_8000C188(arg0);
        return;
    }
    temp_r4 = *(s32 *)((u8 *)arg0 + 0x34);
    *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x60) =
        fn_800067BC(5, temp_r4, lbl_8036ABBC, lbl_8036AB94, (f32)temp_r4, lbl_8036ABA0);
}

void fn_8017C028(void *arg0) {
    s32 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
    fn_80105D4C(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
}

void fn_8017C05C(void *arg0) {
    f32 fn_800067BC(s32, s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    s32 temp_r0;
    s32 temp_r4;
    void *temp_obj;

    temp_r0 = *(s32 *)((u8 *)arg0 + 0x34) + 1;
    *(s32 *)((u8 *)arg0 + 0x34) = temp_r0;
    if (temp_r0 >= 0x20) {
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
        temp_obj = *(void **)((u8 *)arg0 + 0x30);
        *(s32 *)((u8 *)temp_obj + 0x58) = 0;
        fn_8000C188(arg0);
        return;
    }
    temp_r4 = *(s32 *)((u8 *)arg0 + 0x34);
    *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x60) =
        fn_800067BC(5, temp_r4, lbl_8036ABBC, lbl_8036AB94, (f32)temp_r4, lbl_8036ABA0);
}

void fn_8017C0EC(void *arg0) {
    M2C_UNK fn_80105CEC(s32, u8, s32);
    s32 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
    fn_80105CEC(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s8 *, 0x3C) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x58) = 0;
}

void fn_8017C140(void *arg0) {
    extern f32 lbl_8036AB94;
    void *p;
    s32 v;
    f32 f;

    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    f = lbl_8036AB94;
    p = *(void **)((u8 *)arg0 + 0x30);
    *(s32 *)((u8 *)p + 0x58) = 2;
    v = *(s32 *)((u8 *)arg0 + 0x38);
    p = *(void **)((u8 *)arg0 + 0x30);
    *(s32 *)((u8 *)p + 0x5C) = v;
    p = *(void **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)p + 0x60) = f;
}

void fn_8017C170(void *arg0) {
    f32 fn_800067BC(s32, s32, f32, f32, f32, f32);
    void fn_80105CEC(s32, u8, s32);
    void fn_8000C188(void *);
    extern f32 lbl_8036AB94;
    extern f32 lbl_8036ABA0;
    extern f32 lbl_8036ABBC;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    f32 temp_f0;

    temp_r0 = *(s32 *)((u8 *)arg0 + 0x34) + 1;
    *(s32 *)((u8 *)arg0 + 0x34) = temp_r0;
    if (temp_r0 >= 0x20) {
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
        temp_f0 = lbl_8036AB94;
        *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x58) = 1;
        *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x60) = temp_f0;
        temp_r5 = *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x4C);
        fn_80105CEC(temp_r5 + 0x1BC, *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 0x18), temp_r5);
        fn_8000C188(arg0);
        return;
    }
    temp_r4 = *(s32 *)((u8 *)arg0 + 0x34);
    *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x60) =
        fn_800067BC(5, temp_r4, lbl_8036AB94, lbl_8036ABBC, (f32)temp_r4, lbl_8036ABA0);
}

s32 fn_8017C22C(s32 arg0, u8 arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 r5;
    s32 r6;
    s32 r7;
    
    if (arg1 < 0) {
        return 0;
    }

    if (arg1 >= 0x20) {
        r5 = arg1 >> 5;
        r6 = -(r5 << 5);
        r7 = r5 >> 3;

        if (r7 != 0) {
            do {
                arg0 += 0x20;
                r7 -= 1;
            } while (r7 != 0);
        }

        r5 &= 7;
        if (r5 != 0) {
            do {
                arg0 += 4;
                r5 -= 1;
            } while (r5 != 0);
        }

        arg1 += r6;
    }

    temp_r3 = *(s32*)arg0;
    
    if (temp_r3 & (1 << arg1)) {
        return fn_80019DF0(arg1);
    }

    return 0;
}

void fn_8017C304(void *arg0) {
    s32 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
    fn_80105CEC(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
}

void fn_8017C338(void *arg0) {
    f32 fn_800067BC(s32, s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    s32 temp_r0;
    s32 temp_r4;
    void *temp_obj;

    temp_r0 = *(s32 *)((u8 *)arg0 + 0x34) + 1;
    *(s32 *)((u8 *)arg0 + 0x34) = temp_r0;
    if (temp_r0 >= 0x20) {
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
        temp_obj = *(void **)((u8 *)arg0 + 0x30);
        *(s32 *)((u8 *)temp_obj + 0x58) = 0;
        fn_8000C188(arg0);
        return;
    }
    temp_r4 = *(s32 *)((u8 *)arg0 + 0x34);
    *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x60) =
        fn_800067BC(5, temp_r4, lbl_8036AB94, lbl_8036ABBC, (f32)temp_r4, lbl_8036ABA0);
}

s32 fn_8017C3C8(u8 *arg0) {
    s32 fn_80105A5C(void *);
    s32 num;

    num = fn_80105A5C(arg0 + 0x1BC);
    return num - fn_80105A5C(M2C_FIELD(arg0, u8 **, 0x18C) + 0x1C);
}

void *fn_8017C40C(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80295404[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80295404;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_8017C478(void *arg0) {
    s16 var_r5;
    s16 var_r4;
    s16 var_r6;
    s16 var_r7;
    s16 var_r8;

    var_r8 = *(s16 *)((char *)arg0 + 0xC);
    var_r7 = *(s16 *)((char *)arg0 + 0x10);
    var_r6 = *(s16 *)((char *)arg0 + 0xA);
    var_r5 = *(s16 *)((char *)arg0 + 0xE);

    var_r7 = var_r8 - var_r7;
    var_r7 = (s16)var_r7;
    *(s16 *)((char *)arg0 + 0x12) = 3;
    var_r4 = var_r6 - var_r5;
    var_r4 = (s16)var_r4;
    var_r5 = var_r7 - 5;
    *(s16 *)((char *)arg0 + 0x14) = 5;
    var_r4 = var_r4 - 3;
    *(s16 *)((char *)arg0 + 0x16) = var_r4;
    *(s16 *)((char *)arg0 + 0x18) = var_r5;
}

void fn_8017C4BC(void *arg0) {
    f32 fn_80037818(s32, u8);
    u8 fn_800386B0(s32);
    u8 fn_8003D13C(s32);
    u8 fn_80105BC0(s32, s32);
    void fn_801475FC(void *, s32);
    extern u8 lbl_80278838[];
    extern u8 lbl_80330708[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern f32 lbl_8036ABD8;

    u8 skip;
    u32 buttons;
    u32 can;
    s32 diff;
    s16 field;
    s16 cost;
    s16 next;
    s32 unit;
    s32 limit;

    skip = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        skip = 1;
    }
    if (skip != 0) {
        return;
    }

    {
        void *p = lbl_80367240;
        unit = *(s32 *)((u8 *)arg0 + 0x40);
        buttons = *(u32 *)((u8 *)p + 0x10);
        diff = (u8)fn_8003D13C(unit);
        field = *(s16 *)((u8 *)arg0 + 0x3E);
        diff = diff - field;
    }
    can = (u32)(-diff & ~diff) >> 31;
    if (can != 0) {
        next = field + 1;
        unit = *(s32 *)((u8 *)arg0 + 0x40);
        limit = *(s32 *)(lbl_80330708 + 0x1C);
        if (next == 0) {
            cost = 0;
        } else {
            cost = (s16)(lbl_8036ABD8 + fn_80037818(unit, (u8)next));
            if (fn_80105BC0(unit + 0x1BC, 0x4B) != 0) {
                cost = (s16)((cost * 10) / 7);
            }
            if (fn_80105BC0(unit + 0x1BC, 0xB) != 0) {
                cost = (s16)((s32)(((u32)cost >> 31) + cost) >> 1);
            }
            if (cost < 1) {
                cost = 1;
            }
        }
        can = cost <= limit;
    }
    if ((u8)can != 0 && (buttons & 0x08000008)) {
        field = *(s16 *)((u8 *)arg0 + 0x3E);
        *(s16 *)((u8 *)arg0 + 0x3E) = field + 1;
        next = *(s16 *)((u8 *)arg0 + 0x3E);
        limit = *(s32 *)(lbl_80330708 + 0x1C);
        unit = *(s32 *)((u8 *)arg0 + 0x40);
        if (next == 0) {
            cost = 0;
        } else {
            cost = (s16)(lbl_8036ABD8 + fn_80037818(unit, (u8)next));
            if (fn_80105BC0(unit + 0x1BC, 0x4B) != 0) {
                cost = (s16)((cost * 10) / 7);
            }
            if (fn_80105BC0(unit + 0x1BC, 0xB) != 0) {
                cost = (s16)((s32)(((u32)cost >> 31) + cost) >> 1);
            }
            if (cost < 1) {
                cost = 1;
            }
        }
        *(s16 *)((u8 *)arg0 + 0x3C) = (s16)(limit - cost);
        fn_801475FC(lbl_80278838 + 0x1D, 0x64);
        *(s16 *)((u8 *)arg0 + 0x5A) = 1;
        *((u8 *)arg0 + 0x51) = 1;
        return;
    }

    field = *(s16 *)((u8 *)arg0 + 0x3E);
    if (field > 0 && (buttons & 0x04000004)) {
        *(s16 *)((u8 *)arg0 + 0x3E) = field - 1;
        next = *(s16 *)((u8 *)arg0 + 0x3E);
        limit = *(s32 *)(lbl_80330708 + 0x1C);
        unit = *(s32 *)((u8 *)arg0 + 0x40);
        if (next == 0) {
            cost = 0;
        } else {
            cost = (s16)(lbl_8036ABD8 + fn_80037818(unit, (u8)next));
            if (fn_80105BC0(unit + 0x1BC, 0x4B) != 0) {
                cost = (s16)((cost * 10) / 7);
            }
            if (fn_80105BC0(unit + 0x1BC, 0xB) != 0) {
                cost = (s16)((s32)(((u32)cost >> 31) + cost) >> 1);
            }
            if (cost < 1) {
                cost = 1;
            }
        }
        *(s16 *)((u8 *)arg0 + 0x3C) = (s16)(limit - cost);
        fn_801475FC(lbl_80278838 + 0x1D, 0x64);
        *(s16 *)((u8 *)arg0 + 0x82) = 1;
        *((u8 *)arg0 + 0x79) = 1;
        return;
    }

    diff = (u8)fn_8003D13C(*(s32 *)((u8 *)arg0 + 0x40)) - field;
    can = (u32)(-diff & ~diff) >> 31;
    if (can != 0) {
        unit = *(s32 *)((u8 *)arg0 + 0x40);
        next = (s16)(*(s16 *)((u8 *)arg0 + 0x3E) + 1);
        limit = *(s32 *)(lbl_80330708 + 0x1C);
        if (next == 0) {
            cost = 0;
        } else {
            cost = (s16)(lbl_8036ABD8 + fn_80037818(unit, (u8)next));
            if (fn_80105BC0(unit + 0x1BC, 0x4B) != 0) {
                cost = (s16)((cost * 10) / 7);
            }
            if (fn_80105BC0(unit + 0x1BC, 0xB) != 0) {
                cost = (s16)((s32)(((u32)cost >> 31) + cost) >> 1);
            }
            if (cost < 1) {
                cost = 1;
            }
        }
        can = cost <= limit;
    }
    if ((u8)can != 0 && (buttons & 0x02000002)) {
        goto check_inc;
        do {
            *(s16 *)((u8 *)arg0 + 0x3E) = (s16)(*(s16 *)((u8 *)arg0 + 0x3E) + 1);
            next = *(s16 *)((u8 *)arg0 + 0x3E);
            limit = *(s32 *)(lbl_80330708 + 0x1C);
            unit = *(s32 *)((u8 *)arg0 + 0x40);
            if (next == 0) {
                cost = 0;
            } else {
                cost = (s16)(lbl_8036ABD8 + fn_80037818(unit, (u8)next));
                if (fn_80105BC0(unit + 0x1BC, 0x4B) != 0) {
                    cost = (s16)((cost * 10) / 7);
                }
                if (fn_80105BC0(unit + 0x1BC, 0xB) != 0) {
                    cost = (s16)((s32)(((u32)cost >> 31) + cost) >> 1);
                }
                if (cost < 1) {
                    cost = 1;
                }
            }
            *(s16 *)((u8 *)arg0 + 0x3C) = (s16)(limit - cost);
        check_inc:
            if ((s32)((u8)fn_800386B0(*(s32 *)((u8 *)arg0 + 0x40)) + *(s16 *)((u8 *)arg0 + 0x3E)) == 0x64) {
                break;
            }
            field = *(s16 *)((u8 *)arg0 + 0x3E);
            diff = (u8)fn_8003D13C(*(s32 *)((u8 *)arg0 + 0x40)) - field;
            can = (u32)(-diff & ~diff) >> 31;
            if (can != 0) {
                next = field + 1;
                unit = *(s32 *)((u8 *)arg0 + 0x40);
                limit = *(s32 *)(lbl_80330708 + 0x1C);
                if (next == 0) {
                    cost = 0;
                } else {
                    cost = (s16)(lbl_8036ABD8 + fn_80037818(unit, (u8)next));
                    if (fn_80105BC0(unit + 0x1BC, 0x4B) != 0) {
                        cost = (s16)((cost * 10) / 7);
                    }
                    if (fn_80105BC0(unit + 0x1BC, 0xB) != 0) {
                        cost = (s16)((s32)(((u32)cost >> 31) + cost) >> 1);
                    }
                    if (cost < 1) {
                        cost = 1;
                    }
                }
                can = cost <= limit;
            }
        } while ((u8)can != 0);
        fn_801475FC(lbl_80278838 + 0x1D, 0x64);
        *(s16 *)((u8 *)arg0 + 0x5A) = 1;
        *((u8 *)arg0 + 0x51) = 1;
        return;
    }

    if (*(s16 *)((u8 *)arg0 + 0x3E) > 0 && (buttons & 0x01000001)) {
        goto check_dec;
        do {
            *(s16 *)((u8 *)arg0 + 0x3E) = (s16)(*(s16 *)((u8 *)arg0 + 0x3E) - 1);
            next = *(s16 *)((u8 *)arg0 + 0x3E);
            limit = *(s32 *)(lbl_80330708 + 0x1C);
            unit = *(s32 *)((u8 *)arg0 + 0x40);
            if (next == 0) {
                cost = 0;
            } else {
                cost = (s16)(lbl_8036ABD8 + fn_80037818(unit, (u8)next));
                if (fn_80105BC0(unit + 0x1BC, 0x4B) != 0) {
                    cost = (s16)((cost * 10) / 7);
                }
                if (fn_80105BC0(unit + 0x1BC, 0xB) != 0) {
                    cost = (s16)((s32)(((u32)cost >> 31) + cost) >> 1);
                }
                if (cost < 1) {
                    cost = 1;
                }
            }
            *(s16 *)((u8 *)arg0 + 0x3C) = (s16)(limit - cost);
        check_dec:
            if ((s32)((u8)fn_800386B0(*(s32 *)((u8 *)arg0 + 0x40)) + *(s16 *)((u8 *)arg0 + 0x3E)) == 0x64) {
                break;
            }
        } while (*(s16 *)((u8 *)arg0 + 0x3E) > 0);
        fn_801475FC(lbl_80278838 + 0x1D, 0x64);
        *(s16 *)((u8 *)arg0 + 0x82) = 1;
        *((u8 *)arg0 + 0x79) = 1;
    }
}

void fn_8017CE1C(void *self, void *arg1) {
    u32 OSGetTick(void);
    void fn_80006B18(s16, s16, s32, s32, s16);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_8000A174(s32, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s16, s16, s32, s32, s32, void *, ...);
    void fn_8001019C(s16, s16, s32, void *, ...);
    s32 fn_800102BC(s32, f32);
    s32 fn_80010B78(void *, s32, f32);
    u8 fn_8003863C(void *);
    u8 fn_800386B0(void *);
    void fn_80154C04(s32, s32, s16, s16, s32, s32);
    void fn_80154F1C(s16, s16, s32, s16, s32);
    void fn_8015512C(s16, s32, s32, s32);
    f64 fn_802380D0(f32);
    f64 fabs(f64);
    extern u16 lbl_80278838[];
    extern f32 lbl_8036ABC0;
    extern f32 lbl_8036ABDC;
    extern f32 lbl_8036ABE0;
    extern f32 lbl_8036ABE4;
    extern f32 lbl_8036ABE8;
    extern f32 lbl_8036ABEC;
    extern f32 lbl_8036ABF0;
    extern f32 lbl_8036ABF4;
    void *str;
    void *unit;
    void *p;
    s16 x;
    s16 y;
    s16 halfW;
    s16 t26;
    s16 t29;
    s16 t30;
    s32 t31;
    u8 flag;
    u8 dig;
    u8 v;
    f32 ftmp;
    f32 f2;

    (*(void (**)(void *))(*(u32 *)self + 0x10))(self);
    fn_80154C04(0, 0,
        (s16)(*(s16 *)((u8 *)self + 0xE) - *(s16 *)((u8 *)self + 0xA)),
        (s16)(*(s16 *)((u8 *)self + 0x10) - *(s16 *)((u8 *)self + 0xC)),
        0xFF, 0x10);
    fn_8000A258();
    fn_80009C0C(lbl_8036ABDC);
    fn_8000A174(0, (u16)(*(u32 *)((u8 *)self + 0x34) | 3));
    fn_8000A248();
    str = fn_8000E0E4((u8 *)lbl_80278838 + 0x36);
    fn_8001019C(0x2A, (s16)(((0x20 - fn_800102BC(-1, lbl_8036ABE0)) >> 1) + 0x10), 0x10, str);
    x = (s16)((s16)(*(s16 *)((u8 *)self + 0xE) - *(s16 *)((u8 *)self + 0xA)) - 0x34);
    y = (s16)(((0x20 - fn_800102BC(-1, lbl_8036ABE0)) >> 1) + 0x10);
    fn_80007898(6);
    fn_80006B18(x, y, 0, 0, *(s16 *)((u8 *)self + 0x3C));
    fn_80007884();
    fn_8001019C(x, y, 0x10, (u8 *)lbl_80278838 + 0x49);
    (*(void (**)(void *, void *))(*(u32 *)self + 0x14))(self, arg1);
    fn_8000A258();
    fn_80009C0C(lbl_8036ABDC);
    fn_8000A174(0, (u16)(*(u32 *)((u8 *)self + 0x34) | 3));
    fn_8000A248();
    t30 = (s16)((s16)(*(s16 *)((u8 *)self + 0x16) - *(s16 *)((u8 *)self + 0x12)) >> 2);
    t26 = (s16)(*(s16 *)((u8 *)self + 0x18) - *(s16 *)((u8 *)self + 0x14));
    ftmp = (f32)(fn_800102BC(-1, lbl_8036ABE0) >> 1);
    t29 = (s16)(lbl_8036ABC0 * (f32)t26 - ftmp);
    t26 = (s16)(lbl_8036ABC0 * (f32)(s16)(*(s16 *)((u8 *)self + 0x18) - *(s16 *)((u8 *)self + 0x14)) - lbl_8036ABE4);
    fn_8001019C((s16)(t30 - 0x20), t29, 0x10, (u8 *)lbl_80278838 + 0x4B);
    fn_80154F1C((s16)(t30 + 0x20), (s16)(t26 + 2), 2, *(s16 *)((u8 *)self + 0x3E), 0x10);
    flag = 0;
    dig = 0;
    if (*(u8 *)((u8 *)arg1 + 0x2D) == 0 && *(u8 *)((u8 *)arg1 + 0x2E) == 0) {
        dig = 1;
    }
    if (dig != 0) {
        if (*(u32 *)((u8 *)arg1 + 0x34) != 0) {
            p = *(void **)((u8 *)(*(void **)((u8 *)arg1 + 0x38)) + 8);
        } else {
            p = 0;
        }
        if (p == self) {
            flag = 1;
        }
    }
    unit = *(void **)((u8 *)self + 0x40);
    halfW = (s16)((s16)(*(s16 *)((u8 *)self + 0x16) - *(s16 *)((u8 *)self + 0x12)) >> 1);
    fn_8000A258();
    fn_8000A174(0, (u16)(*(u32 *)((u8 *)self + 0x34) | 3));
    fn_8000A248();
    str = fn_8000E0E4((u8 *)lbl_80278838 + 0x4D);
    t26 = (s16)fn_80010B78(str, -1, lbl_8036ABE0);
    fn_8001003C(halfW, t29, 0x10, 1, 0, str, lbl_8036ABE0, lbl_8036ABE8);
    halfW = (s16)(t26 + halfW + 4);
    if (fn_800386B0(unit) != 0xFF && (s32)(fn_800386B0(unit) + *(s16 *)((u8 *)self + 0x3E)) >= 0x64) {
        v = *(u8 *)((u8 *)unit + 0x19A);
        dig = 1;
        if ((s8)v < 0x14) {
            dig = (u8)((s8)v + 1);
        }
        fn_8001003C(halfW, t29, 6, 1, 0, (u8 *)lbl_80278838 + 0x54, dig, lbl_8036ABE0, lbl_8036ABE8);
        ftmp = (f32)((OSGetTick() / (*(u32 *)0x800000F8 / 4000)) % 1000) / lbl_8036ABEC;
        if (flag != 0) {
            f2 = (f32)fabs((f64)(lbl_8036ABF4 * (f32)fn_802380D0(lbl_8036ABF0 * ftmp)));
        } else {
            f2 = lbl_8036ABE8;
        }
        fn_8015512C((s16)(halfW + 0x18), (s32)((f32)t29 - f2), 1, 0x10);
    } else {
        fn_8001003C(halfW, t29, 1, 1, 0, (u8 *)lbl_80278838 + 0x54, (s8)*(u8 *)((u8 *)unit + 0x19A), lbl_8036ABE0, lbl_8036ABE8);
    }
    halfW = (s16)(halfW + 0x30);
    fn_8000A258();
    fn_8000A174(0, (u16)(*(u32 *)((u8 *)self + 0x34) | 3));
    fn_8000A248();
    str = fn_8000E0E4((u8 *)lbl_80278838 + 0x58);
    t31 = fn_80010B78(str, -1, lbl_8036ABE0);
    fn_8001003C(halfW, t29, 0x10, 1, 0, str, lbl_8036ABE0, lbl_8036ABE8);
    t26 = *(s16 *)((u8 *)self + 0x3E);
    halfW = (s16)(t31 + halfW + 4);
    if (t26 != 0) {
        v = (u8)(fn_800386B0(unit) + t26);
        if (v >= 0x64) {
            if (fn_8003863C(unit) == 0x27) {
                v = 0xFF;
            } else {
                v = (u8)(v - 0x64);
            }
        }
        if (v != 0xFF) {
            fn_8001003C(halfW, t29, 6, 1, 0, (u8 *)lbl_80278838 + 0x54, v, lbl_8036ABE0, lbl_8036ABE8);
        } else {
            fn_8001003C(halfW, t29, 6, 1, 0, (u8 *)lbl_80278838 + 0x5F, lbl_8036ABE0, lbl_8036ABE8);
        }
    } else if (fn_800386B0(unit) != 0xFF) {
        fn_8001003C(halfW, t29, 1, 1, 0, (u8 *)lbl_80278838 + 0x54, fn_800386B0(unit), lbl_8036ABE0, lbl_8036ABE8);
    } else {
        fn_8001003C(halfW, t29, 1, 1, 0, (u8 *)lbl_80278838 + 0x5F, lbl_8036ABE0, lbl_8036ABE8);
    }
}

void fn_8017D4B8(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, s32 *, s16 *);
    s16 sp8;
    s16 spA;
    s32 spC;
    s16 r8;
    s16 r7;
    s16 r6;
    s16 r0;

    r8 = *(s16 *)((u8 *)arg1 + 0xC);
    r7 = *(s16 *)((u8 *)arg1 + 0x10);
    r6 = *(s16 *)((u8 *)arg1 + 0xA);
    r0 = *(s16 *)((u8 *)arg1 + 0xE);
    spA = (s16)((s16)(r7 - r8) >> 1);
    sp8 = (s16)((s16)(r0 - r6) >> 2);
    *arg0 = *fn_8013F748(arg1, &spC, &sp8);
}

s16 fn_8017D52C(struct { u8 pad[0x40]; s32 f40; } *arg0, s16 arg1) {
    f32 fn_80037818(s32, u8);
    u8 fn_80105BC0(s32, M2C_UNK);
    extern f32 lbl_8036ABD8;
    s32 temp_r31;
    s16 var_r30;

    temp_r31 = arg0->f40;
    if (arg1 == 0) {
        var_r30 = 0;
    } else {
        var_r30 = (s16) (lbl_8036ABD8 + fn_80037818(temp_r31, (u8) arg1));
        if (fn_80105BC0(temp_r31 + 0x1BC, 0x4B) != 0) {
            var_r30 = (s16) ((var_r30 * 0xA) / 7);
        }
        if (fn_80105BC0(temp_r31 + 0x1BC, 0xB) != 0) {
            var_r30 = (s16) ((s32) (((u32) var_r30 >> 0x1FU) + var_r30) >> 1);
        }
        if (var_r30 < 1) {
            var_r30 = 1;
        }
    }
    return var_r30;
}

s16 fn_8017D604(s32 arg0, s16 arg1) {
    f32 fn_80037818(u8);
    u8 fn_80105BC0(s32, M2C_UNK);
    extern f32 lbl_8036ABD8;
    s16 var_r31;

    if (arg1 == 0) {
        return 0;
    }
    var_r31 = (s16) (lbl_8036ABD8 + fn_80037818((u8) arg1));
    if (fn_80105BC0(arg0 + 0x1BC, 0x4B) != 0) {
        var_r31 = (s16) ((var_r31 * 0xA) / 7);
    }
    if (fn_80105BC0(arg0 + 0x1BC, 0xB) != 0) {
        var_r31 = (s16) ((s32) (((u32) var_r31 >> 0x1FU) + var_r31) >> 1);
    }
    if (var_r31 < 1) {
        var_r31 = 1;
    }
    return var_r31;
}

u32 fn_8017D6D8(void *arg0) {
    f32 fn_80037818(s32, u8);
    u8 fn_8003D13C(s32);
    u8 fn_80105BC0(s32, s32);
    extern f32 lbl_8036ABD8;
    extern u8 lbl_80330708[];
    s32 temp_r31;
    s32 temp_r30;
    s16 var_r29;
    s32 diff;
    u32 var_r3;
    s16 field;
    s16 temp_r0;

    diff = (u8)fn_8003D13C(*(s32 *)((u8 *)arg0 + 0x40));
    field = *(s16 *)((u8 *)arg0 + 0x3E);
    diff = diff - field;
    var_r3 = (u32)(-diff & ~diff) >> 31;
    if (var_r3 != 0) {
        temp_r0 = field + 1;
        temp_r30 = *(s32 *)((u8 *)arg0 + 0x40);
        temp_r31 = *(s32 *)(lbl_80330708 + 0x1C);
        if (temp_r0 == 0) {
            var_r29 = 0;
        } else {
            var_r29 = (s16)(lbl_8036ABD8 + fn_80037818(temp_r30, (u8)temp_r0));
            if (fn_80105BC0(temp_r30 + 0x1BC, 0x4B) != 0) {
                var_r29 = (s16)((var_r29 * 10) / 7);
            }
            if (fn_80105BC0(temp_r30 + 0x1BC, 0xB) != 0) {
                var_r29 = (s16)((s32)(((u32)var_r29 >> 31) + var_r29) >> 1);
            }
            if (var_r29 < 1) {
                var_r29 = 1;
            }
        }
        var_r3 = var_r29 <= temp_r31;
    }
    return var_r3;
}

#pragma cplusplus on
extern "C" void fn_8017D9D8(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2) {
    void fn_80007538(void);
    void fn_80007588(void);
    void fn_800075D8(void);
    void fn_80007668(s32 *);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007870(f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009F90(s32, s32, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    extern f32 lbl_8036AC08;
    struct Obj {
        virtual void m08() = 0;
        virtual void m0C() = 0;
        virtual void m10() = 0;
        virtual s32 m14() = 0;
        virtual s16 m18() = 0;
        virtual s16 m1C() = 0;
        virtual s16 m20() = 0;
        virtual s16 m24() = 0;
    };
    Obj *obj;
    s32 sp8;
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f28;
    s32 temp_r0;

    obj = (Obj *)arg0;
    fn_8000A258();
    fn_80009F90(*(s32 *)((u8 *)arg0 + 4), obj->m14(), (u16)(arg1 | 1));
    fn_80009C0C(*(f32 *)((u8 *)arg0 + 0x24));
    fn_8000A248();
    temp_f31 = (f32)obj->m20();
    temp_f30 = (f32)obj->m24();
    temp_f29 = (f32)obj->m18();
    temp_f28 = (f32)obj->m1C();
    fn_80007898(2);
    fn_80007870(farg2);
    fn_800077D8(farg0, farg1, temp_f31, temp_f30);
    fn_800077B0((f32)arg2 * temp_f29, lbl_8036AC08, temp_f29, temp_f28);
    fn_800075D8();
    sp8 = *(s32 *)((u8 *)arg0 + 0x20);
    fn_80007668(&sp8);
    temp_r0 = *(s32 *)((u8 *)arg0 + 8);
    switch (temp_r0) {
    case 3:
        fn_80007588();
        break;
    case 1:
        fn_80007538();
        fn_80007538();
        break;
    case 2:
        fn_80007538();
        break;
    case 0:
        break;
    }
    fn_80007884();
    temp_f31 = -*(f32 *)((u8 *)arg0 + 0x24);
    fn_8000A258();
    fn_80009C0C(temp_f31);
    fn_8000A248();
}
#pragma cplusplus reset

void fn_8017DEE8(void *arg0) {
    void *x = *(void **)((u8 *)arg0 + 4);
    if (x != NULL) {
        fn_8006D8E8(x);
    }
}

void fn_8017DF14(void *arg0) {
    s32 fn_8006D948(u8 *);
    extern u8 lbl_802788A0[];
    *(s32 *)((u8 *)arg0 + 4) = fn_8006D948(lbl_802788A0);
}

s32 fn_8017DF4C(void) {
    return 0;
}

s32 fn_8017E08C(void) {
    return fn_8000C0C0(&lbl_80295580) != 0;
}

#pragma opt_strength_reduction off
void fn_8017E0C0(void *arg0, s32 arg1, s32 arg2) {
    void fn_8017E1B8(void *, u32);
    M2C_UNK fn_8000A388(void *, void *, void *);
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    void *fn_8000CAF0(void *, s32);
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r3;
    if (arg0 != NULL) {
        fn_8000A388(lbl_80295580, fn_8017E1B8, arg0);
        temp_r3 = fn_8000CAF0(lbl_80295580, arg2);
        M2C_FIELD(temp_r3, void **, 0x30) = arg0;
        M2C_FIELD(temp_r3, f32 *, 0x40) = M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x30), f32 *, 4);
        M2C_FIELD(temp_r3, f32 *, 0x44) = (f32) arg1 + M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x30), f32 *, 4);
        M2C_FIELD(temp_r3, s32 *, 0x34) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x38) = arg1;
        temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x38);
        if (temp_r0 > 0) {
            M2C_FIELD(temp_r3, s32 *, 0x38) = temp_r0 * 4;
        }
        if (M2C_FIELD(temp_r3, s32 *, 0x38) == 0) {
            fn_8000C070(temp_r3, 0x63);
        }
        temp_r0_2 = M2C_FIELD(temp_r3, s32 *, 0x38);
        if (temp_r0_2 < 0) {
            M2C_FIELD(temp_r3, s32 *, 0x38) = (s32) ((u32) temp_r0_2 * 0xFFFFFFFFU);
        }
    }
}
#pragma opt_strength_reduction reset
void fn_8017E1B8(void *arg0, u32 arg1) {
    if (*(u32 *)((u8 *)arg0 + 0x30) == arg1) {
        fn_8000C60C();
    }
}

void fn_8017E1E4(void *arg0) {
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_801475FC(void *, s32);
    void fn_8000C188(void *);
    extern u8 lbl_802788B8[];
    void *temp_r31;
    s32 temp;

    temp_r31 = arg0;
    *(s32 *)((u8 *)temp_r31 + 0x34) = *(s32 *)((u8 *)temp_r31 + 0x34) + 1;
    *(f32 *)((u8 *)*(void **)((u8 *)temp_r31 + 0x30) + 4) = fn_80059F64(
        *(f32 *)((u8 *)temp_r31 + 0x40),
        *(f32 *)((u8 *)temp_r31 + 0x44),
        (f32)*(s32 *)((u8 *)temp_r31 + 0x38),
        (f32)*(s32 *)((u8 *)temp_r31 + 0x34));
    if (*(f32 *)((u8 *)temp_r31 + 0x44) > *(f32 *)((u8 *)temp_r31 + 0x40)) {
        temp = *(s32 *)((u8 *)temp_r31 + 0x34);
        if (temp & 1) {
            fn_801475FC(lbl_802788B8 + 0x10E, 0x64);
        }
    }
    if (*(s32 *)((u8 *)temp_r31 + 0x34) >= *(s32 *)((u8 *)temp_r31 + 0x38)) {
        fn_8000C188(temp_r31);
    }
}

void fn_8017E2AC(void *arg0) {
    f32 temp = *(f32*)((u8*)arg0 + 0x44);
    *(f32*)((u8*)*(void**)((u8*)arg0 + 0x30) + 0x4) = temp;
}

#pragma optimization_level 2
void fn_8017E2BC(void) {
    void *fn_8000C0C0(void *);
    extern u16 lbl_80295550[24]; // 48 bytes / 2 bytes per u16 = 24

    void *temp_r3;
    void *temp_r6;
    void *temp_r6_2;

    temp_r3 = fn_8000C0C0(lbl_80295550);
    if (temp_r3 != NULL) {
        temp_r6 = *(void **)((u8 *)temp_r3 + 0x38);
        if (temp_r6 != NULL) {
            *(u8 *)((u8 *)temp_r6 + 0x43) = 2;
            *(u8 *)((u8 *)temp_r6 + 0x42) = 0xF;
            *(u8 *)((u8 *)temp_r6 + 0x41) = 0;
        }
        temp_r6_2 = *(void **)((u8 *)temp_r3 + 0x3C);
        if (temp_r6_2 != NULL) {
            *(u8 *)((u8 *)temp_r6_2 + 0x43) = 2;
            *(u8 *)((u8 *)temp_r6_2 + 0x42) = 0xF;
            *(u8 *)((u8 *)temp_r6_2 + 0x41) = 0;
        }
    }
}
#pragma optimization_level 4
s32 fn_8017E328(void) {
    extern u16 lbl_80295550[];
    s32 v = fn_8000C0C0(lbl_80295550);
    return v != 0;
}

void fn_8017E35C(void) {
    u32 fn_8000C0C0(void *);
    void fn_8000C070(u32, s32);
    extern u8 lbl_80295550[];
    u32 temp;

    temp = fn_8000C0C0(lbl_80295550);
    if (temp != 0) {
        fn_8000C070(temp, 0);
    }
}

void fn_8017E394(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *fn_8000CAF0(void *, void *);
    void fn_8017E5B0(void *, void *, void *, void *);
    extern u8 lbl_80295550[];

    fn_8017E5B0(fn_8000CAF0(lbl_80295550, arg2), arg0, arg1, arg3);
}

void fn_8017E3F8(void *arg0) {
    f32 fn_80059F64(u8, f32, f32, f32, f32);
    void fn_8000C188(void);
    extern f64 lbl_8036AC50;
    extern f32 lbl_8036AC2C;
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC4C;
    u8 tmp;
    u8 val;
    s8 result;

    tmp = *(u8 *)((u8 *)arg0 + 0x31);
    *(u8 *)((u8 *)arg0 + 0x31) = tmp + 1;
    if (*(u8 *)((u8 *)arg0 + 0x31) == 0x10) {
        *(u8 *)((u8 *)arg0 + 0x31) = 0x10;
        fn_8000C188();
    }
    val = *(u8 *)((u8 *)arg0 + 0x31);
    result = (s8)fn_80059F64(val, lbl_8036AC2C, lbl_8036AC30, lbl_8036AC4C, (f32)(u32)val);
    if (*(void **)((u8 *)arg0 + 0x38) != NULL) {
        *(s8 *)(*(u8 **)((u8 *)arg0 + 0x38) + 0x40) = result;
    }
    if (*(void **)((u8 *)arg0 + 0x3C) != NULL) {
        *(s8 *)(*(u8 **)((u8 *)arg0 + 0x3C) + 0x40) = result;
    }
}

void fn_8017E49C(void *arg0) {
    f32 fn_80059F64(u8, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern f32 lbl_8036AC2C;
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC58;
    s8 temp_r0;
    u8 temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    M2C_FIELD(arg0, u8 *, 0x31) = (u8) (M2C_FIELD(arg0, u8 *, 0x31) + 1);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x31) == 8) {
        M2C_FIELD(arg0, u8 *, 0x31) = 8U;
        fn_8000C188(arg0);
    }
    temp_r3 = M2C_FIELD(arg0, u8 *, 0x31);
    temp_r0 = (s8) fn_80059F64(temp_r3, lbl_8036AC30, lbl_8036AC2C, lbl_8036AC58, (f32) temp_r3);
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x38);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, s8 *, 0x40) = temp_r0;
    }
    temp_r3_3 = M2C_FIELD(arg0, void **, 0x3C);
    if (temp_r3_3 != NULL) {
        M2C_FIELD(temp_r3_3, s8 *, 0x40) = temp_r0;
    }
}

void fn_8017E540(u8 *arg0) {
    void fn_8000C60C(void *);
    void fn_8006D8E8(void *);
    s32 i;
    u8 *p;
    void *tmp;

    i = 0;
    p = arg0;
    do {
        tmp = *(void **)(p + 0x38);
        if (tmp != NULL) {
            fn_8000C60C(tmp);
        }
        i += 1;
        p += 4;
    } while (i < 2);

    fn_8006D8E8(*(void **)(arg0 + 0x34));
    *(void **)(arg0 + 0x34) = NULL;
}

#pragma use_lmw_stmw on
void fn_8017E5B0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *fn_8000CAF0(void *, void *);
    s32 fn_8006D948(void *);
    void fn_8009822C(void *, s32);
    extern u8 lbl_802788B8[];
    extern u8 lbl_80295538[];
    extern f32 lbl_8036AC30;
    extern f64 lbl_8036AC38;

    typedef struct {
        f32 x, y, z;
    } Vec3;
    s32 slot[2];
    Vec3 tmp;
    Vec3 tmp2;
    Vec3 tmp3;
    Vec3 sp28;
    Vec3 sp1C;
    Vec3 sp10;
    s32 a1;
    s32 a2;
    s32 count;
    s32 max_y;
    s32 a3;
    s32 min_y;
    s32 y;
    s32 i;
    void *walk;
    s32 *xs;

    a3 = arg3;
    a1 = arg1;
    a2 = arg2;
    *(s8 *)((u8 *)arg0 + 0x30) = (s8)a3;
    *(u8 *)((u8 *)arg0 + 0x31) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = fn_8006D948((u8 *)lbl_802788B8 + 0x122);
    y = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    min_y = 0x3e8;
    max_y = -0x3e8;
    count = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x3c) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = a1;
    *(s32 *)((u8 *)arg0 + 0x44) = a2;
    switch (a3) {
    case 0:
        i = 0;
        walk = arg0;
        do {
            if (*(u32 *)((u8 *)walk + 0x40) != 0) {
                fn_8009822C(&sp28, *(s32 *)((u8 *)walk + 0x40));
                tmp = sp28;
                if ((f32)min_y > tmp.y) {
                    min_y = (s32)tmp.y;
                }
                if ((f32)max_y < tmp.y) {
                    max_y = (s32)tmp.y;
                }
                count += 1;
            }
            i += 1;
            walk = (u8 *)walk + 4;
        } while (i < 2);
        if (max_y < 0xa0 || max_y > 0x118) {
            if (min_y < 0xa0) {
                y = 0xa0;
            } else {
                y = min_y - 0x8c;
            }
        } else {
            y = max_y + 0x3c;
        }
        break;
    case 2:
        y = 0xa0;
        break;
    case 3:
        y = 0x140;
        break;
    case 1:
        y = 0x28;
        break;
    }
    slot[0] = 0xa8;
    xs = slot;
    slot[1] = 0xa8;
    if (count == 2) {
        fn_8009822C(&sp1C, *(s32 *)((u8 *)arg0 + 0x40));
        tmp2 = sp1C;
        fn_8009822C(&sp10, *(s32 *)((u8 *)arg0 + 0x44));
        tmp3 = sp10;
        if (tmp2.x > tmp3.x) {
            slot[0] = 0x133;
            slot[1] = 0x20;
        } else {
            slot[0] = 0x20;
            slot[1] = 0x133;
        }
    }
    walk = arg0;
    i = 0;
    do {
        if (*(u32 *)((u8 *)walk + 0x40) != 0) {
            void *obj;
            f32 scale;
            s32 xv;
            s32 zero;
            obj = fn_8000CAF0(lbl_80295538, arg0);
            scale = lbl_8036AC30;
            xv = *xs;
            zero = 0;
            *(f32 *)((u8 *)obj + 0x34) = scale;
            *(f32 *)((u8 *)obj + 0x30) = scale;
            *(s32 *)((u8 *)obj + 0x38) = zero;
            *(s32 *)((u8 *)obj + 0x3c) = zero;
            *(u8 *)((u8 *)obj + 0x40) = zero;
            *(u8 *)((u8 *)obj + 0x41) = zero;
            *(u8 *)((u8 *)obj + 0x42) = zero;
            *(u8 *)((u8 *)obj + 0x43) = zero;
            *(u8 *)((u8 *)obj + 0x44) = zero;
            *(u8 *)((u8 *)obj + 0x45) = zero;
            *(void **)((u8 *)walk + 0x38) = obj;
            *(s32 *)((u8 *)*(void **)((u8 *)walk + 0x38) + 0x3c) = *(s32 *)((u8 *)arg0 + 0x34);
            *(s32 *)((u8 *)*(void **)((u8 *)walk + 0x38) + 0x38) = *(s32 *)((u8 *)walk + 0x40);
            obj = *(void **)((u8 *)walk + 0x38);
            *(f32 *)((u8 *)obj + 0x30) = (f32)xv;
            *(f32 *)((u8 *)obj + 0x34) = (f32)y;
        }
        i += 1;
        xs += 1;
        walk = (u8 *)walk + 4;
    } while (i < 2);
}
void fn_8017E8A0(void) {
    M2C_UNK fn_8017E8C0();
    fn_8017E8C0();
}

void fn_8017E8C0(void *arg0) {
    M2C_UNK fn_800075D8();
    M2C_UNK fn_8000770C(f32, f32, f32, f32, f32, f32);
    M2C_UNK fn_80009B28();
    M2C_UNK fn_80009F90(u32, s32, M2C_UNK);
    M2C_UNK fn_8001019C(s16, M2C_UNK, M2C_UNK, u32);
    s32 fn_80010B78(u32, M2C_UNK, f32);
    M2C_UNK fn_8005926C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
    f32 fn_80059EB8(u8, u8, f32, f32);
    f32 fn_80059F64(u8, f32, f32, f32);
    u32 fn_80098170(void *);
    s32 fn_800981D0();
    M2C_UNK fn_8017EE3C(u32, u8, M2C_UNK, s32, s32, M2C_UNK, f32, f32);
    M2C_UNK fn_802380D0(f32);
    M2C_UNK fn_80238638();
    extern f32 lbl_8036AC2C;
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC34;
    extern f32 lbl_8036AC40;
    extern f32 lbl_8036AC48;
    extern f32 lbl_8036AC5C;
    extern f32 lbl_8036AC60;
    extern f32 lbl_8036AC64;
    extern f32 lbl_8036AC68;
    extern f32 lbl_8036AC6C;
    extern f32 lbl_8036AC70;
    extern f32 lbl_8036AC74;
    extern f32 lbl_8036AC78;
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f3;
    s32 temp_r24;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r29;
    s32 temp_r31;
    u32 temp_r23;
    u32 temp_r26_2;
    u32 temp_r28;
    u32 temp_r30;
    u32 temp_r31_2;
    u32 temp_r3_2;
    u8 temp_r26_3;
    u8 temp_r28_2;
    u8 temp_r30_2;
    u8 temp_r3;
    u8 temp_r4_2;
    void *temp_r4;

    if (((void *) M2C_FIELD(arg0, void **, 0x38) != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) && ((u8) M2C_FIELD(arg0, u8 *, 0x40) != 0)) {
        temp_r29 = fn_800981D0();
        temp_r28 = fn_80098170(M2C_FIELD(arg0, void **, 0x38));
        temp_r4 = M2C_FIELD(arg0, void **, 0x38);
        temp_r27 = (s32) M2C_FIELD(temp_r4, f32 *, 4);
        temp_r26 = (s32) M2C_FIELD(temp_r4, f32 *, 8);
        temp_r25 = (s32) (M2C_FIELD(arg0, f32 *, 0x30) + lbl_8036AC30);
        temp_r24 = (s32) (M2C_FIELD(arg0, f32 *, 0x34) + lbl_8036AC30);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x42) != 0) {
            M2C_FIELD(arg0, u8 *, 0x41) = (u8) (M2C_FIELD(arg0, u8 *, 0x41) + 1);
            temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x42);
            temp_f31 = fn_80059F64(temp_r4_2, (lbl_8036AC34 * (f32) temp_r4_2) / lbl_8036AC40, (f32) temp_r4_2, (f32) M2C_FIELD(arg0, u8 *, 0x41));
            fn_80238638();
            fn_802380D0(temp_f31);
            if ((u8) M2C_FIELD(arg0, u8 *, 0x41) >= (u8) M2C_FIELD(arg0, u8 *, 0x42)) {
                M2C_FIELD(arg0, u8 *, 0x42) = 0U;
            }
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x45) != 0) {
            M2C_FIELD(arg0, u8 *, 0x44) = (u8) (M2C_FIELD(arg0, u8 *, 0x44) + 1);
            temp_f1 = fn_80059EB8(M2C_FIELD(arg0, u8 *, 0x45), M2C_FIELD(arg0, u8 *, 0x44), lbl_8036AC30, lbl_8036AC2C);
            if ((u8) M2C_FIELD(arg0, u8 *, 0x44) >= (u8) M2C_FIELD(arg0, u8 *, 0x45)) {
                M2C_FIELD(arg0, u8 *, 0x45) = 0U;
            } else {
                temp_r3 = M2C_FIELD(arg0, u8 *, 0x40);
                temp_f3 = (f32) temp_r3;
                temp_r30 = M2C_FIELD(arg0, u32 *, 0x3C);
                temp_f31_2 = lbl_8036AC5C - lbl_8036AC48;
                temp_r31 = (s32) ((temp_f3 * temp_f1) / lbl_8036AC2C);
                fn_8000A258(temp_r3, lbl_8036AC2C, temp_f3);
                fn_80009D74((f32) temp_r25, (f32) temp_r24, temp_f31_2, lbl_8036AC48);
                fn_80009F90(temp_r30, temp_r29, 0x21);
                fn_80009B8C((u8) temp_r31);
                fn_8000A248();
                fn_80007898(1);
                fn_8000770C(lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC60, lbl_8036AC64);
                fn_800075D8();
                fn_80007884();
                fn_80009B28();
            }
        }
        temp_r30_2 = M2C_FIELD(arg0, u8 *, 0x40);
        temp_r31_2 = M2C_FIELD(arg0, u32 *, 0x3C);
        if (temp_r28 != 0U) {
            fn_8000A258();
            fn_80009D74((f32) (temp_r25 + 0x2E), (f32) (temp_r24 - 0xC), lbl_8036AC68, lbl_8036AC48);
            fn_8000A174(0, 0x13);
            fn_80009B8C(temp_r30_2);
            fn_8000A248();
            temp_r3_2 = 0xB0 - fn_80010B78(temp_r28, -1, lbl_8036AC48);
            fn_8001019C((s16) ((s32) ((temp_r3_2 >> 0x1FU) + temp_r3_2) >> 1), 0, 1, temp_r28);
            fn_8000A258();
            fn_80009D74((f32) (temp_r25 + 0x2E), (f32) (temp_r24 - 0xC), lbl_8036AC6C, lbl_8036AC48);
            fn_80009F90(temp_r31_2, 4, 0x11);
            fn_80009B8C(temp_r30_2);
            fn_8000A248();
            fn_80007898(2);
            fn_8000770C(lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC70, lbl_8036AC74);
            fn_800075D8();
            fn_80007884();
            fn_80009B28();
        }
        fn_8017EE3C(M2C_FIELD(arg0, u32 *, 0x3C), M2C_FIELD(arg0, u8 *, 0x40), 0xFF, temp_r27, temp_r26, 0, (f32) (temp_r25 + 0x32), (f32) (temp_r24 + 0x1E));
        fn_8017EE3C(M2C_FIELD(arg0, u32 *, 0x3C), M2C_FIELD(arg0, u8 *, 0x40), 0x60, temp_r26, temp_r26, 0, (f32) (temp_r25 + 0x32), (f32) (temp_r24 + 0x1E));
        temp_r28_2 = M2C_FIELD(arg0, u8 *, 0x40);
        temp_r26_2 = M2C_FIELD(arg0, u32 *, 0x3C);
        fn_8000A258();
        fn_80009D74((f32) (temp_r25 + 0x1F), (f32) (temp_r24 + 0x17), lbl_8036AC78, lbl_8036AC48);
        fn_80009F90(temp_r26_2, 7, 0x11);
        fn_80009B8C(temp_r28_2);
        fn_8000A248();
        fn_8005926C(0, 0, 0, 0, 0x14, 0x1C, 0xF, temp_r27);
        fn_80009B28();
        temp_r26_3 = M2C_FIELD(arg0, u8 *, 0x40);
        temp_r23 = M2C_FIELD(arg0, u32 *, 0x3C);
        fn_8000A258();
        fn_80009D74((f32) temp_r25, (f32) temp_r24, lbl_8036AC5C, lbl_8036AC48);
        fn_80009F90(temp_r23, temp_r29, 0x11);
        fn_80009B8C(temp_r26_3);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC60, lbl_8036AC64);
        fn_800075D8();
        fn_80007884();
        fn_80009B28();
    }
}

void fn_8017EE3C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1) {
    void fn_800076AC(u8, u8, u8, u8);
    void fn_80009B8C(u8);
    extern f32 lbl_8036AC44;
    extern f32 lbl_8036AC48;
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC4C;
    f32 var_f31;

    if (arg3 != 0) {
        s32 var_r30;
        s32 var_r29;
        var_f31 = lbl_8036AC44;
        var_r30 = 0x10;
        if ((u8) arg5 != 0) {
            var_r30 = 0x20;
            var_f31 -= lbl_8036AC48;
        }
        if (arg4 > 0x28) {
            fn_8000A258();
            fn_80009D74(farg0, farg1, var_f31, lbl_8036AC48);
            fn_80009F90(arg0, 6, (u16) (var_r30 | 1));
            fn_80009B8C((u8) arg1);
            fn_8000A248();
            var_r29 = -6;
            for (; arg3 > 0; arg3 -= 0x28, var_r29 += 0xE) {
                s32 var_r30_2 = 0x28;
                if (arg3 <= 0x28) {
                    var_r30_2 = arg3;
                }
                fn_80007898(1);
                fn_8000770C(var_r30_2 * 5, lbl_8036AC30, (f32) var_r29, lbl_8036AC30, lbl_8036AC30, (f32) (var_r30_2 * 5 + 1), lbl_8036AC4C);
                fn_800076AC((u8) arg2, (u8) arg2, (u8) arg2, 0xFF);
                fn_800075D8();
                fn_80007884();
            }
        } else {
            fn_8000A258();
            fn_80009D74(farg0, farg1, var_f31, lbl_8036AC48);
            fn_80009F90(arg0, 5, (u16) (var_r30 | 1));
            fn_80009B8C((u8) arg1);
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C(arg3 * 5, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, (f32) (arg3 * 5 + 1), lbl_8036AC4C);
            fn_800076AC((u8) arg2, (u8) arg2, (u8) arg2, 0xFF);
            fn_800075D8();
            fn_80007884();
        }
        fn_80009B28();
    }
}

void fn_8017F040(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAF0(u8 *, s32);
    extern u8 lbl_80295508[];
    void *temp_r3;

    if ((arg0 != 0) && (arg1 != 0)) {
        temp_r3 = fn_8000CAF0(lbl_80295508, arg2);
        *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
        *(s32 *)((u8 *)temp_r3 + 0x3C) = arg1;
    }
}

void fn_8017F098(void *arg0) {
    f32 fn_80059F64(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    s32 old;

    old = *(s32 *)((u8 *)arg0 + 0x38);
    *(s32 *)((u8 *)arg0 + 0x38) = old + 1;
    *(s32 *)((u8 *)arg0 + 0x44) = (s32)fn_80059F64(old, 255.0f, 0.0f, 5.0f, (f32)*(s32 *)((u8 *)arg0 + 0x38));
    if (*(s32 *)((u8 *)arg0 + 0x38) == 8) {
        fn_8000C188(arg0);
    }
}

void fn_8017F120(void *arg0) {
    f32 fn_80059EB8(s32, s32, f32, f32);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern f32 lbl_8036AC2C;
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC4C;
    extern f32 lbl_8036AC58;
    s32 temp;
    f32 a;

    *(s32 *)((u8 *)arg0 + 0x38) = *(s32 *)((u8 *)arg0 + 0x38) + 1;
    temp = *(s32 *)((u8 *)arg0 + 0x38);
    if (temp < 8) {
        *(f32 *)((u8 *)arg0 + 0x40) = -fn_80059EB8(8, temp, lbl_8036AC30, lbl_8036AC4C);
        a = lbl_8036AC30;
        temp = *(s32 *)((u8 *)arg0 + 0x38);
        *(s32 *)((u8 *)arg0 + 0x44) =
            (s32)fn_80059F64(a, lbl_8036AC2C, lbl_8036AC58, (f32)temp);
    }
    if (*(s32 *)((u8 *)arg0 + 0x38) > 0x1E) {
        *(s32 *)((u8 *)arg0 + 0x38) = 0;
        fn_8000C188(arg0);
    }
}

void fn_8017F1D4(void *arg0) {
    M2C_UNK fn_8006D8E8(s32);
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_8017F1F8(void *arg0) {
    s32 fn_8006D948(void *);
    void fn_80059208(void *, void *);
    void fn_8017F258(void);
    extern u8 lbl_802788B8[];
    extern f32 lbl_8036AC30;
    f32 f;

    f = lbl_8036AC30;
    *(s32 *)((char *)arg0 + 0x38) = 0;
    *(f32 *)((char *)arg0 + 0x40) = f;
    *(s32 *)((char *)arg0 + 0x44) = 0;
    *(s32 *)((char *)arg0 + 0x34) = fn_8006D948(lbl_802788B8 + 0x122);
    fn_80059208(fn_8017F258, arg0);
}

void fn_8017F258(void *arg0) {
    (void)arg0;
}

void fn_8017F474(s32 arg0) {
    void *fn_8000CAF0(void *);
    extern u8 lbl_802954DC[];
    if (arg0 != 0) {
        *(s32 *)((u8 *)fn_8000CAF0(lbl_802954DC) + 0x30) = arg0;
    }
}

void fn_8017F4B0(void *arg0) {
    f32 fn_80059F64(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    s32 old;

    old = *(s32 *)((u8 *)arg0 + 0x3C);
    *(s32 *)((u8 *)arg0 + 0x3C) = old + 1;
    *(s32 *)((u8 *)arg0 + 0x40) = (s32)fn_80059F64(old, 255.0f, 0.0f, 5.0f, (f32)*(s32 *)((u8 *)arg0 + 0x3C));
    if (*(s32 *)((u8 *)arg0 + 0x3C) >= 5) {
        *(s32 *)((u8 *)arg0 + 0x3C) = 0;
        fn_8000C188(arg0);
    }
}

void fn_8017F540(void *arg0) {
    f32 fn_8005A028(s32, s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    s32 old;

    old = *(s32 *)((u8 *)arg0 + 0x3C);
    *(s32 *)((u8 *)arg0 + 0x3C) = old + 1;
    *(f32 *)((u8 *)arg0 + 0x38) = fn_8005A028(2, old, -32.0f, 0.0f, 10.0f, (f32)*(s32 *)((u8 *)arg0 + 0x3C));
    if (*(s32 *)((u8 *)arg0 + 0x3C) >= 10) {
        *(s32 *)((u8 *)arg0 + 0x3C) = 0;
        fn_8000C188(arg0);
    }
}

void fn_8017F5C8(void *arg0) {
    M2C_UNK fn_8006D8E8(s32);
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_8017F5EC(void *arg0) {
    s32 fn_8006D948(void *);
    void fn_80059208(void *, void *);
    extern u16 lbl_802788B8[];
    extern f32 lbl_8036AC88;
    
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(u16 *)((u8 *)arg0 + 0x40) = 0xFF;
    *(s32 *)((u8 *)arg0 + 0x34) = fn_8006D948((u8 *)lbl_802788B8 + 0x122);
    *(f32 *)((u8 *)arg0 + 0x38) = lbl_8036AC88;
    fn_80059208((void *)0x8017F650, arg0);
}

void fn_8017F650(void *arg0) {
    f32 fn_8000A258(f32, f32);
    f32 fn_8009822C(f32 *, s32);
    f32 fn_80009D74(f32, f32, f32, f32);
    u8 fn_80009B8C(u8);
    void fn_8000A248();
    void fn_80007898(s32);
    void fn_800075D8();
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884();
    void fn_80009B28();
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC48;
    extern f32 lbl_8036AC74;
    extern f32 lbl_8036AC7C;
    extern f32 lbl_8036AC8C;
    extern f32 lbl_8036AC90;

    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp8;

    fn_8009822C(&sp8, *(s32 *)((u8 *)arg0 + 0x30));
    sp14 = sp8;
    sp18 = *(f32 *)((u8 *)arg0 + 0xC);
    sp1C = *(f32 *)((u8 *)arg0 + 0x10);
    fn_8000A258(sp1C, sp8);
    sp14 += *(f32 *)((u8 *)arg0 + 0x38);
    fn_80009D74(sp14, sp18, lbl_8036AC7C, lbl_8036AC48);
    *(s32 *)((u8 *)arg0 + 0x34) = 0xA;
    *(s32 *)((u8 *)arg0 + 0x34) = 0x11;
    fn_80009B8C(*(u8 *)((u8 *)arg0 + 0x40));
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036AC8C, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC90, lbl_8036AC74);
    fn_800075D8();
    fn_80007884();
    fn_80009B28();
}

void fn_8017F70C(s32 arg0, s32 arg1) {
    extern u8 lbl_802954B0[];
    void *fn_8000CAF0(u8 *, s32);
    s32 *obj;
    obj = (s32 *)fn_8000CAF0(lbl_802954B0, arg1);
    obj[0x30 / 4] = arg0;
}

void fn_8017F744(void *arg0) {
    f32 fn_80059F64(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    s32 old;

    old = *(s32 *)((u8 *)arg0 + 0x3C);
    *(s32 *)((u8 *)arg0 + 0x3C) = old + 1;
    *(s32 *)((u8 *)arg0 + 0x40) = (s32)fn_80059F64(old, 255.0f, 0.0f, 5.0f, (f32)*(s32 *)((u8 *)arg0 + 0x3C));
    if (*(s32 *)((u8 *)arg0 + 0x3C) >= 5) {
        *(s32 *)((u8 *)arg0 + 0x3C) = 0;
        fn_8000C188(arg0);
    }
}

void fn_8017F7D4(void *arg0) {
    f32 fn_8005A028(M2C_UNK, s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC40;
    extern f32 lbl_8036AC4C;
    extern f32 lbl_8036AC58;
    extern f32 lbl_8036AC94;
    f32 temp_f1;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r4 + 1 + 0);
    temp_f1 = fn_8005A028(2, temp_r4, lbl_8036AC30, lbl_8036AC58, lbl_8036AC40, (f32) M2C_FIELD(arg0, s32 *, 0x3C)) - lbl_8036AC94;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((temp_f1 * temp_f1) - lbl_8036AC4C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) >= 0xA) {
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        fn_8000C188(arg0);
    }
}

void fn_8017F86C(void *arg0) {
    M2C_UNK fn_8006D8E8(s32);
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_8017F890(void *arg0)
{
    s32 fn_8006D948(void *);
    void fn_80059208(void *, void *);
    void fn_8017F8EC(void);
    extern u8 lbl_802788B8[];

    *(s32 *)((char *)arg0 + 0x3C) = 0;
    *(s32 *)((char *)arg0 + 0x40) = 0xFF;
    *(s32 *)((char *)arg0 + 0x34) = fn_8006D948(lbl_802788B8 + 0x122);
    fn_80059208(fn_8017F8EC, arg0);
}

void fn_8017F8EC(void *arg0) {
    void fn_800075D8(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B28(void);
    void fn_80009B8C(u8);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8009822C(void *, s32);
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC48;
    extern f32 lbl_8036AC74;
    extern f32 lbl_8036AC7C;
    extern f32 lbl_8036AC98;
    extern f32 lbl_8036AC9C;
    struct { f32 x, y, z; } sp14, sp8;

    fn_8009822C(&sp8, *(s32 *)((u8 *)arg0 + 0x30));
    sp14 = sp8;
    fn_8000A258();
    fn_80009D74(sp14.x, sp14.y + *(f32 *)((u8 *)arg0 + 0x38), lbl_8036AC7C, lbl_8036AC48);
    fn_80009F90(*(s32 *)((u8 *)arg0 + 0x34), 9, 0x11);
    fn_80009B8C((u8)*(u32 *)((u8 *)arg0 + 0x40));
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036AC98, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC9C, lbl_8036AC74);
    fn_800075D8();
    fn_80007884();
    fn_80009B28();
}

void fn_8017F9A8(void) {
    extern u16 lbl_802788B8[];
    fn_8005C8B4((u8 *)lbl_802788B8 + 0x122);
}

void *fn_8017FB80(u32 arg0) {
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, u32);
    void fn_801403F0(void *);
    extern u8 lbl_802955A8[];
    extern u8 lbl_80295764[];
    void *var_r31;

    if (arg0 != 0U) {
        var_r31 = fn_8000CAA0(lbl_802955A8, arg0);
    } else {
        var_r31 = fn_8000CAF0(lbl_802955A8, arg0);
    }
    if (var_r31 != NULL) {
        fn_801403F0(var_r31);
        *(u8 **)((u8 *)var_r31 + 0x40) = lbl_80295764;
        *(s32 *)((u8 *)var_r31 + 0x44) = 0;
    }
    return var_r31;
}

void fn_8017FC00(void *arg0) {
    fn_8013AD70(fn_8013FF94(arg0, 0x81, 0), *(s32 *)((u8 *)&lbl_80330708 + 0xB0));
}

void fn_8017FC38(void *arg0) {
    fn_8013AD70(fn_8013FF94(arg0, 0x81, 0), *(s32 *)((u8 *)&lbl_80330708 + 0xAC));
}

void fn_8017FC70(void *arg0, s32 arg1) {
    void fn_8013FF94(s32, s32);
    u32 *fn_80037BD0(s32, s16);
    s16 var_r3;
    s16 var_r31;
    u32 *temp_r29;
    u8 var_r0;
    
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    var_r31 = 0;
loop_18:
    if (var_r31 < 8) {
        if ((var_r31 >= 0) && (var_r31 <= 3) && !(M2C_FIELD(arg0, s32 *, 0x60) & 1)) {
            var_r0 = 0;
        } else if ((var_r31 >= 4) && (var_r31 <= 7) && !(M2C_FIELD(arg0, s32 *, 0x60) & 2)) {
            var_r0 = 0;
        } else {
            temp_r29 = fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), var_r31);
            if (((s32) M2C_FIELD(arg0, s32 *, 0x5C) == 1) && ((u32) *temp_r29 == 0U) && ((var_r31 == 0) || (var_r31 == 4) || ((u32) *fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), var_r31 - 1) != 0U))) {
                var_r0 = 1;
            } else {
                var_r0 = *temp_r29 != 0U;
            }
        }
        if (var_r0 == 0) {
            var_r31 += 1;
            goto loop_18;
        }
    }
    var_r3 = -1;
    if (var_r31 < 8) {
        var_r3 = var_r31;
    }
    M2C_FIELD(arg0, s16 *, 0x4C) = var_r3;
}

void fn_8017FE84(void *arg0) {
    void fn_8013FF94(void *, s32, s32);
    void fn_8000C070(void *, s32);

    fn_8013FF94(arg0, 0x81, 0);
    fn_8013FF94(arg0, 0x82, 0);
    switch ((s32)((u8 *)lbl_802EF4C8)[8]) {
    case 0x80:
        fn_8000C070(arg0, 5);
        break;
    case 0x81:
        break;
    }
}

void fn_8017FEF8(s32 arg0) {
    fn_8013FF94(0x81, 0);
}

#pragma use_lmw_stmw off
#pragma peephole off
#pragma cplusplus on
extern "C" void fn_80180084(void *arg0)
{
    void fn_8000C070(void *, s32);
    void *fn_80016B7C(u32);
    s8 fn_80036DE0(s32, void *);
    u8 fn_80036F5C(s32, s8);
    void fn_8013FDA0(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801475FC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_80167190(void *, void *, f32, f32);
    void fn_801673D0(void *);
    void fn_8016758C(void *, void *, void *, f32, f32);
    void fn_80176888(void *, void *, f32, f32);
    extern char lbl_802789F0[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual Vec2s v9() = 0;
        virtual u8 v10(void *) = 0;
    };

    register int btn;
    void *nodeVal;
    void *unit;
    void *self;
    register u8 gate;
    register int flags;
    u32 sp10;
    u32 spC;
    u32 sp8;
    f32 fy;
    f32 fx;

    self = arg0;
    unit = fn_8013FF94(arg0, 0x82, 0);
    {
        s32 index = *(s16 *)((u8 *)unit + 0x4E);
        u8 *node = *(u8 **)((u8 *)unit + 0x64);
        if ((s16)index >= 0) {
            while ((s16)index > 0) {
                node = *(u8 **)(node + 4);
                index--;
            }
        } else {
            while ((s16)index < 0) {
                node = *(u8 **)node;
                index++;
            }
        }
        nodeVal = *(void **)(node + 8);
    }
    fn_8013FDA0(self);

    {
        s32 idx = *(s16 *)((u8 *)unit + 0x4E);
        u8 *base = *(u8 **)((u8 *)unit + 0x64);
        u8 *walk = base;
        s32 t = idx;
        if ((s16)idx >= 0) {
            while ((s16)t > 0) {
                walk = *(u8 **)(walk + 4);
                t--;
            }
        } else {
            while ((s16)t < 0) {
                walk = *(u8 **)walk;
                t++;
            }
        }
        if (nodeVal != *(void **)(walk + 8)) {
            if ((s16)idx >= 0) {
                while ((s16)idx > 0) {
                    base = *(u8 **)(base + 4);
                    idx--;
                }
            } else {
                while ((s16)idx < 0) {
                    base = *(u8 **)base;
                    idx++;
                }
            }
            nodeVal = *(void **)(base + 8);
            if (fn_80166D8C(lbl_80330D68) != 0) {
                *(Vec2s *)&sp10 = ((Obj *)unit)->v9();
                fn_80167190(lbl_80330D68, lbl_802789F0 + 0x3E, (f32)*(s16 *)&sp10, (f32)*((s16 *)&sp10 + 1));
            }
        }
    }

    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && nodeVal != 0 && fn_80166D8C(lbl_80330D68) == 0) {
            btn = *(s32 *)((u8 *)unit + 0x48);
            nodeVal = fn_80016B7C((u32)nodeVal);
            *(Vec2s *)&spC = ((Obj *)unit)->v9();
            fx = (f32)*(s16 *)&spC;
            fy = (f32)*((s16 *)&spC + 1);
            if (nodeVal == 0 || (*(u8 *)(*(u8 **)((u8 *)nodeVal + 0x190) + 8) != 0 && *(u8 *)(*(u8 **)((u8 *)nodeVal + 0x190) + 8) != 5)) {
                fn_80176888(lbl_802789F0 + 0x4E, self, fx, fy);
            } else if (fn_80036F5C(btn, (s8)fn_80036DE0(btn, nodeVal)) == 3) {
                fn_80176888(lbl_802789F0 + 0x60, self, fx, fy);
            } else if (((Obj *)unit)->v10(nodeVal) == 0) {
                fn_80176888(lbl_802789F0 + 0x73, self, fx, fy);
            } else {
                fn_8000C070(self, 7);
                fn_801475FC(lbl_802789F0 + 0x84, 0x64);
            }
        } else if ((btn & 0x800) && nodeVal != 0 && fn_80166D8C(lbl_80330D68) == 0) {
            *(Vec2s *)&sp8 = ((Obj *)unit)->v9();
            fn_8016758C(lbl_80330D68, self, lbl_802789F0 + 0x3E, (f32)*(s16 *)&sp8, (f32)*((s16 *)&sp8 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            void *sub = fn_8013FF94(self, 0x81, 0);
            s16 a = *(s16 *)((u8 *)sub + 0xA);
            u32 p50;
            *(u32 *)&p50 = *(u32 *)((u8 *)unit + 0x50);
            a = (s16)(*(s16 *)&p50 + (*(s16 *)((u8 *)unit + 0xA) - a));
            *(s16 *)((u8 *)sub + 0x52) = a;
            *(s16 *)((u8 *)sub + 0x54) = *((s16 *)&p50 + 1);
            *(s16 *)&p50 = a;
            fn_8000C070(self, 3);
            fn_801475FC(lbl_802789F0 + 0x94, 0x64);
        }
    }
}
#pragma cplusplus reset
#pragma peephole reset
#pragma use_lmw_stmw reset

void fn_80180620(void) {

}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80180624(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void *fn_80037004(void *, u8);
    u8 fn_8003701C(void *);
    void fn_80136F2C(void *, void *, s32 *, void **);
    void *fn_8013AC54(void *);
    void fn_8013FCE0(void *, void *, void **, void **);
    void fn_8013FDA0(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801475FC(void *, s32);
    void fn_801694AC(void *, void *);
    void fn_801695BC(void *, void *, s32);
    void fn_80176888(void *, void *, f32, f32);
    void fn_80181DF0(void *, void * const *);
    extern u8 lbl_802789F0[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    struct PairBig {
        s16 x;
        s16 y;
        s32 _pad;
        s32 _pad2;
    };
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual PairBig v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual u8 v14(void *) = 0;
    };
    s32 sp8;
    void *spC;
    void *spArgs[3];
    s32 sp1C;
    s32 sp20;
    void *sp24;
    void *sp28;
    void *sp2C;
    s16 sp30[2];
    s16 sp34[2];
    s16 sp38[2];
    void *obj81;
    void *obj82;
    void *unit;
    void *listHd;
    s32 i;
    u8 idx;
    register u32 flags;
    register u8 gate;
    s32 a;
    s32 btn;
    s16 t0, t1;
    void *tmp;
    PairBig pr;

    obj81 = fn_8013FF94(arg0, 0x81, 0);
    obj82 = fn_8013FF94(arg0, 0x82, 0);
    unit = fn_8013AC54(obj81);
    fn_8013FDA0(arg0);
    if (unit != fn_8013AC54(obj81)) {
        unit = fn_8013AC54(obj81);
        if (*(void **)((u8 *)obj82 + 0x48) != unit) {
            *(void **)((u8 *)obj82 + 0x48) = unit;
            listHd = (u8 *)obj82 + 0x60;
            sp24 = listHd;
            sp20 = *(s32 *)((u8 *)obj82 + 0x64);
            fn_80136F2C(&sp1C, (void *)((u32)obj82 + 0x5Cu), &sp20, &sp24);
            i = 0;
            goto loop_test;
        loop:
            idx = i;
            if (fn_80037004(unit, idx) != 0) {
                sp28 = fn_80037004(unit, idx);
                spC = listHd;
                fn_8013FCE0(&sp8, (void *)((s32)obj82 + 0x5C), &spC, &sp28);
            }
            i += 1;
        loop_test:
            if ((u8)i < fn_8003701C(unit)) {
                goto loop;
            }
            sp2C = unit;
            spArgs[2] = unit;
            spArgs[1] = unit;
            spArgs[0] = unit;
            fn_80181DF0((void *)((u8 *)obj82 + 92), spArgs);
        }
        *(s16 *)((u8 *)obj82 + 0x4E) = 0;
        *(s16 *)((u8 *)obj82 + 0x50) = -1;
        *(s16 *)((u8 *)obj82 + 0x52) = -1;
    }
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        a = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = a & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ a);
        if ((btn & 0x100) && unit != 0) {
            if (((Obj *)obj81)->v14(unit) == 0) {
                pr = ((Obj *)obj81)->v9();
                *(u32 *)sp30 = *(u32 *)&pr;
                *(u32 *)sp38 = *(u32 *)sp30;
                fn_80176888(lbl_802789F0 + 0xCB, arg0, (f32)sp38[0], (f32)sp38[1]);
            } else {
                tmp = fn_8013FF94(arg0, 0x82, 0);
                *(s32 *)&sp34[0] = *(s32 *)((u8 *)obj81 + 0x52);
                t0 = *(s16 *)((u8 *)tmp + 0xA);
                t1 = sp34[0] + (*(s16 *)((u8 *)obj81 + 0xA) - t0);
                *(s16 *)((u8 *)tmp + 0x50) = t1;
                *(s16 *)((u8 *)tmp + 0x52) = sp34[1];
                sp34[0] = t1;
                fn_8000C188(arg0);
                fn_801475FC(lbl_802789F0 + 0x84, 0x64);
            }
        } else if ((btn & 0x800) && unit != 0) {
            fn_801695BC(unit, arg0, 0x1000000);
            fn_8000C070(arg0, 8);
        } else if ((btn & 0x400) && unit != 0) {
            fn_801694AC(unit, arg0);
            fn_8000C070(arg0, 9);
        } else if (btn & 0x200) {
            fn_8000C070(arg0, 0xA);
            fn_801475FC(lbl_802789F0 + 0x94, 0x64);
        }
    }
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80180AC8(void *arg0) {
    void *fn_800C42D8(u32);
    void *fn_80181D88(void *, s32, s32, s32, s32);
    void fn_8013B064(void *, void *);
    void fn_801400F4(void *, void *);
    void fn_80142060(void *);
    void *fn_8013AC54(void *);
    void fn_80136F2C(void *, void *, void *, void *);
    void *fn_80037004(void *, u8);
    u8 fn_8003701C(void *);
    void fn_8013FCE0(void *, void *, void *, void *);
    void fn_80181DF0(void *, void *);
    extern u8 lbl_802955A8[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80292230[];
    extern u8 lbl_80292208[];
    extern void fn_80180E2C(void);
    struct Node {
        u8 pad[0x184];
        Node *next;
        u8 check(void);
    };
    struct VObj {
        virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0;
        virtual void v3() = 0; virtual void v4() = 0; virtual void v5() = 0;
        virtual void v6() = 0; virtual void v7() = 0; virtual void v8() = 0;
        virtual void v9() = 0;
    };
    typedef u8 (Node::*Pred)(void);
    Node *node;
    s32 pm2;
    s32 pm1;
    void *obj;
    s32 pm0;
    void *base;
    Pred pred;
    Pred predDup;
    Pred live0;
    Pred live1;
    void *ret;
    void *link;
    u8 i;
    s32 sp8;
    void *spC;
    void *sp10;
    void *sp14;
    void *sp18;
    s32 sp1C;
    void *sp20;
    void *sp24;
    void *sp28;
    void *sp2C;

    base = lbl_802955A8;
    obj = fn_800C42D8(0xD4);
    if (obj != NULL) {
        obj = fn_80181D88(obj, 0x20, 0x6C, 0x120, 0x1F4);
    }
    *(s16 *)((u8 *)obj + 8) = 0x81;

    pm0 = *(s32 *)((u8 *)base + 0xF8);
    pm1 = *(s32 *)((u8 *)base + 0xFC);
    pm2 = *(s32 *)((u8 *)base + 0x100);
    ((s32 *)&pred)[0] = pm0;
    ((s32 *)&pred)[1] = pm1;
    ((s32 *)&pred)[2] = pm2;
    ((s32 *)&predDup)[0] = pm0;
    ((s32 *)&predDup)[1] = pm1;
    ((s32 *)&predDup)[2] = pm2;
    live0 = pred;
    live1 = predDup;
    node = *(Node **)lbl_802CA264;
    while (node != NULL) {
        Pred tmp;
        ((s32 *)&tmp)[0] = pm0;
        ((s32 *)&tmp)[1] = pm1;
        ((s32 *)&tmp)[2] = pm2;
        if ((node->*tmp)()) {
            fn_8013B064(obj, node);
        }
        node = node->next;
    }

    pm2 = *(s32 *)((u8 *)base + 0x104);
    pm1 = *(s32 *)((u8 *)base + 0x108);
    pm0 = *(s32 *)((u8 *)base + 0x10C);
    ((s32 *)&pred)[0] = pm2;
    ((s32 *)&pred)[1] = pm1;
    ((s32 *)&pred)[2] = pm0;
    ((s32 *)&predDup)[0] = pm2;
    ((s32 *)&predDup)[1] = pm1;
    ((s32 *)&predDup)[2] = pm0;
    node = *(Node **)(lbl_802CA264 + 0x3C);
    while (node != NULL) {
        Pred tmp;
        ((s32 *)&tmp)[0] = pm2;
        ((s32 *)&tmp)[1] = pm1;
        ((s32 *)&tmp)[2] = pm0;
        if ((node->*tmp)()) {
            fn_8013B064(obj, node);
        }
        node = node->next;
    }

    *(void **)((u8 *)obj + 0x7C) = (void *)&fn_80180E2C;
    *(u32 *)((u8 *)obj + 0x80) = 0;
    fn_801400F4(arg0, obj);

    pm0 = (s32)fn_800C42D8(0x70);
    if ((void *)pm0 != NULL) {
        void *panel = (void *)pm0;
        void *r12;
        *(void **)panel = lbl_8028FDB0;
        *(u32 *)((u8 *)panel + 4) = 0;
        *(void **)panel = lbl_80292230;
        *(s16 *)((u8 *)panel + 8) = -1;
        *(s16 *)((u8 *)panel + 0xA) = 0x140;
        r12 = panel;
        *(s16 *)((u8 *)panel + 0xC) = 0x6C;
        *(s16 *)((u8 *)panel + 0xE) = 0x218;
        *(s16 *)((u8 *)panel + 0x10) = 0x176;
        *(s16 *)((u8 *)panel + 0x12) = 0;
        *(s16 *)((u8 *)panel + 0x14) = 0;
        *(s16 *)((u8 *)panel + 0x16) = 0xD8;
        *(s16 *)((u8 *)panel + 0x18) = 0x10A;
        *(s16 *)((u8 *)panel + 0x1A) = 0;
        *(s16 *)((u8 *)panel + 0x1C) = 0;
        *(u8 *)((u8 *)panel + 0x1E) = 0xFF;
        *(u8 *)((u8 *)panel + 0x1F) = 0xFF;
        *(u8 *)((u8 *)panel + 0x20) = 0xFF;
        *(u8 *)((u8 *)panel + 0x21) = 0xFF;
        *(s16 *)((u8 *)panel + 0x22) = 0x1F4;
        *(s16 *)((u8 *)panel + 0x24) = 0;
        *(f32 *)((u8 *)panel + 0x28) = 1.0f;
        *(f32 *)((u8 *)panel + 0x2C) = 1.0f;
        *(f32 *)((u8 *)panel + 0x30) = 1.0f;
        *(u32 *)((u8 *)panel + 0x34) = 0;
        *(u32 *)((u8 *)panel + 0x38) = 0;
        *(void **)panel = lbl_80292208;
        fn_80142060((u8 *)r12 + 0x3C);
        *(void **)panel = (u8 *)base + 0x110;
        *(u32 *)((u8 *)panel + 0x48) = 0;
        *(u8 *)((u8 *)panel + 0x4C) = 1;
        *(s16 *)((u8 *)panel + 0x4E) = 0;
        *(s16 *)((u8 *)panel + 0x50) = -1;
        *(s16 *)((u8 *)panel + 0x52) = -1;
        *(s16 *)((u8 *)panel + 0x54) = 0x20;
        *(s16 *)((u8 *)panel + 0x56) = 0x10;
        *(s16 *)((u8 *)panel + 0x58) = 0;
        fn_80142060((u8 *)panel + 0x5C);
        ((VObj *)panel)->v8();
    }
    {
        void *panel = (void *)pm0;
        *(s16 *)((u8 *)panel + 8) = 0x82;
        *(u8 *)((u8 *)panel + 0x4C) = 0;
        ret = fn_8013AC54(obj);
        if (*(void **)((u8 *)panel + 0x48) != ret) {
            *(void **)((u8 *)panel + 0x48) = ret;
            link = (u8 *)panel + 0x60;
            sp24 = link;
            sp20 = *(void **)((u8 *)panel + 0x64);
            fn_80136F2C(&sp1C, (u8 *)panel + 0x5C, &sp20, &sp24);
            i = 0;
            while (i < fn_8003701C(ret)) {
                if (fn_80037004(ret, i) != NULL) {
                    sp28 = fn_80037004(ret, i);
                    spC = link;
                    fn_8013FCE0(&sp8, (u8 *)panel + 0x5C, &spC, &sp28);
                }
                i = (u8)(i + 1);
            }
            sp2C = ret;
            sp18 = ret;
            sp14 = ret;
            sp10 = ret;
            fn_80181DF0((u8 *)panel + 0x5C, &sp10);
        }
        *(u32 *)((u8 *)panel + 0x34) |= 0x10;
        fn_801400F4(arg0, panel);
    }
    if (((s32 *)&live0)[0] == ((s32 *)&live1)[0]) {
        /* keep live0/live1 across function */
    }
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus reset
#pragma use_lmw_stmw reset

s32 fn_80180E2C(s32 arg0) {
    u8 fn_80036B20(s32, s32);
    void *fn_80036FD0(s32, s32);
    u8 fn_8003701C(void);
    u8 count;
    s32 i;
    void *obj;

    count = fn_8003701C();
    for (i = 0; i < count; i++) {
        obj = fn_80036FD0(arg0, i);
        if (obj != NULL) {
            switch (M2C_FIELD(M2C_FIELD(obj, void **, 0x190), u8 *, 8)) {
            case 0:
            case 5:
                if (fn_80036B20(arg0, i)) {
                    return 1;
                }
                break;
            }
        }
    }
    return 0;
}

#pragma cplusplus on
extern "C" void fn_80180ED4(void *arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0(s32) = 0;
    };
    if (M2C_FIELD(arg0, u32 *, 0x44) != 0) {
        fn_8003F670(M2C_FIELD(arg0, u32 *, 0x44));
    }
    ((Obj *)arg0)->v0(-1);
}

extern "C" void *fn_80180F24(void *arg0, s16 arg1) {
    void fn_80140304(void *, s16);
    void fn_800C428C(void *);
    extern u8 lbl_80295764[];
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x40) = lbl_80295764;
        fn_80140304(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma cplusplus reset
void fn_80180F84(void *arg0) {
    void *fn_800C42D8(u32);
    void fn_801658DC(void *, void *);
    void fn_801400F4(void *, void *);
    void *fn_8000E0E4(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_800C96F8(void *, char *, s32);
    s32 strlen(char *);
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80292230[];
    extern u8 lbl_80293C84[];
    extern u8 lbl_80293C2C[];
    extern u8 lbl_80293C00[];
    extern u8 lbl_80293C58[];
    extern u8 lbl_802789F0[];
    void *p;
    void *q;
    void *found;

    p = fn_800C42D8(0x60);
    if (p != NULL) {
        M2C_FIELD(p, void **, 0) = lbl_8028FDB0;
        M2C_FIELD(p, u32 *, 4) = 0;
        M2C_FIELD(p, void **, 0) = lbl_80292230;
        M2C_FIELD(p, s16 *, 8) = -1;
        M2C_FIELD(p, s16 *, 0xA) = 0;
        M2C_FIELD(p, s16 *, 0xC) = 0x28;
        M2C_FIELD(p, s16 *, 0xE) = 0x260;
        M2C_FIELD(p, s16 *, 0x10) = 0x62;
        M2C_FIELD(p, s16 *, 0x12) = 0;
        M2C_FIELD(p, s16 *, 0x14) = 0;
        M2C_FIELD(p, s16 *, 0x16) = 0x260;
        M2C_FIELD(p, s16 *, 0x18) = 0x3A;
        M2C_FIELD(p, s16 *, 0x1A) = 0;
        M2C_FIELD(p, s16 *, 0x1C) = 0;
        M2C_FIELD(p, u8 *, 0x1E) = 0xFF;
        M2C_FIELD(p, u8 *, 0x1F) = 0xFF;
        M2C_FIELD(p, u8 *, 0x20) = 0xFF;
        M2C_FIELD(p, u8 *, 0x21) = 0xFF;
        M2C_FIELD(p, s16 *, 0x22) = 0x1FE;
        M2C_FIELD(p, s16 *, 0x24) = 0;
        M2C_FIELD(p, f32 *, 0x28) = 1.0f;
        M2C_FIELD(p, f32 *, 0x2C) = 1.0f;
        M2C_FIELD(p, f32 *, 0x30) = 1.0f;
        M2C_FIELD(p, u32 *, 0x34) = 0;
        M2C_FIELD(p, u32 *, 0x38) = 0;
        M2C_FIELD(p, void **, 0) = lbl_80293C84;
        M2C_FIELD(p, u32 *, 0x3C) = 0;
        M2C_FIELD(p, u32 *, 0x40) = 0;
        M2C_FIELD(p, u32 *, 0x44) = 0;
        M2C_FIELD(p, u32 *, 0x40) = 0;
        M2C_FIELD(p, u32 *, 0x48) = 0;
        M2C_FIELD(p, u8 *, 0x4C) = 1;
        M2C_FIELD(p, s16 *, 0x4E) = 0;
        M2C_FIELD(p, s16 *, 0x50) = 0;
        M2C_FIELD(p, s16 *, 0x52) = 0;
        M2C_FIELD(p, s16 *, 0x54) = 0;
        M2C_FIELD(p, void **, 0) = lbl_80293C2C;
        M2C_FIELD(p, void **, 0) = lbl_80293C00;
        M2C_FIELD(p, u32 *, 0x58) = 0;
        M2C_FIELD(p, s16 *, 0x5C) = 3;
        M2C_FIELD(p, s16 *, 0x5E) = 0x10;
    }
    M2C_FIELD(p, s16 *, 8) = 0x80;
    M2C_FIELD(p, u32 *, 0x34) |= 0x10;
    M2C_FIELD(p, u32 *, 0x58) = 1;
    M2C_FIELD(p, s16 *, 0x4E) = 0x60;
    M2C_FIELD(p, s16 *, 0x52) = 0x60;
    M2C_FIELD(p, u8 *, 0x4C) = 2;
    M2C_FIELD(p, u32 *, 0x48) = 1;
    fn_801658DC(p, lbl_802789F0 + 0x104);
    fn_801400F4(arg0, p);

    q = fn_800C42D8(0x5C);
    if (q != NULL) {
        M2C_FIELD(q, void **, 0) = lbl_8028FDB0;
        M2C_FIELD(q, u32 *, 4) = 0;
        M2C_FIELD(q, void **, 0) = lbl_80292230;
        M2C_FIELD(q, s16 *, 8) = -1;
        M2C_FIELD(q, s16 *, 0xA) = 0;
        M2C_FIELD(q, s16 *, 0xC) = 0x190;
        M2C_FIELD(q, s16 *, 0xE) = 0x260;
        M2C_FIELD(q, s16 *, 0x10) = 0x1C0;
        M2C_FIELD(q, s16 *, 0x12) = 0;
        M2C_FIELD(q, s16 *, 0x14) = 0;
        M2C_FIELD(q, s16 *, 0x16) = 0x260;
        M2C_FIELD(q, s16 *, 0x18) = 0x30;
        M2C_FIELD(q, s16 *, 0x1A) = 0;
        M2C_FIELD(q, s16 *, 0x1C) = 0;
        M2C_FIELD(q, u8 *, 0x1E) = 0xFF;
        M2C_FIELD(q, u8 *, 0x1F) = 0xFF;
        M2C_FIELD(q, u8 *, 0x20) = 0xFF;
        M2C_FIELD(q, u8 *, 0x21) = 0xFF;
        M2C_FIELD(q, s16 *, 0x22) = 0x64;
        M2C_FIELD(q, s16 *, 0x24) = 0;
        M2C_FIELD(q, f32 *, 0x28) = 1.0f;
        M2C_FIELD(q, f32 *, 0x2C) = 1.0f;
        M2C_FIELD(q, f32 *, 0x30) = 1.0f;
        M2C_FIELD(q, u32 *, 0x34) = 0;
        M2C_FIELD(q, u32 *, 0x38) = 0;
        M2C_FIELD(q, void **, 0) = lbl_80293C84;
        M2C_FIELD(q, u32 *, 0x3C) = 0;
        M2C_FIELD(q, u32 *, 0x40) = 0;
        M2C_FIELD(q, u32 *, 0x44) = 0;
        M2C_FIELD(q, u32 *, 0x40) = 0;
        M2C_FIELD(q, u32 *, 0x48) = 0;
        M2C_FIELD(q, u8 *, 0x4C) = 1;
        M2C_FIELD(q, s16 *, 0x4E) = 0;
        M2C_FIELD(q, s16 *, 0x50) = 0;
        M2C_FIELD(q, s16 *, 0x52) = 0;
        M2C_FIELD(q, s16 *, 0x54) = 0;
        M2C_FIELD(q, void **, 0) = lbl_80293C58;
        M2C_FIELD(q, u32 *, 0x58) = 1;
        M2C_FIELD(q, s16 *, 0x4E) = 0x30;
        M2C_FIELD(q, s16 *, 0x52) = 0x30;
    }
    M2C_FIELD(q, s16 *, 8) = -0x1000;
    M2C_FIELD(q, u32 *, 0x48) = 1;
    fn_800C96F8((u8 *)q + 0x3C, (char *)((u32)lbl_802789F0 + 0x115), strlen((char *)((u8 *)lbl_802789F0 + 0x115)));
    M2C_FIELD(q, u32 *, 0x34) |= 0x10;
    M2C_FIELD(q, u32 *, 0x58) = 1;
    fn_801400F4(arg0, q);

    p = fn_8000E0E4(lbl_802789F0 + 0xF3);
    found = fn_8013FF94(arg0, -0x1000, 0);
    if (found != NULL) {
        fn_801658DC(found, p);
    }
}

void fn_801812A0(void) {
    void fn_8005C8B4(void *);
    extern u8 lbl_802789F0[];
    fn_8005C8B4(lbl_802789F0 + 0x116);
}

#pragma opt_common_subs off
void fn_801812CC(void *arg0) {
    u8 fn_8005BA10(void *);
    s32 fn_8003FCCC(void *);
    void fn_8000C188(void *);
    extern u8 lbl_802789F0[];

    if (fn_8005BA10(lbl_802789F0 + 0x116)) {
        M2C_FIELD(arg0, s32 *, 0x44) = fn_8003FCCC(lbl_802789F0 + 0x116);
        fn_8000C188(arg0);
    }
}

#pragma cplusplus on
extern "C" void fn_80181328(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v6();
}

extern "C" void fn_80181354(void *arg0) {
    void fn_801475FC(void *, s32);
    extern u8 lbl_802789F0[];
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    s32 tmp;
    s32 edge;
    s32 held;
    s32 buttons;
    s32 count;
    s32 flags;
    s16 now;
    s32 cur;
    s16 old;
    u8 skip;

    skip = 0;
    flags = lbl_80367110;
    count = *(s32 *)((u8 *)arg0 + 0x5C);
    old = *(s16 *)((u8 *)arg0 + 0x4E);
    cur = (s16)count;
    if ((flags & 0x10) && !(flags & 0x20)) {
        skip = 1;
    }
    if (skip == 0) {
        now = *(s16 *)((u8 *)arg0 + 0x4E);
        buttons = *(s32 *)((u8 *)lbl_80367240 + 0xC);
        held = *(s32 *)((u8 *)lbl_80367240 + 4);
        edge = held & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ held);
        if (buttons & 0x08000008) {
            if (old == 0) {
                if (buttons == edge) {
                    tmp = cur;
                    tmp += now;
                    tmp -= 1;
                    *(s16 *)((u8 *)arg0 + 0x4E) = (s16)tmp;
                }
            } else {
                *(s16 *)((u8 *)arg0 + 0x4E) = (s16)(now - 1);
            }
        } else if (buttons & 0x04000004) {
            tmp = cur - 1;
            if (tmp == old) {
                if (buttons == edge) {
                    *(s16 *)((u8 *)arg0 + 0x4E) = (s16)(now - tmp);
                }
            } else {
                *(s16 *)((u8 *)arg0 + 0x4E) = (s16)(now + 1);
            }
        }
        if (now != *(s16 *)((u8 *)arg0 + 0x4E)) {
            fn_801475FC(lbl_802789F0 + 0x122, 0x64);
        }
    }
}

#pragma cplusplus reset

#pragma cplusplus on
extern "C" s32 fn_80036A24(s32, s16);
extern "C" void fn_80157700(s32, s16, u8, s32);
extern "C" void fn_80157930(s32, s32, s16, s16, s32, s32);
extern "C" void fn_8018179C(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    s16 y;

    ((Obj *)arg0)->v2();
    fn_80157930(0, 0, (s16)(M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)), (s16)(M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)), 0xE6, 0x10);
    y = (s16)(M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)) + 2;
    fn_80157700(0, y, 5 - fn_80036A24(M2C_FIELD(arg0, s32 *, 0x48), (s16)(M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC))), 0x10);
}

#pragma use_lmw_stmw on
extern "C" void fn_80181840(void *arg0, s16 arg1, s16 arg2, s32 unused, void *unit, u8 flag) {
    void fn_8000A174(s32, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8001019C(s16, s16, s32, void *, ...);
    s32 fn_800102BC(s32, f32);
    s32 fn_80010B78(void *, s32, f32);
    s8 fn_80036DE0(void *, void *);
    s32 fn_80036F5C(void *, s32);
    s32 fn_8003B938(u8);
    void fn_8005AC24(void *, s16, s16, s32);
    void *fn_800A8A88(void *);
    extern u8 lbl_802789F0[];
    extern u8 lbl_802F0308[];
    extern f32 lbl_8036ACA8;
    s16 temp_arg1 = arg1;
    s16 temp_arg2 = arg2;
    s16 x;
    s16 w3;
    s16 w2;
    s16 w1;
    s16 halfH;
    s16 rowH;
    s32 idx;
    s32 mode;
    s32 width;
    s16 w0;
    void *map;

    mode = flag != 0;
    {
        s16 a12 = *(s16 *)((u8 *)arg0 + 0x12);
        s16 a16 = *(s16 *)((u8 *)arg0 + 0x16);
        s16 a56 = *(s16 *)((u8 *)arg0 + 0x56);
        width = a16 - a12;
        map = *(void **)((u8 *)arg0 + 0x48);
        rowH = *(s16 *)((u8 *)arg0 + 0x54);
        width = (s16)((s16)width - (a56 << 1));
    }
    fn_8000A258();
    fn_8000A174(0, (u16)(*(u32 *)((u8 *)arg0 + 0x34) | 0x13));
    fn_8000A248();
    halfH = (s16)((rowH - fn_800102BC(-1, lbl_8036ACA8)) >> 1);
    if (unit != 0) {
        u8 kind = *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8);
        if (kind == 0) {
            goto tier_ok;
        }
        if (kind == 5) {
            goto tier_ok;
        }
        if (kind == 6) {
            goto tier_ok;
        }
        if (kind != 7) {
            goto tier_skip;
        }
    tier_ok:
        w0 = (s16)fn_80010B78(lbl_802789F0 + 0x13E, -1, lbl_8036ACA8);
        w1 = (s16)fn_80010B78(lbl_802789F0 + 0x141, -1, lbl_8036ACA8);
        w2 = (s16)fn_80010B78(lbl_802789F0 + 0x144, -1, lbl_8036ACA8);
        w3 = (s16)fn_80010B78(lbl_802789F0 + 0x147, -1, lbl_8036ACA8);
        {
            s32 tmp = fn_80036DE0(map, unit);
            x = (s16)((0x14 - w0) >> 1);
            w0 = (s16)(temp_arg1 + (width - 0x14));
            idx = tmp;
            x = (s16)(x + w0);
        }
        if ((u8)fn_80036F5C(map, idx) == 3) {
            mode = 0x13;
            fn_8001019C(x, (s16)(temp_arg2 + halfH), 0x13, lbl_802789F0 + 0x14A, lbl_802789F0 + 0x13E);
        } else {
            w1 = (s16)(((0x14 - w1) >> 1) + w0);
            if ((u8)fn_80036F5C(map, idx) == 2) {
                fn_8001019C(w1, (s16)(temp_arg2 + halfH), mode, lbl_802789F0 + 0x14A, lbl_802789F0 + 0x141);
            } else {
                w2 = (s16)(((0x14 - w2) >> 1) + w0);
                if ((u8)fn_80036F5C(map, idx) == 1) {
                    fn_8001019C(w2, (s16)(temp_arg2 + halfH), mode, lbl_802789F0 + 0x14A, lbl_802789F0 + 0x144);
                } else {
                    w3 = (s16)(((0x14 - w3) >> 1) + w0);
                    fn_8001019C(w3, (s16)(temp_arg2 + halfH), mode, lbl_802789F0 + 0x14A, lbl_802789F0 + 0x147);
                }
            }
        }
    tier_skip:
        ;
    }
    if (unit == 0) {
        goto draw_dash;
    }
    {
        u8 kind = *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8);
        if (kind == 0) {
            goto draw_unit;
        }
        if (kind == 5) {
            goto draw_unit;
        }
        if (kind == 6) {
            goto draw_unit;
        }
        if (kind == 7) {
            goto draw_unit;
        }
    }
draw_dash:
    fn_8001019C((s16)(temp_arg1 + 0x18), (s16)(temp_arg2 + halfH), 0, lbl_802789F0 + 0x14F);
    return;
draw_unit:
    {
        s32 slot = fn_8003B938(*(u8 *)(*(u8 **)((u8 *)unit + 0x188) + 0x54));
        void *name = fn_800A8A88(*(void **)((u8 *)unit + 0x188));
        x = (s16)(temp_arg2 + halfH);
        fn_8001019C((s16)(temp_arg1 + 0x18), x, mode, lbl_802789F0 + 0x14A, name);
        fn_8005AC24(lbl_802F0308, temp_arg1, x, slot);
    }
}
#pragma use_lmw_stmw reset

#pragma cplusplus reset

u8 fn_80181B9C(void *arg0, void *arg1) {
    s8 fn_80036DE0(s32, void *);
    u8 fn_80036B20(s32, s32);
    u8 ret;
    u8 res;
    s32 obj;
    s8 idx;

    if (arg1 == NULL) {
        return 0;
    }
    ret = 0;
    switch (M2C_FIELD(M2C_FIELD(arg1, void **, 0x190), u8 *, 8)) {
    case 0:
    case 5:
        obj = M2C_FIELD(arg0, s32 *, 0x48);
        if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x188), u32 *, 0x50) == 0) {
            res = 0;
        } else {
            idx = fn_80036DE0(obj, arg1);
            if (idx < 0) {
                res = 0;
            } else {
                res = fn_80036B20(obj, idx);
            }
        }
        ret = res;
        break;
    }
    return ret;
}

void fn_80181C40(s32 *arg0, void *arg1) {
    struct Point {
        s16 x;
        s16 y;
    };
    struct Point *fn_8013F748(void *, struct Point *, struct Point *);
    struct Point out;
    struct Point in;
    s32 row;

    row = M2C_FIELD(arg1, s16 *, 0x54) * M2C_FIELD(arg1, s16 *, 0x4E);
    in.x = M2C_FIELD(arg1, s16 *, 0x56);
    in.y = row + M2C_FIELD(arg1, s16 *, 0x58);
    *(struct Point *)arg0 = *fn_8013F748(arg1, &out, &in);
}

typedef struct ListNode {
    struct ListNode *prev;
    struct ListNode *next;
} ListNode;

typedef struct List {
    u32 unk0;
    ListNode node;
} List;

typedef struct ListOwner {
    void *vtbl;
    u8 pad4[0x58];
    List list;
} ListOwner;

ListOwner *fn_80181CA4(ListOwner *arg0, s16 arg1) {
    M2C_UNK fn_8013F2A4(void *, s32);
    M2C_UNK fn_800C428C(void *);
    M2C_UNK fn_80136F2C(void *, List *, ListNode **, ListNode **);
    extern u8 lbl_802956B8[];
    ListNode *sp10;
    ListNode *spC;
    u8 sp8[4];
    ListNode *end;

    if (arg0 != NULL) {
        arg0->vtbl = lbl_802956B8;
        if (&arg0->list != NULL) {
            if (&arg0->list != NULL) {
                if (&arg0->list != NULL) {
                    end = &arg0->list.node;
                    sp10 = end;
                    spC = end->next;
                    fn_80136F2C(sp8, &arg0->list, &spC, &sp10);
                }
            }
        }
        fn_8013F2A4(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80181D44(void *arg0) {
    s16 three;
    s16 five;
    s16 var_r5;
    s16 var_r4;
    s16 var_r6;
    s16 var_r7;
    s16 var_r8;

    three = 3;
    five = 5;
    var_r8 = *(s16 *)((char *)arg0 + 0xC);
    var_r7 = *(s16 *)((char *)arg0 + 0x10);
    var_r6 = *(s16 *)((char *)arg0 + 0xA);
    var_r5 = *(s16 *)((char *)arg0 + 0xE);

    var_r7 = var_r7 - var_r8;
    var_r7 = (s16)var_r7;
    *(s16 *)((char *)arg0 + 0x12) = three;
    var_r4 = var_r5 - var_r6;
    var_r4 = (s16)var_r4;
    var_r5 = var_r7 - 5;
    *(s16 *)((char *)arg0 + 0x14) = five;
    var_r4 = var_r4 - 3;
    *(s16 *)((char *)arg0 + 0x16) = var_r4;
    *(s16 *)((char *)arg0 + 0x18) = var_r5;
}

#pragma cplusplus on
extern "C" void *fn_80181D88(void *arg0) {
    struct Obj {
        virtual void m08() = 0;
        virtual void m0C() = 0;
        virtual void m10() = 0;
        virtual void m14() = 0;
        virtual void m18() = 0;
        virtual void m1C() = 0;
        virtual void m20() = 0;
        virtual void m24() = 0;
        virtual void m28() = 0;
    };
    void fn_8016915C(void *);
    extern u8 lbl_80291A74[];

    fn_8016915C(arg0);
    *(void **)arg0 = lbl_80291A74;
    ((Obj *)arg0)->m28();
    return arg0;
}
#pragma cplusplus reset

s32 fn_80181DD8(void *arg0) {
    void **ptr = M2C_FIELD(arg0, void **, 0x188);
    s32 val = ((s32*)ptr)[0x50/4];
    return (val ^ (val >> 31)) - (val >> 31);
}

#pragma use_lmw_stmw on
void fn_80181DF0(s32 *arg0, void **arg1) {
    void *fn_80016B7C(void *);
    s32 fn_80036E48(void *, void *);
    s32 fn_80036F5C(void *, s32);
    u8 fn_80036FC4(void *, s32);
    void fn_800C428C(void *);
    void fn_8018212C(s32 *, s32 *, void **);
    void *sp1C;
    void *sp18;
    s32 sp14;
    void *sp10;
    void *spC;
    void *sp8;
    void **node;
    void **node2;
    void *idNode;
    void *idNode2;
    void *unitNode2;
    void *unitNode;
    s32 sNode2;
    s32 sNode;
    u8 t;
    u8 swap;
    u8 c0;
    u32 half;
    u32 n;
    void **it;
    void **left;
    void *tmp;
    s32 cnt;

    cnt = *arg0;
    if (cnt != 2) {
        if (cnt >= 2) {
            goto split;
        }
        if (cnt >= 0) {
            return;
        }
        goto split;
    }
    node = (void **)arg0[2];
    node2 = (void **)node[1];
    idNode = node[2];
    idNode2 = node2[2];
    unitNode2 = fn_80016B7C(idNode2);
    unitNode = fn_80016B7C(idNode);
    if (unitNode2 != 0) {
        t = *(u8 *)(*(u8 **)((u8 *)unitNode2 + 0x190) + 8);
        if (t != 0 && t != 5 && t != 6 && t != 7) {
            unitNode2 = 0;
        }
    }
    if (unitNode != 0) {
        t = *(u8 *)(*(u8 **)((u8 *)unitNode + 0x190) + 8);
        if (t != 0 && t != 5 && t != 6 && t != 7) {
            unitNode = 0;
        }
    }
    if (unitNode2 == 0 && unitNode == 0) {
        swap = 1;
    } else if (unitNode2 == 0) {
        swap = 0;
    } else if (unitNode == 0) {
        swap = 1;
    } else {
        sNode2 = fn_80036E48(*arg1, idNode2);
        sNode = fn_80036E48(*arg1, idNode);
        sNode = (s8)sNode;
        sNode2 = (s8)sNode2;
        c0 = (u8)fn_80036F5C(*arg1, sNode);
        if ((u8)fn_80036F5C(*arg1, sNode2) != c0) {
            c0 = (u8)fn_80036F5C(*arg1, sNode);
            swap = (c0 <= (u8)fn_80036F5C(*arg1, sNode2));
        } else {
            c0 = fn_80036FC4(*arg1, sNode);
            swap = (c0 <= fn_80036FC4(*arg1, sNode2));
        }
    }
    if (swap) {
        tmp = node[0];
        node[0] = node[1];
        node[1] = tmp;
        tmp = node2[0];
        node2[0] = node2[1];
        node2[1] = tmp;
        tmp = (void *)arg0[1];
        arg0[1] = arg0[2];
        arg0[2] = (s32)tmp;
    }
    return;

split:
    half = (u32)cnt >> 1;
    it = (void **)arg0[2];
    if (half != 0) {
        n = half >> 3;
        if (n != 0) {
            do {
                it = (void **)it[1];
                it = (void **)it[1];
                it = (void **)it[1];
                it = (void **)it[1];
                it = (void **)it[1];
                it = (void **)it[1];
                it = (void **)it[1];
                it = (void **)it[1];
            } while (--n);
        }
        n = half & 7;
        if (n != 0) {
            do {
                it = (void **)it[1];
            } while (--n);
        }
    }
    sp14 = 0;
    sp1C = (void *)&sp18;
    sp18 = (void *)&sp18;
    left = (void **)arg0[1];
    ((void **)it[0])[1] = left[1];
    *(void **)left[1] = it[0];
    ((void **)sp18)[1] = it;
    it[0] = sp18;
    sp18 = (void *)left;
    left[1] = &sp18;
    sp14 = *arg0 - (s32)half;
    *arg0 = (s32)half;
    sp10 = *arg1;
    fn_80181DF0(arg0, &sp10);
    spC = *arg1;
    fn_80181DF0(&sp14, &spC);
    sp8 = *arg1;
    fn_8018212C(arg0, &sp14, &sp8);
    unitNode2 = sp1C;
    if (unitNode2 != (void *)&sp18) {
        ((void **)((void **)unitNode2)[0])[1] = ((void **)sp18)[1];
        *(void **)((void **)sp18)[1] = ((void **)unitNode2)[0];
        do {
            tmp = unitNode2;
            unitNode2 = ((void **)unitNode2)[1];
            fn_800C428C(tmp);
            sp14 -= 1;
        } while (unitNode2 != (void *)&sp18);
    }
}

#pragma use_lmw_stmw on
void fn_8018212C(s32 *arg0, s32 *arg1, void **arg2) {
    void *fn_80016B7C(void *);
    s32 fn_80036E48(void *, void *);
    s32 fn_80036F5C(void *, s32);
    u8 fn_80036FC4(void *, s32);
    void fn_80182514(s32 *, void **, s32 *);

    void *sp8;
    void **node;
    void **node2;
    void *sentinel2;
    void *sentinel1;
    void *id2;
    void *id1;
    void *unit2;
    void *unit1;
    u8 t;
    u8 take;
    s32 s2;
    s32 s1;
    s8 ss2;
    s8 ss1;
    u8 c0;
    u8 c1;
    void **walk;
    s32 count;
    void *link;

    if (arg0 == arg1) {
        return;
    }
    node = (void **)arg0[2];
    sentinel1 = (void *)(arg0 + 1);
    node2 = (void **)arg1[2];
    sentinel2 = (void *)(arg1 + 1);
    while (node != sentinel1 && node2 != sentinel2) {
        id2 = node2[2];
        id1 = node[2];
        unit2 = fn_80016B7C(id2);
        unit1 = fn_80016B7C(id1);
        if (unit2 != NULL) {
            t = *(u8 *)(*(u8 **)((u8 *)unit2 + 0x190) + 8);
            if (t != 0 && t != 5 && t != 6 && t != 7) {
                unit2 = NULL;
            }
        }
        if (unit1 != NULL) {
            t = *(u8 *)(*(u8 **)((u8 *)unit1 + 0x190) + 8);
            if (t != 0 && t != 5 && t != 6 && t != 7) {
                unit1 = NULL;
            }
        }
        if (unit2 == NULL && unit1 == NULL) {
            take = 1;
        } else if (unit2 == NULL) {
            take = 0;
        } else if (unit1 == NULL) {
            take = 1;
        } else {
            s2 = fn_80036E48(*arg2, id2);
            s1 = fn_80036E48(*arg2, id1);
            ss1 = (s8)s1;
            c0 = (u8)fn_80036F5C(*arg2, ss1);
            ss2 = (s8)s2;
            c1 = (u8)fn_80036F5C(*arg2, ss2);
            if (c1 != c0) {
                c0 = (u8)fn_80036F5C(*arg2, ss1);
                take = (c0 <= (u8)fn_80036F5C(*arg2, ss2));
            } else {
                c0 = fn_80036FC4(*arg2, ss1);
                take = (c0 <= fn_80036FC4(*arg2, ss2));
            }
        }
        if (take != 0) {
            walk = (void **)node2[1];
            count = 1;
            while (walk != sentinel2) {
                id2 = walk[2];
                id1 = node[2];
                unit2 = fn_80016B7C(id2);
                unit1 = fn_80016B7C(id1);
                if (unit2 != NULL) {
                    t = *(u8 *)(*(u8 **)((u8 *)unit2 + 0x190) + 8);
                    if (t != 0 && t != 5 && t != 6 && t != 7) {
                        unit2 = NULL;
                    }
                }
                if (unit1 != NULL) {
                    t = *(u8 *)(*(u8 **)((u8 *)unit1 + 0x190) + 8);
                    if (t != 0 && t != 5 && t != 6 && t != 7) {
                        unit1 = NULL;
                    }
                }
                if (unit2 == NULL && unit1 == NULL) {
                    take = 1;
                } else if (unit2 == NULL) {
                    take = 0;
                } else if (unit1 == NULL) {
                    take = 1;
                } else {
                    s2 = fn_80036E48(*arg2, id2);
                    s1 = fn_80036E48(*arg2, id1);
                    ss1 = (s8)s1;
                    c0 = (u8)fn_80036F5C(*arg2, ss1);
                    ss2 = (s8)s2;
                    c1 = (u8)fn_80036F5C(*arg2, ss2);
                    if (c1 != c0) {
                        c0 = (u8)fn_80036F5C(*arg2, ss1);
                        take = (c0 <= (u8)fn_80036F5C(*arg2, ss2));
                    } else {
                        c0 = fn_80036FC4(*arg2, ss1);
                        take = (c0 <= fn_80036FC4(*arg2, ss2));
                    }
                }
                if (take == 0) {
                    break;
                }
                walk = (void **)walk[1];
                count += 1;
            }
            link = walk[0];
            ((void **)((void **)node2[0])[1])[0] = ((void **)link)[1];
            *(void **)((void **)link)[1] = node2[0];
            ((void **)node[0])[1] = node2;
            node2[0] = node[0];
            node2 = walk;
            node[0] = link;
            ((void **)link)[1] = node;
            *arg1 -= count;
            *arg0 += count;
        }
        node = (void **)node[1];
    }
    if (node2 != sentinel2) {
        sp8 = node;
        fn_80182514(arg0, &sp8, arg1);
    }
}

#pragma use_lmw_stmw reset

void fn_80182514(u32 *arg0, ListNode **arg1, List *arg2)
{
    ListNode *list;
    ListNode *sentinel;
    ListNode *next;
    ListNode *prev;

    if (*(u32 *)arg2 == 0) {
        return;
    }

    sentinel = (ListNode *)((u8 *)arg2 + 4);
    list = *arg1;
    next = sentinel->next;
    prev = sentinel->prev;

    sentinel->next = sentinel;
    sentinel->prev = sentinel;

    list->prev->next = next;
    next->prev = list->prev;
    list->prev = prev;
    prev->next = list;

    *arg0 = *arg0 + *(u32 *)arg2;
    *(u32 *)arg2 = 0;
}

#pragma opt_common_subs reset
s32 fn_8018256C(void) {
    return 1;
}

s32 fn_80182574(s32 arg0) {
    void fn_8010AC58(s32);
    u8 fn_8010B658(s32);
    u8 fn_8010B8E4(s32);
    u8 fn_8010BB74(s32);
    u8 fn_8010BEB8(s32);
    u8 fn_8010C244(s32);
    u8 fn_8010C4B0(s32);
    u8 fn_8010C504(s32);
    u8 fn_8010F670(s32, void *);
    s32 fn_800FB5C8(void *);
    extern u8 lbl_8032B3C0[];
    if ((*(u8 *)(lbl_8032B3C0 + 1) & 4) != 0) {
        return 1;
    }
    if ((fn_8010F670(arg0, fn_800FB5C8) == 0) && (fn_8010C4B0(arg0) != 0) && (fn_8010C504(arg0) != 0)) {
        if (fn_8010C244(arg0) != 0) {
            return 1;
        }
        if (fn_8010BEB8(arg0) != 0) {
            return 1;
        }
        if (fn_8010BB74(arg0) != 0) {
            fn_8010AC58(arg0);
        } else if (fn_8010B8E4(arg0) != 0) {
            fn_8010AC58(arg0);
        } else if (fn_8010B658(arg0) != 0) {
            fn_8010AC58(arg0);
        }
        goto block_15;
    }
block_15:
    return 1;
}

s32 fn_80182704(void *arg0) {
    struct Obj {
        u8 pad0[0x236];
        u8 unk236;
        u8 pad237[0x254 - 0x237];
        u32 unk254;
    };
    s8 fn_80017290(u8 *);
    s8 fn_800172D4(u8 *);
    u8 fn_800BE968(u8, u8, u8);
    void fn_801014BC(void *, s16, s16, s32, u16, s32, s32, s32);
    void fn_80101448(void *, s16, s16, s32, u16, s32, s32, s32);
    extern u8 lbl_8032B3C0[];
    struct Obj *p = arg0;
    s8 temp_r30;
    s8 temp_r3;

    temp_r30 = fn_80017290(&p->unk236);
    temp_r3 = fn_800172D4(&p->unk236);
    if ((lbl_8032B3C0[1] & 2) || (p->unk254 & 0x03000000)) {
        return 0;
    }
    fn_801014BC(p, temp_r3, temp_r30, 1, 0xFFFF, 1, 0, -1);
    if (lbl_8032B3C0[0x21C] == 0) {
        fn_80101448(p, temp_r3, temp_r30, 1, 0xFFFF, 1, 0, -1);
    }
    if (lbl_8032B3C0[0x21C] != 0) {
        u8 d = ((u8 *)lbl_802EF4C8)[0xD];
        if ((s8)fn_800172D4(&p->unk236) == (s8)d) {
            u8 e = ((u8 *)lbl_802EF4C8)[0xE];
            if ((s8)fn_80017290(&p->unk236) == (s8)e) {
                if (fn_800BE968(0xE, ((u8 *)lbl_802EF4C8)[0xD], ((u8 *)lbl_802EF4C8)[0xE]) != 0) {
                    ((u8 *)lbl_802EF4C8)[0x8] = 0xE;
                }
            }
        }
    }
    return 1;
}

s32 fn_8018286C(s32 arg0, s32 arg1) {
    if (arg0 < 0 || arg1 < 0) {
        return -1;
    }
    
    if (arg0 == 0) {
        if (arg1 == 0) return 0x12C;
        if (arg1 == 1) return 0x1F4;
        if (arg1 == 2) return 0x258;
    } else if (arg0 == 1) {
        if (arg1 == 0) return 0x12C;
        if (arg1 == 1) return 0x1F4;
        if (arg1 == 2) return 0x258;
    } else if (arg0 == 2) {
        if (arg1 == 0) return 0x12C;
        if (arg1 == 1) return 0x1F4;
        if (arg1 == 2) return 0x258;
    }
    
    return -1;
}

s32 fn_80182A0C(s32 arg0) {
    extern u8 fn_80182C84[];
    
    if (fn_8010F52C(fn_80182C84) == 0) {
        if (fn_8018D4CC(arg0, fn_80182C84) == 0) {
            if (fn_800F5504(fn_80182C84, 0xF) == 0) {
                s16 var_r5;
                s16 var_r4;
                if (fn_80101F0C(fn_80182C84, arg0, &var_r5, &var_r4) != 0) {
                    fn_801014BC(arg0, var_r5, var_r4, 1, 0xFFFF, 1, 0, -1);
                }
            }
        }
    }
    return 1;
}

s32 fn_80182AC4(s32 arg0) {
    u8 fn_800F5504(u8 *, s32);
    void fn_801014BC(s32, s16, s16, s32, u16, s32, s32, s32);
    u8 fn_80101F0C(u8 *, s32, s16 *, s16 *);
    u8 fn_8010F52C(s32, u8 *);
    u8 fn_8018D4CC(s32, u8 *);
    extern u8 fn_800FB5C8[];
    extern u8 fn_80182CE4[];
    s16 spA;
    s16 sp8;

    if ((fn_8010F52C(arg0, fn_800FB5C8) == 0) && (fn_8018D4CC(arg0, fn_800FB5C8) == 0) && (fn_800F5504(fn_80182CE4, 0xF) == 0) && (fn_80101F0C(fn_80182CE4, arg0, &spA, &sp8) != 0)) {
        fn_801014BC(arg0, spA, sp8, 1, 0xFFFF, 1, 0, -1);
    }
    return 1;
}

s32 fn_80182B7C(s32 arg0) {
    void *fn_80017240(s32);
    u8 fn_800F5504(u8 *, s32);
    void fn_801014BC(s32, s16, s16, s32, u16, s32, s32, s32);
    u8 fn_80101F0C(u8 *, s32, s16 *, s16 *);
    u8 fn_8010F52C(s32, u8 *);
    u8 fn_8018D4CC(s32, u8 *);
    extern u8 fn_80182E80[];
    extern u8 lbl_8032B3C0[];
    s16 spA;
    s16 sp8;
    s32 temp_r3;

    temp_r3 = *(s32 *)((u8 *)fn_80017240(arg0 + 0x236) + 0x1A0);
    if (temp_r3 & 0x98) {
        *(s32 *)(lbl_8032B3C0 + 8) = 1;
        return 0;
    }
    if (temp_r3 & 4) {
        *(s32 *)(lbl_8032B3C0 + 8) = 4;
        return 0;
    }
    if ((fn_8010F52C(arg0, fn_80182E80) == 0) && (fn_8018D4CC(arg0, fn_80182E80) == 0) &&
        (fn_800F5504(fn_80182E80, 0xF) == 0) &&
        (fn_80101F0C(fn_80182E80, arg0, &spA, &sp8) != 0)) {
        fn_801014BC(arg0, spA, sp8, 1, 0xFFFF, 1, 0, -1);
    }
    return 1;
}

void fn_80182C84(void *arg0)
{
    void *ptr = M2C_FIELD(arg0, void **, 0x62);
    if (ptr != 0)
    {
        M2C_FIELD(arg0, void **, 0x62) = 0;
    }
}

s32 fn_80182CE4(s32 arg0, s32 arg1) {
    if (arg0 < 0 || arg0 >= 0x190) {
        return -1;
    }

    switch(arg1) {
        case 0:
            return lbl_802EF4C8[arg0];
        case 1:
            return lbl_80278080[arg0];
        case 2:
            return lbl_80294604[arg0];
        case 3:
            return *((u16 *)&lbl_803680E8 + arg0) & 0xFF;
        case 4:
            return lbl_80330708[arg0];
        default:
            return -1;
    }
}

s32 fn_80182E80(s32 arg0) {
    s32 fn_80017240(void *);
    extern u32 lbl_802EF4C8[];

    return arg0 == fn_80017240((u8 *)*(void **)lbl_802EF4C8 + 0x236);
}

void fn_80182F50(void) {
    void fn_8014CBD8(void *, f32, f32);
    void fn_8004A1F0();

    fn_8014CBD8(lbl_80330708, (f32) (s8) ((u8 *)lbl_802EF4C8)[0xD], (f32) (s8) ((u8 *)lbl_802EF4C8)[0xE]);
    fn_8004A1F0();
}

void fn_801832F8(s32 arg0) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[440];
    extern u8 lbl_80368208[8];
    u8 val = *((u8 *)lbl_802EF4C8 + 8);

    lbl_803681F0 = val;
    if (val == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0xF8]);
        fn_80091A1C();
    } else {
        fn_8000E0E4(&lbl_80278BB8[0x102]);
        fn_80091A1C();
    }
    fn_80024398(lbl_80368208, arg0, 0);
}

#include "common.h"
extern u32 lbl_802EF4C8[];
extern u16 lbl_80278080[];
extern u16 lbl_80294550[];
extern f32 lbl_8036AB94;
extern u16 lbl_80277EA0;
extern u16 lbl_80293D8C;
extern void *lbl_8028D9A4[];
extern u8 lbl_80367220;
extern s32 lbl_80367228;
extern s32 lbl_8036722C;
#include <common.h>
#include "global.h"
#include "unit.h"

extern u16* gSomeBssVar; // lbl_802EF4C8
#include "common.h"
#include "dolphin/os.h"
extern u16 lbl_80292230[];
extern u16 lbl_8028FDB0[];
extern u16 lbl_80292208[];
extern u16 lbl_80292488[];
extern f32 lbl_8036AB6C;
extern f32 lbl_8036AB70;
#include "global.h"

extern f32 lbl_8036A9CC;
extern f32 lbl_8036A9D8;
extern f32 lbl_8036A9DC;
extern f32 lbl_8036A9E0;
extern f64 lbl_8036A9B8;
extern u16 lbl_80293BB8;
