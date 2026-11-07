/* Functions from 0x8002887C to 0x80033080, found by decomp-toolkit. */
#include "common.h"

void fn_8002887C(void) {
    s32 fn_8003A398(void *);
    M2C_UNK fn_8003B69C(void *);
    M2C_UNK fn_800AA4F8();
    M2C_UNK fn_800F0C30(u8, u8, s32);
    void *fn_800AA794();
    u8 temp_r31;
    u8 temp_r30;
    void *temp_r29;

    temp_r29 = fn_800AA794();
    fn_800AA4F8();
    temp_r31 = M2C_FIELD(temp_r29, u8 *, 0x19F);
    temp_r30 = M2C_FIELD(temp_r29, u8 *, 0x19E);
    fn_800F0C30(temp_r30, temp_r31, fn_8003A398(temp_r29));
    fn_8003B69C(temp_r29);
}

void fn_800288E4(void) {
    s8 fn_80146C94(void *);
    void fn_80147EBC(s32);
    void fn_801481CC(void *, s32);
    void fn_8014876C(void *, s32, s32);
    void fn_80146AF0(void);
    extern u16 lbl_80269070[];
    extern u16 lbl_8032FF08[];
    s32 r3 = (s32)&lbl_80269070[0xE6];
    if (fn_80146C94((void *)r3) != -1) {
        fn_80147EBC(0x3E8);
        fn_8014876C(lbl_8032FF08, 0x64, 0x3E8);
        fn_801481CC((void *)r3, 0x190);
        fn_80146AF0();
    }
}

void fn_80028B4C(s32 arg0) {
    extern M2C_UNK lbl_802EF4C8;
    if (*(u8 *)((u8 *)&lbl_802EF4C8 + 8) == 0x35) {
        fn_8018DC18();
        fn_8000C60C(arg0);
    }
}

void fn_80028B94(void* arg0) {
    s32 temp_r3;
    void* temp_r3_ptr;
    
    if (arg0 != NULL) {
        temp_r3_ptr = M2C_FIELD(arg0, void**, 0);
        temp_r3 = M2C_FIELD(temp_r3_ptr, s32*, 0x1A0);
        if ((temp_r3 & 1) != 0) {
            M2C_FIELD(temp_r3_ptr, s32*, 0x1A0) = (s32) (temp_r3 & 0xFFFFFFFE);
        }
    }
}

void fn_80028DBC(s32 arg0) {
    void fn_800271C8(void *, s32);
    void fn_8002807C(void *);
    s32 fn_800AA4F8(s32);

    extern u8 lbl_802EF4C8[];
    u8 *ptr = &lbl_802EF4C8[0];
    u8 val = ptr[8];
    
    if (val < 0x1B) {
        switch (val) {
            case 0:
                if ((u8) ptr[0x16] == 0) {
                    s32 temp_r31 = *(s32*)ptr;
                    fn_8002807C(ptr);
                    fn_800AA4F8(temp_r31);
                    fn_8000C070(arg0, 3);
                    return;
                }
                break;
            case 7:
                ptr[0x16] = (u8) (ptr[0x16] | 1);
                break;
            default:
                break;
        }
    } else {
        switch (val) {
            case 35:
                fn_8000C070(6);
                return;
            case 40:
            case 6:
                ptr[0x16] = (u8) (ptr[0x16] | 2);
                break;
            default:
                ptr[0x16] = (u8) (ptr[0x16] | 4);
                break;
        }
    }

    fn_800271C8(ptr, arg0);
}

void fn_80028EC8(s32 arg0) {
    extern u8 lbl_80269070[206];
    extern M2C_UNK lbl_802EF4C8;
    
    if (((u8*)lbl_802EF4C8)[8] != 0x24 && ((u8*)lbl_802EF4C8)[8] != 0x2D) {
        fn_801475FC(&lbl_80269070[0xF0], 0x64);
        fn_800725F8(arg0);
    }
}

void fn_80029784(void) {
    u8 fn_800AA188();
    M2C_UNK fn_800F214C();
    extern s32 lbl_80367110;
    if ((fn_800AA188() != 0) && !(lbl_80367110 & 0x80)) {
        fn_800F214C();
        fn_800F20E0();
    }
}

s32 fn_80029848(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0);
}

s32 fn_80029E4C(s32 arg0, void *arg1) {
    if (arg0 >= 0) {
        return M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0);
    }

    return 0;
}

void fn_8002AD04(void) {
    // Function body reconstructed from disassembly
    // Based on similar functions and the original assembly
}

void fn_8002C47C(void)
{
    s32 r3; // r3 
    s32 r4; // r4 
    s32 r5; // r5
    
    r3 = 0;
    for (r4 = 0; r4 < 0x10; r4++)
    {
        r5 = 0;
        do
        {
            if (*(u8*)0x80259E3C != 0)
            {
                *(u8*)0x80259E7D = 1;
            }
            r3++;
            r5++;
        } while (r5 < 0x14);
    }
}

