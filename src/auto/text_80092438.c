/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
extern void* lbl_803674E8;
extern f32 lbl_803696C8;

extern s32 lbl_803682F0;
extern void *lbl_8026CC58;
extern void *lbl_80289998;
extern f32 lbl_80369690;
extern f32 lbl_803696A8;
extern f32 lbl_803696AC;

extern void* lbl_80367488;
extern s32 lbl_803693C0;
extern s32 lbl_803693C4;
extern f64 lbl_803693C8;
extern f32 lbl_803693D4;
extern f32 lbl_803693D8;
extern f32 lbl_803693E4;

extern u8 lbl_80330708[1400];

extern u16 *lbl_803674E0;

#pragma inline

extern f32 lbl_8036A118;
extern f32 lbl_8036A120;
extern f32 lbl_8036A130;
extern f32 lbl_8036A154;

extern f32 lbl_80369768;
extern u16 lbl_80289A60[];

extern u8 lbl_80289B00[16];

extern void* fn_800980D4(s32 arg0);
extern void fn_8017E394(void* arg0, void* arg1, void* arg2, s32 arg3);

/* record returned by fn_80037BD0; bit 6 of byte 5 is set/cleared by fn_800946F0 */
typedef struct {
    u32 unk0;
    u8 unk4;
    u8 unk5_bit7:1;
    u8 unk5_bit6:1;
    u8 unk5:6;
} Unk80037BD0;

extern u8 lbl_80289EB8[16];
extern u8 lbl_8026CFE8[72];

extern f32 lbl_803697E0;
extern f32 lbl_803697E4;

#pragma scheduling reset

void fn_80092438(void *arg0) {
    u8 fn_80105BC0(void *, s32);

    if (*(u8 *)((u8 *)arg0 + 0x20C) == 0 && fn_80105BC0((u8 *)arg0 + 0x1BC, 0x24) != 0) {
        *(u8 *)((u8 *)arg0 + 0x20C) = 1;
    }
    if (*(u8 *)((u8 *)arg0 + 0x20D) == 0 && fn_80105BC0((u8 *)arg0 + 0x1BC, 0x25) != 0) {
        *(u8 *)((u8 *)arg0 + 0x20D) = 1;
    }
    if (*(u8 *)((u8 *)arg0 + 0x20E) == 0 && fn_80105BC0((u8 *)arg0 + 0x1BC, 0x26) != 0) {
        *(u8 *)((u8 *)arg0 + 0x20E) = 1;
    }
    if (*(u8 *)((u8 *)arg0 + 0x20F) == 0 && fn_80105BC0((u8 *)arg0 + 0x1BC, 0x27) != 0) {
        *(u8 *)((u8 *)arg0 + 0x20F) = 1;
    }
    if (*(u8 *)((u8 *)arg0 + 0x213) == 0 && fn_80105BC0((u8 *)arg0 + 0x1BC, 0x28) != 0) {
        *(u8 *)((u8 *)arg0 + 0x213) = 1;
    }
}

#pragma use_lmw_stmw on
s32 fn_80092528(void *arg0, s32 arg1) {
    u8 fn_80105BC0(void *, s32);
    u8 fn_8001CCE4(u8);
    u32 fn_8001CFA8(u8);
    void *self;
    s32 a1;
    u32 idx;
    u8 result;
    u8 result2;
    u32 a;
    u32 b;

    idx = (u8)arg1;
    self = arg0;
    a1 = arg1;
    result = ((u8 *)self)[idx + 0x20C];

    if (idx == 7) {
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
            goto clamp79;
        }
    }

    if ((*(u8 **)((u8 *)self + 0x18C))[idx + 0x2C] != 0) {
        goto block_default;
    }

    switch ((u8)a1) {
    case 0:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x24) != 0) {
            goto block_default;
        }
        result = 0;
        goto done1;
    case 1:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x25) != 0) {
            goto block_default;
        }
        result = 0;
        goto done1;
    case 2:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x26) != 0) {
            goto block_default;
        }
        result = 0;
        goto done1;
    case 3:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x27) != 0) {
            goto block_default;
        }
        result = 0;
        goto done1;
    case 7:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
            goto block_default;
        }
        result = 0;
        goto done1;
    }

block_default:
    if (fn_80105BC0((u8 *)self + 0x1BC, 2) == 0) {
        goto clamp79;
    }
    if (result > 0xFB) {
        result = 0xFB;
    }
    goto done1;

clamp79:
    if (result > 0x79) {
        result = 0x79;
    }
done1:
    result2 = fn_8001CCE4(result);

    if ((u8)a1 == 7) {
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
            goto clamp79_2;
        }
    }

    if ((*(u8 **)((u8 *)self + 0x18C))[idx + 0x2C] != 0) {
        goto block_default2;
    }

    switch ((u8)a1) {
    case 0:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x24) != 0) {
            goto block_default2;
        }
        result2 = 0;
        goto done2;
    case 1:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x25) != 0) {
            goto block_default2;
        }
        result2 = 0;
        goto done2;
    case 2:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x26) != 0) {
            goto block_default2;
        }
        result2 = 0;
        goto done2;
    case 3:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x27) != 0) {
            goto block_default2;
        }
        result2 = 0;
        goto done2;
    case 7:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
            goto block_default2;
        }
        result2 = 0;
        goto done2;
    }

block_default2:
    if (fn_80105BC0((u8 *)self + 0x1BC, 2) == 0) {
        goto clamp79_2;
    }
    if ((u8)result2 > 0xFB) {
        result2 = 0xFB;
    }
    goto done2;

clamp79_2:
    if ((u8)result2 > 0x79) {
        result2 = 0x79;
    }
