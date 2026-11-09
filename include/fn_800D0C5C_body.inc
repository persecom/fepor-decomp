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
        /*CHUNK*/
