/* ATRTMIDIMgr_SetWaveParam @ 000dc144 74B */


/* YAMAHA::ATRTMIDIMgr_SetWaveParam(_MASMW_SETWAVEPARAM*) */

undefined4 YAMAHA::ATRTMIDIMgr_SetWaveParam(_MASMW_SETWAVEPARAM *param_1)

{
  void *pvVar1;
  size_t sVar2;
  int iVar3;
  size_t __size;
  int iVar4;
  
  __size = *(size_t *)(param_1 + 8);
  if ((-1 < (int)((uint)(byte)*param_1 << 0x18)) && (__size != 0)) {
    iVar4 = (byte)*param_1 + 1;
    iVar3 = *(int *)(DAT_000dc190 + 0xdc15a);
    if (*(int *)(iVar3 + iVar4 * 8) == 0) {
      pvVar1 = malloc(__size);
      *(void **)(iVar3 + iVar4 * 8) = pvVar1;
      sVar2 = __size;
      if (pvVar1 == (void *)0x0) {
        sVar2 = 0;
      }
      *(size_t *)(iVar3 + iVar4 * 8 + 4) = sVar2;
      memcpy(*(void **)(iVar3 + iVar4 * 8),*(void **)(param_1 + 4),__size);
      return 1;
    }
  }
  return 0xffffffff;
}

