/* ATRTMIDIMgr_SetStreamParam @ 000dc27c 80B */


/* YAMAHA::ATRTMIDIMgr_SetStreamParam(_MASMW_SETSTREAMAUDIO*) */

undefined4 YAMAHA::ATRTMIDIMgr_SetStreamParam(_MASMW_SETSTREAMAUDIO *param_1)

{
  void *__dest;
  uint uVar1;
  size_t __size;
  size_t sVar2;
  int iVar3;
  
  __size = *(size_t *)(param_1 + 0xc);
  uVar1 = (byte)*param_1 - 1 & 0xff;
  if (((uVar1 < 0x20) && (__size != 0)) &&
     (iVar3 = *(int *)(DAT_000dc2cc + 0xdc298) + uVar1 * 0x14, *(int *)(&UNK_00164420 + iVar3) == 0)
     ) {
    __dest = malloc(__size);
    *(void **)(&UNK_00164420 + iVar3) = __dest;
    sVar2 = __size;
    if (__dest == (void *)0x0) {
      sVar2 = 0;
    }
    *(size_t *)(&UNK_00164424 + iVar3) = sVar2;
    memcpy(__dest,*(void **)(param_1 + 8),__size);
    return 1;
  }
  return 0xffffffff;
}