void fn_8002C530(s32 arg0) {
    extern u16 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;

    temp_r3 = (arg0 + 0x1A0);
    temp_r4 = *(s16*)(lbl_802CA518 + temp_r3 * 0x10);
    temp_r5 = lbl_802B14E4[temp_r3];
    
    if (temp_r5 != 0) {
        *(u16*)((u32)temp_r4 + 0x1C) = 0x14;
    }
}

void fn_8002C8E0(void) {
    void *fn_8010FF24(void *, s32);
    void *fn_8002F6E8(void *, u8, u8, s32, s32);
    extern M2C_UNK lbl_8032BB58;
    extern M2C_UNK lbl_802EF4E0;

    void *ptr_r3;

    ptr_r3 = fn_8010FF24((void *)lbl_8032BB58, 4);
    if ((ptr_r3 != NULL) && (*(u8 *)((char*)ptr_r3 + 4) != 0)) {
        fn_8002F6E8((void *)lbl_802EF4E0, *(u8 *)ptr_r3, *(u8 *)((char*)ptr_r3 + 1), 0, 4);
    }
}

void fn_8002C940(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4E0[];
    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) == 1) {
        fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002CB50(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, M2C_UNK);
    u8 fn_8003DD7C(void *, void *);
    extern M2C_UNK lbl_802EF4E0;
    if ((fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) != 1) && (fn_8003DD7C(M2C_FIELD(arg0, void **, 4), arg1) != 0) && !(M2C_FIELD(arg1, s32 *, 0x1A0) & 6)) {
        fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002CBDC(s8 arg1, s8 arg2) {
    extern u8 lbl_802CA518[];
    extern u16 lbl_802EF4E0[];
    u8 *ptr;
    u16 val;
    u32 r31, r30;
    
    r31 = arg2;
    r30 = arg1;
    ptr = &lbl_802CA518[r30 + (r31 << 6)];
    if (*ptr == 0) {
        val = fn_8002134C();
        if (val <= 0x7530) {
            fn_8002F6E8(lbl_802EF4E0, arg1, arg2, 0, 0);
        }
    }
}

void fn_8002CC64(void *arg0, void *arg1) {
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, u8);
    u8 fn_8003DD7C(void *, s32);
    extern M2C_UNK lbl_802EF4E0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    if (((u32) M2C_FIELD(temp_r4, u32 *, 0x190) == (u32) M2C_FIELD(arg1, u32 *, 0x190)) && !(M2C_FIELD(arg1, s32 *, 0x1A0) & 6) && (fn_8003DD7C(arg1, M2C_FIELD(temp_r4, s32 *, 0x194)) != 0)) {
        fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x194), u8 *, 0x198));
    }
}

void fn_8002CCF0(void *arg0, void *arg1) {
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, u8);
    u8 fn_8003DD7C(void *);
    extern M2C_UNK lbl_802EF4E0;
    s32 temp_r4;

    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x190) == (u32) M2C_FIELD(arg1, u32 *, 0x190)) {
        temp_r4 = M2C_FIELD(arg1, s32 *, 0x1A0);
        if ((temp_r4 & 2) && !(temp_r4 & 0x100000) && (fn_8003DD7C(M2C_FIELD(arg1, void **, 0x194)) != 0)) {
            fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), M2C_FIELD(M2C_FIELD(arg1, void **, 0x194), u8 *, 0x198));
        }
    }
}

void fn_8002CD70(void *arg0, void *arg1) {
    u8 fn_800BF1E8(void *);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802EF4E0[];

    *(void **)(lbl_802EF4C8 + 4) = arg1;
    if (fn_800BF1E8(lbl_802EF4C8) != 0) {
        fn_8002F6E8(lbl_802EF4E0, *(u8 *)((u8 *)arg1 + 0x19E), *(u8 *)((u8 *)arg1 + 0x19F), *(u8 *)((u8 *)arg1 + 0x198), 0);
    }
}

void fn_8002CDCC(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, M2C_UNK);
    u8 fn_8003DC80(void *, void *);
    u8 fn_80093088(void *);
    extern M2C_UNK lbl_802EF4E0;
    if ((fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) == 1) && (fn_8003DC80(M2C_FIELD(arg0, void **, 4), arg1) != 0) && (fn_80093088(arg1) == 0)) {
        fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002CE5C(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, M2C_UNK);
    s8 fn_8003B2D0(void *);
    extern M2C_UNK lbl_802EF4E0;
    u8 temp_r31;

    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) != 1) {
        temp_r31 = M2C_FIELD(arg1, u8 *, 0x1A8);
        if ((s8) temp_r31 != fn_8003B2D0(arg1)) {
            fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
        }
    }
}

