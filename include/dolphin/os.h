#include <common.h>

#ifdef __cplusplus
extern "C" {
#endif

void OSDisableInterrupts(void);
void OSRestoreInterrupts(void);
void* __OSLockSramEx(void);
void __OSUnlockSramEx(s32);
s32 OSGetArenaHi(void);
s32 OSGetArenaLo(void);
void OSSetArenaHi(s32);
void OSSetArenaLo(s32);

#ifdef __cplusplus
}
#endif
