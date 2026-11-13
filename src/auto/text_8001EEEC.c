/* Functions from 0x8001EEEC to 0x80028864, found by decomp-toolkit. */
#include "common.h"
#pragma cplusplus on
struct MenuSelection24768 { u8 pad[0x40]; u8 index; };
struct MenuController24768 { u32 pad;
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
virtual void v12(void *) = 0;
virtual void v13(void *) = 0;
virtual u8 v14(void *) = 0;
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
virtual void * v27() = 0;
virtual void * v28() = 0;
};
struct MenuItem24768 {
virtual void v0() = 0;
virtual void v1() = 0;
virtual void * v2() = 0;
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
virtual void v15(void *,void *) = 0;
virtual void * v16(void *) = 0;
};
#pragma cplusplus off

typedef struct {
    s32 field_0x0;
    s32 field_0x4;
    s32 field_0x8;
    s32 field_0xC;
    s32 field_0x10;
    s32 field_0x14;
    s32 field_0x18;
    s32 field_0x1C;
    s32 field_0x20;
    s32 field_0x24;
    s32 field_0x28;
    s32 field_0x2C;
    s32 field_0x30;
    s32 field_0x34;
    s32 field_0x38;
} Actor;


void fn_8001EEEC(s8 *p)
{
    for (;;) {
        switch (*p) {
        case 0:
            *p = 0x10;
            return;
        case 0x34:
            *p = 1;
            break;
        case 0x38:
            *p = 8;
            break;
        case 0x36:
            *p = 2;
            break;
        case 0x32:
            *p = 4;
            break;
        }
        p += 1;
    }
}

void fn_8001EF7C(void) {

}

s32 fn_8001EF80(void *arg0, s8 arg1, s8 arg2) {
    u8 *ptr;
    u8 var_r0_2;
    s32 tmp;
    
    if (arg1 < 0 || arg2 < 0) {
        return 0;
    }
    
    // Load grid data pointer
    ptr = M2C_FIELD(arg0, u8 **, 0x408E);
    
    // Check bounds
    if ((s8)(arg1 + 1) >= M2C_FIELD(arg0, u8 *, 0xA)) {
        return 0;
    }
    if ((s8)(arg2 + 1) >= M2C_FIELD(arg0, u8 *, 0xB)) {
        return 0;
    }
    if ((s8)(arg1 - 1) < M2C_FIELD(arg0, u8 *, 8)) {
        return 0;
    }
    if ((s8)(arg2 - 1) < M2C_FIELD(arg0, u8 *, 9)) {
        return 0;
    }
    
    // Check if movement is possible in all four directions
    var_r0_2 = 0x10;
    if (ptr[(s8)(arg1 + 1) + (arg2 << 6)] & 0x20) {
        var_r0_2 = 0x20;
    }
    if (ptr[(s8)(arg1 - 1) + (arg2 << 6)] & 0x40) {
        var_r0_2 = 0x40;
    }
    if (ptr[arg1 + ((s8)(arg2 + 1) << 6)] & 0x80) {
        var_r0_2 = 0x80;
    }
    if (ptr[arg1 + ((s8)(arg2 - 1) << 6)] & 0x100) {
        var_r0_2 = 0x100;
    }
    
    // Final check for valid direction
    tmp = M2C_FIELD(arg0, s16 **, 0x14190)[arg1 + (arg2 << 6)];
    if (tmp == 0) {
        return 0;
    }
    
    if ((s32)(ptr[arg1 + (arg2 << 6)] & var_r0_2) != 0) {
        return 1;
    }
    
    return 0;
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
void fn_8001F140(void *arg0) {
    s32 OSGetTick(void);
    void fn_80022DAC(void *, s32, s32);
    void fn_800AACDC(void *);
    extern u8 lbl_802CA264[];
    extern u8 lbl_80367289;

    void *node;
    void *next;
    s32 flags;
    s8 row;
    s32 row_off;
    u8 *row_base;
    s8 col;
    s32 idx;
    u8 *bp;
    s32 idx2;
    u16 *p;
    s8 r;
    s32 ro;
    s8 c;
    s32 i_cur_u;
    s32 i_up_u;
    s32 i_dn_u;
    s32 i_cur;
    s32 i_up;
    s32 i_dn;
    u16 tflags;
    u32 bit;
    u32 masked;
    u8 up;
    u8 dn;
    u8 lf;
    u8 rt;
    u16 packed;
    s32 a;
    s32 b;
    s32 x;
    s32 y;
    s8 row2;
    s32 ro2;
    u8 *base2;
    s8 col2;
    s32 idx3;
    u8 *bp2;
    s32 idx3_2;
    s32 zero;

    OSGetTick();
    fn_80022DAC(arg0, 9, 0);
    node = *(void **)(lbl_802CA264 + 0xC);
    while (node != NULL) {
        flags = *(s32 *)((u8 *)node + 0x1A0);
        next = *(void **)((u8 *)node + 0x184);
        if ((flags & 0x800) != 0 && (flags & 0x010000DC) == 0) {
            fn_800AACDC(node);
            row = (s8)(*(s32 *)((u8 *)arg0 + 4) - 1);
            row_off = row << 6;
            row_base = (u8 *)arg0 + row_off;
            while (row >= 0) {
                col = (s8)(*(s32 *)arg0 - 1);
                idx = col + row_off;
                bp = row_base + col;
                idx2 = idx << 1;
                while (col >= 0) {
                    if ((s8)bp[0xE18E] == 0) {
                        p = (u16 *)((u8 *)arg0 + (idx << 1));
                        if (*(u16 *)((s32)p + 0xC18E) != 0) {
                            *(u16 *)((s32)p + 0x1218E) |= 0x2000;
                        }
                    }
                    bp -= 1;
                    idx -= 1;
                    idx2 -= 2;
                    col -= 1;
                }
                row_base -= 0x40;
                row_off -= 0x40;
                row -= 1;
            }
        }
        node = next;
    }

    r = (s8)(*(s32 *)((u8 *)arg0 + 4) - 1);
    ro = r << 6;
    while (r >= 0) {
        c = (s8)(*(s32 *)arg0 - 1);
        i_cur_u = c + ro;
        i_up_u = c + ((s8)(r - 1) << 6);
        i_dn_u = c + ((s8)(r + 1) << 6);
        i_cur = i_cur_u << 1;
        i_dn = i_dn_u << 1;
        i_up = i_up_u << 1;
        while (c >= 0) {
            tflags = *(u16 *)((s32)arg0 + (i_cur_u << 1) + 0x1218E);
            if (tflags != 0) {
                bit = (tflags >> 13) & 1;
                if (r == 0) {
                    up = 0;
                } else {
                    masked = *(u16 *)((s32)arg0 + (i_up_u << 1) + 0x1218E);
                    masked &= 0x2000;
                    up = (u32)__cntlzw(masked) >> 5;
                }
                if (r == *(s32 *)((u8 *)arg0 + 4) - 1) {
                    dn = 0;
                } else {
                    masked = *(u16 *)((s32)arg0 + (i_dn_u << 1) + 0x1218E);
                    masked &= 0x2000;
                    dn = (u32)__cntlzw(masked) >> 5;
                }
                if (c == 0) {
                    lf = 0;
                } else {
                    masked = *(u16 *)((s32)arg0 + (((s8)(c - 1) + ro) << 1) + 0x1218E);
                    masked &= 0x2000;
                    lf = (u32)__cntlzw(masked) >> 5;
                }
                if (c == *(s32 *)arg0 - 1) {
                    rt = 0;
                } else {
                    masked = *(u16 *)((s32)arg0 + (((s8)(c + 1) + ro) << 1) + 0x1218E);
                    masked &= 0x2000;
                    rt = (u32)__cntlzw(masked) >> 5;
                }
                packed = 0;
                packed <<= 1;
                packed |= (u16)bit;
                if (bit != 0) {
                    packed <<= 6;
                    packed |= (u16)(u8)up;
                    packed <<= 1;
                    packed |= (u16)(u8)dn;
                    packed <<= 1;
                    packed |= (u16)(u8)rt;
                    packed <<= 1;
                    packed |= (u16)(u8)lf;
                } else {
                    packed <<= 9;
                }
                *(u16 *)((s32)arg0 + (i_cur_u << 1) + 0x1218E) = (packed << 4) & 0xFFF0;
            }
            i_cur_u -= 1;
            i_cur -= 2;
            i_up_u -= 1;
            i_up -= 2;
            i_dn_u -= 1;
            i_dn -= 2;
            c -= 1;
        }
        ro -= 0x40;
        r -= 1;
    }

    a = 1;
    b = lbl_80367289;
    b = (u8)(b - 1);
    x = ~b;
    y = a - b;
    x = a | x;
    if (((u32)(x - ((u32)y >> 1)) >> 31) == 0) {
        a = 0;
    }
    if ((u8)a != 0) {
        zero = 0;
        row2 = (s8)(*(s32 *)((u8 *)arg0 + 4) - 1);
        ro2 = row2 << 6;
        base2 = (u8 *)arg0 + ro2;
        while (row2 >= 0) {
            col2 = (s8)(*(s32 *)arg0 - 1);
            idx3 = col2 + ro2;
            bp2 = base2 + col2;
            idx3_2 = idx3 << 1;
            while (col2 >= 0) {
                if (bp2[0x200D] == 0) {
                    *(u16 *)((s32)arg0 + (idx3 << 1) + 0x1218E) = zero;
                }
                bp2 -= 1;
                idx3 -= 1;
                idx3_2 -= 2;
                col2 -= 1;
            }
            base2 -= 0x40;
            ro2 -= 0x40;
            row2 -= 1;
        }
    }
    OSGetTick();
}
s32 fn_8001F4CC(void *arg0, s8 arg1, s8 arg2) {
    if (arg1 < (s8) M2C_FIELD(arg0, u8 *, 8)) {
        return 0;
    }
    if (arg1 >= (s8) M2C_FIELD(arg0, u8 *, 0xA)) {
        return 0;
    }
    if (arg2 < (s8) M2C_FIELD(arg0, u8 *, 9)) {
        return 0;
    }
    return arg2 < (s8) M2C_FIELD(arg0, u8 *, 0xB);
}

#pragma fp_contract off
#pragma global_optimizer off
f32 fn_8001F53C(void *arg0, s8 arg1, s8 arg2, s32 arg3) {
    extern f32 lbl_80368D78;
    extern f32 lbl_80368D7C;
    s32 idx;
    s16 *cell;
    u8 *row;
    f32 scale;
    f32 t0, t1, t2, t3;
    f32 s0, s1;

    switch (arg3) {
    case 8:
        idx = (s32)arg1 + ((s32)arg2 << 6);
        row = (u8 *)arg0 + 0x10000;
        cell = (s16 *)(row + (idx << 3));
        scale = *(f32 *)((u8 *)arg0 + 0x1C2D4);
        t0 = (f32)*(s16 *)((u8 *)cell + 0x42D4);
        t1 = (f32)*(s16 *)((u8 *)cell + 0x42D6);
        t2 = (f32)*(s16 *)((u8 *)cell + 0x42D8);
        t3 = (f32)*(s16 *)((u8 *)cell + 0x42DA);
        t0 = t0 * scale;
        t1 = t1 * scale;
        s0 = (t0 + t1) * lbl_80368D78;
        t2 = t2 * scale;
        t3 = t3 * scale;
        s1 = (t2 + t3) * lbl_80368D78;
        return s0 - s1;
    case 4:
        idx = (s32)arg1 + ((s32)arg2 << 6);
        row = (u8 *)arg0 + 0x10000;
        cell = (s16 *)(row + (idx << 3));
        scale = *(f32 *)((u8 *)arg0 + 0x1C2D4);
        t0 = (f32)*(s16 *)((u8 *)cell + 0x42D8);
        t1 = (f32)*(s16 *)((u8 *)cell + 0x42DA);
        t2 = (f32)*(s16 *)((u8 *)cell + 0x42D4);
        t3 = (f32)*(s16 *)((u8 *)cell + 0x42D6);
        t0 = t0 * scale;
        t1 = t1 * scale;
        s0 = (t0 + t1) * lbl_80368D78;
        t2 = t2 * scale;
        t3 = t3 * scale;
        s1 = (t2 + t3) * lbl_80368D78;
        return s0 - s1;
    case 1:
        idx = (s32)arg1 + ((s32)arg2 << 6);
        row = (u8 *)arg0 + 0x10000;
        cell = (s16 *)(row + (idx << 3));
        scale = *(f32 *)((u8 *)arg0 + 0x1C2D4);
        t0 = (f32)*(s16 *)((u8 *)cell + 0x42D4);
        t1 = (f32)*(s16 *)((u8 *)cell + 0x42D8);
        t2 = (f32)*(s16 *)((u8 *)cell + 0x42D6);
        t3 = (f32)*(s16 *)((u8 *)cell + 0x42DA);
        t0 = t0 * scale;
        t1 = t1 * scale;
        s0 = (t0 + t1) * lbl_80368D78;
        t2 = t2 * scale;
        t3 = t3 * scale;
        s1 = (t2 + t3) * lbl_80368D78;
        return s0 - s1;
    case 2:
        idx = (s32)arg1 + ((s32)arg2 << 6);
        row = (u8 *)arg0 + 0x10000;
        cell = (s16 *)(row + (idx << 3));
        scale = *(f32 *)((u8 *)arg0 + 0x1C2D4);
        t0 = (f32)*(s16 *)((u8 *)cell + 0x42D6);
        t1 = (f32)*(s16 *)((u8 *)cell + 0x42DA);
        t2 = (f32)*(s16 *)((u8 *)cell + 0x42D4);
        t3 = (f32)*(s16 *)((u8 *)cell + 0x42D8);
        t0 = t0 * scale;
        t1 = t1 * scale;
        s0 = (t0 + t1) * lbl_80368D78;
        t2 = t2 * scale;
        t3 = t3 * scale;
        s1 = (t2 + t3) * lbl_80368D78;
        return s0 - s1;
    default:
        return lbl_80368D7C;
    }
}
#pragma global_optimizer on
s32 fn_8001F85C(s32 arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    s32 var_r0;
    s32 var_r8;
    u8 var_r0_2;

    var_r8 = arg2 - arg4;
    if (var_r8 < 0) {
        var_r8 = -var_r8;
    }
    var_r0 = arg1 - arg3;
    if (var_r0 < 0) {
        var_r0 = -var_r0;
    }
    if ((s32)(var_r0 + var_r8) != 1) {
        return 0;
    }
    if (arg1 < arg3) {
        var_r0_2 = 2;
    } else if (arg1 > arg3) {
        var_r0_2 = 1;
    } else if (arg2 < arg4) {
        var_r0_2 = 4;
    } else if (arg2 > arg4) {
        var_r0_2 = 8;
    } else {
        var_r0_2 = 0x10;
    }
    return ((M2C_FIELD((arg0 + ((arg1 + (arg2 << 6)) * 2)), u16 *, 0x408E) & var_r0_2) != 0) != 0;
}

void fn_8001F91C(void *map, s8 centerX, s8 centerY, s8 radius) {
    u8 *row;
    u8 *cell;
    s8 x;
    s8 y;
    s32 dy;
    s32 negDy;
    s32 absDy;
    s32 dx;

    row = (u8 *)map;
    for (y = 0; y < *(s32 *)((u8 *)map + 4); y++) {
        dy = y - centerY;
        cell = row;
        negDy = -dy;

        for (x = 0; x < *(s32 *)map; x++) {
            absDy = dy;
            if (dy < 0) {
                absDy = negDy;
            }

            dx = x - centerX;
            if (dx < 0) {
                dx = -dx;
            }

            if (dx + absDy <= radius) {
                cell[0x200D] = 1;
            }
            cell++;
        }
        row += 0x40;
    }
}

u8 *fn_8001FC24(u8 *arg0) {
arg0+=0x14194;
*arg0=0x10;
return arg0;
}

s32 fn_8001FC34(s32 arg0) {
    return arg0 + 0x14194;
}

u8 *fn_8001FC7C(void *arg0, u8 *arg1, s8 arg2, s8 arg3);
u8 *fn_8001FC40(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, u8 *, 0xC) = 1;
    return fn_8001FC7C(arg0, (u8 *)arg0 + 0x14194, arg1, arg2);
}