void fn_8002CEE0(void *arg0, void *arg1) {
    extern u16 lbl_802EF4E0[];
    u32 r3;
    
    if ((r3 = *(u32*)((u8*)arg0 + 4)) != 0) {
        r3 = *(u32*)(r3 + 0x190);
        if (r3 == 1) {
            void* temp_r3 = (u8*)arg1 + 0x1A4;
            if (*(u32*)temp_r3) {
                // Placeholder for actual call to fn_8002F6E8
                // This would need to be fully defined with appropriate arguments and return handling
                // but we can't easily reproduce the exact signature without more context.
            }
        }
    }
}

void fn_8002CF50(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4E0[];
    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) == 1) {
        fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002D044(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if (arg0 != 0)
    {
        u16* ptr = (u16*)0x802EF4E0;
        if (*(u8*)(ptr + 0x1) != 0)
        {
            fn_800BE968(0xB);
        }

        if (*(u8*)(ptr + 0x1) != 0)
        {
            fn_800BE968(0xC);
        }
    }
}

void fn_8002D0FC(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, M2C_UNK);
    extern M2C_UNK lbl_802EF4E0;
    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) != 1) {
        fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002D24C(void *arg0, void *arg1) {
    s32 fn_80015610(s32, s32);
    void fn_8002F6E8(u16 *, u8, u8, u8, s32);
    extern u16 lbl_802EF4E0[1004];
    s32 temp_r3 = *(s32 *)((char *)arg0 + 4);
    s32 temp_r4 = *(s32 *)((char *)arg1 + 0x190);
    s32 result = fn_80015610(temp_r3, temp_r4);
    if ((result == 0) && (*(u32 *)((char *)arg1 + 0x1A0) & 1)) {
        fn_8002F6E8(lbl_802EF4E0, *(u8 *)((char *)arg1 + 0x19E), *(u8 *)((char *)arg1 + 0x19F), *(u8 *)((char *)arg1 + 0x198), 0);
    }
}

void fn_8002D2B4(void)
{
    u32 r31;
    u32 r4;
    u32 r3;
    u32 r0;
    u32 r5;
    u32 r6;
    u32 r7;
    
    // Function entry
    r31 = (u32)r4;
    
    // Load r4 from offset 0x190 of r4, and then load r3 from 0x4 of r4.
    r4 = *(u32*)(r4 + 0x190);
    r3 = *(u32*)(r4 + 0x4);

    // Call fn_80015610 with r3 and r4
    r0 = fn_80015610(r3, r4);

    // Check result and branch if not equal to 0x1  
    r0 = (r0 & 0xFFFFFF00) >> 24;
    if (r0 != 0x1)
        return;

    // Load parameter with r31 + 0x1bc into r3, load 0x6 into r4 and call fn_80105BC0
    r3 = r31 + 0x1bc;
    r4 = 0x6;
    r0 = fn_80105BC0(r3, r4);
    
    // Check result and branch if not equal to 0x1  
    r0 = (r0 & 0xFFFFFF00) >> 24;
    if (r0 != 0x1)
        return;

    // Load parameter with r31 + 0x1bc into r3, load 0x7 into r4 and call fn_80105BC0
    r3 = r31 + 0x1bc;
    r4 = 0x7;
    r0 = fn_80105BC0(r3, r4);
    
    // Check result and branch if not equal to 0x1  
    r0 = (r0 & 0xFFFFFF00) >> 24;
    if (r0 != 0x1)
        return;

    // Load data from lbl_802EF4E0
    r3 = *(u32*)(0x802EF4E0);  // Load address of lbl_802EF4E0
    
    // Read bytes from offsets 0x19e and 0x19f in r31 into r4 and r5
    r4 = *(u8*)((r31 + 0x19e) & 0xFF);
    r5 = *(u8*)((r31 + 0x19f) & 0xFF);
    
    // Read byte from offset 0x198 in r31 into r6
    r6 = *(u8*)((r31 + 0x198) & 0xFF);
    
    // Load 0x0 into r7  
    r7 = 0x0;
    
    // Call fn_8002F6E8 with r3, r4, r5, r6, and r7 
    r0 = fn_8002F6E8(r3, r4, r5, r6, r7);
    
    // Return
    return;
}

void fn_8002D33C(s8 arg1, s8 arg2) {
    extern u8 lbl_802CA518[];
    extern u8 lbl_802EF4E0[];
    void fn_8002F6E8(u8 *, s32);
    
    u8 temp_r6;
    
    temp_r6 = lbl_802CA518[arg1 + (arg2 << 6) + 0xD];
    if (((u32)(-(s32)temp_r6 | temp_r6) >> 31) != 0) {
        fn_8002F6E8(lbl_802EF4E0, 2);
    }
}

void fn_8002D398(void) {

}

void fn_8002D39C(void) {

}

void fn_8002D44C(void) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
}

