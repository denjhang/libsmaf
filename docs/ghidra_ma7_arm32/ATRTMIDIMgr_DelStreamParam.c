/* ATRTMIDIMgr_DelStreamParam @ 000dc2d0 72B */


/* YAMAHA::ATRTMIDIMgr_DelStreamParam(unsigned char) */

undefined4 YAMAHA::ATRTMIDIMgr_DelStreamParam(uchar param_1)

{
  int iVar1;
  
  if ((byte)(param_1 - 1) < 0x20) {
    iVar1 = *(int *)(DAT_000dc318 + 0xdc2e4) + (uint)(byte)(param_1 - 1) * 0x14;
    if (*(void **)(&UNK_00164420 + iVar1) != (void *)0x0) {
      free(*(void **)(&UNK_00164420 + iVar1));
      *(undefined4 *)(&UNK_00164420 + iVar1) = 0;
      *(undefined4 *)(&UNK_00164424 + iVar1) = 0;
      *(undefined4 *)(&UNK_00164428 + iVar1) = 0;
      *(undefined4 *)(&UNK_0016442c + iVar1) = 0;
      (&UNK_00164430)[iVar1] = 0x40;
      return 0;
    }
  }
  return 0xffffffff;
}