extern u8 lbl_80366DB8[8];
s32 fn_8000CEE4(s32);
u8 *fn_8001FC7C(void *arg0, u8 *arg1, s8 arg2, s8 arg3) {
    u8 cand[4];
    u16 dist[4];
    u8 buf[0x88];
    u8 *start;
    u8 *src;
    u8 *dst;
    u8 *out;
    s32 i;
    u16 min;
    u8 n;
    u8 dir;

    start = arg1;
    while (M2C_FIELD(arg0, s16 **, 0x14190)[arg2 + (arg3 << 6)] != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x24EEA) != 0) {
            if (((u16 *)((u8 *)arg0 + 0x408E))[(s8)(arg2 + 1) + (arg3 << 6)] & 0x10) {
                dist[0] = 0xFFFF;
            } else {
                dist[0] = M2C_FIELD(arg0, s16 **, 0x14190)[(s8)(arg2 + 1) + (arg3 << 6)];
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[(s8)(arg2 - 1) + (arg3 << 6)] & 0x20) {
                dist[1] = 0xFFFF;
            } else {
                dist[1] = M2C_FIELD(arg0, s16 **, 0x14190)[(s8)(arg2 - 1) + (arg3 << 6)];
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[arg2 + ((s8)(arg3 + 1) << 6)] & 0x80) {
                dist[3] = 0xFFFF;
            } else {
                dist[3] = M2C_FIELD(arg0, s16 **, 0x14190)[arg2 + ((s8)(arg3 + 1) << 6)];
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[arg2 + ((s8)(arg3 - 1) << 6)] & 0x40) {
                dist[2] = 0xFFFF;
            } else {
                dist[2] = M2C_FIELD(arg0, s16 **, 0x14190)[arg2 + ((s8)(arg3 - 1) << 6)];
            }
        } else {
            if (((u16 *)((u8 *)arg0 + 0x408E))[(s8)(arg2 + 1) + (arg3 << 6)] & 0x1) {
                dist[0] = M2C_FIELD(arg0, s16 **, 0x14190)[(s8)(arg2 + 1) + (arg3 << 6)];
            } else {
                dist[0] = 0xFFFF;
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[(s8)(arg2 - 1) + (arg3 << 6)] & 0x2) {
                dist[1] = M2C_FIELD(arg0, s16 **, 0x14190)[(s8)(arg2 - 1) + (arg3 << 6)];
            } else {
                dist[1] = 0xFFFF;
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[arg2 + ((s8)(arg3 + 1) << 6)] & 0x8) {
                dist[3] = M2C_FIELD(arg0, s16 **, 0x14190)[arg2 + ((s8)(arg3 + 1) << 6)];
            } else {
                dist[3] = 0xFFFF;
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[arg2 + ((s8)(arg3 - 1) << 6)] & 0x4) {
                dist[2] = M2C_FIELD(arg0, s16 **, 0x14190)[arg2 + ((s8)(arg3 - 1) << 6)];
            } else {
                dist[2] = 0xFFFF;
            }
        }
        min = 0xFFFF;
        n = 0;
        for (i = 0; i < 4; i++) {
            if (min > dist[i]) {
                min = dist[i];
            }
        }
        for (i = 0; i < 4; i++) {
            if (min == dist[i]) {
                cand[n++] = lbl_80366DB8[i];
            }
        }
        switch (n) {
        case 1:
            dir = cand[0];
            break;
        case 2:
        case 3:
        case 4:
            dir = cand[fn_8000CEE4(n)];
            break;
        }
        *arg1++ = dir;
        switch (dir) {
        case 1:
            arg2++;
            break;
        case 2:
            arg2--;
            break;
        case 8:
            arg3++;
            break;
        case 4:
            arg3--;
            break;
        }
    }
    src = arg1;
    out = start;
    dst = buf;
    while (src > start) {
        *dst++ = *--src;
    }
    *dst = 0x10;
    src = buf;
    while (*src != 0x10) {
        *out++ = *src++;
    }
    *out = 0x10;
    return start;
}

void fn_8002011C(void *arg0, s8 arg1, s8 arg2, u8 arg3, u8 arg4)
{
    void fn_80022DAC(void *, s32, s32);
    s8 x;
    void *self;
    s8 y;

    x = arg1;
    self = arg0;
    y = arg2;

    ((u8 *)self + 0x20000)[0x4EE0] = 0;
    *(u16 *)((u8 *)self + 0x24EE2) = arg4;
    *(void **)((u8 *)self + 0x24ED8) = (u8 *)self + 0x242D8;
    *(void **)((u8 *)self + 0x24EDC) = (u8 *)self + 0x248D8;
    ((u8 *)self + 0x20000)[0x4EE9] = arg3;

    (*(u8 **)((u8 *)self + 0x24EDC))[0] = (u8)x;
    (*(u8 **)((u8 *)self + 0x24EDC))[1] = (u8)y;
    (*(u8 **)((u8 *)self + 0x24EDC))[2] = 0x20;
    *(u16 *)(*(u8 **)((u8 *)self + 0x24EDC) + 4) = 0;
    *(u8 **)((u8 *)self + 0x24EDC) = *(u8 **)((u8 *)self + 0x24EDC) + 6;
    (*(u8 **)((u8 *)self + 0x24EDC))[2] = 0x10;

    fn_80022DAC(self, 0xB, -1);

    (*(s16 **)((u8 *)self + 0x14190))[(s8)x + ((s8)y << 6)] = 0;

    for (;;) {
        u8 slot;
        u8 *ed8;
        u8 *edc;

        slot = ((u8 *)self + 0x20000)[0x4EE0];
        *(void **)((u8 *)self + 0x24EDC) = (u8 *)self + slot * 0x600 + 0x242D8;
        ((u8 *)self + 0x20000)[0x4EE0] = (u8)(slot ^ 1);
        slot = ((u8 *)self + 0x20000)[0x4EE0];
        *(void **)((u8 *)self + 0x24ED8) = (u8 *)self + slot * 0x600 + 0x242D8;
        ((u8 *)self + 0x20000)[0x4EE1] = 0;

        ed8 = *(u8 **)((u8 *)self + 0x24ED8);
        if (ed8[2] == 0x10) {
            break;
        }

        do {
            switch (ed8[2]) {
            case 0x20:
            case 0x8:
            case 0x4:
            case 0x1:
            case 0x2:
                break;
            }
            edc = *(u8 **)((u8 *)self + 0x24EDC);
            edc[2] = 0x10;
            ed8 += 6;
            *(u8 **)((u8 *)self + 0x24ED8) = ed8;
        } while (ed8[2] != 0x10);
    }
}

s16 fn_8002134C(u8 *map, s8 x, s8 y) {
    extern u8 lbl_802B14E4[];
    u8 *cell;
    u8 *hi;
    u8 tid;
    u8 uid;
    s16 val;
    u8 *unit;
    u8 *cls;

    hi = map + 0x10000;
    cell = map + x + (y << 6);
    tid = cell[0x100D];
    uid = cell[0xD];
    val = (s16)*(u16 *)(hi + (tid << 1) + 0x4214);
    if (uid != 0) {
        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
        cls = *(u8 **)(unit + 0x190);
        if ((map + 0x20000)[cls[8] + 0x4EE4] != 0) {
            return 0x7FFE;
        }
    }
    return val;
}