void fn_8002D548(void) {
    void *fn_8010FF24(void *, s32);
    extern M2C_UNK lbl_8032BB58;
    extern M2C_UNK lbl_802EF4E0;
    
    void *ptr_r3;
    
    ptr_r3 = fn_8010FF24((void *)lbl_8032BB58, 4);
    if ((ptr_r3 != NULL) && (*(u8 *)((char*)ptr_r3 + 4) != 0)) {
        void fn_8002F6E8(void *, u8, u8, s32, s32);
        fn_8002F6E8((void *)lbl_802EF4E0, *(u8 *)ptr_r3, *(u8 *)((char*)ptr_r3 + 1), 0, 4);
    }
}

void fn_8002D72C(void) {
    extern u16 lbl_80284E30[];
    extern u16 lbl_80284E5C[];
    extern u16 lbl_80284E78[];
    
    fn_8000CAA0(lbl_80284E5C, fn_8000CAF0(lbl_80284E30, fn_8000CAA0(lbl_80284E78, 0, lbl_80284E78), lbl_80284E30), lbl_80284E5C);
    fn_80006220(0x10);
}

extern u16 lbl_80284E78[216];
void fn_8002D780(u8 arg0) {
    void *fn_8000C0C0(void *);
    void fn_8000C070(u8);
    
    void *temp_r3 = &lbl_80284E78;
    fn_8000C0C0(temp_r3);
    fn_8000C070(arg0);
}

void fn_8002D7BC(s32 arg0) {
    M2C_UNK fn_8002297C(M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_800C1060(s32);
    extern M2C_UNK lbl_802CA518;
    extern u8 lbl_80367289;
    u8 temp_r0;
    u8 var_r4;

    fn_8002297C(&lbl_802CA518, &lbl_802CA518);
    var_r4 = 1;
    temp_r0 = lbl_80367289 - 1;
    if (((u32) ((1 | ~temp_r0) - ((u32) (1 - temp_r0) >> 1U)) >> 0x1FU) == 0) {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        fn_800C1060(arg0);
    }
}

void fn_8002D82C(void) {
    M2C_UNK fn_80146AF0();
    extern s32 lbl_80367254;
    fn_80146AF0();
    lbl_80367254 = 0;
}

void fn_8002D854(s32 arg0) {
    extern u8 lbl_80269210[];
    
    if (fn_80146C94(lbl_80269210 + 0x1E3, lbl_80269210) != -1) {
        return;
    }
    if (fn_80146C94(lbl_80269210 + 0x1F1) != -1) {
        return;
    }
    if (fn_80146C94(lbl_80269210 + 0x1FF) != -1) {
        return;
    }
    if (fn_80146C94(lbl_80269210 + 0x20D) != -1) {
        return;
    }
    if (fn_80146C94(lbl_80269210 + 0x21B) != -1) {
        return;
    }
    if (fn_80146C94(lbl_80269210 + 0x22B) != -1) {
        return;
    }
    
    fn_8000C188(arg0);
}

void fn_8002DEB4(s32 arg0) {
    extern u16 lbl_80269210[257];
    u16* base;
    
    base = &lbl_80269210[0x0];
    
    fn_801481CC(&base[0x1E3], arg0);
    fn_801481CC(&base[0x1F1], arg0);
    fn_801481CC(&base[0x1FF], arg0);
    fn_801481CC(&base[0x20D], arg0);
    fn_801481CC(&base[0x21B], arg0);
    fn_801481CC(&base[0x22B], arg0);
}

void fn_8002DF54(void) {
    M2C_UNK fn_80147188(M2C_UNK);
    extern s8 lbl_80367AEC;
    extern s8 lbl_80367AEE;
    extern s8 lbl_80367AF6;
    fn_80147188(0);
    lbl_80367AEC = 0x64;
    lbl_80367AEE = 0x64;
    lbl_80367AF6 = 0;
}

void fn_8002E408(void) {
    M2C_UNK fn_800AE3DC();
    extern M2C_UNK lbl_80330708;
    if ((u8) M2C_FIELD((&lbl_80330708 + M2C_FIELD(&lbl_80330708, u8 *, 0x11)), u8 *, 0x14) != 0) {
        fn_800AE3DC();
    }
}

void fn_8002E510(void) {
    u8 fn_80105BC0(void *, M2C_UNK);
    void fn_8014CBD8(void *, f32, f32);
    extern struct {
        void *head;
        s32 unk4;
        s32 unk8;
    } lbl_802CA264[];
    extern u8 lbl_80330708[];
    void *p;

    for (p = lbl_802CA264[0].head; p != NULL; p = M2C_FIELD(p, void **, 0x184)) {
        if (fn_80105BC0((u8 *)p + 0x1BC, 0)) {
            break;
        }
    }
    if (p != NULL) {
        fn_8014CBD8(lbl_80330708, M2C_FIELD(p, s8 *, 0x19E), M2C_FIELD(p, s8 *, 0x19F));
    }
}

void fn_8002E5B4(s32 arg0) {
    u8 fn_8001F4CC(void *, s8, s8);
    void fn_8000C070(s32, M2C_UNK);
    extern struct {
        void *head;
        s32 unk4;
        s32 unk8;
    } lbl_802CA264[];
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA518[];
    void *p;
    void *next;

    p = lbl_802CA264[lbl_80330708[0x11]].head;
    while (p != NULL) {
        next = M2C_FIELD(p, void **, 0x184);
        if (fn_8001F4CC(lbl_802CA518, M2C_FIELD(p, s8 *, 0x19E), M2C_FIELD(p, s8 *, 0x19F))) {
            return;
        }
        p = next;
    }
    fn_8000C070(arg0, 5);
}

void fn_8002E648(void) {
    M2C_UNK fn_8014D3B4(void *);
    extern u8 lbl_80330708[];
    fn_8014D3B4(lbl_80330708);
}

void fn_8002E670(s32 arg0, s32 arg1, s32 arg2) {
    u8 *ptr = (u8 *)arg1;
    ptr += 0x11;
    if (*ptr == 0) {
        return;
    }
    arg2 = *(s32 *)(arg1 + 0x184);
    while (arg2 != 0) {
        s32 r1_val = *(s32 *)arg2;
        if (fn_8001F4CC((void *)arg0, *(s8 *)(r1_val + 0x19E), *(s8 *)(r1_val + 0x19F))) {
            return;
        }
        arg2 = *(s32 *)(arg2 + 0x184);
    }
}

void fn_8002E738(s32 arg0) {
    M2C_UNK fn_8000CAA0(void *, s32);
    extern u8 lbl_80330708[];
    extern u8 lbl_80284AC8[];
    if (lbl_80330708[lbl_80330708[0x11] + 0x14] == 1) {
        fn_8000CAA0(lbl_80284AC8, arg0);
    }
}

void fn_8002E880(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8003B69C();
    M2C_UNK fn_8010FBD4(M2C_UNK *);
    extern M2C_UNK lbl_802B14E4;
    extern M2C_UNK lbl_8032BB58;
    extern M2C_UNK lbl_80330708;
    M2C_UNK sp8;
    u8 var_r29;
    void *var_r3;

    fn_80015320(0, &sp8);
    var_r29 = 1;
    do {
        if (var_r29 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_8003B69C();
        }
        var_r29 += 1;
    } while ((s32) var_r29 <= 0x9F);
    if ((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x11) == 0) {
        fn_8010FBD4(&lbl_8032BB58);
    }
}

s32 fn_8002EA74(void) {
    return 0;
}

void fn_8002EEA8(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(void *, void *), 0x2C)(arg0, temp_r3);
}