done2:
    ((u8 *)self + 0x20C)[idx] = (u8)result2;
    a = fn_8001CFA8(result);
    b = fn_8001CFA8(result2);
    return (u8)a != (u8)b;
}
s32 fn_800927EC(void *arg0, void *arg1) {
    u8 fn_80105BC0(void *, s32);
    s8 fn_8001CBA0(void *);
    u32 fn_8001CFA8(u8);
    s32 other;
    s32 result;
    void *self;
    u32 idx;
    s32 kept;

    kept = 0;
    self = arg0;
    other = (s32)arg1;
    idx = *((u8 *)other + 0x12);
    result = ((u8 *)self)[idx + 0x20C];

    if (idx != 7) {
        goto after_first7;
    }
    if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
        goto clamp79;
    }
after_first7:
    if ((*(u8 **)((u8 *)self + 0x18C))[idx + 0x2C] != 0) {
        goto block_default;
    }

    switch ((s32)idx) {
    case 0:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x24) != 0) {
            goto block_default;
        }
        result = 0;
        goto done1;
    case 1:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x25) != 0) {
            goto block_default;
        }
        result = 0;
        goto done1;
    case 2:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x26) != 0) {
            goto block_default;
        }
        result = 0;
        goto done1;
    case 3:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x27) != 0) {
            goto block_default;
        }
        result = 0;
        goto done1;
    case 7:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
            goto block_default;
        }
        result = 0;
        goto done1;
    }

block_default:
    if (fn_80105BC0((u8 *)self + 0x1BC, 2) == 0) {
        goto clamp79;
    }
    if ((u8)result > 0xFB) {
        result = 0xFB;
    }
    goto done1;

clamp79:
    if ((u8)result > 0x79) {
        result = 0x79;
    }
done1:
    kept = (u8)result;
    if (kept >= 0xFB) {
        return 0;
    }
    {
        s32 t = kept + *((u8 *)other + 0x17);
        if (t > 0xFB) {
            t = 0xFB;
        }
        result = (u8)t;
    }

    if (idx != 7) {
        goto after_second7;
    }
    if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
        goto clamp79_2;
    }
after_second7:
    if ((*(u8 **)((u8 *)self + 0x18C))[idx + 0x2C] != 0) {
        goto block_default2;
    }

    switch ((s32)idx) {
    case 0:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x24) != 0) {
            goto block_default2;
        }
        result = 0;
        goto done2;
    case 1:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x25) != 0) {
            goto block_default2;
        }
        result = 0;
        goto done2;
    case 2:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x26) != 0) {
            goto block_default2;
        }
        result = 0;
        goto done2;
    case 3:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x27) != 0) {
            goto block_default2;
        }
        result = 0;
        goto done2;
    case 7:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
            goto block_default2;
        }
        result = 0;
        goto done2;
    }

block_default2:
    if (fn_80105BC0((u8 *)self + 0x1BC, 2) == 0) {
        goto clamp79_2;
    }
    if ((u8)result > 0xFB) {
        result = 0xFB;
    }
    goto done2;

clamp79_2:
    if ((u8)result > 0x79) {
        result = 0x79;
    }
done2:
    other = (u8)result;
    if (other >= 0xFB) {
        if (fn_8001CBA0((u8 *)self + 0x20C) >= 0) {
            return 0;
        }
    }
    ((u8 *)self + 0x20C)[idx] = (u8)other;
    {
        u32 a = fn_8001CFA8((u8)kept);
        return (u8)a != (u8)fn_8001CFA8((u8)other);
    }
}
u8 fn_80092ADC(void *arg0, s32 arg1) {
    u8 fn_80105BC0(void *, s32);
    u8 result;
    u32 idx;
    s32 a1;
    void *self;
    u8 *row;

    result = 0;
    idx = (u8)arg1;
    a1 = arg1;
    self = arg0;
    result = *((u8 *)self + idx + 0x20C);

    if (idx == 7) {
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
            goto clamp79;
        }
    }

    row = *(u8 **)((u8 *)self + 0x18C);
    if (*(row + idx + 0x2C) != 0) {
        goto block_default;
    }

    switch ((u8)a1) {
    case 0:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x24) != 0) {
            goto block_default;
        }
        result = 0;
        goto done;
    case 1:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x25) != 0) {
            goto block_default;
        }
        result = 0;
        goto done;
    case 2:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x26) != 0) {
            goto block_default;
        }
        result = 0;
        goto done;
    case 3:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x27) != 0) {
            goto block_default;
        }
        result = 0;
        goto done;
    case 7:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
            goto block_default;
        }
        result = 0;
        goto done;
    }

block_default:
    if (fn_80105BC0((u8 *)self + 0x1BC, 2) == 0) {
        goto clamp79;
    }
    if (result > 0xFB) {
        result = 0xFB;
    }
    goto done;

clamp79:
    if (result > 0x79) {
        result = 0x79;
    }
done:
    return result;
}

u8 fn_80092C50(void *arg0, u8 arg1, u8 arg2) {
    void *r29;
    u8 r30;
    u8 r31;
    
    if ((arg1 & 0x7) != 7) {
        r29 = (u8 *)arg0 + 0x1BC;
        if (fn_80105BC0(r29, 0x28) == 0) {
            return 0;
        }
        
        r30 = *((u8 *)arg0 + 0x18C + arg1);
        if (r30 == 0) {
            switch (arg1) {
                case 0:
                    if (fn_80105BC0(r29, 0x24) == 0) {
                        return 0;
                    }
                    break;
                case 1:
                    if (fn_80105BC0(r29, 0x25) == 0) {
                        return 0;
                    }
                    break;
                case 2:
                    if (fn_80105BC0(r29, 0x26) == 0) {
                        return 0;
                    }
                    break;
                case 3:
                    if (fn_80105BC0(r29, 0x27) == 0) {
                        return 0;
                    }
                    break;
                case 7:
                    if (fn_80105BC0(r29, 0x28) == 0) {
                        return 0;
                    }
                    break;
                default:
                    return 0;
            }
        } else {
            r31 = arg2;
            if (r31 > 0xFB) {
                r31 = 0xFB;
            }
            if (fn_80105BC0(r29, 2) != 0) {
                return r31;
            } else {
                if (r31 > 0x79) {
                    r31 = 0x79;
                }
                return r31;
            }
        }
    } else {
        r31 = arg2;
        if (r31 > 0x79) {
            r31 = 0x79;
        }
        return r31;
    }
    
    return 0;
}

