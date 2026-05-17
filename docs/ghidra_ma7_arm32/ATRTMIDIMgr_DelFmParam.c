/* ATRTMIDIMgr_DelFmParam @ 000dc234 66B */


/* YAMAHA::ATRTMIDIMgr_DelFmParam(unsigned char) */

undefined4 YAMAHA::ATRTMIDIMgr_DelFmParam(uchar param_1)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  if (param_1 == '\x17') {
    iVar2 = 1;
  }
  else if (param_1 == '\x1f') {
    iVar2 = 2;
  }
  else {
    if (param_1 != '\x0f') {
      return 0xffffffff;
    }
    iVar2 = 0;
  }
  iVar2 = iVar2 + 0x81;
  iVar1 = *(int *)(DAT_000dc278 + 0xdc256);
  __ptr = *(void **)(iVar1 + iVar2 * 8);
  if (__ptr == (void *)0x0) {
    return 0xffffffff;
  }
  free(__ptr);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 0;
  *(undefined4 *)(iVar1 + iVar2 * 8 + 4) = 0;
  return 0;
}