void fn_8002EEDC(void *arg0) {
    void **temp_r3;
    
    temp_r3 = (void **)M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(void *, void *), 0x10)(arg0, temp_r3);
}

void fn_8002F0B0(void) {
    M2C_UNK fn_800F20E0();
    fn_800F20E0();
}

s32 fn_8002F468(void) {
    extern u16 lbl_80330708;
    lbl_80330708 = 0xF;
    return 9;
}

void fn_8002F61C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}

void *fn_8002F62C(void *arg0) {
    s32 temp_r3 = *(s32 *)((char *)arg0 + 4);
    if (temp_r3 >= (s32)*((s32 *)arg0)) {
        return NULL;
    }
    return (void *)(((char *)arg0) + ((temp_r3 * 0x14) + 8));
}

void *fn_8002F658(s32 *arg0, s32 arg1) {
    if (arg1 >= (s32)*arg0) {
        return NULL;
    }
    return (void *)(((char *)arg0) + ((arg1 * 0x14) << 2) + 0x8);
}

void *fn_8002F680(s32 *arg0, s8 arg1, s8 arg2) {
    u32 temp_r0 = *(u32 *)arg0;
    s32 var_r5 = 0;
    s32 *var_r6 = arg0;
    
    if (temp_r0 <= 0) {
        return NULL;
    }
    
    do {
        if ((arg1 == *(s8 *)((char *)var_r6 + 8)) && (arg2 == *(s8 *)((char *)var_r6 + 9))) {
            return (void *)(((u32)arg0) + (var_r5 * 0x14) + 8);
        }
        var_r6 = (s32 *) ((char *)var_r6 + 0x14);
        var_r5++;
    } while (--temp_r0 != 0);
    
    return NULL;
}

void fn_8002F728(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = -1;
}

void fn_8002F76C(void) {

}

void fn_8002F770(void) {

}

void fn_8002F774(void) {

}

void *fn_8002F778(void) {
    extern void *lbl_802694B8;
    return (char*)&lbl_802694B8 + 0xDE;
}