u8 fn_80092F38(void *arg0) {
    u8 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(arg0, u32 *, 0x1EC) != 0) {
        var_r4 = 1;
    }
    if (M2C_FIELD(arg0, u32 *, 0x1F4) != 0) {
        var_r4 = (u8)var_r4 + 1;
    }
    if (M2C_FIELD(arg0, u32 *, 0x1FC) != 0) {
        var_r4 = (u8)var_r4 + 1;
    }
    if (M2C_FIELD(arg0, u32 *, 0x204) != 0) {
        var_r4 = (u8)var_r4 + 1;
    }
    {
        u8 r = var_r4;
        return r;
    }
}

u8 fn_80092F9C(void *arg0)
{
  extern void *fn_80037BBC(void *, s32);
  unsigned long new_var;
  u8 count;
  s32 i;
  count = 0;
  for (i = 0; i < 4; i++)
  {
    if ((*((u32 *) fn_80037BBC(arg0, i))) != 0)
    {
      new_var = 1;
      if (new_var)
      {
        count = (u8) (count + new_var);
      }
    }
  }

  return count;
}

s32 fn_80093010(void *arg0, void *arg1)
{
    extern void *fn_80037BD0(void *, s32);

    s32 i;
    void *value;

    for (i = 0; i < 8; i++) {
        value = *(void **)fn_80037BD0(arg0, i);

        if (value != 0 && value == arg1) {
            return i;
        }
    }

    return -1;
}

s32 fn_80093088(void *arg0) {
    s32 i = 0;
    for (;;) {
        if (*(u32 *)fn_80037BBC(arg0, i) != 0)
            break;
        i++;
        if (i == 4) {
            i = -1;
            break;
        }
    }
    if (i == 0) {
        if (*(u32 *)((u8 *)arg0 + 0x1ec) != 0)
            return 0;
        if (*(u32 *)((u8 *)arg0 + 0x1f4) != 0)
            return 1;
        if (*(u32 *)((u8 *)arg0 + 0x1fc) != 0)
            return 2;
        if (*(u32 *)((u8 *)arg0 + 0x204) != 0)
            return 3;
        return -1;
    }
    return -1;
}

void fn_80093154(s32 arg0, u8 arg1, s32 arg2) {
    M2C_UNK fn_8001C4FC(s32, s32);
    s32 r6;
    u32 r0;

    r6 = arg0;
    r0 = arg1;
    if (r0 < 4U) {
        r0 <<= 24;
        r0 >>= 29;
        r0 += 0x1CC;
        r0 += r6;
        fn_8001C4FC(r0, arg2);
        return;
    }
    r0 -= 4;
    r0 <<= 24;
    r0 >>= 29;
    r0 += 0x1EC;
    r0 += r6;
    fn_8001C4FC(r0, arg2);
}

void fn_800931B0(s32 arg0, u8 arg1, s32 arg2) {
    M2C_UNK fn_8001C4FC(s32, s32);
    fn_8001C4FC(arg0 + (arg1 << 3) + 0x1EC, arg2);
}

void fn_800931E4(s32 arg0, u8 arg1, s32 arg2) {
    fn_8001C4FC(arg0 + (arg1 << 3) + 0x1CC, arg2);
}

s32 fn_80093218(void *arg1) {
    s32 r4;
    s32 r6;

    r6 = *(s32 *)((u8 *)arg1 + 0x38);
    r4 = *(s32 *)((u8 *)arg1 + 0x3c);
    if ((r4 & 8) == 0) {
        return 0;
    }
    if ((r6 & 0x100) == 0) {
        return 0;
    }
    return 1;
}

u8 fn_8009326C(void *arg0, void *arg1) {
    u8 fn_800940B0(void *, void *);
    u8 tmp;
    struct { unsigned ok : 8; } t;
    u32 lo;
    u32 hi;
    u32 z;
    u64 flags;

    t.ok = 0;
    lo = *(u32 *)((u8 *)arg1 + 0x3C);
    hi = *(u32 *)((u8 *)arg1 + 0x38);
    z = 0;
    flags = ((u64)hi << 32) | lo;
    if (!(flags & 4)) {
        return (u8)z;
    }
    if (flags & 0x200) {
        tmp = fn_80105BC0((u8 *)arg0 + 0x1BC, 9);
        if (tmp) {
            t.ok = 1;
        } else {
            t.ok = (u8)z;
        }
    } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
        t.ok = 1;
    } else if (flags & 2) {
        t.ok = (u8)z;
    } else if (flags & 4) {
        t.ok = (u8)z;
    } else if (flags & 0x40) {
        t.ok = 1;
    } else {
        t.ok = 1;
    }
    if (t.ok == 0) {
        return (u8)z;
    }
    return fn_800940B0(arg0, arg1) != 0;
}

s32 fn_8009339C(void *arg0, void *arg1) {
    u8 fn_800940B0(void *, void *);
    s32 temp_r4;
    s32 temp_r7;
    u8 var_r6;

    var_r6 = 1;
    temp_r7 = *(u32*)((u8*)arg1 + 0x3c);
    temp_r4 = *(u32*)((u8*)arg1 + 0x38);
    if ((temp_r7 & 1) == 0) {
        return 0;
    }
    if ((temp_r7 & 0x200) != 0) {
        if (fn_80105BC0((u8*)arg0 + 0x1bc, 9) != 0) {
            var_r6 = 1;
        } else {
            var_r6 = 0;
        }
    } else if (((*(u8*)((u8*)arg0 + 0x1a5) >> 4U) & 7) == 0) {

    } else if ((temp_r7 & 2) != 0) {
        var_r6 = 0;
    } else if ((temp_r7 & 4) != 0) {
        var_r6 = 0;
    }
    if (var_r6 == 0) {
        return 0;
    }
    return fn_800940B0(arg0, arg1) != 0;
}

