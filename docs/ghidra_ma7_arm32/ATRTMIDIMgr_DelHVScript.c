/* ATRTMIDIMgr_DelHVScript @ 000dc500 50B */


/* YAMAHA::ATRTMIDIMgr_DelHVScript(unsigned char) */

undefined4 YAMAHA::ATRTMIDIMgr_DelHVScript(uchar param_1)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0x40) {
    iVar2 = param_1 + 0x2c8df;
    iVar1 = *(int *)(DAT_000dc534 + 0xdc512);
    __ptr = *(void **)(iVar1 + iVar2 * 8);
    if (__ptr != (void *)0x0) {
      free(__ptr);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 0;
      *(undefined4 *)(iVar1 + iVar2 * 8 + 4) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}