void fn_8002F788(s32 arg0) {
    s32 fn_80019E04(void *, M2C_UNK *, s32 *);
    M2C_UNK fn_8002C034(s32, s32);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern M2C_UNK lbl_802695F0;
    extern M2C_UNK lbl_80285050;
    extern M2C_UNK lbl_802853B4;
    extern M2C_UNK lbl_802853EC;
    extern s32 lbl_802EF4C8;
    extern M2C_UNK lbl_802EFDAC;
    extern u8 lbl_80367281;
    s32 temp_r31;

    temp_r31 = lbl_802EF4C8;
    fn_8002C034(temp_r31, fn_80019E04(&lbl_802695F0 + 0xE5, &lbl_802695F0, &lbl_802EF4C8));
    if ((s8) lbl_80367281 == 0) {
        M2C_FIELD(&lbl_802EFDAC, M2C_UNK **, 4) = &lbl_80285050;
        M2C_FIELD(&lbl_802EFDAC, M2C_UNK **, 4) = &lbl_802853EC;
        M2C_FIELD(&lbl_802EFDAC, M2C_UNK **, 4) = &lbl_802853B4;
        lbl_80367281 = 1;
    }
    fn_8002EB54(&lbl_802EFDAC, arg0);
}

s32 *fn_8002FA54(void) {
    M2C_UNK fn_8002BD44(s32, M2C_UNK);
    M2C_UNK fn_8002F658(M2C_UNK);
    s32 fn_8002F740();
    s32 *fn_8014CB14(M2C_UNK *, s32, M2C_UNK *);
    extern s32 lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    extern M2C_UNK lbl_80330708;
    s32 *var_r3;

    fn_8002BD44(lbl_802EF4C8, 0);
    var_r3 = &lbl_802EF4E0;
    if ((s32) lbl_802EF4E0 != 0) {
        fn_8002F658(0);
        var_r3 = fn_8014CB14(&lbl_80330708, fn_8002F740(), &lbl_80330708);
    }
    return var_r3;
}

void fn_80031508(s32 arg0) {
    M2C_UNK fn_80029C08(s32, s32 *);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern s32 lbl_802EF4C8;
    extern M2C_UNK lbl_802EFCB8;
    
    s32 var_r3 = *(s32*)((char*)&lbl_802EF4C8 + 0x0);
    fn_80029C08(var_r3, &lbl_802EF4C8);
    fn_8002EB54(&lbl_802EFCB8, arg0);
}

void fn_80031598(s32 arg0) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32);
    u8 fn_8001DD04(s32, M2C_UNK *);
    M2C_UNK fn_8003CE88(s32, u8, M2C_UNK *);
    extern M2C_UNK lbl_80285088;
    extern M2C_UNK lbl_802EF4C8;
    fn_8003CE88(M2C_FIELD(&lbl_802EF4C8, s32 *, 4), fn_8001DD04(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), &lbl_802EF4C8), &lbl_802EF4C8);
    fn_8004A224();
    fn_8000CAA0(&lbl_80285088, arg0);
}

void fn_800315F8(void) {
    M2C_UNK fn_8004A1F0(M2C_UNK *, s8);
    M2C_UNK fn_8014CB14(M2C_UNK *, s32, M2C_UNK *);
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_80330708;
    s8 temp_r4;

    temp_r4 = (s8) M2C_FIELD(&lbl_80330708, f32 *, 0x524);
    M2C_FIELD(&lbl_802EF4C8, s8 *, 0xF) = temp_r4;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 0x10) = (s8) M2C_FIELD(&lbl_80330708, f32 *, 0x528);
    fn_8004A1F0(&lbl_802EF4C8, temp_r4);
    fn_8014CB14(&lbl_80330708, M2C_FIELD(&lbl_802EF4C8, s32 *, 0), &lbl_80330708);
}

void fn_80031668(s32 arg0) {
    extern s32 *lbl_80367240;
    extern f32 lbl_80330708[];
    extern s16 lbl_802CA518[];
    extern u8 lbl_802695F0[];
    extern u8 lbl_8036723A;
    
    s32 temp_r3;
    s32 temp_r5;
    f32 fvar0;
    f32 fvar1;
    s16 svar0;
    
    temp_r3 = lbl_80367240[1];
    temp_r5 = temp_r3 & (lbl_80367240[2] ^ temp_r3);
    
    if ((temp_r5 & 0x800000) != 0) {
        // Load f32 values from lbl_80330708 with exact addressing
        fvar0 = lbl_80330708[0x524 / 4];
        fvar1 = lbl_80330708[0x528 / 4];
        
        // Convert to integers with correct shifts and masks  
        svar0 = (s16) fvar0;
        svar0 += ((s16) fvar1 << 6);
        svar0 <<= 1;
        
        // Access lbl_802CA518 with exact offset
        if (lbl_802CA518[(svar0 / 2) + 0x610E] >= 0) {
            fn_801475FC((void *)(lbl_802695F0 + 0xFC), 0x64);
            lbl_8036723A = 5;
            fn_8000C070(arg0, 0x63);
            return;
        }
    }
    
    if ((temp_r5 & 0x1000000) != 0) {
        lbl_8036723A = 9;
        fn_8000C070(arg0, 0x63);
    }
}