u8 fn_800934CC(void *arg0, void *arg1) {
    u8 fn_800940B0(void *, void *);
    u8 fn_80105BC0(void *, s32);
    u8 ok;
    u32 lo;
    u8 result;
    u32 hi;
    u64 flags;

    ok = 1;
    lo = *(u32 *)((u8 *)arg1 + 0x3C);
    result = 0;
    hi = *(u32 *)((u8 *)arg1 + 0x38) & result;
    flags = ((u64)hi << 32) | lo;

    if (flags & 1) {
        if (!(flags & 1)) {
        } else {
            if (flags & 0x200) {
                if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9) != 0) {
                    ok = 1;
                } else {
                    ok = 0;
                }
            } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
            } else if (flags & 2) {
                ok = result;
            } else if (flags & 4) {
                ok = result;
                          } else if (flags & 0x40) {
              }
                              if (ok == 0) {
                    result = 0;
                } else {
                    result = fn_800940B0(arg0, arg1) != 0;
                }
            }
            return result;
        }
        if (flags & 4) {
          if (!(flags & 4)) {
          } else {
              if (flags & 0x200) {
                  if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9) != 0) {
                      ok = 1;
                  } else {
                      ok = 0;
                  }
              } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
              } else if (flags & 2) {
                  ok = result;
              } else if (flags & 4) {
                  ok = result;
              } else if (flags & 0x40) {
              }
                              if (ok == 0) {
                    result = 0;
                } else {
                    result = fn_800940B0(arg0, arg1) != 0;
                }
            }
            return result;
        }
        return 0;
  }
  
  u8 fn_80093708(void *arg0, void *arg1) {
          u8 fn_800940B0(void *, void *);
      u8 fn_80105BC0(void *, s32);
      struct { unsigned ok : 8; unsigned result : 8; } t;
      u64 flags;
      u64 flags2;
      u8 tmp;
      u32 m;
  
      t.result = 0;
      flags = *(u64 *)((u8 *)arg1 + 0x38);
      flags2 = flags;
      m = 5;
  
      if (flags & m) {
          t.ok = 1;
          if (flags & 1) {
              if (!(flags2 & 1)) {
              } else {
                  if (flags & 0x200) {
                      if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9) != 0) {
                          t.ok = 1;
                      } else {
                          t.ok = 0;
                      }
                  } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
                  } else if (flags & 2) {
                      t.ok = t.result;
                  } else if (flags & 4) {
                      t.ok = t.result;
                  } else if (flags & 0x40) {
                      t.ok = 1;
                  }
                  if (t.ok == 0) {
                      t.result = 0;
                  } else {
                      t.result = fn_800940B0(arg0, arg1) != 0;
                  }
              }
          } else {
              if (flags & 4) {
                  if (!(flags2 & 4)) {
                  } else {
                      if (flags & 0x200) {
                          if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9) != 0) {
                              t.ok = 1;
                          } else {
                              t.ok = 0;
                          }
                      } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
                      } else if (flags & 2) {
                          t.ok = t.result;
                      } else if (flags & 4) {
                          t.ok = t.result;
                      } else if (flags & 0x40) {
                          t.ok = 1;
                      }
                      if (t.ok == 0) {
                          t.result = 0;
                      } else {
                          t.result = fn_800940B0(arg0, arg1) != 0;
                      }
                  }
              }
          }
          return t.result;
      }
    if (flags & 0x18) {
        if (flags & 8) {
            if (!(flags2 & 8)) {
            } else if (flags & ((u64)0x100 << 32)) {
            } else {
                t.result = 1;
            }
        } else {
            if (flags & 0x10) {
                if (!(flags2 & 0x10)) {
                    tmp = t.result;
                } else {
                    tmp = fn_800940B0(arg0, arg1);
                }
                t.result = tmp;
            }
        }
        return t.result;
    }
    return 0;
}

