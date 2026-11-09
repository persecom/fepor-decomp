/* temporary body used for one compile_and_diff; safe to delete */
#if 0
    struct H {
        u8 pad[0x40];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void setTex(void *) = 0;
        virtual void setPos(f32, f32, f32) = 0;
        virtual void setPos2(f32, f32, f32) = 0;
    };
    s32 fn_800D3590(void *);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800CF588(void *, void *);
    void fn_800C9A60(void *, s32);
    void fn_800CAE38(void *);
    void fn_8011631C(void *, s32);
    void fn_80116944(void *);
    s32 fn_80112F3C(void *);
    void fn_80116988(void *, s32, f32);
    void fn_800CF3E0(void *);
    s32 fn_800BED64(void);
    void fn_800E7C94(void *, void *, s32, f32);
    void fn_800BEEF4(void *);
    void fn_800CDEB0(void *);
    void fn_800E76E0(void *, f32);
    void fn_800CAD4C(void *, s32, s32);
    void fn_800CA990(void *);
    s32 fn_800CD590(void *);
    s32 fn_800CD53C(void *);
    void fn_800CF27C(void *, s32, s32);
    s32 fn_80115AF0(void *);
    s32 fn_80115C0C(void *, s32);
    s32 fn_80113878(void *);
    void fn_800CF500(void *, void *, void *);
    s32 fn_800E56C4(void *);
    void fn_80115264(void *, s32, s32);
    void fn_800DA330(void);
    void fn_800CADF8(void *);
    s32 fn_800E5248(void *, s32);
    void fn_800CAC7C(void *);
    void fn_80114AF0(void *, s32, s32, s32);
    void fn_801968FC(void *, s32, s32, void *);
    void fn_801968CC(void *);
    void fn_801968CC2(void *, s32);
    void fn_800E77A0(void *, s32, s32, f32);
    void fn_80114840(void *);
    void fn_801146BC(void *);
    void fn_80114124(void *, s32);
    s32 fn_80112F44(void *);
    void fn_80113A24(void *, s32);
    s32 fn_8011390C(void *);
    s32 fn_801138E8(void *);
    s32 fn_800CD630(void *);
    void fn_801166C4(void *, s32);
    void fn_80113BA0(void *);
    s32 fn_80116580(void *);
    s32 fn_80116604(void *);
    s32 fn_80198640(s32);
    void fn_80112E30(void *);
    void fn_800CF2C8(void *, s32, s32);
    s32 fn_8011654C(void *);
    void fn_80112DFC(void *, s32);
    void fn_801165B4(void *, void *);
    void fn_800CB90C(void *, void *, char *);
    s32 fn_800D3534(void *, char *);
    void fn_80111AE8(void *, void *, s32);
    void fn_800CA91C(void *);
    void fn_800DF670(void *);
    void fn_800DF664(void *);
    void fn_80113F88(void *);
    s32 fn_80113F68(void *);
    void fn_800E56CC(void *);
    void fn_801B6164(void *);
    s32 fn_801B6098(void *);
    void fn_800E76D0(void *, s32);
    void fn_800E80D8(void *, void *, void *);
    void fn_800E805C(void *, void *, void *);
    void fn_800E574C(void *, char *, f32, s32, s32, s32, s32);
    void fn_800E7D10(void *, void *);
    void fn_80199318(void *, s32);
    void fn_800C9B6C(void *, void *);
    s32 fn_80113894(void *);
    void fn_800E4BE0(void *, s32, f32, s32);
    s32 fn_80199028(s32);
    s32 fn_800E4BD8(void *);
    s32 fn_8011388C(void *);
    void fn_800CD5E4(void *);
    extern void *lbl_80367240;
    extern u8 lbl_8036788C;
    extern void *lbl_80368278;
    extern f32 lbl_80369DC8;
    extern f32 lbl_80369E0C;
    extern f32 lbl_80369E10;
    extern f32 lbl_80369DD4;
    extern f32 lbl_80369E14;
    extern f32 lbl_80369E1C;
    extern f32 lbl_80369E20;
    extern void *lbl_80367884;
    extern u8 lbl_80367878;
    extern void *lbl_8036787C;
    extern char lbl_802704F8[];

    u8 str0[12], str1[12], str2[12], str3[12], str4[12];
    u8 str5[12], str6[12], str7[12], str8[12], str9[12];
    u8 strA[12], strB[12], strC[12], strD[12], strE[12];
    u8 strF[12], strG[12], strH[12], strI[12], strJ[12];
    u8 strK[12], strL[12], strM[12], strN[12], strO[12];
    u8 strP[12], strQ[12], strR[12], strS[12], strT[12];
    u8 strU[12], strV[12], strW[12], strX[12], strY[12];
    u8 strZ[12], strPad[12];
    s32 sc0, sc1, sc2, sc3, sc4, sc5, sc6, sc7, sc8, sc9;
    s32 scA, scB, scC, scD, scE, scF, scG, scH, scI, scJ;
    s32 scK, scL, scM, scN, scO, scW, scX, scY, scZ, scPad;
    H *obj;
    f32 f1;
    s32 sub;
    s32 r27;
    s32 r28;
    s32 r30;
    s32 state;
    void *self = arg0;

    fn_800D3590(lbl_80367240);
    state = *(u32 *)((u8 *)self + 0xC);
    r28 = 0;
    r30 = 0;
    if (state <= 0x39U) {
        switch (state) {
        case 0:
            if (lbl_8036788C != 0) {
                *(u32 *)((u8 *)self + 0xC) = 0x31;
                *(s32 *)((u8 *)self + 0x17C) = -1;
                return 0;
            }
            fn_800C9ABC(str0, lbl_802704F8 + 0x5BE, &sc0);
            fn_800CF588(self, str0);
            fn_800C9A60(str0, -1);
            *(u32 *)((u8 *)self + 0x180) = 0;
            *(u32 *)((u8 *)self + 0x17C) = 0;
            fn_800CAE38(self);
            fn_8011631C(*(void **)((u8 *)self + 0x90), 0);
            fn_8011631C(*(void **)((u8 *)self + 0x94), 0);
            obj = *(H **)((u8 *)self + 0x90);
            obj->setTex((u8 *)lbl_80368278 + 0xC);
            fn_80116944(*(void **)((u8 *)self + 0x90));
            obj = *(H **)((u8 *)self + 0x94);
            obj->setTex((u8 *)lbl_80368278 + 0x18);
            fn_80116944(*(void **)((u8 *)self + 0x94));
            obj = *(H **)((u8 *)self + 0x90);
            f1 = lbl_80369DC8;
            obj->setPos(f1, lbl_80369E0C, f1);
            obj = *(H **)((u8 *)self + 0x94);
            f1 = lbl_80369DC8;
            obj->setPos(f1, lbl_80369E10, f1);
            if (*(s32 *)((u8 *)self + 0x228) == 1) {
                if (*(s32 *)((u8 *)self + 0x270) != 0) {
                    if ((u8)fn_80112F3C(*(void **)((u8 *)self + 0x94)) == 0)
                        fn_80116988(*(void **)((u8 *)self + 0x94), 0, lbl_80369DD4);
                    else
                        fn_80116988(*(void **)((u8 *)self + 0x90), 0, lbl_80369E14);
                } else if ((u8)fn_80112F3C(*(void **)((u8 *)self + 0x90)) == 0) {
                    fn_80116988(*(void **)((u8 *)self + 0x90), 0, lbl_80369E14);
                } else {
                    fn_80116988(*(void **)((u8 *)self + 0x94), 0, lbl_80369DD4);
                }
            }
            obj = *(H **)((u8 *)self + 0x98);
            if (obj != NULL) {
                if (*(s32 *)((u8 *)self + 0x274) == 0) {
                    f1 = lbl_80369DC8;
                    obj->setPos(f1, lbl_80369E0C, f1);
                    fn_80116988(*(void **)((u8 *)self + 0x98), 1, lbl_80369E14);
                } else {
                    f1 = lbl_80369DC8;
                    obj->setPos(f1, lbl_80369E10, f1);
                    fn_80116988(*(void **)((u8 *)self + 0x98), 1, lbl_80369DD4);
                }
                fn_8011631C(*(void **)((u8 *)self + 0x98), 0);
            }
            *(u8 *)((u8 *)self + 0x184) = 0;
            fn_800CF3E0(self);
            {
                f32 t = *(f32 *)((u8 *)lbl_80368278 + 0x148);
                *(s32 *)((u8 *)self + 0x1AC) = (s32)t;
            }
            *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x34);
            (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 1:
            if (--(*(s32 *)((u8 *)self + 0x10)) <= 0)
                (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 2:
            if ((u8)fn_800BED64()) {
                fn_800C9ABC(str1, lbl_802704F8 + 0x563, &sc1);
                fn_800E7C94(*(void **)((u8 *)self + 4), str1, 4, *(f32 *)((u8 *)lbl_80368278 + 0x60));
                fn_800C9A60(str1, -1);
                fn_800C9ABC(str2, lbl_802704F8 + 0x56A, &sc2);
                fn_800E7C94(*(void **)((u8 *)self + 4), str2, 4, *(f32 *)((u8 *)lbl_80368278 + 0x60));
                fn_800C9A60(str2, -1);
                r30 = 1;
            }
            fn_800BEEF4(lbl_80367884);
            (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 3:
            if (lbl_80367878 == 0) {
                fn_800C9ABC(str3, lbl_802704F8 + 0x563, &sc3);
                fn_800E7C94(*(void **)((u8 *)self + 4), str3, 1, *(f32 *)((u8 *)lbl_80368278 + 0x64));
                fn_800C9A60(str3, -1);
                fn_800C9ABC(str4, lbl_802704F8 + 0x56A, &sc4);
                fn_800E7C94(*(void **)((u8 *)self + 4), str4, 1, *(f32 *)((u8 *)lbl_80368278 + 0x64));
                fn_800C9A60(str4, -1);
            }
            (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 4:
            fn_800CDEB0(self);
            if (*(s32 *)((u8 *)self + 0x214) == 0 && *(s32 *)((u8 *)self + 0x20C) > 1)
                *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x44);
            else
                *(u32 *)((u8 *)self + 0x10) = 0;
            (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 5:
            if (--(*(s32 *)((u8 *)self + 0x10)) <= 0) {
                fn_800E76E0(*(void **)((u8 *)self + 4), *(f32 *)((u8 *)lbl_80368278 + 0x98));
                sub = *(u32 *)((u8 *)self + 0x210);
                if (sub <= 0xDU) {
                    switch (sub) {
                    case 0:
                        *(u32 *)((u8 *)self + 0xC) = (*(s32 *)((u8 *)self + 0x228) == 1) ? 9 : 0x16;
                        break;
                    case 1:
                        *(u32 *)((u8 *)self + 0xC) = (*(s32 *)((u8 *)self + 0x228) == 1) ? 0xE : 0x16;
                        break;
                    case 8:
                        *(u32 *)((u8 *)self + 0xC) = (*(s32 *)((u8 *)self + 0x228) == 1) ? 0x12 : 0x16;
                        break;
                    case 2: case 3: case 4:
                        *(u32 *)((u8 *)self + 0xC) = 0x19;
                        break;
                    case 5: case 6: case 7:
                        *(u32 *)((u8 *)self + 0xC) = 0x1D;
                        break;
                    case 9: case 10:
                        *(u32 *)((u8 *)self + 0xC) = 0x21;
                        break;
                    case 11:
                        *(u32 *)((u8 *)self + 0xC) = 0x25;
                        break;
                    case 12:
                        fn_8011631C(*(void **)((u8 *)self + 0x90), 1);
                        fn_8011631C(*(void **)((u8 *)self + 0x94), 1);
                        *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x38);
                        *(u32 *)((u8 *)self + 0xC) = 0x2C;
                        break;
                    case 13:
                        *(u32 *)((u8 *)self + 0xC) = 4;
                        fn_800CAD4C(self, 0, 1);
                        break;
                    }
                }
            }
            break;
        case 6:
            fn_800CA990(self);
            r30 = 1;
            (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 7:
            if ((u8)fn_800CD590(self)) {
                *(s32 *)((u8 *)self + 0x10) = fn_800CD53C(self);
                if (*(s32 *)((u8 *)self + 0x25C) != 0 && *(s32 *)((u8 *)self + 0x26C) == 0)
                    *(s32 *)((u8 *)self + 0x10) -= *(s32 *)((u8 *)lbl_80368278 + 0x1B4);
                r30 = 1;
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 8:
            if (--(*(s32 *)((u8 *)self + 0x10)) <= 0) {
                if (*(s32 *)((u8 *)self + 0x25C) != 0) {
                    *(s32 *)((u8 *)self + 0x10) = r28;
                    *(u32 *)((u8 *)self + 0xC) = *(u32 *)((u8 *)self + 0x14);
                    *(u8 *)((u8 *)self + 0x1A5) = (u8)r28;
                    fn_800CF27C(self, 0xA, 1);
                } else {
                    *(s32 *)((u8 *)self + 0x10) = r28;
                    *(u32 *)((u8 *)self + 0xC) = 6;
                }
            }
            break;
        case 9:
            if ((u8)fn_80115AF0(*(void **)((u8 *)self + 0x9C)) == 0
                && (u8)fn_80115C0C(*(void **)((u8 *)self + 0x9C), 0) != 0) {
                if ((u8)fn_80113878(*(void **)((u8 *)self + 0x9C))) {
                    *(s32 *)((u8 *)self + 0x10) = 2;
                    r30 = 1;
                    (*(u32 *)((u8 *)self + 0xC))++;
                } else {
                    *(u32 *)((u8 *)self + 0xC) = 0xB;
                }
            } else {
                fn_800CF500(self, (u8 *)self + 0xC4, *(void **)((u8 *)self + 0x9C));
            }
            break;
        case 10:
            if (--(*(s32 *)((u8 *)self + 0x10)) < 0) {
                if ((u8)fn_800E56C4(*(void **)((u8 *)self + 0x9C)) == 0
                    && (u8)fn_80115C0C(*(void **)((u8 *)self + 0x9C), 0) != 0)
                    (*(u32 *)((u8 *)self + 0xC))++;
                else
                    fn_800CF500(self, (u8 *)self + 0xC4, *(void **)((u8 *)self + 0x9C));
            }
            break;
        case 11:
            if ((u8)fn_800E56C4(*(void **)((u8 *)self + 0x9C)) == 0) {
                *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x3C);
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 12:
            if (--(*(s32 *)((u8 *)self + 0x10)) < 0) {
                fn_80115264(*(void **)((u8 *)self + 0x9C), 0, *(s32 *)((u8 *)self + 0x218));
                fn_800CF500(self, (u8 *)self + 0xD0, *(void **)((u8 *)self + 0x9C));
                *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x40);
                (*(u32 *)((u8 *)self + 0xC))++;
                fn_800CAD4C(self, 1, 0);
            }
            break;
        case 13:
            if (*(s32 *)((u8 *)self + 0x21C) == 0 || *(s32 *)((u8 *)self + 0x21C) == 3) {
                if ((u8)fn_800E5248(*(void **)((u8 *)self + 0x9C), 0)) {
                    fn_800CAC7C(self);
                    if (*(s32 *)((u8 *)self + 0x224) < 0) {
                        fn_80114AF0(*(void **)((u8 *)self + 0xA0), 0, 0, (*(s32 *)((u8 *)self + 0x21C) == 3));
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), *(s32 *)((u8 *)self + 0x224), 0, (u8 *)self + 0x1F0);
                        fn_800E77A0(*(void **)((u8 *)self + 4), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x80));
                    } else if (*(s32 *)((u8 *)self + 0x224) > 0) {
                        fn_801968CC(*(void **)((u8 *)self + 0xAC));
                    } else {
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), 0, 0, (u8 *)self + 0x1F0);
                        fn_80114840(*(void **)((u8 *)self + 0xA0));
                    }
                    if (*(s32 *)((u8 *)self + 0x220) < 0)
                        fn_801968FC(*(void **)((u8 *)self + 0xB0), *(s32 *)((u8 *)self + 0x224), 0, (u8 *)self + 0x1F0);
                    else if (*(s32 *)((u8 *)self + 0x220) > 0)
                        fn_801968CC(*(void **)((u8 *)self + 0xB0));
                    fn_800CAD4C(self, 2, 0);
                }
            } else if ((u8)fn_800E5248(*(void **)((u8 *)self + 0x9C), 1)) {
                fn_801146BC(*(void **)((u8 *)self + 0xA0));
                fn_80114124(*(void **)((u8 *)self + 0xA0), *(s32 *)((u8 *)self + 0x218));
            }
            if (!((u8)fn_800E56C4(*(void **)((u8 *)self + 0x9C)) != 0
                  && (u8)fn_80112F44(*(void **)((u8 *)self + 0x9C)) == 0)) {
                if (--(*(s32 *)((u8 *)self + 0x10)) <= 0)
                    *(u32 *)((u8 *)self + 0xC) = (*(s32 *)((u8 *)self + 0x21C) == 3) ? 0x28 : 4;
            }
            break;
        case 14:
            *(s32 *)((u8 *)self + 0x10) = (*(s32 *)((u8 *)self + 0x21C) == 3) ? 2 : 1;
            if ((u8)fn_80115AF0(*(void **)((u8 *)self + 0x9C)) == 0
                && (u8)fn_80115C0C(*(void **)((u8 *)self + 0x9C), *(s32 *)((u8 *)self + 0x10)) != 0)
                (*(u32 *)((u8 *)self + 0xC))++;
            else
                fn_800CF500(self, (u8 *)self + 0xC4, *(void **)((u8 *)self + 0x9C));
            break;
        case 15:
            if ((u8)fn_800E56C4(*(void **)((u8 *)self + 0x9C)) == 0) {
                *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x48);
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 16:
            if (*(s32 *)((u8 *)self + 0x21C) != 3) {
                fn_80115264(*(void **)((u8 *)self + 0x9C), 1, *(s32 *)((u8 *)self + 0x218));
                fn_800CF500(self, (u8 *)self + 0xE8, *(void **)((u8 *)self + 0x9C));
            } else {
                fn_80115264(*(void **)((u8 *)self + 0x9C), 2, *(s32 *)((u8 *)self + 0x218));
                fn_800CF500(self, (u8 *)self + 0xF4, *(void **)((u8 *)self + 0x9C));
            }
            *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x40);
            (*(u32 *)((u8 *)self + 0xC))++;
            fn_800CAD4C(self, 1, 0);
            break;
        case 17:
            if ((u8)fn_800E5248(*(void **)((u8 *)self + 0x9C), 0)) {
                fn_800CAC7C(self);
                if (*(s32 *)((u8 *)self + 0x224) < 0) {
                    fn_80114AF0(*(void **)((u8 *)self + 0xA0), 1, 0, (*(s32 *)((u8 *)self + 0x21C) == 3));
                    fn_801968FC(*(void **)((u8 *)self + 0xAC), *(s32 *)((u8 *)self + 0x224), 1, (u8 *)self + 0x1F0);
                    fn_800E77A0(*(void **)((u8 *)self + 4), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x84));
                } else if (*(s32 *)((u8 *)self + 0x224) > 0) {
                    fn_801968CC(*(void **)((u8 *)self + 0xAC));
                } else {
                    fn_801968FC(*(void **)((u8 *)self + 0xAC), 0, 0, (u8 *)self + 0x1F0);
                    fn_80114840(*(void **)((u8 *)self + 0xA0));
                }
                if (*(s32 *)((u8 *)self + 0x220) < 0)
                    fn_801968FC(*(void **)((u8 *)self + 0xB0), *(s32 *)((u8 *)self + 0x220), 0, (u8 *)self + 0x1F0);
                else if (*(s32 *)((u8 *)self + 0x220) > 0)
                    fn_801968CC(*(void **)((u8 *)self + 0xB0));
                fn_800CAD4C(self, 2, 0);
            }
            if (!((u8)fn_800E56C4(*(void **)((u8 *)self + 0x9C)) != 0
                  && (u8)fn_80112F44(*(void **)((u8 *)self + 0x9C)) == 0)) {
                if (--(*(s32 *)((u8 *)self + 0x10)) <= 0)
                    *(u32 *)((u8 *)self + 0xC) = (*(s32 *)((u8 *)self + 0x21C) == 3) ? 0x28 : 4;
            }
            break;
        case 18:
            if ((u8)fn_80115C0C(*(void **)((u8 *)self + 0x9C), 3))
                (*(u32 *)((u8 *)self + 0xC))++;
            else
                fn_800CF500(self, (u8 *)self + 0xC4, *(void **)((u8 *)self + 0x9C));
            break;
        case 19:
            obj = *(H **)((u8 *)self + 0x9C);
            if (!(u8)((s32 (*)(H *))M2C_FIELD(obj, void **, 0x48))(obj)) {
                *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x4C);
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 20:
            fn_80115264(*(void **)((u8 *)self + 0x9C), 3, 0);
            fn_800CF500(self, (u8 *)self + 0xD0, *(void **)((u8 *)self + 0x9C));
            *(u32 *)((u8 *)self + 0x18) = 0;
            (*(u32 *)((u8 *)self + 0xC))++;
            fn_800CAD4C(self, 1, 0);
            break;
        case 21:
            if ((u8)fn_800E5248(*(void **)((u8 *)self + 0x9C), 0)) {
                if (*(s32 *)((u8 *)self + 0x18) != 0) {
                    if (*(s32 *)((u8 *)self + 0x21C) != 3 && lbl_80367878 == 0)
                        fn_800CDEB0(self);
                    else
                        *(s32 *)((u8 *)self + 0x224) = -0x1A0A;
                }
                if (*(s32 *)((u8 *)self + 0x21C) == 2) {
                    fn_801146BC(*(void **)((u8 *)self + 0xA0));
                    fn_80114124(*(void **)((u8 *)self + 0xA0), *(s32 *)((u8 *)self + 0x218));
                    *(s32 *)((u8 *)self + 0x18) = 1;
                } else {
                    fn_800CAC7C(self);
                    if (*(s32 *)((u8 *)self + 0x224) == -0x1A0A) {
                        fn_80114AF0(*(void **)((u8 *)self + 0xA0), 3, 0, (*(s32 *)((u8 *)self + 0x21C) == 3));
                        fn_800E77A0(*(void **)((u8 *)self + 4), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x88));
                    } else if (*(s32 *)((u8 *)self + 0x224) < 0) {
                        fn_80114AF0(*(void **)((u8 *)self + 0xA0), 3, 0, (*(s32 *)((u8 *)self + 0x21C) == 3));
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), *(s32 *)((u8 *)self + 0x224), 1, (u8 *)self + 0x1F0);
                        fn_800E77A0(*(void **)((u8 *)self + 4), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x88));
                    } else if (*(s32 *)((u8 *)self + 0x224) > 0) {
                        fn_801968CC(*(void **)((u8 *)self + 0xAC));
                    } else {
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), 0, 0, (u8 *)self + 0x1F0);
                        fn_80114840(*(void **)((u8 *)self + 0xA0));
                    }
                    if (*(s32 *)((u8 *)self + 0x220) < 0)
                        fn_801968FC(*(void **)((u8 *)self + 0xB0), *(s32 *)((u8 *)self + 0x220), 0, (u8 *)self + 0x1F0);
                    else if (*(s32 *)((u8 *)self + 0x220) > 0)
                        fn_801968CC(*(void **)((u8 *)self + 0xB0));
                    *(s32 *)((u8 *)self + 0x18) = 1;
                    if (*(s32 *)((u8 *)self + 0x244) == 0x1B)
                        fn_800CAD4C(self, 2, 0);
                }
            }
            if (!((u8)fn_800E56C4(*(void **)((u8 *)self + 0x9C)) != 0
                  && (u8)fn_80112F44(*(void **)((u8 *)self + 0x9C)) == 0)) {
                if ((u8)fn_80113878(*(void **)((u8 *)self + 0x9C)))
                    fn_80112E30(*(void **)((u8 *)self + 0xA0));
                *(u32 *)((u8 *)self + 0xC) = (*(s32 *)((u8 *)self + 0x21C) == 3) ? 0x28 : 4;
            }
            break;
        case 22:
            r28 = (*(u32 *)((u8 *)self + 0x210) == 1) ? 1 : 0;
            if (r28 == 1 && *(s32 *)((u8 *)self + 0x21C) == 3)
                r28 = 2;
            if (*(u32 *)((u8 *)self + 0x210) == 8)
                r28 = 3;
            fn_80115264(*(void **)((u8 *)self + 0x9C), r28, *(s32 *)((u8 *)self + 0x218));
            fn_800CF500(self, (u8 *)self + 0x100, *(void **)((u8 *)self + 0x9C));
            (*(u32 *)((u8 *)self + 0xC))++;
            fn_800CAD4C(self, 1, 0);
            break;
        case 23:
            if ((u8)fn_800E5248(*(void **)((u8 *)self + 0x9C), 0)) {
                fn_80113A24(*(void **)((u8 *)self + 0x9C), 1);
                fn_800CF500(self, (u8 *)self + 0x160, NULL);
                *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x40);
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 24:
            if (*(s32 *)((u8 *)self + 0x21C) == 0 || *(s32 *)((u8 *)self + 0x21C) == 1
                || *(s32 *)((u8 *)self + 0x21C) == 3) {
                if ((u8)fn_8011390C(*(void **)((u8 *)self + 0x9C))) {
                    fn_800CAC7C(self);
                    if (*(s32 *)((u8 *)self + 0x224) < 0) {
                        fn_80114AF0(*(void **)((u8 *)self + 0xA0), 0, 0, (*(s32 *)((u8 *)self + 0x21C) == 3));
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), *(s32 *)((u8 *)self + 0x224), 0, (u8 *)self + 0x1F0);
                        fn_800E77A0(*(void **)((u8 *)self + 4), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x80));
                    } else if (*(s32 *)((u8 *)self + 0x224) > 0) {
                        fn_801968CC(*(void **)((u8 *)self + 0xAC));
                    } else {
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), 0, 0, (u8 *)self + 0x1F0);
                        fn_80114840(*(void **)((u8 *)self + 0xA0));
                    }
                    if (*(s32 *)((u8 *)self + 0x220) < 0)
                        fn_801968FC(*(void **)((u8 *)self + 0xB0), *(s32 *)((u8 *)self + 0x220), 0, (u8 *)self + 0x1F0);
                    else if (*(s32 *)((u8 *)self + 0x220) > 0)
                        fn_801968CC(*(void **)((u8 *)self + 0xB0));
                    fn_800CAD4C(self, 2, 0);
                }
            } else if ((u8)fn_801138E8(*(void **)((u8 *)self + 0x9C))) {
                fn_801146BC(*(void **)((u8 *)self + 0xA0));
                fn_80114124(*(void **)((u8 *)self + 0xA0), *(s32 *)((u8 *)self + 0x218));
            }
            if ((u8)fn_800CD630(self)) {
                if (!((u8)fn_800E56C4(*(void **)((u8 *)self + 0x9C)) != 0
                      && (u8)fn_80112F44(*(void **)((u8 *)self + 0x9C)) == 0)) {
                    if (--(*(s32 *)((u8 *)self + 0x10)) <= 0)
                        *(u32 *)((u8 *)self + 0xC) = (*(s32 *)((u8 *)self + 0x21C) == 3) ? 0x28 : 4;
                }
            }
            break;
        case 25: *(u32 *)((u8 *)self + 0xC) = 25; break;
        case 26:
            if ((u8)fn_800E5248(*(void **)((u8 *)self + 0x9C), 0xE))
                fn_801166C4(*(void **)((u8 *)self + 0x9C), 0);
            if (!((u8)fn_800E5248(*(void **)((u8 *)self + 0x9C), 2) == 0
                  && (u8)fn_800E56C4(*(void **)((u8 *)self + 0x9C)) != 0)) {
                fn_80113BA0(*(void **)((u8 *)self + 0x9C));
                {
                    s32 t = fn_80116580(*(void **)((u8 *)self + 0x9C));
                    if (t == 3 || t == 6)
                        fn_800CF500(self, (u8 *)self + 0x160, NULL);
                }
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 27:
            if ((u8)fn_80198640(fn_80116604(*(void **)((u8 *)self + 0x9C)))) {
                r27 = (*(u32 *)((u8 *)self + 0x210) == 4) ? 3 : ((*(u32 *)((u8 *)self + 0x210) == 3) ? 1 : 0);
                if (*(u32 *)((u8 *)self + 0x210) == 3 || *(u32 *)((u8 *)self + 0x210) == 4
                    || *(s32 *)((u8 *)self + 0x21C) == 0 || *(s32 *)((u8 *)self + 0x21C) == 3) {
                    fn_800CAC7C(self);
                    if (*(s32 *)((u8 *)self + 0x224) < 0) {
                        fn_80114AF0(*(void **)((u8 *)self + 0xA0), r27, 0, (*(s32 *)((u8 *)self + 0x21C) == 3));
                        fn_80112E30(*(void **)((u8 *)self + 0xA0));
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), *(s32 *)((u8 *)self + 0x224), 0, (u8 *)self + 0x1F0);
                        fn_800E77A0(*(void **)((u8 *)self + 4), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x8C));
                    } else {
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), 0, 0, (u8 *)self + 0x1F0);
                        fn_80114840(*(void **)((u8 *)self + 0xA0));
                        fn_80112E30(*(void **)((u8 *)self + 0xA0));
                    }
                    if (*(s32 *)((u8 *)self + 0x220) < 0)
                        fn_801968FC(*(void **)((u8 *)self + 0xB0), *(s32 *)((u8 *)self + 0x220), 0, (u8 *)self + 0x1F0);
                    else if (*(s32 *)((u8 *)self + 0x220) > 0)
                        fn_801968CC(*(void **)((u8 *)self + 0xB0));
                } else {
                    fn_801146BC(*(void **)((u8 *)self + 0xA0));
                    fn_80114124(*(void **)((u8 *)self + 0xA0), *(s32 *)((u8 *)self + 0x218));
                    fn_80112E30(*(void **)((u8 *)self + 0xA0));
                }
                *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x50);
                (*(u32 *)((u8 *)self + 0xC))++;
                fn_800CAD4C(self, 2, 0);
            }
            break;
        case 28: *(u32 *)((u8 *)self + 0xC) = 28; break;
        case 29:
            if (*(u32 *)((u8 *)self + 0x210) == 6)
                r28 = 1;
            if (*(u32 *)((u8 *)self + 0x210) == 7)
                r28 = 3;
            if (!(*(u8 *)(*(u8 **)((u8 *)self + 0x9C) + 0xD1) == 0
                  && (u8)fn_800E56C4(*(void **)((u8 *)self + 0x9C)) != 0)) {
                fn_800CF2C8(self, *(s32 *)((u8 *)lbl_80368278 + 0x190), 0);
                if (fn_8011654C(*(void **)((u8 *)self + 0x9C)) == 2)
                    r28 += 4;
                fn_80115264(*(void **)((u8 *)self + 0x9C), r28, *(s32 *)((u8 *)self + 0x218));
                fn_80112DFC(*(void **)((u8 *)self + 0x9C), 1);
                if (*(u32 *)((u8 *)self + 0x210) == 6)
                    fn_800CF500(self, (u8 *)self + 0x118, *(void **)((u8 *)self + 0x9C));
                else if (*(u32 *)((u8 *)self + 0x210) == 7)
                    fn_800CF500(self, (u8 *)self + 0x130, *(void **)((u8 *)self + 0x9C));
                else
                    fn_800CF500(self, (u8 *)self + 0x100, *(void **)((u8 *)self + 0x9C));
                (*(u32 *)((u8 *)self + 0xC))++;
                fn_800CAD4C(self, 1, 0);
            }
            break;
        case 30:
            if (!((u8)fn_800E5248(*(void **)((u8 *)self + 0x9C), 2) == 0
                  && (u8)fn_80112F44(*(void **)((u8 *)self + 0x9C)) == 0)) {
                fn_80113A24(*(void **)((u8 *)self + 0x9C), 0);
                fn_801165B4(strP, *(void **)((u8 *)self + 0x9C));
                fn_800CB90C(strQ, strP, lbl_802704F8 + 0x3C6);
                fn_800CF500(self, strQ, NULL);
                fn_800C9A60(strQ, -1);
                fn_800C9A60(strP, -1);
                *(u32 *)((u8 *)self + 0x18) = 0;
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 31:
            if ((u8)fn_801138E8(*(void **)((u8 *)self + 0x9C)) && *(s32 *)((u8 *)self + 0x21C) == 2) {
                *(s32 *)((u8 *)self + 0x18) = 2;
                fn_801146BC(*(void **)((u8 *)self + 0xA0));
                fn_80114124(*(void **)((u8 *)self + 0xA0), *(s32 *)((u8 *)self + 0x218));
                fn_80112E30(*(void **)((u8 *)self + 0xA0));
                fn_800CD5E4(self);
                if (fn_8011654C(*(void **)((u8 *)self + 0x9C)) == 2)
                    fn_800CF500(self, (u8 *)self + 0x10C, NULL);
            }
            if ((u8)fn_8011390C(*(void **)((u8 *)self + 0x9C)) && *(s32 *)((u8 *)self + 0x18) == 0) {
                if (fn_8011654C(*(void **)((u8 *)self + 0x9C)) == 2) {
                    fn_800CF500(self, (u8 *)self + 0x10C, NULL);
                } else {
                    fn_801165B4(strR, *(void **)((u8 *)self + 0x9C));
                    fn_800CB90C(strS, strR, lbl_802704F8 + 0x3CB);
                    fn_800CF500(self, strS, NULL);
                    fn_800C9A60(strS, -1);
                    fn_800C9A60(strR, -1);
                }
                *(s32 *)((u8 *)self + 0x18) = 1;
                r27 = (*(s32 *)((u8 *)self + 0x21C) == 1);
                fn_80199318(strT, fn_80116604(*(void **)((u8 *)self + 0x9C)));
                fn_800C9B6C(strU, strT);
                fn_800C9A60(strT, -1);
                if ((u8)fn_800D3534(strU, lbl_802704F8 + 0x5D4)
                    || (u8)fn_800D3534(strU, lbl_802704F8 + 0x5DD)
                    || (u8)fn_800D3534(strU, lbl_802704F8 + 0x5E8))
                    r27 = 1;
                if (*(s32 *)((u8 *)self + 0x21C) == 0 || *(s32 *)((u8 *)self + 0x21C) == 1
                    || *(s32 *)((u8 *)self + 0x21C) == 3) {
                    fn_800CAC7C(self);
                    if (*(s32 *)((u8 *)self + 0x224) < 0) {
                        fn_80114AF0(*(void **)((u8 *)self + 0xA0), r27, 1, (*(s32 *)((u8 *)self + 0x21C) == 3));
                        fn_80112E30(*(void **)((u8 *)self + 0xA0));
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), *(s32 *)((u8 *)self + 0x224), 0, (u8 *)self + 0x1F0);
                        fn_800E77A0(*(void **)((u8 *)self + 4), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x90));
                    } else if (*(s32 *)((u8 *)self + 0x224) > 0) {
                        fn_801968CC(*(void **)((u8 *)self + 0xAC));
                    } else {
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), 0, 0, (u8 *)self + 0x1F0);
                        fn_80114840(*(void **)((u8 *)self + 0xA0));
                        fn_80112E30(*(void **)((u8 *)self + 0xA0));
                    }
                } else {
                    fn_801146BC(*(void **)((u8 *)self + 0xA0));
                    fn_80114124(*(void **)((u8 *)self + 0xA0), *(s32 *)((u8 *)self + 0x218));
                    fn_80112E30(*(void **)((u8 *)self + 0xA0));
                    fn_800CD5E4(self);
                }
                if (*(s32 *)((u8 *)self + 0x244) == 0x1B)
                    fn_800CAD4C(self, 2, 0);
                fn_800C9A60(strU, -1);
            }
            if ((u8)fn_80113894(*(void **)((u8 *)self + 0x9C)) && *(s32 *)((u8 *)self + 0x18) != 2) {
                if (lbl_80367878 != 0)
                    fn_801968CC2(*(void **)((u8 *)self + 0xB0), -*(s32 *)((u8 *)self + 0x224));
                else
                    fn_801968CC2(*(void **)((u8 *)self + 0xB0), *(s32 *)((u8 *)self + 0x220));
                fn_800E4BE0(*(void **)((u8 *)self + 0x9C), 0x80, lbl_80369E1C, 0x50);
                *(s32 *)((u8 *)self + 0x18) = 3;
            }
            if ((u8)fn_80199028(fn_80116604(*(void **)((u8 *)self + 0x9C))) || (u8)fn_800CD630(self))
                fn_80112DFC(*(void **)((u8 *)self + 0x9C), 0);
            if (fn_800E4BD8(*(void **)((u8 *)self + 0x9C)) == 1 && *(s32 *)((u8 *)self + 0x18) == 3) {
                fn_800E4BE0(*(void **)((u8 *)self + 0x9C), 0xFF, lbl_80369E20, 0x200);
                *(s32 *)((u8 *)self + 0x18) = 2;
            }
            if ((u8)fn_800CD630(self) && *(s32 *)((u8 *)self + 0x18) != 0) {
                fn_800E76E0(*(void **)((u8 *)self + 4), *(f32 *)((u8 *)lbl_80368278 + 0x98));
                if (*(s32 *)((u8 *)self + 0x218) == 0)
                    fn_800CF27C(self, *(s32 *)((u8 *)lbl_80368278 + 0x190), 0);
                if ((u8)fn_8011388C(*(void **)((u8 *)self + 0x9C))) {
                    if (*(s32 *)((u8 *)self + 0x218) != 0)
                        fn_800E56CC(*(void **)((u8 *)self + 0x9C));
                    else
                        fn_8011631C(*(void **)((u8 *)self + 0x9C), 1);
                }
                *(s32 *)((u8 *)self + 0x18) = 0;
            }
            if ((u8)fn_800CD630(self) && (u8)fn_80112F44(*(void **)((u8 *)self + 0xA0))) {
                *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x54);
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 32:
            if (--(*(s32 *)((u8 *)self + 0x10)) <= 0)
                *(u32 *)((u8 *)self + 0xC) = (*(s32 *)((u8 *)self + 0x21C) == 3) ? 0x28 : 4;
            break;
        case 33:
            r28 = (*(u32 *)((u8 *)self + 0x210) == 0xA) ? 1 : 0;
            fn_80115264(*(void **)((u8 *)self + 0x9C), r28, *(s32 *)((u8 *)self + 0x218));
            fn_800CF500(self, (u8 *)self + 0x100, *(void **)((u8 *)self + 0x9C));
            (*(u32 *)((u8 *)self + 0xC))++;
            fn_800CAD4C(self, 1, 0);
            break;
        case 34: *(u32 *)((u8 *)self + 0xC) = 34; break;
        case 35:
            if ((u8)fn_8011390C(*(void **)((u8 *)self + 0x9C))) {
                *(s32 *)((u8 *)self + 0x18) = 1;
                r27 = (*(s32 *)((u8 *)self + 0x21C) == 1);
                if (*(u32 *)((u8 *)self + 0x21C) <= 1U || *(s32 *)((u8 *)self + 0x21C) == 3) {
                    fn_800CAC7C(self);
                    if (*(s32 *)((u8 *)self + 0x224) < 0) {
                        fn_801165B4(strV, *(void **)((u8 *)self + 0x9C));
                        r28 = (s32)(u8)fn_800D3534(strV, lbl_802704F8 + 0x5F0);
                        fn_800C9A60(strV, -1);
                        if (r28) {
                            fn_800C9ABC(strW, lbl_802704F8 + 0x5FA, &scW);
                            fn_80111AE8(*(void **)((u8 *)self + 0xA0), strW, 0);
                            fn_800C9A60(strW, -1);
                        } else {
                            fn_800C9ABC(strX, lbl_802704F8 + 0x60C, &scX);
                            fn_80111AE8(*(void **)((u8 *)self + 0xA0), strX, 0);
                            fn_800C9A60(strX, -1);
                        }
                        fn_80114AF0(*(void **)((u8 *)self + 0xA0), r27, 1, (*(s32 *)((u8 *)self + 0x21C) == 3));
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), *(s32 *)((u8 *)self + 0x224), 0, (u8 *)self + 0x1F0);
                        fn_800E77A0(*(void **)((u8 *)self + 4), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x90));
                    } else if (*(s32 *)((u8 *)self + 0x224) > 0) {
                        fn_801968CC(*(void **)((u8 *)self + 0xAC));
                    } else {
                        fn_801968FC(*(void **)((u8 *)self + 0xAC), 0, 0, (u8 *)self + 0x1F0);
                        fn_80114840(*(void **)((u8 *)self + 0xA0));
                    }
                } else {
                    fn_801146BC(*(void **)((u8 *)self + 0xA0));
                    fn_80114124(*(void **)((u8 *)self + 0xA0), *(s32 *)((u8 *)self + 0x218));
                }
                fn_80112E30(*(void **)((u8 *)self + 0xA0));
                if (*(s32 *)((u8 *)self + 0x244) == 0x1B)
                    fn_800CAD4C(self, 2, 0);
            }
            if (*(s32 *)((u8 *)self + 0x18) != 0) {
                if (!((u8)fn_800E56C4(*(void **)((u8 *)self + 0x9C)) != 0
                      && (u8)fn_80112F44(*(void **)((u8 *)self + 0x9C)) == 0)) {
                    if ((u8)fn_80112F44(*(void **)((u8 *)self + 0xA0)) != 0) {
                        *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x54);
                        (*(u32 *)((u8 *)self + 0xC))++;
                    }
                }
            }
            break;
        case 36:
            if (--(*(s32 *)((u8 *)self + 0x10)) <= 0)
                *(u32 *)((u8 *)self + 0xC) = (*(s32 *)((u8 *)self + 0x21C) == 3) ? 0x28 : 4;
            break;
        case 37:
            *(u32 *)((u8 *)self + 0xC) = state + 1;
            fn_800CAD4C(self, 1, 0);
            break;
        case 38:
            fn_800CA91C((u8 *)self + 0x1F0);
            if (*(s32 *)((u8 *)self + 0x220) < 0) {
                fn_80114AF0(*(void **)((u8 *)self + 0xA0), 0x63, 0, (*(s32 *)((u8 *)self + 0x21C) == 3));
                fn_801968FC(*(void **)((u8 *)self + 0xAC), *(s32 *)((u8 *)self + 0x220), 0, (u8 *)self + 0x1F0);
                fn_800E77A0(*(void **)((u8 *)self + 4), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x88));
            } else if (*(s32 *)((u8 *)self + 0x224) < 0) {
                fn_80114AF0(*(void **)((u8 *)self + 0xA0), 0x63, 0, (*(s32 *)((u8 *)self + 0x21C) == 3));
                fn_801968FC(*(void **)((u8 *)self + 0xAC), *(s32 *)((u8 *)self + 0x224), 0, (u8 *)self + 0x1F0);
                fn_800E77A0(*(void **)((u8 *)self + 4), 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x88));
            } else {
                fn_80114840(*(void **)((u8 *)self + 0xA0));
            }
            (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 39:
            *(u32 *)((u8 *)self + 0xC) = (*(s32 *)((u8 *)self + 0x21C) == 3) ? 0x28 : 4;
            break;
        case 40:
            if ((u8)fn_80115AF0(*(void **)((u8 *)self + 0x9C)) == 0) {
                fn_800CF500(self, (u8 *)self + 0xDC, NULL);
                if (lbl_80367878 == 0) {
                    fn_800C9ABC(str5, lbl_802704F8 + 0x563, &sc5);
                    fn_800E7C94(*(void **)((u8 *)self + 4), str5, 4, *(f32 *)((u8 *)lbl_80368278 + 0x68));
                    fn_800C9A60(str5, -1);
                    fn_800C9ABC(str6, lbl_802704F8 + 0x56A, &sc6);
                    fn_800E7C94(*(void **)((u8 *)self + 4), str6, 4, *(f32 *)((u8 *)lbl_80368278 + 0x68));
                    fn_800C9A60(str6, -1);
                }
                r30 = 1;
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 41:
            fn_800C9ABC(str7, lbl_802704F8 + 0x563, &sc7);
            fn_800E7C94(*(void **)((u8 *)self + 4), str7, 1, *(f32 *)((u8 *)lbl_80368278 + 0x6C));
            fn_800C9A60(str7, -1);
            fn_800C9ABC(str8, lbl_802704F8 + 0x56A, &sc8);
            fn_800E7C94(*(void **)((u8 *)self + 4), str8, 1, *(f32 *)((u8 *)lbl_80368278 + 0x6C));
            fn_800C9A60(str8, -1);
            (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 42:
            if (*(s32 *)((u8 *)self + 0x10) >= 0) {
                if (--(*(s32 *)((u8 *)self + 0x10)) == 0) {
                    if (*(u8 *)((u8 *)self + 0x72) == 0) {
                        fn_800C9ABC(strY, lbl_802704F8 + 0x4A2, &scY);
                        fn_80111AE8(*(void **)((u8 *)self + 0xA0), strY, 0);
                        fn_800C9A60(strY, -1);
                    }
                    *(s32 *)((u8 *)self + 0x10) = -1;
                }
            }
            if ((u8)fn_800E5248(*(void **)((u8 *)self + 0xA0), 0x38)
                || (u8)fn_800E56C4(*(void **)((u8 *)self + 0xA0)) == 0) {
                if (*(u8 *)((u8 *)self + 0x72) == 0) {
                    fn_80113F88(*(void **)((u8 *)self + 0xA0));
                    (*(u32 *)((u8 *)self + 0xC))++;
                } else {
                    *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x58);
                    *(u32 *)((u8 *)self + 0xC) = 4;
                }
            }
            break;
        case 43:
            if ((u8)fn_80113F68(*(void **)((u8 *)self + 0xA0)) == 0) {
                fn_800E56CC(*(void **)((u8 *)self + 0xA0));
                *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x58);
                *(u32 *)((u8 *)self + 0xC) = 4;
            }
            break;
        case 44:
            if (--(*(s32 *)((u8 *)self + 0x10)) <= 0) {
                *(s32 *)((u8 *)self + 0x10) = r28;
                if (*(s32 *)((u8 *)self + 0x230) != 0)
                    (*(u32 *)((u8 *)self + 0xC))++;
                else
                    *(u32 *)((u8 *)self + 0xC) = 0x38;
            }
            break;
        case 45:
            {
                void *obj4 = *(void **)((u8 *)self + 4);
                void **vt = *(void ***)((u8 *)obj4 + 0x10);
                r27 = ((s32 (*)(void *, char *, char *))vt[4])(
                    obj4, lbl_802704F8 + 0x620, lbl_802704F8 + 0x625);
            }
            fn_800DF670((void *)r27);
            {
                void **vt = *(void ***)((u8 *)r27 + 0x40);
                ((void (*)(void *, s32, s32, s32, u32))vt[0xD])(
                    (void *)r27, 0, 0, 0, (u8)*(s32 *)((u8 *)self + 0x10));
            }
            *(s32 *)((u8 *)self + 0x10) += *(s32 *)((u8 *)lbl_80368278 + 0x78);
            if (*(s32 *)((u8 *)self + 0x10) >= *(s32 *)((u8 *)lbl_80368278 + 0x7C)) {
                fn_801B6164(lbl_80367884);
                *(u32 *)((u8 *)self + 0xC) = 0x2F;
                r30 = 1;
            }
            break;
        case 46: break;
        case 47:
            if ((u8)fn_801B6098(lbl_80367884) == 0) {
                *(u32 *)((u8 *)self + 0xC) = 0x38;
            } else {
                fn_800C9ABC(str9, lbl_802704F8 + 0x563, &sc9);
                fn_800E7C94(*(void **)((u8 *)self + 4), str9, 1, *(f32 *)((u8 *)lbl_80368278 + 0x70));
                fn_800C9A60(str9, -1);
                fn_800C9ABC(strA, lbl_802704F8 + 0x56A, &scA);
                fn_800E7C94(*(void **)((u8 *)self + 4), strA, 1, *(f32 *)((u8 *)lbl_80368278 + 0x70));
                fn_800C9A60(strA, -1);
                *(u8 *)((u8 *)self + 0x196) = 1;
                fn_800E76D0(*(void **)((u8 *)self + 4), *(u8 *)((u8 *)self + 0x196));
                if (*(s32 *)((u8 *)self + 0x68) == 0) {
                    if (*(s32 *)((u8 *)self + 0x274) == 0) {
                        *(s32 *)((u8 *)self + 0x174) = 0;
                        *(s32 *)((u8 *)self + 0x178) = 0;
                    } else {
                        *(s32 *)((u8 *)self + 0x174) = 0;
                        *(s32 *)((u8 *)self + 0x178) = 1;
                    }
                    r27 = (s32)*(void **)((u8 *)self + 0x84);
                } else {
                    if (*(s32 *)((u8 *)self + 0x274) == 0) {
                        *(s32 *)((u8 *)self + 0x174) = 1;
                        *(s32 *)((u8 *)self + 0x178) = 1;
                    } else {
                        *(s32 *)((u8 *)self + 0x174) = 1;
                        *(s32 *)((u8 *)self + 0x178) = 0;
                    }
                    r27 = (s32)*(void **)((u8 *)self + 0x88);
                }
                if (r27 != 0) {
                    obj = (H *)r27;
                    if (*(u8 *)((u8 *)obj + 0x2C) == 0) {
                        f1 = lbl_80369DC8;
                        obj->setPos(f1, f1, f1);
                    }
                    fn_800DF670((void *)r27);
                    if (fn_80116604((void *)r27) != 0)
                        fn_800DF670((void *)fn_80116604((void *)r27));
                }
                fn_800C9ABC(strZ, lbl_802704F8 + 0x62A, &scZ);
                fn_800CF500(self, strZ, NULL);
                fn_800C9A60(strZ, -1);
                r30 = 1;
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 48:
            fn_800C9ABC(strB, lbl_802704F8 + 0x563, &scB);
            fn_800E7C94(*(void **)((u8 *)self + 4), strB, 1, *(f32 *)((u8 *)lbl_80368278 + 0x74));
            fn_800C9A60(strB, -1);
            fn_800C9ABC(strC, lbl_802704F8 + 0x56A, &scC);
            fn_800E7C94(*(void **)((u8 *)self + 4), strC, 1, *(f32 *)((u8 *)lbl_80368278 + 0x74));
            fn_800C9A60(strC, -1);
            *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x5C);
            *(u32 *)((u8 *)self + 0xC) = 0x38;
            break;
        case 49:
            fn_800DF670(*(void **)((u8 *)self + 0x84));
            fn_800DF664(*(void **)((u8 *)self + 0x88));
            fn_800C9ABC(strD, lbl_802704F8 + 0x399, &scD);
            fn_800C9ABC(strE, lbl_802704F8 + 0x633, &scE);
            fn_800E80D8(*(void **)((u8 *)self + 4), strD, strE);
            fn_800C9A60(strD, -1);
            fn_800C9A60(strE, -1);
            fn_800C9ABC(strF, lbl_802704F8 + 0x399, &scF);
            fn_800C9ABC(strG, lbl_802704F8 + 0x63B, &scG);
            fn_800E805C(*(void **)((u8 *)self + 4), strF, strG);
            fn_800C9A60(strF, -1);
            fn_800C9A60(strG, -1);
            fn_800E574C(*(void **)((u8 *)self + 0x84), lbl_802704F8 + 0x643, lbl_80369DD4, 1, 0, 0, 0xA);
            fn_800E574C(*(void **)((u8 *)self + 0x88), lbl_802704F8 + 0x643, lbl_80369DD4, 1, 0, 0, 0xA);
            obj = *(H **)((u8 *)self + 0x84);
            f1 = lbl_80369DC8;
            obj->setPos2(f1, f1, f1);
            obj = *(H **)((u8 *)self + 0x88);
            f1 = lbl_80369DC8;
            obj->setPos2(f1, f1, f1);
            fn_800C9ABC(strH, lbl_802704F8 + 0x563, &scH);
            fn_800E7D10(*(void **)((u8 *)self + 4), strH);
            fn_800C9A60(strH, -1);
            fn_800C9ABC(strI, lbl_802704F8 + 0x56A, &scI);
            fn_800E7D10(*(void **)((u8 *)self + 4), strI);
            fn_800C9A60(strI, -1);
            fn_800C9ABC(strJ, lbl_802704F8 + 0x4D2, &scJ);
            fn_800E7D10(*(void **)((u8 *)self + 4), strJ);
            fn_800C9A60(strJ, -1);
            fn_800C9ABC(strK, lbl_802704F8 + 0x4DD, &scK);
            fn_800E7D10(*(void **)((u8 *)self + 4), strK);
            fn_800C9A60(strK, -1);
            (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 50:
            fn_800C9ABC(strL, lbl_802704F8 + 0x64B, &scL);
            fn_800CF500(self, strL, NULL);
            *(u32 *)((u8 *)self + 0x10) = *(u32 *)((u8 *)lbl_80368278 + 0x168);
            (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 51:
            if (--(*(s32 *)((u8 *)self + 0x10)) <= 0) {
                *(s32 *)((u8 *)self + 0x10) = 0x258;
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 52:
            if (--(*(s32 *)((u8 *)self + 0x10)) <= 0) {
                fn_800C9ABC(strM, lbl_802704F8 + 0x399, &scM);
                fn_800C9ABC(strN, lbl_802704F8 + 0x633, &scN);
                fn_800C9ABC(strO, lbl_802704F8 + 0x63B, &scO);
                fn_800C9A60(strM, -1); fn_800C9A60(strN, -1);
                fn_800C9A60(strO, -1);
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 53:
            fn_800C9ABC(strPad, lbl_802704F8 + 0x655, &scPad);
            fn_800C9A60(strPad, -1);
            (*(u32 *)((u8 *)self + 0xC))++;
            break;
        case 54:
            *(u32 *)((u8 *)self + 0xC) = state + 1;
            break;
        case 55:
            *(u32 *)((u8 *)self + 0xC) = 0x38;
            break;
        case 56:
            if (--(*(s32 *)((u8 *)self + 0x10)) <= 0) {
                r30 = 1;
                (*(u32 *)((u8 *)self + 0xC))++;
            }
            break;
        case 57:
            if (--(*(s32 *)((u8 *)self + 0x10)) <= 0)
                (*(u32 *)((u8 *)self + 0xC))++;
            break;
        }
    }

    if (lbl_80367878 != 0
        && *(u8 *)((u8 *)self + 0x195) == 0
        && (fn_800D3590(lbl_80367240) & 0x1000) != 0) {
        *(u8 *)((u8 *)self + 0x187) = 1;
        *(s32 *)((u8 *)lbl_8036787C + 0x444) = 0;
        fn_800DA330();
        fn_800CADF8(self);
    }

    if (*(u8 *)((u8 *)self + 0x185) != 0) {
        *(u8 *)((u8 *)self + 0x185) = 0;
        *(u32 *)((u8 *)self + 0xC) = 0;
        **(u16 **)((u8 *)self + 0x1FC) = 0;
    }

    (*(s32 *)((u8 *)self + 0x1A8))--;

    if (*(u32 *)((u8 *)self + 0xC) == state || (u8)r30 != 0)
        return 0;
    *(s32 *)((u8 *)self + 0x1A8) = 0x4B0;
    return 1;
#endif