void fn_800213D0(void *map, u8 x, u8 y, u16 range, s32 flagA, s32 flagB)
{
    void fn_80022DAC(void *, s32, s32);
    extern u8 lbl_802B14E4[];
    u8 *ed8;
    u8 *edc;
    u8 slot;
    s16 *costs;
    u8 nx;
    u8 ny;
    u8 kind;
    u16 flags;
    u16 neu;
    u16 oldc;
    u16 have;
    u8 *cell;
    u8 tid;
    u8 uid;
    u8 *unit;
    u8 *cls;

    ((u8 *)map + 0x20000)[0x4EE0] = 0;
    *(u16 *)((u8 *)map + 0x24EE2) = range;
    *(void **)((u8 *)map + 0x24ED8) = (u8 *)map + 0x242D8;
    *(void **)((u8 *)map + 0x24EDC) = (u8 *)map + 0x248D8;

    edc = *(u8 **)((u8 *)map + 0x24EDC);
    edc[0] = x;
    edc = *(u8 **)((u8 *)map + 0x24EDC);
    edc[1] = y;
    edc = *(u8 **)((u8 *)map + 0x24EDC);
    edc[2] = 0x20;
    edc = *(u8 **)((u8 *)map + 0x24EDC);
    *(u16 *)(edc + 4) = 0;
    edc = *(u8 **)((u8 *)map + 0x24EDC);
    *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
    edc = *(u8 **)((u8 *)map + 0x24EDC);
    edc[2] = 0x10;

    fn_80022DAC(map, 0xB, -1);

    ((u8 *)map)[0xC] = 0;
    costs = *(s16 **)((u8 *)map + 0x14190);
    costs[(s8)x + ((s8)y << 6)] = 0;

    if ((u8)flagB == 0 || (u8)flagA == 0) {
        ((u8 *)map + 0x20000)[0x4EE8] = 0;
        if ((u8)flagB != 0) {
            ((u8 *)map + 0x20000)[0x4EE8] |= 1;
        }
        if ((u8)flagA != 0) {
            ((u8 *)map + 0x20000)[0x4EE8] |= 2;
        }
    }

    for (;;) {
        slot = ((u8 *)map + 0x20000)[0x4EE0];
        *(void **)((u8 *)map + 0x24EDC) = (u8 *)map + slot * 0x600 + 0x242D8;
        ((u8 *)map + 0x20000)[0x4EE0] = (u8)(slot ^ 1);
        slot = ((u8 *)map + 0x20000)[0x4EE0];
        *(void **)((u8 *)map + 0x24ED8) = (u8 *)map + slot * 0x600 + 0x242D8;
        ((u8 *)map + 0x20000)[0x4EE1] = 0;

        ed8 = *(u8 **)((u8 *)map + 0x24ED8);
        if (ed8[2] == 0x10) {
            break;
        }

        do {
            ny = ed8[1];
            nx = ed8[0];
            kind = ed8[2];
            flags = *(u16 *)((u8 *)map + 0x1408E + (((s8)nx + ((s8)ny << 6)) << 1));
            if (((u8 *)map + 0x20000)[0x4EEA] != 0) {
                flags = (u16)(((flags ^ 0xF0) >> 4) & 0xFFF);
            }

            costs = *(s16 **)((u8 *)map + 0x14190);
            oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];

            switch (kind) {
            case 0x20:
                if (flags & 0x8) {
                    cell = (u8 *)map + (s8)nx + (((s8)ny - 1) << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c20_s;
                        }
                    }
                    have = (u16)costs[(s8)nx + (((s8)ny - 1) << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = nx;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = (u8)(ny - 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x8;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[(s8)nx + (((s8)ny - 1) << 6)] = (s16)neu;
                    }
                }
            c20_s:
                if (flags & 0x4) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + (s8)nx + (((s8)ny + 1) << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c20_w;
                        }
                    }
                    have = (u16)costs[(s8)nx + (((s8)ny + 1) << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = nx;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = (u8)(ny + 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x4;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[(s8)nx + (((s8)ny + 1) << 6)] = (s16)neu;
                    }
                }
            c20_w:
                if (flags & 0x1) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + ((s8)nx - 1) + ((s8)ny << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c20_e;
                        }
                    }
                    have = (u16)costs[((s8)nx - 1) + ((s8)ny << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = (u8)(nx - 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = ny;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x1;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[((s8)nx - 1) + ((s8)ny << 6)] = (s16)neu;
                    }
                }
            c20_e:
                if (flags & 0x2) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + ((s8)nx + 1) + ((s8)ny << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            break;
                        }
                    }
                    have = (u16)costs[((s8)nx + 1) + ((s8)ny << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = (u8)(nx + 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = ny;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x2;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[((s8)nx + 1) + ((s8)ny << 6)] = (s16)neu;
                    }
                }
                break;
            case 0x8:
                if (flags & 0x8) {
                    cell = (u8 *)map + (s8)nx + (((s8)ny - 1) << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c8_w;
                        }
                    }
                    have = (u16)costs[(s8)nx + (((s8)ny - 1) << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = nx;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = (u8)(ny - 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x8;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[(s8)nx + (((s8)ny - 1) << 6)] = (s16)neu;
                    }
                }
            c8_w:
                if (flags & 0x1) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + ((s8)nx - 1) + ((s8)ny << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c8_e;
                        }
                    }
                    have = (u16)costs[((s8)nx - 1) + ((s8)ny << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = (u8)(nx - 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = ny;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x1;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[((s8)nx - 1) + ((s8)ny << 6)] = (s16)neu;
                    }
                }
            c8_e:
                if (flags & 0x2) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + ((s8)nx + 1) + ((s8)ny << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            break;
                        }
                    }
                    have = (u16)costs[((s8)nx + 1) + ((s8)ny << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = (u8)(nx + 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = ny;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x2;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[((s8)nx + 1) + ((s8)ny << 6)] = (s16)neu;
                    }
                }
                break;
            case 0x4:
                if (flags & 0x4) {
                    cell = (u8 *)map + (s8)nx + (((s8)ny + 1) << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c4_w;
                        }
                    }
                    have = (u16)costs[(s8)nx + (((s8)ny + 1) << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = nx;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = (u8)(ny + 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x4;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[(s8)nx + (((s8)ny + 1) << 6)] = (s16)neu;
                    }
                }
            c4_w:
                if (flags & 0x1) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + ((s8)nx - 1) + ((s8)ny << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c4_e;
                        }
                    }
                    have = (u16)costs[((s8)nx - 1) + ((s8)ny << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = (u8)(nx - 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = ny;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x1;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[((s8)nx - 1) + ((s8)ny << 6)] = (s16)neu;
                    }
                }
            c4_e:
                if (flags & 0x2) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + ((s8)nx + 1) + ((s8)ny << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            break;
                        }
                    }
                    have = (u16)costs[((s8)nx + 1) + ((s8)ny << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = (u8)(nx + 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = ny;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x2;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[((s8)nx + 1) + ((s8)ny << 6)] = (s16)neu;
                    }
                }
                break;
            case 0x1:
                if (flags & 0x8) {
                    cell = (u8 *)map + (s8)nx + (((s8)ny - 1) << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c1_s;
                        }
                    }
                    have = (u16)costs[(s8)nx + (((s8)ny - 1) << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = nx;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = (u8)(ny - 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x8;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[(s8)nx + (((s8)ny - 1) << 6)] = (s16)neu;
                    }
                }
            c1_s:
                if (flags & 0x4) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + (s8)nx + (((s8)ny + 1) << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c1_w;
                        }
                    }
                    have = (u16)costs[(s8)nx + (((s8)ny + 1) << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = nx;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = (u8)(ny + 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x4;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[(s8)nx + (((s8)ny + 1) << 6)] = (s16)neu;
                    }
                }
            c1_w:
                if (flags & 0x1) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + ((s8)nx - 1) + ((s8)ny << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            break;
                        }
                    }
                    have = (u16)costs[((s8)nx - 1) + ((s8)ny << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = (u8)(nx - 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = ny;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x1;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[((s8)nx - 1) + ((s8)ny << 6)] = (s16)neu;
                    }
                }
                break;
            case 0x2:
                if (flags & 0x8) {
                    cell = (u8 *)map + (s8)nx + (((s8)ny - 1) << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c2_s;
                        }
                    }
                    have = (u16)costs[(s8)nx + (((s8)ny - 1) << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = nx;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = (u8)(ny - 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x8;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[(s8)nx + (((s8)ny - 1) << 6)] = (s16)neu;
                    }
                }
            c2_s:
                if (flags & 0x4) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + (s8)nx + (((s8)ny + 1) << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            goto c2_e;
                        }
                    }
                    have = (u16)costs[(s8)nx + (((s8)ny + 1) << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = nx;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = (u8)(ny + 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x4;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[(s8)nx + (((s8)ny + 1) << 6)] = (s16)neu;
                    }
                }
            c2_e:
                if (flags & 0x2) {
                    ny = (*(u8 **)((u8 *)map + 0x24ED8))[1];
                    nx = (*(u8 **)((u8 *)map + 0x24ED8))[0];
                    costs = *(s16 **)((u8 *)map + 0x14190);
                    oldc = (u16)costs[(s8)nx + ((s8)ny << 6)];
                    cell = (u8 *)map + ((s8)nx + 1) + ((s8)ny << 6);
                    tid = cell[0x100D];
                    uid = cell[0xD];
                    neu = (u16)(oldc + *(u16 *)((u8 *)map + 0x14214 + (tid << 1)));
                    if (uid != 0) {
                        unit = (uid != 0) ? lbl_802B14E4 + (uid - 1) * 0x280 : NULL;
                        cls = *(u8 **)(unit + 0x190);
                        if (((u8 *)map + 0x20000)[0x4EE4 + cls[8]] != 0) {
                            break;
                        }
                    }
                    have = (u16)costs[((s8)nx + 1) + ((s8)ny << 6)];
                    if (neu < have && neu <= *(u16 *)((u8 *)map + 0x24EE2)) {
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[0] = (u8)(nx + 1);
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[1] = ny;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        edc[2] = 0x2;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u16 *)(edc + 4) = neu;
                        edc = *(u8 **)((u8 *)map + 0x24EDC);
                        *(u8 **)((u8 *)map + 0x24EDC) = edc + 6;
                        ((u8 *)map + 0x20000)[0x4EE1]++;
                        costs = *(s16 **)((u8 *)map + 0x14190);
                        costs[((s8)nx + 1) + ((s8)ny << 6)] = (s16)neu;
                    }
                }
                break;
            }

            edc = *(u8 **)((u8 *)map + 0x24EDC);
            edc[2] = 0x10;
            ed8 += 6;
            *(u8 **)((u8 *)map + 0x24ED8) = ed8;
        } while (ed8[2] != 0x10);
    }
}

void fn_80022748(u8 *map, u8 *arg1) {
    u8 v;

    if (arg1 == NULL) {
        map += 0x20000;
        map[0x4EE4] = 0;
        map[0x4EE5] = 0;
        map[0x4EE6] = 0;
        map[0x4EE7] = 0;
        return;
    }
    v = arg1[8];
    switch (v) {
    case 0:
    case 2:
    case 3:
        map += 0x20000;
        map[0x4EE4] = 0;
        map[0x4EE5] = 1;
        map[0x4EE6] = 0;
        map[0x4EE7] = 0;
        break;
    case 1:
        map += 0x20000;
        map[0x4EE4] = 1;
        map[0x4EE5] = 0;
        map[0x4EE6] = 1;
        map[0x4EE7] = 1;
        break;
    }
}

#pragma scheduling off
void fn_800227D0(s32 arg0, s32 arg1, s8 arg2) {
    s32 base;
    s16 val;

    base = arg0 + 0x10000;
    arg0 = arg1 << 1;
    val = arg2;
    base += arg0;
    *(s16 *)(base + 0x4214) = val;
    if (arg2 < 0) {
        *(s16 *)(base + 0x4214) = 0x7FFE;
    }
}
#pragma scheduling on
void fn_800227F8(void* arg0, s32 arg1)
{
    s32 r30;
    s32 r31;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r0;
    
    r30 = arg1;
    r31 = (s32)arg0;
    
    // Call to fn_80019DBC
    fn_80019DBC();
    
    if (r30 != 0) {
        return;
    }
    
    // Set a bunch of values at fixed offsets from r31 
    r4 = 1;
    r5 = r31 + 0x2;
    r6 = 1;
    r7 = r31;
    
    // Loop to set some values
    r0 = 0x3;
    r5 = r31 + 0x2;
    r6 = 1;
    
    // Set several values starting at offset 0x4214 in memory
    *(u16*)(r5 + 0x4214) = r4;
    *(u16*)(r5 + 0x4216) = r4;
    *(u16*)(r5 + 0x4218) = r4;
    *(u16*)(r5 + 0x421a) = r4;
    *(u16*)(r5 + 0x421c) = r4;
    *(u16*)(r5 + 0x421e) = r4;
    *(u16*)(r5 + 0x4220) = r4;
    *(u16*)(r5 + 0x4222) = r4;
    
    // Add some more memory operations with incrementing addresses
    
    // Set another batch of values
    *(u16*)(r5 + 0x8214) = r4;  // This address seems to be r5 = offset of r31 + 0x4000 + 0x14 (0x4214)
    *(u16*)(r5 + 0x8216) = r4;
    *(u16*)(r5 + 0x8218) = r4;
    *(u16*)(r5 + 0x821a) = r4;
    *(u16*)(r5 + 0x821c) = r4;
    *(u16*)(r5 + 0x821e) = r4;
    *(u16*)(r5 + 0x8220) = r4;
    *(u16*)(r5 + 0x8222) = r4;
    
    // Add more memory operations with different offsets
    *(u16*)(r5 + 0xc214) = r4;
    *(u16*)(r5 + 0xc216) = r4;
    *(u16*)(r5 + 0xc218) = r4;
    *(u16*)(r5 + 0xc21a) = r4;
    *(u16*)(r5 + 0xc21c) = r4;
    *(u16*)(r5 + 0xc21e) = r4;
    *(u16*)(r5 + 0xc220) = r4;
    *(u16*)(r5 + 0xc222) = r4;
    
    // Another loop with similar operations, but more complex control flow
    
    // Final operations
    *(u16*)(r31 + 0x4214) = 0x7fff;  // Set to maximum value 
    *(u8*)(r31 + 0x4eea) = 1;
    
    // Conditionally set value based on input parameter
    if (arg1 != 0) {
        r4 = *(u8*)(arg1 + 0x42);
        r5 = *(s32*)(arg1 + 0x8);
        r0 = r4 + 0x8;
        r4 = *(s32*)(r5 + r0);
        
        if (r4 < 0) {
            r6 = (unsigned char)r4; // sign extend
            *(u16*)(r7 + 0x4214) = r6;
            
            // Set some more values
            r4 = 0x4;
            fn_80105BC0(arg1, r4);
            
            // Set a value in the end
            *(u8*)(r31 + 0x4eea) = (u8)((0 - *(u8*)(arg1 + 0x1c)) & 0xFF);
        }
    }
    
    return;
}

void fn_8002297C(void *arg0)
{
    void fn_800152F8(s32, s32, s32, s32, s32, s32, s32, s32, void *);
    void fn_8001F140(void *);
    void fn_80022DAC(void *, s32, u8);
    s8 fn_8003A1C4(void *);
    void fn_8010FAA8(void);
    extern u8 lbl_802B14E4[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80367289;

    u8 buf1[8];
    u8 buf2[8];
    u8 buf3[8];
    void *self;
    u8 *unit;
    s32 i;
    s8 x, y;
    s8 rad;
    s8 ux, uy;
    s32 adx;
    s32 nadx;
    s32 ax;
    s32 ady;
    u8 *row;
    u8 *cursor;
    u8 f;
    s32 saved;
    u8 t;

#pragma optimization_level 1
    f = 1;
    self = arg0;
    t = (u8)(lbl_80367289 - 1);
    if (((u32)((f | ~t) - ((u32)(f - t) >> 1)) >> 31) == 0) {
        f = 0;
    }
    saved = (f != 0);
#pragma optimization_level reset
    fn_80022DAC(self, 0, 0);
    fn_80022DAC(self, 2, (u8)(saved == 0));
    fn_80022DAC(self, 3, 0);
    fn_800152F8(1, 0, 1, 1, 0, 0, 0, 0, buf1);

    unit = 0;
    for (i = 0x9F; i >= 1; i--) {
        if ((u8)i != 0) {
            unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (*(u32 *)(unit + 0x188) != 0
            && buf1[*(u8 *)(*(u8 **)(unit + 0x190) + 8)] != 0
            && (*(u32 *)(unit + 0x1A0) & 0x010000DC) == 0) {
            ((u8 *)self)[*(s8 *)(unit + 0x19E) + (*(s8 *)(unit + 0x19F) << 6) + 0xD] =
                unit[0x198];
            rad = fn_8003A1C4(unit);
            uy = *(s8 *)(unit + 0x19F);
            row = (u8 *)self;
            ux = *(s8 *)(unit + 0x19E);
            for (y = 0; y < *(s32 *)((u8 *)self + 4); y++) {
                adx = y - uy;
                cursor = row;
                nadx = -adx;
                for (x = 0; x < *(s32 *)self; x++) {
                    ax = adx;
                    if (adx < 0) {
                        ax = nadx;
                    }
                    ady = x - ux;
                    if (ady < 0) {
                        ady = -ady;
                    }
                    if (ax + ady <= rad) {
                        cursor[0x200D] = 1;
                    }
                    cursor += 1;
                }
                row += 0x40;
            }
        }
    }

    if (lbl_80330708[0x11] != 1) {
        fn_800152F8(0, 1, 0, 0, 0, 0, 0, 0, buf2);
        for (i = 0x9F; i > 0; i--) {
            s32 idx;
            if ((u8)i != 0) {
                unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
            } else {
                unit = 0;
            }
            if (*(u32 *)(unit + 0x188) != 0
                && buf2[*(u8 *)(*(u8 **)(unit + 0x190) + 8)] != 0
                && (*(u32 *)(unit + 0x1A0) & 0x0100009C) == 0) {
                idx = (*(s8 *)(unit + 0x19E)) + ((*(s8 *)(unit + 0x19F)) << 6);
                if (*((u8 *)self + (idx + 0x200D)) != 0) {
                    *((u8 *)self + (idx + 0xD)) = unit[0x198];
                    {
                        u32 fr = *(u32 *)(unit + 0x1A0);
                        if (fr & 0x40) {
                            *(u32 *)(unit + 0x1A0) = fr & ~0x40;
                            *(u32 *)(unit + 0x1A0) = *(u32 *)(unit + 0x1A0) | 0x200;
                        }
                    }
                } else {
                    *((u8 *)self + (idx + 0x300D)) |= 1;
                    {
                        u32 fr = *(u32 *)(unit + 0x1A0);
                        if (!(fr & 0x40)) {
                            *(u32 *)(unit + 0x1A0) = fr | 0x240;
                        }
                    }
                }
            }
        }
    } else {
        fn_800152F8(0, 1, 0, 0, 0, 0, 0, 0, buf3);
        for (i = 0x9F; i > 0; i--) {
            s32 idx;
            if ((u8)i != 0) {
                unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
            } else {
                unit = 0;
            }
            if (*(u32 *)(unit + 0x188) != 0
                && buf3[*(u8 *)(*(u8 **)(unit + 0x190) + 8)] != 0
                && (*(u32 *)(unit + 0x1A0) & 4) == 0) {
                idx = (*(s8 *)(unit + 0x19E)) + ((*(s8 *)(unit + 0x19F)) << 6);
                if (*((u8 *)self + (idx + 0x200D)) != 0) {
                    *(u32 *)(unit + 0x1A0) &= ~0x40;
                } else {
                    *(u32 *)(unit + 0x1A0) |= 0x40;
                }
                *((u8 *)self + ((*(s8 *)(unit + 0x19E)) + ((*(s8 *)(unit + 0x19F)) << 6) + 0xD)) =
                    unit[0x198];
            }
        }
    }
    fn_8010FAA8();
    fn_8001F140(self);
}

extern u16 jumptable_80284514[12];
void fn_80022DAC(s32 arg0, s32 arg1) {
    if (arg0 >= 11) {
        return;
    }
    
    switch(arg0) {
        case 0:
        case 1:
        case 2:
        case 3:
            {
                u32 tmp1 = (arg1 & 0xFF000000) >> 24; // r5 -> r3
                u32 tmp2 = (arg1 & 0x00FF0000) >> 16; // r5 -> r0  
                u32 tmp3 = (arg1 & 0x000000FF);       // r5 -> r4
                u32 tmp4 = (arg1 & 0xFF000000) << 24;
                s32 arg2 = ((tmp2 + tmp1) * 0x1000) + tmp4 + tmp3;
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 4:
            {
                u32 tmp1 = (arg1 & 0xFF000000) >> 24; // r5 -> r3
                u32 tmp2 = (arg1 & 0x00FF0000) >> 16; // r5 -> r0  
                u32 tmp3 = (arg1 & 0x000000FF);       // r5 -> r4
                u32 tmp4 = (arg1 & 0xFF000000) << 24;
                s32 arg2 = ((tmp2 + tmp1) * 0x1000) + tmp4 + tmp3;
                s32 arg3 = arg1;  
                fn_800062B0(arg2, arg3);
            }
            break;
        case 5:
            {
                u32 tmp1 = (arg1 & 0xFF000000) >> 24; // r5 -> r3
                u32 tmp2 = (arg1 & 0x00FF0000) >> 16; // r5 -> r0  
                u32 tmp3 = (arg1 & 0x000000FF);       // r5 -> r4
                u32 tmp4 = (arg1 & 0xFF000000) << 24;
                s32 arg2 = ((tmp2 + tmp1) * 0x1000) + tmp4 + tmp3;
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 6:
            {
                u32 tmp1 = (arg1 & 0xFF000000) >> 24; // r5 -> r3
                u32 tmp2 = (arg1 & 0x00FF0000) >> 16; // r5 -> r0  
                u32 tmp3 = (arg1 & 0x000000FF);       // r5 -> r4
                u32 tmp4 = (arg1 & 0xFF000000) << 24;
                s32 arg2 = ((tmp2 + tmp1) * 0x1000) + tmp4 + tmp3;
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 7:
            {
                u32 tmp1 = (arg1 & 0x0000FFFF); // r5 -> r4
                u32 tmp2 = (arg1 & 0xFFFF0000); // r5 -> r0
                s32 arg2 = tmp1 + (tmp2 >> 16);
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 8:
            {
                u32 tmp1 = (arg1 & 0x0000FFFF); // r5 -> r4
                u32 tmp2 = (arg1 & 0xFFFF0000); // r5 -> r0
                s32 arg2 = tmp1 + (tmp2 >> 16);
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 9: 
        case 10:
            {
                u32 tmp1 = (arg1 & 0x0000FFFF); // r5 -> r4
                u32 tmp2 = (arg1 & 0xFFFF0000); // r5 -> r0
                s32 arg2 = tmp1 + (tmp2 >> 16);
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 11:
            {
                u32 tmp1 = (arg1 & 0x0000FFFF); // r5 -> r4
                u32 tmp2 = (arg1 & 0xFFFF0000); // r5 -> r0
                s32 arg2 = tmp1 + (tmp2 >> 16);
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
    }
}

s32 fn_80022FB0(u32 arg0) {
    u32 lo;
    u32 hi;
    lo = arg0 & 0xFFFF;
    hi = arg0 << 16;
    lo = lo + hi;
    return lo;
}

s32 fn_80022FC4(void) {
    return 0x2000;
}

void fn_80022FCC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14190) = arg1;
}

void fn_80022FD8(void *arg0, s32 arg1) {
    if (arg1 != 6) {
        if (arg1 >= 6) {
            return;
        }
        if (arg1 < 5) {
            return;
        }
        *(s32 *)((char *)arg0 + 0x14190) = (s32)arg0 + 0x610E;
        return;
    }
    *(s32 *)((char *)arg0 + 0x14190) = (s32)arg0 + 0x818E;
}

f32 fn_8002300C(void *arg0, s8 arg1, s8 arg2, u8 arg3)
{
    u8 *base;
    s32 index;
    u8 *p;

    base = (u8 *)arg0 + 0x20000;
    index = arg1 + (arg2 << 6);
    index = (u8)arg3 + (index << 2);
    p = base + (index << 1);
    return (f32)*(s16 *)(p - 0x3D28) * *(f32 *)(base - 0x3D2C);
}

void fn_80023068(u16 *a0, u16 *a1, f32 a2, f32 a3) {
    extern f32 lbl_8036A7F0;
    
    *(f32*)((u8*)a0 + 0x534) = a2;
    *(f32*)((u8*)a0 + 0x538) = a3;
    *(f32*)((u8*)a1 + 0x534) = a2;
    *(f32*)((u8*)a1 + 0x538) = a3;
}

typedef struct {
    s32 width;
    s32 height;
    u8 pad8[5];
    u8 unitMap[0x6100];
    u8 pad1;
    s16 costMap[0x4040];
    s8 fogMap[64];
} Map_802CA518;
extern Map_802CA518 lbl_802CA518;

f32 fn_800233D0(void *arg0, s8 arg1, s8 arg2, u8 arg3)
{
    u8 *base;
    u8 *row;
    s32 index;

    base = (u8 *)arg0 + 0x20000;
    row = (u8 *)arg0 + 0x10000;
    index = arg1 + (arg2 << 6);
    index = (u8)arg3 + (index << 2);
    return (f32)*(s16 *)(row + (index << 1) + 0x42D4) * *(f32 *)(base - 0x3D2C);
}

#pragma fp_contract on
f32 fn_80023430(void *arg0, f32 x, f32 y) {
    void fn_80203290(f32 *, f32 *, f32 *);
    extern u8 lbl_80268CE8[];
    extern f32 lbl_80368D88;
    f32 sp5C[3];
    f32 sp50[3];
    f32 sp44[3];
    f32 sp38[3];
    f32 sp34;
    f32 sp2C;
    f32 sp30;
    f32 sp28;
    f32 sp20;
    f32 sp24;
    f32 sp1C;
    f32 sp14;
    f32 sp18;
    f32 sp10;
    f32 sp8;
    f32 spC;
    u8 *tbl;
    s32 ix_i;
    s32 iy_i;
    s32 six;
    s32 siy;
    f32 scale;
    f32 h;
    u8 *cell;
    u8 *base2;
    f32 t;
    f32 f0;
    f32 f1;
    f32 nz;

    tbl = lbl_80268CE8;
    ix_i = (s32)x;
    iy_i = (s32)y;
    six = (s8)ix_i;
    siy = (s8)iy_i;
    if (((y + (x - (f32)six)) - (f32)siy) > lbl_80368D88) {
        u32 w24, w1c, w20, w30, w28, w2c;
        s16 ha, hb, hc;
        base2 = (u8 *)arg0 + 0x20000;
        cell = (u8 *)arg0 + 0x10000 + ((six + (siy << 6)) * 8);
        w24 = *(u32 *)(tbl + 0x24);
        w1c = *(u32 *)(tbl + 0x1C);
        ha = *(s16 *)(cell + 0x42DA);
        hb = *(s16 *)(cell + 0x42D8);
        scale = *(f32 *)(base2 - 0x3D2C);
        w20 = *(u32 *)(tbl + 0x20);
        w30 = *(u32 *)(tbl + 0x30);
        h = (f32)ha * scale;
        w28 = *(u32 *)(tbl + 0x28);
        w2c = *(u32 *)(tbl + 0x2C);
        t = (f32)hb * scale;
        *(u32 *)&sp34 = w24;
        *(u32 *)&sp5C[0] = w1c;
        *(u32 *)&sp5C[1] = w20;
        *(u32 *)&sp28 = w30;
        sp34 = t - h;
        *(u32 *)&sp2C = w1c;
        *(u32 *)&sp5C[2] = *(u32 *)&sp34;
        *(u32 *)&sp30 = w20;
        hc = *(s16 *)(cell + 0x42D6);
        *(u32 *)&sp20 = w28;
        *(u32 *)&sp24 = w2c;
        *(u32 *)&sp50[0] = w28;
        *(u32 *)&sp50[1] = w2c;
        t = (f32)hc * scale;
        sp28 = t - h;
        *(u32 *)&sp50[2] = *(u32 *)&sp28;
        fn_80203290(sp5C, sp50, sp5C);
        f0 = sp5C[1] * y;
        f0 = f0 + sp5C[0] * x;
        nz = sp5C[2];
        f1 = sp5C[1] * (f32)(siy + 1);
        f1 = f1 + sp5C[0] * (f32)(six + 1);
        f1 = -(f1 + nz * h);
        return -(f1 + f0) / nz;
    }
    {
        u32 w3c, w34, w38, w48, w40, w44;
        s16 ha, hb, hc;
        base2 = (u8 *)arg0 + 0x20000;
        cell = (u8 *)arg0 + 0x10000 + ((six + (siy << 6)) * 8);
        w3c = *(u32 *)(tbl + 0x3C);
        w34 = *(u32 *)(tbl + 0x34);
        ha = *(s16 *)(cell + 0x42D4);
        hb = *(s16 *)(cell + 0x42D6);
        scale = *(f32 *)(base2 - 0x3D2C);
        w38 = *(u32 *)(tbl + 0x38);
        w48 = *(u32 *)(tbl + 0x48);
        h = (f32)ha * scale;
        w40 = *(u32 *)(tbl + 0x40);
        w44 = *(u32 *)(tbl + 0x44);
        t = (f32)hb * scale;
        *(u32 *)&sp1C = w3c;
        *(u32 *)&sp44[0] = w34;
        *(u32 *)&sp44[1] = w38;
        *(u32 *)&sp10 = w48;
        sp1C = t - h;
        *(u32 *)&sp14 = w34;
        *(u32 *)&sp44[2] = *(u32 *)&sp1C;
        *(u32 *)&sp18 = w38;
        hc = *(s16 *)(cell + 0x42D8);
        *(u32 *)&sp8 = w40;
        *(u32 *)&spC = w44;
        *(u32 *)&sp38[0] = w40;
        *(u32 *)&sp38[1] = w44;
        t = (f32)hc * scale;
        sp10 = t - h;
        *(u32 *)&sp38[2] = *(u32 *)&sp10;
        fn_80203290(sp44, sp38, sp44);
        f0 = sp44[1] * y;
        f0 = f0 + sp44[0] * x;
        nz = sp44[2];
        f1 = sp44[1] * (f32)siy;
        f1 = f1 + sp44[0] * (f32)six;
        f1 = -(f1 + nz * h);
        return -(f1 + f0) / nz;
    }
}
#pragma fp_contract reset
extern f32 lbl_80368D8C;
#pragma global_optimizer off
#pragma use_lmw_stmw on
void fn_800237A0(void *arg0) {
    void *row;
    void *fp;
    u16 flags;
    f32 t;
    register f32 scale;
    int y;
    void *p9;
    void *p10;
    void *p11;
    void *p12;
    void *p31;
    register int x;

    row = arg0;
    y = 0;
    goto outer_test;
outer:
    p9 = (u8 *)row + 0x10000;
    p10 = (u8 *)p9 + 0x40D4;
    p11 = (u8 *)p9 + 0x44D4;
    p12 = (u8 *)p9 + 0x42CC;
    p31 = (u8 *)p9 + 0x42DC;
    p9 = (u8 *)p9 + 0x42D4;
    x = 0;
    goto inner_test;
inner:
    fp = (u8 *)&lbl_802CA518 + (((s8)x + ((s8)y << 6)) * 2);
    flags = *(u16 *)((u8 *)fp + 0x408E);
    fp = (u8 *)fp + 0x408E;
    if (flags & 8) {
        scale = *(f32 *)((u8 *)arg0 + 0x1C2D4);
        t = scale * (f32)(*(s16 *)p9 - *(s16 *)((u8 *)p10 + 4));
        if (t * t < lbl_80368D8C) {
            t = scale * (f32)(*(s16 *)((u8 *)p9 + 2) - *(s16 *)((u8 *)p10 + 6));
            if (t * t < lbl_80368D8C) {
                goto skip8;
            }
        }
        flags &= ~0x8;
    }
skip8:
    if (flags & 4) {
        scale = *(f32 *)((u8 *)arg0 + 0x1C2D4);
        t = scale * (f32)(*(s16 *)((u8 *)p9 + 4) - *(s16 *)p11);
        if (t * t < lbl_80368D8C) {
            t = scale * (f32)(*(s16 *)((u8 *)p9 + 6) - *(s16 *)((u8 *)p11 + 2));
            if (t * t < lbl_80368D8C) {
                goto skip4;
            }
        }
        flags &= ~0x4;
    }
skip4:
    if (flags & 1) {
        scale = *(f32 *)((u8 *)arg0 + 0x1C2D4);
        t = scale * (f32)(*(s16 *)p9 - *(s16 *)((u8 *)p12 + 2));
        if (t * t < lbl_80368D8C) {
            t = scale * (f32)(*(s16 *)((u8 *)p9 + 4) - *(s16 *)((u8 *)p12 + 6));
            if (t * t < lbl_80368D8C) {
                goto skip1;
            }
        }
        flags &= ~0x1;
    }
skip1:
    if (flags & 2) {
        scale = *(f32 *)((u8 *)arg0 + 0x1C2D4);
        t = scale * (f32)(*(s16 *)((u8 *)p9 + 2) - *(s16 *)p31);
        if (t * t < lbl_80368D8C) {
            t = scale * (f32)(*(s16 *)((u8 *)p9 + 6) - *(s16 *)((u8 *)p31 + 4));
            if (t * t < lbl_80368D8C) {
                goto skip2;
            }
        }
        flags &= ~0x2;
    }
skip2:
    *(u16 *)fp = flags;
    ++x;
    p9 = (u8 *)p9 + 8;
    p10 = (u8 *)p10 + 8;
    p11 = (u8 *)p11 + 8;
    p12 = (u8 *)p12 + 8;
    p31 = (u8 *)p31 + 8;
inner_test:
    if (x < lbl_802CA518.width) {
        goto inner;
    }
    row = (u8 *)row + 0x200;
    ++y;
outer_test:
    if (y < lbl_802CA518.height) {
        goto outer;
    }
}
#pragma use_lmw_stmw reset
#pragma global_optimizer on
void fn_80023DC0(void) {
    void fn_8002297C(void *);
    fn_8002297C(&lbl_802CA518);
}

void fn_80023DE8(void) {
    extern u8 lbl_80284548[];
    extern void fn_80023E18(void);
    extern void fn_8000BF6C(void *, void *);

    fn_8000BF6C(lbl_80284548, fn_80023E18);
}

void fn_80023E18(void) {
    fn_8000C188();
}

s16 fn_80023E38(void)
{
    extern u8 lbl_80284548[];
    extern u32 lbl_8036723C;
    extern void fn_80023ED0(void);

    lbl_8036723C = 0;

    fn_8000BF6C(
        lbl_80284548,
        fn_80023ED0
    );

    return (s16)((lbl_8036723C - 1) * 16 + 0x20);
}

s16 fn_80023E84(void)
{
    extern u8 lbl_80284548[];
    extern u32 lbl_8036723C;
    extern void fn_80023ED0(void);

    lbl_8036723C = 0;

    fn_8000BF6C(
        lbl_80284548,
        fn_80023ED0
    );

    return (s16)((lbl_8036723C - 1) * 8 + 0x80);
}

void fn_80023ED0(void) {
    extern s32 lbl_8036723C;
    lbl_8036723C += 1;
}

#pragma cplusplus on
extern "C" f32 fn_80023EE0(void *arg0) {
    struct Model {
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
        virtual s32 v23() = 0;
        virtual s32 v24() = 0;
    };
    extern f32 lbl_80368DA8;
    extern f32 lbl_80368DAC;
    s32 n;
    s32 t;
    u8 mode;
    f32 fn;

    mode = *(u8 *)((char *)arg0 + 0x61);
    t = *(s16 *)((char *)arg0 + 0x28) + 1;
    switch (mode) {
    case 0:
        return lbl_80368DA8;
    case 1:
        n = ((Model *)*(void **)((char *)arg0 + 0x3C))->v23() + 1;
        return (lbl_80368DA8 / (f32)n) * (f32)(n - t);
    case 2:
        n = ((Model *)*(void **)((char *)arg0 + 0x3C))->v24() + 1;
        fn = (f32)n;
        return (lbl_80368DA8 / fn) * (f32)t;
    default:
        return lbl_80368DAC;
    }
}
#pragma cplusplus reset
void fn_80023FF4(void* arg0, s32 arg1, s32 arg2) {
    s32 r3;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 r9;
    
    r3 = *(s32*)((u8*)arg0 + 0x2A);
    if (r3 == 0) {
        return;
    }
    
    r4 = *(s32*)((u8*)arg0 + 0x26);
    r5 = arg2 * 0xC;
    r6 = ((s8)r4 << 0x10) >> 0x10;
    r7 = (r6 << 2) + r5;
    
    if (r7 < 0) {
        return;
    }
    
    r8 = *(s32*)(r7 + (u8*)arg0 + 0x40E8);
    if (r8 == 0) {
        return;
    }
    
    r9 = (r7 >> 2) & 7;
    if (r9 != 0) {
        return;
    }
    
    *(s32*)((u8*)arg0 + 0x40E8 + r5 + 0x10) = r8;
    *(s32*)((u8*)arg0 + 0x40E8 + r5 + 0xC) = arg1;
}

void *fn_800241C8(void *arg0) {
    void *var_r5;
    void *var_r6;

    var_r6 = *(void **)((u8 *)arg0 + 0x18);
    var_r5 = arg0;

    while (var_r6 != NULL) {
        if (*(u32 *)var_r6 != *(u32 *)arg0) {
            return var_r5;
        }
        if (var_r6 == NULL) {
            return var_r5;
        }
        var_r5 = var_r6;
        var_r6 = *(void **)((u8 *)var_r6 + 0x18);
    }

    return NULL;
}

#pragma cplusplus on
extern "C" M2C_UNK fn_80007124();
extern "C" M2C_UNK fn_8000727C(f32);
extern "C" M2C_UNK fn_80007290(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern "C" M2C_UNK fn_80007858(f32, f32);
extern "C" M2C_UNK fn_80007884();
extern "C" M2C_UNK fn_80007898(M2C_UNK);
extern "C" void fn_80009D74(f32, f32, f32, f32);
extern "C" M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
extern "C" M2C_UNK fn_8000A248();
extern "C" M2C_UNK fn_8000A258();
extern "C" void fn_80024214(void *arg0, void *arg1, void *arg2) {
    struct Model {
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
        virtual f32 v25() = 0;
    };
    struct Drawer {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4(void *) = 0;
    };
    extern f32 lbl_80368DA8;
    extern f32 lbl_80368DB8;
    extern f32 lbl_80368DBC;

    fn_8000A258();
    fn_80009D74((f32) M2C_FIELD(arg1, s16 *, 0x30), (f32) M2C_FIELD(arg1, s16 *, 0x32), M2C_FIELD(arg1, Model **, 0x3C)->v25() - lbl_80368DB8, lbl_80368DA8);
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_80007898(5);
    fn_80007858((f32) M2C_FIELD(arg2, s16 *, 0x30), (f32) M2C_FIELD(arg2, s16 *, 0x32));
    M2C_FIELD(arg2, Drawer **, 0x34)->v4(arg2);
    fn_80007124();
    fn_8000727C(lbl_80368DBC);
    if ((u8) M2C_FIELD(arg2, u8 *, 0x38) != 0) {
        fn_80007290(0xFF, 0xFF, 0, 0xFF);
    }
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        fn_80007290(0, 0, 0, 0xFF);
    }
    fn_80007884();
}
#pragma cplusplus reset
void fn_80024364(void *arg0) {
    void (**vtbl)(void *);

    vtbl = *(void (***)(void *))arg0;
    vtbl[8](arg0);
}

s32 fn_80024390(void) {
    return 0;
}

void *fn_80024398(void *arg0, void *arg1, u32 arg2) {
    extern u8 lbl_80284548[];
    extern u8 lbl_80284588[];

    u8 *object;
    u8 *entry;
    void *item;
    void *first;
    void *second;
    void *selected;
    void **vtable;
    s32 index;
    s32 total;
    s32 value;
    s32 width;
    s32 height;
    s32 status;

    object = (u8 *)fn_8000CA64(lbl_80284548);

    if ((arg2 & 0xFF) != 0) {
        object[0x2B] = (u8)arg2;
        object[0x60] = 0;
        object[0x62] = 0xFF;

        index = 0;
        total = 0;

        while (1) {
            vtable = *(void ***)((u8 *)arg0 + 4);
            item = ((void *(*)(void *, s32))vtable[0x44 / 4])(
                arg0, index
            );

            if (item == NULL) {
                break;
            }

            vtable = *(void ***)item;
            status = ((s32 (*)(void *, s32))vtable[0x24 / 4])(
                item, index
            );

            if ((status & 0xFF) == 3) {
                break;
            }

            if ((status & 0xFF) == 1 && (s8)object[0x62] < 0) {
                object[0x62] = object[0x60];

                entry = (u8 *)fn_8000CAF0(lbl_80284588, object);

                *(void **)(entry + 0x34) = item;
                entry[0x3A] = (u8)index;
                entry[0x3B] = object[0x60];
                entry[0x39] = 0;

                vtable = *(void ***)((u8 *)arg0 + 4);
                *(s16 *)(entry + 0x30) =
                    ((s32 (*)(void *))vtable[0x48 / 4])(arg0);

                vtable = *(void ***)((u8 *)arg0 + 4);
                value = ((s32 (*)(void *))vtable[0x4C / 4])(arg0);
                *(s16 *)(entry + 0x32) = total + value;

                *(u32 *)(entry + 0x3C) = 0;

                vtable = *(void ***)((u8 *)arg0 + 4);
                value = ((s32 (*)(void *))vtable[0x58 / 4])(arg0);
                total += value;

                value = fn_8000B920(entry);

                index = (s8)object[0x60];
                object[0x60]++;

                object[0x40 + index] = (u8)value;
            }

            index++;
        }
    }

    if ((s8)object[0x62] < 0) {
        object[0x62] = 0;
        *(void **)(object + 0x3C) = arg0;

        vtable = *(void ***)((u8 *)arg0 + 4);
        *(s16 *)(object + 0x30) =
            ((s32 (*)(void *))vtable[0x5C / 4])(arg0);

        vtable = *(void ***)((u8 *)arg0 + 4);
        *(s16 *)(object + 0x32) =
            ((s32 (*)(void *))vtable[0x60 / 4])(arg0);

        vtable = *(void ***)((u8 *)arg0 + 4);
        *(s16 *)(object + 0x34) =
            ((s32 (*)(void *))vtable[0x50 / 4])(arg0);

        vtable = *(void ***)((u8 *)arg0 + 4);
        value = ((s32 (*)(void *))vtable[0x54 / 4])(arg0);

        if (value != 0) {
            vtable = *(void ***)((u8 *)arg0 + 4);
            *(s16 *)(object + 0x36) =
                ((s32 (*)(void *))vtable[0x54 / 4])(arg0);
        } else {
            vtable = *(void ***)((u8 *)arg0 + 4);
            width = ((s32 (*)(void *))vtable[0x58 / 4])(arg0);

            vtable = *(void ***)((u8 *)arg0 + 4);
            height = ((s32 (*)(void *))vtable[0x4C / 4])(arg0);

            *(s16 *)(object + 0x36) =
                height + width * (s8)object[0x60];
        }
    }

    object[0x63] = object[0x62];
    *(s16 *)(object + 0x38) = -1;
    *(s16 *)(object + 0x3A) = -1;

    vtable = *(void ***)((u8 *)arg0 + 4);
    ((void (*)(void *, void *))vtable[0x14 / 4])(arg0, object);

    vtable = *(void ***)((u8 *)arg0 + 4);
    ((void (*)(void *, void *))vtable[0x1C / 4])(arg0, object);

    first = (void *)fn_8000B908(
        object[0x40 + (s8)object[0x62]]
    );

    second = (void *)fn_8000B908(
        object[0x40 + (s8)object[0x62]]
    );

    selected = *(void **)((u8 *)second + 0x34);
    vtable = *(void ***)selected;

    ((void (*)(void *, void *, void *))vtable[0x40 / 4])(
        selected, object, first
    );

    vtable = *(void ***)((u8 *)arg0 + 4);
    *(s16 *)(object + 0x28) =
        ((s32 (*)(void *))vtable[0x64 / 4])(arg0);

    object[0x61] = 1;

    vtable = *(void ***)((u8 *)arg0 + 4);
    if (((s32 (*)(void *))vtable[0x70 / 4])(arg0) != 0) {
        vtable = *(void ***)((u8 *)arg0 + 4);
        value = ((s32 (*)(void *))vtable[0x70 / 4])(arg0);
        fn_801475FC((void *)value, 0x64);
    }

    vtable = *(void ***)((u8 *)arg0 + 4);
    if (((s32 (*)(void *))vtable[0x0C / 4])(arg0) != 0) {
        object[0x62] = 0xFF;
    }

    return object;
}

#pragma cplusplus on
extern "C" void fn_800246E0(void *arg0) {
    struct Model {
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
        virtual s16 v24() = 0;
    };
    *(u8 *)((char *)arg0 + 0x61) = 2;
    *(s16 *)((char *)arg0 + 0x28) = ((Model *)*(void **)((char *)arg0 + 0x3C))->v24();
}
#pragma cplusplus reset

void fn_80024728(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
}

#pragma cplusplus on
extern "C" void fn_80024734(void *arg0) {
    struct Obj {
        u8 pad[4];
        virtual void v0(void *) = 0;
        virtual void v1(void *) = 0;
        virtual void v2(void *) = 0;
        virtual void v3(void *) = 0;
        virtual void v4(void *) = 0;
    };
    ((Obj *)*(void **)((u8 *)arg0 + 0x3C))->v4(arg0);
}

#pragma cplusplus on
extern "C" void fn_80024768(void *arg0) {
void *fn_8000B908(u8);void fn_8000C188(void*);
void fn_801475FC(void*,s32);void fn_801673D0(void*);void fn_8016746C(void*,void*,void*,f32,f32);void fn_8016758C(void*,void*,void*,f32,f32);
extern s32 lbl_80367110;extern u8 lbl_80367238,lbl_80367239,lbl_8036723A;
extern u8 lbl_80268D90[],lbl_80284548[],lbl_80330D68[];extern u32 lbl_80368DC4;
f32 x,y;
MenuController24768 *ctrl;
void *item,*q;
u8 *node;
u8 flags;
ctrl=*(MenuController24768**)((u8*)arg0+0x3c);flags=0;
if(!(lbl_80367110&0x80)){
if(*(s8*)((u8*)arg0+0x62)<0){ctrl->v13(arg0);return;}
ctrl->v11(arg0);
(*(MenuController24768**)((u8*)arg0+0x3c))->v12(arg0);
if(*((u8*)arg0+0x2b)!=0x7b){
item=fn_8000B908(*((u8*)arg0+0x40+*(s8*)((u8*)arg0+0x62)));lbl_80367238=*((u8*)item+0x3a);
item=fn_8000B908(*((u8*)arg0+0x40+*(s8*)((u8*)arg0+0x62)));lbl_80367239=*((u8*)item+0x3b);
}
flags=(*(MenuController24768**)((u8*)arg0+0x3c))->v14(arg0);
if(*((u8*)arg0+0x2b)!=0x7b)lbl_8036723A=flags;
}
if((flags&4)&&ctrl->v28())fn_801475FC(ctrl->v28(),100);
if(flags&8)fn_801475FC(lbl_80268D90+0x43,100);
if(flags&16)fn_801475FC(lbl_80268D90+0x53,100);
if(flags&1){
fn_8000C188(arg0);
item=fn_8000B908(*((u8*)arg0+0x40+*(s8*)((u8*)arg0+0x62)));
(*(MenuItem24768**)((u8*)item+0x34))->v15(arg0,item);
if(ctrl->v27())fn_801475FC(ctrl->v27(),100);
}else if(flags&2){
node=(u8*)arg0;
if(ctrl->v27())fn_801475FC(ctrl->v27(),100);
while(node && *(void**)node==lbl_80284548){
fn_8000C188(node);
if(node[0x2c]&2){node[0x2c]&=~2;((u8*)*(void**)(node+0x18))[0x2d]--;}
node=*(u8**)(node+0x18);
}
}else if(flags&32){
item=fn_8000B908(*((u8*)arg0+0x40+*(s8*)((u8*)arg0+0x62)));
x=(f32)(*(s16*)((u8*)arg0+0x30)+*(s16*)((u8*)item+0x30));
item=fn_8000B908(*((u8*)arg0+0x40+*(s8*)((u8*)arg0+0x62)));
y=(f32)(*(s16*)((u8*)arg0+0x32)+*(s16*)((u8*)item+0x32));
item=fn_8000B908(*((u8*)arg0+0x40+*(s8*)((u8*)arg0+0x62)));
q=(*(MenuItem24768**)((u8*)item+0x34))->v2();
if(q)fn_8016758C(lbl_80330D68,arg0,q,x,y);
else {
item=fn_8000B908(*((u8*)arg0+0x40+*(s8*)((u8*)arg0+0x62)));
q=(*(MenuItem24768**)((u8*)item+0x34))->v16(item);
fn_8016746C(lbl_80330D68,arg0,q,x,y);
}
*(u32*)lbl_80330D68|=lbl_80368DC4;
}else if(flags&64)fn_801673D0(lbl_80330D68);
}
#pragma cplusplus reset

#pragma cplusplus reset
void fn_80024D18(s32 unused, void *arg1) {
    extern u32 *lbl_80367240;
    extern u8 lbl_80268D90[];
    void fn_801475FC(void *, s32);
    u32 temp_r6 = lbl_80367240[1];

    if (temp_r6 & (lbl_80367240[2] ^ temp_r6) & 0x0C00000C) {
        ((u8 *)arg1)[0x62] = 0;
        fn_801475FC(&lbl_80268D90[0x71], 0x64);
    }
}

extern u32 lbl_80367240;
#pragma cplusplus on
extern "C" void fn_80024D74(s32 unused, void *arg1) {
    void *fn_8000B908(u8);
    struct Item {
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
        virtual void v12(void *, void *) = 0;
    };
    struct Row {
        u8 pad[0x40];
        u8 id;
    };
    void *item;
    struct Row *row;
    u8 idx_u;
    s32 idx;

    if ((((u32 *)lbl_80367240)[1] & 0x3000003U) == 0) {
        return;
    }
    idx_u = *((u8 *)arg1 + 0x62);
    idx = (s8)idx_u;
    row = (struct Row *)((u8 *)arg1 + idx);
    item = fn_8000B908(row->id);
    (*(Item **)((u8 *)item + 0x34))->v12(arg1, item);
}
extern "C" void fn_80024DE4(s32 unused, void *arg1) {
    void *fn_8000B908(u8);
    void fn_801475FC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, void *, f32, f32);
    void fn_80167190(void *, f32, f32);
    extern u8 lbl_80268D90[];
    extern u8 lbl_80330D68[];
    struct Obj {
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
        virtual void *v16(void *) = 0;
    };
    struct Node {
        u8 pad30[0x30];
        s16 x;
        s16 y;
        Obj *obj;
    };
    u32 *pad;
    u32 trig;
    u32 held;
    u32 pressed;
    u8 sel;
    Node *node;
    Node *node2;
    void *ret;
    f32 f31;
    f32 f30;
    u8 *p;

    pad = *(u32 **)&lbl_80367240;
    trig = pad[3];
    sel = *(u8 *)((u8 *)arg1 + 0x62);
    held = pad[1];
    pressed = held & (pad[2] ^ held);
    *(u8 *)((u8 *)arg1 + 0x63) = sel;
    if (trig & 0x08000008) {
        if (*(s8 *)((u8 *)arg1 + 0x62) == 0) {
            if (pressed != trig) {
                goto end;
            }
            *(u8 *)((u8 *)arg1 + 0x62) = *(u8 *)((u8 *)arg1 + 0x60);
        }
        (*(u8 *)((u8 *)arg1 + 0x62))--;
    }
    if (trig & 0x04000004) {
        if ((s8)*(u8 *)((u8 *)arg1 + 0x62) == (s8)*(u8 *)((u8 *)arg1 + 0x60) - 1) {
            if (pressed != trig) {
                goto end;
            }
            *(s8 *)((u8 *)arg1 + 0x62) = -1;
        }
        (*(u8 *)((u8 *)arg1 + 0x62))++;
    }
    if ((s8)*(u8 *)((u8 *)arg1 + 0x62) != (s8)*(u8 *)((u8 *)arg1 + 0x63)) {
        p = (u8 *)arg1 + (s8)*(u8 *)((u8 *)arg1 + 0x63);
        node = (Node *)fn_8000B908(p[0x40]);
        node->obj->v15(arg1, node);
        p = (u8 *)arg1 + *(s8 *)((u8 *)arg1 + 0x62);
        node = (Node *)fn_8000B908(p[0x40]);
        node->obj->v14(arg1, node);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            p = (u8 *)arg1 + *(s8 *)((u8 *)arg1 + 0x62);
            node = (Node *)fn_8000B908(p[0x40]);
            f31 = (f32)(*(s16 *)((u8 *)arg1 + 0x30) + node->x);
            p = (u8 *)arg1 + *(s8 *)((u8 *)arg1 + 0x62);
            node = (Node *)fn_8000B908(p[0x40]);
            f30 = (f32)(*(s16 *)((u8 *)arg1 + 0x32) + node->y);
            p = (u8 *)arg1 + *(s8 *)((u8 *)arg1 + 0x62);
            node = (Node *)fn_8000B908(p[0x40]);
            ret = node->obj->v2();
            if (ret != NULL) {
                fn_80167190(lbl_80330D68, f31, f30);
            } else {
                p = (u8 *)arg1 + *(s8 *)((u8 *)arg1 + 0x62);
                node2 = (Node *)fn_8000B908(p[0x40]);
                fn_80166DD0(lbl_80330D68, node2->obj->v16(node2), f31, f30);
            }
        }
        fn_801475FC(lbl_80268D90 + 0x71, 0x64);
    }
end:
    ;
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_800251EC(s32 unused, void *arg1) {
    void fn_800072B0(s32 *, s32 *, s32 *, s32 *);
    void fn_800075D8(void);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    struct Model {
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
        virtual f32 v25() = 0;
    };
    extern s32 lbl_80368D90;
    extern s32 lbl_80368D94;
    extern s32 lbl_80368D98;
    extern s32 lbl_80368D9C;
    extern f32 lbl_80368DA8;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u8 var_r3;
    f32 fv;

    fn_8000A258();
    fv = M2C_FIELD(arg1, Model **, 0x3C)->v25();
    fn_80009D74((f32) M2C_FIELD(arg1, s16 *, 0x30), (f32) M2C_FIELD(arg1, s16 *, 0x32), fv, lbl_80368DA8);
    fn_8000A174(0, 0x12);
    var_r3 = 0;
    if ((u8) M2C_FIELD(arg1, u8 *, 0x2D) == 0 && (u8) M2C_FIELD(arg1, u8 *, 0x2E) == 0) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        fn_80009B8C(0x50);
    }
    fn_8000A248();
    fn_80007898(3);
    fn_800077D8(0.0f, 0.0f, (f32) M2C_FIELD(arg1, s16 *, 0x34), (f32) M2C_FIELD(arg1, s16 *, 0x36));
    fn_800075D8();
    sp8 = lbl_80368D9C;
    spC = lbl_80368D98;
    sp10 = lbl_80368D94;
    sp14 = lbl_80368D90;
    fn_800072B0(&sp14, &sp10, &spC, &sp8);
    fn_80007884();
}
#pragma cplusplus reset
s32 fn_80025440(void) {
    u8 fn_80166D8C(void *);
    extern u8 lbl_80330D68[];

    return fn_80166D8C(lbl_80330D68) ? 0x40 : 0x20;
}

s32 fn_80025478(void) {
    u8 fn_80166D8C(void *);
    extern u8 lbl_80330D68[];

    return fn_80166D8C(lbl_80330D68) ? 0x40 : 0x9;
}

#pragma cplusplus on
extern "C" void fn_800254B0(void *arg0) {
    struct Obj {
        virtual void v0();
    };
    ((Obj *)arg0)->v0();
}
#pragma cplusplus reset
void *fn_800254DC(void) {
extern u8 lbl_80268D90[];
return lbl_80268D90+0x1A;
}

#pragma cplusplus on
extern "C" void fn_800254EC(void *arg0) {
    struct Obj {
        virtual void v0();
        virtual void v1();
    };
    ((Obj *)arg0)->v1();
}
#pragma cplusplus reset
void *fn_80025518(void) {
extern u8 lbl_80268D90[];
return lbl_80268D90+0x1E;
}

void *fn_80025528(void) {
    extern u8 lbl_80268D90[];
    return &lbl_80268D90[0x2E];
}

s32 fn_80025538(void) {
    return 0;
}

s32 fn_80025540(void) {
    return 5;
}

s32 fn_80025548(void) {
    return 0;
}

s32 fn_80025550(void) {
    return 0;
}

s32 fn_80025558(void) {
    return 0;
}

s32 fn_80025560(void) {
    return 0;
}

s32 fn_80025568(void) {
    return 0;
}

s32 fn_80025570(void) {
    return 0;
}

s32 fn_80025578(void) {
    return 0;
}

s32 fn_80025580(void) {
    return 0;
}

s32 fn_80025588(void) {
    return 1;
}

s32 fn_80025590(void) {
    return 0x10;
}

s32 fn_80025598(void) {
    return 0;
}

s32 fn_800255A0(void) {
    return 0x10;
}

s32 fn_800255A8(s32 **arg0, s32 arg1) {
    return (*arg0)[arg1];
}

void fn_800255B8(void) {

}

f32 fn_800255BC(void) {
    extern f32 lbl_80368DC0;
    return lbl_80368DC0;
}

s32 fn_800255C4(void) {
    return 0;
}

s32 fn_800255CC(void) {
    return 0;
}

void fn_800255D4(void) {

}

s32 fn_800255D8(void) {
    return 0;
}

s32 fn_800255E0(void) {
    return 0xC0;
}

void fn_800255E8(void) {

}

s32 fn_800255EC(void) {
    return 0;
}

void *fn_800255F4(void) {
    extern u8 lbl_80268D90[];
    return lbl_80268D90 + 0x61;
}

s32 fn_80025604(void) {
    return 0;
}

s32 fn_8002560C(void) {
    return 0;
}

void *fn_80025614(void) {
    extern u16 lbl_80268D90[];
    return (u8 *)lbl_80268D90 + 0x8D;
}

void fn_80025624(void *arg0, s8 arg1) {
    void fn_80212CC0(u8, s32);
    extern u8 lbl_80330708[];
    struct Bits {
        u8 hi : 6;
        u8 mid : 1;
        u8 lo : 1;
    };

    if (((struct Bits *)&lbl_80330708[0x9E])->mid != 1) {
        fn_80212CC0(*(u8 *)((u8 *)arg0 + 0x1C), 1);
        *(s8 *)((u8 *)arg0 + 0x20) = arg1;
    }
}

void fn_80025680(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) & ~arg1);
}

void fn_80025690(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | arg1);
}

void fn_800256A0(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = ~(arg1 | arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & temp_r4);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & temp_r4);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) & temp_r4);
}

void fn_800256CC(void *arg0) {
    u32 temp_r4;
    void *temp_r3;
    void *temp_r4_10;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;

    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0);
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 2) < -0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x01000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 2) > 0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x02000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 3) < -0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x04000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 3) > 0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x08000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 4) < -0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x10000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 4) > 0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x20000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 5) < -0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x40000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 5) > 0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x80000000);
    }
    temp_r4 = M2C_FIELD(arg0, u32 *, 0x18);
    if (temp_r4 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~temp_r4);
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x01000000) {
            temp_r4_2 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_2, u8 *, 2) < 0) {
                M2C_FIELD(temp_r4_2, u8 *, 2) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x02000000) {
            temp_r4_3 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_3, u8 *, 2) > 0) {
                M2C_FIELD(temp_r4_3, u8 *, 2) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x04000000) {
            temp_r4_4 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_4, u8 *, 3) < 0) {
                M2C_FIELD(temp_r4_4, u8 *, 3) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x08000000) {
            temp_r4_5 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_5, u8 *, 3) > 0) {
                M2C_FIELD(temp_r4_5, u8 *, 3) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x10000000) {
            temp_r4_6 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_6, u8 *, 4) < 0) {
                M2C_FIELD(temp_r4_6, u8 *, 4) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x20000000) {
            temp_r4_7 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_7, u8 *, 4) > 0) {
                M2C_FIELD(temp_r4_7, u8 *, 4) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x40000000) {
            temp_r4_8 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_8, u8 *, 5) < 0) {
                M2C_FIELD(temp_r4_8, u8 *, 5) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x80000000) {
            temp_r4_9 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_9, u8 *, 5) > 0) {
                M2C_FIELD(temp_r4_9, u8 *, 5) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x40) {
            temp_r4_10 = M2C_FIELD(arg0, void **, 0);
            if ((u8) M2C_FIELD(temp_r4_10, u8 *, 6) != 0) {
                M2C_FIELD(temp_r4_10, u8 *, 6) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x20) {
            temp_r3 = M2C_FIELD(arg0, void **, 0);
            if ((u8) M2C_FIELD(temp_r3, u8 *, 7) != 0) {
                M2C_FIELD(temp_r3, u8 *, 7) = 0U;
            }
        }
    }
}