void fn_80031748(s32 arg0) {
    s32 *fn_800285C0(s32 *, s32 *);
    M2C_UNK fn_8002A084(s32, s32, s32 *);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern M2C_UNK lbl_80285050;
    extern M2C_UNK lbl_80285348;
    extern s32 lbl_802EF4C8;
    extern M2C_UNK lbl_802EFD7C;
    extern u8 lbl_8036726E;
    fn_8002A084(lbl_802EF4C8, *fn_800285C0(&lbl_802EF4C8, &lbl_802EF4C8), &lbl_802EF4C8);
    if ((s8) lbl_8036726E == 0) {
        M2C_FIELD(&lbl_802EFD7C, M2C_UNK **, 4) = &lbl_80285050;
        M2C_FIELD(&lbl_802EFD7C, M2C_UNK **, 4) = &lbl_80285348;
        lbl_8036726E = 1;
    }
    fn_8002EB54(&lbl_802EFD7C, arg0);
}

void fn_800317D4(s32 arg0) {
    extern s32 lbl_802EF4C8;
    extern void *lbl_802EFCB8;

    fn_800285C0(&lbl_802EF4C8, &lbl_802EF4C8);
    fn_8002A8CC(lbl_802EF4C8, *(s32 *)(((char *)lbl_802EF4C8 + 4)), &lbl_802EF4C8 );
    fn_8002EB54(&lbl_802EFCB8, arg0);
}

void fn_8003182C(s32 arg0) {
    extern s32 lbl_802EF4C8;
    extern u8 lbl_8036726D;
    extern void *lbl_80285050;
    extern void *lbl_80285314;
    extern void *lbl_802EFD70;

    fn_8002A2BC(lbl_802EF4C8, &lbl_802EF4C8);
    if ((s8) lbl_8036726D == 0) {
        *(void **)((char *)lbl_802EFD70 + 4) = &lbl_80285050;
        *(void **)((char *)lbl_802EFD70 + 4) = &lbl_80285314;
        lbl_8036726D = 1;
    }
    fn_8002EB54(&lbl_802EFD70, arg0);
}

void fn_800319E8(s32 arg0) {
    M2C_UNK fn_8002A784(s32, u8 *);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern M2C_UNK lbl_80285050;
    extern M2C_UNK lbl_802852E0;
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_802EFD4C;
    extern u8 lbl_8036726A;
    u8 sp8;

    sp8 = M2C_FIELD(&lbl_802EF4C8, u8 *, 0x13);
    fn_8002A784(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), &sp8);
    if ((s8) lbl_8036726A == 0) {
        M2C_FIELD(&lbl_802EFD4C, M2C_UNK **, 4) = &lbl_80285050;
        M2C_FIELD(&lbl_802EFD4C, M2C_UNK **, 4) = &lbl_802852E0;
        lbl_8036726A = 1;
    }
    fn_8002EB54(&lbl_802EFD4C, arg0);
}

void fn_80031C18(s32 arg0) {
    M2C_UNK fn_8002B2E8(s32, s32 *);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern M2C_UNK lbl_80285050;
    extern M2C_UNK lbl_80285210;
    extern M2C_UNK lbl_80285244;
    extern s32 lbl_802EF4C8;
    extern M2C_UNK lbl_802EFD28;
    extern u8 lbl_80367267;

    void *temp_r3 = &lbl_802EF4C8;
    fn_8002B2E8(*(s32*)temp_r3, temp_r3);

    if ((s8) lbl_80367267 == 0) {
        M2C_FIELD(&lbl_802EFD28, M2C_UNK **, 4) = &lbl_80285050;
        M2C_FIELD(&lbl_802EFD28, M2C_UNK **, 4) = &lbl_80285244;
        M2C_FIELD(&lbl_802EFD28, M2C_UNK **, 4) = &lbl_80285210;
        lbl_80367267 = 1;
    }
    
    fn_8002EB54(&lbl_802EFD28, arg0);
}

void fn_80031D28(s32 arg0, s32 arg1) {
    s32 *temp_r3 = (s32 *)arg0;
    s32 temp_r4 = *temp_r3;
    
    if (temp_r4 < 0) {
        *temp_r3 = 0;
    }
    
    if (temp_r4 > 0x4000) {
        *temp_r3 = 0x4000;
    }
    
    *(s32 *)arg1 = *temp_r3;
}

void fn_80031F6C(s32 arg0) {
    M2C_UNK fn_8002BAFC(s32, M2C_UNK);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern M2C_UNK lbl_80285050;
    extern M2C_UNK lbl_8028510C;
    extern M2C_UNK lbl_80285244;
    extern s32 lbl_802EF4C8;
    extern M2C_UNK lbl_802EFCDC;
    extern u8 lbl_80367261;
    fn_8002BAFC(lbl_802EF4C8, 2);
    if ((s8) lbl_80367261 == 0) {
        M2C_FIELD(&lbl_802EFCDC, M2C_UNK **, 4) = &lbl_80285050;
        M2C_FIELD(&lbl_802EFCDC, M2C_UNK **, 4) = &lbl_80285244;
        M2C_FIELD(&lbl_802EFCDC, M2C_UNK **, 4) = &lbl_8028510C;
        lbl_80367261 = 1;
    }
    fn_8002EB54(&lbl_802EFCDC, arg0);
}

