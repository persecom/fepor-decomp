/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"
  extern u8 lbl_8026D8D8[];
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
  
  extern u8 lbl_80289EB8[16];
  
  extern f32 lbl_803697E0;
  extern f32 lbl_803697E4;
  
  #pragma scheduling reset
  
  void fn_8009EA14(void) {
      void fn_801E2594(void *);
      extern s32 lbl_803682F0;
      fn_801E2594(&lbl_803682F0);
  }
  
  void fn_8009EA38(s32 arg0) {
      s32 fn_800056CC(const char *, ...);
      s32 fn_800EB774();
      void fn_801E047C(void *, s32);
      
      if (fn_800EB774() != 0) {
          fn_800056CC((const char *)(lbl_8026D8D8 + 0x178));
          return;
      }
      fn_801E047C(&lbl_803682F0, arg0);
  }
  
  void fn_8009EA90(void) {
      void fn_801E2594(void *);
      extern s32 lbl_803682F0;
      fn_801E2594(&lbl_803682F0);
  }
  
  void fn_8009EB7C(void) {
      void fn_801E2594(void *);
      extern s32 lbl_803682F0;
      fn_801E2594(&lbl_803682F0);
  }

  void fn_8009EBA0(s32 arg0) {
      extern s32 lbl_803682F0;
      s32 fn_800056CC(const char *, ...);
      s32 fn_800EB774(void);
      void fn_801E1018(void *, u8, s32, s8);
      s8 v;
  
      if (fn_800EB774() != 0) {
          fn_800056CC((const char *)(lbl_8026D8D8 + 0x178));
          return;
      }
      v = (s8)(s32)*(f32 *)(lbl_80330708 + 0x524);
      fn_801E1018(&lbl_803682F0, (u8)(v % 5), arg0, v);
  }

  
  void fn_8009EC38(void) {
      void fn_801E2594(void *);
      extern s32 lbl_803682F0;
      fn_801E2594(&lbl_803682F0);
  }
  
void fn_8009EC5C(s32 arg0) {
    extern s32 lbl_803682F0;
    s32 fn_800056CC(const char *, ...);
    s32 fn_800EB774(void);
    void fn_801E2014(void *, u8, s32, s8);
    s8 v;

    if (fn_800EB774() != 0) {
        fn_800056CC((const char *)(lbl_8026D8D8 + 0x178));
        return;
    }
    v = (s8)(s32)*(f32 *)(lbl_80330708 + 0x524);
    fn_801E2014(&lbl_803682F0, (u8)(v % 5), arg0, v);
}