extern u8 lbl_802EF438[144];
void *fn_8002595C(s32 arg0) {
    return (u8 *)lbl_802EF438 + arg0 * 0x24;
}

void fn_80025C5C(void *arg0, s32 arg1) {
    u8 fn_8017A9DC(s32);
    void fn_8017A810(s32, s32, void *);
    extern u8 lbl_802B14E4[];
    u8 id;

    id = fn_8017A9DC(arg1);
    if (id != 0) {
        *(void **)arg0 = (id != 0) ? lbl_802B14E4 + (id - 1) * 0x280 : NULL;
    } else {
        *(void **)arg0 = NULL;
    }
    id = fn_8017A9DC(arg1);
    if (id != 0) {
        *(void **)((char *)arg0 + 0x4) = (id != 0) ? lbl_802B14E4 + (id - 1) * 0x280 : NULL;
    } else {
        *(void **)((char *)arg0 + 0x4) = NULL;
    }
    *(u8 *)((char *)arg0 + 0x8) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0x9) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xA) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xB) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xC) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xD) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xE) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xF) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0x10) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0x11) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0x12) = fn_8017A9DC(arg1);
    fn_8017A810(arg1, 1, (void *)((char *)arg0 + 0x13));
    *(u8 *)((char *)arg0 + 0x14) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0x15) = fn_8017A9DC(arg1);
    fn_8017A810(arg1, 1, (void *)((char *)arg0 + 0x16));
}

