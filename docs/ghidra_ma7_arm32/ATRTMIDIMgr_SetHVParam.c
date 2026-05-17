/* ATRTMIDIMgr_SetHVParam @ 000dc538 66B */


/* YAMAHA::ATRTMIDIMgr_SetHVParam(_MASMW_SETHVPARAM*) */

undefined4 YAMAHA::ATRTMIDIMgr_SetHVParam(_MASMW_SETHVPARAM *param_1)

{
  int iVar1;
  void *__dest;
  size_t __size;
  size_t sVar2;
  
  if ((*(int *)param_1 != 0) && (__size = *(size_t *)(param_1 + 4), __size != 0)) {
    iVar1 = *(int *)(DAT_000dc57c + 0xdc54a);
    if (*(int *)(&UNK_001648f8 + iVar1) == 0) {
      __dest = malloc(__size);
      *(void **)(&UNK_001648f8 + iVar1) = __dest;
      sVar2 = __size;
      if (__dest == (void *)0x0) {
        sVar2 = 0;
      }
      *(size_t *)(&UNK_001648fc + iVar1) = sVar2;
      memcpy(__dest,*(void **)param_1,__size);
      return 0;
    }
  }
  return 0xffffffff;
}