u8 fn_800939FC(void *arg0, void *arg1) {
    /* tool: brace off fn_800940B0 call lines */
    s32 fn_800061F4(void);
    u8 fn_8001C914(void *, void *);
    void *fn_8001C9BC(void *);
    u8 fn_800940B0(void *, void *);
    u8 fn_80105BC0(void *, s32);
    struct { unsigned ok : 8; unsigned result : 8; } t;
    u32 lo;
    u32 hi;
    u64 flags;
    u64 bit;
    u8 tmp;
    void *rec;
    u8 var_r0;

    t.result = 0;
    lo = *(u32 *)((u8 *)arg1 + 0x3C);
    hi = *(u32 *)((u8 *)arg1 + 0x38);
    flags = (u64)lo | ((u64)hi << 32);

    bit = flags & 8;
    if (bit) {
        if (fn_800061F4() == 0x10) {
            rec = fn_8001C9BC(arg1);
            if (rec == NULL) {
                var_r0 = 0;
            } else if (*(u32 *)rec == 0) {
                var_r0 = 0;
            } else {
                var_r0 = *((u8 *)rec + 4);
            }
            if (var_r0 == 0) {
                return 0;
            }
            return fn_8001C914(arg0, arg1);
        }
        rec = fn_8001C9BC(arg1);
        if (rec == NULL) {
            var_r0 = 0;
        } else if (*(u32 *)rec == 0) {
            var_r0 = 0;
        } else {
            var_r0 = *((u8 *)rec + 5);
        }
        if (var_r0 == 0) {
            return 0;
        }
        return fn_8001C914(arg0, arg1);
    }
    if (flags & 5) {
        t.ok = 1;
                  bit = flags & 1;
          if (bit) {
              if (!bit) {
              } else {
                  if (flags & 0x200) {
                      if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9) != 0) {
                          t.ok = 1;
                      } else {
                          t.ok = 0;
                      }
                  } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
                  } else if (flags & 2) {
                      t.ok = t.result;
                  } else if (flags & 4) {
                      t.ok = t.result;
                  } else if (flags & 0x40) {
                      t.ok = 1;
                  }
                  if (t.ok == 0) {
                      t.result = 0;
                  } else if (fn_800940B0(arg0, arg1) == 0)
                  {
                      t.result = 0;
                  } else {
                      t.result = 1;
                  }
              }
          } else {
              bit = flags & 4;
              if (bit) {
                  if (!bit) {
                  } else {
                      if (flags & 0x200) {
                          if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9) != 0) {
                              t.ok = 1;
                          } else {
                              t.ok = 0;
                          }
                      } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
                      } else if (flags & 2) {
                          t.ok = t.result;
                      } else if (flags & 4) {
                          t.ok = t.result;
                      } else if (flags & 0x40) {
                          t.ok = 1;
                      }
                      if (t.ok == 0) {
                          t.result = 0;
                      } else if (fn_800940B0(arg0, arg1) == 0)
                      {
                          t.result = 0;
                      } else {
                          t.result = 1;
                      }
                  }
              }
          }
          return t.result;
      }
      if (flags & 0x18) {
          bit = flags & 8;
        if (bit) {
            if (!bit) {
            } else if (flags & ((u64)0x100 << 32)) {
            } else {
                t.result = 1;
            }
        } else {
            bit = flags & 0x10;
            if (bit) {
                if (!bit) {
                    tmp = t.result;
                } else {
                    tmp = fn_800940B0(arg0, arg1);
                }
                t.result = tmp;
            }
        }
        return t.result;
    }
    return 0;
}

u8 fn_80093DA8(void *arg0, void *arg1) {
      u8 fn_800940B0(void *, void *);
      u8 fn_80105BC0(void *, s32);
      struct { unsigned ok : 8; unsigned result : 8; } t;
      u32 *p;
      u32 lo;
      u32 hi;
      u64 flags;
      u64 flags2;
      u8 tmp;
      u32 m;
  
      t.result = 0;
      p = (u32 *)((u8 *)arg1 + 0x38);
      lo = p[1];
      hi = p[0];
      flags = ((u64)hi << 32) | lo;
      flags2 = flags;
      m = 8;
  
      if (flags & m) {
          return 1;
      }
      m = 5;
      if (flags & m) {
          t.ok = 1;
          if (flags & 1) {
              if (!(flags2 & 1)) {
              } else {
                  if (flags & 0x200) {
                      if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9) != 0) {
                          t.ok = 1;
                      } else {
                          t.ok = 0;
                      }
                  } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
                  } else if (flags & 2) {
                      t.ok = t.result;
                  } else if (flags & 4) {
                      t.ok = t.result;
                  } else if (flags & 0x40) {
                      t.ok = 1;
                  }
                  if (t.ok == 0) {
                      t.result = 0;
                  } else if (fn_800940B0(arg0, arg1) == 0)
                  {
                      t.result = 0;
                  } else {
                      t.result = 1;
                  }
              }
          } else {
              if (flags & 4) {
                  if (!(flags2 & 4)) {
                  } else {
                      if (flags & 0x200) {
                          if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9) != 0) {
                              t.ok = 1;
                          } else {
                              t.ok = 0;
                          }
                      } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
                      } else if (flags & 2) {
                          t.ok = t.result;
                      } else if (flags & 4) {
                          t.ok = t.result;
                      } else if (flags & 0x40) {
                          t.ok = 1;
                      }
                      if (t.ok == 0) {
                          t.result = 0;
                      } else if (fn_800940B0(arg0, arg1) == 0)
                      {
                          t.result = 0;
                      } else {
                          t.result = 1;
                      }
                  }
              }
        }
        return t.result;
    }
    if (flags & 0x18) {
        if (flags & 8) {
            if (!(flags2 & 8)) {
            } else if (flags & ((u64)0x100 << 32)) {
            } else {
                t.result = 1;
            }
        } else {
            if (flags & 0x10) {
                if (!(flags2 & 0x10)) {
                    tmp = t.result;
                } else {
                    tmp = fn_800940B0(arg0, arg1);
                }
                t.result = tmp;
            }
        }
        return t.result;
    }
    return 0;
}