void fn_80025DCC(void *arg0, s32 arg1) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = *(void **)arg0;
    if (temp_r3 != NULL) {
        fn_8017A5EC(arg1, *(u8 *)((char *)temp_r3 + 0x198));
    } else {
        fn_8017A5EC(arg1, 0U);
    }
    temp_r3_2 = *(void **)((char *)arg0 + 0x4);
    if (temp_r3_2 != NULL) {
        fn_8017A5EC(arg1, *(u8 *)((char *)temp_r3_2 + 0x198));
    } else {
        fn_8017A5EC(arg1, 0U);
    }
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x8));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x9));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xA));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xB));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xC));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xD));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xE));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xF));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x10));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x11));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x12));
    fn_8017A430(arg1, 1, (void *)((char *)arg0 + 0x13));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x14));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x15));
    fn_8017A430(arg1, 1, (void *)((char *)arg0 + 0x16));
}

s32 fn_80025F0C(s8 arg0, s8 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_802848DC[];
    extern u8 lbl_802B14E4[];
    void *obj;
    void *unit;
    u8 id;

    if (lbl_802CA518.unitMap[arg0 + arg1 * 64] == 0) {
        return 0;
    }
    obj = fn_8000CAA0(lbl_802848DC, arg2);
    id = lbl_802CA518.unitMap[arg0 + arg1 * 64];
    if (id != 0) {
        unit = lbl_802B14E4 + (id - 1) * 0x280;
    } else {
        unit = NULL;
    }
    M2C_FIELD(obj, void **, 0x30) = unit;
    return 1;
}