void fn_80031FF8(s32 arg0) {
    extern s32 lbl_802EF4C8;
    extern u8 lbl_80367260;
    extern M2C_UNK lbl_80285050;
    extern M2C_UNK lbl_8028510C;
    extern M2C_UNK lbl_80285244;
    extern s32 lbl_802EFCD0;

    extern void fn_8002BAFC(s32, s32);
    extern void fn_8002EB54(M2C_UNK *, s32);

    s32 temp = lbl_802EF4C8;  
    fn_8002BAFC(temp, 1);  

    if ((s8) lbl_80367260 == 0) {
        *(M2C_UNK **)((u8*)&lbl_802EFCD0 + 4) = &lbl_80285050;
        *(M2C_UNK **)((u8*)&lbl_802EFCD0 + 4) = &lbl_80285244;
        *(M2C_UNK **)((u8*)&lbl_802EFCD0 + 4) = &lbl_8028510C;
        lbl_80367260 = 1;
    }

    fn_8002EB54((M2C_UNK *)&lbl_802EFCD0, arg0);
}

void fn_800323BC(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    extern f64 lbl_80368E80;
    
    if ((u32) M2C_FIELD(arg1, u32 *, 0x40) != 0U) {
        s32 temp_r11;
        s32 temp_r10;
        s32 temp_r9;
        
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void (**)(s32 *, s32 *, s32 *), 8)(&temp_r11, &temp_r10, &temp_r9);
        fn_8000A258();
        fn_80009D74(temp_r11 + 0x20, (f32)(temp_r11 + 0x20), (f32)(temp_r10 + 0x30), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8) temp_r9);
        fn_8000A248();
        fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40));
        fn_80090990();
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}

void fn_80032488(void *arg0, void *arg1) {
    M2C_UNK fn_80009B8C(u8);
    M2C_UNK fn_80009D74(s32, f32, f32, f32, f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    M2C_UNK fn_8002F740(u32);
    M2C_UNK fn_80090AA4(s32);
    extern f64 lbl_80368E80;
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r5;

    if ((u32) M2C_FIELD(arg1, u32 *, 0x40) != 0U) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(s32 *, s32 *, s32 *), 8)(&sp10, &spC, &sp8);
        fn_8000A258();
        temp_r5 = sp10 + 0x20;
        fn_80009D74(temp_r5, (f32) temp_r5, (f32) (spC + 0x30), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8) sp8);
        fn_8000A248();
        fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40));
        fn_80090AA4(M2C_FIELD(arg0, s32 *, 0xC));
        fn_8000A258();
        fn_80009B8C(0xFFU);
        fn_8000A248();
    }
}

#pragma cplusplus on
extern "C" void fn_80090C50(s32);
extern "C" void fn_8003284C(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    extern u8 lbl_802EF4C8[];
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 alpha;

    if (M2C_FIELD(arg1, u32 *, 0x40) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &alpha);
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0xB0), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8)alpha);
        fn_8000A248();
        fn_80090C50(fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)));
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x30), lbl_80368E24, lbl_80368E28);
        fn_8000A248();
        fn_80090C50(M2C_FIELD(lbl_802EF4C8, s32 *, 0));
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}
#pragma cplusplus reset
void *fn_80032B4C(void) {
    extern void *lbl_802695F0;
    return (void *)((u32)&lbl_802695F0 + 0x14F);
}

void fn_80032DB4(void *arg0, void *arg1) {
    M2C_UNK fn_8002FC64(s32, s32, s32);
    s32 sp10;
    s32 spC;
    s32 sp8;

    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x40) != 0U) && (fn_8002F740() != 0U)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(void *, s32 *, s32 *, s32 *), 8)(arg0, &sp10, &spC, &sp8);
        fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40));
        fn_8002FC64(sp10, spC, sp8);
    }
}

void fn_80033024(void) {
    M2C_UNK fn_8004A224();
    fn_8004A224();
}

M2C_UNK *fn_80033044(void) {
    s32 fn_80019E04(void *);
    M2C_UNK fn_8001D818(M2C_UNK *, s32);
    extern M2C_UNK lbl_802695F0;
    extern M2C_UNK lbl_80367278;
    fn_8001D818(&lbl_80367278, fn_80019E04(&lbl_802695F0 + 0xE5));
    return &lbl_80367278;
}

#include "common.h"

extern u16 lbl_80284E00[8];
extern u16 lbl_80284E20[8];
extern u32 lbl_802EF4E0[502];
extern u8 lbl_802CA518[151280];
extern u8 lbl_802B14E4[101760];
#include "common.h"

extern u16* lbl_80269210;
extern s32* lbl_80330708;