u8 fn_800940B0(void *arg0, void *arg1) {
    u8 fn_80105BC0(void *, s32);
    void *fn_80019E48(void *);

    void *other;
    void *self;
    u64 flags;
    u32 lo;
    u32 hi;
    u8 type;
    u8 result;
    u8 lim;
    void *unit;

    other = arg1;
    self = arg0;
    lo = *(u32 *)((u8 *)other + 0x3C);
    hi = *(u32 *)((u8 *)other + 0x38);
    flags = ((u64)hi << 32) | lo;

    if (!(flags & 4)) {
        if (flags & 0x7FF80000) {
            if (flags & 0x200000) {
                if (fn_80105BC0((u8 *)self + 0x1BC, 0) == 0) {
                    return 0;
                }
            }
            if (flags & 0x400000) {
                unit = *(void **)((u8 *)self + 0x18C);
                if ((*(u16 *)((u8 *)unit + 0x3A) & 0x20) == 0) {
                    return 0;
                }
            }
            if (flags & 0x800000) {
                if (fn_80105BC0((u8 *)self + 0x1BC, 8) == 0) {
                    return 0;
                }
            }
            if (flags & 0x1000000) {
                unit = *(void **)((u8 *)self + 0x18C);
                if ((*(u16 *)((u8 *)unit + 0x3A) & 4) == 0) {
                    return 0;
                }
            }
            if (flags & 0x2000000) {
                if (fn_80105BC0((u8 *)self + 0x1BC, 0x4F) == 0) {
                    return 0;
                }
            }
            if (flags & 0x4000000) {
                if (fn_80105BC0((u8 *)self + 0x1BC, 0x56) == 0) {
                    return 0;
                }
            }
            if (flags & 0x8000000) {
                if (fn_80105BC0((u8 *)self + 0x1BC, 0x57) == 0) {
                    return 0;
                }
            }
            if (flags & 0x10000000) {
                if (fn_80105BC0((u8 *)self + 0x1BC, 0x58) == 0) {
                    return 0;
                }
            }
            if (flags & 0x20000000) {
                if (fn_80105BC0((u8 *)self + 0x1BC, 0x5D) == 0) {
                    return 0;
                }
            }
            if (flags & 0x40000000) {
                if (fn_80105BC0((u8 *)self + 0x1BC, 0x5E) != 0) {
                    return 0;
                }
            }
            if (flags & 0x80000) {
                if (fn_80105BC0((u8 *)self + 0x1BC, 7) == 0) {
                    return 0;
                }
            }
            if (flags & 0x100000) {
                unit = *(void **)((u8 *)self + 0x18C);
                if (unit != fn_80019E48(lbl_8026CFE8 + 0x39)) {
                    return 0;
                }
            }
        }
        type = *((u8 *)other + 0x12);
        switch (type) {
        case 8:
            return fn_80105BC0((u8 *)self + 0x1BC, 0x22);
        case 9:
            return fn_80105BC0((u8 *)self + 0x1BC, 9);
        case 7:
            if (fn_80105BC0((u8 *)self + 0x1BC, 0x23) == 0) {
                return 0;
            }
            break;
        case 11:
            return 1;
        case 10:
            return 0;
        }
    }

    type = *((u8 *)other + 0x12);
    result = ((u8 *)self)[type + 0x20C];

    if (type == 7) {
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
            goto clamp79;
        }
    }

    if ((*(u8 **)((u8 *)self + 0x18C))[type + 0x2C] != 0) {
        goto block_default;
    }

    switch (type) {
    case 0:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x24) != 0) {
            goto block_default;
        }
        result = 0;
        goto done;
    case 1:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x25) != 0) {
            goto block_default;
        }
        result = 0;
        goto done;
    case 2:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x26) != 0) {
            goto block_default;
        }
        result = 0;
        goto done;
    case 3:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x27) != 0) {
            goto block_default;
        }
        result = 0;
        goto done;
    case 7:
        if (fn_80105BC0((u8 *)self + 0x1BC, 0x28) != 0) {
            goto block_default;
        }
        result = 0;
        goto done;
    }

block_default:
    if (fn_80105BC0((u8 *)self + 0x1BC, 2) == 0) {
        goto clamp79;
    }
    if (result > 0xFB) {
        result = 0xFB;
    }
    goto done;

clamp79:
    if (result > 0x79) {
        result = 0x79;
    }
done:
    lim = *((u8 *)other + 0x16);
    lim = (u8)(lim + (lim == 0));
    if (result < lim) {
        return result;
    }
    return lim;
}

s32 fn_80094614(void* arg0, void* arg1) {
    s32 r5;
    s32 r7;

    r7 = *(s32*)((char*)arg1 + 0x3C);
    r5 = *(s32*)((char*)arg1 + 0x38); 
    
    if ((r7 & 0x200) || (r5 & 0)) {
        return fn_80105BC0((s32)arg0 + 0x1BC, 9) != 0;
    }
    
    if (!(((u8)((char*)arg0)[0x1A5] >> 4U) & 7)) {
        return 1;
    }
    
    if ((r7 & 2) || (r5 & 0)) {
        return 0;
    }
    
    if ((r7 & 4) || (r5 & 0)) {
        return 0;
    }
    
    if ((r7 & 0x40) || (r5 & 0)) {
        return 1;
    }
    
    return 1;
}

void fn_800946F0(s32 arg0) {
    s32 r30;
    Unk80037BD0 *temp_r3;

    r30 = 0;
    do {
        temp_r3 = (Unk80037BD0 *)fn_80037BD0(arg0, r30);
        if ((temp_r3 != NULL) && (temp_r3->unk0 != 0U)) {
            temp_r3->unk5_bit6 = 0;
        }
        r30 += 1;
    } while (r30 < 8);
}

s32 fn_80094768(void *arg0)
{
    extern void *fn_80037BD0(void *, s32);

    s32 i;
    u8 *entry;

    for (i = 0; i < 8; i++) {
        entry = (u8 *)fn_80037BD0(arg0, i);

        if (entry != 0) {
            if (*(u32 *)entry != 0) {
                if (entry[5] & 0x40) {
                    return 1;
                }
            }
        }
    }

    return 0;
}