void fn_80025FA4(void *arg0) {
    M2C_UNK fn_8003E8DC(s32);
    fn_8003E8DC(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_80025FC8(void) {
    extern void* lbl_80330EAC[];
    fn_801A4BE0(lbl_80330EAC);
}

void fn_80025FF0(void *arg0) {
    M2C_UNK fn_8019B704(void *, M2C_UNK);
    M2C_UNK fn_801A4958(M2C_UNK *);
    M2C_UNK fn_801A4A88(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_801A75DC(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_80330EAC[];
    fn_801A75DC(lbl_80330EAC, M2C_FIELD(arg0, s32 *, 0x30), -1);
    fn_801A4958(lbl_80330EAC);
    fn_801A4A88(lbl_80330EAC, -0xA);
    fn_8019B704(arg0, 0);
}

void fn_80026054(s32 arg0) {
    M2C_UNK fn_800BEAC0(s32, M2C_UNK, u8, u8);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    if ((s8)lbl_80330EAC[0x488] == 0) {
        fn_800BEAC0(arg0, 0, lbl_802EF4C8[0xF], lbl_802EF4C8[0x10]);
    }
}

s32 fn_8002609C(s32 arg0)
{
    void fn_801EDA48(s32, s32);
    void fn_801EDA88(s32, s32);
    extern u8 lbl_80330EAC[];
    u8 *chosen;
    u8 *second;

    chosen = NULL;
    if (*(s32 *)(lbl_80330EAC + 0x1A0) & 0x40000) {
        chosen = lbl_80330EAC;
    }
    second = lbl_80330EAC + 0x2E0;
    if (*(s32 *)(second + 0x1A0) & 0x40000) {
        chosen = second;
    }
    if (chosen == NULL) {
        return 0;
    }
    if (*(s32 *)(lbl_80330EAC + 0xCAC) & 0x10000000) {
        fn_801EDA48(*(s32 *)(chosen + 0x280), arg0);
    } else {
        fn_801EDA88(*(s32 *)(chosen + 0x280), arg0);
    }
    return 1;
}

void fn_80026130(void) {
    extern u8 lbl_80330EAC[];
    void fn_801A4BE0(void *);
    void fn_80050C90(void *);
    u32 tmp;

    fn_801A4BE0(lbl_80330EAC);
    if (*(u32 *)(lbl_80330EAC + 0xcac) & 0x10) {
        tmp = *(u32 *)(lbl_80330EAC + 0x280);
        if (tmp != 0) {
            fn_80050C90((void *)tmp);
        }
        tmp = *(u32 *)(lbl_80330EAC + 0x560);
        if (tmp != 0) {
            fn_80050C90((void *)tmp);
        }
    }
}

void fn_80026194(s32 arg0) {
    void fn_801A75DC(void *, void *, s32);
    void fn_801A4958(void *);
    void fn_801A48A4(void *, s32);
    void fn_8019BE54(s32, void (*)(void));
    void fn_80026204(void);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];

    fn_801A75DC(lbl_80330EAC, *(void **)lbl_802EF4C8, -1);
    fn_801A4958(lbl_80330EAC);
    fn_801A48A4(lbl_80330EAC, 0xA);
    fn_8019BE54(arg0, fn_80026204);
}

void fn_80026204(void) {
    void fn_8002F658(s32 *, s32);
    void *fn_8002F740(void);
    extern s32 lbl_802EF4E0[];
    s32 i;
    void *obj;
    s32 flags;

    for (i = 0; i < lbl_802EF4E0[0]; i++) {
        fn_8002F658(lbl_802EF4E0, i);
        obj = fn_8002F740();
        flags = *(s32 *)((u8 *)obj + 0x1A0);
        *(s32 *)((u8 *)obj + 0x1A0) = flags & ~1;
    }
}

void fn_8002626C(void) {
    extern u8 lbl_802EF4C8[];

    struct {
        unsigned int pad : 29;
        unsigned int flags : 3;
    } *bits;

    u8 *ptr;
    u32 *state;

    ptr = *(u8 **)(lbl_802EF4C8 + 4);

    bits = (void *)(ptr + 0x1A2);
    bits->flags = 1;

    state = *(u32 **)lbl_802EF4C8;
    state[0x1A0 / 4] |= 0x1000;
}

void fn_8002629C(s32 *arg0, s32 arg1) {
    s32 fn_80019E04(void *);
    M2C_UNK fn_8002AD04(s32, s32);
    void *fn_8002F658(s32 *, s32);
    s8 fn_8003AFA0(s32);
    M2C_UNK fn_8019C0C0(s32, M2C_UNK *);
    M2C_UNK fn_801A4958(M2C_UNK *);
    M2C_UNK fn_801A75DC(M2C_UNK *, s32, M2C_UNK, M2C_UNK *);
    extern M2C_UNK fn_80026374;
    extern M2C_UNK lbl_80268E40;
    extern s32 lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    extern M2C_UNK lbl_80330EAC;
    
    s32 temp_r28;
    s32 var_r25;
    s8 temp_r3;
    u8 temp_r26;
    u8 temp_r27;
    void *temp_r29;

    temp_r28 = *arg0;
    fn_8002AD04(temp_r28, fn_80019E04(&lbl_80268E40 + 0x1A6));
    var_r25 = 0;
    
loop_2:
    if (var_r25 < lbl_802EF4E0) {
        temp_r29 = fn_8002F658(&lbl_802EF4E0, var_r25);
        temp_r27 = M2C_FIELD(temp_r29, u8 *, 3);
        temp_r26 = M2C_FIELD(temp_r29, u8 *, 2);
        temp_r3 = fn_8003AFA0(*arg0);
        M2C_FIELD(temp_r29, s8 *, 0) = 3;
        var_r25 += 1;
        M2C_FIELD(temp_r29, s8 *, 1) = temp_r3;
        M2C_FIELD(temp_r29, u8 *, 2) = temp_r26;
        M2C_FIELD(temp_r29, u8 *, 3) = temp_r27;
        goto loop_2;
    }
    
    fn_801A75DC(&lbl_80330EAC, lbl_802EF4C8, -1, &lbl_80330EAC);
    fn_801A4958(&lbl_80330EAC);
    fn_8019C0C0(arg1, &fn_80026374);
}

extern u8 lbl_802847EC[16];
void fn_80026374(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_802847EC[16];
    fn_8000CAA0(lbl_802847EC, arg0);
}

s32 fn_800263A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if (arg0 >= 0 || arg0 < -0x200)
        goto label_check_arg1;
    return 3;

label_check_arg1:
    if (arg1 < 0)
        return 4;
    if (arg1 >= 0x200)
        return 5;

    if (arg2 < 0)
    {
        if (arg2 < -0x800)
            return 6;
        else
            return 1;
    }
    else
    {
        if (arg2 < 0x800)
            return 0;
        else
            return 2;
    }
}

void fn_800264BC(s32 *arg0, s32 arg1) {
    void *fn_80019E04(void *);
    void fn_8002AB9C(s32, void *);
    void fn_8019C110(s32, void *);
    void fn_801A4958(void *);
    void fn_801A75DC(void *, void *, s32);
    extern u8 lbl_80268E40[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    void fn_80026544(void);

    s32 temp_r31;

    temp_r31 = *arg0;
    fn_8002AB9C(temp_r31, fn_80019E04(lbl_80268E40 + 0x1AF));
    fn_801A75DC(lbl_80330EAC, *(void **)lbl_802EF4C8, -1);
    fn_801A4958(lbl_80330EAC);
    fn_8019C110(arg1, fn_80026544);
}

extern u8 lbl_802847C8[16];
void fn_80026544(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_802847C8[16];
    fn_8000CAA0(lbl_802847C8, arg0);
}

void fn_8002662C(void) {
    extern u8 lbl_80330EAC[];

    fn_80104480(lbl_80330EAC + 0x1A4);
    fn_80104480(*(u8 **)(lbl_80330EAC + 0x280) + 0x1A4);
}

void fn_8002666C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}

void fn_80026678(void *arg0) {
    void fn_800949A4(s32, u8);
    void fn_80094ABC(s32, void *, s32, void *);
    void fn_801A4BE0(void *);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    struct { u8 hi:1; u8 flag:1; u8 lo:6; } *bf;
    void *temp_r4;
    s32 a0;
    s32 temp_r31;

    temp_r4 = *(void **)((u8 *)arg0 + 0x54);
    bf = (void *)((u8 *)temp_r4 + 5);
    a0 = *(s32 *)lbl_802EF4C8;
    temp_r31 = *(s32 *)(lbl_802EF4C8 + 4);
    bf->flag = 0;
    fn_80094ABC(a0, temp_r4, 0, lbl_802EF4C8);
    fn_800949A4(temp_r31, lbl_802EF4C8[0xA]);
    fn_801A4BE0(lbl_80330EAC);
}

void fn_800266E4(s32 arg0) {
    extern void *lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    void fn_80034A8C(void *, void *, s32, s32, s32);

    fn_80034A8C(lbl_80330EAC, lbl_802EF4C8[0], 0xA, arg0, 1);
}

void fn_80026724(void *arg0) {
    void fn_80091518(void *, void *);
    void fn_800915E8(void *, void *);
    extern u8 lbl_802EF4C8[];
    void *ctx;
    void *param;
    s32 node;

    ctx = *(void **)lbl_802EF4C8;
    param = *(void **)((u8 *)arg0 + 0x54);
    node = *(s32 *)((u8 *)ctx + 0x190);
    if (*(u8 *)(node + 8) != 1) {
        fn_800915E8(param, arg0);
    } else {
        fn_80091518(param, arg0);
    }
}

void fn_80026770(void *arg0) {
    void fn_8001EDA0(s32, void *);
    u8 *src = (u8 *)arg0 + 0x13;
    *(u8 *)arg0 = *src;
    fn_8001EDA0((s32)arg0 + 0x13, arg0);
}

void fn_800267A0(s32 arg0) {
    void fn_8001C7F0(s32, s32, s32);
    s32 *fn_80037BD0(s32, s32);
    extern struct {
        s32 unk0;
        s32 unk4;
        u8 unk8;
        u8 unk9;
        s8 unkA;
        u8 pad[0x18 - 0xB];
    } lbl_802EF4C8;
    fn_8001C7F0(lbl_802EF4C8.unk0, *fn_80037BD0(lbl_802EF4C8.unk0, lbl_802EF4C8.unkA), arg0);
}

void fn_800267F8(s32 arg0) {
    void fn_8001C7F0(s32, s32, s32);
    s32 *fn_80037BD0(s32, s32);
    extern struct {
        s32 unk0;
        s32 unk4;
        u8 unk8;
        u8 unk9;
        s8 unkA;
        u8 pad[0x18 - 0xB];
    } lbl_802EF4C8;
    fn_8001C7F0(lbl_802EF4C8.unk0, *fn_80037BD0(lbl_802EF4C8.unk0, lbl_802EF4C8.unkA), arg0);
}

void fn_80026850(s32 arg0) {
    void fn_800913D4(s32, s32, s32);
    s32 fn_80037BD0(s32, s8);
    extern u8 lbl_802EF4C8[];
    s32 temp_r31;
    s8 temp_r4;
    u8 *p;

    p = lbl_802EF4C8;
    temp_r4 = p[0xA];
    temp_r31 = *(s32 *)p;
    fn_800913D4(fn_80037BD0(temp_r31, temp_r4), arg0, temp_r31);
}

s32 fn_800268A8(s32 arg0) {
    void *fn_8003DDF8(void *, u8 *, u8 *, void *, u8);
    void fn_8003EA24(void *, u8, u8);
    void fn_80183C6C(void *, s8, s8, s8, s8, s32);
    void *fn_801A4624(void *);
    void *fn_801A46BC(void *);
    extern M2C_UNK lbl_80330EAC[];
    u8 sp9;
    u8 sp8;
    u8 temp_r7;
    void *temp_r30;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    s8 idx1;
    s8 idx2;

    temp_r3 = fn_801A46BC(lbl_80330EAC);
    if (temp_r3 == 0) {
        return 0;
    }
    if (!(M2C_FIELD(temp_r3, s32 *, 0x1A0) & 2)) {
        return 0;
    }
    temp_r3_2 = fn_801A4624(lbl_80330EAC);
    temp_r7 = M2C_FIELD(temp_r3_2, u8 *, 0x198);
    idx1 = (s8) M2C_FIELD(temp_r3_2, u8 *, 0x19E);
    idx2 = (s8) M2C_FIELD(temp_r3_2, u8 *, 0x19F);
    lbl_802CA518.unitMap[idx1 + (idx2 << 6)] = temp_r7;
    temp_r30 = M2C_FIELD(temp_r3, void **, 0x280);
    fn_8003DDF8(temp_r30, &sp9, &sp8, &lbl_802CA518, temp_r7);
    temp_r3_3 = M2C_FIELD(temp_r30, void **, 0x194);
    fn_80183C6C(temp_r3_3, (s8) M2C_FIELD(temp_r3_3, u8 *, 0x19E), (s8) M2C_FIELD(temp_r3_3, u8 *, 0x19F), sp9, sp8, arg0);
    fn_8003EA24(temp_r30, sp9, sp8);
    return 1;
}

void fn_80026994(void) {
    void fn_8003BE50(void *);
    extern u8 lbl_802EF4C8[];
    fn_8003BE50(*(void **)(lbl_802EF4C8 + 4));
}

s32 fn_800269C0(s32 arg0) {
    u8 fn_8003C038(void *);
    void fn_80183BE4(void *, s32);
    extern u16 lbl_802EF4C8;
    extern u16 lbl_80330EAC;
    void *temp_r31;

    if (*(u32 *)((u8 *)&lbl_80330EAC + 0xCAC) & 0x100) {
        return 0;
    }
    temp_r31 = *(void **)((u8 *)&lbl_802EF4C8 + 4);
    if ((s8)*(u8 *)((u8 *)temp_r31 + 0x1A8) == 0) {
        return 0;
    }
    if (fn_8003C038(temp_r31) == 0) {
        return 0;
    }
    fn_80183BE4(temp_r31, arg0);
    return 1;
}

void fn_80026A54(void) {
    void fn_8003BE50(void *);
    extern u8 lbl_802EF4C8[24];
    fn_8003BE50(*(void **)lbl_802EF4C8);
}

s32 fn_80026A80(s32 arg0) {
    u8 fn_8003C038(void *);
    void fn_80183BE4(void *, s32);
    extern u8 lbl_802EF4C8[];
    void *temp_r31;

    temp_r31 = *(void **)lbl_802EF4C8;
    if ((s8)*(u8 *)((u8 *)temp_r31 + 0x1A8) == 0) {
        return 0;
    }
    if (fn_8003C038(temp_r31) == 0) {
        return 0;
    }
    fn_80183BE4(temp_r31, arg0);
    return 1;
}

s32 fn_80026AF4(s32 arg0) {
    extern u16 lbl_80330EAC[];
    u8 *base;
    u8 *second;
    u8 *selected;
    s32 var_r0;
    void *temp_r4;

    selected = NULL;
    base = (u8 *)lbl_80330EAC;
    second = base + 0x2E0;

    if (*(u8 *)((u8 *)(*(void **)(base + 0x190)) + 8) == 0 && *(u8 *)(base + 0x2C6) != 0) {
        selected = base;
    }
    if ((*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 1) == 0 && *(u8 *)((u8 *)(*(void **)(second + 0x190)) + 8) == 0 && *(u8 *)(second + 0x2C6) != 0) {
        selected = second;
    }
    if (selected == NULL) {
        return 0;
    }
    if ((s8)*(u8 *)(selected + 0x1A8) == 0) {
        return 0;
    }
    temp_r4 = *(void **)(selected + 0x28C);
    if (temp_r4 != NULL) {
        var_r0 = *(u8 *)((u8 *)temp_r4 + 0x12);
    } else {
        var_r0 = 0xC;
    }
    fn_800910D8((s8)(u8)var_r0, arg0, -1, -1, -1);
    return 1;
}

s32 fn_80026D24(s32 arg0) {
    void fn_8001C5F8(void *, s32);
    void fn_8001C690(void *, void *);
    void *fn_80037BD0(s32, s32);
    void fn_8007386C(s32, void *, s32);
    void *fn_801A4624(void *);
    s32 fn_801A46BC(void *);
    extern u8 lbl_80330EAC[];
    u8 sp8[8];
    s32 handle;
    s32 i;
    void *obj;
    void *entry;
    void *sub;

    if (*(u32 *)(lbl_80330EAC + 0xCAC) & 0x100) {
        return 0;
    }
    obj = fn_801A4624(lbl_80330EAC);
    if (obj == NULL) {
        return 0;
    }
    sub = *(void **)((u8 *)obj + 0x190);
    if (*(u8 *)((u8 *)sub + 8) != 0) {
        return 0;
    }
    handle = fn_801A46BC(lbl_80330EAC);
    for (i = 0; i < 8; i++) {
        entry = fn_80037BD0(handle, i);
        if (entry != NULL && *(u32 *)entry != 0 && ((*(u8 *)((u8 *)entry + 5) >> 6) & 1)) {
            fn_8001C690(sp8, entry);
            fn_8007386C(*(s32 *)((u8 *)obj + 0x280), sp8, arg0);
            fn_8001C5F8(sp8, -1);
            return 1;
        }
    }
    return 0;
}

void fn_80026E2C(s32 arg0) {
    void fn_8012AA90(s8, s8, s32);
    extern u8 lbl_802EF4C8[];
    typedef struct {
        u8 pad : 5;
        u8 flags : 3;
    } Bits;
    u8 *base;
    u8 *ptr;
    Bits *bits;

    base = lbl_802EF4C8;
    ptr = *(u8 **)(base + 4);
    fn_8012AA90((s8)ptr[0x19E], (s8)ptr[0x19F], arg0);
    ptr = *(u8 **)(base + 4);
    bits = (Bits *)(ptr + 0x1A5);
    bits->flags = 1;
}

void fn_80026E88(s32 arg0) {
    void fn_8003EA24(void *, u8, u8);
    void fn_80183D7C(void *, s32, s8, s8, s32);
    typedef struct {
        void *unit;
        s32 unk04;
        u8 pad[7];
        u8 unk0F;
        u8 unk10;
    } Ctx;
    extern Ctx lbl_802EF4C8;
    Ctx *ctx;
    void *unit;
    s32 saved;

    ctx = &lbl_802EF4C8;
    unit = ctx->unit;
    saved = *(s32 *)((u8 *)unit + 0x194);
    ctx->unk04 = saved;
    fn_8003EA24(unit, ctx->unk0F, ctx->unk10);
    fn_80183D7C(lbl_802EF4C8.unit, saved, (s8)ctx->unk0F, (s8)ctx->unk10, arg0);
}

void fn_80026F08(void)
{
    void fn_80050C90(void *);
    extern u8 lbl_802EF4C8[];
    typedef struct {
        u8 pad : 5;
        u8 flags : 3;
    } Bits;
    u8 *base;
    Bits *bits;
    u8 flag;

    base = lbl_802EF4C8;
    fn_80050C90(*(void **)(base + 4));
    flag = 1;
    base[8] = flag;
    bits = (Bits *)(*(u8 **)(base + 4) + 0x1A5);
    bits->flags = flag;
}

void fn_80026F5C(void *arg0) {
    M2C_UNK fn_8012AA90(s32, s32, void *);
    fn_8012AA90((s32) M2C_FIELD(arg0, f32 *, 0x30), (s32) M2C_FIELD(arg0, f32 *, 0x34), arg0);
}

void fn_80026FA0(void *arg0) {
    void fn_8003816C(s32, s32, s32);
    void fn_80183EAC(s32, s32, s32, s32, void *);
    extern u8 lbl_802EF4C8[];
    u8 *p;
    s32 x;
    s32 y;

    p = lbl_802EF4C8;
    x = (s32)*(f32 *)((u8 *)arg0 + 0x30);
    y = (s32)*(f32 *)((u8 *)arg0 + 0x34);
    fn_8003816C(*(s32 *)(p + 4), x, y);
    x = (s32)*(f32 *)((u8 *)arg0 + 0x30);
    y = (s32)*(f32 *)((u8 *)arg0 + 0x34);
    fn_80183EAC(*(s32 *)lbl_802EF4C8, *(s32 *)(p + 4), x, y, arg0);
}

void fn_80027F98(void *arg0, u8 arg1) {
    s8 fn_8003A398(void);
    void fn_800C1060(s32);
    extern u8 lbl_80367289;
    s32 temp;
    s32 one;
    s32 t;
    s32 u;
    u8 var_r4;
    void *p;
    s8 v;

    if ((s8)*(u8 *)((u8 *)arg0 + 0x12) == 0) {
        *(u8 *)((u8 *)arg0 + 9) = *(u8 *)((u8 *)arg0 + 8);
    }
    *(u8 *)((u8 *)arg0 + 0x12) = 0;
    fn_8002297C(&lbl_802CA518);
    one = 1;
    var_r4 = one;
    temp = (u8)(lbl_80367289 - 1);
    t = ~temp | one;
    u = (u32)(one - temp) >> 1;
    if (((u32)(t - u) >> 31) == 0) {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        fn_800C1060(0);
    }
    if ((s8)*(u8 *)((u8 *)*(void **)arg0 + 0x1A8) != 0) {
        v = fn_8003A398();
        p = *(void **)arg0;
        *(u16 *)((u8 *)p + 0x22E) =
            *(u16 *)((u8 *)p + 0x22E) + (u16)(v - *(u8 *)((u8 *)arg0 + 0x11));
        if (arg1 == 0) {
            p = *(void **)arg0;
            *(s32 *)((u8 *)p + 0x1A0) |= 1;
        }
    }
}

void fn_8002807C(void *arg0) {
    M2C_UNK fn_8003816C(s32, u8, u8);
    M2C_UNK fn_80050C90(s32);
    fn_8003816C(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u8 *, 0xB), M2C_FIELD(arg0, u8 *, 0xC));
    fn_80050C90(M2C_FIELD(arg0, s32 *, 0));
    fn_8002297C(&lbl_802CA518);
}

void fn_800280C8(s32 arg0, s32 *arg1) {
    extern u8 lbl_802EF4C8[];
    
    if (arg0 >= 0x64) {
        arg0 = 0;
    }
    
    *arg1 = *(s32 *)((char *)lbl_802EF4C8 + arg0 * 4);
}

void fn_80028160(void *arg0) {
    void *unit;
    u8 *map;

    unit = *(void **)arg0;
    map = (u8 *)&lbl_802CA518;
    *((u8 *)arg0 + 0xB) = *((u8 *)unit + 0x19E);
    *((u8 *)arg0 + 0xC) = *((u8 *)unit + 0x19F);
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *((u8 *)arg0 + 8) = 0;
    *((s8 *)arg0 + 0xA) = -1;
    *((s8 *)arg0 + 0xD) = -1;
    *((s8 *)arg0 + 0xE) = -1;
    *((s8 *)arg0 + 0xF) = -1;
    *((s8 *)arg0 + 0x10) = -1;
    *((u8 *)arg0 + 0x14) = 0;
    *((u8 *)arg0 + 0x15) = 0;
    *((u8 *)arg0 + 0x12) = 1;
    *((u8 *)arg0 + 0x16) = 0;
    map[(s8)*((u8 *)arg0 + 0xB) + ((s8)*((u8 *)arg0 + 0xC) << 6) + 0xD] = 0;
}

void fn_800281D8(void *arg0) {
    void *temp_r3;

    M2C_FIELD(arg0, s8 *, 0x12) = 1;
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r3, s32 *, 0x1A0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x1A0) & 0xFFFFFFFE);
}

