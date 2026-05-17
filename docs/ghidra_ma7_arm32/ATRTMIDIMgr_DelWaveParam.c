/* ATRTMIDIMgr_DelWaveParam @ 000dc194 42B */


/* YAMAHA::ATRTMIDIMgr_DelWaveParam(unsigned char) */

undefined4 YAMAHA::ATRTMIDIMgr_DelWaveParam(uchar param_1)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 1;
  iVar1 = *(int *)(DAT_000dc1c0 + 0xdc19e);
  __ptr = *(void **)(iVar1 + iVar2 * 8);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 0;
    *(undefined4 *)(iVar1 + iVar2 * 8 + 4) = 0;
    return 0;
  }
  return 0xffffffff;
}