void fn_800947E0(s32 arg0) {
    u32 sp40;
    u32 sp38;
    u32 sp30;
    u32 sp28;
    u32 sp20;
    u32 sp18;
    u32 sp10;
    u32 sp8;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r19;
    s32 var_r19_2;
    s32 var_r20_2;
    s32 var_r21_2;
    s32 var_r21_3;
    s32 var_r22;
    u32 *var_r20;
    u32 *var_r21;
    u32 *var_r23;
    u32 *var_r31;

    fn_8001C76C(&sp28);
    fn_8001C76C(&sp30);
    fn_8001C76C(&sp38);
    fn_8001C76C(&sp40);
    fn_8001C76C(&sp8);
    fn_8001C76C(&sp10);
    fn_8001C76C(&sp18);
    fn_8001C76C(&sp20);
    var_r20 = &sp28;
    var_r31 = &sp8;
    var_r23 = var_r20;
    var_r22 = arg0;
    var_r21 = var_r31;
    var_r19 = 0;
    do {
        fn_8001C4FC(var_r23, fn_80037BBC(arg0, var_r19));
        fn_80037BBC(arg0, var_r19);
        fn_8001D580();
        fn_8001C4FC(var_r21, var_r22 + 0x1EC);
        fn_8001D580(var_r22 + 0x1EC);
        var_r19 += 1;
        var_r22 += 8;
        var_r21 += 8;
        var_r23 += 8;
    } while (var_r19 < 4);
    var_r21_2 = 0;
    var_r19_2 = 0;
    do {
        if ((u32) *var_r20 != 0U) {
            temp_r3 = ((var_r19_2 * 8) & 0x7F8) + 0x1CC;
            var_r19_2 += 1;
            fn_8001C4FC(arg0 + temp_r3, var_r20);
        }
        var_r21_2 += 1;
        var_r20 += 8;
    } while (var_r21_2 < 4);
    var_r20_2 = 0;
    var_r21_3 = 0;
    do {
        if ((u32) *var_r31 != 0U) {
            temp_r3_2 = ((var_r21_3 * 8) & 0x7F8) + 0x1EC;
            var_r21_3 += 1;
            fn_8001C4FC(arg0 + temp_r3_2, var_r31);
        }
        var_r20_2 += 1;
        var_r31 += 8;
    } while (var_r20_2 < 4);
    fn_8001C5F8(&sp20, -1);
    fn_8001C5F8(&sp18, -1);
    fn_8001C5F8(&sp10, -1);
    fn_8001C5F8(&sp8, -1);
    fn_8001C5F8(&sp40, -1);
    fn_8001C5F8(&sp38, -1);
    fn_8001C5F8(&sp30, -1);
    fn_8001C5F8(&sp28, -1);
}

void fn_800949A4(void *arg0, s8 arg1) {
    void *fn_80037BBC(void);
    void fn_8001D580(void *);
    void fn_800947E0(void *);
    void *p;

    if (arg1 < 4) {
        fn_8001D580(fn_80037BBC());
        fn_800947E0(arg0);
        return;
    }
    p = (void *)(((arg1 - 4) * 8) + 0x1EC);
    fn_8001D580((void *)((s32)arg0 + (s32)p));
    fn_800947E0(arg0);
}

s32 fn_80094A08(s32 arg0) {
    u8 fn_8001D684();
    M2C_UNK fn_80037BD0();
    M2C_UNK fn_800947E0(s32);
    fn_80037BD0();
    if (fn_8001D684() != 0) {
        fn_800947E0(arg0);
        return 1;
    }
    return 0;
}

s32 fn_80094A54(s32 arg0, s32 arg1)
{
  M2C_UNK fn_8001C5F8(M2C_UNK *, M2C_UNK);
  M2C_UNK fn_8001C76C(M2C_UNK *);
  M2C_UNK *new_var;
  M2C_UNK fn_8001D780(M2C_UNK *, s32);
  s32 fn_80094ABC(s32, M2C_UNK *);
  M2C_UNK sp8;
  short temp_r31;
  fn_8001C76C(&sp8);
  fn_8001D780(&sp8, arg1);
  new_var = &sp8;
  temp_r31 = fn_80094ABC(arg0, new_var);
  fn_8001C5F8(&sp8, -1);
  return temp_r31;
}

s32 fn_80094C10(s32 arg0, void *arg1) {
    u64 *fn_8001CB64(void *);
    s8 fn_80037E00(s32);
    u8 fn_80093708(s32, u32);
    struct { u8 pad[5]; u8 bit7 : 1; u8 rest : 7; } *p;

    if (arg1 == NULL || *(u32 *)arg1 == 0) {
        return 0;
    }
    if ((*fn_8001CB64(arg1) & 1ULL) == 0) {
        return 0;
    }
    if (fn_80037E00(arg0) >= 0) {
        return 0;
    }
    if (fn_80093708(arg0, *(u32 *)arg1) == 0) {
        return 0;
    }
    p = arg1;
    p->bit7 = 1;
    return 1;
}