void fn_8002833C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) M2C_FIELD(arg1, u8 *, 0x19E);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) M2C_FIELD(arg1, u8 *, 0x19F);
    M2C_FIELD(arg0, s8 *, 0x11) = fn_8003A398(arg1);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = -1;
    M2C_FIELD(arg0, u8 *, 0xD) = (u8) M2C_FIELD(arg1, u8 *, 0x19E);
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) M2C_FIELD(arg1, u8 *, 0x19F);
    M2C_FIELD(arg0, s8 *, 0xF) = -1;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
}

#pragma peephole off
void fn_800283C8(void *arg0, void *arg1) {
    s8 fn_8003A398(void *);
    u8 *map;

    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 0xB) = (u8)M2C_FIELD(arg1, u8 *, 0x19E);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8)M2C_FIELD(arg1, u8 *, 0x19F);
    M2C_FIELD(arg0, s8 *, 0x11) = fn_8003A398(arg1);
    map = (u8 *)&lbl_802CA518;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = -1;
    M2C_FIELD(arg0, s8 *, 0xD) = -1;
    M2C_FIELD(arg0, s8 *, 0xE) = -1;
    M2C_FIELD(arg0, s8 *, 0xF) = -1;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0;
    map[(s8)M2C_FIELD(arg0, u8 *, 0xB) + ((s8)M2C_FIELD(arg0, u8 *, 0xC) << 6) + 0xD] = 0;
}
#pragma peephole reset
void fn_8002846C(void *arg0) {
    /* Initialize a struct to 0 with some special values. */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = -1;
    M2C_FIELD(arg0, s8 *, 0xC) = -1;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = -1;
    M2C_FIELD(arg0, s8 *, 0xD) = -1;
    M2C_FIELD(arg0, s8 *, 0xE) = -1;
    M2C_FIELD(arg0, s8 *, 0xF) = -1;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0;
}

