/* Functions from 0x8022CD68 to 0x80267A7C, found by decomp-toolkit. */
#include "common.h"

typedef struct AudioGroupSlot { void *node; s32 id; void *data; } AudioGroupSlot;
typedef struct AudioGroupState { u8 pad[8]; s16 count; u16 padA; AudioGroupSlot slots[128]; } AudioGroupState;
typedef struct SynthMessageSlots { u8 pad[0xAC]; u32 slots[32]; } SynthMessageSlots;
typedef struct SynthMessageQueue { u8 pad[0x444]; u32 slots[4]; } SynthMessageQueue;
typedef struct SynthMsgSlot { u8 pad[0x444]; u32 value; } SynthMsgSlot;
typedef struct SampleKey { s32 data; u16 id; u16 type; u16 ref; u16 pad; } SampleKey;
typedef struct SoundKeyEntry { u16 id; s8 key; u8 pan; s16 volume; u16 pad; } SoundKeyEntry;
typedef struct AudioTableRange { u16 count; u16 start; } AudioTableRange;
typedef struct AudioTableEntry { s32 data; u16 id; u16 ref; } AudioTableEntry;
typedef struct SynthVmState { u8 pad[0xAC]; s32 regs[16]; } SynthVmState;
typedef struct SynthInsn {
    u32 flagA : 8;
    u32 storeReg : 8;
    u32 storeMode : 8;
    u32 pad0 : 8;
    union {
        struct { u32 pad1 : 8; s32 imm : 16; u32 regA : 8; } f;
        struct { u32 pad1 : 8; u32 regB : 8; u32 modeB : 8; u32 regA : 8; } b;
    } u;
} SynthInsn;
static inline u8 *FindAudioResource(void *data, u16 id, u32 offset) {
    u8 *node;
    if (data == NULL) return NULL;
    node = (u8 *)data + *(u32 *)((u8 *)data + offset);
    while (*(u32 *)node != 0xFFFFFFFF) {
        if (*(u16 *)(node + 4) == id) return node;
        node += *(u32 *)node;
    }
    return NULL;
}
typedef struct SynthStateLink { u8 pad[0xEC]; s32 next; u8 padF0[0x458 - 0xF0]; } SynthStateLink;
typedef s32 Fn80256FF0Arg;
typedef struct ThpDecodeState { f32 tables[3][64]; u8 pad[0x398]; u16 count; u16 pad69A; u8 *cursor; u32 pad6A0; u32 bits; } ThpDecodeState;
static inline u32 ThpReadByte(void) {
extern ThpDecodeState *lbl_80368950;
u8 *p=lbl_80368950->cursor;
lbl_80368950->cursor=p+1;
return *p;
}
static inline u16 ThpReadWord(void) {
extern ThpDecodeState *lbl_80368950;
u8 **cursor=&lbl_80368950->cursor;
u8 *p=*cursor;
u16 value=(p[0]<<8)|p[1];
*cursor=p+2;
return value;
}
static inline u8 SynthAllocateStream(void) {
extern u8 lbl_8035A6D0[];
u8 i;
for(i=0;i<lbl_8035A6D0[0];i++){
if(lbl_8035A6D0[i*0x2c+8]==0){
u8 *p=lbl_8035A6D0+i*0x2c;
p[8]=1;*(u32*)(p+12)=0;return i;
}
}
return 255;
}
typedef struct SynthFreeNode { u8 prev, next; u16 active; } SynthFreeNode;

extern u16 lbl_80366F28;
extern char lbl_80282AE8[];
extern u8 lbl_80368978;
extern u8 lbl_803689B0;
extern u8 lbl_8034C110[]; char lbl_80282B20[];
extern u8 lbl_8034C110[];
extern f64 lbl_8036C368;
extern u16 Ecb_8033E188[192];u16 *D_80256B30;
extern s32 lbl_803687F8;
extern f32 lbl_8036C374;
extern s32 lbl_80368A28;
extern s32 lbl_80368A2C;
extern s32 lbl_80368A30;
extern s32 lbl_80368A34;
extern u32* lbl_80368A38;
extern void (*lbl_80368B34)(s16);
extern f32 lbl_8034C324[];
extern s32 D_80368AD0;
extern s32 lbl_80368B0C;
extern void (*__atexit_funcs[])(void);
extern s32 __atexit_curr_func;
extern void (*__console_exit)(void);
extern s32 __aborting;
extern void (*__stdio_exit)(void);
extern void (**_dtors)(void);
extern void _ExitProcess(void);
extern s16 lbl_802A1E90[];
extern u8 lbl_80368AAE;
extern u8 lbl_80368AAD;
extern u16 lbl_8035BF18[];
extern u32 lbl_8035C918[];

u32 fn_8026367C(void);
u16 fn_8025FC64(u8 arg0, u8 arg1, u8 arg2);
s32 fn_8022C568(f32 arg0);
void fn_80261934(u8 arg0, void *arg1, s32 arg2);
void fn_8026146C(s32 *);
void fn_8025FFC8(void *arg0, u8 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5);
s32 fn_80255FB0();
extern void func_80013934(s32 arg0);
extern s32 lbl_803689A8;
extern u16 lbl_803548B8;
extern u16 lbl_80368A08;
extern u16 lbl_8035A510[];
extern u16 lbl_8035D118[256];
extern u16 lbl_80361A98[4288];
extern f32 lbl_802831BC[];
extern f64 lbl_8036C348;
extern u16 lbl_803670C0;
extern u32 lbl_803670C8;
extern u32 lbl_800000F8;

#include "musyx/select_source.h"

typedef struct StreamQueueNode StreamQueueNode;
struct StreamQueueNode { StreamQueueNode *next, *prev; u32 time; };
typedef struct StreamTempo { u32 *start, *cursor; u32 value; u32 timing[4]; StreamQueueNode *head; u32 buffers[4]; u8 active, pad31; u16 scale, count; } StreamTempo;
static inline void StreamQueueInsert(StreamQueueNode **head, StreamQueueNode *node) {
StreamQueueNode *prev=0,*cur=*head;
while(cur){if(cur->time>node->time){node->next=cur;node->prev=prev;if(prev)prev->next=node;else *head=node;cur->prev=node;return;}prev=cur;cur=cur->next;}
node->prev=prev;if(prev)prev->next=node;else *head=node;node->next=0;
}
typedef struct StreamMsg {
    u32 unk0;   /* 0x0 */
    u32 unk4;   /* 0x4 */
    u32 unk8;   /* 0x8 */
    void *unkC; /* 0xC */
    void *unk10; /* 0x10 */
    u8 unk14;   /* 0x14 */
    u8 unk15;   /* 0x15 */
    u8 pad16[2];
} StreamMsg; /* 0x18 */

typedef struct StreamSeqEvent {
    u32 unk0; /* 0x0 */
    u8 pad4[4];
    u16 unk8; /* 0x8 */
    u16 unkA; /* 0xA */
} StreamSeqEvent; /* 0xC */

typedef struct StreamSeqChan {
    u32 unk0; /* 0x0 */
    StreamSeqEvent *unk4; /* 0x4 */
} StreamSeqChan; /* 0x8 */

typedef struct StreamChannel {
    u32 unk0; /* 0x0 */
    u32 unk4; /* 0x4 */
    u8 *unk8; /* 0x8 */
    u8 padC[0xC];
    u32 unk18; /* 0x18 */
    u8 pad1C[8];
    u32 unk24; /* 0x24 */
    u8 pad28[4];
} StreamChannel; /* 0x2C */

typedef struct StreamVoice {
    u8 unk0;
    u8 pad1[0x37];
} StreamVoice;

typedef struct StreamState {
    u8 pad0[0x124];
    StreamSeqChan seqChans[72]; /* 0x124 */
    StreamChannel channels[67]; /* 0x364 */
    u8 padEE8[0x1C];
    StreamMsg msgs[64]; /* 0xF04 */
    u8 *voices; /* 0x1504 */
    u8 pad1508[0x36];
    u8 unk153E; /* 0x153E */
    StreamVoice voiceFlags[1];
} StreamState;

extern StreamState *lbl_80368968;

typedef struct Voice {
    u8 pad0[0x110];
    u64 flags;
    u8 pad118[0x5C];
    s32 unk174;
    s32 unk178;
    s32 unk17C;
    s32 unk180;
    s32 unk184;
    s32 unk188;
    u32 unk18C;
    u32 unk190;
} Voice;

typedef struct VidList {
    struct VidList *next; /* 0x0 */
    struct VidList *prev; /* 0x4 */
    u32 vid;              /* 0x8 */
    u32 root;             /* 0xC */
} VidList;

extern u32 lbl_80368A48;

static u32 GetNewVid(void) {
    u32 vid;

    do {
        vid = lbl_80368A48++;
    } while (vid == 0xFFFFFFFF);
    return vid;
}

typedef struct GroupData {
    u8 pad0[4];
    u16 id;     /* 0x04 */
    u16 type;   /* 0x06 */
    u8 pad8[0x1C - 0x8];
    u32 unk1C;  /* 0x1C */
    u32 unk20;  /* 0x20 */
    u32 unk24;  /* 0x24 */
} GroupData;

typedef struct GroupEntry {
    GroupData *data; /* 0x0 */
    u32 unk4;        /* 0x4 */
    u32 base;        /* 0x8 */
} GroupEntry;

typedef struct GroupNode {
    struct GroupNode *next; /* 0x0 */
    u32 unk4;               /* 0x4 */
    s16 count;              /* 0x8 */
    GroupEntry entries[1];  /* 0xC */
} GroupNode;

typedef struct GroupItem {
    u16 id;
    u8 pad2[0x52];
} GroupItem;

typedef struct SynthVoice {
    struct SynthVoice *next; /* 0x000 */
    struct SynthVoice *prev; /* 0x004 */
    u8 state;                /* 0x008 */
    u8 id;                   /* 0x009 */
    u16 unkA;                /* 0x00A */
    u32 vid;                 /* 0x00C */
    u8 pad10[0xF4 - 0x10];
    u32 unkF4;               /* 0x0F4 */
    struct VidList *unkF8;   /* 0x0F8 */
    struct VidList *unkFC;   /* 0x0FC */
    u8 pad100[0x11C - 0x100];
    s32 unk11C;              /* 0x11C */
    s32 unk120;              /* 0x120 */
    u8 pad124[0xE64 - 0x124];
    VidList *lists[2];
    VidList *listE6C;
    u8 padE70[0xEF0 - 0xE70];
    s32 unkEF0;              /* 0xEF0 */
    s32 unkEF4;              /* 0xEF4 */
    u16 unkEF8;              /* 0xEF8 */
    u8 unkEFA;               /* 0xEFA */
    u8 padEFB[0x1508 - 0xEFB];
    struct {
        u8 pad0[0x32];
        u16 unk32;
        u8 pad34[4];
    } unk1508[16];           /* 0x1508 */
} SynthVoice;

typedef struct {
    char gpr;
    char fpr;
    char reserved[2];
    char *input_arg_area;
    char *reg_save_area;
} __va_list;
typedef __va_list va_list[1];

typedef struct {
    char *buffer;
    s32 length;
    s32 position;
} __OutStr;

s32 __pformatter(s32 (*)(void *, const char *, u32), void *, const char *, va_list);
s32 fn_80232220(void *, const char *, u32);

// The structure being used in functions in this file - assumed based on offset 0xF4
typedef struct {
    u8 unkF4;  // This is likely the member accessed in function with 0xF4 offset 
} SStructType;

extern s32 fn_802314D8(s32, s32, s32);

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern f64 lbl_8036C148;

void fn_8023C53C(void) {

}

void fn_8023C540(void) {

}

s32 fn_8023C544(void) {
    return 0;
}

s32 fn_8023C54C(void) {
    return 0;
}

s32 fn_8023C554(void) {
    return 0;
}

void fn_8023C55C(void) {

}

void fn_8023C560(void) {

}

s32 AMC_IsStub(void) {
    return 1;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
#pragma inline_depth(0)
u8 fn_8023C56C(u8 *arg0,u32 arg1,u32 arg2,u32 arg3,u32 arg4) {
extern u8 *lbl_80368950;extern s32 lbl_8036894C,lbl_80368954;
s32 PPCMfhid2(void);void fn_80205198(void*,u32);
s32 fn_8023C7F4(void);s32 fn_8023C930(void);
u8 fn_8023CA4C(void);u8 fn_8023CE08(void);
void fn_8023D2FC(void);void fn_8023C7B0(void);void fn_8023D59C(u32,u32,u32);
u8 done;u32 result;u8 marker;
u8 **cursor;
if(!arg0) goto noInput;
if(!arg1 || !arg2 || !arg3) goto noOutput;
if(!arg4) goto noWork;
if(!(PPCMfhid2()&0x10000000)) goto badHid;
if(!lbl_80368954) goto notInit;
lbl_8036894C=arg4;
lbl_80368950=(u8*)((lbl_8036894C+31)&~31);
lbl_8036894C=(u32)lbl_80368950;lbl_8036894C+=0x6bc;
fn_80205198(lbl_80368950,0x6bc);
done=0;
*(u32*)(lbl_80368950+0x6a4)=0x21;
*(u16*)(lbl_80368950+0x698)=0;
*(u8**)(lbl_80368950+0x69c)=arg0;
do{
if(*(*(u8**)(lbl_80368950+0x69c))++!=255) goto badPrefix;
while(**(cursor=(u8**)(lbl_80368950+0x69c))==255) (*cursor)++;
marker=*(*cursor)++;
if(marker<=0xd7U){
if(marker==0xc4){result=fn_8023CE08();if((u8)result) goto error;}
else if(marker==0xc0){result=fn_8023C7F4();if((u8)result) goto error;}
else goto badMarker;
}else if(marker>=0xd8U && marker<=0xdfU){
if(marker==0xdd)fn_8023D2FC();
else if(marker==0xdb){result=fn_8023CA4C();if((u8)result)goto error;}
else if(marker==0xda){result=fn_8023C930();if((u8)result)goto error;done=1;}
else if(marker!=0xd8) goto badMarker;
}else if(marker>=0xe0U){
if((marker>=0xe0U && marker<=0xefU)||marker==0xfe){
u8 *p=*(u8**)(lbl_80368950+0x69c);
*(u8**)(lbl_80368950+0x69c)=p+((p[0]<<8)|p[1]);
}else goto badMarker;
}
}while(!done);
fn_8023C7B0();
fn_8023D59C(arg1,arg2,arg3);
return 0;
noInput:return 0x19;
noOutput:return 0x1b;
noWork:return 0x1a;
badMarker:return 11;
badPrefix:return 3;
error:return (u8)result;
badHid:return 0x1c;
notInit:return 0x1d;
}
#pragma inline_depth(8)
#pragma global_optimizer reset
#pragma use_lmw_stmw reset

void fn_8023C7B0(void) {
    extern M2C_UNK lbl_8033E578;
    extern s32 lbl_8036894C;
    s32 temp_r6;

    temp_r6 = (lbl_8036894C + 0x1F) & 0xFFFFFFE0;
    M2C_FIELD(&lbl_8033E578, s32 *, 0) = temp_r6;
    M2C_FIELD(&lbl_8033E578, s32 *, 4) = (s32) (temp_r6 + 0x80);
    M2C_FIELD(&lbl_8033E578, s32 *, 8) = (s32) (temp_r6 + 0x100);
    M2C_FIELD(&lbl_8033E578, s32 *, 0xC) = (s32) (temp_r6 + 0x180);
    M2C_FIELD(&lbl_8033E578, s32 *, 0x10) = (s32) (temp_r6 + 0x200);
    M2C_FIELD(&lbl_8033E578, s32 *, 0x14) = (s32) (temp_r6 + 0x280);
}

s32 fn_8023C7F4(void) {
    return 0;
}

s32 fn_8023C930(void) {
    return 0;
}

#pragma opt_strength_reduction off
#pragma use_lmw_stmw on
s32 fn_8023CA4C(void) {
extern u8 lbl_80282FD8[];
extern ThpDecodeState *lbl_80368950;
f32 table[64];
u16 size; u16 i; u16 row; u32 id; u8 *p; f64 *scale;
size=ThpReadWord()-2;
do {
id=ThpReadByte();
for(i=0;i<64;i++) table[lbl_80282FD8[i]]=(f32)(u32)ThpReadByte();
scale=(f64 *)(lbl_80282FD8+0x50);
for(row=0,i=0;row<8;row++,scale++) {
lbl_80368950->tables[id][(u16)(i+0)]=((f64 *)(lbl_80282FD8+0x50))[0]*((f64)table[(u16)(i+0)]* *scale);
lbl_80368950->tables[id][(u16)(i+1)]=((f64 *)(lbl_80282FD8+0x50))[1]*((f64)table[(u16)(i+1)]* *scale);
lbl_80368950->tables[id][(u16)(i+2)]=((f64 *)(lbl_80282FD8+0x50))[2]*((f64)table[(u16)(i+2)]* *scale);
lbl_80368950->tables[id][(u16)(i+3)]=((f64 *)(lbl_80282FD8+0x50))[3]*((f64)table[(u16)(i+3)]* *scale);
lbl_80368950->tables[id][(u16)(i+4)]=((f64 *)(lbl_80282FD8+0x50))[4]*((f64)table[(u16)(i+4)]* *scale);
lbl_80368950->tables[id][(u16)(i+5)]=((f64 *)(lbl_80282FD8+0x50))[5]*((f64)table[(u16)(i+5)]* *scale);
lbl_80368950->tables[id][(u16)(i+6)]=((f64 *)(lbl_80282FD8+0x50))[6]*((f64)table[(u16)(i+6)]* *scale);
lbl_80368950->tables[id][(u16)(i+7)]=((f64 *)(lbl_80282FD8+0x50))[7]*((f64)table[(u16)(i+7)]* *scale);
i+=8;
}
size-=65;
} while(size);
return 0;
}
#pragma use_lmw_stmw off
#pragma opt_strength_reduction on
void fn_8023CFE8(void)
{
    extern u32 lbl_803688E4;
    extern u32 lbl_803688E8;

    u8 *counts;
    u8 *output;
    s32 value;
    s32 index;
    s32 count;
    s32 i;

    counts = (u8 *)lbl_803688E4;
    count = 0;

    for (value = 1; value <= 16; value++) {
        index = counts[value - 1];

        for (i = 0; i < index; i++) {
            output = (u8 *)lbl_803688E8;
            output[count] = (u8)value;
            count++;
        }
    }

    output = (u8 *)lbl_803688E8;
    output[count] = 0;
}

void fn_8023D0D8(void)
{
    extern u8 *lbl_803688E8;
    extern u16 *lbl_803688EC;

    u32 index;
    u32 count;
    u32 value;
    u32 current;
    u32 shift;

    index = 0;
    count = 0;
    current = lbl_803688E8[0];
    shift = 1;

    while (lbl_803688E8[index] != 0) {
        value = lbl_803688E8[index];

        if (current == value) {
            lbl_803688EC[index] = count;
            index++;
            count++;
        } else {
            count <<= shift;
            current++;
        }
    }
}

void fn_8023D2FC(void) {
    extern u16 *lbl_80368950;
    
    u16* ptr = lbl_80368950;
    u16 temp_r3 = ptr[0x1A6];
    ptr[0x1A6] = temp_r3 + 2;
    ptr[0x1A7] = (u16)((ptr[temp_r3+1] & 0xFF) << 8 | (ptr[temp_r3] & 0xFF00));
    ptr[0x1A6] = temp_r3 + 2;
    ptr[0x1A9] = ptr[0x1A7];
}

#pragma use_lmw_stmw on
void fn_8023D350(void)
{
    extern u8 *lbl_80368950;
    extern u8 *lbl_80368840;
    extern u8 *lbl_80368860;
    extern u8 *lbl_80368880;
    extern u8 *lbl_803688A0;
    extern u8 *lbl_803688C0;
    extern u8 *lbl_803688E0;

    u32 j;
    u8 *base;
    u8 *ptr;
    u32 *pBit;
    u32 bitpos;
    u32 low;
    u8 *aligned;
    u32 i;
    u32 off;
    u32 ctr;
    u32 idx;
    u32 slot;
    u8 *p;
    u8 *q;
    u8 *table;
    s32 code;
    u32 w340;
    u32 w390;
    u8 b682, b688, b68e, b687, b68d, b681;
    u32 t681, t687, t68d, t682, t688, t68e;

    base = lbl_80368950;
    ptr = *(u8 **)(base + 0x69c);
    pBit = (u32 *)(base + 0x6a4);
    bitpos = *pBit;
    aligned = (u8 *)((u32)ptr & ~3);
    low = (u32)ptr & 3;
    if (bitpos != 0x21) {
        *pBit = bitpos - ((3 - low) * 8);
    } else {
        *pBit = (low * 8) + 1;
    }

    i = 0;
    off = 0;
    *(u8 **)(lbl_80368950 + 0x69c) = aligned;
    *(u32 *)(lbl_80368950 + 0x6a0) = *(u32 *)aligned;

    do {
        if (lbl_80368950[0x6a8] & (1 << i)) {
            for (ctr = 0x10, slot = off, idx = 0; ctr != 0; ctr--) {
                lbl_80368950[off + idx + 0x300] = 0xFF;
                for (j = 0; j < 5; j++) {
                    p = (u8 *)(off + (u32)lbl_80368950);
                    q = p + (j * 4);
                    code = (s32)(idx >> (4 - j));
                    if (code <= *(s32 *)(q + 0x348)) {
                        w340 = *(u32 *)(p + 0x340);
                        w390 = *(u32 *)(q + 0x390);
                        table = (u8 *)w390 + w340;
                        lbl_80368950[slot + 0x300] = table[code];
                        lbl_80368950[slot + 0x320] = j + 1;
                        j = 0x63;
                    }
                }
                idx += 1;
                lbl_80368950[off + idx + 0x300] = 0xFF;
                j = 0;
                slot += 1;
                for (; j < 5; j++) {
                    p = (u8 *)(off + (u32)lbl_80368950);
                    q = p + (j * 4);
                    code = (s32)(idx >> (4 - j));
                    if (code <= *(s32 *)(q + 0x348)) {
                        w340 = *(u32 *)(p + 0x340);
                        w390 = *(u32 *)(q + 0x390);
                        table = (u8 *)w390 + w340;
                        lbl_80368950[slot + 0x300] = table[code];
                        lbl_80368950[slot + 0x320] = j + 1;
                        j = 0x63;
                    }
                }
                slot += 1;
                idx += 1;
            }
        }
        i += 1;
        off += 0xe0;
    } while (i < 4);

    base = lbl_80368950;
    b682 = base[0x682];
    b688 = base[0x688];
    b68e = base[0x68e];
    b687 = base[0x687];
    b68d = base[0x68d];
    b681 = base[0x681];

    t682 = (b682 << 1) + 1;
    t688 = (b688 << 1) + 1;
    t68e = (b68e << 1) + 1;
    t687 = b687 << 1;
    t68d = b68d << 1;
    t681 = b681 << 1;

    t681 *= 0xe0;
    t687 *= 0xe0;
    t68d *= 0xe0;
    t682 *= 0xe0;
    t688 *= 0xe0;
    t68e *= 0xe0;

    t681 += 0x300;
    t687 += 0x300;
    t68d += 0x300;
    t682 += 0x300;
    t688 += 0x300;
    t68e += 0x300;

    lbl_80368840 = base + t681;
    lbl_80368860 = base + t687;
    lbl_80368880 = base + t68d;
    lbl_803688A0 = base + t682;
    lbl_803688C0 = base + t688;
    lbl_803688E0 = base + t68e;
}
#pragma use_lmw_stmw reset

void fn_8023D59C(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8023D350(M2C_UNK, s32, void *);
    M2C_UNK fn_8023D6A8();
    M2C_UNK fn_8023F130();
    M2C_UNK fn_80240BBC();
    extern s32 lbl_80368944;
    extern s32 lbl_80368948;
    extern void *lbl_80368950;
    s32 temp_r4;
    u16 temp_r30;
    u16 var_r31;

    M2C_FIELD(lbl_80368950, s32 *, 0x6B0) = arg0;
    M2C_FIELD(lbl_80368950, s32 *, 0x6B4) = arg1;
    M2C_FIELD(lbl_80368950, s32 *, 0x6B8) = arg2;
    var_r31 = M2C_FIELD(lbl_80368950, u16 *, 0x698);
    temp_r30 = M2C_FIELD(lbl_80368950, u16 *, 0x694);
    temp_r4 = M2C_ERROR(/* unknown instruction: mfspr $r4, GQR5 */);
    lbl_80368944 = temp_r4;
    lbl_80368948 = M2C_ERROR(/* unknown instruction: mfspr $r0, GQR6 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR5, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR6, $r3 */);
    fn_8023D350(0x3D043D04, temp_r4, lbl_80368950);
    if (((u16) M2C_FIELD(lbl_80368950, u16 *, 0x692) == 0x200) && (temp_r30 == 0x1C0)) {
loop_4:
        if (var_r31 < temp_r30) {
            fn_8023D6A8();
            var_r31 += 0x10;
            goto loop_4;
        }
    } else if (((u16) M2C_FIELD(lbl_80368950, u16 *, 0x692) == 0x280) && (temp_r30 == 0x1E0)) {
loop_10:
        if (var_r31 < temp_r30) {
            fn_8023F130();
            var_r31 += 0x10;
            goto loop_10;
        }
    } else {
loop_14:
        if (var_r31 < temp_r30) {
            fn_80240BBC();
            var_r31 += 0x10;
            goto loop_14;
        }
    }
    M2C_ERROR(/* unknown instruction: mtspr GQR5, $r4 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR6, $r0 */);
}

void fn_8023D6A8(void) {
    extern u8 lbl_8033E460[];
    extern f32 lbl_8036C198;
    extern f32 lbl_8036C19C;
    extern f32 lbl_8036C1A0;
    extern f32 lbl_8036C1A4;
    extern f32 lbl_8036C1A8;
    extern void *lbl_80368950;
    extern void *lbl_80368900;
    extern u32 lbl_80368920;
    extern void *lbl_80368940;
    void fn_8020543C(s32);
    void fn_80242668(void *, void *);
    void fn_80242CE4(void *, void *);
    void fn_8024338C(void *, void *);
    u8 *buf;
    u8 i;
    f32 c0, c1, c2, c3, c4;
    void *src;

    buf = lbl_8033E460;
    fn_8020543C(3);
    c0 = lbl_8036C198;
    c1 = lbl_8036C19C;
    c2 = lbl_8036C1A0;
    c3 = lbl_8036C1A4;
    c4 = lbl_8036C1A8;
    i = 0;
    do {
        fn_80242668(lbl_80368950, *(void **)(buf + 0x118));
        fn_80242668(lbl_80368950, *(void **)(buf + 0x11C));
        fn_80242668(lbl_80368950, *(void **)(buf + 0x120));
        fn_80242668(lbl_80368950, *(void **)(buf + 0x124));
        fn_80242CE4(lbl_80368950, *(void **)(buf + 0x128));
        fn_8024338C(lbl_80368950, *(void **)(buf + 0x12C));
        lbl_80368900 = *(void **)(buf + 0x100);
        lbl_80368920 = 0x200;
        lbl_80368940 = (u8 *)lbl_80368950 + (*(u8 *)((u8 *)lbl_80368950 + 0x680) << 8);
        /* PS decode body omitted — needs paired-single/GQR */
        (void)c0; (void)c1; (void)c2; (void)c3; (void)c4;
        (void)src;
        i++;
    } while (i < 2);
}

void fn_8023F130(void) {
    extern u8 lbl_8033E460[];
    void fn_8020543C(s32);
    fn_8020543C(3);
    (void)lbl_8033E460;
}

void fn_80240BBC(void) {
    void fn_8020543C(s32);
    fn_8020543C(3);
}

void fn_80242668(void *arg0, s16 *arg1) {
    extern u8 *lbl_80368840;
    extern u8 *lbl_803688A0;
    extern u8 lbl_80282FD8[];

    u8 *tbl;
    u8 *lens;
    s32 bitpos;
    u32 bitbuf;
    s32 code;
    s32 n;
    s32 val;
    s32 i;
    s32 run;
    s32 bits;
    u32 x;
    s32 t;
    u8 *p;
    s32 lim;
    u32 *wp;

    __dcbz(arg1, 0);
    tbl = lbl_80368840;
    lens = tbl + 0x20;
    bitpos = *(s32 *)((u8 *)arg0 + 0x6A4);
    bitbuf = *(u32 *)((u8 *)arg0 + 0x6A0);
    t = bitpos + 4;
    code = (s32)((bitbuf << (t & 31)) | (bitbuf >> ((32 - (t & 31)) & 31))) & 0x1F;
    if (bitpos <= 0x1C) {
        n = tbl[code];
        if (n != 0xFF) {
            *(s32 *)((u8 *)arg0 + 0x6A4) = bitpos + lens[code];
            val = n;
        } else {
            p = tbl + 0x44 + 0x14;
            bitpos += 5;
            n = 5;
            code <<= 1;
            for (;;) {
                if (bitpos == 0x21) {
                    wp = *(u32 **)((u8 *)arg0 + 0x69C);
                    bitpos = 1;
                    wp++;
                    bitbuf = *wp;
                    p += 4;
                    lim = *(s32 *)p;
                    *(u32 **)((u8 *)arg0 + 0x69C) = wp;
                    code = (code & ~1) | (bitbuf >> 31);
                    *(u32 *)((u8 *)arg0 + 0x6A0) = bitbuf;
                    for (;;) {
                        bitpos++;
                        n++;
                        if (code <= lim)
                            break;
                        p += 4;
                        lim = *(s32 *)p;
                        code = (code * 2) | ((s32)(bitbuf << (bitpos & 31)) >> 31);
                    }
                    break;
                }
                p += 4;
                lim = *(s32 *)p;
                code |= (s32)(bitbuf << (bitpos & 31)) >> 31;
                bitpos++;
                n++;
                if (code <= lim)
                    break;
                code <<= 1;
            }
            *(s32 *)((u8 *)arg0 + 0x6A4) = bitpos;
            val = *(u8 *)(code + (*(s32 *)(tbl + n * 4 + 0x8C) + *(s32 *)(tbl + 0x40)));
        }
    } else {
        val = -1;
    }

    __dcbz(arg1, 0x20);
    __dcbz(arg1, 0x40);
    x = 0;
    if (val != 0) {
        bitpos = *(s32 *)((u8 *)arg0 + 0x6A4);
        bits = 0x21 - bitpos;
        bitbuf = *(u32 *)((u8 *)arg0 + 0x6A0);
        run = val - bits;
        t = bitpos - 1;
        if (run <= 0) {
            *(s32 *)((u8 *)arg0 + 0x6A4) = bitpos + val;
            x = (bitbuf << t) >> (0x20 - val);
        } else {
            wp = *(u32 **)((u8 *)arg0 + 0x69C);
            wp++;
            bitbuf = *wp;
            *(u32 *)((u8 *)arg0 + 0x6A0) = bitbuf;
            *(u32 **)((u8 *)arg0 + 0x69C) = wp;
            *(s32 *)((u8 *)arg0 + 0x6A4) = run + 1;
            x = ((bitbuf >> bits) + (*(u32 *)((u8 *)arg0 + 0x6A0) << t)) >> (0x20 - val);
        }
        if ((s32)__cntlzw((s16)x) > (0x20 - val)) {
            x = ((u32)-1 << val) + x + 1;
        }
    }
    __dcbz(arg1, 0x60);
    {
        s16 s = *(s16 *)((u8 *)arg0 + 0x684) + (s16)x;
        *(s16 *)((u8 *)arg0 + 0x684) = s;
        *arg1 = s;
    }
    bitpos = *(s32 *)((u8 *)arg0 + 0x6A4);
    bitbuf = *(u32 *)((u8 *)arg0 + 0x6A0);
    i = 1;
    while (i < 0x40) {
        i++;
    }
    *(s32 *)((u8 *)arg0 + 0x6A4) = bitpos;
    *(u32 *)((u8 *)arg0 + 0x6A0) = bitbuf;
    (void)lbl_803688A0;
    (void)lbl_80282FD8;
}

void fn_80242CE4(void *arg0, s16 *arg1) {
    extern u8 *lbl_80368860;
    extern u8 *lbl_803688C0;
    extern u8 lbl_80282FD8[];
    s32 bitpos;
    u32 bitbuf;
    s32 code;
    s32 n;
    u8 *tbl;
    u8 *lens;

    __dcbz(arg1, 0);
    tbl = lbl_80368860;
    lens = tbl + 0x20;
    bitpos = *(s32 *)((u8 *)arg0 + 0x6A4);
    bitbuf = *(u32 *)((u8 *)arg0 + 0x6A0);
    code = __rlwnm(bitbuf, bitpos + 4, 27, 31);
    if (bitpos <= 0x1C) {
        n = tbl[code];
        if (n != 0xFF) {
            *(s32 *)((u8 *)arg0 + 0x6A4) = bitpos + lens[code];
        }
    }
    __dcbz(arg1, 0x20);
    __dcbz(arg1, 0x40);
    __dcbz(arg1, 0x60);
    {
        s16 s = *(s16 *)((u8 *)arg0 + 0x68A);
        *arg1 = s;
    }
    (void)lbl_803688C0;
    (void)lbl_80282FD8;
}

void fn_8024338C(void *arg0, s16 *arg1) {
    extern u8 *lbl_80368880;
    extern u8 *lbl_803688E0;
    extern u8 lbl_80282FD8[];
    s32 bitpos;
    u32 bitbuf;
    s32 code;
    s32 n;
    u8 *tbl;
    u8 *lens;

    __dcbz(arg1, 0);
    tbl = lbl_80368880;
    lens = tbl + 0x20;
    bitpos = *(s32 *)((u8 *)arg0 + 0x6A4);
    bitbuf = *(u32 *)((u8 *)arg0 + 0x6A0);
    code = __rlwnm(bitbuf, bitpos + 4, 27, 31);
    if (bitpos <= 0x1C) {
        n = tbl[code];
        if (n != 0xFF) {
            *(s32 *)((u8 *)arg0 + 0x6A4) = bitpos + lens[code];
        }
    }
    __dcbz(arg1, 0x20);
    __dcbz(arg1, 0x40);
    __dcbz(arg1, 0x60);
    {
        s16 s = *(s16 *)((u8 *)arg0 + 0x690);
        *arg1 = s;
    }
    (void)lbl_803688E0;
    (void)lbl_80282FD8;
}

#pragma use_lmw_stmw on
u32 fn_80243AD4(s16 *out, void *src, s32 stereo) {
    s32 fn_80243E84(void *);
    void fn_80243F14(void *, u8 *);
    s64 fn_8022CB08(s32, u32, s32);
    s64 fn_8022CB50(s32, u32, s32);

    struct { u8 gap[0xC]; u8 st[0x10]; } sp;
    s16 *dstL;
    s16 *dstR;
    s16 yn1;
    s16 yn2;
    s32 stride;
    u32 i;
    u8 *hdr;
    u8 *base;

    if (out == 0 || src == 0) {
        return 0;
    }

    base = (u8 *)src + 0x50;
    hdr = (u8 *)src + *(s32 *)src;
    hdr += 0x50;

    if (stereo == 1) {
        dstL = out;
        stride = 1;
        dstR = out + *(s32 *)((u8 *)src + 4);
    } else {
        dstL = out;
        dstR = out + 1;
        stride = 2;
    }

    if (*(u32 *)src == 0) {
        fn_80243F14(sp.st, base);
        yn1 = *(s16 *)((u8 *)src + 0x48);
        yn2 = *(s16 *)((u8 *)src + 0x4A);
        stride *= 2;
        for (i = 0; i < *(u32 *)((u8 *)src + 4); i++) {
            s32 ni = fn_80243E84(sp.st);
            u8 *coef = (u8 *)src + (sp.st[8] << 2);
            s32 t1 = *(s16 *)(coef + 0xA) * yn2;
            s32 t0 = *(s16 *)(coef + 8) * yn1;
            s32 t2 = (ni << sp.st[9]) << 11;
            s64 acc = (s64)t1 + (s64)t0 + (s64)t2;
            s16 samp;
            acc = fn_8022CB08((s32)(acc >> 32), (u32)acc, 5);
            acc += 0x8000;
            if (acc > 0x7FFFFFFFLL) acc = 0x7FFFFFFFLL;
            if (acc < -0x80000000LL) acc = -0x80000000LL;
            samp = (s16)fn_8022CB50((s32)(acc >> 32), (u32)acc, 0x10);
            *dstR = samp;
            yn2 = yn1;
            yn1 = samp;
            *dstL = samp;
            dstR = (s16 *)((u8 *)dstR + stride);
            dstL = (s16 *)((u8 *)dstL + stride);
        }
    } else {
        fn_80243F14(sp.st, base);
        yn1 = *(s16 *)((u8 *)src + 0x48);
        yn2 = *(s16 *)((u8 *)src + 0x4A);
        stride *= 2;
        for (i = 0; i < *(u32 *)((u8 *)src + 4); i++) {
            s32 ni = fn_80243E84(sp.st);
            u8 *coef = (u8 *)src + (sp.st[8] << 2);
            s32 t1 = *(s16 *)(coef + 0xA) * yn2;
            s32 t0 = *(s16 *)(coef + 8) * yn1;
            s32 t2 = (ni << sp.st[9]) << 11;
            s64 acc = (s64)t1 + (s64)t0 + (s64)t2;
            s16 samp;
            acc = fn_8022CB08((s32)(acc >> 32), (u32)acc, 5);
            acc += 0x8000;
            if (acc > 0x7FFFFFFFLL) acc = 0x7FFFFFFFLL;
            if (acc < -0x80000000LL) acc = -0x80000000LL;
            samp = (s16)fn_8022CB50((s32)(acc >> 32), (u32)acc, 0x10);
            *dstR = samp;
            yn2 = yn1;
            yn1 = samp;
            dstR = (s16 *)((u8 *)dstR + stride);
        }
        fn_80243F14(sp.st, hdr);
        yn1 = *(s16 *)((u8 *)src + 0x4C);
        yn2 = *(s16 *)((u8 *)src + 0x4E);
        for (i = 0; i < *(u32 *)((u8 *)src + 4); i++) {
            s32 ni = fn_80243E84(sp.st);
            u8 *coef = (u8 *)src + (sp.st[8] << 2);
            s32 t1 = *(s16 *)(coef + 0x2A) * yn2;
            s32 t0 = *(s16 *)(coef + 0x28) * yn1;
            s32 t2 = (ni << sp.st[9]) << 11;
            s64 acc = (s64)t1 + (s64)t0 + (s64)t2;
            s16 samp;
            acc = fn_8022CB08((s32)(acc >> 32), (u32)acc, 5);
            acc += 0x8000;
            if (acc > 0x7FFFFFFFLL) acc = 0x7FFFFFFFLL;
            if (acc < -0x80000000LL) acc = -0x80000000LL;
            samp = (s16)fn_8022CB50((s32)(acc >> 32), (u32)acc, 0x10);
            *dstL = samp;
            yn2 = yn1;
            yn1 = samp;
            dstL = (s16 *)((u8 *)dstL + stride);
        }
    }
    return *(u32 *)((u8 *)src + 4);
}
#pragma use_lmw_stmw reset

s32 fn_80243E84(void *arg0) {
    register u8 *temp_r5;
    s32 var_r5;

    if (!(M2C_FIELD(arg0, s32 *, 4) & 0xF)) {
        M2C_FIELD(arg0, s8 *, 8) = (s8) (((u8) *M2C_FIELD(arg0, u8 **, 0) >> 4U) & 7);
        M2C_FIELD(arg0, s8 *, 9) = (s8) (*M2C_FIELD(arg0, u8 **, 0) & 0xF);
        M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) + 1);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 2);
    }
    if (M2C_FIELD(arg0, s32 *, 4) & 1) {
        temp_r5 = M2C_FIELD(arg0, u8 **, 0);
        var_r5 = (s32) (*temp_r5 << 0x1C) >> 0x1C;
        M2C_FIELD(arg0, u8 **, 0) = (u8 *) (temp_r5 + 1);
    } else {
        var_r5 = (s32) ((*M2C_FIELD(arg0, u8 **, 0) << 0x18) & 0xF0000000) >> 0x1C;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    return var_r5;
}

void fn_80243F14(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u8 **, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, s8 *, 8) = (s8) (((u8) *M2C_FIELD(arg0, u8 **, 0) >> 4U) & 7);
    M2C_FIELD(arg0, s8 *, 9) = (s8) (*M2C_FIELD(arg0, u8 **, 0) & 0xF);
    M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) + 1);
}

static inline u32 SynthFindVoice(u32 arg0) {
    extern SynthVoice *lbl_80368970;
    extern SynthVoice *lbl_80368974;
    SynthVoice *p;
    for (p = lbl_80368974; p != NULL; p = p->next) {
        if (p->vid == (arg0 & 0x7FFFFFFF)) {
            return p->id | (arg0 & 0x80000000);
        }
    }
    for (p = lbl_80368970; p != NULL; p = p->next) {
        if (p->vid == (arg0 & 0x7FFFFFFF)) {
            return p->id | (arg0 & 0x80000000);
        }
    }
    return -1;
}

u32 fn_80243F50(u32 arg0) {
    extern SynthVoice *lbl_80368970;
    extern SynthVoice *lbl_80368974;
    SynthVoice *p;

    for (p = lbl_80368974; p != NULL; p = p->next) {
        if (p->vid == (arg0 & 0x7FFFFFFF)) {
            return p->id | (arg0 & 0x80000000);
        }
    }
    for (p = lbl_80368970; p != NULL; p = p->next) {
        if (p->vid == (arg0 & 0x7FFFFFFF)) {
            return p->id | (arg0 & 0x80000000);
        }
    }
    return -1;
}

s32 fn_80243FB8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, u8 arg5, s16 arg6) {
    void fn_80244A84(void *);
    void fn_80246D48(void);
    void fn_80247F1C(s32, u8, s32);
    void fn_8024A780(u8, u16, u8, u8, s32);
    void fn_8024AD04(u8, s32, u8);
    void fn_8025F534(s32, s32, u8, s32);
    void fn_8025FB74(u8, u8, u8);
    void fn_8025FF6C(u8, u8);
    extern SynthVoice lbl_8033F990[];
    extern u8 lbl_8034BDD0[];
    extern u8 lbl_8034C924[];
    extern u32 lbl_80368958;
    extern s32 lbl_80368960;
    extern StreamState *lbl_80368968;
    extern SynthVoice *lbl_8036896C;
    extern SynthVoice *lbl_80368970;
    extern SynthVoice *lbl_80368974;

    SynthVoice *sv;
    SynthVoice *n;
    u8 *base;
    u8 *p;
    u8 *q;
    u8 *ep;
    u8 *row;
    u8 *src;
    u8 *dst;
    u8 *tab;
    StreamState *saved;
    u8 id;
    u8 i;
    u8 j;
    u8 v;
    s32 k;
    s32 off;
    u32 flags;
    u32 size;
    u32 vid;
    u16 val;
    s32 z;
    s32 ctr;

    sv = lbl_8036896C;
    if (sv == NULL) {
        return -1;
    }
    n = sv->next;
    lbl_8036896C = n;
    if (n != NULL) {
        n->prev = NULL;
    }
    sv->next = lbl_80368974;
    if (lbl_80368974 != NULL) {
        lbl_80368974->prev = sv;
    }
    z = 0;
    sv->prev = NULL;
    if (z < 0x10) {
        base = (u8 *)sv;
        *(s32 *)(base + 0x1524) = z;
        *(s32 *)(base + 0x155C) = z;
        *(s32 *)(base + 0x1594) = z;
        *(s32 *)(base + 0x15CC) = z;
        *(s32 *)(base + 0x1604) = z;
        *(s32 *)(base + 0x163C) = z;
        *(s32 *)(base + 0x1674) = z;
        *(s32 *)(base + 0x16AC) = z;
        *(s32 *)(base + 0x16E4) = z;
        *(s32 *)(base + 0x171C) = z;
        *(s32 *)(base + 0x1754) = z;
        *(s32 *)(base + 0x178C) = z;
        *(s32 *)(base + 0x17C4) = z;
        *(s32 *)(base + 0x17FC) = z;
        *(s32 *)(base + 0x1834) = z;
        *(s32 *)(base + 0x186C) = z;
    }
    lbl_80368974 = sv;
    sv->state = 1;

    base = (u8 *)sv;
    id = sv->id;
    base[0xF00] = 0;
    *(void **)(base + 0x10) = arg0;
    *(void **)(base + 0x94) = arg1;
    *(void **)(base + 0x118) = arg3;
    sv->unkA = arg6;

    i = 0;
    do {
        base[0x14 + i] = 0xFF;
        base[0x14 + (u8)(i + 1)] = 0xFF;
        base[0x14 + (u8)(i + 2)] = 0xFF;
        base[0x14 + (u8)(i + 3)] = 0xFF;
        base[0x14 + (u8)(i + 4)] = 0xFF;
        base[0x14 + (u8)(i + 5)] = 0xFF;
        base[0x14 + (u8)(i + 6)] = 0xFF;
        base[0x14 + (u8)(i + 7)] = 0xFF;
        i += 8;
    } while (i < 0x80);

    j = 0;
    p = *(u8 **)(base + 0x10);
    while (p[4] != 0xFF) {
        base[0x14 + p[4]] = j;
        p += 6;
        j++;
    }

    i = 0;
    do {
        base[0x98 + i] = 0xFF;
        base[0x98 + (u8)(i + 1)] = 0xFF;
        base[0x98 + (u8)(i + 2)] = 0xFF;
        base[0x98 + (u8)(i + 3)] = 0xFF;
        base[0x98 + (u8)(i + 4)] = 0xFF;
        base[0x98 + (u8)(i + 5)] = 0xFF;
        base[0x98 + (u8)(i + 6)] = 0xFF;
        base[0x98 + (u8)(i + 7)] = 0xFF;
        i += 8;
    } while (i < 0x80);

    j = 0;
    p = *(u8 **)(base + 0x94);
    while (p[4] != 0xFF) {
        base[0x98 + p[4]] = j;
        p += 6;
        j++;
    }

    base[0xED0] = (u8)(id + 0x17);
    off = 0;
    if (0 < 0x40) {
        for (ctr = 4; ctr != 0; ctr--) {
            q = base + off + 0x324;
            v = base[0xED0];
            q[0] = v; q[1] = v; q[2] = v; q[3] = v;
            q[4] = v; q[5] = v; q[6] = v; q[7] = v;
            q = base + off + 0x32C;
            off += 0x10;
            q[0] = v; q[1] = v; q[2] = v; q[3] = v;
            q[4] = v; q[5] = v; q[6] = v; q[7] = v;
        }
    }

    base[0xF01] = arg5;
    if (arg4 == NULL) {
        *(s32 *)(base + 0x11C) = -1;
        *(s32 *)(base + 0x120) = -1;
        z = 0;
        if (z < 0x10) {
            *(u16 *)(base + 0x153A) = 0x100;
            *(u16 *)(base + 0x1572) = 0x100;
            *(u16 *)(base + 0x15AA) = 0x100;
            *(u16 *)(base + 0x15E2) = 0x100;
            *(u16 *)(base + 0x161A) = 0x100;
            *(u16 *)(base + 0x1652) = 0x100;
            *(u16 *)(base + 0x168A) = 0x100;
            *(u16 *)(base + 0x16C2) = 0x100;
            *(u16 *)(base + 0x16FA) = 0x100;
            *(u16 *)(base + 0x1732) = 0x100;
            *(u16 *)(base + 0x176A) = 0x100;
            *(u16 *)(base + 0x17A2) = 0x100;
            *(u16 *)(base + 0x17DA) = 0x100;
            *(u16 *)(base + 0x1812) = 0x100;
            *(u16 *)(base + 0x184A) = 0x100;
            *(u16 *)(base + 0x1882) = 0x100;
        }
        fn_8024A780(0x7F, 0, base[0xED0], 0, -1);
    } else {
        if (*(u32 *)arg4 & 1) {
            *(s32 *)(base + 0x11C) = *(s32 *)((u8 *)arg4 + 4);
            *(s32 *)(base + 0x120) = *(s32 *)((u8 *)arg4 + 8);
        } else {
            *(s32 *)(base + 0x11C) = -1;
            *(s32 *)(base + 0x120) = -1;
        }
        if (*(u32 *)arg4 & 2) {
            z = 0;
            if (z < 0x10) {
                val = *(u16 *)((u8 *)arg4 + 0xC);
                *(u16 *)(base + 0x153A) = val;
                *(u16 *)(base + 0x1572) = val;
                *(u16 *)(base + 0x15AA) = val;
                *(u16 *)(base + 0x15E2) = val;
                *(u16 *)(base + 0x161A) = val;
                *(u16 *)(base + 0x1652) = val;
                *(u16 *)(base + 0x168A) = val;
                *(u16 *)(base + 0x16C2) = val;
                *(u16 *)(base + 0x16FA) = val;
                *(u16 *)(base + 0x1732) = val;
                *(u16 *)(base + 0x176A) = val;
                *(u16 *)(base + 0x17A2) = val;
                *(u16 *)(base + 0x17DA) = val;
                *(u16 *)(base + 0x1812) = val;
                *(u16 *)(base + 0x184A) = val;
                *(u16 *)(base + 0x1882) = val;
            }
        } else {
            z = 0;
            if (z < 0x10) {
                *(u16 *)(base + 0x153A) = 0x100;
                *(u16 *)(base + 0x1572) = 0x100;
                *(u16 *)(base + 0x15AA) = 0x100;
                *(u16 *)(base + 0x15E2) = 0x100;
                *(u16 *)(base + 0x161A) = 0x100;
                *(u16 *)(base + 0x1652) = 0x100;
                *(u16 *)(base + 0x168A) = 0x100;
                *(u16 *)(base + 0x16C2) = 0x100;
                *(u16 *)(base + 0x16FA) = 0x100;
                *(u16 *)(base + 0x1732) = 0x100;
                *(u16 *)(base + 0x176A) = 0x100;
                *(u16 *)(base + 0x17A2) = 0x100;
                *(u16 *)(base + 0x17DA) = 0x100;
                *(u16 *)(base + 0x1812) = 0x100;
                *(u16 *)(base + 0x184A) = 0x100;
                *(u16 *)(base + 0x1882) = 0x100;
            }
        }
        if (*(u32 *)arg4 & 8) {
            k = 0;
            off = 0;
            while (k < ((u8 *)arg4)[0x12]) {
                src = *(u8 **)((u8 *)arg4 + 0x14) + off;
                base[0x324 + src[0]] = src[1];
                fn_8024AD04((*(u8 **)((u8 *)arg4 + 0x14))[off + 1], 0, src[1]);
                off += 2;
                k++;
            }
        }
        if (*(u32 *)arg4 & 4) {
            fn_8024A780(((u8 *)arg4)[0x10], *(u16 *)((u8 *)arg4 + 0xE), base[0xED0], 0, -1);
            k = 0;
            while (k < ((u8 *)arg4)[0x18]) {
                fn_8024A780(((u8 *)arg4)[0x10], *(u16 *)((u8 *)arg4 + 0xE),
                            (*(u8 **)((u8 *)arg4 + 0x1C))[k], 0, -1);
                k++;
            }
        }
    }

    if (*(u32 *)((u8 *)arg3 + 0x10) & 0x80000000) {
        *(u8 **)(base + 0x1504) = (u8 *)arg3 + *(u32 *)((u8 *)arg3 + 0x54);
    } else {
        *(u8 **)(base + 0x1504) = NULL;
    }
    flags = *(u32 *)((u8 *)arg3 + 0x10);
    size = flags & 0x0FFFFFFF;
    if (!(flags & 0x40000000)) {
        size <<= 10;
    }
    row = base;
    for (i = 0; i < 0x10; i++) {
        *(u32 *)(row + 0x1510) = size;
        fn_80247F1C((s32)(size >> 10), id, i);
        if (*(u32 *)((u8 *)arg3 + 0xC) != 0) {
            *(u8 **)(row + 0x1508) = (u8 *)arg3 + *(u32 *)((u8 *)arg3 + 0xC);
            *(u8 **)(row + 0x150C) = *(u8 **)(row + 0x1508);
        } else {
            *(u8 **)(row + 0x1508) = NULL;
        }
        row[0x153E] = 0;
        *(u16 *)(row + 0x153C) = 0;
        row += 0x38;
    }

    tab = lbl_8034C924;
    src = *(u8 **)arg3 + (u32)arg3;
    dst = base;
    ep = base;
    for (ctr = 0x10; ctr != 0; ctr--) {
        *tab = 0x7F;
        *(s32 *)(dst + 0x36C) = 0;
        if (*(u32 *)src != 0) {
            p = (u8 *)arg3 + *(u32 *)src;
            *(u8 **)(ep + 0x124) = p;
            *(u8 **)(ep + 0x128) = p;
        } else {
            *(u8 **)(ep + 0x124) = NULL;
            *(u8 **)(ep + 0x128) = NULL;
        }
        tab[1] = 0x7F;
        *(s32 *)(dst + 0x398) = 0;
        if (*(u32 *)(src + 4) != 0) {
            p = (u8 *)arg3 + *(u32 *)(src + 4);
            *(u8 **)(ep + 0x12C) = p;
            *(u8 **)(ep + 0x130) = p;
        } else {
            *(u8 **)(ep + 0x12C) = NULL;
            *(u8 **)(ep + 0x130) = NULL;
        }
        tab[2] = 0x7F;
        *(s32 *)(dst + 0x3C4) = 0;
        if (*(u32 *)(src + 8) != 0) {
            p = (u8 *)arg3 + *(u32 *)(src + 8);
            *(u8 **)(ep + 0x134) = p;
            *(u8 **)(ep + 0x138) = p;
        } else {
            *(u8 **)(ep + 0x134) = NULL;
            *(u8 **)(ep + 0x138) = NULL;
        }
        tab[3] = 0x7F;
        *(s32 *)(dst + 0x3F0) = 0;
        if (*(u32 *)(src + 0xC) != 0) {
            p = (u8 *)arg3 + *(u32 *)(src + 0xC);
            *(u8 **)(ep + 0x13C) = p;
            *(u8 **)(ep + 0x140) = p;
        } else {
            *(u8 **)(ep + 0x13C) = NULL;
            *(u8 **)(ep + 0x140) = NULL;
        }
        tab += 4;
        dst += 0xB0;
        src += 0x10;
        ep += 0x20;
    }

    *(s32 *)(base + 0xE64) = 0;
    *(s32 *)(base + 0xE68) = 0;
    *(s32 *)(base + 0xE6C) = 0;
    for (i = 0; i < 0x10; i++) {
        fn_8025FB74(i, id, 1);
    }

    z = 0;
    if (z < 0x10) {
        *(u16 *)(base + 0xE70) = 0xFFFF;
        *(u16 *)(base + 0xE76) = 0xFFFF;
        *(u16 *)(base + 0xE7C) = 0xFFFF;
        *(u16 *)(base + 0xE82) = 0xFFFF;
        *(u16 *)(base + 0xE88) = 0xFFFF;
        *(u16 *)(base + 0xE8E) = 0xFFFF;
        *(u16 *)(base + 0xE94) = 0xFFFF;
        *(u16 *)(base + 0xE9A) = 0xFFFF;
        *(u16 *)(base + 0xEA0) = 0xFFFF;
        *(u16 *)(base + 0xEA6) = 0xFFFF;
        *(u16 *)(base + 0xEAC) = 0xFFFF;
        *(u16 *)(base + 0xEB2) = 0xFFFF;
        *(u16 *)(base + 0xEB8) = 0xFFFF;
        *(u16 *)(base + 0xEBE) = 0xFFFF;
        *(u16 *)(base + 0xEC4) = 0xFFFF;
        *(u16 *)(base + 0xECA) = 0xFFFF;
    }

    for (i = 0; i < 0x10; i++) {
        fn_8025FF6C(i, id);
    }

    if (arg2 != NULL) {
        ep = (u8 *)arg2;
        for (i = 0; i < 0x10; i++) {
            v = ep[4];
            *(u16 *)(lbl_8034BDD0 + (lbl_80368960 << 5) + (i * 2)) = 0xFFFF;
            if (i != 9) {
                j = base[0x14 + v];
                if (j != 0xFF) {
                    p = *(u8 **)(base + 0x10) + j * 6;
                    q = base + i * 6;
                    *(u16 *)(q + 0xE70) = *(u16 *)p;
                    q[0xE72] = p[2];
                    q[0xE73] = p[3];
                    q[0xE74] = j;
                }
            } else {
                j = base[0x98 + v];
                if (j != 0xFF) {
                    p = *(u8 **)(base + 0x94) + j * 6;
                    q = base + i * 6;
                    *(u16 *)(q + 0xE70) = *(u16 *)p;
                    q[0xE72] = p[2];
                    q[0xE73] = p[3];
                    q[0xE74] = j;
                }
            }
            fn_8025F534(7, i, id, ep[5]);
            fn_8025F534(0xA, i, id, ep[6]);
            fn_8025F534(0x5B, i, id, ep[7]);
            fn_8025F534(0x5D, i, id, ep[8]);
            ep += 5;
        }
    }

    z = 0;
    if (z < 0x10) {
        u16 *t = (u16 *)(lbl_8034BDD0 + (id << 5));
        t[0] = 0xFFFF; t[1] = 0xFFFF; t[2] = 0xFFFF; t[3] = 0xFFFF;
        t[4] = 0xFFFF; t[5] = 0xFFFF; t[6] = 0xFFFF; t[7] = 0xFFFF;
        t[8] = 0xFFFF; t[9] = 0xFFFF; t[10] = 0xFFFF; t[11] = 0xFFFF;
        t[12] = 0xFFFF; t[13] = 0xFFFF; t[14] = 0xFFFF; t[15] = 0xFFFF;
    }

    z = 0;
    if (z < 0x10) {
        p = base;
        for (ctr = 2; ctr != 0; ctr--) {
            *(s32 *)(p + 0x152C) = 0; *(s32 *)(p + 0x1528) = 0;
            *(s32 *)(p + 0x1534) = 0; *(s32 *)(p + 0x1530) = 0;
            *(s32 *)(p + 0x1538) = 0;
            *(s32 *)(p + 0x1564) = 0; *(s32 *)(p + 0x1560) = 0;
            *(s32 *)(p + 0x156C) = 0; *(s32 *)(p + 0x1568) = 0;
            *(s32 *)(p + 0x1570) = 0;
            *(s32 *)(p + 0x159C) = 0; *(s32 *)(p + 0x1598) = 0;
            *(s32 *)(p + 0x15A4) = 0; *(s32 *)(p + 0x15A0) = 0;
            *(s32 *)(p + 0x15A8) = 0;
            *(s32 *)(p + 0x15D4) = 0; *(s32 *)(p + 0x15D0) = 0;
            *(s32 *)(p + 0x15DC) = 0; *(s32 *)(p + 0x15D8) = 0;
            *(s32 *)(p + 0x15E0) = 0;
            *(s32 *)(p + 0x160C) = 0; *(s32 *)(p + 0x1608) = 0;
            *(s32 *)(p + 0x1614) = 0; *(s32 *)(p + 0x1610) = 0;
            *(s32 *)(p + 0x1618) = 0;
            *(s32 *)(p + 0x1644) = 0; *(s32 *)(p + 0x1640) = 0;
            *(s32 *)(p + 0x164C) = 0; *(s32 *)(p + 0x1648) = 0;
            *(s32 *)(p + 0x1650) = 0;
            *(s32 *)(p + 0x167C) = 0; *(s32 *)(p + 0x1678) = 0;
            *(s32 *)(p + 0x1684) = 0; *(s32 *)(p + 0x1680) = 0;
            *(s32 *)(p + 0x1688) = 0;
            *(s32 *)(p + 0x16B4) = 0; *(s32 *)(p + 0x16B0) = 0;
            *(s32 *)(p + 0x16BC) = 0; *(s32 *)(p + 0x16B8) = 0;
            *(s32 *)(p + 0x16C0) = 0;
            p += 0x1C0;
        }
    }

    base[0xF02] = 0;
    if (arg4 != NULL && (*(u32 *)arg4 & 0x10)) {
        fn_80244A84(sv);
    }
    saved = lbl_80368968;
    lbl_80368968 = (StreamState *)sv;
    fn_80246D48();
    lbl_80368968 = saved;

    do {
        vid = lbl_80368958;
        lbl_80368958 = (vid + 1) & 0x7FFFFFFF;
        for (n = lbl_80368974; n != NULL; n = n->next) {
            if (n->vid == vid) {
                vid = 0xFFFFFFFF;
                break;
            }
        }
        if (vid != 0xFFFFFFFF) {
            for (n = lbl_80368970; n != NULL; n = n->next) {
                if (n->vid == vid) {
                    vid = 0xFFFFFFFF;
                    break;
                }
            }
        }
    } while ((u32)(vid + 0x10000) == 0xFFFFFFFF);

    lbl_8033F990[id].vid = vid;
    return (s32)vid;
}

void fn_80244A84(SynthVoice *sv) {
    extern SynthVoice *lbl_80368970;
    extern SynthVoice *lbl_80368974;

    if (sv->prev != NULL) {
        sv->prev->next = sv->next;
    } else {
        lbl_80368974 = sv->next;
    }
    if (sv->next != NULL) {
        sv->next->prev = sv->prev;
    }
    if ((sv->next = lbl_80368970) != NULL) {
        lbl_80368970->prev = sv;
    }
    sv->prev = NULL;
    lbl_80368970 = sv;
    sv->state = 2;
}

#pragma global_optimizer on
void fn_80244AE8(s32 arg0) {
 extern SynthVoice *lbl_80368970; extern SynthVoice *lbl_80368974;
 extern SynthVoice lbl_8033F990[]; extern VidList *lbl_80368964;
 void fn_80257224(s32);
 u32 id, vid; SynthVoice *p, *sv; VidList *tail; u32 i; VidList *node; SynthVoice *walk;
 vid=arg0&0x7FFFFFFF;
 for(p=lbl_80368974;p!=NULL;p=p->next) {
  if(p->vid==vid) {id=p->id|(arg0&0x80000000);goto found;}
 }
 for(p=lbl_80368970;p!=NULL;p=p->next) {
  if(p->vid==vid) {id=p->id|(arg0&0x80000000);goto found;}
 }
 id=-1;
found:
 if((u32)(id+0x10000)!=0xFFFF) {
  if(!(id&0x80000000)) {
   sv=&lbl_8033F990[id];
   if(sv->state==1) {
    if(sv->prev!=NULL) sv->prev->next=sv->next;
    else lbl_80368974=sv->next;
    if(sv->next!=NULL) sv->next->prev=sv->prev;
    sv->next=lbl_80368970;
    if(lbl_80368970!=NULL) lbl_80368970->prev=sv;
    sv->prev=(SynthVoice *)(i=0);
    lbl_80368970=sv;
    sv->state=2;
    for(walk=sv;i<2;i++,walk=(SynthVoice*)((u8*)walk+4)) {
     for(node=walk->lists[0];node!=NULL;node=node->next) fn_80257224(node->vid);
    }
    walk=(SynthVoice *)sv->listE6C;
    while(walk!=NULL) {
     fn_80257224(((VidList *)walk)->vid);
     walk=(SynthVoice *)((VidList *)walk)->next;
    }
    for(i=0,walk=sv;i<2;i++,walk=(SynthVoice*)((u8*)walk+4)) {
     tail=walk->lists[0];
     if(tail!=NULL) {
      while(tail->next!=NULL) tail=tail->next;
      if(lbl_80368964!=NULL) {tail->next=lbl_80368964;lbl_80368964->prev=tail;}
      lbl_80368964=walk->lists[0]; walk->lists[0]=NULL;
     }
    }
    tail=sv->listE6C;
    if(tail!=NULL) {
     while(tail->next!=NULL) tail=tail->next;
     if(lbl_80368964!=NULL) {tail->next=lbl_80368964;lbl_80368964->prev=tail;}
     lbl_80368964=sv->listE6C;sv->listE6C=NULL;
    }
   }
  } else {
   sv=&lbl_8033F990[id&0x7FFFFFFF];
   if(sv->state!=0) sv->unkEFA|=8;
  }
 }
}

void fn_80244D64(s32 arg0) {
    extern SynthVoice *lbl_80368970;
    extern SynthVoice *lbl_80368974;
    extern SynthVoice *lbl_8036896C;
    extern SynthVoice lbl_8033F990[];
    extern VidList *lbl_80368964;
    void fn_80257224(s32);
    s32 off;
    SynthVoice *sv;
    u32 i;
    SynthVoice *walk;
    VidList *node;
    VidList *tail;
    VidList **listpp;
    u32 id;
    u32 vid;
    SynthVoice *p;

    vid = arg0 & 0x7FFFFFFF;
    p = lbl_80368974;
    goto loop1_test;
loop1:
    if (p->vid == vid) {
        id = p->id | (arg0 & 0x80000000);
        goto found;
    }
    p = p->next;
loop1_test:
    if (p != NULL) {
        goto loop1;
    }
    p = lbl_80368970;
    goto loop2_test;
loop2:
    if (p->vid == vid) {
        id = p->id | (arg0 & 0x80000000);
        goto found;
    }
    p = p->next;
loop2_test:
    if (p != NULL) {
        goto loop2;
    }
    id = -1;
found:
    if ((u32)(id + 0x10000) != 0xFFFF) {
        if (!(id & 0x80000000)) {
            off = id * 0x1888;
            sv = (SynthVoice *)((u8 *)lbl_8033F990 + off);
            switch (sv->state) {
            case 1:
                if (sv->prev != NULL) {
                    sv->prev->next = sv->next;
                } else {
                    lbl_80368974 = sv->next;
                }
                i = 0;
                walk = sv;
            loop_a:
                node = walk->lists[0];
                goto loop_a_inner_test;
            loop_a_inner:
                fn_80257224(node->vid);
                node = node->next;
            loop_a_inner_test:
                if (node != NULL) {
                    goto loop_a_inner;
                }
                i += 1;
                walk = (SynthVoice *)((u8 *)walk + 4);
                if (i < 2) {
                    goto loop_a;
                }
                off = (s32)lbl_8033F990 + off;
                listpp = (VidList **)(off + 0xE6C);
                node = *listpp;
                goto loop_b_test;
            loop_b:
                fn_80257224(node->vid);
                node = node->next;
            loop_b_test:
                if (node != NULL) {
                    goto loop_b;
                }
                tail = sv->lists[0];
                if (tail != NULL) {
                    goto find_tail1_test;
                find_tail1:
                    tail = tail->next;
                find_tail1_test:
                    if (tail->next != NULL) {
                        goto find_tail1;
                    }
                    if (lbl_80368964 != NULL) {
                        tail->next = lbl_80368964;
                        lbl_80368964->prev = tail;
                    }
                    lbl_80368964 = sv->lists[0];
                    sv->lists[0] = NULL;
                }
                {
                    SynthVoice *sv4 = (SynthVoice *)((u8 *)sv + 4);
                    tail = sv4->lists[0];
                    if (tail != NULL) {
                        goto find_tail2_test;
                    find_tail2:
                        tail = tail->next;
                    find_tail2_test:
                        if (tail->next != NULL) {
                            goto find_tail2;
                        }
                        if (lbl_80368964 != NULL) {
                            tail->next = lbl_80368964;
                            lbl_80368964->prev = tail;
                        }
                        lbl_80368964 = sv4->lists[0];
                        sv4->lists[0] = NULL;
                    }
                }
                tail = *listpp;
                if (tail != NULL) {
                    goto find_tail3_test;
                find_tail3:
                    tail = tail->next;
                find_tail3_test:
                    if (tail->next != NULL) {
                        goto find_tail3;
                    }
                    if (lbl_80368964 != NULL) {
                        tail->next = lbl_80368964;
                        lbl_80368964->prev = tail;
                    }
                    lbl_80368964 = *listpp;
                    *listpp = NULL;
                }
                break;
            case 2:
                if (sv->prev != NULL) {
                    sv->prev->next = sv->next;
                } else {
                    lbl_80368970 = sv->next;
                }
                break;
            }
            if (sv->next != NULL) {
                sv->next->prev = sv->prev;
            }
            sv->state = 0;
            if (lbl_8036896C != NULL) {
                lbl_8036896C->prev = sv;
            }
            sv->next = lbl_8036896C;
            sv->prev = NULL;
            lbl_8036896C = sv;
        } else {
            sv = &lbl_8033F990[id & 0x7FFFFFFF];
            if (sv->state != 0) {
                *(s32 *)((u8 *)sv + 0xEFC) = 0;
            }
        }
    }
}

void fn_80245014(u16 arg0) {
    extern void *lbl_80368970;
    extern void *lbl_80368974;
    void *var_r30;

    var_r30 = lbl_80368974;
    while (var_r30 != NULL) {
        if ((u16) M2C_FIELD(var_r30, u16 *, 0xA) == arg0) {
            fn_80244D64(M2C_FIELD(var_r30, s32 *, 0xC));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0);
    }

    var_r30 = lbl_80368970;
    while (var_r30 != NULL) {
        if ((u16) M2C_FIELD(var_r30, u16 *, 0xA) == arg0) {
            fn_80244D64(M2C_FIELD(var_r30, s32 *, 0xC));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0);
    }
}

void fn_802450A4(u32 arg0, u16 arg1) {
    extern SynthVoice lbl_8033F990[];
    u32 id;
    u32 i;

    id = fn_80243F50(arg0);
    if (!(id & 0x80000000)) {
        for (i = 0; i < 16; i++) {
            lbl_8033F990[id].unk1508[i].unk32 = arg1;
        }
        return;
    }
    lbl_8033F990[id & 0x7FFFFFFF].unkEFA |= 0x20;
    lbl_8033F990[id & 0x7FFFFFFF].unkEF8 = arg1;
}

void fn_80245188(s32 arg0) {
    extern SynthVoice *lbl_80368970;
    extern SynthVoice *lbl_80368974;
    extern SynthVoice lbl_8033F990[];
    u32 id;
    u32 vid;
    SynthVoice *p;
    SynthVoice *sv;

    vid = arg0 & 0x7FFFFFFF;
    for (p = lbl_80368974; p != NULL; p = p->next) {
        if (p->vid == vid) {
            id = p->id | (arg0 & 0x80000000);
            goto found;
        }
    }
    for (p = lbl_80368970; p != NULL; p = p->next) {
        if (p->vid == vid) {
            id = p->id | (arg0 & 0x80000000);
            goto found;
        }
    }
    id = -1;
found:
    if (!(id & 0x80000000)) {
        sv = &lbl_8033F990[id];
        if (sv->state == 2) {
            if (sv->prev != NULL) {
                sv->prev->next = sv->next;
            } else {
                lbl_80368970 = sv->next;
            }
            if (sv->next != NULL) {
                sv->next->prev = sv->prev;
            }
            sv->next = lbl_80368974;
            if (lbl_80368974 != NULL) {
                lbl_80368974->prev = sv;
            }
            sv->prev = NULL;
            lbl_80368974 = sv;
            sv->state = 1;
        }
        return;
    }
    lbl_8033F990[id & 0x7FFFFFFF].unkEFA &= ~8;
}

void fn_80245290(u32 arg0, s32 arg1, s32 arg2) {
    extern SynthVoice lbl_8033F990[];
    u32 id;

    id = fn_80243F50(arg0);
    if (id != 0xFFFFFFFF) {
        if (!(id & 0x80000000)) {
            lbl_8033F990[id].unk11C = arg1;
            lbl_8033F990[id].unk120 = arg2;
        } else {
            lbl_8033F990[id & 0x7FFFFFFF].unkEFA |= 0x10;
            lbl_8033F990[id & 0x7FFFFFFF].unkEF0 = arg1;
            lbl_8033F990[id & 0x7FFFFFFF].unkEF4 = arg2;
        }
    }
}

void fn_80245518(void *arg0, s32 *arg1, u8 arg2) {
    void fn_8024A780(u8, u16, u8, u8, s32);
    void fn_8024B4B0(s32, s32, s32, s32);
    void fn_8024B3D8(s32, u16);
    void fn_8024B420(void);
    void fn_8024B458(s32, s32, s32);
    s32 fn_80259430(u16, u16, s32, s32 *, s32, u8);
    s32 fn_80259584(u16, u16, s32, s32 *, u8);
    typedef struct { s32 a; s32 b; } Pair;
    extern SynthVoice lbl_8033F990[];
    extern SynthVoice *lbl_80368970;
    extern SynthVoice *lbl_80368974;
    SynthVoice *sv;
    u8 *base;
    u8 *p;
    u32 vid;
    u32 id;
    u16 vol;
    u16 lim;
    u8 flags;
    u8 i;
    s32 off;
    s32 flags2;
    u16 pitch;
    u8 pan;
    u16 t;
    s32 k;
    s32 spC;
    s32 sp10;
    u16 sp14;
    u16 sp16;
    u8 sp18;
    s8 sp20;
    Pair *dst;
    Pair *src;
    s32 pad0, pad1, pad2, pad3;

    (void)pad0; (void)pad1; (void)pad2; (void)pad3;
    vid = *(u32 *)arg0;
    id = SynthFindVoice(vid);
    flags = *((u8 *)arg0 + 0x26);
    if (flags & 4) {
        off = id * 0x1888;
        base = (u8 *)lbl_8033F990 + off;
        src = (Pair *)arg0;
        dst = (Pair *)(base + 0xED4);
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        dst[4] = src[4];
        base[0xF00] = 1;
        *(s32 **)(base + 0xEFC) = arg1;
        base[0xEFA] = (u8)(base[0xEFA] & ~4);
        *arg1 = *(u32 *)arg0 | 0x80000000;
        return;
    }
    if (arg2 != 0) {
        lim = *(u16 *)((u8 *)arg0 + 4);
        vol = 5;
        if (lim >= 5) {
            vol = lim;
        }
        if (flags & 1) {
            id = SynthFindVoice(vid);
            if ((u32)(id + 0x10000) != 0xFFFF) {
                if (!(id & 0x80000000)) {
                    off = id * 0x1888;
                    base = (u8 *)lbl_8033F990 + off;
                    fn_8024A780(0, vol, base[0xED0], 2, 0);
                    p = base;
                    for (i = 0; i < 0x40; i++, p++) {
                        if (p[0x324] != base[0xED0]) {
                            fn_8024A780(0, vol, p[0x324], 0, -1);
                        }
                    }
                } else {
                    base = (u8 *)lbl_8033F990 + (id & 0x7FFFFFFF) * 0x1888;
                    base[0xEFA] = (u8)(base[0xEFA] | 8);
                    base[0xEEC] = 0;
                }
            }
        } else if (flags & 0x40) {
            id = SynthFindVoice(vid);
            if ((u32)(id + 0x10000) != 0xFFFF) {
                if (!(id & 0x80000000)) {
                    off = id * 0x1888;
                    base = (u8 *)lbl_8033F990 + off;
                    fn_8024A780(0, vol, base[0xED0], 3, 0);
                    p = base;
                    for (i = 0; i < 0x40; i++, p++) {
                        if (p[0x324] != base[0xED0]) {
                            fn_8024A780(0, vol, p[0x324], 0, -1);
                        }
                    }
                } else {
                    base = (u8 *)lbl_8033F990 + (id & 0x7FFFFFFF) * 0x1888;
                    base[0xEFA] = (u8)(base[0xEFA] | 0x80);
                    base[0xEEC] = 0;
                }
            }
        } else {
            id = SynthFindVoice(vid);
            if ((u32)(id + 0x10000) != 0xFFFF) {
                if (!(id & 0x80000000)) {
                    off = id * 0x1888;
                    base = (u8 *)lbl_8033F990 + off;
                    fn_8024A780(0, vol, base[0xED0], 1, 0);
                    p = base;
                    for (i = 0; i < 0x40; i++, p++) {
                        if (p[0x324] != base[0xED0]) {
                            fn_8024A780(0, vol, p[0x324], 0, -1);
                        }
                    }
                } else {
                    base = (u8 *)lbl_8033F990 + (id & 0x7FFFFFFF) * 0x1888;
                    *(s32 *)(base + 0xEFC) = 0;
                }
            }
        }
    } else if (flags & 1) {
        fn_8024B4B0(0, *(u16 *)((u8 *)arg0 + 4), (s32)vid, 2);
    } else if (flags & 0x40) {
        fn_8024B4B0(0, *(u16 *)((u8 *)arg0 + 4), (s32)vid, 3);
    } else {
        fn_8024B4B0(0, *(u16 *)((u8 *)arg0 + 4), (s32)vid, 1);
    }
    if (arg1 == NULL) {
        return;
    }
    flags = *((u8 *)arg0 + 0x26);
    if (flags & 2) {
        id = SynthFindVoice(*(u32 *)((u8 *)arg0 + 8));
        if ((u32)(id + 0x10000) == 0xFFFF) {
            *arg1 = -1;
            return;
        }
        if (arg2 != 0) {
            id = SynthFindVoice(*(u32 *)((u8 *)arg0 + 8));
            if (!(id & 0x80000000)) {
                sv = (SynthVoice *)((u8 *)lbl_8033F990 + id * 0x1888);
                if (sv->state == 2) {
                    if (sv->prev != NULL) {
                        sv->prev->next = sv->next;
                    } else {
                        lbl_80368970 = sv->next;
                    }
                    if (sv->next != NULL) {
                        sv->next->prev = sv->prev;
                    }
                    sv->next = lbl_80368974;
                    if (lbl_80368974 != NULL) {
                        lbl_80368974->prev = sv;
                    }
                    sv->prev = NULL;
                    lbl_80368974 = sv;
                    sv->state = 1;
                }
            } else {
                base = (u8 *)lbl_8033F990 + (id & 0x7FFFFFFF) * 0x1888;
                base[0xEFA] = (u8)(base[0xEFA] & ~8);
            }
            pitch = *(u16 *)((u8 *)arg0 + 0xC);
            pan = *((u8 *)arg0 + 0x18);
            id = SynthFindVoice(*(u32 *)((u8 *)arg0 + 8));
            if ((u32)(id + 0x10000) != 0xFFFF) {
                if (!(id & 0x80000000)) {
                    off = id * 0x1888;
                    base = (u8 *)lbl_8033F990 + off;
                    fn_8024A780(pan, pitch, base[0xED0], 0, 0);
                    p = base;
                    for (i = 0; i < 0x40; i++, p++) {
                        if (p[0x324] != base[0xED0]) {
                            fn_8024A780(pan, pitch, p[0x324], 0, -1);
                        }
                    }
                } else {
                    base = (u8 *)lbl_8033F990 + (id & 0x7FFFFFFF) * 0x1888;
                    base[0xEEC] = pan;
                }
            }
            if (*((u8 *)arg0 + 0x26) & 0x10) {
                id = SynthFindVoice(*(u32 *)((u8 *)arg0 + 8));
                if ((u32)(id + 0x10000) != 0xFFFF) {
                    if (!(id & 0x80000000)) {
                        sv = (SynthVoice *)((u8 *)lbl_8033F990 + id * 0x1888);
                        sv->unk11C = *(s32 *)((u8 *)arg0 + 0x1C);
                        sv->unk120 = *(s32 *)((u8 *)arg0 + 0x20);
                    } else {
                        base = (u8 *)lbl_8033F990 + (id & 0x7FFFFFFF) * 0x1888;
                        base[0xEFA] = (u8)(base[0xEFA] | 0x10);
                        *(s32 *)(base + 0xEF0) = *(s32 *)((u8 *)arg0 + 0x1C);
                        *(s32 *)(base + 0xEF4) = *(s32 *)((u8 *)arg0 + 0x20);
                    }
                }
            }
            if (*((u8 *)arg0 + 0x26) & 0x20) {
                id = SynthFindVoice(*(u32 *)((u8 *)arg0 + 8));
                t = *(u16 *)((u8 *)arg0 + 0x24);
                if (!(id & 0x80000000)) {
                    base = (u8 *)lbl_8033F990 + id * 0x1888;
                    for (k = 0; k < 16; k++) {
                        *(u16 *)(base + 0x153A + k * 0x38) = t;
                    }
                } else {
                    base = (u8 *)lbl_8033F990 + (id & 0x7FFFFFFF) * 0x1888;
                    base[0xEFA] = (u8)(base[0xEFA] | 0x20);
                    *(u16 *)(base + 0xEF8) = t;
                }
            }
        } else {
            fn_8024B420();
            fn_8024B4B0(*((u8 *)arg0 + 0x18), *(u16 *)((u8 *)arg0 + 0xC),
                         *(s32 *)((u8 *)arg0 + 8), 0);
            if (*((u8 *)arg0 + 0x26) & 0x10) {
                fn_8024B458(*(s32 *)((u8 *)arg0 + 8),
                            *(s32 *)((u8 *)arg0 + 0x1C),
                            *(s32 *)((u8 *)arg0 + 0x20));
            }
            if (*((u8 *)arg0 + 0x26) & 0x20) {
                fn_8024B3D8(*(s32 *)((u8 *)arg0 + 8), *(u16 *)((u8 *)arg0 + 0x24));
            }
        }
        *arg1 = *(s32 *)((u8 *)arg0 + 8);
        return;
    }
    flags2 = 4;
    if (flags & 8) {
        flags2 |= 0x10;
    }
    if (*((u8 *)arg0 + 0x26) & 0x20) {
        flags2 |= 2;
        sp14 = *(u16 *)((u8 *)arg0 + 0x24);
    }
    if (*((u8 *)arg0 + 0x26) & 0x10) {
        flags2 |= 1;
        spC = *(s32 *)((u8 *)arg0 + 0x1C);
        sp10 = *(s32 *)((u8 *)arg0 + 0x20);
    }
    sp16 = *(u16 *)((u8 *)arg0 + 0xC);
    sp18 = *((u8 *)arg0 + 0x18);
    sp20 = 0;
    if (arg2 != 0) {
        *arg1 = fn_80259430(*(u16 *)((u8 *)arg0 + 0x14), *(u16 *)((u8 *)arg0 + 0x16),
                            *(s32 *)((u8 *)arg0 + 0x10), &flags2, 1,
                            *((u8 *)arg0 + 0x19));
        if ((u32)(*arg1 + 0x10000) != 0xFFFF && (*((u8 *)arg0 + 0x26) & 0x80)) {
            id = SynthFindVoice(*arg1);
            if ((u32)(id + 0x10000) != 0xFFFF) {
                if (!(id & 0x80000000)) {
                    sv = (SynthVoice *)((u8 *)lbl_8033F990 + id * 0x1888);
                    sv->unk11C = 0;
                    sv->unk120 = 0;
                } else {
                    base = (u8 *)lbl_8033F990 + (id & 0x7FFFFFFF) * 0x1888;
                    base[0xEFA] = (u8)(base[0xEFA] | 0x10);
                    *(s32 *)(base + 0xEF0) = 0;
                    *(s32 *)(base + 0xEF4) = 0;
                }
            }
        }
    } else {
        *arg1 = fn_80259584(*(u16 *)((u8 *)arg0 + 0x14), *(u16 *)((u8 *)arg0 + 0x16),
                            *(s32 *)((u8 *)arg0 + 0x10), &flags2,
                            *((u8 *)arg0 + 0x19));
        if ((u32)(*arg1 + 0x10000) != 0xFFFF && (*((u8 *)arg0 + 0x26) & 0x80)) {
            fn_8024B458(*arg1, 0, 0);
        }
    }
}

void *fn_80246070(u8 arg0) {
    StreamSeqChan *chanSeq = &lbl_80368968->seqChans[arg0];
    StreamChannel *chan = &lbl_80368968->channels[arg0];
    u8 *voices;
    u8 *voiceState;
    StreamMsg *msg;
    u8 *q;
    u8 b;
    u8 *p;
    u32 temp_r9;
    u32 temp_r10;
    u32 temp_r11;
    u16 ev;

    if (chanSeq->unk4 != NULL) {
        msg = &lbl_80368968->msgs[arg0];
        msg->unk15 = arg0;
        msg->unk10 = chan;
        if (chan->unk8 != NULL) {
            goto stream;
        }
seq:
        ev = chanSeq->unk4->unk8;
        if (ev == 0xFFFF) {
            chanSeq->unk4 = NULL;
            return NULL;
        }
        if (ev == 0xFFFE) {
            voices = lbl_80368968->voices;
            if (voices == NULL) {
                if (lbl_80368968->unk153E != 0) {
                    chanSeq->unk4 = NULL;
                    return NULL;
                }
            } else {
                voiceState = (u8 *) lbl_80368968;
                voiceState += voices[arg0] * 0x38;
                if (*(u8 *) (voiceState + 0x153E) != 0) {
                    chanSeq->unk4 = NULL;
                    return NULL;
                }
            }
            msg->unk14 = 3;
            msg->unk8 = chanSeq->unk4->unk0;
            chanSeq->unk4 = (StreamSeqEvent *) (chanSeq->unk0 + chanSeq->unk4->unkA * 0xC);
            return msg;
        }
        msg->unk14 = 4;
        msg->unk8 = chanSeq->unk4->unk0;
        msg->unkC = chanSeq->unk4;
        chanSeq->unk4 = (StreamSeqEvent *) ((u8 *) chanSeq->unk4 + 0xC);
        return msg;
stream:
        temp_r10 = chan->unk18;
        temp_r11 = chan->unk24;
        for (;;) {
            p = chan->unk8;
            temp_r9 = *(u16 *) p + chan->unk0;
            if (temp_r9 >= temp_r10) {
                goto tail;
            }
            if (temp_r9 >= temp_r11) {
                goto state1;
            }
            if ((p[2] == 0xFF) && (p[3] == 0xFF)) {
                chan->unk8 = NULL;
                goto seq;
            }
            msg->unkC = p;
            chan->unk0 = temp_r9;
            q = chan->unk8;
            b = q[2];
            if (b & 0x80) {
                chan->unk8 = q + 4;
            } else if ((b | q[3]) == 0) {
                chan->unk8 = q + 4;
                continue;
            } else {
                chan->unk8 = q + 6;
            }
            msg->unk14 = 0;
            msg->unk8 = temp_r9 + chan->unk4;
            goto done;
        }
tail:
        if (temp_r10 < temp_r11) {
            msg->unk8 = temp_r10 + chan->unk4;
            msg->unk14 = 2;
            goto done;
        }
state1:
        msg->unk8 = temp_r11 + chan->unk4;
        msg->unk14 = 1;
done:
        return msg;
    }
    return NULL;
}

#pragma dont_inline on
StreamQueueNode *fn_80246288(StreamQueueNode *arg0, u8 arg1, u32 *arg2)
{
    return (StreamQueueNode *)(((u32)arg0 + 1) * (arg1 + 1));
}
#pragma dont_inline reset

#pragma opt_strength_reduction off
s32 fn_80246EBC(u8 arg0,u32 arg1){
StreamQueueNode *fn_80246288(StreamQueueNode*,u8,u32*);void fn_80247F1C(s32,u8,s32);
extern u32 lbl_80368960;extern f32 lbl_8036C1B0,lbl_8036C1B4,lbl_8036C1B8;extern f64 lbl_8036C1C0;
f64 fn_802387A8(f64,f64);f64 fn_802381A4(f64);
u32 changed=0;s32 off=arg0*0x38;StreamTempo *tempo=(StreamTempo*)((u8*)lbl_80368968+off+0x1508);
StreamTempo *t;StreamQueueNode *node;u32 time;s32 i,j;u32 *event;f32 f;
goto check;
for(;;){
if(node){StreamQueueNode *next=node->next;tempo->head=next;if(next)tempo->head->prev=0;}
if(!node){
if(!changed)return 0;
changed=0;tempo->active^=1;
tempo->buffers[tempo->active*2+1]=*(u32*)(*(u8**)((u8*)lbl_80368968+0x118)+0x14+arg0*4);
tempo->buffers[tempo->active*2]=tempo->buffers[(tempo->active^1)*2];
t=(StreamTempo*)((u8*)lbl_80368968+off+0x1508);
if(t->start){
t->cursor=t->start;
t=(StreamTempo*)((u8*)lbl_80368968+off+0x1508);
if(t->start){
while((event=t->cursor)[0]!=0xffffffffU){
if(event[0]>t->buffers[t->active*2+1])break;
if(*(u32*)(*(u8**)((u8*)lbl_80368968+0x118)+0x10)&0x40000000){
t->value=event[1];fn_80247F1C(event[1]>>10,(u8)lbl_80368960,arg0);
}else{fn_80247F1C(event[1],(u8)lbl_80368960,arg0);t->value=t->cursor[1]<<10;}
t->cursor+=2;
}
}
t=(StreamTempo*)((u8*)lbl_80368968+off+0x1508);
f=lbl_8036C1B0*((f32)t->value*(f32)arg1)*(lbl_8036C1B4*(f32)t->scale);
t->timing[t->active*2]=fn_8022C568((f32)fn_802387A8(lbl_8036C1B8*f,lbl_8036C1C0));
t->timing[t->active*2+1]=(s32)(f32)fn_802381A4(f);
}
tempo->count++;
if(!lbl_80368968->voices){
for(i=0;i<64;i++){node=fn_80246070((u8)i);if(node)StreamQueueInsert((StreamQueueNode**)((u8*)lbl_80368968+0x1524),node);}
}else{
for(j=0;j<64;j++){if(arg0==lbl_80368968->voices[j]){
node=fn_80246070((u8)j);if(node){t=(StreamTempo*)((u8*)lbl_80368968+off+0x1508);StreamQueueInsert(&t->head,node);}
}}
}
}else{
node=fn_80246288(node,arg0,&changed);
if(node)StreamQueueInsert(&tempo->head,node);
}
check:
node=tempo->head;time=node?node->time:0;
if(time>tempo->buffers[tempo->active*2+1])return 1;
}
}

void fn_80247358(u32 arg0) {
    extern SynthVoice *lbl_80368974;
    extern SynthVoice *lbl_8036896C;
    extern VidList *lbl_80368964;
    extern u8 lbl_8036895C;
    extern u32 lbl_80368960;
    extern f32 lbl_8036C1B0, lbl_8036C1B4, lbl_8036C1B8;
    extern f64 lbl_8036C1C0;
    s32 fn_80246EBC(u8, u32);
    void fn_80247F1C(s32, u8, s32);
    void fn_8024A6F8(u32);
    s32 fn_8024ACB0(u8);
    s32 fn_8024B7DC(s32);
    void fn_8025FA50(s32, u8, u8, s32);
    f64 fn_802387A8(f64, f64);
    f64 fn_802381A4(f64);
    SynthVoice *sv;
    SynthVoice *svNext;
    StreamTempo *t;
    VidList *node;
    VidList *nnext;
    VidList *tail;
    u32 *event;
    u32 result;
    u32 hasLists;
    u32 i;
    u32 j;
    u32 off;
    u32 sum;
    s32 cmp;
    f32 f;
    f32 f28;
    f32 f30;
    f32 f31;
    f32 f27;
    u8 *base;
    u8 *p;
    u8 ch;
    u8 v;

    if (arg0 == 0) {
        return;
    }
    sv = lbl_80368974;
    goto outer_test;
outer:
    svNext = sv->next;
    lbl_80368968 = (StreamState *)sv;
    lbl_80368960 = sv->id;
    lbl_8036895C = (u8)fn_8024ACB0(*(u8 *)((u8 *)sv + 0xED0));
    base = (u8 *)lbl_80368968;
    if (*(u32 *)(base + 0x1504) == 0) {
        t = (StreamTempo *)(base + 0x1508);
        if (t->start != NULL) {
            goto ev_check0;
        ev_body0:
            if (event[0] > t->buffers[t->active * 2 + 1]) {
                goto ev_done0;
            }
            if ((*(u32 *)(*(u8 **)((u8 *)lbl_80368968 + 0x118) + 0x10) & 0x40000000) != 0) {
                t->value = event[1];
                fn_80247F1C((s32)(event[1] >> 10), (u8)lbl_80368960, 0);
            } else {
                fn_80247F1C((s32)event[1], (u8)lbl_80368960, 0);
                t->value = t->cursor[1] << 10;
            }
            t->cursor += 2;
        ev_check0:
            event = t->cursor;
            if (event[0] != 0xFFFFFFFFU) {
                goto ev_body0;
            }
        }
    ev_done0:
        t = (StreamTempo *)((u8 *)lbl_80368968 + 0x1508);
        f = lbl_8036C1B0 * ((f32)t->value * (f32)arg0) * (lbl_8036C1B4 * (f32)t->scale);
        t->timing[t->active * 2] = fn_8022C568((f32)fn_802387A8(lbl_8036C1B8 * f, lbl_8036C1C0));
        t->timing[t->active * 2 + 1] = (s32)(f32)fn_802381A4(f);
        result = (u32)fn_80246EBC(0, arg0);
        for (i = 0; i < 2; i++) {
            node = *(VidList **)((u8 *)lbl_80368968 + 0xE64 + i * 4);
            if (node == NULL) {
                goto list_next0;
            }
            goto list_cmp0;
        list_body0:
            fn_8024A6F8(node->vid);
            nnext = node->next;
            *(VidList **)((u8 *)lbl_80368968 + 0xE64 + i * 4) = nnext;
            if (nnext != NULL) {
                nnext->prev = NULL;
            }
            node->next = *(VidList **)((u8 *)lbl_80368968 + 0xE6C);
            if (*(VidList **)((u8 *)lbl_80368968 + 0xE6C) != NULL) {
                (*(VidList **)((u8 *)lbl_80368968 + 0xE6C))->prev = node;
            }
            *(VidList **)((u8 *)lbl_80368968 + 0xE6C) = node;
            node = *(VidList **)((u8 *)lbl_80368968 + 0xE64 + i * 4);
            if (node == NULL) {
                goto list_next0;
            }
        list_cmp0:
            cmp = *(s32 *)((u8 *)lbl_80368968 + *(u8 *)((u8 *)node + 0x10) * 0x38 + 0x152C + i * 8);
            if ((s32)node->root <= cmp) {
                goto list_body0;
            }
        list_next0:
            ;
        }
        hasLists = 0;
        if (*(u32 *)((u8 *)lbl_80368968 + 0xE64) != 0 || *(u32 *)((u8 *)lbl_80368968 + 0xE68) != 0) {
            hasLists = 1;
        }
        if (*(u8 *)((u8 *)lbl_80368968 + 0xF02) == 0) {
            node = *(VidList **)((u8 *)lbl_80368968 + 0xE6C);
            goto free_test0;
        free_body0:
            nnext = node->next;
            if ((u32)(node->vid + 0x10000) != 0xFFFF &&
                (u32)(fn_8024B7DC((s32)node->vid) + 0x10000) == 0xFFFF) {
                if (node->next != NULL) {
                    node->next->prev = node->prev;
                }
                if (node->prev != NULL) {
                    node->prev->next = node->next;
                } else {
                    *(VidList **)((u8 *)lbl_80368968 + 0xE6C) = node->next;
                }
                node->next = lbl_80368964;
                if (lbl_80368964 != NULL) {
                    lbl_80368964->prev = node;
                }
                node->prev = NULL;
                lbl_80368964 = node;
            }
            node = nnext;
        free_test0:
            if (node != NULL) {
                goto free_body0;
            }
        }
        v = *(u8 *)((u8 *)lbl_80368968 + 0xF02);
        *(u8 *)((u8 *)lbl_80368968 + 0xF02) = (u8)((v + 1) % 5);
        sum = *(u32 *)((u8 *)lbl_80368968 + 0x1528) + *(u32 *)((u8 *)lbl_80368968 + 0x1514);
        *(u32 *)((u8 *)lbl_80368968 + 0x1528) = sum & 0xFFFF;
        *(u32 *)((u8 *)lbl_80368968 + 0x152C) =
            (sum >> 16) + (*(u32 *)((u8 *)lbl_80368968 + 0x1518) + *(u32 *)((u8 *)lbl_80368968 + 0x152C));
        sum = *(u32 *)((u8 *)lbl_80368968 + 0x1530) + *(u32 *)((u8 *)lbl_80368968 + 0x151C);
        *(u32 *)((u8 *)lbl_80368968 + 0x1530) = sum & 0xFFFF;
        *(u32 *)((u8 *)lbl_80368968 + 0x1534) =
            (sum >> 16) + (*(u32 *)((u8 *)lbl_80368968 + 0x1520) + *(u32 *)((u8 *)lbl_80368968 + 0x1534));
    } else {
        f28 = lbl_8036C1B0;
        f30 = lbl_8036C1B4;
        f31 = lbl_8036C1B8;
        result = 0;
        for (ch = 0; ch < 0x10; ch++) {
            t = (StreamTempo *)((u8 *)lbl_80368968 + (u32)ch * 0x38 + 0x1508);
            if (t->start != NULL) {
                goto ev_check1;
            ev_body1:
                if (event[0] > t->buffers[t->active * 2 + 1]) {
                    goto ev_done1;
                }
                if ((*(u32 *)(*(u8 **)((u8 *)lbl_80368968 + 0x118) + 0x10) & 0x40000000) != 0) {
                    t->value = event[1];
                    fn_80247F1C((s32)(event[1] >> 10), (u8)lbl_80368960, (s32)ch);
                } else {
                    fn_80247F1C((s32)event[1], (u8)lbl_80368960, (s32)ch);
                    t->value = t->cursor[1] << 10;
                }
                t->cursor += 2;
            ev_check1:
                event = t->cursor;
                if (event[0] != 0xFFFFFFFFU) {
                    goto ev_body1;
                }
            }
        ev_done1:
            t = (StreamTempo *)((u8 *)lbl_80368968 + (u32)ch * 0x38 + 0x1508);
            f27 = f28 * ((f32)t->value * (f32)arg0) * (f30 * (f32)t->scale);
            t->timing[t->active * 2] = fn_8022C568((f32)fn_802387A8(f31 * f27, lbl_8036C1C0));
            t->timing[t->active * 2 + 1] = (s32)(f32)fn_802381A4(f27);
            result |= (u32)fn_80246EBC(ch, arg0);
        }
        for (i = 0; i < 2; i++) {
            node = *(VidList **)((u8 *)lbl_80368968 + 0xE64 + i * 4);
            if (node == NULL) {
                goto list_next1;
            }
            goto list_cmp1;
        list_body1:
            fn_8024A6F8(node->vid);
            nnext = node->next;
            *(VidList **)((u8 *)lbl_80368968 + 0xE64 + i * 4) = nnext;
            if (nnext != NULL) {
                nnext->prev = NULL;
            }
            node->next = *(VidList **)((u8 *)lbl_80368968 + 0xE6C);
            if (*(VidList **)((u8 *)lbl_80368968 + 0xE6C) != NULL) {
                (*(VidList **)((u8 *)lbl_80368968 + 0xE6C))->prev = node;
            }
            *(VidList **)((u8 *)lbl_80368968 + 0xE6C) = node;
            node = *(VidList **)((u8 *)lbl_80368968 + 0xE64 + i * 4);
            if (node == NULL) {
                goto list_next1;
            }
        list_cmp1:
            cmp = *(s32 *)((u8 *)lbl_80368968 + *(u8 *)((u8 *)node + 0x10) * 0x38 + 0x152C + i * 8);
            if ((s32)node->root <= cmp) {
                goto list_body1;
            }
        list_next1:
            ;
        }
        hasLists = 0;
        if (*(u32 *)((u8 *)lbl_80368968 + 0xE64) != 0 || *(u32 *)((u8 *)lbl_80368968 + 0xE68) != 0) {
            hasLists = 1;
        }
        if (*(u8 *)((u8 *)lbl_80368968 + 0xF02) == 0) {
            node = *(VidList **)((u8 *)lbl_80368968 + 0xE6C);
            goto free_test1;
        free_body1:
            nnext = node->next;
            if ((u32)(node->vid + 0x10000) != 0xFFFF &&
                (u32)(fn_8024B7DC((s32)node->vid) + 0x10000) == 0xFFFF) {
                if (node->next != NULL) {
                    node->next->prev = node->prev;
                }
                if (node->prev != NULL) {
                    node->prev->next = node->next;
                } else {
                    *(VidList **)((u8 *)lbl_80368968 + 0xE6C) = node->next;
                }
                node->next = lbl_80368964;
                if (lbl_80368964 != NULL) {
                    lbl_80368964->prev = node;
                }
                node->prev = NULL;
                lbl_80368964 = node;
            }
            node = nnext;
        free_test1:
            if (node != NULL) {
                goto free_body1;
            }
        }
        v = *(u8 *)((u8 *)lbl_80368968 + 0xF02);
        *(u8 *)((u8 *)lbl_80368968 + 0xF02) = (u8)((v + 1) % 5);
        for (j = 0, off = 0; j < 8; j++, off += 0x70) {
            p = (u8 *)lbl_80368968 + off;
            sum = *(u32 *)(p + 0x1528) + *(u32 *)(p + 0x1514);
            *(u32 *)(p + 0x1528) = sum & 0xFFFF;
            *(u32 *)(p + 0x152C) = (sum >> 16) + (*(u32 *)(p + 0x1518) + *(u32 *)(p + 0x152C));
            sum = *(u32 *)(p + 0x1530) + *(u32 *)(p + 0x151C);
            *(u32 *)(p + 0x1530) = sum & 0xFFFF;
            *(u32 *)(p + 0x1534) = (sum >> 16) + (*(u32 *)(p + 0x1520) + *(u32 *)(p + 0x1534));
            p = (u8 *)lbl_80368968 + off + 0x38;
            sum = *(u32 *)(p + 0x1528) + *(u32 *)(p + 0x1514);
            *(u32 *)(p + 0x1528) = sum & 0xFFFF;
            *(u32 *)(p + 0x152C) = (sum >> 16) + (*(u32 *)(p + 0x1518) + *(u32 *)(p + 0x152C));
            sum = *(u32 *)(p + 0x1530) + *(u32 *)(p + 0x151C);
            *(u32 *)(p + 0x1530) = sum & 0xFFFF;
            *(u32 *)(p + 0x1534) = (sum >> 16) + (*(u32 *)(p + 0x1520) + *(u32 *)(p + 0x1534));
        }
    }
    if (result == 0 && hasLists == 0) {
        for (ch = 0; ch < 0x10; ch++) {
            fn_8025FA50(0x40, ch, (u8)lbl_80368960, 0);
        }
        if (sv->prev != NULL) {
            sv->prev->next = svNext;
        } else {
            lbl_80368974 = svNext;
        }
        if (svNext != NULL) {
            svNext->prev = sv->prev;
        }
        for (i = 0; i < 2; i++) {
            tail = *(VidList **)((u8 *)sv + 0xE64 + i * 4);
            if (tail != NULL) {
                while (tail->next != NULL) {
                    tail = tail->next;
                }
                if (lbl_80368964 != NULL) {
                    tail->next = lbl_80368964;
                    lbl_80368964->prev = tail;
                }
                lbl_80368964 = *(VidList **)((u8 *)sv + 0xE64 + i * 4);
                *(VidList **)((u8 *)sv + 0xE64 + i * 4) = NULL;
            }
        }
        tail = sv->listE6C;
        if (tail != NULL) {
            while (tail->next != NULL) {
                tail = tail->next;
            }
            if (lbl_80368964 != NULL) {
                tail->next = lbl_80368964;
                lbl_80368964->prev = tail;
            }
            lbl_80368964 = sv->listE6C;
            sv->listE6C = NULL;
        }
        sv->state = 0;
        sv->prev = NULL;
        sv->next = lbl_8036896C;
        if (lbl_8036896C != NULL) {
            lbl_8036896C->prev = sv;
        }
        lbl_8036896C = sv;
    }
    sv = svNext;
outer_test:
    if (sv != NULL) {
        goto outer;
    }
}

#pragma opt_common_subs reset
#pragma opt_loop_invariants reset
#pragma opt_strength_reduction reset
void fn_80247D74(void)
{
    extern u32 lbl_80368974;

    u8 *pool1;
    u8 *pool2;
    u8 *entry;
    u8 *previous;
    u32 i;
    u32 j;

    lbl_80368974 = 0;

    /* Rest of your existing function */
}

void fn_80247F1C(u32 arg0, u8 arg1, u8 arg2) {
    extern u8 lbl_8034BED0[];
    if (arg1 == 0xFF) {
        *(u32 *)(lbl_8034BED0 + ((u8)8 << 6) + (arg2 << 2)) =
            ((arg0 << 3) * 0x600u) / 240u;
    }
}

s32 fn_80247F60(void *arg0) {
    extern u8 lbl_8034BED0[];
    u8 temp_r0;
    u32 var_r4;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x122);
    var_r4 = 8;
    if (temp_r0 != 0xFF) {
        var_r4 = temp_r0;
    }
    return *(s32 *)((u8 *) lbl_8034BED0 + (var_r4 << 6) + (M2C_FIELD(arg0, u8 *, 0x123) << 2));
}

void fn_80247F94(void *arg0) {
    s32 temp_r5;
    s32 temp_r7;

    temp_r7 = M2C_FIELD(arg0, s32 *, 0x118);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x114) & 0x20000;
    if ((((temp_r7 & 0x20000) ^ 0) | (temp_r5 ^ 0)) == 0) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x133) == 1) {
            if ((((temp_r7 & 0x1000) ^ 0) | (temp_r5 ^ 0)) == 0) {
                M2C_FIELD(arg0, s32 *, 0x140) = 0;
            } else {
                M2C_FIELD(arg0, s32 *, 0x140) = (s32) M2C_FIELD(arg0, s32 *, 0x138);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x140) = (s32) M2C_FIELD(arg0, s32 *, 0x138);
        }
        M2C_FIELD(arg0, s32 *, 0x13C) = (s32) (M2C_FIELD(arg0, u8 *, 0x132) << 0x10);
    }
}

#pragma global_optimizer on
s32 fn_8024800C(u8 key, u8 group, u8 channel, s32 arg3, s32 *status) {
 void fn_80255B20(void*); s32 fn_80255E9C(void*,s32);
 void fn_80257614(void*); void fn_80260174(u8,u8,u8); u32 fn_802616F4(u32);
 s32 offset; u32 keyValue; u32 i; u32 result; s32 previous; u8 *voice; u8 *last; s32 found;
 u64 flags;
 keyValue=key;
 voice=(u8*)lbl_803689A8;
 found=0; result=-1; i=0; offset=0;
 for(;i<lbl_8034C110[0x210];offset+=0x458,i++,voice+=0x458) {
  if(voice[0x11C]==0 && (u32)(*(s32*)(voice+0xF4)+0x10000)!=0xFFFF && voice[0x121]==group && voice[0x122]==channel) {
   flags=*(u64*)(voice+0x114);
   if((flags&2ULL)!=0) found=1;
   if((flags&0x10ULL)!=0 && (flags&0x10000000008ULL)!=8ULL && fn_802616F4(i)!=0) {
    if(result==0xFFFFFFFF && (*(u64*)(voice+0x114)&0x20002ULL)==0x20002ULL) {
     *status=1; return -1;
    }
    *(s32*)(voice+0x13C)=(*(u16*)(voice+0x12E)<<16)+(((s8)voice[0x130]<<16)/100);
    last=voice;
    voice[0x132]=*(u16*)(voice+0x12E);
    *(u16*)(voice+0x12E)=keyValue+((u8)*(u16*)(voice+0x12E)-voice[0x131]);
    voice[0x131]=key;
    voice[0x130]=0;
    *(s32*)(voice+0x140)=0;
    *(u64*)(voice+0x114)|=0x20000ULL;
    fn_80255B20((u8*)lbl_803689A8+offset);
    if(result==0xFFFFFFFF) {
     *(s32*)(voice+0xEC)=-1;
     *(s32*)(voice+0xF0)=-1;
     result=fn_80255E9C((u8*)lbl_803689A8+offset,arg3);
     previous=*(s32*)(voice+0xF4);
    } else {
     ((SynthStateLink*)lbl_803689A8)[(u8)previous].next=*(s32*)(voice+0xF4);
     *(s32*)(voice+0xF0)=previous;
     previous=*(s32*)(voice+0xF4);
     fn_80255E9C((u8*)lbl_803689A8+offset,0);
    }
   }
  }
 }
 if(result!=0xFFFFFFFF) {
  fn_80257614(last);
  fn_80260174(last[0x121],last[0x122],(u8)*(u16*)(last+0x12E));
  *status=0;
 } else *status=found;
 return result;
}

s32 fn_802482AC(u16 id, s16 volume, s32 arg2, s32 arg3, u8 key, u8 velocity, u8 pan, u8 channel, u8 a8, u8 a9, u16 a10, u16 a11, u32 a12, u8 a13, u8 a14, s32 a15) {
s32 fn_8025094C(u16,u16 *);
s32 fn_802555A0(u16,u8,s32,s32,u8,u8,u8,u8,u8,u8,u16,u16,u32,u8,u8,s32);
s32 fn_8024866C(u16,s16,s32,s32,u8,u8,u8,u8,u8,u8,u16,u16,u32,u8,u8,s32);
s32 fn_80255E88(void *);
extern s32 lbl_803689A8;
u32 low; s32 note; u32 high; s32 result; s32 last; u8 *entry; s32 first; s32 value; s32 balance; s32 flags; u8 vel; u32 savedPan; u32 valid; s32 status; u16 count; u8 savedVelocity;
savedVelocity=velocity; first=-1;
entry=(u8 *)fn_8025094C(id,&count);
if(entry) {
low=key&127; high=key&128; savedPan=pan;
while(count) {
u16 sample=*(u16 *)entry;
if(sample!=65535 && entry[2]<=low && entry[3]>=low) {
value=low+(s8)entry[4];
if(value>127) note=127; else note=value & ~(value>>31);
if(!(sample&0xC000)) {
if(fn_8025FC64(0x41,channel,a8)>0x1F80U) {
result=fn_8024800C(note&127,channel,a8,0,&status);
valid=status==0;
} else { result=-1; valid=1; }
if(!valid) goto next;
if((u32)(result+0x10000)!=0xFFFF) goto link;
}
balance=entry[8];
if(!(balance&128)) {
balance=balance-64; balance+=savedPan;
if(balance<0) balance=0; else if(balance>127) balance=127;
} else balance=128;
volume+=*(s16 *)(entry+6);
vel=savedVelocity*entry[5]/127;
if(volume>255) volume=255; else volume=volume & ~(volume>>31);
flags=*(u16 *)entry&0xC000;
switch(flags) {
case 0: result=fn_802555A0(*(u16 *)entry,(u8)volume,arg2,arg3,(u8)(note|high),vel,(u8)balance,channel,a8,a9,a10,a11,0,a13,a14,a15); break;
case 0x4000: result=fn_8024866C(*(u16 *)entry,volume,arg2,arg3,(u8)(note|high),vel,(u8)balance,channel,a8,a9,a10,a11,0,a13,a14,a15); break;
case 0x8000: result=fn_802482AC(*(u16 *)entry,volume,arg2,arg3,(u8)(note|high),vel,(u8)balance,channel,a8,a9,a10,a11,0,a13,a14,a15); break;
}
if((u32)(result+0x10000)!=0xFFFF) {
link:
if((u32)(first+0x10000)==0xFFFF) {
if(a12) first=fn_80255E88((u8 *)lbl_803689A8+(u8)result*0x458);
else first=result;
} else {
*(s32 *)((u8 *)lbl_803689A8+(u8)last*0x458+0xEC)=result;
*(s32 *)((u8 *)lbl_803689A8+(u8)result*0x458+0xF0)=last;
}
last=result;
while((u32)(*(s32 *)((u8 *)lbl_803689A8+(u8)last*0x458+0xEC)+0x10000)!=0xFFFF) {
*((u8 *)lbl_803689A8+(u8)last*0x458+0x11C)=1;
last=*(s32 *)((u8 *)lbl_803689A8+(u8)last*0x458+0xEC);
}
*((u8 *)lbl_803689A8+(u8)last*0x458+0x11C)=1;
}
}
next: entry+=12; count--;
}
}
return first;
}

#pragma global_optimizer off
s32 fn_8024866C(u16 id, s16 volume, s32 arg2, s32 arg3, s32 key, s32 arg5, u8 pan, s32 arg7, u8 a8, u8 a9, u16 a10, u16 a11, s32 a12, u8 a13, u8 a14, s32 a15) {
    s32 fn_802508E0(u16);
    u16 fn_8025FC64(u8, s32, u8);
    s32 fn_8024800C(s32, s32, u8, s32, s32 *);
    s32 fn_802482AC(u16, s16, s32, s32, u8, s32, u8, s32, u8, u8, u16, u16, u8, u8, u8, s32);
    s32 fn_802555A0(u16, u8, s32, s32, u8, s32, u8, s32, u8, u8, u16, u16, u8, u8, u8, s32);
    u8 *table;
    u8 *entry;
    u8 *alt;
    u8 *row;
    u32 offset;
    u32 low;
    u8 original;
    s32 note;
    s32 flags;
    s32 value;
    s32 result;
    u32 valid;
    s32 status;
    u16 sample;
    s16 v;
    u16 save10;
    u16 save11;
    s32 save15;

    save10 = a10;
    save11 = a11;
    save15 = a15;
    table = (u8 *)fn_802508E0(id);
    if (table != 0) {
        original = key;
        offset = (key & 0x7F) * 8;
        low = key & 127;
        entry = table + offset;
        sample = *(u16 *)entry;
        if (sample != 0xFFFF) {
            flags = sample & 0xC000;
            if (flags != 0x4000) {
                if (!(entry[3] & 0x80)) {
                    alt = table + ((u8)key << 3);
                    value = alt[3] - 0x40;
                    value += pan;
                    if (value < 0)
                        pan = 0;
                    else if (value > 127)
                        pan = 127;
                    else
                        pan = (u8)value;
                } else
                    pan = 128;
                row = table + offset;
                note = low + *(s8 *)(row + 2);
                if (note > 127)
                    key = 127;
                else
                    key = note & ~(note >> 31);
                volume += *(s16 *)(row + 4);
                v = volume;
                if (v > 255)
                    v = 255;
                else
                    v = v & ~(v >> 31);
                volume = v;
                if (flags == 0) {
                    if (fn_8025FC64(0x41, arg7, a8) > 0x1F80U) {
                        result = fn_8024800C(key & 127, arg7, a8, a12, &status);
                        valid = status == 0;
                    } else {
                        result = -1;
                        valid = 1;
                    }
                    if (valid == 0)
                        return -1;
                    if ((u32)(result + 0x10000) != 0xFFFF)
                        return result;
                    return fn_802555A0(*(u16 *)entry, (u8)volume, arg2, arg3, (u8)(key | (original & 128)), arg5, pan, arg7, a8, a9, save10, save11, (u8)a12, a13, a14, save15);
                }
                return fn_802482AC(sample, volume, arg2, arg3, (u8)(key | (original & 128)), arg5, pan, arg7, a8, a9, save10, save11, (u8)a12, a13, a14, save15);
            }
        }
    }
    return -1;
}

void fn_80248D28(s32 arg0)
{
    extern s32 lbl_803689A8;
    extern s32 lbl_803689B8;
    extern s32 lbl_803689BC;
    u32 fn_802616F4(u32);
    s16 fn_80261214(s32);
    s32 fn_8025807C(s32, s32, s32);
    s32 fn_80260764(void *);
    s32 fn_802607F4(void *);
    u16 fn_8025FC64(s32, u8);
    s32 fn_8025785C(u8, s32);
    s32 fn_80257820(u16);
    u16 fn_802607AC(void *);
    void fn_80261BC8(s32, u16);
    void fn_80249C1C(void *, s32, s32);

    u8 spA;
    u8 sp8;
    u8 *voice;
    u8 *p;
    s32 delta;
    s32 i;
    s32 pitch;
    s32 t;
    s32 t2;
    u16 w;
    u64 flags;
    u64 now;

    voice = (u8 *)lbl_803689A8 + arg0 * 0x458;
    if (fn_802616F4(arg0) != 0 || *(u32 *)(voice + 0x34) != 0) {
        p = voice;
        i = 0;
        now = ((u64)(u32)lbl_803689B8 << 32) | (u32)lbl_803689BC;
        delta = (s32)(now - ((((u64)*(u32 *)(voice + 0x24) << 32) | *(u32 *)(voice + 0x28))));
        *(s32 *)(voice + 0x28) = lbl_803689BC;
        *(s32 *)(voice + 0x24) = lbl_803689B8;
        do {
            if (*(u32 *)(p + 0x1C4) != 0) {
                *(u32 *)(p + 0x1C0) += delta;
                {
                    u32 per = *(u32 *)(p + 0x1C4);
                    u32 pos = *(u32 *)(p + 0x1C0);
                    w = (u16)(((pos % per) * 0x10) / (per >> 8));
                    *(s16 *)(p + 0x1C8) = fn_80261214(w);
                }
                if (*(s16 *)(p + 0x1C8) != *(s16 *)(p + 0x1CA)) {
                    *(s16 *)(p + 0x1CA) = *(s16 *)(p + 0x1C8);
                    t = i + 0x1D8;
                    if (voice[t] != 0) {
                        voice[t] = 0;
                        *(u32 *)(voice + 0x220) |= 0x7FFF;
                    }
                }
            }
            i += 1;
            p += 0xC;
        } while ((u32)i < 2U);

        if ((*(u64 *)(voice + 0x114) & 0x2000ULL) != 0) {
            *(u32 *)(voice + 0x14C) += delta;
            {
                u32 per = *(u32 *)(voice + 0x148);
                u32 pos = *(u32 *)(voice + 0x14C);
                *(s32 *)(voice + 0x150) =
                    (s16)fn_80261214((u16)(((pos % per) * 0x10) / (per >> 8)));
            }
        }

        if ((voice[0x1BC] | voice[0x1BD]) != 0) {
            t = (delta << 4) & 0x0FFFFFF0;
            t2 = delta & 0x0FFFFFFF;
            if (voice[0x1BC] != 0) {
                *(s32 *)(voice + 0x1B4) -= t;
                if (*(s32 *)(voice + 0x1B4) <= 0) {
                    *(s32 *)(voice + 0x1B4) = voice[0x1BC] << 16;
                    *(s32 *)(voice + 0x1A4) = 0;
                } else {
                    *(s32 *)(voice + 0x1A4) += (*(s32 *)(voice + 0x1AC) >> 12) * t2;
                }
            }
            if (voice[0x1BD] != 0) {
                *(s32 *)(voice + 0x1B8) -= t;
                if (*(s32 *)(voice + 0x1B8) <= 0) {
                    *(s32 *)(voice + 0x1B8) = voice[0x1BD] << 16;
                    *(s32 *)(voice + 0x1A8) = 0;
                } else {
                    *(s32 *)(voice + 0x1A8) += (*(s32 *)(voice + 0x1B0) >> 12) * t2;
                }
            }
        }

        p = voice;
        i = 2;
        do {
            if (*(u32 *)(p + 0x174) != *(u32 *)(p + 0x184)) {
                *(s32 *)(p + 0x18C) -= delta;
                t = *(s32 *)(p + 0x18C);
                if (t <= 0) {
                    *(u32 *)(p + 0x174) = *(u32 *)(p + 0x184);
                    *(s32 *)(p + 0x18C) = 0;
                } else {
                    *(u32 *)(p + 0x174) =
                        *(u32 *)(p + 0x184) - (((u32)t >> 8) * *(u32 *)(p + 0x17C));
                    t2 = *(s32 *)(p + 0x174);
                    if (t2 < 0) {
                        t = 0;
                    } else if ((u32)t2 > 0x7F0000U) {
                        t = 0x7F0000;
                    } else {
                        t = t2;
                    }
                    *(s32 *)(p + 0x174) = t;
                }
                *(u32 *)(voice + 0x114) |= 0x2000;
            }
            p += 4;
            i -= 1;
        } while (i != 0);

        if ((*(u64 *)(voice + 0x114) & 0x20000000000ULL) != 0) {
            if (fn_8025807C((s32)(voice + 0x1E8), (s32)&spA, (s32)&sp8) != 0) {
                *(u32 *)(voice + 0x114) &= ~0x200;
            }
        }

        pitch = (*(u16 *)(voice + 0x12E) << 16) + (((s8)voice[0x130] << 16) / 100);
        if ((*(u64 *)(voice + 0x114) & 0x10030ULL) != 0) {
            if (voice[0x121] != 0xFF) {
                t = fn_80260764(voice);
                *(u16 *)(voice + 0x1DC) = (u16)t;
                t = (u16)t;
                if (t != 0x2000) {
                    t2 = t - 0x2000;
                    if (t2 < 0) {
                        pitch += voice[0x1DA] * t2 * 8;
                    } else {
                        pitch += voice[0x1DB] * t2 * 8;
                    }
                }
            }
        } else {
            t = *(u16 *)(voice + 0x1DC);
            if (t != 0x2000) {
                t2 = t - 0x2000;
                if (t2 < 0) {
                    pitch += voice[0x1DA] * t2 * 8;
                } else {
                    pitch += voice[0x1DB] * t2 * 8;
                }
            }
        }

        if ((*(u64 *)(voice + 0x114) & 0x2000ULL) != 0) {
            w = (u16)fn_802607F4(voice);
            t = (voice[0x144] << 8) + ((voice[0x145] << 8) / 100);
            if (*(s16 *)(voice + 0x154) != 0) {
                t += (*(s16 *)(voice + 0x154) * ((s32)w >> 7)) >> 7;
            }
            if ((*(u64 *)(voice + 0x114) & 0x4000ULL) != 0) {
                t2 = (*(s32 *)(voice + 0x150) * ((s32)w >> 7)) >> 7;
            } else {
                t2 = *(s32 *)(voice + 0x150);
            }
            pitch += (t * t2) >> 4;
        }

        if (voice[0x121] != 0xFF) {
            w = fn_8025FC64(0x41, voice[0x122]);
            if (w != *(u16 *)(voice + 0x134) ||
                (*(u64 *)(voice + 0x114) & 0x21000ULL) == 0x20000ULL) {
                if (w <= 0x1F80U) {
                    *(u32 *)(voice + 0x118) &= ~0x400;
                } else {
                    flags = *(u64 *)(voice + 0x114);
                    if ((flags & 0x400ULL) == 0 && (flags & 0x20000ULL) == 0) {
                        if (voice[0x133] == 1) {
                            if ((flags & 0x1000ULL) == 0) {
                                *(s32 *)(voice + 0x140) = 0;
                            } else {
                                *(s32 *)(voice + 0x140) = *(s32 *)(voice + 0x138);
                            }
                        } else {
                            *(s32 *)(voice + 0x140) = *(s32 *)(voice + 0x138);
                        }
                        *(u32 *)(voice + 0x13C) = voice[0x132] << 16;
                    }
                    *(u32 *)(voice + 0x118) |= 0x400;
                }
                *(u32 *)(voice + 0x118) |= 0x1000;
                *(u16 *)(voice + 0x134) = w;
            }
        }

        t = pitch;
        if ((*(u64 *)(voice + 0x114) & 0x400ULL) != 0) {
            t2 = (u32)(*(s32 *)(voice + 0x138) - *(s32 *)(voice + 0x140)) >> 8;
            if (t2 > 0) {
                i = *(u32 *)(voice + 0x13C);
                *(u32 *)(voice + 0x13C) =
                    i + ((delta * ((s32)(pitch - i) >> 8)) / t2);
                if ((i < (u32)pitch && *(u32 *)(voice + 0x13C) < (u32)pitch) ||
                    (i > (u32)pitch && *(u32 *)(voice + 0x13C) > (u32)pitch)) {
                    t = *(s32 *)(voice + 0x13C);
                    *(s32 *)(voice + 0x140) += delta;
                } else {
                    *(s32 *)(voice + 0x140) = *(s32 *)(voice + 0x138);
                }
            }
        }

        if ((*(u64 *)(voice + 0x114) & 0x20000000000ULL) != 0) {
            t += (*(s16 *)(voice + 0x210) * (*(s32 *)(voice + 0x1F0) >> 16)) >> 7;
        }

        pitch = fn_8025785C((u8)((u32)t >> 16), *(s32 *)(voice + 0x124)) << 16;
        if ((u16)t != 0) {
            t2 = (u32)pitch >> 16;
            pitch += (u16)t * (fn_80257820((u16)t2) - t2);
        }
        pitch = *(s32 *)(voice + 0x1A8) + pitch;
        pitch = *(s32 *)(voice + 0x1A4) + pitch;
        w = (u16)((((u32)pitch >> 16) * fn_802607AC(voice)) >> 13);
        *(u16 *)(voice + 0x212) = w;
        fn_80261BC8(arg0, w);
        fn_80249C1C(voice, 0, 0xF00);
    }

    if (voice[0xA8] != 0) {
        voice[0xA8] = 0;
        *(u32 *)(voice + 0x220) = 0x7FFF;
    }
}

void fn_8024946C(s32 arg0) {
    u32 fn_802616F4(s32);
    void fn_80249C1C(void *, s32, s32);
    u8 fn_802616EC(void);
    extern s32 lbl_803689A8;
    extern s32 lbl_803689B8;
    extern s32 lbl_803689BC;
    extern s32 lbl_803689A4;
    extern f32 lbl_8034C324[];
    extern u8 lbl_8034C924[];
    extern f64 lbl_8036C1F8;
    extern f64 lbl_8036C200;
    extern f32 lbl_8036C1D0;
    extern f32 lbl_8036C1D4;
    extern f32 lbl_8036C1D8;
    extern f32 lbl_8036C1DC;
    extern f32 lbl_8036C1E0;
    extern f32 lbl_8036C1E4;
    extern f32 lbl_8036C1E8;
    extern f32 lbl_8036C1EC;
    extern f32 lbl_8036C1F0;

    u8 *ch;
    u32 dt;
    s32 dirty;
    f32 vol;
    f32 pitch;

    ch = (u8 *)lbl_803689A8 + arg0 * 0x458;
    if (fn_802616F4(arg0) != 0) {
        goto fin;
    }
    if (*(u32 *)(ch + 0x34) == 0) {
        goto fin;
    }
    dt = lbl_803689BC - *(u32 *)(ch + 0x30);
    *(u32 *)(ch + 0x30) = lbl_803689BC;
    *(u32 *)(ch + 0x2C) = lbl_803689B8;
    dirty = 0;
    if (*(u32 *)(ch + 0x118) & 0x8000) {
        *(s32 *)(ch + 0x1A0) += *(s32 *)(ch + 0x198) * (s32)(dt >> 8);
        if (*(s32 *)(ch + 0x198) < 0) {
            if (*(s32 *)(ch + 0x19C) >= *(s32 *)(ch + 0x1A0)) {
                *(s32 *)(ch + 0x1A0) = *(s32 *)(ch + 0x19C);
                *(u32 *)(ch + 0x118) &= ~0x8000;
            }
        } else {
            if (*(s32 *)(ch + 0x19C) <= *(s32 *)(ch + 0x1A0)) {
                *(s32 *)(ch + 0x1A0) = *(s32 *)(ch + 0x19C);
                *(u32 *)(ch + 0x118) &= ~0x8000;
            }
        }
        dirty = 1;
        *(s32 *)(ch + 0x158) = *(s32 *)(ch + 0x1A0);
    } else {
        dirty = (*(u32 *)(ch + 0x114) & 0x1000) != 0;
    }
    *(u32 *)(ch + 0x114) &= ~0x1000;
    {
        s32 idx = ch[0x11E] * 0x30;
        f32 *tbl = lbl_8034C324;
        vol = tbl[idx / 4 + 5] * tbl[idx / 4] * tbl[((ch[0x11D] != 0) + 0x15) * 0x30 / 4];
        if (ch[0x120] != 0xFF) {
            vol = lbl_8036C1D0 * (vol * (f32)lbl_8034C924[ch[0x120]]);
        }
        if (vol != *(f32 *)(ch + 0x160)) {
            *(f32 *)(ch + 0x160) = vol;
            dirty = 1;
        }
        pitch = lbl_8036C1D4 * (f32)*(s32 *)(ch + 0x158);
    }
    (void)pitch;
    (void)dirty;
    (void)dt;
    fn_80249C1C(ch, 1, (5 - fn_802616EC()) << 8);
fin:
    if (ch[0xA8] != 0) {
        ch[0xA8] = 0;
        *(u32 *)(ch + 0x220) = 0x7FFF;
    }
}

void fn_80249C1C(void *arg0, s32 arg1, u32 arg2)
{
    extern u8 lbl_80368979;
    extern u8 lbl_8034C964[];

    u8 *node;
    u8 *table;
    u8 *bucket;
    u8 *oldBucket;
    u8 *prev;
    u8 *next;
    u8 *head;
    u32 index;
    u32 oldIndex;

    index = ((arg2 >> 8) + lbl_80368979) & 0x1F;
    table = lbl_8034C964;
    bucket = table + index * 0xC;

    switch (arg1) {
    case 0:
        node = (u8 *)arg0;

        oldIndex = node[9];

        if (oldIndex != 0xFF) {
            if (oldIndex == index) {
                return;
            }

            prev = *(u8 **)node;

            if (prev != 0) {
                *(void **)(prev + 4) = *(void **)(node + 4);
            }

            next = *(u8 **)(node + 4);

            if (next != 0) {
                *(void **)next = *(void **)node;
            } else if (prev == 0) {
                oldBucket = table + oldIndex * 0xC;
                *(void **)oldBucket = *(void **)node;
            }
        }

        head = bucket;
        break;

    case 1:
        node = (u8 *)arg0 + 0xC;

        oldIndex = node[9];

        if (oldIndex != 0xFF) {
            if (oldIndex == index) {
                return;
            }

            prev = *(u8 **)node;

            if (prev != 0) {
                *(void **)(prev + 4) = *(void **)(node + 4);
            }

            next = *(u8 **)(node + 4);

            if (next != 0) {
                *(void **)next = *(void **)node;
            } else if (prev == 0) {
                oldBucket = table + oldIndex * 0xC;
                *(void **)(oldBucket + 8) = *(void **)node;
            }
        }

        head = bucket + 8;
        break;

    case 2:
        node = (u8 *)arg0 + 0x18;

        if (node[9] != 0xFF) {
            return;
        }

        head = bucket + 4;
        break;

    default:
        return;
    }

    node[9] = (u8)index;

    next = *(u8 **)head;
    *(void **)node = next;

    if (next != 0) {
        *(void **)(next + 4) = node;
    }

    *(void **)(node + 4) = 0;
    *(void **)head = node;
}

#pragma global_optimizer reset
void fn_80249D6C(void *arg0) {
    void fn_80249C1C(void *, s32, s32);
    extern s32 lbl_803689B8;
    extern s32 lbl_803689BC;
    s32 t;

    t = lbl_803689B8;
    M2C_FIELD(arg0, s32 *, 0x28) = lbl_803689BC;
    M2C_FIELD(arg0, s32 *, 0x24) = t;
    t = lbl_803689B8;
    M2C_FIELD(arg0, s32 *, 0x30) = lbl_803689BC;
    M2C_FIELD(arg0, s32 *, 0x2C) = t;
    fn_80249C1C(arg0, 0, 0);
    fn_80249C1C(arg0, 1, 0);
}

void fn_80249DD0(s32 arg0) {
    void fn_80249C1C(s32, s32, s32);
    fn_80249C1C(arg0, 0, 0);
    fn_80249C1C(arg0, 1, 0);
}

void fn_80249E14(void *arg0) {
    void fn_80249C1C(void *, s32, s32);
    fn_80249C1C(arg0, 2, 0);
}

void fn_80249E3C(s32 arg0) {
    void fn_80254F00(u32);
    void fn_80248D28(s32);
    void fn_8024946C(s32);
    u32 fn_802616F4(s32);
    u16 fn_8026083C(void *);
    void fn_802551F0(void *, u32);
    void fn_80261B64(s32, s32);
    void fn_80261BA0(s32);
    u32 fn_80257D7C(void *);
    u8 fn_802616EC(void);
    void fn_80244D64(s32);
    void fn_80244AE8(s32);
    void fn_80245290(s32, s32, s32);
    s32 fn_80260A7C(u32, u32, u32, u32);
    s32 fn_80260B30(u32, u32, u32, u32);
    void fn_802624D8(void);

    extern u8 lbl_8034BED0[];
    extern u8 lbl_80368979;
    extern s32 lbl_803689A8;
    extern s32 lbl_803689A0;
    extern s32 lbl_8036899C;
    extern f32 lbl_8036C208;
    extern u8 lbl_80368994;
    extern u8 lbl_8036898C;
    extern u8 lbl_80368984;
    extern u8 lbl_8036897C;
    extern s32 lbl_803689B8;
    extern s32 lbl_803689BC;

    typedef void (*AudioCb)(s32, s16 *, s32);

    s16 bufA[4];
    s16 bufB[4];
    u8 *base;
    u8 *slot;
    u8 *node;
    u8 *next;
    u8 *voice;
    u8 fill;
    u8 id;
    u8 oldIdx;
    u32 bit;
    u32 i;
    u32 j;
    u32 off;
    f32 *anim;
    s32 *c14;
    AudioCb *c34;
    s32 *c54;
    AudioCb *c74;
    u8 *p94;
    u8 *p8c;
    u8 *p84;
    u8 *p7c;
    u32 sum;
    s32 kind;
    u32 *gate;

    base = lbl_8034BED0;
    gate = (u32 *)(base + 0x240);
    if (gate[1] == 0) {
        return;
    }

    fn_80254F00((u32)arg0);

    slot = base + 0xA94;
    fill = 0xFF;
    slot += lbl_80368979 * 0xC;

    node = *(u8 **)slot;
    while (node != NULL) {
        next = *(u8 **)node;
        node[9] = fill;
        id = node[8];
        off = id * 0x458;
        if (((u8 *)lbl_803689A8)[off + 0x11C] == 0) {
            fn_80248D28(id);
        }
        node = next;
    }
    *(u8 **)slot = NULL;

    node = *(u8 **)(slot + 4);
    while (node != NULL) {
        next = *(u8 **)node;
        node[9] = 0xFF;
        id = node[8];
        off = id * 0x458;
        if (((u8 *)lbl_803689A8)[off + 0x11C] == 0) {
            voice = (u8 *)lbl_803689A8 + off;
            if (fn_802616F4(id) != 0 || *(u32 *)(voice + 0x34) != 0) {
                fn_802551F0(voice, (u32)(0x1F80 - (u16)fn_8026083C(voice)) >> 31);
                if ((*(u32 *)(voice + 0x118) & 0x20) != 0) {
                    *(u32 *)(voice + 0x118) = (*(u32 *)(voice + 0x118) & ~0x20u) | 0x10u;
                    fn_80261B64(id, voice[0x11F]);
                }
                if ((*(u32 *)(voice + 0x118) & 0x90) == 0x90 &&
                    (*(u32 *)(voice + 0x114) & 0x100) == 0) {
                    *(u32 *)(voice + 0x118) &= ~0x90u;
                    fn_80261BA0(id);
                    if ((*(u32 *)(voice + 0x114) & 0x200) != 0 &&
                        fn_80257D7C(voice + 0x1E8) != 0) {
                        *(u32 *)(voice + 0x114) &= ~0x200u;
                    }
                }
            }
            if (voice[0xA8] != 0) {
                voice[0xA8] = 0;
                *(u32 *)(voice + 0x220) = 0x7FFF;
            }
        }
        node = next;
    }
    *(u8 **)(slot + 4) = NULL;

    fill = 0xFF;
    node = *(u8 **)(slot + 8);
    while (node != NULL) {
        next = *(u8 **)node;
        node[9] = fill;
        id = node[8];
        off = id * 0x458;
        if (((u8 *)lbl_803689A8)[off + 0x11C] == 0) {
            fn_8024946C(id);
        }
        node = next;
    }
    *(u8 **)(slot + 8) = NULL;

    oldIdx = lbl_80368979;
    lbl_80368979 = (u8)((oldIdx + 1) & 0x1F);

    if (fn_802616EC() == 0) {
        if (((u32)lbl_803689A0 | (u32)lbl_8036899C) != 0) {
            anim = (f32 *)(base + 0x454);
            i = 0;
            bit = 1;
            do {
                if (((u32)lbl_803689A0 & bit) != 0) {
                    anim[0] = anim[1] - anim[3] * (anim[1] - anim[2]);
                    anim[3] -= anim[4];
                    if (anim[3] <= lbl_8036C208) {
                        anim[0] = anim[1];
                        kind = ((s8 *)anim)[0x2C];
                        switch (kind) {
                        case 1:
                            fn_80244D64(*(s32 *)((u8 *)anim + 0x28));
                            break;
                        case 2:
                            fn_80244AE8(*(s32 *)((u8 *)anim + 0x28));
                            break;
                        case 3:
                            fn_80245290(*(s32 *)((u8 *)anim + 0x28), 0, 0);
                            break;
                        }
                        lbl_803689A0 = (s32)((u32)lbl_803689A0 & ~bit);
                        if (lbl_803689A0 == 0 && lbl_8036899C == 0) {
                            break;
                        }
                    }
                }
                if (((u32)lbl_8036899C & bit) != 0) {
                    anim[5] = anim[6] - anim[8] * (anim[6] - anim[7]);
                    anim[8] -= anim[9];
                    if (anim[8] <= lbl_8036C208) {
                        anim[5] = anim[6];
                        lbl_8036899C = (s32)((u32)lbl_8036899C & ~bit);
                        if (lbl_8036899C == 0 && lbl_803689A0 == 0) {
                            break;
                        }
                    }
                }
                i += 1;
                bit <<= 1;
                anim = (f32 *)((u8 *)anim + 0x30);
            } while (i < 0x20);
        }

        c14 = (s32 *)(base + 0xC14);
        c34 = (AudioCb *)(base + 0xC34);
        c54 = (s32 *)(base + 0xC54);
        c74 = (AudioCb *)(base + 0xC74);
        p94 = &lbl_80368994;
        p8c = &lbl_8036898C;
        p84 = &lbl_80368984;
        p7c = &lbl_8036897C;

        for (i = 0; i < 8; i++) {
            if (p94[i] != 0xFF) {
                for (j = 0; j < 4; j++) {
                    bufA[j] = (s16)fn_80260A7C((u8)i, (u8)j, p94[i], p8c[i]);
                }
                c34[i](1, bufA, c14[i]);
            }
            if (p84[i] != 0xFF) {
                for (j = 0; j < 4; j++) {
                    bufB[j] = (s16)fn_80260B30((u8)i, (u8)j, p84[i], p7c[i]);
                }
                c74[i](1, bufB, c54[i]);
            }
        }
    }

    fn_802624D8();

    sum = (u32)lbl_803689BC + (u32)arg0;
    lbl_803689B8 += (sum < (u32)lbl_803689BC);
    lbl_803689BC = (s32)sum;
}

void fn_8024A34C(u16 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4, s32 arg5) {
    void *r3;
    
    r3 = (void *)fn_802509D8();
    if (r3 != NULL) {
        *(u16*)((char*)r3 + 0x2) = arg0 | 0x80000000;
    }
}

s32 fn_8024A430(u16 arg0) {
    void *fn_802509D8();
    s32 fn_80256738(u8, u8, s32, M2C_UNK, s32 *);
    s32 sp8;
    s32 temp_r31;
    void *temp_r3;

    temp_r3 = fn_802509D8();
    if (temp_r3 == NULL) {
        return 0;
    }
    temp_r31 = arg0 | 0x80000000;
    if (fn_80256738(M2C_FIELD(temp_r3, u8 *, 5), M2C_FIELD(temp_r3, u8 *, 4), temp_r31, 1, &sp8) != 0) {
        return temp_r31 == sp8;
    }
    return 0;
}

s32 fn_8024A4AC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 ret;
    s32 var_r3;
    char *temp_r7;

    ret = 0;
    var_r3 = fn_80255FB0();
    while ((u32)(var_r3 + 0x10000) != 0xFFFF) {
        u8 idx = (u8)var_r3;
        temp_r29 = idx * 0x458;
        temp_r7 = (char *)lbl_803689A8 + temp_r29;
        if ((u32)var_r3 == *(u32 *)(temp_r7 + 0xF4)) {
            if (*(u64 *)(temp_r7 + 0x114) & 2) {
                fn_8025F534(arg1, idx, *(u8 *)(temp_r7 + 0x217), arg2);
            } else {
                fn_8025F534(arg1, idx, *(u8 *)(temp_r7 + 0x122), arg2);
            }
            ret = 1;
            var_r3 = *(s32 *)((char *)lbl_803689A8 + temp_r29 + 0xEC);
        } else {
            return ret;
        }
    }
    return ret;
}

s32 fn_8024A590(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 ret;
    s32 var_r3;
    char *temp_r7;

    ret = 0;
    var_r3 = fn_80255FB0();
    while ((u32)(var_r3 + 0x10000) != 0xFFFF) {
        u8 idx = (u8)var_r3;
        temp_r29 = idx * 0x458;
        temp_r7 = (char *)lbl_803689A8 + temp_r29;
        if ((u32)var_r3 == *(u32 *)(temp_r7 + 0xF4)) {
            if (*(u64 *)(temp_r7 + 0x114) & 2) {
                fn_8025FA50(arg1, idx, *(u8 *)(temp_r7 + 0x217), arg2);
            } else {
                fn_8025FA50(arg1, idx, *(u8 *)(temp_r7 + 0x122), arg2);
            }
            ret = 1;
            var_r3 = *(s32 *)((char *)lbl_803689A8 + temp_r29 + 0xEC);
        } else {
            return ret;
        }
    }
    return ret;
}

void fn_8024A674(s32 arg0, s32 arg1) {
    M2C_UNK fn_80260060(M2C_UNK, s32, s32);
    fn_80260060(7, arg0, arg1);
    fn_80260060(0xA, arg0, arg1);
    fn_80260060(0x5B, arg0, arg1);
    fn_80260060(0x80, arg0, arg1);
    fn_80260060(0x84, arg0, arg1);
}

s32 fn_8024A6F8(void) {
    if (lbl_803687F8 == 0) {
        s32 var_r3 = fn_8023A964(0xE100);
        if (var_r3 == 0) {
            lbl_803687F8 = 1;
            return 1;
        }
        return 0;
    }
    return 0;
}

void fn_8024A780(u8 arg0, u16 arg1, u8 arg2, u8 arg3, s32 arg4) {
    void fn_8026146C(u32 *);
    void fn_80244D64(s32);
    void fn_80244AE8(s32);
    void fn_80245290(s32, s32, s32);
    extern f32 lbl_8034C324[];
    extern s32 lbl_803689A0;
    extern f32 lbl_8036C1D0;
    extern f32 lbl_8036C1E0;
    extern f32 lbl_8036C20C;

    u32 sp8;
    f32 f31;
    u8 *var_r29;
    u32 var_r28;
    u8 var_r4;
    s32 id;
    u8 kind;
    f32 t;
    s32 off;
    u8 *base;
    u8 *e;
    s32 *p28;
    u8 *p2c;

    sp8 = arg1;
    if (arg1 != 0) {
        fn_8026146C(&sp8);
    }
    switch ((s32)arg2) {
    case 0xFF:
        var_r29 = (u8 *)lbl_8034C324;
        var_r28 = 0;
        f31 = lbl_8036C1D0 * (f32)arg0;
        do {
            kind = var_r29[0x2D];
            if (kind == 0 || kind == 1) {
                var_r29[0x2C] = arg3;
                *(s32 *)(var_r29 + 0x28) = -1;
                if (sp8 != 0) {
                    *(f32 *)(var_r29 + 8) = *(f32 *)var_r29;
                    *(f32 *)(var_r29 + 4) = f31;
                    *(f32 *)(var_r29 + 0xC) = lbl_8036C1E0;
                    *(f32 *)(var_r29 + 0x10) = lbl_8036C20C / (f32)sp8;
                } else {
                    *(f32 *)(var_r29 + 4) = f31;
                    *(f32 *)var_r29 = f31;
                    id = *(s32 *)(var_r29 + 0x28);
                    if ((u32)(id + 0x10000) != 0xFFFFU) {
                        switch ((s32)var_r29[0x2C]) {
                        case 1:
                            fn_80244D64(id);
                            break;
                        case 2:
                            fn_80244AE8(id);
                            break;
                        case 3:
                            fn_80245290(id, 0, 0);
                            break;
                        }
                    }
                }
                lbl_803689A0 |= 1 << var_r28;
            }
            var_r28 += 1;
            var_r29 += 0x30;
        } while (var_r28 < 0x20U);
        return;
    case 0xFC:
        var_r29 = (u8 *)lbl_8034C324;
        var_r28 = 0;
        f31 = lbl_8036C1D0 * (f32)arg0;
        do {
            kind = var_r29[0x2D];
            if (kind == 2 || kind == 3) {
                var_r29[0x2C] = arg3;
                *(s32 *)(var_r29 + 0x28) = -1;
                if (sp8 != 0) {
                    *(f32 *)(var_r29 + 8) = *(f32 *)var_r29;
                    *(f32 *)(var_r29 + 4) = f31;
                    *(f32 *)(var_r29 + 0xC) = lbl_8036C1E0;
                    *(f32 *)(var_r29 + 0x10) = lbl_8036C20C / (f32)sp8;
                } else {
                    *(f32 *)(var_r29 + 4) = f31;
                    *(f32 *)var_r29 = f31;
                    id = *(s32 *)(var_r29 + 0x28);
                    if ((u32)(id + 0x10000) != 0xFFFFU) {
                        switch ((s32)var_r29[0x2C]) {
                        case 1:
                            fn_80244D64(id);
                            break;
                        case 2:
                            fn_80244AE8(id);
                            break;
                        case 3:
                            fn_80245290(id, 0, 0);
                            break;
                        }
                    }
                }
                lbl_803689A0 |= 1 << var_r28;
            }
            var_r28 += 1;
            var_r29 += 0x30;
        } while (var_r28 < 0x20U);
        return;
    case 0xFA:
        var_r4 = 2;
        goto shared;
    case 0xFB:
        var_r4 = 3;
        goto shared;
    case 0xFD:
        var_r4 = 0;
        goto shared;
    case 0xFE:
        var_r4 = 1;
    shared:
        var_r29 = (u8 *)lbl_8034C324;
        var_r28 = 0;
        f31 = lbl_8036C1D0 * (f32)arg0;
        do {
            if (var_r29[0x2D] == var_r4) {
                var_r29[0x2C] = arg3;
                *(s32 *)(var_r29 + 0x28) = -1;
                if (sp8 != 0) {
                    *(f32 *)(var_r29 + 8) = *(f32 *)var_r29;
                    *(f32 *)(var_r29 + 4) = f31;
                    *(f32 *)(var_r29 + 0xC) = lbl_8036C1E0;
                    *(f32 *)(var_r29 + 0x10) = lbl_8036C20C / (f32)sp8;
                } else {
                    *(f32 *)(var_r29 + 4) = f31;
                    *(f32 *)var_r29 = f31;
                    id = *(s32 *)(var_r29 + 0x28);
                    if ((u32)(id + 0x10000) != 0xFFFFU) {
                        switch ((s32)var_r29[0x2C]) {
                        case 1:
                            fn_80244D64(id);
                            break;
                        case 2:
                            fn_80244AE8(id);
                            break;
                        case 3:
                            fn_80245290(id, 0, 0);
                            break;
                        }
                    }
                }
                lbl_803689A0 |= 1 << var_r28;
            }
            var_r28 += 1;
            var_r29 += 0x30;
        } while (var_r28 < 0x20U);
        return;
    default:
        off = (u8)arg2 * 0x30;
        base = (u8 *)lbl_8034C324;
        e = base + off;
        e[0x2C] = arg3;
        p28 = (s32 *)(e + 0x28);
        p2c = e + 0x2C;
        *p28 = arg4;
        if (sp8 != 0) {
            *(f32 *)(base + off + 8) = *(f32 *)(base + off);
            *(f32 *)(base + off + 4) = lbl_8036C1D0 * (f32)arg0;
            *(f32 *)(base + off + 0xC) = lbl_8036C1E0;
            *(f32 *)(base + off + 0x10) = lbl_8036C20C / (f32)sp8;
        } else {
            t = lbl_8036C1D0 * (f32)arg0;
            *(f32 *)(base + off + 4) = t;
            *(f32 *)(base + off) = t;
            id = *p28;
            if ((u32)(id + 0x10000) != 0xFFFFU) {
                switch ((s32)*p2c) {
                case 1:
                    fn_80244D64(id);
                    break;
                case 2:
                    fn_80244AE8(id);
                    break;
                case 3:
                    fn_80245290(id, 0, 0);
                    break;
                }
            }
        }
        lbl_803689A0 |= 1 << (u8)arg2;
        return;
    }
}

s32 fn_8024ACB0(u8 arg0) {
    extern s32 lbl_803689A0;
    u8 *temp_r4;

    temp_r4 = (u8 *)lbl_8034C324 + arg0 * 0x30;
    if ((temp_r4[0x2D] != 4) && (lbl_803689A0 & (1 << arg0)) && (*(f32 *)(temp_r4 + 8) > *(f32 *)(temp_r4 + 4))) {
        return 1;
    }
    return 0;
}

void fn_8024AD04(u8 arg0, u8 arg1) {
    typedef struct {
        u8 pad[0x2D];
        u8 unk2D;
        u8 pad2[0x30 - 0x2E];
    } Entry;
    extern u8 lbl_80368978;
    extern f32 lbl_8034C324[];
    Entry *tbl;

    if (lbl_80368978 != 0) {
        tbl = (Entry *)lbl_8034C324;
        tbl[arg0].unk2D = arg1;
    }
}

void fn_80255054(void *arg0);

void fn_80256FF0(Fn80256FF0Arg arg0);

s32 fn_8024AD2C(s32 arg0, s32 arg1) {
    s32 offset;
    s32 ret;
    u8 *base;

    ret = 0;
    switch (arg0) {
    case 0:
        offset = (u8)arg1 * 0x458;
        base = (u8 *)lbl_803689A8;
        base += offset;
        if (base[0x11c] == 0) {
            fn_80262510((u8)arg1);
            fn_80258488();
            base = (u8 *)lbl_803689A8;
            base += offset;
            if ((u32)arg1 == *(u32 *)&base[0xf4]) {
                fn_80255054(base);
            }
        }
        break;
    case 1:
        fn_80256FF0((u8)arg1);
        break;
    case 2:
        ret = fn_802581BC(arg1);
        break;
    case 3:
        fn_80262510((u8)arg1);
        fn_80258488();
        break;
    }
    return ret;
}

void fn_8024ADFC(s32 arg0, u32 arg1) {
    void *fn_802637A4(s32);
    void *memset(void *, s32, u32);
    void fn_80260BE4(u8 *);
    void fn_802559D8(void);
    void fn_80255A40(void);
    void fn_80256974(void);
    void fn_802576DC(void);
    void fn_80261714(void *);
    s32 fn_8024AD2C(s32, s32);
    extern u8 lbl_8034BED0[];
    extern s32 lbl_803689BC;
    extern s32 lbl_803689B8;
    extern s32 lbl_803689A4;
    extern s32 lbl_803689AC;
    extern s32 lbl_803689A8;
    extern s32 lbl_803689A0;
    extern s32 lbl_8036899C;
    extern u8 lbl_80368994;
    extern u8 lbl_80368984;
    extern s8 lbl_80368979;
    extern f32 lbl_8036C208;
    extern f32 lbl_8036C1E0;

    u8 *bed;
    s32 size;
    s32 off;
    s8 n;
    u32 ctr;
    u8 *t9;
    void *p;
    s32 k;
    u8 *r7;
    u8 *r6p;
    u8 *r4p;
    u8 j;
    u8 *slot;

    bed = lbl_8034BED0;
    size = arg1 * 0x458;
    *(s32 *)(bed + 0x240) = arg0;
    lbl_803689BC = 0;
    lbl_803689B8 = 0;
    *(s32 *)(bed + 0x200) = 0x1800;
    lbl_803689A4 = 0;
    lbl_803689AC = 0;
    lbl_803689A8 = (s32)fn_802637A4(size);
    memset((void *)lbl_803689A8, 0, size);

    n = 0;
    off = 0;
    ctr = arg1;
    if (arg1 > 0U) {
        do {
            *(s32 *)(lbl_803689A8 + (off + 0xF4)) = -1;
            t9 = (u8 *)(lbl_803689A8 + (off + 0x114));
            *(s32 *)(t9 + 4) = 0;
            *(s32 *)t9 = 0;
            *(s32 *)(lbl_803689A8 + (off + 0x110)) = 0;
            *((u8 *)lbl_803689A8 + (off + 0x10C)) = 0;
            *((u8 *)lbl_803689A8 + (off + 0x121)) = 0xFF;
            *(s32 *)(lbl_803689A8 + (off + 0x158)) = 0;
            *((u8 *)lbl_803689A8 + (off + 0x196)) = 0;
            *((u8 *)lbl_803689A8 + (off + 0x194)) = 0x80;
            *((u8 *)lbl_803689A8 + (off + 0x195)) = 0;
            *(s32 *)(lbl_803689A8 + (off + 0x184)) = 0x400000;
            *(s32 *)(lbl_803689A8 + (off + 0x174)) = 0x400000;
            *(s32 *)(lbl_803689A8 + (off + 0x188)) = 0;
            *(s32 *)(lbl_803689A8 + (off + 0x178)) = 0;
            *(s32 *)(lbl_803689A8 + (off + 0x1A4)) = 0;
            *(s32 *)(lbl_803689A8 + (off + 0x1A8)) = 0;
            *((u8 *)lbl_803689A8 + (off + 0x1BC)) = 0;
            *((u8 *)lbl_803689A8 + (off + 0x1BD)) = 0;
            *((u8 *)lbl_803689A8 + (off + 0x11C)) = 0;
            *((u8 *)lbl_803689A8 + (off + 0x11E)) = 0x17;
            *((u8 *)lbl_803689A8 + (off + 0x106)) = 0;
            *((u8 *)lbl_803689A8 + (off + 0x197)) = 1;
            *(s32 *)(lbl_803689A8 + (off + 0x1C4)) = 0;
            *(u16 *)(lbl_803689A8 + (off + 0x1C8)) = 0;
            *(u16 *)(lbl_803689A8 + (off + 0x1CA)) = 0x7FFF;
            *(s32 *)(lbl_803689A8 + (off + 0x1D0)) = 0;
            *(u16 *)(lbl_803689A8 + (off + 0x1D4)) = 0;
            *(u16 *)(lbl_803689A8 + (off + 0x1D6)) = 0x7FFF;
            *(s32 *)(lbl_803689A8 + (off + 0x140)) = 0x6400;
            *((u8 *)lbl_803689A8 + (off + 0x133)) = 0;
            *((u8 *)lbl_803689A8 + (off + 0x11F)) = 0;
            *((u8 *)lbl_803689A8 + (off + 8)) = n;
            *((u8 *)lbl_803689A8 + (off + 9)) = 0xFF;
            *((u8 *)lbl_803689A8 + (off + 0x14)) = n;
            *((u8 *)lbl_803689A8 + (off + 0x15)) = 0xFF;
            *((u8 *)lbl_803689A8 + (off + 0x20)) = n;
            n += 1;
            *((u8 *)lbl_803689A8 + (off + 0x21)) = 0xFF;
            off += 0x458;
            ctr -= 1;
        } while (ctr != 0);
    }

    p = bed + 0x454;
    k = 2;
    do {
        *(f32 *)((u8 *)p + 0) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x14) = lbl_8036C1E0;
        ((u8 *)p)[0x2D] = 4;
        *(f32 *)((u8 *)p + 0x30) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x44) = lbl_8036C1E0;
        ((u8 *)p)[0x5D] = 4;
        *(f32 *)((u8 *)p + 0x60) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x74) = lbl_8036C1E0;
        ((u8 *)p)[0x8D] = 4;
        *(f32 *)((u8 *)p + 0x90) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0xA4) = lbl_8036C1E0;
        ((u8 *)p)[0xBD] = 4;
        *(f32 *)((u8 *)p + 0xC0) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0xD4) = lbl_8036C1E0;
        ((u8 *)p)[0xED] = 4;
        *(f32 *)((u8 *)p + 0xF0) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x104) = lbl_8036C1E0;
        ((u8 *)p)[0x11D] = 4;
        *(f32 *)((u8 *)p + 0x120) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x134) = lbl_8036C1E0;
        ((u8 *)p)[0x14D] = 4;
        *(f32 *)((u8 *)p + 0x150) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x164) = lbl_8036C1E0;
        ((u8 *)p)[0x17D] = 4;
        *(f32 *)((u8 *)p + 0x180) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x194) = lbl_8036C1E0;
        ((u8 *)p)[0x1AD] = 4;
        *(f32 *)((u8 *)p + 0x1B0) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x1C4) = lbl_8036C1E0;
        ((u8 *)p)[0x1DD] = 4;
        *(f32 *)((u8 *)p + 0x1E0) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x1F4) = lbl_8036C1E0;
        ((u8 *)p)[0x20D] = 4;
        *(f32 *)((u8 *)p + 0x210) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x224) = lbl_8036C1E0;
        ((u8 *)p)[0x23D] = 4;
        *(f32 *)((u8 *)p + 0x240) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x254) = lbl_8036C1E0;
        ((u8 *)p)[0x26D] = 4;
        *(f32 *)((u8 *)p + 0x270) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x284) = lbl_8036C1E0;
        ((u8 *)p)[0x29D] = 4;
        *(f32 *)((u8 *)p + 0x2A0) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x2B4) = lbl_8036C1E0;
        ((u8 *)p)[0x2CD] = 4;
        *(f32 *)((u8 *)p + 0x2D0) = lbl_8036C208;
        *(f32 *)((u8 *)p + 0x2E4) = lbl_8036C1E0;
        ((u8 *)p)[0x2FD] = 4;
        p = (u8 *)p + 0x300;
        k -= 1;
    } while (k != 0);

    {
        u8 *t = bed + 0x454;
        lbl_803689A0 = 0;
        lbl_8036899C = 0;
        t[0x5FD] = 1;
        t[0x47D] = 0;
        t[0x4AD] = 0;
        t[0x4DD] = 0;
        t[0x50D] = 0;
        t[0x53D] = 0;
        t[0x56D] = 0;
        t[0x59D] = 0;
        t[0x5CD] = 0;
        *(f32 *)(t + 0x3F0) = lbl_8036C1E0;
        *(f32 *)(t + 0x420) = lbl_8036C1E0;
        fn_80260BE4(0);
    }

    r7 = bed + 0xC94;
    r6p = bed + 0xC34;
    r4p = bed + 0xC74;
    *(s32 *)(bed + 0xC34) = 0;
    (&lbl_80368994)[0] = 0xFF;
    *(s32 *)(bed + 0xC74) = 0;
    (&lbl_80368984)[0] = 0xFF;
    r7[1] = 0;
    bed[0xC94] = 0;
    *(s32 *)(r6p + 4) = 0;
    (&lbl_80368994)[1] = 0xFF;
    *(s32 *)(r4p + 4) = 0;
    (&lbl_80368984)[1] = 0xFF;
    r7[3] = 0;
    r7[2] = 0;
    *(s32 *)(r6p + 8) = 0;
    (&lbl_80368994)[2] = 0xFF;
    *(s32 *)(r4p + 8) = 0;
    (&lbl_80368984)[2] = 0xFF;
    r7[5] = 0;
    r7[4] = 0;
    *(s32 *)(r6p + 0xC) = 0;
    (&lbl_80368994)[3] = 0xFF;
    *(s32 *)(r4p + 0xC) = 0;
    (&lbl_80368984)[3] = 0xFF;
    r7[7] = 0;
    r7[6] = 0;
    *(s32 *)(r6p + 0x10) = 0;
    (&lbl_80368994)[4] = 0xFF;
    *(s32 *)(r4p + 0x10) = 0;
    (&lbl_80368984)[4] = 0xFF;
    r7[9] = 0;
    r7[8] = 0;
    *(s32 *)(r6p + 0x14) = 0;
    (&lbl_80368994)[5] = 0xFF;
    *(s32 *)(r4p + 0x14) = 0;
    (&lbl_80368984)[5] = 0xFF;
    r7[0xB] = 0;
    r7[0xA] = 0;
    *(s32 *)(r6p + 0x18) = 0;
    (&lbl_80368994)[6] = 0xFF;
    *(s32 *)(r4p + 0x18) = 0;
    (&lbl_80368984)[6] = 0xFF;
    r7[0xD] = 0;
    r7[0xC] = 0;
    *(s32 *)(r6p + 0x1C) = 0;
    (&lbl_80368994)[7] = 0xFF;
    *(s32 *)(r4p + 0x1C) = 0;
    (&lbl_80368984)[7] = 0xFF;
    r7[0xF] = 0;
    r7[0xE] = 0;
    fn_802559D8();
    fn_80255A40();
    fn_80256974();

    {
        s32 *w = (s32 *)(bed + 0xCA4);
        w[0] = 0; w[1] = 0; w[2] = 0; w[3] = 0;
        w[4] = 0; w[5] = 0; w[6] = 0; w[7] = 0;
        w[8] = 0; w[9] = 0; w[10] = 0; w[11] = 0;
        w[12] = 0; w[13] = 0; w[14] = 0; w[15] = 0;
        fn_802576DC();
    }

    j = 0;
loop:
    if (j < 0x20U) {
        slot = bed + 0xA94 + j * 0xC;
        j += 8;
        ((s32 *)slot)[0] = 0; ((s32 *)slot)[1] = 0; ((s32 *)slot)[2] = 0;
        ((s32 *)slot)[3] = 0; ((s32 *)slot)[4] = 0; ((s32 *)slot)[5] = 0;
        ((s32 *)slot)[6] = 0; ((s32 *)slot)[7] = 0; ((s32 *)slot)[8] = 0;
        ((s32 *)slot)[9] = 0; ((s32 *)slot)[10] = 0; ((s32 *)slot)[11] = 0;
        ((s32 *)slot)[12] = 0; ((s32 *)slot)[13] = 0; ((s32 *)slot)[14] = 0;
        ((s32 *)slot)[15] = 0; ((s32 *)slot)[16] = 0; ((s32 *)slot)[17] = 0;
        ((s32 *)slot)[18] = 0; ((s32 *)slot)[19] = 0; ((s32 *)slot)[20] = 0;
        ((s32 *)slot)[21] = 0; ((s32 *)slot)[22] = 0; ((s32 *)slot)[23] = 0;
        goto loop;
    }

    lbl_80368979 = 0;
    fn_80261714(fn_8024AD2C);
}

u32 fn_8024B370(void) {
    s32 fn_80243F50();
    s32 temp_r3;

    temp_r3 = fn_80243F50();
    return (u32) ((-1 - temp_r3) | (temp_r3 + 1)) >> 0x1FU;
}

void fn_8024B3A0(s32 arg0) {
    M2C_UNK fn_80244D64(s32);
    M2C_UNK fn_802636F4();
    M2C_UNK fn_8026372C();
    fn_8026372C();
    fn_80244D64(arg0);
    fn_802636F4();
}

void fn_8024B3D8(s32 arg0, s32 arg1) {
    M2C_UNK fn_802450A4(s32, s32);
    fn_8026372C();
    fn_802450A4(arg0, arg1);
    fn_802636F4();
}

void fn_8024B420(s32 arg0) {
    M2C_UNK fn_80245188(s32);
    fn_8026372C();
    fn_80245188(arg0);
    fn_802636F4();
}

void fn_8024B458(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80245290(s32, s32, s32);
    fn_8026372C();
    fn_80245290(arg0, arg1, arg2);
    fn_802636F4();
}

void fn_8024B4B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_8026372C();
    fn_8024534C(arg0, arg1, arg2, arg3);
    fn_802636F4();
}

s32 fn_8024B518(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 fn_8026372C(void);
    s32 fn_80243F50(s32);
    s32 fn_8025F534(s32, s32, u8, s32);
    s32 fn_802636F4(void);
    s32 var_r31;
    s32 temp_r3;

    var_r31 = 0;
    fn_8026372C();
    temp_r3 = fn_80243F50(arg0);
    if ((u32) (temp_r3 + 0x10000) != 0xFFFFU) {
        fn_8025F534(arg2, arg1, (u8) temp_r3, arg3);
        var_r31 = 1;
    }
    fn_802636F4();
    return var_r31;
}

u16 fn_8024B594(s32 arg0, s32 arg1) {
    extern u8 lbl_8034BDD0[];
    return *(u16 *)(lbl_8034BDD0 + ((arg0 & 0xFF) << 5) + ((arg1 & 0xFF) << 1));
}

s32 fn_8024B5B0(u32 arg0) {
    extern void *lbl_80368974;
    s32 i;
    void *r5;
    void *r6;

    i = 8;
loop_1:
    r6 = lbl_80368974;
loop_18:
    if (r6 == NULL) {
        i -= 1;
        if (i == 0) {
            return -1;
        }
        goto loop_1;
    }
    r5 = *(void**)((u8*)r6 + 0xE64);
loop_6:
    if (r5 == NULL) {
        r5 = *(void**)((u8*)r6 + 0xE68);
loop_11:
        if (r5 == NULL) {
            r5 = *(void**)((u8*)r6 + 0xE6C);
loop_16:
            if (r5 == NULL) {
                r6 = *(void**)((u8*)r6);
                goto loop_18;
            }
            if (*(u32*)((u8*)r5 + 8) == arg0) {
                return *(s32*)((u8*)r6 + 0xC);
            }
            r5 = *(void**)((u8*)r5);
            goto loop_16;
        }
        if (*(u32*)((u8*)r5 + 8) == arg0) {
            return *(s32*)((u8*)r6 + 0xC);
        }
        r5 = *(void**)((u8*)r5);
        goto loop_11;
    }
    if (*(u32*)((u8*)r5 + 8) == arg0) {
        return *(s32*)((u8*)r6 + 0xC);
    }
    r5 = *(void**)((u8*)r5);
    goto loop_6;
}

s32 fn_8024B654(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_8024A4AC(s32, s32, s32);
    s32 temp_r31;

    fn_8026372C();
    temp_r31 = fn_8024A4AC(arg0, arg1, arg2);
    fn_802636F4();
    return temp_r31;
}

s32 fn_8024B6B4(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_8024A590(s32, s32, s32);
    s32 temp_r31;

    fn_8026372C();
    temp_r31 = fn_8024A590(arg0, arg1, arg2);
    fn_802636F4();
    return temp_r31;
}

s32 fn_8024B714(s32 arg0) {
    s32 fn_8024A6F8(s32);
    s32 temp_r31;

    fn_8026372C();
    temp_r31 = fn_8024A6F8(arg0);
    fn_802636F4();
    return temp_r31;
}

s32 fn_8024B754(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_8024A34C(s32, s32, s32, s32, s32, u8);
    void fn_8026372C(void);
    void fn_802636F4(void);
    extern u8 lbl_8034CB64[];
    s32 temp;

    fn_8026372C();
    temp = fn_8024A34C(arg0, 0xFF, arg1, arg2, arg3, lbl_8034CB64[((arg3 & 0xFF) << 1) + 1]);
    fn_802636F4();
    return temp;
}

s32 fn_8024B7DC(s32 arg0) {
    s32 fn_80255FB0(s32);
    void fn_8026372C(void);
    void fn_802636F4(void);
    s32 var_r31;

    var_r31 = arg0;
    fn_8026372C();
    if ((u32)(fn_80255FB0(var_r31) + 0x10000) == 0xFFFFU) {
        var_r31 = -1;
    }
    fn_802636F4();
    return var_r31;
}

void fn_8024B828(s32 arg0, s32 arg1, s32 arg2) {
#pragma dont_inline on
    if (arg1 == 1) {
        fn_8026372C();
        fn_8024A590(arg0, 0x1F, (s32)(16383.0f * (1.0f - (f32)(u32)(arg2 - 0x50) / 15920.0f)));
        fn_802636F4();
        fn_8026372C();
        fn_8024A4AC(arg0, 0x4F, 0x7F);
        fn_802636F4();
    } else {
        fn_8026372C();
        fn_8024A4AC(arg0, 0x4F, 0);
        fn_802636F4();
    }
}

void fn_8024B8EC(s32 arg0, s32 arg1, s32 arg2) {
#pragma dont_inline reset
    M2C_UNK fn_8024A780(s32, s32, s32, M2C_UNK, M2C_UNK);
    fn_8026372C();
    fn_8024A780(arg0, arg1, arg2, 0, -1);
    fn_802636F4();
}

#pragma global_optimizer off
#pragma optimization_level 2
void fn_8024B94C(s32 arg0)
{
    void fn_802624F8(void);
    void fn_8024C84C(void);

    extern u32 lbl_803689A4;
    extern u8 lbl_8034C110[];
    extern s32 lbl_803689A8;

    u32 oldFlags;

    oldFlags = lbl_803689A4;

    switch (arg0) {
    case 0:
        lbl_803689A4 = oldFlags | 1;
        lbl_803689A4 = lbl_803689A4 & ~2;
        fn_802624F8();
        break;
    case 1:
        lbl_803689A4 = oldFlags & ~1;
        lbl_803689A4 = oldFlags & ~3;
        fn_802624F8();
        break;
    case 2:
        lbl_803689A4 = oldFlags & ~1;
        lbl_803689A4 = lbl_803689A4 | 2;
        fn_802624F8();
        break;
    }

    if (oldFlags != lbl_803689A4) {
        u32 i;
        u32 table;
        u32 offset;
        u32 base;
        u32 off;
        u32 *p1;
        u32 w0;
        u32 w1;

        for (i = 0, table = (u32)lbl_8034C110, offset = 0; i < *(u8 *)(table + 0x210);) {
            base = (u32)lbl_803689A8;
            off = offset + 0x114;
            offset = offset + 0x458;
            i = i + 1;
            p1 = (u32 *)(base + off);
            base = base + off;
            w0 = *p1;
            w1 = *(p1 + 1);
            *(volatile u32 *)(base + 4) = w1;
            *(u32 *)base = w0 | 0x2000;
        }
        fn_8024C84C();
    }
}

void fn_8024BCE4(void) {
    void fn_80261730(s32, s32, void *, s32, s32, s32, s32, s32);
    void fn_80261B50(s32, u8);
    void fn_80261B64(s32, u8);
    void fn_80261BC8(s32, s32);
    void fn_80261D90(s32, s32, u16, u16);
    void fn_80261E6C(s32, s32, s32, s32, f32, f32, f32);
    u32 fn_80262154(s32);
    void fn_80262200(void *, s32, s32, u8, s32, s32);
    s32 fn_802622D0(u8);
    extern u8 lbl_8034D4B8[];
    extern u8 lbl_8034C110[];
    extern s32 lbl_803689A8;
    extern u8 lbl_803689CC;
    extern u8 lbl_803689CD;
    extern f32 lbl_8036C228;
    extern f32 lbl_8036C238;

    u8 *slot;
    u32 i;
    u32 lim;
    s32 sp8[8];
    u32 pos;
    u32 need;
    u8 mode;

    if (lbl_803689CD != 0) {
        lbl_803689CD = (u8)(lbl_803689CD - 1);
        return;
    }
    lbl_803689CD = lbl_803689CC;
    slot = lbl_8034D4B8;
    lim = lbl_8034C110[0x210];
    for (i = 0; i < lim; slot += 0x68, i++) {
        mode = slot[0xC];
        if (mode == 1) {
            sp8[0] = *(s32 *)(slot + 0x54) | 0x40000000;
            sp8[1] = fn_802622D0(slot[0xE]);
            sp8[3] = 0;
            sp8[4] = *(s32 *)(slot + 0x18);
            sp8[5] = 0;
            sp8[6] = *(s32 *)(slot + 0x18);
            if (slot[0xD] == 0) {
                ((u8 *)&sp8[0])[0x1C] = 2;
            } else if (slot[0xD] == 1) {
                *(u8 **)((u8 *)&sp8[0] + 8) = slot + 0x24;
                ((u8 *)&sp8[0])[0x1C] = 4;
                fn_80261B50(*(s32 *)(slot + 0x4C), slot[0xF]);
                slot[0x26] = slot[0xF];
                slot[0x27] = slot[0xF];
            }
            {
                s32 v = *(s32 *)(slot + 0x4C);
                fn_80261730(v, 0xFFFF, sp8, 1, -1,
                            *(s32 *)((u8 *)lbl_803689A8 + v * 0x458 + 0xF4), 1, 1);
            }
            if (slot[0x61] == 0) {
                fn_80261D90(*(s32 *)(slot + 0x4C), 0, 0, 0);
            } else {
                fn_80261D90(*(s32 *)(slot + 0x4C), 1, *(u16 *)(slot + 0x62), *(u16 *)(slot + 0x64));
            }
            fn_80261BC8(*(s32 *)(slot + 0x4C),
                        (s32)(lbl_8036C238 * ((f32)*(u32 *)(slot + 0x54) / (f32)*(u32 *)lbl_8034C110)));
            fn_80261E6C(*(s32 *)(slot + 0x4C), 0, (s32)slot[0x5A] << 16, (s32)slot[0x5B] << 16,
                        lbl_8036C228 * (f32)slot[0x59], lbl_8036C228 * (f32)slot[0x5C],
                        lbl_8036C228 * (f32)slot[0x5D]);
            fn_80261B64(*(s32 *)(slot + 0x4C), slot[0x60]);
            slot[0xC] = 2;
            if ((*(u32 *)(slot + 8) & 0x20000) == 0) {
                fn_80262200(*(void **)(slot + 0x14), 0, *(s32 *)(slot + 0x1C), slot[0xE], 0, 0);
            }
        } else if (mode == 2) {
            need = fn_80262154(*(s32 *)(slot + 0x4C));
            if (slot[0xD] == 1) {
                need = ((need * 0x24924925U) >> 3) * 0xE;
            }
            pos = *(u32 *)(slot + 0x20);
            if (pos != need) {
            }
        }
    }
}

#pragma optimization_level reset
#pragma global_optimizer on
void fn_8024C5C8(void) {

}

void fn_8024C5CC(u32 arg0) {
    extern u16 *lbl_8034D4B8;
    s32 i;
    u16 *entry;
    
    entry = lbl_8034D4B8;
    for (i = 0x40; i != 0; i--) {
        if ((entry[0xC / 2] == 1) || (entry[0xC / 2] == 2)) {
            u32 temp_r4 = entry[0x4C / 2];
            if (temp_r4 == arg0) {
                if (entry[0xC / 2] == 2) {
                    fn_80256DD8(temp_r4);
                }
                entry[0xC / 2] = 3;
                ((void (*)(u32, u32, u32, u32, s32))entry[0x10 / 2])(0, 0, 0, 0, entry[0x50 / 2]);
                return;
            }
        }
        entry += 0x68 / 2;
    }
}

s32 fn_8024C664(u32 arg0)
{
  extern u8 lbl_8034D4B8[];
  u8 *entry;
  s32 i;
  u32 new_var;
  entry = lbl_8034D4B8;
  for (i = 0; i < 64; i++)
  {
    if ((*((u8 *) (entry + 0xC))) != 0)
    {
      if ((new_var = *((u32 *) (entry + 4))) == arg0)
      {
        return i;
      }
    }
    entry += 0x68;
  }

  return -1;
}

void fn_8024C7C4(s8 *arg0, s8 *arg1) {
    extern s32 lbl_803689A4;
    if (lbl_803689A4 & 1) {
        *arg0 = 0x40;
        *arg1 = 0;
        return;
    }
    if (!(lbl_803689A4 & 2)) {
        *arg1 = 0;
    }
}

void fn_8024C7F8(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0x59) = arg1;
    M2C_FIELD(arg0, s8 *, 0x5C) = arg2;
    M2C_FIELD(arg0, s8 *, 0x5D) = arg3;
}

void fn_8024C808(void *arg0, u8 arg1, u8 arg2, u8 arg3,
                 u8 arg4, u8 arg5)
{
    extern u32 lbl_803689A4;
    u32 flags;

    *(u8 *)((u8 *)arg0 + 0x59) = arg1;
    *(u8 *)((u8 *)arg0 + 0x5C) = arg4;
    *(u8 *)((u8 *)arg0 + 0x5D) = arg5;
    *(u8 *)((u8 *)arg0 + 0x5E) = arg2;
    *(u8 *)((u8 *)arg0 + 0x5F) = arg3;

    flags = lbl_803689A4;
    if ((flags & 1) != 0) {
        arg2 = 0x40;
        arg3 = 0;
    } else if ((flags & 2) == 0) {
        arg3 = 0;
    }

    *(u8 *)((u8 *)arg0 + 0x5A) = arg2;
    *(u8 *)((u8 *)arg0 + 0x5B) = arg3;
}

void fn_8024C84C(u32 arg0) {
    extern u16 *lbl_8034D4B8;
    s32 i;
    u16 *entry;
    
    entry = lbl_8034D4B8;
    for (i = 0x14; i != 0; i--) {
        if ((entry[0] == 1) || (entry[0] == 2)) {
            if (entry[0x26] == arg0) {
                if (entry[0] == 2) {
                    fn_80256DD8(entry[0x26]);
                }
                entry[0] = 3;
                ((void (*)(u32, u32, u32, u32, s32))entry[0x8])(0, 0, 0, 0, entry[0x28]);
                return;
            }
        }
        entry += 0x34;
    }
}

#pragma global_optimizer off
u32 fn_8024C97C(s8 a,s32 b,s32 c,s32 d,s8 e,s8 f,s8 g,s8 h,u8 p,u8 q,u32 flags,s32 data,s32 extra,s16 *coef){
extern u8 lbl_8034D4B8[],lbl_803689C4[8];extern u32 lbl_803689C0,lbl_803689A4;
void fn_8026372C(void);void fn_802636F4(void);s32 fn_8024CE1C(s32,s32);u32 fn_8024E100(u32);void fn_80261C98(s32,void*,void*);u32 fn_80262290(s32);
u8 *state,*slot,*scan,*base;u32 next,id,j,index; s32 offset,size,k;u8 voice; s8 pan,span;
fn_8026372C();
base=lbl_8034D4B8;scan=base;for(index=0;index<64;scan+=0x68,index++){if(scan[0xc]==0)break;}
if(index!=64){
next=lbl_803689C0;
do{
id=next++;if(id==0xffffffffU)id=next++;
scan=base;for(j=0;j<64;scan+=0x68,j++){if(scan[0xc]&&id==*(u32*)(scan+4))break;}
}while(j!=64);
offset=index*0x68;lbl_803689C0=next;slot=lbl_8034D4B8+offset;
*(u32*)(slot+4)=id;*(u32*)(slot+8)=flags;
size=fn_8024CE1C(c,flags);
slot=lbl_8034D4B8+offset;*(s32*)(slot+0x14)=b;*(s32*)(slot+0x18)=c;*(s32*)(slot+0x1c)=size;*(s32*)(slot+0x10)=data;*(s32*)(slot+0x4c)=-1;
if(flags&1){if(coef){*(s16*)(slot+44)=coef[0];*(s16*)(slot+46)=coef[1];*(s16*)(slot+48)=coef[2];*(s16*)(slot+50)=coef[3];*(s16*)(slot+52)=coef[4];*(s16*)(slot+54)=coef[5];*(s16*)(slot+56)=coef[6];*(s16*)(slot+58)=coef[7];*(s16*)(slot+60)=coef[8];*(s16*)(slot+62)=coef[9];*(s16*)(slot+64)=coef[10];*(s16*)(slot+66)=coef[11];*(s16*)(slot+68)=coef[12];*(s16*)(slot+70)=coef[13];*(s16*)(slot+72)=coef[14];*(s16*)(slot+74)=coef[15];*(s16*)(slot+0x24)=8;} (lbl_8034D4B8+offset)[0xd]=1;}else slot[0xd]=0;
slot=lbl_8034D4B8+offset;*(s32*)(slot+0x54)=d;slot[0x60]=q;slot[0x58]=a;slot[0x59]=e;slot[0x5c]=h;slot[0x5d]=p;slot[0x5e]=f;slot[0x5f]=g;
span=g;pan=f;
if(lbl_803689A4&1){pan=0x40;span=0;}else if(!(lbl_803689A4&2))span=0;
slot=lbl_8034D4B8+offset;slot[0x5a]=pan;slot[0x5b]=span;slot[0x61]=lbl_803689C4[0];
if(lbl_803689C4[0])fn_80261C98(*(s32*)(lbl_803689C4+4),slot+0x62,slot+0x64);
else{*(s16*)(slot+0x64)=0;*(s16*)(slot+0x62)=0;}
slot=lbl_8034D4B8+offset;*(s32*)(slot+0x50)=extra;*(s32*)(lbl_8034D4B8+offset)=-1;slot[0xc]=3;state=slot+0xc;
voice=(u8)fn_80262290(size);(lbl_8034D4B8+offset)[0xe]=voice;
if(voice!=0xff){if(!(flags&0x10000)&&!fn_8024E100(id))id=-1;}else id=-1;
if(id==0xffffffffU)*state=0;
}else id=-1;
fn_802636F4();return id;
}
#pragma global_optimizer on
s32 fn_8024CE1C(s32 arg0, s32 arg1)
{
    u32 value;
    u32 result;

    if (arg1 & 1) {
        value = (u32)(arg0 + 0xD);

        result = (value / 7) << 2;
        result &= ~7U;

        return (result + 0x1F) & ~31U;
    }

    return ((arg0 << 1) + 0x1F) & ~31;
}

#pragma global_optimizer off
void fn_8024CE60(u32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4)
{
    extern u8 lbl_8034D4B8[];
    extern u32 lbl_803689A4;
    extern f32 lbl_8036C228;
    extern f64 lbl_8036C230;
    void fn_8026372C(void);
    void fn_802636F4(void);
    void fn_80261E6C(s32, s32, s32, s32, f32, f32, f32);
    void fn_8024C7F8(void *, u8, u8, u8);
    void fn_8024C7C4(u8 *, u8 *);
    s32 fn_8024C664(u32);
    void fn_8024C808(void *, u8, u8, u8, u8, u8);
    void fn_8024BC58(void *);

    u8 sp9;
    u8 sp8;
    u8 *base;
    u8 *scan;
    u8 *slot;
    u8 *typep;
    s32 index;
    s32 offset;
    u32 parent;
    u8 pan;
    u8 span;
    s32 i;

    fn_8026372C();
    base = lbl_8034D4B8;
    scan = base;
    index = 0;
    for (i = 0; i < 64; i++, scan += 0x68) {
        if (scan[0xC] != 0 && *(u32 *)(scan + 4) == arg0) {
            index = i;
            goto found1;
        }
    }
    index = -1;
found1:
    if ((u32)(index + 0x10000) != 0xFFFFU) {
        offset = index * 0x68;
        slot = lbl_8034D4B8 + offset;
        slot[0x59] = arg1;
        slot[0x5C] = arg4;
        pan = arg2;
        span = arg3;
        slot[0x5D] = 0;
        slot[0x5E] = arg2;
        slot[0x5F] = arg3;
        if (lbl_803689A4 & 1) {
            span = 0;
            pan = 0x40;
        } else if (!(lbl_803689A4 & 2)) {
            span = 0;
        }
        slot = lbl_8034D4B8 + offset;
        slot[0x5A] = pan;
        typep = lbl_8034D4B8 + 0xC;
        slot[0x5B] = span;
        if (typep[offset] == 2) {
            slot = lbl_8034D4B8 + offset;
            fn_80261E6C(
                *(s32 *)(slot + 0x4C),
                0,
                slot[0x5A] << 16,
                slot[0x5B] << 16,
                lbl_8036C228 * (f32)slot[0x59],
                lbl_8036C228 * (f32)slot[0x5C],
                lbl_8036C228 * (f32)slot[0x5D]);
        }
        parent = *(u32 *)(lbl_8034D4B8 + offset);
        if ((u32)(parent + 0x10000) != 0xFFFFU) {
            fn_8026372C();
            scan = base;
            index = 0;
            for (i = 0; i < 64; i++, scan += 0x68) {
                if (scan[0xC] != 0 && *(u32 *)(scan + 4) == parent) {
                    index = i;
                    goto found2;
                }
            }
            index = -1;
found2:
            if ((u32)(index + 0x10000) != 0xFFFFU) {
                offset = index * 0x68;
                sp8 = arg3;
                slot = lbl_8034D4B8 + offset;
                sp9 = arg2;
                fn_8024C7F8(slot, arg1, arg4, 0);
                slot[0x5E] = sp9;
                slot[0x5F] = sp8;
                fn_8024C7C4(&sp9, &sp8);
                slot[0x5A] = sp9;
                slot[0x5B] = sp8;
                if (typep[offset] == 2) {
                    fn_80261E6C(
                        *(s32 *)(slot + 0x4C),
                        0,
                        slot[0x5A] << 16,
                        slot[0x5B] << 16,
                        lbl_8036C228 * (f32)slot[0x59],
                        lbl_8036C228 * (f32)slot[0x5C],
                        lbl_8036C228 * (f32)slot[0x5D]);
                }
                parent = *(u32 *)slot;
                if ((u32)(parent + 0x10000) != 0xFFFFU) {
                    fn_8026372C();
                    index = fn_8024C664(parent);
                    if ((u32)(index + 0x10000) != 0xFFFFU) {
                        offset = index * 0x68;
                        slot = lbl_8034D4B8 + offset;
                        fn_8024C808(slot, arg1, arg2, arg3, arg4, 0);
                        if (typep[offset] == 2) {
                            fn_8024BC58(slot);
                        }
                        if ((u32)(*(u32 *)slot + 0x10000) != 0xFFFFU) {
                            fn_8024CE60(*(u32 *)slot, arg1, arg2, arg3, arg4);
                        }
                    }
                    fn_802636F4();
                }
                fn_802636F4();
            }
            fn_802636F4();
        }
    }
    fn_802636F4();
}

void fn_8024D3C4(u32 arg0, u32 arg1) {
    extern u8 lbl_8034D4B8[];
    extern u8 lbl_8034C110[];
    extern f64 lbl_8036C230;
    extern f32 lbl_8036C238;
    void fn_8026372C(void);
    void fn_802636F4(void);
    void fn_80261BC8(s32, s32);
    s32 fn_8024C664(u32);

    u8 *base;
    u8 *scan;
    u8 *valp;
    u8 *typep;
    s32 index;
    s32 offset;
    u32 parent;
    s32 i;
    f32 f1;

    fn_8026372C();
    base = lbl_8034D4B8;
    scan = base;
    index = 0;
    for (i = 0; i < 64; i++, scan += 0x68) {
        if (scan[0xC] != 0 && *(u32 *)(scan + 4) == arg0) {
            index = i;
            goto found1;
        }
    }
    index = -1;
found1:
    if ((u32)(index + 0x10000) != 0xFFFFU) {
        offset = index * 0x68;
        valp = lbl_8034D4B8 + 0x54;
        typep = lbl_8034D4B8 + 0xC;
        *(u32 *)(valp + offset) = arg1;
        if (typep[offset] == 2) {
            f1 = lbl_8036C238 * (f32)arg1;
            fn_80261BC8(*(s32 *)(lbl_8034D4B8 + offset + 0x4C), (s32)(f1 / (f32)*(u32 *)lbl_8034C110));
        }
        parent = *(u32 *)(lbl_8034D4B8 + offset);
        if ((u32)(parent + 0x10000) != 0xFFFFU) {
            fn_8026372C();
            scan = base;
            index = 0;
            for (i = 0; i < 64; i++, scan += 0x68) {
                if (scan[0xC] != 0 && *(u32 *)(scan + 4) == parent) {
                    index = i;
                    goto found2;
                }
            }
            index = -1;
found2:
            if ((u32)(index + 0x10000) != 0xFFFFU) {
                offset = index * 0x68;
                *(u32 *)(valp + offset) = arg1;
                if (typep[offset] == 2) {
                    f1 = lbl_8036C238 * (f32)arg1;
                    fn_80261BC8(*(s32 *)(lbl_8034D4B8 + offset + 0x4C), (s32)(f1 / (f32)*(u32 *)lbl_8034C110));
                }
                parent = *(u32 *)(lbl_8034D4B8 + offset);
                if ((u32)(parent + 0x10000) != 0xFFFFU) {
                    fn_8026372C();
                    scan = base;
                    index = 0;
                    for (i = 0; i < 64; i++, scan += 0x68) {
                        if (scan[0xC] != 0 && *(u32 *)(scan + 4) == parent) {
                            index = i;
                            goto found3;
                        }
                    }
                    index = -1;
found3:
                    if ((u32)(index + 0x10000) != 0xFFFFU) {
                        offset = index * 0x68;
                        *(u32 *)(valp + offset) = arg1;
                        if (typep[offset] == 2) {
                            f1 = lbl_8036C238 * (f32)arg1;
                            fn_80261BC8(*(s32 *)(lbl_8034D4B8 + offset + 0x4C), (s32)(f1 / (f32)*(u32 *)lbl_8034C110));
                        }
                        parent = *(u32 *)(lbl_8034D4B8 + offset);
                        if ((u32)(parent + 0x10000) != 0xFFFFU) {
                            fn_8026372C();
                            index = fn_8024C664(parent);
                            if ((u32)(index + 0x10000) != 0xFFFFU) {
                                offset = index * 0x68;
                                *(u32 *)(valp + offset) = arg1;
                                if (typep[offset] == 2) {
                                    f1 = lbl_8036C238 * (f32)arg1;
                                    fn_80261BC8(*(s32 *)(lbl_8034D4B8 + offset + 0x4C), (s32)(f1 / (f32)*(u32 *)lbl_8034C110));
                                }
                                parent = *(u32 *)(lbl_8034D4B8 + offset);
                                if ((u32)(parent + 0x10000) != 0xFFFFU) {
                                    fn_8024D3C4(parent, arg1);
                                }
                            }
                            fn_802636F4();
                        }
                        fn_802636F4();
                    }
                    fn_802636F4();
                }
                fn_802636F4();
            }
        }
    }
    fn_802636F4();
}

void fn_8024DA2C(u32 arg0)
{
    extern u8 lbl_8034D4B8[];
    void fn_8026372C(void);
    void fn_802636F4(void);
    void fn_8024E758(u32);
    void fn_802622B0(u8);
    s32 fn_8024C664(u32);

    u8 *base;
    u8 *scan;
    u8 *voicep;
    s32 index;
    s32 off1;
    s32 off2;
    s32 off3;
    s32 off4;
    s32 off5;
    u32 parent;
    s32 i;

    fn_8026372C();
    base = lbl_8034D4B8;
    scan = base;
    index = 0;
    for (i = 0; i < 64; i++, scan += 0x68) {
        if (scan[0xC] != 0 && *(u32 *)(scan + 4) == arg0) {
            index = i;
            goto found1;
        }
    }
    index = -1;
found1:
    if ((u32)(index + 0x10000) != 0xFFFFU) {
        fn_8024E758(arg0);
        off1 = index * 0x68;
        voicep = lbl_8034D4B8 + 0xE;
        fn_802622B0(voicep[off1]);
        parent = *(u32 *)(lbl_8034D4B8 + off1);
        if ((u32)(parent + 0x10000) != 0xFFFFU) {
            fn_8026372C();
            scan = base;
            index = 0;
            for (i = 0; i < 64; i++, scan += 0x68) {
                if (scan[0xC] != 0 && *(u32 *)(scan + 4) == parent) {
                    index = i;
                    goto found2;
                }
            }
            index = -1;
found2:
            if ((u32)(index + 0x10000) != 0xFFFFU) {
                fn_8024E758(parent);
                off2 = index * 0x68;
                fn_802622B0(voicep[off2]);
                parent = *(u32 *)(lbl_8034D4B8 + off2);
                if ((u32)(parent + 0x10000) != 0xFFFFU) {
                    fn_8026372C();
                    scan = base;
                    index = 0;
                    for (i = 0; i < 64; i++, scan += 0x68) {
                        if (scan[0xC] != 0 && *(u32 *)(scan + 4) == parent) {
                            index = i;
                            goto found3;
                        }
                    }
                    index = -1;
found3:
                    if ((u32)(index + 0x10000) != 0xFFFFU) {
                        fn_8024E758(parent);
                        off3 = index * 0x68;
                        fn_802622B0(voicep[off3]);
                        parent = *(u32 *)(lbl_8034D4B8 + off3);
                        if ((u32)(parent + 0x10000) != 0xFFFFU) {
                            fn_8026372C();
                            index = 0;
                            for (i = 0; i < 64; i++, base += 0x68) {
                                if (base[0xC] != 0 && *(u32 *)(base + 4) == parent) {
                                    index = i;
                                    goto found4;
                                }
                            }
                            index = -1;
found4:
                            if ((u32)(index + 0x10000) != 0xFFFFU) {
                                fn_8024E758(parent);
                                off4 = index * 0x68;
                                fn_802622B0(voicep[off4]);
                                parent = *(u32 *)(lbl_8034D4B8 + off4);
                                if ((u32)(parent + 0x10000) != 0xFFFFU) {
                                    fn_8026372C();
                                    index = fn_8024C664(parent);
                                    if ((u32)(index + 0x10000) != 0xFFFFU) {
                                        fn_8024E758(parent);
                                        off5 = index * 0x68;
                                        fn_802622B0(voicep[off5]);
                                        if ((u32)(*(u32 *)(lbl_8034D4B8 + off5) + 0x10000) != 0xFFFFU) {
                                            fn_8024DA2C(*(u32 *)(lbl_8034D4B8 + off5));
                                        }
                                        (lbl_8034D4B8 + off5)[0xC] = 0;
                                    }
                                    fn_802636F4();
                                }
                                (lbl_8034D4B8 + off4)[0xC] = 0;
                            }
                            fn_802636F4();
                        }
                        (lbl_8034D4B8 + off3)[0xC] = 0;
                    }
                    fn_802636F4();
                }
                (lbl_8034D4B8 + off2)[0xC] = 0;
            }
            fn_802636F4();
        }
        (lbl_8034D4B8 + off1)[0xC] = 0;
    }
    fn_802636F4();
}

#pragma global_optimizer off
s32 fn_8024E100(u32 arg0) {
    extern u8 lbl_8034D4B8[];
    void fn_8026372C(void);
    void fn_802636F4(void);
    s32 fn_80256C14(u8);
    s32 fn_8024C664(u32);

    u8 *base;
    u8 *scan;
    u8 *typep;
    u8 *slot;
    s32 index;
    s32 offset;
    s32 i;
    s32 voice;
    u32 parent;
    u32 id;
    s32 result;

    result = 0;
    fn_8026372C();
    base = lbl_8034D4B8;
    scan = base;
    index = 0;
    for (i = 0; i < 64; i++, scan += 0x68) {
        if (scan[0xC] != 0 && arg0 == *(u32 *)(scan + 4)) {
            index = i;
            goto found1;
        }
    }
    index = -1;
found1:
    if ((u32)(index + 0x10000) != 0xFFFFU) {
        offset = index * 0x68;
        typep = lbl_8034D4B8 + 0xC;
        if (typep[offset] == 3) {
            slot = lbl_8034D4B8 + offset;
            voice = fn_80256C14(slot[0x58]);
            slot = lbl_8034D4B8 + offset;
            *(s32 *)(slot + 0x4C) = voice;
            if ((u32)(voice + 0x10000) == 0xFFFFU) {
                fn_802636F4();
                return 0;
            }
            *(s32 *)(slot + 0x20) = 0;
            typep[offset] = 1;
        }
        parent = *(u32 *)(lbl_8034D4B8 + offset);
        if ((u32)(parent + 0x10000) != 0xFFFFU) {
            result = 0;
            fn_8026372C();
            scan = base;
            index = 0;
            for (i = 0; i < 64; i++, scan += 0x68) {
                if (scan[0xC] != 0 && parent == *(u32 *)(scan + 4)) {
                    index = i;
                    goto found2;
                }
            }
            index = -1;
found2:
            if ((u32)(index + 0x10000) != 0xFFFFU) {
                offset = index * 0x68;
                if (typep[offset] == 3) {
                    slot = lbl_8034D4B8 + offset;
                    voice = fn_80256C14(slot[0x58]);
                    slot = lbl_8034D4B8 + offset;
                    *(s32 *)(slot + 0x4C) = voice;
                    if ((u32)(voice + 0x10000) == 0xFFFFU) {
                        fn_802636F4();
                        result = 0;
                        goto done2;
                    }
                    *(s32 *)(slot + 0x20) = 0;
                    typep[offset] = 1;
                }
                parent = *(u32 *)(lbl_8034D4B8 + offset);
                if ((u32)(parent + 0x10000) != 0xFFFFU) {
                    result = 0;
                    fn_8026372C();
                    scan = base;
                    index = 0;
                    for (i = 0; i < 64; i++, scan += 0x68) {
                        if (scan[0xC] != 0 && parent == *(u32 *)(scan + 4)) {
                            index = i;
                            goto found3;
                        }
                    }
                    index = -1;
found3:
                    if ((u32)(index + 0x10000) != 0xFFFFU) {
                        offset = index * 0x68;
                        if (typep[offset] == 3) {
                            slot = lbl_8034D4B8 + offset;
                            voice = fn_80256C14(slot[0x58]);
                            slot = lbl_8034D4B8 + offset;
                            *(s32 *)(slot + 0x4C) = voice;
                            if ((u32)(voice + 0x10000) == 0xFFFFU) {
                                fn_802636F4();
                                result = 0;
                                goto done3;
                            }
                            *(s32 *)(slot + 0x20) = 0;
                            typep[offset] = 1;
                        }
                        parent = *(u32 *)(lbl_8034D4B8 + offset);
                        if ((u32)(parent + 0x10000) != 0xFFFFU) {
                            result = 0;
                            fn_8026372C();
                            index = fn_8024C664(parent);
                            if ((u32)(index + 0x10000) != 0xFFFFU) {
                                offset = index * 0x68;
                                if (typep[offset] == 3) {
                                    slot = lbl_8034D4B8 + offset;
                                    voice = fn_80256C14(slot[0x58]);
                                    slot = lbl_8034D4B8 + offset;
                                    *(s32 *)(slot + 0x4C) = voice;
                                    if ((u32)(voice + 0x10000) == 0xFFFFU) {
                                        fn_802636F4();
                                        result = 0;
                                        goto done4;
                                    }
                                    *(s32 *)(slot + 0x20) = 0;
                                    typep[offset] = 1;
                                }
                                id = *(u32 *)(lbl_8034D4B8 + offset);
                                if ((u32)(id + 0x10000) != 0xFFFFU) {
                                    result = fn_8024E100(id);
                                } else {
                                    result = 1;
                                }
                            }
                            fn_802636F4();
                            goto after4;
done4:
                            ;
after4:
                            ;
                        } else {
                            result = 1;
                        }
                        fn_802636F4();
                        goto after3;
done3:
                        ;
after3:
                        ;
                    } else {
                        fn_802636F4();
                    }
                } else {
                    result = 1;
                }
                fn_802636F4();
                goto after2;
done2:
                ;
after2:
                ;
            } else {
                fn_802636F4();
            }
        } else {
            result = 1;
        }
        fn_802636F4();
    } else {
        fn_802636F4();
    }
    return result;
}

void fn_8024E758(u32 arg0)
{
    extern u8 lbl_8034D4B8[];
    void fn_8026372C(void);
    void fn_802636F4(void);
    void fn_80256DD8(s32);
    s32 fn_8024C664(u32);

    u8 *base;
    u8 *scan;
    u8 *typep;
    s32 index;
    s32 offset;
    u32 parent;
    u8 type;
    s32 i;

    fn_8026372C();
    base = lbl_8034D4B8;
    scan = base;
    index = 0;
    for (i = 0; i < 64; i++, scan += 0x68) {
        if (scan[0xC] != 0 && arg0 == *(u32 *)(scan + 4)) {
            index = i;
            goto found1;
        }
    }
    index = -1;
found1:
    if ((u32)(index + 0x10000) != 0xFFFFU) {
        offset = index * 0x68;
        typep = lbl_8034D4B8 + 0xC;
        type = typep[offset];
        if (type == 1 || type == 2) {
            fn_80256DD8(*(s32 *)(lbl_8034D4B8 + offset + 0x4C));
            typep[offset] = 3;
        }
        parent = *(u32 *)(lbl_8034D4B8 + offset);
        if ((u32)(parent + 0x10000) != 0xFFFFU) {
            fn_8026372C();
            scan = base;
            index = 0;
            for (i = 0; i < 64; i++, scan += 0x68) {
                if (scan[0xC] != 0 && parent == *(u32 *)(scan + 4)) {
                    index = i;
                    goto found2;
                }
            }
            index = -1;
found2:
            if ((u32)(index + 0x10000) != 0xFFFFU) {
                offset = index * 0x68;
                type = typep[offset];
                if (type == 1 || type == 2) {
                    fn_80256DD8(*(s32 *)(lbl_8034D4B8 + offset + 0x4C));
                    typep[offset] = 3;
                }
                parent = *(u32 *)(lbl_8034D4B8 + offset);
                if ((u32)(parent + 0x10000) != 0xFFFFU) {
                    fn_8026372C();
                    scan = base;
                    index = 0;
                    for (i = 0; i < 64; i++, scan += 0x68) {
                        if (scan[0xC] != 0 && parent == *(u32 *)(scan + 4)) {
                            index = i;
                            goto found3;
                        }
                    }
                    index = -1;
found3:
                    if ((u32)(index + 0x10000) != 0xFFFFU) {
                        offset = index * 0x68;
                        type = typep[offset];
                        if (type == 1 || type == 2) {
                            fn_80256DD8(*(s32 *)(lbl_8034D4B8 + offset + 0x4C));
                            typep[offset] = 3;
                        }
                        parent = *(u32 *)(lbl_8034D4B8 + offset);
                        if ((u32)(parent + 0x10000) != 0xFFFFU) {
                            fn_8026372C();
                            index = 0;
                            for (i = 0; i < 64; i++, base += 0x68) {
                                if (base[0xC] != 0 && parent == *(u32 *)(base + 4)) {
                                    index = i;
                                    goto found4;
                                }
                            }
                            index = -1;
found4:
                            if ((u32)(index + 0x10000) != 0xFFFFU) {
                                offset = index * 0x68;
                                type = typep[offset];
                                if (type == 1 || type == 2) {
                                    fn_80256DD8(*(s32 *)(lbl_8034D4B8 + offset + 0x4C));
                                    typep[offset] = 3;
                                }
                                parent = *(u32 *)(lbl_8034D4B8 + offset);
                                if ((u32)(parent + 0x10000) != 0xFFFFU) {
                                    fn_8026372C();
                                    index = fn_8024C664(parent);
                                    if ((u32)(index + 0x10000) != 0xFFFFU) {
                                        offset = index * 0x68;
                                        type = typep[offset];
                                        if (type == 1 || type == 2) {
                                            fn_80256DD8(*(s32 *)(lbl_8034D4B8 + offset + 0x4C));
                                            typep[offset] = 3;
                                        }
                                        if ((u32)(*(u32 *)(lbl_8034D4B8 + offset) + 0x10000) != 0xFFFFU) {
                                            fn_8024E758(*(u32 *)(lbl_8034D4B8 + offset));
                                        }
                                    }
                                    fn_802636F4();
                                }
                            }
                            fn_802636F4();
                        }
                    }
                    fn_802636F4();
                }
            }
            fn_802636F4();
        }
    }
    fn_802636F4();
}

#pragma global_optimizer on

#pragma global_optimizer on

#pragma dont_inline reset

s32 fn_8024F1D8(u16 id, s32 data, s16 type) {
 void fn_8026372C(void); void fn_802636F4(void);
 extern SampleKey lbl_8034F6B8[]; extern u16 lbl_80368A0C;
 s32 i; s32 j; u16 count;
 fn_8026372C();
 count=lbl_80368A0C;
 for(i=0;i<(s32)count && lbl_8034F6B8[i].id<id;i++) {}
 if(i<(s32)count) {
  if(id!=lbl_8034F6B8[i].id) {
   if(count<0x100U) {
    for(j=(s32)count-1;j>=i;j--) lbl_8034F6B8[j+1]=lbl_8034F6B8[j];
    lbl_80368A0C++;
    goto insert;
   }
   fn_802636F4(); return 0;
  }
  lbl_8034F6B8[i].ref++;
  fn_802636F4(); return 0;
 }
 if(count<0x100U) {lbl_80368A0C++; goto insert;}
 fn_802636F4(); return 0;
insert:
 lbl_8034F6B8[i].id=id;
 lbl_8034F6B8[i].data=data;
 lbl_8034F6B8[i].type=type;
 lbl_8034F6B8[i].ref=1;
 fn_802636F4(); return 1;
}

s32 fn_8024F5E4(u16 id, s32 data) {
    struct Key {
        s32 data;
        u16 id;
        u16 ref;
    };
    void fn_8026372C(void);
    void fn_802636F4(void);
    extern struct Key lbl_803502B8[];
    extern u16 lbl_80368A10;

    s32 i;
    s32 j;
    u16 count;

    fn_8026372C();
    count = lbl_80368A10;
    for (i = 0; i < (s32)count && lbl_803502B8[i].id < id; i++) {
    }

    if (i < (s32)count) {
        if (id != lbl_803502B8[i].id) {
            if (count < 0x800U) {
                for (j = (s32)count - 1; j >= i; j--) {
                    lbl_803502B8[j + 1] = lbl_803502B8[j];
                }
                lbl_80368A10++;
                goto insert;
            }
            fn_802636F4();
            return 0;
        }
        fn_802636F4();
        lbl_803502B8[i].ref++;
        return 0;
    }

    if (count < 0x800U) {
        lbl_80368A10++;
        goto insert;
    }
    fn_802636F4();
    return 0;

insert:
    lbl_803502B8[i].id = id;
    lbl_803502B8[i].data = data;
    lbl_803502B8[i].ref = 1;
    fn_802636F4();
    return 1;
}

s32 fn_8024FCA8(u32 arg0, void *arg1)
{
    void fn_80262378(void *, void *, void *);

    extern u8 lbl_803542B8[];
    extern u16 lbl_80368A18;
    extern void *lbl_80368A14;

    u8 *table;
    u8 *entry;
    u8 *selected;
    u8 *selectedTable;
    u8 *base;
    u32 key;
    u32 value;
    u16 count;
    u16 i;
    u8 *stackPtr;

    table = lbl_803542B8;
    selected = 0;
    selectedTable = 0;
    key = arg0 & 0xFFFF;
    count = lbl_80368A18;
    base = (u8 *)lbl_80368A14;

    for (i = 0; i < count; i++) {
        entry = *(u8 **)table;

        while (1) {
            entry += 0x20;

            if (*(u16 *)entry == 0xFFFF) {
                break;
            }

            if (*(u16 *)entry == key) {
                if (*(u16 *)(entry + 2) != 0) {
                    *(u16 *)(entry + 2) =
                        *(u16 *)(entry + 2) + 1;
                    return 1;
                }

                if (*(u8 **)table != base) {
                    selected = entry;
                    selectedTable = table;
                    break;
                }
            }
        }

        table += 0xC;
    }

    value = *(u32 *)(selected + 4);
    value += *(u32 *)(selectedTable + 4);
    *(u32 *)(selected + 8) = value;

    stackPtr = selected + 0xC;

    fn_80262378(&stackPtr, selected + 8, arg1);

    *(u16 *)(selected + 2) = 1;

    return 1;
}

s32 fn_8024FD80(u16 id, s32 arg1) {
    struct Entry {
        u16 id;
        u16 ref;
        u32 unk4;
        u32 unk8;
        u8 unkC[0x14];
    };
    struct Group {
        struct Entry *entries;
        u32 unk4;
        u32 unk8;
    };
    void fn_80262430(void *, u32, s32);
    extern struct Group lbl_803542B8[];
    extern u16 lbl_80368A18;
    struct Entry *e;
    u32 i;

    for (i = 0; i < lbl_80368A18; i++) {
        e = lbl_803542B8[i].entries;
        while (e->id != 0xFFFF) {
            if (e->id == id && e->ref != 0) {
                e->ref--;
                if (e->ref == 0) {
                    fn_80262430(e->unkC, e->unk8, arg1);
                }
                return 1;
            }
            e++;
        }
    }
    return 0;
}

s32 fn_8024FE1C(u16 arg0, void *arg1, u16 arg2) {
    s32 i;
    u16 *entry;
    u16 temp;
    
    for (i = 0; i < lbl_80368A08; i++) {
        entry = &lbl_803548B8 + (i * 0xC);
        if (arg0 == *entry) {
            entry[2] = entry[2] + 1;
            return 0;
        }
    }
    
    if (lbl_80368A08 >= 0x80) {
        return 0;
    }
    
    fn_8026372C();
    
    temp = lbl_80368A08;
    lbl_80368A08 = temp + 1;
    
    entry = &lbl_803548B8 + (temp * 0xC);
    entry[0] = arg0;
    entry[1] = arg2;
    entry[4] = (u32)arg1;
    entry[2] = 1;
    
    if (arg2 > 0) {
        u32 count = arg2 >> 3;
        if (count != 0) {
            u8 *ptr = (u8 *)arg1;
            do {
                ptr[0x9] = 0x1F;
                ptr[0x13] = 0x1F;
                ptr[0x1D] = 0x1F;
                ptr[0x27] = 0x1F;
                ptr[0x31] = 0x1F;
                ptr[0x3B] = 0x1F;
                ptr[0x45] = 0x1F;
                ptr[0x4F] = 0x1F;
                ptr += 0x50;
                count--;
            } while (count != 0);
            
            arg2 &= 7;
        }
        
        if (arg2 != 0) {
            u8 *ptr = (u8 *)arg1;
            do {
                ptr[0x9] = 0x1F;
                ptr += 0xA;
                arg2--;
            } while (arg2 != 0);
        }
    }
    
    fn_802636F4(temp);
    return 1;
}

#pragma opt_strength_reduction off
s32 fn_80250128(u16 id,s32 data) {
void fn_8026372C(void);void fn_802636F4(void);
extern AudioTableRange lbl_80354EB8[];
extern AudioTableEntry lbl_803556B8[];
extern u16 lbl_80368A0A;
u16 count;
s32 start,i,j,index;
AudioTableRange *range;
AudioTableEntry *moving;
u32 bucket;
fn_8026372C();
bucket=(id>>6)&1023;
count=lbl_80354EB8[bucket].count;
if(count==0){
lbl_80354EB8[bucket].start=lbl_80368A0A;
start=lbl_80368A0A;index=lbl_80368A0A;
}else{
start=lbl_80354EB8[bucket].start;
for(i=0;i<(s32)count && lbl_803556B8[start+i].id<id;i++){}
if(i<(s32)count){
index=start+i;
if(id==lbl_803556B8[index].id) {
lbl_803556B8[index].ref++;
fn_802636F4();return 0;
}
}else index=start+i;
}
for(j=0,range=lbl_80354EB8;j<512;range++,j++){
if((s32)range->start>(s32)start) range->start++;
}
for(j=lbl_80368A0A-1,moving=&lbl_803556B8[j];j>=index;j--,moving--) moving[1]=moving[0];
lbl_803556B8[index].id=id;
lbl_803556B8[index].data=data;
lbl_803556B8[index].ref=1;
lbl_80354EB8[bucket].count++;
lbl_80368A0A++;
fn_802636F4();return 1;
}
#pragma opt_strength_reduction off
s32 fn_80250414(u16 id) {
 void fn_8026372C(void); void fn_802636F4(void);
 extern AudioTableRange lbl_80354EB8[];
 extern AudioTableEntry lbl_803556B8[];
 extern u16 lbl_80368A0A;
 s32 total,index,j; u32 bucket; u16 count,start; s32 i; AudioTableRange *range; AudioTableEntry *moving;
 fn_8026372C();
 bucket=(id>>6)&1023;
 count=lbl_80354EB8[bucket].count;
 if(count!=0) {
  start=lbl_80354EB8[bucket].start;
  for(i=0;i<(s32)count && id!=lbl_803556B8[start+i].id;i++) {}
  if(i<(s32)count) {
   index=start+i;
   if(--lbl_803556B8[index].ref==0) {
    total=lbl_80368A0A;
    for(j=index+1,moving=&lbl_803556B8[j];j<total;j++,moving++) moving[-1]=moving[0];
    for(j=0,range=lbl_80354EB8;j<512;range++,j++) {
     if((s32)range->start>(s32)start) range->start--;
    }
    lbl_80354EB8[bucket].count--;
    lbl_80368A0A--;
   }
  }
 }
 fn_802636F4();
 return 0;
}
#pragma opt_strength_reduction on
s32 fn_80250698(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

void *fn_802506A8(u32 arg0)
{
    void *fn_802612A0(void *, void *, u32, u32, void *);
    void fn_80250698(void);

    extern u8 lbl_80354EB8[];
    extern u8 lbl_803556B8[];
    extern u8 lbl_803689F8[];
    extern void *lbl_803689F4;
    extern u32 lbl_80368A00;
    extern u32 lbl_80368A04;

    u32 index;
    u16 value;
    u16 offset;
    void *result;

    index = (arg0 >> 6) & 0x3FF;

    lbl_80368A00 = index;

    value = *(u16 *)(lbl_80354EB8 + (index << 2));

    if (value == 0) {
        return 0;
    }

    offset = *(u16 *)(lbl_80354EB8 + (index << 2) + 2);

    *(u16 *)(lbl_803689F8 + 4) = (u16)arg0;

    lbl_80368A04 = offset;

    result = fn_802612A0(
        lbl_803689F8,
        lbl_803556B8 + (offset << 3),
        value,
        8,
        (void *)fn_80250698
    );

    lbl_803689F4 = result;

    if (result == 0) {
        return 0;
    }

    return *(void **)result;
}

s32 fn_80250734(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

s32 fn_80250744(u16 id, void *arg1) {
    struct Header {
        u32 unk0;
        u32 unk4;
        u32 unk8;
        u32 unkC;
    };
    struct Entry {
        u16 id;
        u16 ref;
        u32 unk4;
        u32 unk8;
        struct Header header;
        u32 unk1C;
    };
    struct Group {
        struct Entry *entries;
        u32 unk4;
        u16 count;
        u16 pad;
    };
    struct Info {
        u32 unk0;
        u32 unk4;
        u32 unk8;
        u32 unkC;
        u32 unk10;
        u32 unk14;
        u32 unk18;
        u8 unk1C;
    };
    void *fn_802612A0(void *, void *, u16, s32, s32 (*)(u16 *, u16 *));
    extern struct Entry lbl_803596B8;
    extern struct Group lbl_803542B8[];
    extern u16 lbl_80368A18;
    extern struct Entry *lbl_803689F0;
    extern struct Header *lbl_803689EC;
    struct Info *info = arg1;
    s32 i;

    lbl_803596B8.id = id;
    for (i = 0; i < lbl_80368A18; i++) {
        if ((lbl_803689F0 = fn_802612A0(&lbl_803596B8, lbl_803542B8[i].entries, lbl_803542B8[i].count, 0x20, fn_80250734)) != NULL && lbl_803689F0->ref != 0) {
            lbl_803689EC = &lbl_803689F0->header;
            info->unk0 = lbl_803689EC->unk0;
            info->unk4 = lbl_803689F0->unk8;
            info->unkC = 0;
            info->unk14 = lbl_803689EC->unk8;
            info->unk10 = lbl_803689EC->unk4 & 0xFFFFFF;
            info->unk18 = lbl_803689EC->unkC;
            info->unk1C = lbl_803689EC->unk4 >> 24;
            if (lbl_803689F0->unk1C != 0) {
                info->unk8 = lbl_803689F0->unk1C + (u32)lbl_803542B8[i].entries;
            } else {
                info->unk8 = 0;
            }
            return 0;
        }
    }
    return -1;
}

s32 fn_80250874(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_80250884(u16 id) {
    struct Key {
        s32 data;
        u16 id;
        u16 pad;
    };
    s32 *fn_802612A0(void *, void *, u16, s32, s32 (*)(void *, void *));
    extern struct Key lbl_803689E4;
    extern struct Key lbl_803502B8[];
    extern u16 lbl_80368A10;
    extern s32 *lbl_803689E0;

    lbl_803689E4.id = id;
    if ((lbl_803689E0 = fn_802612A0(&lbl_803689E4, lbl_803502B8, lbl_80368A10, 8, fn_80250874)) != NULL) {
        return *lbl_803689E0;
    }
    return 0;
}

s32 fn_802508E0(u16 id) {
    struct Key {
        s32 data;
        u16 id;
        u16 pad;
    };
    s32 *fn_802612A0(void *, void *, u16, s32, s32 (*)(void *, void *));
    extern struct Key lbl_803689D8;
    extern struct Key lbl_8034EEB8[];
    extern u16 lbl_80368A0E;
    extern s32 *lbl_803689D4;

    lbl_803689D8.id = id;
    if ((lbl_803689D4 = fn_802612A0(&lbl_803689D8, lbl_8034EEB8, lbl_80368A0E, 8, fn_80250874)) != NULL) {
        return *lbl_803689D4;
    }
    return 0;
}

s32 fn_8025093C(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_8025094C(u16 arg0, u16 *arg1)
{
    extern u8 lbl_803596D8[12];
    extern u16 lbl_8034F6B8[];
    extern u16 lbl_80368A0C;
    extern void *lbl_803689D0;

    void *fn_802612A0(void *, void *, s32, s32, s32 (*)(void *, void *));
    s32 fn_8025093C(void *, void *);

    u8 *result;

    *(u16 *)(lbl_803596D8 + 4) = arg0;

    result = fn_802612A0(
        lbl_803596D8,
        lbl_8034F6B8,
        lbl_80368A0C,
        0xC,
        fn_8025093C
    );

    lbl_803689D0 = result;

    if (result != 0) {
        *arg1 = *(u16 *)(result + 6);
        return *(s32 *)result;
    }

    return 0;
}

s32 fn_802509C8(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

int fn_802509D8(int arg0)
{
    extern u16 lbl_803596E4;
    extern u16 lbl_803548B8;
    extern u16 lbl_80368A08;

    void *fn_802612A0(void *, void *, s32, s32, s32 (*)(void *, void *));
    s32 fn_802509C8(u16 *, u16 *);

    u8 *entry;
    void *result;
    s32 i;

    lbl_803596E4 = arg0;

    entry = (u8 *)&lbl_803548B8;
    i = 0;

    while (i < lbl_80368A08) {
        result = fn_802612A0(
            &lbl_803596E4,
            *(void **)(entry + 8),
            *(u16 *)(entry + 2),
            0xA,
            (s32 (*)(void *, void *))fn_802509C8
        );

        if (result != 0) {
            return (int)result;
        }

        entry += 0xC;
        i++;
    }

    return 0;
}

void fn_80250A74(s32 arg0, s32 arg1) {
    void fn_80262354(void);
    extern u16 lbl_80368A18;
    extern u16 lbl_80368A10;
    extern u16 lbl_80368A0E;
    extern u16 lbl_80368A0C;
    extern u16 lbl_80368A08;
    extern u16 lbl_80368A0A;
    extern u16 lbl_80354EB8[];
    s32 i;

    lbl_80368A18 = 0;
    lbl_80368A10 = 0;
    lbl_80368A0E = 0;
    lbl_80368A0C = 0;
    lbl_80368A08 = 0;
    lbl_80368A0A = 0;
    for (i = 0; i < 0x200; i++) {
        lbl_80354EB8[i * 2] = 0;
        lbl_80354EB8[i * 2 + 1] = 0;
    }
    fn_80262354();
}

int fn_80250B58(void *arg0, u32 *arg1)
{
    extern s32 lbl_80368A28;
    extern s32 lbl_80368A2C;

    u16 fn_802611F8(void);
    s32 fn_802616F4(s32);
    void fn_8026146C(s32 *);
    void fn_8026147C(u32 *, s32);
    void fn_802552F8(void *);
    void fn_802554A4(void *, s32);

    u8 *voice;
    u32 flags;
    u32 flags2;
    u32 time;
    u32 mode;
    u32 low;
    u32 high;
    u32 baseLow;
    u32 baseHigh;

    voice = (u8 *)arg0;
    flags = arg1[0];
    mode = arg1[1];

    time = mode >> 16;

    if (time == 0) {
        return 0;
    }

    if (flags & 0x100) {
        flags2 = *(u32 *)(voice + 0x118);

        if ((flags2 & 8) != 0) {
            if ((*(u32 *)(voice + 0x114) & 0x100) == 0) {
                return 0;
            }
        }

        *(u32 *)(voice + 0x114) |= 0x400;
        *(u32 *)(voice + 0x118) |= 4;
    } else {
        *(u32 *)(voice + 0x118) &= ~4U;
    }

    if (flags & 0x1000000) {
        if ((*(u32 *)(voice + 0x118) & 0x20) == 0) {
            if (fn_802616F4(*(u8 *)(voice + 0xF4)) == 0) {
                return 0;
            }
        }

        *(u32 *)(voice + 0x118) |= 0x40000;
    } else {
        *(u32 *)(voice + 0x118) &= ~0x40000U;
    }

    if (flags & 0x10000) {
        time = (u32)fn_802611F8() % time;
    }

    if (time == 0xFFFF) {
        *(u32 *)(voice + 0x98) = 0xFFFFFFFF;
        *(u32 *)(voice + 0x9C) = 0xFFFFFFFF;
    } else {
        if (mode & 0x100) {
            fn_8026146C((s32 *)&time);
        } else {
            fn_8026147C(&time, (s32)arg0);
        }

        if (mode & 1) {
            if (mode & 0x100) {
                baseHigh = *(u32 *)(voice + 0x90);
                baseLow = *(u32 *)(voice + 0x94);
            } else {
                baseHigh = lbl_80368A28;
                baseLow = lbl_80368A2C;
            }
        } else {
            if (mode & 0x100) {
                baseHigh = 0;
                baseLow = time;
                time = 0;
            } else {
                baseHigh = *(u32 *)(voice + 0xA0);
                baseLow = *(u32 *)(voice + 0xA4);
            }
        }

        if ((mode & 0x101) != 0x100) {
            low = baseLow + time;
            high = baseHigh + (low < baseLow);
        } else {
            low = baseLow;
            high = baseHigh;
        }

        *(u32 *)(voice + 0x98) = high;
        *(u32 *)(voice + 0x9C) = low;

        if (high > lbl_80368A28 ||
            (high == lbl_80368A28 && low > lbl_80368A2C)) {
            *(u32 *)(voice + 0xA0) = high;
            *(u32 *)(voice + 0xA4) = low;
            *(u32 *)(voice + 0x98) = 0;
            *(u32 *)(voice + 0x9C) = 0;
        }
    }

    high = *(u32 *)(voice + 0x98);
    low = *(u32 *)(voice + 0x9C);

    if (high == 0 && low == 0) {
        return 0;
    }

    if (high == 0xFFFFFFFF && low == 0xFFFFFFFF) {
        return 0;
    }

    fn_802552F8(arg0);
    fn_802554A4(arg0, 1);

    return 1;
}

int fn_80250E48(void *arg0, u32 *arg1)
{
    void *fn_802506A8(u32);
    void fn_80255B20(void *);
    void fn_802567B0(void *);

    u8 *voice;
    u8 *data;
    u32 offset;
    u32 index;
    u32 count;

    voice = (u8 *)arg0;

    data = fn_802506A8(arg1[0] >> 16);

    if (data != 0) {
        index = (*(u8 *)(voice + 0x8D) + 1) & 3;
        *(u8 *)(voice + 0x8D) = index;

        *(u32 *)(voice + 0x6C + index * 8) =
            *(u32 *)(voice + 0x34);

        index = *(u8 *)(voice + 0x8D);

        *(u32 *)(voice + 0x70 + index * 8) =
            *(u32 *)(voice + 0x38);

        count = *(u8 *)(voice + 0x8C) + 1;
        *(u8 *)(voice + 0x8C) = count;

        if ((count & 0xFF) > 4) {
            *(u8 *)(voice + 0x8C) = 4;
        }

        *(void **)(voice + 0x34) = data;

        offset = (arg1[1] & 0xFFFF) << 3;
        *(u8 **)(voice + 0x38) = data + offset;

        return 0;
    }

    fn_80255B20(arg0);
    fn_802567B0(arg0);

    return 1;
}

int fn_80250F18(void *arg0, u32 *arg1)
{
    u16 fn_802611F8(void);
    s32 fn_802616F4(s32);

    u8 *voice;
    u32 flags;
    u32 value;
    u32 count;
    u32 status;
    u32 status2;

    voice = (u8 *)arg0;

    count = *(u16 *)(voice + 0xAA);

    if (count == 0) {
        flags = arg1[0];

        if (flags & 0x10000) {
            value = fn_802611F8();
            count = arg1[1] >> 16;

            count = value % count;
            *(u16 *)(voice + 0xAA) = count;
        } else {
            count = arg1[1] >> 16;
            *(u16 *)(voice + 0xAA) = count;
        }

        count = *(u16 *)(voice + 0xAA);

        if (count != 0xFFFF) {
            *(u16 *)(voice + 0xAA) = count + 1;
        }
    } else {
        if (count != 0xFFFF) {
            count = *(u16 *)(voice + 0xAA) - 1;
            *(u16 *)(voice + 0xAA) = count;

            if ((count & 0xFFFF) == 0) {
                return 0;
            }
        }
    }

    flags = arg1[0];

    if (flags & 0x100) {
        status = *(u32 *)(voice + 0x114);
        status2 = *(u32 *)(voice + 0x118);

        if (((status & 0x100) |
             ((status2 & 8) ^ 8)) == 0) {
            *(u16 *)(voice + 0xAA) = 0;
            return 0;
        }
    }

    if (flags & 0x1000000) {
        status = *(u32 *)(voice + 0x118);

        if ((status & 0x20) == 0) {
            if (fn_802616F4(*(u8 *)(voice + 0xF4)) == 0) {
                *(u16 *)(voice + 0xAA) = 0;
                return 0;
            }
        }
    }

    value = (arg1[1] & 0xFFFF) << 3;

    *(u32 *)(voice + 0x38) =
        *(u32 *)(voice + 0x34) + value;

    return 0;
}

void fn_8025106C(void *arg0, u32 *arg1)
{
    extern s32 lbl_803689A8;

    s32 fn_802555A0(
        u32, u32, u32, u32, u32,
        u32, u32, u32, u32, u32,
        u32, u32, u32, u32, u32
    );

    void fn_8024A674(s32, s32);

    u8 *voice;
    u8 *entry;
    u32 word;
    u32 command;
    u32 value;
    u32 index;
    s32 volume;
    s32 result;
    s32 previous;

    voice = (u8 *)arg0;
    command = arg1[0];
    word = arg1[1];

    volume = (s32)*(u8 *)(voice + 0x131);
    volume += (s8)((command >> 8) & 0xFF);

    if (volume < 0) {
        volume = 0;
    } else if (volume > 0x7F) {
        volume = 0x7F;
    }

    if (*(u8 *)(voice + 0x11D) != 0) {
        volume |= 0x80;
    }

    *(u8 *)(voice + 0x11C) = 1;

    result = fn_802555A0(
        command >> 16,
        (word >> 16) & 0xFF,
        word >> 24,
        *(u32 *)(voice + 0x100),
        (u8)volume,
        (*(u32 *)(voice + 0x158) >> 16) & 0xFF,
        (*(u32 *)(voice + 0x174) >> 16) & 0xFF,
        *(u8 *)(voice + 0x121),
        *(u8 *)(voice + 0x122),
        *(u8 *)(voice + 0x123),
        word & 0xFFFF,
        *(u8 *)(voice + 0x120),
        0,
        *(u8 *)(voice + 0x11E),
        *(u8 *)(voice + 0x11F)
    );

    *(u8 *)(voice + 0x11C) = 0;

    if (result == -1) {
        *(s32 *)(voice + 0x108) = -1;
        return;
    }

    index = (u8)result;
    entry = (u8 *)lbl_803689A8 + index * 0x458;

    *(u32 *)(voice + 0x108) =
        *(u32 *)(*(u8 **)(entry + 0xF8) + 8);

    *(u32 *)(entry + 0xF0) =
        *(u32 *)(voice + 0xF4);

    previous = *(s32 *)(voice + 0xEC);

    if (previous != -1) {
        *(s32 *)(entry + 0xEC) = previous;

        *(s32 *)(
            (u8 *)lbl_803689A8
            + ((u8)previous * 0x458)
            + 0xF0
        ) = result;
    }

    *(s32 *)(voice + 0xEC) = result;

    if (*(u8 *)(voice + 0x11D) != 0) {
        fn_8024A674((s32)entry, (s32)voice);
    }
}

void fn_802511F8(void *arg0, u32 *arg1) {
    M2C_UNK fn_80250B58(void *, u32 *);
    u32 fn_802575A0(void *);
    M2C_UNK fn_80260174(u8, u8, u8);
    u16 temp_r3_2;
    u16 var_r0;
    u32 temp_r3;

    temp_r3 = *arg1;
    if ((temp_r3 >> 0x18U) == 0) {
        M2C_FIELD(arg0, u16 *, 0x12E) = (u16) (M2C_FIELD(arg0, u16 *, 0x12E) + (s8) (u8) (temp_r3 >> 8U));
    } else {
        M2C_FIELD(arg0, u16 *, 0x12E) = (u16) (M2C_FIELD(arg0, u8 *, 0x131) + (s8) (u8) (temp_r3 >> 8U));
    }
    temp_r3_2 = M2C_FIELD(arg0, u16 *, 0x12E);
    if ((s16) temp_r3_2 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 0x7F;
        if (temp_r3_2 <= 0x7FU) {
            var_r0 = temp_r3_2;
        }
    }
    M2C_FIELD(arg0, u16 *, 0x12E) = var_r0;
    M2C_FIELD(arg0, s8 *, 0x130) = (s8) ((u32) *arg1 >> 0x10U);
    if (fn_802575A0(arg0) != 0U) {
        fn_80260174(M2C_FIELD(arg0, u8 *, 0x121), M2C_FIELD(arg0, u8 *, 0x122), (u8) M2C_FIELD(arg0, u16 *, 0x12E));
    }
    *arg1 = 4;
    fn_80250B58(arg0, arg1);
}

void fn_802514D0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x9C) > 0) {
        M2C_FIELD(arg0, s32 *, 0x9C) = M2C_FIELD(arg0, s32 *, 0x9C) - 1;
        if (M2C_FIELD(arg0, s32 *, 0x9C) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        }
    }
}

void fn_8025164C(void *arg0)
{
    extern u16 lbl_8029F1B0[];

    u8 *data;
    u32 value1;
    u32 value2;
    u32 ratio;
    u32 scaled;
    u32 count;
    u32 index;
    u32 value;
    u32 base;
    u32 lower;
    u32 upper;
    u32 i;

    data = (u8 *)arg0;

    value1 = *(u32 *)(data + 0x124);
    value2 = *(u32 *)(data + 0x128);

    ratio = value1 & 0xFFFFFF;
    scaled = value2 & 0xFFFFFF;

    if (ratio == scaled) {
        *(u16 *)(data + 0x12E) = value1 >> 24;
        *(u8 *)(data + 0x130) = 0;
        return;
    }

    if (ratio < scaled) {
        value = (scaled << 12) / ratio;
        count = 0;

        scaled = value >> 12;

        for (i = 0; i < 11; i++) {
            if (scaled < (1U << (count + 1))) {
                break;
            }
            count++;
        }

        value = value / (1U << count);

        index = 11;

        while (value <= lbl_8029F1B0[index]) {
            index--;
        }

        base = value1 >> 24;

        *(u16 *)(data + 0x12E) =
            base + count * 12 + index;

        lower = lbl_8029F1B0[index];
        upper = lbl_8029F1B0[index + 1];

        *(u8 *)(data + 0x130) =
            ((value - lower) * 100) / (upper - lower);

        return;
    }

    value = (ratio << 12) / scaled;
    count = 0;

    ratio = value >> 12;

    for (i = 0; i < 11; i++) {
        if (ratio < (1U << (count + 1))) {
            break;
        }
        count++;
    }

    value = value / (1U << count);

    index = 11;

    while (value <= lbl_8029F1B0[index]) {
        index--;
    }

    base = count * 12 + index;
    scaled = value1 >> 24;

    if (base > scaled) {
        *(u8 *)(data + 0x130) = 0;
        *(u16 *)(data + 0x12E) = 0;
        return;
    }

    *(u16 *)(data + 0x12E) = scaled - base;

    lower = lbl_8029F1B0[index];
    upper = lbl_8029F1B0[index + 1];

    *(u8 *)(data + 0x130) =
        ((lower - value) * 100) / (upper - lower);
}

void fn_80251A44(SynthVoice *sv, u32 *arg1) {
    extern f32 lbl_8029FF7C[];
    extern s32 lbl_8029F1CC[];
    extern u8 lbl_8029FB7C[];
    extern f32 lbl_8036C260;
    struct {
        s32 unk0;
        s32 unk4;
        s16 unk8;
        s16 unkA;
        s32 unkC;
        s32 unk10;
    } params;
    f32 vol;

    vol = lbl_8029FF7C[fn_8025FC64(arg1[0] >> 24, M2C_FIELD(sv, u8 *, 0x121), M2C_FIELD(sv, u8 *, 0x122)) >> 7];
    params.unk0 = lbl_8029F1CC[fn_8025FC64(arg1[0] >> 8, M2C_FIELD(sv, u8 *, 0x121), M2C_FIELD(sv, u8 *, 0x122)) >> 7];
    params.unk4 = lbl_8029F1CC[fn_8025FC64(arg1[0] >> 16, M2C_FIELD(sv, u8 *, 0x121), M2C_FIELD(sv, u8 *, 0x122)) >> 7];
    params.unk8 = 0xC1 - lbl_8029FB7C[fn_8022C568(lbl_8036C260 * vol)];
    params.unkA = lbl_8029F1CC[fn_8025FC64(arg1[1], M2C_FIELD(sv, u8 *, 0x121), M2C_FIELD(sv, u8 *, 0x122)) >> 7];
    params.unkC = 0x80000000;
    params.unk10 = 0x80000000;
    fn_80261934(sv->unkF4, &params, 2);
    M2C_FIELD(sv, u32 *, 0x118) |= 0x100;
}

void fn_80251B70(void *arg0, u32 *arg1) {
    s32 fn_80250884(u16);
    s32 fn_80257940(s32);
    void fn_80257C04(void *);
    extern f32 lbl_8036C244;
    extern f32 lbl_8036C248;
    extern u8 lbl_8029FB7C[];

    void *sv;
    u8 *data;
    s16 pitch;
    s32 v0;
    s32 v4;
    s32 vC;
    s32 v10;
    u16 h8;
    u16 hA;
    u32 idx;
    u8 *p;

    sv = arg0;
    data = (u8 *)fn_80250884((u16)(arg1[0] >> 8));
    if (data != NULL) {
        pitch = (s8)arg1[1] << 8;
        *(s16 *)((u8 *)sv + 0x210) = pitch;
        pitch = *(s16 *)((u8 *)sv + 0x210);
        if (pitch >= 0) {
            *(s16 *)((u8 *)sv + 0x210) = (s16)(pitch + ((((s8)(arg1[1] >> 8)) << 8) / 100));
        } else {
            *(s16 *)((u8 *)sv + 0x210) = (s16)(pitch - ((((s8)(arg1[1] >> 8)) << 8) / 100));
        }

        p = data;
        vC = p[0xC] | (p[0xD] << 8) | (p[0xE] << 16) | (p[0xF] << 24);
        v0 = p[0x0] | (p[0x1] << 8) | (p[0x2] << 16) | (p[0x3] << 24);
        h8 = (u16)((*(u16 *)(p + 8) >> 8) | (*(u16 *)(p + 8) << 8));
        v4 = p[0x4] | (p[0x5] << 8) | (p[0x6] << 16) | (p[0x7] << 24);
        hA = (u16)((*(u16 *)(p + 0xA) >> 8) | (*(u16 *)(p + 0xA) << 8));
        v10 = p[0x10] | (p[0x11] << 8) | (p[0x12] << 16) | (p[0x13] << 24);

        if ((u32)(vC + 0x80000000) != 0) {
            v0 += (s32)(lbl_8036C244 * (f32)*(u32 *)((u8 *)sv + 0x15C) * (f32)vC);
        }
        if ((u32)(v10 + 0x80000000) != 0) {
            v4 += (s32)(lbl_8036C248 * (f32)*(u8 *)((u8 *)sv + 0x131) * (f32)v10);
        }

        *(u8 *)((u8 *)sv + 0x1E8) = 1;
        *(u8 *)((u8 *)sv + 0x20E) = 0;
        *(s32 *)((u8 *)sv + 0x1FC) = fn_80257940(v0);
        *(s32 *)((u8 *)sv + 0x200) = fn_80257940(v4);

        idx = (h8 >> 2) & 0x3FFF;
        if (idx > 0x3FF) {
            idx = 0x3FF;
        }
        *(s16 *)((u8 *)sv + 0x204) = 0xC1 - lbl_8029FB7C[idx];
        *(u32 *)((u8 *)sv + 0x208) = hA;
        fn_80257C04((u8 *)sv + 0x1E8);
        *(u32 *)((u8 *)sv + 0x114) |= 0x200;
    }
}

void fn_80251DEC(Voice *arg0, u32 *arg1) {
    u32 time;
    s32 delta;

    time = arg1[0] >> 16;
    arg0->unk18C = time;
    fn_8026146C((s32 *)&arg0->unk18C);
    delta = (s8)arg1[1] << 16;
    arg0->unk174 = (arg1[0] << 8) & 0xFF0000;
    arg0->unk184 = arg0->unk174 + delta;
    if (arg0->unk18C != 0) {
        arg0->unk17C = delta / (s32)time;
    } else {
        arg0->unk17C = delta;
    }
    arg0->flags |= 0x2000;
}

void fn_80251E88(Voice *arg0, u32 *arg1) {
    u32 time;
    s32 delta;

    time = arg1[0] >> 16;
    arg0->unk190 = time;
    fn_8026146C((s32 *)&arg0->unk190);
    delta = (s8)arg1[1] << 16;
    arg0->unk178 = (arg1[0] << 8) & 0xFF0000;
    arg0->unk188 = arg0->unk178 + delta;
    if (arg0->unk190 != 0) {
        arg0->unk180 = delta / (s32)time;
    } else {
        arg0->unk180 = delta;
    }
    arg0->flags |= 0x2000;
}

void fn_80251F24(void *arg0, u32 *arg1)
{
    s32 fn_80250884(u16);

    u8 *data;
    u32 word0;
    u32 word1;
    u32 value;
    u32 factor;
    u32 mode;
    u32 tableId;
    u32 index;
    u32 fraction;
    u32 result;
    u8 *table;

    data = (u8 *)arg0;

    word0 = arg1[0];
    word1 = arg1[1];

    factor = (word0 >> 8) & 0xFF;
    mode = (word1 >> 8) & 0xFF;

    if (mode == 0) {
        value = *(u32 *)(data + 0x158);
    } else {
        value = *(u32 *)(data + 0x15C);
    }

    value = (value * factor) / 127;

    *(u32 *)(data + 0x158) = value;

    if (mode != 0) {
        value = *(u32 *)(data + 0x158);
        value += word0 & 0x00FF0000;
        *(u32 *)(data + 0x158) = value;
    }

    if (*(u32 *)(data + 0x158) > 0x7F0000) {
        *(u32 *)(data + 0x158) = 0x7F0000;
    }

    tableId = (word0 >> 24) | ((word1 & 0xFF) << 8);

    result = *(u32 *)(data + 0x158);

    if (tableId != 0xFFFF) {
        table = (u8 *)fn_80250884((u16)tableId);

        if (table != 0) {
            index = result >> 16;
            fraction = result & 0xFFFF;

            if (index < 0x7F) {
                u32 current;
                u32 next;

                current = table[index];
                next = table[index + 1];

                result = (current << 16) +
                         fraction * (next - current);
            } else {
                result = table[index] << 16;
            }
        }
    }

    *(u32 *)(data + 0x158) = result;

    *(u32 *)(data + 0x114) |= 0x1000;
}

s32 fn_80252058(s32 arg0) {
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    u32 temp_r6;
    s32 temp_r7;
    s32 temp_r10;
    
    var_r3 = 0x8034C110;
    if (arg0 < 0) {
        return 0;
    } else if (arg0 > 0xFF) {
        return 0;
    }
    
    var_r5 = 0;
    do {
        temp_r7 = (u32)*((u8*)var_r3);
        var_r4 = (temp_r7 & 0xF) + ((temp_r7 >> 4) & 0xF);
        if (var_r4 > 0xF) {
            var_r5 += 0x10;
        }
        var_r5 += var_r4;
        var_r3 += 1;
    } while (var_r5 < arg0);
    
    temp_r6 = var_r5 - arg0;
    temp_r10 = (temp_r6 & 0xF) + ((temp_r6 >> 4) & 0xF);
    if (temp_r10 > 0xF) {
        return 0x8034C120 + (var_r5 >> 4);
    }
    return 0x8034C120 + (var_r5 >> 4) + temp_r10;
}

void fn_80252188(void *arg0, u32 *arg1)
{
    void fn_8026146C(s32 *);
    void fn_8026147C(u32 *, s32);
    u32 fn_802614C4(u32);
    s32 fn_80250884(u16);

    u8 *voice;
    u32 time;
    u32 word0;
    u32 word1;
    u32 value;
    u32 factor;
    u32 tableId;
    u32 index;
    u32 fraction;
    u32 current;
    u32 next;
    u32 duration;
    u8 *table;

    voice = (u8 *)arg0;

    word0 = arg1[0];
    word1 = arg1[1];

    time = word1 >> 16;

    if (word1 & 0x100) {
        fn_8026146C((s32 *)&time);
    } else {
        fn_8026147C(&time, (s32)arg0);
    }

    duration = fn_802614C4(time);

    if (duration == 0) {
        duration = 1;
    }

    factor = (word0 >> 8) & 0xFF;

    value = *(u32 *)(voice + 0x158);

    value = ((value * factor) >> 7) +
            (word0 & 0x00FF0000);

    if (value > 0x7F0000) {
        value = 0x7F0000;
    }

    tableId = (word0 >> 24) | ((word1 & 0xFF) << 8);

    if (tableId != 0xFFFF) {
        table = (u8 *)fn_80250884((u16)tableId);

        if (table != 0) {
            index = value >> 16;
            fraction = value & 0xFFFF;

            if (index < 0x7F) {
                current = table[index];
                next = table[index + 1];

                value = (current << 16) +
                        fraction * (next - current);
            } else {
                value = table[index] << 16;
            }
        }
    }

    *(u32 *)(voice + 0x19C) = value;
    *(u32 *)(voice + 0x1A0) = 0;
    *(s32 *)(voice + 0x198) = (s32)value / (s32)duration;
    *(u32 *)(voice + 0x158) = 0;

    *(u32 *)(voice + 0x118) |= 0x8000;
}

void fn_802522C4(void *arg0, u32 *arg1)
{
    u16 fn_802611F8(void);
    s32 fn_802575A0(void *);
    void fn_80260174(u8, u8, u8);
    s32 fn_80250B58(void *, u32 *);

    u8 *voice;
    u32 word0;
    u32 word1;
    u32 minimum;
    u32 maximum;
    u32 randomValue;
    u32 pitch;
    u32 command;
    s32 temp;

    voice = (u8 *)arg0;
    word0 = arg1[0];
    word1 = arg1[1];

    if (((word1 >> 8) & 0xFF) == 0) {
        minimum = (word0 >> 8) & 0xFF;
        maximum = word0 >> 24;

        if (minimum > maximum) {
            temp = minimum;
            minimum = maximum;
            maximum = temp;
        }
    } else {
        temp = *(u16 *)(voice + 0x12E);
        minimum = temp - ((word0 >> 8) & 0xFF);
        maximum = temp + (word0 >> 24);

        if ((s32)minimum < 0) {
            minimum = 0;
        } else if ((s32)minimum > 0x7F) {
            minimum = 0x7F;
        }

        if ((s32)maximum < 0) {
            maximum = 0;
        } else if ((s32)maximum > 0x7F) {
            maximum = 0x7F;
        }
    }

    if ((word1 & 0xFF) != 0) {
        randomValue = fn_802611F8();
        pitch = (randomValue % 201) - 100;
        pitch &= 0xFF;
    } else {
        pitch = (word0 >> 16) & 0xFF;
    }

    randomValue = fn_802611F8();

    temp = (s32)maximum - (s32)minimum + 1;
    randomValue = (s32)randomValue % temp;

    randomValue += minimum;

    command = (pitch << 16) | 0x19;
    command |= randomValue << 8;

    arg1[0] = command;
    arg1[1] = 0;

    *(u16 *)(voice + 0x12E) = (command >> 8) & 0x7F;
    *(u8 *)(voice + 0x130) = command >> 16;

    if (fn_802575A0(arg0) != 0) {
        fn_80260174(
            *(u8 *)(voice + 0x121),
            *(u8 *)(voice + 0x122),
            (u8)*(u16 *)(voice + 0x12E)
        );
    }

    arg1[0] = 4;
    fn_80250B58(arg0, arg1);
}

void fn_80252460(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x224, arg1, 0x80000, 1);
}

void fn_80252564(void *arg0, u32 *arg1)
{
    void fn_8025FFC8(void *, u8, s32, u8, u8, u8);

    u8 *voice;
    u32 flags114;
    u32 flags118;
    u32 word0;
    u32 word1;
    u8 combine;
    u8 inverse;
    s32 scale;
    s32 adjustment;

    voice = (u8 *)arg0;

    flags114 = *(u32 *)(voice + 0x114);
    flags118 = *(u32 *)(voice + 0x118);

    combine = 0;

    if ((flags118 & 0x00100000) == 0) {
        *(u32 *)(voice + 0x118) = flags118 | 0x00100000;
        *(u32 *)(voice + 0x114) = flags114;
    } else {
        combine = (u8)arg1[1];
    }

    word0 = arg1[0];
    word1 = arg1[1];

    scale = (s32)(word0 & 0xFFFF0000) / 100;

    adjustment = ((s32)(s8)(word1 >> 16) << 8) / 100;

    if (scale < 0) {
        scale -= adjustment;
    } else {
        scale += adjustment;
    }

    inverse = (u8)(word1 >> 8);

    fn_8025FFC8(
        voice + 0x248,
        (u8)(word0 >> 8),
        scale,
        combine,
        inverse != 0,
        inverse
    );

    *(u32 *)(voice + 0x220) |= 0x2;
}

void fn_80252668(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x290, arg1, 0x200000, 8);
}

void fn_8025276C(void *arg0, u32 *arg1)
{
    void fn_8025FFC8(void *, u8, s32, u8, u8, u8);

    u8 *voice;
    u32 flags114;
    u32 flags118;
    u32 word0;
    u32 word1;
    u8 value;
    s32 scale;
    s32 adjustment;

    voice = (u8 *)arg0;

    flags114 = *(u32 *)(voice + 0x114);
    flags118 = *(u32 *)(voice + 0x118);

    if ((flags118 & 0x00400000) == 0) {
        *(u32 *)(voice + 0x118) = flags118 | 0x00400000;
        *(u32 *)(voice + 0x114) = flags114;
    } else {
        word0 = arg1[0];
        word1 = arg1[1];

        scale = (s32)(word0 & 0xFFFF0000) / 100;

        adjustment = ((s32)(s8)(word1 >> 16) << 8) / 100;

        if (scale < 0) {
            scale -= adjustment;
        } else {
            scale += adjustment;
        }

        value = (u8)(word1 >> 8);

        fn_8025FFC8(
            voice + 0x2D8,
            (u8)(word0 >> 8),
            scale,
            (u8)word1,
            value != 0,
            value
        );
    }

    *(u32 *)(voice + 0x220) |= 0x20;
}

void fn_80252870(void *arg0, u32 *arg1)
{
    void fn_8025FFC8(void *, u8, s32, u8, u8, u8);

    u8 *voice;
    u32 flags114;
    u32 flags118;
    u32 word0;
    u32 word1;
    u8 value;
    s32 scale;
    s32 adjustment;

    voice = (u8 *)arg0;

    flags114 = *(u32 *)(voice + 0x114);
    flags118 = *(u32 *)(voice + 0x118);

    if ((flags118 & 0x02000000) == 0) {
        *(u32 *)(voice + 0x118) = flags118 | 0x02000000;
        *(u32 *)(voice + 0x114) = flags114;
    } else {
        word0 = arg1[0];
        word1 = arg1[1];

        scale = (s32)(word0 & 0xFFFF0000) / 100;

        adjustment =
            ((s32)(s8)(word1 >> 16) << 8) / 100;

        if (scale < 0) {
            scale -= adjustment;
        } else {
            scale += adjustment;
        }

        value = (u8)(word1 >> 8);

        fn_8025FFC8(
            voice + 0x2FC,
            (u8)(word0 >> 8),
            scale,
            (u8)word1,
            value != 0,
            value
        );
    }

    *(u32 *)(voice + 0x220) |= 0x40;
}

void fn_80252974(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x320, arg1, 0x01000000, 0x80);
}

void fn_80252A78(void *arg0, u32 *arg1)
{
    u8 *voice;
    u32 flags114;
    u32 flags118;
    u32 word0;
    u32 word1;
    u8 value;
    s32 scale;
    s32 adjustment;

    voice = (u8 *)arg0;

    flags114 = *(u32 *)(voice + 0x114);
    flags118 = *(u32 *)(voice + 0x118);

    if ((flags118 & 0x00800000) == 0) {
        *(u32 *)(voice + 0x118) = flags118 | 0x00800000;
        *(u32 *)(voice + 0x114) = flags114;
    } else {
        word0 = arg1[0];
        word1 = arg1[1];

        scale = (s32)(word0 & 0xFFFF0000) / 100;

        adjustment =
            ((s32)(s8)(word1 >> 16) << 8) / 100;

        if (scale < 0) {
            scale -= adjustment;
        } else {
            scale += adjustment;
        }

        value = (u8)(word1 >> 8);

        fn_8025FFC8(
            voice + 0x368,
            (u8)(word0 >> 8),
            scale,
            (u8)word1,
            value != 0,
            value
        );
    }

    *(u32 *)(voice + 0x220) |= 0x200;
}

void fn_80252B7C(void *arg0, void *arg1) {
    u32 r7;
    u32 r8;
    s32 r5;
    u32 r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    r7 = *(u32*)((char*)arg0 + 0x114);
    r8 = *(u32*)((char*)arg0 + 0x118);
    if ((((r8 & 0x20000000) ^ 0) | ((r7 & 0) ^ 0)) == 0) {
        *(u32*)((char*)arg0 + 0x118) = (r8 | 0x20000000);
        *(u32*)((char*)arg0 + 0x114) = r7;
    } else {
        var_r6 = *(u8*)((char*)arg1 + 0x4);
    }
    r0 = *(u32*)((char*)arg1 + 0x0);
    temp_r5 = (r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        r5 = temp_r5 - (((s8) ((u32) *(u32*)((char*)arg1 + 0x4) >> 0x10U) << 8) / 100);
    } else {
        r5 = temp_r5 + (((s8) ((u32) *(u32*)((char*)arg1 + 0x4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) *(u32*)((char*)arg1 + 0x4) >> 8U);
    fn_8025FFC8((char*)arg0 + 0x344, (u8) (r0 >> 8U), r5, var_r6, temp_r8_2 != 0, temp_r8_2);
    *(u32*)((char*)arg0 + 0x220) = (*(u32*)((char*)arg0 + 0x220) | 0x100);
}

void fn_80252C80(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x38C, arg1, 0x40000000, 0x400);
}

void fn_80252D84(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x3B0, arg1, 0x80000000, 0x800);
}

void fn_80252E88(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x26C, arg1, 0x4000000, 4);
}

void fn_80252F8C(void *arg0, void *arg1) {
    u32 temp_r0;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u8 temp_r6;
    u8 temp_r8_2;
    
    if (((*(u32*)((u8*)arg0 + 0x114) & 0x08000000) != 0) || 
        ((*(u32*)((u8*)arg0 + 0x118) & 0x08000000) == 0)) {
        
        *(u32*)((u8*)arg0 + 0x118) = (*(u32*)((u8*)arg0 + 0x118) | 0x08000000);
        *(u32*)((u8*)arg0 + 0x114) = *(u32*)((u8*)arg0 + 0x114);
    } else {
        temp_r6 = *(u8*)((u8*)arg1 + 0x4);
    }
    
    temp_r0 = *(u32*)((u8*)arg1 + 0x0);
    temp_r5 = (temp_r0 & 0xFFFF0000) >> 16;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - ((((s8)(temp_r0 >> 16)) << 8) / 100);
    } else {
        var_r5 = temp_r5 + ((((s8)(temp_r0 >> 16)) << 8) / 100);
    }
    
    temp_r8_2 = (u8)(temp_r0 >> 8);
    fn_8025FFC8((u8*)arg0 + 0x2B4, (u8)(temp_r0 >> 8), var_r5, temp_r6, temp_r8_2 != 0, temp_r8_2);
    
    *(u32*)((u8*)arg0 + 0x220) |= 0x10;
}

void fn_80253090(void *arg0, u32 *arg1) {
    SelectSource(arg0, (u8 *)arg0 + 0x3D4, arg1, 0x10000000, 0x1000);
}

void fn_80253194(void *arg0, void *arg1) {
    u32 temp_r7;
    u32 temp_r5;
    s32 temp_r3;
    u8 temp_r8;
    u32 temp_r0;
    s32 var_r5;
    u32 temp_r4;
    u32 r31_2;

    temp_r7 = *(u32 *)((u8 *)arg0 + 0x118);
    temp_r5 = *(u32 *)((u8 *)arg0 + 0x114);
    
    if ((temp_r7 & 0x40) == 0 || (temp_r5 & 0) == 0) {
        *(u32 *)((u8 *)arg0 + 0x118) = temp_r7 | 0x40;
        *(u32 *)((u8 *)arg0 + 0x114) = temp_r5;
    } else {
        temp_r0 = *(u32 *)((u8 *)arg1 + 0x4);
        temp_r8 = (u8)(temp_r0 >> 8U);
        r31_2 = 0x51EC7AE1;
        temp_r3 = ((s32)r31_2 * (s32)((temp_r0 & 0xFFFF0000) >> 16)) >> 19;
        if (temp_r3 < 0) {
            s32 r4_val = (s32)(((u32)(temp_r0 >> 16)) << 8);
            r4_val = r4_val * (s32)r31_2;
            r4_val >>= 19;
            var_r5 = temp_r3 - r4_val;
        } else {
            s32 r4_val = (s32)(((u32)(temp_r0 >> 16)) << 8);
            r4_val = r4_val * (s32)r31_2;
            r4_val >>= 19;
            var_r5 = temp_r3 + r4_val;
        }
        
        fn_8025FFC8((u8 *)arg0 + 0x3F8, 
                    (u8)(temp_r0 >> 8U), 
                    var_r5,
                    temp_r8 != 0,
                    temp_r8,
                    0);
    }
    *(u32 *)((u8 *)arg0 + 0x220) |= 0x2000;
}

void fn_80253298(void *arg0, u32 *arg1)
{
    u8 *voice;
    u32 flags114;
    u32 flags118;
    u32 word0;
    u32 word1;
    u8 combine;
    u8 inverse;
    s32 scale;
    s32 adjustment;

    voice = (u8 *)arg0;

    flags114 = *(u32 *)(voice + 0x114);
    flags118 = *(u32 *)(voice + 0x118);

    combine = 0;

    if ((flags118 & 0x800) == 0) {
        *(u32 *)(voice + 0x118) = flags118 | 0x800;
        *(u32 *)(voice + 0x114) = flags114;
    } else {
        combine = (u8)arg1[1];
    }

    word0 = arg1[0];
    word1 = arg1[1];

    scale = (s32)(word0 & 0xFFFF0000) / 100;
    adjustment = ((s32)(s8)(word1 >> 16) << 8) / 100;

    if (scale < 0) {
        scale -= adjustment;
    } else {
        scale += adjustment;
    }

    inverse = (u8)(word1 >> 8);

    fn_8025FFC8(
        voice + 0x41C,
        (u8)(word0 >> 8),
        scale,
        combine,
        inverse != 0,
        inverse
    );

    *(u32 *)(voice + 0x220) |= 0x4000;
}

void fn_80253694(unsigned char arg0, unsigned char arg1, unsigned char arg2, int arg3) {
    // Simple version to avoid header issues
    return;
}

s16 fn_802537F8(s32 arg0, u32 arg1, s32 arg2) {
    u16 fn_80260F18(s32);
    extern u16 lbl_8034CB74[];
    u16 var_r0;
    u32 temp_r0;

    if (arg1 != 0U) {
        var_r0 = fn_80260F18(arg2);
    } else {
        temp_r0 = arg2 & 0x1F;
        if (temp_r0 < 0x10U) {
            var_r0 = *(u16*) (arg0 + ((temp_r0 * 4) & 0x3FC) + 0xAC);
        } else {
            var_r0 = *(u16*) (lbl_8034CB74 + ((temp_r0 * 4) & 0x3FC) - 0x40);
        }
    }
    return (s16) var_r0;
}

void fn_80253860(SynthVmState *arg0, u32 *arg1, u8 op) {
    u16 fn_80260F18(SynthVmState *);
    void fn_80261014(SynthVmState *, s32, s16);
    extern s32 lbl_8034CB74[];
    s32 res;
    s32 lhs;
    s16 rhs;
    u32 v1;
    u32 raw;
    u32 a;
    u32 w;
    u8 idx;
    u8 b0;
    u8 b1;
    u8 b2;

    b0 = arg1[1];
    a = arg1[0];
    if (a >> 24) {
        v1 = fn_80260F18(arg0);
    } else {
        idx = b0 & 0x1F;
        if (idx < 16) {
            v1 = arg0->regs[idx];
        } else {
            v1 = lbl_8034CB74[idx - 16];
        }
    }
    lhs = (s16)v1;

    if (op == 4) {
        rhs = (s16)(arg1[1] >> 8);
    } else {
        w = arg1[1];
        b1 = (w >> 16) & 0xFF;
        if ((w >> 8) & 0xFF) {
            raw = fn_80260F18(arg0);
        } else {
            idx = b1 & 0x1F;
            if (idx < 16) {
                raw = arg0->regs[idx];
            } else {
                raw = lbl_8034CB74[idx - 16];
            }
        }
        rhs = (s16)raw;
    }

    switch (op) {
    case 0:
    case 4:
        res = lhs + rhs;
        break;
    case 1:
        res = lhs - rhs;
        break;
    case 2:
        res = lhs * rhs;
        break;
    case 3:
        if (rhs != 0) {
            res = lhs / rhs;
        } else {
            res = 0;
        }
        break;
    }

    b2 = (arg1[0] >> 16) & 0xFF;
    if ((arg1[0] >> 8) & 0xFF) {
        s32 c = res < -0x8000 ? -0x8000 : (res > 0x7FFF ? 0x7FFF : res);
        fn_80261014(arg0, b2, (s16)c);
    } else {
        idx = b2 & 0x1F;
        if (idx < 16) {
            s32 c = res < -0x8000 ? -0x8000 : (res > 0x7FFF ? 0x7FFF : res);
            arg0->regs[idx] = (s16)c;
        } else {
            s32 c = res < -0x8000 ? -0x8000 : (res > 0x7FFF ? 0x7FFF : res);
            lbl_8034CB74[idx - 16] = (s16)c;
        }
    }
}

void fn_80253A80(void *arg0, u32 *arg1, u8 arg2)
{
    extern u32 lbl_8034CB74[];
    u16 fn_80260F18(s32, s32);

    u8 *voice;
    u32 word0;
    u32 word1;
    u32 index;
    u32 left;
    u32 right;
    u32 condition;

    voice = (u8 *)arg0;
    word0 = arg1[0];
    word1 = arg1[1];

    if (((word0 >> 8) & 0xFF) != 0) {
        left = fn_80260F18((s32)arg0, (word0 >> 16) & 0xFF);
    } else {
        index = (word0 >> 16) & 0x1F;

        if (index < 0x10) {
            left = *(u32 *)(voice + 0xAC + index * 4);
        } else {
            left = *(u32 *)((u8 *)lbl_8034CB74
                + index * 4 - 0x40);
        }
    }

    if ((word0 >> 24) != 0) {
        right = fn_80260F18((s32)arg0, word1 & 0xFF);
    } else {
        index = word1 & 0x1F;

        if (index < 0x10) {
            right = *(u32 *)(voice + 0xAC + index * 4);
        } else {
            right = *(u32 *)((u8 *)lbl_8034CB74
                + index * 4 - 0x40);
        }
    }

    switch (arg2) {
    case 0:
        condition = left == right;
        break;

    case 1:
        condition = (s32)right > (s32)left;
        break;

    default:
        condition = 0;
        break;
    }

    if (((word1 >> 8) & 0xFF) != 0) {
        condition = !condition;
    }

    if (condition != 0) {
        *(u32 *)(voice + 0x38) =
            *(u32 *)(voice + 0x34)
            + ((word1 & 0xFFFF) << 3);
    }
}

extern void (*lbl_803689AC)(u32,u32);
#pragma opt_strength_reduction off
void fn_80253BCC(SynthVmState *arg0, void *arg1) {
    s32 fn_80255FB0();
    extern s32 lbl_8034CB74[];
    extern void (*lbl_803689AC)(u32, u32);
    void fn_8025539C(void *);
    extern u8 lbl_8034C110[];
    extern s32 lbl_803689A8;
    u32 id;
    u32 value;
    u8 i;
    u8 *state;
    u32 bits;
    u32 raw;
    u8 index;
    s32 result;
    u32 *p;
    u32 *dummy;

    bits = *(u32 *)((u8 *)arg1 + 4);
    index = (bits >> 8) & 31;
    if (index < 16) {
        value = arg0->regs[index];
    } else {
        value = lbl_8034CB74[index - 16];
    }
    raw = *(u32 *)arg1;
    if ((u8)(raw >> 8) == 0) {
        id = raw >> 16;
        if (id != 0xFFFF) {
            for (i = 0; i < lbl_8034C110[0x210]; i++) {
                state = (u8 *)lbl_803689A8 + i * 0x458;
                if (*(u32 *)(state + 0x34) != 0 && id == *(u16 *)(state + 0x104)) {
                    result = fn_80255FB0(*(u32 *)(*(u8 **)(state + 0xF8) + 8));
                    if ((u32)result != 0xFFFFFFFF) {
                        state = (u8 *)lbl_803689A8 + (u8)result * 0x458;
                        if (state[0x440] < 4) {
                            state[0x440]++;
                            ((SynthMessageQueue *)state)->slots[state[0x442]] = value;
                            state[0x442] = (state[0x442] + 1) & 3;
                            if (state[0x68] != 0 && *(u32 *)(state + 0x58) != 0) {
                                *(u32 *)(state + 0x38) = *(u32 *)(state + 0x64);
                                *(u32 *)(state + 0x34) = *(u32 *)(state + 0x58);
                                *(u32 *)(state + 0x58) = 0;
                                fn_8025539C(state);
                            }
                        }
                    }
                }
            }
        } else if (lbl_803689AC) {
            lbl_803689AC(*(u32 *)(*(u8 **)((u8 *)arg0 + 0xF8) + 8), value);
        }
    } else {
        index = bits & 31;
        if (index < 16) {
            result = arg0->regs[index];
        } else {
            result = lbl_8034CB74[index - 16];
        }
        result = fn_80255FB0(result);
        if ((u32)result != 0xFFFFFFFF) {
            state = (u8 *)lbl_803689A8 + (u8)result * 0x458;
            if (state[0x440] < 4) {
                state[0x440]++;
                p = (u32 *)state + state[0x442];
                dummy = *&p;
                dummy[0x111] = value;
                state[0x442] = (state[0x442] + 1) & 3;
                if (state[0x68] != 0 && *(u32 *)(state + 0x58) != 0) {
                    *(u32 *)(state + 0x38) = *(u32 *)(state + 0x64);
                    *(u32 *)(state + 0x34) = *(u32 *)(state + 0x58);
                    *(u32 *)(state + 0x58) = 0;
                    fn_8025539C(state);
                }
            }
        }
    }
}
#pragma opt_strength_reduction on
void fn_80253E10(void *arg0, u32 *arg1) {
    u32 temp_r4;
    s32 temp_r4_2;

    temp_r4 = *arg1;
    if ((u8)(temp_r4 >> 0x10U) == 0) {
        *(u32 *)((char *)arg0 + 0xAC) = *(u32 *)((char *)arg0 + 0xF8);
    } else {
        *(u32 *)((char *)arg0 + 0xAC) = *(u32 *)((char *)arg0 + 0x108);
    }
}

void fn_80253E90(void) {
    _savegpr_26();
    // Function body not fully understood by decompiler yet.
    // Placeholder implementation to match the known parts
    // TODO: Implement the remaining logic correctly
    _restgpr_26();
}

void fn_80254F00(u32 arg0)
{
    void fn_8025539C(void *);
    void fn_80253F6C(void *);
    s32 fn_802616F4(s32);

    u8 *current;
    u8 *next;
    u8 *voice;
    u8 *nextVoice;
    u32 timeHigh;
    u32 timeLow;
    u32 scheduledHigh;
    u32 scheduledLow;

    current = (u8 *)lbl_80368A30;

    while (current != 0) {
        scheduledHigh = *(u32 *)(current + 0x98);
        scheduledLow = *(u32 *)(current + 0x9C);

        timeHigh = (u32)lbl_80368A28;
        timeLow = (u32)lbl_80368A2C;

        if (scheduledHigh > timeHigh ||
            (scheduledHigh == timeHigh &&
             scheduledLow > timeLow)) {
            break;
        }

        next = *(u8 **)(current + 0x44);

        fn_8025539C(current);

        *(u32 *)(current + 0xA4) = (u32)lbl_80368A2C;
        *(u32 *)(current + 0xA0) = (u32)lbl_80368A28;

        current = next;
    }

    voice = (u8 *)lbl_80368A34;

    while (voice != 0) {
        nextVoice = *(u8 **)(voice + 0x3C);

        if (*(u8 *)(voice + 0x68) != 0 &&
            *(u32 *)(voice + 0x54) != 0) {

            if ((*(u32 *)(voice + 0x118) & 0x20) == 0) {

                if (fn_802616F4(
                        *(u8 *)(voice + 0xF4)) == 0) {

                    if (*(u8 *)(voice + 0x68) != 0 &&
                        *(u32 *)(voice + 0x54) != 0) {

                        *(u32 *)(voice + 0x38) =
                            *(u32 *)(voice + 0x60);

                        *(u32 *)(voice + 0x34) =
                            *(u32 *)(voice + 0x54);

                        *(u32 *)(voice + 0x54) = 0;

                        fn_8025539C(voice);
                        fn_80253F6C(voice);
                    }
                }
            }
        }

        voice = nextVoice;
    }

    timeLow = (u32)lbl_80368A2C;
    timeHigh = (u32)lbl_80368A28;

    lbl_80368A2C = (s32)(timeLow + arg0);
    lbl_80368A28 =
        (s32)(timeHigh + ((timeLow + arg0) < timeLow));
}

void fn_8025539C(void *arg0);

void fn_80255054(void *arg0) {
    void fn_8025539C(void *);
    u32 var_r0;

    if (*(s32 *)((u8 *)arg0 + 0x4C) == 1) {
        if (*(u8 *)((u8 *)arg0 + 0x68) != 0 && *(void **)((u8 *)arg0 + 0x54) != NULL) {
            *(s32 *)((u8 *)arg0 + 0x38) = *(s32 *)((u8 *)arg0 + 0x60);
            *(void **)((u8 *)arg0 + 0x34) = *(void **)((u8 *)arg0 + 0x54);
            *(void **)((u8 *)arg0 + 0x54) = NULL;
            fn_8025539C(arg0);
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0 && (*(u64 *)((u8 *)arg0 + 0x114) & 0x40000ULL)) {
            fn_8025539C(arg0);
        }
    }
}

s32 fn_80255100(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    return (((arg0 >> 0x10) * ((arg1 & 0xFFFF) + 1)) + ((arg0 & 0xFFFF) * (arg1 >> 0x10))) & 0xFFFF;
}

void fn_802551F0(void *arg0, u32 arg1) {
    if (arg1 != 0) {
        ((u32*)arg0)[0x45] = ((u32*)arg0)[0x45] | 0x100;
        return;
    }
    
    if (((u32*)arg0)[0xD] != 0) {
        u32 temp_r4 = ((u32*)arg0)[0x45];
        u32 temp_r6 = ((u32*)arg0)[0x46];
        
        if ((temp_r4 & 0x400) || (temp_r6 & 0)) {
            if (((u8*)arg0)[0x68] != 0 && ((u32*)arg0)[0x14] != 0) {
                ((u32*)arg0)[0xE] = ((u32*)arg0)[0x17];
                ((u32*)arg0)[0xD] = ((u32*)arg0)[0x14];
                ((u32*)arg0)[0x14] = 0;
                fn_8025539C(arg0);
                return;
            }
        } else {
            if (((u32*)arg0)[0x46] & 4) {
                fn_8025539C(arg0);
            }
        }
    }
    
    ((u32*)arg0)[0x46] = ((u32*)arg0)[0x46] & ~0;
    ((u32*)arg0)[0x45] = ((u32*)arg0)[0x45] & ~0x500;
}

void fn_802552F8(void *arg0)
{
    extern s32 lbl_80368A30;

    u8 *voice;
    u8 *current;
    u8 *previous;
    u8 *oldPrevious;
    u32 currentHigh;
    u32 currentLow;
    u32 voiceHigh;
    u32 voiceLow;

    voice = (u8 *)arg0;
    current = (u8 *)lbl_80368A30;
    previous = 0;

    while (current != 0) {
        currentLow = *(u32 *)(current + 0x9C);
        voiceLow = *(u32 *)(voice + 0x9C);
        currentHigh = *(u32 *)(current + 0x98);
        voiceHigh = *(u32 *)(voice + 0x98);

        if (currentHigh > voiceHigh ||
            (currentHigh == voiceHigh && currentLow >= voiceLow)) {
            break;
        }

        previous = current;
        current = *(u8 **)(current + 0x44);
    }

    if (current == 0) {
        if (previous == 0) {
            lbl_80368A30 = (s32)voice;
            *(u8 **)(voice + 0x44) = 0;
            *(u8 **)(voice + 0x48) = 0;
        } else {
            *(u8 **)(previous + 0x44) = voice;
            *(u8 **)(voice + 0x48) = previous;
            *(u8 **)(voice + 0x44) = 0;
        }
    } else {
        *(u8 **)(voice + 0x44) = current;

        oldPrevious = *(u8 **)(current + 0x48);
        *(u8 **)(voice + 0x48) = oldPrevious;

        if (oldPrevious != 0) {
            *(u8 **)(oldPrevious + 0x44) = voice;
        } else {
            lbl_80368A30 = (s32)voice;
        }

        *(u8 **)(current + 0x48) = voice;
    }
}

void fn_8025539C(void *arg0) {
    void fn_80249DD0(void *);
    void *prev;
    void *next;
    s32 head;
    u64 pair;

    if (*(s32 *)((u8 *)arg0 + 0x4C) != 0) {
        pair = *(u64 *)((u8 *)arg0 + 0x98);
        if (pair != 0) {
            if (pair != 0xFFFFFFFFFFFFFFFFULL) {
                prev = *(void **)((u8 *)arg0 + 0x48);
                if (prev == NULL) {
                    lbl_80368A30 = (s32)*(void **)((u8 *)arg0 + 0x44);
                } else {
                    *(void **)((u8 *)prev + 0x44) = *(void **)((u8 *)arg0 + 0x44);
                }
                next = *(void **)((u8 *)arg0 + 0x44);
                if (next != NULL) {
                    *(void **)((u8 *)next + 0x48) = *(void **)((u8 *)arg0 + 0x48);
                }
            }
            fn_80249DD0(arg0);
            *(s32 *)((u8 *)arg0 + 0x9C) = 0;
            *(s32 *)((u8 *)arg0 + 0x98) = 0;
            *(u64 *)((u8 *)arg0 + 0xA0) = *(u64 *)&lbl_80368A28;
            *(u64 *)((u8 *)arg0 + 0x114) &= ~0x40004ULL;
        }
        head = lbl_80368A34;
        *(s32 *)((u8 *)arg0 + 0x3C) = head;
        if ((u32)head != 0) {
            *(void **)((u8 *)lbl_80368A34 + 0x40) = arg0;
        }
        *(s32 *)((u8 *)arg0 + 0x40) = 0;
        lbl_80368A34 = (s32)arg0;
        *(s32 *)((u8 *)arg0 + 0x4C) = 0;
    }
}

s32 fn_802555A0(
    u16 arg0, u8 arg1, u32 arg2, u32 arg3,
    u32 arg4, u8 arg5, u8 arg6, u8 arg7,
    u8 arg8, u8 arg9, u16 arg10, u16 arg11,
    u8 arg12, u8 arg13, u8 arg14, u32 arg15)
{
    void fn_8025FF6C(u8, u8);
    void fn_802567B0(void *);
    void fn_80255B20(void *);
    s32 fn_80256628(u8, u32, u32, u32);
    void fn_80256054(void *, u8);
    void fn_8025FB74(u8, u8, u8);
    void *fn_802506A8(u16);
    u32 fn_80255E9C(SynthVoice *, u32);
    s32 fn_802616F4(s32);
    void fn_802618E4(int);
    void fn_80249DD0(s32);

    u8 *voice;
    u8 *sample;
    u8 *prev;
    u8 *next;
    u32 flags;
    u32 high;
    u32 low;
    s32 index;
    s32 result;
    u32 linked;

    sample = (u8 *)fn_802506A8(arg0);
    if (sample == 0) {
        return -1;
    }

    flags = arg4 & 0x80;
    if (flags == 0) {
        u16 mapped = fn_8024B594(arg8, arg7);
        if (mapped != 0xFFFF) {
            arg1 = (u8)mapped;
        }
    }

    index = fn_80256628(arg1, arg2, arg3, flags != 0);
    if (index == -1) {
        return -1;
    }

    voice = (u8 *)lbl_803689A8 + index * 0x458;
    fn_80255B20(voice);

    if (*(s32 *)(voice + 0x4C) == 0) {
        prev = *(u8 **)(voice + 0x40);
        next = *(u8 **)(voice + 0x3C);
        if (prev == 0) {
            lbl_80368A34 = (s32)next;
        } else {
            *(u8 **)(prev + 0x3C) = next;
        }
        if (next != 0) {
            *(u8 **)(next + 0x40) = prev;
        }
    }

    if (*(s32 *)(voice + 0x4C) != 2) {
        high = *(u32 *)(voice + 0x98);
        low = *(u32 *)(voice + 0x9C);

        if ((high | low) != 0 &&
            (high != 0xFFFFFFFF || low != 0xFFFFFFFF)) {
            prev = *(u8 **)(voice + 0x48);
            next = *(u8 **)(voice + 0x44);
            if (prev == 0) {
                lbl_80368A30 = (s32)next;
            } else {
                *(u8 **)(prev + 0x44) = next;
            }
            if (next != 0) {
                *(u8 **)(next + 0x48) = prev;
            }
        }

        *(u32 *)(voice + 0x9C) = 0;
        *(u32 *)(voice + 0x98) = 0;
        *(u32 *)(voice + 0xA4) = (u32)lbl_80368A2C;
        *(u32 *)(voice + 0xA0) = (u32)lbl_80368A28;
        *(u32 *)(voice + 0x118) &= 0xFFFBFFFB;
        *(u32 *)(voice + 0x4C) = 2;
    }

    *(u32 *)(voice + 0x118) =
        (*(u32 *)(voice + 0x118) & 0x10) | 2;
    *(u32 *)(voice + 0x114) = 0;

    if (fn_802616F4(index) != 0) {
        *(u32 *)(voice + 0x118) |= 1;
    }

    *(u32 *)(voice + 0x9C) = 0;
    *(u32 *)(voice + 0x98) = 0;

    if (flags != 0) {
        *(u8 *)(voice + 0x11D) = 1;
        arg4 &= 0x7F;
        fn_8025FB74((u8)index, 0xFF, 1);
        fn_8025FF6C((u8)index, 0xFF);
        *(u8 *)(voice + 0x216) = (u8)index;
        *(u8 *)(voice + 0x217) = 0xFF;
        *(u8 *)(voice + 0x218) = 0;
    } else {
        *(u8 *)(voice + 0x11D) = 0;
        *(u8 *)(voice + 0x216) = arg7;
        *(u8 *)(voice + 0x217) = arg8;
        *(u8 *)(voice + 0x218) = arg9;
    }

    *(u16 *)(voice + 0x104) = arg0;
    *(u32 *)(voice + 0x100) = arg3;
    *(u32 *)(voice + 0x110) = 0x75300000;
    *(u16 *)(voice + 0x10E) = 0x400;
    *(u32 *)(voice + 0x34) = (u32)sample;
    *(u32 *)(voice + 0x38) = (u32)(sample + ((u32)arg10 << 3));
    *(u8 *)(voice + 0x131) = arg4;
    *(u16 *)(voice + 0x12E) = arg4;
    *(u8 *)(voice + 0x130) = 0;
    *(u8 *)(voice + 0x214) = arg5;
    *(u8 *)(voice + 0x215) = arg6;
    *(u8 *)(voice + 0x219) = (u8)arg11;
    *(u8 *)(voice + 0x8C) = 0;
    *(u8 *)(voice + 0x8D) = 0;
    *(u32 *)(voice + 0xEC) = 0xFFFFFFFF;
    *(u32 *)(voice + 0xF0) = 0xFFFFFFFF;
    *(u32 *)(voice + 0x108) = 0xFFFFFFFF;
    *(u8 *)(voice + 0x21A) = arg13;
    *(u8 *)(voice + 0x21B) = arg14;
    *(u8 *)(voice + 0x21C) = arg15 == 0;
    *(u8 *)(voice + 0x442) = 0;
    *(u8 *)(voice + 0x441) = 0;
    *(u8 *)(voice + 0x440) = 0;
    *(u32 *)(voice + 0xF4) =
        (u32)(u8)index | ((u32)arg4 << 8) | ((u32)arg0 << 16);

    fn_80256054(voice, arg1);
    result = (s32)fn_80255E9C((SynthVoice *)voice, arg12);

    if (result != -1) {
        if (*(s32 *)(voice + 0x4C) != 0) {
            high = *(u32 *)(voice + 0x98);
            low = *(u32 *)(voice + 0x9C);

            if ((high | low) != 0 &&
                (high != 0xFFFFFFFF || low != 0xFFFFFFFF)) {
                prev = *(u8 **)(voice + 0x48);
                next = *(u8 **)(voice + 0x44);
                if (prev == 0) {
                    lbl_80368A30 = (s32)next;
                } else {
                    *(u8 **)(prev + 0x44) = next;
                }
                if (next != 0) {
                    *(u8 **)(next + 0x48) = prev;
                }
            }

            fn_80249DD0((s32)voice);
            *(u32 *)(voice + 0x9C) = 0;
            *(u32 *)(voice + 0x98) = 0;
            *(u32 *)(voice + 0xA4) = (u32)lbl_80368A2C;
            *(u32 *)(voice + 0xA0) = (u32)lbl_80368A28;
            *(u32 *)(voice + 0x118) &= 0xFFFBFFFB;
            *(u32 *)(voice + 0x114) = 0;

            next = (u8 *)lbl_80368A34;
            *(u8 **)(voice + 0x3C) = next;
            if (next != 0) {
                *(u8 **)(next + 0x40) = voice;
            }
            *(u32 *)(voice + 0x40) = 0;
            lbl_80368A34 = (s32)voice;
            *(u32 *)(voice + 0x4C) = 0;
        }
        return result;
    }

    if (fn_802616F4(index) != 0) {
        fn_802618E4(index);
    }
    fn_802567B0(voice);
    return -1;
}

void fn_802559D8(void) {
    u8* ptr;
    u32 count;
    s32 i;
    
    lbl_80368A34 = 0;
    lbl_80368A30 = 0; 
    lbl_80368A2C = 0;
    lbl_80368A28 = 0;
    count = 0U;
    
    ptr = &lbl_8034C110[0x34];
    i = 0;
    do {
        *(ptr + i) = 0;
        i += 0x458;
        count++;
        if (count >= lbl_8034C110[0x210]) break;
    } while (1);
    
    ptr = &lbl_8034C110[0x4C];
    i = 0;
    do {
        *(ptr + i) = 2;
        i += 0x458;
        count++;
        if (count >= lbl_8034C110[0x210]) break;
    } while (1);
    
    ptr = &lbl_8034C110[0xAA];
    i = 0;
    do {
        *(ptr + i) = 0;
        i += 0x458;
        count++;
        if (count >= lbl_8034C110[0x210]) break;
    } while (1);
}

void* fn_80255A40(void)
{
    s32* p = (s32*)lbl_8034C110;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    return (void*)p;
}

void fn_80255B20(void *arg0) {
    void fn_80257668(void *);
    extern s32 lbl_803689A8;
    extern void *lbl_80368A40;
    extern void *lbl_80368A44;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4_3;
    s32 val;
    void **temp_r4;
    void **temp_r4_10;
    void **temp_r4_4;
    void **temp_r4_6;
    void **temp_r4_8;
    void *temp_r3_10;
    void *temp_r3_11;
    void *temp_r3_12;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;
    void *temp_r4_11;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r4_7;
    void *temp_r4_9;
    void *vp;

    if ((u32)(*(s32 *)((u8 *)arg0 + 0xF4) + 0x10000) != 0xFFFFU) {
        fn_80257668(arg0);
        temp_r3 = *(s32 *)((u8 *)arg0 + 0xF0);
        if ((u32)(temp_r3 + 0x10000) != 0xFFFFU) {
            vp = (void *)(lbl_803689A8 + ((u8)temp_r3 * 0x458));
            val = *(s32 *)((u8 *)arg0 + 0xEC);
            *(s32 *)((u8 *)vp + 0xEC) = val;
            temp_r3_2 = *(s32 *)((u8 *)arg0 + 0xEC);
            if ((u32)(temp_r3_2 + 0x10000) != 0xFFFFU) {
                vp = (void *)(lbl_803689A8 + ((u8)temp_r3_2 * 0x458));
                val = *(s32 *)((u8 *)arg0 + 0xF0);
                *(s32 *)((u8 *)vp + 0xF0) = val;
            }
            temp_r3_3 = *(void **)((u8 *)arg0 + 0xF8);
            temp_r4 = *(void ***)((u8 *)temp_r3_3 + 4);
            if (temp_r4 != NULL) {
                *temp_r4 = *(void **)temp_r3_3;
            } else {
                lbl_80368A44 = *(void **)temp_r3_3;
            }
            temp_r3_4 = *(void **)((u8 *)arg0 + 0xF8);
            temp_r4_2 = *(void **)temp_r3_4;
            if (temp_r4_2 != NULL) {
                *(void **)((u8 *)temp_r4_2 + 4) = *(void **)((u8 *)temp_r3_4 + 4);
            }
            *(void **)(*(void **)((u8 *)arg0 + 0xF8)) = lbl_80368A40;
            if (lbl_80368A40 != NULL) {
                *(void **)((u8 *)lbl_80368A40 + 4) = *(void **)((u8 *)arg0 + 0xF8);
            }
            *(void **)((u8 *)*(void **)((u8 *)arg0 + 0xF8) + 4) = NULL;
            lbl_80368A40 = *(void **)((u8 *)arg0 + 0xF8);
            *(void **)((u8 *)arg0 + 0xF8) = NULL;
            return;
        }
        temp_r4_3 = *(s32 *)((u8 *)arg0 + 0xEC);
        if ((u32)(temp_r4_3 + 0x10000) != 0xFFFFU) {
            *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0xF8) + 0xC) = temp_r4_3;
            temp_r3_5 = *(void **)((u8 *)arg0 + 0xFC);
            if (*(void **)((u8 *)arg0 + 0xF8) != temp_r3_5) {
                *(s32 *)((u8 *)temp_r3_5 + 0xC) = *(s32 *)((u8 *)arg0 + 0xEC);
            }
            vp = (void *)(lbl_803689A8 + ((u8)*(s32 *)((u8 *)arg0 + 0xEC) * 0x458));
            *(s32 *)((u8 *)vp + 0xF0) = -1;
            vp = (void *)(lbl_803689A8 + ((u8)*(s32 *)((u8 *)arg0 + 0xEC) * 0x458));
            val = (s32)*(void **)((u8 *)arg0 + 0xFC);
            *(s32 *)((u8 *)vp + 0xFC) = val;
            temp_r3_6 = *(void **)((u8 *)arg0 + 0xF8);
            if (temp_r3_6 != *(void **)((u8 *)arg0 + 0xFC)) {
                temp_r4_4 = *(void ***)((u8 *)temp_r3_6 + 4);
                if (temp_r4_4 != NULL) {
                    *temp_r4_4 = *(void **)temp_r3_6;
                } else {
                    lbl_80368A44 = *(void **)temp_r3_6;
                }
                temp_r3_7 = *(void **)((u8 *)arg0 + 0xF8);
                temp_r4_5 = *(void **)temp_r3_7;
                if (temp_r4_5 != NULL) {
                    *(void **)((u8 *)temp_r4_5 + 4) = *(void **)((u8 *)temp_r3_7 + 4);
                }
                *(void **)(*(void **)((u8 *)arg0 + 0xF8)) = lbl_80368A40;
                if (lbl_80368A40 != NULL) {
                    *(void **)((u8 *)lbl_80368A40 + 4) = *(void **)((u8 *)arg0 + 0xF8);
                }
                *(void **)((u8 *)*(void **)((u8 *)arg0 + 0xF8) + 4) = NULL;
                lbl_80368A40 = *(void **)((u8 *)arg0 + 0xF8);
                *(void **)((u8 *)arg0 + 0xF8) = NULL;
            }
            *(void **)((u8 *)arg0 + 0xF8) = NULL;
            *(void **)((u8 *)arg0 + 0xFC) = NULL;
            return;
        }
        temp_r3_8 = *(void **)((u8 *)arg0 + 0xF8);
        if (temp_r3_8 != *(void **)((u8 *)arg0 + 0xFC)) {
            temp_r4_6 = *(void ***)((u8 *)temp_r3_8 + 4);
            if (temp_r4_6 != NULL) {
                *temp_r4_6 = *(void **)temp_r3_8;
            } else {
                lbl_80368A44 = *(void **)temp_r3_8;
            }
            temp_r3_9 = *(void **)((u8 *)arg0 + 0xF8);
            temp_r4_7 = *(void **)temp_r3_9;
            if (temp_r4_7 != NULL) {
                *(void **)((u8 *)temp_r4_7 + 4) = *(void **)((u8 *)temp_r3_9 + 4);
            }
            *(void **)(*(void **)((u8 *)arg0 + 0xF8)) = lbl_80368A40;
            if (lbl_80368A40 != NULL) {
                *(void **)((u8 *)lbl_80368A40 + 4) = *(void **)((u8 *)arg0 + 0xF8);
            }
            *(void **)((u8 *)*(void **)((u8 *)arg0 + 0xF8) + 4) = NULL;
            lbl_80368A40 = *(void **)((u8 *)arg0 + 0xF8);
            *(void **)((u8 *)arg0 + 0xF8) = NULL;
            temp_r3_10 = *(void **)((u8 *)arg0 + 0xFC);
            temp_r4_8 = *(void ***)((u8 *)temp_r3_10 + 4);
            if (temp_r4_8 != NULL) {
                *temp_r4_8 = *(void **)temp_r3_10;
            } else {
                lbl_80368A44 = *(void **)temp_r3_10;
            }
            temp_r3_11 = *(void **)((u8 *)arg0 + 0xFC);
            temp_r4_9 = *(void **)temp_r3_11;
            if (temp_r4_9 != NULL) {
                *(void **)((u8 *)temp_r4_9 + 4) = *(void **)((u8 *)temp_r3_11 + 4);
            }
            *(void **)(*(void **)((u8 *)arg0 + 0xFC)) = lbl_80368A40;
            if (lbl_80368A40 != NULL) {
                *(void **)((u8 *)lbl_80368A40 + 4) = *(void **)((u8 *)arg0 + 0xFC);
            }
            *(void **)((u8 *)*(void **)((u8 *)arg0 + 0xFC) + 4) = NULL;
            lbl_80368A40 = *(void **)((u8 *)arg0 + 0xFC);
            *(void **)((u8 *)arg0 + 0xFC) = NULL;
            return;
        }
        temp_r4_10 = *(void ***)((u8 *)temp_r3_8 + 4);
        if (temp_r4_10 != NULL) {
            *temp_r4_10 = *(void **)temp_r3_8;
        } else {
            lbl_80368A44 = *(void **)temp_r3_8;
        }
        temp_r3_12 = *(void **)((u8 *)arg0 + 0xF8);
        temp_r4_11 = *(void **)temp_r3_12;
        if (temp_r4_11 != NULL) {
            *(void **)((u8 *)temp_r4_11 + 4) = *(void **)((u8 *)temp_r3_12 + 4);
        }
        *(void **)(*(void **)((u8 *)arg0 + 0xF8)) = lbl_80368A40;
        if (lbl_80368A40 != NULL) {
            *(void **)((u8 *)lbl_80368A40 + 4) = *(void **)((u8 *)arg0 + 0xF8);
        }
        *(void **)((u8 *)*(void **)((u8 *)arg0 + 0xF8) + 4) = NULL;
        lbl_80368A40 = *(void **)((u8 *)arg0 + 0xF8);
        *(void **)((u8 *)arg0 + 0xF8) = NULL;
        *(void **)((u8 *)arg0 + 0xFC) = NULL;
    }
}

s32 fn_80255E88(void *arg0) {
    M2C_FIELD(arg0, void **, 0xFC) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 8);
}

u32 fn_80255E9C(SynthVoice *sv, u32 isMaster) {
    extern VidList *lbl_80368A44;
    extern VidList *lbl_80368A40;
    u32 vid;
    VidList *nvl;
    VidList *vl;
    VidList *lvl;

    vid = GetNewVid();
restart:
    lvl = NULL;
    for (vl = lbl_80368A44; vl != NULL; vl = vl->next) {
        if (vl->vid > vid) {
            break;
        }
        if (vl->vid == vid) {
            vid = GetNewVid();
            if (vid < vl->vid) {
                goto restart;
            }
        }
        lvl = vl;
    }
    nvl = lbl_80368A40;
    if (nvl == NULL) {
        return -1;
    }
    lbl_80368A40 = nvl->next;
    if (lbl_80368A40 != NULL) {
        lbl_80368A40->prev = NULL;
    }
    if (lvl == NULL) {
        lbl_80368A44 = nvl;
    } else {
        lvl->next = nvl;
    }
    nvl->prev = lvl;
    nvl->next = vl;
    if (vl != NULL) {
        vl->prev = nvl;
    }
    nvl->vid = vid;
    nvl->root = sv->unkF4;
    sv->unkFC = isMaster ? nvl : NULL;
    sv->unkF8 = nvl;
    return isMaster ? vid : sv->unkF4;
}

s32 fn_80255FB0(u32 arg0) {
    extern VidList *lbl_80368A44;
    VidList *vl;

    if ((u32)(arg0 + 0x10000) != 0xFFFFU) {
        vl = lbl_80368A44;
        goto check;
    loop:
        if (vl->vid != arg0)
            goto not_eq;
        goto done;
    not_eq:
        if (vl->vid > arg0)
            goto set_null;
        vl = vl->next;
    check:
        if (vl != NULL)
            goto loop;
        goto done;
    set_null:
        vl = NULL;
    done:
        if (vl != NULL) {
            return (s32)vl->root;
        }
    }
    return -1;
}

int fn_80256000(u32 arg0)
{
    extern void *lbl_80368A44;
    void *object;
    u32 field;
    u32 value;

    object = lbl_80368A44;
    while (object != 0) {
        field = *(u32 *)((u8 *)object + 0xC);
        goto compare;
    compare:
        if (field == arg0) {
            return *(int *)((u8 *)object + 8);
        }
        value = *(u32 *)((u8 *)lbl_803689A8 + ((u8)field * 0x458) + 0xEC);
        if ((u32)(value + 0x10000) == 0xFFFFU) {
            object = *(void **)object;
        } else {
            break;
        }
    }
    return -1;
}

#pragma global_optimizer off
void fn_80256054(void *arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5) {
 extern u8 lbl_80359710[]; extern u16 lbl_80368A4C;
 void fn_8026171C(s32,s32);
 u16 previous, current;
 u8 *base, *node, *old, *n2, *heads, *back, *tbl;
 u32 id; u32 off; u8 next; u8 prev; u16 p; u16 n; u8 priority;
 previous=arg5;
 base=lbl_80359710;
 id=(u8)*(u32*)((u8*)arg0+0xF4);
 off=(u8)id*4;
 node=base+0x800; node+=off;
 if(*(u16*)(node+2)==1) {
  if(((u8*)arg0)[0x10C]==arg1) return;
  old=base+0x800; old+=off;
  if(*(u16*)(old+2)==1) {
   prev=old[0];
   if(prev!=0xFF) {
    tbl=base+0x800; tbl+=(u8)prev*4; tbl[1]=old[1];
   } else { tbl=base+0x900; tbl[((u8*)arg0)[0x10C]]=old[1]; }
   next=old[1];
   if(next!=0xFF) {
    tbl=base+0x800; tbl[(u8)next*4]=old[0];
   } else if(old[0]==0xFF) {
    n2=base+0xA00; n2+=((u8*)arg0)[0x10C]*4;
    p=*(u16*)(n2+2);
    if(p!=0xFFFF) { tbl=base+0xA00; *(u16*)(tbl+(u16)p*4)=*(u16*)n2; }
    else lbl_80368A4C=*(u16*)n2;
    n=*(u16*)n2;
    if(n!=0xFFFF) {
     tbl=base+0xA00; tbl+=(u16)n*4;
     *(u16*)(tbl+2)=*(u16*)(n2+2);
    }
   }
   *(u16*)(old+2)=0;
  }
 }
 *(u16*)(node+2)=1;
 priority=arg1;
 heads=base+0x900;
 next=heads[priority];
 node[0]=0xFF; node[1]=next;
 if(next!=0xFF) { tbl=base+0x800; tbl[next*4]=(u8)id; }
 else if(lbl_80368A4C!=0xFFFF) {
  if((s32)priority>=(s32)lbl_80368A4C) {
   current=lbl_80368A4C;
   tbl=base+0xA00;
   while(current!=0xFFFF) {
    if((s32)current>(s32)priority) break;
    previous=current;
    current=*(u16*)(tbl+(u16)current*4);
   }
   tbl=base+0xA00; back=tbl+2;
   *(u16*)(tbl+(u16)previous*4)=arg1;
   *(u16*)(back+priority*4)=previous;
   *(u16*)(tbl+priority*4)=current;
   if(current!=0xFFFF) *(u16*)(back+(u16)current*4)=arg1;
  } else {
   tbl=base+0xA00;
   *(u16*)(tbl+priority*4)=lbl_80368A4C;
   *(u16*)(back+priority*4)=0xFFFF;
   *(u16*)(back+(u16)lbl_80368A4C*4)=priority;
   lbl_80368A4C=priority;
  }
 } else {
  tbl=base+0xA00;
  lbl_80368A4C=priority;
  *(u16*)(tbl+priority*4)=0xFFFF;
  *(u16*)(tbl+priority*4+2)=0xFFFF;
 }
 heads[priority]=(u8)id;
 ((u8*)arg0)[0x10C]=arg1;
 off=*(u32*)((u8*)arg0+0x110)>>15;
 off=(off & ~0xFF000000) | (priority<<24);
 fn_8026171C((u8)*(u32*)((u8*)arg0+0xF4),off);
}

s32 fn_802562A0(u8 arg0, u8 arg1, s32 arg2, u8 arg3)
{
    extern u8 lbl_80359710[];
    extern u16 lbl_80368A4C;
    extern u8 lbl_80368A4E;
    extern u8 lbl_80368A4F;
    extern u8 lbl_80368A51;

    u8 *base;
    u8 *voices;
    u8 *voice;
    u8 *node;
    u8 *group;
    u8 *nextTable;
    u8 *priorityTable;
    u32 limit;
    u32 count;
    u32 index;
    u32 next;
    u32 groupIndex;
    u32 priority;
    s32 candidate;
    s32 restricted;
    s32 offset;

    base = lbl_80359710;

    if (lbl_803689B0 != 0) {
        return -1;
    }

    restricted = 0;

    if (arg3 != 0) {
        limit = lbl_8034C110[0x212];

        if (lbl_80368A4F >= limit &&
            lbl_8034C110[0x210] > limit) {
            restricted = 1;
        }
    } else {
        limit = lbl_8034C110[0x211];

        if (lbl_80368A4E >= limit &&
            lbl_8034C110[0x210] > limit) {
            restricted = 1;
        }
    }

    voices = (u8 *)lbl_803689A8;

    if (arg1 < limit) {
        group = base + 0x900;
        nextTable = base + 0x800;
        priorityTable = base + 0xA00;

        groupIndex = lbl_80368A4C;
        count = 0;
        candidate = -1;

        while (groupIndex != 0xFFFF) {
            index = group[groupIndex];

            while (index != 0xFF) {
                voice = voices + index * 0x458;

                if (*(u32 *)(voice + 0x100) == (u32)arg2) {
                    count++;

                    if (*(u8 *)(voice + 0x11C) == 0) {
                        if (restricted == 0 ||
                            (*(u8 *)(voice + 0x11D) == arg3 &&
                             (*(u32 *)(voice + 0x118) & 2) == 0)) {

                            if (candidate == -1) {
                                candidate = index;
                            } else {
                                u8 *selected;

                                selected = voices + candidate * 0x458;

                                if (*(u32 *)(voice + 0x110) <
                                    *(u32 *)(selected + 0x110)) {
                                    candidate = index;
                                }
                            }
                        }
                    }
                }

                node = nextTable + index * 4;
                next = node[1];

                if (next == 0xFF) {
                    break;
                }

                index = next;
            }

            next = *(u16 *)(priorityTable + groupIndex * 4);

            if (next == 0xFFFF || arg0 < next) {
                break;
            }

            groupIndex = next;
        }

        if (candidate != -1 && count >= arg1) {
            return candidate;
        }
    }

    if (lbl_80368A51 != 0xFF && restricted == 0) {
        return lbl_80368A51;
    }

    if (arg0 < lbl_80368A4C) {
        return -1;
    }

    group = base + 0x900;
    nextTable = base + 0x800;
    priorityTable = base + 0xA00;

    groupIndex = lbl_80368A4C;
    candidate = -1;

    while (groupIndex != 0xFFFF) {
        index = group[groupIndex];

        while (index != 0xFF) {
            voice = voices + index * 0x458;

            if (*(u8 *)(voice + 0x11C) == 0) {
                if (restricted == 0 ||
                    (*(u8 *)(voice + 0x11D) == arg3 &&
                     (*(u32 *)(voice + 0x118) & 2) == 0)) {

                    if (candidate == -1) {
                        candidate = index;
                    } else {
                        u8 *selected;

                        selected = voices + candidate * 0x458;

                        if (*(u32 *)(voice + 0x110) >=
                            *(u32 *)(selected + 0x110)) {
                            candidate = index;
                        }
                    }
                }
            }

            node = nextTable + index * 4;
            next = node[1];

            if (next == 0xFF) {
                break;
            }

            index = next;
        }

        next = *(u16 *)(priorityTable + groupIndex * 4);

        if (next == 0xFFFF || arg0 < next) {
            break;
        }

        groupIndex = next;
    }

    if (candidate == -1) {
        return -1;
    }

    offset = candidate * 0x458;
    priority = *(u8 *)(voices + offset + 0x10C);

    if (priority > arg0) {
        return -1;
    }

    return candidate;
}

#pragma global_optimizer on
s32 fn_80256738(u8 arg0, u8 arg1, s32 arg2, u8 arg3, s32 *out) {
    s32 fn_802562A0(u8, u8, s32, u8);
    s32 idx;
    u8 *p;
    u8 *table;

    idx = fn_802562A0(arg0, arg1, arg2, arg3);
    if (idx == -1) {
        return 0;
    }
    p = (u8 *)lbl_8035A510;
    if (*(u16 *)(p + idx * 4 + 2) == 1) {
        return 0;
    }
    table = (u8 *)lbl_803689A8;
    table += idx * 0x458;
    *out = *(s32 *)(table + 0x100);
    return 1;
}

void fn_802567B0(void *arg0) {
    extern u8 lbl_80359710[3584];
    extern u16 lbl_80368A4C;
    extern u8 lbl_80368A4E;
    extern u8 lbl_80368A4F;
    extern u8 lbl_80368A50;
    extern u8 lbl_80368A51;

    void *temp_r3;
    s32 temp_r3_2;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r6;
    void *temp_r6_2;

    fn_802554A4(2);
    
    // Load base address and offset
    temp_r3 = &lbl_80359710 + 0x800 + ((*(s32*)((char*)arg0 + 0xF4) << 2) & 0x3FC);
    
    if (*(u16*)((char*)temp_r3 + 2) == 1) {
        temp_r0 = *(u8*)((char*)temp_r3);
        if (temp_r0 != 0xFF) {
            *(u8*)((char*)&lbl_80359710 + 0x800 + ((temp_r0 << 2) & 0x3FC)) = *(u8*)((char*)temp_r3 + 1);
        } else {
            *(u8*)((char*)&lbl_80359710 + 0x900 + *(u8*)((char*)arg0 + 0x10C)) = *(u8*)((char*)temp_r3 + 1);
        }
        temp_r0_2 = *(u8*)((char*)temp_r3 + 1);
        if (temp_r0_2 != 0xFF) {
            *(u8*)((char*)&lbl_80359710 + 0x800 + ((temp_r0_2 << 2) & 0x3FC)) = *(u8*)((char*)temp_r3);
        } else if (*(u8*)((char*)temp_r3) == 0xFF) {
            temp_r6 = &lbl_80359710 + 0xA00 + (*(u8*)((char*)arg0 + 0x10C) << 2);
            
            temp_r0_3 = *(u16*)((char*)temp_r6 + 2);
            if (temp_r0_3 != 0xFFFF) {
                *(u16*)((char*)&lbl_80359710 + 0xA00 + ((temp_r0_3 << 2) & 0x3FFFC)) = *(u16*)((char*)temp_r6);
            } else {
                lbl_80368A4C = *(u16*)((char*)temp_r6);
            }
            
            temp_r0_4 = *(u16*)((char*)temp_r6);
            if (temp_r0_4 != 0xFFFF) {
                *(u16*)((char*)&lbl_80359710 + 0xA00 + ((temp_r0_4 << 2) & 0x3FFFC)) = *(u16*)((char*)temp_r6 + 2);
            }
        }
        *(u16*)((char*)temp_r3 + 2) = 0;
    }
    
    *(s32*)((char*)arg0 + 0x34) = 0;
    *(u8*)((char*)arg0 + 0x10C) = 0;
    
    temp_r3_2 = *(s32*)((char*)arg0 + 0xF4);
    temp_r6_2 = &lbl_80359710 + 0xE00 + ((temp_r3_2 << 2) & 0x3FC);
    
    if (*(u16*)((char*)temp_r6_2 + 2) == 0) {
        *(u16*)((char*)temp_r6_2 + 2) = 1;
        
        if (lbl_80368A51 != 0xFF) {
            *(u8*)((char*)temp_r6_2 + 1) = 0xFF;
            *(u8*)((char*)temp_r6_2) = lbl_80368A50;
            *(u8*)((char*)&lbl_80359710 + 0xE00 + (lbl_80368A50 << 2) + 1) = (u8) temp_r3_2;
        } else {
            lbl_80368A51 = (u8) temp_r3_2;
            *(u8*)((char*)temp_r6_2 + 1) = 0xFF;
            *(u8*)((char*)temp_r6_2) = 0xFF;
        }
        lbl_80368A50 = (u8) temp_r3_2;
        
        if (*(u8*)((char*)arg0 + 0x11D) != 0) {
            lbl_80368A4F--;
        } else {
            lbl_80368A4E--;
        }
    }
    
    *(s32*)((char*)arg0 + 0xF4) = -1;
}

void fn_80256974(void) {
extern u8 lbl_80359710[3584];
extern u16 lbl_80368A4C;
extern u8 lbl_80368A4E,lbl_80368A4F,lbl_80368A50,lbl_80368A51;
u32 i;
u32 n=lbl_8034C110[0x210];
for(i=0;i<n;i++){
lbl_80359710[0xE00+i*4]=i-1;
lbl_80359710[0xE01+i*4]=i+1;
*(u16*)(lbl_80359710+0xE02+i*4)=1;
}
lbl_80359710[0xE00]=255;
lbl_80368A51=0;
lbl_80359710[0xE00+lbl_8034C110[0x210]*4-3]=255;
lbl_80368A50=lbl_8034C110[0x210]-1;
for(i=0;i<n;i++) *(u16*)(lbl_80359710+0x802+i*4)=0;
for(i=0;i<256;i++) lbl_80359710[0x900+i]=255;
lbl_80368A4F=0;lbl_80368A4C=65535;lbl_80368A4E=0;
}

s32 fn_80256C14(u8 arg0)
{
    extern u16 lbl_8035A510[];
    extern s32 lbl_803689A8;
    extern u8 lbl_80368A50;
    extern u8 lbl_80368A51;
    extern u8 lbl_80368A4E;
    extern u8 lbl_80368A4F;

    s32 fn_802562A0(u8, u8, s32, u8);
    void fn_80255B20(void *);
    s32 fn_802616F4(s32);
    void fn_802618E4(int);
    void fn_802554A4(void *, s32);
    void fn_80256054(void *, u8);

    s32 index;
    s32 offset;
    u8 *voice;
    u8 *node;
    u8 *table;
    u8 previous;
    u8 next;

    index = fn_802562A0(arg0, 0xFF, 0xFFFF, 1);

    if (index == -1) {
        return -1;
    }

    table = (u8 *)lbl_8035A510;
    node = table + (index << 2);

    if (*(u16 *)(node + 2) == 1) {
        previous = node[0];

        if (previous != 0xFF) {
            table[(previous << 2) + 1] = node[1];
        } else {
            lbl_80368A51 = node[1];
        }

        next = node[1];

        if (next != 0xFF) {
            table[next << 2] = node[0];
        }

        if (index == lbl_80368A50) {
            lbl_80368A50 = node[0];
        }

        *(u16 *)(node + 2) = 0;
    } else {
        offset = index * 0x458;
        voice = (u8 *)lbl_803689A8 + offset;

        if (*(u8 *)(voice + 0x11D) != 0) {
            lbl_80368A4F--;
        } else {
            lbl_80368A4E--;
        }
    }

    lbl_80368A4F++;

    offset = index * 0x458;

    voice = (u8 *)lbl_803689A8 + offset;
    *(u8 *)(voice + 0x11C) = 1;

    voice = (u8 *)lbl_803689A8 + offset;
    *(u8 *)(voice + 0x11D) = 1;

    voice = (u8 *)lbl_803689A8 + offset;
    *(s32 *)(voice + 0x100) = -1;

    voice = (u8 *)lbl_803689A8 + offset;
    fn_80255B20(voice);

    voice = (u8 *)lbl_803689A8 + offset;
    *(u32 *)(voice + 0xF4) =
        (u32)index | 0xFFFFFF00;

    if (fn_802616F4(index) != 0) {
        fn_802618E4(index);

        voice = (u8 *)lbl_803689A8 + offset;
        fn_802554A4(voice, 2);
    }

    voice = (u8 *)lbl_803689A8 + offset;
    *(u32 *)(voice + 0x34) = 0;

    voice = (u8 *)lbl_803689A8 + offset;
    fn_80256054(voice, arg0);

    return index;
}

int fn_80256DD8(int arg0) {
    u32 fn_802616F4(void);
    void fn_802618E4(s32);
    void fn_802554A4(void *, s32);
    extern u8 lbl_80359710[];
    extern s32 lbl_803689A8;
    extern u16 lbl_80368A4C;
    extern u8 lbl_80368A4E;
    extern u8 lbl_80368A4F;
    extern u8 lbl_80368A50;
    extern u8 lbl_80368A51;

    u8 *base;
    u8 *voice;
    u8 *node;
    u8 *n2;
    u8 *tbl;
    s32 off;
    u8 prev;
    u8 next;
    u16 p2;
    u16 n2v;
    s32 id;
    u8 *freeNode;
    u8 id8;

    base = lbl_80359710;
    if ((u32)(arg0 + 0x10000) != 0xFFFFU) {
        if (fn_802616F4() != 0) {
            fn_802618E4(arg0);
        }
        off = arg0 * 0x458;
        voice = (u8 *)lbl_803689A8 + off;
        *(s32 *)(voice + 0xF4) = arg0;
        voice = (u8 *)lbl_803689A8 + off;
        fn_802554A4(voice, 2);

        id = *(s32 *)(voice + 0xF4);
        node = base + 0x800;
        node += ((u8)id << 2);
        if (*(u16 *)(node + 2) == 1) {
            if (node[0] != 0xFF) {
                prev = node[0];
                tbl = base + 0x800;
                tbl += (prev << 2);
                tbl[1] = node[1];
            } else {
                next = node[1];
                tbl = base + 0x900;
                tbl += voice[0x10C];
                *tbl = next;
            }
            if (node[1] != 0xFF) {
                next = node[1];
                prev = node[0];
                tbl = base + 0x800;
                tbl += next << 2;
                *tbl = prev;
            } else if (node[0] == 0xFF) {
                n2 = base + 0xA00;
                n2 += (voice[0x10C] << 2);
                if (*(u16 *)(n2 + 2) != 0xFFFF) {
                    p2 = *(u16 *)(n2 + 2);
                    tbl = base + 0xA00;
                    tbl += p2 << 2;
                    *(u16 *)tbl = *(u16 *)n2;
                } else {
                    lbl_80368A4C = *(u16 *)n2;
                }
                if (*(u16 *)n2 != 0xFFFF) {
                    n2v = *(u16 *)n2;
                    tbl = base + 0xA00;
                    tbl += n2v << 2;
                    *(u16 *)(tbl + 2) = *(u16 *)(n2 + 2);
                }
            }
            *(u16 *)(node + 2) = 0;
        }

        *(s32 *)(voice + 0x34) = 0;
        voice[0x10C] = 0;
        id = *(s32 *)(voice + 0xF4);
        id8 = (u8)id;
        freeNode = base + 0xE00;
        freeNode += (id8 << 2);
        if (*(u16 *)(freeNode + 2) == 0) {
            *(u16 *)(freeNode + 2) = 1;
            if (lbl_80368A51 != 0xFF) {
                freeNode[1] = 0xFF;
                freeNode[0] = lbl_80368A50;
                tbl = base + 0xE00;
                tbl += (lbl_80368A50 << 2);
                tbl[1] = id8;
            } else {
                lbl_80368A51 = id8;
                freeNode[1] = 0xFF;
                freeNode[0] = 0xFF;
            }
            lbl_80368A50 = id8;
            if (voice[0x11D] != 0) {
                lbl_80368A4F -= 1;
            } else {
                lbl_80368A4E -= 1;
            }
        }
        *(s32 *)(voice + 0xF4) = -1;
        ((u8 *)lbl_803689A8 + off)[0x11C] = 0;
    }
    return 0;
}

void fn_80256FF0(Fn80256FF0Arg arg0) {
    void fn_80255B20(void *);
    void fn_802554A4(void *, s32);
    void fn_8024C5CC(s32);
    void fn_802618E4(s32);
    extern u8 lbl_80359710[];
    extern s32 lbl_803689A8;
    extern u16 lbl_80368A4C;
    extern u8 lbl_80368A4E;
    extern u8 lbl_80368A4F;
    extern u8 lbl_80368A50;
    extern u8 lbl_80368A51;

    u8 *base;
    u8 *voice;
    u8 *node;
    u8 *n2;
    u8 *tbl;
    u8 prev;
    u8 next;
    u16 p2;
    u16 n2v;
    s32 id;
    u8 *freeNode;
    u8 id8;
    s32 t118;
    s32 t114;

    base = lbl_80359710;
    voice = (u8 *)lbl_803689A8 + arg0 * 0x458;
    if (*(u32 *)(voice + 0x34) != 0) {
        fn_80255B20(voice);
        t118 = *(s32 *)(voice + 0x118);
        t114 = *(s32 *)(voice + 0x114);
        t118 = t118 & -4;
        t114 = t114 & -1;
        *(s32 *)(voice + 0x118) = t118;
        *(s32 *)(voice + 0x114) = t114;
        *(s32 *)(voice + 0x110) = 0;
        fn_802554A4(voice, 2);

        id = *(s32 *)(voice + 0xF4);
        node = base + 0x800;
        node += ((u8)id << 2);
        if (*(u16 *)(node + 2) == 1) {
            if (node[0] != 0xFF) {
                prev = node[0];
                tbl = base + 0x800;
                tbl += (prev << 2);
                tbl[1] = node[1];
            } else {
                next = node[1];
                tbl = base + 0x900;
                tbl += voice[0x10C];
                *tbl = next;
            }
            if (node[1] != 0xFF) {
                next = node[1];
                prev = node[0];
                tbl = base + 0x800;
                tbl += next << 2;
                *tbl = prev;
            } else if (node[0] == 0xFF) {
                n2 = base + 0xA00;
                n2 += (voice[0x10C] << 2);
                if (*(u16 *)(n2 + 2) != 0xFFFF) {
                    p2 = *(u16 *)(n2 + 2);
                    tbl = base + 0xA00;
                    tbl += p2 << 2;
                    *(u16 *)tbl = *(u16 *)n2;
                } else {
                    lbl_80368A4C = *(u16 *)n2;
                }
                if (*(u16 *)n2 != 0xFFFF) {
                    n2v = *(u16 *)n2;
                    tbl = base + 0xA00;
                    tbl += n2v << 2;
                    *(u16 *)(tbl + 2) = *(u16 *)(n2 + 2);
                }
            }
            *(u16 *)(node + 2) = 0;
        }

        *(s32 *)(voice + 0x34) = 0;
        voice[0x10C] = 0;
        id = *(s32 *)(voice + 0xF4);
        id8 = (u8)id;
        freeNode = base + 0xE00;
        freeNode += (id8 << 2);
        if (*(u16 *)(freeNode + 2) == 0) {
            *(u16 *)(freeNode + 2) = 1;
            if (lbl_80368A51 != 0xFF) {
                freeNode[1] = 0xFF;
                freeNode[0] = lbl_80368A50;
                tbl = base + 0xE00;
                tbl += (lbl_80368A50 << 2);
                tbl[1] = id8;
            } else {
                lbl_80368A51 = id8;
                freeNode[1] = 0xFF;
                freeNode[0] = 0xFF;
            }
            lbl_80368A50 = id8;
            if (voice[0x11D] != 0) {
                lbl_80368A4F -= 1;
            } else {
                lbl_80368A4E -= 1;
            }
        }
        *(s32 *)(voice + 0xF4) = -1;
    }
    if (voice[0x11C] != 0) {
        fn_8024C5CC(arg0);
    }
    fn_802618E4(arg0);
}

void fn_80257224(void) {
    if (lbl_8036C368 < 0.0) {
        lbl_8036C368 = 0.0;
    }
}

void fn_802572E8(void)
{
    extern u8 lbl_8034C110[];
    extern s32 lbl_803689A8;

    void fn_80256FF0(u8);

    u32 index;
    u32 offset;
    u8 *voice;

    index = 0;
    offset = 0;

    while (index < lbl_8034C110[0x210]) {
        voice = (u8 *)lbl_803689A8 + offset;

        if (*(u32 *)(voice + 0x34) == 0) {
            if (*(u8 *)(voice + 0x11C) == 0) {
                fn_80256FF0(index);
            }
        }

        offset += 0x458;
        index++;
    }
}

void fn_80257444(void *arg0)
{
    extern s32 lbl_803689A8;
    extern u8 lbl_8034C110[];

    void fn_80256FF0(s32);

    u8 *voice;
    u32 index;
    u32 offset;

    index = 0;
    offset = 0;

    while (index < lbl_8034C110[0x210]) {
        voice = (u8 *)lbl_803689A8 + offset;

        if (*(u32 *)(voice + 0x34) == 0 &&
            *(u8 *)(voice + 0x11C) == 0) {
            fn_80256FF0(index);
        }

        offset += 0x458;
        index++;
    }
}

s32 fn_802575A0(void *arg0) {
    extern u16 lbl_8035A610[];
    extern u16 lbl_8035A650[];
    s32 temp_r4;
    u8 temp_r0;
    u8 temp_r5;

    temp_r4 = *(s32*) ((u8*) arg0 + 0xF4);
    if ((u32) (temp_r4 + 0x10000) != -1U) {
        temp_r5 = *(u8*) ((u8*) arg0 + 0x121);
        if (temp_r5 != 0xFF) {
            temp_r0 = *(u8*) ((u8*) arg0 + 0x122);
            if (temp_r0 == 0xFF) {
                if (*(u8*) (lbl_8035A610 + (u8) temp_r4) == (u8) temp_r4) {
                    return 1;
                }
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return 0;
            }
            if ((u8) temp_r4 == *(u8*) (lbl_8035A650 + (((temp_r0 * 0x10) & 0xFF0) + temp_r5))) {
                return 1;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return 0;
        }
    }
    return 0;
}

void fn_80257614(void *arg0)
{
    extern u8 lbl_8035A610[];
    extern u8 lbl_8035A650[];

    u8 *voice;
    u32 value;
    u8 index;
    u8 group;
    u8 voiceId;
    u8 *table;

    voice = (u8 *)arg0;

    value = *(u32 *)(voice + 0xF4);

    if (value == 0xFFFFFFFF) {
        return;
    }

    index = *(u8 *)(voice + 0x121);

    if (index == 0xFF) {
        return;
    }

    group = *(u8 *)(voice + 0x122);
    voiceId = (u8)value;

    if (group == 0xFF) {
        lbl_8035A610[voiceId] = voiceId;
    } else {
        table = lbl_8035A650 + ((u32)group << 4);

        table[index] = voiceId;
    }
}

void fn_80257668(void *arg0)
{
    extern u8 lbl_8035A610[];
    extern u8 lbl_8035A650[];

    u8 *voice;
    u32 value;
    u8 index;
    u8 group;
    u8 voiceId;
    u8 *table;

    voice = (u8 *)arg0;

    value = *(u32 *)(voice + 0xF4);

    if (value == 0xFFFFFFFF) {
        return;
    }

    index = *(u8 *)(voice + 0x121);

    if (index == 0xFF) {
        return;
    }

    group = *(u8 *)(voice + 0x122);
    voiceId = (u8)value;

    if (group == 0xFF) {
        if (lbl_8035A610[voiceId] == voiceId) {
            lbl_8035A610[voiceId] = 0xFF;
        }
    } else {
        table = lbl_8035A650 + ((u32)group << 4);

        if (table[index] == voiceId) {
            table[index] = 0xFF;
        }
    }
}

void fn_802576DC(void) {
    extern u8 lbl_8035A650[];
    extern u8 lbl_8035A610[];
    s32 i;
    u8 *p;
    u8 c;

    c = 0xFF;
    p = lbl_8035A650;
    for (i = 0; i < 4; i++) {
        p[0] = c;
        p[1] = c;
        p[2] = c;
        p[3] = c;
        p[4] = c;
        p[5] = c;
        p[6] = c;
        p[7] = c;
        p[8] = c;
        p[9] = c;
        p[10] = c;
        p[11] = c;
        p[12] = c;
        p[13] = c;
        p[14] = c;
        p[15] = c;
        p += 16;
        p[0] = c;
        p[1] = c;
        p[2] = c;
        p[3] = c;
        p[4] = c;
        p[5] = c;
        p[6] = c;
        p[7] = c;
        p[8] = c;
        p[9] = c;
        p[10] = c;
        p[11] = c;
        p[12] = c;
        p[13] = c;
        p[14] = c;
        p[15] = c;
        p += 16;
    }
    p = lbl_8035A610;
    for (i = 0; i < 2; i++) {
        p[0] = c;
        p[1] = c;
        p[2] = c;
        p[3] = c;
        p[4] = c;
        p[5] = c;
        p[6] = c;
        p[7] = c;
        p[8] = c;
        p[9] = c;
        p[10] = c;
        p[11] = c;
        p[12] = c;
        p[13] = c;
        p[14] = c;
        p[15] = c;
        p[16] = c;
        p[17] = c;
        p[18] = c;
        p[19] = c;
        p[20] = c;
        p[21] = c;
        p[22] = c;
        p[23] = c;
        p[24] = c;
        p[25] = c;
        p[26] = c;
        p[27] = c;
        p[28] = c;
        p[29] = c;
        p[30] = c;
        p[31] = c;
        p += 32;
    }
}

s32 fn_80257820(u16 arg0) {
    extern f32 lbl_8036C268;
    return (s32) (lbl_8036C268 * (f32) arg0);
}

void fn_80257940(s32 arg0) {
    f64 fn_802387C8(f64, f32, f32);
    extern f64 lbl_8036C280;
    extern f32 lbl_8036C288;
    extern f32 lbl_8036C28C;
    fn_8022C568(lbl_8036C28C * (f32) fn_802387C8(lbl_8036C280, lbl_8036C288 * (f32) arg0, lbl_8036C288));
}

s32 fn_80257998(u8 *arg0) {
    extern u16 lbl_8029F9F8[];
    s32 ret;
    u32 tmp;
    s32 x;
    s32 y;

    ret = 0;
    switch (arg0[0]) {
    case 0:
        switch (arg0[1]) {
        case 0:
            tmp = *(u32 *)(arg0 + 0x14);
            *(u32 *)(arg0 + 4) = tmp;
            if (tmp != 0) {
                arg0[1] = 1;
                *(u32 *)(arg0 + 8) = 0;
                *(u32 *)(arg0 + 0x10) = 0x7FFF0000U / *(u32 *)(arg0 + 0x14);
                break;
            }
        case 1:
            tmp = *(u32 *)(arg0 + 0x18);
            *(u32 *)(arg0 + 4) = tmp;
            if (tmp != 0) {
                arg0[1] = 2;
                *(u32 *)(arg0 + 8) = 0x7FFF0000;
                *(u32 *)(arg0 + 0x10) =
                    (u32)(-(s32)((0x7FFF0000U - ((u32)*(u16 *)(arg0 + 0x1C) << 16)) /
                                 *(u32 *)(arg0 + 0x18)));
                break;
            }
        case 2:
            if (*(u16 *)(arg0 + 0x1C) != 0) {
                arg0[1] = 3;
                *(u32 *)(arg0 + 8) = (u32)*(u16 *)(arg0 + 0x1C) << 16;
                *(u32 *)(arg0 + 0x10) = 0;
                break;
            }
        case 4:
            ret = 1;
            *(u32 *)(arg0 + 8) = 0;
            break;
        }
        break;
    case 1:
        switch (arg0[1]) {
        case 0:
            tmp = *(u32 *)(arg0 + 0x14);
            *(u32 *)(arg0 + 4) = tmp;
            if (tmp != 0) {
                arg0[1] = 1;
                if (arg0[0x26] == 0) {
                    *(u32 *)(arg0 + 8) = 0;
                    *(u32 *)(arg0 + 0x10) = 0x7FFF0000U / *(u32 *)(arg0 + 4);
                } else {
                    *(u32 *)(arg0 + 0xC) = 0;
                    *(u32 *)(arg0 + 8) = 0;
                    *(u32 *)(arg0 + 0x10) = 0xC10000U / *(u32 *)(arg0 + 4);
                }
                break;
            }
        case 1:
            *(u32 *)(arg0 + 4) =
                (*(u32 *)(arg0 + 0x18) *
                 (((0xC1U - *(u16 *)(arg0 + 0x1C)) << 16) / 193U)) >>
                16;
            if (*(u32 *)(arg0 + 4) != 0) {
                arg0[1] = 2;
                *(u32 *)(arg0 + 8) = 0x7FFF0000;
                *(u32 *)(arg0 + 0xC) = 0xC10000;
                *(u32 *)(arg0 + 0x10) =
                    (u32)(-(s32)(((0xC1U - *(u16 *)(arg0 + 0x1C)) << 16) /
                                 *(u32 *)(arg0 + 4)));
                break;
            }
        case 2:
            if (*(u16 *)(arg0 + 0x1C) != 0) {
                arg0[1] = 3;
                *(u32 *)(arg0 + 0xC) = (u32)*(u16 *)(arg0 + 0x1C) << 16;
                x = (s32)(*(u32 *)(arg0 + 0xC) + 0x8000) >> 16;
                y = 0xC1 - x;
                x = y & ~(y >> 31);
                *(u32 *)(arg0 + 8) = (u32)lbl_8029F9F8[x] << 16;
                *(u32 *)(arg0 + 0x10) = 0;
                break;
            }
        case 4:
            ret = 1;
            *(u32 *)(arg0 + 8) = 0;
            break;
        }
        break;
    }
    return ret;
}

void fn_80257C04(void *arg0) {
    M2C_UNK fn_80257998();
    M2C_FIELD(arg0, s8 *, 1) = 0;
    fn_80257998();
}

s32 fn_80257C2C(u8 *arg0, u32 arg1) {
    u32 fn_8022C568(f32, f32, f32);
    extern u8 lbl_8029FB7C[];
    extern f32 lbl_8036C298;
    f32 temp_f2;
    u32 temp_r3;

    switch (arg0[0]) {
    case 0:
        arg0[1] = 4;
        *(u32 *)(arg0 + 4) = arg1;
        if (arg1 == 0) {
            *(u32 *)(arg0 + 4) = 1;
            *(s32 *)(arg0 + 0x10) = 0;
            return 1;
        }
        *(s32 *)(arg0 + 0x10) = -(s32)(*(u32 *)(arg0 + 8) / arg1);
        break;
    case 1:
        if (arg0[0x26] == 0 && arg0[1] == 1) {
            *(s32 *)(arg0 + 0xC) = (0xC1 - lbl_8029FB7C[*(s32 *)(arg0 + 8) >> 21]) << 16;
        }
        temp_f2 = lbl_8036C298 * (f32)*(s32 *)(arg0 + 0xC);
        *(u32 *)(arg0 + 4) = fn_8022C568(temp_f2 * (f32)arg1, temp_f2, lbl_8036C298) >> 12;
        arg0[1] = 4;
        temp_r3 = *(u32 *)(arg0 + 4);
        if (temp_r3 == 0) {
            *(u32 *)(arg0 + 4) = 1;
            *(u32 *)(arg0 + 8) = 0;
            *(s32 *)(arg0 + 0xC) = 0;
            *(s32 *)(arg0 + 0x10) = 0;
            return 1;
        }
        *(s32 *)(arg0 + 0x10) = -(s32)((u32)*(s32 *)(arg0 + 0xC) / temp_r3);
        break;
    }
    return 0;
}

s32 fn_80257D7C(u8 *arg0) {
    u32 fn_8022C568(f32, f32, f32);
    extern u8 lbl_8029FB7C[];
    extern f32 lbl_8036C298;
    f32 temp_f2;
    u32 temp_r3;
    u32 temp_r4;
    u8 temp_r0;

    temp_r0 = arg0[0];
    if ((s32)temp_r0 < 2) {
        if ((s32)temp_r0 < 0) {
            return 0;
        }
        temp_r4 = *(u32 *)(arg0 + 0x20);
        switch ((s32)temp_r0) {
        case 0:
            arg0[1] = 4;
            *(u32 *)(arg0 + 4) = temp_r4;
            if (temp_r4 == 0) {
                *(u32 *)(arg0 + 4) = 1;
                *(s32 *)(arg0 + 0x10) = 0;
                return 1;
            }
            *(s32 *)(arg0 + 0x10) = -(s32)(*(u32 *)(arg0 + 8) / temp_r4);
            break;
        case 1:
            if (arg0[0x26] == 0 && arg0[1] == 1) {
                *(s32 *)(arg0 + 0xC) = (0xC1 - lbl_8029FB7C[*(s32 *)(arg0 + 8) >> 21]) << 16;
            }
            temp_f2 = lbl_8036C298 * (f32)*(s32 *)(arg0 + 0xC);
            *(u32 *)(arg0 + 4) = fn_8022C568(temp_f2 * (f32)temp_r4, temp_f2, lbl_8036C298) >> 12;
            arg0[1] = 4;
            temp_r3 = *(u32 *)(arg0 + 4);
            if (temp_r3 == 0) {
                *(u32 *)(arg0 + 4) = 1;
                *(u32 *)(arg0 + 8) = 0;
                *(s32 *)(arg0 + 0xC) = 0;
                *(s32 *)(arg0 + 0x10) = 0;
                return 1;
            }
            *(s32 *)(arg0 + 0x10) = -(s32)((u32)*(s32 *)(arg0 + 0xC) / temp_r3);
            break;
        }
    }
    return 0;
}

s32 fn_80257EE4(u8 *arg0, s16 *arg1, s16 *arg2) {
    extern u16 lbl_8029F9F8[];
    s32 fn_80257998(u8 *);
    s32 ret;
    s32 old;
    s32 delta;
    s32 x;
    s32 y;
    s32 ctr;
    u8 mode;

    ret = 0;
    switch (arg0[0]) {
    case 0:
        if (arg0[1] != 3) {
            old = *(s32 *)(arg0 + 8);
            *(s32 *)(arg0 + 8) = old + *(s32 *)(arg0 + 0x10);
            *arg1 = (s16)(old >> 16);
            delta = *(s32 *)(arg0 + 0x10);
            if (delta >= 0) {
                *arg2 = (s16)(delta >> 21);
            } else {
                *arg2 = (s16) -(-delta >> 21);
            }
            ctr = *(s32 *)(arg0 + 4) - 1;
            *(s32 *)(arg0 + 4) = ctr;
            if (ctr == 0) {
                ret = fn_80257998(arg0);
            }
        } else {
            *arg1 = (s16)(*(s32 *)(arg0 + 8) >> 16);
            *arg2 = 0;
        }
        break;
    case 1:
        mode = arg0[1];
        if (mode != 3) {
            old = *(s32 *)(arg0 + 8);
            if (arg0[0x26] == 0 && mode == 1) {
                *(s32 *)(arg0 + 8) = old + *(s32 *)(arg0 + 0x10);
            } else {
                *(s32 *)(arg0 + 0xC) = *(s32 *)(arg0 + 0xC) + *(s32 *)(arg0 + 0x10);
                x = (s32)(*(u32 *)(arg0 + 0xC) + 0x8000) >> 16;
                y = 0xC1 - x;
                x = y & ~(y >> 31);
                *(s32 *)(arg0 + 8) = (s32)lbl_8029F9F8[x] << 16;
            }
            *arg1 = (s16)(old >> 16);
            delta = *(s32 *)(arg0 + 8) - old;
            if (delta >= 0) {
                *arg2 = (s16)(delta >> 21);
            } else {
                *arg2 = (s16) -(-delta >> 21);
            }
            ctr = *(s32 *)(arg0 + 4) - 1;
            *(s32 *)(arg0 + 4) = ctr;
            if (ctr == 0) {
                ret = fn_80257998(arg0);
            }
        } else {
            *arg1 = (s16)(*(s32 *)(arg0 + 8) >> 16);
            *arg2 = 0;
        }
        break;
    }
    return ret;
}

s32 fn_8025807C(s32 arg0, s32 arg1, s32 arg2) {
    u32 fn_80257EE4(s32, s32, s32);
    u8 i;
    for (i = 0; i < 15; i++) {
        if (fn_80257EE4(arg0, arg1, arg2) != 0) {
            return 1;
        }
    }
    return 0;
}

void fn_80258100(void) {
    extern M2C_UNK lbl_8035A6D0;
    M2C_UNK *var_r5;
    s32 var_ctr;

    var_r5 = &lbl_8035A6D0;
    M2C_FIELD(&lbl_8035A6D0, s8 *, 0) = 0;
    var_ctr = 2;
    do {
        M2C_FIELD(var_r5, s8 *, 0xB08) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB09) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0A) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0B) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0C) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0D) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0E) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB0F) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB10) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB11) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB12) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB13) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB14) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB15) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB16) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB17) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB18) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB19) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1A) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1B) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1C) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1D) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1E) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB1F) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB20) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB21) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB22) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB23) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB24) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB25) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB26) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB27) = 0xFF;
        var_r5 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(&lbl_8035A6D0, s16 *, 0xB48) = 0;
    M2C_FIELD(&lbl_8035A6D0, s32 *, 0xB4C) = 0;
}

#pragma global_optimizer off
#pragma inline_depth(0)
int fn_802581BC(u32 arg0) {
extern u8 lbl_8035A6D0[];
s32 fn_802631AC(u8,s32*);
void fn_80261AE0(s32,s32,s32);
u16 fn_80261B28(s32);
s32 fn_80261B3C(s32);
u8 fn_80261B14(s32);
u16 serial;
u32 count;
u8 i, slot, j;
s32 offset;
u8 callId;
u16 *serialPtr;
u8 *map;
u32 id=(u8)arg0;
u8 *idPtr;
s32 result;u32 *handle;
u8 *scan;
u32 limit;
for(i=0;i<(count=lbl_8035A6D0[0]);i++){
u8 *p=lbl_8035A6D0+i*0x2c;
u8 *state=p+8;u8 *owner;
if(*state!=0){ owner=p+11;
if(*owner==(u8)arg0){*state=0;(*(lbl_8035A6D0+*owner+0xb08))=255;}}
}
for(slot=0;slot<count;slot++) {
if((*(lbl_8035A6D0+slot*0x2c+8))==0) {
u8 *p;u8 state=1;
p=lbl_8035A6D0+slot*0x2c;
p[8]=state;*(u32*)(p+12)=0;goto allocated;
}
}
slot=255;
allocated:
callId=id;
map=lbl_8035A6D0+0xb08;
map[callId]=slot;
if(slot!=255){
{s32 value=fn_802631AC(map[callId],0);fn_80261AE0(callId,value,*(s32*)(lbl_8035A6D0+4));}
{u16 value=fn_80261B28(callId);offset=slot*0x2c;
*(u16*)(lbl_8035A6D0+offset+0x18)=value;}
limit=lbl_8035A6D0[0];
do {
serial=(*(u16*)(lbl_8035A6D0+0xb48))++;
for(j=0;j<limit;j++){
scan=lbl_8035A6D0+j*0x2c;
if(scan[8]!=0 && *(u16*)(scan+0x1a)==serial) break;
}
}while(j!=limit);
serialPtr=(u16*)(lbl_8035A6D0+offset);
*(serialPtr+=13)=serial;
result=fn_80256000(arg0);
handle=(u32*)(lbl_8035A6D0+offset);
*(handle+=7)=result;
if((u32)result+0x10000U!=0xffffU)
*(s32*)(lbl_8035A6D0+offset+0x20)=fn_8024B5B0(*handle);
else *(s32*)(lbl_8035A6D0+offset+0x20)=-1;
*(s32*)(lbl_8035A6D0+offset+0x24)=fn_80261B3C(callId);
*(lbl_8035A6D0+offset+10)=fn_80261B14(callId);
idPtr=lbl_8035A6D0+offset+11;
*idPtr=id;
if(*(u32*)(lbl_8035A6D0+0xb4c)!=0 && (*(u32(**)(s32,void*))(lbl_8035A6D0+0xb4c))(0,lbl_8035A6D0+offset+0x18)==0) return (id&~0xffff00)|((*serialPtr<<8)&0xffff00);
fn_80261AE0(callId,0,0);
*(lbl_8035A6D0+offset+8)=0;
map[*idPtr]=255;
}
else fn_80261AE0(callId,0,0);
return -1;
}

void fn_80258530(void *arg0,u32 arg1) {
extern u8 lbl_8035A6D0[];
u8 *self=arg0; u32 pos=*(u32 *)(self+4); u32 result; u8 *state;
if(pos!=arg1) {
if(pos<arg1) {
switch(self[2]) {
case 5:
*(u32 *)(self+0x1C)=(pos / 14) * 8;
*(u32 *)(self+0x20)=arg1-*(u32 *)(self+4);
*(u32 *)(self+0x24)=0;
*(u32 *)(self+0x28)=0;
result=(*(u32 (**)(s32,void *))(lbl_8035A6D0+0xB4C))(1,self+0x10);
if(result) *(u32 *)(self+4)=(*(u32 *)(self+4)+result)%*(u32 *)(lbl_8035A6D0+4);
break;
case 6:
*(u32 *)(self+0x1C)=pos * 2;
*(u32 *)(self+0x20)=arg1-*(u32 *)(self+4);
*(u32 *)(self+0x24)=0;
*(u32 *)(self+0x28)=0;
result=(*(u32 (**)(s32,void *))(lbl_8035A6D0+0xB4C))(1,self+0x10);
if(result) *(u32 *)(self+4)=(*(u32 *)(self+4)+result)%*(u32 *)(lbl_8035A6D0+4);
break;
}
}else if(arg1==0) {
switch(self[2]) {
case 5:
*(u32 *)(self+0x1C)=(pos / 14) * 8;
state=lbl_8035A6D0;
*(u32 *)(self+0x20)=*(u32 *)(state+4)-*(u32 *)(self+4);
*(u32 *)(self+0x24)=0;
*(u32 *)(self+0x28)=0;
result=(*(u32 (**)(s32,void *))(state+0xB4C))(1,self+0x10);
if(result) *(u32 *)(self+4)=(*(u32 *)(self+4)+result)%*(u32 *)(state+4);
break;
case 6:
*(u32 *)(self+0x1C)=pos * 2;
state=lbl_8035A6D0;
*(u32 *)(self+0x20)=*(u32 *)(state+4)-*(u32 *)(self+4);
*(u32 *)(self+0x24)=0;
*(u32 *)(self+0x28)=0;
result=(*(u32 (**)(s32,void *))(state+0xB4C))(1,self+0x10);
if(result) *(u32 *)(self+4)=(*(u32 *)(self+4)+result)%*(u32 *)(state+4);
break;
}
}else {
switch(self[2]) {
case 5:
*(u32 *)(self+0x1C)=(pos / 14) * 8;
state=lbl_8035A6D0;
*(u32 *)(self+0x20)=*(u32 *)(state+4)-*(u32 *)(self+4);
*(u32 *)(self+0x24)=0;
*(u32 *)(self+0x28)=arg1;
result=(*(u32 (**)(s32,void *))(state+0xB4C))(1,self+0x10);
if(result) *(u32 *)(self+4)=(*(u32 *)(self+4)+result)%*(u32 *)(state+4);
break;
case 6:
*(u32 *)(self+0x1C)=pos * 2;
state=lbl_8035A6D0;
*(u32 *)(self+0x20)=*(u32 *)(state+4)-*(u32 *)(self+4);
*(u32 *)(self+0x24)=0;
*(u32 *)(self+0x28)=arg1;
result=(*(u32 (**)(s32,void *))(state+0xB4C))(1,self+0x10);
if(result) *(u32 *)(self+4)=(*(u32 *)(self+4)+result)%*(u32 *)(state+4);
break;
}
}
}
}

#pragma inline_depth(8)
#pragma global_optimizer reset
void fn_80258888(void) {
    u32 fn_80261B00(u32);
    u32 fn_80262154(u32, void *);
    void fn_80258530(void *, u32);
    u32 fn_80262510(u8);
    u32 fn_80262538(void);
    void fn_802618E4(u8);
    void fn_80255054(void *);
    void fn_80256FF0(u8);
    extern u8 lbl_8035A6D0[];
    extern s32 lbl_803689A8;

    u8 *ctrl;
    u8 *walk;
    u32 i;
    u32 pos;
    u8 *e;
    u32 adj;
    s32 thresh;
    u8 state;

    ctrl = lbl_8035A6D0;
    if (*(u32 *)(ctrl + 0xB4C) == 0) {
        return;
    }

    i = 0;
    walk = ctrl;
    do {
        if (walk[0xB08] != 0xFF && fn_80261B00(i) != 0) {
            e = lbl_8035A6D0 + walk[0xB08] * 0x2C + 8;
            pos = fn_80262154(i, e - 8);
            if (e[2] == 5) {
                adj = pos / 7;
                adj *= 14;
            } else {
                adj = pos;
            }
            state = e[0];
            switch (state) {
            case 1:
                fn_80258530(e, adj);
                break;
            case 2:
            case 3:
                if (((*(u16 *)(e + 0x12) << 8) | e[3]) == fn_80262510(e[3])) {
                    fn_80258530(e, adj);
                    if (pos >= *(u32 *)(e + 0xC)) {
                        *(u32 *)(e + 8) = *(u32 *)(e + 8) - (pos - *(u32 *)(e + 0xC));
                    } else {
                        *(u32 *)(e + 8) = *(u32 *)(e + 8) - (*(u32 *)(ctrl + 4) - (*(u32 *)(e + 0xC) - pos));
                    }
                    *(u32 *)(e + 0xC) = pos;
                    {
                        u8 id = e[3];
                        u8 *sb = (u8 *)lbl_803689A8;
                        s32 t = *(u16 *)(sb + id * 0x458 + 0x212);
                        thresh = (t * 0xA0 + 0xFFF) / 4096;
                    }
                    if (thresh > (s32)*(u32 *)(e + 8)) {
                        if (fn_80262538() == 0) {
                            if (e[0] == 2) {
                                fn_802618E4(e[3]);
                                fn_80255054((u8 *)lbl_803689A8 + e[3] * 0x458);
                            } else {
                                fn_80256FF0(e[3]);
                            }
                        }
                        e[0] = 0;
                        lbl_8035A6D0[0xB08 + e[3]] = 0xFF;
                    }
                } else {
                    e[0] = 0;
                    lbl_8035A6D0[0xB08 + e[3]] = 0xFF;
                }
                break;
            }
        }
        i += 1;
        walk += 1;
    } while (i < 0x40);
}

void fn_80258A98(s32 arg0, s32 arg1) {
    extern s32 lbl_8035B220[];
    extern s32 *lbl_80368A60;
    extern s32 *lbl_80368A5C;
    extern s32 *lbl_80368A58;

    lbl_80368A60 = NULL;
    lbl_8035B220[1] = -2;
    M2C_FIELD(lbl_8035B220, u16 *, 8) = 0;
    lbl_8035B220[0x183] = arg0;
    lbl_8035B220[0x185] = arg0;
    lbl_8035B220[0x184] = arg0 + arg1;
    lbl_8035B220[0] = 0;
    lbl_80368A60 = lbl_8035B220;
    lbl_80368A58 = NULL;
    lbl_80368A5C = lbl_8035B220;
}

void *fn_80258AD8(void) {
    extern u16 lbl_8035B220[];
    return (u8 *)lbl_8035B220 + 0x60c;
}

void fn_80258AE8(s32 id, void *data, u8 type, u32 remove) {
 void fn_80250128(s32,s32); s32 fn_80250414();
 void fn_8024EE6C(s32,s32); void fn_8024F05C(s32);
 s32 fn_8024F1D8(); void fn_8024F420(s32);
 s32 fn_8024F5E4(); void fn_8024F7E8(s32);
 void fn_8024FCA8(s32,s32); s32 fn_8024FD80();
 extern s32 *lbl_80368A5C;
 u8 *node;
 switch(type) {
 case 0:
  if(remove==0) {
   node=FindAudioResource(data,(u16)(id),0);
   if(node!=NULL) fn_80250128(id,(s32)(node+8));
   else fn_80250128(id,0);
  } else fn_80250414(id);
  break;
 case 2:
  if(remove==0) {
   node=FindAudioResource(data,(u16)(id|0x4000),8);
   if(node!=NULL) fn_8024EE6C(id|0x4000,(s32)(node+8));
   else fn_8024EE6C(id|0x4000,0);
  } else fn_8024F05C(id|0x4000);
  break;
 case 3:
  if(remove==0) {
   node=FindAudioResource(data,(u16)(id|0x8000),12);
   if(node!=NULL) fn_8024F1D8(id|0x8000,(s32)(node+12),(u16)*(u32*)(node+8));
   else fn_8024F1D8(id|0x8000,0,0);
  } else fn_8024F420(id|0x8000);
  break;
 case 4:
  if(remove==0) {
   node=FindAudioResource(data,(u16)(id),4);
   if(node!=NULL) fn_8024F5E4(id,(s32)(node+8));
   else fn_8024F5E4(id,0);
  } else fn_8024F7E8(id);
  break;
 case 1:
  if(remove==0) fn_8024FCA8(id,(s32)((u8*)lbl_80368A5C+0x60C));
  else fn_8024FD80(id,(s32)((u8*)lbl_80368A5C+0x60C));
  break;
 }
}

void fn_80258D74(void) {
    M2C_UNK fn_80262410();
    fn_80262410();
}

s32 fn_80258D94(void *arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4) {
extern u8 lbl_80368978;
extern s32 *lbl_80368A5C;
s32 fn_802622F4(s32);
u32 fn_8024F964(s32,s32);
void fn_80258AE8(s32,void *,u8,u32);
s32 fn_8024FE1C(u16,void *,u16);
void fn_802624B8(void);
s16 n;
AudioGroupState *state;
u32 i; u16 *p; u8 *node;
if(lbl_80368978 && (state=(AudioGroupState *)lbl_80368A5C, n=state->count)<128) {
for(node=arg0; *(u32 *)node != 0xFFFFFFFF; node=(u8 *)arg0+*(u32 *)node) {
if(*(u16 *)(node+4)==arg1) {
state=(AudioGroupState *)((u8 *)state+n*12); state->slots[0].node=node;
state=(AudioGroupState *)lbl_80368A5C; state=(AudioGroupState *)((u8 *)state+state->count*12); state->slots[0].data=arg0;
state=(AudioGroupState *)lbl_80368A5C; state=(AudioGroupState *)((u8 *)state+state->count*12); state->slots[0].id=arg3;
p=(u16 *)((u8 *)arg0+*(u32 *)(node+12));
if(fn_8024F964(arg3,fn_802622F4(arg2))) {
while(*p!=0xFFFF) { if(*p & 0x8000) { for(i=*p & 0x3FFF;(u16)i<=p[1];i++) fn_80258AE8(i,(void *)arg3,1,0); p+=2; } else { fn_80258AE8(*p++,(void *)arg3,1,0); } }
}
{ u32 j; u16 *q;
q=(u16 *)((u8 *)arg0+*(u32 *)(node+8));
while(*q!=0xFFFF) { if(*q & 0x8000) { for(j=*q & 0x3FFF;(u16)j<=q[1];j++) fn_80258AE8(j,(void *)arg4,0,0); q+=2; } else { fn_80258AE8(*q++,(void *)arg4,0,0); } }
}
{ u32 j; u16 *q;
q=(u16 *)((u8 *)arg0+*(u32 *)(node+16));
while(*q!=0xFFFF) { if(*q & 0x8000) { for(j=*q & 0x3FFF;(u16)j<=q[1];j++) fn_80258AE8(j,(void *)arg4,4,0); q+=2; } else { fn_80258AE8(*q++,(void *)arg4,4,0); } }
}
{ u32 j; u16 *q;
q=(u16 *)((u8 *)arg0+*(u32 *)(node+20));
while(*q!=0xFFFF) { if(*q & 0x8000) { for(j=*q & 0x3FFF;(u16)j<=q[1];j++) fn_80258AE8(j,(void *)arg4,2,0); q+=2; } else { fn_80258AE8(*q++,(void *)arg4,2,0); } }
}
{ u32 j; u16 *q;
q=(u16 *)((u8 *)arg0+*(u32 *)(node+24));
while(*q!=0xFFFF) { if(*q & 0x8000) { for(j=*q & 0x3FFF;(u16)j<=q[1];j++) fn_80258AE8(j,(void *)arg4,3,0); q+=2; } else { fn_80258AE8(*q++,(void *)arg4,3,0); } }
if(*(u16 *)(node+6)==1) { q=(u16 *)((u8 *)arg0+*(u32 *)(node+28)); fn_8024FE1C(arg1,(u8 *)q+4,*q); }
}
fn_802624B8(); (*(s16 *)((u8 *)lbl_80368A5C+8))++; return 1;
}
}
}
return 0;
}

#pragma opt_strength_reduction off
s32 fn_802590E0(void) {
extern s32 *lbl_80368A5C;
void fn_8026372C(void); void fn_802636F4(void);
void fn_8025D9A4(void *,u16); void fn_80245014(u16);
void fn_802572E8(void *); void fn_80257444(void *);
void fn_8024FACC(s32); void fn_8024FF5C(u16);
void fn_80258AE8(s32,void *,u8,u32);
u8 *node; s32 id; u8 *base; u16 *p; u16 *start; s16 i;
AudioGroupState *state=(AudioGroupState *)lbl_80368A5C;
s16 n=--state->count;
AudioGroupState *slot;
slot=(AudioGroupState *)((u8 *)state+n*12); node=slot->slots[0].node;
state=(AudioGroupState *)((u8 *)state+state->count*12);
base=state->slots[0].data;
id=state->slots[0].id;
fn_8026372C();
if(*(u16 *)(node+6)==1) {u16 *p; p=(u16 *)(base+*(u32 *)(node+28)); fn_8025D9A4((u8 *)p+4,*p);}
else fn_80245014(*(u16 *)(node+4));
fn_802572E8(base+*(u32 *)(node+8));
fn_80257444(base+*(u32 *)(node+12));
fn_802636F4();
start=(u16 *)(base+*(u32 *)(node+12));
if(*start!=0xFFFF) {
p=start; while(*p!=0xFFFF) p++; p--;
while(p>=start) {
if(p!=start) {
if(p[-1]&0x8000) { for(i=(s16)*p;(s16)i>=(p[-1]&0x3FFF);i--) fn_80258AE8((u16)i,0,1,1); p-=2; }
else {fn_80258AE8(*p,0,1,1);p--;}
} else {fn_80258AE8(*p,0,1,1);p--;}
}
}
fn_8024FACC(id);
{ u32 j; u16 *q=(u16 *)(base+*(u32 *)(node+8)); while(*q!=0xFFFF) { if(*q&0x8000) { for(j=*q&0x3FFF;(u16)j<=q[1];j++) fn_80258AE8(j,0,0,1);q+=2;}else fn_80258AE8(*q++,0,0,1); } }
{ u32 j; u16 *q=(u16 *)(base+*(u32 *)(node+16)); while(*q!=0xFFFF) { if(*q&0x8000) { for(j=*q&0x3FFF;(u16)j<=q[1];j++) fn_80258AE8(j,0,4,1);q+=2;}else fn_80258AE8(*q++,0,4,1); } }
{ u32 j; u16 *q=(u16 *)(base+*(u32 *)(node+20)); while(*q!=0xFFFF) { if(*q&0x8000) { for(j=*q&0x3FFF;(u16)j<=q[1];j++) fn_80258AE8(j,0,2,1);q+=2;}else fn_80258AE8(*q++,0,2,1); } }
{ u32 j; u16 *q=(u16 *)(base+*(u32 *)(node+24)); while(*q!=0xFFFF) { if(*q&0x8000) { for(j=*q&0x3FFF;(u16)j<=q[1];j++) fn_80258AE8(j,0,3,1);q+=2;}else fn_80258AE8(*q++,0,3,1); } }
if(*(u16 *)(node+6)==1) fn_8024FF5C(*(u16 *)(node+4));return 1;
}
#pragma opt_strength_reduction reset
s32 fn_80259430(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    u32 var_r3;
    u32 var_r4;
    
    if (arg0 < 0) {
        arg0 = -arg0;
    }
    if (arg1 < 0) {
        arg1 = -arg1;
    }
    
    if (arg0 > arg1) {
        temp_r3 = arg0;
        temp_r4 = arg1;
    } else {
        temp_r3 = arg1;
        temp_r4 = arg0;
    }
    
    temp_r5 = temp_r3 >> 1;
    temp_r6 = temp_r4 >> 1;
    
    temp_r7 = 0;
    
    while (temp_r3 != 0) {
        if ((temp_r3 & 1) != 0) {
            temp_r7 += temp_r4;
        }
        
        temp_r3 >>= 1;
        temp_r4 <<= 1;
        
        if (temp_r3 == 0) {
            break;
        }
    }
    
    var_r3 = temp_r7;
    var_r4 = temp_r6;
    
    return temp_r5 + temp_r6 + var_r3 + var_r4;
}

s32 fn_80259584(u16 gid, u16 sid, s32 arg2, s32 arg3, s32 arg4) {
    extern GroupNode *lbl_80368A60;
    s32 fn_80243FB8(void *, void *, GroupItem *, s32, s32, s32, u16);
    s32 ret;
    GroupNode *node;
    s32 i;
    GroupData *data;
    u32 base;
    GroupItem *item;
    void *b;
    void *a;

    for (node = lbl_80368A60; node != NULL; node = node->next) {
        for (i = 0; i < node->count; i++) {
            if (node->entries[i].data->id == gid) {
                data = node->entries[i].data;
                if (data->type == 0) {
                    base = node->entries[i].base;
                    a = (void *)(base + data->unk1C);
                    b = (void *)(base + data->unk20);
                    for (item = (GroupItem *)(base + data->unk24); item->id != 0xFFFF; item++) {
                        if (item->id == sid) {
                            fn_8026372C();
                            ret = fn_80243FB8(a, b, item, arg2, arg3, arg4, gid);
                            fn_802636F4();
                            goto done;
                        }
                    }
                    ret = -1;
                } else {
                    ret = -1;
                }
                goto done;
            }
        }
    }
    ret = -1;
done:
    return ret;
}

s32 fn_802596A8(u8 arg0, u8 arg1, s32 arg2) {
extern u8 lbl_80368AD2, lbl_80368AD1;
extern u8 *lbl_80368A88, *lbl_80368A98, *lbl_80368AA0, *lbl_80368A9C, *lbl_80368A94;
extern s32 lbl_80368A68;
extern u8 lbl_8035B838[];
void *fn_802637D0(u32); void *fn_802637A4(u32);
s32 fn_80262AD0(void); void fn_80259A94(s32,s32,s32); void fn_80259A5C(void);
void fn_8020516C(void *,u16);
void DCFlushRange(void *,u32); void DCFlushRangeNoSync(void *,u32); void DCInvalidateRange(void *,u32);
u32 i; u32 off; u8 *p; u8 *studio;
lbl_80368AD2=arg0; lbl_80368AD1=arg1;
lbl_80368A68=fn_80262AD0();
if (!(lbl_80368A88=fn_802637D0(0x800))) goto fail;
if (!(lbl_80368A98=fn_802637D0(0x280))) goto fail;
memset(lbl_80368A98,0,0x280); DCFlushRange(lbl_80368A98,0x280);
if (!(lbl_80368AA0=fn_802637A4(lbl_80368AD2*0xF8))) goto fail;
if (!(lbl_80368A9C=fn_802637D0(lbl_80368AD2*0x40))) goto fail;
DCInvalidateRange(lbl_80368A9C,lbl_80368AD2*0x40);
p=lbl_80368A9C;
for(i=0,off=0;i<lbl_80368AD2;off+=0xF8,i++) {
lbl_80368AA0[off+240]=0;
lbl_80368AA0[off+241]=0;
lbl_80368AA0[off+242]=0;
lbl_80368AA0[off+232]=255;
lbl_80368AA0[off+233]=255;
lbl_80368AA0[off+234]=255;
lbl_80368AA0[off+235]=255;
*(void **)(lbl_80368AA0+off)=fn_802637D0(0xC4);
memset(*(void **)(lbl_80368AA0+off),0,0xC4);
*(void **)(lbl_80368AA0+off+4)=fn_802637D0(0x80);
*(u16 *)(*(u8 **)(lbl_80368AA0+off)+4)=(u32)*(void **)(lbl_80368AA0+off)>>16;
*(u16 *)(*(u8 **)(lbl_80368AA0+off)+6)=(u32)*(void **)(lbl_80368AA0+off);
*(u16 *)(*(u8 **)(lbl_80368AA0+off)+0x4E)=(u32)*(void **)(lbl_80368AA0+off+4)>>16;
*(u16 *)(*(u8 **)(lbl_80368AA0+off)+0x50)=(u32)*(void **)(lbl_80368AA0+off+4);
*(u16 *)(*(u8 **)(lbl_80368AA0+off)+0x38)=(u32)p>>16;
*(u16 *)(*(u8 **)(lbl_80368AA0+off)+0x3A)=(u32)p;
*(u8 **)(lbl_80368AA0+off+8)=p; p+=0x40;
*(s32 *)(lbl_80368AA0+off+0xEC)=-1;
fn_8020516C(*(void **)(lbl_80368AA0+off),0xC4);
*(u32 *)(lbl_80368AA0+off+36)=0;
*(u32 *)(lbl_80368AA0+off+40)=0;
*(u32 *)(lbl_80368AA0+off+44)=0;
*(u32 *)(lbl_80368AA0+off+48)=0;
*(u32 *)(lbl_80368AA0+off+52)=0;
}
for(off=0,i=(u32)lbl_8035B838;off<lbl_80368AD1;i+=0xBC,off++) {
((u8 *)i)[0x50]=0;
if (!(*(void **)i=fn_802637D0(0x36))) return 0;
if (!(*(void **)(i+0x28)=fn_802637D0(0x3C00))) return 0;
memset(*(void **)(i+0x28),0,0x3C00);
DCFlushRangeNoSync(*(void **)(i+0x28),0x3C00);
*(u8 **)(i+44)=*(u8 **)(i+40)+0x780;
*(u8 **)(i+48)=*(u8 **)(i+44)+0x780;
*(u8 **)(i+52)=*(u8 **)(i+48)+0x780;
*(u8 **)(i+56)=*(u8 **)(i+52)+0x780;
*(u8 **)(i+60)=*(u8 **)(i+56)+0x780;
*(u8 **)(i+64)=*(u8 **)(i+60)+0x780;
*(u8 **)(i+68)=*(u8 **)(i+64)+0x780;
memset(*(void **)i,0,0x36);
*(u32 *)(i+12)=0;
*(u32 *)(i+8)=0;
*(u32 *)(i+4)=0;
*(u32 *)(i+24)=0;
*(u32 *)(i+20)=0;
*(u32 *)(i+16)=0;
*(u32 *)(i+36)=0;
*(u32 *)(i+32)=0;
*(u32 *)(i+28)=0;
DCFlushRangeNoSync(*(void **)i,0x36);
}
fn_80259A94(0,1,arg2!=0);
if (!(lbl_80368A94=fn_802637D0(0x100))) return 0;
fn_80259A5C(); return 1;
fail: return 0;
}

void fn_80259A5C(void) {
    M2C_UNK DCFlushRangeNoSync(s32, M2C_UNK);
    M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
    extern s32 lbl_80368A94;
    memset(lbl_80368A94, 0, 0x100);
    DCFlushRangeNoSync(lbl_80368A94, 0x100);
}

s32 fn_80259BE4(s16 *arg0, u16 *arg1, u16 *arg2, u16 arg3, u16 *arg4, u16 arg5) {
    s16 diff;
    s16 idx;

    if (arg3 != *arg2) {
        diff = (s16)arg3 - (s16)*arg2;
        if (diff >= 0x20 && diff < 0xA0) {
            idx = (s16)(diff >> 5);
            if (idx < 5) {
                arg4[idx] |= arg5;
            }
            *arg1 = 1;
            *arg2 += idx << 5;
            return 1;
        }
        if (diff <= -0x20 && diff > -0xA0) {
            idx = (s16)(-diff >> 5);
            if (idx < 5) {
                arg4[idx] |= arg5;
            }
            *arg1 = 0xFFFF;
            *arg2 -= idx << 5;
            return 1;
        }
        if (arg3 == 0 && diff > -0x20) {
            *arg2 = 0;
            *arg0 = 0;
        }
    }
    *arg1 = 0;
    return 0;
}

void fn_80259CD8(u16 *arg0, u16 *arg1, s16 arg2) {
    *arg0 = (arg2 - (s16) *arg1) / 160;
    *arg1 += (s16) *arg0 * 0xA0;
}

void fn_80259D20(void *arg0)
{
    u32 temp_r4;
    u32 var_r5;

    if (*(u32 *)((char *)arg0 + 0x8C) == 0U) {
        if (*(u16 *)((char *)*(void **)arg0 + 8) != 2) {
            var_r5 = *(s32 *)((char *)arg0 + 0xE4) << 5;
        } else {
            var_r5 = 0x200000;
        }
        temp_r4 = *(u32 *)((char *)arg0 + 0xE0);
        *(u32 *)((char *)arg0 + 0xE0) = (u32)(temp_r4 + (var_r5 << 16));
        if (temp_r4 > *(u32 *)((char *)arg0 + 0xE0)) {
            temp_r4 = *(u32 *)((char *)arg0 + 0xDC);
            temp_r4 = (var_r5 >> 16) + temp_r4;
            *(u32 *)((char *)arg0 + 0xDC) = temp_r4 + 1;
            return;
        }
        *(u32 *)((char *)arg0 + 0xDC) =
            *(u32 *)((char *)arg0 + 0xDC) + (var_r5 >> 16);
    }
}

void fn_80259D94(s32 *arg0, s16 *arg1, s32 *arg2) {
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r0;

    temp_r0 = *arg2;
    if (temp_r0 <= -0xA0) {
        if (temp_r0 <= -0xC80) {
            var_r0 = 0x14;
        } else {
            var_r0 = (s16) (-temp_r0 / 160);
        }
        *arg1 = var_r0;
    } else if (temp_r0 >= 0xA0) {
        if (temp_r0 >= 0xC80) {
            var_r0_2 = -0x14;
        } else {
            var_r0_2 = (s16) (-temp_r0 / 160);
        }
        *arg1 = var_r0_2;
    } else {
        *arg1 = 0;
    }
    *arg0 = *arg2;
    *arg2 += *arg1 * 0xA0;
}

void fn_80259E40(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_r5_4;
    s32 var_r5_5;
    s32 var_r5_6;
    s32 var_r5_7;
    s32 var_r5_8;
    void *temp_r4;

    M2C_FIELD(arg1, s8 *, 0xF1) = 0;
    M2C_FIELD(M2C_FIELD(arg1, void **, 0), s16 *, 0xE) = 0;
    temp_r4 = M2C_FIELD(arg1, void **, 0);
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 1) {
        var_r5 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + (s16) M2C_FIELD(temp_r4, u16 *, 0x52));
        temp_r0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_r0 > 0x7FFFFF) {

        } else {
            var_r5 = -0x7FFFFF;
            if (temp_r0 < 0xFF800001) {

            } else {
                var_r5 = temp_r0;
            }
        }
        M2C_FIELD(arg0, s32 *, 4) = var_r5;
    }
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 2) {
        var_r5_2 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + (s16) M2C_FIELD(temp_r4, u16 *, 0x58));
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r0_2 > 0x7FFFFF) {

        } else {
            var_r5_2 = -0x7FFFFF;
            if (temp_r0_2 < 0xFF800001) {

            } else {
                var_r5_2 = temp_r0_2;
            }
        }
        M2C_FIELD(arg0, s32 *, 8) = var_r5_2;
    }
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 4) {
        var_r5_3 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + (s16) M2C_FIELD(temp_r4, u16 *, 0x5E));
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_r0_3 > 0x7FFFFF) {

        } else {
            var_r5_3 = -0x7FFFFF;
            if (temp_r0_3 < 0xFF800001) {

            } else {
                var_r5_3 = temp_r0_3;
            }
        }
        M2C_FIELD(arg0, s32 *, 0xC) = var_r5_3;
    }
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 0x10) {
        var_r5_4 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + (s16) M2C_FIELD(temp_r4, u16 *, 0x54));
        temp_r0_4 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_r0_4 > 0x7FFFFF) {

        } else {
            var_r5_4 = -0x7FFFFF;
            if (temp_r0_4 < 0xFF800001) {

            } else {
                var_r5_4 = temp_r0_4;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x10) = var_r5_4;
    }
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 0x20) {
        var_r5_5 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + (s16) M2C_FIELD(temp_r4, u16 *, 0x5A));
        temp_r0_5 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_r0_5 > 0x7FFFFF) {

        } else {
            var_r5_5 = -0x7FFFFF;
            if (temp_r0_5 < 0xFF800001) {

            } else {
                var_r5_5 = temp_r0_5;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x14) = var_r5_5;
    }
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 0x80) {
        var_r5_6 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + (s16) M2C_FIELD(temp_r4, u16 *, 0x60));
        temp_r0_6 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_r0_6 > 0x7FFFFF) {

        } else {
            var_r5_6 = -0x7FFFFF;
            if (temp_r0_6 < 0xFF800001) {

            } else {
                var_r5_6 = temp_r0_6;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x18) = var_r5_6;
    }
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 0x200) {
        var_r5_7 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + (s16) M2C_FIELD(temp_r4, u16 *, 0x56));
        temp_r0_7 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_r0_7 > 0x7FFFFF) {

        } else {
            var_r5_7 = -0x7FFFFF;
            if (temp_r0_7 < 0xFF800001) {

            } else {
                var_r5_7 = temp_r0_7;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = var_r5_7;
    }
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 0x400) {
        var_r5_8 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + (s16) M2C_FIELD(temp_r4, u16 *, 0x5C));
        temp_r0_8 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r0_8 > 0x7FFFFF) {

        } else {
            var_r5_8 = -0x7FFFFF;
            if (temp_r0_8 < 0xFF800001) {

            } else {
                var_r5_8 = temp_r0_8;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r5_8;
    }
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 0x1000) {
        var_r4 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + (s16) M2C_FIELD(temp_r4, u16 *, 0x62));
        temp_r0_9 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_r0_9 > 0x7FFFFF) {

        } else {
            var_r4 = -0x7FFFFF;
            if (temp_r0_9 < 0xFF800001) {

            } else {
                var_r4 = temp_r0_9;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x24) = var_r4;
    }
}

void fn_8025A14C(void **arr, s32 lo, s32 hi) {
    s32 mid;
    s32 store;
    s32 j;
    s32 left_hi;
    s32 right_lo;
    s32 store4;
    void **p;
    void **q;
    void **store_ptr;
    void *tmp;
    void *pivot;
    void *t;
    void **arr_save;
    s32 hi_save;

    arr_save = arr;
    hi_save = hi;
    if (lo >= hi_save) {
        return;
    }

    mid = lo + hi_save;
    mid = (s32)((u32)mid + ((u32)mid >> 31)) >> 1;
    p = &arr_save[lo];
    tmp = *p;
    *p = arr_save[mid];
    arr_save[mid] = tmp;

    store = lo;
    q = p;
    j = lo + 1;
    for (; j <= hi_save; j++) {
        t = arr_save[j];
        pivot = *p;
        if (*(u32 *)((u8 *)t + 0x1C) < *(u32 *)((u8 *)pivot + 0x1C)) {
            tmp = q[1];
            store += 1;
            q += 1;
            *q = t;
            arr_save[j] = tmp;
        }
    }

    left_hi = store - 1;
    store4 = store << 2;
    store_ptr = (void **)((u8 *)arr_save + store4);
    tmp = *p;
    *p = *store_ptr;
    *store_ptr = tmp;

    if (lo < left_hi) {
        mid = store + lo;
        mid = mid - 1;
        mid = (s32)((u32)mid + ((u32)mid >> 31)) >> 1;
        tmp = *p;
        *p = arr_save[mid];
        arr_save[mid] = tmp;

        right_lo = lo;
        q = p;
        j = lo + 1;
        for (; j <= left_hi; j++) {
            t = arr_save[j];
            pivot = *p;
            if (*(u32 *)((u8 *)t + 0x1C) < *(u32 *)((u8 *)pivot + 0x1C)) {
                tmp = q[1];
                right_lo += 1;
                q += 1;
                *q = t;
                arr_save[j] = tmp;
            }
        }

        tmp = *p;
        *p = arr_save[right_lo];
        arr_save[right_lo] = tmp;

        fn_8025A14C(arr_save, lo, right_lo - 1);
        fn_8025A14C(arr_save, right_lo + 1, store - 1);
    }

    right_lo = store + 1;
    if (right_lo < hi_save) {
        p = store_ptr;
        mid = store + hi_save;
        mid = mid + 1;
        mid = (s32)((u32)mid + ((u32)mid >> 31)) >> 1;
        tmp = p[1];
        p[1] = arr_save[mid];
        arr_save[mid] = tmp;

        q = &arr_save[right_lo];
        j = store + 2;
        for (; j <= hi_save; j++) {
            t = arr_save[j];
            pivot = p[1];
            if (*(u32 *)((u8 *)t + 0x1C) < *(u32 *)((u8 *)pivot + 0x1C)) {
                tmp = q[1];
                right_lo += 1;
                q += 1;
                *q = t;
                arr_save[j] = tmp;
            }
        }

        tmp = p[1];
        p[1] = arr_save[right_lo];
        arr_save[right_lo] = tmp;

        fn_8025A14C(arr_save, store + 1, right_lo - 1);
        fn_8025A14C(arr_save, right_lo + 1, hi_save);
    }
}

#pragma use_lmw_stmw on
void fn_8025A3A4(void *arg0, u32 arg1) {
    void fn_80259E40(void *, void *);
    void fn_8025C99C(void *, s32);
    void fn_8025CA80(void *);
    void fn_8020516C(void *, u16);
    extern u8 *lbl_80368A88;
    extern u32 lbl_80368A6C;
    extern u8 *lbl_80368A80;
    extern u8 *lbl_80368A78;
    extern u8 *lbl_80368A7C;
    extern u32 lbl_80368A90;
    extern u32 lbl_80368A8C;
    extern u8 lbl_8035B838[];
    extern void *lbl_80368A70;
    extern u16 lbl_80368A74;
    extern u16 lbl_80368A84;
    u32 tick;
    u8 *aux;
    u8 *studio;
    void *voice;
    void *next;
    u16 pad0;
    u8 studioIdx;
    u8 *studioBase;
    void *saved;
    u32 tmp;
    u32 len;

    saved = arg0;
    aux = lbl_80368A88;
    lbl_80368A6C = 0;
    lbl_80368A80 = aux;
    lbl_80368A78 = aux;
    lbl_80368A7C = aux + 0x180;
    if (arg1 < 0xC8) {
        tick = 0x28BE;
    } else {
        tmp = *(u32 *)0x800000F8;
        tmp = ((u32)(((u64)(tmp) * 0x51EB851Fu) >> 32)) >> 7;
        tmp = ((u32)(((u64)(tmp) * 0xD1B71759u) >> 32)) >> 12;
        tick = (arg1 - 0xC8) * tmp + 0x28BE;
    }
    if (lbl_80368A90 != 0) {
        tick += 0xAFC8;
    }
    if (lbl_80368A8C != 0) {
        tick += 0xBB8;
    }
    pad0 = 0;
    studioBase = lbl_8035B838;
    studioIdx = 0;
    for (;;) {
        studio = studioBase + studioIdx * 0xBC;
        if (studio[0x50] != 1) {
            break;
        }
        voice = *(void **)(studio + 0x48);
        while (voice != NULL) {
            next = *(void **)((u8 *)voice + 0xC);
            if (*(u8 *)((u8 *)voice + 0xF1) == 0) {
                if ((*(u32 *)((u8 *)voice + 0x24) & 0x20) != 0) {
                    fn_80259E40(studio, voice);
                }
            } else {
                if ((u32)(*(u32 *)((u8 *)voice + 0xEC) + 0x10000) != 0xFFFFU) {
                    fn_8025C99C(voice, 3);
                }
                if (*(u8 *)((u8 *)voice + 0xF0) == 1) {
                    if (*(u8 *)((u8 *)voice + 0xF2) != 0) {
                        fn_8025CA80(voice);
                        *(u8 *)((u8 *)voice + 0xF2) = 0;
                    }
                }
            }
            voice = next;
        }
        voice = *(void **)(studio + 0x4C);
        while (voice != NULL) {
            next = *(void **)((u8 *)voice + 0x14);
            fn_80259E40(studio, voice);
            voice = next;
        }
        *(u32 *)(studio + 0x4C) = 0;
        if (lbl_80368A80 + 6 > lbl_80368A7C - 8) {
            *(u16 *)lbl_80368A80 = 0xD;
            *(u16 *)(lbl_80368A80 + 2) = (u16)((u32)lbl_80368A7C >> 16);
            *(u16 *)(lbl_80368A80 + 4) = (u16)(u32)lbl_80368A7C;
            len = (u32)(lbl_80368A80 + 8) - (u32)lbl_80368A78;
            len = (len + 3) & 0xFFFC;
            if (lbl_80368A6C != 0) {
                *(u16 *)((u8 *)lbl_80368A6C + 6) = (u16)len;
                fn_8020516C(lbl_80368A70, lbl_80368A74);
            } else {
                lbl_80368A84 = (u16)len;
            }
            lbl_80368A6C = (u32)lbl_80368A80;
            lbl_80368A74 = (u16)len;
            lbl_80368A70 = lbl_80368A78;
            lbl_80368A80 = lbl_80368A7C;
            lbl_80368A78 = lbl_80368A7C;
            lbl_80368A7C = lbl_80368A7C + 0x180;
        }
        *(u16 *)lbl_80368A80 = 0;
        *(u16 *)(lbl_80368A80 + 2) = (u16)(*(u32 *)studio >> 16);
        *(u16 *)(lbl_80368A80 + 4) = (u16)*(u32 *)studio;
        lbl_80368A80 += 6;
        tick += 0x2C62;
        studioIdx++;
        if (studioIdx > 10) {
            break;
        }
    }
    (void)saved;
    (void)pad0;
    (void)tick;
}

s32 fn_8025C99C(void *arg0, s32 arg1)
{
    extern u32 lbl_80368AA4;

    s32 (*callback)(s32, s32);

    callback = (s32 (*)(s32, s32))lbl_80368AA4;

    if (callback == 0) {
        return 0;
    }

    return callback(arg1, *(s32 *)((u8 *)arg0 + 0x18));
}

#pragma use_lmw_stmw reset
void fn_8025C9E0(void *arg0, u8 arg1) {
    void fn_8025CA80(void);
    extern u8 lbl_8035B838[];
    void *temp_r0;
    u8 *temp_r4;

    if (((u8 *)arg0)[0xF0] != 0) {
        fn_8025CA80();
        *(s32 *)((char *)arg0 + 0x24) |= 0x20;
    }
    ((u8 *)arg0)[0xF1] = 0;
    temp_r4 = lbl_8035B838 + arg1 * 0xBC;
    temp_r0 = *(void **)(temp_r4 + 0x48);
    *(void **)((char *)arg0 + 0xC) = temp_r0;
    if (temp_r0 != NULL) {
        *(void **)((char *)temp_r0 + 0x10) = arg0;
    }
    *(s32 *)((char *)arg0 + 0x10) = 0;
    temp_r4 = temp_r4 + 0x48;
    *(void **)temp_r4 = arg0;
    ((u8 *)arg0)[0xF2] = 0;
    ((u8 *)arg0)[0xF0] = 1;
    ((u8 *)arg0)[0xF3] = arg1;
}

void fn_8025CA80(void *arg0) {
    extern u8 lbl_8035B838[];
    void *temp_r4;

    if ((u8) M2C_FIELD(arg0, u8 *, 0xF0) != 0) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x10);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0xC);
        } else {
            M2C_FIELD((void *)(lbl_8035B838 + (u32)(u8)M2C_FIELD(arg0, u8 *, 0xF3) * 0xBC), void **, 0x48) = (void *) M2C_FIELD(arg0, void **, 0xC);
        }
        temp_r4 = (void *) M2C_FIELD(arg0, void **, 0xC);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0x10);
        }
        M2C_FIELD(arg0, u8 *, 0xF0) = 0U;
    }
}

f64 fn_802387A8(f64, f64);
#pragma fp_contract off
void fn_8025CC38(u8 arg0, f32 *out, u32 arg2, u32 arg3, u32 arg4, u32 arg5, f32 fx, f32 fy, f32 fz) {
    extern f32 lbl_8029FF7C[];
    extern f32 lbl_802A1BD8[];
    extern f32 lbl_8036C2A8;
    extern f32 lbl_8036C2AC;
    extern f32 lbl_8036C2B0;
    extern f32 lbl_8036C2C0;
    extern f64 lbl_8036C2C8;
    extern f32 lbl_8036C2D0;
    extern f32 lbl_8036C2D4;
    extern f32 lbl_8036C2D8;
    f32 *tbl;
    f32 *base;
    f32 f24, f20;
    f32 f26, f25, f30, f29, f28, f27, f23;
    f32 f31v, f21v, f22v;
    s32 r29, r28, r22, r23, r24, r26i;
    f32 *t204;
    f32 *t208;
    f32 *t214;
    s32 idx;
    f32 t, a, b, c, d, e, u, v;
    u32 xa, xb;

    tbl = lbl_8029FF7C;
    f22v = fx;
    f31v = fy;
    f21v = fz;
    base = lbl_802A1BD8;
    if (arg0 == 0) {
        tbl = base;
    }
    if (arg2 == 0x80000000) {
        arg2 = 0;
        arg3 = 0x7F0000;
    }
    xa = (arg2 < 0x10000U) ? 0 : (arg2 - 0x10000U);
    xb = (arg3 < 0x10000U) ? 0 : (arg3 - 0x10000U);
    f24 = lbl_8036C2C0 * (f32)xa;
    f20 = lbl_8036C2C0 * (f32)xb;

    f26 = 0.0f;
    f25 = 0.0f;
    r29 = 0;
    r28 = 0;
    if (arg5 != 0) {
        f26 = (f32)fn_802387A8(f24, lbl_8036C2C8);
        r29 = fn_8022C568(f24);
        f23 = lbl_8036C2D0 - f24;
        f25 = (f32)fn_802387A8(f23, lbl_8036C2C8);
        r28 = fn_8022C568(f23);
    }
    if (arg4 != 0) {
        f24 = lbl_8036C2AC + (lbl_8036C2D4 * (f24 - lbl_8036C2AC));
    }
    f30 = (f32)fn_802387A8(f24, lbl_8036C2C8);
    r22 = fn_8022C568(f24);
    f29 = (f32)fn_802387A8(f20, lbl_8036C2C8);
    r23 = fn_8022C568(f20);
    f23 = lbl_8036C2D0 - f24;
    f20 = lbl_8036C2D0 - f20;
    f28 = (f32)fn_802387A8(f23, lbl_8036C2C8);
    r24 = fn_8022C568(f23);
    f27 = (f32)fn_802387A8(f20, lbl_8036C2C8);
    r26i = fn_8022C568(f20);

    if (arg5 == 0) {
        f20 = lbl_8036C2A8 * f22v;
        idx = fn_8022C568(f20);
        t204 = base + (0x204 / 4);
        t208 = t204 + 1;
        f26 = lbl_8036C2AC - f29;
        t = f20 - (f32)(u32)idx;
        u = (lbl_8036C2AC - t) * tbl[idx];
        v = t * tbl[idx + 1];
        a = u + v;
        f25 = lbl_8036C2A8 * f31v;
        f31v = lbl_8036C2AC - f27;
        f24 = lbl_8036C2AC - f30;
        f23 = lbl_8036C2AC - f28;
        u = f26 * t204[r23];
        v = f29 * t208[r23];
        b = u + v;
        out[2] = lbl_8036C2B0 * (a * b);
        u = f31v * t204[r26i];
        v = f27 * t208[r26i];
        c = u + v;
        a = a * c;
        u = f24 * t204[r22];
        v = f30 * t208[r22];
        out[1] = a * (u + v);
        u = f23 * t204[r24];
        v = f28 * t208[r24];
        out[0] = a * (u + v);

        idx = fn_8022C568(f25);
        f22v = lbl_8036C2A8 * f21v;
        t = f25 - (f32)(u32)idx;
        u = (lbl_8036C2AC - t) * tbl[idx];
        v = t * tbl[idx + 1];
        a = u + v;
        u = f26 * t204[r23];
        v = f29 * t208[r23];
        out[5] = lbl_8036C2B0 * (a * (u + v));
        u = f31v * t204[r26i];
        v = f27 * t208[r26i];
        a = a * (u + v);
        u = f24 * t204[r22];
        v = f30 * t208[r22];
        out[4] = a * (u + v);
        u = f23 * t204[r24];
        v = f28 * t208[r24];
        out[3] = a * (u + v);

        idx = fn_8022C568(f22v);
        t = f22v - (f32)(u32)idx;
        u = (lbl_8036C2AC - t) * tbl[idx];
        v = t * tbl[idx + 1];
        a = u + v;
        u = f26 * t204[r23];
        v = f29 * t208[r23];
        out[8] = lbl_8036C2B0 * (a * (u + v));
        u = f31v * t204[r26i];
        v = f27 * t208[r26i];
        a = a * (u + v);
        u = f24 * t204[r22];
        v = f30 * t208[r22];
        out[7] = a * (u + v);
        u = f23 * t204[r24];
        v = f28 * t208[r24];
        out[6] = a * (u + v);
    } else {
        f20 = lbl_8036C2A8 * f22v;
        idx = fn_8022C568(f20);
        t204 = base + (0x204 / 4);
        t208 = t204 + 1;
        t214 = base + (0x214 / 4);
        f23 = lbl_8036C2AC - f29;
        f24 = lbl_8036C2AC - f27;
        t = f20 - (f32)(u32)idx;
        u = (lbl_8036C2AC - t) * tbl[idx];
        v = t * tbl[idx + 1];
        a = u + v;
        f21v = lbl_8036C2AC - f30;
        u = f23 * t204[r23];
        v = f29 * t208[r23];
        b = u + v;
        c = a * b;
        u = f24 * t204[r26i];
        v = f27 * t208[r26i];
        d = a * (u + v);
        e = lbl_8036C2AC - f28;
        f22v = lbl_8036C2A8 * f31v;
        u = f21v * t204[r22];
        v = f30 * t208[r22];
        out[1] = d * (u + v);
        u = e * t204[r24];
        v = f28 * t208[r24];
        out[0] = d * (u + v);
        u = (lbl_8036C2AC - f26) * t214[r29];
        v = f26 * t208[r29];
        out[7] = c * (u + v);
        u = (lbl_8036C2AC - f25) * t214[r28];
        v = f25 * t208[r28];
        out[6] = c * (u + v);

        idx = fn_8022C568(f22v);
        t = f22v - (f32)(u32)idx;
        u = (lbl_8036C2AC - t) * tbl[idx];
        v = t * tbl[idx + 1];
        a = u + v;
        u = f23 * t204[r23];
        v = f29 * t208[r23];
        out[5] = lbl_8036C2B0 * (a * (u + v));
        u = f24 * t204[r26i];
        v = f27 * t208[r26i];
        a = a * (u + v);
        u = f21v * t204[r22];
        v = f30 * t208[r22];
        out[4] = a * (u + v);
        u = e * t204[r24];
        v = f28 * t208[r24];
        out[3] = a * (u + v);
        out[2] = lbl_8036C2D8;
        out[8] = lbl_8036C2D8;
    }
}
#pragma fp_contract on
void fn_8025D328(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6) {
    extern f32 lbl_8036C2E0;
    extern f32 lbl_8036C2E4;
    extern f64 lbl_8036C2E8;
    extern f64 lbl_8036C2F0;
    extern f32 lbl_8036C2F8;
    extern f32 lbl_8036C2FC;
    extern f32 lbl_8036C300;
    extern f32 lbl_8036C304;
    extern void *lbl_80368AB8;
    extern void (*lbl_80368AA8)(void *, void *, void *, void *, void *, void *, f32 *, f32 *);
    extern u8 lbl_80368AAF;
    void fn_8025ED88(void *, void *, f32 *);
    void fn_8025EE34(f32 *);
    f64 __frsqrte(f64);

    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f31;
    f32 var_f29;
    f32 var_f25;
    f32 var_f26;
    f32 var_f28;
    f32 var_f27;
    f32 var_f30;
    f32 var_f24;
    f32 temp_f6;
    f32 temp_f4;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f0;
    f32 temp_f5;
    f32 temp_f8;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f1;
    f32 var_f5;
    f64 temp_f1d;
    f64 temp_f1d2;
    f64 temp_f1d3;
    u32 var_r30;
    void *var_r31;
    s32 temp_r3;

    temp_f31 = lbl_8036C2E0;
    *arg1 = temp_f31;
    var_f29 = temp_f31;
    var_f25 = lbl_8036C2E4;
    *arg2 = lbl_8036C2E4;
    var_f26 = lbl_8036C2E4;
    var_f28 = temp_f31;
    var_f27 = temp_f31;
    var_r31 = lbl_80368AB8;
    var_r30 = 0;
    while (var_r31 != NULL) {
        temp_f6 = *(f32 *)((u8 *)var_r31 + 0x18);
        temp_f4 = *(f32 *)((u8 *)arg0 + 0x10) - (*(f32 *)((u8 *)var_r31 + 0xC) + (*(f32 *)((u8 *)var_r31 + 0x28) * temp_f6));
        temp_f2 = *(f32 *)((u8 *)arg0 + 0x14) - (*(f32 *)((u8 *)var_r31 + 0x10) + (*(f32 *)((u8 *)var_r31 + 0x2C) * temp_f6));
        temp_f3 = *(f32 *)((u8 *)arg0 + 0x18) - (*(f32 *)((u8 *)var_r31 + 0x14) + (*(f32 *)((u8 *)var_r31 + 0x30) * temp_f6));
        var_f30 = (temp_f3 * temp_f3) + ((temp_f4 * temp_f4) + (temp_f2 * temp_f2));
        if (var_f30 > temp_f31) {
            temp_f1d = __frsqrte(var_f30);
            temp_f1d2 = lbl_8036C2E8 * temp_f1d * (lbl_8036C2F0 - ((f64)var_f30 * (temp_f1d * temp_f1d)));
            temp_f1d3 = lbl_8036C2E8 * temp_f1d2 * (lbl_8036C2F0 - ((f64)var_f30 * (temp_f1d2 * temp_f1d2)));
            sp10 = (f32)((f64)var_f30 * (lbl_8036C2E8 * temp_f1d3 * (lbl_8036C2F0 - ((f64)var_f30 * (temp_f1d3 * temp_f1d3)))));
            var_f30 = sp10;
        }
        temp_f0 = *(f32 *)((u8 *)arg0 + 0x28);
        if (temp_f0 >= var_f30) {
            temp_f8 = var_f30 / temp_f0;
            temp_f5 = *(f32 *)((u8 *)arg0 + 0x34);
            if (temp_f5 >= lbl_8036C2E0) {
                temp_f6 = *(f32 *)((u8 *)arg0 + 0x30);
                var_f24 = *(f32 *)((u8 *)var_r31 + 0x88) * (temp_f6 + ((*(f32 *)((u8 *)arg0 + 0x2C) - temp_f6) * (lbl_8036C2E4 - (((lbl_8036C2E4 - temp_f5) * temp_f8) + (temp_f8 * (temp_f5 * temp_f8))))));
            } else {
                temp_f7:
                ;
                {
                    f32 temp_f7 = *(f32 *)((u8 *)arg0 + 0x30);
                    f32 temp_f6b = lbl_8036C2E4 - temp_f8;
                    var_f24 = *(f32 *)((u8 *)var_r31 + 0x88) * (temp_f7 + ((*(f32 *)((u8 *)arg0 + 0x2C) - temp_f7) * (lbl_8036C2E4 - (((lbl_8036C2E4 + temp_f5) * temp_f8) - (temp_f5 * (lbl_8036C2E4 - (temp_f6b * temp_f6b)))))));
                }
            }
            if ((*(u32 *)((u8 *)arg0 + 0xC) & 0x180) && lbl_80368AA8 != NULL) {
                lbl_80368AA8(arg0, (u8 *)var_r31 + 0xC, (u8 *)var_r31 + 0x28, (u8 *)var_r31 + 0x40, (u8 *)arg0 + 0x10, (u8 *)arg0 + 0x1C, &sp14, &sp18);
                var_f24 *= lbl_8036C2E4 - sp14;
            } else {
                sp18 = lbl_8036C2E0;
            }
            if (lbl_80368AAF != 0) {
                *arg1 += var_f24;
            } else if (*arg1 < var_f24) {
                *arg1 = var_f24;
            }
            temp_r3 = *(s32 *)((u8 *)arg0 + 0xC);
            if (!(temp_r3 & 0x80000)) {
                if ((temp_r3 & 8) || (*(u32 *)((u8 *)var_r31 + 8) & 1)) {
                    temp_f2 = *(f32 *)((u8 *)var_r31 + 0x1C) - *(f32 *)((u8 *)arg0 + 0x1C);
                    temp_f4 = *(f32 *)((u8 *)var_r31 + 0x20) - *(f32 *)((u8 *)arg0 + 0x20);
                    temp_f3 = *(f32 *)((u8 *)var_r31 + 0x24) - *(f32 *)((u8 *)arg0 + 0x24);
                    var_f1 = (temp_f3 * temp_f3) + ((temp_f2 * temp_f2) + (temp_f4 * temp_f4));
                    if (var_f1 > lbl_8036C2E0) {
                        temp_f1d = __frsqrte(var_f1);
                        temp_f1d2 = lbl_8036C2E8 * temp_f1d * (lbl_8036C2F0 - ((f64)var_f1 * (temp_f1d * temp_f1d)));
                        temp_f1d3 = lbl_8036C2E8 * temp_f1d2 * (lbl_8036C2F0 - ((f64)var_f1 * (temp_f1d2 * temp_f1d2)));
                        spC = (f32)((f64)var_f1 * (lbl_8036C2E8 * temp_f1d3 * (lbl_8036C2F0 - ((f64)var_f1 * (temp_f1d3 * temp_f1d3)))));
                        var_f1 = spC;
                    }
                    if (var_f1 > lbl_8036C2E0) {
                        temp_f8 = (*(f32 *)((u8 *)arg0 + 0x10) + (*(f32 *)((u8 *)arg0 + 0x1C) * lbl_8036C2F8)) - (*(f32 *)((u8 *)var_r31 + 0xC) + (*(f32 *)((u8 *)var_r31 + 0x1C) * lbl_8036C2F8));
                        temp_f6 = (*(f32 *)((u8 *)arg0 + 0x14) + (*(f32 *)((u8 *)arg0 + 0x20) * lbl_8036C2F8)) - (*(f32 *)((u8 *)var_r31 + 0x10) + (*(f32 *)((u8 *)var_r31 + 0x20) * lbl_8036C2F8));
                        temp_f4 = (*(f32 *)((u8 *)arg0 + 0x18) + (*(f32 *)((u8 *)arg0 + 0x24) * lbl_8036C2F8)) - (*(f32 *)((u8 *)var_r31 + 0x14) + (*(f32 *)((u8 *)var_r31 + 0x24) * lbl_8036C2F8));
                        var_f5 = (temp_f4 * temp_f4) + ((temp_f8 * temp_f8) + (temp_f6 * temp_f6));
                        if (var_f5 > lbl_8036C2E0) {
                            temp_f1d = __frsqrte(var_f5);
                            temp_f1d2 = lbl_8036C2E8 * temp_f1d * (lbl_8036C2F0 - ((f64)var_f5 * (temp_f1d * temp_f1d)));
                            temp_f1d3 = lbl_8036C2E8 * temp_f1d2 * (lbl_8036C2F0 - ((f64)var_f5 * (temp_f1d2 * temp_f1d2)));
                            sp8 = (f32)((f64)var_f5 * (lbl_8036C2E8 * temp_f1d3 * (lbl_8036C2F0 - ((f64)var_f5 * (temp_f1d3 * temp_f1d3)))));
                            var_f5 = sp8;
                        }
                        if (var_f5 < var_f30) {
                            temp_f2 = *(f32 *)((u8 *)var_r31 + 0x84);
                            temp_f1 = temp_f2 - var_f1;
                            if (temp_f1 >= lbl_8036C2FC) {
                                *arg2 = temp_f2 / temp_f1;
                            } else {
                                *arg2 = lbl_8036C300 * temp_f2;
                            }
                        } else {
                            temp_f2 = *(f32 *)((u8 *)var_r31 + 0x84);
                            *arg2 = temp_f2 / (temp_f2 + var_f1);
                        }
                    }
                }
                if (lbl_8036C2E0 != var_f30) {
                    fn_8025ED88((u8 *)var_r31 + 0x4C, (u8 *)arg0 + 0x10, &sp1C);
                    if (sp24 <= lbl_8036C2E0) {
                        temp_f1 = *(f32 *)((u8 *)var_r31 + 0x7C);
                        if (-temp_f1 < sp24) {
                            var_f0 = -sp24 / temp_f1;
                        } else {
                            var_f0 = lbl_8036C2E4;
                        }
                        var_f29 += var_f0;
                    } else {
                        temp_f1 = *(f32 *)((u8 *)var_r31 + 0x80);
                        if (temp_f1 > sp24) {
                            var_f0 = -sp24 / temp_f1;
                        } else {
                            var_f0 = lbl_8036C304;
                        }
                        var_f29 += var_f0;
                    }
                    if ((lbl_8036C2E0 != sp1C) || (lbl_8036C2E0 != sp20) || (lbl_8036C2E0 != sp24)) {
                        fn_8025EE34(&sp1C);
                    }
                    var_f27 += sp1C;
                    var_f28 -= sp20;
                    if ((*(u32 *)((u8 *)arg0 + 0xC) & 0x80) && (var_f25 > lbl_8036C2E0)) {
                        var_f25 = lbl_8036C2E0;
                    }
                    if (var_f26 > sp18) {
                        var_f26 = sp18;
                    }
                } else {
                    *arg6 = lbl_8036C2E0;
                }
            }
        }
        var_r31 = *(void **)var_r31;
        var_r30 += 1;
    }
    if (var_r30 != 0) {
        *arg3 = var_f27 / (f32)var_r30;
        *arg4 = var_f28 / (f32)var_r30;
        *arg5 = var_f29 / (f32)var_r30;
    }
    temp_r3 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_r3 & 0x80) {
        if (temp_r3 & 0x100) {
            if (var_f25 < var_f26) {
                var_f0 = var_f26;
            } else {
                var_f0 = var_f25;
            }
            *arg6 = var_f0;
        } else {
            *arg6 = var_f25;
        }
    } else if (temp_r3 & 0x100) {
        *arg6 = var_f26;
    } else {
        *arg6 = lbl_8036C2E0;
    }
}
#pragma fp_contract on
void fn_8025D9A4(u16 *arg0, u32 arg1)
{
    extern s32 lbl_80368ABC;
    extern u8 lbl_80368978;

    void fn_8026372C(void);
    void fn_802636F4(void);
    void fn_8024A6F8(u32);

    u8 *current;
    u8 *next;
    u8 *previous;
    u32 flags;
    u32 handle;
    u32 i;

    current = (u8 *)lbl_80368ABC;

    while (current != 0) {
        next = *(u8 **)current;

        for (i = 0; i < arg1; i++) {
            if (*(u16 *)(current + 0x40) == arg0[i * 5]) {
                if (lbl_80368978 != 0) {
                    fn_8026372C();

                    flags = *(u32 *)(current + 0xC);

                    if (flags & 0x10000) {
                        next = *(u8 **)current;
                        previous = *(u8 **)(current + 4);

                        if (next != 0) {
                            *(u8 **)(next + 4) = previous;
                        }

                        if (previous != 0) {
                            *(u8 **)previous = next;
                        } else {
                            lbl_80368ABC = (s32)next;
                        }

                        *(u32 *)(current + 0xC) &= 0xFFFF;

                        handle = *(u32 *)(current + 0x38);

                        if (handle != 0xFFFFFFFF) {
                            fn_8024A6F8(handle);
                        }
                    }

                    fn_802636F4();
                }
            }
        }

        current = next;
    }
}

s32 fn_8025DAA0(
    void *arg0,
    f32 arg1,
    f32 arg2,
    f32 arg3,
    f32 arg4,
    f32 arg5,
    f32 arg6)
{
    extern u16 lbl_8035BF18[];
    extern u32 lbl_8035C918[];
    extern u8 lbl_80368AAD;
    extern u8 lbl_80368AAE;

    u8 *base;
    u8 *entry;
    u8 *pool;
    u8 *node;
    u8 *current;
    u8 *previous;
    u32 key;
    s32 index;
    s32 count;
    s32 nodeIndex;
    
    base = (u8 *)lbl_8035BF18;
    count = lbl_80368AAE;
    index = 0;
    key = *(u32 *)((u8 *)arg0 + 0x3C);

    while (index < count) {
        entry = base + (index << 4);

        if (*(u32 *)entry == key) {
            break;
        }

        index++;
    }

    if (index == count) {
        if (count == 0x40) {
            return 0;
        }

        entry = base + (index << 4);

        *(u32 *)(entry + 4) = 0;
        *(u32 *)(entry + 8) = 0;
        *(u16 *)(entry + 0xC) = 0;
        *(u32 *)entry = key;

        lbl_80368AAE = count + 1;
    }

    nodeIndex = lbl_80368AAD;

    if (nodeIndex == 0x40) {
        return 0;
    }

    entry = base + (index << 4);
    pool = (u8 *)lbl_8035C918;

    current = *(u8 **)(entry + 4);
    previous = current;

    if (current != 0) {
        while (current != 0) {
            if (*(f32 *)(previous + 4) < arg1) {
                break;
            }

            previous = current;
            current = *(u8 **)previous;
        }
    }

    node = pool + (nodeIndex << 5);

    *(u8 **)node = current;

    if (previous != 0) {
        *(u8 **)previous = node;
    } else {
        *(u8 **)(entry + 4) = node;
    }

    lbl_80368AAD = nodeIndex + 1;

    *(f32 *)(node + 4) = arg1;
    *(f32 *)(node + 8) = arg2;
    *(f32 *)(node + 0xC) = arg3;
    *(f32 *)(node + 0x10) = arg4;
    *(f32 *)(node + 0x14) = arg5;
    *(f32 *)(node + 0x18) = arg6;

    *(void **)(node + 0x1C) = arg0;

    return 1;
}

void fn_8025DBF4(void) {
    s32 fn_8024A34C(u16, u8, s32, s32, u8, s32);
    s32 fn_8024A430(u16);
    void fn_8024A4AC(s32, s32, s32);
    void fn_8024A590(s32, s32, s32);
    void fn_80257224(s32);
    extern u16 lbl_8035BF18[];
    extern u8 lbl_8035C318[];
    extern u8 lbl_80368AAC;
    extern u8 lbl_80368AAE;
    extern u8 lbl_80368AAF;
    extern u8 lbl_80368AB0;
    extern f32 lbl_8036C2E0;
    extern f32 lbl_8036C2E4;
    extern f32 lbl_8036C310;
    extern f32 lbl_8036C314;
    extern f32 lbl_8036C318;
    extern f32 lbl_8036C31C;
    extern f32 lbl_8036C320;
    extern f32 lbl_8036C324;

    u8 *entry;
    u8 *p_list;
    u8 *p_head;
    u8 *p_count;
    u8 *node;
    u8 *other;
    u8 *voice;
    u8 *cmd;
    u8 *list;
    u8 *cur;
    u8 *slot;
    f32 fpan;
    f32 fspan;
    f32 fvar;
    f32 ftime;
    f32 fvol;
    f32 dt;
    f32 ft;
    s32 handle;
    s32 i;
    s32 v;
    s32 tmp;
    u8 vel;
    u8 n;
    u16 w;
    u32 flags;

    if (lbl_80368AAF != 0) {
        i = 0;
        entry = (u8 *)lbl_8035BF18;
        while (i < (s32)lbl_80368AAE) {
            node = *(u8 **)(entry + 4);
            p_list = entry + 8;
            p_head = entry + 4;
            p_count = entry + 0xC;
            while (node != NULL) {
                other = *(u8 **)p_list;
                if (other != NULL && (lbl_80368AB0 == 0 || !(*(u32 *)entry & 0x80000000) ||
                    (s32)*(u16 *)p_count >= (s32)*(*(u8 **)(*(u8 **)p_head + 0x1C) + 0x43))) {
                    dt = *(f32 *)(node + 4) - *(f32 *)(other + 4);
                    if (!(dt <= lbl_8036C320)) {
                        if (dt <= lbl_8036C324) {
                            voice = *(u8 **)(node + 0x1C);
                            tmp = *(u16 *)(voice + 0x44) + 1;
                            *(u16 *)(voice + 0x44) = tmp;
                            if ((u16)tmp < 0x14) {
                                goto next1;
                            }
                        } else {
                            *(u16 *)(*(u8 **)(node + 0x1C) + 0x44) = 0;
                        }
                    } else {
                        goto next1;
                    }
                }
                voice = *(u8 **)(node + 0x1C);
                list = *(u8 **)(voice + 8);
                if (list == NULL) {
                    vel = 0xFF;
                } else {
                    cmd = *(u8 **)(list + 4);
                    n = 0;
                    vel = 0xFF;
                    while (n < *list) {
                        if (*(u16 *)cmd == 0x8000) {
                            vel = cmd[2];
                            break;
                        }
                        cmd += 4;
                        n++;
                    }
                }
                handle = fn_8024A34C(*(u16 *)(voice + 0x40), vel, 0x7F, 0x40, *(u8 *)(voice + 0x42),
                                     (*(u32 *)(voice + 0xC) >> 4) & 1);
                *(s32 *)(voice + 0x38) = handle;
                if (handle == -1) {
                    flags = *(u32 *)(voice + 0xC);
                    if (!(flags & 2)) {
                        *(u32 *)(voice + 0xC) = flags | 0x40000;
                        *(u32 *)(voice + 0xC) = *(u32 *)(voice + 0xC) & ~0x20000;
                    }
                } else {
                    flags = *(u32 *)(voice + 0xC);
                    if (!(flags & 0x20)) {
                        *(u32 *)(voice + 0xC) = flags | 0x100000;
                        *(f32 *)(voice + 0x48) = lbl_8036C2E0;
                    } else {
                        *(f32 *)(voice + 0x48) = lbl_8036C2E4;
                    }
                    ftime = *(f32 *)(node + 0x18);
                    fvar = *(f32 *)(node + 0x14);
                    fspan = *(f32 *)(node + 0x10);
                    fpan = *(f32 *)(node + 8);
                    fvol = *(f32 *)(node + 4);
                    handle = *(s32 *)(voice + 0x38);
                    if (*(u32 *)(voice + 0xC) & 0x100000) {
                        v = 0x7F;
                        tmp = (s32)(lbl_8036C314 * (*(f32 *)(voice + 0x48) * fvol));
                        if ((u8)tmp <= 0x7F) {
                            v = tmp;
                        }
                        fn_8024A4AC(handle, 7, v);
                    } else {
                        v = 0x7F;
                        ft = lbl_8036C314 * fvol;
                        tmp = (s32)ft;
                        if ((u8)tmp <= 0x7F) {
                            v = tmp;
                        }
                        fn_8024A4AC(handle, 7, v);
                    }
                    v = 0x7F;
                    ft = lbl_8036C318 * (lbl_8036C2E4 + fpan);
                    tmp = (s32)ft;
                    if ((u8)tmp <= 0x7F) {
                        v = tmp;
                    }
                    fn_8024A4AC(handle, 0xA, v);
                    v = 0x7F;
                    ft = lbl_8036C318 * (lbl_8036C2E4 - fspan);
                    tmp = (s32)ft;
                    if ((u8)tmp <= 0x7F) {
                        v = tmp;
                    }
                    fn_8024A4AC(handle, 0x83, v);
                    ft = lbl_8036C31C * fvar;
                    if (ft > lbl_8036C310) {
                        v = 0x3FFF;
                    } else {
                        v = (s32)ft;
                    }
                    fn_8024A590(handle, 0x84, v);
                    if (*(u32 *)(voice + 0xC) & 0x180) {
                        if (lbl_8036C2E0 != ftime) {
                            ft = lbl_8036C310 * ftime;
                            if (ft > lbl_8036C310) {
                                v = 0x3FFF;
                            } else {
                                v = (s32)ft;
                            }
                            fn_8024A590(handle, 0x1F, v);
                            fn_8024A4AC(handle, 0x4F, 0x7F);
                        } else {
                            fn_8024A4AC(handle, 0x4F, 0);
                        }
                    }
                    list = *(u8 **)(voice + 8);
                    if (list != NULL) {
                        cmd = *(u8 **)(list + 4);
                        n = 0;
                        while (n < *(u8 *)list) {
                            w = *(u16 *)cmd;
                            if (!(w & 0xFF00)) {
                                if (w < 0x40 || w == 0x80 || w == 0x84) {
                                    fn_8024A590(handle, (u8)w, *(u16 *)(cmd + 2));
                                } else {
                                    fn_8024A4AC(handle, (u8)w, cmd[2]);
                                }
                            }
                            cmd += 4;
                            n++;
                            list = *(u8 **)(voice + 8);
                        }
                    }
                    *(u32 *)(voice + 0xC) = *(u32 *)(voice + 0xC) & ~0x20000;
                    *(u16 *)p_count = *(u16 *)p_count + 1;
                    other = *(u8 **)p_list;
                    if (other != NULL) {
                        *(u8 **)p_list = *(u8 **)other;
                    }
                }
            next1:
                node = *(u8 **)node;
            }
            entry += 0x10;
            i++;
        }
        return;
    }

    i = 0;
    entry = (u8 *)lbl_8035BF18;
    while (i < (s32)lbl_80368AAE) {
        node = *(u8 **)(entry + 4);
        p_list = entry + 8;
        p_head = entry + 4;
        p_count = entry + 0xC;
        while (node != NULL) {
            if (*(u8 **)p_list != NULL &&
                (lbl_80368AB0 == 0 || fn_8024A430(*(u16 *)(*(u8 **)(*(u8 **)p_head + 0x1C) + 0x40)) != 0)) {
                other = *(u8 **)p_list;
                dt = *(f32 *)(node + 4) - *(f32 *)(other + 4);
                if (!(dt <= lbl_8036C320)) {
                    if (dt <= lbl_8036C324) {
                        voice = *(u8 **)(node + 0x1C);
                        tmp = *(u16 *)(voice + 0x44) + 1;
                        *(u16 *)(voice + 0x44) = tmp;
                        if ((u16)tmp < 0x14) {
                            goto next2;
                        }
                    } else {
                        *(u16 *)(*(u8 **)(node + 0x1C) + 0x44) = 0;
                    }
                    other = *(u8 **)p_list;
                    fn_80257224(*(s32 *)(*(u8 **)(other + 8) + 0x38));
                    *(u8 **)p_list = *(u8 **)other;
                    *(u16 *)p_count = *(u16 *)p_count - 1;
                } else {
                    goto next2;
                }
            }
            voice = *(u8 **)(node + 0x1C);
            list = *(u8 **)(voice + 8);
            if (list == NULL) {
                vel = 0xFF;
            } else {
                cmd = *(u8 **)(list + 4);
                n = 0;
                vel = 0xFF;
                while (n < *list) {
                    if (*(u16 *)cmd == 0x8000) {
                        vel = cmd[2];
                        break;
                    }
                    cmd += 4;
                    n++;
                }
            }
            handle = fn_8024A34C(*(u16 *)(voice + 0x40), vel, 0x7F, 0x40, *(u8 *)(voice + 0x42),
                                 (*(u32 *)(voice + 0xC) >> 4) & 1);
            *(s32 *)(voice + 0x38) = handle;
            if (handle == -1) {
                flags = *(u32 *)(voice + 0xC);
                if (!(flags & 2)) {
                    *(u32 *)(voice + 0xC) = flags | 0x40000;
                    *(u32 *)(voice + 0xC) = *(u32 *)(voice + 0xC) & ~0x20000;
                }
            } else {
                flags = *(u32 *)(voice + 0xC);
                if (!(flags & 0x20)) {
                    *(u32 *)(voice + 0xC) = flags | 0x100000;
                    *(f32 *)(voice + 0x48) = lbl_8036C2E0;
                } else {
                    *(f32 *)(voice + 0x48) = lbl_8036C2E4;
                }
                ftime = *(f32 *)(node + 0x18);
                fvar = *(f32 *)(node + 0x14);
                fspan = *(f32 *)(node + 0x10);
                fpan = *(f32 *)(node + 8);
                fvol = *(f32 *)(node + 4);
                handle = *(s32 *)(voice + 0x38);
                if (*(u32 *)(voice + 0xC) & 0x100000) {
                    v = 0x7F;
                    tmp = (s32)(lbl_8036C314 * (*(f32 *)(voice + 0x48) * fvol));
                    if ((u8)tmp <= 0x7F) {
                        v = tmp;
                    }
                    fn_8024A4AC(handle, 7, v);
                } else {
                    v = 0x7F;
                    ft = lbl_8036C314 * fvol;
                    tmp = (s32)ft;
                    if ((u8)tmp <= 0x7F) {
                        v = tmp;
                    }
                    fn_8024A4AC(handle, 7, v);
                }
                v = 0x7F;
                ft = lbl_8036C318 * (lbl_8036C2E4 + fpan);
                tmp = (s32)ft;
                if ((u8)tmp <= 0x7F) {
                    v = tmp;
                }
                fn_8024A4AC(handle, 0xA, v);
                v = 0x7F;
                ft = lbl_8036C318 * (lbl_8036C2E4 - fspan);
                tmp = (s32)ft;
                if ((u8)tmp <= 0x7F) {
                    v = tmp;
                }
                fn_8024A4AC(handle, 0x83, v);
                ft = lbl_8036C31C * fvar;
                if (ft > lbl_8036C310) {
                    v = 0x3FFF;
                } else {
                    v = (s32)ft;
                }
                fn_8024A590(handle, 0x84, v);
                if (*(u32 *)(voice + 0xC) & 0x180) {
                    if (lbl_8036C2E0 != ftime) {
                        ft = lbl_8036C310 * ftime;
                        if (ft > lbl_8036C310) {
                            v = 0x3FFF;
                        } else {
                            v = (s32)ft;
                        }
                        fn_8024A590(handle, 0x1F, v);
                        fn_8024A4AC(handle, 0x4F, 0x7F);
                    } else {
                        fn_8024A4AC(handle, 0x4F, 0);
                    }
                }
                list = *(u8 **)(voice + 8);
                if (list != NULL) {
                    cmd = *(u8 **)(list + 4);
                    n = 0;
                    while (n < *(u8 *)list) {
                        w = *(u16 *)cmd;
                        if (!(w & 0xFF00)) {
                            if (w < 0x40 || w == 0x80 || w == 0x84) {
                                fn_8024A590(handle, (u8)w, *(u16 *)(cmd + 2));
                            } else {
                                fn_8024A4AC(handle, (u8)w, cmd[2]);
                            }
                        }
                        cmd += 4;
                        n++;
                        list = *(u8 **)(voice + 8);
                    }
                }
                *(u32 *)(voice + 0xC) = *(u32 *)(voice + 0xC) & ~0x20000;
                cur = *(u8 **)p_list;
                while (cur != NULL) {
                    if (!(*(f32 *)(cur + 4) < *(f32 *)(node + 4))) {
                        slot = lbl_8035C318 + lbl_80368AAC * 0xC;
                        *(void **)(slot + 8) = voice;
                        *(u8 **)p_list = slot;
                        *(f32 *)(slot + 4) = *(f32 *)(node + 4);
                        *(u8 **)slot = cur;
                        *(u16 *)p_count = *(u16 *)p_count + 1;
                        lbl_80368AAC += 1;
                        break;
                    }
                    cur = *(u8 **)cur;
                }
            }
        next2:
            node = *(u8 **)node;
        }
        entry += 0x10;
        i++;
    }
}

void fn_8025E4E8(void) {
    void fn_8024A6F8(u32);
    void fn_8025D328(void *, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
    s32 fn_8025DAA0(void *, f32, f32, f32, f32, f32, f32);
    s32 fn_8024A34C(u16, u8, s32, s32, u8, s32);
    s32 fn_8024B7DC(s32);
    void fn_8024A4AC(s32, u8, u8);
    void fn_8024A590(s32, u8, u16);
    void fn_8025DBF4(void);
    extern s32 lbl_80368ABC;
    extern u8 lbl_80368AC0;
    extern u8 lbl_80368AAE;
    extern u8 lbl_80368AAD;
    extern u8 lbl_80368AAC;
    extern f32 lbl_8036C2E0;
    extern f32 lbl_8036C2E4;
    extern f32 lbl_8036C310;
    extern f32 lbl_8036C314;
    extern f32 lbl_8036C318;
    extern f32 lbl_8036C31C;
    extern f32 lbl_8036C328;
    extern u16 lbl_8035BF18[];
    extern u8 lbl_8035C318[];

    f32 sp1C, sp18, sp14, sp10, spC, sp8;
    u8 *node;
    u8 *next;
    u32 flags;
    s32 handle;
    s32 i;
    s32 v;
    s32 t;
    u8 *entry;
    u8 *cur;
    u8 *prev;
    u8 *pool;
    u8 *cmd;
    u8 idx;
    u8 n;
    u8 vel;
    u16 w;
    f32 f1;

    if (lbl_80368AC0 != 0) {
        lbl_80368AC0 -= 1;
        return;
    }
    lbl_80368AC0 = 3;
    node = (u8 *)lbl_80368ABC;
    lbl_80368AAE = 0;
    lbl_80368AAD = 0;
    lbl_80368AAC = 0;

    while (node != NULL) {
        next = *(u8 **)node;
        flags = *(u32 *)(node + 0xC);

        if (flags & 0x40000) {
            if (next != NULL) {
                *(u8 **)(next + 4) = *(u8 **)(node + 4);
            }
            if (*(u8 **)(node + 4) != NULL) {
                **(u8 ***)(node + 4) = next;
            } else {
                lbl_80368ABC = (s32)next;
            }
            *(u32 *)(node + 0xC) = (u16)*(u32 *)(node + 0xC);
            handle = *(s32 *)(node + 0x38);
            if (handle != -1) {
                fn_8024A6F8(handle);
            }
        } else {
            if (flags & 0x20001) {
                fn_8025D328(node, &sp1C, &spC, &sp18, &sp14, &sp10, &sp8);
            }
            flags = *(u32 *)(node + 0xC);
            if (flags & 0x80000) {
                if (lbl_8036C2E0 != sp1C) {
                    *(u32 *)(node + 0xC) = (flags & ~0x80000) | 0x20000;
                }
            } else if (flags & 0x20000) {
                if (lbl_8036C2E0 == sp1C && (flags & 4)) {
                    *(u32 *)(node + 0xC) = (flags | 0x80000) & ~0x20000;
                    goto apply;
                }
                if (lbl_8036C2E0 == sp1C && (flags & 0x40)) {
                    if (next != NULL) {
                        *(u8 **)(next + 4) = *(u8 **)(node + 4);
                    }
                    if (*(u8 **)(node + 4) != NULL) {
                        **(u8 ***)(node + 4) = next;
                    } else {
                        lbl_80368ABC = (s32)next;
                    }
                    *(u32 *)(node + 0xC) = (u16)*(u32 *)(node + 0xC);
                    handle = *(s32 *)(node + 0x38);
                    if (handle != -1) {
                        fn_8024A6F8(handle);
                    }
                } else if (flags & 1) {
                    if (fn_8025DAA0(node, sp1C, sp18, sp14, sp10, spC, sp8) == 0) {
                        goto apply;
                    }
                } else {
                    if (*(u8 **)(node + 8) == NULL) {
                        vel = 0xFF;
                    } else {
                        cmd = *(u8 **)(*(u8 **)(node + 8) + 4);
                        n = 0;
                        vel = 0xFF;
                        while (n < **(u8 **)(node + 8)) {
                            if (*(u16 *)cmd == 0x8000) {
                                vel = cmd[2];
                                break;
                            }
                            cmd += 4;
                            n++;
                        }
                    }
                    handle = fn_8024A34C(*(u16 *)(node + 0x40), vel, 0x7F, 0x40, *(u8 *)(node + 0x42), (flags >> 4) & 1);
                    *(s32 *)(node + 0x38) = handle;
                    if (handle == -1) {
                        flags = *(u32 *)(node + 0xC);
                        if (!(flags & 2)) {
                            *(u32 *)(node + 0xC) = (flags | 0x40000) & ~0x20000;
                            goto apply;
                        }
                    } else {
                        goto apply;
                    }
                }
            } else {
                handle = fn_8024B7DC(*(s32 *)(node + 0x38));
                *(s32 *)(node + 0x38) = handle;
                if (handle == -1) {
                    flags = *(u32 *)(node + 0xC);
                    if (flags & 2) {
                        *(u32 *)(node + 0xC) = flags | 0x20000;
                    } else {
                        *(u32 *)(node + 0xC) = flags | 0x40000;
                    }
                }
            apply:
                if (*(s32 *)(node + 0x38) != -1) {
                    if (*(u32 *)(node + 0xC) & 1) {
                        i = 0;
                        entry = (u8 *)lbl_8035BF18;
                        n = lbl_80368AAE;
                        while (i < (s32)n) {
                            if (*(u32 *)(node + 0x3C) == *(u32 *)entry) break;
                            entry += 0x10;
                            i++;
                        }
                        if (i == (s32)lbl_80368AAE) {
                            entry = (u8 *)lbl_8035BF18 + (i << 4);
                            *(u32 *)(entry + 4) = 0;
                            *(u32 *)(entry + 8) = 0;
                            *(u16 *)(entry + 0xC) = 0;
                            *(u32 *)entry = *(u32 *)(node + 0x3C);
                            lbl_80368AAE += 1;
                        }
                        entry = (u8 *)lbl_8035BF18 + (i << 4);
                        *(u16 *)(entry + 0xC) += 1;
                        cur = *(u8 **)(entry + 8);
                        prev = NULL;
                        while (cur != NULL) {
                            if (*(f32 *)(cur + 4) > sp1C) break;
                            prev = cur;
                            cur = *(u8 **)cur;
                        }
                        pool = lbl_8035C318 + lbl_80368AAC * 0xC;
                        if (prev == NULL) {
                            *(u8 **)(entry + 8) = pool;
                        } else {
                            *(u8 **)prev = pool;
                        }
                        lbl_80368AAC += 1;
                        *(u8 **)pool = cur;
                        *(void **)(pool + 8) = node;
                        *(f32 *)(pool + 4) = sp1C;
                    }
                    if (lbl_8036C2E0 == sp1C && (*(u32 *)(node + 0xC) & 4)) {
                        fn_8024A6F8(*(u32 *)(node + 0x38));
                        *(s32 *)(node + 0x38) = -1;
                        flags = *(u32 *)(node + 0xC);
                        if (flags & 2) {
                            *(u32 *)(node + 0xC) = flags | 0x80000;
                        } else {
                            *(u32 *)(node + 0xC) = flags | 0x40000;
                        }
                    } else {
                        handle = *(s32 *)(node + 0x38);
                        if (*(u32 *)(node + 0xC) & 0x100000) {
                            v = 0x7F;
                            t = (s32)(lbl_8036C314 * (*(f32 *)(node + 0x48) * sp1C));
                            if ((u8)t <= 0x7F) v = t;
                            fn_8024A4AC(handle, 7, (u8)v);
                        } else {
                            v = 0x7F;
                            f1 = lbl_8036C314 * sp1C;
                            t = (s32)f1;
                            if ((u8)t <= 0x7F) v = t;
                            fn_8024A4AC(handle, 7, (u8)v);
                        }
                        v = 0x7F;
                        f1 = lbl_8036C318 * (lbl_8036C2E4 + sp18);
                        t = (s32)f1;
                        if ((u8)t <= 0x7F) v = t;
                        fn_8024A4AC(handle, 0xA, (u8)v);
                        v = 0x7F;
                        f1 = lbl_8036C318 * (lbl_8036C2E4 - sp10);
                        t = (s32)f1;
                        if ((u8)t <= 0x7F) v = t;
                        fn_8024A4AC(handle, 0x83, (u8)v);
                        f1 = lbl_8036C31C * spC;
                        if (f1 > lbl_8036C310) v = 0x3FFF;
                        else v = (s32)f1;
                        fn_8024A590(handle, 0x84, (u16)v);
                        if (*(u32 *)(node + 0xC) & 0x180) {
                            if (lbl_8036C2E0 != sp8) {
                                f1 = lbl_8036C310 * sp8;
                                if (f1 > lbl_8036C310) v = 0x3FFF;
                                else v = (s32)f1;
                                fn_8024A590(handle, 0x1F, (u16)v);
                                fn_8024A4AC(handle, 0x4F, 0x7F);
                            } else {
                                fn_8024A4AC(handle, 0x4F, 0);
                            }
                        }
                        if (*(u8 **)(node + 8) != NULL) {
                            cmd = *(u8 **)(*(u8 **)(node + 8) + 4);
                            idx = 0;
                            while (idx < **(u8 **)(node + 8)) {
                                w = *(u16 *)cmd;
                                if (!(w & 0xFF00)) {
                                    if (w < 0x40 || w == 0x80 || w == 0x84) {
                                        fn_8024A590(handle, (u8)w, *(u16 *)(cmd + 2));
                                    } else {
                                        fn_8024A4AC(handle, (u8)w, cmd[2]);
                                    }
                                }
                                cmd += 4;
                                idx++;
                            }
                        }
                    }
                }
                if (*(u32 *)(node + 0xC) & 0x100000) {
                    *(f32 *)(node + 0x48) += lbl_8036C328;
                    if (*(f32 *)(node + 0x48) >= lbl_8036C2E4) {
                        *(u32 *)(node + 0xC) &= ~0x100000;
                    }
                }
            }
        }
        node = next;
    }
    fn_8025DBF4();
}

void fn_8025EC10(u32 arg0) {
    extern s8 lbl_80368AAF;
    extern s8 lbl_80368AB0;
    extern s8 lbl_80368AB1;
    extern s8 lbl_80368AB2;
    extern s32 lbl_80368AB4;
    extern s32 lbl_80368AB8;
    extern s32 lbl_80368ABC;
    extern s8 lbl_80368AC0;
    lbl_80368ABC = 0;
    lbl_80368AB8 = 0;
    lbl_80368AB4 = 0;
    lbl_80368AB2 = 1;
    lbl_80368AB1 = 3;
    lbl_80368AC0 = 0;
    lbl_80368AB0 = (arg0 >> 1U) & 1;
    lbl_80368AAF = (arg0 >> 2U) & 1;
}

s32 fn_8025EC48(u8 voices, u8 music, u8 sfx, u8 studios, u32 flags, u32 aramSize) {
#pragma dont_inline on
    s32 fn_80261620(u32 *, u8, u8, u32);
    s32 fn_80262AF0(void);
    s32 fn_80262B14(u32);
    void fn_80258A98(s32, s32);
    void fn_80250A74(s32, u32);
    void fn_80247D74(void);
    void fn_8024ADFC(u32, u8);
    void fn_8024BB90(void);
    void fn_80258100(void);
    extern u8 lbl_80368978;
    extern u8 lbl_803689B0;
    u32 rate;
    s32 ret;
    u8 num;
    s32 base;

    lbl_80368978 = 0;
    if (voices <= 64) {
        lbl_8034C110[0x210] = voices;
    } else {
        lbl_8034C110[0x210] = 64;
    }
    if (studios <= 8) {
        lbl_8034C110[0x213] = studios;
    } else {
        lbl_8034C110[0x213] = 8;
    }
    rate = 32000;
    lbl_8034C110[0x211] = music;
    lbl_8034C110[0x212] = sfx;
    ret = fn_80261620(&rate, lbl_8034C110[0x210], lbl_8034C110[0x213], flags);
    if (ret == 0) {
        base = fn_80262AF0();
        num = lbl_8034C110[0x210];
        fn_80258A98(base, fn_80262B14(aramSize));
        fn_80250A74(0, aramSize);
        fn_80247D74();
        lbl_803689B0 = 0;
        fn_8024ADFC(32000, num);
        fn_8024BB90();
        fn_80258100();
        fn_8025EC10(flags);
        ret = 0;
        lbl_80368978 = 1;
    }
    return ret;
}

u8 fn_8025ED80(void) {
#pragma dont_inline reset
    extern u8 lbl_80368978;
    return lbl_80368978;
}

void fn_8025ED88(f32 *arg0, f32 *arg1, f32 *arg2) {
    arg2[0] = (arg0[0x24] + (arg0[8] * arg1[8])) + ((arg0[0] * arg1[0]) + (arg0[4] * arg1[4]));
    arg2[1] = (arg0[0x28] + (arg0[0x14] * arg1[8])) + ((arg0[0xC] * arg1[0]) + (arg0[0x10] * arg1[4]));
    arg2[2] = (arg0[0x2C] + (arg0[0x20] * arg1[8])) + ((arg0[0x18] * arg1[0]) + (arg0[0x1C] * arg1[4]));
}

void fn_8025EE34(f32 *arg0) {
    extern f32 lbl_8036C330;
    extern f64 lbl_8036C338;
    extern f64 lbl_8036C340;
    f32 temp_f1;
    f32 temp_f0;
    f32 temp_f3;
    f32 var_f1;
    f32 sp8;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;

    temp_f1 = arg0[0];
    temp_f0 = arg0[1];
    temp_f3 = arg0[2];
    var_f1 = (temp_f3 * temp_f3) + ((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
    if (var_f1 > lbl_8036C330) {
        temp_f2 = __frsqrte(var_f1);
        temp_f2_2 = lbl_8036C338 * temp_f2 * (lbl_8036C340 - ((f64) var_f1 * (temp_f2 * temp_f2)));
        temp_f2_3 = lbl_8036C338 * temp_f2_2 * (lbl_8036C340 - ((f64) var_f1 * (temp_f2_2 * temp_f2_2)));
        sp8 = (f32) ((f64) var_f1 * (lbl_8036C338 * temp_f2_3 * (lbl_8036C340 - ((f64) var_f1 * (temp_f2_3 * temp_f2_3)))));
        var_f1 = sp8;
    }
    arg0[0] = arg0[0] / var_f1;
    arg0[1] = arg0[1] / var_f1;
    arg0[2] = arg0[2] / var_f1;
}

void fn_8025EEE8(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r4;

    temp_r4 = (u8 *) lbl_8035D118 + ((arg1 & 0xFF) << 6);
    *(u32 *) (temp_r4 + ((arg0 & 0xFF) << 2)) |= arg2;
}

#pragma global_optimizer off
void fn_8025F0EC(u8 arg0, u8 arg1) {
    extern u8 lbl_8035D318[];
    extern u8 lbl_80361618[];
    extern u8 lbl_8034C110[];
    extern s32 lbl_803689A8;

    u8 *cell;
    u16 code;
    s32 mul90;
    s32 mul9;
    u8 *row;
    u8 *p;
    s32 off;
    u32 i;
    u8 val;
    u8 *vp;
    u8 a0;
    u8 a1;
    s32 idx;
    s32 t0;
    s32 t1;

    t0 = arg0 * 0x860;
    t1 = arg1 * 0x86;
    cell = lbl_8035D318 + t0 + t1;
    code = (u16)(cell[0x64] | (cell[0x65] << 8));
    switch ((s32)code) {
    case 0:
        mul90 = arg0 * 0x90;
        mul9 = arg1 * 9;
        row = lbl_80361618 + mul90;
        val = *(row + mul9);
        if (val != 0) {
            val = (u8)(val - 1);
        }
        *(row + mul9) = val;
        a0 = arg0;
        a1 = arg1;
        i = 0;
        off = 0;
        while (i < lbl_8034C110[0x210]) {
            vp = (u8 *)lbl_803689A8 + off;
            if (a0 == vp[0x122] && a1 == vp[0x121]) {
                idx = off + 0x1DA;
                vp[0x1DB] = val;
                ((u8 *)lbl_803689A8)[idx] = val;
            }
            off += 0x458;
            i += 1;
        }
        return;
    case 0x7F7D:
        mul90 = arg0 * 0x90;
        mul9 = arg1 * 9;
        p = lbl_80361618 + mul90 + mul9;
        if (*(u32 *)(p += 1) != 0) {
            *(u32 *)p = *(u32 *)p - 1;
        }
        i = 0;
        p = lbl_80361618 + mul90 + mul9;
        off = i;
        p += 1;
        a0 = arg0;
        a1 = arg1;
        while (i < lbl_8034C110[0x210]) {
            vp = (u8 *)lbl_803689A8 + off;
            if (a0 == vp[0x122] && a1 == vp[0x121]) {
                *(u32 *)(vp + 0x1E0) = *(u32 *)p;
            }
            off += 0x458;
            i += 1;
        }
        return;
    case 0x7F7E:
        mul90 = arg0 * 0x90;
        mul9 = arg1 * 9;
        p = lbl_80361618 + mul90 + mul9;
        if (*(u32 *)(p += 5) != 0) {
            *(u32 *)p = *(u32 *)p - 1;
        }
        i = 0;
        p = lbl_80361618 + mul90 + mul9;
        off = i;
        p += 5;
        a0 = arg0;
        a1 = arg1;
        while (i < lbl_8034C110[0x210]) {
            vp = (u8 *)lbl_803689A8 + off;
            if (a0 == vp[0x122] && a1 == vp[0x121]) {
                *(u32 *)(vp + 0x1E4) = *(u32 *)p;
            }
            off += 0x458;
            i += 1;
        }
        return;
    }
}
#pragma global_optimizer on
void fn_8025F310(u8 arg0, u8 arg1) {
    extern u8 lbl_8035D318[];
    extern u8 lbl_80361618[];
    extern u8 lbl_8034C110[];
    extern s32 lbl_803689A8;

    u8 *cell;
    u16 code;
    u8 *row;
    u8 *p;
    u8 val;
    u32 i;
    s32 off;
    u8 *vp;
    u8 a0;
    u8 a1;
    s32 mul90;
    s32 mul9;
    s32 idx;

    cell = lbl_8035D318 + (arg0 * 0x860) + (arg1 * 0x86);
    code = (u16)(cell[0x64] | (cell[0x65] << 8));
    switch ((s32)code) {
    case 0:
        mul90 = arg0 * 0x90;
        mul9 = arg1 * 9;
        row = lbl_80361618 + mul90;
        val = row[mul9];
        if (val < 0x18U) {
            val = (u8)(val + 1);
        }
        row[mul9] = val;
        a0 = arg0;
        a1 = arg1;
        i = 0;
        off = 0;
        while (i < lbl_8034C110[0x210]) {
            vp = (u8 *)lbl_803689A8 + off;
            if (a0 == vp[0x122] && a1 == vp[0x121]) {
                idx = off + 0x1DA;
                vp[0x1DB] = val;
                ((u8 *)lbl_803689A8)[idx] = val;
            }
            off += 0x458;
            i += 1;
        }
        return;
    case 0x7F7D:
        mul90 = arg0 * 0x90;
        mul9 = arg1 * 9;
        p = lbl_80361618 + mul90 + mul9;
        if (*(u32 *)(p += 1) != 0x3FFFU) {
            *(u32 *)p = *(u32 *)p + 1;
        }
        p = lbl_80361618 + mul90 + mul9 + 1;
        a0 = arg0;
        a1 = arg1;
        i = 0;
        off = i;
        while (i < lbl_8034C110[0x210]) {
            vp = (u8 *)lbl_803689A8 + off;
            if (a0 == vp[0x122] && a1 == vp[0x121]) {
                *(u32 *)(vp + 0x1E0) = *(u32 *)p;
            }
            off += 0x458;
            i += 1;
        }
        return;
    case 0x7F7E:
        mul90 = arg0 * 0x90;
        mul9 = arg1 * 9;
        p = lbl_80361618 + mul90 + mul9;
        if (*(u32 *)(p += 5) != 0x3FFFU) {
            *(u32 *)p = *(u32 *)p + 1;
        }
        p = lbl_80361618 + mul90 + mul9 + 5;
        a0 = arg0;
        a1 = arg1;
        i = 0;
        off = i;
        while (i < lbl_8034C110[0x210]) {
            vp = (u8 *)lbl_803689A8 + off;
            if (a0 == vp[0x122] && a1 == vp[0x121]) {
                *(u32 *)(vp + 0x1E4) = *(u32 *)p;
            }
            off += 0x458;
            i += 1;
        }
        return;
    }
}

void fn_8025FB74(u8 arg0, u8 arg1, u8 arg2)
{
    extern u8 lbl_80283128[];
    extern u8 lbl_802830A0[];
    extern u8 lbl_8035D318[];
    extern u16 lbl_80361A98[4288];

    void fn_80260174(u8, u8, u8);

    u8 *src;
    u8 *dst;
    u32 i;

    src = lbl_80283128;

    if (arg2 != 0) {
        src = lbl_802830A0;
    }

    if (arg1 != 0xFF) {
        dst = lbl_8035D318 + (arg1 * 0x860) + (arg0 * 0x86);
    } else {
        dst = (u8 *)lbl_80361A98 + (arg0 * 0x86);
    }

    if (arg2 != 0) {
        memcpy(dst, src, 0x86);
    } else {
        for (i = 0; i < 0x43; i++) {
            if (src[0] != 0xFF) {
                dst[0] = src[0];
            }

            if (src[1] != 0xFF) {
                dst[1] = src[1];
            }

            dst += 2;
            src += 2;
        }
    }

    fn_80260174(arg0, arg1, 0xFF);
}

u16 fn_8025FC64(u8 arg0,u8 arg1,u8 arg2) {
extern u8 lbl_8035D318[];
if(arg1!=255) {
if(arg2!=255) {if(arg0<0x40U){u32 index=arg0&31;return (((lbl_8035D318+arg2*0x860+arg1*0x86)[index]<<7)|(lbl_8035D318+arg2*0x860+arg1*0x86)[index+0x20]);}
if(arg0<0x46U) return (lbl_8035D318+arg2*0x860+arg1*0x86)[arg0]<0x40 ? 0 : 0x3fff;
if(arg0>=0x60U && arg0<0x66U) return 0;
if(arg0==0x80U || arg0==0x81U) {u32 index=arg0&0xfe;return (((lbl_8035D318+arg2*0x860+arg1*0x86)[index]<<7)|(lbl_8035D318+arg2*0x860+arg1*0x86)[index+1]);}
if(arg0==0x84U || arg0==0x85U) {u32 index=arg0&0xfe;return (((lbl_8035D318+arg2*0x860+arg1*0x86)[index]<<7)|(lbl_8035D318+arg2*0x860+arg1*0x86)[index+1]);}
return (lbl_8035D318+arg2*0x860+arg1*0x86)[arg0]<<7;}
else {if(arg0<0x40U){u32 index; s32 offset; offset=arg1*0x86;index=arg0&31;return ((((u8*)lbl_80361A98+offset)[index]<<7)|((u8*)lbl_80361A98+offset)[index+0x20]);}
if(arg0<0x46U) return ((u8*)lbl_80361A98+arg1*0x86)[arg0]<0x40 ? 0 : 0x3fff;
if(arg0>=0x60U && arg0<0x66U) return 0;
if(arg0==0x80U || arg0==0x81U) {u32 index; s32 offset; offset=arg1*0x86;index=arg0&0xfe;return ((((u8*)lbl_80361A98+offset)[index]<<7)|((u8*)lbl_80361A98+offset)[index+1]);}
if(arg0==0x84U || arg0==0x85U) {u32 index; s32 offset; offset=arg1*0x86;index=arg0&0xfe;return ((((u8*)lbl_80361A98+offset)[index]<<7)|((u8*)lbl_80361A98+offset)[index+1]);}
return ((u8*)lbl_80361A98+arg1*0x86)[arg0]<<7;}
}
else return 0;
}

void *fn_8025FF28(u8 arg0, u8 arg1) {
    extern u8 lbl_80363C18[];
    extern u8 lbl_80361618[];

    if (arg1 == 0xFF) {
        return lbl_80363C18 + arg0 * 9;
    }
    return lbl_80361618 + arg1 * 0x90 + arg0 * 9;
}

void fn_8025FF6C(u8 arg0, u8 arg1) {
    extern u8 lbl_80361618[];
    extern u8 lbl_80363C18[];
    extern s32 lbl_80368AC8;
    extern s32 lbl_80368ACC;
    
    char *var_r3;

    if (arg1 != 0xFF) {
        var_r3 = (char *)&lbl_80361618 + (arg1 * 0x90) + (arg0 * 9);
    } else {
        var_r3 = (char *)&lbl_80363C18 + (arg0 * 9);
    }
    *(u8 *)var_r3 = 2;
    *(s32 *)((char *)var_r3 + 1) = lbl_80368ACC;
    *(s32 *)((char *)var_r3 + 5) = lbl_80368AC8;
}

void fn_8025FFC8(void *arg0, u8 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5) {
    u8 temp_r31;
    u8 *r27;
    u8 r30;
    u8 r29;
    u8 r28;
    u8 *r3;

    // Save registers needed by caller
    r27 = (u8 *) arg0;  // Original arg0
    r30 = arg4;         // Original arg4 (arg5)
    r29 = arg1;
    r28 = arg2 & 0x000000FF;

    *(u8 *) ((u8 *) r27 + 0x0) = r29;
    *(u8 *) ((u8 *) r27 + 0x1) = r28;
    *(u8 *) ((u8 *) r27 + 0x2) = 0x00;

    temp_r31 = *(u8 *) ((u8 *) r27 + 0x22);
    if (temp_r31 >= 0x4) {
        *(u8 *) ((u8 *) r27 + 0x22) = 0x0;
    } else {
        *(u8 *) ((u8 *) r27 + 0x22) = temp_r31 + 0x1;
    }

    if (r30 != 0) {
        // arg5 was non-zero, call fn_80260EA8 with some value
        *(u8 *) ((u8 *) r27 + 0x22) = 0x00; // Set to zero or equivalent logic
    }

    if (r30 != 0) {
        // More complex logic: set multiple values
        u8 *r0;
        r0 = r27 + ((temp_r31 << 24) >> 24); // Shift logic
        *(u8 *) ((u8 *) r0 + 0x1) = r29;     // arg1 -> offset 1
        *(u32 *) ((u8 *) r0 + 0x4) = (u32) r28; // arg2 -> offset 4
    } else {
        *(u8 *) ((u8 *) r27 + 0x5) = r30;
        *(u8 *) ((u8 *) r27 + 0x6) = arg5;
    }
}

void fn_80260060(u8 arg0, void *arg1, void *arg2) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_3;
    void *temp_r8;
    void *temp_r8_2;
    void *temp_r8_3;

    temp_r4 = *(u32*)((u8*)arg1 + 0xF4);
    temp_r0 = *(u32*)((u8*)arg2 + 0xF4);
    if (arg0 < 0x40U) {
        temp_r6 = (u8) temp_r0 * 0x86;
        temp_r5 = arg0 & 0x1F;
        temp_r7 = (u8) temp_r4 * 0x86;
        temp_r8 = &lbl_80361A98 + 0x20;
        *(u16*)((u8*)(&lbl_80361A98) + temp_r7 + temp_r5) = *(u16*)((u8*)(&lbl_80361A98) + temp_r6 + temp_r5);
        *(u16*)((u8*)temp_r8 + (temp_r7 + temp_r5)) = *(u16*)((u8*)temp_r8 + (temp_r6 + temp_r5));
        return;
    }
    switch (arg0) {                                 /* irregular */
    case 0x80:
    case 0x81:
        temp_r6_2 = (u8) temp_r0 * 0x86;
        temp_r5_2 = arg0 & 0xFE;
        temp_r7_2 = (u8) temp_r4 * 0x86;
        temp_r8_2 = &lbl_80361A98 + 1;
        *(u16*)((u8*)(&lbl_80361A98) + temp_r7_2 + temp_r5_2) = *(u16*)((u8*)(&lbl_80361A98) + temp_r6_2 + temp_r5_2);
        *(u16*)((u8*)temp_r8_2 + (temp_r7_2 + temp_r5_2)) = *(u16*)((u8*)temp_r8_2 + (temp_r6_2 + temp_r5_2));
        return;
    case 0x84:
    case 0x85:
        temp_r6_3 = (u8) temp_r0 * 0x86;
        temp_r5_3 = arg0 & 0xFE;
        temp_r7_3 = (u8) temp_r4 * 0x86;
        temp_r8_3 = &lbl_80361A98 + 1;
        *(u16*)((u8*)(&lbl_80361A98) + temp_r7_3 + temp_r5_3) = *(u16*)((u8*)(&lbl_80361A98) + temp_r6_3 + temp_r5_3);
        *(u16*)((u8*)temp_r8_3 + (temp_r7_3 + temp_r5_3)) = *(u16*)((u8*)temp_r8_3 + (temp_r6_3 + temp_r5_3));
        return;
    default:
        *(u16*)((u8*)(&lbl_80361A98) + ((u8) temp_r4 * 0x86) + arg0) = *(u16*)((u8*)(&lbl_80361A98) + ((u8) temp_r0 * 0x86) + arg0);
        return;
    }
}

void fn_80260174(u8 arg0, u8 arg1, u8 arg2) {
    extern u8 lbl_80363E58[8][16];
    extern u8 lbl_80363ED8[64];
    if (arg1 != 0xFF) {
        lbl_80363E58[arg1][arg0] = arg2;
        return;
    }
    lbl_80363ED8[arg0] = arg2;
}

u8 fn_802601B0(u8 arg0, u8 arg1) {
    extern u8 lbl_80363E58[8][16];
    extern u8 lbl_80363ED8[64];
    if (arg1 != 0xFF) {
        return lbl_80363E58[arg1][arg0];
    }
    return lbl_80363ED8[arg0];
}

#pragma global_optimizer off
u16 fn_802601EC(void *arg0, void *arg1, u8 arg2, u8 arg3) {
    s16 fn_802537F8(void *, s32, u8);
    u16 fn_8025FC64(u8, u8, u8);
    extern s32 lbl_803689B8;
    extern s32 lbl_803689BC;

    u8 *entry;
    s32 acc;
    u32 i;
    u32 signed_mode;
    u8 a3;
    u8 a2;
    u8 *list;
    void *obj;
    s32 val;
    s32 tmp;
    s32 scaled;
    u8 op;
    u8 mode;
    s32 r5;
    u64 diff;
    s32 mul;
    s32 idx;

    list = (u8 *)arg1;
    obj = arg0;
    a2 = arg2;
    a3 = arg3;
    entry = list;
    acc = 0;
    i = 0;

    while (i < list[0x22]) {
        if ((entry[1] & 0x10) != 0) {
            val = obj != 0 ? (s16)fn_802537F8(obj, 0, entry[0]) : 0;
            goto apply_signed;
        }

        op = entry[0];
        if (op == 0x80 || op == 1 || op == 0xA || (u8)(op - 0xA0) <= 1 || op == 0x83) {
            switch (op) {
            case 0xA0:
            case 0xA1:
                if (obj != 0) {
                    mul = op * 0xC;
                    idx = op + 0x138;
                    val = 1;
                    mul -= 0x5B8;
                    tmp = *(s16 *)((s32)obj + mul);
                    *((u8 *)obj + idx) = val;
                    val = tmp << 1;
                } else {
                    val = 0;
                }
                break;
            default:
                val = (u16)fn_8025FC64(op, a2, a3) - 0x2000;
                break;
            }

apply_signed:
            scaled = (val * (*(s32 *)(entry + 4) >> 1)) >> 15;
            if (scaled < -0x2000) {
                val = -0x2000;
            } else {
                val = 0x1FFF;
                if (scaled <= 0x1FFF) {
                    val = scaled;
                }
            }

            mode = (u8)(entry[1] & 0xF);
            switch (mode) {
            case 0:
                acc = val + 0x2000;
                signed_mode = 1;
                break;
            case 1:
                if (signed_mode != 0) {
                    tmp = acc + val;
                    tmp -= 0x2000;
                    if (tmp < -0x2000) {
                        val = -0x2000;
                    } else {
                        val = 0x1FFF;
                        if (tmp <= 0x1FFF) {
                            val = tmp;
                        }
                    }
                    acc = val + 0x2000;
                } else {
                    val = acc + val;
                    if (val > 0x3FFF) {
                        acc = 0x3FFF;
                    } else {
                        acc = val & ~(val >> 31);
                    }
                }
                break;
            case 2:
                if (signed_mode != 0) {
                    scaled = ((acc - 0x2000) * val) >> 13;
                } else {
                    signed_mode = 1;
                    scaled = (s32)((u32)(val * acc) >> 13);
                }
                if (scaled < -0x2000) {
                    val = -0x2000;
                } else {
                    val = 0x1FFF;
                    if (scaled <= 0x1FFF) {
                        val = scaled;
                    }
                }
                acc = val + 0x2000;
                break;
            case 3:
                if (signed_mode != 0) {
                    scaled = acc - 0x2000;
                    scaled -= val;
                    if (scaled < -0x2000) {
                        val = -0x2000;
                    } else {
                        val = 0x1FFF;
                        if (scaled <= 0x1FFF) {
                            val = scaled;
                        }
                    }
                    acc = val + 0x2000;
                } else {
                    val = acc - val;
                    if (val > 0x3FFF) {
                        acc = 0x3FFF;
                    } else {
                        acc = val & ~(val >> 31);
                    }
                }
                break;
            }
        } else {
            switch ((s32)op) {
            case 0xA2:
                if (obj != 0) {
                    r5 = ((u8 *)obj)[0x131] << 7;
                } else {
                    r5 = 0;
                }
                goto unsigned_mul;
            case 0xA3:
                if (obj != 0) {
                    r5 = (s32)(*(u32 *)((u8 *)obj + 0x15C) >> 9);
                } else {
                    r5 = 0;
                }
                goto unsigned_mul;
            case 0xA4:
                if (obj != 0) {
                    diff = (((u64)(u32)lbl_803689B8 << 32) | (u32)lbl_803689BC)
                         - (((u64)*(u32 *)((u8 *)obj + 0x90) << 32) | *(u32 *)((u8 *)obj + 0x94));
                    r5 = (s32)(diff >> 8);
                    if (r5 > 0x3FFF) {
                        r5 = 0x3FFF;
                    }
                    ((u8 *)obj)[0xA8] = 1;
                } else {
                    r5 = 0;
                }
                goto unsigned_mul;
            default:
                r5 = a3;
                r5 = (u16)fn_8025FC64(op, a2, (u8)r5);
                break;
            }

unsigned_mul:
            val = (r5 * (*(s32 *)(entry + 4) >> 1)) >> 15;
            if (val > 0x3FFF) {
                val = 0x3FFF;
            }

            mode = (u8)(entry[1] & 0xF);
            switch (mode) {
            case 0:
                acc = val;
                signed_mode = 0;
                break;
            case 1:
                if (signed_mode != 0) {
                    tmp = acc + val;
                    tmp -= 0x2000;
                    if (tmp < -0x2000) {
                        val = -0x2000;
                    } else {
                        val = 0x1FFF;
                        if (tmp <= 0x1FFF) {
                            val = tmp;
                        }
                    }
                    acc = val + 0x2000;
                } else {
                    acc += val;
                    idx = 0x3FFF;
                    if ((u32)acc <= 0x3FFFU) {
                        idx = acc;
                    }
                    acc = idx;
                }
                break;
            case 2:
                if (signed_mode != 0) {
                    scaled = (val * (acc - 0x2000)) >> 14;
                    if (scaled < -0x2000) {
                        val = -0x2000;
                    } else {
                        val = 0x1FFF;
                        if (scaled <= 0x1FFF) {
                            val = scaled;
                        }
                    }
                    acc = val + 0x2000;
                } else {
                    scaled = (s32)((u32)(acc * val) >> 14);
                    acc = 0x3FFF;
                    if ((u32)scaled <= 0x3FFFU) {
                        acc = scaled;
                    }
                }
                break;
            case 3:
                if (signed_mode != 0) {
                    scaled = acc - 0x2000;
                    scaled -= val;
                    if (scaled < -0x2000) {
                        val = -0x2000;
                    } else {
                        val = 0x1FFF;
                        if (scaled <= 0x1FFF) {
                            val = scaled;
                        }
                    }
                    acc = val + 0x2000;
                } else {
                    val = acc - val;
                    if (val > 0x3FFF) {
                        acc = 0x3FFF;
                    } else {
                        acc = val & ~(val >> 31);
                    }
                }
                break;
            }
        }

        entry += 8;
        i += 1;
    }

    *(s16 *)(list + 0x20) = (s16)acc;
    return (u16)acc;
}
#pragma global_optimizer reset
u16 fn_8026068C(void *arg0) {
    u16 fn_802601EC(void *, void *, u8, u8);
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 1)) {
        return *(u16 *)((u8 *)arg0 + 0x244);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = temp_r4 & ~1;
    return fn_802601EC(arg0, (u8 *)arg0 + 0x224, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
}

u16 fn_802606D4(void *arg0) {
    u16 fn_802601EC(void *, void *, u8, u8);
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 2)) {
        return *(u16 *)((u8 *)arg0 + 0x268);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = temp_r4 & ~2;
    return fn_802601EC(arg0, (u8 *)arg0 + 0x248, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
}

u16 fn_8026071C(void *arg0) {
    u16 fn_802601EC(void *, void *, u8, u8);
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 4)) {
        return *(u16 *)((u8 *)arg0 + 0x28C);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = temp_r4 & ~4;
    return fn_802601EC(arg0, (u8 *)arg0 + 0x26C, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
}

s32 fn_80260764(void *arg0)
{
    s32 fn_802601EC(void *, void *, u8, u8);

    u32 flags;

    flags = *(u32 *)((u8 *)arg0 + 0x220);

    if ((flags & 0x8) == 0) {
        return *(u16 *)((u8 *)arg0 + 0x2B0);
    }

    flags &= ~0x8;
    *(u32 *)((u8 *)arg0 + 0x220) = flags;

    return fn_802601EC(
        arg0,
        (u8 *)arg0 + 0x290,
        *(u8 *)((u8 *)arg0 + 0x121),
        *(u8 *)((u8 *)arg0 + 0x122)
    );
}

u16 fn_802607AC(void *arg0) {
    u16 fn_802601EC(void *, void *, u8, u8);
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 0x10)) {
        return *(u16 *)((u8 *)arg0 + 0x2D4);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = temp_r4 & ~0x10;
    return fn_802601EC(arg0, (u8 *)arg0 + 0x2B4, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
}

s32 fn_802607F4(void *arg0) {
    s32 fn_802601EC(void *, void *, u8, u8);
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 0x20)) {
        return *(u16 *)((u8 *)arg0 + 0x2F8);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = temp_r4 & 0xFFFFFFDF;
    return fn_802601EC(arg0, (u8 *)arg0 + 0x2D8, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
}

s32 fn_8026083C(void *arg0) {
    s32 fn_802601EC(void *, void *, u8, u8);
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 0x40)) {
        return *(u16 *)((u8 *)arg0 + 0x31C);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = temp_r4 & 0xFFFFFFBF;
    return fn_802601EC(arg0, (u8 *)arg0 + 0x2FC, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
}

s32 fn_80260884(void *arg0) {
    s32 fn_802601EC(void *, void *, u8, u8);
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 0x100)) {
        return *(u16 *)((u8 *)arg0 + 0x364);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = temp_r4 & 0xFFFFFEFF;
    return fn_802601EC(arg0, (u8 *)arg0 + 0x344, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
}

s32 fn_802608CC(void *arg0) {
    s32 fn_802601EC(void *, void *, u8, u8);
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 0x200)) {
        return *(u16 *)((u8 *)arg0 + 0x388);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = temp_r4 & 0xFFFFFDFF;
    return fn_802601EC(arg0, (u8 *)arg0 + 0x368, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
}

s32 fn_80260914(void *arg0) {
    s32 fn_802601EC(void *, void *, u8, u8);
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 0x400)) {
        return *(u16 *)((u8 *)arg0 + 0x3AC);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = temp_r4 & 0xFFFFFBFF;
    return fn_802601EC(arg0, (u8 *)arg0 + 0x38C, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
}

s32 fn_8026095C(void *arg0)
{
    s32 fn_802601EC(void *, void *, u8, u8);
    u32 flags;

    flags = *(u32 *)((u8 *)arg0 + 0x220);

    if ((flags & 0x800) == 0) {
        return *(u16 *)((u8 *)arg0 + 0x3D0);
    }

    flags &= ~0x800;
    *(u32 *)((u8 *)arg0 + 0x220) = flags;

    return fn_802601EC(
        arg0,
        (u8 *)arg0 + 0x3B0,
        *(u8 *)((u8 *)arg0 + 0x121),
        *(u8 *)((u8 *)arg0 + 0x122)
    );
}

s32 fn_802609A4(void *arg0) {
    s32 fn_802601EC(void *, void *, u8, u8);
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 0x220);
    if (!(temp_r4 & 0x1000)) {
        return *(u16 *)((u8 *)arg0 + 0x3F4);
    }
    *(s32 *)((u8 *)arg0 + 0x220) = temp_r4 & 0xFFFFEFFF;
    return fn_802601EC(arg0, (u8 *)arg0 + 0x3D4, *(u8 *)((u8 *)arg0 + 0x121), *(u8 *)((u8 *)arg0 + 0x122));
}

s32 fn_802609EC(void *arg0)
{
    s32 fn_802601EC(void *, void *, u8, u8);
    u32 flags;

    flags = *(u32 *)((u8 *)arg0 + 0x220);

    if ((flags & 0x2000) == 0) {
        return *(u16 *)((u8 *)arg0 + 0x418);
    }

    flags &= ~0x2000;
    *(u32 *)((u8 *)arg0 + 0x220) = flags;

    return fn_802601EC(
        arg0,
        (u8 *)arg0 + 0x3f8,
        *(u8 *)((u8 *)arg0 + 0x121),
        *(u8 *)((u8 *)arg0 + 0x122)
    );
}

s32 fn_80260A34(void *arg0)
{
    s32 fn_802601EC(void *, void *, u8, u8);
    u32 flags;

    flags = *(u32 *)((u8 *)arg0 + 0x220);

    if ((flags & 0x4000) == 0) {
        return *(u16 *)((u8 *)arg0 + 0x43C);
    }

    flags &= ~0x4000;
    *(u32 *)((u8 *)arg0 + 0x220) = flags;

    return fn_802601EC(
        arg0,
        (u8 *)arg0 + 0x41C,
        *(u8 *)((u8 *)arg0 + 0x121),
        *(u8 *)((u8 *)arg0 + 0x122)
    );
}

s32 fn_80260A7C(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    extern u16 lbl_8035D118[256];
    extern u32 lbl_802A1E00[];
    extern u8 lbl_8034D034[];
    s32 fn_802601EC(void *, void *, u32, u32);
    u8 *row;
    u32 *entry;
    u32 mask;
    u32 value;
    u32 index;
    u32 result;

    index = arg1 & 0xFF;
    row = (u8 *)lbl_8035D118 + ((arg3 & 0xFF) << 6);
    mask = lbl_802A1E00[arg1 & 0xFF];
    entry = (u32 *)(row + ((arg2 & 0xFF) << 2));
    value = *entry;
    result = (mask & value) != 0;

    if (result != 0) {
        *entry = ~mask & value;
    }

    if (result != 0) {
        return fn_802601EC(
            0,
            lbl_8034D034 + (arg0 & 0xFF) * 0x90 + index * 0x24,
            arg2,
            arg3
        );
    }

    return *(u16 *)(
        lbl_8034D034
        + (arg0 & 0xFF) * 0x90
        + index * 0x24
        + 0x20
    );
}

s32 fn_80260B30(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5)
{
    extern u32 lbl_802A1E10[];
    extern u8 lbl_8034CBB4[];

    u32 *entry;
    u32 mask;
    u32 value;
    u32 index;

    index = arg1 & 0xFF;
    entry = (u32 *)((u8 *)lbl_8035D118 + ((arg3 & 0xFF) << 6) + ((arg4 & 0xFF) << 2));
    mask = lbl_802A1E10[index];
    value = *entry;

    if ((mask & value) != 0) {
        *entry = value & ~mask;

        return fn_802601EC(
            0,
            lbl_8034CBB4 + (arg0 & 0xFF) * 0x90 + index * 0x24,
            (u8)arg2,
            (u8)arg3
        );
    }

    return *(u16 *)(lbl_8034CBB4 + (arg0 & 0xFF) * 0x90 + index * 0x24 + 0x20);
}

void fn_80260BE4(u8 *arg0)
{
    extern u8 lbl_8034D034[];
    extern u8 lbl_8034CBB4[];
    extern s32 lbl_80368ACC;
    extern s32 lbl_80368AC8;

    s32 i;
    u32 *ptr;

    if (arg0 != 0) {
        arg0[0x224] = 7;
        arg0[0x225] = 0;
        *(u32 *)(arg0 + 0x228) = 1;
        arg0[0x22C] = 0x0B;
        arg0[0x22D] = 2;
        *(u32 *)(arg0 + 0x230) = 1;
        arg0[0x246] = 2;
        arg0[0x248] = 10;
        arg0[0x249] = 0;
        *(u32 *)(arg0 + 0x24C) = 1;
        arg0[0x26A] = 1;
        arg0[0x26C] = 0x83;
        arg0[0x26D] = 0;
        *(u32 *)(arg0 + 0x270) = 1;
        arg0[0x28E] = 1;
        arg0[0x290] = 0x80;
        arg0[0x291] = 0;
        *(u32 *)(arg0 + 0x294) = 1;
        arg0[0x2B2] = 1;
        arg0[0x2B4] = 0x84;
        arg0[0x2B5] = 0;
        *(u32 *)(arg0 + 0x2B8) = 1;
        arg0[0x2D6] = 1;
        arg0[0x2D8] = 1;
        arg0[0x2D9] = 0;
        *(u32 *)(arg0 + 0x2DC) = 1;
        arg0[0x2FA] = 1;
        arg0[0x2FC] = 0x40;
        arg0[0x2FD] = 0;
        *(u32 *)(arg0 + 0x300) = 1;
        arg0[0x31E] = 1;
        arg0[0x320] = 0x41;
        arg0[0x321] = 0;
        *(u32 *)(arg0 + 0x324) = 1;
        arg0[0x342] = 1;
        arg0[0x366] = 0;
        arg0[0x368] = 0x5B;
        arg0[0x369] = 0;
        *(u32 *)(arg0 + 0x36C) = 1;
        arg0[0x38A] = 1;
        arg0[0x3AE] = 0;
        arg0[0x3B0] = 0x5D;
        arg0[0x3B1] = 0;
        *(u32 *)(arg0 + 0x3B4) = 1;
        arg0[0x3D2] = 1;
        arg0[0x3F6] = 0;
        arg0[0x3F8] = 0x4F;
        arg0[0x3F9] = 0;
        *(u32 *)(arg0 + 0x3FC) = 1;
        arg0[0x41A] = 1;
        arg0[0x41C] = 0x1F;
        arg0[0x41D] = 0;
        *(u32 *)(arg0 + 0x420) = 1;
        arg0[0x43E] = 1;
        *(u32 *)(arg0 + 0x220) = 0x7FFF;
        arg0[0x1D8] = 0;
        arg0[0x1D9] = 0;
        arg0[0xA8] = 0;
    }

    for (i = 0; i < 2; i++) {
        for (ptr = (u32 *)(lbl_8034D034 + i * 0x240 + 0x22);
             (u8 *)ptr < lbl_8034D034 + i * 0x240 + 0x240;
             ptr = (u32 *)((u8 *)ptr + 0x24)) {
            *(u8 *)ptr = 0;
        }
        for (ptr = (u32 *)(lbl_8034CBB4 + i * 0x240 + 0x22);
             (u8 *)ptr < lbl_8034CBB4 + i * 0x240 + 0x240;
             ptr = (u32 *)((u8 *)ptr + 0x24)) {
            *(u8 *)ptr = 0;
        }
    }

    for (i = 0; i < 4; i++) {
        ptr = (u32 *)((u8 *)lbl_8035D118 + i * 0x40);
        ptr[0] = 0xFF;
        ptr[1] = 0xFF;
        ptr[2] = 0xFF;
        ptr[3] = 0xFF;
        ptr[4] = 0xFF;
        ptr[5] = 0xFF;
        ptr[6] = 0xFF;
        ptr[7] = 0xFF;
        ptr[8] = 0xFF;
        ptr[9] = 0xFF;
        ptr[10] = 0xFF;
        ptr[11] = 0xFF;
        ptr[12] = 0xFF;
        ptr[13] = 0xFF;
        ptr[14] = 0xFF;
        ptr[15] = 0xFF;
    }

    lbl_80368ACC = 0x50;
    lbl_80368AC8 = 0x3E80;
}

s32 fn_80260EA8(s32 arg0) {
    switch ((u8)arg0) {
    case 0x80:
        return 0x80;
    case 0x81:
        return 0x82;
    case 0x82:
        return 0xA0;
    case 0x83:
        return 0xA1;
    case 0x84:
        return 0x83;
    case 0x85:
        return 0x84;
    case 0x86:
        return 0xA2;
    case 0x87:
        return 0xA3;
    case 0x88:
        return 0xA4;
    default:
        return arg0;
    }
}

s32 fn_80260F18(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    s32 var_r9;
    s32 var_r10;
    s32 var_r11;
    s32 var_r12;
    s32 var_r13;
    s32 *var_r14;
    s32 var_r15;
    s32 var_r16;
    s32 var_r17;
    s32 var_r18;
    s32 var_r19;
    s32 var_r20;
    s32 var_r21;
    s32 var_r22;
    s32 var_r23;
    s32 var_r24;
    s32 var_r25;
    s32 var_r26;
    s32 var_r27;
    s32 var_r28;
    s32 var_r29;
    s32 var_r30;
    s32 var_r31;
    
    if (arg1 == 0) {
        return 0;
    }
    
    if (*arg2 != 0) {
        *arg2 = 0;
        return 1;
    }

    if ((arg0 >= 0x15) || (arg0 < 0)) {
        return 0;
    }

    var_r3 = 0;
    var_r4 = 0;

    while (var_r3 != 0) {
        if (var_r4 >= 0x14) {
            break;
        }
        
        if (*arg2 == 0) {
            *arg2 = 1;
        }

        // This is a complex nested logic that's hard to match
        var_r6 = *(arg3 + var_r4) * 4;
        var_r7 = (arg0 - (var_r6 & 0xFFFF)) << 8;
        var_r8 = 0x10000;
        
        if ((s32) var_r7 < 0) {
            var_r8 = 0;
        }

        var_r9 = var_r7 + var_r8;
        var_r10 = var_r9 >> 0x10;
        
        if ((s32) var_r10 < 0) {
            var_r10 = 0;
        }

        var_r11 = var_r10 * 0x10000;
        var_r12 = 0x100000000ULL; // This is the high part of a u64
        var_r13 = (s32)var_r12 + var_r11;
        
        if ((s32) var_r13 < 0) {
            var_r13 = 0;
        }

        if (arg0 == 0x14) {
            *arg2 = 0;
            return 1;
        }

        var_r8 = 0;

        // This part is also complex and needs accurate logic
        if (var_r3 != 0) {
            *arg2 = 0;
            return 1;
        }
        
        var_r14 = arg3 + var_r4;
        var_r15 = var_r6 & 0xFFFF;
        var_r16 = ((s32) var_r11 < 0x10000) ? 0x100 : (var_r11 >> 0x10);
        
        if (var_r15 == 0x14) {
            *arg2 = 0;
            return 1;
        }

        var_r3 = 0;
        var_r4++;
    }

    if (arg0 != 0x14) {
        *arg2 = 0;
        return 1;
    }
    
    *arg2 = 1;
    return 0;
}

s32 fn_80261014(u32 *arg0, u8 arg1, u8 arg2, u32 arg3) {
    if (arg1 > 64) {
        arg1 = 64;
    }
    lbl_8034C110[0x210] = arg1;
    
    if (arg2 > 8) {
        arg2 = 8;
    }
    lbl_8034C110[0x213] = arg2;

    lbl_8034C110[0x211] = arg3;
    lbl_8034C110[0x212] = arg3;
    
    *arg0 = 0x7D00; // 32000
    
    lbl_80368978 = 0;
    lbl_803689B0 = 0; 
    
    return 1;
}

u16 fn_802611F8(void) {
    extern u32 lbl_803670B8;
    u32 temp_r0;

    temp_r0 = lbl_803670B8 * 0xA8351D63;
    lbl_803670B8 = temp_r0;
    return (u16) (temp_r0 >> 6U);
}

s16 fn_80261214(s32 arg0) {
    u32 temp_r0;
    s16 *ptr;

    temp_r0 = arg0 & 0xFFF;
    if (temp_r0 < 0x400U) {
        ptr = (s16*)((char*)lbl_802A1E90 + ((temp_r0 * 2) & 0x1FFFE));
        return *ptr;
    }
    if (temp_r0 < 0x800U) {
        ptr = (s16*)((char*)lbl_802A1E90 + ((0x3FF - (temp_r0 & 0x3FF)) * 2));
        return *ptr;
    }
    if (temp_r0 < 0xC00U) {
        ptr = (s16*)((char*)lbl_802A1E90 + ((temp_r0 * 2) & 0x7FE));
        return -(*ptr);
    }
    ptr = (s16*)((char*)lbl_802A1E90 + ((0x3FF - (temp_r0 & 0x3FF)) * 2));
    return -(*ptr);
}

void *fn_802612A0(void *key, void *base, s32 count, s32 stride, s32 (*cmp)(void *, void *)) {
    s32 low;
    s32 high;
    s32 mid;
    void *ptr;
    s32 result;

    if (count != 0) {
        low = 1;
        high = count;
        do {
            mid = (low + high) >> 1;
            ptr = (u8 *)base + (stride * (mid - 1));
            result = cmp(key, ptr);
            if (result == 0) {
                return ptr;
            }
            if (result < 0) {
                high = mid - 1;
            }
            if (((u32)result >> 31) == 0) {
                low = mid + 1;
            }
        } while (low <= high);
    }
    return NULL;
}

f64 fn_80261344(f32 x) {
    extern f32 lbl_802831B8[];
    extern f32 lbl_802831B0[];
    extern f32 lbl_802831B4[];
    f64 zero;
    f64 three;
    f64 half;
    f64 guess;

    zero = lbl_802831B8[0];
    three = lbl_802831B0[0];
    half = lbl_802831B4[0];
    guess = __frsqrte(x);
    if (x == (f32)zero) {
        return x;
    }
    guess = half * guess * (three - x * (guess * guess));
    guess = half * guess * (three - x * (guess * guess));
    guess = half * guess * (three - x * (guess * guess));
    return x * guess;
}

f32* fn_80261398(void) {
    f32 f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12;
    s32 r5;
    f64 temp_f7;
    
    // Load the first float from lbl_802831BC
    f1 = lbl_802831BC[0];
    // Load some more values from the same array
    f6 = lbl_802831BC[3];
    f12 = lbl_802831BC[4];
    
    // Calculate intermediate value by adding to itself and adding another
    f1 = f1 + f1 + f6;
    f1 = __fabsf(f1);
    f1 = f1 * f6; // scalar product
    
    // Now let's load from a double (which is an array with 2 elements)
    temp_f7 = lbl_8036C348; 
    r5 = (s32)temp_f7;
    
    if ((r5 & 0x1) != 0) {
        f1 = f1 + (f32)r5;
    }
    
    // Perform some computation
    f1 = f1 - r5;
    f4 = f1 * f1;
    f5 = f4 * f4;
    f1 = f1 * f6; // ps_muls1

    f8 = lbl_802831BC[1] * f1; // ps_muls0
    f9 = lbl_802831BC[2] * f1; // ps_muls0
    
    f10 = f1 * f12;  // another scalar product

    f9 = f9 * f5;
    f10 = f10 * f5;
    f9 = f9 * f4;
    f8 = f8 * f4;
    f9 = f8 + f9;
    f9 = f9 * f5;
    f8 = f10 + f9;
    f8 = f8 * f4;
    f8 = f8 + f1;
    
    if (f8 < 0.0f) {
        f8 = -f8;
    }
    
    return lbl_802831BC;
}

void fn_8026146C(s32 *arg0) {
    *arg0 <<= 8;
}

void fn_8026147C(u32 *arg0, s32 arg1) {
    u32 fn_80247F60(s32);
    *arg0 = (u32) (((u32) (*arg0 << 0x10) / fn_80247F60(arg1)) * 0x3E8) >> 5U;
}

u32 fn_802614C4(u32 arg0) {
    return arg0 >> 8U;
}

void fn_802614CC(void) {
    extern u8 lbl_80368978;
    extern u8 lbl_80368AD2;
    extern u8 lbl_80368AD3;
    extern u8 lbl_80368AD4;
    extern u32 lbl_80368AA0;
    void fn_8024C5C8(void);
    void fn_80263764(void);
    void fn_80263504(void);
    void fn_80263608(void);
    void fn_80263784(void);
    void fn_8025CAE0(void);
    void fn_802616E4(s32);
    void fn_80247358(s32);
    void fn_80249E3C(s32);
    void fn_8025E4E8(void);
    void fn_8024BCE4(void);
    void fn_80258888(void);

    u8 i;
    s32 next;
    u8 ad4;
    u32 zero;
    s32 j;
    u32 off;

    if (lbl_80368978 != 0) {
        fn_8024C5C8();
        fn_80263764();
        fn_80263504();
        fn_80263608();
        fn_80263784();
        fn_80263764();
        fn_8025CAE0();
        fn_80263784();
        fn_80263764();

        i = 0;
        next = lbl_80368AD3 + 1;
        ad4 = lbl_80368AD4;
        zero = 0;
        lbl_80368AD4 = ad4 ^ 1;
        lbl_80368AD3 = (u8)(next % 3);

        while (i < lbl_80368AD2) {
            off = i * 0xF8 + 0x24;
            *(u32 *)((u8 *)lbl_80368AA0 + off) = zero;
            *(u32 *)((u8 *)lbl_80368AA0 + off + 4) = zero;
            *(u32 *)((u8 *)lbl_80368AA0 + off + 8) = zero;
            *(u32 *)((u8 *)lbl_80368AA0 + off + 0xC) = zero;
            *(u32 *)((u8 *)lbl_80368AA0 + off + 0x10) = zero;
            i += 1;
        }

        fn_80263784();

        j = 0;
        goto loop2_test;
    loop2_body:
        fn_80263764();
        fn_802616E4(j);
        fn_80247358(0x100);
        fn_80249E3C(0x100);
        fn_80263784();
        j += 1;
    loop2_test:
        if ((u8)j < 5) {
            goto loop2_body;
        }

        fn_80263764();
        fn_802616E4(0);
        fn_8025E4E8();
        fn_80263784();

        fn_80263764();
        fn_8024BCE4();
        fn_80263784();

        fn_80263764();
        fn_80258888();
        fn_80263784();
    }
}

s32 fn_80261620(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_802636C8(void);
    s32 fn_8026341C(void (*)(void), s32, s32);
    s32 fn_802596A8(u8, u8, u32);
    void fn_80262504(void);
    s32 fn_80263534(s32);
    void fn_802636F4(void);
    void fn_802634E4(void);
    extern void fn_802614CC(void);
    extern u8 lbl_80368AD4;
    extern u8 lbl_80368AD3;
    extern u32 lbl_80368AA4;
    s32 a0 = arg0;
    s32 a1 = arg1;
    s32 a2 = arg2;
    s32 a3 = arg3;
    s32 t;

    fn_802636C8();
    lbl_80368AD4 = 0;
    t = 0;
    lbl_80368AD3 = t;
    lbl_80368AA4 = t;

    if ((u32)fn_8026341C(fn_802614CC, a3, a0) == 0) {
        goto error;
    }
    t = a3 & 1;
    a1 = (u8)a1;
    a2 = (u8)a2;
    if ((u32)fn_802596A8(a1, a2, t) == 0) {
        goto error;
    }
    if (a3 & 8) {
        fn_80262504();
    }
    if ((u32)fn_80263534(a3) == 0) {
        goto error;
    }
    fn_802636F4();
    fn_802634E4();
    return 0;
error:
    return -1;
}

int fn_802616E4(int arg0) {
    extern s8 lbl_80368AD0;
    lbl_80368AD0 = arg0;
}

u8 fn_802616EC(void) {
    extern u8 lbl_80368AD0;
    return lbl_80368AD0;
}

s32 fn_802616F4(s32 arg0) {
    typedef struct {
        u8 pad[0xF0];
        u8 unkF0;
        u8 pad2[0xF8 - 0xF1];
    } Entry;
    extern Entry *lbl_80368AA0;

    return lbl_80368AA0[arg0].unkF0 != 0;
}

void fn_80261714(s32 arg0) {
    extern s32 lbl_80368AA4;
    lbl_80368AA4 = arg0;
}

void fn_8026171C(s32 arg0, s32 arg1) {
    typedef struct {
        u8 pad[0x1C];
        s32 unk1C;
        u8 pad2[0xF8 - 0x20];
    } Entry;
    extern Entry *lbl_80368AA0;

    lbl_80368AA0[arg0].unk1C = arg1;
}

void fn_80261730(u8 arg0, u16 arg1, void *arg2, u32 arg3,
                 u32 arg4, u32 arg5, u32 arg6, u32 arg7)
{
    extern u8 *lbl_80368AA0;
    extern u8 lbl_80368AD0;

    extern void fn_80261C40();
    extern void fn_80261C6C();
    extern void fn_80261E10();

    u8 *entry;
    u32 offset;
    u32 flags;
    u32 index;
    u32 i;

    offset = arg0 * 0xF8;
    flags = 0;

    for (index = 0; index <= lbl_80368AD0; index++) {
        entry = lbl_80368AA0 + offset;

        flags |= *(u32 *)(entry + 0x24 + index * 4) & 0x20;
        *(u32 *)(entry + 0x24 + index * 4) = 0;
    }

    entry = lbl_80368AA0 + offset;
    *(u32 *)(entry + 0x24) = flags;

    entry = lbl_80368AA0 + offset;
    *(u32 *)(entry + 0x1C) = arg4;

    entry = lbl_80368AA0 + offset;
    *(u32 *)(entry + 0x18) = arg5;

    entry = lbl_80368AA0 + offset;
    *(u32 *)(entry + 0xF4) = 0;

    entry = lbl_80368AA0 + offset;
    *(u16 *)(entry + 0x70) = arg1;

    entry = lbl_80368AA0 + offset;

    for (i = 0; i < 8; i++) {
        *(u32 *)(entry + 0x74 + i * 4) =
            *(u32 *)((u8 *)arg2 + i * 4);
    }

    if (arg3 != 0) {
        entry = lbl_80368AA0 + offset;
        *(u8 *)(entry + 0xA4) = 0;

        entry = lbl_80368AA0 + offset;
        *(u32 *)(entry + 0xB8) = 0;

        entry = lbl_80368AA0 + offset;
        *(u32 *)(entry + 0xBC) = 0;

        entry = lbl_80368AA0 + offset;
        *(u16 *)(entry + 0xC0) = 0x7FFF;

        entry = lbl_80368AA0 + offset;
        *(u32 *)(entry + 0xC4) = 0;

        entry = lbl_80368AA0 + offset;
        *(u8 *)(entry + 0xE8) = 0xFF;

        entry = lbl_80368AA0 + offset;
        *(u8 *)(entry + 0xE9) = 0xFF;

        entry = lbl_80368AA0 + offset;
        *(u8 *)(entry + 0xEA) = 0xFF;

        entry = lbl_80368AA0 + offset;
        *(u8 *)(entry + 0xEB) = 0xFF;
    }

    if (arg6 != 0) {
        fn_80261C40(arg0, 0);
        fn_80261C6C(arg0, 1);
        fn_80261E10(arg0, arg7);
    }
}

#pragma peephole off
void fn_802618E4(s32 arg0)
{
    extern u8 *lbl_80368AA0;
    extern u8 lbl_80368AD0;
    u8 *object;
    u8 *q;
    s32 off;

    off = arg0 * 0xF8;
    object = lbl_80368AA0 + off;

    if (object[0xF0] == 1) {
        if (lbl_80368AD0 == 0) {
            object[0xF2] = 1;
            q = lbl_80368AA0;
            q = q + off;
            q = q + (lbl_80368AD0 << 2);
            *(u32 *)(q + 0x24) |= 0x20;
        }
    }
}
#pragma peephole on
void fn_80261934(u8 arg0, void *arg1, s32 arg2)
{
    extern u8 *lbl_80368AA0;
    extern u8 lbl_8029FB7C[];
    extern u32 fn_80257940(u32);

    u8 *entry;
    u8 *data;
    u32 value;
    u32 index;

    data = (u8 *)arg1;
    entry = lbl_80368AA0 + (arg0 * 0xF8);

    switch ((u8)arg2) {
    case 0:
        *(u8 *)(entry + 0xA4) = 0;

        *(u32 *)(entry + 0xB8) = *(u16 *)(data + 0x00);
        *(u32 *)(entry + 0xBC) = *(u16 *)(data + 0x02);

        value = *(u16 *)(data + 0x04) << 3;

        if (value > 0x7FFF) {
            value = 0x7FFF;
        }

        *(u16 *)(entry + 0xC0) = value;
        *(u32 *)(entry + 0xC4) = *(u16 *)(data + 0x06);
        break;

    case 1:
        *(u8 *)(entry + 0xA4) = 1;
        *(u8 *)(entry + 0xCA) = 0;

        value = *(u32 *)(data + 0x00);
        *(u32 *)(entry + 0xB8) = (u16)fn_80257940(value);

        value = *(u32 *)(data + 0x04);
        *(u32 *)(entry + 0xBC) = (u16)fn_80257940(value);

        index = *(u16 *)(data + 0x08) >> 2;

        if (index > 0x3FF) {
            index = 0x3FF;
        }

        value = lbl_8029FB7C[index];
        *(u16 *)(entry + 0xC0) = 0xC1 - value;
        break;

    case 2:
        *(u8 *)(entry + 0xA4) = 1;
        *(u8 *)(entry + 0xCA) = 0;

        *(u32 *)(entry + 0xB8) =
            *(u32 *)(data + 0x00) & 0xFFFF;

        *(u32 *)(entry + 0xBC) =
            *(u32 *)(data + 0x04) & 0xFFFF;

        *(u16 *)(entry + 0xC0) = *(u16 *)(data + 0x08);
        *(u32 *)(entry + 0xC4) = *(u16 *)(data + 0x0A);
        break;

    default:
        return;
    }

    *(u32 *)(entry + 0x24) |= 0x10;
}

void fn_80261AE0(s32 arg0, s32 arg1, s32 arg2) {
    typedef struct {
        u8 pad[0x94];
        s32 unk94;
        s32 unk98;
        u8 pad2[0xF8 - 0x9C];
    } Entry;
    extern Entry *lbl_80368AA0;

    lbl_80368AA0[arg0].unk94 = arg1;
    lbl_80368AA0[arg0].unk98 = arg2;
}

u8 fn_80261B00(s32 arg0) {
    typedef struct {
        u8 pad[0x9C];
        u8 unk9C;
        u8 pad2[0xF8 - 0x9D];
    } Entry;
    extern Entry *lbl_80368AA0;

    return lbl_80368AA0[arg0].unk9C;
}

u8 fn_80261B14(s32 arg0) {
    typedef struct {
        u8 pad[0x90];
        u8 unk90;
        u8 pad2[0xF8 - 0x91];
    } Entry;
    extern Entry *lbl_80368AA0;

    return lbl_80368AA0[arg0].unk90;
}

u16 fn_80261B28(s32 arg0) {
    typedef struct {
        u8 pad[0x70];
        u16 unk70;
        u8 pad2[0xF8 - 0x72];
    } Entry;
    extern Entry *lbl_80368AA0;

    return lbl_80368AA0[arg0].unk70;
}

s32 fn_80261B3C(s32 arg0) {
    typedef struct {
        u8 pad[0x7C];
        s32 unk7C;
        u8 pad2[0xF8 - 0x80];
    } Entry;
    extern Entry *lbl_80368AA0;

    return lbl_80368AA0[arg0].unk7C;
}

void fn_80261B50(s32 arg0, s8 arg1) {
    typedef struct {
        u8 pad[0xA0];
        s8 unkA0;
        u8 pad2[0xF8 - 0xA1];
    } Entry;
    extern Entry *lbl_80368AA0;

    lbl_80368AA0[arg0].unkA0 = arg1;
}

void fn_80261B64(s32 arg0, s32 arg1)
{
    extern u8 *lbl_80368AA0;
    extern u8 lbl_80368AD0;
    extern void fn_8025C9E0(void *, s32);

    u8 *entry;

    entry = lbl_80368AA0 + (arg0 * 0xF8);
    *(u8 *)(entry + 0xDA) = lbl_80368AD0;

    entry = lbl_80368AA0 + (arg0 * 0xF8);
    fn_8025C9E0(entry, arg1);
}

void fn_80261BA0(s32 arg0) {
    extern u8 *lbl_80368AA0;
    extern u8 lbl_80368AD0;

    u8 *ptr;
    u32 index;
    u32 value;

    ptr = lbl_80368AA0 + (arg0 * 0xF8);
    index = lbl_80368AD0 * 4;
    ptr += index;

    value = *(u32 *)(ptr + 0x24);
    value |= 0x40;
    *(u32 *)(ptr + 0x24) = value;
}

void fn_80261BC8(s32 arg0, u32 arg1)
{
    extern u8 *lbl_80368AA0;
    extern u8 lbl_80368AD0;

    u8 *entry;
    u32 value;
    u32 index;

    entry = lbl_80368AA0 + (arg0 * 0xF8);

    if ((u16)arg1 >= 0x4000) {
        arg1 = 0x3FFF;
    }

    index = *(u8 *)(entry + 0xE8);
    value = (u16)arg1 << 4;

    if (index != 0xFF) {
        if (*(u32 *)(entry + 0x38 + index * 4) == value) {
            return;
        }
    }

    index = lbl_80368AD0;

    *(u32 *)(entry + 0x38 + index * 4) = value;
    *(u32 *)(entry + 0x24 + index * 4) |= 0x8;

    *(u8 *)(entry + 0xE8) = lbl_80368AD0;
}

void fn_80261C40(s32 arg0, s32 arg1) {
    typedef struct {
        u8 pad[0x24];
        u32 unk24;
        u8 pad2[0xCC - 0x28];
        u16 unkCC;
        u8 pad3[0xF8 - 0xCE];
    } Entry;
    extern Entry *lbl_80368AA0;
    extern u16 lbl_803670C0;
    Entry *e;

    e = &lbl_80368AA0[arg0];
    e->unkCC = ((u16 *)&lbl_803670C0)[arg1 & 0xFF];
    e->unk24 |= 0x100;
}

void fn_80261C6C(s32 arg0, s32 arg1) {
    typedef struct {
        u8 pad[0x24];
        u32 unk24;
        u8 pad2[0xCE - 0x28];
        u16 unkCE;
        u8 pad3[0xF8 - 0xD0];
    } Entry;
    extern Entry *lbl_80368AA0;
    extern u32 lbl_803670C8;
    Entry *e;

    e = &lbl_80368AA0[arg0];
    e->unkCE = ((u16 *)&lbl_803670C8)[arg1 & 0xFF];
    e->unk24 |= 0x80;
}

void fn_80261D90(s32 arg0, u8 arg1, u16 arg2, u16 arg3)
{
    extern u8 *lbl_80368AA0;

    u8 *entry;

    entry = lbl_80368AA0 + (arg0 * 0xF8);

    if (*(u8 *)(entry + 0xD4) == 0) {
        if (arg1 != 1) {
            return;
        }

        *(u8 *)(entry + 0xD4) = 1;
        *(u16 *)(entry + 0xD6) = arg2;
        *(u16 *)(entry + 0xD8) = arg3;
        *(u32 *)(entry + 0x24) |= 0xC00;
    } else {
        if (arg1 == 1) {
            *(u16 *)(entry + 0xD6) = arg2;
            *(u16 *)(entry + 0xD8) = arg3;
            *(u32 *)(entry + 0x24) |= 0x800;
        } else {
            *(u8 *)(entry + 0xD4) = 0;
            *(u32 *)(entry + 0x24) |= 0x400;
        }
    }
}

void fn_80261E10(s32 arg0, u8 arg1) {
    extern s32 lbl_80368AA0;
    s32 temp_r5;
    s32 *temp_r3;

    if (arg1 != 0) {
        temp_r5 = arg0 * 0xF8;
        temp_r3 = (s32 *) (lbl_80368AA0 + temp_r5);
        temp_r3[0x3D] |= 0x80000000;
    } else {
        temp_r5 = arg0 * 0xF8;
        temp_r3 = (s32 *) (lbl_80368AA0 + temp_r5);
        temp_r3[0x3D] &= 0x7FFFFFFF;
    }
}

void fn_80261E6C(s32 arg0, s32 arg1, s32 arg2,
                 f32 arg3, f32 arg4, f32 arg5)
{
    extern u8 *lbl_80368AA0;
    extern u8 lbl_8035B838[];
    extern u16 lbl_802831E0[];
    extern f32 lbl_8036C35C;
    extern f32 lbl_8036C370;

    extern void fn_8025CC38();

    u8 *entry;
    u8 *table;
    f32 values[9];
    u32 flags;
    u32 index;
    u32 value;
    u32 sign;
    u32 option;
    s32 x;
    s32 y;
    s32 z;

    entry = lbl_80368AA0 + arg0 * 0xF8;

    if (!(arg3 >= lbl_8036C35C)) {
        arg3 = lbl_8036C35C;
    }

    if (!(arg4 >= lbl_8036C35C)) {
        arg4 = lbl_8036C35C;
    }

    if (!(arg5 >= lbl_8036C35C)) {
        arg5 = lbl_8036C35C;
    }

    index = *(u8 *)(entry + 0xF3);
    flags = *(u32 *)(entry + 0xF4);

    table = lbl_8035B838 + index * 0xBC;

    sign = flags >> 31;
    option = (*(u32 *)(table + 0x54) == 1);

    fn_8025CC38(arg1, values, arg2, 0, sign, option,
                  arg3, arg4, arg5);

    x = (s32)(values[0] * lbl_8036C370);
    y = (s32)(values[1] * lbl_8036C370);
    z = (s32)(values[2] * lbl_8036C370);

    if (*(u8 *)(entry + 0xE9) == 0xFF ||
        *(u16 *)(entry + 0x4C) != (u16)x ||
        *(u16 *)(entry + 0x4E) != (u16)y ||
        *(u16 *)(entry + 0x50) != (u16)z) {

        *(u16 *)(entry + 0x4C) = (u16)x;
        *(u16 *)(entry + 0x4E) = (u16)y;
        *(u16 *)(entry + 0x50) = (u16)z;

        *(u32 *)(entry + 0x24) |= 1;
        *(u8 *)(entry + 0xE9) = 0;
    }

    x = (s32)(values[3] * lbl_8036C370);
    y = (s32)(values[4] * lbl_8036C370);
    z = (s32)(values[5] * lbl_8036C370);

    if (*(u8 *)(entry + 0xEA) == 0xFF ||
        *(u16 *)(entry + 0x52) != (u16)x ||
        *(u16 *)(entry + 0x54) != (u16)y ||
        *(u16 *)(entry + 0x56) != (u16)z) {

        *(u16 *)(entry + 0x52) = (u16)x;
        *(u16 *)(entry + 0x54) = (u16)y;
        *(u16 *)(entry + 0x56) = (u16)z;

        *(u32 *)(entry + 0x24) |= 2;
        *(u8 *)(entry + 0xEA) = 0;
    }

    x = (s32)(values[6] * lbl_8036C370);
    y = (s32)(values[7] * lbl_8036C370);
    z = (s32)(values[8] * lbl_8036C370);

    if (*(u8 *)(entry + 0xEB) == 0xFF ||
        *(u16 *)(entry + 0x58) != (u16)x ||
        *(u16 *)(entry + 0x5A) != (u16)y ||
        *(u16 *)(entry + 0x5C) != (u16)z) {

        *(u16 *)(entry + 0x58) = (u16)x;
        *(u16 *)(entry + 0x5A) = (u16)y;
        *(u16 *)(entry + 0x5C) = (u16)z;

        *(u32 *)(entry + 0x24) |= 4;
        *(u8 *)(entry + 0xEB) = 0;
    }

    if (flags & 0x80000000) {
        index = ((u32)arg2 << 17 | (u32)arg2 >> 15) & 0x1FE;

        value = *(u16 *)((u8 *)lbl_802831E0 + index);

        *(u16 *)(entry + 0xD0) = (u16)value;
        *(u16 *)(entry + 0xD2) = (u16)(0x20 - value);

        *(u32 *)(entry + 0x24) |= 0x200;
    }
}

void fn_8026212C(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern u16 lbl_8035B838[];
    void *temp_r3;

    temp_r3 = (char *)lbl_8035B838 + (arg0 * 0xBC);
    *(s32 *)((char *)temp_r3 + 0xAC) = arg1;
    *(s32 *)((char *)temp_r3 + 0xB4) = arg2;
    *(s32 *)((char *)temp_r3 + 0xB0) = arg3;
    *(s32 *)((char *)temp_r3 + 0xB8) = arg4;
}

u32 fn_80262154(u32 arg0)
{
    extern u8 *lbl_80368AA0;

    u8 *entry;
    u32 value;
    u32 count;
    u32 remainder;

    entry = lbl_80368AA0 + (arg0 * 0xF8);

    if (*(u8 *)(entry + 0xF0) != 2) {
        return 0;
    }

    switch (*(u8 *)(entry + 0x90)) {
    case 0:
    case 1:
    case 4:
    case 5:
        value = *(u32 *)(entry + 0x20);
        count = *(u32 *)(entry + 0x78);

        remainder = value & 0xF;
        value = ((value - (count * 2)) >> 4) * 14;

        if (remainder < 2) {
            return value;
        }

        return value + remainder - 2;

    case 2:
    case 6:
        value = *(u32 *)(entry + 0x20);
        count = *(u32 *)(entry + 0x78);

        return value - (count >> 1);

    case 3:
        value = *(u32 *)(entry + 0x20);
        count = *(u32 *)(entry + 0x78);

        return value - count;

    default:
        return arg0;
    }
}

void fn_80262200(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void fn_80205110(s32, s32);
    void fn_802625F8(s32, s32, s32, s32, s32, s32);
    s32 fn_802631AC(s32, s32 *);
    s32 sp8;
    s32 fnResult;
    s32 aligned;
    s32 off;

    fnResult = fn_802631AC(arg3, &sp8);
    off = arg1;
    aligned = off & ~0x1F;
    arg2 += off & 0x1F;
    off = arg0 + aligned;
    arg2 = (arg2 + 0x1F) & ~0x1F;
    fn_80205110(off, arg2);
    fn_802625F8(off, fnResult + aligned, arg2, 1, arg4, arg5);
}

u32 fn_80262290(s32 arg0) {
    u32 fn_80263074(s32);
    return fn_80263074(arg0);
}

void fn_802622B0(void) {
    M2C_UNK fn_802631E4();
    fn_802631E4();
}

void fn_802622D0(s32 arg0) {
    void fn_802631AC(s32, s32);
    fn_802631AC(arg0, 0);
}

void fn_802622F4(void) {

}

void fn_80262354(void *arg0, void *arg1) {
    void fn_802627EC(void *);
    fn_802627EC(arg1);
}

void fn_80262378(void **arg0, s32 *arg1, void *arg2) {
    s32 fn_80262B74(s32, s32, void *);
    u32 temp_r3;
    u32 temp_r0;
    u32 var_r4;

    temp_r3 = *(u32 *)((u8 *)*arg0 + 4);
    temp_r0 = temp_r3 >> 24;
    var_r4 = temp_r3 & 0xFFFFFF;
    switch ((s32)temp_r0) {
    case 0:
    case 1:
    case 4:
    case 5:
        var_r4 = (((var_r4 + 0xD) / 7u) << 2) & ~7u;
        break;
    case 2:
    case 6:
        var_r4 *= 2;
        break;
    }
    *arg1 = fn_80262B74(*arg1, (s32)var_r4, arg2);
}

void fn_80262410(void) {
    M2C_UNK fn_80262B1C();
    fn_80262B1C();
}

void fn_802624B8(void) {
    M2C_UNK fn_802627D4();
    fn_802627D4();
}

void fn_802624D8(void) {

}

void fn_802624DC(void *arg0) {
    extern s32 lbl_80363F18[];
    s32 temp_r0;

    temp_r0 = *(s32 *)arg0;
    lbl_80363F18[0] = temp_r0;
    lbl_80363F18[1] = temp_r0;
    lbl_80363F18[2] = *(s32 *)((u8 *)arg0 + 4);
}

void fn_802624F8(void) {
    extern s32 lbl_80368A90;
    lbl_80368A90 = 0;
}

int fn_80262504(void) {
    extern s32 lbl_80368A8C;
    lbl_80368A8C = 1;
}

int fn_80262510(int arg0) {
    extern u8 *lbl_80368AA0;
    u8 *ptr;

    ptr = lbl_80368AA0 + (arg0 * 0xF8);

    if (ptr[0xF0] == 0) {
        return -1;
    }

    return *(int *)(ptr + 0xEC);
}

s32 fn_80262538(s32 arg0) {
    typedef struct {
        u8 pad[0xF0];
        u8 unkF0;
        u8 pad2[0xF8 - 0xF1];
    } Entry;
    extern Entry *lbl_80368AA0;

    return lbl_80368AA0[arg0].unkF0 == 1;
}

void fn_80262558(void *arg0) {
    extern u8 lbl_80363F28[0x284];
    extern u8 lbl_803641AC[0x284];
    u8 *base;
    u8 *ptr;
    u32 count;

    if (*(u32 *)((char *)arg0 + 0xC) == 1) {
        base = lbl_803641AC;
    } else {
        base = lbl_80363F28;
    }

    count = 0;
    ptr = base;
    do {
        if (arg0 == ptr) {
            void (*func)(s32) = *(void (**)(s32))(ptr + 0x20);
            if (func != NULL) {
                func(*(s32 *)(ptr + 0x24));
            }
        }
        count += 1;
        ptr += 0x28;
    } while (count < 0x10);

    *(u8 *)(base + 0x281) -= 1;
}

void fn_802625F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    BOOL OSDisableInterrupts(void);
    void OSRestoreInterrupts(BOOL);
    void fn_80215D9C(void *, s32, s32, s32, s32, void *, s32, void *);
    void fn_80262558(void *);
    extern u8 lbl_80363F28[];
    extern u8 lbl_803641AC[];
    typedef struct {
        s32 pad;
        s32 code;
        s32 unk08;
        s32 flag;
        s32 a0;
        s32 a1;
        s32 a2;
        void *cb;
        s32 a4;
        s32 a5;
    } Slot;
    typedef struct {
        Slot slots[16];
        volatile u8 next;
        volatile u8 count;
    } Queue;
    Queue *q;
    BOOL enabled;
    s32 flag;
    s32 next;

    q = arg3 != 0 ? (Queue *)lbl_803641AC : (Queue *)lbl_80363F28;

start:
    enabled = OSDisableInterrupts();
    if (q->count < 0x10) {
        next = q->next;
        q->slots[next].code = 0x2A;
        flag = arg3 ? 1 : 0;
        q->slots[q->next].unk08 = 0;
        q->slots[q->next].flag = flag;
        q->slots[q->next].a0 = arg0;
        q->slots[q->next].a1 = arg1;
        q->slots[q->next].a2 = arg2;
        q->slots[q->next].cb = (void *)fn_80262558;
        q->slots[q->next].a4 = arg4;
        q->slots[q->next].a5 = arg5;

        fn_80215D9C(
            &q->slots[q->next],
            q->slots[q->next].code,
            q->slots[q->next].unk08,
            q->slots[q->next].flag,
            q->slots[q->next].a0,
            (void *)q->slots[q->next].a1,
            q->slots[q->next].a2,
            q->slots[q->next].cb);

        q->count = (u8)(q->count + 1);
        q->next = (u8)(((s32)q->next + 1) % 16);
        OSRestoreInterrupts(enabled);
        return;
    }
    OSRestoreInterrupts(enabled);
    goto start;
}

void fn_802627D4(void) {
    extern u8 lbl_80363F28[];
    typedef struct {
        u8 pad[0x280];
        volatile u8 next;
        volatile u8 count;
    } Queue;
    Queue *q = (Queue *)lbl_80363F28;
    while (q->count != 0) {
    }
}

void fn_802627EC(u32 arg0)
{
    extern u8 lbl_80363F28[];
    extern u8 lbl_803641AC[];

    extern u32 lbl_80368AF0;
    extern u32 lbl_80368AE8;

    extern u32 fn_802142B0(void);
    extern void *fn_802637D0(u32);
    extern void fn_80263800(void *);
    extern u32 fn_802142B8(void);
    extern void fn_80262FB0(void);
    extern void fn_80262558(void);

    extern void DCFlushRange(void *, u32);
    extern u32 OSDisableInterrupts(void);
    extern void OSRestoreInterrupts(u32);
    extern void fn_80215D9C();

    u8 *queue;
    u8 *entry;
    u16 *buffer;
    u32 base;
    u32 interrupts;
    u32 index;
    u32 i;
    u32 j;

    base = fn_802142B0();
    buffer = fn_802637D0(0x500);

    for (i = 0; i < 0x10; i++) {
        for (j = 0; j < 0x28; j++) {
            buffer[i * 0x28 + j] = 0;
        }
    }

    DCFlushRange(buffer, 0x500);

    queue = lbl_80363F28;

    *(u8 *)(queue + 0x281) = 0;
    *(u8 *)(queue + 0x280) = 0;

    *(u8 *)(lbl_803641AC + 0x281) = 0;
    *(u8 *)(lbl_803641AC + 0x280) = 0;

    for (;;) {
        interrupts = OSDisableInterrupts();

        if (*(u8 *)(queue + 0x281) < 0x10) {
            index = *(u8 *)(queue + 0x280);
            entry = queue + index * 0x28;

            *(u32 *)(entry + 0x04) = 0x2A;
            *(u32 *)(entry + 0x08) = 0;
            *(u32 *)(entry + 0x0C) = 0;
            *(void **)(entry + 0x10) = buffer;
            *(u32 *)(entry + 0x14) = base;
            *(u32 *)(entry + 0x18) = 0x500;
            *(void (**)(void))(entry + 0x1C) = fn_80262558;
            *(u32 *)(entry + 0x20) = 0;
            *(u32 *)(entry + 0x24) = 0;

            fn_80215D9C(
                entry,
                *(u32 *)(entry + 0x04),
                *(u32 *)(entry + 0x08),
                *(u32 *)(entry + 0x0C),
                *(u32 *)(entry + 0x10),
                *(u32 *)(entry + 0x14),
                *(u32 *)(entry + 0x18),
                *(u32 *)(entry + 0x1C)
            );

            *(u8 *)(queue + 0x281) =
                *(u8 *)(queue + 0x281) + 1;

            *(u8 *)(queue + 0x280) =
                (*(u8 *)(queue + 0x280) + 1) & 0xF;

            OSRestoreInterrupts(interrupts);
            break;
        }

        OSRestoreInterrupts(interrupts);
    }

    while (*(u8 *)(queue + 0x281) != 0) {
    }

    fn_80263800(buffer);

    lbl_80368AF0 = base + arg0;

    if (lbl_80368AF0 > fn_802142B8()) {
        lbl_80368AF0 = fn_802142B8();
    }

    lbl_80368AE8 = 0;

    fn_80262FB0();
}

void fn_80262AD0(void) {
    M2C_UNK fn_802142B0();
    fn_802142B0();
}

s32 fn_80262AF0(void) {
    return fn_802142B0() + 0x500;
}

s32 fn_80262B14(s32 arg0) {
    return arg0 - 0x500;
}

void fn_80262B1C(s32 arg0, s32 arg1) {
    u32 fn_80215F30();
    extern u32 lbl_80368AE4;
    extern s32 lbl_80368AE8;
    u32 temp_r31;
    u32 temp_r3;
    u32 var_r0;

    if (arg0 != 0) {
        temp_r31 = (arg1 + 0x1F) & 0xFFFFFFE0;
        temp_r3 = fn_80215F30();
        var_r0 = temp_r31;
        if (temp_r31 < temp_r3) {
            var_r0 = temp_r3;
        }
        lbl_80368AE4 = var_r0;
    }
    lbl_80368AE8 = arg0;
}

u32 fn_80262B74(void *arg0, u32 arg1, void *arg2)
{
    extern u8 lbl_80363F28[];
    extern u32 lbl_80368AEC;
    extern u32 lbl_80368AE4;
    extern u32 (*lbl_80368AE8)(void *, u32);

    extern u32 fn_802142B0(void);
    extern void fn_80262558(void);
    extern void fn_80215D9C(
        void *, u32, u32, u32, u32, u32, u32, u32
    );

    extern void DCFlushRange(void *, u32);
    extern u32 OSDisableInterrupts(void);
    extern void OSRestoreInterrupts(u32);

    u8 *queue;
    u8 *entry;
    u8 *state;
    u8 *data;
    u32 size;
    u32 offset;
    u32 originalOffset;
    u32 chunkSize;
    u32 result;
    u32 interrupts;
    u32 index;

    data = (u8 *)arg0;
    state = (u8 *)arg2;
    size = (arg1 + 0x1F) & ~0x1F;

    if (*(u32 *)(state + 0) ==
        fn_802142B0() + 0x500) {

        if (*(u32 *)(state + 8) + size > lbl_80368AEC) {
            return 0;
        }
    } else {
        if (*(u32 *)(state + 8) + size >
            *(u32 *)(state + 4)) {
            return 0;
        }
    }

    originalOffset = *(u32 *)(state + 8);
    offset = originalOffset;

    queue = lbl_80363F28;

    if (lbl_80368AE8 == 0) {
        DCFlushRange(data, size);

        for (;;) {
            interrupts = OSDisableInterrupts();

            if (*(u8 *)(queue + 0x281) < 0x10) {
                index = *(u8 *)(queue + 0x280);
                entry = queue + index * 0x28;

                *(u32 *)(entry + 4) = 0x2A;
                *(u32 *)(entry + 8) = 0;
                *(u32 *)(entry + 0x0C) = 0;
                *(void **)(entry + 0x10) = data;
                *(u32 *)(entry + 0x14) = offset;
                *(u32 *)(entry + 0x18) = size;
                *(void (**)(void))(entry + 0x1C) =
                    fn_80262558;
                *(u32 *)(entry + 0x20) = 0;
                *(u32 *)(entry + 0x24) = 0;

                fn_80215D9C(
                    entry,
                    *(u32 *)(entry + 4),
                    *(u32 *)(entry + 8),
                    *(u32 *)(entry + 0x0C),
                    *(u32 *)(entry + 0x10),
                    *(u32 *)(entry + 0x14),
                    *(u32 *)(entry + 0x18),
                    *(u32 *)(entry + 0x1C)
                );

                ++*(u8 *)(queue + 0x281);

                *(u8 *)(queue + 0x280) =
                    (*(u8 *)(queue + 0x280) + 1) & 0xF;

                OSRestoreInterrupts(interrupts);
                break;
            }

            OSRestoreInterrupts(interrupts);
        }

        *(u32 *)(state + 8) += size;
        return originalOffset;
    }

    while (size != 0) {
        while (*(u8 *)(queue + 0x281) != 0) {
        }

        chunkSize = size;

        if (chunkSize >= lbl_80368AE4) {
            chunkSize = lbl_80368AE4;
        }

        result = lbl_80368AE8(data, chunkSize);

        DCFlushRange((void *)result, chunkSize);

        for (;;) {
            interrupts = OSDisableInterrupts();

            if (*(u8 *)(queue + 0x281) < 0x10) {
                index = *(u8 *)(queue + 0x280);
                entry = queue + index * 0x28;

                *(u32 *)(entry + 4) = 0x2A;
                *(u32 *)(entry + 8) = 0;
                *(u32 *)(entry + 0x0C) = 0;
                *(u32 *)(entry + 0x10) = result;
                *(u32 *)(entry + 0x14) = offset;
                *(u32 *)(entry + 0x18) = chunkSize;
                *(void (**)(void))(entry + 0x1C) =
                    fn_80262558;
                *(u32 *)(entry + 0x20) = 0;
                *(u32 *)(entry + 0x24) = 0;

                fn_80215D9C(
                    entry,
                    *(u32 *)(entry + 4),
                    *(u32 *)(entry + 8),
                    *(u32 *)(entry + 0x0C),
                    *(u32 *)(entry + 0x10),
                    *(u32 *)(entry + 0x14),
                    *(u32 *)(entry + 0x18),
                    *(u32 *)(entry + 0x1C)
                );

                ++*(u8 *)(queue + 0x281);

                *(u8 *)(queue + 0x280) =
                    (*(u8 *)(queue + 0x280) + 1) & 0xF;

                OSRestoreInterrupts(interrupts);
                break;
            }

            OSRestoreInterrupts(interrupts);
        }

        size -= chunkSize;
        data += chunkSize;
        offset += chunkSize;

        *(u32 *)(state + 8) = offset;
    }

    return originalOffset;
}

void fn_80262F98(s32 unused, s32 arg1, void *arg2) {
    *(s32 *)((u8 *)arg2 + 8) = *(s32 *)((u8 *)arg2 + 8) - ((arg1 + 0x1F) & ~0x1F);
}

void fn_80262FB0(void) {
    extern u8 lbl_80364430[];
    extern void *lbl_80368AE0;
    extern void *lbl_80368ADC;
    extern void *lbl_80368AD8;
    extern u32 lbl_80368AF0;
    extern u32 lbl_80368AEC;

    u8 *base;
    u8 *p;
    u32 i;
    u32 z;
    s32 n;

    base = lbl_80364430;
    z = 0;
    n = 7;
    lbl_80368AE0 = (void *)z;
    p = base + 0x10;
    i = 1;
    lbl_80368ADC = (void *)z;
    lbl_80368AD8 = base;
    for (; n > 0; n--) {
        *(u8 **)(p - 0x10) = p;
        *(u8 **)(p + 0x00) = p + 0x10;
        *(u8 **)(p + 0x10) = p + 0x20;
        *(u8 **)(p + 0x20) = p + 0x30;
        *(u8 **)(p + 0x30) = p + 0x40;
        *(u8 **)(p + 0x40) = p + 0x50;
        *(u8 **)(p + 0x50) = p + 0x60;
        *(u8 **)(p + 0x60) = p + 0x70;
        i += 8;
        p += 0x80;
    }

    base = lbl_80364430;
    p = base + (i << 4);
    if (i < 0x40U) {
        do {
            *(u8 **)(p - 0x10) = p;
            p += 0x10;
            i += 1;
        } while (i < 0x40U);
    }

    base = lbl_80364430;
    {
        u32 af0 = lbl_80368AF0;
        p = base + (i << 4);
        z = 0;
        *(u8 **)(p - 0x10) = (u8 *)z;
        lbl_80368AEC = af0;
    }
}

u8 fn_80263074(u32 arg0)
{
    extern u8 lbl_80364430[];
    extern void *lbl_80368ADC;
    extern void *lbl_80368AD8;
    extern void *lbl_80368AE0;
    extern u32 lbl_80368AEC;

    extern void *fn_80258AD8(void);

    u32 size;
    u32 remaining;
    u32 smallest;
    u8 *current;
    u8 *previous;
    u8 *selected;

    size = (arg0 + 0x1F) & ~0x1F;
    smallest = 0xFFFFFFFF;
    previous = 0;
    selected = 0;
    current = lbl_80368ADC;

    while (current != 0) {
        remaining = *(u32 *)(current + 0x0C);

        if (remaining == size) {
            selected = current;
            break;
        }

        if (remaining > size && remaining < smallest) {
            selected = current;
            smallest = remaining;
            previous = current;
        }

        current = *(u8 **)current;
    }

    if (selected == 0) {
        if (lbl_80368AD8 != 0) {
            current = fn_80258AD8();
            remaining = lbl_80368AEC - size;

            if (remaining >= *(u32 *)(current + 8)) {
                selected = lbl_80368AD8;
                lbl_80368AD8 = *(void **)selected;

                *(u32 *)(selected + 0x0C) = size;
                *(u32 *)(selected + 8) = size;

                lbl_80368AEC = remaining;
                *(u32 *)(selected + 4) = remaining;

                *(void **)selected = lbl_80368AE0;
                lbl_80368AE0 = selected;
            }
        }
    } else {
        if (previous != 0) {
            *(void **)previous = *(void **)selected;
        } else {
            lbl_80368ADC = *(void **)selected;
        }

        *(u32 *)(selected + 8) = size;
        *(void **)selected = lbl_80368AE0;
        lbl_80368AE0 = selected;
    }

    if (selected == 0) {
        return 0xFF;
    }

    return (u8)(((selected - lbl_80364430) >> 4) & 0xFF);
}

s32 fn_802631AC(u8 arg0, s32 *arg1) {
    extern struct { s32 unk00; s32 unk04; s32 unk08; s32 unk0C; } lbl_80364430[];

    if (arg1 != NULL) {
        *arg1 = lbl_80364430[arg0].unk08;
    }
    return lbl_80364430[arg0].unk04;
}

void fn_802631E4(s32 arg0)
{
    extern u8 lbl_80364430[];
    extern void *lbl_80368AE0;
    extern void *lbl_80368AD8;
    extern void *lbl_80368ADC;
    extern u32 lbl_80368AEC;
    extern u32 lbl_80368AF0;

    u8 *entry;
    u8 *current;
    u8 *previous;
    u32 value;

    entry = lbl_80364430 + ((u32)arg0 & 0xFF) * 0x10;
    current = lbl_80368AE0;
    previous = 0;

    while (current != 0) {
        if (current == entry) {
            if (previous != 0) {
                *(void **)previous = *(void **)current;
            } else {
                lbl_80368AE0 = *(void **)current;
            }
            break;
        }

        previous = current;
        current = *(u8 **)current;
    }

    if (*(u32 *)(entry + 4) == lbl_80368AEC) {
        *(void **)entry = lbl_80368AD8;
        lbl_80368AD8 = entry;
        return;
    }

    value = 0xFFFFFFFF;
    current = lbl_80368AE0;

    while (current != 0) {
        u32 size;

        size = *(u32 *)(current + 4);
        if (size <= value) {
            value = size;
        }
        current = *(u8 **)current;
    }

    current = lbl_80368ADC;

    while (current != 0) {
        u8 *next;

        next = *(u8 **)current;
        if (*(u32 *)(current + 4) < value) {
            lbl_80368ADC = next;
            *(void **)current = lbl_80368AD8;
            lbl_80368AD8 = current;
            current = next;
        } else {
            break;
        }
    }

    if (value == 0xFFFFFFFF) {
        lbl_80368AEC = lbl_80368AF0;
    } else {
        lbl_80368AEC = value;
    }

    if (current == 0) {
        return;
    }

    *(void **)current = lbl_80368ADC;
    lbl_80368ADC = current;
}

void fn_802632DC(void)
{
    extern u8 lbl_80368B20;
    extern u32 lbl_80368B1C;
    extern s32 lbl_80368B0C;
    extern u32 lbl_80368B18;
    extern u32 lbl_80368B10;
    extern u32 lbl_80368B14;
    extern void (*lbl_80368B24)(void);

    extern void fn_80213760(void *arg0, s32 arg1);
    extern u32 OSGetTick(void);
    extern u32 OSEnableInterrupts(void);
    extern u32 OSDisableInterrupts(void);

    u32 index;
    u32 address;

    index = lbl_80368B20 + 1;
    index = (index + 1) & 0xFF;
    index = (index >> 1) + (index & 1);
    index &= 0xFF;
    lbl_80368B20 = (u8)index;

    address = (lbl_80368B1C + 0x80000000) + index * 0x280;
    fn_80213760((void *)address, 0x280);

    lbl_80368B0C = OSGetTick();

    if (lbl_80368B18 != 0) {
        if (lbl_80368B10 == 0) {
            lbl_80368B10 = 1;
            OSEnableInterrupts();
            lbl_80368B24();
            OSDisableInterrupts();
            lbl_80368B10 = 0;
        }

        lbl_80368B14 = 1;
    }
}

void fn_80263384(void) {
    extern s32 lbl_80368B08;
    extern s32 lbl_80368B18;
    lbl_80368B18 = 1;
    lbl_80368B08 = 1;
}

void fn_80263394(void)
{
    extern s32 lbl_80368B18;
    extern s32 lbl_80368B14;
    extern s32 lbl_80368B10;
    extern void (*lbl_80368B24)(void);
    
    lbl_80368B18 = 1;
    if (lbl_80368B14 != 0) {
        lbl_80368B14 = 0;
        if (lbl_80368B10 == 0) {
            lbl_80368B10 = 1;
            OSEnableInterrupts();
            lbl_80368B24();
            OSDisableInterrupts();
            lbl_80368B10 = 0;
        }
    }
}

void fn_802633F8(void) {
    M2C_UNK fn_8020AEC4(M2C_UNK *);
    extern M2C_UNK lbl_80368B00;
    fn_8020AEC4(&lbl_80368B00);
}

int fn_8026341C(s32 arg0) {
    s32 temp_r31;
    
    temp_r31 = lbl_8034C110[arg0];
    return temp_r31;
}

int fn_802634E4(void) {
    M2C_UNK fn_802137E8();
    fn_802137E8();
}

int fn_80263504(void) {
    extern s32 lbl_80368B1C;
    extern u8 lbl_80368B20;
    s32 x;

    x = lbl_80368B20 + 2;
    return lbl_80368B1C + (u8)(x % 4) * 0x280;
}

s32 fn_80263534(void)
{
    extern u8 lbl_80364840[];
    extern u8 lbl_803648A0[];
    extern u8 lbl_802A26A0[];
    extern u8 lbl_80368B00;
    extern u16 lbl_803670D0;
    extern u32 lbl_80368B08;

    extern void fn_80263384(void);
    extern void fn_80263394(void);
    extern void fn_802633F8(void);
    extern void OSInitThreadQueue(void *queue);
    extern void fn_80215F8C(void);
    extern void fn_80216050(void *arg0);
    extern void fn_802636F4(void);
    extern void fn_8026372C(void);

    u8 *config;

    config = lbl_80364840;

    *(void **)(config + 0x0C) = lbl_802A26A0;
    *(u16 *)(config + 0x10) = lbl_803670D0;
    *(u32 *)(config + 0x14) = 0;
    *(void **)(config + 0x18) = lbl_803648A0;
    *(u32 *)(config + 0x1C) = 0x2000;
    *(u32 *)(config + 0x20) = 0;
    *(u16 *)(config + 0x24) = 0x10;
    *(u16 *)(config + 0x26) = 0x30;
    *(void **)(config + 0x28) = fn_80263384;
    *(void **)(config + 0x2C) = fn_80263394;
    *(void **)(config + 0x30) = fn_802633F8;
    *(u32 *)(config + 0x34) = 0;
    *(u32 *)(config + 0x04) = 0;

    OSInitThreadQueue(&lbl_80368B00);
    fn_80215F8C();
    fn_80216050(config);

    lbl_80368B08 = 0;
    fn_802636F4();

    if (lbl_80368B08 != 0) {
        fn_8026372C();
        return 1;
    }

    return 0;
}

void fn_80263608(s32 arg0)
{
    extern u32 lbl_80368A88;
    extern u16 lbl_80368A84;
    extern u32 lbl_80368B18;

    extern s32 fn_8026367C(s32 arg0);
    extern void fn_8025A3A4(s32 arg0, s32 arg1);
    extern void fn_802037B0(void);
    extern void fn_80215F78(u32 arg0);
    extern u32 fn_80215F40(void);

    u32 value;

    value = fn_8026367C(arg0);
    fn_8025A3A4(arg0, value);

    value = 0;
    value = lbl_80368A88;
    lbl_80368B18 = 0;

    fn_802037B0();

    fn_80215F78((lbl_80368A84) | 0xBABE0000);
    if (fn_80215F40() == 0) {
        fn_80215F78(value);
        fn_80215F40();
    }
}

u32 fn_8026367C(void) {
    u32 OSGetTick(void);
    extern s32 lbl_80368B0C;
    return ((OSGetTick() - lbl_80368B0C) * 8) / ((*(u32 *)0x800000F8 >> 2) / 125000);
}

int fn_802636C8(void) {
    extern s32 lbl_80368AF8;
    extern s16 lbl_80368AFC;
    lbl_80368AF8 = OSDisableInterrupts();
    lbl_80368AFC = 1;
}

int fn_802636F4(void) {
    int OSRestoreInterrupts(int);
    extern u16 lbl_80368AFC;
    extern int lbl_80368AF8;
    int count;
    count = lbl_80368AFC;
    count -= 1;
    lbl_80368AFC = count;
    if ((u16)count == 0) {
        return OSRestoreInterrupts(lbl_80368AF8);
    }
    return count;
}

int fn_8026372C(void) {
    extern u16 lbl_80368AFC;
    extern s32 lbl_80368AF8;
    s32 count;

    count = lbl_80368AFC;
    lbl_80368AFC = count + 1;
    if ((u16)count == 0) {
        lbl_80368AF8 = OSDisableInterrupts();
    }
}

int fn_80263764(void) {
    M2C_UNK OSDisableInterrupts();
    OSDisableInterrupts();
}

int fn_80263784(void) {
    M2C_UNK OSEnableInterrupts();
    OSEnableInterrupts();
}

extern u8 lbl_80363F18[16];

void fn_802637A4(s32 arg0) {
    ((void (*)(s32))*(void **)(lbl_80363F18 + 0))(arg0);
}

void fn_802637D0(s32 arg0) {
    extern u8 lbl_80363F18[16];
    ((void (*)(s32))*(void **)(lbl_80363F18 + 4))(arg0);
}

void fn_80263800(s32 arg0) {
    extern u8 lbl_80363F18[16];
    ((void (*)(s32))*(void **)(lbl_80363F18 + 8))(arg0);
}

void fn_80263830(void *arg0) {
    M2C_UNK fn_8026386C(f32, f32, f32, f32, f32);
    M2C_FIELD(arg0, s8 *, 0x13C) = 0;
    fn_8026386C(M2C_FIELD(arg0, f32 *, 0x140), M2C_FIELD(arg0, f32 *, 0x148), M2C_FIELD(arg0, f32 *, 0x144), M2C_FIELD(arg0, f32 *, 0x14C), M2C_FIELD(arg0, f32 *, 0x150));
}

s32 fn_8026386C(
    void *arg0,
    f32 arg1,
    f32 arg2,
    f32 arg3,
    f32 arg4,
    f32 arg5
)
{
    extern f32 lbl_8036C378;
    extern f32 lbl_8036C37C;
    extern f32 lbl_8036C380;
    extern f32 lbl_8036C384;
    extern f32 lbl_8036C388;
    extern f32 lbl_8036C38C;
    extern f32 lbl_8036C398;
    extern f32 lbl_8036C39C;
    extern f64 lbl_8036C390;
    extern u32 lbl_802A4560[];

    extern void *fn_802637A4(s32);
    extern f64 fn_802387C8(f64, f32);
    extern void *memset(void *, s32, u32);

    u8 *data;
    u8 *record;
    u32 channel;
    u32 sub;
    u32 index;
    u32 length;
    u32 size;
    s32 offset;
    f32 minimum;
    f32 frequency;
    f32 value;

    data = (u8 *)arg0;
    minimum = lbl_8036C378;

    if (arg1 < minimum ||
        arg1 > lbl_8036C37C ||
        arg2 < lbl_8036C380 ||
        arg2 > lbl_8036C384 ||
        arg3 < minimum ||
        arg3 > lbl_8036C37C ||
        arg4 < minimum ||
        arg4 > lbl_8036C37C ||
        arg5 < minimum ||
        arg5 > lbl_8036C388) {
        return 0;
    }

    memset(data, 0, 0x13C);

    frequency = lbl_8036C38C * arg2;

    for (channel = 0; channel < 3; channel++) {
        for (sub = 0; sub < 2; sub++) {
            index = channel * 2 + sub;
            record = data + index * 0x14;

            length = lbl_802A4560[index] + 2;
            size = length * 4;

            *(u32 *)(record + 0x80) = size;
            *(void **)(record + 0x84) = fn_802637A4(size);

            memset(*(void **)(record + 0x84), 0, size);
            *(f32 *)(record + 0x88) = minimum;

            offset = *(s32 *)(record + 0x78) -
                     ((s32)length >> 1) * 4;

            offset += size;

            if (offset < 0) {
                *(s32 *)(record + 0x78) = 0;
                offset = -(s32)(lbl_802A4560[index] * 4);

                while (offset < 0) {
                    offset += size;
                }
            }

            *(s32 *)(record + 0x7C) = offset;

            value = (f32)fn_802387C8(
                lbl_8036C390,
                (f32)(-(s32)(lbl_802A4560[index] * 3)) / frequency
            );

            *(f32 *)(data + index * 4 + 0xF4) = value;
        }
    }

    for (channel = 0; channel < 3; channel++) {
        for (sub = 0; sub < 2; sub++) {
            index = channel * 2 + sub;
            record = data + index * 0x14;

            length = lbl_802A4560[sub + 2] + 2;
            size = length * 4;

            *(u32 *)(record + 0x08) = size;
            *(void **)(record + 0x0C) = fn_802637A4(size);

            memset(*(void **)(record + 0x0C), 0, size);
            *(f32 *)(record + 0x10) = minimum;

            offset = *(s32 *)(record + 0x00) -
                     ((s32)length >> 1) * 4;

            offset += size;

            if (offset < 0) {
                *(s32 *)(record + 0x00) = 0;
                offset = -(s32)(lbl_802A4560[sub + 2] * 4);

                while (offset < 0) {
                    offset += size;
                }
            }

            *(s32 *)(record + 0x04) = offset;
        }

        *(f32 *)(data + channel * 4 + 0x10C) = minimum;
    }

    *(f32 *)(data + 0xF0) = arg1;
    *(f32 *)(data + 0x118) = arg3;
    *(f32 *)(data + 0x11C) = arg4;

    value = *(f32 *)(data + 0x11C);

    if (value < lbl_8036C398) {
        *(f32 *)(data + 0x11C) = lbl_8036C398;

        value = lbl_8036C398 +
                lbl_8036C39C * *(f32 *)(data + 0x11C);

        *(f32 *)(data + 0x11C) =
            lbl_8036C37C - value;
    }

    if (arg5 != minimum) {
        value = lbl_8036C38C * arg5;
        *(u32 *)(data + 0x120) = (u32)(s32)value;

        for (channel = 0; channel < 3; channel++) {
            record = data + channel * 4;
            size = *(u32 *)(data + 0x120) * 4;

            *(void **)(record + 0x124) = fn_802637A4(size);

            memset(*(void **)(record + 0x124), 0, size);

            *(void **)(record + 0x130) =
                *(void **)(record + 0x124);
        }
    } else {
        *(u32 *)(data + 0x120) = 0;
        *(u32 *)(data + 0x130) = 0;
        *(u32 *)(data + 0x124) = 0;
        *(u32 *)(data + 0x134) = 0;
        *(u32 *)(data + 0x128) = 0;
        *(u32 *)(data + 0x138) = 0;
        *(u32 *)(data + 0x12C) = 0;
    }

    return 1;
}

void fn_80263C94(u8 arg0, void *arg1, void *arg2) {
    M2C_UNK fn_802648CC(s32, s32, s32, void *);
    switch ((s32) arg0) {                           /* irregular */
    case 0:
        if ((u8) M2C_FIELD(arg2, u8 *, 0x1C4) == 0) {
            fn_802648CC(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), arg2);
        }
        /* fallthrough */
    case 1:
        return;
    }
}

void fn_80263CF0(void *arg0) {
    M2C_UNK fn_80263D30(f32, f32, f32, f32, f32, f32);
    M2C_FIELD(arg0, s8 *, 0x1C4) = 0;
    fn_80263D30(M2C_FIELD(arg0, f32 *, 0x1C8), M2C_FIELD(arg0, f32 *, 0x1D0), M2C_FIELD(arg0, f32 *, 0x1CC), M2C_FIELD(arg0, f32 *, 0x1D4), M2C_FIELD(arg0, f32 *, 0x1D8), M2C_FIELD(arg0, f32 *, 0x1DC));
}

s32 fn_80263D30(
    void *arg0,
    f32 arg1,
    f32 arg2,
    f32 arg3,
    f32 arg4,
    f32 arg5,
    f32 arg6
)
{
    extern f32 lbl_8036C3A8;
    extern f32 lbl_8036C3AC;
    extern f32 lbl_8036C3B0;
    extern f32 lbl_8036C3B4;
    extern f32 lbl_8036C3B8;
    extern f32 lbl_8036C3BC;
    extern f32 lbl_8036C3C8;
    extern f32 lbl_8036C3CC;
    extern f64 lbl_8036C3C0;
    extern f64 lbl_8036C3D0;
    extern u32 lbl_802A4570[];

    extern void *fn_802637A4(s32);
    extern f64 fn_802387C8(f64, f32);
    extern void *memset(void *, s32, u32);

    u8 *data;
    u8 *record;
    u32 channel;
    u32 sub;
    u32 index;
    u32 length;
    u32 size;
    s32 offset;
    f32 minimum;
    f32 frequency;
    f32 value;

    data = (u8 *)arg0;

    minimum = lbl_8036C3A8;

    if (arg1 < minimum ||
        arg1 > lbl_8036C3AC ||
        arg2 < lbl_8036C3B0 ||
        arg2 > lbl_8036C3B4 ||
        arg3 < minimum ||
        arg3 > lbl_8036C3AC ||
        arg6 < minimum ||
        arg6 > lbl_8036C3AC ||
        arg4 < minimum ||
        arg4 > lbl_8036C3AC ||
        arg5 < minimum ||
        arg5 > lbl_8036C3B8) {
        return 0;
    }

    memset(data, 0, 0x1C4);

    frequency = lbl_8036C3BC * arg2;

    /*
     * Initialize the first three buffers for each channel.
     */
    for (channel = 0; channel < 3; channel++) {
        for (sub = 0; sub < 3; sub++) {
            index = channel * 3 + sub;
            record = data + index * 0x14;

            length = lbl_802A4570[index] + 2;
            size = length * 4;

            *(u32 *)(record + 0xBC) = size;
            *(void **)(record + 0xC0) = fn_802637A4(size);

            memset(*(void **)(record + 0xC0), 0, size);
            *(f32 *)(record + 0xC4) = minimum;

            offset = *(s32 *)(record + 0xB4) -
                     ((s32)length >> 1) * 4;

            while (offset < 0) {
                offset += size;
            }

            if (offset >= 0) {
                *(s32 *)(record + 0xB4) = 0;
                offset = -(s32)(lbl_802A4570[index] * 4);

                while (offset < 0) {
                    offset += size;
                }
            }

            *(s32 *)(record + 0xB8) = offset;

            value = (f32)fn_802387C8(
                lbl_8036C3C0,
                (f32)(-(s32)(lbl_802A4570[index] * 3)) / frequency
            );

            *(f32 *)(data + index * 0x14 + 0x16C) = value;
        }
    }

    /*
     * Initialize the next two buffers for each channel.
     */
    for (channel = 0; channel < 3; channel++) {
        for (sub = 0; sub < 2; sub++) {
            index = channel * 3 + sub;
            record = data + index * 0x14;

            length = lbl_802A4570[sub + 3] + 2;
            size = length * 4;

            *(u32 *)(record + 0x08) = size;
            *(void **)(record + 0x0C) = fn_802637A4(size);

            memset(*(void **)(record + 0x0C), 0, size);
            *(f32 *)(record + 0x10) = minimum;

            offset = *(s32 *)(record + 0x00) -
                     ((s32)length >> 1) * 4;

            while (offset < 0) {
                offset += size;
            }

            if (offset >= 0) {
                *(s32 *)(record + 0x00) = 0;
                offset = -(s32)(lbl_802A4570[sub + 3] * 4);

                while (offset < 0) {
                    offset += size;
                }
            }

            *(s32 *)(record + 0x04) = offset;
        }
    }

    /*
     * Initialize the final buffer for each channel.
     */
    for (channel = 0; channel < 3; channel++) {
        record = data + channel * 0x3C;

        length = lbl_802A4570[channel + 5] + 2;
        size = length * 4;

        *(u32 *)(record + 0x30) = size;
        *(void **)(record + 0x34) = fn_802637A4(size);

        memset(*(void **)(record + 0x34), 0, size);
        *(f32 *)(record + 0x38) = minimum;

        offset = *(s32 *)(record + 0x28) -
                 ((s32)length >> 1) * 4;

        while (offset < 0) {
            offset += size;
        }

        if (offset >= 0) {
            *(s32 *)(record + 0x28) = 0;
            offset = -(s32)(lbl_802A4570[channel + 5] * 4);

            while (offset < 0) {
                offset += size;
            }
        }

        *(s32 *)(record + 0x2C) = offset;

        *(f32 *)(data + channel * 4 + 0x190) = minimum;
    }

    *(f32 *)(data + 0x168) = arg1;
    *(f32 *)(data + 0x19C) = arg3;
    *(f32 *)(data + 0x1A8) = arg6;
    *(f32 *)(data + 0x1A0) = arg4;

    value = *(f32 *)(data + 0x1A0);

    if (value < lbl_8036C3C8) {
        *(f32 *)(data + 0x1A0) = lbl_8036C3C8;

        value = lbl_8036C3C8 +
                lbl_8036C3CC * *(f32 *)(data + 0x1A0);

        *(f32 *)(data + 0x1A0) =
            lbl_8036C3AC - value;
    }

    if (arg5 != minimum) {
        value = lbl_8036C3BC * arg5;
        *(u32 *)(data + 0x1A4) = (u32)(s32)value;

        for (channel = 0; channel < 3; channel++) {
            record = data + channel * 4;

            size = *(u32 *)(data + 0x1A4) * 4;

            *(void **)(record + 0x1AC) = fn_802637A4(size);

            memset(*(void **)(record + 0x1AC), 0, size);

            *(void **)(record + 0x1B8) =
                *(void **)(record + 0x1AC);
        }
    } else {
        *(u32 *)(data + 0x1A4) = 0;
        *(u32 *)(data + 0x1B8) = 0;
        *(u32 *)(data + 0x1AC) = 0;
        *(u32 *)(data + 0x1BC) = 0;
        *(u32 *)(data + 0x1B0) = 0;
        *(u32 *)(data + 0x1C0) = 0;
        *(u32 *)(data + 0x1B4) = 0;
    }

    return 1;
}

void *fn_8026423C(void *arg0, void *arg1) {
    double temp_f0;
    s32 var_ctr;
    float f5, f6, f7, f8;
    float temp_f8_1;
    float temp_f8_2;
    float temp_f9_1;
    float temp_f9_2;
    
    temp_f0 = *(double*)0x8036C3D8;
    var_ctr = 0x4F;
    do {
        f5 = ((float*)arg0)[2] - (float)temp_f0;
        f6 = ((float*)arg0)[3] - (float)temp_f0;
        f7 = ((float*)arg1)[2] - (float)temp_f0;
        f8 = ((float*)arg1)[3] - (float)temp_f0;
        
        temp_f8_1 = f5 * ((float*)arg0)[0];
        temp_f8_2 = f6 * ((float*)arg0)[1];
        temp_f9_1 = f7 * ((float*)arg1)[0];
        temp_f9_2 = f8 * ((float*)arg1)[1];
        
        temp_f8_1 += temp_f8_2;
        temp_f9_1 += temp_f9_2;
        
        *((s32*)((char*)arg0 + 0xC)) = (s32)temp_f8_1;
        *((s32*)((char*)arg0 + 0x14)) = (s32)temp_f9_1;
        
        arg0 = (char*)arg0 + 8;
        arg1 = (char*)arg1 + 8;
        var_ctr -= 1;
    } while (var_ctr != 0);
    
    return arg0;
}

void fn_802643C0(s32 *arg0, u8 *arg1, s32 arg2)
{
    extern f32 lbl_8036C3E0;
    extern f32 lbl_8036C3E4;
    extern f64 lbl_8036C3D8;

    u32 channel;
    u32 count;
    u32 ring_length;
    u32 ring_start;
    u32 ring_pos;

    u8 *src;
    u8 *dst;
    u8 *src_state;
    u8 *dst_state;
    u8 *ring_state;

    f32 coeff;
    f32 scale;
    f32 feedback;
    f32 phase;
    f32 previous;
    f32 channel_coeff[3];
    f32 src_value[3];
    f32 dst_value[3];

    u32 src_index[3];
    u32 src_limit[3];
    u32 dst_index[3];
    u32 dst_limit[3];

    u8 *src_buffer[3];
    u8 *dst_buffer[3];

    s32 pass;
    s32 i;
    s32 output;

    channel = (u32)arg2;
    count = *(u32 *)(arg1 + 0x1A4);

    src_state = arg1 + 0xB4 + channel * 0x3C;
    dst_state = arg1 + channel * 0x3C;
    ring_state = arg1 + channel * 4;

    coeff = *(f32 *)(arg1 + 0x168);
    scale = lbl_8036C3E0;
    feedback = *(f32 *)(arg1 + 0x19C) * lbl_8036C3E4;

    channel_coeff[0] = *(f32 *)(arg1 + channel * 12 + 0x16C);
    channel_coeff[1] = *(f32 *)(arg1 + channel * 12 + 0x170);
    channel_coeff[2] = *(f32 *)(arg1 + channel * 12 + 0x174);

    src_value[0] = *(f32 *)(arg1 + channel * 4 + 0x190);

    src_buffer[0] = *(u8 **)(src_state + 0x0C);
    src_buffer[1] = *(u8 **)(src_state + 0x20);
    src_buffer[2] = *(u8 **)(src_state + 0x34);

    dst_buffer[0] = *(u8 **)(dst_state + 0x0C);
    dst_buffer[1] = *(u8 **)(dst_state + 0x20);
    dst_buffer[2] = *(u8 **)(dst_state + 0x34);

    src_index[0] = *(u32 *)(src_state + 0x00);
    src_index[1] = *(u32 *)(src_state + 0x14);
    src_index[2] = *(u32 *)(src_state + 0x28);

    src_limit[0] = *(u32 *)(src_state + 0x08);
    src_limit[1] = *(u32 *)(src_state + 0x1C);
    src_limit[2] = *(u32 *)(src_state + 0x30);

    dst_index[0] = *(u32 *)(dst_state + 0x00);
    dst_index[1] = *(u32 *)(dst_state + 0x14);
    dst_index[2] = *(u32 *)(dst_state + 0x28);

    dst_limit[0] = *(u32 *)(dst_state + 0x08);
    dst_limit[1] = *(u32 *)(dst_state + 0x1C);
    dst_limit[2] = *(u32 *)(dst_state + 0x30);

    src_value[0] = *(f32 *)(src_state + 0x10);
    src_value[1] = *(f32 *)(src_state + 0x24);
    src_value[2] = *(f32 *)(src_state + 0x38);

    dst_value[0] = *(f32 *)(dst_state + 0x10);
    dst_value[1] = *(f32 *)(dst_state + 0x24);
    dst_value[2] = *(f32 *)(dst_state + 0x38);

    src_limit[0] = *(u32 *)(src_state + 0x08);
    src_limit[1] = *(u32 *)(src_state + 0x1C);
    src_limit[2] = *(u32 *)(src_state + 0x30);

    dst_limit[0] = *(u32 *)(dst_state + 0x08);
    dst_limit[1] = *(u32 *)(dst_state + 0x1C);
    dst_limit[2] = *(u32 *)(dst_state + 0x30);

    phase = (f32)*arg0;
    previous = phase;

    /*
     * The original has one pass when count is zero and two passes
     * when count is nonzero.
     */
    for (pass = 0; pass < (count != 0 ? 2 : 1); pass++) {
        if (count != 0) {
            ring_start = *(u32 *)(arg1 + 0x1AC);
            ring_pos = *(u32 *)(arg1 + 0x1B8);
            ring_length = (count - 1) * 4;

            ring_pos += 4;
            previous = *(f32 *)(ring_pos - 4);

            *(f32 *)(ring_pos - 4) = phase;

            if (ring_pos == ring_start + ring_length) {
                ring_pos = ring_start;
            }

            *(u32 *)(arg1 + 0x1B8) = ring_pos;
        }

        for (i = 0; i < 0x9F; i++) {
            f32 mixed;
            f32 value;

            value = channel_coeff[0] * src_value[0] + previous;
            *(f32 *)(src_buffer[0] + src_index[0]) = value;
            src_index[0] += 4;

            value = channel_coeff[1] * src_value[1] + previous;
            *(f32 *)(src_buffer[1] + src_index[1]) = value;
            src_index[1] += 4;

            src_value[0] = *(f32 *)(src_buffer[0] + src_index[0]);
            src_index[0] += 4;

            src_value[1] = *(f32 *)(src_buffer[1] + src_index[1]);
            src_index[1] += 4;

            if (src_index[0] == src_limit[0]) {
                src_index[0] = 0;
            }
            if (src_index[1] == src_limit[1]) {
                src_index[1] = 0;
            }

            mixed = src_value[0] + src_value[1];

            value = channel_coeff[2] * src_value[2] + previous;
            *(f32 *)(src_buffer[2] + src_index[2]) = value;
            src_index[2] += 4;

            src_value[2] = *(f32 *)(src_buffer[2] + src_index[2]);
            src_index[2] += 4;

            if (src_index[2] == src_limit[2]) {
                src_index[2] = 0;
            }

            mixed += src_value[2];

            value = coeff * dst_value[0] + mixed;
            *(f32 *)(dst_buffer[0] + dst_index[0]) = value;
            dst_index[0] += 4;

            dst_value[0] = *(f32 *)(dst_buffer[0] + dst_index[0]);
            dst_index[0] += 4;

            if (dst_index[0] == dst_limit[0]) {
                dst_index[0] = 0;
            }

            value = coeff * dst_value[1] + (mixed - coeff * value);
            *(f32 *)(dst_buffer[1] + dst_index[1]) = value;
            dst_index[1] += 4;

            dst_value[1] = *(f32 *)(dst_buffer[1] + dst_index[1]);
            dst_index[1] += 4;

            if (dst_index[1] == dst_limit[1]) {
                dst_index[1] = 0;
            }

            value = coeff * dst_value[2] + (mixed - coeff * value);
            *(f32 *)(dst_buffer[2] + dst_index[2]) = value;
            dst_index[2] += 4;

            dst_value[2] = *(f32 *)(dst_buffer[2] + dst_index[2]);
            dst_index[2] += 4;

            if (dst_index[2] == dst_limit[2]) {
                dst_index[2] = 0;
            }

            feedback = (feedback - coeff * value) * scale;
            feedback += *(f32 *)(arg1 + 0x1A0) * src_value[0];

            src_value[0] = feedback;

            output = (s32)(feedback + phase * lbl_8036C3E4);
            *arg0++ = output;

            phase -= (f32)lbl_8036C3D8;
            previous = phase;
        }
    }

    *(u32 *)(src_state + 0x00) = src_index[0];
    *(u32 *)(src_state + 0x04) = src_index[0];
    *(u32 *)(src_state + 0x14) = src_index[1];
    *(u32 *)(src_state + 0x18) = src_index[1];
    *(u32 *)(src_state + 0x28) = src_index[2];
    *(u32 *)(src_state + 0x2C) = src_index[2];

    *(f32 *)(src_state + 0x10) = src_value[0];
    *(f32 *)(src_state + 0x24) = src_value[1];
    *(f32 *)(src_state + 0x38) = src_value[2];

    *(u32 *)(dst_state + 0x00) = dst_index[0];
    *(u32 *)(dst_state + 0x04) = dst_index[0];
    *(u32 *)(dst_state + 0x14) = dst_index[1];
    *(u32 *)(dst_state + 0x18) = dst_index[1];
    *(u32 *)(dst_state + 0x28) = dst_index[2];
    *(u32 *)(dst_state + 0x2C) = dst_index[2];

    *(f32 *)(dst_state + 0x10) = dst_value[0];
    *(f32 *)(dst_state + 0x24) = dst_value[1];
    *(f32 *)(dst_state + 0x38) = dst_value[2];

    *(f32 *)(arg1 + 0x190 + channel * 4) = src_value[0];
}

void fn_802648CC(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    void fn_8026423C(s32, s32, f32, f32);
    void fn_802643C0(s32, void *, s32);
    extern f32 lbl_8036C3A8;
    extern f32 lbl_8036C3AC;
    extern f32 lbl_8036C3E8;
    f32 temp_f1;
    f32 temp_f2;
    u8 i;

    for (i = 0; i < 3; i++) {
        switch (i) {
        case 0:
            if (lbl_8036C3A8 != *(f32 *)((char *)arg3 + 0x1A8)) {
                temp_f2 = *(f32 *)((char *)arg3 + 0x1A8);
                temp_f1 = lbl_8036C3E8 * temp_f2;
                fn_8026423C(arg0, arg1, temp_f1, lbl_8036C3AC - temp_f1);
            }
            fn_802643C0(arg0, arg3, 0);
            break;
        case 1:
            fn_802643C0(arg1, arg3, 1);
            break;
        case 2:
            fn_802643C0(arg2, arg3, 2);
            break;
        }
    }
}

s32 fn_802649AC(void *arg0)
{
    extern void fn_80264BA4(void *arg0);
    extern void *fn_802637A4(s32 arg0);

    u8 *state;
    u32 value;
    u32 multiplier;
    u32 i;
    u32 *buffer0;
    u32 *buffer1;
    u32 *buffer2;

    state = (u8 *)arg0;

    fn_80264BA4(arg0);

    multiplier = 0x99999999;
    value = 0x51EB851F;

    *(u32 *)(state + 0x00) =
        (u32)(((u64)multiplier * ((*(u32 *)(state + 0x3C) - 5) * 32 + 0x9F)) >> 39);
    *(u32 *)(state + 0x0C) = 0;

    *(u32 *)(state + 0x18) =
        (u32)(((u64)value * (*(u32 *)(state + 0x48) << 7)) >> 37);

    *(u32 *)(state + 0x24) =
        (u32)(((u64)value * (*(u32 *)(state + 0x54) << 7)) >> 37);

    *(u32 *)(state + 0x04) =
        (u32)(((u64)multiplier * ((*(u32 *)(state + 0x40) - 5) * 32 + 0x9F)) >> 39);
    *(u32 *)(state + 0x10) = 0;

    *(u32 *)(state + 0x1C) =
        (u32)(((u64)value * (*(u32 *)(state + 0x4C) << 7)) >> 37);

    *(u32 *)(state + 0x28) =
        (u32)(((u64)value * (*(u32 *)(state + 0x58) << 7)) >> 37);

    *(u32 *)(state + 0x08) =
        (u32)(((u64)multiplier * ((*(u32 *)(state + 0x44) - 5) * 32 + 0x9F)) >> 39);
    *(u32 *)(state + 0x14) = 0;

    *(u32 *)(state + 0x20) =
        (u32)(((u64)value * (*(u32 *)(state + 0x50) << 7)) >> 37);

    *(u32 *)(state + 0x2C) =
        (u32)(((u64)value * (*(u32 *)(state + 0x5C) << 7)) >> 37);

    buffer0 = fn_802637A4(*(u32 *)(state + 0x00) * 0x280);
    *(u32 **)(state + 0x30) = buffer0;

    buffer1 = fn_802637A4(*(u32 *)(state + 0x04) * 0x280);
    *(u32 **)(state + 0x34) = buffer1;

    buffer2 = fn_802637A4(*(u32 *)(state + 0x08) * 0x280);
    *(u32 **)(state + 0x38) = buffer2;

    for (i = 0; i < *(u32 *)(state + 0x00) * 0xA0; i++) {
        buffer0[i] = 0;
    }

    for (i = 0; i < *(u32 *)(state + 0x04) * 0xA0; i++) {
        buffer1[i] = 0;
    }

    for (i = 0; i < *(u32 *)(state + 0x08) * 0xA0; i++) {
        buffer2[i] = 0;
    }

    return 1;
}

void fn_80264B7C(void *arg0) {
    M2C_UNK fn_802649AC();
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    fn_802649AC();
}

s32 fn_80264BA4(void *arg0) {
    void fn_80263800(void *);
    void *p;

    p = *(void **)((u8 *)arg0 + 0x30);
    if (p != NULL) {
        fn_80263800(p);
    }
    fn_80263800(*(void **)((u8 *)arg0 + 0x34));
    fn_80263800(*(void **)((u8 *)arg0 + 0x38));
    return 1;
}

f32 fn_80264BF0(void *arg0) {
    s32 temp_r10;
    s32 var_ctr;
    s32 var_r5;
    u32 var_r4;

    var_r4 = M2C_FIELD(arg0, u32 *, 0xC);
    var_r5 = M2C_FIELD(arg0, s32 *, 0x10);
    var_ctr = 0xA0;
loop_1:
    temp_r10 = ((var_r4 << 7) & 0x780) | ((var_r4 >> 0x19U) & 0x70);
    var_r4 += M2C_FIELD(arg0, s32 *, 0x14);
    M2C_ERROR(/* unknown instruction: mcrxr $cr0 */);
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        M2C_ERROR(/* unknown instruction: stfiwx $f10, $r26, $r30 */);
        var_ctr -= 1;
        if (var_ctr == 0) {

        } else {
            goto loop_1;
        }
    } else {
        var_r5 += 1;
        if (var_r5 == (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
            var_r5 = M2C_FIELD(arg0, s32 *, 0x20);
        }
        var_ctr -= 1;
        if (var_ctr != 0) {
            M2C_ERROR(/* unknown instruction: stfiwx $f10, $r26, $r30 */);
            goto loop_1;
        }
        M2C_ERROR(/* unknown instruction: stfiwx $f10, $r26, $r30 */);
    }
    M2C_ERROR(/* unknown instruction: stfiwx $f2, $zero, $r10 */);
    M2C_ERROR(/* unknown instruction: stfiwx $f3, $zero, $r10 */);
    M2C_FIELD(arg0, u32 *, 0xC) = var_r4;
    M2C_FIELD(arg0, s32 *, 0x10) = var_r5;
    return M2C_ERROR(/* unknown instruction: stfiwx $f1, $zero, $r9 */);
}

f32 fn_80264D88(void *arg0) {
    s32 temp_r10;
    s32 temp_r11;
    s32 temp_r7;
    s32 temp_r8;
    s32 var_ctr;
    s32 var_r5;
    u32 var_r4;

    var_r4 = M2C_FIELD(arg0, u32 *, 0xC);
    var_r5 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x20);
    var_ctr = 0xA0;
loop_1:
    temp_r10 = ((var_r4 << 7) & 0x780) | ((var_r4 >> 0x19U) & 0x70);
    var_r4 += M2C_FIELD(arg0, s32 *, 0x14);
    M2C_ERROR(/* unknown instruction: mcrxr $cr0 */);
    var_r5 += 1;
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        if (var_r5 == temp_r8) {
            var_r5 = temp_r7;
        }
        var_ctr -= 1;
        if (var_ctr != 0) {
            M2C_ERROR(/* unknown instruction: stfiwx $f10, $r26, $r30 */);
            goto loop_1;
        }
    } else {
        if (var_r5 == temp_r8) {
            var_r5 = temp_r7;
        }
        temp_r11 = var_r5 * 4;
        var_r5 += 1;
        if (var_r5 == temp_r8) {
            var_r5 = temp_r7;
        }
        var_ctr -= 1;
        if (var_ctr != 0) {
            M2C_ERROR(/* unknown instruction: stfiwx $f10, $r26, $r30 */);
            goto loop_1;
        }
    }
    M2C_ERROR(/* unknown instruction: stfiwx $f10, $r26, $r30 */);
    M2C_ERROR(/* unknown instruction: stfiwx $f2, $zero, $r10 */);
    M2C_ERROR(/* unknown instruction: stfiwx $f3, $zero, $r10 */);
    M2C_FIELD(arg0, u32 *, 0xC) = var_r4;
    M2C_FIELD(arg0, s32 *, 0x10) = var_r5;
    return M2C_ERROR(/* unknown instruction: stfiwx $f1, $zero, $r9 */);
}

void fn_80264F74(s32 arg0, void *arg1, u8 *arg2)
{
    u8 *state;
    u8 *source0;
    u8 *source1;
    u8 *source2;
    u8 *destination0;
    u8 *destination1;
    u8 *destination2;
    u32 index;
    u32 count;
    u32 i;
    s32 frame;
    s32 bufferIndex;
    u32 value;

    state = arg2;

    if ((arg0 & 0xFF) != 1) {
        return;
    }

    source0 = *(u8 **)arg1;
    source1 = *(u8 **)((u8 *)arg1 + 4);
    source2 = *(u8 **)((u8 *)arg1 + 8);

    index = state[0x24] + 1;
    count = (u32)((s32)index / 3);
    index -= count * 3;
    bufferIndex = (s32)index;

    destination0 = *(u8 **)(state + (index * 4));
    destination1 = *(u8 **)(state + (index * 4) + 0x0C);
    destination2 = *(u8 **)(state + (index * 4) + 0x18);

    for (i = 0; i < 0x14; i++) {
        u32 word;

        word = *(u32 *)(source0 + i * 4);
        *(u32 *)(destination0 + i * 4) = word;

        word = *(u32 *)(source1 + i * 4);
        *(u32 *)(destination1 + i * 4) = word;

        word = *(u32 *)(source2 + i * 4);
        *(u32 *)(destination2 + i * 4) = word;
    }

    value = *(u32 *)(state + 0x60);
    *(u32 *)(state + 0x84) = ((s32)value >> 16) + 1;
    *(u32 *)(state + 0x80) = value << 16;

    value = *(u32 *)(state + 0x64) - 1;
    *(u32 *)(state + 0x64) = value;

    if (value == 0) {
        *(u32 *)(state + 0x64) = *(u32 *)(state + 0x68);
        *(u32 *)(state + 0x60) = -(s32)*(u32 *)(state + 0x60);
    }

    frame = 0;

    *(u32 *)(state + 0x7C) = *(u32 *)(state + 0x5C);
    *(u32 *)(state + 0x78) = *(u32 *)(state + 0x58);

    for (frame = 0; frame < 3; frame++) {
        if (frame == 0) {
            *(u32 *)(state + 0x70) = *(u32 *)state;
            *(u32 *)(state + 0x6C) = *(u32 *)arg1;
            *(u32 *)(state + 0x74) = (u32)(state + 0x28);
        } else if (frame == 1) {
            *(u32 *)(state + 0x70) = *(u32 *)(state + 0x0C);
            *(u32 *)(state + 0x6C) = *(u32 *)((u8 *)arg1 + 4);
            *(u32 *)(state + 0x74) = (u32)(state + 0x38);
        } else {
            *(u32 *)(state + 0x70) = *(u32 *)(state + 0x18);
            *(u32 *)(state + 0x6C) = *(u32 *)((u8 *)arg1 + 8);
            *(u32 *)(state + 0x74) = (u32)(state + 0x48);
        }

        if (*(s32 *)(state + 0x84) == 0) {
            fn_80264BF0(state + 0x6C);
        } else {
            fn_80264D88(state + 0x6C);
        }
    }

    value = *(u32 *)(state + 0x7C);
    value -= ((value * 0x8889U) >> 24) * 0x1E0;
    *(u32 *)(state + 0x5C) = value;

    *(u32 *)(state + 0x58) = *(u32 *)(state + 0x78);
    state[0x24] = (u8)bufferIndex;
}

extern s32 lbl_803631FC;
extern s32 lbl_80363200;
s32 fn_80265230(s32 arg0)
{
    if (arg0 == 0) {
        return 0;
    }

    if (arg0 < 0) {
        return lbl_803631FC;
    }
    
    if (arg0 >= lbl_80363200) {
        return lbl_80363200 - 1;
    }
    
    return arg0;
}

void fn_80265430(s32 arg0) {
    extern u16 lbl_803669A0[1024];
    u8 *temp_r3;

    temp_r3 = (u8 *) &lbl_803669A0 + (arg0 << 8);
    if ((s32) *(s32 *) (temp_r3 + 0x20) == 0) {
        if (*((u8 *) temp_r3 + 5) != 0 || *((u8 *) temp_r3 + 6) != 4) {
            *(s32 *) (temp_r3 + 0x20) = 1;
            return;
        }
        *(u8 *) *(u32 *) (temp_r3 + 0x14) = *(u8 *) (temp_r3 + 7) & 0x3A;
    }
}

#pragma scheduling off
BOOL fn_8026572C(void) {
    extern s32 lbl_80368B2C;
    lbl_80368B2C = 1;
    return 1;
}
#pragma scheduling on
s32 fn_8026573C(s32 arg0, u8 *arg1)
{
    extern u8 lbl_803669A0[];
    extern u32 OSDisableInterrupts(void);
    extern void OSRestoreInterrupts(u32);
    extern u64 OSGetTime(void);

    u8 *entry;
    u8 *queue;
    u32 interruptState;
    u32 value;
    u32 elapsedLow;
    u32 elapsedHigh;
    u32 rate;
    u32 result;
    s32 status;

    entry = lbl_803669A0 + (arg0 << 8);
    queue = entry + 0x40;

    interruptState = OSDisableInterrupts();

    status = 2;

    if (*(u32 *)(queue + 0x14) != 0) {
        value = *(u32 *)(queue + 0x34) * 0x64;
        rate = *(u32 *)(queue + 0x64);
        result = value / rate;

        if ((*(u32 *)(queue + 0x2C) |
             *(u32 *)(queue + 0x28)) != 0) {
            OSGetTime();

            elapsedLow = 0;
            elapsedHigh = 0;

            result = (u32)(OSGetTime() -
                           *(u64 *)(queue + 0x28));

            if (result != 0) {
                result = 0x64;
            }
        }

        result &= 0xFF;

        if (result >= 0x64) {
            result = 0x64;
        }

        if (arg1 != 0) {
            *arg1 = (u8)result;
        }

        status = 0;
    } else if (*(u32 *)(entry + 0x1C) == 0) {
        status = 0;
    }

    OSRestoreInterrupts(interruptState);

    return status;
}

void fn_802658B0(void)
{
    lbl_8034C110[0] = 0;
    lbl_8034C110[1] = 0;
}

s32 fn_802659EC(s32 arg0) {
    if (arg0 < 0) {
        return -1;
    }
    if (arg0 == 0) {
        return 0;
    }
    return 1;
}

void fn_80265A94(s32 arg0, s32 arg1)
{
    extern u8 lbl_803669A0[];
    extern u8 lbl_802A4DE8[];
    extern int fn_80265544(s32, void *, void *);
    extern void fn_80265B64(s32, s32);

    u8 *entry;
    u8 *queue;
    s32 result;
    void (*callback)(s32, s32);

    entry = lbl_803669A0 + (arg0 << 8);
    queue = entry + 0x40;
    result = arg1;

    if (arg1 == 0) {
        if (*(u8 *)*(u32 *)(queue + 0x10) != lbl_802A4DE8[0x25]) {
            result = 3;
        }
    }

    if (result == 0) {
        result = fn_80265544(
            arg0,
            *(void **)(queue + 0x10),
            fn_80265B64
        );
    }

    if (result != 0) {
        *(u32 *)(queue + 0x2C) = 0;
        *(u32 *)(queue + 0x28) = 0;

        callback = *(void (**)(s32, s32))(queue + 0x14);

        if (callback != 0) {
            *(u32 *)(queue + 0x14) = 0;
            callback(arg0, result);
        }
    }

    *(u32 *)(entry + 0x20) = result;
}

void fn_80265B64(s32 arg0, s32 arg1) {
    // Placeholder for the full function
}

s32 fn_80265C34(s32 arg0, s32 arg1) {
    s32 *var_r3;
    s32 temp_r3;
    s32 var_r4;
    s32 var_r5;
    
    temp_r3 = arg0 + 1;
    if (arg0 != -1) {
        var_r3 = (s32 *) fn_8026367C();
        if (var_r3 == NULL) {
            return 0;
        }
        temp_r3 = arg0 & 0xFF;
        var_r4 = *(var_r3 + 0x18/4) >> 8;
        var_r5 = arg1 - var_r4;
        if (var_r5 >= 0) {
            if ((u32) var_r5 < (u32) *(var_r3 + 0x1C/4)) {
                return 1;
            }
        }
    }
    return temp_r3;
}

void fn_80265CB4(s32 arg0, s32 arg1)
{
    extern u8 lbl_803669A0[];
    extern u8 lbl_802A4DE8[];
    extern u64 OSGetTime(void);
    extern int fn_80266904(s32, void *, void *, void *);
    extern void fn_80265E90(s32, s32);

    u8 *entry;
    u8 *queue;
    u8 *config;
    u32 value;
    u32 threshold;
    s32 result;
    void (*callback)(s32, s32);

    entry = lbl_803669A0 + (arg0 << 8);
    queue = entry + 0x40;
    config = lbl_802A4DE8;
    result = arg1;

    if (arg1 == 0) {
        value = *(u32 *)((u8 *)*(u32 *)(entry + 0xF8) + 0x20);
        *(u32 *)(queue + 0x58) = value;

        value = *(u32 *)((u8 *)*(u32 *)(entry + 0xF8) + 0x24);
        *(u32 *)(queue + 0x5C) = value;

        if (queue[0x1B] != 0 &&
            queue[0x1A] != 0 &&
            (value = *(u32 *)(queue + 0x58),
             (value & ((u32)config[0x05] << 9)) != 0) &&
            queue[0x19] != 0 &&
            (value >> 15) != 0 &&
            queue[0x18] != 0) {
            result = 3;
            goto done;
        }

        value = (*(u32 *)(queue + 0x0C) + config[0x24])
              & ~(u32)config[0x24];

        *(u32 *)(queue + 0x20) = value;

        threshold = (u32)config[0x14] << config[0x21];

        if (value < threshold) {
            *(u32 *)(queue + 0x20) = threshold;
            *(u32 *)(queue + 0x64) = threshold;
            value = threshold - threshold;
            *(u32 *)(queue + 0x20) = value;
            *(u32 *)(queue + 0x20) =
                (u32)((s32)value >> config[0x20]);
        }

        value = *(u32 *)(queue + 0x5C);

        queue[0x1C] = (u8)value;
        queue[0x1D] = (u8)((s32)value >> 8);
        queue[0x1E] = (u8)((s32)value >> 16);
        queue[0x1F] = (u8)((s32)value >> 24);

        *(u32 *)(queue + 0x38) =
            ((u32)config[0x26] + 1) << config[0x22];

        *(u32 *)(queue + 0x34) = config[0x08];

        *(u64 *)(queue + 0x28) = OSGetTime();

        *(u32 *)(queue + 0x30) = 1;

        result = fn_80266904(
            arg0,
            queue + 0x1C,
            *(void **)(queue + 0x10),
            fn_80265E90
        );
    }

done:
    if (result != 0) {
        *(u32 *)(queue + 0x2C) = 0;
        *(u32 *)(queue + 0x28) = 0;

        callback = *(void (**)(s32, s32))(queue + 0x14);

        if (callback != 0) {
            *(u32 *)(queue + 0x14) = 0;
            callback(arg0, result);
        }
    }

    *(u32 *)(entry + 0x20) = result;
}

/* write fn_80265E90 here */void fn_80265E90(s32 arg0, s32 arg1)
{
    extern u8 lbl_803669A0[];
    extern u8 lbl_802A4DE8[];
    extern u32 OSGetTick(void);
    extern void fn_80266328(s32 channel, s32 arg1);
    extern int fn_80266904(s32, void *, void *, void *);
    extern int fn_802667D4(s32, void *, void *, void *);

    u8 *entry;
    u8 *queue;
    u8 *config;
    u32 value;
    u32 accumulator;
    u32 crc;
    u32 polynomial;
    u32 mask;
    u32 state;
    u32 position;
    u32 count;
    u32 shift;
    u32 temp;
    u32 callbackValue;
    s32 result;
    s32 status;
    void (*callback)(s32, s32);

    entry = lbl_803669A0 + (arg0 << 8);
    queue = entry + 0x40;
    config = lbl_802A4DE8;
    result = arg1;

    if (arg1 != 0) {
        goto done;
    }

    if (*(u32 *)(queue + 0x30) != 0) {
        *(u32 *)(queue + 0x30) = 0;
    } else {
        status = *(u8 *)(*(u8 **)(queue + 0x10));

        if ((status & config[0x14]) != 0) {
            if (((status & config[0x2A]) >> config[0x21]) !=
                ((*(u32 *)(queue + 0x34) & config[0x21]) >> config[0x1F])) {
                result = 3;
                goto done;
            }

            *(u32 *)(queue + 0x34) =
                *(u32 *)(queue + 0x34) + config[0x17] - config[0x19];
        }
    }

    position = *(u32 *)(queue + 0x34);
    count = *(u32 *)(queue + 0x64);

    if ((s32)position > (s32)count) {
        goto retry;
    }

    accumulator = 0;

    if (position < count) {
        state = config[0x1D];
        *(u32 *)(queue + 0x20) = state;

        while (state < config[0x21]) {
            if (*(u32 *)(queue + 0x0C) != 0) {
                u8 *input;

                input = (u8 *)(*(u32 *)(queue + 0x08));
                *(u32 *)(queue + 0x08) += 1;

                shift = state * config[0x25];
                value = *input;

                *(u32 *)(queue + 0x0C) -= 1;
                accumulator |= value << shift;
            }

            state++;
            *(u32 *)(queue + 0x20) = state;
        }

        if (position == config[0x26]) {
            *(u32 *)(queue + 0x60) = accumulator;
        } else if (position == config[0x27]) {
            accumulator = arg0 << config[0x25];
        }

        if (position >= config[0x02]) {
            polynomial =
                (config[0x26] << 8) +
                config[0x28] +
                config[0x2B] -
                (config[0x2B] << 4) -
                config[0x23];

            crc = *(u32 *)(queue + 0x38);
            value = accumulator;
            count = config[0x14];

            while (count > config[0x1E]) {
                if (((value ^ crc) & 1) != 0) {
                    crc = (crc >> 1) ^ polynomial;
                } else {
                    crc >>= 1;
                }

                value >>= 1;
                count--;
            }

            *(u32 *)(queue + 0x38) = crc;

            if (position == config[0x28] + 0x100) {
                *(u32 *)(queue + 0x3C) = accumulator;
            } else if (position == config[0x01] + 0x100) {
                state = config[0x07];
                *(u32 *)(queue + 0x20) = state;
                *(u32 *)(queue + 0x3C + (state * 4)) = accumulator;
            }
        }
    }

    position = *(u32 *)(queue + 0x34);
    accumulator = *(u32 *)(queue + 0x38) | (position << 16);

    if (position > config[0x2B]) {
        mask = config[0x15] |
               (config[0x18] << config[0x25]) |
               (config[0x18] << config[0x2C]) |
               (config[0x17] << config[0x2A]);

        value = *(u32 *)(queue + 0x58) * mask;
        value -= config[0x1B] - config[0x1A];
        *(u32 *)(queue + 0x58) = value;

        temp = position + (config[0x0B] << 20);

        accumulator ^= value;
        accumulator ^= (u32)(-temp);

        value = (config[0x0B] << 24) |
                (config[0x13] << 16) |
                (config[0x12] << 8) |
                config[0x0B];

        accumulator ^= value;

        *(u8 *)(queue + 0x1F) = accumulator >> config[0x00];
        *(u8 *)(queue + 0x1C) = accumulator >> config[0x1E];
        *(u8 *)(queue + 0x1D) = accumulator >> config[0x29];
        *(u8 *)(queue + 0x1E) = accumulator >> config[0x2A];
    }

    if (position == config[0x01] + config[0x01]) {
        *(u32 *)(queue + 0x44) = accumulator;
    }

    state = *(u32 *)(queue + 0x20);

    if (state < config[0x21]) {
        *(u32 *)(queue + 0x3C + ((state + 2) * 4)) = accumulator;

        value = *(u32 *)(queue + 0x3C + ((state + 1) * 4));
        temp = *(u32 *)(queue + 0x3C + ((4 - state) * 4));
        *(u32 *)(queue + 0x3C + ((5 - state) * 4)) = value * temp;

        value = *(u32 *)(queue + 0x3C + ((state - 1) * 4));
        temp = *(u32 *)(queue + 0x3C + ((4 - state) * 4));
        *(u32 *)(queue + 0x3C + ((7 - state) * 4)) = value * temp;
    }

    result = fn_80266904(
        arg0,
        queue + 0x1C,
        *(void **)(queue + 0x10),
        fn_80265E90
    );

    goto done;

retry:
    *(u32 *)(queue + 0x24) = OSGetTick();

    result = fn_802667D4(
        arg0,
        queue + 0x18,
        *(void **)(queue + 0x10),
        fn_80266328
    );

done:
    if (result != 0) {
        *(u32 *)(queue + 0x2C) = 0;
        *(u32 *)(queue + 0x28) = 0;

        callback = *(void (**)(s32, s32))(queue + 0x14);

        if (callback != 0) {
            *(u32 *)(queue + 0x14) = 0;
            callback(arg0, result);
        }
    }

    *(u32 *)(entry + 0x20) = result;
}

void fn_80266328(s32 arg0, s32 arg1)
{
    extern u8 lbl_803669A0[];
    extern u8 lbl_802A4DE8[];
    extern u32 OSGetTick(void);
    extern s32 fn_80265544(s32 channel, void *input, void *callback);
    extern void fn_8026649C(s32 channel, s32 arg1);

    u8 *entry;
    u8 *queue;
    u8 *table;
    u32 value;
    u32 checksum;
    s32 result;
    s32 count;
    void (*callback)(s32, s32);

    entry = lbl_803669A0 + (arg0 << 8);
    queue = entry + 0x40;

    if (arg1 != 0) {
        return;
    }

    *(u32 *)(queue + 0x20) = 0x21;
    table = lbl_802A4DE8;

    value = *(u32 *)(queue + 0x60);
    checksum = ((u32)queue[0x18] ^ (value >> 24))
             | ((u32)queue[0x19] ^ (value >> 16))
             | ((u32)queue[0x1A] ^ (value >> 8))
             | ((u32)queue[0x1B] ^ value);

    if ((checksum << 24) != 0) {
        count = *(s32 *)(queue + 0x20) + 1;
        *(s32 *)(queue + 0x20) = count;

        if (count < 0x24) {
            return;
        }

        result = 3;
    } else {
        *(u32 *)(queue + 0x24) = OSGetTick();

        result = fn_80265544(
            arg0,
            *(void **)(queue + 0x10),
            fn_8026649C
        );
    }

    if (result != 0) {
        *(u32 *)(queue + 0x2C) = 0;
        *(u32 *)(queue + 0x28) = 0;

        callback = *(void (**)(s32, s32))(queue + 0x14);
        if (callback != 0) {
            *(u32 *)(queue + 0x14) = 0;
            callback(arg0, result);
        }
    }

    *(s32 *)(entry + 0x20) = result;
}

#include "common.h"
extern f32 lbl_8036C3F0;
extern u8 lbl_802A4590[];
#include "global.h"
#include "ef.h"

extern s32 lbl_80368AA0;
extern u16 lbl_8029FB7C[];
extern s32 lbl_80368AA0;
extern u8 lbl_80368AD0;
#include "global.h"

extern s32 lbl_80368AF8;
extern u16 lbl_80368A0C;
extern u16 lbl_80368AFC;
extern u16 lbl_8034F6B8[];
extern u16 lbl_803596F0[16];
extern u32* lbl_80368950;
extern u8* lbl_803688E4;
extern u16* lbl_803688EC;
#include "common.h"

typedef struct {
    s32 field_0x0;
    s32 field_0x4;
    s32 field_0x8;
    s16 field_0xC;
    s16 field_0xE;
    s32 field_0x10;
    s32 field_0x14;
    s32 field_0x18;
    s32 field_0x1C;
} Struct_80246288;

extern u16 lbl_80366F28;
extern char lbl_80282AE8[];
extern s32 lbl_80368960;
extern s32 lbl_80368964;
