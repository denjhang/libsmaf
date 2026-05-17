/* ATRTMIDIMgr_SetFmParam @ 000dc1c4 106B */


/* YAMAHA::ATRTMIDIMgr_SetFmParam(_MASMW_SETFMPARAM*) */

undefined4 YAMAHA::ATRTMIDIMgr_SetFmParam(_MASMW_SETFMPARAM *param_1)

{
  _MASMW_SETFMPARAM _Var1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  _Var1 = *param_1;
  if (_Var1 == (_MASMW_SETFMPARAM)0x17) {
    iVar5 = 1;
  }
  else if (_Var1 == (_MASMW_SETFMPARAM)0x1f) {
    iVar5 = 2;
  }
  else {
    if (_Var1 != (_MASMW_SETFMPARAM)0xf) {
      return 0xffffffff;
    }
    iVar5 = 0;
  }
  iVar5 = iVar5 + 0x81;
  iVar4 = *(int *)(DAT_000dc230 + 0xdc1ea);
  if (*(int *)(iVar4 + iVar5 * 8) == 0) {
    pvVar2 = malloc(*(size_t *)(param_1 + 8));
    *(void **)(iVar4 + iVar5 * 8) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)(iVar4 + iVar5 * 8 + 4) = 0;
      return 0xffffffff;
    }
    iVar3 = *(int *)(param_1 + 8);
    *(int *)(iVar4 + iVar5 * 8 + 4) = iVar3;
    if (iVar3 != 0) {
      memcpy(*(void **)(iVar4 + iVar5 * 8),*(void **)(param_1 + 4),*(size_t *)(param_1 + 8));
      return 0;
    }
  }
  return 0xffffffff;
}