s32 fn_800284B4(void *arg0) {
    extern u8 lbl_80330708[];
    u8 fn_80015648(u8, u8);
    u8 temp_r30;

    if (arg0 == NULL) {
        return 0;
    }
    if ((((u16) M2C_FIELD(arg0, u16 *, 0x1A4) >> 7U) & 7) || (M2C_FIELD(arg0, u8 *, 0x1A5) & 7)) {
        return 1;
    }
    temp_r30 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x190), u8 *, 8);
    if (fn_80015648(temp_r30, lbl_80330708[0x11]) == 1) {
        return 2;
    }
    if ((temp_r30 == 2) && ((lbl_80330708[0x11] != 2) || (lbl_80330708[0x16] != 1))) {
        return 3;
    }
    if ((temp_r30 == 3) && ((lbl_80330708[0x11] != 3) || (lbl_80330708[0x17] != 1))) {
        return 4;
    }
    if (M2C_FIELD(arg0, u32 *, 0x1A0) & 1) {
        return 5;
    }
    return 6;
}

void fn_800285C0(void *arg0) {
    void *p;
    s8 b;
    void fn_80037BD0(void *, s8);
    b = (s8)*((u8 *)arg0 + 0xA);
    p = *(void **)arg0;
    fn_80037BD0(p, b);
}

void fn_800285EC(void) {
    extern u8 lbl_80367707;
    extern u8 lbl_80330EAC[];
    u32 flags;
    u8 *base;

    if (lbl_80367707 == 0) {
        base = lbl_80330EAC;
        flags = *(u32 *)(base + 0xCAC);
        if ((flags & 0x80000000) != 0) {
            fn_80098A9C();
        } else {
            *(u32 *)(base + 0xCAC) = flags | 0x10000000;
            fn_800D5818();
        }
    }
}

void fn_8002863C(void) {

}

extern u8 lbl_80284668[];
s32 fn_80028640(void) {
    s32 fn_8000C0C0(void *);
    s32 v;

    v = fn_8000C0C0(lbl_80284668);
    return v != 0;
}

void fn_80028674(void) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
}

void fn_80028694(void) {
    extern u16 lbl_80268E40[];
    fn_800C50FC(&lbl_80268E40[0x212 / sizeof(u16)], fn_800C52C8(), lbl_80268E40);
}

void fn_800286C8(void *arg0) {
    extern u8 lbl_80330EAC[];
    void fn_8000C070(void *, s32);
    void *fn_801A46BC(void *);
    void fn_8004B1B4(s32);
    u32 v;
    void *p;

    v = *(u32 *)(lbl_80330EAC + 0xcac);
    if ((v & 0x10) && (v & 0x10000000)) {
        fn_8000C070(arg0, 0x63);
    }
    p = fn_801A46BC(lbl_80330EAC);
    if (p != 0) {
        fn_8004B1B4(*(s32 *)((u8 *)p + 0x280));
    }
}

void fn_80028724(void) {
    u8 fn_800BDD08(void *, void *, void *);
    void fn_80146AF0(void);
    void fn_801487D0(void *, s32);
    void fn_8014876C(void *, s32, s32);
    extern u8 lbl_80268E40[];
    extern u8 lbl_8032FF08[];
    extern u8 lbl_80330708[];
    u8 *buf = lbl_8032FF08;

    if (fn_800BDD08(lbl_80330708 + 0xB4, lbl_80268E40 + 0x21E, lbl_80330708) == 0) {
        fn_80146AF0();
        fn_801487D0(buf, 0x3E8);
        fn_8014876C(buf, 0x64, 0x3E8);
    }
}

void fn_80028794(void) {
    void *fn_80145FE8(void);
    void fn_80146B00(void);
    s8 fn_80146C94(void *);
    void fn_801478D0(s16);
    void fn_80147FA8(s32);
    void fn_801481CC(void *, s32);

    fn_80147FA8(0x3E8);
    fn_801478D0(0x3E8);
    if (fn_80146C94(fn_80145FE8()) != -1) {
        fn_801481CC(fn_80145FE8(), 0);
    }
    fn_80146B00();
}

void fn_800287E4(void) {
    extern u8 lbl_80330708[];
    
    fn_8014C7C0(lbl_80330708, lbl_80330708 + 0x504);
    fn_8014C798(lbl_80330708);
    fn_800163F8();
    fn_80016180();
}

void fn_80028824(s32 arg0) {
    extern u16 lbl_80330708[66];
    fn_8014C718(lbl_80330708, arg0);
    fn_800162B8();
}

s32 fn_80028854(void) {
    extern u8 lbl_802EF4C8[];
    return *(s32 *)lbl_802EF4C8;
}
extern u8 lbl_802EF438[];
#include "common.h"
#include "unit.h"

s32 func_80025338(struct Unit* unit)
{
    return 0;
}
#include "global.h"
#include "ef.h"

extern u8 lbl_80330EAC[0x1000];
extern u8 lbl_80268E40[];
extern u16 lbl_80368DA0;
extern u16 lbl_80368DA4;
extern u16 lbl_80368DAC;
extern u16 lbl_80368DA8;
extern u32 lbl_8036C410;
extern u32 lbl_8036C414;