#pragma use_lmw_stmw off
#pragma optimization_level 2
void *fn_80094CDC(void *arg0, s32 arg1) {
    void **fn_80037BBC(void *, s32);
    u8 fn_800940B0(void *, void *);
    void *fn_8009542C(void *, s32);
    u8 fn_80105BC0(void *, s32);
    void **slot;
    void *obj;
    u8 ok;
    u8 result;
    u64 flags;
    s32 var_r29;
    s32 var_r30;
    void *entry;
    u8 *p;

    if (arg1 < 4) {
        if (fn_80105BC0((u8 *)arg0 + 0x1BC, 8) != 0) {
            return fn_80037BBC(arg0, 0);
        }
        var_r30 = 0;
        var_r29 = 0;
        do {
            slot = fn_80037BBC(arg0, var_r30);
            {
                u8 t = *((u8 *)slot + 5);
                var_r30 += 1;
                *((u8 *)slot + 5) = (u8)__rlwimi(t, var_r29, 7, 24, 24);
            }
        } while (var_r30 < 4);
        if (arg1 >= 0) {
            slot = fn_80037BBC(arg0, arg1);
            obj = *slot;
            result = 0;
            flags = *(u64 *)((u8 *)obj + 0x38);
            if ((flags & 1) == 0) {
            } else if (fn_800940B0(arg0, obj) == 0) {
                result = 0;
            } else {
                result = 1;
            }
            if (result == 0) {
                return NULL;
            }
        } else {
            var_r30 = 0;
            for (;;) {
                slot = fn_80037BBC(arg0, var_r30);
                obj = *slot;
                if (((u32)(-(s32)obj | (s32)obj) >> 31) == 0) {
                    return NULL;
                }
                result = 0;
                ok = 1;
                flags = *(u64 *)((u8 *)obj + 0x38);
                if ((flags & 1) == 0) {
                } else {
                    if (flags & 0x200) {
                        if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9) != 0) {
                            ok = 1;
                        } else {
                            ok = 0;
                        }
                    } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
                    } else if (flags & 2) {
                        ok = 0;
                    } else if (flags & 4) {
                        ok = 0;
                    } else if (flags & 0x40) {
                    }
                    if (ok == 0) {
                        result = 0;
                    } else if (fn_800940B0(arg0, obj) == 0) {
                        result = 0;
                    } else {
                        result = 1;
                    }
                }
                if (result != 0) {
                    break;
                }
                var_r30 += 1;
                if (var_r30 >= 4) {
                    return NULL;
                }
            }
        }
        {
            u8 t = *((u8 *)slot + 5);
            s32 one = 1;
            *((u8 *)slot + 5) = (u8)__rlwimi(t, one, 7, 24, 24);
        }
        return fn_8009542C(arg0, -1);
    }

    var_r29 = 0;
    {
        u8 t;
        t = *((u8 *)arg0 + 0x1F1);
        *((u8 *)arg0 + 0x1F1) = (u8)__rlwimi(t, var_r29, 7, 24, 24);
        t = *((u8 *)arg0 + 0x1F9);
        *((u8 *)arg0 + 0x1F9) = (u8)__rlwimi(t, var_r29, 7, 24, 24);
        t = *((u8 *)arg0 + 0x201);
        *((u8 *)arg0 + 0x201) = (u8)__rlwimi(t, var_r29, 7, 24, 24);
        t = *((u8 *)arg0 + 0x209);
        *((u8 *)arg0 + 0x209) = (u8)__rlwimi(t, var_r29, 7, 24, 24);
    }
    if (arg1 - 4 >= 0) {
        entry = (u8 *)arg0 + (((arg1 - 4) << 3) + 0x1EC);
        obj = *(void **)entry;
        flags = *(u64 *)((u8 *)obj + 0x38);
        if ((flags & 0x10) == 0) {
            result = 0;
        } else {
            result = fn_800940B0(arg0, obj);
        }
        if (result != 0) {
            u8 t = *((u8 *)entry + 5);
            s32 one = 1;
            *((u8 *)entry + 5) = (u8)__rlwimi(t, one, 7, 24, 24);
        } else {
            entry = NULL;
        }
        return entry;
    }
    p = arg0;
    var_r29 = 0;
    for (;;) {
        obj = *(void **)(p + 0x1EC);
        entry = p + 0x1EC;
        if (((u32)(-(s32)obj | (s32)obj) >> 31) != 0) {
            result = 0;
            flags = *(u64 *)((u8 *)obj + 0x38);
            if ((flags & 0x10) != 0) {
                result = fn_800940B0(arg0, obj);
            }
            if (result != 0) {
                u8 t = *((u8 *)entry + 5);
                s32 one = 1;
                *((u8 *)entry + 5) = (u8)__rlwimi(t, one, 7, 24, 24);
                return entry;
            }
        }
        var_r29 += 1;
        p += 8;
        if (var_r29 >= 4) {
            return NULL;
        }
    }
}
void fn_80095070(void* arg0, void* arg1, s32 arg2) {
    s32* r3 = (s32*)arg0;
    s32* r4 = (s32*)arg1;
    
    if (arg2 == 1) {
        s32 i;
        for (i = 0; i < 9; i++) {
            *(r3 + i) = *(r4 + i);
        }
    } else {
        s32 i;
        for (i = 0; i < 9; i++) {
            *(r3 + i) = 0;
        }
    }
}

#pragma optimization_level 2
void *fn_800951D0(void *arg0, s32 arg1) {
    void **fn_80037BBC(void *, s32);
    u8 fn_800940B0(void *, void *);
    void *fn_8009542C(void *, s32);
    u8 fn_80105BC0(void *, s32);
    void **slot;
    void *obj;
    u8 ok;
    u8 result;
    u64 flags;
    s32 var_r29;
    s32 var_r30;

    if (fn_80105BC0((u8 *)arg0 + 0x1BC, 8) != 0) {
        return fn_80037BBC(arg0, 0);
    }
    var_r30 = 0;
    var_r29 = 0;
    do {
        slot = fn_80037BBC(arg0, var_r30);
        {
            u8 t = *((u8 *)slot + 5);
            var_r30 += 1;
            *((u8 *)slot + 5) = (u8)__rlwimi(t, var_r29, 7, 24, 24);
        }
    } while (var_r30 < 4);
    if (arg1 >= 0) {
        slot = fn_80037BBC(arg0, arg1);
        obj = *slot;
        result = 0;
        flags = *(u64 *)((u8 *)obj + 0x38);
        if (flags & 1) {
            if (fn_800940B0(arg0, obj) == 0) {
                result = 0;
            } else {
                result = 1;
            }
        }
        if (result == 0) {
            return NULL;
        }
    } else {
        var_r29 = 0;
        for (;;) {
            slot = fn_80037BBC(arg0, var_r29);
            obj = *slot;
            if (obj == NULL) {
                return NULL;
            }
            result = 0;
            ok = 1;
            flags = *(u64 *)((u8 *)obj + 0x38);
            if (flags & 1) {
                if (flags & 0x200) {
                    if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9) != 0) {
                        ok = 1;
                    } else {
                        ok = 0;
                    }
                } else if (((*(u8 *)((u8 *)arg0 + 0x1A5) >> 4) & 7) == 0) {
                } else if (flags & 2) {
                    ok = result;
                } else if (flags & 4) {
                    ok = result;
                } else if (flags & 0x40) {
                }
                if (ok == 0) {
                    result = 0;
                } else if (fn_800940B0(arg0, obj) == 0) {
                    result = 0;
                } else {
                    result = 1;
                }
            }
            if (result != 0) {
                break;
            }
            var_r29 += 1;
            if (var_r29 >= 4) {
                return NULL;
            }
        }
    }
    {
        u8 t = *((u8 *)slot + 5);
        s32 one = 1;
        *((u8 *)slot + 5) = (u8)__rlwimi(t, one, 7, 24, 24);
    }
    return fn_8009542C(arg0, -1);
}
